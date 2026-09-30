//// FUNCTION FUN_004ca950 @ 004ca950 ////

int __fastcall FUN_004ca950(int param_1)

{
  return param_1 + 0x488;
}


//// FUNCTION FUN_004ca960 @ 004ca960 ////

undefined4 * __fastcall FUN_004ca960(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x164))();
  if (cVar1 != '\0') {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_00528040(param_1);
  return puVar2;
}


//// FUNCTION FUN_004ca990 @ 004ca990 ////

void __thiscall FUN_004ca990(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x590) = param_1;
  return;
}


//// FUNCTION FUN_004ca9f0 @ 004ca9f0 ////

undefined4 __fastcall FUN_004ca9f0(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_005281a0(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x55c) == '\0')) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_004caa40 @ 004caa40 ////

void __thiscall FUN_004caa40(void *this,float *param_1,float *param_2)

{
  if ((((*param_1 != *(float *)((int)this + 0x100)) || (param_1[1] != *(float *)((int)this + 0x104))
       ) || (param_1[2] != *(float *)((int)this + 0x108))) ||
     (*param_2 != *(float *)((int)this + 0xc4))) {
    if (*(char *)((int)this + 0x55c) != '\0') {
      (**(code **)(*(int *)this + 0x1ac))(param_1,param_2);
      return;
    }
    (**(code **)(*(int *)this + 0x148))();
    (**(code **)(*(int *)this + 0x1ac))(param_1,param_2);
    (**(code **)(*(int *)this + 0x144))();
  }
  return;
}


//// FUNCTION FUN_004cab60 @ 004cab60 ////

undefined4 __fastcall FUN_004cab60(int *param_1)

{
  char cVar1;
  
  cVar1 = FUN_005354b0((int)param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_004cabb0 @ 004cabb0 ////

int * __thiscall FUN_004cabb0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004cabf0 @ 004cabf0 ////

int * __thiscall FUN_004cabf0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004cac30 @ 004cac30 ////

void __fastcall FUN_004cac30(int param_1)

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


//// FUNCTION FUN_004caca0 @ 004caca0 ////

int * __thiscall FUN_004caca0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004cad40 @ 004cad40 ////

int * __thiscall FUN_004cad40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004caee0 @ 004caee0 ////

int __fastcall FUN_004caee0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
}


//// FUNCTION FUN_004cafa0 @ 004cafa0 ////

void __cdecl FUN_004cafa0(int param_1)

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


//// FUNCTION FUN_004cafc0 @ 004cafc0 ////

void __cdecl FUN_004cafc0(int *param_1)

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


//// FUNCTION FUN_004cb000 @ 004cb000 ////

void __thiscall FUN_004cb000(void *this,int *param_1)

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


//// FUNCTION FUN_004cb380 @ 004cb380 ////

void __cdecl FUN_004cb380(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x39);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return;
}


//// FUNCTION FUN_004cb3c0 @ 004cb3c0 ////

void __thiscall FUN_004cb3c0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x39) == '\0') {
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


//// FUNCTION FUN_004cb460 @ 004cb460 ////

void __fastcall FUN_004cb460(int *param_1)

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


//// FUNCTION FUN_004cb4c0 @ 004cb4c0 ////

void __fastcall FUN_004cb4c0(int *param_1)

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


//// FUNCTION FUN_004cb5d0 @ 004cb5d0 ////

void __cdecl FUN_004cb5d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x39);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x39);
  }
  return;
}


//// FUNCTION FUN_004cb600 @ 004cb600 ////

void __cdecl FUN_004cb600(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x51);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x51);
  }
  return;
}


//// FUNCTION FUN_004cb620 @ 004cb620 ////

void __cdecl FUN_004cb620(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x51);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x51);
  }
  return;
}


//// FUNCTION FUN_004cb640 @ 004cb640 ////

void __fastcall FUN_004cb640(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x39) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x39);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x39);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x39) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x39) == '\0');
    if (*(char *)((int)piVar4 + 0x39) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_004cb6d0 @ 004cb6d0 ////

void __fastcall FUN_004cb6d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x51) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x51) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x51);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x51);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x51);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x51);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_004cb8b0 @ 004cb8b0 ////

int * __thiscall FUN_004cb8b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return this;
}


//// FUNCTION FUN_004cb930 @ 004cb930 ////

undefined4 * __cdecl FUN_004cb930(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004cb9e0 @ 004cb9e0 ////

void __fastcall FUN_004cb9e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_004cba40 @ 004cba40 ////

undefined4 * __thiscall FUN_004cba40(void *this,byte param_1)

{
  FUN_004cb9e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004cba70 @ 004cba70 ////

undefined4 __fastcall FUN_004cba70(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5a8);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x1c0) == 3);
  }
  return 0;
}


//// FUNCTION FUN_004cba90 @ 004cba90 ////

undefined4 __fastcall FUN_004cba90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5a8);
}


//// FUNCTION FUN_004cbaa0 @ 004cbaa0 ////

void __fastcall FUN_004cbaa0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004cbab0 @ 004cbab0 ////

void __fastcall FUN_004cbab0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004cbc20 @ 004cbc20 ////

undefined4 __thiscall FUN_004cbc20(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    return *(undefined4 *)((int)this + (param_1 * 3 + 0xa5) * 8);
  }
  return 0;
}


//// FUNCTION FUN_004cbc40 @ 004cbc40 ////

void __thiscall FUN_004cbc40(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x564);
  return;
}


//// FUNCTION FUN_004cbcd0 @ 004cbcd0 ////

void __fastcall FUN_004cbcd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  void *this;
  undefined1 uVar3;
  
  FUN_0052ff90(param_1);
  if (*(char *)((int)param_1 + 0x55d) != '\0') {
    piVar1 = param_1 + 0x134;
    *(undefined1 *)(param_1 + 0x157) = 1;
    *(undefined1 *)((int)param_1 + 0x55d) = 0;
    if ((int *)param_1[0x135] != (int *)0x0) {
      *(int *)param_1[0x135] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = param_1[0x135];
    }
    *piVar1 = 0;
    param_1[0x135] = 0;
    if ((int *)param_1[0x139] != (int *)0x0) {
      *(int *)param_1[0x139] = param_1[0x138];
    }
    if (param_1[0x138] != 0) {
      *(int *)(param_1[0x138] + 4) = param_1[0x139];
    }
    param_1[0x138] = 0;
    param_1[0x139] = 0;
    param_1[0x135] = (int)&DAT_0104ad54;
    *piVar1 = (int)DAT_0104ad54;
    DAT_0104ad54[1] = (int)piVar1;
    DAT_0104ad54 = piVar1;
    *(undefined1 *)(param_1 + 0x19) = 0;
    iVar2 = FUN_00529ef0((int)param_1);
    if (iVar2 != 0) {
      uVar3 = 0;
      this = (void *)FUN_00529ef0((int)param_1);
      FUN_008b1eb0(this,uVar3);
    }
  }
  return;
}


//// FUNCTION FUN_004cbd90 @ 004cbd90 ////

void __thiscall FUN_004cbd90(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x61c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)((int)this + 0x608) + 4))();
    *(undefined4 *)((int)this + 0x61c) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x608))();
  }
  (**(code **)(*(int *)((int)this + 0x608) + 4))();
  *(undefined4 *)((int)this + 0x61c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x608))();
  return;
}


//// FUNCTION FUN_004cc030 @ 004cc030 ////

void __fastcall FUN_004cc030(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004cc0b0 @ 004cc0b0 ////

void __thiscall FUN_004cc0b0(void *this,int param_1)

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


//// FUNCTION FUN_004cc180 @ 004cc180 ////

undefined4 * __thiscall FUN_004cc180(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca88d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00494f40((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004cc210 @ 004cc210 ////

undefined4 * __thiscall FUN_004cc210(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x39) == '\0') {
    puVar2 = puVar3;
    puVar7 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar7;
      pbVar4 = (byte *)puVar3[3];
      pbVar6 = (byte *)*param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004cc254:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004cc259;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004cc254;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004cc259:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x39) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_004cc2f0 @ 004cc2f0 ////

undefined4 * __thiscall FUN_004cc2f0(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x51) == '\0') {
    puVar2 = puVar3;
    puVar7 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar7;
      pbVar4 = (byte *)puVar3[3];
      pbVar6 = (byte *)*param_1;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_004cc334:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004cc339;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_004cc334;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004cc339:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x51) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_004cc360 @ 004cc360 ////

void __thiscall FUN_004cc360(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x51) == '\0') {
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


//// FUNCTION FUN_004cc3c0 @ 004cc3c0 ////

void __thiscall FUN_004cc3c0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x51) == '\0') {
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


//// FUNCTION FUN_004cc430 @ 004cc430 ////

void __fastcall FUN_004cc430(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x39);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x39);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x39);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x39);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_004cc490 @ 004cc490 ////

int * __fastcall FUN_004cc490(int *param_1)

{
  FUN_004cb4c0(param_1);
  return param_1;
}


//// FUNCTION FUN_004cc4a0 @ 004cc4a0 ////

int * __fastcall FUN_004cc4a0(int *param_1)

{
  FUN_004cb460(param_1);
  return param_1;
}


//// FUNCTION FUN_004cc510 @ 004cc510 ////

void __thiscall FUN_004cc510(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x39) == '\0') {
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


//// FUNCTION FUN_004cc5b0 @ 004cc5b0 ////

void __fastcall FUN_004cc5b0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x51) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x51) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x51);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x51);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x51) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x51) == '\0');
    if (*(char *)((int)piVar4 + 0x51) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_004cc610 @ 004cc610 ////

int * __fastcall FUN_004cc610(int *param_1)

{
  FUN_004cb640(param_1);
  return param_1;
}


//// FUNCTION FUN_004cc670 @ 004cc670 ////

void FUN_004cc670(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_004cc670(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004cc710 @ 004cc710 ////

undefined4 * __thiscall FUN_004cc710(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca88f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_00494f40((void *)((int)this + 0x20),param_1 + 8);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004cc780 @ 004cc780 ////

int * __fastcall FUN_004cc780(int *param_1)

{
  FUN_004cb6d0(param_1);
  return param_1;
}


//// FUNCTION FUN_004cc7c0 @ 004cc7c0 ////

void __cdecl FUN_004cc7c0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
    param_1[6] = *(int *)(param_3 + 0x18);
  }
  return;
}


//// FUNCTION FUN_004cc820 @ 004cc820 ////

void __fastcall FUN_004cc820(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004cc840 @ 004cc840 ////

void __fastcall FUN_004cc840(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x2c));
  }
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004cc910 @ 004cc910 ////

void __fastcall FUN_004cc910(int *param_1)

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
  puStack_8 = &LAB_00ca8918;
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


//// FUNCTION FUN_004cc9e0 @ 004cc9e0 ////

void __fastcall FUN_004cc9e0(int param_1)

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
  puStack_8 = &LAB_00ca8970;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("LastUsed");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x478),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("BackdropName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x430));
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5c;
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
  uVar3 = FUN_0098b490("IndexLightMapTrailer");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x450),4);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("Hidden");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4e4),1);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("WasHidden");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4e5),1);
  }
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x5f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 5;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x51c));
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
  uVar3 = FUN_0098b490("PBusyShot");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x51c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x60;
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
  uVar3 = FUN_0098b490("Busy");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x510),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Set.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x61;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 7;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("BusyDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x514),4);
  }
  FUN_0052a850(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004cd110 @ 004cd110 ////

uint __cdecl FUN_004cd110(void *param_1,int *param_2)

{
  byte bVar1;
  char *_Source;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  char *local_94;
  undefined4 local_90;
  uint local_8c;
  char local_88 [20];
  byte *local_74;
  undefined4 local_70;
  uint local_6c;
  byte local_68 [20];
  char *local_54;
  undefined4 local_50;
  uint local_4c;
  char local_48 [20];
  undefined4 *local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca89f4;
  local_c = ExceptionList;
  local_74 = local_68;
  local_68[0] = 0;
  local_70 = 0;
  local_6c = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_74,"blueprint",9);
  local_70 = 9;
  local_74[9] = 0;
  local_4 = 0;
  uVar3 = FUN_00558a50(param_1,&local_74,(undefined4 *)0x0);
  if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_74);
  }
  if ((char)uVar3 != '\0') {
    local_74 = local_68;
    local_68[0] = 0;
    local_70 = 0;
    local_6c = 0x14;
    _strncpy((char *)local_74,"path",4);
    local_70 = 4;
    local_74[4] = 0;
    local_4 = 1;
    puVar4 = FUN_005584e0(param_1,&local_94,&local_74);
    FUN_004015d0(param_2,(char *)*puVar4,puVar4[1]);
    if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
      _free(local_94);
    }
    if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74);
    }
    FUN_0048ad50(param_2);
    local_74 = local_68;
    local_68[0] = 0;
    local_70 = 0;
    local_6c = 0x14;
    _strncpy((char *)local_74,"maxinstances",0xc);
    local_70 = 0xc;
    local_74[0xc] = 0;
    local_4 = 2;
    local_30 = FUN_00558750(param_1,&local_74,0);
    if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
      _free(local_74);
    }
    if (0 < (int)local_30) {
      local_74 = local_68;
      local_68[0] = 0;
      local_70 = 0;
      local_6c = 0x14;
      FUN_004015d0(&local_74,*(char **)((int)param_1 + 0xa8),*(uint *)((int)param_1 + 0xac));
      local_94 = local_88;
      local_4 = 3;
      local_88[0] = '\0';
      local_90 = 0;
      local_8c = 0x14;
      _strncpy(local_94,"",0);
      local_90 = 0;
      *local_94 = '\0';
      local_54 = local_48;
      local_48[0] = '\0';
      local_50 = 0;
      local_4c = 0x14;
      _strncpy(local_54,"data/set/",9);
      local_50 = 9;
      local_54[9] = '\0';
      local_4._0_1_ = 5;
      FUN_00569860((int *)&local_74,&local_54,&local_94);
      if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      local_54 = local_48;
      local_48[0] = '\0';
      local_50 = 0;
      local_4c = 0x14;
      _strncpy(local_54,"",0);
      local_50 = 0;
      *local_54 = '\0';
      local_94 = local_88;
      local_88[0] = '\0';
      local_90 = 0;
      local_8c = 0x14;
      _strncpy(local_94,".ini",4);
      local_90 = 4;
      local_94[4] = '\0';
      local_4._0_1_ = 7;
      FUN_00569860((int *)&local_74,&local_94,&local_54);
      if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_54);
      }
      local_34 = DAT_0104acbc;
      if (DAT_0104acbc != &DAT_0104acc8) {
        do {
          puVar4 = (undefined4 *)FUN_00528450(local_34[2]);
          pbVar7 = (byte *)*puVar4;
          pbVar8 = local_74;
          do {
            bVar1 = *pbVar7;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_004cd6a6:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_004cd6ab;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_004cd6a6;
            pbVar7 = pbVar7 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_004cd6ab:
          if ((iVar5 == 0) &&
             (local_30 = local_30 - 1, uVar6 = local_30, pbVar7 = local_74, uVar2 = local_6c,
             (int)local_30 < 1)) goto joined_r0x004cd6de;
          local_34 = (undefined4 *)local_34[1];
        } while (local_34 != &DAT_0104acc8);
      }
      if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74);
      }
    }
  }
  uVar6 = *(uint *)((int)param_1 + 0xac);
  _Source = *(char **)((int)param_1 + 0xa8);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  if (0x13 < uVar6) {
    local_24 = uVar6 + 0x20 & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy((char *)local_2c,_Source,uVar6);
  local_2c[uVar6] = 0;
  local_54 = local_48;
  local_4 = 8;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x14;
  local_28 = uVar6;
  _strncpy(local_54,"",0);
  local_50 = 0;
  *local_54 = '\0';
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,"data/set/",9);
  local_90 = 9;
  local_94[9] = '\0';
  local_4._0_1_ = 10;
  FUN_00569860((int *)&local_2c,&local_94,&local_54);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  local_54 = local_48;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x14;
  _strncpy(local_54,"",0);
  local_50 = 0;
  *local_54 = '\0';
  local_94 = local_88;
  local_88[0] = '\0';
  local_90 = 0;
  local_8c = 0x14;
  _strncpy(local_94,".ini",4);
  local_90 = 4;
  local_94[4] = '\0';
  local_4._0_1_ = 0xc;
  FUN_00569860((int *)&local_2c,&local_94,&local_54);
  if (0x14 < local_8c) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  iVar5 = FUN_009623a0(&local_2c);
  uVar6 = 0;
  pbVar7 = local_2c;
  uVar2 = local_24;
  if ((iVar5 == 0) ||
     (uVar6 = FUN_00960f30(iVar5), pbVar7 = local_2c, uVar2 = local_24, (char)uVar6 == '\0')) {
joined_r0x004cd6de:
    if (0x14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      _free(pbVar7);
    }
    uVar6 = uVar6 & 0xffffff00;
  }
  else {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar6;
}


//// FUNCTION FUN_004cd720 @ 004cd720 ////

int __fastcall FUN_004cd720(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8a10;
  local_c = ExceptionList;
  local_4c = local_40;
  iVar2 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_4c,*(char **)(param_1 + 0x5b8),*(uint *)(param_1 + 0x5bc));
  uVar1 = *(uint *)(param_1 + 0x5f8);
  local_4 = 0;
  FUN_0040d6b0(local_2c,"data/scene/",(undefined4 *)(param_1 + 0x5d8));
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_00556700(local_2c,uVar1,&local_4c,'\0');
  while ((uVar1 != 0 && (4 < local_48))) {
    iVar2 = iVar2 + 1;
    uVar1 = FUN_00556700(local_2c,uVar1,&local_4c,'\0');
  }
  if (local_24 < 0x15) {
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    ExceptionList = local_c;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_004cd820 @ 004cd820 ////

void __thiscall FUN_004cd820(void *this,undefined4 *param_1)

{
  void *pvVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_1c [8];
  undefined4 uStack_14;
  
  uStack_14 = 0x4cd83c;
  FUN_004015d0((undefined4 *)((int)this + 0x4a8),(char *)*param_1,param_1[1]);
  pcVar2 = local_1c;
  local_1c[0] = '\0';
  uVar3 = 0;
  uVar4 = 0x14;
  FUN_004015d0(&stack0xffffffd8,*(char **)((int)this + 0x4a8),*(uint *)((int)this + 0x4ac));
  pvVar1 = FUN_009f41f0(pcVar2,uVar3,uVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00981d20(*(void **)((int)this + 0x11c),(int)pvVar1);
    FUN_0099b400(pvVar1);
  }
  return;
}


//// FUNCTION FUN_004cd890 @ 004cd890 ////

undefined4 * __thiscall FUN_004cd890(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x5d8),*(uint *)((int)this + 0x5dc));
  return param_1;
}


//// FUNCTION FUN_004cda20 @ 004cda20 ////

uint __cdecl FUN_004cda20(int param_1,char param_2)

{
  undefined4 *puVar1;
  uint in_EAX;
  undefined4 *puVar2;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  puVar2 = DAT_0104ad14;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      if (((param_2 == '\0') || (((int *)puVar2[2])[0xae] == 5)) &&
         (in_EAX = (**(code **)(*(int *)puVar2[2] + 0x1d4))(param_1,0), (char)in_EAX != '\0')) {
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      puVar1 = puVar2 + 1;
      puVar2 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104ad20);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_004cdca0 @ 004cdca0 ////

void __thiscall FUN_004cdca0(void *this,int param_1)

{
  uint3 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 unaff_EBP;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  char *pcStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  char acStack_18 [24];
  
  uVar1 = (uint3)uStack_3c;
  *(undefined4 *)((int)this + 0x4f0) = DAT_00e4fa4c;
  uStack_3c = (float)(uint)(uint3)uStack_3c;
  *(undefined4 *)((int)this + 0x588) = 10;
  if (*(int *)((int)this + 0x5a8) != param_1) {
    uStack_3c = (float)CONCAT13(1,uVar1);
  }
  (**(code **)(*(int *)((int)this + 0x594) + 4))();
  *(int *)((int)this + 0x5a8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x594))();
  *(undefined4 *)((int)this + 0x58c) = DAT_00e4fa4c;
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)this + 0x54))(&fStack_38);
  pcStack_24 = acStack_18;
  acStack_18[0] = '\0';
  uStack_20 = 0;
  uStack_1c = 0x20;
  pcStack_24 = _malloc(0x20);
  _strncpy(pcStack_24,"set_citystreet_commercial",0x19);
  uStack_20 = 0x19;
  pcStack_24[0x19] = '\0';
  uVar3 = FUN_00401ec0((undefined4 *)((int)this + 0x35c),&pcStack_24);
  if (0x14 < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_24);
  }
  if ((char)uVar3 != '\0') {
    (**(code **)(*(int *)this + 0x48))(&fStack_30);
    fStack_28 = fStack_28 * 7.0;
    uStack_3c = uStack_3c - fStack_30 * 7.0;
    fStack_38 = fStack_38 - fStack_2c * 7.0;
    fStack_34 = fStack_34 - fStack_28;
  }
  iVar4 = FUN_004df4b0(param_1);
  cVar2 = (char)((uint)unaff_EBP >> 0x18);
  if ((((iVar4 != 0) && (*(char *)(iVar4 + 0x364) == '\0')) && (cVar2 != '\0')) &&
     (*(void **)(iVar4 + 0x210) != (void *)0x0)) {
    FUN_005d1980(*(void **)(iVar4 + 0x210),this);
    (**(code **)(**(int **)(iVar4 + 0x210) + 0x30))(&uStack_3c);
    iVar5 = FUN_005b3c50(iVar4);
    if (iVar5 != 0) {
      iVar5 = FUN_005b3c50(iVar4);
      iVar5 = FUN_004df220(iVar5);
      iVar6 = FUN_004df220(param_1);
      if (iVar6 == iVar5) {
        (**(code **)(**(int **)(iVar4 + 0x210) + 0xcc))(1,0);
        goto LAB_004cde60;
      }
    }
    (**(code **)(**(int **)(iVar4 + 0x210) + 0xcc))(1,1);
  }
LAB_004cde60:
  pvVar7 = (void *)FUN_005295b0(this);
  if (pvVar7 != (void *)0x0) {
    piVar8 = (int *)FUN_00938cc0(pvVar7,0);
    pvVar7 = (void *)FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                  &TM::CRehearseRoom::RTTI_Type_Descriptor,0);
    if (((cVar2 != '\0') && (pvVar7 != (void *)0x0)) &&
       (cVar2 = FUN_0092a970((int)pvVar7), cVar2 == '\0')) {
      *(undefined1 *)((int)pvVar7 + 0x280) = 1;
      FUN_0092d4a0(pvVar7);
    }
  }
  return;
}


//// FUNCTION FUN_004cdec0 @ 004cdec0 ////

void __fastcall FUN_004cdec0(void *param_1)

{
  FUN_004cd820(param_1,(undefined4 *)((int)param_1 + 0x568));
  return;
}


//// FUNCTION FUN_004cdf30 @ 004cdf30 ////

undefined4 __cdecl FUN_004cdf30(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  uint _Count;
  char *_Source;
  char *_Dest;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  uint local_18;
  char local_14 [20];
  
  puVar5 = DAT_0104acbc;
  if (DAT_0104acbc == &DAT_0104acc8) {
    return 0;
  }
  do {
    _Dest = local_14;
    local_14[0] = '\0';
    local_18 = 0x14;
    _Count = *(uint *)(puVar5[2] + 0x360);
    _Source = *(char **)(puVar5[2] + 0x35c);
    if (0x13 < _Count) {
      local_18 = _Count + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_18);
    }
    _strncpy(_Dest,_Source,_Count);
    _Dest[_Count] = '\0';
    pbVar6 = (byte *)*param_1;
    pbVar3 = *(byte **)(puVar5[2] + 0x35c);
    do {
      bVar2 = *pbVar3;
      bVar7 = bVar2 < *pbVar6;
      if (bVar2 != *pbVar6) {
LAB_004cdfe4:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004cdfe9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar7 = bVar2 < pbVar6[1];
      if (bVar2 != pbVar6[1]) goto LAB_004cdfe4;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_004cdfe9:
    if (iVar4 == 0) {
      if (local_18 < 0x15) {
        return puVar5[2];
      }
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
    puVar1 = puVar5 + 1;
    puVar5 = (undefined4 *)*puVar1;
    if ((undefined4 *)*puVar1 == &DAT_0104acc8) {
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_004ce060 @ 004ce060 ////

void __fastcall FUN_004ce060(int param_1)

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


//// FUNCTION FUN_004ce090 @ 004ce090 ////

void __fastcall FUN_004ce090(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1ec60;
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


//// FUNCTION FUN_004ce100 @ 004ce100 ////

void __fastcall FUN_004ce100(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1ec70;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004ce150 @ 004ce150 ////

void __fastcall FUN_004ce150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1ec70;
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


//// FUNCTION FUN_004ce200 @ 004ce200 ////

undefined4 * __thiscall FUN_004ce200(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  return this;
}


//// FUNCTION FUN_004ce2f0 @ 004ce2f0 ////

int * __fastcall FUN_004ce2f0(int *param_1)

{
  FUN_004cc430(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce300 @ 004ce300 ////

int * __fastcall FUN_004ce300(int *param_1)

{
  FUN_004cb4c0(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce310 @ 004ce310 ////

int * __fastcall FUN_004ce310(int *param_1)

{
  FUN_004cb460(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce320 @ 004ce320 ////

void FUN_004ce320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_004ce360 @ 004ce360 ////

int * __fastcall FUN_004ce360(int *param_1)

{
  FUN_004cc5b0(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce370 @ 004ce370 ////

int * __fastcall FUN_004ce370(int *param_1)

{
  FUN_004cb640(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce380 @ 004ce380 ////

void FUN_004ce380(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xe) = 1;
  *(undefined1 *)((int)puVar1 + 0x39) = 0;
  return;
}


//// FUNCTION FUN_004ce3d0 @ 004ce3d0 ////

void __fastcall FUN_004ce3d0(int param_1)

{
  FUN_004cc670(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004ce400 @ 004ce400 ////

void FUN_004ce400(void)

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


//// FUNCTION FUN_004ce450 @ 004ce450 ////

void FUN_004ce450(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x14) = 1;
  *(undefined1 *)((int)puVar1 + 0x51) = 0;
  return;
}


//// FUNCTION FUN_004ce4c0 @ 004ce4c0 ////

undefined4 * __thiscall FUN_004ce4c0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)param_1[8],param_1[9]);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x10);
  return this;
}


//// FUNCTION FUN_004ce530 @ 004ce530 ////

int * __fastcall FUN_004ce530(int *param_1)

{
  FUN_004cb6d0(param_1);
  return param_1;
}


//// FUNCTION FUN_004ce580 @ 004ce580 ////

void * __thiscall FUN_004ce580(void *this,byte param_1)

{
  FUN_004cc820((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ce5a0 @ 004ce5a0 ////

void * __thiscall FUN_004ce5a0(void *this,byte param_1)

{
  FUN_004cc840((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ce5d0 @ 004ce5d0 ////

undefined4 * __fastcall FUN_004ce5d0(undefined4 *param_1)

{
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d1eb30;
  FUN_0048f010(&stack0x00000004,&local_20);
  param_1[0x14] = param_1 + 0x17;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x14;
  FUN_004015d0(param_1 + 0x14,local_20,local_1c);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return param_1;
}


//// FUNCTION FUN_004ce640 @ 004ce640 ////

undefined4 * __thiscall FUN_004ce640(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_004ce5d0(this);
  *(undefined ***)this = &PTR_FUN_00d1ec80;
  *(undefined4 *)((int)this + 0x70) = param_2;
  return this;
}


//// FUNCTION FUN_004ce680 @ 004ce680 ////

undefined4 * __thiscall FUN_004ce680(void *this,byte param_1)

{
  FUN_004ce6a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ce6a0 @ 004ce6a0 ////

void __fastcall FUN_004ce6a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_004ce700 @ 004ce700 ////

undefined4 * __thiscall FUN_004ce700(void *this,byte param_1)

{
  FUN_004ce720(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ce720 @ 004ce720 ////

void __fastcall FUN_004ce720(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1eb30;
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_004ce750 @ 004ce750 ////

void __fastcall FUN_004ce750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1a49c;
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


//// FUNCTION FUN_004ce7a0 @ 004ce7a0 ////

int __fastcall FUN_004ce7a0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  for (piVar2 = *(int **)(param_1 + 0x48c); piVar2 != *(int **)(param_1 + 0x490);
      piVar2 = piVar2 + 1) {
    if ((*piVar2 != 0) && (*(char *)(*piVar2 + 0x244) != '\0')) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


//// FUNCTION FUN_004ce7d0 @ 004ce7d0 ////

undefined4 __fastcall FUN_004ce7d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0052e490(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x434) != 0) {
      uVar2 = FUN_004cd820((void *)(param_1 + -0x78),(undefined4 *)(param_1 + 0x430));
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_004ce800 @ 004ce800 ////

uint __thiscall FUN_004ce800(void *this,undefined4 *param_1)

{
  byte bVar1;
  uint in_EAX;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  void *local_20 [2];
  uint local_18;
  
  puVar6 = *(undefined4 **)((int)this + 0x48c);
  if (puVar6 == *(undefined4 **)((int)this + 0x490)) {
    return in_EAX & 0xffffff00;
  }
  do {
    puVar2 = FUN_004b63b0((void *)*puVar6,local_20);
    pbVar5 = (byte *)*param_1;
    pbVar3 = (byte *)*puVar2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_004ce85c:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004ce861;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_004ce85c;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004ce861:
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    if (iVar4 == 0) {
      return CONCAT31((int3)(local_18 >> 8),1);
    }
    puVar6 = puVar6 + 1;
    if (puVar6 == *(undefined4 **)((int)this + 0x490)) {
      return (uint)*(undefined4 **)((int)this + 0x490) & 0xffffff00;
    }
  } while( true );
}


//// FUNCTION FUN_004ce8b0 @ 004ce8b0 ////

undefined4 __cdecl FUN_004ce8b0(undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *this;
  undefined4 uVar4;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8a63;
  pvStack_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0040d6b0(local_2c,"set/",param_1);
  local_4 = 0;
  uVar2 = FUN_00413450(local_2c,".",0,1);
  puVar3 = FUN_00430770(local_2c,&local_4c,0,uVar2);
  FUN_004015d0(local_2c,(char *)*puVar3,puVar3[1]);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  this = operator_new(0xd8);
  local_4._0_1_ = 1;
  if (this == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0055c540(this,local_2c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"scene",5);
  local_48 = 5;
  local_4c[5] = '\0';
  local_4._0_1_ = 2;
  FUN_00558a50(puVar3,&local_4c,(undefined4 *)0x0);
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (puVar3 != (undefined4 *)0x0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"setid",5);
    local_48 = 5;
    local_4c[5] = '\0';
    local_4._0_1_ = 3;
    uVar4 = FUN_00558750(puVar3,&local_4c,0);
    local_4._0_1_ = 0;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    (**(code **)*puVar3)(1);
    uVar1 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar1;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = pvStack_c;
  return uVar4;
}


//// FUNCTION FUN_004cea60 @ 004cea60 ////

int * __thiscall FUN_004cea60(void *this,int param_1,float param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca8a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d1a49c;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  *(float *)((int)this + 0x18) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004ceb00 @ 004ceb00 ////

int * __thiscall FUN_004ceb00(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca8a98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d1a49c;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004ceba0 @ 004ceba0 ////

void __thiscall FUN_004ceba0(void *this,undefined4 *param_1,int *param_2)

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


//// FUNCTION FUN_004cec10 @ 004cec10 ////

void __thiscall FUN_004cec10(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_004cc2f0(this,param_2);
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


//// FUNCTION FUN_004cec70 @ 004cec70 ////

undefined4 * __thiscall FUN_004cec70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)*param_2,param_2[1]);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_2 + 8);
  return this;
}


//// FUNCTION FUN_004cecd0 @ 004cecd0 ////

int * __fastcall FUN_004cecd0(int *param_1)

{
  FUN_004cc430(param_1);
  return param_1;
}


//// FUNCTION FUN_004cece0 @ 004cece0 ////

int * __fastcall FUN_004cece0(int *param_1)

{
  FUN_004cc5b0(param_1);
  return param_1;
}


//// FUNCTION FUN_004cecf0 @ 004cecf0 ////

void __fastcall FUN_004cecf0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004ced30 @ 004ced30 ////

void __fastcall FUN_004ced30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004ced70 @ 004ced70 ////

void __fastcall FUN_004ced70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce450();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004cedb0 @ 004cedb0 ////

undefined4 *
FUN_004cedb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca8ac1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x3c);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_004cc710(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xe) = param_5;
    *(undefined1 *)((int)puVar1 + 0x39) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_004cef00 @ 004cef00 ////

void __cdecl FUN_004cef00(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca8ae1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004ceb00(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004cef50 @ 004cef50 ////

undefined4 * __thiscall FUN_004cef50(void *this,byte param_1)

{
  FUN_004ce750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004cef70 @ 004cef70 ////

bool __fastcall FUN_004cef70(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (piVar1 = *(int **)(param_1 + 0x48c); piVar1 != *(int **)(param_1 + 0x490);
      piVar1 = piVar1 + 1) {
    if ((*piVar1 != 0) && (*(char *)(*piVar1 + 0x244) != '\0')) {
      uVar2 = uVar2 + 1;
    }
  }
  return (bool)('\x01' - (uVar2 < *(uint *)(param_1 + 0x5fc)));
}


//// FUNCTION FUN_004cefb0 @ 004cefb0 ////

void __fastcall FUN_004cefb0(int param_1)

{
  void *_Src;
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(undefined4 **)(param_1 + 0x5b0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x5b0))(1);
  }
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  while ((piVar1 = *(int **)(param_1 + 0x48c), piVar1 != (int *)0x0 &&
         (*(int *)(param_1 + 0x490) - (int)piVar1 >> 2 != 0))) {
    puVar2 = (undefined4 *)*piVar1;
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    _Src = (void *)((int)*(void **)(param_1 + 0x48c) + 4);
    _memmove(*(void **)(param_1 + 0x48c),_Src,(*(int *)(param_1 + 0x490) - (int)_Src >> 2) << 2);
    *(int *)(param_1 + 0x490) = *(int *)(param_1 + 0x490) + -4;
  }
  *(undefined1 *)(param_1 + 0x600) = 0;
  return;
}


//// FUNCTION FUN_004cf040 @ 004cf040 ////

int __fastcall FUN_004cf040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004cf070 @ 004cf070 ////

int __fastcall FUN_004cf070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004cf0a0 @ 004cf0a0 ////

int __fastcall FUN_004cf0a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce450();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004cf0e0 @ 004cf0e0 ////

undefined4 *
FUN_004cf0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x54);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_004ce4c0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x14) = param_5;
    *(undefined1 *)((int)puVar1 + 0x51) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_004cf180 @ 004cf180 ////

void __fastcall FUN_004cf180(int param_1)

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


//// FUNCTION FUN_004cf1b0 @ 004cf1b0 ////

void FUN_004cf1b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    FUN_004cf1b0(*(void **)((int)param_1 + 8));
    FUN_004cc820((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004cf1f0 @ 004cf1f0 ////

void FUN_004cf1f0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    FUN_004cf1f0(*(void **)((int)param_1 + 8));
    FUN_004cc840((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004cf240 @ 004cf240 ////

void * __cdecl FUN_004cf240(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca8b01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004ceb00(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_004cf320 @ 004cf320 ////

void * __cdecl FUN_004cf320(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca8b21;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004ceb00(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x1c);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_004cf400 @ 004cf400 ////

void __fastcall FUN_004cf400(int param_1)

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


//// FUNCTION FUN_004cf430 @ 004cf430 ////

void __thiscall
FUN_004cf430(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca8b38;
  local_c = ExceptionList;
  if (0x5d1745b < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004cedb0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x38);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x38) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xe] == '\0') {
LAB_004cf52b:
        *(undefined1 *)(*piVar4 + 0x38) = 1;
        *(undefined1 *)(piVar5 + 0xe) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x38) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004cc510(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x38) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
        FUN_004cb3c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xe] == '\0') goto LAB_004cf52b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004cb3c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x38) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
      FUN_004cc510(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x38);
  } while( true );
}


//// FUNCTION FUN_004cf5e0 @ 004cf5e0 ////

void __thiscall FUN_004cf5e0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca8b58;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x39) != '\0') {
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
  FUN_004cc430((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x39) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x39) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
      iVar1 = param_2[0xe];
      *(char *)(param_2 + 0xe) = (char)_Memory[0xe];
      *(char *)(_Memory + 0xe) = (char)iVar1;
      goto LAB_004cf751;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      piVar2 = (int *)FUN_004cb380(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      uVar3 = FUN_004cb5d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004cf751:
  if ((char)_Memory[0xe] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xe] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_004cc510(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(*piVar4 + 0x38) != '\x01') || (*(char *)(piVar4[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x38) = 1;
                *(undefined1 *)(piVar4 + 0xe) = 0;
                FUN_004cb3c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
              *(undefined1 *)(piVar5 + 0xe) = 1;
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              FUN_004cc510(this,(int)piVar5);
              break;
            }
LAB_004cf814:
            *(undefined1 *)(piVar4 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_004cb3c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(piVar4[2] + 0x38) == '\x01') && (*(char *)(*piVar4 + 0x38) == '\x01'))
            goto LAB_004cf814;
            if (*(char *)(*piVar4 + 0x38) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              *(undefined1 *)(piVar4 + 0xe) = 0;
              FUN_004cc510(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
            *(undefined1 *)(piVar5 + 0xe) = 1;
            *(undefined1 *)(*piVar4 + 0x38) = 1;
            FUN_004cb3c0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xe) = 1;
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_004cf8b0 @ 004cf8b0 ////

void __fastcall FUN_004cf8b0(int param_1)

{
  FUN_004cf1b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004cf8e0 @ 004cf8e0 ////

void __thiscall FUN_004cf8e0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca8b78;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x51) != '\0') {
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
  FUN_004cb6d0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x51) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x51) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x51) == '\0') {
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
      iVar1 = param_2[0x14];
      *(char *)(param_2 + 0x14) = (char)_Memory[0x14];
      *(char *)(_Memory + 0x14) = (char)iVar1;
      goto LAB_004cfa4f;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x51) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x51) == '\0') {
      piVar2 = (int *)FUN_004cb620(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x51) == '\0') {
      uVar3 = FUN_004cb600((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004cfa4f:
  if ((char)_Memory[0x14] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x14] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x14] == '\0') {
            *(undefined1 *)(piVar4 + 0x14) = 1;
            *(undefined1 *)(piVar5 + 0x14) = 0;
            FUN_004cc360(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x51) == '\0') {
            if ((*(char *)(*piVar4 + 0x50) != '\x01') || (*(char *)(piVar4[2] + 0x50) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x50) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x50) = 1;
                *(undefined1 *)(piVar4 + 0x14) = 0;
                FUN_004cc3c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x14) = (char)piVar5[0x14];
              *(undefined1 *)(piVar5 + 0x14) = 1;
              *(undefined1 *)(piVar4[2] + 0x50) = 1;
              FUN_004cc360(this,(int)piVar5);
              break;
            }
LAB_004cfb18:
            *(undefined1 *)(piVar4 + 0x14) = 0;
          }
        }
        else {
          if ((char)piVar4[0x14] == '\0') {
            *(undefined1 *)(piVar4 + 0x14) = 1;
            *(undefined1 *)(piVar5 + 0x14) = 0;
            FUN_004cc3c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x51) == '\0') {
            if ((*(char *)(piVar4[2] + 0x50) == '\x01') && (*(char *)(*piVar4 + 0x50) == '\x01'))
            goto LAB_004cfb18;
            if (*(char *)(*piVar4 + 0x50) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x50) = 1;
              *(undefined1 *)(piVar4 + 0x14) = 0;
              FUN_004cc360(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x14) = (char)piVar5[0x14];
            *(undefined1 *)(piVar5 + 0x14) = 1;
            *(undefined1 *)(*piVar4 + 0x50) = 1;
            FUN_004cc3c0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x14) = 1;
  }
  if (0x14 < (uint)_Memory[0xd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)_Memory[0xb]);
  }
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_004cfbd0 @ 004cfbd0 ////

void __fastcall FUN_004cfbd0(int param_1)

{
  FUN_004cf1f0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004cfc60 @ 004cfc60 ////

void __cdecl FUN_004cfc60(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ca8ba1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_004ceb00(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x1c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004cffb0 @ 004cffb0 ////

void __fastcall FUN_004cffb0(int *param_1)

{
  if ((char)param_1[0x157] == '\0') {
    FUN_005369f0(param_1);
    return;
  }
  param_1[0xe7] = param_1[0xe7] & 0xfffffffe;
  *(undefined1 *)((int)param_1 + 0x55d) = 1;
  if ((void *)param_1[0x11e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11e]);
  }
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  FUN_00529b30(param_1);
  return;
}


//// FUNCTION FUN_004d0010 @ 004d0010 ////

void __thiscall FUN_004d0010(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca8bb8;
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
  FUN_004cb4c0((int *)&param_2);
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
      goto LAB_004d0181;
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
      piVar2 = (int *)FUN_004cafc0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_004cafa0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004d0181:
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
            FUN_004cc0b0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_004cb000(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_004cc0b0(this,(int)piVar5);
              break;
            }
LAB_004d0244:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_004cb000(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_004d0244;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_004cc0b0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_004cb000(this,piVar5);
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


//// FUNCTION FUN_004d02d0 @ 004d02d0 ////

void FUN_004d02d0(void)

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
  puStack_8 = &LAB_00ca8bd8;
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


//// FUNCTION FUN_004d0340 @ 004d0340 ////

void __thiscall
FUN_004d0340(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca8bf8;
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
  piVar3 = (int *)FUN_004ce320(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_004d043b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004cc0b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_004cb000(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_004d043b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004cb000(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_004cc0b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_004d04f0 @ 004d04f0 ////

void __thiscall
FUN_004d04f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca8c18;
  local_c = ExceptionList;
  if (0x3c3c3c1 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004cf0e0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x50);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x50) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x14] == '\0') {
LAB_004d05eb:
        *(undefined1 *)(*piVar4 + 0x50) = 1;
        *(undefined1 *)(piVar5 + 0x14) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x50) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004cc360(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x50) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x50) = 0;
        FUN_004cc3c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x14] == '\0') goto LAB_004d05eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_004cc3c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x50) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x50) = 0;
      FUN_004cc360(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x50);
  } while( true );
}


//// FUNCTION FUN_004d06a0 @ 004d06a0 ////

void __thiscall FUN_004d06a0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x39) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004d0704:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004d0709;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004d0704;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004d0709:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x39) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_004cf430(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_004cb640((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_004cf430(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_004d07c0 @ 004d07c0 ////

void __thiscall FUN_004d07c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004cf1b0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x39) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x39) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x39);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x39);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x39);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x39);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_004cf5e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004d0880 @ 004d0880 ////

void __thiscall FUN_004d0880(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004cc670((void *)piVar6[1]);
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
    FUN_004d0010(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004d0940 @ 004d0940 ////

void __thiscall FUN_004d0940(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004cf1f0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x51) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x51) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x51);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x51);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x51);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x51);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_004cf8e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004d0aa0 @ 004d0aa0 ////

void __thiscall FUN_004d0aa0(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_004d0340(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_004cb460((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_004d0340(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004d0b60 @ 004d0b60 ////

void __thiscall FUN_004d0b60(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x51) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004d0bc4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_004d0bc9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004d0bc4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_004d0bc9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x51) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_004d04f0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_004cc5b0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_004d04f0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_004d0c80 @ 004d0c80 ////

undefined4 * __thiscall FUN_004d0c80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004cf430(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_004cf430(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_004cf430(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004cb640((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x39) != '\0') {
          FUN_004cf430(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_004cf430(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004cc430((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_004d0e02;
      }
      if (*(char *)(param_2[2] + 0x39) != '\0') {
        FUN_004cf430(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_004cf430(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_004d0e02:
  puVar4 = (undefined4 *)FUN_004d06a0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_004d0eb0 @ 004d0eb0 ////

void FUN_004d0eb0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    FUN_004ce750(param_1);
  }
  return;
}


//// FUNCTION FUN_004d0ee0 @ 004d0ee0 ////

void __fastcall FUN_004d0ee0(int param_1)

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
    FUN_004ce750(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004d0f30 @ 004d0f30 ////

void * FUN_004d0f30(void *param_1,int param_2,int param_3)

{
  FUN_004cfc60(param_1,param_2,param_3);
  return (void *)(param_2 * 0x1c + (int)param_1);
}


//// FUNCTION FUN_004d0fc0 @ 004d0fc0 ////

void __thiscall FUN_004d0fc0(void *this,int *param_1,uint param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 local_38 [4];
  int local_34;
  int *local_30;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca8c38;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004ceb00(local_38,param_3);
  iVar1 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar1) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (0x9249249U - iVar1 < param_2) {
      FUN_004d02d0();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x9249249 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar5 < iVar1 + param_2) {
        iVar1 = FUN_004caee0((int)this);
        uVar5 = iVar1 + param_2;
      }
      pvVar2 = operator_new(uVar5 * 0x1c);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar2;
      pvVar3 = FUN_004cf320(*(int *)((int)this + 4),(int)param_1,pvVar2);
      FUN_004cfc60(pvVar3,param_2,(int)local_38);
      FUN_004cf320((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar3 + param_2 * 0x1c));
      iVar1 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar1 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004d0eb0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar5 * 0x1c + (int)pvVar2);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar1) * 0x1c + (int)pvVar2);
      *(void **)((int)this + 4) = pvVar2;
    }
    else {
      local_1c = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)local_1c - (int)param_1) / 0x1c) < param_2) {
        FUN_004cf320((int)param_1,(int)local_1c,param_1 + param_2 * 7);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004d0f30(*(void **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,(int)local_38);
        iVar1 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar1;
        local_8 = 0;
        FUN_004cc7c0(param_1,(int *)(iVar1 + param_2 * -0x1c),(int)local_38);
      }
      else {
        puVar4 = local_1c + param_2 * -7;
        pvVar2 = FUN_004cf320((int)puVar4,(int)local_1c,local_1c);
        *(void **)((int)this + 8) = pvVar2;
        FUN_004cb930((int)param_1,(int)puVar4,local_1c);
        FUN_004cc7c0(param_1,param_1 + param_2 * 7,(int)local_38);
      }
    }
  }
  if (local_30 != (int *)0x0) {
    *local_30 = local_34;
  }
  if (local_34 != 0) {
    *(int **)(local_34 + 4) = local_30;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004d12e0 @ 004d12e0 ////

int * __thiscall FUN_004d12e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  float fVar6;
  undefined4 local_48;
  undefined1 local_44 [12];
  void *local_38 [2];
  uint local_30;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_004cc210(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  fVar6 = DAT_00e4fa4c;
  pfVar4 = (float *)FUN_0043b520(&param_1,0.1);
  pfVar4 = FUN_00495060(local_44,0.0,*pfVar4,fVar6);
  piVar5 = FUN_004cc180(local_38,puVar1,pfVar4);
  local_4 = 0;
  piVar2 = FUN_004d0c80(this,&local_48,piVar2,piVar5);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38[0]);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_004d1410 @ 004d1410 ////

void __thiscall FUN_004d1410(void *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca8c70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x9249249 < param_1) {
    ExceptionList = &local_10;
    FUN_004d02d0();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x1c;
  }
  if (uVar1 < param_1) {
    pvVar2 = operator_new(param_1 * 0x1c);
    local_8 = 0;
    FUN_004cf240(*(int *)((int)this + 4),*(int *)((int)this + 8),pvVar2);
    if (*(int *)((int)this + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_004d0eb0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(void **)((int)this + 0xc) = (void *)(param_1 * 0x1c + (int)pvVar2);
    *(void **)((int)this + 8) = (void *)(iVar3 * 0x1c + (int)pvVar2);
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004d1570 @ 004d1570 ////

void __thiscall FUN_004d1570(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1c;
      goto LAB_004d15b9;
    }
  }
  iVar1 = 0;
LAB_004d15b9:
  FUN_004d0fc0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004d15e0 @ 004d15e0 ////

void __fastcall FUN_004d15e0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004d0880(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004d1610 @ 004d1610 ////

void __fastcall FUN_004d1610(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004d07c0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004d1640 @ 004d1640 ////

void __thiscall FUN_004d1640(void *this,uint param_1)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  undefined3 uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 **ppuVar12;
  byte *pbVar13;
  bool bVar14;
  undefined4 *local_154;
  char *local_150;
  uint local_14c;
  uint local_148;
  char local_144 [20];
  undefined4 *local_130;
  byte *local_12c;
  uint local_128;
  uint local_124;
  byte local_120 [20];
  byte *local_10c;
  uint local_108;
  uint local_104;
  byte local_100 [20];
  undefined1 *local_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_e0 [20];
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  void *local_8c [2];
  uint local_84;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00ca8cac;
  local_c = ExceptionList;
  local_ec = local_e0;
  local_e0[0] = 0;
  local_e8 = 0;
  local_e4 = 0x14;
  local_150 = local_144;
  local_144[0] = '\0';
  local_14c = 0;
  local_148 = 0x14;
  uStack_3 = 0;
  uVar5 = uStack_3;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x5dc) == 3) {
    ExceptionList = &local_c;
    puVar6 = FUN_0040d6b0(local_cc,"data/scene/",(undefined4 *)((int)this + 0x5d8));
    FUN_004015d0(&local_ec,(char *)*puVar6,puVar6[1]);
    if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc[0]);
    }
    param_1 = FUN_00556700(&local_ec,param_1,&local_150,'\0');
    local_10c = local_100;
    local_100[0] = 0;
    local_108 = 0;
    local_104 = 0x14;
    local_12c = local_120;
    local_120[0] = 0;
    local_128 = 0;
    local_124 = 0x14;
    local_4 = 3;
    uVar5 = uStack_3;
    if (param_1 != 0) {
      do {
        if (local_14c < 5) break;
        bVar4 = false;
        puVar6 = FUN_00430770(&local_150,local_cc,0,local_14c - 4);
        uVar2 = puVar6[1];
        pcVar3 = (char *)*puVar6;
        if (local_124 <= uVar2) {
          if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
            _free(local_12c);
          }
          local_124 = uVar2 + 0x20 & 0xffffffe0;
          local_12c = _malloc(local_124);
        }
        _strncpy((char *)local_12c,pcVar3,uVar2);
        local_12c[uVar2] = 0;
        local_128 = uVar2;
        if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_cc[0]);
        }
        puVar6 = DAT_0104d688;
        if (DAT_0104d688 != &DAT_0104d694) {
          do {
            iVar11 = *(int *)(puVar6[2] + 0xac);
            if (iVar11 != puVar6[2] + 0xb8) {
              do {
                pvVar7 = (void *)FUN_004df220(*(int *)(iVar11 + 8));
                local_154 = (undefined4 *)FUN_004df4a0(*(int *)(iVar11 + 8));
                if ((pvVar7 == this) && (local_154 != (undefined4 *)0x0)) {
                  puVar8 = FUN_004b6370(local_154,local_4c);
                  uVar2 = puVar8[1];
                  pcVar3 = (char *)*puVar8;
                  if (local_104 <= uVar2) {
                    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
                      _free(local_10c);
                    }
                    local_104 = uVar2 + 0x20 & 0xffffffe0;
                    local_10c = _malloc(local_104);
                  }
                  _strncpy((char *)local_10c,pcVar3,uVar2);
                  local_10c[uVar2] = 0;
                  pbVar13 = local_10c;
                  pbVar10 = local_12c;
                  local_108 = uVar2;
                  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                    _free(local_4c[0]);
                  }
                  do {
                    bVar1 = *pbVar13;
                    bVar14 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_004d1909:
                      iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                      goto LAB_004d190e;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar13[1];
                    bVar14 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_004d1909;
                    pbVar13 = pbVar13 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_004d190e:
                  if (iVar9 == 0) {
                    bVar4 = true;
                    goto LAB_004d193b;
                  }
                }
                iVar11 = *(int *)(iVar11 + 4);
              } while (iVar11 != puVar6[2] + 0xb8);
            }
            puVar8 = puVar6 + 1;
            puVar6 = (undefined4 *)*puVar8;
          } while ((undefined4 *)*puVar8 != &DAT_0104d694);
        }
LAB_004d193b:
        puVar6 = FUN_004b6370((void *)**(undefined4 **)((int)this + 0x48c),local_ac);
        pbVar13 = (byte *)*puVar6;
        pbVar10 = local_12c;
        do {
          bVar1 = *pbVar10;
          bVar14 = bVar1 < *pbVar13;
          if (bVar1 != *pbVar13) {
LAB_004d1988:
            iVar11 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
            goto LAB_004d198d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar14 = bVar1 < pbVar13[1];
          if (bVar1 != pbVar13[1]) goto LAB_004d1988;
          pbVar10 = pbVar10 + 2;
          pbVar13 = pbVar13 + 2;
        } while (bVar1 != 0);
        iVar11 = 0;
LAB_004d198d:
        if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ac[0]);
        }
        if (iVar11 != 0) {
          if (bVar4) {
            local_154[0x12] = local_154[0x12] + 1;
            iVar11 = *(int *)((int)this + 0x48c);
            if ((iVar11 == 0) ||
               ((uint)(*(int *)((int)this + 0x494) - iVar11 >> 2) <=
                (uint)(*(int *)((int)this + 0x490) - iVar11 >> 2))) {
              ppuVar12 = &local_154;
LAB_004d1b4f:
              FUN_004b8e60((void *)((int)this + 0x488),*(undefined4 **)((int)this + 0x490),1,
                           ppuVar12);
            }
            else {
              puVar6 = *(undefined4 **)((int)this + 0x490);
              *puVar6 = local_154;
              *(undefined4 **)((int)this + 0x490) = puVar6 + 1;
            }
          }
          else {
            puVar6 = FUN_00430770(&local_150,local_2c,0,local_14c - 4);
            puVar8 = FUN_004312e0(local_6c,(undefined4 *)((int)this + 0x5d8),"/");
            puVar6 = FUN_0047aee0(local_8c,puVar8,puVar6);
            uVar2 = puVar6[1];
            pcVar3 = (char *)*puVar6;
            if (local_148 <= uVar2) {
              if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
                _free(local_150);
              }
              local_148 = uVar2 + 0x20 & 0xffffffe0;
              local_150 = _malloc(local_148);
            }
            _strncpy(local_150,pcVar3,uVar2);
            local_150[uVar2] = '\0';
            local_14c = uVar2;
            if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
              _free(local_8c[0]);
            }
            if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
              _free(local_6c[0]);
            }
            if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c[0]);
            }
            local_130 = FUN_004bc4e0(&local_150,(int)this,'\x01');
            iVar11 = *(int *)((int)this + 0x48c);
            if ((iVar11 == 0) ||
               ((uint)(*(int *)((int)this + 0x494) - iVar11 >> 2) <=
                (uint)(*(int *)((int)this + 0x490) - iVar11 >> 2))) {
              ppuVar12 = &local_130;
              goto LAB_004d1b4f;
            }
            puVar6 = *(undefined4 **)((int)this + 0x490);
            *puVar6 = local_130;
            *(undefined4 **)((int)this + 0x490) = puVar6 + 1;
          }
        }
        param_1 = FUN_00556700(&local_ec,param_1,&local_150,'\0');
      } while (param_1 != 0);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      uVar5 = uStack_3;
      if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
        _free(local_10c);
      }
    }
  }
  uStack_3 = uVar5;
  *(undefined1 *)((int)this + 0x600) = 1;
  if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
    _free(local_150);
  }
  if (0x14 < local_e4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ec);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d1c10 @ 004d1c10 ////

void __fastcall FUN_004d1c10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8cc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_004312e0(local_2c,(undefined4 *)(param_1 + 0x5d8),"/");
  puVar1 = FUN_0047aee0(local_4c,puVar1,(undefined4 *)(param_1 + 0x5d8));
  FUN_004312e0(local_6c,puVar1,"_establish_static_001");
  local_4 = 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_70 = FUN_004bc4e0(local_6c,param_1,'\0');
  if (local_70 != (undefined4 *)0x0) {
    FUN_004b9f20((void *)(param_1 + 0x488),&local_70);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d1cf0 @ 004d1cf0 ////

undefined4 * __fastcall FUN_004d1cf0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_EDX;
  ulonglong uVar6;
  char *pcVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8d9a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00537ac0(param_1);
  *param_1 = &PTR_FUN_00d1ed2c;
  param_1[0x1e] = &PTR_LAB_00d1ed0c;
  param_1[0x28] = &PTR_LAB_00d1ecf4;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = param_1 + 0x12d;
  *(undefined1 *)(param_1 + 0x12d) = 0;
  param_1[299] = 0;
  param_1[300] = 0x14;
  param_1[0x136] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x13a] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  FUN_0043b510(param_1 + 0x13c);
  param_1[0x13d] = param_1 + 0x140;
  *(undefined1 *)(param_1 + 0x140) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0x14;
  piVar1 = param_1 + 0x145;
  local_4._0_1_ = 6;
  _eh_vector_constructor_iterator_(piVar1,0x18,3,FUN_004be930,FUN_0044a470);
  local_4._0_1_ = 7;
  FUN_0043b510(param_1 + 0x158);
  param_1[0x159] = 0;
  param_1[0x15a] = param_1 + 0x15d;
  *(undefined1 *)(param_1 + 0x15d) = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0x14;
  local_4._0_1_ = 8;
  FUN_0043b510(param_1 + 0x163);
  piVar2 = param_1 + 0x165;
  param_1[0x168] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d1ec60;
  param_1[0x16a] = 0;
  param_1[0x16e] = param_1 + 0x171;
  *(undefined1 *)(param_1 + 0x171) = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0x14;
  param_1[0x176] = param_1 + 0x179;
  *(undefined1 *)(param_1 + 0x179) = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0x14;
  param_1[0x181] = 0;
  param_1[0x185] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = param_1 + 0x182;
  param_1[0x182] = &PTR_LAB_00d1ec70;
  param_1[0x187] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  param_1[0x136] = param_1;
  FUN_00acdb9e(0xe519c0);
  iVar4 = FUN_0097dda0();
  param_1[0x137] = iVar4;
  if (DAT_00e519bc != '\0') {
    iVar4 = 0x4d0;
    pcVar7 = "SetLink";
    pcVar5 = (char *)FUN_00acdb9e(0xe519c0);
    FUN_0097df60(pcVar5,pcVar7,iVar4);
    DAT_00e519bc = '\0';
  }
  param_1[0x13a] = param_1;
  FUN_00acdb9e(0xe519c0);
  iVar4 = FUN_0097dda0();
  param_1[0x13b] = iVar4;
  if (s___AVCItemPropSetFreshness_TM___00e5199c[0x1f] != '\0') {
    iVar4 = 0x4e0;
    pcVar7 = "AllSetsLink";
    pcVar5 = (char *)FUN_00acdb9e(0xe519c0);
    FUN_0097df60(pcVar5,pcVar7,iVar4);
    s___AVCItemPropSetFreshness_TM___00e5199c[0x1f] = '\0';
  }
  param_1[0x16b] = 0;
  param_1[0x162] = 0;
  *(undefined1 *)(param_1 + 0x164) = 1;
  (**(code **)(*piVar2 + 4))();
  param_1[0x16a] = 0;
  (**(code **)*piVar2)();
  param_1[0xb8] = param_1[0xb8] | 0x100;
  param_1[0x16c] = 0;
  *(undefined1 *)(param_1 + 0x157) = 0;
  *(undefined1 *)((int)param_1 + 0x55d) = 0;
  uVar3 = DAT_00e4fa4c;
  param_1[0x158] = DAT_00e4fa4c;
  param_1[0x159] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x180) = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  uVar6 = FUN_00990ae0(uVar3,extraout_EDX);
  param_1[0x16d] = (int)uVar6;
  (**(code **)(*piVar1 + 4))();
  param_1[0x14a] = 0;
  (**(code **)*piVar1)();
  (**(code **)(param_1[0x14b] + 4))();
  param_1[0x150] = 0;
  (**(code **)param_1[0x14b])();
  (**(code **)(param_1[0x151] + 4))();
  param_1[0x156] = 0;
  (**(code **)param_1[0x151])();
  param_1[0x132] = 4;
  param_1[0x163] = DAT_00e4fa4c;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x133) = 0;
  *(undefined1 *)((int)param_1 + 0x4cd) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_004d2080 @ 004d2080 ////

void __fastcall FUN_004d2080(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca8e6a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_00d1ed2c;
  param_1[0x1e] = (int)&PTR_LAB_00d1ed0c;
  param_1[0x28] = (int)&PTR_LAB_00d1ecf4;
  local_4 = 0xc;
  FUN_005369a0(param_1);
  FUN_004cefb0((int)param_1);
  if ((undefined4 *)param_1[0x16c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x16c])(1);
  }
  puVar2 = (undefined4 *)param_1[0x187];
  param_1[0x16c] = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x182] + 4))();
    param_1[0x187] = 0;
    (**(code **)param_1[0x182])();
  }
  if (param_1[0x134] != 0) {
    if ((int *)param_1[0x135] != (int *)0x0) {
      *(int *)param_1[0x135] = param_1[0x134];
    }
    if (param_1[0x134] != 0) {
      *(int *)(param_1[0x134] + 4) = param_1[0x135];
    }
    param_1[0x134] = 0;
    param_1[0x135] = 0;
  }
  if ((int *)param_1[0x139] != (int *)0x0) {
    *(int *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(int *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x182] = (int)&PTR_LAB_00d1ec70;
  if ((int *)param_1[0x184] != (int *)0x0) {
    *(int *)param_1[0x184] = param_1[0x183];
  }
  if (param_1[0x183] != 0) {
    *(int *)(param_1[0x183] + 4) = param_1[0x184];
  }
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x187] = 0;
  if ((int *)param_1[0x184] != (int *)0x0) {
    *(int *)param_1[0x184] = param_1[0x183];
  }
  if (param_1[0x183] != 0) {
    *(int *)(param_1[0x183] + 4) = param_1[0x184];
  }
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  if (0x14 < (uint)param_1[0x178]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x176]);
  }
  if (0x14 < (uint)param_1[0x170]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x16e]);
  }
  param_1[0x165] = (int)&PTR_FUN_00d1ec60;
  if ((int *)param_1[0x167] != (int *)0x0) {
    *(int *)param_1[0x167] = param_1[0x166];
  }
  if (param_1[0x166] != 0) {
    *(int *)(param_1[0x166] + 4) = param_1[0x167];
  }
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x16a] = 0;
  if ((int *)param_1[0x167] != (int *)0x0) {
    *(int *)param_1[0x167] = param_1[0x166];
  }
  if (param_1[0x166] != 0) {
    *(int *)(param_1[0x166] + 4) = param_1[0x167];
  }
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  if (0x14 < (uint)param_1[0x15c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x15a]);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  _eh_vector_destructor_iterator_(param_1 + 0x145,0x18,3,FUN_0044a470);
  if (0x14 < (uint)param_1[0x13f]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x13d]);
  }
  if ((int *)param_1[0x139] != (int *)0x0) {
    *(int *)param_1[0x139] = param_1[0x138];
  }
  if (param_1[0x138] != 0) {
    *(int *)(param_1[0x138] + 4) = param_1[0x139];
  }
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  if ((int *)param_1[0x135] != (int *)0x0) {
    *(int *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(int *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  if (0x14 < (uint)param_1[300]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12a]);
  }
  FUN_004d0ee0((int)(param_1 + 0x126));
  if ((void *)param_1[0x123] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x123]);
  }
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  local_4 = 0xffffffff;
  FUN_00536b60(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004d23b0 @ 004d23b0 ////

void __fastcall FUN_004d23b0(int param_1)

{
  int local_4;
  
  if ((*(int *)(param_1 + 0x48c) != 0) &&
     (1 < (uint)(*(int *)(param_1 + 0x490) - *(int *)(param_1 + 0x48c) >> 2))) {
    local_4 = **(int **)(param_1 + 0x48c);
    *(int *)(local_4 + 0x48) = *(int *)(local_4 + 0x48) + 1;
    FUN_004cefb0(param_1);
    FUN_004b9f20((void *)(param_1 + 0x488),&local_4);
    *(undefined1 *)(param_1 + 0x600) = 0;
  }
  return;
}


//// FUNCTION FUN_004d2400 @ 004d2400 ////

void __fastcall FUN_004d2400(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004d0940(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004d2430 @ 004d2430 ////

int * __cdecl FUN_004d2430(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint _Count;
  char *_Source;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *this;
  int *piVar7;
  byte *pbVar8;
  bool bVar9;
  undefined1 uVar10;
  int *local_70;
  byte *local_6c;
  undefined4 local_68;
  uint local_64;
  byte local_60 [20];
  byte *local_4c;
  uint local_48;
  uint local_44;
  byte local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8eab;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_70 = (int *)0x0;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_6c,(char *)*param_1,param_1[1]);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  FUN_0048ad50((int *)&local_6c);
  puVar5 = DAT_0104ad48;
  do {
    if (puVar5 == &DAT_0104ad54) {
      puVar5 = FUN_0040d6b0(local_2c,"data/",&local_6c);
      puVar5 = FUN_004312e0(&local_4c,puVar5,".ini");
      local_4._0_1_ = 3;
      uVar6 = FUN_009d3660(puVar5,(uint *)0x0);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_4._0_1_ = 0;
      uVar10 = (undefined1)local_4;
      local_4._0_1_ = 0;
      if (local_24 < 0x15) {
        if ((char)uVar6 != '\0') {
          param_1 = operator_new(0x624);
          local_4._0_1_ = 4;
          if (param_1 == (undefined4 *)0x0) {
            local_70 = (int *)0x0;
          }
          else {
            local_70 = FUN_004d1cf0(param_1);
          }
          uVar6 = param_2;
          piVar7 = local_70 + 0x138;
          local_70[0x139] = (int)&DAT_0104ad20;
          *piVar7 = (int)DAT_0104ad20;
          *(int **)((int)DAT_0104ad20 + 4) = piVar7;
          local_4._0_1_ = 0;
          DAT_0104ad20 = piVar7;
          (**(code **)(*local_70 + 0x1a4))(&local_6c,param_2);
          if ((char)uVar6 != '\0') {
            (**(code **)(*local_70 + 0x124))();
          }
          piVar7 = (int *)FUN_0043b520(&param_1,1890.0);
          local_70[0x13c] = *piVar7;
          uVar10 = (undefined1)local_4;
        }
        local_4._0_1_ = uVar10;
        if (local_64 < 0x15) {
          ExceptionList = pvStack_c;
          return local_70;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    piVar7 = (int *)puVar5[2];
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _Count = piVar7[0xd0];
    _Source = (char *)piVar7[0xcf];
    if (0x13 < _Count) {
      local_44 = _Count + 0x20 & 0xffffffe0;
      local_4c = _malloc(local_44);
    }
    _strncpy((char *)local_4c,_Source,_Count);
    local_4c[_Count] = 0;
    local_4._0_1_ = 1;
    pbVar3 = local_4c;
    pbVar8 = local_6c;
    do {
      bVar2 = *pbVar3;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_004d2534:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_004d2539;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_004d2534;
      pbVar3 = pbVar3 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_004d2539:
    local_48 = _Count;
    if (iVar4 == 0) {
      if ((int *)piVar7[0x135] != (int *)0x0) {
        *(int *)piVar7[0x135] = piVar7[0x134];
      }
      if (piVar7[0x134] != 0) {
        *(int *)(piVar7[0x134] + 4) = piVar7[0x135];
      }
      piVar7[0x134] = 0;
      piVar7[0x135] = 0;
      piVar7[0x158] = DAT_00e4fa4c;
      *(undefined1 *)(piVar7 + 0x19) = 1;
      piVar1 = piVar7 + 0x138;
      piVar7[0x139] = (int)&DAT_0104ad20;
      *piVar1 = (int)DAT_0104ad20;
      *(int **)((int)DAT_0104ad20 + 4) = piVar1;
      DAT_0104ad20 = piVar1;
      iVar4 = FUN_00529ef0((int)piVar7);
      if (iVar4 != 0) {
        uVar10 = 1;
        this = (void *)FUN_00529ef0((int)piVar7);
        FUN_008b1eb0(this,uVar10);
      }
      if ((char)param_2 != '\0') {
        (**(code **)(*piVar7 + 0x124))();
      }
      *(undefined1 *)(piVar7 + 0x157) = 0;
      if (local_44 < 0x15) {
        if (local_64 < 0x15) {
          ExceptionList = pvStack_c;
          return piVar7;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    puVar5 = (undefined4 *)puVar5[1];
  } while( true );
}


//// FUNCTION FUN_004d2790 @ 004d2790 ////

int * __cdecl FUN_004d2790(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void *this;
  int *piVar5;
  undefined1 uVar6;
  undefined4 *local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8ee3;
  pvStack_c = ExceptionList;
  piVar5 = (int *)0x0;
  ExceptionList = &pvStack_c;
  FUN_0040d6b0(local_6c,"set/",param_1);
  local_4 = 0;
  FUN_0048ad50((int *)local_6c);
  puVar1 = FUN_0040d6b0(local_2c,"data/",local_6c);
  puVar1 = FUN_004312e0(local_4c,puVar1,".ini");
  local_4._0_1_ = 2;
  uVar2 = FUN_009d3660(puVar1,(uint *)0x0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  local_4._0_1_ = 0;
  uVar6 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if ((char)uVar2 != '\0') {
    local_70 = operator_new(0x624);
    local_4._0_1_ = 3;
    if (local_70 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_004d1cf0(local_70);
    }
    piVar5[0x135] = (int)&DAT_0104ad54;
    piVar3 = piVar5 + 0x134;
    *piVar3 = (int)DAT_0104ad54;
    *(int **)((int)DAT_0104ad54 + 4) = piVar3;
    local_4._0_1_ = 0;
    DAT_0104ad54 = piVar3;
    *(undefined1 *)(piVar5 + 0x157) = 1;
    *(undefined1 *)(piVar5 + 0x19) = 0;
    (**(code **)(*piVar5 + 0x1a4))(local_6c,0);
    piVar3 = (int *)FUN_0043b520(&local_70,1890.0);
    piVar5[0x13c] = *piVar3;
    iVar4 = FUN_00529ef0((int)piVar5);
    uVar6 = (undefined1)local_4;
    if (iVar4 != 0) {
      uVar6 = 0;
      this = (void *)FUN_00529ef0((int)piVar5);
      FUN_008b1eb0(this,uVar6);
      uVar6 = (undefined1)local_4;
    }
  }
  local_4._0_1_ = uVar6;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
  ExceptionList = pvStack_c;
  return piVar5;
}


//// FUNCTION FUN_004d2910 @ 004d2910 ////

float * __cdecl FUN_004d2910(float *param_1,undefined4 *param_2)

{
  int *this;
  float *pfVar1;
  
  pfVar1 = param_1;
  this = FUN_004d12e0(&DAT_0104ad74,param_2);
  FUN_004950c0(this,pfVar1);
  return param_1;
}


//// FUNCTION FUN_004d2940 @ 004d2940 ////

void __thiscall FUN_004d2940(void *this,float param_1)

{
  undefined4 *puVar1;
  int *this_00;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1 * *(float *)((int)this + 0x604);
  if (0.0 <= fVar2) {
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = 0.0;
  }
  fVar3 = DAT_00e4fa4c;
  puVar1 = (undefined4 *)FUN_00528450((int)this);
  this_00 = FUN_004d12e0(&DAT_0104ad74,puVar1);
  FUN_004950a0(this_00,fVar2,fVar3);
  return;
}


//// FUNCTION FUN_004d29a0 @ 004d29a0 ////

void __cdecl FUN_004d29a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  float fStack_60;
  float local_5c;
  undefined4 local_58;
  float fStack_54;
  undefined4 uStack_50;
  float local_4c [2];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [12];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8ef8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = FUN_004d2430(param_1,0);
  local_2c = local_20;
  local_5c = 0.0;
  local_58 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"facility_production",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 0;
  piVar2 = (int *)FUN_00845f70(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x34))(local_38);
    FUN_009840b0(&fStack_54,puVar3);
    local_5c = fStack_54;
    local_58 = uStack_50;
  }
  puVar3 = (undefined4 *)FUN_0046d2b0(local_4c,&local_5c,1,0x26);
  uStack_44 = *puVar3;
  uStack_40 = puVar3[1];
  uStack_3c = 0;
  fVar5 = FUN_004012c0(0.0);
  fStack_60 = (float)fVar5;
  (**(code **)(*piVar1 + 0x28))(&uStack_44,&fStack_60);
  iVar4 = FUN_005291b0((int)piVar1);
  *(undefined1 *)(iVar4 + 0x60) = 1;
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_004d2b20 @ 004d2b20 ////

int __fastcall FUN_004d2b20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004d2b50 @ 004d2b50 ////

void __thiscall FUN_004d2b50(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_004cfc60(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x1c;
    return;
  }
  FUN_004d1570(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004d2be0 @ 004d2be0 ////

int __fastcall FUN_004d2be0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce400();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004d2c10 @ 004d2c10 ////

int __fastcall FUN_004d2c10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004ce450();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x51) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004d2c40 @ 004d2c40 ////

void FUN_004d2c40(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104ad0c;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104ad0c;
    DAT_010584cc = DAT_010584cc + 1;
  }
  local_4 = &DAT_0104ad40;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104ad40;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_004d2cf0 @ 004d2cf0 ////

void __fastcall FUN_004d2cf0(int param_1)

{
  bool bVar1;
  void *this;
  
  bVar1 = FUN_004cef70(param_1);
  if (!bVar1) {
    FUN_004d1640(this,*(uint *)((int)this + 0x5f8));
  }
  return;
}


//// FUNCTION FUN_004d2d10 @ 004d2d10 ////

void __thiscall FUN_004d2d10(void *this,undefined4 *param_1,char param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint _Size;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  undefined **local_98;
  int local_94;
  int *local_90;
  byte local_8c [8];
  undefined4 local_84;
  undefined **local_78;
  float local_74;
  void *local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8fa9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0052bf80(this,param_1,param_2);
  FUN_0043b520(&local_74,DAT_00e51878);
  puVar3 = (undefined4 *)FUN_00528450((int)this);
  piVar4 = FUN_004d12e0(&DAT_0104ad74,puVar3);
  FUN_00494f80((int)piVar4);
  pvVar5 = (void *)FUN_00528140((int)this);
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  local_70 = pvVar5;
  _strncpy((char *)local_98,"",0);
  local_94 = 0;
  *(byte *)local_98 = 0;
  local_4 = 0;
  FUN_00558a50(pvVar5,&local_98,(undefined4 *)0x1);
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"boredom",7);
  local_94 = 7;
  *(byte *)((int)local_98 + 7) = 0;
  local_4 = 1;
  fVar11 = FUN_00558610(pvVar5,&local_98,0.0);
  *(float *)((int)this + 0x604) = (float)fVar11;
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"quality",7);
  local_94 = 7;
  *(byte *)((int)local_98 + 7) = 0;
  local_4 = 2;
  fVar11 = FUN_00558610(pvVar5,&local_98,1.0);
  if ((float10)0.0 <= fVar11) {
    if ((float10)1.0 < fVar11) {
      fVar11 = (float10)1.0;
    }
  }
  else {
    fVar11 = (float10)0.0;
  }
  local_78 = (undefined **)(float)fVar11;
  *(undefined ***)((int)this + 0x564) = local_78;
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"backdrop",8);
  local_94 = 8;
  *(byte *)(local_98 + 2) = 0;
  local_4 = 3;
  puVar3 = FUN_005584e0(pvVar5,&local_4c,&local_98);
  FUN_004015d0((void *)((int)this + 0x568),(char *)*puVar3,puVar3[1]);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"0",1);
  local_94 = 1;
  *(byte *)((int)local_98 + 1) = 0;
  pbVar6 = *(byte **)((int)this + 0x568);
  local_78 = local_98;
  do {
    bVar1 = *pbVar6;
    bVar10 = bVar1 < *(byte *)local_78;
    if (bVar1 != *(byte *)local_78) {
LAB_004d2fef:
      iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_004d2ff4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar10 = bVar1 < *(byte *)((int)local_78 + 1);
    if (bVar1 != *(byte *)((int)local_78 + 1)) goto LAB_004d2fef;
    local_78 = (undefined **)((int)local_78 + 2);
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_004d2ff4:
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  if (iVar7 == 0) {
    FUN_004015d0((void *)((int)this + 0x568),"",0);
  }
  bVar10 = FUN_00430950((undefined4 *)((int)this + 0x568),"");
  if (bVar10) {
    FUN_004073f0((void *)((int)this + 0x568),".dds",4);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"parallax",8);
  local_94 = 8;
  *(byte *)(local_98 + 2) = 0;
  local_4 = 4;
  iVar7 = FUN_00558750(pvVar5,&local_98,0);
  *(bool *)((int)this + 0x4cc) = iVar7 != 0;
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"rear_projection",0xf);
  local_94 = 0xf;
  *(byte *)((int)local_98 + 0xf) = 0;
  local_4 = 5;
  iVar7 = FUN_00558750(pvVar5,&local_98,0);
  *(bool *)((int)this + 0x4cd) = iVar7 != 0;
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)0x14;
  _strncpy((char *)local_98,"scene",5);
  local_94 = 5;
  *(byte *)((int)local_98 + 5) = 0;
  local_4 = 6;
  uVar8 = FUN_00558a50(pvVar5,&local_98,(undefined4 *)0x0);
  if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  if ((char)uVar8 != '\0') {
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    local_98 = (undefined **)local_8c;
    local_4 = 7;
    local_8c[0] = 0;
    local_94 = 0;
    local_90 = (int *)0x14;
    _strncpy((char *)local_98,"setid",5);
    local_94 = 5;
    *(byte *)((int)local_98 + 5) = 0;
    local_4._0_1_ = 8;
    FUN_005584e0(pvVar5,&local_4c,&local_98);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
      _free(local_98);
    }
    piVar4 = (int *)((int)this + 0x5d8);
    FUN_004015d0(piVar4,local_4c,local_48);
    uVar9 = FUN_00413450(piVar4,".",0,1);
    puVar3 = FUN_00430770(piVar4,local_2c,0,uVar9);
    FUN_004015d0(piVar4,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar9 = *(uint *)((int)this + 0x5dc);
    while (uVar9 < 3) {
      puVar3 = FUN_0040d6b0(local_2c,"0",piVar4);
      uVar9 = puVar3[1];
      local_78 = (undefined **)*puVar3;
      if (*(uint *)((int)this + 0x5e0) <= uVar9) {
        if (0x14 < *(uint *)((int)this + 0x5e0)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar4);
        }
        _Size = uVar9 + 0x20 & 0xffffffe0;
        *(uint *)((int)this + 0x5e0) = _Size;
        pvVar5 = _malloc(_Size);
        *piVar4 = (int)pvVar5;
      }
      _strncpy((char *)*piVar4,(char *)local_78,uVar9);
      *(uint *)((int)this + 0x5dc) = uVar9;
      *(undefined1 *)(uVar9 + *piVar4) = 0;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      uVar9 = *(uint *)((int)this + 0x5dc);
    }
    iVar7 = FUN_004cd720((int)this);
    *(int *)((int)this + 0x5fc) = iVar7;
    FUN_004d1c10((int)this);
    puVar3 = FUN_0040d6b0(local_2c,"data/scene/",&local_4c);
    FUN_004015d0((void *)((int)this + 0x5b8),(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    pvVar5 = local_70;
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_98 = (undefined **)local_8c;
  local_8c[0] = 0;
  local_94 = 0;
  local_90 = (int *)&DAT_00000014;
  _strncpy((char *)local_98,"genre",5);
  local_94 = 5;
  *(byte *)((int)local_98 + 5) = 0;
  local_4 = 0xb;
  uVar8 = FUN_00558a50(pvVar5,&local_98,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  if (&DAT_00000014 < local_90) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  if ((char)uVar8 != '\0') {
    FUN_004d1410((void *)((int)this + 0x498),DAT_00f88664);
    local_78 = (undefined **)*DAT_00f88660;
    if (local_78 != DAT_00f88660) {
      do {
        puVar2 = local_78[0xb];
        fVar12 = -0.1;
        puVar3 = (undefined4 *)FUN_00449b40((int)puVar2);
        fVar11 = FUN_00558610(local_70,puVar3,fVar12);
        local_74 = (float)fVar11;
        if ((float10)0.0 <= fVar11) {
          piVar4 = FUN_004cea60(&local_98,(int)puVar2,local_74);
          local_4 = 0xc;
          FUN_004d2b50((void *)((int)this + 0x498),(int)piVar4);
          local_4 = 0xffffffff;
          local_98 = &PTR_FUN_00d1a49c;
          if (local_90 != (int *)0x0) {
            *local_90 = local_94;
          }
          if (local_94 != 0) {
            *(int **)(local_94 + 4) = local_90;
          }
          local_84 = 0;
          local_94 = 0;
          local_90 = (int *)0x0;
        }
        FUN_00449dd0((int *)&local_78);
        pvVar5 = local_70;
      } while (local_78 != DAT_00f88660);
    }
    local_98 = (undefined **)local_8c;
    local_8c[0] = 0;
    local_94 = 0;
    local_90 = (int *)0x14;
    _strncpy((char *)local_98,"priority1",9);
    local_94 = 9;
    *(byte *)((int)local_98 + 9) = 0;
    local_4 = 0xd;
    FUN_005584e0(pvVar5,&local_4c,&local_98);
    local_4._0_1_ = 0xf;
    if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
      _free(local_98);
    }
    local_74 = (float)GenreKey_ToEnum(&local_4c);
    piVar4 = (int *)((int)this + 0x514);
    (**(code **)(*piVar4 + 4))();
    *(float *)((int)this + 0x528) = local_74;
    (**(code **)*piVar4)();
    if (*(int *)((int)this + 0x528) == 0) {
      local_6c = local_60;
      local_60[0] = '\0';
      local_68 = 0;
      local_64 = 0x14;
      _strncpy(local_6c,"genre_action",0xc);
      local_68 = 0xc;
      local_6c[0xc] = '\0';
      local_4._0_1_ = 0x10;
      iVar7 = GenreKey_ToEnum(&local_6c);
      (**(code **)(*piVar4 + 4))();
      *(int *)((int)this + 0x528) = iVar7;
      (**(code **)*piVar4)();
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d3640 @ 004d3640 ////

int * __thiscall FUN_004d3640(void *this,byte param_1)

{
  FUN_004d2080(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004d3660 @ 004d3660 ////

int * __cdecl FUN_004d3660(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_20 [2];
  uint local_18;
  
  puVar2 = DAT_0104ad48;
  do {
    if (puVar2 == &DAT_0104ad54) {
      piVar5 = FUN_004d2790(param_1);
      return piVar5;
    }
    piVar5 = (int *)puVar2[2];
    FUN_0040d6b0(local_20,"set/",param_1);
    pbVar3 = (byte *)piVar5[0xcf];
    pbVar6 = local_20[0];
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_004d36c4:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004d36c9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_004d36c4;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004d36c9:
    if (iVar4 == 0) {
      if (local_18 < 0x15) {
        return piVar5;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}


//// FUNCTION FUN_004d3720 @ 004d3720 ////

float * __thiscall FUN_004d3720(void *this,float *param_1)

{
  int *this_00;
  float *pfVar1;
  
  pfVar1 = param_1;
  this_00 = FUN_004d12e0(&DAT_0104ad74,(undefined4 *)((int)this + 0x35c));
  FUN_004950c0(this_00,pfVar1);
  return param_1;
}


//// FUNCTION FUN_004d3750 @ 004d3750 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d3750(void *this,float *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *this_00;
  undefined4 *puVar3;
  void *this_01;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  void **ppvVar10;
  float *pfVar11;
  undefined4 *local_5c;
  float local_58;
  void *local_54;
  int local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca8fc8;
  local_c = ExceptionList;
  pfVar11 = &local_58;
  ExceptionList = &local_c;
  local_54 = this;
  this_00 = FUN_004d12e0(&DAT_0104ad74,(undefined4 *)((int)this + 0x35c));
  FUN_004950c0(this_00,pfVar11);
  local_5c = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      iVar6 = local_5c[2];
      if (((iVar6 != 0) && (cVar2 = FUN_005b3c80(iVar6), cVar2 != '\0')) && (iVar6 != param_2)) {
        iVar7 = *(int *)(iVar6 + 0xac);
        local_50 = iVar6 + 0xb8;
        if (iVar7 != local_50) {
          do {
            iVar6 = *(int *)(iVar7 + 8);
            if (iVar6 != 0) {
              puVar3 = FUN_004cd890(local_54,local_2c);
              ppvVar10 = local_4c;
              local_4 = 0;
              this_01 = (void *)FUN_004df220(iVar6);
              puVar4 = FUN_004cd890(this_01,ppvVar10);
              pbVar8 = (byte *)*puVar3;
              pbVar5 = (byte *)*puVar4;
              do {
                bVar1 = *pbVar5;
                bVar9 = bVar1 < *pbVar8;
                if (bVar1 != *pbVar8) {
LAB_004d3858:
                  iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_004d385d;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar5[1];
                bVar9 = bVar1 < pbVar8[1];
                if (bVar1 != pbVar8[1]) goto LAB_004d3858;
                pbVar5 = pbVar5 + 2;
                pbVar8 = pbVar8 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_004d385d:
              if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                _free(local_4c[0]);
              }
              local_4 = 0xffffffff;
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c[0]);
              }
              if (iVar6 == 0) {
                local_58 = _DAT_0104abe8 * *(float *)((int)local_54 + 0x604) + local_58;
                if (0.0 <= local_58) {
                  if (1.0 < local_58) {
                    local_58 = 1.0;
                  }
                }
                else {
                  local_58 = 0.0;
                }
              }
            }
            iVar7 = *(int *)(iVar7 + 4);
          } while (iVar7 != local_50);
        }
      }
      local_5c = (undefined4 *)local_5c[1];
    } while (local_5c != &DAT_0104d694);
  }
  *param_1 = local_58;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d3930 @ 004d3930 ////

void * __thiscall FUN_004d3930(void *this,byte param_1)

{
  FUN_004d2400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004d3950 @ 004d3950 ////

void FUN_004d3950(void)

{
  void *_Memory;
  undefined1 local_4 [4];
  
  while( true ) {
    if (DAT_0104ad08 == 0) {
      return;
    }
    _Memory = *(void **)(*DAT_0104ad04 + 0x10);
    if (_Memory != (void *)0x0) break;
    FUN_004d0010(&DAT_0104ad00,local_4,(int *)*DAT_0104ad04);
  }
  FUN_004d2400(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_004d39b0 @ 004d39b0 ////

void __thiscall FUN_004d39b0(void *this,undefined4 *param_1)

{
  uint uVar1;
  char *pcVar2;
  void *this_00;
  uint _Count;
  int iVar3;
  undefined4 *puVar4;
  void *pvStack_1d0;
  void *pvStack_1cc;
  char cStack_1c8;
  void *local_1c4;
  void *pvStack_1c0;
  char *pcStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  char acStack_1b0 [20];
  char *pcStack_19c;
  uint uStack_198;
  uint uStack_194;
  char acStack_190 [20];
  char *pcStack_17c;
  uint uStack_178;
  uint uStack_174;
  char acStack_170 [20];
  undefined1 uStack_15c;
  char *pcStack_158;
  uint uStack_154;
  uint uStack_150;
  char acStack_14c [20];
  char *pcStack_138;
  uint uStack_134;
  uint uStack_130;
  char acStack_12c [20];
  char *pcStack_118;
  uint uStack_114;
  uint uStack_110;
  char acStack_10c [20];
  undefined1 uStack_f8;
  char *pcStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  char acStack_e8 [20];
  char *pcStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  char acStack_c8 [20];
  char *pcStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  char acStack_a8 [20];
  char *pcStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  char acStack_88 [20];
  char *pcStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  char acStack_68 [20];
  void *apvStack_54 [2];
  uint uStack_4c;
  undefined4 auStack_34 [2];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9061;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  local_1c4 = this;
  pvStack_1cc = (void *)FUN_00567d80((undefined4 *)((int)this + 0x5d8));
  FUN_004ceba0(&DAT_0104ad00,&pvStack_1d0,(int *)&pvStack_1cc);
  if (pvStack_1d0 == DAT_0104ad04) {
    pvStack_1d0 = operator_new(0xc);
    uStack_4 = 0;
    pvStack_1cc = pvStack_1d0;
    if (pvStack_1d0 == (void *)0x0) {
      pvStack_1d0 = (void *)0x0;
    }
    else {
      iVar3 = FUN_004ce450();
      *(int *)((int)pvStack_1d0 + 4) = iVar3;
      *(undefined1 *)(iVar3 + 0x51) = 1;
      *(int *)(*(int *)((int)pvStack_1d0 + 4) + 4) = *(int *)((int)pvStack_1d0 + 4);
      *(undefined4 *)*(undefined4 *)((int)pvStack_1d0 + 4) = *(undefined4 *)((int)pvStack_1d0 + 4);
      *(int *)(*(int *)((int)pvStack_1d0 + 4) + 8) = *(int *)((int)pvStack_1d0 + 4);
      *(undefined4 *)((int)pvStack_1d0 + 8) = 0;
    }
    this_00 = pvStack_1d0;
    FUN_0040d6b0(apvStack_54,"data/scene/",(undefined4 *)((int)this + 0x5d8));
    pcStack_158 = acStack_14c;
    acStack_14c[0] = '\0';
    uStack_154 = 0;
    uStack_150 = 0x14;
    pcStack_1bc = acStack_1b0;
    acStack_1b0[0] = '\0';
    uStack_1b8 = 0;
    uStack_1b4 = 0x14;
    pcStack_19c = acStack_190;
    acStack_190[0] = '\0';
    uStack_198 = 0;
    uStack_194 = 0x14;
    uStack_4 = 4;
    pvStack_1cc = (void *)FUN_00556700(apvStack_54,0,&pcStack_158,'\0');
    pcVar2 = pcStack_158;
    uVar1 = uStack_154;
    while ((pcStack_158 = pcVar2, uStack_154 = uVar1, pvStack_1cc != (void *)0x0 && (4 < uVar1))) {
      if (uStack_1b4 <= uVar1) {
        if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1bc);
        }
        uStack_1b4 = uVar1 + 0x20 & 0xffffffe0;
        pcStack_1bc = _malloc(uStack_1b4);
      }
      _strncpy(pcStack_1bc,pcVar2,uVar1);
      pcStack_1bc[uVar1] = '\0';
      uStack_1b8 = uVar1;
      puVar4 = FUN_004312e0(apvStack_2c,(undefined4 *)((int)local_1c4 + 0x5d8),"_");
      uVar1 = puVar4[1];
      pcVar2 = (char *)*puVar4;
      if (uStack_194 <= uVar1) {
        if (0x14 < uStack_194) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_19c);
        }
        uStack_194 = uVar1 + 0x20 & 0xffffffe0;
        pcStack_19c = _malloc(uStack_194);
      }
      _strncpy(pcStack_19c,pcVar2,uVar1);
      pcStack_19c[uVar1] = '\0';
      uStack_198 = uVar1;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      pcStack_f4 = acStack_e8;
      acStack_e8[0] = '\0';
      uStack_f0 = 0;
      uStack_ec = 0x14;
      _strncpy(pcStack_f4,"",0);
      uStack_f0 = 0;
      *pcStack_f4 = '\0';
      uStack_4._0_1_ = 5;
      FUN_00569860((int *)&pcStack_1bc,&pcStack_19c,&pcStack_f4);
      if (0x14 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_f4);
      }
      pcStack_74 = acStack_68;
      acStack_68[0] = '\0';
      uStack_70 = 0;
      uStack_6c = 0x14;
      _strncpy(pcStack_74,"",0);
      uStack_70 = 0;
      *pcStack_74 = '\0';
      pcStack_94 = acStack_88;
      acStack_88[0] = '\0';
      uStack_90 = 0;
      uStack_8c = 0x14;
      _strncpy(pcStack_94,"_",1);
      uStack_90 = 1;
      pcStack_94[1] = '\0';
      uStack_4._0_1_ = 7;
      FUN_00569860((int *)&pcStack_1bc,&pcStack_94,&pcStack_74);
      if (0x14 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_94);
      }
      if (0x14 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_74);
      }
      pcStack_b4 = acStack_a8;
      acStack_a8[0] = '\0';
      uStack_b0 = 0;
      uStack_ac = 0x14;
      _strncpy(pcStack_b4,"",0);
      uStack_b0 = 0;
      *pcStack_b4 = '\0';
      pcStack_d4 = acStack_c8;
      acStack_c8[0] = '\0';
      uStack_d0 = 0;
      uStack_cc = 0x14;
      _strncpy(pcStack_d4,".ini",4);
      uStack_d0 = 4;
      pcStack_d4[4] = '\0';
      uStack_4._0_1_ = 9;
      FUN_00569860((int *)&pcStack_1bc,&pcStack_d4,&pcStack_b4);
      uVar1 = uStack_154;
      pcVar2 = pcStack_158;
      if (0x14 < uStack_cc) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_d4);
      }
      if (0x14 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_b4);
      }
      pcStack_17c = acStack_170;
      acStack_170[0] = '\0';
      uStack_178 = 0;
      uStack_174 = 0x14;
      uStack_15c = 0;
      uStack_4 = CONCAT31(uStack_4._1_3_,10);
      if (0x13 < uStack_154) {
        uStack_174 = uStack_154 + 0x20 & 0xffffffe0;
        pcStack_17c = _malloc(uStack_174);
      }
      _strncpy(pcStack_17c,pcVar2,uVar1);
      uStack_178 = uVar1;
      pcStack_17c[uVar1] = '\0';
      iVar3 = FUN_009623a0(&pcStack_1bc);
      uVar1 = uStack_1b8;
      pcVar2 = pcStack_1bc;
      if (iVar3 != 0) {
        uStack_15c = 1;
      }
      pcStack_138 = acStack_12c;
      acStack_12c[0] = '\0';
      uStack_134 = 0;
      uStack_130 = 0x14;
      if (0x13 < uStack_1b8) {
        uStack_130 = uStack_1b8 + 0x20 & 0xffffffe0;
        pcStack_138 = _malloc(uStack_130);
      }
      _strncpy(pcStack_138,pcVar2,uVar1);
      _Count = uStack_178;
      pcVar2 = pcStack_17c;
      uStack_134 = uVar1;
      pcStack_138[uVar1] = '\0';
      pcStack_118 = acStack_10c;
      acStack_10c[0] = '\0';
      uStack_114 = 0;
      uStack_110 = 0x14;
      if (0x13 < uStack_178) {
        uStack_110 = uStack_178 + 0x20 & 0xffffffe0;
        pcStack_118 = _malloc(uStack_110);
      }
      _strncpy(pcStack_118,pcVar2,_Count);
      uStack_114 = _Count;
      pcStack_118[_Count] = '\0';
      uStack_f8 = uStack_15c;
      uStack_4._0_1_ = 0xb;
      FUN_004d0b60(pvStack_1d0,auStack_34,&pcStack_138);
      uStack_4._0_1_ = 10;
      if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_118);
      }
      if (0x14 < uStack_130) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_138);
      }
      pvStack_1cc = (void *)FUN_00556700(apvStack_54,(uint)pvStack_1cc,&pcStack_158,'\0');
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      this_00 = pvStack_1d0;
      pcVar2 = pcStack_158;
      uVar1 = uStack_154;
      if (0x14 < uStack_174) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_17c);
      }
    }
    local_1c4 = (void *)FUN_00567d80((undefined4 *)((int)local_1c4 + 0x4f4));
    pvStack_1c0 = this_00;
    FUN_004d0aa0(&DAT_0104ad00,&pvStack_1cc,(int *)&local_1c4);
    if (cStack_1c8 == '\0') {
      if (this_00 != (void *)0x0) {
        FUN_004d0940(this_00,&local_1c4,(int *)**(int **)((int)this_00 + 4),
                     *(int **)((int)this_00 + 4));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this_00 + 4));
      }
    }
    else {
      *param_1 = this_00;
    }
    if (0x14 < uStack_194) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_19c);
    }
    if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1bc);
    }
    if (0x14 < uStack_150) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_158);
    }
    if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_54[0]);
    }
  }
  else {
    *param_1 = *(undefined4 *)((int)pvStack_1d0 + 0x10);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004d4120 @ 004d4120 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_004d4120(int param_1,char param_2,int param_3,int param_4)

{
  int *this;
  int iVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fStack_10;
  float local_c;
  float local_8;
  undefined4 *local_4;
  
  piVar8 = (int *)0x0;
  iVar6 = 0;
  local_c = 1.0;
  local_8 = 1.0;
  local_4 = DAT_0104ad14;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      this = (int *)local_4[2];
      iVar7 = iVar6;
      if ((param_2 == '\0') || (this[0xae] == 5)) {
        if (param_4 != 0) {
          for (puVar4 = *(undefined4 **)(param_4 + 4); puVar4 != *(undefined4 **)(param_4 + 8);
              puVar4 = puVar4 + 1) {
            if ((int *)*puVar4 == this) goto LAB_004d4338;
          }
        }
        if ((param_1 == 0) || (cVar3 = (**(code **)(*this + 0x1d4))(param_1,0), cVar3 != '\0')) {
          FUN_004d3750(this,&fStack_10,param_3);
          if (piVar8 == (int *)0x0) {
            local_8 = fStack_10;
            local_c = fStack_10;
            iVar7 = 0;
            piVar8 = this;
          }
          else if ((piVar8[0xae] == 5) || (this[0xae] != 5)) {
            fVar2 = local_8 - _DAT_00e51890;
            if (0.0 <= fVar2) {
              if (1.0 < fVar2) {
                fVar2 = 1.0;
              }
            }
            else {
              fVar2 = 0.0;
            }
            if (fVar2 <= fStack_10) {
              fVar2 = _DAT_00e51890 + local_c;
              if (0.0 <= fVar2) {
                if (1.0 < fVar2) {
                  fVar2 = 1.0;
                }
              }
              else {
                fVar2 = 0.0;
              }
              if (fStack_10 < fVar2 != (fStack_10 == fVar2)) {
                if (param_3 != 0) {
                  iVar1 = this[0x14a];
                  iVar5 = FUN_005b2770(param_3);
                  if ((iVar1 == iVar5) &&
                     (iVar1 = piVar8[0x14a], iVar5 = FUN_005b2770(param_3), iVar1 != iVar5))
                  goto LAB_004d4247;
                  iVar1 = this[0x14a];
                  iVar5 = FUN_005b2770(param_3);
                  if ((iVar1 != iVar5) &&
                     (iVar1 = piVar8[0x14a], iVar5 = FUN_005b2770(param_3), iVar1 == iVar5))
                  goto LAB_004d4338;
                }
                iVar7 = iVar6 + 1;
                iVar6 = FUN_00990d30(0,iVar6 + 2);
                if ((iVar6 == iVar7) && (local_8 = fStack_10, piVar8 = this, fStack_10 < local_c)) {
                  local_c = fStack_10;
                }
              }
            }
            else {
LAB_004d4247:
              local_8 = fStack_10;
              if (fStack_10 < local_c) {
                local_c = fStack_10;
              }
              iVar7 = 0;
              piVar8 = this;
            }
          }
          else {
            local_8 = fStack_10;
            local_c = fStack_10;
            iVar7 = 0;
            piVar8 = this;
          }
        }
      }
LAB_004d4338:
      local_4 = (undefined4 *)local_4[1];
      iVar6 = iVar7;
    } while (local_4 != &DAT_0104ad20);
  }
  return piVar8;
}


//// FUNCTION FUN_004d4360 @ 004d4360 ////

undefined4 __thiscall FUN_004d4360(void *this,undefined4 *param_1,int *param_2)

{
  int *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_50;
  char *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9080;
  local_c = ExceptionList;
  local_50 = (void *)0x0;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_004d39b0(this,&local_50);
  pvVar1 = local_50;
  if (local_50 != (void *)0x0) {
    FUN_004cec10(local_50,(int *)&param_1,param_1);
    this_00 = param_2;
    puVar2 = param_1;
    if (param_1 != *(undefined4 **)((int)pvVar1 + 4)) {
      puVar2 = param_1 + 0xb;
      puVar3 = param_1;
      if (param_2 != (int *)0x0) {
        puVar3 = FUN_004312e0(&local_4c,(undefined4 *)((int)this + 0x5d8),"/");
        puVar2 = FUN_0047aee0(&local_2c,puVar3,puVar2);
        FUN_004015d0(this_00,(char *)*puVar2,puVar2[1]);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"",0);
        local_28 = 0;
        *local_2c = '\0';
        local_4c = local_40;
        local_4 = 0;
        local_40[0] = '\0';
        local_48 = 0;
        local_44 = (undefined4 *)&DAT_00000014;
        _strncpy(local_4c,".ini",4);
        local_48 = 4;
        local_4c[4] = '\0';
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00569860(this_00,&local_4c,&local_2c);
        if (&DAT_00000014 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        puVar3 = local_44;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
      }
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)puVar3 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return (uint)puVar2 & 0xffffff00;
}


//// FUNCTION FUN_004d4500 @ 004d4500 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4500(void)

{
  uint uVar1;
  uint _Count;
  undefined1 uVar2;
  bool bVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  size_t sVar7;
  undefined4 *puVar8;
  float10 fVar9;
  char *pcVar10;
  int *local_284;
  undefined1 *local_280;
  int *local_27c;
  char *local_278;
  undefined4 local_274;
  uint local_270;
  char local_26c [20];
  char *local_258;
  uint local_254;
  uint local_250;
  char local_24c [20];
  char *local_238;
  uint local_234;
  uint local_230;
  char local_22c [20];
  char *local_218;
  uint local_214;
  uint local_210;
  char local_20c [20];
  char *local_1f8;
  uint local_1f4;
  uint local_1f0;
  char local_1ec [20];
  char *local_1d8;
  uint local_1d4;
  uint local_1d0;
  char local_1cc [20];
  undefined1 local_1b8;
  char *local_1b4;
  uint local_1b0;
  uint local_1ac;
  char local_1a8 [20];
  int *local_194;
  void *local_190;
  char *local_18c;
  uint local_188;
  uint local_184;
  char local_180 [20];
  char *local_16c;
  uint local_168;
  uint local_164;
  char local_160 [20];
  undefined1 local_14c;
  char *local_148;
  undefined4 local_144;
  uint local_140;
  char local_13c [20];
  char *local_128;
  undefined4 local_124;
  uint local_120;
  char local_11c [20];
  char *local_108;
  undefined4 local_104;
  uint local_100;
  char local_fc [20];
  char *local_e8;
  undefined4 local_e4;
  uint local_e0;
  char local_dc [20];
  undefined4 local_c8;
  char local_c4;
  undefined4 local_c0 [2];
  void *local_b8 [2];
  uint local_b0;
  void *local_98 [2];
  uint local_90;
  void *local_78 [2];
  uint local_70;
  char local_58 [68];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ca917b;
  local_14 = ExceptionList;
  local_278 = local_26c;
  local_26c[0] = '\0';
  local_274 = 0;
  local_270 = 0x14;
  ExceptionList = &local_14;
  _strncpy(local_278,"set",3);
  local_274 = 3;
  local_278[3] = '\0';
  local_c = 0;
  FUN_00558a50(DAT_00f88624,&local_278,(undefined4 *)0x1);
  if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
    _free(local_278);
  }
  local_278 = local_26c;
  local_26c[0] = '\0';
  local_274 = 0;
  local_270 = 0x14;
  _strncpy(local_278,"boredomhalflife",0xf);
  local_274 = 0xf;
  local_278[0xf] = '\0';
  local_c = 1;
  fVar9 = FUN_00558610(DAT_00f88624,&local_278,0.0);
  DAT_00e51878 = (float)fVar9;
  if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
    _free(local_278);
  }
  local_278 = local_26c;
  local_26c[0] = '\0';
  local_274 = 0;
  local_270 = 0x14;
  _strncpy(local_278,"boredomthreshold",0x10);
  local_274 = 0x10;
  local_278[0x10] = '\0';
  local_c = 2;
  fVar9 = FUN_00558610(DAT_00f88624,&local_278,0.0);
  if ((float10)0.0 <= fVar9) {
    if ((float10)1.0 < fVar9) {
      fVar9 = (float10)1.0;
    }
  }
  else {
    fVar9 = (float10)0.0;
  }
  _DAT_00e51890 = (float)fVar9;
  local_c = 0xffffffff;
  if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
    _free(local_278);
  }
  local_284 = (int *)&stack0xfffffd64;
  pcVar10 = "set_boredom";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar3 = FUN_008c9a10(pvVar4,pcVar10);
  if (!bVar3) {
    piVar5 = operator_new(0x74);
    local_c = 3;
    local_284 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_280 = &stack0xfffffd64;
      FUN_004ce5d0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1ec80;
      piVar5[0x1c] = (int)&PTR_PTR_00e51880;
    }
    local_c = 0xffffffff;
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfe50(pvVar4,piVar5);
  }
  local_284 = (int *)&stack0xfffffd64;
  pcVar10 = "set_freshness";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar3 = FUN_008c9a10(pvVar4,pcVar10);
  if (!bVar3) {
    piVar5 = operator_new(0x70);
    local_c = 4;
    local_284 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_280 = &stack0xfffffd64;
      FUN_004ce5d0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1eca0;
    }
    local_c = 0xffffffff;
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfe50(pvVar4,piVar5);
  }
  local_284 = (int *)&stack0xfffffd64;
  pcVar10 = "set_boredom";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar3 = FUN_008c9950(pvVar4,pcVar10);
  if (!bVar3) {
    local_284 = operator_new(0xa0);
    local_c = 5;
    if (local_284 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_280 = &stack0xfffffd5c;
      piVar5 = FUN_009055b0(local_284,(undefined4 *)"set_boredom",1,4);
    }
    local_c = 0xffffffff;
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  local_284 = (int *)&stack0xfffffd64;
  pcVar10 = "set_freshness";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar3 = FUN_008c9950(pvVar4,pcVar10);
  if (!bVar3) {
    local_284 = operator_new(0xa0);
    local_c = 6;
    if (local_284 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      local_280 = &stack0xfffffd60;
      piVar5 = FUN_00905420(local_284,(undefined4 *)"set_freshness",1);
    }
    local_c = 0xffffffff;
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  local_27c = (int *)*DAT_0104ad78;
  if (local_27c != DAT_0104ad78) {
    do {
      local_284 = (int *)&stack0xfffffd60;
      FUN_00494fb0(local_27c + 0xb,0,DAT_00e4fa4c);
      FUN_004cc430((int *)&local_27c);
    } while (local_27c != DAT_0104ad78);
  }
  local_258 = local_24c;
  local_24c[0] = '\0';
  local_254 = 0;
  local_250 = 0x14;
  local_218 = local_20c;
  local_20c[0] = '\0';
  local_214 = 0;
  local_210 = 0x14;
  local_1b4 = local_1a8;
  local_1a8[0] = '\0';
  local_1b0 = 0;
  local_1ac = 0x14;
  local_1f8 = local_1ec;
  local_1ec[0] = '\0';
  local_1f4 = 0;
  local_1f0 = 0x14;
  local_238 = local_22c;
  local_22c[0] = '\0';
  local_234 = 0;
  local_230 = 0x14;
  local_c._0_1_ = 0xb;
  local_c._1_3_ = 0;
  local_27c = DAT_01050964;
  if (DAT_01050964 != &DAT_01050970) {
    do {
      if (local_27c[2] != 0) {
        local_284 = *(int **)(local_27c[2] + 0x120);
        pvVar4 = operator_new(0xc);
        local_c._0_1_ = 0xc;
        local_280 = pvVar4;
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          iVar6 = FUN_004ce450();
          *(int *)((int)pvVar4 + 4) = iVar6;
          *(undefined1 *)(iVar6 + 0x51) = 1;
          *(int *)(*(int *)((int)pvVar4 + 4) + 4) = *(int *)((int)pvVar4 + 4);
          *(undefined4 *)*(undefined4 *)((int)pvVar4 + 4) = *(undefined4 *)((int)pvVar4 + 4);
          *(int *)(*(int *)((int)pvVar4 + 4) + 8) = *(int *)((int)pvVar4 + 4);
          *(undefined4 *)((int)pvVar4 + 8) = 0;
        }
        local_254 = 0;
        local_c._0_1_ = 0xb;
        *local_258 = '\0';
        sVar7 = _sprintf(local_58,(char *)&param_2_00d1b93c);
        FUN_004073f0(&local_258,local_58,sVar7);
        while (local_254 < 3) {
          puVar8 = FUN_0040d6b0(local_78,"0",&local_258);
          uVar1 = puVar8[1];
          pcVar10 = (char *)*puVar8;
          if (local_250 <= uVar1) {
            if (0x14 < local_250) {
                    /* WARNING: Subroutine does not return */
              _free(local_258);
            }
            local_250 = uVar1 + 0x20 & 0xffffffe0;
            local_258 = _malloc(local_250);
          }
          _strncpy(local_258,pcVar10,uVar1);
          local_258[uVar1] = '\0';
          local_254 = uVar1;
          if (0x14 < local_70) {
                    /* WARNING: Subroutine does not return */
            _free(local_78[0]);
          }
        }
        puVar8 = FUN_0040d6b0(local_b8,"data/scene/",&local_258);
        uVar1 = puVar8[1];
        pcVar10 = (char *)*puVar8;
        if (local_210 <= uVar1) {
          if (0x14 < local_210) {
                    /* WARNING: Subroutine does not return */
            _free(local_218);
          }
          local_210 = uVar1 + 0x20 & 0xffffffe0;
          local_218 = _malloc(local_210);
        }
        _strncpy(local_218,pcVar10,uVar1);
        local_218[uVar1] = '\0';
        local_214 = uVar1;
        if (0x14 < local_b0) {
                    /* WARNING: Subroutine does not return */
          _free(local_b8[0]);
        }
        local_280 = (undefined1 *)FUN_00556700(&local_218,0,&local_1b4,'\0');
        pcVar10 = local_1b4;
        uVar1 = local_1b0;
        uVar2 = (undefined1)local_c;
        while ((local_c._0_1_ = uVar2, local_1b4 = pcVar10, local_1b0 = uVar1,
               local_280 != (undefined1 *)0x0 && (4 < uVar1))) {
          if (local_230 <= uVar1) {
            if (0x14 < local_230) {
                    /* WARNING: Subroutine does not return */
              _free(local_238);
            }
            local_230 = uVar1 + 0x20 & 0xffffffe0;
            local_238 = _malloc(local_230);
          }
          _strncpy(local_238,pcVar10,uVar1);
          local_238[uVar1] = '\0';
          local_234 = uVar1;
          puVar8 = FUN_004312e0(local_98,&local_258,"_");
          uVar1 = puVar8[1];
          pcVar10 = (char *)*puVar8;
          if (local_1f0 <= uVar1) {
            if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
              _free(local_1f8);
            }
            local_1f0 = uVar1 + 0x20 & 0xffffffe0;
            local_1f8 = _malloc(local_1f0);
          }
          _strncpy(local_1f8,pcVar10,uVar1);
          local_1f8[uVar1] = '\0';
          local_1f4 = uVar1;
          if (0x14 < local_90) {
                    /* WARNING: Subroutine does not return */
            _free(local_98[0]);
          }
          local_278 = local_26c;
          local_26c[0] = '\0';
          local_274 = 0;
          local_270 = 0x14;
          _strncpy(local_278,"",0);
          local_274 = 0;
          *local_278 = '\0';
          local_c._0_1_ = 0xd;
          FUN_00569860((int *)&local_238,&local_1f8,&local_278);
          if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
            _free(local_278);
          }
          local_108 = local_fc;
          local_fc[0] = '\0';
          local_104 = 0;
          local_100 = 0x14;
          _strncpy(local_108,"",0);
          local_104 = 0;
          *local_108 = '\0';
          local_e8 = local_dc;
          local_dc[0] = '\0';
          local_e4 = 0;
          local_e0 = 0x14;
          _strncpy(local_e8,"_",1);
          local_e4 = 1;
          local_e8[1] = '\0';
          local_c._0_1_ = 0xf;
          FUN_00569860((int *)&local_238,&local_e8,&local_108);
          if (0x14 < local_e0) {
                    /* WARNING: Subroutine does not return */
            _free(local_e8);
          }
          if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
            _free(local_108);
          }
          local_148 = local_13c;
          local_13c[0] = '\0';
          local_144 = 0;
          local_140 = 0x14;
          _strncpy(local_148,"",0);
          local_144 = 0;
          *local_148 = '\0';
          local_128 = local_11c;
          local_11c[0] = '\0';
          local_124 = 0;
          local_120 = 0x14;
          _strncpy(local_128,".ini",4);
          local_124 = 4;
          local_128[4] = '\0';
          local_c._0_1_ = 0x11;
          FUN_00569860((int *)&local_238,&local_128,&local_148);
          uVar1 = local_1b0;
          pcVar10 = local_1b4;
          if (0x14 < local_120) {
                    /* WARNING: Subroutine does not return */
            _free(local_128);
          }
          if (0x14 < local_140) {
                    /* WARNING: Subroutine does not return */
            _free(local_148);
          }
          local_1d8 = local_1cc;
          local_1cc[0] = '\0';
          local_1d4 = 0;
          local_1d0 = 0x14;
          local_1b8 = 0;
          local_c = CONCAT31(local_c._1_3_,0x12);
          if (0x13 < local_1b0) {
            local_1d0 = local_1b0 + 0x20 & 0xffffffe0;
            local_1d8 = _malloc(local_1d0);
          }
          _strncpy(local_1d8,pcVar10,uVar1);
          local_1d4 = uVar1;
          local_1d8[uVar1] = '\0';
          iVar6 = FUN_009623a0(&local_238);
          uVar1 = local_234;
          pcVar10 = local_238;
          if (iVar6 != 0) {
            local_1b8 = 1;
          }
          local_18c = local_180;
          local_180[0] = '\0';
          local_188 = 0;
          local_184 = 0x14;
          if (0x13 < local_234) {
            local_184 = local_234 + 0x20 & 0xffffffe0;
            local_18c = _malloc(local_184);
          }
          _strncpy(local_18c,pcVar10,uVar1);
          _Count = local_1d4;
          pcVar10 = local_1d8;
          local_188 = uVar1;
          local_18c[uVar1] = '\0';
          local_16c = local_160;
          local_160[0] = '\0';
          local_168 = 0;
          local_164 = 0x14;
          if (0x13 < local_1d4) {
            local_164 = local_1d4 + 0x20 & 0xffffffe0;
            local_16c = _malloc(local_164);
          }
          _strncpy(local_16c,pcVar10,_Count);
          local_168 = _Count;
          local_16c[_Count] = '\0';
          local_14c = local_1b8;
          local_c._0_1_ = 0x13;
          FUN_004d0b60(pvVar4,local_c0,&local_18c);
          local_c._0_1_ = 0x12;
          if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
            _free(local_16c);
          }
          if (0x14 < local_184) {
                    /* WARNING: Subroutine does not return */
            _free(local_18c);
          }
          local_280 = (undefined1 *)FUN_00556700(&local_218,(uint)local_280,&local_1b4,'\0');
          local_c._0_1_ = 0xb;
          uVar2 = (undefined1)local_c;
          local_c._0_1_ = 0xb;
          pcVar10 = local_1b4;
          uVar1 = local_1b0;
          if (0x14 < local_1d0) {
                    /* WARNING: Subroutine does not return */
            _free(local_1d8);
          }
        }
        local_194 = local_284;
        local_190 = pvVar4;
        FUN_004d0aa0(&DAT_0104ad00,&local_c8,(int *)&local_194);
        if ((local_c4 == '\0') && (pvVar4 != (void *)0x0)) {
          FUN_004d0940(pvVar4,&local_284,(int *)**(int **)((int)pvVar4 + 4),
                       *(int **)((int)pvVar4 + 4));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)pvVar4 + 4));
        }
      }
      local_27c = (int *)local_27c[1];
    } while (local_27c != &DAT_01050970);
    if (0x14 < local_230) {
                    /* WARNING: Subroutine does not return */
      _free(local_238);
    }
    if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1f8);
    }
    if (0x14 < local_1ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_1b4);
    }
    if (0x14 < local_210) {
                    /* WARNING: Subroutine does not return */
      _free(local_218);
    }
    if (0x14 < local_250) {
                    /* WARNING: Subroutine does not return */
      _free(local_258);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_004d51e0 @ 004d51e0 ////

void __fastcall FUN_004d51e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004d5210 @ 004d5210 ////

void FUN_004d5210(void)

{
  return;
}


//// FUNCTION FUN_004d5240 @ 004d5240 ////

void __fastcall FUN_004d5240(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 300) + 0x9c);
    *puVar1 = *puVar1 | 0x200;
    *(undefined4 *)(*(int *)(param_1 + 300) + 200) = 0x3dcccccd;
  }
  return;
}


//// FUNCTION FUN_004d5270 @ 004d5270 ////

void __fastcall FUN_004d5270(int param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 300) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 300) + 0x9c);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  return;
}


//// FUNCTION FUN_004d5290 @ 004d5290 ////

void __fastcall FUN_004d5290(int param_1)

{
  undefined4 local_8;
  int local_4;
  
  if (*(int **)(param_1 + 300) != (int *)0x0) {
    local_8 = 3;
    local_4 = param_1;
    (**(code **)(**(int **)(param_1 + 300) + 0x10))(&local_8,1);
  }
  return;
}


//// FUNCTION FUN_004d52e0 @ 004d52e0 ////

void __thiscall FUN_004d52e0(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 * *(float *)this +
             *(float *)((int)this + 0x18) * param_2[2] + *(float *)((int)this + 0xc) * param_2[1] +
             *(float *)((int)this + 0x24);
  param_1[1] = *(float *)((int)this + 0x1c) * param_2[2] +
               *(float *)((int)this + 4) * *param_2 + *(float *)((int)this + 0x10) * param_2[1] +
               *(float *)((int)this + 0x28);
  param_1[2] = *(float *)((int)this + 0x20) * param_2[2] +
               *(float *)((int)this + 8) * *param_2 + *(float *)((int)this + 0x14) * param_2[1] +
               *(float *)((int)this + 0x2c);
  return;
}


//// FUNCTION FUN_004d5340 @ 004d5340 ////

void __thiscall FUN_004d5340(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)((int)this + 0x24) = *param_1;
  *(undefined4 *)((int)this + 0x28) = param_1[1];
  *(undefined4 *)((int)this + 0x2c) = param_1[2];
  return;
}


//// FUNCTION FUN_004d5390 @ 004d5390 ////

void __thiscall FUN_004d5390(void *this,float param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)fcos((float10)param_1);
  fVar3 = (float10)fsin((float10)param_1);
  fVar1 = *(float *)this;
  *(float *)this =
       (float)(fVar2 * (float10)*(float *)this + fVar3 * (float10)*(float *)((int)this + 0xc));
  *(float *)((int)this + 0xc) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0xc) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 4);
  *(float *)((int)this + 4) =
       (float)(fVar2 * (float10)*(float *)((int)this + 4) +
              fVar3 * (float10)*(float *)((int)this + 0x10));
  *(float *)((int)this + 0x10) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x10) - fVar3 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 8);
  *(float *)((int)this + 8) =
       (float)(fVar2 * (float10)*(float *)((int)this + 8) +
              fVar3 * (float10)*(float *)((int)this + 0x14));
  *(float *)((int)this + 0x14) =
       (float)(fVar2 * (float10)*(float *)((int)this + 0x14) -
              (float10)(float)(fVar3 * (float10)fVar1));
  return;
}


//// FUNCTION FUN_004d5440 @ 004d5440 ////

void __thiscall FUN_004d5440(void *this,undefined4 *param_1,float *param_2)

{
  *(float *)((int)this + 0x11c) = *param_2;
  *(undefined4 *)((int)this + 0x120) = *param_1;
  *(undefined4 *)((int)this + 0x124) = param_1[1];
  *(undefined4 *)((int)this + 0x128) = param_1[2];
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0x3f800000;
  *(undefined4 *)((int)this + 0xac) = 0x3f800000;
  *(undefined4 *)((int)this + 0x9c) = 0x3f800000;
  *(undefined4 *)((int)this + 0xc0) = *param_1;
  *(undefined4 *)((int)this + 0xc4) = param_1[1];
  *(undefined4 *)((int)this + 200) = param_1[2];
  FUN_004d5390((undefined4 *)((int)this + 0x9c),*param_2);
  if (*(int **)((int)this + 300) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 300) + 0x20))(param_1,*param_2,0x3f800000);
  }
  return;
}


//// FUNCTION FUN_004d54e0 @ 004d54e0 ////

void __fastcall FUN_004d54e0(int *param_1)

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
  puStack_8 = &LAB_00ca9198;
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


//// FUNCTION FUN_004d55b0 @ 004d55b0 ////

void __thiscall FUN_004d55b0(void *this,undefined4 *param_1,float *param_2)

{
  float10 fVar1;
  undefined4 uVar2;
  float local_3c [3];
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
  
  if (*(int *)((int)this + 0x130) != 0) {
    local_c = *param_1;
    local_8 = param_1[1];
    local_4 = param_1[2];
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_10 = 0x3f800000;
    local_20 = 0x3f800000;
    local_30 = 0x3f800000;
    FUN_004d5390(&local_30,*param_2);
    FUN_004d52e0(&local_30,local_3c,(float *)((int)this + 0x120));
    uVar2 = 0x3f800000;
    fVar1 = FUN_004012c0(*param_2 + *(float *)((int)this + 0x11c));
    (**(code **)(**(int **)((int)this + 0x130) + 0x20))(local_3c,(float)fVar1,uVar2);
  }
  return;
}


//// FUNCTION FUN_004d5690 @ 004d5690 ////

void __thiscall FUN_004d5690(void *this,float *param_1,void *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float local_10;
  float local_c;
  int local_8;
  undefined4 local_4;
  
  local_8 = **(int **)((int)this + 0x114);
  local_c = 0.0;
  local_10 = 0.0;
  if ((int *)local_8 != *(int **)((int)this + 0x114)) {
    do {
      fVar1 = *(float *)(local_8 + 0x2c);
      iVar2 = GenreKey_ToEnum((undefined4 *)(local_8 + 0xc));
      pfVar3 = (float *)FUN_005b6c20(param_2,&local_4,iVar2);
      fVar1 = fVar1 * *pfVar3;
      if (0.0 <= fVar1) {
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
      }
      else {
        fVar1 = 0.0;
      }
      local_c = fVar1 + local_c;
      local_10 = local_10 + 1.0;
      FUN_00440230(&local_8);
    } while (local_8 != *(int *)((int)this + 0x114));
    if (local_10 != 0.0) {
      local_c = local_c / local_10;
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
  }
  *param_1 = 0.5;
  return;
}


//// FUNCTION FUN_004d57b0 @ 004d57b0 ////

void __fastcall FUN_004d57b0(uint param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
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
  puStack_8 = &LAB_00ca91d8;
  local_c = ExceptionList;
  uVar8 = 0;
  ExceptionList = &local_c;
  local_34 = param_1;
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\SetDressingProps.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar7;
    DAT_010581d4 = 0x15;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar3 = (char *)FUN_00ace33d(0xe4fcd0);
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
  uVar9 = local_34;
  local_4 = 0xffffffff;
  uVar4 = FUN_0098b490("Name");
  if ((char)uVar4 != '\0') {
    FUN_0098c550((undefined4 *)(uVar9 + 0x68));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\SetDressingProps.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar7;
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar3 = (char *)FUN_00ace33d(0xe519e0);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    uVar9 = local_34;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PropAngle");
  if ((char)uVar4 != '\0') {
    FUN_0098c520((float *)(uVar9 + 0xb8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar7 = "C:\\movies\\dev\\TheMovies\\SetDressingProps.cpp";
    pcVar3 = (char *)&DAT_010581d8;
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar3 = pcVar3 + 4;
    }
    local_2c = local_20;
    *pcVar3 = *pcVar7;
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    pcVar3 = (char *)FUN_00ace33d(0xe5043c);
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_2c,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1));
    FUN_00989710();
    local_4 = 0xffffffff;
    uVar9 = local_34;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  uVar4 = FUN_0098b490("PropPos");
  if ((char)uVar4 != '\0') {
    FUN_0098a430((undefined4 *)(uVar9 + 0xbc),0xc);
  }
  uVar4 = FUN_0098b490("Genres");
  if (((char)uVar4 != '\0') && (bVar2 = FUN_009896f0("CString"), bVar2)) {
    if (DAT_010583e0 == 0) {
      local_30 = *(undefined4 *)(uVar9 + 0xb4);
      FUN_0098a3a0(&local_30);
      local_34 = **(int **)(uVar9 + 0xb0);
      if ((int *)local_34 != *(int **)(uVar9 + 0xb0)) {
        do {
          uVar8 = local_34;
          local_2c = local_20;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          FUN_004015d0(&local_2c,*(char **)(local_34 + 0xc),*(uint *)(local_34 + 0x10));
          local_4 = 3;
          FUN_0098c550(&local_2c);
          FUN_00566d60((undefined4 *)(uVar8 + 0x2c));
          local_4 = 0xffffffff;
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          FUN_00440230((int *)&local_34);
        } while (local_34 != *(uint *)(uVar9 + 0xb0));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_34 = 0;
      FUN_004417e0((int)(uVar9 + 0xac));
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 4;
      SLVAR_LoadUint(&local_34);
      if (local_34 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar5 = FUN_00442050((void *)(uVar9 + 0xac),&local_2c);
          FUN_00566d60(piVar5);
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_34);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d5c00 @ 004d5c00 ////

/* WARNING: Removing unreachable block (ram,0x004d5ed5) */

void __thiscall FUN_004d5c00(void *this,undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  char acStack_12c [4];
  undefined4 local_128;
  void **local_124;
  undefined4 local_120;
  uint local_11c;
  void *local_118 [2];
  uint uStack_110;
  void *local_104 [2];
  uint local_fc;
  undefined4 auStack_f8 [5];
  undefined1 local_e4 [196];
  void *pvStack_20;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9227;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004015d0((undefined4 *)((int)this + 0xcc),(char *)*param_1,param_1[1]);
  FUN_0055c870(local_e4,'\x01',(undefined4 *)((int)this + 0xcc),0);
  local_124 = local_118;
  local_4 = 0;
  local_118[0] = (void *)((uint)local_118[0] & 0xffffff00);
  local_120 = 0;
  local_11c = 0x14;
  _strncpy((char *)local_124,"size",4);
  local_120 = 4;
  *(char *)(local_124 + 1) = '\0';
  local_4._0_1_ = 1;
  fVar8 = FUN_00558610(local_e4,&local_124,0.5);
  if ((float10)0.0 <= fVar8) {
    if ((float10)1.0 < fVar8) {
      fVar8 = (float10)1.0;
    }
  }
  else {
    fVar8 = (float10)0.0;
  }
  local_128 = (float)fVar8;
  *(float *)((int)this + 0x10c) = local_128;
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_124 = local_118;
  local_118[0] = (void *)((uint)local_118[0] & 0xffffff00);
  local_120 = 0;
  local_11c = 0x14;
  _strncpy((char *)local_124,"mesh",4);
  local_120 = 4;
  *(char *)(local_124 + 1) = '\0';
  local_4._0_1_ = 2;
  puVar2 = FUN_005584e0(local_e4,local_104,&local_124);
  FUN_004015d0((undefined4 *)((int)this + 0xec),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_11c < 0x15) {
    pbVar3 = FUN_009de1d0(*(char **)((int)this + 0xec),1);
    piVar4 = FUN_00433eb0();
    *(int **)((int)this + 300) = piVar4;
    (**(code **)(*piVar4 + 0x18))();
    (**(code **)(**(int **)((int)this + 300) + 0x20))
              ((undefined4 *)((int)this + 0x120),*(undefined4 *)((int)this + 0x11c),0x3f800000);
    puVar1 = (uint *)(*(int *)((int)this + 300) + 0x9c);
    *puVar1 = *puVar1 | 2;
    puVar1 = (uint *)(*(int *)((int)this + 300) + 0x9c);
    *puVar1 = *puVar1 & 0xfffffdff;
    puVar1 = (uint *)(*(int *)((int)this + 300) + 0x9c);
    *puVar1 = *puVar1 | 8;
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
    *(undefined4 *)((int)this + 0xc0) = 0;
    *(undefined4 *)((int)this + 0xbc) = 0x3f800000;
    *(undefined4 *)((int)this + 0xac) = 0x3f800000;
    *(undefined4 *)((int)this + 0x9c) = 0x3f800000;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0x120);
    *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this + 0x124);
    *(undefined4 *)((int)this + 200) = *(undefined4 *)((int)this + 0x128);
    FUN_004d5390((undefined4 *)((int)this + 0x9c),*(float *)((int)this + 0x11c));
    piVar4 = FUN_00433eb0();
    *(int **)((int)this + 0x130) = piVar4;
    (**(code **)(*piVar4 + 0x18))(pbVar3);
    *(uint *)(*(int *)((int)this + 0x130) + 0x9c) =
         *(uint *)(*(int *)((int)this + 0x130) + 0x9c) | 8;
    if (pbVar3 != (byte *)0x0) {
      FUN_009de3b0(pbVar3);
    }
    acStack_12c[0] = '\0';
    _strncpy(acStack_12c,"genre",5);
                    /* WARNING: Ignoring partial resolution of indirect */
    local_128._1_1_ = 0;
    iStack_18._0_1_ = 3;
    uVar5 = FUN_00558a50(auStack_f8,(undefined4 *)&stack0xfffffec8,(undefined4 *)0x0);
    iStack_18 = (uint)iStack_18._1_3_ << 8;
    if ((char)uVar5 != '\0') {
      puVar2 = FUN_00558de0(auStack_f8,local_118);
      if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118[0]);
      }
      if (puVar2[1] != 0) {
        do {
          fVar8 = FUN_005586b0(auStack_f8,4,0.0);
          if ((float10)0.0 <= fVar8) {
            if ((float10)1.0 < fVar8) {
              fVar8 = (float10)1.0;
            }
          }
          else {
            fVar8 = (float10)0.0;
          }
          puVar2 = FUN_00558de0(auStack_f8,local_118);
          iStack_18._0_1_ = 4;
          iVar6 = GenreKey_ToEnum(puVar2);
          puVar2 = (undefined4 *)FUN_00449b40(iVar6);
          pfVar7 = (float *)FUN_00442050((void *)((int)this + 0x110),puVar2);
          *pfVar7 = (float)fVar8;
          iStack_18 = (uint)iStack_18._1_3_ << 8;
          if (0x14 < uStack_110) {
                    /* WARNING: Subroutine does not return */
            _free(local_118[0]);
          }
          uVar5 = FUN_00558120(auStack_f8,2);
        } while ((char)uVar5 != '\0');
      }
    }
    iStack_18 = 0xffffffff;
    FUN_00558920(auStack_f8);
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_124);
}


//// FUNCTION FUN_004d6000 @ 004d6000 ////

void __fastcall FUN_004d6000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca92a7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1f00c;
  param_1[0x19] = &PTR_LAB_00d1efec;
  local_4 = 5;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar1 = (undefined4 *)param_1[0x4b];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x4b] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x4c];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x4c] = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00441db0(param_1 + 0x44,&uStack_10,*(int **)param_1[0x45],(int *)param_1[0x45]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x45]);
}


//// FUNCTION FUN_004d62a0 @ 004d62a0 ////

undefined4 * __fastcall FUN_004d62a0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  float10 fVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca930b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1f00c;
  param_1[0x19] = &PTR_LAB_00d1efec;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  param_1[0x33] = param_1 + 0x36;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x14;
  param_1[0x3b] = param_1 + 0x3e;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x14;
  local_4._0_1_ = 4;
  param_1[0x43] = 0;
  iVar1 = FUN_00441140();
  param_1[0x45] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x45] + 4) = param_1[0x45];
  *(undefined4 *)param_1[0x45] = param_1[0x45];
  *(undefined4 *)(param_1[0x45] + 8) = param_1[0x45];
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  param_1[0x25] = param_1;
  FUN_00acdb9e(0xe519f8);
  iVar1 = FUN_0097dda0();
  param_1[0x26] = iVar1;
  if (s___AVAngle_MV___00e519e8[0xf] != '\0') {
    iVar1 = 0x8c;
    pcVar4 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe519f8);
    FUN_0097df60(pcVar2,pcVar4,iVar1);
    s___AVAngle_MV___00e519e8[0xf] = '\0';
  }
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x2b] = 0x3f800000;
  param_1[0x27] = 0x3f800000;
  fVar3 = FUN_004012c0(0.0);
  param_1[0x47] = (float)fVar3;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x43] = 0x3f000000;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004d64e0 @ 004d64e0 ////

undefined4 * __thiscall FUN_004d64e0(void *this,byte param_1)

{
  FUN_004d6000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004d6510 @ 004d6510 ////

undefined4 * __cdecl FUN_004d6510(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca932b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x134);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_004d62a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_004d5c00(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004d6580 @ 004d6580 ////

undefined4 * __fastcall FUN_004d6580(int param_1)

{
  undefined4 *this;
  
  this = FUN_004d6510((undefined4 *)(param_1 + 0xcc));
  FUN_004d5440(this,(undefined4 *)(param_1 + 0x120),(float *)(param_1 + 0x11c));
  return this;
}


//// FUNCTION FUN_004d65b0 @ 004d65b0 ////

void __fastcall FUN_004d65b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004d65e0 @ 004d65e0 ////

void FUN_004d65e0(void)

{
  return;
}


//// FUNCTION FUN_004d6600 @ 004d6600 ////

int * __thiscall FUN_004d6600(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d6620 @ 004d6620 ////

int * __thiscall FUN_004d6620(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d6650 @ 004d6650 ////

int __fastcall FUN_004d6650(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_004d6680 @ 004d6680 ////

int * __thiscall FUN_004d6680(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d66a0 @ 004d66a0 ////

int * __thiscall FUN_004d66a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d6700 @ 004d6700 ////

int * __thiscall FUN_004d6700(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d6740 @ 004d6740 ////

void __fastcall FUN_004d6740(int param_1)

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


//// FUNCTION FUN_004d67f0 @ 004d67f0 ////

int __fastcall FUN_004d67f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_004d69b0 @ 004d69b0 ////

int * __thiscall FUN_004d69b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d69d0 @ 004d69d0 ////

int * __thiscall FUN_004d69d0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004d6a00 @ 004d6a00 ////

int * __cdecl FUN_004d6a00(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_004d6a50 @ 004d6a50 ////

int * __cdecl FUN_004d6a50(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_004d6a90 @ 004d6a90 ////

undefined4 * __cdecl FUN_004d6a90(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004d6ad0 @ 004d6ad0 ////

undefined4 * __cdecl FUN_004d6ad0(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004d6b30 @ 004d6b30 ////

void __fastcall FUN_004d6b30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca934b;
  pvStack_c = ExceptionList;
  puVar2 = *(undefined4 **)(param_1 + 0x124);
  puVar4 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x110) + 4))();
    *(undefined4 *)(param_1 + 0x124) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x110))();
  }
  this = operator_new(0x31c);
  uStack_4 = 0;
  if (this != (void *)0x0) {
    puVar4 = FUN_004ed430(this,*(int *)(param_1 + 0x10c));
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x110) + 4))();
  *(undefined4 **)(param_1 + 0x124) = puVar4;
  (*(code *)**(undefined4 **)(param_1 + 0x110))();
  iVar3 = *(int *)(param_1 + 0x10c);
  (**(code **)(*(int *)(iVar3 + 0x148) + 4))();
  *(undefined4 *)(iVar3 + 0x15c) = *(undefined4 *)(param_1 + 0x124);
  (*(code *)**(undefined4 **)(iVar3 + 0x148))();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004d6c00 @ 004d6c00 ////

undefined4 __fastcall FUN_004d6c00(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}


//// FUNCTION FUN_004d6c10 @ 004d6c10 ////

undefined4 __fastcall FUN_004d6c10(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x124) >> 8),*(int *)(param_1 + 0x124) == 0);
}


//// FUNCTION FUN_004d6c20 @ 004d6c20 ////

void __fastcall FUN_004d6c20(int param_1)

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


//// FUNCTION FUN_004d6ed0 @ 004d6ed0 ////

void __cdecl FUN_004d6ed0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_004d6f30 @ 004d6f30 ////

void __cdecl FUN_004d6f30(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_004d6f90 @ 004d6f90 ////

void __fastcall FUN_004d6f90(int *param_1)

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
  puStack_8 = &LAB_00ca9368;
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


//// FUNCTION FUN_004d7060 @ 004d7060 ////

uint __fastcall FUN_004d7060(int param_1)

{
  bool bVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
LAB_004d7076:
    return in_EAX & 0xffffff00;
  }
  iVar3 = FUN_005b2780(*(int *)(param_1 + 0xa0));
  in_EAX = 0;
  if (iVar3 == 0) goto LAB_004d7076;
  if (*(int *)(param_1 + 0x10c) != 0) {
    iVar3 = FUN_004de100(*(int *)(param_1 + 0x10c));
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = FUN_004de100(*(int *)(param_1 + 0x10c));
    if (iVar3 != iVar4 + 0x14) {
      do {
        iVar4 = FUN_0048c950(*(int *)(iVar3 + 8));
        if (iVar4 == 0) {
          bVar1 = FUN_0048c9a0(*(int *)(iVar3 + 8));
          uVar6 = CONCAT31(extraout_var,bVar1);
          if (!bVar1) goto LAB_004d7148;
          cVar2 = FUN_0048c780(*(int *)(iVar3 + 8));
          uVar6 = CONCAT31(extraout_var_00,cVar2);
          if (cVar2 != '\0') goto LAB_004d7148;
        }
        iVar3 = *(int *)(iVar3 + 4);
        iVar4 = FUN_004de100(*(int *)(param_1 + 0x10c));
      } while (iVar3 != iVar4 + 0x14);
    }
    iVar3 = FUN_004df220(*(int *)(param_1 + 0x10c));
    if (iVar3 != 0) {
      piVar5 = (int *)FUN_004df220(*(int *)(param_1 + 0x10c));
      uVar6 = (**(code **)(*piVar5 + 0x164))();
      if ((char)uVar6 != '\0') goto LAB_004d7148;
    }
    uVar6 = *(uint *)(param_1 + 0x10c);
    if (*(int *)(uVar6 + 0x1c0) != 4) goto LAB_004d714d;
  }
  iVar3 = FUN_005b3c50(*(int *)(param_1 + 0xa0));
  uVar6 = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_004df220(iVar3);
    uVar6 = 0;
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_004df220(iVar3);
      uVar6 = (**(code **)(*piVar5 + 0x164))();
      if ((char)uVar6 != '\0') {
LAB_004d7148:
        return uVar6 & 0xffffff00;
      }
    }
  }
LAB_004d714d:
  return CONCAT31((int3)(uVar6 >> 8),1);
}


//// FUNCTION FUN_004d7160 @ 004d7160 ////

undefined1 FUN_004d7160(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char **ppcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9390;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_005998e0(param_1);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"smalltalk",9);
  local_28 = 9;
  local_2c[9] = '\0';
  ppcVar5 = &local_2c;
  local_4 = 0;
  iVar3 = FUN_00401c30(iVar2);
  uVar4 = FUN_00401ec0((undefined4 *)(iVar3 + 100),ppcVar5);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar4 != '\0') {
    ExceptionList = local_c;
    return 1;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"readyposition",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  ppcVar5 = &local_2c;
  local_4 = 1;
  iVar2 = FUN_00401c30(iVar2);
  uVar4 = FUN_00401ec0((undefined4 *)(iVar2 + 100),ppcVar5);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if ((char)uVar4 != '\0') {
    iVar2 = FUN_005998e0(param_1);
    uVar1 = FUN_00401bd0(iVar2);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_004d72f0 @ 004d72f0 ////

void * __thiscall FUN_004d72f0(void *this,void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004d7060((int)this);
  if ((char)uVar1 == '\0') {
    FUN_00508cf0(param_1,3);
    return param_1;
  }
  if (*(char *)((int)this + 0x128) != '\0') {
    FUN_00508cf0(param_1,1);
    return param_1;
  }
  FUN_00508cf0(param_1,2);
  return param_1;
}


//// FUNCTION FUN_004d7380 @ 004d7380 ////

void __fastcall FUN_004d7380(int param_1)

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


//// FUNCTION FUN_004d73a0 @ 004d73a0 ////

void __fastcall FUN_004d73a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1f03c;
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


//// FUNCTION FUN_004d7470 @ 004d7470 ////

void __fastcall FUN_004d7470(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1f04c;
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


//// FUNCTION FUN_004d7510 @ 004d7510 ////

void __fastcall FUN_004d7510(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1f05c;
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


//// FUNCTION FUN_004d75a0 @ 004d75a0 ////

void __fastcall FUN_004d75a0(int param_1)

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


//// FUNCTION FUN_004d75d0 @ 004d75d0 ////

void __fastcall FUN_004d75d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1f06c;
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


//// FUNCTION FUN_004d7740 @ 004d7740 ////

undefined4 * __thiscall FUN_004d7740(void *this,byte param_1)

{
  FUN_00435ec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004d7760 @ 004d7760 ////

undefined4 * __thiscall FUN_004d7760(void *this,byte param_1)

{
  FUN_004076b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004d7780 @ 004d7780 ////

/* WARNING: Removing unreachable block (ram,0x004d8d72) */
/* WARNING: Removing unreachable block (ram,0x004d8d89) */

void __thiscall FUN_004d7780(void *this,void *param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  void **ppvVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  size_t sVar8;
  undefined4 *puVar9;
  uint uVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  wchar_t *pwVar14;
  wchar_t *pwStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  wchar_t awStack_cc [10];
  char *local_b8;
  void *local_b4;
  void *pvStack_b0;
  wchar_t *local_ac;
  uint local_a8;
  uint local_a4;
  wchar_t local_a0 [6];
  void *pvStack_94;
  undefined1 auStack_90 [4];
  char *pcStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  char acStack_80 [16];
  wchar_t *pwStack_70;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [6];
  void *pvStack_54;
  void *pvStack_50;
  uint uStack_4c;
  uint uStack_48;
  void *pvStack_34;
  undefined1 auStack_30 [4];
  undefined1 *apuStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca95c3;
  pvStack_c = ExceptionList;
  bVar3 = false;
  local_ac = local_a0;
  local_a0[0] = L'\0';
  local_a8 = 0;
  local_a4 = 10;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_b4 = *(void **)((int)this + 0x10);
  local_4 = 1;
  ExceptionList = &pvStack_c;
  ppvVar4 = &pvStack_c;
  local_b8 = this;
  if (local_b4 != *(void **)((int)this + 0x14)) {
    do {
      ExceptionList = ppvVar4;
      piVar2 = *(int **)((int)local_b4 + 0x14);
      if (piVar2 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar2 + 0x1ec))();
        if (iVar5 == 0) {
          uVar7 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_ANOTHERPROJECT</translate>");
          if (local_64 <= uVar7) {
            if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
              _free(local_6c);
            }
            uVar10 = uVar7 + 0x20 >> 5;
            local_64 = uVar10 << 5;
            local_6c = _malloc(uVar10 * 0x40);
          }
          _wcsncpy(local_6c,L"<translate>PROJECT_PROBLEM_ANOTHERPROJECT</translate>",uVar7);
          local_6c[uVar7] = L'\0';
          local_68 = uVar7;
        }
        else {
          puVar6 = FUN_0045f620(*(void **)(iVar5 + 0xa0),&pcStack_8c);
          FUN_004036d0(&local_6c,(wchar_t *)*puVar6,puVar6[1]);
          if (10 < uStack_84) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_8c);
          }
        }
        uVar7 = FUN_00ace02d(L"<phrasebook>");
        if (local_a4 <= uVar7) {
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          local_a4 = uVar7 + 0x20 & 0xffffffe0;
          local_ac = _malloc(local_a4 * 2);
        }
        _wcsncpy(local_ac,L"<phrasebook>",uVar7);
        local_ac[uVar7] = L'\0';
        local_a8 = uVar7;
        switch(piVar2[0x205]) {
        case 2:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_ACTORBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_ACTORBUSY</translate>";
          break;
        case 3:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_DIRECTORBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_DIRECTORBUSY</translate>";
          break;
        default:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_STAFFBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_STAFFBUSY</translate>";
          break;
        case 7:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_CAMERAMANBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_CAMERAMANBUSY</translate>";
          break;
        case 8:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_SOUNDMANBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_SOUNDMANBUSY</translate>";
          break;
        case 10:
        case 0xb:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_RUNNERBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_RUNNERBUSY</translate>";
          break;
        case 0xc:
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_CLAPPERBOARDBUSY</translate>");
          pwVar14 = L"<translate>PROJECT_PROBLEM_CLAPPERBOARDBUSY</translate>";
        }
        FUN_0040cae0(&local_ac,pwVar14,sVar8);
        sVar8 = FUN_00ace02d(L"<phrase key=name><a href=%1>");
        FUN_0040cae0(&local_ac,L"<phrase key=name><a href=%1>",sVar8);
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&pwStack_d8);
        FUN_0040cae0(&pvStack_b0,(wchar_t *)*puVar6,puVar6[1]);
        if (10 < uStack_d4) {
                    /* WARNING: Subroutine does not return */
          _free((void *)0x0);
        }
        sVar8 = FUN_00ace02d(L"</a></phrase><phrase key=job>");
        FUN_0040cae0(&pvStack_b0,L"</a></phrase><phrase key=job>",sVar8);
        FUN_0040cae0(&pvStack_b0,pwStack_70,(size_t)local_6c);
        sVar8 = FUN_00ace02d(L"</phrase></phrasebook>");
        FUN_0040cae0(&pvStack_b0,L"</phrase></phrasebook>",sVar8);
        local_b4 = operator_new(0xac);
        puStack_8._0_1_ = 2;
        if (local_b4 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0049b2f0(local_b4,&pvStack_b0,0);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&pvStack_50);
        uVar7 = puVar9[1];
        pwVar14 = (wchar_t *)*puVar9;
        if ((uint)puVar6[0x16] <= uVar7) {
          if (10 < (uint)puVar6[0x16]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x14]);
          }
          uVar10 = uVar7 + 0x20 & 0xffffffe0;
          puVar6[0x16] = uVar10;
          pvVar11 = _malloc(uVar10 * 2);
          puVar6[0x14] = pvVar11;
        }
        _wcsncpy((wchar_t *)puVar6[0x14],pwVar14,uVar7);
        puVar6[0x15] = uVar7;
        *(undefined2 *)(puVar6[0x14] + uVar7 * 2) = 0;
        if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_54);
        }
        (**(code **)(puVar6[0x24] + 4))();
        puVar6[0x29] = piVar2;
        (**(code **)puVar6[0x24])();
        FUN_0049b940(param_1,puVar6);
        this = local_b8;
      }
      local_b4 = (void *)((int)local_b4 + 0x18);
      ppvVar4 = ExceptionList;
    } while (local_b4 != *(void **)((int)this + 0x14));
  }
  local_b4 = *(void **)((int)this + 0x20);
  if (local_b4 != *(void **)((int)this + 0x24)) {
    do {
      piVar2 = *(int **)((int)local_b4 + 0x14);
      if (piVar2 != (int *)0x0) {
        uVar7 = FUN_00ace02d(L"<phrasebook>");
        if (local_a4 <= uVar7) {
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          local_a4 = uVar7 + 0x20 & 0xffffffe0;
          local_ac = _malloc(local_a4 * 2);
        }
        _wcsncpy(local_ac,L"<phrasebook>",uVar7);
        local_ac[uVar7] = L'\0';
        local_a8 = uVar7;
        sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_STARUNHIRED</translate>");
        FUN_0040cae0(&local_ac,L"<translate>PROJECT_PROBLEM_STARUNHIRED</translate>",sVar8);
        sVar8 = FUN_00ace02d(L"<phrase key=name><a href=%1>");
        FUN_0040cae0(&local_ac,L"<phrase key=name><a href=%1>",sVar8);
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&uStack_4c);
        FUN_0040cae0(&pvStack_b0,(wchar_t *)*puVar6,puVar6[1]);
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_50);
        }
        sVar8 = FUN_00ace02d(L"</a></phrase></phrasebook>");
        FUN_0040cae0(&pvStack_b0,L"</a></phrase></phrasebook>",sVar8);
        local_b4 = operator_new(0xac);
        puStack_8._0_1_ = 3;
        if (local_b4 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0049b2f0(local_b4,&pvStack_b0,1);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(auStack_90);
        uVar7 = puVar9[1];
        pwVar14 = (wchar_t *)*puVar9;
        if ((uint)puVar6[0x16] <= uVar7) {
          if (10 < (uint)puVar6[0x16]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x14]);
          }
          uVar10 = uVar7 + 0x20 >> 5;
          puVar6[0x16] = uVar10 << 5;
          pvVar11 = _malloc(uVar10 * 0x40);
          puVar6[0x14] = pvVar11;
        }
        _wcsncpy((wchar_t *)puVar6[0x14],pwVar14,uVar7);
        puVar6[0x15] = uVar7;
        *(undefined2 *)(puVar6[0x14] + uVar7 * 2) = 0;
        if (&lpType_0000000a < pcStack_8c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_94);
        }
        (**(code **)(puVar6[0x24] + 4))();
        puVar6[0x29] = piVar2;
        (**(code **)puVar6[0x24])();
        FUN_0049b940(param_1,puVar6);
        this = local_b8;
      }
      local_b4 = (void *)((int)local_b4 + 0x18);
    } while (local_b4 != *(void **)((int)this + 0x24));
  }
  local_b4 = *(void **)((int)this + 0x40);
  if (local_b4 != *(void **)((int)this + 0x44)) {
    do {
      piVar2 = *(int **)((int)local_b4 + 0x14);
      if (piVar2 != (int *)0x0) {
        uVar7 = FUN_00ace02d(L"<phrasebook>");
        if (local_a4 <= uVar7) {
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          local_a4 = uVar7 + 0x20 & 0xffffffe0;
          local_ac = _malloc(local_a4 * 2);
        }
        _wcsncpy(local_ac,L"<phrasebook>",uVar7);
        local_ac[uVar7] = L'\0';
        local_a8 = uVar7;
        sVar8 = FUN_00ace02d(L"<translate>PROBLEM_CANTGETCHANGED</translate>");
        FUN_0040cae0(&local_ac,L"<translate>PROBLEM_CANTGETCHANGED</translate>",sVar8);
        sVar8 = FUN_00ace02d(L"<phrase key=name><a href=%1>");
        FUN_0040cae0(&local_ac,L"<phrase key=name><a href=%1>",sVar8);
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&uStack_4c);
        FUN_0040cae0(&pvStack_b0,(wchar_t *)*puVar6,puVar6[1]);
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_50);
        }
        sVar8 = FUN_00ace02d(L"</a></phrase></phrasebook>");
        FUN_0040cae0(&pvStack_b0,L"</a></phrase></phrasebook>",sVar8);
        local_b4 = operator_new(0xac);
        puStack_8._0_1_ = 4;
        if (local_b4 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0049b2f0(local_b4,&pvStack_b0,1);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(auStack_90);
        uVar7 = puVar9[1];
        pwVar14 = (wchar_t *)*puVar9;
        if ((uint)puVar6[0x16] <= uVar7) {
          if (10 < (uint)puVar6[0x16]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x14]);
          }
          uVar10 = uVar7 + 0x20 >> 5;
          puVar6[0x16] = uVar10 << 5;
          pvVar11 = _malloc(uVar10 * 0x40);
          puVar6[0x14] = pvVar11;
        }
        _wcsncpy((wchar_t *)puVar6[0x14],pwVar14,uVar7);
        puVar6[0x15] = uVar7;
        *(undefined2 *)(puVar6[0x14] + uVar7 * 2) = 0;
        if (&lpType_0000000a < pcStack_8c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_94);
        }
        (**(code **)(puVar6[0x24] + 4))();
        puVar6[0x29] = piVar2;
        (**(code **)puVar6[0x24])();
        FUN_0049b940(param_1,puVar6);
        this = local_b8;
      }
      local_b4 = (void *)((int)local_b4 + 0x18);
    } while (local_b4 != *(void **)((int)this + 0x44));
  }
  local_b4 = *(void **)((int)this + 0x50);
  if (local_b4 != *(void **)((int)this + 0x54)) {
    do {
      piVar2 = *(int **)((int)local_b4 + 0x14);
      if (piVar2 != (int *)0x0) {
        uVar7 = FUN_00ace02d(L"<phrasebook>");
        if (local_a4 <= uVar7) {
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          local_a4 = uVar7 + 0x20 & 0xffffffe0;
          local_ac = _malloc(local_a4 * 2);
        }
        _wcsncpy(local_ac,L"<phrasebook>",uVar7);
        local_ac[uVar7] = L'\0';
        pcVar13 = "gender_female";
        if (piVar2[0x128] != 0) {
          pcVar13 = "gender_male";
        }
        pwStack_d8 = awStack_cc;
        awStack_cc[0] = awStack_cc[0] & 0xff00;
        uStack_d4 = 0;
        uStack_d0 = 0x14;
        pcVar12 = pcVar13;
        do {
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar10 = (int)pcVar12 - (int)(pcVar13 + 1);
        local_a8 = uVar7;
        if (0x13 < uVar10) {
          uStack_d0 = uVar10 + 0x20 & 0xffffffe0;
          pwStack_d8 = _malloc(uStack_d0);
        }
        _strncpy((char *)pwStack_d8,pcVar13,uVar10);
        *(char *)(uVar10 + (int)pwStack_d8) = '\0';
        pcStack_8c = acStack_80;
        puVar6 = (undefined4 *)0x0;
        acStack_80[0] = '\0';
        uStack_88 = 0;
        uStack_84 = 0x20;
        uStack_d4 = uVar10;
        pcStack_8c = _malloc(0x20);
        _strncpy(pcStack_8c,"PROJECT_PROBLEM_STARDEAD",0x18);
        uStack_88 = 0x18;
        pcStack_8c[0x18] = '\0';
        local_4._0_1_ = 6;
        iVar5 = FUN_009b5f90(&pcStack_8c,0xffffffff,&pwStack_d8);
        FUN_0040cae0(&local_ac,*(wchar_t **)(iVar5 + 0x40),*(size_t *)(iVar5 + 0x44));
        local_4 = CONCAT31(local_4._1_3_,5);
        if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_8c);
        }
        sVar8 = FUN_00ace02d(L"<phrase key=name><a href=%1>");
        FUN_0040cae0(&local_ac,L"<phrase key=name><a href=%1>",sVar8);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&uStack_4c);
        FUN_0040cae0(&pvStack_b0,(wchar_t *)*puVar9,puVar9[1]);
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_50);
        }
        sVar8 = FUN_00ace02d(L"</a></phrase></phrasebook>");
        FUN_0040cae0(&pvStack_b0,L"</a></phrase></phrasebook>",sVar8);
        local_b4 = operator_new(0xac);
        puStack_8._0_1_ = 7;
        if (local_b4 != (void *)0x0) {
          puVar6 = FUN_0049b2f0(local_b4,&pvStack_b0,0);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,5);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(auStack_30);
        uVar7 = puVar9[1];
        pwVar14 = (wchar_t *)*puVar9;
        if ((uint)puVar6[0x16] <= uVar7) {
          if (10 < (uint)puVar6[0x16]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x14]);
          }
          uVar10 = uVar7 + 0x20 >> 5;
          puVar6[0x16] = uVar10 << 5;
          pvVar11 = _malloc(uVar10 * 0x40);
          puVar6[0x14] = pvVar11;
        }
        _wcsncpy((wchar_t *)puVar6[0x14],pwVar14,uVar7);
        puVar6[0x15] = uVar7;
        *(undefined2 *)(puVar6[0x14] + uVar7 * 2) = 0;
        if (&lpType_0000000a < apuStack_2c[0]) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_34);
        }
        (**(code **)(puVar6[0x24] + 4))();
        puVar6[0x29] = piVar2;
        (**(code **)puVar6[0x24])();
        FUN_0049b940(param_1,puVar6);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (0x14 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
      }
      local_b4 = (void *)((int)local_b4 + 0x18);
    } while (local_b4 != *(void **)(local_b8 + 0x54));
  }
  local_b4 = *(void **)(local_b8 + 0x30);
  pcVar13 = local_b8;
  if (local_b4 != *(void **)(local_b8 + 0x34)) {
    do {
      piVar2 = *(int **)((int)local_b4 + 0x14);
      if (piVar2 != (int *)0x0) {
        uVar7 = FUN_00ace02d(L"<phrasebook>");
        if (local_a4 <= uVar7) {
          if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
            _free(local_ac);
          }
          uVar10 = uVar7 + 0x20 >> 5;
          local_a4 = uVar10 << 5;
          local_ac = _malloc(uVar10 * 0x40);
        }
        _wcsncpy(local_ac,L"<phrasebook>",uVar7);
        local_ac[uVar7] = L'\0';
        local_a8 = uVar7;
        if ((piVar2[0x205] < 2) || (3 < piVar2[0x205])) {
          sVar8 = FUN_00ace02d(L"<translate>PROJECT_PROBLEM_PERSONNEEDONSET</translate>");
          FUN_0040cae0(&local_ac,L"<translate>PROJECT_PROBLEM_PERSONNEEDONSET</translate>",sVar8);
        }
        else {
          puVar6 = (undefined4 *)
                   (**(code **)(*piVar2 + 0x228))(apuStack_2c,*(undefined4 *)(pcVar13 + 0x70));
          FUN_0040cae0(&local_ac,(wchar_t *)*puVar6,puVar6[1]);
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apuStack_2c[0]);
          }
        }
        sVar8 = FUN_00ace02d(L"<phrase key=name><a href=%1>");
        FUN_0040cae0(&local_ac,L"<phrase key=name><a href=%1>",sVar8);
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(&uStack_4c);
        FUN_0040cae0(&pvStack_b0,(wchar_t *)*puVar6,puVar6[1]);
        if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_50);
        }
        sVar8 = FUN_00ace02d(L"</a></phrase></phrasebook>");
        FUN_0040cae0(&pvStack_b0,L"</a></phrase></phrasebook>",sVar8);
        local_b4 = operator_new(0xac);
        puStack_8._0_1_ = 8;
        if (local_b4 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_0049b2f0(local_b4,&pvStack_b0,0);
        }
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        puVar9 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(auStack_90);
        uVar7 = puVar9[1];
        pwVar14 = (wchar_t *)*puVar9;
        if ((uint)puVar6[0x16] <= uVar7) {
          if (10 < (uint)puVar6[0x16]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar6[0x14]);
          }
          uVar10 = uVar7 + 0x20 >> 5;
          puVar6[0x16] = uVar10 << 5;
          pvVar11 = _malloc(uVar10 * 0x40);
          puVar6[0x14] = pvVar11;
        }
        _wcsncpy((wchar_t *)puVar6[0x14],pwVar14,uVar7);
        puVar6[0x15] = uVar7;
        *(undefined2 *)(puVar6[0x14] + uVar7 * 2) = 0;
        if (&lpType_0000000a < pcStack_8c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_94);
        }
        (**(code **)(puVar6[0x24] + 4))();
        puVar6[0x29] = piVar2;
        (**(code **)puVar6[0x24])();
        FUN_0049b940(param_1,puVar6);
        pcVar13 = local_b8;
      }
      local_b4 = (void *)((int)local_b4 + 0x18);
    } while (local_b4 != *(void **)(pcVar13 + 0x34));
  }
  if (*local_b8 != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_waitingforprops</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uVar10 = uVar7 + 0x20 >> 5;
        uStack_d0 = uVar10 << 5;
        pwStack_d8 = _malloc(uVar10 * 0x40);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_waitingforprops</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,10);
      bVar3 = true;
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0xb;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[1] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_cameramanneeded</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_cameramanneeded</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0xd);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0xe;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[2] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_soundmanneeded</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_soundmanneeded</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x10);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x11;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[3] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_runnerneeded</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uVar10 = uVar7 + 0x20 >> 5;
        uStack_d0 = uVar10 << 5;
        pwStack_d8 = _malloc(uVar10 * 0x40);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_runnerneeded</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x13);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x14;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[4] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_clappermanneedeD</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_clappermanneedeD</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x16);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x17;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[5] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_partunfilled</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_partunfilled</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x19);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x1a;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  bVar3 = false;
  if (local_b8[6] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_waitingonset</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uVar10 = uVar7 + 0x20 >> 5;
        uStack_d0 = uVar10 << 5;
        pwStack_d8 = _malloc(uVar10 * 0x40);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_waitingonset</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,0);
    }
    local_4 = 0x1d;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  if (local_b8[7] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_setknackered</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_setknackered</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      local_4 = CONCAT31(local_4._1_3_,0x1f);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x20;
    FUN_0049b940(param_1,puVar6);
    local_4 = 1;
  }
  bVar3 = false;
  if (local_b8[8] != '\0') {
    pvVar11 = operator_new(0xac);
    pvStack_b0 = pvVar11;
    if (pvVar11 == (void *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pwStack_d8 = awStack_cc;
      awStack_cc[0] = L'\0';
      uStack_d4 = 0;
      uStack_d0 = 10;
      uVar7 = FUN_00ace02d(L"<translate>project_problem_sethidden</translate>");
      if (uStack_d0 <= uVar7) {
        if (10 < uStack_d0) {
                    /* WARNING: Subroutine does not return */
          _free(pwStack_d8);
        }
        uStack_d0 = uVar7 + 0x20 & 0xffffffe0;
        pwStack_d8 = _malloc(uStack_d0 * 2);
      }
      _wcsncpy(pwStack_d8,L"<translate>project_problem_sethidden</translate>",uVar7);
      pwStack_d8[uVar7] = L'\0';
      bVar3 = true;
      local_4 = CONCAT31(local_4._1_3_,0x22);
      uStack_d4 = uVar7;
      puVar6 = FUN_0049b2f0(pvVar11,&pwStack_d8,1);
    }
    local_4 = 0x23;
    FUN_0049b940(param_1,puVar6);
    if ((bVar3) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_d8);
    }
  }
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (local_a4 < 0xb) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_004d8f20 @ 004d8f20 ////

void __fastcall FUN_004d8f20(int param_1)

{
  uint _Count;
  wchar_t *_Source;
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 uVar7;
  int local_90;
  undefined **ppuStack_84;
  int iStack_80;
  int *piStack_7c;
  undefined ***pppuStack_78;
  int iStack_70;
  wchar_t *pwStack_6c;
  uint uStack_68;
  uint uStack_64;
  wchar_t awStack_60 [10];
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_00ca95eb;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x22c) == '\0') {
    piVar4 = (int *)(param_1 + 0xac);
    local_90 = 4;
    ExceptionList = &local_c;
    do {
      if (piVar4[-1] != *piVar4) {
        piVar5 = (int *)(piVar4[-1] + 0x14);
        do {
          uStack_4 = 0xffffffff;
          if ((int *)*piVar5 != (int *)0x0) {
            (**(code **)(*(int *)*piVar5 + 0x5c))(local_2c);
            pwStack_6c = awStack_60;
            awStack_60[0] = L'\0';
            uStack_68 = 0;
            uStack_64 = 10;
            uStack_4 = 1;
            if (DAT_00f8860c != (int *)0x0) {
              puVar2 = (undefined4 *)(**(code **)(*DAT_00f8860c + 0x5c))(apvStack_4c);
              _Count = puVar2[1];
              _Source = (wchar_t *)*puVar2;
              if (uStack_64 <= _Count) {
                if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
                  _free(pwStack_6c);
                }
                uVar3 = _Count + 0x20 >> 5;
                uStack_64 = uVar3 << 5;
                pwStack_6c = _malloc(uVar3 * 0x40);
              }
              _wcsncpy(pwStack_6c,_Source,_Count);
              pwStack_6c[_Count] = L'\0';
              uStack_68 = _Count;
              if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_4c[0]);
              }
            }
            piVar1 = (int *)*piVar5;
            if (piVar1 == DAT_0104d524) {
              uVar7 = 1;
            }
            else if (DAT_00f8860c == piVar1) {
              uVar7 = 1;
            }
            else {
              uVar7 = 0;
            }
            FUN_00575c40(piVar1,uVar7);
            if (10 < uStack_64) {
                    /* WARNING: Subroutine does not return */
              _free(pwStack_6c);
            }
            uStack_4 = 0xffffffff;
            if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
              _free(local_2c[0]);
            }
          }
          piVar1 = piVar5 + 1;
          piVar5 = piVar5 + 6;
        } while (piVar1 != (int *)*piVar4);
      }
      uStack_4 = 0xffffffff;
      piVar4 = piVar4 + 4;
      local_90 = local_90 + -1;
    } while (local_90 != 0);
    iStack_70 = FUN_005b2220(*(int *)(param_1 + 0xa0));
    pppuStack_78 = &ppuStack_84;
    iStack_80 = 0;
    piStack_7c = (int *)0x0;
    ppuStack_84 = &PTR_LAB_00d1f04c;
    if (iStack_70 != 0) {
      piStack_7c = (int *)(iStack_70 + 0x18);
      iStack_80 = *piStack_7c;
      *(int **)(*piStack_7c + 4) = &iStack_80;
      *piStack_7c = (int)&iStack_80;
    }
    iVar6 = *(int *)(iStack_70 + 100);
    uStack_4 = 2;
    if (iVar6 != *(int *)(iStack_70 + 0x68)) {
      do {
        piVar4 = (int *)FUN_005a6470(*(int *)(iVar6 + 0x14));
        if (piVar4 != (int *)0x0) {
          if (piVar4 == DAT_00f8860c) {
            uVar7 = 1;
          }
          else if (piVar4 == DAT_0104d524) {
            uVar7 = 1;
          }
          else {
            uVar7 = 0;
          }
          FUN_00575c40(piVar4,uVar7);
        }
        iVar6 = iVar6 + 0x18;
      } while (iVar6 != *(int *)(iStack_70 + 0x68));
    }
    piVar4 = (int *)FUN_005b2780(*(int *)(param_1 + 0xa0));
    if (piVar4 != (int *)0x0) {
      if (piVar4 == DAT_00f8860c) {
        uVar7 = 1;
      }
      else if (piVar4 == DAT_0104d524) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      FUN_00575c40(piVar4,uVar7);
    }
    if (piStack_7c != (int *)0x0) {
      *piStack_7c = iStack_80;
    }
    if (iStack_80 != 0) {
      *(int **)(iStack_80 + 4) = piStack_7c;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d91d0 @ 004d91d0 ////

void __fastcall FUN_004d91d0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9608;
  local_c = ExceptionList;
  piVar5 = (int *)(param_1 + 0xac);
  iVar3 = 4;
  ExceptionList = &local_c;
  do {
    if (piVar5[-1] != *piVar5) {
      puVar4 = (undefined4 *)(piVar5[-1] + 0x14);
      do {
        if ((void *)*puVar4 != (void *)0x0) {
          FUN_00575c40((void *)*puVar4,0);
        }
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 6;
      } while (puVar1 != (undefined4 *)*piVar5);
    }
    piVar5 = piVar5 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_10 = FUN_005b2220(*(int *)(param_1 + 0xa0));
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d1f04c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  iVar3 = *(int *)(local_10 + 100);
  local_4 = 0;
  if (iVar3 != *(int *)(local_10 + 0x68)) {
    do {
      pvVar2 = (void *)FUN_005a6470(*(int *)(iVar3 + 0x14));
      FUN_00575c40(pvVar2,0);
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(local_10 + 0x68));
  }
  uVar6 = 0;
  pvVar2 = (void *)FUN_005b2780(*(int *)(param_1 + 0xa0));
  FUN_00575c40(pvVar2,uVar6);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d9300 @ 004d9300 ////

uint __thiscall FUN_004d9300(void *this,int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  puVar2 = (uint *)((int)this + 0xac);
  do {
    for (uVar1 = puVar2[-1]; uVar1 != *puVar2; uVar1 = uVar1 + 0x18) {
      if (*(int *)(uVar1 + 0x14) == param_1) goto LAB_004d9391;
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 4);
  uVar1 = FUN_005b2780(*(int *)((int)this + 0xa0));
  if (uVar1 != param_1) {
    if (*(int *)((int)this + 0x10c) != 0) {
      iVar3 = FUN_004de100(*(int *)((int)this + 0x10c));
      uVar4 = *(uint *)(iVar3 + 8);
      iVar3 = FUN_004de100(*(int *)((int)this + 0x10c));
      uVar1 = iVar3 + 0x14;
      if (uVar4 != uVar1) {
        do {
          uVar1 = FUN_0048c950(*(int *)(uVar4 + 8));
          if (uVar1 == param_1) goto LAB_004d9391;
          uVar4 = *(uint *)(uVar4 + 4);
          iVar3 = FUN_004de100(*(int *)((int)this + 0x10c));
          uVar1 = iVar3 + 0x14;
        } while (uVar4 != uVar1);
      }
    }
    return uVar1 & 0xffffff00;
  }
LAB_004d9391:
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_004d93a0 @ 004d93a0 ////

void __fastcall FUN_004d93a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_005b2220(*(int *)(param_1 + 0xa0));
  iVar1 = *(int *)(iVar1 + 100);
  iVar2 = FUN_005b2220(*(int *)(param_1 + 0xa0));
  if (iVar1 != *(int *)(iVar2 + 0x68)) {
    do {
      iVar2 = *(int *)(iVar1 + 0x14);
      piVar3 = (int *)FUN_005a6470(iVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1bc))(param_1);
      }
      piVar3 = (int *)FUN_005a64e0(iVar2);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x1bc))(param_1);
      }
      iVar1 = iVar1 + 0x18;
      iVar2 = FUN_005b2220(*(int *)(param_1 + 0xa0));
    } while (iVar1 != *(int *)(iVar2 + 0x68));
  }
  piVar3 = (int *)FUN_005b2780(*(int *)(param_1 + 0xa0));
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1bc))(param_1);
  }
  piVar3 = (int *)(param_1 + 0xac);
  iVar1 = 4;
  do {
    iVar2 = piVar3[-1];
    if (iVar2 != *piVar3) {
      do {
        if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
          (**(code **)(**(int **)(iVar2 + 0x14) + 0x1bc))(param_1);
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != *piVar3);
    }
    piVar3 = piVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_004d9460 @ 004d9460 ////

void __fastcall FUN_004d9460(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  TypeDescriptor *pTVar12;
  TypeDescriptor *pTVar13;
  int iVar14;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar4 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9683;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x128) = 1;
  if (*(int *)(param_1 + 0xa0) == 0) {
    ExceptionList = pvVar4;
    return;
  }
  if ((*(int *)(param_1 + 0x10c) != 0) &&
     (iVar3 = FUN_004df220(*(int *)(param_1 + 0x10c)), iVar3 != 0)) {
    pvVar4 = operator_new(0x174);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00959150(pvVar4,iVar3);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar5);
  }
  iVar14 = 0;
  pTVar13 = &TM::CStar::RTTI_Type_Descriptor;
  pTVar12 = &TM::CStaff::RTTI_Type_Descriptor;
  iVar3 = 0;
  piVar5 = (int *)FUN_005b2780(*(int *)(param_1 + 0xa0));
  piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar12,pTVar13,iVar14);
  if (piVar5 != (int *)0x0) {
    local_14 = operator_new(0x174);
    local_4 = 1;
    if (local_14 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = ShootMoodPip_Constructor(local_14,0,piVar5);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar6);
    local_14 = operator_new(0x160);
    local_4 = 2;
    if (local_14 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = CastingPerkPip_Constructor(local_14,7,piVar5,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar6);
    local_14 = operator_new(0x160);
    local_4 = 3;
    if (local_14 == (void *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = CastingPerkPip_Constructor(local_14,0xc,piVar5,0);
    }
    local_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar6);
    if ((*(float *)(param_1 + 0x10c) != 0.0) &&
       (uVar2 = FUN_004e0fd0(*(float *)(param_1 + 0x10c)), (char)uVar2 != '\0')) {
      local_14 = operator_new(0x160);
      local_4 = 4;
      if (local_14 == (void *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = CastingPerkPip_Constructor(local_14,0xe,piVar5,0);
      }
      local_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar6);
      local_14 = operator_new(0x160);
      local_4 = 5;
      if (local_14 == (void *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = CastingPerkPip_Constructor(local_14,0xf,piVar5,0);
      }
      local_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar6);
      piVar6 = (int *)0x0;
      iVar14 = FUN_004de100(*(int *)(param_1 + 0x10c));
      iVar3 = *(int *)(iVar14 + 8);
      if (iVar3 != iVar14 + 0x14) {
        do {
          pfVar7 = (float *)FUN_0048c9e0(*(void **)(iVar3 + 8),&local_14);
          if (0.0 < *pfVar7) {
            cVar1 = FUN_0048c730(*(int *)(iVar3 + 8));
            if ((cVar1 == '\0') || (iVar8 = FUN_0048c9f0(*(int *)(iVar3 + 8)), iVar8 != 0)) {
              iVar8 = FUN_0048c9f0(*(int *)(iVar3 + 8));
              if (iVar8 != 0) {
                iVar8 = FUN_0048c9f0(*(int *)(iVar3 + 8));
                iVar8 = FUN_005a6130(iVar8);
                if (iVar8 != 4) goto LAB_004d96e8;
              }
            }
            else {
LAB_004d96e8:
              iVar8 = FUN_0048c9f0(*(int *)(iVar3 + 8));
              if (*(int *)(iVar8 + 0xc4) == 0) {
                iVar8 = iVar8 + 0x98;
              }
              else {
                iVar8 = iVar8 + 0xb0;
              }
              piVar6 = *(int **)(iVar8 + 0x14);
              local_10 = operator_new(0x160);
              local_4 = 6;
              if (local_10 == (void *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                piVar9 = CastingPerkPip_Constructor(local_10,0xd,piVar6,0);
              }
              local_4 = 0xffffffff;
              FUN_00956840(DAT_010507c0,piVar9);
            }
          }
          iVar3 = *(int *)(iVar3 + 4);
        } while (iVar3 != iVar14 + 0x14);
        if (piVar6 != (int *)0x0) goto LAB_004d979e;
      }
      local_10 = operator_new(0x160);
      local_4 = 7;
      if (local_10 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = CastingPerkPip_Constructor(local_10,0xd,piVar5,0);
      }
      local_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar5);
    }
  }
LAB_004d979e:
  iVar3 = FUN_005b2220(*(int *)(param_1 + 0xa0));
  if ((iVar3 != 0) && (iVar14 = *(int *)(iVar3 + 100), iVar14 != *(int *)(iVar3 + 0x68))) {
    do {
      iVar8 = *(int *)(iVar14 + 0x14);
      if ((iVar8 != 0) &&
         ((iVar10 = FUN_005a6470(iVar8), iVar10 != 0 &&
          (uVar11 = FUN_005a6140(iVar8), (char)uVar11 != '\0')))) {
        iVar10 = FUN_005a6470(iVar8);
        uVar11 = FUN_00598ee0(iVar10);
        if ((char)uVar11 != '\0') {
          uVar11 = FUN_005a6470(iVar8);
          local_10 = operator_new(0x174);
          local_4 = 8;
          if (local_10 == (void *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = ShootMoodPip_Constructor(local_10,0,uVar11);
          }
          local_4 = 0xffffffff;
          FUN_00956840(DAT_010507c0,piVar5);
        }
      }
      iVar14 = iVar14 + 0x18;
    } while (iVar14 != *(int *)(iVar3 + 0x68));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004d9860 @ 004d9860 ////

void __fastcall FUN_004d9860(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x128) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x148) + 4))();
    *(undefined4 *)(iVar1 + 0x15c) = 0;
    (*(code *)**(undefined4 **)(iVar1 + 0x148))();
  }
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
    (**(code **)(*(int *)(param_1 + 0x110) + 4))();
    *(undefined4 *)(param_1 + 0x124) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x110))();
  }
  iVar1 = FUN_005b3c50(*(int *)(param_1 + 0xa0));
  if (iVar1 == 0) {
    FUN_004d91d0(param_1);
    *(undefined1 *)(param_1 + 0x22c) = 1;
  }
  (**(code **)(*(int *)(param_1 + 0xf8) + 4))();
  *(undefined4 *)(param_1 + 0x10c) = 0;
                    /* WARNING: Could not recover jumptable at 0x004d98ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0xf8))();
  return;
}


//// FUNCTION FUN_004d98f0 @ 004d98f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d98f0(int param_1)

{
  bool bVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float unaff_EDI;
  float local_18;
  float fStack_14;
  undefined1 auStack_10 [16];
  
  if (*(char *)(param_1 + 0xf4) == '\0') {
    piVar2 = (int *)FUN_004df220(*(int *)(param_1 + 0x10c));
    (**(code **)(*piVar2 + 0x34))(&local_18);
    iVar4 = *(int *)(param_1 + 0xe8);
    bVar1 = true;
    if (iVar4 != *(int *)(param_1 + 0xec)) {
      do {
        piVar2 = *(int **)(iVar4 + 0x14);
        pfVar3 = (float *)(**(code **)(*piVar2 + 0x34))(auStack_10);
        if (_DAT_00e51c58 <=
            SQRT((*pfVar3 - unaff_EDI) * (*pfVar3 - unaff_EDI) +
                 (pfVar3[1] - local_18) * (pfVar3[1] - local_18) +
                 (pfVar3[2] - fStack_14) * (pfVar3[2] - fStack_14))) {
          bVar1 = false;
        }
        else {
          FUN_005774c0(piVar2,DAT_00e51c5c);
        }
        iVar4 = iVar4 + 0x18;
      } while (iVar4 != *(int *)(param_1 + 0xec));
      if (!bVar1) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xf4) = 1;
  }
  return;
}


//// FUNCTION FUN_004d99b0 @ 004d99b0 ////

void __fastcall FUN_004d99b0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c0) != 4)) {
    FUN_004df130(iVar1);
  }
  FUN_004d9860(param_1);
  *(undefined1 *)(param_1 + 0x128) = 0;
  return;
}


//// FUNCTION FUN_004d99e0 @ 004d99e0 ////

void __fastcall FUN_004d99e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xac);
  iVar1 = 4;
  do {
    iVar2 = piVar3[-1];
    if (iVar2 != *piVar3) {
      do {
        if (*(int *)(iVar2 + 0x14) != 0) {
          FUN_0057b070(*(int *)(iVar2 + 0x14));
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != *piVar3);
    }
    piVar3 = piVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


//// FUNCTION FUN_004d9a80 @ 004d9a80 ////

void __fastcall FUN_004d9a80(int param_1)

{
  if (*(int **)(param_1 + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x124) + 4))();
    (**(code **)(*(int *)(param_1 + 0x110) + 4))();
    *(undefined4 *)(param_1 + 0x124) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x110))();
  }
  FUN_004d99e0(param_1);
  return;
}


//// FUNCTION FUN_004d9ae0 @ 004d9ae0 ////

void __cdecl FUN_004d9ae0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_004d9b50 @ 004d9b50 ////

void __cdecl FUN_004d9b50(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_004d9c50 @ 004d9c50 ////

void __cdecl FUN_004d9c50(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d18c4c;
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


//// FUNCTION FUN_004d9cf0 @ 004d9cf0 ////

void __cdecl FUN_004d9cf0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d16954;
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


//// FUNCTION FUN_004d9d60 @ 004d9d60 ////

void FUN_004d9d60(int param_1,int param_2,undefined4 *param_3)

{
  FUN_004d9ae0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_004d9d80 @ 004d9d80 ////

void FUN_004d9d80(int param_1,int param_2,undefined4 *param_3)

{
  FUN_004d9b50(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_004d9da0 @ 004d9da0 ////

void __cdecl FUN_004d9da0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00435ec0(param_1);
  }
  return;
}


//// FUNCTION FUN_004d9e60 @ 004d9e60 ////

void FUN_004d9e60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00435ec0(param_1);
  }
  return;
}


//// FUNCTION FUN_004d9e90 @ 004d9e90 ////

void __fastcall FUN_004d9e90(int param_1)

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
    FUN_00435ec0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004d9ee0 @ 004d9ee0 ////

undefined4 * FUN_004d9ee0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_004d9c50(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_004d9f10 @ 004d9f10 ////

void FUN_004d9f10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_004076b0(param_1);
  }
  return;
}


//// FUNCTION FUN_004d9f40 @ 004d9f40 ////

void __fastcall FUN_004d9f40(int param_1)

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
    FUN_004076b0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004d9f90 @ 004d9f90 ////

undefined4 * FUN_004d9f90(undefined4 *param_1,int param_2,int param_3)

{
  FUN_004d9cf0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_004d9fc0 @ 004d9fc0 ////

void __thiscall FUN_004d9fc0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_004d6a00((int)param_3,*(int *)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 6) {
      FUN_00435ec0(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004da020 @ 004da020 ////

void FUN_004da020(void)

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
  puStack_8 = &LAB_00ca9698;
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


//// FUNCTION FUN_004da090 @ 004da090 ////

void FUN_004da090(void)

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
  puStack_8 = &LAB_00ca96b8;
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


//// FUNCTION FUN_004da120 @ 004da120 ////

void __fastcall FUN_004da120(int param_1)

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
    FUN_004076b0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004da140 @ 004da140 ////

undefined4 __thiscall FUN_004da140(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
    param_1 = FUN_004da020();
  }
  pvVar1 = operator_new(param_1 * 0x18);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x18 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004da190 @ 004da190 ////

undefined4 __thiscall FUN_004da190(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0xaaaaaaa < param_1) {
    param_1 = FUN_004da090();
  }
  pvVar1 = operator_new(param_1 * 0x18);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x18 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004da1e0 @ 004da1e0 ////

void __thiscall FUN_004da1e0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ca96d8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d18c4c;
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
      FUN_004da020();
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
        iVar3 = FUN_004d6650((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_004d9ae0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_004d9c50(puVar5,param_2,(int)&local_34);
      FUN_004d9ae0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_004d9e60(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_004d9ae0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004d9ee0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_004d6ed0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_004d9ae0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_004d6a90((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_004d6ed0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_004da510 @ 004da510 ////

void __thiscall FUN_004da510(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ca96f8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d16954;
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
      FUN_004da090();
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
        iVar3 = FUN_004d67f0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_004d9b50(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_004d9cf0(puVar5,param_2,(int)&local_34);
      FUN_004d9b50((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_004d9f10(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_004d9b50((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004d9f90(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_004d6f30(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_004d9b50((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_004d6ad0((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_004d6f30(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_004da880 @ 004da880 ////

void __thiscall FUN_004da880(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1 * 0x10;
  iVar3 = *(int *)(iVar2 + 0xa8 + (int)this);
  if (iVar3 != *(int *)((int)this + iVar2 + 0xac)) {
    do {
      if (*(int **)(iVar3 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 0x14) + 0x1bc))(this);
        FUN_0059c0d0(*(void **)(iVar3 + 0x14));
        FUN_00575c40(*(void **)(iVar3 + 0x14),0);
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + iVar2 + 0xac));
  }
  puVar4 = *(undefined4 **)((int)this + iVar2 + 0xa8);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)((int)this + iVar2 + 0xac);
    for (; puVar4 != puVar1; puVar4 = puVar4 + 6) {
      FUN_00435ec0(puVar4);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + iVar2 + 0xa8));
  }
  *(undefined4 *)((int)this + iVar2 + 0xa8) = 0;
  *(undefined4 *)((int)this + iVar2 + 0xac) = 0;
  *(undefined4 *)((int)this + iVar2 + 0xb0) = 0;
  return;
}


//// FUNCTION FUN_004da940 @ 004da940 ////

void __fastcall FUN_004da940(int param_1)

{
  *(undefined ***)(param_1 + 0x5c) = &PTR_FUN_00d1f03c;
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 4) = *(undefined4 *)(param_1 + 100);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(undefined4 **)(param_1 + 100) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x60) + 4) = *(undefined4 *)(param_1 + 100);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_004d9f40(param_1 + 0x4c);
  FUN_004d9f40(param_1 + 0x3c);
  FUN_004d9e90(param_1 + 0x2c);
  FUN_004d9e90(param_1 + 0x1c);
  FUN_004d9e90(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_004da9c0 @ 004da9c0 ////

void __fastcall FUN_004da9c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca97b9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1f9f0;
  param_1[0x19] = &PTR_LAB_00d1f9d0;
  local_4 = 9;
  FUN_004d93a0((int)param_1);
  puVar2 = (undefined4 *)param_1[0x8a];
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x85] + 4))();
    param_1[0x8a] = 0;
    (**(code **)param_1[0x85])();
  }
  puVar2 = (undefined4 *)param_1[0x49];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x44] + 4))();
    param_1[0x49] = 0;
    (**(code **)param_1[0x44])();
  }
  param_1[0x85] = &PTR_FUN_00d1f06c;
  if ((undefined4 *)param_1[0x87] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x87] = param_1[0x86];
  }
  if (param_1[0x86] != 0) {
    *(undefined4 *)(param_1[0x86] + 4) = param_1[0x87];
  }
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  if ((undefined4 *)param_1[0x87] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x87] = param_1[0x86];
  }
  if (param_1[0x86] != 0) {
    *(undefined4 *)(param_1[0x86] + 4) = param_1[0x87];
  }
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  FUN_004da940((int)(param_1 + 0x68));
  FUN_004da940((int)(param_1 + 0x4b));
  param_1[0x44] = &PTR_LAB_00d1f05c;
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x46] = param_1[0x45];
  }
  if (param_1[0x45] != 0) {
    *(undefined4 *)(param_1[0x45] + 4) = param_1[0x46];
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  if ((undefined4 *)param_1[0x46] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x46] = param_1[0x45];
  }
  if (param_1[0x45] != 0) {
    *(undefined4 *)(param_1[0x45] + 4) = param_1[0x46];
  }
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x3e] = &PTR_FUN_00d1ec60;
  if ((undefined4 *)param_1[0x40] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x40] = param_1[0x3f];
  }
  if (param_1[0x3f] != 0) {
    *(undefined4 *)(param_1[0x3f] + 4) = param_1[0x40];
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  if ((undefined4 *)param_1[0x40] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x40] = param_1[0x3f];
  }
  if (param_1[0x3f] != 0) {
    *(undefined4 *)(param_1[0x3f] + 4) = param_1[0x40];
  }
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_004d9f40((int)(param_1 + 0x39));
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(param_1 + 0x29,0x10,4,thunk_FUN_004d9e90);
  param_1[0x23] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x25] = param_1[0x24];
  }
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1[0x24] + 4) = param_1[0x25];
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  if ((undefined4 *)param_1[0x25] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x25] = param_1[0x24];
  }
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1[0x24] + 4) = param_1[0x25];
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004dacb0 @ 004dacb0 ////

void __fastcall FUN_004dacb0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004dacc0 @ 004dacc0 ////

void * __thiscall FUN_004dacc0(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if (this == param_1) {
    return this;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    iVar6 = *(int *)((int)param_1 + 8) - iVar1;
    iVar4 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x18 + iVar4;
    uVar7 = iVar6 - iVar4;
    if (iVar6 != iVar4) {
      piVar3 = *(int **)((int)this + 4);
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 8) - (int)piVar3) / 0x18;
      }
      if (uVar7 <= uVar2) {
        piVar3 = FUN_004d6a00(iVar1,*(int *)((int)param_1 + 8),piVar3);
        FUN_004d9e60(piVar3,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x18) * 0x18;
        return this;
      }
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 0xc) - (int)piVar3) / 0x18;
      }
      if (uVar2 < uVar7) {
        if (piVar3 != (int *)0x0) {
          FUN_004d9e60(piVar3,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        uVar7 = FUN_004d6650((int)param_1);
        uVar5 = FUN_004da140(this,uVar7);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_004d9d60(*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(undefined4 **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      iVar4 = FUN_004d6650((int)this);
      iVar4 = iVar1 + iVar4 * 0x18;
      FUN_004d6a00(iVar1,iVar4,piVar3);
      uVar5 = FUN_004d9ae0(iVar4,*(int *)((int)param_1 + 8),*(undefined4 **)((int)this + 8));
      *(undefined4 *)((int)this + 8) = uVar5;
      return this;
    }
  }
  FUN_004d9e90((int)this);
  return this;
}


//// FUNCTION FUN_004dae60 @ 004dae60 ////

void * __thiscall FUN_004dae60(void *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if (this == param_1) {
    return this;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    iVar6 = *(int *)((int)param_1 + 8) - iVar1;
    iVar4 = iVar6 >> 0x1f;
    iVar6 = iVar6 / 0x18 + iVar4;
    uVar7 = iVar6 - iVar4;
    if (iVar6 != iVar4) {
      piVar3 = *(int **)((int)this + 4);
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 8) - (int)piVar3) / 0x18;
      }
      if (uVar7 <= uVar2) {
        piVar3 = FUN_004d6a50(iVar1,*(int *)((int)param_1 + 8),piVar3);
        FUN_004d9f10(piVar3,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x18) * 0x18;
        return this;
      }
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 0xc) - (int)piVar3) / 0x18;
      }
      if (uVar2 < uVar7) {
        if (piVar3 != (int *)0x0) {
          FUN_004d9f10(piVar3,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        uVar7 = FUN_004d67f0((int)param_1);
        uVar5 = FUN_004da190(this,uVar7);
        if ((char)uVar5 == '\0') {
          return this;
        }
        uVar5 = FUN_004d9d80(*(int *)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                             *(undefined4 **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar5;
        return this;
      }
      iVar4 = FUN_004d67f0((int)this);
      iVar4 = iVar1 + iVar4 * 0x18;
      FUN_004d6a50(iVar1,iVar4,piVar3);
      uVar5 = FUN_004d9b50(iVar4,*(int *)((int)param_1 + 8),*(undefined4 **)((int)this + 8));
      *(undefined4 *)((int)this + 8) = uVar5;
      return this;
    }
  }
  FUN_004d9f40((int)this);
  return this;
}


//// FUNCTION FUN_004daff0 @ 004daff0 ////

void __thiscall FUN_004daff0(void *this,uint param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca97d8;
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
    FUN_004da1e0(this,*(int **)((int)this + 8),param_1 - iVar2,(int)&param_2);
  }
  else if (iVar2 != 0) {
    if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x18)) {
      ExceptionList = &local_c;
      FUN_004d9fc0(this,&param_1,(int *)(iVar2 + param_1 * 0x18),*(int **)((int)this + 8));
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


//// FUNCTION FUN_004db0d0 @ 004db0d0 ////

void __thiscall FUN_004db0d0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_004db115;
    }
  }
  iVar1 = 0;
LAB_004db115:
  FUN_004da1e0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_004db140 @ 004db140 ////

void __thiscall FUN_004db140(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_004db185;
    }
  }
  iVar1 = 0;
LAB_004db185:
  FUN_004da510(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_004db1b0 @ 004db1b0 ////

undefined4 * __fastcall FUN_004db1b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca981c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_1 + 0x17;
  param_1[0x17] = &PTR_FUN_00d1f03c;
  param_1[0x1c] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_004d9e90((int)(param_1 + 3));
  FUN_004d9e90((int)(param_1 + 7));
  FUN_004d9e90((int)(param_1 + 0xb));
  FUN_004d9f40((int)(param_1 + 0x13));
  FUN_004d9f40((int)(param_1 + 0xf));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004db260 @ 004db260 ////

undefined4 * __fastcall FUN_004db260(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca98c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1f9f0;
  param_1[0x19] = &PTR_LAB_00d1f9d0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_1 + 0x23;
  param_1[0x23] = &PTR_FUN_00d18c3c;
  param_1[0x28] = 0;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(param_1 + 0x29,0x10,4,FUN_004dacb0,thunk_FUN_004d9e90);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = param_1 + 0x3e;
  param_1[0x3e] = &PTR_FUN_00d1ec60;
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = param_1 + 0x44;
  param_1[0x44] = &PTR_LAB_00d1f05c;
  param_1[0x49] = 0;
  local_4._0_1_ = 6;
  FUN_004db1b0(param_1 + 0x4b);
  local_4._0_1_ = 7;
  FUN_004db1b0(param_1 + 0x68);
  piVar1 = param_1 + 0x85;
  param_1[0x88] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1f06c;
  param_1[0x8a] = 0;
  local_4._0_1_ = 9;
  this = operator_new(0x1d8);
  local_4._0_1_ = 10;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_008c2e70(this,param_1);
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  (**(code **)(*piVar1 + 4))();
  param_1[0x8a] = puVar2;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x8b) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004db3c0 @ 004db3c0 ////

undefined4 * __thiscall FUN_004db3c0(void *this,byte param_1)

{
  FUN_004da9c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004db3e0 @ 004db3e0 ////

undefined4 * __thiscall FUN_004db3e0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined ***)this = &PTR_FUN_00d1f9f0;
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d1f9d0;
  piVar1 = (int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x98) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 **)((int)this + 0x98) = (undefined4 *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x8c) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0xa0) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x94) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_
            ((void *)((int)this + 0xa4),0x10,4,FUN_004dacb0,thunk_FUN_004d9e90);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 **)((int)this + 0x104) = (undefined4 *)((int)this + 0xf8);
  *(undefined4 *)((int)this + 0xf8) = &PTR_FUN_00d1ec60;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 **)((int)this + 0x11c) = (undefined4 *)((int)this + 0x110);
  *(undefined4 *)((int)this + 0x110) = &PTR_LAB_00d1f05c;
  *(undefined4 *)((int)this + 0x124) = 0;
  local_4._0_1_ = 6;
  FUN_004db1b0((undefined4 *)((int)this + 300));
  local_4._0_1_ = 7;
  FUN_004db1b0((undefined4 *)((int)this + 0x1a0));
  piVar1 = (int *)((int)this + 0x214);
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(int **)((int)this + 0x220) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1f06c;
  *(undefined4 *)((int)this + 0x228) = 0;
  local_4._0_1_ = 9;
  *(undefined1 *)((int)this + 0x128) = 0;
  this_00 = operator_new(0x1d8);
  local_4._0_1_ = 10;
  if (this_00 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_008c2e70(this_00,this);
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  (**(code **)(*piVar1 + 4))();
  *(undefined4 **)((int)this + 0x228) = puVar3;
  (**(code **)*piVar1)();
  *(undefined1 *)((int)this + 0x22c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004db560 @ 004db560 ////

undefined1 * __thiscall FUN_004db560(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_1[3];
  *(undefined1 *)((int)this + 4) = param_1[4];
  *(undefined1 *)((int)this + 5) = param_1[5];
  *(undefined1 *)((int)this + 6) = param_1[6];
  *(undefined1 *)((int)this + 7) = param_1[7];
  *(undefined1 *)((int)this + 8) = param_1[8];
  FUN_004dacc0((void *)((int)this + 0xc),param_1 + 0xc);
  FUN_004dacc0((void *)((int)this + 0x1c),param_1 + 0x1c);
  FUN_004dacc0((void *)((int)this + 0x2c),param_1 + 0x2c);
  FUN_004dae60((void *)((int)this + 0x3c),param_1 + 0x3c);
  FUN_004dae60((void *)((int)this + 0x4c),param_1 + 0x4c);
  (**(code **)(*(int *)((int)this + 0x5c) + 4))();
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  (*(code *)**(undefined4 **)((int)this + 0x5c))();
  return this;
}


//// FUNCTION FUN_004db600 @ 004db600 ////

void __thiscall FUN_004db600(void *this,uint param_1)

{
  FUN_004daff0(this,param_1,&PTR_FUN_00d18c4c,0,(int *)0x0);
  return;
}


//// FUNCTION FUN_004db640 @ 004db640 ////

void __thiscall FUN_004db640(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004d9c50(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_004db0d0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004db6d0 @ 004db6d0 ////

void __thiscall FUN_004db6d0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_004d9cf0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_004db140(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004dc690 @ 004dc690 ////

void __thiscall FUN_004dc690(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined4 auStack_84 [6];
  undefined4 auStack_6c [6];
  undefined4 auStack_54 [6];
  undefined4 auStack_3c [6];
  undefined4 auStack_24 [6];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9a2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x5c) + 4))();
  *(undefined4 *)((int)this + 0x70) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x5c))();
  switch(param_2) {
  case 10:
    FUN_004397d0(auStack_6c,param_3);
    uStack_4 = 1;
    FUN_004db640((void *)((int)this + 0xc),(int)auStack_6c);
    FUN_00435ec0(auStack_6c);
    break;
  case 0xb:
    FUN_004397d0(auStack_54,param_3);
    uStack_4 = 2;
    FUN_004db640((void *)((int)this + 0x1c),(int)auStack_54);
    FUN_00435ec0(auStack_54);
    break;
  case 0xc:
    FUN_004397d0(auStack_3c,param_3);
    uStack_4 = 3;
    FUN_004db640((void *)((int)this + 0x2c),(int)auStack_3c);
    FUN_00435ec0(auStack_3c);
    break;
  case 0xd:
    FUN_00407660(auStack_24,param_3);
    uStack_4 = 4;
    FUN_004db6d0((void *)((int)this + 0x4c),(int)auStack_24);
    FUN_004076b0(auStack_24);
    break;
  case 0xe:
    FUN_00407660(auStack_84,param_3);
    uStack_4 = 0;
    FUN_004db6d0((void *)((int)this + 0x3c),(int)auStack_84);
    FUN_004076b0(auStack_84);
    break;
  default:
    *(undefined1 *)(param_2 + (int)this) = 1;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004dc820 @ 004dc820 ////

void __fastcall FUN_004dc820(int param_1)

{
  FUN_004db560((void *)(param_1 + 0x1a0),(undefined1 *)(param_1 + 300));
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_004d9e90(param_1 + 0x138);
  FUN_004d9e90(param_1 + 0x148);
  FUN_004d9e90(param_1 + 0x158);
  FUN_004d9f40(param_1 + 0x178);
  FUN_004d9f40(param_1 + 0x168);
  FUN_004d8f20(param_1);
  return;
}


//// FUNCTION FUN_004dc880 @ 004dc880 ////

void __thiscall FUN_004dc880(void *this,int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + param_1 * 0x10 + 0xa8);
  if ((iVar2 == 0) ||
     ((uint)((*(int *)((int)this + param_1 * 0x10 + 0xac) - iVar2) / 0x18) <= param_2)) {
    FUN_004db600((void *)((int)this + param_1 * 0x10 + 0xa4),param_2 + 1);
  }
  iVar2 = *(int *)((int)this + param_1 * 0x10 + 0xa8);
  puVar1 = (undefined4 *)(iVar2 + param_2 * 0x18);
  (**(code **)(*(int *)(iVar2 + param_2 * 0x18) + 4))();
  puVar1[5] = param_3;
  (**(code **)*puVar1)();
  return;
}


//// FUNCTION FUN_004dc8f0 @ 004dc8f0 ////

void __thiscall FUN_004dc8f0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iStack_8;
  
  if (*(int *)((int)this + 0x10c) != param_1) {
    (**(code **)(*(int *)((int)this + 0xf8) + 4))();
    *(int *)((int)this + 0x10c) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0xf8))();
    if (*(int *)((int)this + 0x10c) != 0) {
      FUN_004d6b30((int)this);
      uVar1 = FUN_004de120(param_1);
      uVar2 = 0;
      if (*(int *)((int)this + 0xb8) != 0) {
        uVar2 = (*(int *)((int)this + 0xbc) - *(int *)((int)this + 0xb8)) / 0x18;
      }
      if (uVar1 != uVar2) {
        FUN_004da880(this,1);
        uVar2 = 0;
        if (uVar1 != 0) {
          do {
            FUN_004dc880(this,1,uVar2,0);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
      }
      uVar1 = FUN_004de150(param_1);
      uVar2 = 0;
      if (*(int *)((int)this + 0xa8) != 0) {
        uVar2 = (*(int *)((int)this + 0xac) - *(int *)((int)this + 0xa8)) / 0x18;
      }
      if (uVar1 != uVar2) {
        FUN_004da880(this,0);
        uVar2 = 0;
        if (uVar1 != 0) {
          do {
            FUN_004dc880(this,0,uVar2,0);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
      }
      uVar1 = FUN_004de140(param_1);
      uVar2 = 0;
      if (*(int *)((int)this + 200) != 0) {
        uVar2 = (*(int *)((int)this + 0xcc) - *(int *)((int)this + 200)) / 0x18;
      }
      if (uVar1 != uVar2) {
        FUN_004da880(this,2);
        uVar2 = 0;
        if (uVar1 != 0) {
          iStack_8 = 0;
          do {
            if ((*(int *)((int)this + 200) == 0) ||
               ((uint)((*(int *)((int)this + 0xcc) - *(int *)((int)this + 200)) / 0x18) <= uVar2)) {
              FUN_004db600((void *)((int)this + 0xc4),uVar2 + 1);
            }
            puVar3 = (undefined4 *)(*(int *)((int)this + 200) + iStack_8);
            (**(code **)(*(int *)(*(int *)((int)this + 200) + iStack_8) + 4))();
            puVar3[5] = 0;
            (**(code **)*puVar3)();
            uVar2 = uVar2 + 1;
            iStack_8 = iStack_8 + 0x18;
          } while (uVar2 < uVar1);
        }
      }
      uVar1 = FUN_004de130(param_1);
      uVar2 = 0;
      if (*(int *)((int)this + 0xd8) != 0) {
        uVar2 = (*(int *)((int)this + 0xdc) - *(int *)((int)this + 0xd8)) / 0x18;
      }
      if (uVar1 != uVar2) {
        FUN_004da880(this,3);
        uVar2 = 0;
        if (uVar1 != 0) {
          param_1 = 0;
          do {
            if ((*(int *)((int)this + 0xd8) == 0) ||
               ((uint)((*(int *)((int)this + 0xdc) - *(int *)((int)this + 0xd8)) / 0x18) <= uVar2))
            {
              FUN_004db600((void *)((int)this + 0xd4),uVar2 + 1);
            }
            puVar3 = (undefined4 *)(*(int *)((int)this + 0xd8) + param_1);
            (**(code **)(*(int *)(*(int *)((int)this + 0xd8) + param_1) + 4))();
            puVar3[5] = 0;
            (**(code **)*puVar3)();
            uVar2 = uVar2 + 1;
            param_1 = param_1 + 0x18;
          } while (uVar2 < uVar1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_004dcb40 @ 004dcb40 ////

bool __fastcall FUN_004dcb40(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 unaff_EBX;
  bool bVar10;
  int iVar11;
  bool local_21;
  float *local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 local_c [12];
  
  iVar3 = FUN_005b2780(*(int *)(param_1 + 0xa0));
  bVar10 = iVar3 != 0;
  if (*(int *)(param_1 + 0x10c) == 0) {
    bVar10 = false;
  }
  else {
    iVar4 = FUN_004de100(*(int *)(param_1 + 0x10c));
    local_21 = bVar10;
    for (iVar3 = *(int *)(iVar4 + 8); iVar3 != iVar4 + 0x14; iVar3 = *(int *)(iVar3 + 4)) {
      piVar5 = (int *)FUN_0048c950(*(int *)(iVar3 + 8));
      if (piVar5 == (int *)0x0) {
        bVar1 = FUN_0048c9a0(*(int *)(iVar3 + 8));
        if ((!bVar1) || (cVar2 = FUN_0048c780(*(int *)(iVar3 + 8)), cVar2 != '\0')) {
          piVar5 = (int *)0x0;
          iVar11 = 5;
          goto LAB_004dcbbe;
        }
      }
      else {
        cVar2 = (**(code **)(*piVar5 + 0x1dc))();
        if (cVar2 == '\0') {
          iVar11 = FUN_005773c0((int)piVar5);
          iVar6 = GetPlayerStudio();
          if (iVar11 == iVar6) {
            iVar11 = *piVar5;
            uVar7 = FUN_0048c720(*(int *)(iVar3 + 8));
            cVar2 = (**(code **)(iVar11 + 0x1b8))(param_1,uVar7);
            if (cVar2 != '\0') {
              iVar11 = FUN_0048e140(*(int *)(iVar3 + 8));
              bVar10 = local_21;
              if (iVar11 != 0) {
                FUN_0059bb60(piVar5,iVar11);
                iVar11 = FUN_00ace790(piVar5,0,&TM::CStaff::RTTI_Type_Descriptor,
                                      &TM::CStar::RTTI_Type_Descriptor,0);
                if ((iVar11 != 0) && (uVar7 = FUN_0058cfe0(iVar11), (char)uVar7 == '\0')) {
                  FUN_004dc690((void *)(param_1 + 300),param_1,0xe,iVar11);
                }
              }
              goto LAB_004dcc6b;
            }
            iVar11 = 10;
          }
          else {
            iVar11 = 0xb;
          }
        }
        else {
          iVar11 = 0xd;
        }
LAB_004dcbbe:
        FUN_004dc690((void *)(param_1 + 300),param_1,iVar11,(int)piVar5);
        local_21 = false;
        bVar10 = false;
      }
LAB_004dcc6b:
    }
  }
  piVar5 = (int *)FUN_005b2780(*(int *)(param_1 + 0xa0));
  if (piVar5 != (int *)0x0) {
    cVar2 = (**(code **)(*piVar5 + 0x1dc))();
    if (cVar2 == '\0') {
      iVar3 = FUN_005773c0((int)piVar5);
      iVar4 = GetPlayerStudio();
      if (iVar3 == iVar4) {
        cVar2 = (**(code **)(*piVar5 + 0x1b8))(param_1,0);
        if (cVar2 != '\0') goto LAB_004dccd9;
        iVar3 = 10;
      }
      else {
        iVar3 = 0xb;
      }
    }
    else {
      iVar3 = 0xd;
    }
    FUN_004dc690((void *)(param_1 + 300),param_1,iVar3,(int)piVar5);
  }
  bVar10 = false;
LAB_004dccd9:
  local_1c = (float *)0x0;
  if (*(void **)(param_1 + 0x10c) != (void *)0x0) {
    pfVar8 = (float *)FUN_004df200(*(void **)(param_1 + 0x10c),local_c);
    fStack_18 = *pfVar8;
    fStack_14 = pfVar8[1];
    fStack_10 = pfVar8[2];
    local_1c = &fStack_18;
  }
  piVar5 = *(int **)(param_1 + 0xa8);
  if (piVar5 != *(int **)(param_1 + 0xac)) {
    do {
      if (((int *)piVar5[5] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)piVar5[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = 0;
        (**(code **)*piVar5)();
      }
      piVar9 = (int *)piVar5[5];
      if (piVar9 == (int *)0x0) {
        piVar9 = FUN_005b6ee0(*(void **)(param_1 + 0xa0),local_1c);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
          piVar5[5] = (int)piVar9;
          (**(code **)*piVar5)();
          if (piVar9 != (int *)0x0) goto LAB_004dcd97;
        }
        piVar9 = (int *)0x0;
        iVar3 = 1;
LAB_004dcdbc:
        FUN_004dc690((void *)(param_1 + 300),param_1,iVar3,(int)piVar9);
        bVar10 = false;
      }
      else {
LAB_004dcd97:
        (**(code **)(*piVar9 + 0x224))(7,0);
        cVar2 = (**(code **)(*piVar9 + 0x1b8))(param_1,unaff_EBX);
        if (cVar2 == '\0') {
          iVar3 = 10;
          goto LAB_004dcdbc;
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(param_1 + 0xac));
  }
  piVar5 = *(int **)(param_1 + 0xb8);
  if (piVar5 != *(int **)(param_1 + 0xbc)) {
    do {
      if (((int *)piVar5[5] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)piVar5[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = 0;
        (**(code **)*piVar5)();
      }
      piVar9 = (int *)piVar5[5];
      if (piVar9 == (int *)0x0) {
        piVar9 = FUN_005b6ee0(*(void **)(param_1 + 0xa0),local_1c);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
          piVar5[5] = (int)piVar9;
          (**(code **)*piVar5)();
          if (piVar9 != (int *)0x0) goto LAB_004dce67;
        }
        piVar9 = (int *)0x0;
        iVar3 = 2;
LAB_004dce8c:
        FUN_004dc690((void *)(param_1 + 300),param_1,iVar3,(int)piVar9);
        bVar10 = false;
      }
      else {
LAB_004dce67:
        (**(code **)(*piVar9 + 0x224))(8,0);
        cVar2 = (**(code **)(*piVar9 + 0x1b8))(param_1,unaff_EBX);
        if (cVar2 == '\0') {
          iVar3 = 10;
          goto LAB_004dce8c;
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(param_1 + 0xbc));
  }
  piVar5 = *(int **)(param_1 + 200);
  if (piVar5 != *(int **)(param_1 + 0xcc)) {
    do {
      if (((int *)piVar5[5] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)piVar5[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = 0;
        (**(code **)*piVar5)();
      }
      piVar9 = (int *)piVar5[5];
      if (piVar9 == (int *)0x0) {
        piVar9 = FUN_005b6ee0(*(void **)(param_1 + 0xa0),local_1c);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
          piVar5[5] = (int)piVar9;
          (**(code **)*piVar5)();
          if (piVar9 != (int *)0x0) goto LAB_004dcf37;
        }
        piVar9 = (int *)0x0;
        iVar3 = 3;
LAB_004dcf5c:
        FUN_004dc690((void *)(param_1 + 300),param_1,iVar3,(int)piVar9);
        bVar10 = false;
      }
      else {
LAB_004dcf37:
        (**(code **)(*piVar9 + 0x224))(10,0);
        cVar2 = (**(code **)(*piVar9 + 0x1b8))(param_1,unaff_EBX);
        if (cVar2 == '\0') {
          iVar3 = 10;
          goto LAB_004dcf5c;
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(param_1 + 0xcc));
  }
  piVar5 = *(int **)(param_1 + 0xd8);
  if (piVar5 != *(int **)(param_1 + 0xdc)) {
    do {
      if (((int *)piVar5[5] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)piVar5[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = 0;
        (**(code **)*piVar5)();
      }
      piVar9 = (int *)piVar5[5];
      if (piVar9 == (int *)0x0) {
        piVar9 = FUN_005b6ee0(*(void **)(param_1 + 0xa0),local_1c);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar5 + 4))();
          piVar5[5] = (int)piVar9;
          (**(code **)*piVar5)();
          if (piVar9 != (int *)0x0) goto LAB_004dd003;
        }
        piVar9 = (int *)0x0;
        iVar3 = 4;
LAB_004dd028:
        FUN_004dc690((void *)(param_1 + 300),param_1,iVar3,(int)piVar9);
        bVar10 = false;
      }
      else {
LAB_004dd003:
        (**(code **)(*piVar9 + 0x224))(0xc,0);
        cVar2 = (**(code **)(*piVar9 + 0x1b8))(param_1,unaff_EBX);
        if (cVar2 == '\0') {
          iVar3 = 10;
          goto LAB_004dd028;
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != *(int **)(param_1 + 0xdc));
  }
  return bVar10;
}


//// FUNCTION FUN_004dd080 @ 004dd080 ////

void __thiscall FUN_004dd080(void *this,int *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9a5e;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)0x0;
  if (param_1 != (int *)0x0) {
    ExceptionList = &local_c;
    cVar1 = (**(code **)(*param_1 + 0x1c0))(this);
    if (cVar1 != '\0') {
      cVar1 = FUN_004ecb40(*(void **)((int)this + 0x124),param_1);
      if (cVar1 != '\0') {
        pvVar2 = operator_new(0x2b4);
        uStack_4 = 0;
        if (pvVar2 != (void *)0x0) {
          puVar4 = FUN_00402380(pvVar2,(int)param_1,*(undefined4 *)((int)this + 0x124));
        }
        puVar4[0x84] = puVar4[0x84] | 3;
        uStack_4 = 0xffffffff;
        FUN_0059c0d0(param_1);
        FUN_005986d0(param_1);
        pvVar2 = operator_new(0x140);
        uStack_4 = 1;
        if (pvVar2 == (void *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = DesireReadyPosition_Constructor
                             (pvVar2,param_1,puVar4,*(undefined4 *)((int)this + 0x10c));
        }
        uStack_4 = 0xffffffff;
        TMCharacter_AddResidentDesire(param_1,(int)puVar4);
      }
    }
    if (param_1[0x205] == 3) {
      iVar3 = FUN_00ace790(param_1,0,&TM::CStaff::RTTI_Type_Descriptor,
                           &TM::CStar::RTTI_Type_Descriptor,0);
      if (iVar3 != 0) {
        cVar1 = FUN_00585f60();
        if (cVar1 == '\0') {
          FUN_00407660(auStack_24,iVar3);
          uStack_4 = 2;
          FUN_004db6d0((void *)((int)this + 0xe4),(int)auStack_24);
          FUN_004076b0(auStack_24);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004dd1e0 @ 004dd1e0 ////

void __thiscall FUN_004dd1e0(void *this,void *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint _Count;
  uint uVar7;
  void *this_00;
  undefined4 *puVar8;
  int iStack_30;
  undefined ****ppppuStack_2c;
  uint uStack_28;
  uint *puStack_24;
  undefined4 ***apppuStack_20 [2];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9a9b;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)((int)this + 0x10c);
  if (iVar4 == 0) {
    iVar4 = *(int *)((int)this + 0xa0);
    iVar5 = *(int *)(iVar4 + 0xac);
    ExceptionList = &pvStack_c;
    if (iVar5 != iVar4 + 0xb8) {
      do {
        iVar1 = *(int *)(iVar5 + 8);
        if (*(int *)(iVar1 + 0x1c0) != 4) {
          ExceptionList = &pvStack_c;
          piVar6 = (int *)FUN_004df220(iVar1);
          if (piVar6 != (int *)0x0) {
            cVar2 = (**(code **)(*piVar6 + 0xc4))();
            if (cVar2 != '\0') {
              iVar4 = *piVar6;
              goto LAB_004dd4d2;
            }
            cVar2 = (**(code **)(*piVar6 + 0xa4))();
            if ((cVar2 != '\0') && (iVar4 = FUN_004cba90((int)piVar6), iVar4 != iVar1)) {
              (**(code **)(*(int *)((int)this + 0x1fc) + 4))();
              *(void **)((int)this + 0x210) = this;
              (*(code *)**(undefined4 **)((int)this + 0x1fc))();
              *(undefined1 *)((int)this + 0x1a6) = 1;
            }
          }
          break;
        }
        iVar5 = *(int *)(iVar5 + 4);
        ExceptionList = &pvStack_c;
      } while (iVar5 != iVar4 + 0xb8);
    }
  }
  else {
    ExceptionList = &pvStack_c;
    if ((-1 < *(int *)(iVar4 + 0x1c0)) && (ExceptionList = &pvStack_c, *(int *)(iVar4 + 0x1c0) < 3))
    {
      ExceptionList = &pvStack_c;
      iVar4 = FUN_004de100(iVar4);
      iVar4 = *(int *)(iVar4 + 8);
      iVar5 = FUN_004de100(*(int *)((int)this + 0x10c));
      if (iVar4 != iVar5 + 0x14) {
        do {
          piVar6 = (int *)FUN_0048c950(*(int *)(iVar4 + 8));
          if (piVar6 == (int *)0x0) {
            bVar3 = FUN_0048c9a0(*(int *)(iVar4 + 8));
            if ((!bVar3) || (cVar2 = FUN_0048c780(*(int *)(iVar4 + 8)), cVar2 != '\0')) {
              (**(code **)(*(int *)((int)this + 0x1fc) + 4))();
              *(void **)((int)this + 0x210) = this;
              (*(code *)**(undefined4 **)((int)this + 0x1fc))();
              *(undefined1 *)((int)this + 0x1a5) = 1;
            }
          }
          else {
            cVar2 = (**(code **)(*piVar6 + 0x1dc))();
            if (cVar2 == '\0') {
              cVar2 = FUN_004d7160((int)piVar6);
              if (cVar2 == '\0') {
                FUN_004dc690((void *)((int)this + 0x1a0),this,0xc,(int)piVar6);
              }
            }
            else {
              (**(code **)(*(int *)((int)this + 0x1fc) + 4))();
              *(void **)((int)this + 0x210) = this;
              (*(code *)**(undefined4 **)((int)this + 0x1fc))();
              FUN_00407660(&ppppuStack_2c,(int)piVar6);
              uStack_4 = 4;
              FUN_004db6d0((void *)((int)this + 0x1ec),(int)&ppppuStack_2c);
              uStack_4 = 0xffffffff;
              FUN_004076b0(&ppppuStack_2c);
            }
          }
          iVar4 = *(int *)(iVar4 + 4);
          iVar5 = FUN_004de100(*(int *)((int)this + 0x10c));
        } while (iVar4 != iVar5 + 0x14);
      }
      iVar4 = FUN_005b2780(*(int *)((int)this + 0xa0));
      if (iVar4 != 0) {
        piVar6 = (int *)FUN_005b2780(*(int *)((int)this + 0xa0));
        cVar2 = (**(code **)(*piVar6 + 0x1dc))();
        if (cVar2 == '\0') {
          iVar4 = FUN_005b2780(*(int *)((int)this + 0xa0));
          cVar2 = FUN_004d7160(iVar4);
          if (cVar2 == '\0') {
            iVar4 = FUN_005b2780(*(int *)((int)this + 0xa0));
            FUN_004dc690((void *)((int)this + 0x1a0),this,0xc,iVar4);
          }
        }
        else {
          iVar4 = FUN_005b2780(*(int *)((int)this + 0xa0));
          (**(code **)(*(int *)((int)this + 0x1fc) + 4))();
          *(void **)((int)this + 0x210) = this;
          (*(code *)**(undefined4 **)((int)this + 0x1fc))();
          FUN_00407660(&ppppuStack_2c,iVar4);
          uStack_4 = 0xe;
          FUN_004db6d0((void *)((int)this + 0x1ec),(int)&ppppuStack_2c);
          uStack_4 = 0xffffffff;
          FUN_004076b0(&ppppuStack_2c);
        }
      }
      piVar6 = (int *)((int)this + 0xac);
      iStack_30 = 4;
      do {
        iVar4 = piVar6[-1];
        if (iVar4 != *piVar6) {
          do {
            iVar5 = *(int *)(iVar4 + 0x14);
            if ((iVar5 != 0) && (cVar2 = FUN_004d7160(iVar5), cVar2 == '\0')) {
              (**(code **)(*(int *)((int)this + 0x1fc) + 4))();
              *(void **)((int)this + 0x210) = this;
              (*(code *)**(undefined4 **)((int)this + 0x1fc))();
              puStack_24 = (uint *)(iVar5 + 0x18);
              apppuStack_20[0] = &ppppuStack_2c;
              ppppuStack_2c = (undefined ****)&PTR_FUN_00d18c4c;
              uStack_28 = *puStack_24;
              *(uint **)(*puStack_24 + 4) = &uStack_28;
              *puStack_24 = (uint)&uStack_28;
              uStack_4 = 0x12;
              iStack_18 = iVar5;
              FUN_004db640((void *)((int)this + 0x1cc),(int)&ppppuStack_2c);
              uStack_4 = 0xffffffff;
              FUN_00435ec0(&ppppuStack_2c);
            }
            iVar4 = iVar4 + 0x18;
          } while (iVar4 != *piVar6);
        }
        piVar6 = piVar6 + 4;
        iStack_30 = iStack_30 + -1;
      } while (iStack_30 != 0);
      piVar6 = (int *)FUN_004df220(*(int *)((int)this + 0x10c));
      if ((piVar6 != (int *)0x0) && (cVar2 = (**(code **)(*piVar6 + 0xc4))(), cVar2 != '\0')) {
        iVar4 = *piVar6;
LAB_004dd4d2:
        cVar2 = (**(code **)(iVar4 + 0x164))();
        piVar6 = (int *)((int)this + 0x1fc);
        if (cVar2 == '\0') {
          (**(code **)(*piVar6 + 4))();
          *(void **)((int)this + 0x210) = this;
          (**(code **)*piVar6)();
          *(undefined1 *)((int)this + 0x1a7) = 1;
        }
        else {
          (**(code **)(*piVar6 + 4))();
          *(void **)((int)this + 0x210) = this;
          (**(code **)*piVar6)();
          *(undefined1 *)((int)this + 0x1a8) = 1;
        }
      }
    }
  }
  FUN_004d7780((void *)((int)this + 0x1a0),param_1);
  if ((((*(int *)((int)this + 0x10c) == 0) || (*(int *)(*(int *)((int)this + 0x10c) + 0x1c0) == 4))
      && (iVar4 = FUN_005b3c50(*(int *)((int)this + 0xa0)), iVar4 != 0)) &&
     (*(char *)(iVar4 + 0x9c) != '\0')) {
    apppuStack_20[0] = (undefined4 ***)((uint)apppuStack_20[0] & 0xffff0000);
    uStack_28 = 0;
    ppppuStack_2c = (undefined ****)apppuStack_20;
    puStack_24 = (uint *)0xa;
    uStack_4 = 0x2d;
    _Count = FUN_00ace02d(L"<translate>project_waitingforgoahead</translate>");
    if (puStack_24 <= _Count) {
      if (10 < puStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(ppppuStack_2c);
      }
      uVar7 = _Count + 0x20 >> 5;
      puStack_24 = (uint *)(uVar7 << 5);
      ppppuStack_2c = _malloc(uVar7 * 0x40);
    }
    _wcsncpy((wchar_t *)ppppuStack_2c,L"<translate>project_waitingforgoahead</translate>",_Count);
    *(undefined2 *)((int)ppppuStack_2c + _Count * 2) = 0;
    uStack_28 = _Count;
    this_00 = operator_new(0xac);
    uStack_4._0_1_ = 0x2e;
    if (this_00 == (void *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = FUN_0049b2f0(this_00,&ppppuStack_2c,1);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,0x2d);
    FUN_0049b940(param_1,puVar8);
    if (10 < puStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(ppppuStack_2c);
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004dd6e0 @ 004dd6e0 ////

uint __fastcall FUN_004dd6e0(void *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint3 extraout_var;
  uint3 extraout_var_00;
  int *piVar6;
  uint3 uVar7;
  int iVar8;
  int *piVar9;
  float local_c [3];
  
  uVar3 = FUN_005b2780(*(int *)((int)param_1 + 0xa0));
  if ((uVar3 == 0) || (*(int *)((int)param_1 + 0x10c) == 0)) {
    return uVar3 & 0xffffff00;
  }
  iVar4 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
  for (iVar8 = *(int *)(iVar4 + 8); iVar8 != iVar4 + 0x14; iVar8 = *(int *)(iVar8 + 4)) {
    iVar5 = FUN_0048c950(*(int *)(iVar8 + 8));
    if ((iVar5 == 0) &&
       ((bVar1 = FUN_0048c9a0(*(int *)(iVar8 + 8)), uVar7 = extraout_var, !bVar1 ||
        (cVar2 = FUN_0048c780(*(int *)(iVar8 + 8)), uVar7 = extraout_var_00, cVar2 != '\0')))) {
      return (uint)uVar7 << 8;
    }
  }
  FUN_004df200(*(void **)((int)param_1 + 0x10c),local_c);
  piVar9 = *(int **)((int)param_1 + 0xa8);
  iVar8 = 0;
  if (piVar9 != *(int **)((int)param_1 + 0xac)) {
    do {
      if (((int *)piVar9[5] == (int *)0x0) ||
         (cVar2 = (**(code **)(*(int *)piVar9[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        piVar6 = FUN_005b6ee0(*(void **)((int)param_1 + 0xa0),local_c);
        uVar3 = 0;
        if (piVar6 == (int *)0x0) goto LAB_004dd965;
        (**(code **)(*piVar9 + 4))();
        piVar9[5] = (int)piVar6;
        (**(code **)*piVar9)();
        uVar3 = (**(code **)(*piVar6 + 0x1b8))(param_1,iVar8);
        if ((char)uVar3 == '\0') goto LAB_004dd965;
        FUN_004dd080(param_1,piVar6);
      }
      piVar9 = piVar9 + 6;
      iVar8 = iVar8 + 1;
    } while (piVar9 != *(int **)((int)param_1 + 0xac));
  }
  piVar9 = *(int **)((int)param_1 + 0xb8);
  iVar8 = 0;
  if (piVar9 != *(int **)((int)param_1 + 0xbc)) {
    do {
      if (((int *)piVar9[5] == (int *)0x0) ||
         (cVar2 = (**(code **)(*(int *)piVar9[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        piVar6 = FUN_005b6ee0(*(void **)((int)param_1 + 0xa0),local_c);
        uVar3 = 0;
        if (piVar6 == (int *)0x0) goto LAB_004dd965;
        (**(code **)(*piVar9 + 4))();
        piVar9[5] = (int)piVar6;
        (**(code **)*piVar9)();
        uVar3 = (**(code **)(*piVar6 + 0x1b8))(param_1,iVar8);
        if ((char)uVar3 == '\0') goto LAB_004dd965;
        FUN_004dd080(param_1,piVar6);
      }
      piVar9 = piVar9 + 6;
      iVar8 = iVar8 + 1;
    } while (piVar9 != *(int **)((int)param_1 + 0xbc));
  }
  piVar9 = *(int **)((int)param_1 + 200);
  iVar8 = 0;
  if (piVar9 != *(int **)((int)param_1 + 0xcc)) {
    do {
      if (((int *)piVar9[5] == (int *)0x0) ||
         (cVar2 = (**(code **)(*(int *)piVar9[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        piVar6 = FUN_005b6ee0(*(void **)((int)param_1 + 0xa0),local_c);
        uVar3 = 0;
        if (piVar6 == (int *)0x0) goto LAB_004dd965;
        (**(code **)(*piVar9 + 4))();
        piVar9[5] = (int)piVar6;
        (**(code **)*piVar9)();
        uVar3 = (**(code **)(*piVar6 + 0x1b8))(param_1,iVar8);
        if ((char)uVar3 == '\0') goto LAB_004dd965;
        FUN_004dd080(param_1,piVar6);
      }
      piVar9 = piVar9 + 6;
      iVar8 = iVar8 + 1;
    } while (piVar9 != *(int **)((int)param_1 + 0xcc));
  }
  piVar9 = *(int **)((int)param_1 + 0xd8);
  piVar6 = *(int **)((int)param_1 + 0xdc);
  iVar8 = 0;
  if (piVar9 != piVar6) {
    do {
      if (((int *)piVar9[5] == (int *)0x0) ||
         (cVar2 = (**(code **)(*(int *)piVar9[5] + 0x1c0))(param_1,0), cVar2 == '\0')) {
        piVar6 = FUN_005b6ee0(*(void **)((int)param_1 + 0xa0),local_c);
        uVar3 = 0;
        if (piVar6 == (int *)0x0) {
LAB_004dd965:
          return uVar3 & 0xffffff00;
        }
        (**(code **)(*piVar9 + 4))();
        piVar9[5] = (int)piVar6;
        (**(code **)*piVar9)();
        uVar3 = (**(code **)(*piVar6 + 0x1b8))(param_1,iVar8);
        if ((char)uVar3 == '\0') goto LAB_004dd965;
        FUN_004dd080(param_1,piVar6);
      }
      piVar6 = *(int **)((int)param_1 + 0xdc);
      piVar9 = piVar9 + 6;
      iVar8 = iVar8 + 1;
    } while (piVar9 != piVar6);
  }
  return CONCAT31((int3)((uint)piVar6 >> 8),1);
}


//// FUNCTION FUN_004dd970 @ 004dd970 ////

void __fastcall FUN_004dd970(void *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9ac6;
  local_c = ExceptionList;
  piVar3 = (int *)((int)param_1 + 0xac);
  local_18 = 4;
  ExceptionList = &local_c;
  do {
    iVar7 = piVar3[-1];
    if (iVar7 != *piVar3) {
      do {
        piVar4 = *(int **)(iVar7 + 0x14);
        bVar1 = FUN_0059c510((int)piVar4);
        if (!bVar1) {
          FUN_004dd080(param_1,piVar4);
        }
        iVar7 = iVar7 + 0x18;
      } while (iVar7 != *piVar3);
    }
    piVar3 = piVar3 + 4;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  piVar3 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xa0));
  bVar1 = FUN_0059c510((int)piVar3);
  if (!bVar1) {
    FUN_004dd080(param_1,piVar3);
  }
  iVar7 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
  local_18 = *(int *)(iVar7 + 8);
  iVar7 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
  if (local_18 != iVar7 + 0x14) {
    do {
      piVar3 = (int *)FUN_0048c950(*(int *)(local_18 + 8));
      piVar4 = (int *)FUN_00ace790(piVar3,0,&TM::CStaff::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      if ((((piVar3 != (int *)0x0) && (bVar1 = FUN_0059c510((int)piVar3), !bVar1)) &&
          (cVar2 = (**(code **)(*piVar3 + 0x1c0))(param_1), cVar2 != '\0')) &&
         (cVar2 = FUN_004ecb40(*(void **)((int)param_1 + 0x124),piVar3), cVar2 != '\0')) {
        pvVar5 = operator_new(0x2b4);
        puVar8 = (undefined4 *)0x0;
        uStack_4 = 0;
        if (pvVar5 != (void *)0x0) {
          puVar8 = FUN_00402380(pvVar5,(int)piVar3,*(undefined4 *)((int)param_1 + 0x124));
        }
        uStack_4 = 0xffffffff;
        puVar8[0x84] = puVar8[0x84] | 3;
        if (piVar4 == (int *)0x0) {
          puVar8[0x85] = 0x3f800000;
        }
        else {
          puVar6 = (undefined4 *)FUN_00585f80(piVar4);
          puVar8[0x85] = *puVar6;
        }
        pvVar5 = operator_new(0x140);
        uStack_4 = 1;
        if (pvVar5 == (void *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = DesireReadyPosition_Constructor
                             (pvVar5,piVar3,puVar8,*(undefined4 *)((int)param_1 + 0x10c));
        }
        uStack_4 = 0xffffffff;
        TMCharacter_AddResidentDesire(piVar3,(int)puVar8);
      }
      local_18 = *(int *)(local_18 + 4);
      iVar7 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
    } while (local_18 != iVar7 + 0x14);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ddb90 @ 004ddb90 ////

undefined4 __fastcall FUN_004ddb90(void *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_30;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9aee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(int *)((int)param_1 + 0x124) == 0) {
    ExceptionList = &pvStack_c;
    FUN_004d6b30((int)param_1);
  }
  *(undefined1 *)((int)param_1 + 0xf4) = 0;
  FUN_004d9f40((int)param_1 + 0xe4);
  piVar2 = (int *)((int)param_1 + 0xac);
  iVar8 = 4;
  do {
    iVar7 = piVar2[-1];
    if (iVar7 != *piVar2) {
      do {
        if (*(int **)(iVar7 + 0x14) != (int *)0x0) {
          FUN_004dd080(param_1,*(int **)(iVar7 + 0x14));
        }
        iVar7 = iVar7 + 0x18;
      } while (iVar7 != *piVar2);
    }
    piVar2 = piVar2 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  piVar2 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xa0));
  FUN_004dd080(param_1,piVar2);
  iVar8 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
  local_30 = *(int *)(iVar8 + 8);
  iVar8 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
  if (local_30 != iVar8 + 0x14) {
    do {
      piVar2 = (int *)FUN_0048c950(*(int *)(local_30 + 8));
      piVar3 = (int *)FUN_00ace790(piVar2,0,&TM::CStaff::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
      if ((piVar2 != (int *)0x0) && (cVar1 = (**(code **)(*piVar2 + 0x1c0))(param_1), cVar1 != '\0')
         ) {
        cVar1 = FUN_004ecb40(*(void **)((int)param_1 + 0x124),piVar2);
        if (cVar1 != '\0') {
          pvVar4 = operator_new(0x2b4);
          puVar9 = (undefined4 *)0x0;
          uStack_4 = 0;
          if (pvVar4 != (void *)0x0) {
            puVar9 = FUN_00402380(pvVar4,(int)piVar2,*(undefined4 *)((int)param_1 + 0x124));
          }
          uStack_4 = 0xffffffff;
          puVar9[0x84] = puVar9[0x84] | 3;
          if (piVar3 == (int *)0x0) {
            puVar9[0x85] = 0x3f800000;
          }
          else {
            puVar5 = (undefined4 *)FUN_00585f80(piVar3);
            puVar9[0x85] = *puVar5;
          }
          FUN_0059c0d0(piVar2);
          pvVar4 = operator_new(0x140);
          uStack_4 = 1;
          if (pvVar4 == (void *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            puVar9 = DesireReadyPosition_Constructor
                               (pvVar4,piVar2,puVar9,*(undefined4 *)((int)param_1 + 0x10c));
          }
          uStack_4 = 0xffffffff;
          TMCharacter_AddResidentDesire(piVar2,(int)puVar9);
        }
        if ((piVar3 != (int *)0x0) && (cVar1 = FUN_00585f60(), cVar1 == '\0')) {
          pppuStack_18 = &ppuStack_24;
          piStack_1c = piVar3 + 6;
          ppuStack_24 = &PTR_FUN_00d16954;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 2;
          piStack_10 = piVar3;
          FUN_004db6d0((void *)((int)param_1 + 0xe4),(int)&ppuStack_24);
          uStack_4 = 0xffffffff;
          ppuStack_24 = &PTR_FUN_00d16954;
          if (piStack_1c != (int *)0x0) {
            *piStack_1c = iStack_20;
          }
          if (iStack_20 != 0) {
            *(int **)(iStack_20 + 4) = piStack_1c;
          }
          piStack_10 = (int *)0x0;
          iStack_20 = 0;
          piStack_1c = (int *)0x0;
        }
      }
      local_30 = *(int *)(local_30 + 4);
      iVar8 = FUN_004de100(*(int *)((int)param_1 + 0x10c));
    } while (local_30 != iVar8 + 0x14);
  }
  pvVar4 = *(void **)((int)param_1 + 0x124);
  iVar7 = 0;
  for (iVar8 = *(int *)((int)pvVar4 + 0x1b4); iVar8 != (int)pvVar4 + 0x1c0;
      iVar8 = *(int *)(iVar8 + 4)) {
    iVar7 = iVar7 + 1;
  }
  uVar6 = FUN_004ec840(pvVar4,iVar7);
  puVar9 = *(undefined4 **)((int)param_1 + 0x124);
  piVar2 = puVar9 + 0x12;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    uVar6 = (**(code **)*puVar9)();
  }
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


//// FUNCTION FUN_004ddee0 @ 004ddee0 ////

void FUN_004ddee0(void)

{
  uint *unaff_ESI;
  uint local_4;
  
  if (DAT_010583e0 == 0) {
    local_4 = *unaff_ESI >> 2 & 1;
    FUN_0098a3a0(&local_4);
    local_4 = *unaff_ESI >> 1 & 1;
    FUN_0098a3a0(&local_4);
    local_4 = *unaff_ESI & 1;
    FUN_0098a3a0(&local_4);
    local_4 = *unaff_ESI >> 3 & 1;
    FUN_0098a3a0(&local_4);
    local_4 = 0;
    FUN_0098a3a0(&local_4);
    local_4 = unaff_ESI[1];
    FUN_0098a3a0(&local_4);
    return;
  }
  if (DAT_010583e0 == 1) {
    SLVAR_LoadUint(&local_4);
    *unaff_ESI = *unaff_ESI ^ (local_4 * 4 ^ *unaff_ESI) & 4;
    SLVAR_LoadUint(&local_4);
    *unaff_ESI = *unaff_ESI ^ (local_4 * 2 ^ *unaff_ESI) & 2;
    SLVAR_LoadUint(&local_4);
    *unaff_ESI = *unaff_ESI ^ (*unaff_ESI ^ local_4) & 1;
    SLVAR_LoadUint(&local_4);
    *unaff_ESI = *unaff_ESI ^ (local_4 * 8 ^ *unaff_ESI) & 8;
    SLVAR_LoadUint(&local_4);
    SLVAR_LoadUint(&local_4);
    unaff_ESI[1] = local_4;
  }
  return;
}


//// FUNCTION FUN_004de0a0 @ 004de0a0 ////

void __fastcall FUN_004de0a0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004de0e0 @ 004de0e0 ////

undefined4 * __thiscall FUN_004de0e0(void *this,byte param_1)

{
  FUN_00753420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004de100 @ 004de100 ////

int __fastcall FUN_004de100(int param_1)

{
  return param_1 + 0x18c;
}


//// FUNCTION FUN_004de120 @ 004de120 ////

undefined4 __fastcall FUN_004de120(int param_1)

{
  return *(undefined4 *)(param_1 + 0x274);
}


//// FUNCTION FUN_004de130 @ 004de130 ////

undefined4 __fastcall FUN_004de130(int param_1)

{
  return *(undefined4 *)(param_1 + 0x27c);
}


//// FUNCTION FUN_004de140 @ 004de140 ////

undefined4 __fastcall FUN_004de140(int param_1)

{
  return *(undefined4 *)(param_1 + 0x278);
}


//// FUNCTION FUN_004de150 @ 004de150 ////

undefined4 __fastcall FUN_004de150(int param_1)

{
  return *(undefined4 *)(param_1 + 0x280);
}


//// FUNCTION FUN_004de170 @ 004de170 ////

undefined4 __fastcall FUN_004de170(int param_1)

{
  return *(undefined4 *)(param_1 + 0x284);
}


//// FUNCTION FUN_004de180 @ 004de180 ////

int __fastcall FUN_004de180(int param_1)

{
  return param_1 + 0x298;
}


//// FUNCTION FUN_004de1b0 @ 004de1b0 ////

float * __thiscall FUN_004de1b0(void *this,float *param_1)

{
  float *this_00;
  float *pfVar1;
  undefined4 uVar2;
  void *local_4;
  
  this_00 = (float *)((int)this + 0x164);
  local_4 = this;
  pfVar1 = (float *)FUN_0043b520(&local_4,0.0);
  uVar2 = FUN_0043b660(this_00,pfVar1);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_0043b680((void *)((int)this + 0x168),this_00);
    if ((char)uVar2 != '\0') {
      FUN_0043b620((void *)((int)this + 0x168),param_1,this_00);
      return param_1;
    }
  }
  *param_1 = *(float *)((int)this + 0xe8);
  return param_1;
}


//// FUNCTION FUN_004de210 @ 004de210 ////

undefined1 __fastcall FUN_004de210(int param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}


//// FUNCTION FUN_004de220 @ 004de220 ////

undefined1 __thiscall FUN_004de220(void *this,int param_1)

{
  return *(undefined1 *)(param_1 + 0x2fc + (int)this);
}


//// FUNCTION FUN_004de230 @ 004de230 ////

void __thiscall FUN_004de230(void *this,int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2fc + (int)this) = param_2;
  return;
}


//// FUNCTION FUN_004de250 @ 004de250 ////

int __thiscall FUN_004de250(void *this,int param_1)

{
  return (int)this + param_1 * 0x28 + 0x300;
}


//// FUNCTION FUN_004de270 @ 004de270 ////

void __thiscall FUN_004de270(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + param_1 * 0x28 + 0x300);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_004de290 @ 004de290 ////

undefined4 __thiscall FUN_004de290(void *this,int param_1)

{
  return *(undefined4 *)((int)this + param_1 * 4 + 0x350);
}


//// FUNCTION FUN_004de2a0 @ 004de2a0 ////

void __thiscall FUN_004de2a0(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x350) = param_2;
  return;
}


//// FUNCTION FUN_004de360 @ 004de360 ////

uint __fastcall FUN_004de360(int param_1)

{
  return *(uint *)(param_1 + 0x2f4) & (*(uint *)(param_1 + 0x2f4) == 0xffffffff) - 1;
}


//// FUNCTION FUN_004de380 @ 004de380 ////

undefined4 FUN_004de380(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_005a64e0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_005a64e0(param_1);
    return uVar2;
  }
  uVar2 = FUN_005a6470(param_1);
  return uVar2;
}


//// FUNCTION FUN_004de3b0 @ 004de3b0 ////

int __fastcall FUN_004de3b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_004de400 @ 004de400 ////

int * __thiscall FUN_004de400(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004de570 @ 004de570 ////

int __fastcall FUN_004de570(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
}


//// FUNCTION FUN_004de600 @ 004de600 ////

int __fastcall FUN_004de600(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
}


//// FUNCTION FUN_004de950 @ 004de950 ////

void __thiscall FUN_004de950(void *this,int param_1)

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


//// FUNCTION FUN_004de9b0 @ 004de9b0 ////

void __cdecl FUN_004de9b0(int param_1)

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


//// FUNCTION FUN_004de9d0 @ 004de9d0 ////

void __cdecl FUN_004de9d0(int *param_1)

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


//// FUNCTION FUN_004de9f0 @ 004de9f0 ////

void __thiscall FUN_004de9f0(void *this,int *param_1)

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


//// FUNCTION FUN_004dea90 @ 004dea90 ////

void __fastcall FUN_004dea90(int *param_1)

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


//// FUNCTION FUN_004deb60 @ 004deb60 ////

void __cdecl FUN_004deb60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004dec00 @ 004dec00 ////

void __fastcall FUN_004dec00(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004ded20 @ 004ded20 ////

void __fastcall FUN_004ded20(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0x3f9c61ab;
  return;
}


//// FUNCTION FUN_004dee40 @ 004dee40 ////

void FUN_004dee40(void)

{
  FUN_0098fd30("StuntSuccessRandom.Germ",&DAT_0104add8,1);
  return;
}


//// FUNCTION FUN_004dee70 @ 004dee70 ////

void __fastcall FUN_004dee70(int param_1)

{
  void *this;
  bool bVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *_Str1;
  int iVar6;
  float10 fVar7;
  int local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 uStack_4;
  
  bVar1 = FUN_0043b920(0xe4fa4c);
  iVar6 = 0;
  if (bVar1) {
    pfVar2 = (float *)FUN_0043b540(&local_8,0.0,1.0);
    FUN_0043b5e0((void *)(param_1 + 0xec),pfVar2);
  }
  if ((*(int *)(param_1 + 0x1d8) != 0) && (*(int *)(*(int *)(param_1 + 0xb4) + 0xa0) != 0)) {
    iVar3 = FUN_005b2780(*(int *)(param_1 + 0xb4));
    if (iVar3 != 0) {
      uVar4 = FUN_005b2780(*(int *)(param_1 + 0xb4));
      (**(code **)(*(int *)(param_1 + 0x24c) + 4))();
      *(undefined4 *)(param_1 + 0x260) = uVar4;
      (*(code *)**(undefined4 **)(param_1 + 0x24c))();
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      this = *(void **)(*(int *)(param_1 + 0x15c) + 0x214);
      *(undefined **)((int)this + 0x1dc) = &DAT_004dee60;
      *(int *)((int)this + 0x1e0) = param_1;
      local_10 = 0.0;
      local_c = 0.0;
      local_8 = 0.0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      uVar5 = FUN_00973ac0(this);
      if (0 < (int)uVar5) {
        do {
          iVar3 = FUN_00974ea0(this,iVar6);
          if ((((*(byte *)((int)this + 0x4e) != 0) && (*(int *)((int)this + 0xc4) != 0)) &&
              (iVar3 < (int)(uint)*(byte *)((int)this + 0x4e))) &&
             (_Str1 = (char *)FUN_009722a0(this,*(int *)(*(int *)((int)this + 0xc4) + 8 +
                                                        iVar3 * 0x18)), _Str1 != (char *)0x0)) {
            iVar3 = __stricmp(_Str1,"st_sex");
            if (iVar3 == 0) {
              fVar7 = FUN_00976530((int)this,iVar6);
              local_1c = local_1c + 1;
              local_10 = (float)(fVar7 + (float10)local_10);
            }
            else {
              iVar3 = __stricmp(_Str1,"st_violence");
              if (iVar3 == 0) {
                fVar7 = FUN_00976530((int)this,iVar6);
                local_18 = local_18 + 1;
                local_c = (float)(fVar7 + (float10)local_c);
              }
              else {
                iVar3 = __stricmp(_Str1,"st_realism");
                if (iVar3 == 0) {
                  fVar7 = FUN_00976530((int)this,iVar6);
                  local_14 = local_14 + 1;
                  local_8 = (float)(fVar7 + (float10)local_8);
                }
              }
            }
          }
          iVar6 = iVar6 + 1;
          uVar5 = FUN_00973ac0(this);
        } while (iVar6 < (int)uVar5);
        if (0 < local_1c) {
          pfVar2 = (float *)FUN_004b5800(*(void **)(param_1 + 0x1d8),&uStack_4);
          FUN_00407070(&local_10,(local_10 / (float)local_1c - 0.5) + *pfVar2);
          *(float *)(param_1 + 0x268) = local_10;
        }
        if (0 < local_18) {
          pfVar2 = (float *)FUN_004b5810(*(void **)(param_1 + 0x1d8),&uStack_4);
          FUN_00407070(&local_c,(local_c / (float)local_18 - 0.5) + *pfVar2);
          *(float *)(param_1 + 0x26c) = local_c;
        }
        if (0 < local_14) {
          pfVar2 = (float *)FUN_004b5820(*(void **)(param_1 + 0x1d8),&uStack_4);
          FUN_00407070(&local_8,(local_8 / (float)local_14 - 0.5) + *pfVar2);
          *(float *)(param_1 + 0x270) = local_8;
        }
      }
    }
    FUN_004b5830(*(void **)(param_1 + 0x1d8),param_1);
    uVar4 = FUN_004d6c10(*(int *)(*(int *)(param_1 + 0xb4) + 0xa0));
    if ((char)uVar4 != '\0') {
      FUN_004d9860(*(int *)(*(int *)(param_1 + 0xb4) + 0xa0));
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}


//// FUNCTION FUN_004df130 @ 004df130 ////

void __fastcall FUN_004df130(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  
  if (*(void **)(param_1 + 0xb4) != (void *)0x0) {
    FUN_005bb140(*(void **)(param_1 + 0xb4),param_1);
    FUN_005b55e0(*(void **)(param_1 + 0xb4),param_1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x248);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x234) + 4))();
    *(undefined4 *)(param_1 + 0x248) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x234))();
  }
  if ((*(int *)(param_1 + 0xb4) != 0) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0xb4) + 0xa0), iVar3 != 0)) {
    iVar3 = FUN_004d6c00(iVar3);
    if (iVar3 == param_1) {
      FUN_004d9a80(*(int *)(*(int *)(param_1 + 0xb4) + 0xa0));
      FUN_004d93a0(*(int *)(*(int *)(param_1 + 0xb4) + 0xa0));
    }
  }
  if ((*(int *)(param_1 + 0x1c0) == 4) && (*(int *)(param_1 + 0xb4) != 0)) {
    this = (void *)FUN_005b25f0(*(int *)(param_1 + 0xb4));
    if (this != (void *)0x0) {
      FUN_00756860(this,*(int *)(param_1 + 0x2f8));
      *(undefined4 *)(param_1 + 0x2f8) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}


//// FUNCTION FUN_004df200 @ 004df200 ////

undefined4 __thiscall FUN_004df200(void *this,undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004b5850(*(int *)((int)this + 0x1d8));
  (**(code **)(*piVar1 + 0x34))(param_1);
  return param_1;
}


//// FUNCTION FUN_004df220 @ 004df220 ////

undefined4 __fastcall FUN_004df220(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    uVar1 = FUN_004b5850(*(int *)(param_1 + 0x1d8));
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_004df240 @ 004df240 ////

undefined4 __fastcall FUN_004df240(int param_1)

{
  if (*(int *)(param_1 + 0x15c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x214);
  }
  return 0;
}


//// FUNCTION FUN_004df260 @ 004df260 ////

undefined4 * __fastcall FUN_004df260(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    puVar1 = FUN_004b5670();
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_004df280 @ 004df280 ////

void __fastcall FUN_004df280(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004df2d0 @ 004df2d0 ////

void __fastcall FUN_004df2d0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004df310 @ 004df310 ////

void __thiscall FUN_004df310(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x234) + 4))();
  *(undefined4 *)((int)this + 0x248) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x234))();
  return;
}


//// FUNCTION FUN_004df340 @ 004df340 ////

float * __thiscall FUN_004df340(void *this,float *param_1)

{
  void *this_00;
  float10 fVar1;
  
  fVar1 = FUN_0043b710((float *)((int)this + 0x164));
  if ((float10)0.0 != fVar1) {
    *param_1 = *(float *)((int)this + 0x164);
    return param_1;
  }
  if ((*(int *)((int)this + 0x8c) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this + 0x8c) + 8), this_00 != (void *)0x0)) {
    FUN_004df3b0(this_00,param_1);
    return param_1;
  }
  *param_1 = *(float *)(*(int *)((int)this + 0xb4) + 0x2c8);
  return param_1;
}


//// FUNCTION FUN_004df3b0 @ 004df3b0 ////

void __thiscall FUN_004df3b0(void *this,float *param_1)

{
  float *pfVar1;
  float *this_00;
  float *pfVar2;
  undefined4 uVar3;
  float10 fVar4;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0043b510(&local_10);
  fVar4 = FUN_0043b710((float *)((int)this + 0x168));
  if ((float10)0.0 != fVar4) {
    *param_1 = *(float *)((int)this + 0x168);
    return;
  }
  pfVar1 = FUN_004de1b0(this,&local_c);
  pfVar2 = &local_8;
  this_00 = FUN_004df340(this,&local_4);
  pfVar2 = (float *)FUN_0043b600(this_00,pfVar2,pfVar1);
  local_10 = *pfVar2;
  uVar3 = FUN_0043b6c0(&local_10,&DAT_00e4fa4c);
  if ((char)uVar3 != '\0') {
    *param_1 = DAT_00e4fa4c;
    return;
  }
  *param_1 = local_10;
  return;
}


//// FUNCTION FUN_004df450 @ 004df450 ////

undefined4 * __thiscall FUN_004df450(void *this,undefined4 *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)((int)this + 0x15c);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 699) != '\0')) &&
     (*(void **)(iVar1 + 0x214) != (void *)0x0)) {
    fVar2 = FUN_00977920(*(void **)(iVar1 + 0x214));
    FUN_00407070(param_1,(float)fVar2);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


//// FUNCTION FUN_004df4a0 @ 004df4a0 ////

undefined4 __fastcall FUN_004df4a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1d8);
}


//// FUNCTION FUN_004df4b0 @ 004df4b0 ////

undefined4 __fastcall FUN_004df4b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}


//// FUNCTION FUN_004df4c0 @ 004df4c0 ////

void __fastcall FUN_004df4c0(int param_1)

{
  if ((DAT_0104a974 == 0) ||
     (*(float *)(DAT_0104a974 + 0x6c) < 0.0 != (*(float *)(DAT_0104a974 + 0x6c) == 0.0))) {
    FUN_005b55e0(*(void **)(param_1 + 0xb4),param_1);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  return;
}


//// FUNCTION FUN_004df500 @ 004df500 ////

void __fastcall FUN_004df500(int param_1)

{
  void *this;
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  int local_8;
  undefined1 local_4 [4];
  
  this = (void *)(param_1 + 0xe8);
  FUN_0043b700(this,0.0);
  iVar2 = FUN_004b4a60(*(int *)(param_1 + 0x1d8));
  fVar4 = FUN_0043b970(0xe4fa4c);
  pfVar3 = (float *)FUN_0043b520(&local_8,(float)((float10)iVar2 / fVar4));
  FUN_0043b5e0(this,pfVar3);
  local_8 = FUN_004b57d0(*(int *)(param_1 + 0x1d8));
  fVar1 = (float)local_8;
  if (local_8 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar4 = FUN_0043b710((float *)&DAT_0104adec);
  pfVar3 = (float *)FUN_0043b520(local_4,(float)(fVar4 * (float10)fVar1));
  FUN_0043b5e0(this,pfVar3);
  FUN_0043b5e0(this,(float *)&DAT_0104adec);
  return;
}


//// FUNCTION FUN_004df5d0 @ 004df5d0 ////

float10 __fastcall FUN_004df5d0(float param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  void *pvVar5;
  byte bVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)FUN_006fb460(*(int *)((int)param_1 + 0xb4),(int)param_1);
  bVar3 = false;
  if (puVar4 == (undefined4 *)0x0) {
    pvVar5 = operator_new(0xbc);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_005dcd60(pvVar5,param_1);
    }
    local_4 = 0xffffffff;
    bVar3 = true;
  }
  local_18 = 0.0;
  if ((puVar4 != (undefined4 *)0x0) && (iVar2 = *(int *)((int)param_1 + 0xb4), iVar2 != 0)) {
    iVar9 = 0;
    iVar8 = 1;
    pvVar5 = (void *)FUN_005b2220(iVar2);
    iVar8 = FUN_005a76b0(pvVar5,iVar8,iVar9);
    iVar8 = FUN_004de380(iVar8);
    fVar7 = FUN_005d8ff0((int)puVar4,iVar2,iVar8);
    local_14 = (float)fVar7;
    bVar6 = local_14 != 0.0;
    iVar2 = *(int *)((int)param_1 + 0xb4);
    iVar9 = 0;
    iVar8 = 3;
    pvVar5 = (void *)FUN_005b2220(iVar2);
    iVar8 = FUN_005a76b0(pvVar5,iVar8,iVar9);
    iVar8 = FUN_004de380(iVar8);
    fVar7 = FUN_005d8ff0((int)puVar4,iVar2,iVar8);
    fVar1 = (float)(fVar7 + (float10)local_14);
    if ((float10)local_14 < fVar7 + (float10)local_14) {
      bVar6 = bVar6 + 1;
      local_14 = fVar1;
    }
    iVar2 = *(int *)((int)param_1 + 0xb4);
    iVar9 = 0;
    iVar8 = 2;
    pvVar5 = (void *)FUN_005b2220(iVar2);
    iVar8 = FUN_005a76b0(pvVar5,iVar8,iVar9);
    iVar8 = FUN_004de380(iVar8);
    fVar7 = FUN_005d8ff0((int)puVar4,iVar2,iVar8);
    fVar7 = fVar7 + (float10)fVar1;
    local_18 = (float)fVar7;
    if ((float10)local_14 < fVar7) {
      bVar6 = bVar6 + 1;
    }
    if ((bVar6 != 0) && (0.0 < local_18)) {
      fVar7 = FUN_006f9cf0(local_18 / (float)bVar6);
      local_18 = (float)fVar7;
    }
  }
  if ((bVar3) && (puVar4 != (undefined4 *)0x0)) {
    (**(code **)*puVar4)(1);
  }
  ExceptionList = local_c;
  return (float10)local_18;
}


//// FUNCTION FUN_004dfa10 @ 004dfa10 ////

undefined4 * __thiscall FUN_004dfa10(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = (undefined1 *)((int)this + 0x30);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x24),(char *)param_1[9],param_1[10]);
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return this;
}


//// FUNCTION FUN_004dfa80 @ 004dfa80 ////

undefined4 * __thiscall FUN_004dfa80(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_004dfb50 @ 004dfb50 ////

int * __fastcall FUN_004dfb50(int *param_1)

{
  FUN_004dea90(param_1);
  return param_1;
}


//// FUNCTION FUN_004dfb60 @ 004dfb60 ////

void __cdecl FUN_004dfb60(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004dfc10 @ 004dfc10 ////

void __fastcall FUN_004dfc10(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_004dfc50 @ 004dfc50 ////

int * __cdecl FUN_004dfc50(int param_1,int param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 0xb);
  do {
    pcVar1 = *(char **)(param_2 + -0x48);
    uVar2 = *(uint *)(param_2 + -0x44);
    iVar8 = param_2 + -0x48;
    puVar7 = puVar6 + -0x12;
    param_3 = param_3 + -0x12;
    if (puVar6[-0x1b] <= uVar2) {
      if (0x14 < puVar6[-0x1b]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-0x1b] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-0x1c] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    puVar6[-0x15] = *(uint *)(param_2 + -0x28);
    pcVar1 = *(char **)(param_2 + -0x24);
    uVar2 = *(uint *)(param_2 + -0x20);
    if (*puVar7 <= uVar2) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-0x14]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar7 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar6[-0x14] = (uint)pvVar5;
    }
    _strncpy((char *)puVar6[-0x14],pcVar1,uVar2);
    puVar6[-0x13] = uVar2;
    *(undefined1 *)(uVar2 + puVar6[-0x14]) = 0;
    puVar6[-0xc] = *(uint *)(param_2 + -4);
    puVar6 = puVar7;
    param_2 = iVar8;
  } while (iVar8 != param_1);
  return param_3;
}


//// FUNCTION FUN_004dfd50 @ 004dfd50 ////

int * __cdecl FUN_004dfd50(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = param_1[1];
    _Source = (char *)*param_1;
    if ((uint)param_3[2] <= _Count) {
      if (0x14 < (uint)param_3[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_3 = (int)pvVar1;
    }
    _strncpy((char *)*param_3,_Source,_Count);
    param_3[1] = _Count;
    *(undefined1 *)(_Count + *param_3) = 0;
    param_3[8] = param_1[8];
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004dfdd0 @ 004dfdd0 ////

int * __cdecl FUN_004dfdd0(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x20);
    _Source = *(char **)(param_2 + -0x24);
    iVar2 = param_2 + -0x24;
    piVar3 = param_3 + -9;
    if ((uint)param_3[-7] <= _Count) {
      if (0x14 < (uint)param_3[-7]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-7] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar3 = (int)pvVar1;
    }
    _strncpy((char *)*piVar3,_Source,_Count);
    param_3[-8] = _Count;
    *(undefined1 *)(_Count + *piVar3) = 0;
    param_3[-1] = *(int *)(param_2 + -4);
    param_2 = iVar2;
    param_3 = piVar3;
  } while (iVar2 != param_1);
  return piVar3;
}


//// FUNCTION FUN_004dfe80 @ 004dfe80 ////

int * __cdecl FUN_004dfe80(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 0xb);
  do {
    pcVar1 = (char *)*param_1;
    uVar2 = param_1[1];
    if (puVar6[-9] <= uVar2) {
      if (0x14 < puVar6[-9]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-9] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-10] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    puVar6[-3] = param_1[8];
    pcVar1 = (char *)param_1[9];
    uVar2 = param_1[10];
    if (*puVar6 <= uVar2) {
      if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-2]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar6 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar6[-2] = (uint)pvVar5;
    }
    _strncpy((char *)puVar6[-2],pcVar1,uVar2);
    puVar6[-1] = uVar2;
    *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
    puVar6[6] = param_1[0x11];
    param_1 = param_1 + 0x12;
    param_3 = param_3 + 0x12;
    puVar6 = puVar6 + 0x12;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004dffe0 @ 004dffe0 ////

undefined4 * __thiscall FUN_004dffe0(void *this,byte param_1)

{
  FUN_004df2d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e0000 @ 004e0000 ////

undefined4 * __thiscall FUN_004e0000(void *this,byte param_1)

{
  FUN_004df280(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e0060 @ 004e0060 ////

undefined4 * __thiscall FUN_004e0060(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x208),*(uint *)((int)this + 0x20c));
  return param_1;
}


//// FUNCTION FUN_004e00a0 @ 004e00a0 ////

undefined4 * __thiscall FUN_004e00a0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x568),*(uint *)((int)this + 0x56c));
  return param_1;
}


//// FUNCTION FUN_004e0120 @ 004e0120 ////

void __fastcall FUN_004e0120(int *param_1)

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
  puStack_8 = &LAB_00ca9b28;
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


//// FUNCTION FUN_004e01f0 @ 004e01f0 ////

void __fastcall FUN_004e01f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_20 [2];
  uint local_18;
  
  ISerializable_WriteObjectHeader();
  puVar1 = FUN_004b63f0(*(void **)(param_1 + 0x174),local_20);
  FUN_004015d0((void *)(param_1 + 0x178),(char *)*puVar1,puVar1[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  uVar2 = FUN_004b5850(*(int *)(param_1 + 0x174));
  (**(code **)(*(int *)(param_1 + 0x198) + 4))();
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  (*(code *)**(undefined4 **)(param_1 + 0x198))();
  puVar1 = FUN_004e0060(*(void **)(param_1 + 0x174),local_20);
  FUN_004015d0((void *)(param_1 + 0x1b0),(char *)*puVar1,puVar1[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_004e03a0 @ 004e03a0 ////

int * __fastcall FUN_004e03a0(int param_1)

{
  int *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puStack_58;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9b72;
  local_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  if ((*(int *)(param_1 + 0x1d8) == 0) ||
     (ExceptionList = &local_c, this_00 = (int *)FUN_004b5850(*(int *)(param_1 + 0x1d8)),
     this_00 == (int *)0x0)) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  cVar4 = (**(code **)(*this_00 + 0xa4))();
  if ((((cVar4 == '\0') || (iVar5 = FUN_004cba90((int)this_00), iVar5 == param_1)) &&
      (cVar4 = (**(code **)(*this_00 + 0xc4))(), cVar4 == '\0')) && (this_00[0xae] == 5)) {
    ExceptionList = local_c;
    return this_00;
  }
  puStack_58 = DAT_0104acbc;
  if (DAT_0104acbc == &DAT_0104acc8) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  do {
    this = (int *)puStack_58[2];
    iVar5 = 0;
    iVar6 = FUN_004cba90((int)this);
    if (iVar6 != 0) {
      iVar5 = FUN_004cba90((int)this);
      iVar5 = *(int *)(iVar5 + 0xb4);
    }
    if ((((this == (int *)0x0) || (this == this_00)) ||
        ((cVar4 = (**(code **)(*this + 0xa4))(), cVar4 != '\0' &&
         (iVar5 != *(int *)(param_1 + 0xb4))))) ||
       ((cVar4 = (**(code **)(*this + 0xc4))(), cVar4 != '\0' || (this[0xae] != 5)))) {
LAB_004e051d:
      bVar3 = false;
    }
    else {
      puVar7 = FUN_004cd890(this_00,apvStack_2c);
      uStack_4 = 0;
      puVar8 = FUN_004cd890(this,apvStack_4c);
      bVar2 = true;
      bVar1 = true;
      uStack_4 = 1;
      uVar9 = FUN_00401ec0(puVar8,puVar7);
      if ((char)uVar9 == '\0') goto LAB_004e051d;
      puVar7 = (undefined4 *)FUN_00528450((int)this_00);
      puVar8 = (undefined4 *)FUN_00528450((int)this);
      uVar9 = FUN_00401ec0(puVar8,puVar7);
      bVar3 = true;
      if ((char)uVar9 == '\0') goto LAB_004e051d;
    }
    if ((bVar1) && (bVar1 = false, 0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_4c[0]);
    }
    uStack_4 = 0xffffffff;
    if ((bVar2) && (bVar2 = false, 0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (bVar3) {
      ExceptionList = local_c;
      return this;
    }
    puStack_58 = (undefined4 *)puStack_58[1];
    if (puStack_58 == &DAT_0104acc8) {
      ExceptionList = local_c;
      return (int *)0x0;
    }
  } while( true );
}


//// FUNCTION FUN_004e05d0 @ 004e05d0 ////

void __fastcall FUN_004e05d0(undefined4 *param_1)

{
  int *piVar1;
  
  FUN_004df130((int)param_1);
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  piVar1 = param_1 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*param_1)(1);
  }
  return;
}


//// FUNCTION FUN_004e0620 @ 004e0620 ////

undefined4 __thiscall FUN_004e0620(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x194);
  if (iVar2 == (int)this + 0x1a0) {
    return 0;
  }
  do {
    iVar1 = FUN_0048c950(*(int *)(iVar2 + 8));
    if (iVar1 == param_1) {
      return *(undefined4 *)(iVar2 + 8);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != (int)this + 0x1a0);
  return 0;
}


//// FUNCTION FUN_004e0670 @ 004e0670 ////

undefined4 __thiscall FUN_004e0670(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x194);
  if (iVar2 == (int)this + 0x1a0) {
    return 0;
  }
  do {
    iVar1 = FUN_0048c9f0(*(int *)(iVar2 + 8));
    if (iVar1 == param_1) {
      return *(undefined4 *)(iVar2 + 8);
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != (int)this + 0x1a0);
  return 0;
}


//// FUNCTION FUN_004e0780 @ 004e0780 ////

void __fastcall FUN_004e0780(float param_1)

{
  char cVar1;
  void *pvVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 local_8;
  float local_4;
  
  iVar5 = *(int *)((int)param_1 + 0x194);
  if (iVar5 != (int)param_1 + 0x1a0) {
    do {
      pvVar2 = (void *)FUN_0048c950(*(int *)(iVar5 + 8));
      if (pvVar2 != (void *)0x0) {
        pfVar3 = (float *)FUN_0048c9e0(*(void **)(iVar5 + 8),&local_8);
        if ((*pfVar3 <= 0.0) || (uVar4 = FUN_0051ff70(2), (char)uVar4 != '\0')) {
          FUN_0057c250(pvVar2,param_1);
        }
        else {
          cVar1 = *(char *)((int)param_1 + 0xf0);
          pfVar3 = (float *)FUN_004b58b0(*(void **)((int)param_1 + 0x1d8),&local_4);
          FUN_0057c410(pvVar2,*pfVar3,CONCAT31((int3)((uint)extraout_ECX >> 8),cVar1 == '\0'));
        }
      }
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != (int)param_1 + 0x1a0);
  }
  iVar5 = FUN_005b2780(*(int *)((int)param_1 + 0xb4));
  if (iVar5 != 0) {
    pvVar2 = (void *)FUN_005b2780(*(int *)((int)param_1 + 0xb4));
    FUN_0057c250(pvVar2,param_1);
  }
  return;
}


//// FUNCTION FUN_004e0960 @ 004e0960 ////

uint __thiscall FUN_004e0960(void *this,wchar_t *param_1,undefined4 param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 **ppuVar8;
  int local_280;
  int local_27c;
  char *local_278;
  undefined4 local_274;
  uint local_270;
  char local_26c [20];
  float local_258;
  int local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 *local_244;
  undefined4 local_240;
  uint local_23c;
  undefined1 local_238 [20];
  char *local_224;
  undefined4 local_220;
  uint local_21c;
  char local_218 [20];
  char *local_204;
  undefined4 local_200;
  uint local_1fc;
  char local_1f8 [20];
  char *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  char local_1d8 [20];
  char *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  char local_1b8 [20];
  char *local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  char local_198 [20];
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  undefined1 *local_164;
  undefined4 local_160;
  uint local_15c;
  undefined1 local_158 [20];
  void *local_144 [2];
  uint local_13c;
  undefined4 local_124 [54];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00ca9c17;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00559fb0(local_124);
  local_4._0_1_ = 1;
  if ((*(int *)((int)this + 0x1d8) == 0) ||
     (iVar2 = FUN_004b5850(*(int *)((int)this + 0x1d8)), iVar2 == 0)) {
    local_4 = (uint)local_4._1_3_ << 8;
    uVar7 = FUN_00558920(local_124);
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar7 = uVar7 & 0xffffff00;
  }
  else {
    local_278 = local_26c;
    local_26c[0] = '\0';
    local_274 = 0;
    local_270 = 0x14;
    _strncpy(local_278,"set",3);
    local_274 = 3;
    local_278[3] = '\0';
    ppuVar8 = &local_244;
    local_4._0_1_ = 2;
    this_00 = (void *)FUN_004b5850(*(int *)((int)this + 0x1d8));
    puVar3 = FUN_004cd890(this_00,ppuVar8);
    local_4._0_1_ = 3;
    FUN_00557fa0(local_124,&local_278,puVar3);
    if (0x14 < local_23c) {
                    /* WARNING: Subroutine does not return */
      _free(local_244);
    }
    local_4._0_1_ = 1;
    if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
      _free(local_278);
    }
    local_27c = *(int *)((int)this + 0x2a0);
    local_254 = (int)this + 0x2ac;
    local_280 = 0;
    if (local_27c != local_254) {
      do {
        iVar2 = *(int *)(local_27c + 8);
        if (iVar2 != 0) {
          local_244 = local_238;
          local_238[0] = 0;
          local_240 = 0;
          local_23c = 0x14;
          local_4._0_1_ = 4;
          sVar4 = _sprintf(local_4c,(char *)&param_2_00d1b93c,local_280);
          FUN_004073f0(&local_244,local_4c,sVar4);
          FUN_00558a50(local_124,&local_244,(undefined4 *)0x1);
          local_164 = local_158;
          local_158[0] = 0;
          local_160 = 0;
          local_15c = 0x14;
          FUN_004015d0(&local_164,*(char **)(iVar2 + 0xcc),*(uint *)(iVar2 + 0xd0));
          local_1e4 = local_1d8;
          local_1d8[0] = '\0';
          local_1e0 = 0;
          local_1dc = 0x14;
          _strncpy(local_1e4,"",0);
          local_1e0 = 0;
          *local_1e4 = '\0';
          local_278 = local_26c;
          local_26c[0] = '\0';
          local_274 = 0;
          local_270 = 0x14;
          _strncpy(local_278,"SetDressing/",0xc);
          local_274 = 0xc;
          local_278[0xc] = '\0';
          local_4._0_1_ = 7;
          FUN_00569860((int *)&local_164,&local_278,&local_1e4);
          if (0x14 < local_270) {
                    /* WARNING: Subroutine does not return */
            _free(local_278);
          }
          if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1e4);
          }
          local_224 = local_218;
          local_218[0] = '\0';
          local_220 = 0;
          local_21c = 0x14;
          _strncpy(local_224,"name",4);
          local_220 = 4;
          local_224[4] = '\0';
          local_4._0_1_ = 8;
          FUN_00557fa0(local_124,&local_224,&local_164);
          if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
            _free(local_224);
          }
          local_184 = local_178;
          local_178[0] = '\0';
          local_180 = 0;
          local_17c = 0x14;
          _strncpy(local_184,"position.x",10);
          local_180 = 10;
          local_184[10] = '\0';
          pfVar1 = (float *)(iVar2 + 0x120);
          local_24c = *(undefined4 *)(iVar2 + 0x124);
          local_248 = *(undefined4 *)(iVar2 + 0x128);
          local_4._0_1_ = 9;
          FUN_00557fe0(local_124,&local_184,*pfVar1);
          if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
            _free(local_184);
          }
          local_1a4 = local_198;
          local_198[0] = '\0';
          local_1a0 = 0;
          local_19c = 0x14;
          _strncpy(local_1a4,"position.y",10);
          local_1a0 = 10;
          local_1a4[10] = '\0';
          local_250 = *pfVar1;
          local_248 = *(undefined4 *)(iVar2 + 0x128);
          local_4._0_1_ = 10;
          FUN_00557fe0(local_124,&local_1a4,*(float *)(iVar2 + 0x124));
          if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
            _free(local_1a4);
          }
          local_204 = local_1f8;
          local_1f8[0] = '\0';
          local_200 = 0;
          local_1fc = 0x14;
          _strncpy(local_204,"position.z",10);
          local_200 = 10;
          local_204[10] = '\0';
          local_250 = *pfVar1;
          local_24c = *(undefined4 *)(iVar2 + 0x124);
          local_4._0_1_ = 0xb;
          FUN_00557fe0(local_124,&local_204,*(float *)(iVar2 + 0x128));
          if (0x14 < local_1fc) {
                    /* WARNING: Subroutine does not return */
            _free(local_204);
          }
          local_1c4 = local_1b8;
          local_1b8[0] = '\0';
          local_1c0 = 0;
          local_1bc = 0x14;
          _strncpy(local_1c4,"angle",5);
          local_1c0 = 5;
          local_1c4[5] = '\0';
          local_258 = *(float *)(iVar2 + 0x11c);
          local_4._0_1_ = 0xc;
          FUN_00557fe0(local_124,&local_1c4,local_258);
          if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
            _free(local_1c4);
          }
          local_280 = local_280 + 1;
          if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
            _free(local_164);
          }
          local_4._0_1_ = 1;
          if (0x14 < local_23c) {
                    /* WARNING: Subroutine does not return */
            _free(local_244);
          }
        }
        local_27c = *(int *)(local_27c + 4);
      } while (local_27c != local_254);
    }
    local_4._0_1_ = 1;
    FUN_009ad040(local_144,param_1);
    local_4._0_1_ = 0xd;
    uVar5 = FUN_0055aa10(local_124,local_144);
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    uVar6 = FUN_00558920(local_124);
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),(char)uVar5);
  }
  ExceptionList = local_c;
  return uVar7;
}


//// FUNCTION FUN_004e0fd0 @ 004e0fd0 ////

ushort __fastcall FUN_004e0fd0(float param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  float local_4;
  
  local_4 = param_1;
  pfVar4 = (float *)FUN_004b58b0(*(void **)((int)param_1 + 0x1d8),&local_4);
  fVar1 = *pfVar4;
  uVar7 = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.0) << 0xe;
  if (fVar1 < 0.0 || (fVar1 == 0.0) != 0) {
    return uVar7;
  }
  iVar2 = *(int *)((int)param_1 + 0x194);
  do {
    if (iVar2 == (int)param_1 + 0x1a0) {
      return uVar7 & 0xff00;
    }
    pfVar4 = (float *)FUN_0048c9e0(*(void **)(iVar2 + 8),&local_4);
    fVar1 = *pfVar4;
    uVar6 = (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                          (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0 == 0 && (fVar1 == 0.0) == 0) {
      cVar3 = FUN_0048c730(*(int *)(iVar2 + 8));
      if (cVar3 != '\0') {
        iVar5 = FUN_0048c9f0(*(int *)(iVar2 + 8));
        uVar6 = 0;
        if (iVar5 == 0) goto LAB_004e1069;
      }
      iVar5 = FUN_0048c9f0(*(int *)(iVar2 + 8));
      uVar6 = 0;
      if (iVar5 != 0) {
        iVar5 = FUN_0048c9f0(*(int *)(iVar2 + 8));
        uVar6 = FUN_005a6130(iVar5);
        if (uVar6 != 4) {
LAB_004e1069:
          return (short)CONCAT31((int3)(uVar6 >> 8),1);
        }
      }
    }
    uVar7 = (ushort)uVar6;
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_004e1080 @ 004e1080 ////

void __thiscall FUN_004e1080(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  
  FUN_004015d0((void *)((int)this + 0x2d4),param_1,param_2);
  *(undefined4 *)((int)this + 0x2f4) = in_stack_00000024;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004e10c0 @ 004e10c0 ////

undefined4 * __thiscall FUN_004e10c0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x2d4),*(uint *)((int)this + 0x2d8));
  return param_1;
}


//// FUNCTION FUN_004e11a0 @ 004e11a0 ////

void __fastcall FUN_004e11a0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d1fc10;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_004e11f0 @ 004e11f0 ////

void __fastcall FUN_004e11f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1fc10;
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


//// FUNCTION FUN_004e12f0 @ 004e12f0 ////

void FUN_004e12f0(void)

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


//// FUNCTION FUN_004e1350 @ 004e1350 ////

int * __fastcall FUN_004e1350(int *param_1)

{
  FUN_004dea90(param_1);
  return param_1;
}


//// FUNCTION FUN_004e1380 @ 004e1380 ////

void __cdecl FUN_004e1380(int *param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 0xb);
    do {
      pcVar1 = (char *)*param_3;
      uVar2 = param_3[1];
      if (puVar6[-9] <= uVar2) {
        if (0x14 < puVar6[-9]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[-9] = uVar4;
        pvVar5 = _malloc(uVar4);
        *param_1 = (int)pvVar5;
      }
      _strncpy((char *)*param_1,pcVar1,uVar2);
      iVar3 = *param_1;
      puVar6[-10] = uVar2;
      *(undefined1 *)(uVar2 + iVar3) = 0;
      puVar6[-3] = param_3[8];
      pcVar1 = (char *)param_3[9];
      uVar2 = param_3[10];
      if (*puVar6 <= uVar2) {
        if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-2]);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        *puVar6 = uVar4;
        pvVar5 = _malloc(uVar4);
        puVar6[-2] = (uint)pvVar5;
      }
      _strncpy((char *)puVar6[-2],pcVar1,uVar2);
      puVar6[-1] = uVar2;
      *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
      puVar6[6] = param_3[0x11];
      param_1 = param_1 + 0x12;
      puVar6 = puVar6 + 0x12;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_004e14b0 @ 004e14b0 ////

void __cdecl FUN_004e14b0(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    *(undefined1 *)(_Count + *param_1) = 0;
    param_1[8] = param_3[8];
    param_1 = param_1 + 9;
  } while( true );
}


//// FUNCTION FUN_004e1550 @ 004e1550 ////

void * FUN_004e1550(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004e1580 @ 004e1580 ////

void * __thiscall FUN_004e1580(void *this,byte param_1)

{
  FUN_004dfc10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e1650 @ 004e1650 ////

void __fastcall FUN_004e1650(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x194) != param_1 + 0x1a0) {
    do {
      piVar1 = *(int **)(param_1 + 0x1a0);
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
    } while (*(int *)(param_1 + 0x194) != param_1 + 0x1a0);
  }
  return;
}


//// FUNCTION FUN_004e16c0 @ 004e16c0 ////

void __thiscall FUN_004e16c0(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint _Count;
  char *_Source;
  void *pvVar3;
  uint _Size;
  int iVar4;
  undefined4 *puVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9c3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e1650((int)this);
  local_18 = 0;
  if (param_2 != 0) {
    local_18 = *(int *)(param_2 + 8);
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 != param_1 + 0x14) {
    piVar2 = (int *)((int)this + 0x1a0);
    do {
      pvVar3 = operator_new(0xc4);
      puVar5 = (undefined4 *)0x0;
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        puVar5 = FUN_0048e160(pvVar3,*(int *)(iVar4 + 8));
      }
      local_4 = 0xffffffff;
      if (param_2 != 0) {
        _Count = *(uint *)(*(int *)(local_18 + 8) + 0x6c);
        _Source = *(char **)(*(int *)(local_18 + 8) + 0x68);
        if ((uint)puVar5[0x25] <= _Count) {
          if (0x14 < (uint)puVar5[0x25]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar5[0x23]);
          }
          _Size = _Count + 0x20 & 0xffffffe0;
          puVar5[0x25] = _Size;
          pvVar3 = _malloc(_Size);
          puVar5[0x23] = pvVar3;
        }
        _strncpy((char *)puVar5[0x23],_Source,_Count);
        puVar5[0x24] = _Count;
        *(undefined1 *)(_Count + puVar5[0x23]) = 0;
      }
      piVar1 = puVar5 + 0x18;
      puVar5[0x19] = piVar2;
      *piVar1 = *piVar2;
      *(int **)(*piVar2 + 4) = piVar1;
      *piVar2 = (int)piVar1;
      if ((param_2 != 0) && (local_18 != param_2 + 0x14)) {
        local_18 = *(int *)(local_18 + 4);
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != param_1 + 0x14);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004e1820 @ 004e1820 ////

undefined4 __thiscall FUN_004e1820(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  
  iVar2 = FUN_005b25c0(*(int *)((int)this + 0xb4));
  iVar4 = *(int *)(param_1 + 0x814);
  iVar3 = FUN_005b2780(*(int *)((int)this + 0xb4));
  if (iVar3 == param_1) {
    iVar4 = 3;
  }
  iVar3 = param_1;
  this_00 = (void *)FUN_005b2220(*(int *)((int)this + 0xb4));
  cVar1 = FUN_005a7190(this_00,iVar3);
  if (cVar1 != '\0') {
    iVar4 = 2;
  }
  switch(iVar4 + -2) {
  case 0:
  case 2:
    break;
  case 1:
    *param_3 = 1;
    *param_2 = 0;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  default:
    *param_3 = 0;
    *param_2 = 0;
    return CONCAT31((int3)((uint)param_3 >> 8),1);
  case 5:
    *param_3 = 2;
    *param_2 = -1;
    iVar4 = *(int *)(iVar2 + 0xa8);
    iVar3 = 0;
    if (iVar4 != *(int *)(iVar2 + 0xac)) {
      do {
        if (*(int *)(iVar4 + 0x14) == param_1) {
          *param_2 = iVar3;
        }
        iVar4 = iVar4 + 0x18;
        iVar3 = iVar3 + 1;
      } while (iVar4 != *(int *)(iVar2 + 0xac));
    }
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  case 6:
    *param_3 = 3;
    *param_2 = -1;
    iVar4 = *(int *)(iVar2 + 0xb8);
    iVar3 = 0;
    if (iVar4 != *(int *)(iVar2 + 0xbc)) {
      do {
        if (*(int *)(iVar4 + 0x14) == param_1) {
          *param_2 = iVar3;
        }
        iVar4 = iVar4 + 0x18;
        iVar3 = iVar3 + 1;
      } while (iVar4 != *(int *)(iVar2 + 0xbc));
    }
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  case 8:
  case 9:
    *param_3 = 6;
    *param_2 = -1;
    iVar4 = *(int *)(iVar2 + 200);
    iVar3 = 0;
    if (iVar4 != *(int *)(iVar2 + 0xcc)) {
      do {
        if (*(int *)(iVar4 + 0x14) == param_1) {
          *param_2 = iVar3;
        }
        iVar4 = iVar4 + 0x18;
        iVar3 = iVar3 + 1;
      } while (iVar4 != *(int *)(iVar2 + 0xcc));
    }
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  case 10:
    *param_3 = 5;
    *param_2 = 0;
    return CONCAT31((int3)((uint)(iVar4 + -2) >> 8),1);
  }
  *param_3 = 0;
  iVar4 = FUN_004e0620(this,param_1);
  if (iVar4 != 0) {
    iVar4 = FUN_0048c720(iVar4);
    *param_2 = iVar4;
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_004e1a10 @ 004e1a10 ////

void __thiscall FUN_004e1a10(void *this,void *param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 != (void *)0x0) &&
     (puVar1 = *(undefined4 **)((int)this + 0xbc), puVar1 != *(undefined4 **)((int)this + 0xc0))) {
    do {
      FUN_009757a0(param_1,(byte *)*puVar1,(float)puVar1[8],0);
      puVar1 = puVar1 + 9;
    } while (puVar1 != *(undefined4 **)((int)this + 0xc0));
  }
  return;
}


//// FUNCTION FUN_004e1a60 @ 004e1a60 ////

void __thiscall FUN_004e1a60(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 != 0) {
    if (*(int *)((int)this + 0x2a0) != (int)this + 0x2ac) {
      do {
        piVar4 = *(int **)((int)this + 0x2a0);
        puVar1 = (undefined4 *)piVar4[2];
        if ((int *)piVar4[1] != (int *)0x0) {
          *(int *)piVar4[1] = *piVar4;
        }
        if (*piVar4 != 0) {
          *(int *)(*piVar4 + 4) = piVar4[1];
        }
        *piVar4 = 0;
        piVar4[1] = 0;
        if (puVar1 != (undefined4 *)0x0) {
          piVar4 = puVar1 + 0x12;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
      } while (*(int *)((int)this + 0x2a0) != (int)this + 0x2ac);
    }
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 != param_2 + 0x14) {
      piVar4 = (int *)((int)this + 0x2ac);
      do {
        puVar1 = FUN_004d6580(*(int *)(iVar3 + 8));
        piVar2 = puVar1 + 0x23;
        puVar1[0x24] = piVar4;
        *piVar2 = *piVar4;
        *(int **)(*piVar4 + 4) = piVar2;
        *piVar4 = (int)piVar2;
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != param_2 + 0x14);
    }
  }
  return;
}


//// FUNCTION FUN_004e1b10 @ 004e1b10 ////

void __thiscall FUN_004e1b10(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  char cVar3;
  int iVar4;
  int iVar5;
  void *this_01;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_18;
  undefined4 local_4;
  
  local_18 = 0;
  if (*(int *)((int)this + 0x1c0) != 4) {
    iVar1 = (int)this + 0x1a0;
    for (iVar2 = *(int *)((int)this + 0x194); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 4)) {
      iVar5 = *(int *)(iVar2 + 8);
      iVar4 = FUN_0048c9f0(iVar5);
      if (iVar4 != 0) {
        iVar4 = FUN_0048c9f0(iVar5);
        iVar4 = FUN_005a6130(iVar4);
        if (iVar4 == 0) {
          iVar5 = FUN_0048c9f0(iVar5);
          iVar5 = FUN_005a6470(iVar5);
          if (iVar5 == 0) {
            local_18 = local_18 + 1;
          }
        }
      }
    }
    this_01 = (void *)FUN_005b2220(*(int *)((int)this + 0xb4));
    for (iVar2 = *(int *)((int)this + 0x194); iVar2 != iVar1; iVar2 = *(int *)(iVar2 + 4)) {
      this_00 = *(void **)(iVar2 + 8);
      iVar5 = FUN_0048c9f0((int)this_00);
      if ((iVar5 == 0) && (cVar3 = FUN_0048c730((int)this_00), cVar3 != '\0')) {
        if (((-1 < param_1) && (param_1 <= local_18)) ||
           (pfVar6 = (float *)FUN_0048c9e0(this_00,&local_4), 0.0 < *pfVar6)) {
          puVar8 = *(undefined4 **)(*(int *)((int)this + 0xb4) + 0x154);
        }
        else {
          iVar5 = *(int *)((int)this_01 + 100);
          if (iVar5 != *(int *)((int)this_01 + 0x68)) {
            do {
              puVar8 = *(undefined4 **)(iVar5 + 0x14);
              if (((puVar8 != (undefined4 *)0x0) && (iVar4 = FUN_005a6130((int)puVar8), iVar4 == 0))
                 && (iVar4 = FUN_005a6470((int)puVar8), iVar4 == 0)) {
                iVar4 = *(int *)((int)this + 0x194);
                while( true ) {
                  if (iVar4 == iVar1) goto LAB_004e1c80;
                  puVar7 = (undefined4 *)FUN_0048c9f0(*(int *)(iVar4 + 8));
                  if (puVar7 == puVar8) break;
                  iVar4 = *(int *)(iVar4 + 4);
                }
              }
              iVar5 = iVar5 + 0x18;
            } while (iVar5 != *(int *)((int)this_01 + 0x68));
          }
          puVar8 = FUN_005a90f0(this_01,0,0);
        }
LAB_004e1c80:
        FUN_0048dfe0(this_00,(int)puVar8);
        local_18 = local_18 + 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_004e1cb0 @ 004e1cb0 ////

/* WARNING: Removing unreachable block (ram,0x004e2123) */

uint __thiscall FUN_004e1cb0(void *this,wchar_t *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float fStack_25c;
  char *pcStack_258;
  undefined4 uStack_254;
  uint uStack_250;
  char acStack_24c [20];
  float fStack_238;
  void *local_234;
  char *pcStack_230;
  undefined4 uStack_22c;
  uint uStack_228;
  char acStack_224 [20];
  char *pcStack_210;
  undefined4 uStack_20c;
  uint uStack_208;
  char acStack_204 [20];
  char *pcStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  char acStack_1e4 [20];
  char *pcStack_1d0;
  undefined4 uStack_1cc;
  uint uStack_1c8;
  char acStack_1c4 [20];
  char *pcStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  char acStack_1a4 [20];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  void *local_184 [2];
  uint uStack_17c;
  void *apvStack_164 [2];
  uint uStack_15c;
  undefined4 auStack_124 [54];
  char acStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca9cbb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_234 = this;
  uVar3 = FUN_009d36d0(&param_1,(uint *)0x0);
  if ((char)uVar3 == '\0') {
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    if (*(int *)((int)this + 0x2a0) != (int)this + 0x2ac) {
      do {
        piVar6 = *(int **)((int)this + 0x2a0);
        puVar7 = (undefined4 *)piVar6[2];
        if ((int *)piVar6[1] != (int *)0x0) {
          *(int *)piVar6[1] = *piVar6;
        }
        if (*piVar6 != 0) {
          *(int *)(*piVar6 + 4) = piVar6[1];
        }
        *piVar6 = 0;
        piVar6[1] = 0;
        if (puVar7 != (undefined4 *)0x0) {
          piVar6 = puVar7 + 0x12;
          *piVar6 = *piVar6 + -1;
          if (*piVar6 == 0) {
            (**(code **)*puVar7)(1);
          }
        }
      } while (*(int *)((int)this + 0x2a0) != (int)this + 0x2ac);
    }
    iVar9 = 0;
    FUN_009ad040(local_184,param_1);
    local_4._0_1_ = 1;
    FUN_0055c870(auStack_124,'\x01',local_184,0);
    local_4._0_1_ = 2;
    FUN_0055bd40(auStack_124,local_184);
    pcStack_258 = acStack_24c;
    acStack_24c[0] = '\0';
    uStack_254 = 0;
    uStack_250 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,3);
    sVar4 = _sprintf((char *)apvStack_164,(char *)&param_2_00d1b93c,0);
    FUN_004073f0(&pcStack_258,(char *)apvStack_164,sVar4);
    uVar5 = FUN_00558a50(auStack_124,&pcStack_258,(undefined4 *)0x0);
    cVar2 = (char)uVar5;
    while (cVar2 != '\0') {
      pcStack_1f0 = acStack_1e4;
      acStack_1e4[0] = '\0';
      uStack_1ec = 0;
      uStack_1e8 = 0x14;
      _strncpy(pcStack_1f0,"name",4);
      uStack_1ec = 4;
      pcStack_1f0[4] = '\0';
      local_4._0_1_ = 4;
      FUN_005584e0(auStack_124,apvStack_164,&pcStack_1f0);
      if (0x14 < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1f0);
      }
      pcStack_230 = acStack_224;
      acStack_224[0] = '\0';
      uStack_22c = 0;
      uStack_228 = 0x14;
      _strncpy(pcStack_230,"angle",5);
      uStack_22c = 5;
      pcStack_230[5] = '\0';
      local_4._0_1_ = 7;
      fVar10 = FUN_00558610(auStack_124,&pcStack_230,0.0);
      fStack_238 = (float)fVar10;
      if (0x14 < uStack_228) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_230);
      }
      pcStack_1b0 = acStack_1a4;
      acStack_1a4[0] = '\0';
      uStack_1ac = 0;
      uStack_1a8 = 0x14;
      _strncpy(pcStack_1b0,"position.x",10);
      uStack_1ac = 10;
      pcStack_1b0[10] = '\0';
      local_4._0_1_ = 8;
      fVar10 = FUN_00558610(auStack_124,&pcStack_1b0,0.0);
      fStack_190 = (float)fVar10;
      if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b0);
      }
      pcStack_1d0 = acStack_1c4;
      acStack_1c4[0] = '\0';
      uStack_1cc = 0;
      uStack_1c8 = 0x14;
      _strncpy(pcStack_1d0,"position.y",10);
      uStack_1cc = 10;
      pcStack_1d0[10] = '\0';
      local_4._0_1_ = 9;
      fVar10 = FUN_00558610(auStack_124,&pcStack_1d0,0.0);
      fStack_18c = (float)fVar10;
      if (0x14 < uStack_1c8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1d0);
      }
      pcStack_210 = acStack_204;
      acStack_204[0] = '\0';
      uStack_20c = 0;
      uStack_208 = 0x14;
      _strncpy(pcStack_210,"position.z",10);
      uStack_20c = 10;
      pcStack_210[10] = '\0';
      local_4._0_1_ = 10;
      fVar10 = FUN_00558610(auStack_124,&pcStack_210,0.0);
      fStack_188 = (float)fVar10;
      local_4 = CONCAT31(local_4._1_3_,6);
      if (0x14 < uStack_208) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_210);
      }
      bVar1 = FUN_00430950(apvStack_164,"");
      if (((bVar1) && (piVar6 = (int *)thunk_FUN_009623a0(apvStack_164), piVar6 != (int *)0x0)) &&
         (cVar2 = FUN_00960f30(piVar6), cVar2 != '\0')) {
        puVar7 = FUN_0095e370(piVar6);
        fVar10 = FUN_004012c0(fStack_238);
        fStack_25c = (float)fVar10;
        FUN_004d5440(puVar7,&fStack_190,&fStack_25c);
        piVar6 = puVar7 + 0x23;
        piVar8 = (int *)((int)local_234 + 0x2ac);
        puVar7[0x24] = piVar8;
        *piVar6 = *piVar8;
        *(int **)(*piVar8 + 4) = piVar6;
        *piVar8 = (int)piVar6;
      }
      iVar9 = iVar9 + 1;
      if (uStack_250 == 0) {
        uStack_250 = 0x20;
        pcStack_258 = _malloc(0x20);
      }
      _strncpy(pcStack_258,"",0);
      uStack_254 = 0;
      *pcStack_258 = '\0';
      sVar4 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,iVar9);
      FUN_004073f0(&pcStack_258,acStack_4c,sVar4);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_164[0]);
      }
      uVar5 = FUN_00558a50(auStack_124,&pcStack_258,(undefined4 *)0x0);
      cVar2 = (char)uVar5;
    }
    if (0x14 < uStack_250) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_258);
    }
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = FUN_00558920(auStack_124);
    if (0x14 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184[0]);
    }
    if (10 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar3 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar3;
}


//// FUNCTION FUN_004e2240 @ 004e2240 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004e2240(float param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  void *this;
  float *pfVar6;
  float10 fVar7;
  int iVar8;
  char **ppcVar9;
  float local_11c;
  char *local_118;
  undefined4 local_114;
  uint local_110;
  char local_10c [20];
  float local_f8;
  char *local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9d3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_f8 = param_1;
  uVar2 = FUN_0051ff70(2);
  if ((char)uVar2 == '\0') {
    if ((DAT_0104ada4 & 1) == 0) {
      DAT_0104ada4 = DAT_0104ada4 | 1;
      _DAT_0104ada0 = 0.0;
    }
    if ((DAT_0104ada4 & 2) == 0) {
      DAT_0104ada4 = DAT_0104ada4 | 2;
      DAT_0104ad9c = 0.0;
    }
    if ((DAT_0104ada4 & 4) == 0) {
      DAT_0104ada4 = DAT_0104ada4 | 4;
      DAT_0104ad98 = 0.0;
    }
    if ((DAT_0104ada4 & 8) == 0) {
      DAT_0104ada4 = DAT_0104ada4 | 8;
      DAT_0104ad94 = 0.0;
    }
    if ((DAT_0104ada4 & 0x10) == 0) {
      DAT_0104ada4 = DAT_0104ada4 | 0x10;
      DAT_0104ad90 = 0.0;
    }
    if (DAT_0104ad8c == '\0') {
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x14;
      _strncpy(local_118,"stunts",6);
      local_114 = 6;
      local_118[6] = '\0';
      local_4 = 0;
      FUN_0055c540(local_e4,&local_118);
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x14;
      _strncpy(local_118,"injuries",8);
      local_114 = 8;
      local_118[8] = '\0';
      local_4._0_1_ = 3;
      FUN_00558a50(local_e4,&local_118,(undefined4 *)0x1);
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x20;
      local_118 = _malloc(0x20);
      _strncpy(local_118,"stuntdamageskillmultiplier",0x1a);
      local_114 = 0x1a;
      local_118[0x1a] = '\0';
      local_4._0_1_ = 4;
      fVar7 = FUN_00558610(local_e4,&local_118,0.0);
      FUN_00407070(&local_11c,(float)fVar7);
      _DAT_0104ada0 = local_11c;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x20;
      local_118 = _malloc(0x20);
      _strncpy(local_118,"maxhealthlossstuntfailure",0x19);
      local_114 = 0x19;
      local_118[0x19] = '\0';
      local_4._0_1_ = 5;
      fVar7 = FUN_00558610(local_e4,&local_118,0.0);
      FUN_00407070(&local_11c,(float)fVar7);
      DAT_0104ad9c = local_11c;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x20;
      local_118 = _malloc(0x20);
      _strncpy(local_118,"minhealthlossstuntfailure",0x19);
      local_114 = 0x19;
      local_118[0x19] = '\0';
      local_4._0_1_ = 6;
      fVar7 = FUN_00558610(local_e4,&local_118,0.0);
      FUN_00407070(&local_11c,(float)fVar7);
      DAT_0104ad98 = local_11c;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x20;
      local_118 = _malloc(0x20);
      _strncpy(local_118,"maxhealthlossstuntsuccess",0x19);
      local_114 = 0x19;
      local_118[0x19] = '\0';
      local_4._0_1_ = 7;
      fVar7 = FUN_00558610(local_e4,&local_118,0.0);
      FUN_00407070(&local_11c,(float)fVar7);
      DAT_0104ad94 = local_11c;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x20;
      local_118 = _malloc(0x20);
      _strncpy(local_118,"minhealthlossstuntsuccess",0x19);
      local_114 = 0x19;
      local_118[0x19] = '\0';
      local_4 = CONCAT31(local_4._1_3_,8);
      fVar7 = FUN_00558610(local_e4,&local_118,0.0);
      FUN_00407070(&local_11c,(float)fVar7);
      DAT_0104ad90 = local_11c;
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      DAT_0104ad8c = '\x01';
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      param_1 = local_f8;
    }
    uVar1 = FUN_004e0fd0(param_1);
    if ((char)uVar1 != '\0') {
      FUN_004b58b0(*(void **)((int)param_1 + 0x1d8),&local_ec);
      iVar8 = *(int *)((int)param_1 + 0x194);
      if (iVar8 != (int)local_f8 + 0x1a0) {
        do {
          pfVar3 = (float *)FUN_0048c9e0(*(void **)(iVar8 + 8),&local_e8);
          if ((0.0 < *pfVar3) && (iVar4 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar4 != 0)) {
            iVar4 = FUN_0048c9f0(*(int *)(iVar8 + 8));
            iVar4 = FUN_005a64e0(iVar4);
            if (iVar4 == 0) {
              iVar4 = FUN_0048c9f0(*(int *)(iVar8 + 8));
              piVar5 = (int *)FUN_005a6470(iVar4);
            }
            else {
              iVar4 = FUN_0048c9f0(*(int *)(iVar8 + 8));
              piVar5 = (int *)FUN_005a64e0(iVar4);
            }
            if (piVar5 != (int *)0x0) {
              local_118 = local_10c;
              local_10c[0] = '\0';
              local_114 = 0;
              local_110 = 0x14;
              _strncpy(local_118,"Stunts",6);
              local_114 = 6;
              local_118[6] = '\0';
              ppcVar9 = &local_118;
              pfVar3 = &local_11c;
              local_4 = 9;
              this = (void *)FUN_00577370((int)piVar5);
              FUN_00441750(this,pfVar3,ppcVar9);
              local_4 = 0xffffffff;
              if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
                _free(local_118);
              }
              fVar7 = FUN_004728e0((float *)&DAT_0104ada0,local_11c);
              fVar7 = FUN_0042aa00(&local_ec,(float)fVar7);
              FUN_00407070(&local_f0,(float)fVar7);
              pfVar3 = &DAT_0104ad9c;
              if (*(char *)((int)local_f8 + 0xf0) == '\0') {
                pfVar3 = &DAT_0104ad94;
                pfVar6 = &DAT_0104ad90;
              }
              else {
                pfVar6 = &DAT_0104ad98;
              }
              FUN_00407070(&local_f4,(*pfVar3 - *pfVar6) * local_f0 + *pfVar6);
              (**(code **)(*piVar5 + 0x1e8))(-(float)local_f4);
            }
          }
          iVar8 = *(int *)(iVar8 + 4);
        } while (iVar8 != (int)local_f8 + 0x1a0);
      }
      if ((DAT_0104a974 == 0) ||
         (*(float *)(DAT_0104a974 + 0x6c) < 0.0 != (*(float *)(DAT_0104a974 + 0x6c) == 0.0))) {
        local_f4 = "TANNOY_STUNT_SCENE_FAILURE";
        if (*(char *)((int)local_f8 + 0xf0) == '\0') {
          local_f4 = "TANNOY_STUNT_SCENE_SUCCESS";
        }
        FUN_0048f010(&local_f4,&local_118);
        iVar4 = 2;
        ppcVar9 = &local_118;
        iVar8 = 2;
        local_4 = 10;
        FUN_004f3b20();
        FUN_004f8a00(iVar8,ppcVar9,iVar4);
        if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
          _free(local_118);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004e2890 @ 004e2890 ////

undefined4 * FUN_004e2890(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004e28c0 @ 004e28c0 ////

void __fastcall FUN_004e28c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e12f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004e2950 @ 004e2950 ////

void * __cdecl FUN_004e2950(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_004dfa10(param_3,param_1);
    }
    param_1 = param_1 + 0x12;
    param_3 = (void *)((int)param_3 + 0x48);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004e2990 @ 004e2990 ////

int * __cdecl FUN_004e2990(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined1 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 0x14;
      _Count = param_1[1];
      _Source = (char *)*param_1;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_3[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_3 = (int)pvVar1;
      }
      _strncpy((char *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined1 *)(_Count + *param_3) = 0;
      param_3[8] = param_1[8];
    }
    param_1 = param_1 + 9;
    param_3 = param_3 + 9;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004e2a20 @ 004e2a20 ////

void * __cdecl FUN_004e2a20(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_004dfa10(param_3,param_1);
    }
    param_1 = param_1 + 0x12;
    param_3 = (void *)((int)param_3 + 0x48);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004e2a60 @ 004e2a60 ////

int __thiscall FUN_004e2a60(void *this,int param_1)

{
  return param_1 * 0x20 + *(int *)((int)this + 0x28c);
}


//// FUNCTION FUN_004e2a80 @ 004e2a80 ////

void __thiscall FUN_004e2a80(void *this,int param_1,undefined4 *param_2)

{
  if (param_1 < *(int *)((int)this + 0x284)) {
    FUN_004015d0((void *)(param_1 * 0x20 + *(int *)((int)this + 0x28c)),(char *)*param_2,param_2[1])
    ;
  }
  return;
}


//// FUNCTION FUN_004e2ab0 @ 004e2ab0 ////

int __fastcall FUN_004e2ab0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e12f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004e2af0 @ 004e2af0 ////

void __cdecl FUN_004e2af0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_004dfa10(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x48);
  }
  return;
}


//// FUNCTION FUN_004e2b20 @ 004e2b20 ////

void __cdecl FUN_004e2b20(int *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      _Count = param_3[1];
      _Source = (char *)*param_3;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_1 = (int)pvVar1;
      }
      _strncpy((char *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined1 *)(_Count + *param_1) = 0;
      param_1[8] = param_3[8];
    }
    param_1 = param_1 + 9;
  }
  return;
}


//// FUNCTION FUN_004e2ca0 @ 004e2ca0 ////

void FUN_004e2ca0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_004e2ca0(*(void **)((int)param_1 + 8));
    FUN_004dfc10((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004e2d70 @ 004e2d70 ////

void FUN_004e2d70(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  FUN_004e2950(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_004e2d90 @ 004e2d90 ////

void __cdecl FUN_004e2d90(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_004df280(param_1);
  }
  return;
}


//// FUNCTION FUN_004e2e00 @ 004e2e00 ////

void * FUN_004e2e00(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_004e2af0(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0x48);
}


//// FUNCTION FUN_004e2e30 @ 004e2e30 ////

int * FUN_004e2e30(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_004e2b20(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_004e2e60 @ 004e2e60 ////

void FUN_004e2e60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    FUN_004df2d0(param_1);
  }
  return;
}


//// FUNCTION FUN_004e2e90 @ 004e2e90 ////

void FUN_004e2e90(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_004df280(param_1);
  }
  return;
}


//// FUNCTION FUN_004e2ec0 @ 004e2ec0 ////

void __thiscall FUN_004e2ec0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca9d58;
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
  FUN_004dea90((int *)&param_2);
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
      goto LAB_004e3031;
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
      piVar2 = (int *)FUN_004de9d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_004de9b0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_004e3031:
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
            FUN_004de950(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_004de9f0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_004de950(this,(int)piVar5);
              break;
            }
LAB_004e30f4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_004de9f0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_004e30f4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_004de950(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_004de9f0(this,piVar5);
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


//// FUNCTION FUN_004e3190 @ 004e3190 ////

void __fastcall FUN_004e3190(int param_1)

{
  FUN_004e2ca0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004e31c0 @ 004e31c0 ////

void FUN_004e31c0(void)

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
  puStack_8 = &LAB_00ca9d78;
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


//// FUNCTION FUN_004e3230 @ 004e3230 ////

void __fastcall FUN_004e3230(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x12) {
    FUN_004df2d0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004e3280 @ 004e3280 ////

void __fastcall FUN_004e3280(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_004df280(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004e32d0 @ 004e32d0 ////

void FUN_004e32d0(void)

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
  puStack_8 = &LAB_00ca9d98;
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


//// FUNCTION FUN_004e3340 @ 004e3340 ////

void __thiscall FUN_004e3340(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 != param_3) {
    piVar2 = FUN_004dfd50(param_3,*(undefined4 **)((int)this + 8),param_2);
    piVar1 = *(int **)((int)this + 8);
    for (piVar3 = piVar2; piVar3 != piVar1; piVar3 = piVar3 + 9) {
      FUN_004df280(piVar3);
    }
    *(int **)((int)this + 8) = piVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_004e33a0 @ 004e33a0 ////

void FUN_004e33a0(void)

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
  puStack_8 = &LAB_00ca9db8;
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


//// FUNCTION FUN_004e3410 @ 004e3410 ////

void FUN_004e3410(void)

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
  puStack_8 = &LAB_00ca9dd8;
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


//// FUNCTION FUN_004e3480 @ 004e3480 ////

void __thiscall FUN_004e3480(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004e2ca0((void *)piVar6[1]);
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
    FUN_004e2ec0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_004e3540 @ 004e3540 ////

void __thiscall FUN_004e3540(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004e31c0();
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
      _Dst = FUN_004e2890((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_004e1550(param_1,iVar5,param_1 + param_2);
      FUN_004e2890(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004deb60(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_004e1550(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004dfb60(param_1,(int)pvVar3,iVar5);
    FUN_004deb60(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004e3730 @ 004e3730 ////

void __thiscall FUN_004e3730(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x284) = param_1;
  if (*(undefined4 **)((int)this + 0x28c) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)((int)this + 0x28c),*(undefined4 **)((int)this + 0x290));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28c));
  }
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  return;
}


//// FUNCTION FUN_004e3790 @ 004e3790 ////

void __fastcall FUN_004e3790(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_004df280(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004e37b0 @ 004e37b0 ////

void __fastcall FUN_004e37b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1fd00;
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


//// FUNCTION FUN_004e3800 @ 004e3800 ////

undefined4 * __thiscall FUN_004e3800(void *this,byte param_1)

{
  FUN_004e37b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e3820 @ 004e3820 ////

undefined4 __thiscall FUN_004e3820(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x38e38e3 < param_1) {
    param_1 = FUN_004e32d0();
  }
  pvVar1 = operator_new(param_1 * 0x48);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 0x48 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_004e3990 @ 004e3990 ////

void __thiscall FUN_004e3990(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  void *local_64 [2];
  uint local_5c;
  void *local_40;
  uint local_38;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca9df8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004dfa10(local_64,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x48;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x48;
    }
    if (0x38e38e3U - iVar2 < param_2) {
      FUN_004e32d0();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x48;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x38e38e3 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x48;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_004de570((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x48);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_004e2950(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_004e2af0(pvVar5,param_2,local_64);
      FUN_004e2950(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x48));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x48;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004e2e60(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x48 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((int)pvVar4 + (param_2 + iVar3) * 0x48);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      piVar1 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar1 - (int)param_1) / 0x48) < param_2) {
        FUN_004e2950(param_1,piVar1,param_1 + param_2 * 0x12);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004e2e00(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x48,local_64);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x48;
        *(int *)((int)this + 8) = iVar3;
        FUN_004e1380(param_1,(int *)(iVar3 + param_2 * -0x48),local_64);
      }
      else {
        pvVar4 = FUN_004e2950(piVar1 + param_2 * -0x12,piVar1,piVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_004dfc50((int)param_1,(int)(piVar1 + param_2 * -0x12),piVar1);
        FUN_004e1380(param_1,param_1 + param_2 * 0x12,local_64);
      }
    }
  }
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0x14 < local_5c) {
                    /* WARNING: Subroutine does not return */
    _free(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004e3ca0 @ 004e3ca0 ////

void __thiscall FUN_004e3ca0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [20];
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca9e18;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_40,(char *)*param_3,param_3[1]);
  local_20 = param_3[8];
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x24;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (0x71c71c7U - iVar1 < param_2) {
      FUN_004e33a0();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x71c71c7 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x24;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_004de3b0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_004e2990(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_004e2b20(piVar4,param_2,&local_40);
      FUN_004e2990(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004e2e90(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 9;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 9;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x24) < param_2) {
        FUN_004e2990(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004e2e30(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_004e14b0(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_004e2990(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_004dfdd0((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_004e14b0(param_1,param_1 + param_2 * 9,&local_40);
      }
    }
  }
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004e3fc0 @ 004e3fc0 ////

int __thiscall FUN_004e3fc0(void *this,int param_1)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca9e30;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x38e38e3 < uVar1) {
      uVar1 = FUN_004e32d0();
    }
    pvVar2 = operator_new(uVar1 * 0x48);
    *(void **)((int)this + 4) = pvVar2;
    *(void **)((int)this + 8) = pvVar2;
    *(void **)((int)this + 0xc) = (void *)(uVar1 * 0x48 + (int)pvVar2);
    local_8 = 0;
    pvVar2 = FUN_004e2a20(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),pvVar2);
    *(void **)((int)this + 8) = pvVar2;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_004e4090 @ 004e4090 ////

void * __thiscall FUN_004e4090(void *this,void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  if (this == param_1) {
    return this;
  }
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    iVar7 = *(int *)((int)param_1 + 8) - (int)puVar1;
    iVar4 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 0x48 + iVar4;
    uVar8 = iVar7 - iVar4;
    if (iVar7 != iVar4) {
      piVar3 = *(int **)((int)this + 4);
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 8) - (int)piVar3) / 0x48;
      }
      if (uVar8 <= uVar2) {
        piVar3 = FUN_004dfe80(puVar1,*(undefined4 **)((int)param_1 + 8),piVar3);
        FUN_004e2e60(piVar3,*(undefined4 **)((int)this + 8));
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             ((*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x48) * 0x48;
        return this;
      }
      if (piVar3 == (int *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*(int *)((int)this + 0xc) - (int)piVar3) / 0x48;
      }
      if (uVar2 < uVar8) {
        if (piVar3 != (int *)0x0) {
          FUN_004e2e60(piVar3,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 4));
        }
        uVar8 = FUN_004de570((int)param_1);
        uVar6 = FUN_004e3820(this,uVar8);
        if ((char)uVar6 == '\0') {
          return this;
        }
        uVar6 = FUN_004e2d70(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(void **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar6;
        return this;
      }
      iVar4 = FUN_004de570((int)this);
      FUN_004dfe80(puVar1,puVar1 + iVar4 * 0x12,piVar3);
      pvVar5 = FUN_004e2950(puVar1 + iVar4 * 0x12,*(undefined4 **)((int)param_1 + 8),
                            *(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar5;
      return this;
    }
  }
  FUN_004e3230((int)this);
  return this;
}


//// FUNCTION FUN_004e4220 @ 004e4220 ////

void __fastcall FUN_004e4220(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca9f5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1fd2c;
  param_1[0x19] = &PTR_LAB_00d1fd0c;
  puVar1 = (undefined4 *)param_1[0x92];
  local_4 = 0x12;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(param_1[0x8d] + 4))();
    param_1[0x92] = 0;
    (**(code **)param_1[0x8d])();
  }
  FUN_004e1650((int)param_1);
  if ((undefined4 *)param_1[0xa8] != param_1 + 0xab) {
    do {
      piVar2 = (int *)param_1[0xa8];
      puVar1 = (undefined4 *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = puVar1 + 0x12;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar1)(1);
        }
      }
    } while ((undefined4 *)param_1[0xa8] != param_1 + 0xab);
  }
  puVar1 = (undefined4 *)param_1[0x76];
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  if (0x14 < (uint)param_1[0xb7]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xb5]);
  }
  FUN_004e37b0(param_1 + 0xa6);
  if ((undefined4 *)param_1[0xa3] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0xa3],(undefined4 *)param_1[0xa4]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa3]);
  }
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0x93] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x95] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x95] = param_1[0x94];
  }
  if (param_1[0x94] != 0) {
    *(undefined4 *)(param_1[0x94] + 4) = param_1[0x95];
  }
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x98] = 0;
  if ((undefined4 *)param_1[0x95] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x95] = param_1[0x94];
  }
  if (param_1[0x94] != 0) {
    *(undefined4 *)(param_1[0x94] + 4) = param_1[0x95];
  }
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x8d] = &PTR_LAB_00d1fc10;
  if ((undefined4 *)param_1[0x8f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8f] = param_1[0x8e];
  }
  if (param_1[0x8e] != 0) {
    *(undefined4 *)(param_1[0x8e] + 4) = param_1[0x8f];
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  if ((undefined4 *)param_1[0x8f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x8f] = param_1[0x8e];
  }
  if (param_1[0x8e] != 0) {
    *(undefined4 *)(param_1[0x8e] + 4) = param_1[0x8f];
  }
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  if (0x14 < (uint)param_1[0x87]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x85]);
  }
  param_1[0x7f] = &PTR_LAB_00d1e3c4;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x84] = 0;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x81] = param_1[0x80];
  }
  if (param_1[0x80] != 0) {
    *(undefined4 *)(param_1[0x80] + 4) = param_1[0x81];
  }
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  if (0x14 < (uint)param_1[0x79]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x77]);
  }
  param_1[0x71] = &PTR_FUN_00d1e3d4;
  if ((undefined4 *)param_1[0x73] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x73] = param_1[0x72];
  }
  if (param_1[0x72] != 0) {
    *(undefined4 *)(param_1[0x72] + 4) = param_1[0x73];
  }
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  if ((undefined4 *)param_1[0x73] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x73] = param_1[0x72];
  }
  if (param_1[0x72] != 0) {
    *(undefined4 *)(param_1[0x72] + 4) = param_1[0x73];
  }
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_004b8310(param_1 + 99);
  if (0x14 < (uint)param_1[0x5d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x5b]);
  }
  param_1[0x52] = &PTR_LAB_00d1f05c;
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
  if (0x14 < (uint)param_1[0x4b]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x49]);
  }
  if (0x14 < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x40]);
  }
  FUN_004e3280((int)(param_1 + 0x2e));
  param_1[0x28] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004e46f0 @ 004e46f0 ////

void __fastcall FUN_004e46f0(undefined4 *param_1)

{
  FUN_004e3230((int)(param_1 + 9));
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004e4770 @ 004e4770 ////

void __thiscall FUN_004e4770(void *this,undefined4 *param_1)

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
  FUN_004e3540(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_004e47c0 @ 004e47c0 ////

void __thiscall FUN_004e47c0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x48 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x48;
      goto LAB_004e4805;
    }
  }
  iVar1 = 0;
LAB_004e4805:
  FUN_004e3990(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x48;
  return;
}


//// FUNCTION FUN_004e4830 @ 004e4830 ////

void __thiscall FUN_004e4830(void *this,uint param_1,void *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca9f78;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x24;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x24;
    }
    ExceptionList = &local_c;
    FUN_004e3ca0(this,*(int **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else {
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      ExceptionList = &local_c;
      if (param_1 < (uint)(((int)*(int **)((int)this + 8) - iVar2) / 0x24)) {
        ExceptionList = &local_c;
        FUN_004e3340(this,&param_1,(int *)(iVar2 + param_1 * 0x24),*(int **)((int)this + 8));
      }
    }
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004e4910 @ 004e4910 ////

void __thiscall FUN_004e4910(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_004e4955;
    }
  }
  iVar1 = 0;
LAB_004e4955:
  FUN_004e3ca0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_004e4980 @ 004e4980 ////

undefined4 * __thiscall FUN_004e4980(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca9f98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  FUN_004e3fc0((void *)((int)this + 0x24),(int)(param_1 + 9));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004e4a30 @ 004e4a30 ////

int * __cdecl FUN_004e4a30(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    _Count = *(uint *)(param_2 + -0x30);
    _Source = *(char **)(param_2 + -0x34);
    iVar3 = param_2 + -0x34;
    piVar2 = param_3 + -0xd;
    if ((uint)param_3[-0xb] <= _Count) {
      if (0x14 < (uint)param_3[-0xb]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-0xb] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar2 = (int)pvVar1;
    }
    _strncpy((char *)*piVar2,_Source,_Count);
    param_3[-0xc] = _Count;
    *(undefined1 *)(_Count + *piVar2) = 0;
    param_3[-5] = *(int *)(param_2 + -0x14);
    FUN_004e4090(param_3 + -4,(void *)(param_2 + -0x10));
    param_3 = piVar2;
    param_2 = iVar3;
  } while (iVar3 != param_1);
  return piVar2;
}


//// FUNCTION FUN_004e4ac0 @ 004e4ac0 ////

void __cdecl FUN_004e4ac0(void *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca9fc1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004e4980(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004e4b10 @ 004e4b10 ////

undefined4 * __thiscall FUN_004e4b10(void *this,byte param_1)

{
  FUN_004e46f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e4b30 @ 004e4b30 ////

void __fastcall FUN_004e4b30(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_004e3480(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_004e4b60 @ 004e4b60 ////

undefined4 * __thiscall FUN_004e4b60(void *this,byte param_1)

{
  FUN_004e4220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004e4b80 @ 004e4b80 ////

void __fastcall FUN_004e4b80(undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_004e4bd0 @ 004e4bd0 ////

void __thiscall FUN_004e4bd0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x48) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x48))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_004e2af0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x48;
    return;
  }
  FUN_004e47c0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004e4c60 @ 004e4c60 ////

void __thiscall FUN_004e4c60(void *this,uint param_1)

{
  undefined1 local_1c [24];
  undefined1 *local_4;
  
  local_4 = &stack0xffffffd8;
  local_1c[0] = 0;
  FUN_004e4830(this,param_1,local_1c,0,0x14);
  return;
}


//// FUNCTION FUN_004e4c90 @ 004e4c90 ////

void __thiscall FUN_004e4c90(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_004e2b20(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_004e4910(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004e4d20 @ 004e4d20 ////

int __fastcall FUN_004e4d20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004e12f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004e4d50 @ 004e4d50 ////

void __cdecl FUN_004e4d50(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    *(undefined1 *)(_Count + *param_1) = 0;
    param_1[8] = param_3[8];
    FUN_004e4090(param_1 + 9,param_3 + 9);
    param_1 = param_1 + 0xd;
  } while( true );
}


//// FUNCTION FUN_004e4e20 @ 004e4e20 ////

int __fastcall FUN_004e4e20(int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00caa011;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined2 **)(param_1 + 0xc) = (undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 10;
  *(undefined2 **)(param_1 + 0x2c) = (undefined2 *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 10;
  local_4 = 1;
  uStack_3 = 0;
  iVar1 = FUN_004e12f0();
  *(int *)(param_1 + 0x50) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 0x50) + 4) = *(int *)(param_1 + 0x50);
  *(undefined4 *)*(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(int *)(*(int *)(param_1 + 0x50) + 8) = *(int *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = 0;
  _local_4 = CONCAT31(uStack_3,2);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_00756c10(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_004e4ec0 @ 004e4ec0 ////

void __fastcall FUN_004e4ec0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *local_38;
  uint local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa1e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x57;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x3c));
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
    FUN_00990970((int *)(param_1 + 0x3c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x58;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("SnapSceneSis");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x108));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x59;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("SL_SceneName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x178));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x198));
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
  uVar3 = FUN_0098b490("SL_PSet");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x198));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("SL_SetName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x1b0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5c;
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
  uVar3 = FUN_0098b490("(int&)(Status)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x15c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x128));
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
  uVar3 = FUN_0098b490("Parts");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x128);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5e;
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
  uVar3 = FUN_0098b490("WaitForMe");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x38),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x5f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 8;
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
  uVar3 = FUN_0098b490("NumCameramen");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x21c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x60;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 9;
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
  uVar3 = FUN_0098b490("NumSoundmen");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x61;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 10;
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
  uVar3 = FUN_0098b490("NumRunners");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x214),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x62;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xb;
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
  uVar3 = FUN_0098b490("NumClappermen");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x218),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 99;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xc;
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
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x200));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 100;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xd;
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
  uVar3 = FUN_0098b490("BackdropName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x9c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x65;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xe;
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
  uVar3 = FUN_0098b490("IndexLightMapTrailer");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xbc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x66;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0xf;
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
  uVar3 = FUN_0098b490((char *)&PTR_DAT_00d1ffc4);
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x204));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x67;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x10;
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
  uVar3 = FUN_0098b490("Violence");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x208));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x68;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x11;
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
  uVar3 = FUN_0098b490("Realism");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x20c));
  }
  uVar3 = FUN_0098b490("Sliders");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x58) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x24);
      }
      FUN_0098a3a0(&local_30);
      local_34 = 0;
      for (local_38 = (undefined1 *)0x0;
          (*(int *)(param_1 + 0x58) != 0 &&
          (local_38 < (undefined1 *)((*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58)) / 0x24)))
          ; local_38 = local_38 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar5;
          DAT_010581d4 = 0x69;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0x12;
          pcVar2 = (char *)FUN_00ace33d(0xe51ba8);
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
        uVar3 = FUN_0098b490("Sliders[x]");
        if ((char)uVar3 != '\0') {
          puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + local_34);
          FUN_0098c550(puVar6);
          FUN_0098a430(puVar6 + 8,4);
        }
        local_34 = local_34 + 0x24;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      FUN_004e3280(param_1 + 0x54);
      SLVAR_LoadUint(&local_38);
      FUN_004e4c60((void *)(param_1 + 0x54),(uint)local_38);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar5;
            DAT_010581d4 = 0x69;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0x13;
            pcVar2 = (char *)FUN_00ace33d(0xe51ba8);
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
          uVar3 = FUN_0098b490("Sliders[x]");
          if ((char)uVar3 != '\0') {
            puVar6 = (undefined4 *)(local_34 + *(int *)(param_1 + 0x58));
            FUN_0098c550(puVar6);
            FUN_0098a430(puVar6 + 8,4);
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x24;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x14;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("ActualStartDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x100),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x15;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("ActualEndDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x104),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x16;
    pcVar2 = (char *)FUN_00ace33d(0xe51b88);
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
  uVar3 = FUN_0098b490("EstimatedCost");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 100),8);
    FUN_0098a430((undefined4 *)(param_1 + 0x6c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x17;
    pcVar2 = (char *)FUN_00ace33d(0xe51b88);
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
  uVar3 = FUN_0098b490("ActualCost");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x74),8);
    FUN_0098a430((undefined4 *)(param_1 + 0x7c),8);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x18;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("EstimatedTime");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x84),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x6f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x19;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe18);
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
  uVar3 = FUN_0098b490("ActualTime");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x88),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x70;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1a;
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
  uVar3 = FUN_0098b490("PropSlots");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x220),4);
  }
  uVar3 = FUN_0098b490("ListPropNames");
  if ((char)uVar3 != '\0') {
    if (DAT_010583e0 == 0) {
      if (*(int *)(param_1 + 0x228) == 0) {
        local_30 = (undefined1 *)0x0;
      }
      else {
        local_30 = (undefined1 *)(*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x228) >> 5);
      }
      FUN_0098a3a0(&local_30);
      local_38 = (undefined1 *)0x0;
      for (local_34 = 0;
          (*(int *)(param_1 + 0x228) != 0 &&
          (local_34 < (uint)(*(int *)(param_1 + 0x22c) - *(int *)(param_1 + 0x228) >> 5)));
          local_34 = local_34 + 1) {
        if (DAT_00e67469 == '\0') {
          pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
          pcVar2 = (char *)&DAT_010581d8;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar2 = pcVar2 + 4;
          }
          local_2c = local_20;
          *pcVar2 = *pcVar5;
          DAT_010581d4 = 0x71;
          local_20[0] = '\0';
          local_28 = 0;
          local_24 = 0x14;
          _strncpy(local_2c,"SLVAR CALLED: ",0xe);
          local_28 = 0xe;
          local_2c[0xe] = '\0';
          local_4 = 0x1b;
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
        uVar3 = FUN_0098b490("ListPropNames[x]");
        if ((char)uVar3 != '\0') {
          FUN_0098c550((undefined4 *)(local_38 + *(int *)(param_1 + 0x228)));
        }
        local_38 = local_38 + 0x20;
      }
    }
    else if (DAT_010583e0 == 1) {
      local_38 = (undefined1 *)0x0;
      if (*(undefined4 **)(param_1 + 0x228) != (undefined4 *)0x0) {
        FUN_00405fe0(*(undefined4 **)(param_1 + 0x228),*(undefined4 **)(param_1 + 0x22c));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x228));
      }
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      SLVAR_LoadUint(&local_38);
      local_30 = &stack0xffffff94;
      FUN_004c11e0((void *)(param_1 + 0x224),(uint)local_38,&stack0xffffffa0,0,0x14);
      local_30 = (undefined1 *)0x0;
      if (local_38 != (undefined1 *)0x0) {
        local_34 = 0;
        do {
          if (DAT_00e67469 == '\0') {
            pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
            pcVar2 = (char *)&DAT_010581d8;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar2 = pcVar2 + 4;
            }
            local_2c = local_20;
            *pcVar2 = *pcVar5;
            DAT_010581d4 = 0x71;
            local_20[0] = '\0';
            local_28 = 0;
            local_24 = 0x14;
            _strncpy(local_2c,"SLVAR CALLED: ",0xe);
            local_28 = 0xe;
            local_2c[0xe] = '\0';
            local_4 = 0x1c;
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
          uVar3 = FUN_0098b490("ListPropNames[x]");
          if ((char)uVar3 != '\0') {
            FUN_0098c550((undefined4 *)(*(int *)(param_1 + 0x228) + local_34));
          }
          local_30 = local_30 + 1;
          local_34 = local_34 + 0x20;
        } while (local_30 < local_38);
      }
    }
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x72;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1d;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x234));
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
  uVar3 = FUN_0098b490("SetDressPropList");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x234);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x73;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1e;
    pcVar2 = (char *)FUN_00ace33d(0xe51b6c);
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
  uVar3 = FUN_0098b490("ShotTech");
  if ((char)uVar3 != '\0') {
    FUN_004ddee0();
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x74;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x1f;
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
  uVar3 = FUN_0098b490("PrintedSceneGUID");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x294),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x75;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x20;
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
  uVar3 = FUN_0098b490("JourneyStage");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xfc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x76;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x21;
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
  uVar3 = FUN_0098b490("OverlayName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0xc0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x77;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x22;
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
  uVar3 = FUN_0098b490("UseCustomCamera[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2f4),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x78;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x23;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("CustomCameraPosition[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2f8),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x79;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x24;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("CustomCameraFocus[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x310),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x25;
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
  uVar3 = FUN_0098b490("CustomCameraRotation[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x330),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x26;
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
  uVar3 = FUN_0098b490("CustomCameraFOV[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x328),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x27;
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
  uVar3 = FUN_0098b490("StuntFailed");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x8c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x28;
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
  uVar3 = FUN_0098b490("StuntChanceOfSuccess");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x90));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x29;
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
  uVar3 = FUN_0098b490("WeatherName");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x270));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x7f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2a;
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
  uVar3 = FUN_0098b490("WeatherFlag");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x290),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x80;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2b;
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
  uVar3 = FUN_0098b490("UseCustomCamera[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2f5),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x81;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2c;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("CustomCameraPosition[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x304),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x82;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2d;
    pcVar2 = (char *)FUN_00ace33d(0xe5043c);
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
  uVar3 = FUN_0098b490("CustomCameraFocus[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x31c),0xc);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x83;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2e;
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
  uVar3 = FUN_0098b490("CustomCameraRotation[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x334),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x84;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x2f;
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
  uVar3 = FUN_0098b490("CustomCameraFOV[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x32c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x85;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x30;
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
  uVar3 = FUN_0098b490("UseFreeCamera[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x298),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x86;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x31;
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
  uVar3 = FUN_0098b490("UseFreeCamera[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x299),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x87;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x32;
    pcVar2 = (char *)FUN_00ace33d(0xe51b50);
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
  uVar3 = FUN_0098b490("FreeCamera[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2a0),0xc);
    FUN_0098a430((undefined4 *)(param_1 + 0x2ac),0xc);
    FUN_0098a430((undefined4 *)(param_1 + 0x2b8),4);
    FUN_0098a430((undefined4 *)(param_1 + 700),4);
    FUN_0098a430((undefined4 *)(param_1 + 0x2c0),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x88;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x33;
    pcVar2 = (char *)FUN_00ace33d(0xe51b50);
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
  uVar3 = FUN_0098b490("FreeCamera[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c8),0xc);
    FUN_0098a430((undefined4 *)(param_1 + 0x2d4),0xc);
    FUN_0098a430((undefined4 *)(param_1 + 0x2e0),4);
    FUN_0098a430((undefined4 *)(param_1 + 0x2e4),4);
    FUN_0098a430((undefined4 *)(param_1 + 0x2e8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x89;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x34;
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
  uVar3 = FUN_0098b490("StuntMeanStuntAbility");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x94),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x8a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0x35;
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
  uVar3 = FUN_0098b490("StuntAvgStuntPerformance");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x98),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x8b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    FUN_004015d0(&local_2c,"SLVAR CALLED: ",0xe);
    local_4 = 0x36;
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
  uVar3 = FUN_0098b490("FreeCameraTime[0]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2ec),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Shot.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x8c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    FUN_004015d0(&local_2c,"SLVAR CALLED: ",0xe);
    local_4 = 0x37;
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
  uVar3 = FUN_0098b490("FreeCameraTime[1]");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2f0),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION CProject_BuildMovieRecord @ 004e8240 ////

uint __fastcall CProject_BuildMovieRecord(void *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  wchar_t wVar4;
  int *piVar5;
  void *pvVar6;
  undefined4 *puVar7;
  int iVar8;
  void *pvVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  uint *puVar16;
  int *piVar17;
  uint uVar18;
  longlong *plVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  int *piVar23;
  bool bVar24;
  float10 fVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  TypeDescriptor *pTVar29;
  wchar_t *pwVar30;
  TypeDescriptor *pTVar31;
  int iVar32;
  int local_d4;
  wchar_t *local_d0;
  int local_cc;
  int local_c8;
  int *local_c4;
  char **local_c0;
  int local_bc;
  int *local_b8;
  char *pcStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  char acStack_a8 [12];
  void *pvStack_9c;
  void *pvStack_98;
  undefined4 *local_94;
  undefined1 *local_90;
  uint uStack_8c;
  uint local_88;
  float fStack_78;
  float fStack_74;
  undefined1 *puStack_70;
  int local_68;
  int local_64;
  int local_60;
  int aiStack_5c [4];
  char local_4c [32];
  char local_2c [28];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Populates a persistent "movie record" structure from a finished project:
                       title mesh reference, full cast list (per-star quality/looks/genre-fit via
                       CProject_GetQualityWithAwardBoost and related), director info, genre tags,
                       release date, studio reference. Likely the source record for the movie
                       library/leaderboard/history systems. Very dense, not exhaustively traced. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa253;
  local_c = ExceptionList;
  if (*(int *)((int)param_1 + 0x1d8) == 0) {
    pvVar6 = (void *)0x0;
    pvVar9 = ExceptionList;
    ExceptionList = &local_c;
  }
  else {
    ExceptionList = &local_c;
    pvVar6 = (void *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
    pvVar9 = pvVar6;
  }
  if (*(void **)((int)param_1 + 0x1d8) != (void *)0x0) {
    puVar7 = FUN_004b6330(*(void **)((int)param_1 + 0x1d8),&local_90);
    pcVar20 = (char *)*puVar7;
    pcVar21 = local_2c;
    do {
      cVar2 = *pcVar20;
      pcVar20 = pcVar20 + 1;
      *pcVar21 = cVar2;
      pcVar21 = pcVar21 + 1;
    } while (cVar2 != '\0');
    if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
      _free(local_90);
    }
    if (((pvVar6 == (void *)0x0) || (*(void **)((int)pvVar6 + 0x11c) == (void *)0x0)) ||
       (iVar8 = FUN_0097e350(*(void **)((int)pvVar6 + 0x11c),0), iVar8 == 0)) {
      if (*(void **)((int)param_1 + 0x1d8) != (void *)0x0) {
        FUN_004e0060(*(void **)((int)param_1 + 0x1d8),&local_90);
        _sprintf(local_4c,"%s.msh");
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
      }
    }
    else {
      FUN_0097e350(*(void **)((int)pvVar6 + 0x11c),0);
      _sprintf(local_4c,"%s.msh");
    }
    iVar8 = 1;
    pvVar9 = (void *)0x0;
    bVar24 = true;
    pcVar21 = local_4c;
    pcVar20 = "";
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar24 = *pcVar21 == *pcVar20;
      pcVar21 = pcVar21 + 1;
      pcVar20 = pcVar20 + 1;
    } while (bVar24);
    if (!bVar24) {
      local_68 = 0;
      local_64 = 0;
      local_b8 = (int *)0x0;
      local_bc = 0;
      local_c4 = (int *)0x0;
      iVar8 = FUN_005b2340(*(int *)((int)param_1 + 0xb4));
      if (iVar8 != 0) {
        iVar8 = 3;
        pvVar9 = (void *)FUN_005b2340(*(int *)((int)param_1 + 0xb4));
        local_68 = FUN_005a93c0(pvVar9,iVar8);
        iVar8 = 4;
        pvVar9 = (void *)FUN_005b2340(*(int *)((int)param_1 + 0xb4));
        local_64 = FUN_005a93c0(pvVar9,iVar8);
        iVar8 = 0;
        pvVar9 = (void *)FUN_005b2340(*(int *)((int)param_1 + 0xb4));
        local_b8 = (int *)FUN_005a93c0(pvVar9,iVar8);
        iVar8 = 2;
        pvVar9 = (void *)FUN_005b2340(*(int *)((int)param_1 + 0xb4));
        local_bc = FUN_005a93c0(pvVar9,iVar8);
        iVar8 = 1;
        pvVar9 = (void *)FUN_005b2340(*(int *)((int)param_1 + 0xb4));
        local_c4 = (int *)FUN_005a93c0(pvVar9,iVar8);
      }
      local_d0 = operator_new(0x204);
      local_4 = 0;
      if (local_d0 == (wchar_t *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = FUN_00757a20((undefined4 *)local_d0);
      }
      local_4 = 0xffffffff;
      local_94 = puVar7;
      _strncpy((char *)(puVar7 + 0x24),local_2c,0x20);
      _strncpy((char *)(puVar7 + 0x2c),local_4c,0x20);
      _strncpy((char *)(puVar7 + 0x14),*(char **)(*(int *)((int)param_1 + 0x1d8) + 0x70),0x40);
      puVar7[0x41] = *(undefined4 *)((int)param_1 + 0x264);
      if ((undefined4 *)((int)param_1 + 0x2cc) != (undefined4 *)0x0) {
        puVar7[0x43] = *(undefined4 *)((int)param_1 + 0x2cc);
        puVar7[0x44] = *(undefined4 *)((int)param_1 + 0x2d0);
      }
      puVar11 = *(undefined4 **)((int)param_1 + 0xbc);
      if (puVar11 != *(undefined4 **)((int)param_1 + 0xc0)) {
        do {
          FUN_00757fb0(puVar7,(char *)*puVar11,puVar11[8]);
          puVar11 = puVar11 + 9;
        } while (puVar11 != *(undefined4 **)((int)param_1 + 0xc0));
      }
      iVar8 = *(int *)((int)param_1 + 0x194);
      local_60 = iVar8;
      if (iVar8 != (int)param_1 + 0x1a0) {
        do {
          iVar15 = *(int *)(iVar8 + 8);
          local_60 = iVar8;
          pwVar10 = (wchar_t *)FUN_0048c950(iVar15);
          local_d0 = pwVar10;
          if ((pwVar10 != (wchar_t *)0x0) && (*(int *)(pwVar10 + 0x262) < 10)) {
            local_c0 = (char **)FUN_00ace790((int *)pwVar10,0,&TM::CStaff::RTTI_Type_Descriptor,
                                             &TM::CStar::RTTI_Type_Descriptor,0);
            local_cc = FUN_00ace790((int *)pwVar10,0,&TM::CStaff::RTTI_Type_Descriptor,
                                    &TM::CExtra::RTTI_Type_Descriptor,0);
            if ((*(char *)((int)param_1 + 0x144) == '\0') ||
               (iVar8 = FUN_0048e140(iVar15), iVar8 == 0)) {
              iVar8 = FUN_0059c6e0(pwVar10,'\0');
            }
            local_c8 = iVar8;
            puVar11 = operator_new(0x168);
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = (undefined4 *)0x0;
            }
            else {
              puVar14 = puVar11;
              for (iVar8 = 0x5a; pwVar10 = local_d0, iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + 1;
              }
            }
            uVar12 = FUN_0048c720(iVar15);
            *puVar11 = uVar12;
            pfVar13 = (float *)(**(code **)(*(int *)pwVar10 + 0x1e0))();
            fVar25 = FUN_0043b710(pfVar13);
            puVar11[1] = (float)fVar25;
            if (local_c4 == (int *)0x0) {
              if (local_d0 == (wchar_t *)0x0) {
                puVar11[3] = 0x42a00000;
              }
              else {
                puVar11[3] = *(int *)(local_d0 + 0x548);
                puVar14 = (undefined4 *)(**(code **)(*(int *)local_d0 + 0x214))();
                puVar11[4] = *puVar14;
              }
            }
            else {
              fVar25 = FUN_00585e20((int)local_c4);
              puVar11[3] = (float)fVar25;
              puVar14 = (undefined4 *)(**(code **)(*local_c4 + 0x214))();
              puVar11[4] = *puVar14;
            }
            if (local_cc != 0) {
              fVar25 = FUN_0042ff00(local_cc);
              if (((float10)0.0 < fVar25) &&
                 (fVar25 = FUN_0042ff00(local_cc), (float10)(float)puVar11[1] < fVar25)) {
                fVar25 = FUN_0042ff00(local_cc);
                puVar11[1] = (float)fVar25;
              }
              fVar25 = FUN_0042fef0(local_cc);
              if (((float10)0.0 < fVar25) &&
                 (fVar25 = FUN_0042fef0(local_cc), (float10)(float)puVar11[3] < fVar25)) {
                fVar25 = FUN_0042fef0(local_cc);
                puVar11[3] = (float)fVar25;
              }
            }
            iVar8 = (**(code **)(*(int *)pwVar10 + 0xf0))();
            puVar11[0x15] = *(undefined4 *)(iVar8 + 0x34);
            if ((byte *)(iVar8 + 0x38) != (byte *)0x0) {
              if ((*(byte *)(iVar8 + 0x38) & 1) == 0) {
                uVar12 = *(undefined4 *)(iVar8 + 0x40);
              }
              else {
                uVar12 = 0;
              }
              puVar11[2] = uVar12;
              local_d0 = *(wchar_t **)(iVar8 + 0x44);
              pcVar21 = (char *)(puVar11 + 5);
              do {
                wVar4 = *local_d0;
                *pcVar21 = (char)wVar4;
                local_d0 = (wchar_t *)((int)local_d0 + 1);
                pcVar21 = pcVar21 + 1;
              } while ((char)wVar4 != '\0');
              pcVar20 = *(char **)(iVar8 + 100);
              pcVar21 = (char *)(puVar11 + 0xd);
              do {
                cVar2 = *pcVar20;
                pcVar20 = pcVar20 + 1;
                *pcVar21 = cVar2;
                pcVar21 = pcVar21 + 1;
              } while (cVar2 != '\0');
            }
            puVar14 = (undefined4 *)(**(code **)(*(int *)pwVar10 + 0x5c))();
            _wcsncpy((wchar_t *)(puVar11 + 0x17),(wchar_t *)*puVar14,0x40);
            if (&lpType_0000000a < local_90) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_98);
            }
            *(undefined2 *)((int)puVar11 + 0xda) = 0;
            iVar8 = FUN_005b2220(*(int *)((int)param_1 + 0xb4));
            if (iVar8 == 0) {
LAB_004e8772:
              *(undefined2 *)(puVar11 + 0x37) = 0;
            }
            else {
              iVar8 = 0;
              pwVar30 = pwVar10;
              pvVar9 = (void *)FUN_005b2220(*(int *)((int)param_1 + 0xb4));
              iVar8 = FUN_005a7640(pvVar9,(int)pwVar30,iVar8);
              if (iVar8 == 0) goto LAB_004e8772;
              _wcsncpy((wchar_t *)(puVar11 + 0x37),*(wchar_t **)(iVar8 + 0x60),0x40);
              *(undefined2 *)((int)puVar11 + 0x15a) = 0;
            }
            uVar12 = (**(code **)(*(int *)pwVar10 + 0x80))();
            puVar11[0x57] = uVar12;
            if (local_c0 == (char **)0x0) {
              puVar11[0x16] = 0x3f800000;
            }
            else {
              puVar14 = (undefined4 *)FUN_00585f80((int *)local_c0);
              puVar11[0x16] = *puVar14;
            }
            iVar8 = local_c8;
            if ((local_c8 == 0) || (iVar15 = FUN_004319b0(local_c8), iVar15 == 0)) {
              (**(code **)*puVar7)();
              FUN_00753420(puVar11);
                    /* WARNING: Subroutine does not return */
              _free(puVar11);
            }
            iVar8 = FUN_004319b0(iVar8);
            puVar16 = FUN_009ce790(iVar8);
            FUN_00753450(puVar11,puVar16);
            FUN_00757f50(puVar7,puVar11);
            iVar8 = local_60;
          }
          iVar8 = *(int *)(iVar8 + 4);
          local_60 = iVar8;
        } while (iVar8 != (int)param_1 + 0x1a0);
      }
      if (param_1 != (void *)0xfffffd68) {
        pwVar10 = *(wchar_t **)((int)param_1 + 0x2a0);
        local_d0 = (wchar_t *)((int)param_1 + 0x2ac);
        if (pwVar10 != local_d0) {
          do {
            iVar8 = *(int *)(pwVar10 + 4);
            pcVar21 = operator_new(0x50);
            if (pcVar21 == (char *)0x0) {
              pcVar21 = (char *)0x0;
            }
            else {
              pcVar21[0x4c] = '\0';
              pcVar21[0x4d] = '\0';
              pcVar21[0x4e] = '\0';
              pcVar21[0x4f] = '\0';
              pcVar21[0x48] = '\0';
              pcVar21[0x49] = '\0';
              pcVar21[0x4a] = '\0';
              pcVar21[0x4b] = '\0';
              pcVar21[0x44] = '\0';
              pcVar21[0x45] = '\0';
              pcVar21[0x46] = '\0';
              pcVar21[0x47] = '\0';
              pcVar21[0x3c] = '\0';
              pcVar21[0x3d] = '\0';
              pcVar21[0x3e] = '\0';
              pcVar21[0x3f] = '\0';
              pcVar21[0x38] = '\0';
              pcVar21[0x39] = '\0';
              pcVar21[0x3a] = '\0';
              pcVar21[0x3b] = '\0';
              pcVar21[0x34] = '\0';
              pcVar21[0x35] = '\0';
              pcVar21[0x36] = '\0';
              pcVar21[0x37] = '\0';
              pcVar21[0x2c] = '\0';
              pcVar21[0x2d] = '\0';
              pcVar21[0x2e] = '\0';
              pcVar21[0x2f] = '\0';
              pcVar21[0x28] = '\0';
              pcVar21[0x29] = '\0';
              pcVar21[0x2a] = '\0';
              pcVar21[0x2b] = '\0';
              pcVar21[0x24] = '\0';
              pcVar21[0x25] = '\0';
              pcVar21[0x26] = '\0';
              pcVar21[0x27] = '\0';
              pcVar21[0x40] = '\0';
              pcVar21[0x41] = '\0';
              pcVar21[0x42] = -0x80;
              pcVar21[0x43] = '?';
              pcVar21[0x30] = '\0';
              pcVar21[0x31] = '\0';
              pcVar21[0x32] = -0x80;
              pcVar21[0x33] = '?';
              pcVar21[0x20] = '\0';
              pcVar21[0x21] = '\0';
              pcVar21[0x22] = -0x80;
              pcVar21[0x23] = '?';
              pcVar20 = pcVar21;
              for (iVar15 = 0x14; iVar15 != 0; iVar15 = iVar15 + -1) {
                pcVar20[0] = '\0';
                pcVar20[1] = '\0';
                pcVar20[2] = '\0';
                pcVar20[3] = '\0';
                pcVar20 = pcVar20 + 4;
              }
            }
            pcVar20 = *(char **)(iVar8 + 0xec);
            pcVar22 = pcVar21;
            do {
              cVar2 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              *pcVar22 = cVar2;
              pcVar22 = pcVar22 + 1;
            } while (cVar2 != '\0');
            puVar11 = (undefined4 *)(iVar8 + 0x9c);
            pcVar20 = pcVar21 + 0x20;
            for (iVar15 = 0xc; iVar15 != 0; iVar15 = iVar15 + -1) {
              *(undefined4 *)pcVar20 = *puVar11;
              puVar11 = puVar11 + 1;
              pcVar20 = pcVar20 + 4;
            }
            FUN_00758050(puVar7,pcVar21);
            pwVar10 = *(wchar_t **)(pwVar10 + 2);
          } while (pwVar10 != local_d0);
        }
      }
      _strncpy((char *)(puVar7 + 0x34),*(char **)((int)param_1 + 0x100),0x20);
      *(undefined1 *)((int)puVar7 + 0xef) = 0;
      puVar7[0x3c] = *(undefined4 *)((int)param_1 + 0x120);
      pcVar21 = (char *)(puVar7 + 0x58);
      _strncpy(pcVar21,*(char **)((int)param_1 + 0x124),0x20);
      *(undefined1 *)((int)puVar7 + 0x17f) = 0;
      pwVar10 = *(wchar_t **)((int)param_1 + 0x2d4);
      uVar27 = 0x20;
      _strncpy((char *)(puVar7 + 0x60),(char *)pwVar10,0x20);
      *(undefined1 *)((int)puVar7 + 0x19f) = 0;
      puVar7[0x68] = *(uint *)((int)param_1 + 0x2f4) &
                     (*(uint *)((int)param_1 + 0x2f4) == 0xffffffff) - 1;
      puVar7[0x69] = (uint)*(byte *)((int)param_1 + 0x2fc);
      puVar11 = (undefined4 *)((int)param_1 + 0x300);
      puVar14 = puVar7 + 0x6a;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      puVar7[0x74] = *(undefined4 *)((int)param_1 + 0x350);
      puVar7[0x75] = (uint)*(byte *)((int)param_1 + 0x2fd);
      puVar11 = (undefined4 *)((int)param_1 + 0x328);
      puVar14 = puVar7 + 0x76;
      for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      iVar8 = 0;
      puVar7[0x80] = *(undefined4 *)((int)param_1 + 0x354);
      local_d4 = 0;
      while( true ) {
        if (*(int *)((int)param_1 + 0x28c) == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)((int)param_1 + 0x290) - *(int *)((int)param_1 + 0x28c) >> 5;
        }
        if (iVar15 <= iVar8) break;
        piVar17 = operator_new(0x24);
        if (piVar17 == (int *)0x0) {
          piVar17 = (int *)0x0;
        }
        else {
          *piVar17 = 0;
          piVar17[1] = 0;
          piVar17[2] = 0;
          piVar17[3] = 0;
          piVar17[4] = 0;
          piVar17[5] = 0;
          piVar17[6] = 0;
          piVar17[7] = 0;
          piVar17[8] = 0;
        }
        FUN_009d3a90(&local_90,*(char **)(*(int *)((int)param_1 + 0x28c) + local_d4));
        local_4 = 1;
        pcVar21 = (char *)0x4e8a3d;
        _sprintf((char *)(piVar17 + 1),"%s.msh");
        *piVar17 = iVar8;
        FUN_007580b0(puVar7,piVar17);
        local_4 = 0xffffffff;
        if (0x14 < local_88) {
                    /* WARNING: Subroutine does not return */
          _free(local_90);
        }
        iVar8 = iVar8 + 1;
        local_d4 = local_d4 + 0x20;
      }
      puStack_70 = &stack0xfffffefc;
      FUN_0045f620(*(void **)((int)param_1 + 0xb4),(undefined4 *)&stack0xfffffefc);
      local_4 = 0xffffffff;
      pvVar9 = (void *)FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      FUN_007546f0(pvVar9,pwVar10,uVar27,(uint)pcVar21);
      piVar17 = (int *)GetPlayerStudio();
      puVar7 = (undefined4 *)(**(code **)(*piVar17 + 0x20))();
      puStack_8 = (undefined1 *)0x3;
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      uVar27 = puVar7[1];
      pwVar10 = (wchar_t *)*puVar7;
      piVar17 = (int *)(iVar8 + 0xfc);
      if (*(uint *)(iVar8 + 0x104) <= uVar27) {
        if (10 < *(uint *)(iVar8 + 0x104)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar17);
        }
        uVar18 = uVar27 + 0x20 >> 5;
        *(uint *)(iVar8 + 0x104) = uVar18 << 5;
        pvVar9 = _malloc(uVar18 * 0x40);
        *piVar17 = (int)pvVar9;
      }
      _wcsncpy((wchar_t *)*piVar17,pwVar10,uVar27);
      *(uint *)(iVar8 + 0x100) = uVar27;
      *(undefined2 *)(*piVar17 + uVar27 * 2) = 0;
      puStack_8 = (undefined1 *)0xffffffff;
      if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(local_94);
      }
      FUN_004df3b0(param_1,&fStack_74);
      iVar8 = *(int *)((int)param_1 + 0xb4);
      uVar26 = FUN_0043b560();
      iVar8 = FUN_005b25f0(iVar8);
      *(int *)(iVar8 + 0x11c) = (int)uVar26;
      iVar8 = *(int *)((int)param_1 + 0xb4);
      iVar15 = FUN_005b2770(iVar8);
      puVar7 = (undefined4 *)FUN_00449b40(iVar15);
      iVar8 = FUN_005b25f0(iVar8);
      uVar27 = puVar7[1];
      pcVar21 = (char *)*puVar7;
      piVar17 = (int *)(iVar8 + 0xdc);
      if (*(uint *)(iVar8 + 0xe4) <= uVar27) {
        if (0x14 < *(uint *)(iVar8 + 0xe4)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar17);
        }
        uVar18 = uVar27 + 0x20 & 0xffffffe0;
        *(uint *)(iVar8 + 0xe4) = uVar18;
        pvVar9 = _malloc(uVar18);
        *piVar17 = (int)pvVar9;
      }
      _strncpy((char *)*piVar17,pcVar21,uVar27);
      *(uint *)(iVar8 + 0xe0) = uVar27;
      *(undefined1 *)(uVar27 + *piVar17) = 0;
      piVar17 = (int *)FUN_005b2330(*(int *)((int)param_1 + 0xb4));
      plVar19 = (longlong *)(**(code **)(*piVar17 + 0x30))();
      lVar1 = *plVar19;
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      *(float *)(iVar8 + 0x120) = (float)lVar1 * 1.1920929e-07;
      puVar7 = (undefined4 *)
               CProject_GetQualityWithAwardBoost(*(void **)((int)param_1 + 0xb4),&fStack_78);
      uVar12 = *puVar7;
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      *(undefined4 *)(iVar8 + 0x124) = uVar12;
      puVar7 = FUN_00421b80(&pvStack_98);
      local_c = (void *)0x4;
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      uVar27 = puVar7[1];
      pwVar10 = (wchar_t *)*puVar7;
      piVar17 = (int *)(iVar8 + 0x1cc);
      if (*(uint *)(iVar8 + 0x1d4) <= uVar27) {
        if (10 < *(uint *)(iVar8 + 0x1d4)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar17);
        }
        uVar18 = uVar27 + 0x20 & 0xffffffe0;
        *(uint *)(iVar8 + 0x1d4) = uVar18;
        pvVar9 = _malloc(uVar18 * 2);
        *piVar17 = (int)pvVar9;
      }
      _wcsncpy((wchar_t *)*piVar17,pwVar10,uVar27);
      *(uint *)(iVar8 + 0x1d0) = uVar27;
      *(undefined2 *)(*piVar17 + uVar27 * 2) = 0;
      local_c = (void *)0xffffffff;
      if (&lpType_0000000a < local_90) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_98);
      }
      uVar12 = *(undefined4 *)((int)param_1 + 0x2cc);
      uVar3 = *(undefined4 *)((int)param_1 + 0x2d0);
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      *(undefined4 *)(iVar8 + 0x1f8) = uVar12;
      *(undefined4 *)(iVar8 + 0x1fc) = uVar3;
      iVar8 = *(int *)((int)param_1 + 0xb4);
      iVar15 = FUN_004a3870();
      iVar8 = FUN_005b25f0(iVar8);
      iVar32 = 0;
      pTVar31 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
      pTVar29 = &TM::CStudio::RTTI_Type_Descriptor;
      iVar28 = 0;
      *(int *)(iVar8 + 0x128) = iVar15;
      piVar17 = (int *)GetPlayerStudio();
      iVar8 = FUN_00ace790(piVar17,iVar28,pTVar29,pTVar31,iVar32);
      if (iVar8 != 0) {
        iVar15 = *(int *)((int)param_1 + 0xb4);
        uVar12 = FUN_00517fb0(iVar8);
        iVar8 = FUN_005b25f0(iVar15);
        *(undefined4 *)(iVar8 + 0x28c) = uVar12;
      }
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      piVar17 = (int *)(iVar8 + 0xa0);
      uVar27 = FUN_00ace02d((short *)&lpCaption_00d16918);
      if (*(uint *)(iVar8 + 0xa8) <= uVar27) {
        if (10 < *(uint *)(iVar8 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*piVar17);
        }
        uVar18 = uVar27 + 0x20 >> 5;
        *(uint *)(iVar8 + 0xa8) = uVar18 << 5;
        pvVar9 = _malloc(uVar18 * 0x40);
        *piVar17 = (int)pvVar9;
      }
      _wcsncpy((wchar_t *)*piVar17,(wchar_t *)&lpCaption_00d16918,uVar27);
      *(uint *)(iVar8 + 0xa4) = uVar27;
      *(undefined2 *)(*piVar17 + uVar27 * 2) = 0;
      iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
      piVar17 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xb4));
      puVar7 = (undefined4 *)(**(code **)(*piVar17 + 0x5c))();
      uVar27 = puVar7[1];
      pwVar10 = (wchar_t *)*puVar7;
      if (*(uint *)(iVar8 + 0x214) <= uVar27) {
        if (10 < *(uint *)(iVar8 + 0x214)) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar8 + 0x20c));
        }
        uVar18 = uVar27 + 0x20 >> 5;
        *(uint *)(iVar8 + 0x214) = uVar18 << 5;
        pvVar9 = _malloc(uVar18 * 0x40);
        *(void **)(iVar8 + 0x20c) = pvVar9;
      }
      _wcsncpy(*(wchar_t **)(iVar8 + 0x20c),pwVar10,uVar27);
      *(uint *)(iVar8 + 0x210) = uVar27;
      *(undefined2 *)(*(int *)(iVar8 + 0x20c) + uVar27 * 2) = 0;
      if (local_94 <= &lpType_0000000a) {
        local_c0 = &pcStack_b4;
        pcStack_b4 = (char *)((uint)pcStack_b4 & 0xffffff00);
        local_bc = 0;
        local_b8 = (int *)&DAT_00000014;
        _strncpy((char *)local_c0,"role_director",0xd);
        local_bc = 0xd;
        *(char *)((int)local_c0 + 0xd) = '\0';
        uStack_10 = 5;
        puVar7 = FUN_009b5030(&pvStack_9c,&local_c0);
        uVar27 = puVar7[1];
        pwVar10 = (wchar_t *)*puVar7;
        if (*(uint *)(iVar8 + 0x234) <= uVar27) {
          if (10 < *(uint *)(iVar8 + 0x234)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(iVar8 + 0x22c));
          }
          uVar18 = uVar27 + 0x20 >> 5;
          *(uint *)(iVar8 + 0x234) = uVar18 << 5;
          pvVar9 = _malloc(uVar18 * 0x40);
          *(void **)(iVar8 + 0x22c) = pvVar9;
        }
        _wcsncpy(*(wchar_t **)(iVar8 + 0x22c),pwVar10,uVar27);
        *(uint *)(iVar8 + 0x230) = uVar27;
        *(undefined2 *)(*(int *)(iVar8 + 0x22c) + uVar27 * 2) = 0;
        if (&lpType_0000000a < local_94) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_9c);
        }
        uStack_10 = 0xffffffff;
        if (&DAT_00000014 < local_b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_c0);
        }
        piVar17 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xb4));
        (**(code **)(*piVar17 + 0x1e0))();
        uVar26 = FUN_0043b560();
        *(int *)(iVar8 + 0x200) = (int)uVar26;
        piVar17 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xb4));
        uVar12 = (**(code **)(*piVar17 + 0x80))();
        *(undefined4 *)(iVar8 + 0x204) = uVar12;
        piVar17 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xb4));
        iVar15 = (**(code **)(*piVar17 + 0xf0))();
        if ((iVar15 != 0) && ((*(byte *)(iVar15 + 0x10) & 1) != 0)) {
          if (*(void **)(iVar8 + 0x25c) != (void *)0x0) {
            *(undefined4 *)(iVar8 + 600) = 0;
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(iVar8 + 0x25c));
          }
          FUN_009d6b30(iVar15);
        }
        iVar8 = FUN_005b2780(*(int *)((int)param_1 + 0xb4));
        iVar8 = FUN_00577370(iVar8);
        piVar17 = (int *)**(int **)(iVar8 + 0x90);
        iVar8 = FUN_005b2780(*(int *)((int)param_1 + 0xb4));
        iVar8 = FUN_00577370(iVar8);
        if (piVar17 != *(int **)(iVar8 + 0x90)) {
          do {
            uVar27 = piVar17[4];
            pcVar21 = (char *)piVar17[3];
            pcStack_b4 = acStack_a8;
            acStack_a8[0] = '\0';
            uStack_b0 = 0;
            uStack_ac = 0x14;
            if (0x13 < uVar27) {
              uStack_ac = uVar27 + 0x20 & 0xffffffe0;
              pcStack_b4 = _malloc(uStack_ac);
            }
            _strncpy(pcStack_b4,pcVar21,uVar27);
            pcStack_b4[uVar27] = '\0';
            local_4 = 6;
            uStack_b0 = uVar27;
            uVar27 = FUN_00413450(&pcStack_b4,"genre_",0,6);
            if (uVar27 != 0xffffffff) {
              pwVar10 = (wchar_t *)piVar17[0xb];
              pcVar21 = pcStack_b4;
              local_d0 = pwVar10;
              iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
              FUN_007584e0((void *)(iVar8 + 0x200),pcVar21,(int)pwVar10);
            }
            local_4 = 0xffffffff;
            if (0x14 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_b4);
            }
            if (*(char *)((int)piVar17 + 0x31) == '\0') {
              piVar23 = (int *)piVar17[2];
              if (*(char *)((int)piVar23 + 0x31) == '\0') {
                cVar2 = *(char *)(*piVar23 + 0x31);
                piVar17 = piVar23;
                piVar23 = (int *)*piVar23;
                while (cVar2 == '\0') {
                  cVar2 = *(char *)(*piVar23 + 0x31);
                  piVar17 = piVar23;
                  piVar23 = (int *)*piVar23;
                }
              }
              else {
                cVar2 = *(char *)(piVar17[1] + 0x31);
                piVar5 = (int *)piVar17[1];
                piVar23 = piVar17;
                while ((piVar17 = piVar5, cVar2 == '\0' && (piVar23 == (int *)piVar17[2]))) {
                  cVar2 = *(char *)(piVar17[1] + 0x31);
                  piVar5 = (int *)piVar17[1];
                  piVar23 = piVar17;
                }
              }
            }
            iVar8 = FUN_005b2780(*(int *)((int)param_1 + 0xb4));
            iVar8 = FUN_00577370(iVar8);
          } while (piVar17 != *(int **)(iVar8 + 0x90));
        }
        _time((time_t *)aiStack_5c);
        iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
        *(int *)(iVar8 + 0x1f0) = aiStack_5c[0];
        *(int *)(iVar8 + 500) = aiStack_5c[0] >> 0x1f;
        if (local_68 != 0) {
          iVar8 = *(int *)((int)param_1 + 0xb4);
          puVar7 = (undefined4 *)FUN_00960190(local_68);
          iVar8 = FUN_005b25f0(iVar8);
          uVar27 = puVar7[1];
          pcVar21 = (char *)*puVar7;
          piVar17 = (int *)(iVar8 + 300);
          if (*(uint *)(iVar8 + 0x134) <= uVar27) {
            if (0x14 < *(uint *)(iVar8 + 0x134)) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar17);
            }
            uVar18 = uVar27 + 0x20 & 0xffffffe0;
            *(uint *)(iVar8 + 0x134) = uVar18;
            pvVar9 = _malloc(uVar18);
            *piVar17 = (int)pvVar9;
          }
          _strncpy((char *)*piVar17,pcVar21,uVar27);
          *(uint *)(iVar8 + 0x130) = uVar27;
          *(undefined1 *)(uVar27 + *piVar17) = 0;
        }
        if (local_64 != 0) {
          iVar8 = *(int *)((int)param_1 + 0xb4);
          puVar7 = (undefined4 *)FUN_00960190(local_64);
          iVar8 = FUN_005b25f0(iVar8);
          uVar27 = puVar7[1];
          pcVar21 = (char *)*puVar7;
          piVar17 = (int *)(iVar8 + 0x14c);
          if (*(uint *)(iVar8 + 0x154) <= uVar27) {
            if (0x14 < *(uint *)(iVar8 + 0x154)) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar17);
            }
            uVar18 = uVar27 + 0x20 & 0xffffffe0;
            *(uint *)(iVar8 + 0x154) = uVar18;
            pvVar9 = _malloc(uVar18);
            *piVar17 = (int)pvVar9;
          }
          _strncpy((char *)*piVar17,pcVar21,uVar27);
          *(uint *)(iVar8 + 0x150) = uVar27;
          *(undefined1 *)(uVar27 + *piVar17) = 0;
        }
        if (local_b8 != (int *)0x0) {
          iVar8 = *(int *)((int)param_1 + 0xb4);
          puVar7 = (undefined4 *)FUN_00960190((int)local_b8);
          iVar8 = FUN_005b25f0(iVar8);
          uVar27 = puVar7[1];
          pcVar21 = (char *)*puVar7;
          piVar17 = (int *)(iVar8 + 0x16c);
          if (*(uint *)(iVar8 + 0x174) <= uVar27) {
            if (0x14 < *(uint *)(iVar8 + 0x174)) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar17);
            }
            uVar18 = uVar27 + 0x20 & 0xffffffe0;
            *(uint *)(iVar8 + 0x174) = uVar18;
            pvVar9 = _malloc(uVar18);
            *piVar17 = (int)pvVar9;
          }
          _strncpy((char *)*piVar17,pcVar21,uVar27);
          *(uint *)(iVar8 + 0x170) = uVar27;
          *(undefined1 *)(uVar27 + *piVar17) = 0;
        }
        if (local_bc != 0) {
          iVar8 = *(int *)((int)param_1 + 0xb4);
          puVar7 = (undefined4 *)FUN_00960190(local_bc);
          iVar8 = FUN_005b25f0(iVar8);
          uVar27 = puVar7[1];
          pcVar21 = (char *)*puVar7;
          piVar17 = (int *)(iVar8 + 0x1ac);
          if (*(uint *)(iVar8 + 0x1b4) <= uVar27) {
            if (0x14 < *(uint *)(iVar8 + 0x1b4)) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar17);
            }
            uVar18 = uVar27 + 0x20 & 0xffffffe0;
            *(uint *)(iVar8 + 0x1b4) = uVar18;
            pvVar9 = _malloc(uVar18);
            *piVar17 = (int)pvVar9;
          }
          _strncpy((char *)*piVar17,pcVar21,uVar27);
          *(uint *)(iVar8 + 0x1b0) = uVar27;
          *(undefined1 *)(uVar27 + *piVar17) = 0;
        }
        if (local_c4 != (int *)0x0) {
          iVar8 = *(int *)((int)param_1 + 0xb4);
          puVar7 = (undefined4 *)FUN_00960190((int)local_c4);
          iVar8 = FUN_005b25f0(iVar8);
          uVar27 = puVar7[1];
          pcVar21 = (char *)*puVar7;
          piVar17 = (int *)(iVar8 + 0x18c);
          if (*(uint *)(iVar8 + 0x194) <= uVar27) {
            if (0x14 < *(uint *)(iVar8 + 0x194)) {
                    /* WARNING: Subroutine does not return */
              _free((void *)*piVar17);
            }
            uVar18 = uVar27 + 0x20 & 0xffffffe0;
            *(uint *)(iVar8 + 0x194) = uVar18;
            pvVar9 = _malloc(uVar18);
            *piVar17 = (int)pvVar9;
          }
          _strncpy((char *)*piVar17,pcVar21,uVar27);
          *(uint *)(iVar8 + 400) = uVar27;
          *(undefined1 *)(uVar27 + *piVar17) = 0;
        }
        iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
        FUN_00758c90(iVar8);
        local_c4 = (int *)FUN_005b2220(*(int *)((int)param_1 + 0xb4));
        if ((local_c4 != (int *)0x0) &&
           (local_cc = *(int *)((int)local_c4 + 100), local_cc != *(int *)((int)local_c4 + 0x68))) {
          do {
            iVar8 = *(int *)(local_cc + 0x14);
            if ((iVar8 != 0) &&
               ((iVar15 = FUN_005a6470(iVar8), iVar15 != 0 &&
                (uVar12 = FUN_005a6140(iVar8), (char)uVar12 != '\0')))) {
              puStack_70 = operator_new(0x60);
              local_4 = 7;
              if (puStack_70 == (undefined1 *)0x0) {
                pwVar10 = (wchar_t *)0x0;
              }
              else {
                pwVar10 = (wchar_t *)FUN_004e4e20((int)puStack_70);
              }
              local_4 = 0xffffffff;
              local_d0 = pwVar10;
              iVar28 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
              iVar15 = *(int *)(iVar28 + 0x264);
              if ((iVar15 == 0) ||
                 ((uint)(*(int *)(iVar28 + 0x26c) - iVar15 >> 2) <=
                  (uint)(*(int *)(iVar28 + 0x268) - iVar15 >> 2))) {
                FUN_004e3540((void *)(iVar28 + 0x260),*(undefined4 **)(iVar28 + 0x268),1,&local_d0);
              }
              else {
                puVar7 = *(undefined4 **)(iVar28 + 0x268);
                *puVar7 = pwVar10;
                *(undefined4 **)(iVar28 + 0x268) = puVar7 + 1;
              }
              piVar17 = (int *)FUN_005a6470(iVar8);
              uVar27 = *(uint *)(iVar8 + 100);
              local_d0 = *(wchar_t **)(iVar8 + 0x60);
              local_b8 = piVar17;
              if (*(uint *)(pwVar10 + 0x1a) <= uVar27) {
                if (10 < *(uint *)(pwVar10 + 0x1a)) {
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(pwVar10 + 0x16));
                }
                uVar18 = uVar27 + 0x20 >> 5;
                *(uint *)(pwVar10 + 0x1a) = uVar18 << 5;
                pvVar9 = _malloc(uVar18 * 0x40);
                *(void **)(pwVar10 + 0x16) = pvVar9;
              }
              _wcsncpy(*(wchar_t **)(pwVar10 + 0x16),local_d0,uVar27);
              *(uint *)(pwVar10 + 0x18) = uVar27;
              *(undefined2 *)(*(int *)(pwVar10 + 0x16) + uVar27 * 2) = 0;
              *(undefined4 *)(pwVar10 + 4) = *(undefined4 *)(iVar8 + 0x88);
              (**(code **)(*piVar17 + 0x1e0))();
              uVar26 = FUN_0043b560();
              *(int *)pwVar10 = (int)uVar26;
              puVar7 = (undefined4 *)(**(code **)(*piVar17 + 0x5c))();
              uVar27 = puVar7[1];
              pwVar30 = (wchar_t *)*puVar7;
              if (*(uint *)(pwVar10 + 10) <= uVar27) {
                if (10 < *(uint *)(pwVar10 + 10)) {
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)(pwVar10 + 6));
                }
                uVar18 = uVar27 + 0x20 >> 5;
                *(uint *)(pwVar10 + 10) = uVar18 << 5;
                pvVar9 = _malloc(uVar18 * 0x40);
                *(void **)(pwVar10 + 6) = pvVar9;
              }
              _wcsncpy(*(wchar_t **)(pwVar10 + 6),pwVar30,uVar27);
              *(uint *)(pwVar10 + 8) = uVar27;
              *(undefined2 *)(*(int *)(pwVar10 + 6) + uVar27 * 2) = 0;
              if (&lpType_0000000a < local_90) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_98);
              }
              uVar12 = (**(code **)(*piVar17 + 0x80))();
              *(undefined4 *)(pwVar10 + 2) = uVar12;
              iVar8 = (**(code **)(*piVar17 + 0xf0))();
              if (((piVar17[0x131] < 10) && (iVar8 != 0)) && ((*(byte *)(iVar8 + 0x10) & 1) != 0)) {
                FUN_009d6b30(iVar8);
              }
              iVar8 = FUN_00577370((int)piVar17);
              piVar23 = (int *)**(int **)(iVar8 + 0x90);
              iVar8 = FUN_00577370((int)piVar17);
              if (piVar23 != *(int **)(iVar8 + 0x90)) {
                do {
                  uVar27 = piVar23[4];
                  local_d0 = (wchar_t *)piVar23[3];
                  pcStack_b4 = acStack_a8;
                  acStack_a8[0] = '\0';
                  uStack_b0 = 0;
                  uStack_ac = 0x14;
                  if (0x13 < uVar27) {
                    uStack_ac = uVar27 + 0x20 & 0xffffffe0;
                    pcStack_b4 = _malloc(uStack_ac);
                  }
                  _strncpy(pcStack_b4,(char *)local_d0,uVar27);
                  pcStack_b4[uVar27] = '\0';
                  local_4 = 8;
                  uStack_b0 = uVar27;
                  uVar27 = FUN_00413450(&pcStack_b4,"genre_",0,6);
                  if (uVar27 != 0xffffffff) {
                    local_bc = piVar23[0xb];
                    FUN_007584e0(pwVar10,pcStack_b4,local_bc);
                  }
                  local_4 = 0xffffffff;
                  if (0x14 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
                    _free(pcStack_b4);
                  }
                  if (*(char *)((int)piVar23 + 0x31) == '\0') {
                    piVar17 = (int *)piVar23[2];
                    if (*(char *)((int)piVar17 + 0x31) == '\0') {
                      cVar2 = *(char *)(*piVar17 + 0x31);
                      piVar23 = piVar17;
                      piVar17 = (int *)*piVar17;
                      while (cVar2 == '\0') {
                        cVar2 = *(char *)(*piVar17 + 0x31);
                        piVar23 = piVar17;
                        piVar17 = (int *)*piVar17;
                      }
                    }
                    else {
                      cVar2 = *(char *)(piVar23[1] + 0x31);
                      piVar5 = (int *)piVar23[1];
                      piVar17 = piVar23;
                      while ((piVar23 = piVar5, cVar2 == '\0' && (piVar17 == (int *)piVar23[2]))) {
                        cVar2 = *(char *)(piVar23[1] + 0x31);
                        piVar5 = (int *)piVar23[1];
                        piVar17 = piVar23;
                      }
                    }
                  }
                  iVar8 = FUN_00577370((int)local_b8);
                } while (piVar23 != *(int **)(iVar8 + 0x90));
              }
            }
            local_cc = local_cc + 0x18;
          } while (local_cc != *(int *)((int)local_c4 + 0x68));
        }
        iVar8 = FUN_005389b0();
        puVar11 = local_94;
        local_94[0x42] = iVar8;
        puVar7 = local_94;
        pvVar9 = (void *)FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
        FUN_00757970(pvVar9,(int)puVar7);
        iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
        puVar7 = *(undefined4 **)(iVar8 + 0x274);
        if (puVar7 == (undefined4 *)0x0) {
          *(undefined4 *)(iVar8 + 0x274) = 0;
          *(undefined4 *)(iVar8 + 0x278) = 0;
          *(undefined4 *)(iVar8 + 0x27c) = 0;
          iVar8 = FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
          FUN_0085f7c0((void *)(iVar8 + 0x270));
          pvVar9 = (void *)FUN_005b25f0(*(int *)((int)param_1 + 0xb4));
          uVar12 = FUN_00759a80(pvVar9);
          *(undefined4 *)((int)param_1 + 0x2f8) = puVar11[0x42];
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)uVar12 >> 8),1);
        }
        while( true ) {
          if (puVar7 == *(undefined4 **)(iVar8 + 0x278)) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)(iVar8 + 0x274));
          }
          if (0x14 < (uint)puVar7[2]) break;
          puVar7 = puVar7 + 8;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar7);
      }
                    /* WARNING: Subroutine does not return */
      _free(pvStack_9c);
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar9 & 0xffffff00;
}


//// FUNCTION FUN_004e9820 @ 004e9820 ////

void __thiscall FUN_004e9820(void *this,void *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  char *_Source;
  uint _Size;
  uint uVar7;
  char **ppcVar8;
  int iStack_50;
  char *pcStack_4c;
  uint uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caa270;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)((int)this + 0x1d8);
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)((int)this + 0x1c4) + 4))();
    *(undefined4 *)((int)this + 0x1d8) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x1c4))();
  }
  (**(code **)(*(int *)((int)this + 0x1c4) + 4))();
  *(void **)((int)this + 0x1d8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x1c4))();
  piVar1 = (int *)(*(int *)((int)this + 0x1d8) + 0x48);
  *piVar1 = *piVar1 + 1;
  puVar3 = (undefined4 *)FUN_004b5800(*(void **)((int)this + 0x1d8),&param_1);
  *(undefined4 *)((int)this + 0x268) = *puVar3;
  puVar3 = (undefined4 *)FUN_004b5810(*(void **)((int)this + 0x1d8),&param_1);
  *(undefined4 *)((int)this + 0x26c) = *puVar3;
  puVar3 = (undefined4 *)FUN_004b5820(*(void **)((int)this + 0x1d8),&param_1);
  *(undefined4 *)((int)this + 0x270) = *puVar3;
  *(undefined4 *)((int)this + 0x284) = 0;
  if (*(undefined4 **)((int)this + 0x28c) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)((int)this + 0x28c),*(undefined4 **)((int)this + 0x290));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x28c));
  }
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  FUN_004b6330(*(void **)((int)this + 0x1d8),&pcStack_2c);
  uStack_4 = 0;
  pvVar4 = (void *)FUN_0097c880(pcStack_2c,0,(undefined4 *)0x0,0);
  if (pvVar4 == (void *)0x0) {
    param_1 = pvVar4;
    if (uStack_24 < 0x1d) {
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_2c);
      }
      uStack_24 = 0x20;
      pcStack_2c = _malloc(0x20);
    }
    _strncpy(pcStack_2c,"generated_scene_template.flm",0x1c);
    uStack_28 = 0x1c;
    pcStack_2c[0x1c] = '\0';
    pvVar4 = (void *)FUN_0097c880(pcStack_2c,0,(undefined4 *)0x0,0);
    param_1 = pvVar4;
    if (pvVar4 == (void *)0x0) goto LAB_004e9ae2;
  }
  param_1 = pvVar4;
  iVar5 = FUN_00976230((int)pvVar4);
  *(int *)((int)this + 0x284) = iVar5;
  iStack_50 = 0;
  if (0 < iVar5) {
    do {
      pcVar6 = (char *)FUN_009762b0(pvVar4,iStack_50);
      _Source = (char *)FUN_00494df0(pcVar6);
      pcStack_4c = acStack_40;
      uStack_48 = 0;
      acStack_40[0] = '\0';
      uStack_44 = 0x14;
      pcVar6 = _Source;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      uVar7 = (int)pcVar6 - (int)(_Source + 1);
      if (0x13 < uVar7) {
        uStack_44 = uVar7 + 0x20 & 0xffffffe0;
        pcStack_4c = _malloc(uStack_44);
      }
      _strncpy(pcStack_4c,_Source,uVar7);
      pcStack_4c[uVar7] = '\0';
      iVar5 = *(int *)((int)this + 0x28c);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      uStack_48 = uVar7;
      if ((iVar5 == 0) ||
         ((uint)(*(int *)((int)this + 0x294) - iVar5 >> 5) <=
          (uint)(*(int *)((int)this + 0x290) - iVar5 >> 5))) {
        FUN_00439fd0((void *)((int)this + 0x288),*(int **)((int)this + 0x290),1,&pcStack_4c);
      }
      else {
        piVar1 = *(int **)((int)this + 0x290);
        FUN_00439ea0(piVar1,1,&pcStack_4c);
        *(int **)((int)this + 0x290) = piVar1 + 8;
      }
      uStack_4 = uStack_4 & 0xffffff00;
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_4c);
      }
      iStack_50 = iStack_50 + 1;
      pvVar4 = param_1;
    } while (iStack_50 < *(int *)((int)this + 0x284));
  }
  if (pvVar4 != (void *)0x0) {
    FUN_00971df0(pvVar4);
  }
LAB_004e9ae2:
  FUN_004df500((int)this);
  iVar5 = FUN_004b5850(*(int *)((int)this + 0x1d8));
  if (iVar5 != 0) {
    ppcVar8 = &pcStack_4c;
    pvVar4 = (void *)FUN_004b5850(*(int *)((int)this + 0x1d8));
    puVar3 = FUN_004e00a0(pvVar4,ppcVar8);
    uVar7 = puVar3[1];
    pcVar6 = (char *)*puVar3;
    if (*(uint *)((int)this + 0x108) <= uVar7) {
      if (0x14 < *(uint *)((int)this + 0x108)) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0x100));
      }
      _Size = uVar7 + 0x20 & 0xffffffe0;
      *(uint *)((int)this + 0x108) = _Size;
      pvVar4 = _malloc(_Size);
      *(void **)((int)this + 0x100) = pvVar4;
    }
    _strncpy(*(char **)((int)this + 0x100),pcVar6,uVar7);
    *(uint *)((int)this + 0x104) = uVar7;
    *(undefined1 *)(uVar7 + *(int *)((int)this + 0x100)) = 0;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004e9bc0 @ 004e9bc0 ////

/* WARNING: Removing unreachable block (ram,0x004e9e62) */
/* WARNING: Removing unreachable block (ram,0x004e9eb1) */

undefined4 __fastcall FUN_004e9bc0(void *param_1)

{
  int *this;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte abStack_c4 [12];
  undefined4 uStack_b8;
  undefined4 *puStack_98;
  char acStack_84 [20];
  undefined1 *puStack_70;
  void *apvStack_6c [2];
  uint uStack_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caa2d1;
  pvStack_c = ExceptionList;
  bVar3 = false;
  bVar2 = false;
  ExceptionList = &pvStack_c;
  if ((*(int *)((int)param_1 + 0x1d8) != 0) &&
     (ExceptionList = &pvStack_c, piVar5 = (int *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8)),
     piVar5 != (int *)0x0)) {
    cVar4 = (**(code **)(*piVar5 + 0xa4))();
    if (((cVar4 == '\0') || (pvVar6 = (void *)FUN_004cba90((int)piVar5), pvVar6 == param_1)) &&
       (cVar4 = (**(code **)(*piVar5 + 0xc4))(), cVar4 == '\0')) {
      if (*(int *)((int)param_1 + 0x1d8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
      }
      if (*(int *)(iVar7 + 0x2b8) == 5) goto LAB_004e9ebe;
    }
    puStack_98 = DAT_0104acbc;
    if (DAT_0104acbc != &DAT_0104acc8) {
      do {
        this = (int *)puStack_98[2];
        iVar7 = 0;
        iVar8 = FUN_004cba90((int)this);
        if (iVar8 != 0) {
          iVar7 = FUN_004cba90((int)this);
          iVar7 = *(int *)(iVar7 + 0xb4);
        }
        if ((((this == (int *)0x0) || (this == piVar5)) ||
            ((cVar4 = (**(code **)(*this + 0xa4))(), cVar4 != '\0' &&
             (iVar7 != *(int *)((int)param_1 + 0xb4))))) ||
           ((cVar4 = (**(code **)(*this + 0xc4))(), cVar4 != '\0' || (this[0xae] != 5)))) {
LAB_004e9d3c:
          bVar1 = false;
        }
        else {
          puVar9 = FUN_004cd890(piVar5,apvStack_6c);
          uStack_4 = 0;
          puVar10 = FUN_004cd890(this,apvStack_4c);
          bVar3 = true;
          bVar2 = true;
          uStack_4 = 1;
          uStack_b8 = 0x4e9d15;
          uVar11 = FUN_00401ec0(puVar10,puVar9);
          if ((char)uVar11 == '\0') goto LAB_004e9d3c;
          puVar9 = (undefined4 *)FUN_00528450((int)piVar5);
          puVar10 = (undefined4 *)FUN_00528450((int)this);
          uStack_b8 = 0x4e9d31;
          uVar11 = FUN_00401ec0(puVar10,puVar9);
          if ((char)uVar11 == '\0') goto LAB_004e9d3c;
          bVar1 = true;
        }
        if ((bVar2) && (bVar2 = false, 0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = 0xffffffff;
        if ((bVar3) && (bVar3 = false, 0x14 < uStack_64)) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_6c[0]);
        }
        if (bVar1) {
          acStack_84[0] = '\0';
          uStack_4 = 2;
          FUN_004b63b0(*(void **)((int)param_1 + 0x1d8),apvStack_2c);
          uStack_4._0_1_ = 3;
          uStack_b8 = 0x4e9df3;
          cVar4 = (**(code **)(*this + 0x1d4))();
          uStack_4 = CONCAT31(uStack_4._1_3_,2);
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (cVar4 != '\0') {
            puStack_70 = &stack0xffffff30;
            pbVar12 = abStack_c4;
            abStack_c4[0] = 0;
            uVar13 = 0;
            uVar14 = 0x14;
            FUN_004015d0(&stack0xffffff30,acStack_84,0);
            puVar9 = FUN_004bc270(pbVar12,uVar13,uVar14);
            if (puVar9 != (undefined4 *)0x0) {
              FUN_004e9820(param_1,puVar9);
              uStack_b8 = 0x4e9ea0;
              FUN_005b5f40(*(void **)((int)param_1 + 0xb4),(int)piVar5,this);
              uStack_4 = 0xffffffff;
              break;
            }
          }
        }
        uStack_4 = 0xffffffff;
        puStack_98 = (undefined4 *)puStack_98[1];
      } while (puStack_98 != &DAT_0104acc8);
    }
  }
LAB_004e9ebe:
  if (((*(int *)((int)param_1 + 0x1c0) == 0) && (*(int *)((int)param_1 + 0x1d8) != 0)) &&
     (iVar7 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8)), iVar7 != 0)) {
    if (*(int *)((int)param_1 + 0x1d8) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
    }
    cVar4 = (**(code **)(*piVar5 + 0xa4))();
    if (cVar4 != '\0') {
      if (*(int *)((int)param_1 + 0x1d8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
      }
      pvVar6 = (void *)FUN_004cba90(iVar7);
      if (pvVar6 != param_1) {
        ExceptionList = pvStack_c;
        return 0;
      }
    }
    if (*(int *)((int)param_1 + 0x1d8) == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
    }
    cVar4 = (**(code **)(*piVar5 + 0xc4))();
    if (cVar4 == '\0') {
      if (*(int *)((int)param_1 + 0x1d8) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
      }
      if (((*(int *)(iVar7 + 0x2b8) == 5) && (*(int *)((int)param_1 + 0x1d8) != 0)) &&
         (*(char *)((int)param_1 + 0x9c) == '\0')) {
        ExceptionList = pvStack_c;
        return 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION FUN_004e9fa0 @ 004e9fa0 ////

void __thiscall FUN_004e9fa0(void *this,undefined4 *param_1,float param_2)

{
  int *piVar1;
  byte bVar2;
  uint _Count;
  char *_Source;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  char *local_30;
  uint local_2c;
  uint local_28;
  char local_24 [20];
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa2e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = __strnicmp((char *)*param_1,"ai_stunt_fail",0xd);
  if ((iVar3 == 0) ||
     ((iVar4 = __strnicmp((char *)*param_1,"ai_",3), iVar4 != 0 &&
      (iVar4 = __strnicmp((char *)*param_1,"endshoot",8), iVar4 != 0)))) {
    puVar7 = *(undefined4 **)((int)this + 0xbc);
    if (puVar7 != *(undefined4 **)((int)this + 0xc0)) {
      do {
        pbVar5 = (byte *)*puVar7;
        pbVar6 = (byte *)*param_1;
        do {
          bVar2 = *pbVar5;
          bVar8 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_004ea054:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_004ea059;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar8 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_004ea054;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_004ea059:
        if (iVar4 == 0) {
          if (((float)puVar7[8] != param_2) && (DAT_0104d8e8 != (void *)0x0)) {
            FUN_005f54f0(DAT_0104d8e8,(int)this);
          }
          puVar7[8] = param_2;
          goto LAB_004ea109;
        }
        puVar7 = puVar7 + 9;
      } while (puVar7 != *(undefined4 **)((int)this + 0xc0));
    }
    local_30 = local_24;
    local_24[0] = '\0';
    local_2c = 0;
    local_28 = 0x14;
    _Count = param_1[1];
    local_4 = 0;
    _Source = (char *)*param_1;
    if (0x13 < _Count) {
      local_28 = _Count + 0x20 & 0xffffffe0;
      local_30 = _malloc(local_28);
    }
    _strncpy(local_30,_Source,_Count);
    local_30[_Count] = '\0';
    local_10 = param_2;
    local_2c = _Count;
    FUN_004e4c90((void *)((int)this + 0xb8),&local_30);
    local_4 = 0xffffffff;
    if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
  }
LAB_004ea109:
  if ((*(int *)((int)this + 0x15c) != 0) && ((*(int *)((int)this + 0x248) != 0 || (iVar3 == 0)))) {
    FUN_009757a0(*(void **)(*(int *)((int)this + 0x15c) + 0x214),(byte *)*param_1,param_2,1);
    ExceptionList = local_c;
    return;
  }
  puVar7 = *(undefined4 **)((int)this + 0x248);
  if (puVar7 != (undefined4 *)0x0) {
    piVar1 = puVar7 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(1);
    }
    (**(code **)(*(int *)((int)this + 0x234) + 4))();
    *(undefined4 *)((int)this + 0x248) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x234))();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ea1c0 @ 004ea1c0 ////

void __thiscall FUN_004ea1c0(void *this,undefined4 *param_1)

{
  FUN_0043a2d0((void *)((int)this + 0x288),param_1);
  return;
}


//// FUNCTION FUN_004ea1d0 @ 004ea1d0 ////

/* WARNING: Removing unreachable block (ram,0x004eaafa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ea1d0(void *param_1)

{
  float fVar1;
  char cVar2;
  undefined2 uVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar10;
  float10 fVar11;
  ulonglong uVar12;
  char **ppcVar13;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  float local_10c;
  float local_108;
  void *local_104;
  float local_100;
  int local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa3a5;
  pvStack_c = ExceptionList;
  if ((DAT_0104a974 == 0) || (ExceptionList = &pvStack_c, *(float *)(DAT_0104a974 + 0x80) == 0.0)) {
    if ((DAT_0104add4 & 1) == 0) {
      DAT_0104add4 = DAT_0104add4 | 1;
      _DAT_0104add0 = 0.0;
    }
    if ((DAT_0104add4 & 2) == 0) {
      DAT_0104add4 = DAT_0104add4 | 2;
      DAT_0104adcc = 0.0;
    }
    if ((DAT_0104add4 & 4) == 0) {
      DAT_0104add4 = DAT_0104add4 | 4;
      _DAT_0104adc8 = 0.0;
    }
    if ((DAT_0104add4 & 8) == 0) {
      DAT_0104add4 = DAT_0104add4 | 8;
      DAT_0104adc4 = 0.0;
    }
    if ((DAT_0104add4 & 0x10) == 0) {
      DAT_0104add4 = DAT_0104add4 | 0x10;
      _DAT_0104adc0 = 0.0;
    }
    if ((DAT_0104add4 & 0x20) == 0) {
      DAT_0104add4 = DAT_0104add4 | 0x20;
      _DAT_0104adbc = 0.0;
    }
    ExceptionList = &pvStack_c;
    local_104 = param_1;
    if (DAT_0104adb8 == '\0') {
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      ExceptionList = &pvStack_c;
      _strncpy(local_12c,"stunts",6);
      local_128 = 6;
      local_12c[6] = '\0';
      local_4 = 0;
      FUN_0055c540(local_e4,&local_12c);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"healththreshold",0xf);
      local_128 = 0xf;
      local_12c[0xf] = '\0';
      local_4._0_1_ = 3;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      _DAT_0104add0 = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"successfailure",0xe);
      local_128 = 0xe;
      local_12c[0xe] = '\0';
      local_4._0_1_ = 4;
      FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x1);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x20;
      local_12c = _malloc(0x20);
      _strncpy(local_12c,"stuntabilityinjurymodifier",0x1a);
      local_128 = 0x1a;
      local_12c[0x1a] = '\0';
      local_4._0_1_ = 5;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      DAT_0104adcc = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"maxhealthability",0x10);
      local_128 = 0x10;
      local_12c[0x10] = '\0';
      local_4._0_1_ = 6;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      _DAT_0104adc8 = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"minhealthability",0x10);
      local_128 = 0x10;
      local_12c[0x10] = '\0';
      local_4._0_1_ = 7;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      DAT_0104adc4 = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"stuntchancelow",0xe);
      local_128 = 0xe;
      local_12c[0xe] = '\0';
      local_4._0_1_ = 8;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      _DAT_0104adb4 = (float)fVar11;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"stuntchancemedium",0x11);
      local_128 = 0x11;
      local_12c[0x11] = '\0';
      local_4._0_1_ = 9;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      _DAT_0104adb0 = (float)fVar11;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"stuntchancehigh",0xf);
      local_128 = 0xf;
      local_12c[0xf] = '\0';
      local_4._0_1_ = 10;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      _DAT_0104adac = (float)fVar11;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"stuntchancemin",0xe);
      local_128 = 0xe;
      local_12c[0xe] = '\0';
      local_4._0_1_ = 0xb;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      _DAT_0104adc0 = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"stuntchancemax",0xe);
      local_128 = 0xe;
      local_12c[0xe] = '\0';
      local_4._0_1_ = 0xc;
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      FUN_00407070(&local_10c,(float)fVar11);
      _DAT_0104adbc = local_10c;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"luckycharmbonus",0xf);
      local_128 = 0xf;
      local_12c[0xf] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0xd);
      fVar11 = FUN_00558610(local_e4,&local_12c,0.0);
      _DAT_0104ada8 = (float)fVar11;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      DAT_0104adb8 = '\x01';
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
    }
    uVar3 = FUN_005b60b0(*(int *)((int)param_1 + 0xb4));
    if ((char)uVar3 != '\0') {
      iVar8 = *(int *)((int)param_1 + 0x194);
      local_108 = 0.0;
      local_fc = 0;
      if (iVar8 != (int)param_1 + 0x1a0) {
        do {
          pfVar4 = (float *)FUN_0048c9e0(*(void **)(iVar8 + 8),&local_f0);
          if ((0.0 < *pfVar4) && (iVar5 = FUN_0048c9f0(*(int *)(iVar8 + 8)), iVar5 != 0)) {
            iVar5 = FUN_0048c9f0(*(int *)(iVar8 + 8));
            iVar5 = FUN_005a64e0(iVar5);
            if (iVar5 == 0) {
              iVar5 = FUN_0048c9f0(*(int *)(iVar8 + 8));
              piVar6 = (int *)FUN_005a6470(iVar5);
            }
            else {
              iVar5 = FUN_0048c9f0(*(int *)(iVar8 + 8));
              piVar6 = (int *)FUN_005a64e0(iVar5);
            }
            param_1 = local_104;
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x1e4))(&local_f4);
              local_12c = local_120;
              local_120[0] = '\0';
              local_128 = 0;
              local_124 = 0x14;
              _strncpy(local_12c,"Stunts",6);
              local_128 = 6;
              local_12c[6] = '\0';
              ppcVar13 = &local_12c;
              pfVar4 = &fStack_ec;
              local_4 = 0xe;
              pvVar7 = (void *)FUN_00577370((int)piVar6);
              FUN_00441750(pvVar7,pfVar4,ppcVar13);
              local_4 = 0xffffffff;
              if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
                _free(local_12c);
              }
              if (local_f4 < _DAT_0104add0) {
                fStack_f8 = DAT_0104adcc;
              }
              else {
                fStack_f8 = 1.0;
              }
              FUN_00407070(&fStack_e8,fStack_f8);
              fVar11 = FUN_0042aa00((float *)&DAT_0104adc8,DAT_0104adc4);
              FUN_00407070(&local_10c,(float)(fVar11 * (float10)local_f4 + (float10)DAT_0104adc4));
              FUN_004bd4d0(&local_10c,fStack_e8);
              fVar11 = FUN_004728e0(&fStack_ec,local_10c);
              FUN_00407070(&local_100,(float)fVar11);
              local_108 = local_100 + local_108;
              local_fc = local_fc + 1;
              param_1 = local_104;
            }
          }
          iVar8 = *(int *)(iVar8 + 4);
        } while (iVar8 != (int)param_1 + 0x1a0);
        if (0 < local_fc) {
          local_100 = local_108 / (float)local_fc;
          *(float *)((int)param_1 + 0xf8) = local_100;
          pfVar4 = (float *)FUN_004b58b0(*(void **)((int)param_1 + 0x1d8),&local_f0);
          fVar1 = local_100 - *pfVar4;
          if (0.0 <= fVar1) {
            local_108 = (_DAT_0104adac - _DAT_0104adb0) * fVar1 + _DAT_0104adb0;
          }
          else {
            local_108 = _DAT_0104adb0 - (_DAT_0104adb4 - _DAT_0104adb0) * fVar1;
          }
          iVar8 = AwardBonusManager_Get();
          uVar9 = extraout_ECX;
          uVar10 = extraout_EDX;
          fVar1 = local_108;
          if (iVar8 != 0) {
            iVar8 = 0xe;
            pvVar7 = (void *)AwardBonusManager_Get();
            cVar2 = AwardBonusManager_IsBonusActive(pvVar7,iVar8);
            uVar9 = extraout_ECX_00;
            uVar10 = extraout_EDX_00;
            fVar1 = local_108;
            if (cVar2 != '\0') {
              fVar1 = local_108 + _DAT_0104ada8;
            }
          }
          if (fVar1 <= _DAT_0104adc0) {
            fVar1 = _DAT_0104adc0;
          }
          local_100 = fVar1;
          if (_DAT_0104adbc <= fVar1) {
            local_100 = _DAT_0104adbc;
          }
          if (0.0 <= local_100) {
            if (1.0 < local_100) {
              local_100 = 1.0;
            }
          }
          else {
            local_100 = 0.0;
          }
          *(float *)((int)param_1 + 0xf4) = local_100;
          if (DAT_0104add8 == 0) {
            uVar12 = FUN_00990ae0(uVar9,uVar10);
            DAT_0104add8 = (uint)uVar12;
          }
          DAT_0104add8 = DAT_0104add8 * 0x19660d + 0x3c6ef35f;
          local_f0 = (float)(DAT_0104add8 >> 6 & 0x7fffff);
          if ((float)(int)local_f0 * 1.192093e-07 < *(float *)((int)param_1 + 0xf4)) {
            *(undefined1 *)((int)param_1 + 0xf0) = 0;
          }
          else {
            *(undefined1 *)((int)param_1 + 0xf0) = 1;
          }
          goto LAB_004eab2f;
        }
      }
      *(undefined1 *)((int)param_1 + 0xf0) = 0;
    }
  }
LAB_004eab2f:
  local_104 = (void *)0x3f800000;
  if (*(char *)((int)param_1 + 0xf0) == '\0') {
    local_104 = (void *)0x0;
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  _strncpy(local_12c,"ai_stunt_fail",0xd);
  local_128 = 0xd;
  local_12c[0xd] = '\0';
  local_4 = 0xf;
  FUN_004e9fa0(param_1,&local_12c,(float)local_104);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004eabd0 @ 004eabd0 ////

void __fastcall FUN_004eabd0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1fd00;
  return;
}


//// FUNCTION FUN_004eac40 @ 004eac40 ////

void * __cdecl FUN_004eac40(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00caa3e1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004e4980(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x34);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_004eace0 @ 004eace0 ////

void __fastcall FUN_004eace0(void *param_1)

{
  undefined4 *puVar1;
  uint _Count;
  char *_Source;
  int *piVar2;
  float fVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint _Size;
  void *pvVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  char **ppcVar13;
  float fVar14;
  int local_68;
  int local_5c;
  void *local_50;
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
  puStack_8 = &LAB_00caa403;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x168) = DAT_00e4fa4c;
  piVar5 = *(int **)((int)param_1 + 0x260);
  if ((piVar5 != (int *)0x0) ||
     (piVar5 = (int *)FUN_005b2780(*(int *)((int)param_1 + 0xb4)), piVar5 != (int *)0x0)) {
    FUN_0043af50(*(int *)((int)param_1 + 0xb4),piVar5);
  }
  for (iVar8 = *(int *)((int)param_1 + 0x194); iVar8 != (int)param_1 + 0x1a0;
      iVar8 = *(int *)(iVar8 + 4)) {
    piVar5 = (int *)FUN_0048c950(*(int *)(iVar8 + 8));
    if (piVar5 == (int *)0x0) {
      bVar4 = FUN_0048c9a0(*(int *)(iVar8 + 8));
      if (bVar4) {
        FUN_0048c780(*(int *)(iVar8 + 8));
      }
    }
    else {
      FUN_0043b080(*(int *)((int)param_1 + 0xb4),piVar5);
    }
  }
  puVar6 = FUN_004b63b0(*(void **)((int)param_1 + 0x1d8),local_2c);
  _Count = puVar6[1];
  _Source = (char *)*puVar6;
  if (*(uint *)((int)param_1 + 0x174) <= _Count) {
    if (0x14 < *(uint *)((int)param_1 + 0x174)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_1 + 0x16c));
    }
    _Size = _Count + 0x20 & 0xffffffe0;
    *(uint *)((int)param_1 + 0x174) = _Size;
    pvVar7 = _malloc(_Size);
    *(void **)((int)param_1 + 0x16c) = pvVar7;
  }
  _strncpy(*(char **)((int)param_1 + 0x16c),_Source,_Count);
  *(uint *)((int)param_1 + 0x170) = _Count;
  *(undefined1 *)(_Count + *(int *)((int)param_1 + 0x16c)) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_68 = 0;
  iVar8 = FUN_005b25c0(*(int *)((int)param_1 + 0xb4));
  if (iVar8 != 0) {
    piVar5 = (int *)(iVar8 + 0xac);
    local_5c = 4;
    do {
      if (piVar5[-1] != *piVar5) {
        puVar6 = (undefined4 *)(piVar5[-1] + 0x14);
        do {
          piVar2 = (int *)*puVar6;
          if (piVar2 != (int *)0x0) {
            FUN_0043b220(*(int *)((int)param_1 + 0xb4),piVar2);
            pfVar9 = (float *)FUN_00440130((float *)&local_50,0xd);
            fVar3 = *pfVar9;
            local_4c = local_40;
            local_40[0] = '\0';
            local_48 = 0;
            local_44 = 0x14;
            _strncpy(local_4c,"Movies",6);
            local_48 = 6;
            local_4c[6] = '\0';
            ppcVar13 = &local_4c;
            local_4 = 0;
            fVar14 = fVar3;
            pvVar7 = (void *)FUN_00577370((int)piVar2);
            FUN_004425f0(pvVar7,ppcVar13,fVar14);
            local_4 = 0xffffffff;
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
            FUN_005c0b90(*(void **)((int)param_1 + 0xb4),piVar2,fVar3);
            local_68 = local_68 + 1;
          }
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 6;
        } while (puVar1 != (undefined4 *)*piVar5);
      }
      piVar5 = piVar5 + 4;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
    FUN_004d99e0(iVar8);
    if (local_68 != 0) goto LAB_004eafae;
  }
  if (((((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x6c))) &&
       (*(int *)((int)param_1 + 0xb4) != 0)) &&
      ((iVar8 = FUN_005b10e0(*(int *)((int)param_1 + 0xb4)), iVar8 != 0 &&
       (iVar11 = *(int *)(iVar8 + 4), iVar11 != 0)))) &&
     ((local_50 = (void *)((*(int *)(iVar8 + 8) - iVar11) / 0x18), local_50 != (void *)0x0 &&
      (iVar11 != *(int *)(iVar8 + 8))))) {
    do {
      if (*(int **)(iVar11 + 0x14) != (int *)0x0) {
        FUN_005c0b90(*(void **)((int)param_1 + 0xb4),*(int **)(iVar11 + 0x14),0.0);
      }
      iVar11 = iVar11 + 0x18;
    } while (iVar11 != *(int *)(iVar8 + 8));
  }
LAB_004eafae:
  CProject_BuildMovieRecord(param_1);
  local_50 = operator_new(0xbc);
  local_4 = 1;
  if (local_50 == (void *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_005dcd60(local_50,(float)param_1);
  }
  local_4 = 0xffffffff;
  FUN_005c0990(*(void **)((int)param_1 + 0xb4),(int)puVar6);
  fVar12 = FUN_004df5d0((float)param_1);
  *(float *)((int)param_1 + 0xfc) = (float)fVar12;
  FUN_004e0780((float)param_1);
  FUN_004e2240((float)param_1);
  FUN_004aa180(DAT_0104a8ac,*(int **)((int)param_1 + 0xb4),0);
  if ((DAT_0104a974 == 0) ||
     (*(float *)(DAT_0104a974 + 0x6c) < 0.0 != (*(float *)(DAT_0104a974 + 0x6c) == 0.0))) {
    FUN_005b5570(*(void **)((int)param_1 + 0xb4),(int)param_1);
    iVar8 = FUN_005b3c50(*(int *)((int)param_1 + 0xb4));
    if (iVar8 != 0) {
      if (*(int *)(iVar8 + 0x1d8) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_004b5850(*(int *)(iVar8 + 0x1d8));
      }
      if (*(int *)((int)param_1 + 0x1d8) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
      }
      if (iVar11 == iVar10) {
        if (*(int *)((int)param_1 + 0x1d8) == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = (void *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
        }
        FUN_004cdca0(pvVar7,iVar8);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004eb0b0 @ 004eb0b0 ////

undefined4 * __fastcall FUN_004eb0b0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa53d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1fd2c;
  param_1[0x19] = &PTR_LAB_00d1fd0c;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_1 + 0x28;
  param_1[0x28] = &PTR_FUN_00d18c3c;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  local_4._0_1_ = 4;
  uVar5 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0x32) = uVar5;
  FUN_00471b10((longlong *)(param_1 + 0x32));
  *(ulonglong *)(param_1 + 0x34) = uVar5;
  FUN_00471b10((longlong *)(param_1 + 0x34));
  *(ulonglong *)(param_1 + 0x36) = uVar5;
  FUN_00471b10((longlong *)(param_1 + 0x36));
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  FUN_00471b10((longlong *)(param_1 + 0x38));
  FUN_0043b520(param_1 + 0x3a,0.0);
  FUN_0043b520(param_1 + 0x3b,0.0);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_1 + 0x43;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x14;
  param_1[0x48] = 4;
  param_1[0x49] = param_1 + 0x4c;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x14;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = param_1 + 0x52;
  param_1[0x52] = &PTR_LAB_00d1f05c;
  param_1[0x57] = 0;
  local_4._0_1_ = 7;
  param_1[0x58] = 0;
  FUN_0043b520(param_1 + 0x59,0.0);
  FUN_0043b520(param_1 + 0x5a,0.0);
  param_1[0x5b] = param_1 + 0x5e;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0x14;
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  puVar2 = param_1 + 0x68;
  param_1[0x6a] = 0;
  *puVar2 = 0;
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[99] = &PTR_LAB_00d1e418;
  param_1[0x65] = puVar2;
  *puVar2 = param_1 + 100;
  param_1[0x70] = 0;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = param_1 + 0x71;
  param_1[0x71] = &PTR_FUN_00d1e3d4;
  param_1[0x76] = 0;
  param_1[0x77] = param_1 + 0x7a;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0x14;
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = param_1 + 0x7f;
  param_1[0x7f] = &PTR_LAB_00d1e3c4;
  param_1[0x84] = 0;
  param_1[0x85] = param_1 + 0x88;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0x14;
  param_1[0x90] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = param_1 + 0x8d;
  param_1[0x8d] = &PTR_LAB_00d1fc10;
  param_1[0x92] = 0;
  param_1[0x96] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = param_1 + 0x93;
  param_1[0x93] = &PTR_FUN_00d18c4c;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 1;
  param_1[0xa1] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa9] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  puVar2 = param_1 + 0xab;
  param_1[0xad] = 0;
  *puVar2 = 0;
  param_1[0xac] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xa6] = &PTR_LAB_00d1fd00;
  param_1[0xa8] = puVar2;
  *puVar2 = param_1 + 0xa7;
  puVar1 = param_1 + 0xb3;
  *puVar1 = 0;
  param_1[0xb4] = 0;
  *puVar1 = *puVar1 & 0xfffffffc | 0xc;
  param_1[0xb5] = param_1 + 0xb8;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0x14;
  local_4 = CONCAT31(local_4._1_3_,0x16);
  param_1[0xbe] = 0;
  puVar2 = param_1 + 0xc0;
  local_18 = 2;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[7] = 0x3f9c61ab;
    puVar2 = puVar2 + 10;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  param_1[0x25] = param_1;
  FUN_00acdb9e(0xe51bd0);
  iVar3 = FUN_0097dda0();
  param_1[0x26] = iVar3;
  if (s___AUSliderSetting_CShot_TM___00e51bb0[0x1d] != '\0') {
    iVar3 = 0x8c;
    pcVar6 = "ProjectLink";
    pcVar4 = (char *)FUN_00acdb9e(0xe51bd0);
    FUN_0097df60(pcVar4,pcVar6,iVar3);
    s___AUSliderSetting_CShot_TM___00e51bb0[0x1d] = '\0';
  }
  if ((undefined4 *)param_1[0xa3] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0xa3],(undefined4 *)param_1[0xa4]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xa3]);
  }
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xb3] = param_1[0xb3] & 0xfffffffc;
  FUN_004015d0(param_1 + 0xb5,"",0);
  param_1[0xbd] = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)((int)param_1 + 0x2fd) = 0;
  param_1[199] = 0;
  param_1[0xd1] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004eb540 @ 004eb540 ////

void __fastcall FUN_004eb540(void *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  void *pvVar8;
  void *pvStack_4;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x248);
  pvStack_4 = param_1;
  if (puVar1 != (undefined4 *)0x0) {
    piVar6 = puVar1 + 0x12;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(*(int *)((int)param_1 + 0x234) + 4))();
    *(undefined4 *)((int)param_1 + 0x248) = 0;
    (*(code *)**(undefined4 **)((int)param_1 + 0x234))();
  }
  bVar2 = FUN_0043b920(0xe4fa4c);
  if (bVar2) {
    pfVar4 = (float *)FUN_0043b540(&pvStack_4,0.0,1.0);
    FUN_0043b5e0((void *)((int)param_1 + 0xec),pfVar4);
  }
  if (*(int *)((int)param_1 + 0x1d8) == 0) {
    FUN_004d9a80(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
    FUN_004d93a0(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
    *(undefined4 *)((int)param_1 + 0x1c0) = 0;
    return;
  }
  pvVar8 = *(void **)(*(int *)((int)param_1 + 0xb4) + 0xa0);
  if (pvVar8 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x15c) != 0) {
      uVar5 = FUN_004dd6e0(pvVar8);
      if ((char)uVar5 == '\0') {
        FUN_004d9a80(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
        FUN_004d93a0(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
        *(undefined4 *)((int)param_1 + 0x1c0) = 0;
        return;
      }
      if (*(int *)((int)param_1 + 0x1d8) == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
      }
      cVar3 = (**(code **)(*piVar6 + 0xc4))();
      if (cVar3 == '\0') {
        FUN_004b5830(*(void **)((int)param_1 + 0x1d8),(int)param_1);
        FUN_004d98f0(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
        FUN_004dd970(*(void **)(*(int *)((int)param_1 + 0xb4) + 0xa0));
        if (*(int **)((int)param_1 + 0x15c) != (int *)0x0) {
          cVar3 = (**(code **)(**(int **)((int)param_1 + 0x15c) + 0xcc))();
          if (cVar3 != '\0') {
            FUN_00977920(*(void **)(*(int *)((int)param_1 + 0x15c) + 0x214));
            *(undefined4 *)((int)param_1 + 0x1c0) = 3;
            FUN_004d9460(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
            iVar7 = FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
            FUN_0052ba00(iVar7);
            FUN_004ea1d0(param_1);
          }
        }
        return;
      }
      pvVar8 = *(void **)(*(int *)((int)param_1 + 0xb4) + 0xa0);
    }
    FUN_004d9a80((int)pvVar8);
    FUN_004d93a0(*(int *)(*(int *)((int)param_1 + 0xb4) + 0xa0));
  }
  *(undefined4 *)((int)param_1 + 0x1c0) = 0;
  return;
}


//// FUNCTION FUN_004eb900 @ 004eb900 ////

void __fastcall FUN_004eb900(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x144) = 1;
  *(undefined4 *)((int)param_1 + 0x1c0) = 4;
  FUN_004eace0(param_1);
  return;
}


//// FUNCTION FUN_004eb920 @ 004eb920 ////

undefined4 * __cdecl FUN_004eb920(undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa55b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3a0);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_004eb0b0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(this[0x28] + 4))();
  this[0x2d] = param_1;
  (**(code **)this[0x28])();
  FUN_004e9820(this,param_2);
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_004eb9b0 @ 004eb9b0 ////

void __fastcall FUN_004eb9b0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x1c0) = 4;
  FUN_004eace0(param_1);
  return;
}


//// FUNCTION FUN_004eb9c0 @ 004eb9c0 ////

void __cdecl FUN_004eb9c0(void *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00caa581;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_004e4980(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x34);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004ebac0 @ 004ebac0 ////

void __fastcall FUN_004ebac0(void *param_1)

{
  void *pvVar1;
  
  if ((DAT_0104a974 != 0) && (0.0 < *(float *)(DAT_0104a974 + 0x6c))) {
    FUN_004ea1d0(param_1);
    *(undefined1 *)((int)param_1 + 0x144) = 1;
    *(undefined4 *)((int)param_1 + 0x1c0) = 4;
    FUN_004eace0(param_1);
    pvVar1 = (void *)FUN_005b2330(*(int *)((int)param_1 + 0xb4));
    FUN_005c5980(pvVar1);
    return;
  }
  if (*(int *)((int)param_1 + 0x1d8) == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004b5850(*(int *)((int)param_1 + 0x1d8));
  }
  FUN_004cdca0(pvVar1,(int)param_1);
  FUN_004dc8f0(*(void **)(*(int *)((int)param_1 + 0xb4) + 0xa0),(int)param_1);
  *(undefined4 *)((int)param_1 + 0x1c0) = 1;
  *(undefined4 *)((int)param_1 + 0x164) = DAT_00e4fa4c;
  FUN_005b5500(*(void **)((int)param_1 + 0xb4),(int)param_1);
  return;
}


//// FUNCTION FUN_004ebbe0 @ 004ebbe0 ////

void * FUN_004ebbe0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_004eb9c0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x34 + (int)param_1);
}


//// FUNCTION FUN_004ebc10 @ 004ebc10 ////

void FUN_004ebc10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xd) {
    FUN_004e46f0(param_1);
  }
  return;
}


//// FUNCTION FUN_004ebc40 @ 004ebc40 ////

void __thiscall FUN_004ebc40(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  void *local_50 [2];
  uint local_48;
  undefined1 local_2c [16];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caa598;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004e4980(local_50,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x34;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (0x4ec4ec4U - iVar2 < param_2) {
      FUN_004e3410();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x34;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x4ec4ec4 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x34;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_004de600((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x34);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_004eac40(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_004eb9c0(pvVar5,param_2,local_50);
      FUN_004eac40(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x34));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x34;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004ebc10(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x34 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0x34 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      piVar1 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar1 - (int)param_1) / 0x34) < param_2) {
        FUN_004eac40(param_1,piVar1,param_1 + param_2 * 0xd);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004ebbe0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x34,local_50);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x34;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_004e4d50(param_1,(int *)(iVar3 + param_2 * -0x34),local_50);
      }
      else {
        pvVar4 = FUN_004eac40(piVar1 + param_2 * -0xd,piVar1,piVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_004e4a30((int)param_1,(int)(piVar1 + param_2 * -0xd),piVar1);
        FUN_004e4d50(param_1,param_1 + param_2 * 0xd,local_50);
      }
    }
  }
  FUN_004e3230((int)local_2c);
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004ebf40 @ 004ebf40 ////

void __thiscall FUN_004ebf40(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x34 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x34;
      goto LAB_004ebf85;
    }
  }
  iVar1 = 0;
LAB_004ebf85:
  FUN_004ebc40(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x34 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004ebfb0 @ 004ebfb0 ////

void __fastcall FUN_004ebfb0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xd) {
    FUN_004e46f0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004ec000 @ 004ec000 ////

void __fastcall FUN_004ec000(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xd) {
    FUN_004e46f0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004ec010 @ 004ec010 ////

void __thiscall FUN_004ec010(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x34) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x34))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_004eb9c0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x34;
    return;
  }
  FUN_004ebf40(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004ec0b0 @ 004ec0b0 ////

void FUN_004ec0b0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  undefined4 *puVar5;
  char *local_2a0;
  uint local_29c;
  uint local_298;
  char local_294 [20];
  undefined4 local_280;
  undefined1 local_27c [4];
  undefined4 *local_278;
  undefined4 *local_274;
  undefined4 local_270;
  char *local_26c;
  uint local_268;
  uint local_264;
  char local_260 [20];
  undefined4 local_24c;
  char *local_248;
  uint local_244;
  uint local_240;
  char local_23c [20];
  undefined4 local_228;
  char *local_224;
  undefined4 local_220;
  uint local_21c;
  char local_218 [20];
  char *local_204;
  undefined4 local_200;
  uint local_1fc;
  char local_1f8 [20];
  char *local_1e4;
  undefined4 local_1e0;
  uint local_1dc;
  char local_1d8 [20];
  char *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  char local_1b8 [20];
  char *local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  char local_198 [20];
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  void *local_144 [2];
  uint local_13c;
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa629;
  local_c = ExceptionList;
  DAT_0104add8 = 0;
  ExceptionList = &local_c;
  FUN_004ebfb0(0x104addc);
  local_1e4 = local_1d8;
  local_1d8[0] = '\0';
  local_1e0 = 0;
  local_1dc = 0x14;
  _strncpy(local_1e4,"weather",7);
  local_1e0 = 7;
  local_1e4[7] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_1e4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_1dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e4);
  }
  cVar4 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar4 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    local_2a0 = local_294;
    local_294[0] = '\0';
    local_29c = 0;
    local_298 = 0x14;
    local_278 = (undefined4 *)0x0;
    local_274 = (undefined4 *)0x0;
    local_270 = 0;
    local_164 = local_158;
    local_158[0] = '\0';
    local_160 = 0;
    local_15c = 0x14;
    _strncpy(local_164,(char *)&PTR_LAB_00d20174,3);
    local_160 = 3;
    local_164[3] = '\0';
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar5 = FUN_005584e0(local_e4,local_144,&local_164);
    uVar2 = puVar5[1];
    pcVar3 = (char *)*puVar5;
    if (local_298 <= uVar2) {
      if (0x14 < local_298) {
                    /* WARNING: Subroutine does not return */
        _free(local_2a0);
      }
      local_298 = uVar2 + 0x20 & 0xffffffe0;
      local_2a0 = _malloc(local_298);
    }
    _strncpy(local_2a0,pcVar3,uVar2);
    local_2a0[uVar2] = '\0';
    local_29c = uVar2;
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164);
    }
    local_184 = local_178;
    local_178[0] = '\0';
    local_180 = 0;
    local_17c = 0x14;
    _strncpy(local_184,"requires",8);
    local_180 = 8;
    local_184[8] = '\0';
    local_4._0_1_ = 6;
    local_280 = FUN_00558750(local_e4,&local_184,0);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184);
    }
    cVar4 = FUN_00558bb0(local_e4,6);
    if (cVar4 != '\0') {
      cVar4 = FUN_00558bb0(local_e4,0);
      while (cVar4 != '\0') {
        local_26c = local_260;
        local_248 = local_23c;
        local_260[0] = '\0';
        local_268 = 0;
        local_264 = 0x14;
        local_23c[0] = '\0';
        local_244 = 0;
        local_240 = 0x14;
        local_1a4 = local_198;
        local_198[0] = '\0';
        local_1a0 = 0;
        local_19c = 0x14;
        _strncpy(local_1a4,"flag",4);
        local_1a0 = 4;
        local_1a4[4] = '\0';
        local_4._0_1_ = 8;
        local_24c = FUN_00558750(local_e4,&local_1a4,0);
        if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
          _free(local_1a4);
        }
        local_1c4 = local_1b8;
        local_1b8[0] = '\0';
        local_1c0 = 0;
        local_1bc = 0x14;
        _strncpy(local_1c4,(char *)&PTR_LAB_00d20174,3);
        local_1c0 = 3;
        local_1c4[3] = '\0';
        local_4 = CONCAT31(local_4._1_3_,9);
        puVar5 = FUN_005584e0(local_e4,local_104,&local_1c4);
        uVar2 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_240 <= uVar2) {
          if (0x14 < local_240) {
                    /* WARNING: Subroutine does not return */
            _free(local_248);
          }
          local_240 = uVar2 + 0x20 & 0xffffffe0;
          local_248 = _malloc(local_240);
        }
        _strncpy(local_248,pcVar3,uVar2);
        local_248[uVar2] = '\0';
        local_244 = uVar2;
        if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
          _free(local_104[0]);
        }
        if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c4);
        }
        local_204 = local_1f8;
        local_1f8[0] = '\0';
        local_200 = 0;
        local_1fc = 0x14;
        _strncpy(local_204,"name",4);
        local_200 = 4;
        local_204[4] = '\0';
        local_4 = CONCAT31(local_4._1_3_,10);
        puVar5 = FUN_005584e0(local_e4,local_124,&local_204);
        uVar2 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_264 <= uVar2) {
          if (0x14 < local_264) {
                    /* WARNING: Subroutine does not return */
            _free(local_26c);
          }
          local_264 = uVar2 + 0x20 & 0xffffffe0;
          local_26c = _malloc(local_264);
        }
        _strncpy(local_26c,pcVar3,uVar2);
        local_26c[uVar2] = '\0';
        local_268 = uVar2;
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124[0]);
        }
        if (0x14 < local_1fc) {
                    /* WARNING: Subroutine does not return */
          _free(local_204);
        }
        local_224 = local_218;
        local_218[0] = '\0';
        local_220 = 0;
        local_21c = 0x14;
        _strncpy(local_224,"requires",8);
        local_220 = 8;
        local_224[8] = '\0';
        local_4._0_1_ = 0xb;
        local_228 = FUN_00558750(local_e4,&local_224,0);
        local_4._0_1_ = 7;
        if (0x14 < local_21c) {
                    /* WARNING: Subroutine does not return */
          _free(local_224);
        }
        FUN_004e4bd0(local_27c,&local_26c);
        local_4 = CONCAT31(local_4._1_3_,4);
        if (0x14 < local_240) {
                    /* WARNING: Subroutine does not return */
          _free(local_248);
        }
        if (0x14 < local_264) {
                    /* WARNING: Subroutine does not return */
          _free(local_26c);
        }
        cVar4 = FUN_00558bb0(local_e4,2);
      }
      FUN_00558bb0(local_e4,5);
    }
    FUN_004ec010(&DAT_0104addc,&local_2a0);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (local_278 != (undefined4 *)0x0) {
      if (local_278 != local_274) {
        puVar5 = local_278 + 9;
        do {
          if (0x14 < (uint)puVar5[2]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*puVar5);
          }
          if (0x14 < (uint)puVar5[-7]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)puVar5[-9]);
          }
          puVar1 = puVar5 + 9;
          puVar5 = puVar5 + 0x12;
        } while (puVar1 != local_274);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_278);
    }
    local_278 = (undefined4 *)0x0;
    local_274 = (undefined4 *)0x0;
    local_270 = 0;
    if (0x14 < local_298) {
                    /* WARNING: Subroutine does not return */
      _free(local_2a0);
    }
    cVar4 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_004ec7b0 @ 004ec7b0 ////

void FUN_004ec7b0(void)

{
  FUN_004ebfb0(0x104addc);
  return;
}


//// FUNCTION FUN_004ec800 @ 004ec800 ////

void FUN_004ec800(void *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005998e0((int)param_1);
  TMCharacter_CancelAction(param_1,puVar1);
  return;
}


//// FUNCTION FUN_004ec840 @ 004ec840 ////

void __thiscall FUN_004ec840(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x304) = param_1;
  return;
}


//// FUNCTION FUN_004ec890 @ 004ec890 ////

int __fastcall FUN_004ec890(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
}


//// FUNCTION FUN_004ec9e0 @ 004ec9e0 ////

void __fastcall FUN_004ec9e0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004ec9f0 @ 004ec9f0 ////

void __fastcall FUN_004ec9f0(int param_1)

{
  char *_Str2;
  int iVar1;
  int *piVar2;
  float10 extraout_ST0;
  undefined4 uVar3;
  float local_4;
  
  _Str2 = (char *)FUN_00494df0("camera_unit");
  iVar1 = __stricmp("p_cam_handcrank.msh",_Str2);
  local_4 = 1.0;
  if (iVar1 != 0) {
    local_4 = 0.0;
  }
  FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)"ai_crank",local_4,0);
  piVar2 = (int *)FUN_005b2780(*(int *)(*(int *)(param_1 + 0x2fc) + 0xb4));
  piVar2 = (int *)FUN_00ace790(piVar2,0,&TM::CStaff::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x27c))();
    iVar1 = FUN_004725b0(iVar1);
    FUN_00566e40(iVar1);
    FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)0xd20184,(float)extraout_ST0,uVar3);
    return;
  }
  FUN_009757a0(*(void **)(param_1 + 0x214),(byte *)0xd20184,0.5,0);
  return;
}


//// FUNCTION FUN_004ecab0 @ 004ecab0 ////

undefined4 __thiscall FUN_004ecab0(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005b25c0(*(int *)(*(int *)((int)this + 0x2fc) + 0xb4));
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return 1;
  }
  uVar2 = FUN_004e1820(*(void **)((int)this + 0x2fc),param_1,param_2,param_3);
  return uVar2;
}


//// FUNCTION FUN_004ecb40 @ 004ecb40 ////

void __thiscall FUN_004ecb40(void *this,undefined4 param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10 [2];
  float afStack_8 [2];
  
  local_14 = 0;
  local_10[0] = 0;
  cVar1 = (**(code **)(*(int *)this + 0xdc))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  afStack_8[0] = 0.0;
  FUN_009782d0(*(void **)((int)this + 0x214),(int)local_10,(int)&local_14,(float *)&stack0xffffffe8,
               afStack_8);
  return;
}


//// FUNCTION FUN_004ecbb0 @ 004ecbb0 ////

float10 FUN_004ecbb0(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  float fStack_4;
  
  piVar1 = param_2;
  piVar8 = param_1;
  bVar2 = FUN_004f1df0(param_1,param_2);
  if (bVar2) {
    return (float10)0.0;
  }
  iVar3 = FUN_004f0150((int)piVar8,(int)piVar1);
  ppiVar6 = &param_1;
  piVar7 = piVar1;
  pvVar4 = (void *)FUN_005873c0((int)piVar8);
  pfVar5 = FUN_0042e910(pvVar4,(float *)ppiVar6,(int)piVar7);
  param_2 = (int *)*pfVar5;
  pfVar5 = &fStack_4;
  pvVar4 = (void *)FUN_005873c0((int)piVar1);
  pfVar5 = FUN_0042e910(pvVar4,pfVar5,(int)piVar8);
  return ((float10)*(float *)(&DAT_0104aeb4 + iVar3 * 0xd8) -
         (float10)*(float *)(&DAT_0104aeb0 + iVar3 * 0xd8)) *
         ((float10)(float)param_2 + (float10)*pfVar5) * (float10)0.5 +
         (float10)*(float *)(&DAT_0104aeb0 + iVar3 * 0xd8);
}


//// FUNCTION FUN_004ecbd5 @ 004ecbd5 ////

float10 FUN_004ecbd5(void)

{
  int iVar1;
  void *pvVar2;
  float *pfVar3;
  int unaff_ESI;
  int unaff_EDI;
  float fStack00000014;
  int iVar4;
  
  iVar1 = FUN_004f0150(unaff_EDI,unaff_ESI);
  pfVar3 = (float *)&stack0x00000010;
  iVar4 = unaff_ESI;
  pvVar2 = (void *)FUN_005873c0(unaff_EDI);
  pfVar3 = FUN_0042e910(pvVar2,pfVar3,iVar4);
  fStack00000014 = *pfVar3;
  pfVar3 = (float *)&stack0x00000008;
  pvVar2 = (void *)FUN_005873c0(unaff_ESI);
  pfVar3 = FUN_0042e910(pvVar2,pfVar3,unaff_EDI);
  return ((float10)*(float *)(&DAT_0104aeb4 + iVar1 * 0xd8) -
         (float10)*(float *)(&DAT_0104aeb0 + iVar1 * 0xd8)) *
         ((float10)fStack00000014 + (float10)*pfVar3) * (float10)0.5 +
         (float10)*(float *)(&DAT_0104aeb0 + iVar1 * 0xd8);
}


//// FUNCTION FUN_004eccd0 @ 004eccd0 ////

undefined4 * __thiscall FUN_004eccd0(void *this,byte param_1)

{
  FUN_004ec9e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ecd80 @ 004ecd80 ////

void __thiscall FUN_004ecd80(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar3 = 4;
    param_1 = "none";
  }
  else {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)(param_1 + 1);
  }
  FUN_004015d0((undefined4 *)((int)this + 0x1f8),param_1,uVar3);
  FUN_00974ee0((void *)((int)this + 0x25c),*(byte **)((int)this + 0x1f8),0);
  return;
}


//// FUNCTION FUN_004ed020 @ 004ed020 ////

void __fastcall FUN_004ed020(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  float10 fVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  float local_10;
  int local_c;
  
  local_c = *(int *)(param_1 + 0x1b4);
  if (local_c != param_1 + 0x1c0) {
    do {
      iVar7 = *(int *)(param_1 + 0x1b4);
      iVar1 = *(int *)(local_c + 8);
      if (iVar7 != param_1 + 0x1c0) {
        do {
          iVar10 = *(int *)(iVar7 + 8);
          iVar2 = *(int *)(iVar1 + 300);
          if (((*(int *)(iVar10 + 300) != iVar2) &&
              (uVar5 = FUN_00598ee0(iVar2), (char)uVar5 != '\0')) &&
             (uVar5 = FUN_00598ee0(*(int *)(iVar10 + 300)), (char)uVar5 != '\0')) {
            piVar9 = *(int **)(iVar10 + 300);
            piVar3 = *(int **)(iVar1 + 300);
            fVar8 = FUN_004ecbb0(piVar3,piVar9);
            local_10 = (float)fVar8;
            iVar10 = 9;
            pvVar6 = (void *)AwardBonusManager_Get();
            cVar4 = AwardBonusManager_IsBonusActive(pvVar6,iVar10);
            if (cVar4 != '\0') {
              pvVar6 = (void *)0x0;
              iVar10 = 9;
              AwardBonusManager_Get();
              fVar8 = AwardBonus_GetValue(iVar10,pvVar6);
              local_10 = (float)(fVar8 + (float10)local_10);
            }
            iVar10 = FUN_004f0150((int)piVar3,(int)piVar9);
            uVar5 = *(undefined4 *)(&DAT_0104aebc + iVar10 * 0xd8);
            puVar11 = (undefined4 *)(param_1 + 600);
            pvVar6 = (void *)FUN_005873c0((int)piVar3);
            pvVar6 = (void *)FUN_0042e770(pvVar6,(int)piVar9);
            FUN_0042e650(pvVar6,local_10,uVar5,puVar11);
          }
          iVar7 = *(int *)(iVar7 + 4);
        } while (iVar7 != param_1 + 0x1c0);
      }
      local_c = *(int *)(local_c + 4);
    } while (local_c != param_1 + 0x1c0);
  }
  return;
}


//// FUNCTION FUN_004ed2b0 @ 004ed2b0 ////

undefined4 * __thiscall FUN_004ed2b0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  puVar2 = param_1 + 8;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return this;
}


//// FUNCTION FUN_004ed330 @ 004ed330 ////

int * __cdecl FUN_004ed330(int param_1,int param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  int *piVar1;
  uint _Size;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar1 = (int *)(param_2 + 0x20);
  do {
    _Count = piVar1[-0x1b];
    _Source = *(char **)(param_2 + -0x50);
    piVar1 = piVar1 + -0x14;
    piVar4 = param_3 + -0x14;
    param_2 = param_2 + -0x50;
    if ((uint)param_3[-0x12] <= _Count) {
      if (0x14 < (uint)param_3[-0x12]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar4);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-0x12] = _Size;
      pvVar2 = _malloc(_Size);
      *piVar4 = (int)pvVar2;
    }
    _strncpy((char *)*piVar4,_Source,_Count);
    param_3[-0x13] = _Count;
    *(undefined1 *)(_Count + *piVar4) = 0;
    piVar5 = piVar1;
    piVar6 = param_3 + -0xc;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    param_3 = piVar4;
  } while (param_2 != param_1);
  return piVar4;
}


//// FUNCTION FUN_004ed430 @ 004ed430 ////

undefined4 * __thiscall FUN_004ed430(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  void **ppvVar8;
  char **ppcVar9;
  char *local_4c;
  uint uStack_48;
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa6a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_004df220(param_1);
  FUN_0040b940(this,iVar2);
  piVar1 = (int *)((int)this + 0x2e8);
  *(undefined ***)this = &PTR_FUN_00d2022c;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d2020c;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d201f4;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(int **)((int)this + 0x2f4) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1ec60;
  *(undefined4 *)((int)this + 0x2fc) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0043b460((undefined4 *)((int)this + 0x308));
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x2fc) = param_1;
  (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0x300) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  uVar3 = FUN_004df4a0(*(int *)((int)this + 0x2fc));
  ppvVar8 = local_2c;
  *(undefined4 *)((int)this + 0x304) = 0;
  pvVar4 = (void *)FUN_004df220(*(int *)((int)this + 0x2fc));
  FUN_004cd890(pvVar4,ppvVar8);
  local_4._0_1_ = 2;
  FUN_004073f0(local_2c,"_crew_00.flm",0xc);
  ppcVar9 = &local_4c;
  pvVar4 = (void *)FUN_004df4a0(*(int *)((int)this + 0x2fc));
  FUN_004b6330(pvVar4,ppcVar9);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 0x214) != (void *)0x0) {
    FUN_00971df0(*(void **)((int)this + 0x214));
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  FUN_00984440((int)this + 0x218);
  iVar2 = FUN_0097c880(local_4c,(int)local_2c[0],(undefined4 *)(*(int *)((int)this + 0x2fc) + 0x2cc)
                       ,0);
  *(int *)((int)this + 0x214) = iVar2;
  if (iVar2 == 0) {
    if (uStack_44 < 0x1d) {
      if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      uStack_44 = 0x20;
      local_4c = _malloc(0x20);
    }
    _strncpy(local_4c,"generated_scene_template.flm",0x1c);
    uStack_48 = 0x1c;
    local_4c[0x1c] = '\0';
    uVar5 = FUN_0097c880(local_4c,(int)local_2c[0],(undefined4 *)0x0,0);
    *(undefined4 *)((int)this + 0x214) = uVar5;
  }
  FUN_00984450();
  pvVar4 = *(void **)((int)this + 0x214);
  uVar6 = FUN_004de360(*(int *)((int)this + 0x2fc));
  FUN_009fda70(uVar6,pvVar4);
  iVar2 = *(int *)((int)this + 0x2fc);
  iVar7 = FUN_00975c50(*(void **)((int)this + 0x214),2);
  *(int *)(iVar2 + 0x280) = iVar7;
  iVar2 = 2;
  pvVar4 = (void *)FUN_005b2340(*(int *)(*(int *)((int)this + 0x2fc) + 0xb4));
  iVar2 = FUN_005a93c0(pvVar4,iVar2);
  if (iVar2 == 0) {
    *(undefined4 *)(*(int *)((int)this + 0x2fc) + 0x274) = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0x2fc);
    iVar7 = FUN_00975c50(*(void **)((int)this + 0x214),3);
    *(int *)(iVar2 + 0x274) = iVar7;
  }
  iVar2 = *(int *)((int)this + 0x2fc);
  iVar7 = FUN_00975c50(*(void **)((int)this + 0x214),6);
  *(int *)(iVar2 + 0x278) = iVar7;
  iVar2 = *(int *)((int)this + 0x2fc);
  iVar7 = FUN_00975c50(*(void **)((int)this + 0x214),5);
  *(int *)(iVar2 + 0x27c) = iVar7;
  FUN_004e1a10(*(void **)((int)this + 0x2fc),*(void **)((int)this + 0x214));
  FUN_0040b770(this);
  FUN_004015d0((void *)((int)this + 0x18c),local_4c,uStack_48);
  FUN_004039a0(this,uVar3);
  uVar3 = FUN_004df220(*(int *)((int)this + 0x2fc));
  (**(code **)(*(int *)((int)this + 0x2cc) + 4))();
  *(undefined4 *)((int)this + 0x2e0) = uVar3;
  (*(code *)**(undefined4 **)((int)this + 0x2cc))();
  *(undefined4 *)((int)this + 0x308) = 0x96;
  *(undefined1 *)((int)this + 0x318) = 0;
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_004ed760 @ 004ed760 ////

void __fastcall FUN_004ed760(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  float10 fVar4;
  char **ppcVar5;
  undefined1 uVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caa6ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d2022c;
  param_1[0x1e] = &PTR_LAB_00d2020c;
  param_1[0x28] = &PTR_FUN_00d201f4;
  local_4 = 1;
  if ((param_1[0xbf] != 0) && (*(char *)(DAT_00f87b04 + 0x86) != '\0')) {
    pvVar3 = (void *)FUN_004df220(param_1[0xbf]);
    if (pvVar3 != (void *)0x0) {
      FUN_004ca990(pvVar3,1);
      FUN_004cdec0(pvVar3);
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"gawp",4);
      local_28 = 4;
      local_2c[4] = '\0';
      uVar6 = 0;
      ppcVar5 = &local_2c;
      local_4._0_1_ = 2;
      pvVar3 = (void *)FUN_00529ef0((int)pvVar3);
      FUN_008b1ee0(pvVar3,ppcVar5,uVar6);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
    FUN_00972630((void *)param_1[0x85],0,-1.0,-1);
    if (((*(byte *)(param_1 + 0x9e) & 4) == 0) ||
       (fVar4 = FUN_009722e0(param_1[0x85],(byte *)"ai_ended_by_user"), (float10)1.0 != fVar4)) {
      FUN_004df4c0(param_1[0xbf]);
    }
    else {
      FUN_004eb9b0((void *)param_1[0xbf]);
    }
  }
  piVar2 = (int *)param_1[0x6d];
  piVar1 = param_1 + 0x70;
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  param_1[0x6d] = piVar1;
  *piVar1 = (int)(param_1 + 0x6c);
  param_1[0xba] = &PTR_FUN_00d1ec60;
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  if ((undefined4 *)param_1[0xbc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xbc] = param_1[0xbb];
  }
  if (param_1[0xbb] != 0) {
    *(undefined4 *)(param_1[0xbb] + 4) = param_1[0xbc];
  }
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  local_4 = 0xffffffff;
  FUN_0040b9e0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ed960 @ 004ed960 ////

void __cdecl FUN_004ed960(int *param_1,int *param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    _Count = param_3[1];
    _Source = (char *)*param_3;
    if ((uint)param_1[2] <= _Count) {
      if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_1);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_1[2] = _Size;
      pvVar1 = _malloc(_Size);
      *param_1 = (int)pvVar1;
    }
    _strncpy((char *)*param_1,_Source,_Count);
    param_1[1] = _Count;
    piVar4 = param_1 + 8;
    *(undefined1 *)(_Count + *param_1) = 0;
    param_1 = param_1 + 0x14;
    piVar3 = param_3 + 8;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
  } while( true );
}


//// FUNCTION FUN_004eda30 @ 004eda30 ////

int * __cdecl FUN_004eda30(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar3 = param_1 + 8;
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined1 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 0x14;
      _Count = piVar3[-7];
      _Source = (char *)*param_1;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_3[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_3 = (int)pvVar1;
      }
      _strncpy((char *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined1 *)(_Count + *param_3) = 0;
      piVar4 = piVar3;
      piVar5 = param_3 + 8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
    }
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
    piVar3 = piVar3 + 0x14;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004edae0 @ 004edae0 ////

int * __cdecl FUN_004edae0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar3 = param_1 + 8;
  do {
    if (param_3 != (int *)0x0) {
      *param_3 = (int)(param_3 + 3);
      *(undefined1 *)(param_3 + 3) = 0;
      param_3[1] = 0;
      param_3[2] = 0x14;
      _Count = piVar3[-7];
      _Source = (char *)*param_1;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_3[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_3 = (int)pvVar1;
      }
      _strncpy((char *)*param_3,_Source,_Count);
      param_3[1] = _Count;
      *(undefined1 *)(_Count + *param_3) = 0;
      piVar4 = piVar3;
      piVar5 = param_3 + 8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
    }
    param_1 = param_1 + 0x14;
    param_3 = param_3 + 0x14;
    piVar3 = piVar3 + 0x14;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_004edb90 @ 004edb90 ////

undefined4 * __thiscall FUN_004edb90(void *this,byte param_1)

{
  FUN_004ed760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004edc10 @ 004edc10 ////

void __cdecl FUN_004edc10(int *param_1,int param_2,undefined4 *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (int *)0x0) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      _Count = param_3[1];
      _Source = (char *)*param_3;
      if (0x13 < _Count) {
        _Size = _Count + 0x20 & 0xffffffe0;
        param_1[2] = _Size;
        pvVar1 = _malloc(_Size);
        *param_1 = (int)pvVar1;
      }
      _strncpy((char *)*param_1,_Source,_Count);
      param_1[1] = _Count;
      *(undefined1 *)(_Count + *param_1) = 0;
      piVar3 = param_3 + 8;
      piVar4 = param_1 + 8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
    }
    param_1 = param_1 + 0x14;
  }
  return;
}


//// FUNCTION FUN_004edd80 @ 004edd80 ////

void FUN_004edd80(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_004ec9e0(param_1);
  }
  return;
}


//// FUNCTION FUN_004eddb0 @ 004eddb0 ////

void __fastcall FUN_004eddb0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x14) {
    FUN_004ec9e0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004ede00 @ 004ede00 ////

int * FUN_004ede00(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_004edc10(param_1,param_2,param_3);
  return param_1 + param_2 * 0x14;
}


//// FUNCTION FUN_004ede40 @ 004ede40 ////

void FUN_004ede40(void)

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
  puStack_8 = &LAB_00caa6e8;
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


//// FUNCTION FUN_004edeb0 @ 004edeb0 ////

void __thiscall FUN_004edeb0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  undefined4 local_4c [12];
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caa708;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_6c,(char *)*param_3,param_3[1]);
  puVar6 = param_3 + 8;
  puVar7 = local_4c;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar4 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar4) / 0x50;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar4) / 0x50;
    }
    if (0x3333333U - iVar1 < param_2) {
      FUN_004ede40();
      uVar5 = extraout_ECX;
    }
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar4) / 0x50;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x3333333 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - iVar4) / 0x50;
      }
      if (uVar5 < iVar4 + param_2) {
        iVar4 = FUN_004ec890((int)this);
        uVar5 = iVar4 + param_2;
      }
      piVar2 = operator_new(uVar5 * 0x50);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar2;
      piVar3 = FUN_004edae0(*(undefined4 **)((int)this + 4),param_1,piVar2);
      FUN_004edc10(piVar3,param_2,&local_6c);
      FUN_004edae0(param_1,*(undefined4 **)((int)this + 8),piVar3 + param_2 * 0x14);
      iVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x50;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_004edd80(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar2 + uVar5 * 0x14;
      *(int **)((int)this + 8) = piVar2 + (param_2 + iVar4) * 0x14;
      *(int **)((int)this + 4) = piVar2;
    }
    else {
      piVar2 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar2 - (int)param_1) / 0x50) < param_2) {
        FUN_004edae0(param_1,piVar2,param_1 + param_2 * 0x14);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_004ede00(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x50,&local_6c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x50;
        *(int *)((int)this + 8) = iVar4;
        FUN_004ed960(param_1,(int *)(iVar4 + param_2 * -0x50),&local_6c);
      }
      else {
        piVar3 = FUN_004edae0(piVar2 + param_2 * -0x14,piVar2,piVar2);
        *(int **)((int)this + 8) = piVar3;
        FUN_004ed330((int)param_1,(int)(piVar2 + param_2 * -0x14),piVar2);
        FUN_004ed960(param_1,param_1 + param_2 * 0x14,&local_6c);
      }
    }
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004ee1f0 @ 004ee1f0 ////

void __thiscall FUN_004ee1f0(void *this,uint param_1)

{
  uint uVar1;
  int *piVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00caa720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3333333 < param_1) {
    ExceptionList = &local_10;
    FUN_004ede40();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x50;
  }
  if (uVar1 < param_1) {
    piVar2 = operator_new(param_1 * 0x50);
    local_8 = 0;
    FUN_004eda30(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),piVar2);
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      FUN_004edd80(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(int **)((int)this + 0xc) = piVar2 + param_1 * 0x14;
    *(int **)((int)this + 8) = piVar2;
    *(int **)((int)this + 4) = piVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004ee2f0 @ 004ee2f0 ////

void __thiscall FUN_004ee2f0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x50 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x50;
      goto LAB_004ee335;
    }
  }
  iVar1 = 0;
LAB_004ee335:
  FUN_004edeb0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x50 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004ee3b0 @ 004ee3b0 ////

void * __thiscall FUN_004ee3b0(void *this,byte param_1)

{
  thunk_FUN_004eddb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004ee3e0 @ 004ee3e0 ////

void __thiscall FUN_004ee3e0(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x50) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x50))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_004edc10(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x14;
    return;
  }
  FUN_004ee2f0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004ee490 @ 004ee490 ////

void * FUN_004ee490(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caa73b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x14);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    *(undefined4 *)((int)pvVar1 + 8) = 0;
    *(undefined4 *)((int)pvVar1 + 0xc) = 0;
    *(undefined4 *)((int)pvVar1 + 0x10) = 1;
    ExceptionList = local_c;
    return pvVar1;
  }
  ExceptionList = local_c;
  return (void *)0x0;
}


//// FUNCTION FUN_004ee4f0 @ 004ee4f0 ////

void __fastcall FUN_004ee4f0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    thunk_FUN_004eddb0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004ee510 @ 004ee510 ////

void __fastcall FUN_004ee510(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  void *this;
  int iVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  char **ppcVar16;
  undefined1 uVar17;
  char *local_9c;
  uint local_98;
  uint local_94;
  char local_90 [20];
  char *local_7c [13];
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa76b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00405870(param_1);
  pvVar6 = (void *)FUN_004df220(param_1[0xbf]);
  if (pvVar6 != (void *)0x0) {
    this = FUN_004ee490();
    iVar7 = FUN_004de180(param_1[0xbf]);
    if (iVar7 != 0) {
      iVar8 = *(int *)(iVar7 + 8);
      iVar1 = iVar7 + 0x14;
      uVar13 = 0;
      if (iVar8 != iVar1) {
        uVar13 = 0;
        do {
          iVar8 = *(int *)(iVar8 + 4);
          uVar13 = uVar13 + 1;
        } while (iVar8 != iVar1);
      }
      FUN_004ee1f0(this,uVar13);
      for (iVar7 = *(int *)(iVar7 + 8); iVar7 != iVar1; iVar7 = *(int *)(iVar7 + 4)) {
        iVar8 = *(int *)(iVar7 + 8);
        local_9c = local_90;
        local_90[0] = '\0';
        local_98 = 0;
        local_94 = 0x14;
        local_7c[0xb] = (char *)0x0;
        local_7c[10] = (char *)0x0;
        local_7c[9] = (char *)0x0;
        local_7c[7] = (char *)0x0;
        local_7c[6] = (char *)0x0;
        local_7c[5] = (char *)0x0;
        local_7c[3] = (char *)0x0;
        local_7c[2] = (char *)0x0;
        local_7c[1] = (char *)0x0;
        local_7c[8] = (char *)0x3f800000;
        local_7c[4] = (char *)0x3f800000;
        local_7c[0] = (char *)0x3f800000;
        _strncpy(local_9c,"",0);
        local_98 = 0;
        *local_9c = '\0';
        uVar13 = *(uint *)(iVar8 + 0xf0);
        local_4 = 0;
        pcVar3 = *(char **)(iVar8 + 0xec);
        if (local_94 <= uVar13) {
          if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
            _free(local_9c);
          }
          local_94 = uVar13 + 0x20 & 0xffffffe0;
          local_9c = _malloc(local_94);
        }
        _strncpy(local_9c,pcVar3,uVar13);
        local_9c[uVar13] = '\0';
        puVar12 = (undefined4 *)(iVar8 + 0x9c);
        ppcVar16 = local_7c;
        for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
          *ppcVar16 = (char *)*puVar12;
          puVar12 = puVar12 + 1;
          ppcVar16 = ppcVar16 + 1;
        }
        local_98 = uVar13;
        FUN_004ee3e0(this,&local_9c);
        local_4 = 0xffffffff;
        if (0x14 < local_94) {
                    /* WARNING: Subroutine does not return */
          _free(local_9c);
        }
      }
    }
    FUN_0097b260((void *)param_1[0x85],(int)this);
    FUN_004ca990(pvVar6,0);
    FUN_00a00ea0((void *)param_1[0x85],*(char **)(param_1[0xbf] + 0x100));
    pbVar15 = (byte *)0x0;
    if (0 < *(int *)(param_1[0xbf] + 0x284)) {
      iVar7 = 0;
      do {
        FUN_00979320((void *)param_1[0x85],pbVar15,
                     *(char **)(iVar7 + *(int *)(param_1[0xbf] + 0x28c)));
        pbVar15 = pbVar15 + 1;
        iVar7 = iVar7 + 0x20;
      } while ((int)pbVar15 < *(int *)(param_1[0xbf] + 0x284));
    }
    bVar4 = FUN_00430950((undefined4 *)(param_1[0xbf] + 0x124),"");
    if (bVar4) {
      pcVar3 = *(char **)(param_1[0xbf] + 0x124);
      iVar7 = param_1[0x85];
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        piVar2 = (int *)(iVar7 + 0x1f8);
        if (*(uint *)(iVar7 + 0x200) < 5) {
          if (0x14 < *(uint *)(iVar7 + 0x200)) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar2);
          }
          *(undefined4 *)(iVar7 + 0x200) = 0x20;
          pvVar10 = _malloc(0x20);
          *piVar2 = (int)pvVar10;
        }
        _strncpy((char *)*piVar2,"none",4);
        *(undefined4 *)(iVar7 + 0x1fc) = 4;
        *(undefined1 *)(*piVar2 + 4) = 0;
      }
      else {
        pcVar9 = pcVar3;
        do {
          cVar5 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar5 != '\0');
        FUN_004015d0((void *)(iVar7 + 0x1f8),pcVar3,(int)pcVar9 - (int)(pcVar3 + 1));
      }
      FUN_00974ee0((void *)(iVar7 + 0x25c),*(byte **)(iVar7 + 0x1f8),0);
    }
    puVar11 = FUN_004e10c0((void *)param_1[0xbf],local_2c);
    puVar12 = (undefined4 *)param_1[0x85];
    pcVar3 = (char *)*puVar11;
    local_4 = 1;
    uVar13 = FUN_004de360(param_1[0xbf]);
    FUN_009fe970(pcVar3,uVar13,puVar12);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    cVar5 = FUN_004de220((void *)param_1[0xbf],0);
    if (cVar5 != '\0') {
      pvVar10 = (void *)param_1[0xbf];
      iVar7 = FUN_004de290(pvVar10,0);
      puVar12 = (undefined4 *)FUN_004de250(pvVar10,0);
      FUN_00972790((void *)param_1[0x85],puVar12,iVar7);
    }
    cVar5 = FUN_004de220((void *)param_1[0xbf],1);
    if (cVar5 != '\0') {
      pvVar10 = (void *)param_1[0xbf];
      iVar7 = FUN_004de290(pvVar10,1);
      puVar12 = (undefined4 *)FUN_004de250(pvVar10,1);
      FUN_009727e0((void *)param_1[0x85],puVar12,iVar7);
    }
    local_7c[0xc] = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_7c[0xc],"gawp",4);
    local_48 = 4;
    local_7c[0xc][4] = '\0';
    uVar17 = 1;
    ppcVar16 = local_7c + 0xc;
    local_4 = 2;
    pvVar6 = (void *)FUN_00529ef0((int)pvVar6);
    FUN_008b1ee0(pvVar6,ppcVar16,uVar17);
    local_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c[0xc]);
    }
    FUN_004ec9f0((int)param_1);
    param_1[0xc2] = 0x96;
    if (this != (void *)0x0) {
      piVar2 = (int *)((int)this + 0x10);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_004eddb0((int)this);
                    /* WARNING: Subroutine does not return */
        _free(this);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004ee9d0 @ 004ee9d0 ////

undefined4 * __fastcall FUN_004ee9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008ab900(param_1);
  local_4 = 0;
  FUN_0053d690(param_1 + 0x32);
  param_1[0x32] = &PTR_LAB_00d20370;
  *param_1 = &PTR_FUN_00d20348;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004eea50 @ 004eea50 ////

void __fastcall FUN_004eea50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00caa7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d20348;
  param_1[0x32] = &PTR_LAB_00d20370;
  local_4 = 0;
  FUN_0053d4f0(param_1 + 0x32);
  local_4 = 0xffffffff;
  FUN_008ab6b0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004eeab0 @ 004eeab0 ////

void FUN_004eeab0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00caa7cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x118);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    DAT_0104adf0 = FUN_004ee9d0(puVar1);
    ExceptionList = local_c;
    return;
  }
  DAT_0104adf0 = (undefined4 *)0x0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004eeb30 @ 004eeb30 ////

undefined4 * __thiscall FUN_004eeb30(void *this,byte param_1)

{
  FUN_004eea50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004eeb50 @ 004eeb50 ////

void FUN_004eeb50(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (DAT_0104adf0 != 0) {
    puVar2 = (undefined4 *)(DAT_0104adf0 + 200);
    piVar1 = (int *)(DAT_0104adf0 + 0x110);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104adf0 = 0;
  }
  return;
}


//// FUNCTION FUN_004eeb80 @ 004eeb80 ////

uint FUN_004eeb80(void)

{
  float *pfVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  undefined1 local_8 [8];
  
  bVar4 = 0xc1;
  pfVar1 = (float *)FUN_009840b0(local_8,(undefined4 *)&stack0x00000004);
  uVar2 = FUN_0046d260(pfVar1,bVar4);
  if ((char)uVar2 != '\0') {
    pvVar3 = FUN_00458d80(DAT_00f88720,(float *)&stack0x00000004,3.0);
    if ((*(int *)((int)pvVar3 + 4) == 0) ||
       (uVar2 = *(int *)((int)pvVar3 + 8) - *(int *)((int)pvVar3 + 4) >> 2, pvVar3 = (void *)0x0,
       uVar2 == 0)) {
      return CONCAT31((int3)((uint)pvVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_004eebe0 @ 004eebe0 ////

undefined4 * __cdecl FUN_004eebe0(undefined4 param_1,int *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 *unaff_retaddr;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_c [12];
  
  local_2c = param_3 * param_3;
  do {
    fVar4 = FUN_00990e30(-DAT_00e51c30,DAT_00e51c30);
    fVar1 = (float)fVar4;
    fVar4 = FUN_00990e30(-DAT_00e51c30,DAT_00e51c30);
    local_20 = (float)fVar4;
    local_1c = fVar1;
    local_18 = local_20;
    local_14 = fVar1;
  } while (local_20 * local_20 + fVar1 * fVar1 < local_2c);
  pfVar2 = (float *)(**(code **)(*param_2 + 0x34))(local_c);
  local_14 = pfVar2[2];
  local_18 = local_20 + pfVar2[1];
  local_1c = fStack_24 + *pfVar2;
  FUN_009840b0(&local_2c,&local_1c);
  if (local_2c < *(float *)(DAT_00f890c0 + 0x44c)) {
    local_2c = *(float *)(DAT_00f890c0 + 0x44c);
  }
  if (*(float *)(DAT_00f890c0 + 0x454) < local_2c) {
    local_2c = *(float *)(DAT_00f890c0 + 0x454);
  }
  if (*(float *)(DAT_00f890c0 + 0x458) < fStack_28) {
    fStack_28 = *(float *)(DAT_00f890c0 + 0x458);
  }
  if (fStack_28 < *(float *)(DAT_00f890c0 + 0x450)) {
    fStack_28 = *(float *)(DAT_00f890c0 + 0x450);
  }
  puVar3 = (undefined4 *)FUN_0046d1c0(&local_1c,&local_2c,0x31);
  *unaff_retaddr = *puVar3;
  unaff_retaddr[1] = puVar3[1];
  return unaff_retaddr;
}


//// FUNCTION FUN_004eed40 @ 004eed40 ////

undefined4 * FUN_004eed40(int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  float *pfVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  undefined4 *local_80;
  float afStack_7c [2];
  undefined1 *puStack_74;
  void *pvStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [8];
  void *pvStack_38;
  uint uStack_30;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00caa845;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_80 = (undefined4 *)0x0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_4c,"play",4);
  local_48 = 4;
  local_4c[4] = 0;
  pbVar3 = *(byte **)(param_2 + 100);
  pbVar10 = local_4c;
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_004eedd8:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_004eeddd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_004eedd8;
    pbVar3 = pbVar3 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_004eeddd:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x34))(&stack0xffffff64);
    uVar5 = FUN_004eeb80();
    if ((char)uVar5 == '\0') {
      pvVar6 = operator_new(0x2e0);
      puStack_8 = (undefined1 *)0x1;
      if (pvVar6 == (void *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        fVar12 = FUN_00990e30(0.0,6.2831855);
        puStack_74 = &stack0xffffff68;
        fVar12 = FUN_004012c0((float)fVar12);
        fVar13 = (float)fVar12;
        pfVar8 = (float *)FUN_004eebe0(&pvStack_70,param_1,0.0);
        fStack_68 = *pfVar8;
        fStack_64 = pfVar8[1];
        fStack_60 = 0.0;
        piVar7 = FUN_00445f60(pvVar6,&fStack_68,fVar13);
      }
      *(undefined1 *)(piVar7 + 0xb7) = 1;
    }
    else {
      pvVar6 = operator_new(0x2e0);
      piVar7 = (int *)0x0;
      puStack_8 = (undefined1 *)0x0;
      if (pvVar6 != (void *)0x0) {
        iVar4 = param_1[0x31];
        pfVar8 = (float *)(**(code **)(*param_1 + 0x34))();
        piVar7 = FUN_00445f60(pvVar6,pfVar8,iVar4);
      }
    }
    puStack_8 = (undefined1 *)0xffffffff;
    (**(code **)(*param_1 + 0xec))();
    pvStack_c = (void *)0x2;
    (**(code **)(*piVar7 + 0xb0))();
    uStack_10 = 0xffffffff;
    if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_38);
    }
    (**(code **)(*piVar7 + 0xe8))(param_1);
    pvStack_70 = operator_new(0x2b4);
    uStack_4 = 3;
    if (pvStack_70 == (void *)0x0) {
      local_80 = (undefined4 *)0x0;
    }
    else {
      local_80 = FUN_00402380(pvStack_70,(int)param_1,piVar7);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(local_80,param_2);
    piVar1 = piVar7 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar7)();
    }
    local_80[0x84] = local_80[0x84] & 0xfffffffe;
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"suppressfights",0xe);
  local_48 = 0xe;
  local_4c[0xe] = 0;
  pbVar3 = *(byte **)(param_2 + 100);
  pbVar10 = local_4c;
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_004ef01c:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_004ef021;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_004ef01c;
    pbVar3 = pbVar3 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_004ef021:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar4 == 0) {
    pvVar6 = operator_new(0x2e0);
    local_80 = (undefined4 *)0x0;
    uStack_4 = 4;
    pvStack_70 = pvVar6;
    if (pvVar6 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x34))();
      FUN_009840b0(afStack_7c,puVar9);
      pfVar8 = (float *)FUN_0046d1c0(&fStack_6c,afStack_7c,0x71);
      fStack_64 = *pfVar8;
      fStack_60 = pfVar8[1];
      uStack_5c = 0;
      piVar7 = FUN_00445f60(pvVar6,&fStack_64,param_1[0x31]);
    }
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy((char *)local_4c,"ai_suppressfights.flm",0x15);
    local_48 = 0x15;
    local_4c[0x15] = '\0';
    uStack_4 = 5;
    (**(code **)(*piVar7 + 0xb0))();
    uStack_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    pvStack_70 = operator_new(0x2b4);
    uStack_4 = 6;
    if (pvStack_70 != (void *)0x0) {
      local_80 = FUN_00402380(pvStack_70,(int)param_1,piVar7);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(local_80,param_2);
    piVar1 = piVar7 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar7)();
    }
    local_80[0x84] = local_80[0x84] & 0xfffffffe;
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  _strncpy((char *)local_4c,"roam",4);
  local_48 = 4;
  local_4c[4] = 0;
  pbVar3 = *(byte **)(param_2 + 100);
  pbVar10 = local_4c;
  do {
    bVar2 = *pbVar3;
    bVar11 = bVar2 < *pbVar10;
    if (bVar2 != *pbVar10) {
LAB_004ef208:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_004ef20d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar11 = bVar2 < pbVar10[1];
    if (bVar2 != pbVar10[1]) goto LAB_004ef208;
    pbVar3 = pbVar3 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar2 != 0);
  iVar4 = 0;
LAB_004ef20d:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar4 == 0) {
    pvVar6 = operator_new(0x2e0);
    uStack_4 = 7;
    pvStack_70 = pvVar6;
    if (pvVar6 == (void *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      iVar4 = param_1[0x31];
      pfVar8 = (float *)(**(code **)(*param_1 + 0x34))();
      piVar7 = FUN_00445f60(pvVar6,pfVar8,iVar4);
    }
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"ai_dog_idle.flm",0xf);
    local_48 = 0xf;
    local_4c[0xf] = 0;
    uStack_4 = 8;
    (**(code **)(*piVar7 + 0xb0))();
    uStack_4 = 0xffffffff;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    pvStack_70 = operator_new(0x2b4);
    uStack_4 = 9;
    if (pvStack_70 == (void *)0x0) {
      local_80 = (undefined4 *)0x0;
    }
    else {
      local_80 = FUN_00402380(pvStack_70,(int)param_1,piVar7);
    }
    uStack_4 = 0xffffffff;
    FUN_00401a00(local_80,param_2);
    piVar1 = piVar7 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar7)();
    }
    local_80[0x84] = local_80[0x84] & 0xfffffffe;
  }
  ExceptionList = pvStack_c;
  return local_80;
}


