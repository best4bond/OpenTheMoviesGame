//// FUNCTION FUN_00856da0 @ 00856da0 ////

undefined4 __fastcall FUN_00856da0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 8);
}


//// FUNCTION FUN_00856db0 @ 00856db0 ////

bool __thiscall FUN_00856db0(void *this,int param_1)

{
  return (bool)('\x01' - (*(int *)((int)this + 0x28) != *(int *)(param_1 + 0x28)));
}


//// FUNCTION FUN_00856dd0 @ 00856dd0 ////

bool __thiscall FUN_00856dd0(void *this,int param_1)

{
  return *(int *)(param_1 + 0x28) != *(int *)((int)this + 0x28);
}


//// FUNCTION FUN_00856ea0 @ 00856ea0 ////

void __thiscall FUN_00856ea0(void *this,int param_1)

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


//// FUNCTION FUN_00856f00 @ 00856f00 ////

void __thiscall FUN_00856f00(void *this,int *param_1)

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


//// FUNCTION FUN_00856f90 @ 00856f90 ////

void __fastcall FUN_00856f90(int *param_1)

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


//// FUNCTION FUN_00857030 @ 00857030 ////

int * __fastcall FUN_00857030(int *param_1)

{
  FUN_00856b60(param_1);
  return param_1;
}


//// FUNCTION FUN_00857040 @ 00857040 ////

void __fastcall FUN_00857040(int *param_1)

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
  puStack_8 = &LAB_00ce8208;
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


//// FUNCTION FUN_00857110 @ 00857110 ////

void __thiscall
FUN_00857110(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  FUN_004036d0((void *)((int)this + 0x6c),(wchar_t *)*param_1,param_1[1]);
  (**(code **)(*(int *)((int)this + 0x8c) + 4))();
  *(undefined4 *)((int)this + 0xa0) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0x8c))();
  *(undefined4 *)((int)this + 0xbc) = param_3;
  (**(code **)(*(int *)((int)this + 0xa4) + 4))();
  *(undefined4 *)((int)this + 0xb8) = param_4;
  (*(code *)**(undefined4 **)((int)this + 0xa4))();
  *(undefined4 *)((int)this + 0x128) = 0;
  FUN_00856cc0((int)this);
  return;
}


//// FUNCTION FUN_00857180 @ 00857180 ////

void FUN_00857180(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0104f000;
  if (DAT_0104f000 != &DAT_0104f00c) {
    do {
      if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[2])(1);
        puVar1 = DAT_0104f000;
      }
    } while (puVar1 != &DAT_0104f00c);
  }
  return;
}


//// FUNCTION FUN_008571b0 @ 008571b0 ////

uint __fastcall FUN_008571b0(float *param_1)

{
  float in_EAX;
  float10 fVar1;
  
  if ((undefined4 *)param_1[10] != &DAT_0104f00c) {
    fVar1 = FUN_0043b710(param_1);
    if ((float10)0.0 != fVar1) {
      in_EAX = (float)FUN_0043b660(param_1,(float *)(*(int *)((int)param_1[10] + 8) + 100));
      if (SUB41(in_EAX,0) != '\0') goto LAB_00857225;
    }
    in_EAX = param_1[6];
    if ((((in_EAX != 0.0) && (in_EAX != *(float *)(*(int *)((int)param_1[10] + 8) + 0xa0))) ||
        ((in_EAX = param_1[7], in_EAX != 9.80909e-44 &&
         (in_EAX != *(float *)(*(int *)((int)param_1[10] + 8) + 0x60))))) ||
       ((in_EAX = (float)CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 9)),
        *(char *)(param_1 + 9) != '\0' &&
        (in_EAX = param_1[10], *(float *)(*(int *)((int)in_EAX + 8) + 0x68) != param_1[8])))) {
LAB_00857225:
      return (uint)in_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_00857230 @ 00857230 ////

void __fastcall FUN_00857230(float *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_008571b0(param_1);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    param_1[10] = *(float *)((int)param_1[10] + 4);
    uVar2 = FUN_008571b0(param_1);
    cVar1 = (char)uVar2;
  }
  return;
}


//// FUNCTION FUN_00857260 @ 00857260 ////

void __fastcall FUN_00857260(float *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((undefined4 *)param_1[10] != &DAT_0104f00c) {
    param_1[10] = (float)((undefined4 *)param_1[10])[1];
    uVar2 = FUN_008571b0(param_1);
    cVar1 = (char)uVar2;
    while (cVar1 == '\0') {
      param_1[10] = *(float *)((int)param_1[10] + 4);
      uVar2 = FUN_008571b0(param_1);
      cVar1 = (char)uVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00857310 @ 00857310 ////

void FUN_00857310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_00857350 @ 00857350 ////

int * __fastcall FUN_00857350(int *param_1)

{
  FUN_00856f90(param_1);
  return param_1;
}


//// FUNCTION FUN_00857360 @ 00857360 ////

void FUN_00857360(void)

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


//// FUNCTION FUN_008573b0 @ 008573b0 ////

void FUN_008573b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    FUN_008573b0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008573f0 @ 008573f0 ////

int * __fastcall FUN_008573f0(int *param_1)

{
  FUN_00856b60(param_1);
  return param_1;
}


//// FUNCTION FUN_00857400 @ 00857400 ////

void __fastcall FUN_00857400(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8250;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("(int&)(Type)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x28),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("When");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x1f;
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
  uVar3 = FUN_0098b490("(int&)(Category)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("WinnerName");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x34));
  }
  puVar6 = (undefined4 *)(param_1 + 0x84);
  local_30 = 3;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
      puVar7 = &DAT_010581d8;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar7 = puVar7 + 1;
      }
      local_2c = local_20;
      *(undefined2 *)puVar7 = *(undefined2 *)pcVar5;
      DAT_010581d4 = 0x21;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 4;
      pcVar2 = (char *)FUN_00ace33d(0xe5d1fc);
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
    uVar3 = FUN_0098b490("Winners[x]");
    if ((char)uVar3 != '\0') {
      FUN_00990970(puVar6 + -0xc);
      FUN_00990970(puVar6 + -6);
      FUN_0098a430(puVar6,4);
    }
    puVar6 = puVar6 + 0xd;
    local_30 = local_30 + -1;
  } while (local_30 != 0);
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\Awards.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x22;
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
  uVar3 = FUN_0098b490("NumRunnersUp");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xf0),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008579a0 @ 008579a0 ////

/* WARNING: Removing unreachable block (ram,0x00857a11) */

void __fastcall FUN_008579a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ce829a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d61908;
  param_1[0xe] = &PTR_LAB_00d618e8;
  local_4 = 2;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x23,0x34,3,FUN_008501c0);
  if ((uint)param_1[0x1d] < 0xb) {
    local_4 = local_4 & 0xffffff00;
    FUN_0098a1c0(param_1 + 0xe);
    local_4 = 0xffffffff;
    FUN_00526bb0(param_1);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1b]);
}


//// FUNCTION FUN_00857aa0 @ 00857aa0 ////

void * __fastcall FUN_00857aa0(void *param_1)

{
  FUN_0043b520(param_1,0.0);
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 **)((int)param_1 + 0x10) = (undefined4 *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 4) = &PTR_FUN_00d1aed0;
  *(undefined1 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x46;
  *(undefined4 *)((int)param_1 + 0x28) = DAT_0104f000;
  return param_1;
}


//// FUNCTION FUN_00857ae0 @ 00857ae0 ////

float * __thiscall FUN_00857ae0(void *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)((int)this + 4) + 4))();
  *(float *)((int)this + 0x18) = param_1;
  (*(code *)**(undefined4 **)((int)this + 4))();
  uVar2 = FUN_008571b0(this);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(*(int *)((int)this + 0x28) + 4);
    uVar2 = FUN_008571b0(this);
    cVar1 = (char)uVar2;
  }
  return this;
}


//// FUNCTION FUN_00857b30 @ 00857b30 ////

float * __thiscall FUN_00857b30(void *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(float *)((int)this + 0x1c) = param_1;
  uVar2 = FUN_008571b0(this);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(*(int *)((int)this + 0x28) + 4);
    uVar2 = FUN_008571b0(this);
    cVar1 = (char)uVar2;
  }
  return this;
}


//// FUNCTION FUN_00857b60 @ 00857b60 ////

float * __thiscall FUN_00857b60(void *this,float *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(float *)this = *param_1;
  uVar2 = FUN_008571b0(this);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(*(int *)((int)this + 0x28) + 4);
    uVar2 = FUN_008571b0(this);
    cVar1 = (char)uVar2;
  }
  return this;
}


//// FUNCTION FUN_00857b90 @ 00857b90 ////

float * __thiscall FUN_00857b90(void *this,float param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)((int)this + 0x24) = 1;
  *(float *)((int)this + 0x20) = param_1;
  uVar2 = FUN_008571b0(this);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(*(int *)((int)this + 0x28) + 4);
    uVar2 = FUN_008571b0(this);
    cVar1 = (char)uVar2;
  }
  return this;
}


//// FUNCTION FUN_00857bd0 @ 00857bd0 ////

void * __cdecl FUN_00857bd0(void *param_1)

{
  undefined4 local_2c;
  undefined **local_28;
  int local_24;
  int *local_20;
  undefined ***local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_8;
  undefined4 *local_4;
  
  FUN_0043b520(&local_2c,0.0);
  local_1c = &local_28;
  local_24 = 0;
  local_20 = (int *)0x0;
  local_28 = &PTR_FUN_00d1aed0;
  local_14 = 0;
  local_10 = 0x46;
  local_8 = 0;
  local_4 = &DAT_0104f00c;
  FUN_00500630(param_1,&local_2c);
  if (local_20 != (int *)0x0) {
    *local_20 = local_24;
  }
  if (local_24 != 0) {
    *(int **)(local_24 + 4) = local_20;
  }
  return param_1;
}


//// FUNCTION FUN_00857c50 @ 00857c50 ////

void __thiscall FUN_00857c50(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00857cc0 @ 00857cc0 ////

int * __fastcall FUN_00857cc0(int *param_1)

{
  FUN_00856f90(param_1);
  return param_1;
}


//// FUNCTION FUN_00857cd0 @ 00857cd0 ////

void __fastcall FUN_00857cd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00857360();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00857d10 @ 00857d10 ////

void __fastcall FUN_00857d10(int param_1)

{
  FUN_008573b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00857d60 @ 00857d60 ////

undefined4 * __thiscall FUN_00857d60(void *this,byte param_1)

{
  FUN_008579a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00857d80 @ 00857d80 ////

void * __cdecl FUN_00857d80(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  float local_38;
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined ***local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce82b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0043b520(&local_38,0.0);
  local_28 = &local_34;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d1aed0;
  local_20 = 0;
  local_1c = 0x46;
  local_14 = 0;
  local_10 = DAT_0104f000;
  local_4 = 0;
  uVar2 = FUN_008571b0(&local_38);
  cVar1 = (char)uVar2;
  while (cVar1 == '\0') {
    local_10 = *(int *)(local_10 + 4);
    uVar2 = FUN_008571b0(&local_38);
    cVar1 = (char)uVar2;
  }
  FUN_00500630(param_1,&local_38);
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00857e50 @ 00857e50 ////

int __fastcall FUN_00857e50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00857360();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00857e80 @ 00857e80 ////

void __fastcall FUN_00857e80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d61910;
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


//// FUNCTION FUN_00857ed0 @ 00857ed0 ////

undefined4 * __thiscall FUN_00857ed0(void *this,byte param_1)

{
  FUN_00857e80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00857ef0 @ 00857ef0 ////

void __thiscall
FUN_00857ef0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce82d8;
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
  piVar3 = (int *)FUN_00857310(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_00857feb:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00856ea0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_00856f00(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_00857feb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00856f00(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_00856ea0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_008580a0 @ 008580a0 ////

void __thiscall FUN_008580a0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce82f8;
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
  FUN_00856b60((int *)&param_2);
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
      goto LAB_00858211;
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
      piVar2 = (int *)FUN_00856b30(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      uVar3 = FUN_00856b10((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00858211:
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
            FUN_00856ea0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(*piVar4 + 0x10) != '\x01') || (*(char *)(piVar4[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x10) = 1;
                *(undefined1 *)(piVar4 + 4) = 0;
                FUN_00856f00(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 4) = (char)piVar5[4];
              *(undefined1 *)(piVar5 + 4) = 1;
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              FUN_00856ea0(this,(int)piVar5);
              break;
            }
LAB_008582d4:
            *(undefined1 *)(piVar4 + 4) = 0;
          }
        }
        else {
          if ((char)piVar4[4] == '\0') {
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(piVar5 + 4) = 0;
            FUN_00856f00(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x11) == '\0') {
            if ((*(char *)(piVar4[2] + 0x10) == '\x01') && (*(char *)(*piVar4 + 0x10) == '\x01'))
            goto LAB_008582d4;
            if (*(char *)(*piVar4 + 0x10) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x10) = 1;
              *(undefined1 *)(piVar4 + 4) = 0;
              FUN_00856ea0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 4) = (char)piVar5[4];
            *(undefined1 *)(piVar5 + 4) = 1;
            *(undefined1 *)(*piVar4 + 0x10) = 1;
            FUN_00856f00(this,piVar5);
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


//// FUNCTION FUN_00858360 @ 00858360 ////

void __thiscall FUN_00858360(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00857ef0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00856f90((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00857ef0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00858420 @ 00858420 ////

void __thiscall FUN_00858420(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_008573b0((void *)piVar6[1]);
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
    FUN_008580a0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00858590 @ 00858590 ////

void FUN_00858590(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104eff8;
  if ((DAT_010584c8 != 0) &&
     ((uint)((int)DAT_010584cc - DAT_010584c8 >> 2) < (uint)(DAT_010584d0 - DAT_010584c8 >> 2))) {
    *DAT_010584cc = &DAT_0104eff8;
    DAT_010584cc = DAT_010584cc + 1;
    return;
  }
  FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  return;
}


//// FUNCTION FUN_008585f0 @ 008585f0 ////

void __fastcall FUN_008585f0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00858420(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00858620 @ 00858620 ////

void __fastcall FUN_00858620(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d61910;
  return;
}


//// FUNCTION FUN_00858680 @ 00858680 ////

int __fastcall FUN_00858680(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00857360();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008586b0 @ 008586b0 ////

void __thiscall FUN_008586b0(void *this,int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8338;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_28 = this;
  FUN_004036d0((void *)((int)this + 0x6c),(wchar_t *)*param_1,param_1[1]);
  local_14 = (int *)FUN_00857360();
  *(undefined1 *)((int)local_14 + 0x11) = 1;
  local_14[1] = (int)local_14;
  *local_14 = (int)local_14;
  iVar4 = 0;
  local_14[2] = (int)local_14;
  local_10 = 0;
  iVar3 = *(int *)(param_2 + 4);
  local_4 = 0;
  if (iVar3 != *(int *)(param_2 + 8)) {
    param_1 = (int *)((int)this + 0x8c);
    do {
      if (2 < iVar4) break;
      uVar1 = *(uint *)(iVar3 + 0x2c);
      local_2c = uVar1;
      piVar2 = (int *)FUN_00857c50(local_18,&local_24,&local_2c);
      if ((int *)*piVar2 == local_14) {
        local_2c = uVar1;
        FUN_00858360(local_18,local_20,&local_2c);
        iVar4 = iVar4 + 1;
        (**(code **)(*param_1 + 4))();
        param_1[5] = *(int *)(iVar3 + 0x14);
        (**(code **)*param_1)();
        (**(code **)(param_1[6] + 4))();
        param_1[0xb] = *(int *)(iVar3 + 0x2c);
        (**(code **)param_1[6])();
        param_1[0xc] = *(int *)(iVar3 + 0x30);
        this = local_28;
        param_1 = param_1 + 0xd;
      }
      iVar3 = iVar3 + 0x34;
    } while (iVar3 != *(int *)(param_2 + 8));
  }
  *(int *)((int)this + 0x128) = iVar4 + -1;
  FUN_00856cc0((int)this);
  local_4 = 0xffffffff;
  FUN_00858420(local_18,&param_2,(int *)*local_14,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


//// FUNCTION FUN_00858820 @ 00858820 ////

undefined4 * __fastcall FUN_00858820(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8394;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d61908;
  param_1[0xe] = &PTR_LAB_00d618e8;
  FUN_0043b510(param_1 + 0x19);
  param_1[0x1b] = param_1 + 0x1e;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 10;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(param_1 + 0x23,0x34,3,FUN_00850260,FUN_008501c0);
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x4d] = param_1;
  FUN_00acdb9e(0xe5d248);
  iVar1 = FUN_0097dda0();
  param_1[0x4e] = iVar1;
  if (s___AV__InList_VCAward_TM___MV___00e5d228[0x1f] != '\0') {
    iVar1 = 300;
    pcVar3 = "GlobalAwardsLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe5d248);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCAward_TM___MV___00e5d228[0x1f] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00858930 @ 00858930 ////

void __cdecl FUN_00858930(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce83ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x13c);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00858820(puVar2);
  }
  puVar2[0x18] = param_1;
  puVar2[0x19] = *param_2;
  puVar2[0x1a] = param_3;
  piVar1 = puVar2 + 0x4b;
  puVar2[0x4c] = &DAT_0104f00c;
  *piVar1 = (int)DAT_0104f00c;
  *(int **)((int)DAT_0104f00c + 4) = piVar1;
  DAT_0104f00c = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008589c0 @ 008589c0 ////

void __fastcall FUN_008589c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION AwardBonusManager_EnableBonus @ 00858a00 ////

void __thiscall AwardBonusManager_EnableBonus(void *this,int param_1)

{
  *(undefined1 *)(param_1 + 0x8c + (int)this) = 1;
  return;
}


//// FUNCTION AwardBonusManager_DisableBonus @ 00858a10 ////

void __thiscall AwardBonusManager_DisableBonus(void *this,int param_1)

{
  *(undefined1 *)(param_1 + 0x8c + (int)this) = 0;
  return;
}


//// FUNCTION AwardBonusManager_IsBonusActive @ 00858a20 ////

undefined1 __thiscall AwardBonusManager_IsBonusActive(void *this,int param_1)

{
  return *(undefined1 *)(param_1 + 0x8c + (int)this);
}


//// FUNCTION FUN_00858a30 @ 00858a30 ////

int * __thiscall FUN_00858a30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00858be0 @ 00858be0 ////

void __cdecl FUN_00858be0(int param_1)

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


//// FUNCTION FUN_00858c00 @ 00858c00 ////

void __cdecl FUN_00858c00(int *param_1)

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


//// FUNCTION FUN_00858c30 @ 00858c30 ////

void __fastcall FUN_00858c30(int *param_1)

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


//// FUNCTION FUN_00858c90 @ 00858c90 ////

void __fastcall FUN_00858c90(int *param_1)

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


//// FUNCTION FUN_00858e00 @ 00858e00 ////

void FUN_00858e00(void)

{
  FUN_0098fdd0("PBonusManager",&DAT_0104f09c);
  return;
}


//// FUNCTION AwardBonusManager_Get @ 00858e20 ////

undefined4 AwardBonusManager_Get(void)

{
  return DAT_0104f0b0;
}


//// FUNCTION FUN_00858e30 @ 00858e30 ////

void FUN_00858e30(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0104f0b0;
  if (DAT_0104f0b0 != (undefined4 *)0x0) {
    iVar1 = DAT_0104f0b0[0x12];
    DAT_0104f0b0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104f09c[1])();
    DAT_0104f0b0 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00858e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_0104f09c)();
    return;
  }
  return;
}


//// FUNCTION FUN_00858e80 @ 00858e80 ////

void __thiscall FUN_00858e80(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xa0) + 4))();
  *(undefined4 *)((int)this + 0xb4) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xa0))();
  return;
}


//// FUNCTION FUN_00858eb0 @ 00858eb0 ////

undefined4 __fastcall FUN_00858eb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}


//// FUNCTION FUN_00858ec0 @ 00858ec0 ////

void __thiscall FUN_00858ec0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0xb8) + 4))();
  *(undefined4 *)((int)this + 0xcc) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xb8))();
  return;
}


//// FUNCTION FUN_00858ef0 @ 00858ef0 ////

undefined4 __fastcall FUN_00858ef0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}


//// FUNCTION FUN_008590e0 @ 008590e0 ////

void __thiscall FUN_008590e0(void *this,int param_1)

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


//// FUNCTION FUN_00859140 @ 00859140 ////

void __thiscall FUN_00859140(void *this,int *param_1)

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


//// FUNCTION FUN_008591a0 @ 008591a0 ////

int * __fastcall FUN_008591a0(int *param_1)

{
  FUN_00858c90(param_1);
  return param_1;
}


//// FUNCTION FUN_008591b0 @ 008591b0 ////

int * __fastcall FUN_008591b0(int *param_1)

{
  FUN_00858c30(param_1);
  return param_1;
}


//// FUNCTION FUN_00859210 @ 00859210 ////

void __fastcall FUN_00859210(int *param_1)

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
  puStack_8 = &LAB_00ce83c8;
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


//// FUNCTION FUN_008592e0 @ 008592e0 ////

uint __cdecl FUN_008592e0(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = __stricmp((&PTR_s_ontheradar_00e5d290)[uVar2],param_1);
    if (iVar1 == 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x11);
  return 0x11;
}


//// FUNCTION FUN_00859320 @ 00859320 ////

void __thiscall FUN_00859320(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d61940;
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


//// FUNCTION FUN_00859370 @ 00859370 ////

void __fastcall FUN_00859370(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d61940;
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


//// FUNCTION FUN_00859420 @ 00859420 ////

void FUN_00859420(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00859420(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00859460 @ 00859460 ////

int * __fastcall FUN_00859460(int *param_1)

{
  FUN_00858c90(param_1);
  return param_1;
}


//// FUNCTION FUN_00859470 @ 00859470 ////

int * __fastcall FUN_00859470(int *param_1)

{
  FUN_00858c30(param_1);
  return param_1;
}


//// FUNCTION FUN_00859480 @ 00859480 ////

void FUN_00859480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_008594d0 @ 008594d0 ////

void FUN_008594d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_00859550 @ 00859550 ////

void __fastcall FUN_00859550(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce83f8;
  local_c = ExceptionList;
  local_30 = 0;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\AwardsBonusManager.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      local_2c = local_20;
      DAT_010581d4 = 0xe;
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
    uVar3 = FUN_0098b490("Settings[x]");
    if ((char)uVar3 != '\0') {
      FUN_0098a430((undefined4 *)(local_30 + 0x28 + param_1),1);
    }
    local_30 = local_30 + 1;
  } while (local_30 < 0x11);
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\AwardsBonusManager.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0xf;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("PSuperStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x3c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Awards\\AwardsBonusManager.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x10;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x54));
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
  uVar3 = FUN_0098b490("PSuperDirector");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x54));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION AwardBonusSystem_Constructor @ 00859c80 ////

/* WARNING: Removing unreachable block (ram,0x00859d4e) */

undefined4 * __fastcall AwardBonusSystem_Constructor(undefined4 *param_1)

{
  char local_20 [16];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8497;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d61abc;
  param_1[0x19] = &PTR_LAB_00d61a9c;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = param_1 + 0x28;
  param_1[0x28] = &PTR_FUN_00d16954;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0x2e;
  param_1[0x2e] = &PTR_FUN_00d16954;
  param_1[0x33] = 0;
  local_20[0] = '\0';
  _strncpy(local_20,"awd_bonus_toggle",0x10);
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005434b0();
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00859da0 @ 00859da0 ////

void FUN_00859da0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce84bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = AwardBonusSystem_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104f09c[1])();
  DAT_0104f0b0 = puVar2;
  (*(code *)*DAT_0104f09c)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION AwardBonus_GetValue @ 00859e20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 AwardBonus_GetValue(int param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == (void *)0x0) {
    return (float10)*(float *)(&DAT_0104f030 + param_1 * 4);
  }
  if (param_1 == 1) {
    uVar1 = FUN_00413450(param_2,"Writing",0,7);
    if (uVar1 != 0xffffffff) {
      return (float10)_DAT_0104f088;
    }
    uVar1 = FUN_00413450(param_2,"Movies",0,6);
    if (uVar1 != 0xffffffff) {
      return (float10)_DAT_0104f080;
    }
    iVar2 = FUN_004155b0(param_2,"genre",0);
    if (iVar2 != -1) {
      return (float10)_DAT_0104f07c;
    }
    iVar2 = FUN_004155b0(param_2,"Research",0);
    if (iVar2 != -1) {
      return (float10)_DAT_0104f08c;
    }
    iVar2 = FUN_004155b0(param_2,"Lot",0);
    if (iVar2 == -1) {
      iVar2 = FUN_004155b0(param_2,"Security",0);
      if (iVar2 == -1) {
        FUN_004155b0(param_2,"Stunts",0);
        goto LAB_00859ee6;
      }
    }
    return (float10)_DAT_0104f084;
  }
  if (param_1 == 0xc) {
    uVar1 = FUN_00413450(param_2,"Upper",0,5);
    if (uVar1 != 0xffffffff) {
      return (float10)_DAT_0104f078;
    }
    iVar2 = FUN_004155b0(param_2,"Lower",0);
    if (iVar2 != -1) {
      return (float10)_DAT_0104f074;
    }
  }
LAB_00859ee6:
  return (float10)1.0;
}


//// FUNCTION FUN_00859f50 @ 00859f50 ////

undefined4 * __cdecl FUN_00859f50(undefined4 *param_1,int param_2)

{
  char *local_40;
  uint local_3c;
  uint local_38;
  char local_34 [20];
  char *local_20;
  uint local_1c;
  uint local_18;
  
  local_40 = local_34;
  local_34[0] = '\0';
  local_3c = 0;
  local_38 = 0x14;
  if (param_2 < 0x11) {
    FUN_0048f010(&PTR_s_ontheradar_00e5d290 + param_2,&local_20);
    FUN_004015d0(&local_40,local_20,local_1c);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    FUN_0045f450((int *)&local_40);
  }
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


//// FUNCTION FUN_0085a000 @ 0085a000 ////

undefined4 * __cdecl FUN_0085a000(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce84e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00859f50(local_2c,param_2);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 1;
  FUN_004073f0(&local_4c,"AWARDSNEW_BONUS_",0x10);
  FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
  FUN_009b5030(param_1,&local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0085a0d0 @ 0085a0d0 ////

void __fastcall FUN_0085a0d0(int param_1)

{
  FUN_00859420(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0085a100 @ 0085a100 ////

void __thiscall FUN_0085a100(void *this,undefined4 *param_1,int *param_2)

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


//// FUNCTION FUN_0085a180 @ 0085a180 ////

undefined4 * __thiscall FUN_0085a180(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce84f0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_008594d0(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 4));
    if (*(char *)((int)local_18 + 0x11) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_0085a180(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_0085a180(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_0085a230 @ 0085a230 ////

void FUN_0085a230(void)

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


//// FUNCTION FUN_0085a270 @ 0085a270 ////

undefined4 * __thiscall FUN_0085a270(void *this,byte param_1)

{
  FUN_0085a290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0085a290 @ 0085a290 ////

void __fastcall FUN_0085a290(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8508;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  param_1[0x2e] = &PTR_FUN_00d16954;
  local_4 = 0;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x30] = param_1[0x2f];
  }
  if (param_1[0x2f] != 0) {
    *(undefined4 *)(param_1[0x2f] + 4) = param_1[0x30];
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  if ((undefined4 *)param_1[0x30] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x30] = param_1[0x2f];
  }
  if (param_1[0x2f] != 0) {
    *(undefined4 *)(param_1[0x2f] + 4) = param_1[0x30];
  }
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x28] = &PTR_FUN_00d16954;
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
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x19;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Award_GetBonusIndex @ 0085a3d0 ////

undefined4 Award_GetBonusIndex(void)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)FUN_0085a100(&DAT_0104f090,&local_4,(int *)&stack0x00000004);
  if (*piVar1 != DAT_0104f094) {
    return *(undefined4 *)(*piVar1 + 0x10);
  }
  return 0x11;
}


//// FUNCTION FUN_0085a400 @ 0085a400 ////

void __thiscall FUN_0085a400(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_0085a180(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x11) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x11);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x11);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x11);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x11);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)((int)this + 4) + 8) = iVar2;
    return;
  }
  *piVar3 = (int)piVar3;
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_0085a490 @ 0085a490 ////

void __fastcall FUN_0085a490(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085a230();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0085a4c0 @ 0085a4c0 ////

int __fastcall FUN_0085a4c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085a230();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0085a4f0 @ 0085a4f0 ////

void __thiscall
FUN_0085a4f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce8528;
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
  piVar3 = (int *)FUN_00859480(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0085a5eb:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_008590e0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00859140(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0085a5eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00859140(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_008590e0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0085a6a0 @ 0085a6a0 ////

void __thiscall FUN_0085a6a0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce8548;
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
  FUN_00858c90((int *)&param_2);
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
      goto LAB_0085a811;
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
      piVar2 = (int *)FUN_00858c00(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00858be0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0085a811:
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
            FUN_008590e0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00859140(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_008590e0(this,(int)piVar5);
              break;
            }
LAB_0085a8d4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00859140(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0085a8d4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_008590e0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00859140(this,piVar5);
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


//// FUNCTION FUN_0085a960 @ 0085a960 ////

void __thiscall FUN_0085a960(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_0085a4f0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00858c30((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0085a4f0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0085aa20 @ 0085aa20 ////

void __thiscall FUN_0085aa20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00859420((void *)piVar6[1]);
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
    FUN_0085a6a0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0085aae0 @ 0085aae0 ////

undefined4 * __thiscall FUN_0085aae0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0085a4f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0085a4f0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_0085a4f0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00858c30((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0085a4f0(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_0085a4f0(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00858c90((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0085a4f0(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_0085a4f0(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_0085a960(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_0085ac80 @ 0085ac80 ////

int * __thiscall FUN_0085ac80(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_8 [2];
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)piVar2 + 0x15) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_0085aae0(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0085ad30 @ 0085ad30 ////

void * __thiscall FUN_0085ad30(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce8560;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_007d4720();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x11) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_0085a400(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_0085adc0 @ 0085adc0 ////

void __fastcall FUN_0085adc0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0085aa20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION AwardBonuses_LoadBonusesIni @ 0085ae10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AwardBonuses_LoadBonusesIni(void)

{
  char *_Str2;
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  float10 fVar7;
  char *local_14c;
  undefined4 local_148;
  uint local_144;
  char local_140 [23];
  char local_129;
  int local_128;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  undefined4 local_104 [54];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8675;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_124,"awardsbonuses",0xd);
  local_120 = 0xd;
  local_124[0xd] = '\0';
  local_4 = 0;
  FUN_0055c540(local_104,&local_124);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"public_awareness_boost",0x16);
  local_148 = 0x16;
  local_14c[0x16] = '\0';
  local_4._0_1_ = 3;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f030 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  _DAT_0104f034 = 0x3f800000;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"stars_experience_boost",0x16);
  local_148 = 0x16;
  local_14c[0x16] = '\0';
  local_4._0_1_ = 4;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f07c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"crew_experience_boost",0x15);
  local_148 = 0x15;
  local_14c[0x15] = '\0';
  local_4._0_1_ = 5;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f080 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"lot_experience_boost",0x14);
  local_148 = 0x14;
  local_14c[0x14] = '\0';
  local_4._0_1_ = 6;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f084 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"writers_experience_boost",0x18);
  local_148 = 0x18;
  local_14c[0x18] = '\0';
  local_4._0_1_ = 7;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f088 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"researchers_experience_boost",0x1c);
  local_148 = 0x1c;
  local_14c[0x1c] = '\0';
  local_4._0_1_ = 8;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f08c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"FreeLoveBoost",0xd);
  local_148 = 0xd;
  local_14c[0xd] = '\0';
  local_4._0_1_ = 9;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f054 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"trendsetter_boost",0x11);
  local_148 = 0x11;
  local_14c[0x11] = '\0';
  local_4._0_1_ = 10;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f058 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"directing_boost",0xf);
  local_148 = 0xf;
  local_14c[0xf] = '\0';
  local_4._0_1_ = 0xb;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f038 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"boredom_stress_factor",0x15);
  local_148 = 0x15;
  local_14c[0x15] = '\0';
  local_4._0_1_ = 0xc;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f040 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"acting_boost",0xc);
  local_148 = 0xc;
  local_14c[0xc] = '\0';
  local_4._0_1_ = 0xd;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f044 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"genre_fit_boost",0xf);
  local_148 = 0xf;
  local_14c[0xf] = '\0';
  local_4._0_1_ = 0xe;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f04c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"addiction_factor",0x10);
  local_148 = 0x10;
  local_14c[0x10] = '\0';
  local_4._0_1_ = 0xf;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f050 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"research_boost",0xe);
  local_148 = 0xe;
  local_14c[0xe] = '\0';
  local_4._0_1_ = 0x10;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f05c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"boredom_factor",0xe);
  local_148 = 0xe;
  local_14c[0xe] = '\0';
  local_4._0_1_ = 0x11;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f03c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x20;
  local_14c = _malloc(0x20);
  _strncpy(local_14c,"natural_talent_factor",0x15);
  local_148 = 0x15;
  local_14c[0x15] = '\0';
  local_4._0_1_ = 0x12;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f06c = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"thick_skin_factor",0x11);
  local_148 = 0x11;
  local_14c[0x11] = '\0';
  local_4._0_1_ = 0x13;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f070 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"lower_mood_val",0xe);
  local_148 = 0xe;
  local_14c[0xe] = '\0';
  local_4._0_1_ = 0x14;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f074 = (float)fVar7;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"upper_mood_val",0xe);
  local_148 = 0xe;
  local_14c[0xe] = '\0';
  local_4._0_1_ = 0x15;
  fVar7 = FUN_00558610(local_104,&local_14c,0.0);
  _DAT_0104f078 = (float)fVar7;
  local_4._0_1_ = 2;
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  FUN_00859420(*(void **)(DAT_0104f094 + 4));
  *(int *)(DAT_0104f094 + 4) = DAT_0104f094;
  local_14c = local_140;
  _DAT_0104f098 = 0;
  *(int *)DAT_0104f094 = DAT_0104f094;
  *(int *)(DAT_0104f094 + 8) = DAT_0104f094;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  _strncpy(local_14c,"awards",6);
  local_148 = 6;
  local_14c[6] = '\0';
  local_4._0_1_ = 0x16;
  uVar2 = FUN_00558a50(local_104,&local_14c,(undefined4 *)0x1);
  local_129 = (char)uVar2;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  if (local_129 != '\0') {
    uVar2 = FUN_00558120(local_104,0);
    cVar1 = (char)uVar2;
    while (cVar1 != '\0') {
      puVar3 = FUN_00558de0(local_104,local_2c);
      local_4._0_1_ = 0x17;
      local_128 = FUN_00860a00(puVar3);
      local_4._0_1_ = 2;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      FUN_00558590(local_104,&local_14c,4);
      _Str2 = local_14c;
      local_4._0_1_ = 0x18;
      uVar6 = 0;
      do {
        iVar4 = __stricmp((&PTR_s_ontheradar_00e5d290)[uVar6],_Str2);
        if (iVar4 == 0) goto LAB_0085b7c0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x11);
      uVar6 = 0x11;
LAB_0085b7c0:
      puVar5 = (uint *)FUN_0085ac80(&DAT_0104f090,&local_128);
      *puVar5 = uVar6;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(local_14c);
      }
      uVar2 = FUN_00558120(local_104,2);
      cVar1 = (char)uVar2;
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_104);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0085b830 @ 0085b830 ////

int __fastcall FUN_0085b830(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085a230();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0085b860 @ 0085b860 ////

void __thiscall FUN_0085b860(void *this,char param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  int *local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int *local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8688;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = FUN_00861c60();
  FUN_0085ad30(local_18,(int)puVar3);
  local_24 = (int *)*local_14;
  local_4 = 0;
  if (local_24 != local_14) {
    do {
      piVar4 = local_24;
      bVar2 = FUN_00861a60();
      if (bVar2 == (bool)param_1) {
        local_20 = piVar4[3];
        piVar4 = (int *)FUN_0085a100(&DAT_0104f090,&local_1c,&local_20);
        if (((*piVar4 != DAT_0104f094) && (iVar1 = *(int *)(*piVar4 + 0x10), iVar1 != 0x11)) &&
           (*(char *)(iVar1 + 0x8c + (int)this) != '\0')) break;
      }
      FUN_0063b190((int *)&local_24);
    } while (local_24 != local_14);
  }
  local_4 = 0xffffffff;
  FUN_007d80c0(local_18,(undefined4 *)&param_1,(int *)*local_14,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}


//// FUNCTION FUN_0085b990 @ 0085b990 ////

undefined4 __fastcall FUN_0085b990(int param_1)

{
  if (((*(char *)(param_1 + 4) == '\0') && (*(char *)(param_1 + 5) == '\0')) &&
     (*(char *)(param_1 + 6) == '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0085b9b0 @ 0085b9b0 ////

void __fastcall FUN_0085b9b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0085b9f0 @ 0085b9f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0085b9f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce86a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d61d70;
  *param_1 = &PTR_FUN_00d61d50;
  _DAT_0104f0c0 = param_1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0085ba50 @ 0085ba50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0085ba50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce86c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d61d50;
  param_1[0x19] = &PTR_LAB_00d61d70;
  local_4 = 0;
  _DAT_0104f0c0 = 0;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0085bae0 @ 0085bae0 ////

void __cdecl FUN_0085bae0(undefined4 *param_1)

{
  *param_1 = DAT_0104f0e8;
  return;
}


//// FUNCTION FUN_0085baf0 @ 0085baf0 ////

undefined4 FUN_0085baf0(void)

{
  return DAT_00e5d2d8;
}


//// FUNCTION FUN_0085bb00 @ 0085bb00 ////

undefined4 FUN_0085bb00(void)

{
  return DAT_00e5d2d4;
}


//// FUNCTION FUN_0085bb10 @ 0085bb10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0085bb10(void)

{
  if ((DAT_0104f0d3 == '\0') && (_DAT_0104f0d4 == 0.0)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_0085bf50 @ 0085bf50 ////

void __cdecl FUN_0085bf50(int param_1)

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


//// FUNCTION FUN_0085bf70 @ 0085bf70 ////

void __cdecl FUN_0085bf70(int *param_1)

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


//// FUNCTION FUN_0085bfa0 @ 0085bfa0 ////

void __fastcall FUN_0085bfa0(int *param_1)

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


//// FUNCTION FUN_0085c000 @ 0085c000 ////

void __fastcall FUN_0085c000(int *param_1)

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


//// FUNCTION FUN_0085c0b0 @ 0085c0b0 ////

void __cdecl FUN_0085c0b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0085c360 @ 0085c360 ////

void FUN_0085c360(void)

{
  FUN_0098fd30("PreviousAwardsDate.YearInDays",&DAT_0104f0e8,3);
  FUN_0098fd30("LastRankCeremony",&DAT_0104f0c8,1);
  FUN_0098fd30("Enabled",&DAT_0104f0d3,2);
  FUN_0098fd30("(int&)LifetimeStatus",&DAT_0104f0bc,1);
  FUN_0098fd30("(int&)OldLifetimeStatus",&DAT_0104f0b8,1);
  FUN_0098fd30("FirstAwardsYear",&DAT_00e5d2d4,1);
  FUN_0098fd30("AIWinnerRandom.Germ",&DAT_0104f108,1);
  FUN_0098fd30("LastStuntRankCeremony",&DAT_0104f0cc,1);
  return;
}


//// FUNCTION FUN_0085c3f0 @ 0085c3f0 ////

void FUN_0085c3f0(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104f0b4);
}


//// FUNCTION FUN_0085c440 @ 0085c440 ////

undefined4 * __thiscall FUN_0085c440(void *this,byte param_1)

{
  FUN_0085ba50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0085c460 @ 0085c460 ////

undefined4 __cdecl FUN_0085c460(void *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = FUN_005b20d0((int)param_1);
  if (cVar1 == '\0') {
    pfVar4 = &fStack_c;
    fStack_c = DAT_0104f0e8;
    pvVar2 = (void *)FUN_005b0ea0(param_1,&uStack_8);
    uVar3 = FUN_0043b6a0(pvVar2,pfVar4);
    if ((char)uVar3 != '\0') {
      pfVar4 = (float *)&DAT_00e4fa4c;
      pvVar2 = (void *)FUN_005b0ea0(param_1,&uStack_4);
      uVar3 = FUN_0043b6c0(pvVar2,pfVar4);
      if ((char)uVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_0085c4d0 @ 0085c4d0 ////

undefined4 __cdecl FUN_0085c4d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  param_1 = *(int *)(param_1 + 0x154);
  local_8 = DAT_0104f0e8;
  uVar2 = FUN_0043b6a0(&param_1,&local_8);
  if ((char)uVar2 != '\0') {
    local_4 = *(undefined4 *)(iVar1 + 0x154);
    uVar2 = FUN_0043b6c0(&local_4,(float *)&DAT_00e4fa4c);
    if ((char)uVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_0085c530 @ 0085c530 ////

void __cdecl FUN_0085c530(float *param_1)

{
  float fVar1;
  float *pfVar2;
  undefined1 local_4 [4];
  
  fVar1 = DAT_0104f0e8;
  pfVar2 = (float *)FUN_0043b520(local_4,(float)DAT_00e5d2d8);
  *param_1 = fVar1 + *pfVar2;
  return;
}


//// FUNCTION FUN_0085c560 @ 0085c560 ////

undefined4 FUN_0085c560(void)

{
  return DAT_0104f0bc;
}


//// FUNCTION FUN_0085c570 @ 0085c570 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0085c570(void)

{
  if ((DAT_0104f0d3 == '\0') && (_DAT_0104f0d4 == 0.0)) {
    return 9999;
  }
  return 0x7d5;
}


//// FUNCTION Award_GetAvailableFromYear @ 0085c5c0 ////

int __cdecl Award_GetAvailableFromYear(int param_1)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  undefined2 unaff_SI;
  float10 fVar4;
  ulonglong uVar5;
  undefined4 local_c;
  undefined1 local_8 [4];
  float local_4;
  
  iVar2 = FUN_00860de0(param_1);
  if (iVar2 < 0) {
    uVar5 = FUN_00860db0();
    return (int)uVar5;
  }
  FUN_0043b510(&local_c);
  sVar1 = FUN_0051ffc0(&local_c);
  iVar2 = DAT_00e5d2d8;
  if ((char)sVar1 != '\0') {
    pfVar3 = (float *)FUN_0043b520(local_8,(float)DAT_00e5d2d8);
    pfVar3 = (float *)FUN_0043b600(&local_c,&local_4,pfVar3);
    fVar4 = FUN_0043b710(pfVar3);
    FUN_00acf400((double)(fVar4 / (float10)iVar2),unaff_SI);
    uVar5 = FUN_00acd42c();
    iVar2 = FUN_00860de0(param_1);
    return (int)uVar5 + iVar2;
  }
  return 9999;
}


//// FUNCTION FUN_0085c670 @ 0085c670 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl FUN_0085c670(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_CL;
  undefined1 uVar3;
  int extraout_EDX;
  
  if ((DAT_0104f0d3 == '\0') && (_DAT_0104f0d4 == 0.0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  if (param_1 != (-(uint)bVar1 & 0xffffe0c6) + 9999) {
    iVar2 = FUN_0085c570();
    uVar3 = extraout_CL;
    if (extraout_EDX < iVar2) {
      if (DAT_0104f0bc == 3) {
        if (DAT_0104f0b8 == 2) {
          *param_2 = 5;
          return 1;
        }
        if (DAT_0104f0b8 < 2) {
          *param_2 = 6;
          return 1;
        }
      }
      else if ((DAT_0104f0bc == 2) && (DAT_0104f0b8 < 2)) {
        *param_2 = 7;
        return 1;
      }
    }
    else if ((0 < DAT_0104f0bc) && (DAT_0104f0b8 == 0)) {
      *param_2 = 4;
      uVar3 = 1;
    }
    return uVar3;
  }
  if (DAT_0104f0bc == 3) {
    *param_2 = 1;
    return 1;
  }
  if (DAT_0104f0bc == 2) {
    *param_2 = 2;
    return 1;
  }
  *param_2 = 3;
  return 1;
}


//// FUNCTION FUN_0085c9a0 @ 0085c9a0 ////

void __thiscall FUN_0085c9a0(void *this,int param_1)

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


//// FUNCTION FUN_0085ca00 @ 0085ca00 ////

void __thiscall FUN_0085ca00(void *this,int *param_1)

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


//// FUNCTION FUN_0085ca60 @ 0085ca60 ////

void __fastcall FUN_0085ca60(int *param_1)

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


//// FUNCTION FUN_0085cae0 @ 0085cae0 ////

int * __fastcall FUN_0085cae0(int *param_1)

{
  FUN_0085c000(param_1);
  return param_1;
}


//// FUNCTION FUN_0085caf0 @ 0085caf0 ////

int * __fastcall FUN_0085caf0(int *param_1)

{
  FUN_0085bfa0(param_1);
  return param_1;
}


//// FUNCTION FUN_0085cb90 @ 0085cb90 ////

void __cdecl FUN_0085cb90(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0085cc50 @ 0085cc50 ////

void __cdecl
FUN_0085cc50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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


//// FUNCTION FUN_0085ccb0 @ 0085ccb0 ////

void __cdecl FUN_0085ccb0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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


//// FUNCTION FUN_0085cd10 @ 0085cd10 ////

void __cdecl FUN_0085cd10(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0085cdd0 @ 0085cdd0 ////

void __fastcall FUN_0085cdd0(int *param_1)

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
  puStack_8 = &LAB_00ce86e8;
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


//// FUNCTION FUN_0085cea0 @ 0085cea0 ////

undefined4 __cdecl FUN_0085cea0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_0043b710((float *)&stack0x00000008);
  iVar1 = Award_GetAvailableFromYear(param_1);
  if ((float)iVar1 < (float)fVar2 != ((float)iVar1 == (float)fVar2)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0085cee0 @ 0085cee0 ////

undefined8 __fastcall FUN_0085cee0(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = CONCAT44(param_2,DAT_0104f108);
  if (DAT_0104f108 == 0) {
    uVar1 = FUN_00990ae0(param_1,param_2);
  }
  DAT_0104f108 = (int)uVar1;
  return CONCAT44((int)(uVar1 >> 0x20),&DAT_0104f108);
}


//// FUNCTION FUN_0085cf00 @ 0085cf00 ////

void __cdecl FUN_0085cf00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  for (iVar1 = *(int *)(param_1 + 0x98); iVar1 != param_1 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = **(int **)(iVar1 + 8);
    uStack_14 = 0x85cf24;
    uStack_14 = (**(code **)(iVar2 + 0x28))();
    uStack_18 = 0x85cf2a;
    (**(code **)(iVar2 + 0x24))();
    iVar2 = **(int **)(iVar1 + 8);
    (**(code **)(iVar2 + 0x18))(&uStack_18);
    (**(code **)(iVar2 + 0x14))();
  }
  return;
}


//// FUNCTION FUN_0085d030 @ 0085d030 ////

void FUN_0085d030(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0085d030(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0085d0b0 @ 0085d0b0 ////

void FUN_0085d0b0(void)

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


//// FUNCTION FUN_0085d0f0 @ 0085d0f0 ////

int * __fastcall FUN_0085d0f0(int *param_1)

{
  FUN_0085ca60(param_1);
  return param_1;
}


//// FUNCTION FUN_0085d100 @ 0085d100 ////

void __fastcall FUN_0085d100(int param_1)

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


//// FUNCTION FUN_0085d150 @ 0085d150 ////

int * __fastcall FUN_0085d150(int *param_1)

{
  FUN_0085c000(param_1);
  return param_1;
}


//// FUNCTION FUN_0085d160 @ 0085d160 ////

int * __fastcall FUN_0085d160(int *param_1)

{
  FUN_0085bfa0(param_1);
  return param_1;
}


//// FUNCTION FUN_0085d170 @ 0085d170 ////

void FUN_0085d170(void)

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


//// FUNCTION FUN_0085d1b0 @ 0085d1b0 ////

void FUN_0085d1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0085d240 @ 0085d240 ////

void * FUN_0085d240(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0085d270 @ 0085d270 ////

void __cdecl
FUN_0085d270(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_0085cc50(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_0085cc50(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_0085cc50(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_0085cc50(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_0085cc50(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_0085d320 @ 0085d320 ////

void __cdecl FUN_0085d320(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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
  FUN_0085ccb0(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_0085d3e0 @ 0085d3e0 ////

uint __cdecl FUN_0085d3e0(float param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  float10 fVar4;
  uint local_c;
  float local_8;
  float local_4;
  
  puVar3 = FUN_00861150();
  local_c = **(uint **)(puVar3 + 4);
  if ((uint *)local_c == *(uint **)(puVar3 + 4)) {
    return local_c & 0xffffff00;
  }
  do {
    iVar1 = *(int *)(local_c + 0xc);
    local_8 = param_1;
    fVar4 = FUN_0043b710(&local_8);
    local_4 = (float)fVar4;
    local_8 = (float)Award_GetAvailableFromYear(iVar1);
    fVar2 = (float)(int)local_8;
    if (fVar2 < local_4 != (fVar2 == local_4)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)local_8 >> 0x10),
                                      (ushort)(fVar2 < local_4) << 8 |
                                      (ushort)(NAN(fVar2) || NAN(local_4)) << 10 |
                                      (ushort)(fVar2 == local_4) << 0xe) >> 8),1);
    }
    FUN_0063b190((int *)&local_c);
  } while (local_c != *(uint *)(puVar3 + 4));
  return local_c & 0xffffff00;
}


//// FUNCTION FUN_0085d460 @ 0085d460 ////

void FUN_0085d460(void)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  void *this;
  uint _Count;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 local_30 [4];
  wchar_t *local_2c;
  uint local_28;
  uint local_24;
  wchar_t local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar5 = FUN_00861c60();
  piVar9 = (int *)**(undefined4 **)(puVar5 + 4);
  puVar5 = FUN_00861c60();
  piVar2 = *(int **)(puVar5 + 4);
  do {
    if (piVar9 == piVar2) {
      ExceptionList = local_c;
      return;
    }
    iVar6 = FUN_00860d80(piVar9[3]);
    while (0 < iVar6) {
      uVar11 = 0;
      puVar7 = (undefined4 *)FUN_0043b520(local_30,0.0);
      this = (void *)FUN_00858930(piVar9[3],puVar7,uVar11);
      local_2c = local_20;
      local_20[0] = L'\0';
      local_28 = 0;
      local_24 = 10;
      _Count = FUN_00ace02d(L"Kouki!");
      if (local_24 <= _Count) {
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24 * 2);
      }
      _wcsncpy(local_2c,L"Kouki!",_Count);
      local_2c[_Count] = L'\0';
      local_4 = 0;
      local_28 = _Count;
      uVar11 = GetPlayerStudio();
      uVar10 = 0x3f800000;
      uVar8 = GetPlayerStudio();
      FUN_00857110(this,&local_2c,uVar8,uVar10,uVar11);
      local_4 = 0xffffffff;
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
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
      iVar6 = FUN_00860d80(piVar9[3]);
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
  } while( true );
}


//// FUNCTION FUN_0085d640 @ 0085d640 ////

void __fastcall FUN_0085d640(int param_1)

{
  FUN_0085d030(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0085d670 @ 0085d670 ////

void __thiscall FUN_0085d670(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_0085d6e0 @ 0085d6e0 ////

void __fastcall FUN_0085d6e0(int param_1)

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


//// FUNCTION FUN_0085d710 @ 0085d710 ////

undefined4 * FUN_0085d710(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0085d740 @ 0085d740 ////

int * __fastcall FUN_0085d740(int *param_1)

{
  FUN_0085ca60(param_1);
  return param_1;
}


//// FUNCTION FUN_0085d750 @ 0085d750 ////

void __fastcall FUN_0085d750(int param_1)

{
  FUN_0085d100(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0085d780 @ 0085d780 ////

void __fastcall FUN_0085d780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085d170();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0085d7c0 @ 0085d7c0 ////

void __cdecl
FUN_0085d7c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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
  FUN_0085d270(param_2,puVar5,param_3 + -1,param_4);
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
joined_r0x0085d858:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x0085d89e:
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
      goto joined_r0x0085d858;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x0085d89e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_0085d980 @ 0085d980 ////

void __cdecl FUN_0085d980(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_0085d320(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


//// FUNCTION FUN_0085da20 @ 0085da20 ////

void __fastcall FUN_0085da20(int param_1)

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


//// FUNCTION FUN_0085da50 @ 0085da50 ////

int __fastcall FUN_0085da50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0085d0b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0085da70 @ 0085da70 ////

void __fastcall FUN_0085da70(int param_1)

{
  FUN_0085d100(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0085da90 @ 0085da90 ////

int __fastcall FUN_0085da90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085d170();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0085daf0 @ 0085daf0 ////

void __cdecl FUN_0085daf0(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

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
            FUN_0085cd10((int)puVar4,(int)puVar2,puVar2 + 1);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_0085cd10((int)param_1,(int)puVar2,puVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_0085dbe0 @ 0085dbe0 ////

void * __thiscall FUN_0085dbe0(void *this,byte param_1)

{
  if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0085dc20 @ 0085dc20 ////

void __cdecl FUN_0085dc20(undefined4 *param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_0085d320((int)param_1,0,iVar2 + -4 >> 2,uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_0085dc70 @ 0085dc70 ////

void FUN_0085dc70(void)

{
  void *_Memory;
  void *_Memory_00;
  
  DAT_0104f0d2 = 0;
  FUN_0084fa30();
  _Memory_00 = DAT_0104f0c4;
  if (DAT_0104f0c4 == (void *)0x0) {
    DAT_0104f0c4 = (void *)0x0;
    FUN_008664b0();
    return;
  }
  _Memory = *(void **)((int)DAT_0104f0c4 + 4);
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)((int)DAT_0104f0c4 + 4) = 0;
  *(undefined4 *)((int)_Memory_00 + 8) = 0;
  *(undefined4 *)((int)_Memory_00 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory_00);
}


//// FUNCTION FUN_0085dcc0 @ 0085dcc0 ////

void __cdecl FUN_0085dcc0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_0085dd57:
      if (1 < iVar2) {
        FUN_0085daf0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_0085d980((int)param_1,(int)param_2,param_4);
        }
        FUN_0085dc20(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_0085dd57;
    }
    FUN_0085d7c0(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_0085dcc0(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_0085dcc0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_0085ddb0 @ 0085ddb0 ////

void __thiscall
FUN_0085ddb0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce8728;
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
  piVar3 = (int *)FUN_008594d0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0085deab:
        *(undefined1 *)(*piVar4 + 0x10) = 1;
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x10) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_007d2b10(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x10) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
        FUN_007d2b90(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[4] == '\0') goto LAB_0085deab;
      if (piVar6 == (int *)*piVar2) {
        FUN_007d2b90(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x10) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x10) = 0;
      FUN_007d2b10(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x10);
  } while( true );
}


//// FUNCTION FUN_0085df60 @ 0085df60 ////

void FUN_0085df60(void)

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
  puStack_8 = &LAB_00ce8748;
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


//// FUNCTION FUN_0085dfd0 @ 0085dfd0 ////

void __thiscall
FUN_0085dfd0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce8768;
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
  piVar3 = (int *)FUN_0085d1b0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0085e0cb:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0085c9a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0085ca00(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0085e0cb;
      if (piVar6 == (int *)*piVar2) {
        FUN_0085ca00(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0085c9a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0085e180 @ 0085e180 ////

void __thiscall FUN_0085e180(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce8788;
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
  FUN_0085c000((int *)&param_2);
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
      goto LAB_0085e2f1;
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
      piVar2 = (int *)FUN_0085bf70(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0085bf50((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0085e2f1:
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
            FUN_0085c9a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0085ca00(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0085c9a0(this,(int)piVar5);
              break;
            }
LAB_0085e3b4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0085ca00(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0085e3b4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0085c9a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0085ca00(this,piVar5);
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


//// FUNCTION FUN_0085e460 @ 0085e460 ////

void __thiscall FUN_0085e460(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x11) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0085ddb0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0085ca60((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0085ddb0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0085e570 @ 0085e570 ////

void __thiscall FUN_0085e570(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0085df60();
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
      _Dst = FUN_0085d710((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0085d240(param_1,iVar5,param_1 + param_2);
      FUN_0085d710(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0085c0b0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0085d240(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0085cb90(param_1,(int)pvVar3,iVar5);
    FUN_0085c0b0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0085e750 @ 0085e750 ////

void __thiscall FUN_0085e750(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_0085dfd0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0085bfa0((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0085dfd0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0085e810 @ 0085e810 ////

void __thiscall FUN_0085e810(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0085d030((void *)piVar6[1]);
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
    FUN_0085e180(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0085e8d0 @ 0085e8d0 ////

void __cdecl FUN_0085e8d0(int param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  undefined4 local_8 [2];
  
  iVar2 = 0;
  local_c = 0;
  FUN_007d47b0(*(void **)(*(int *)((int)param_2 + 4) + 4));
  *(int *)(*(int *)((int)param_2 + 4) + 4) = *(int *)((int)param_2 + 4);
  *(undefined4 *)((int)param_2 + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_2 + 4) = *(undefined4 *)((int)param_2 + 4);
  *(int *)(*(int *)((int)param_2 + 4) + 8) = *(int *)((int)param_2 + 4);
  do {
    iVar1 = Award_GetAvailableFromYear(iVar2);
    if (iVar1 == param_1) {
      FUN_0085e460(param_2,local_8,&local_c);
    }
    iVar2 = iVar2 + 1;
    local_c = iVar2;
  } while (iVar2 < 0x46);
  return;
}


//// FUNCTION FUN_0085e9a0 @ 0085e9a0 ////

undefined4 * __thiscall FUN_0085e9a0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0085dfd0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0085dfd0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_0085dfd0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_0085bfa0((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0085dfd0(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_0085dfd0(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_0085c000((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0085dfd0(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_0085dfd0(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_0085e750(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_0085eb40 @ 0085eb40 ////

void FUN_0085eb40(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce87ab;
  local_c = ExceptionList;
  if (DAT_0104f0c4 == (void *)0x0) {
    ExceptionList = &local_c;
    DAT_0104f0c4 = operator_new(0x10);
    if (DAT_0104f0c4 != (void *)0x0) {
      *(undefined4 *)((int)DAT_0104f0c4 + 4) = 0;
      *(undefined4 *)((int)DAT_0104f0c4 + 8) = 0;
      *(undefined4 *)((int)DAT_0104f0c4 + 0xc) = 0;
      ExceptionList = local_c;
      return;
    }
    DAT_0104f0c4 = (void *)0x0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0085ec30 @ 0085ec30 ////

int * __thiscall FUN_0085ec30(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_8 [2];
  
  piVar3 = *(int **)((int)this + 4);
  if (*(char *)(piVar3[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)piVar2 + 0x15) == '\0');
  }
  if ((piVar3 != *(int **)((int)this + 4)) && (piVar3[3] <= *param_1)) {
    return piVar3 + 4;
  }
  local_8[0] = *param_1;
  local_8[1] = 0;
  piVar3 = FUN_0085e9a0(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0085ece0 @ 0085ece0 ////

void __fastcall FUN_0085ece0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0085e810(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION AwardSystem_Init @ 0085ed10 ////

void AwardSystem_Init(void)

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
  puStack_8 = &LAB_00ce8810;
  local_c = ExceptionList;
  DAT_00e5d2dc = 0;
  DAT_0104f0d2 = 1;
  ExceptionList = &local_c;
  AwardSystem_Constructor();
  AwardLifetimeTracking_Constructor();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awards",6);
  local_28 = 6;
  local_2c[6] = '\0';
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
  _strncpy(local_2c,"interval",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  DAT_00e5d2d8 = FUN_00558750(DAT_00f88624,&local_2c,0);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar2 = FUN_0085eb40();
  puVar1 = *(undefined4 **)(iVar2 + 8);
  iVar2 = FUN_0085eb40();
  FUN_0085dcc0(*(undefined4 **)(iVar2 + 4),puVar1,
               (int)puVar1 - (int)*(undefined4 **)(iVar2 + 4) >> 2,&LAB_0084fab0);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_achievement",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 2;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"awd_stuntachievement",0x14);
  local_28 = 0x14;
  local_2c[0x14] = '\0';
  local_4 = 3;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_allachievement",0x12);
  local_28 = 0x12;
  local_2c[0x12] = '\0';
  local_4 = 4;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_filltallies",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 5;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_enableinsandbox",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 6;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_rankup",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 7;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_stuntrankup",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  local_4 = 8;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"awd_noforceceremony",0x13);
  local_28 = 0x13;
  local_2c[0x13] = '\0';
  local_4 = 9;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0085f160 @ 0085f160 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085f160(void)

{
  undefined4 *puVar1;
  void *this;
  int iVar2;
  ulonglong uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8836;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0085b9f0(puVar1);
  }
  local_4 = 0xffffffff;
  if ((DAT_0104a974 == 0) ||
     ((*(float *)(DAT_0104a974 + 0x78) != 1.0 && (*(float *)(DAT_0104a974 + 0x78) != 3.0)))) {
    DAT_0104f0d3 = 0;
  }
  else {
    DAT_0104f0d3 = 1;
  }
  DAT_0104f0e8 = DAT_00e4fa4c;
  uVar3 = FUN_0043b560();
  DAT_00e5d2d4 = (int)uVar3 + DAT_00e5d2d8;
  DAT_0104f0b8 = 0;
  DAT_0104f0bc = 0;
  DAT_0104f0c8 = 0;
  DAT_0104f0cc = 0;
  DAT_0104f108 = 0;
  FUN_008664c0();
  this = operator_new(0x10);
  local_4 = 1;
  if (this == (void *)0x0) {
    DAT_0104f0b4 = 0;
  }
  else {
    DAT_0104f0b4 = FUN_0043b440(this,1);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_0085eb40();
  DAT_0104f0ec = *(undefined4 *)(iVar2 + 8);
  FUN_0085d030(*(void **)(DAT_0104f0f4 + 4));
  *(int *)(DAT_0104f0f4 + 4) = DAT_0104f0f4;
  _DAT_0104f0f8 = 0;
  *(int *)DAT_0104f0f4 = DAT_0104f0f4;
  *(int *)(DAT_0104f0f4 + 8) = DAT_0104f0f4;
  FUN_0085d030(*(void **)(DAT_0104f100 + 4));
  *(int *)(DAT_0104f100 + 4) = DAT_0104f100;
  _DAT_0104f104 = 0;
  *(int *)DAT_0104f100 = DAT_0104f100;
  *(int *)(DAT_0104f100 + 8) = DAT_0104f100;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0085f2e0 @ 0085f2e0 ////

void __cdecl FUN_0085f2e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  
  this = (void *)FUN_0085eb40();
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0085e570(this,*(undefined4 **)((int)this + 8),1,&param_1);
  return;
}


//// FUNCTION FUN_0085f330 @ 0085f330 ////

void FUN_0085f330(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_0085eb40();
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 != *(undefined4 **)(iVar1 + 8)) {
    do {
      (**(code **)(*(int *)*puVar2 + 4))();
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(iVar1 + 8));
  }
  return;
}


//// FUNCTION FUN_0085f360 @ 0085f360 ////

/* WARNING: Removing unreachable block (ram,0x0085f3eb) */

int * __cdecl FUN_0085f360(int *param_1,int param_2)

{
  wchar_t *_Source;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *pvVar5;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8848;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0085eb40();
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != *(undefined4 **)(iVar1 + 8)) {
    do {
      iVar2 = (**(code **)(*(int *)*puVar3 + 0xc))();
      if (param_2 == iVar2) {
        puVar3 = (undefined4 *)(**(code **)(*(int *)*puVar3 + 0x10))(apvStack_2c);
        local_48 = puVar3[1];
        _Source = (wchar_t *)*puVar3;
        if (9 < local_48) {
          local_44 = local_48 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44 * 2);
        }
        _wcsncpy(local_4c,_Source,local_48);
        local_4c[local_48] = L'\0';
        if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        break;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)(iVar1 + 8));
  }
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = 10;
  if (9 < local_48) {
    uVar4 = local_48 + 0x20 & 0xffffffe0;
    param_1[2] = uVar4;
    pvVar5 = _malloc(uVar4 * 2);
    *param_1 = (int)pvVar5;
  }
  _wcsncpy((wchar_t *)*param_1,local_4c,local_48);
  param_1[1] = local_48;
  *(undefined2 *)(*param_1 + local_48 * 2) = 0;
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0085f4d0 @ 0085f4d0 ////

void __cdecl FUN_0085f4d0(int param_1,undefined4 *param_2,undefined1 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  param_2[1] = 0;
  *(undefined2 *)*param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar1 = FUN_0085eb40();
  puVar3 = *(undefined4 **)(iVar1 + 4);
  if (puVar3 != *(undefined4 **)(iVar1 + 8)) {
    while( true ) {
      iVar2 = (**(code **)(*(int *)*puVar3 + 0xc))();
      if (param_1 == iVar2) break;
      puVar3 = puVar3 + 1;
      if (puVar3 == *(undefined4 **)(iVar1 + 8)) {
        return;
      }
    }
    (**(code **)(*(int *)*puVar3 + 0x14))(param_2,param_3,param_4);
  }
  return;
}


//// FUNCTION FUN_0085f540 @ 0085f540 ////

undefined4 FUN_0085f540(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = FUN_0085ec30(&DAT_0104f0fc,(int *)&stack0x00000004);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    iVar3 = FUN_00566c70();
    if ((uint)(iVar3 - iVar1) < 12000) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_0085f570 @ 0085f570 ////

undefined4 FUN_0085f570(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = FUN_0085ec30(&DAT_0104f0f0,(int *)&stack0x00000004);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    iVar3 = FUN_00566c70();
    if ((uint)(iVar3 - iVar1) < 20000) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_0085f5c0 @ 0085f5c0 ////

void __cdecl FUN_0085f5c0(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  void *this;
  float fVar6;
  float *this_00;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iStack_6c;
  int local_68;
  undefined1 auStack_64 [4];
  undefined **ppuStack_60;
  int iStack_5c;
  int *piStack_58;
  undefined4 uStack_4c;
  undefined1 auStack_38 [4];
  undefined **ppuStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8892;
  local_c = ExceptionList;
  bVar2 = false;
  bVar1 = false;
  ExceptionList = &local_c;
  local_68 = FUN_0085eb40();
  puVar12 = *(undefined4 **)(local_68 + 4);
  if (puVar12 != *(undefined4 **)(local_68 + 8)) {
    do {
      (**(code **)(*(int *)*puVar12 + 0xc))();
      bVar3 = FUN_00861a90();
      if (bVar3) {
        pvVar5 = FUN_00857bd0(auStack_38);
        piVar7 = (int *)*puVar12;
        uStack_4 = 0;
        this = FUN_00857d80(auStack_64);
        bVar2 = true;
        bVar1 = true;
        uStack_4 = 1;
        fVar6 = (float)(**(code **)(*piVar7 + 0xc))();
        this_00 = FUN_00857b30(this,fVar6);
        bVar3 = FUN_00856db0(this_00,(int)pvVar5);
        if (!bVar3) goto LAB_0085f671;
        bVar3 = true;
      }
      else {
LAB_0085f671:
        bVar3 = false;
      }
      if (bVar1) {
        bVar1 = false;
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
      }
      uStack_4 = 0xffffffff;
      if (bVar2) {
        bVar2 = false;
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
      }
      if ((bVar3) && (cVar4 = (**(code **)(*(int *)*puVar12 + 8))(param_1), cVar4 != '\0')) {
        iStack_6c = (**(code **)(*(int *)*puVar12 + 0xc))();
        piVar7 = FUN_0085ec30(&DAT_0104f0f0,&iStack_6c);
        iVar8 = FUN_00566c70();
        *piVar7 = iVar8;
        iVar8 = DAT_00e5d2d4;
        uVar13 = FUN_0043b560();
        if (iVar8 <= (int)uVar13) {
          piVar7 = (int *)*puVar12;
          iVar8 = FUN_008666a0('\0');
          iVar9 = (**(code **)(*piVar7 + 0xc))();
          puVar10 = FUN_00867060(iVar8 + 1,'\0');
          piVar7 = *(int **)(puVar10 + 8);
          piVar11 = *(int **)(puVar10 + 4);
          if (piVar11 != piVar7) {
            do {
              if (*piVar11 == iVar9) break;
              piVar11 = piVar11 + 1;
            } while (piVar11 != piVar7);
            if (piVar11 != piVar7) {
              FUN_007942e0('\0');
            }
          }
        }
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != *(undefined4 **)(local_68 + 8));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0085f7c0 @ 0085f7c0 ////

void __cdecl FUN_0085f7c0(void *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  undefined **ppuVar7;
  uint **_Memory;
  uint **local_d4;
  undefined **local_d0;
  uint local_cc;
  uint *local_c8 [3];
  undefined4 local_bc;
  uint **local_a8;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_9c [20];
  uint **local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c [20];
  float local_68;
  undefined **local_64;
  int local_60;
  int *local_5c;
  undefined4 local_50;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce88dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = FUN_00857d80(local_38);
  local_4 = 0;
  pfVar5 = FUN_00857b90(pvVar4,1.4013e-45);
  FUN_00500630(&local_68,pfVar5);
  local_4._0_1_ = 2;
  local_34 = &PTR_FUN_00d1aed0;
  if (local_2c != (int *)0x0) {
    *local_2c = local_30;
  }
  if (local_30 != 0) {
    *(int **)(local_30 + 4) = local_2c;
  }
  local_20 = 0;
  local_30 = 0;
  local_2c = (int *)0x0;
  while( true ) {
    pvVar4 = FUN_00857bd0(&local_d4);
    local_4._0_1_ = 3;
    bVar3 = FUN_00856dd0(&local_68,(int)pvVar4);
    local_4._0_1_ = 2;
    local_d0 = &PTR_FUN_00d1aed0;
    if (local_c8[0] != (uint *)0x0) {
      *local_c8[0] = local_cc;
    }
    if (local_cc != 0) {
      *(uint **)(local_cc + 4) = local_c8[0];
    }
    local_bc = 0;
    local_cc = 0;
    local_c8[0] = (uint *)0x0;
    if (!bVar3) break;
    iVar6 = FUN_00856da0((int)&local_68);
    ppuVar7 = FUN_00860970(*(int *)(iVar6 + 0x60));
    iVar6 = *(int *)((int)param_1 + 4);
    if ((iVar6 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar6 >> 5) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar6 >> 5))) {
      FUN_00439fd0(param_1,*(int **)((int)param_1 + 8),1,ppuVar7);
      FUN_00857260(&local_68);
    }
    else {
      piVar1 = *(int **)((int)param_1 + 8);
      FUN_00439ea0(piVar1,1,ppuVar7);
      *(int **)((int)param_1 + 8) = piVar1 + 8;
      FUN_00857260(&local_68);
    }
  }
  local_4 = 0xffffffff;
  local_64 = &PTR_FUN_00d1aed0;
  if (local_5c != (int *)0x0) {
    *local_5c = local_60;
  }
  if (local_60 != 0) {
    *(int **)(local_60 + 4) = local_5c;
  }
  local_50 = 0;
  local_60 = 0;
  local_5c = (int *)0x0;
  if (DAT_0104f0bc == 1) {
    local_d4 = local_c8;
    local_c8[0] = (uint *)0x0;
    local_d0 = (undefined **)0x0;
    local_cc = 0x14;
    _strncpy((char *)local_d4,"LIFETIME_STANDARD",0x11);
    local_d0 = (undefined **)0x11;
    *(char *)((int)local_d4 + 0x11) = '\0';
    local_4 = 4;
    FUN_0043a2d0(param_1,&local_d4);
    _Memory = local_d4;
    uVar2 = local_cc;
  }
  else {
    if (DAT_0104f0bc != 2) {
      if (DAT_0104f0bc != 3) {
        ExceptionList = local_c;
        return;
      }
      local_88 = (uint **)local_7c;
      local_7c[0] = 0;
      local_84 = 0;
      local_80 = 0x14;
      _strncpy((char *)local_88,"LIFETIME_PLATINUM",0x11);
      local_84 = 0x11;
      *(char *)((int)local_88 + 0x11) = '\0';
      local_4 = 6;
      FUN_0043a2d0(param_1,&local_88);
      _Memory = local_88;
      if (local_80 < 0x15) {
        ExceptionList = local_c;
        return;
      }
      goto LAB_0085fad8;
    }
    local_a8 = (uint **)local_9c;
    local_9c[0] = 0;
    local_a4 = 0;
    local_a0 = 0x14;
    _strncpy((char *)local_a8,"LIFETIME_GOLD",0xd);
    local_a4 = 0xd;
    *(char *)((int)local_a8 + 0xd) = '\0';
    local_4 = 5;
    FUN_0043a2d0(param_1,&local_a8);
    _Memory = local_a8;
    uVar2 = local_a0;
  }
  if (uVar2 < 0x15) {
    ExceptionList = local_c;
    return;
  }
LAB_0085fad8:
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0085fb00 @ 0085fb00 ////

void FUN_0085fb00(void)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_c;
  float fStack_8;
  undefined1 local_4 [4];
  
  iVar3 = FUN_0085eb40();
  puVar6 = *(undefined4 **)(iVar3 + 4);
  if (puVar6 != *(undefined4 **)(iVar3 + 8)) {
    do {
      fVar2 = DAT_0104f0e8;
      piVar1 = (int *)*puVar6;
      pfVar4 = (float *)FUN_0043b520(local_4,(float)DAT_00e5d2d8);
      local_c = fVar2 + *pfVar4;
      iVar5 = (**(code **)(*piVar1 + 0xc))();
      fVar7 = FUN_0043b710(&local_c);
      fStack_8 = (float)fVar7;
      iVar5 = Award_GetAvailableFromYear(iVar5);
      if ((float)iVar5 < fStack_8 != ((float)iVar5 == fStack_8)) {
        (**(code **)(*(int *)*puVar6 + 0x1c))();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(iVar3 + 8));
  }
  iVar3 = FUN_0045f400();
  FUN_0085cf00(iVar3);
  iVar3 = FUN_0045f420();
  FUN_0085cf00(iVar3);
  iVar3 = FUN_0045f410();
  FUN_0085cf00(iVar3);
  return;
}


//// FUNCTION FUN_0085fbc0 @ 0085fbc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085fbc0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  void *pvVar6;
  int *piVar7;
  int *piVar8;
  char cVar9;
  int iStack_34;
  uint uStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce88f8;
  pvStack_c = ExceptionList;
  bVar1 = false;
  ExceptionList = &pvStack_c;
  do {
    iVar4 = FUN_0085eb40();
    if (DAT_0104f0ec == *(undefined4 **)(iVar4 + 8)) {
      iVar4 = FUN_0085eb40();
      DAT_0104f0ec = *(undefined4 **)(iVar4 + 4);
    }
    (**(code **)(*(int *)*DAT_0104f0ec + 0xc))();
    bVar2 = FUN_00861ac0();
    (**(code **)(*(int *)*DAT_0104f0ec + 0xc))();
    bVar3 = FUN_00861a90();
    if ((bVar2) || (bVar3)) {
      iVar4 = FUN_008666a0(bVar2);
      uStack_30 = iVar4 + 1;
      if ((((0.5 < _DAT_0104f0d8) || (DAT_0104f0e4 != '\0')) && (bVar3)) ||
         (((0.5 < _DAT_0104f0dc || (DAT_0104f0e5 != '\0')) && (bVar2)))) {
        cVar9 = bVar2;
        iVar4 = FUN_008666a0(bVar2);
        puVar5 = FUN_00867060(iVar4 + 1,cVar9);
        iVar4 = (**(code **)(*(int *)*DAT_0104f0ec + 0xc))();
        piVar7 = *(int **)(puVar5 + 8);
        piVar8 = *(int **)(puVar5 + 4);
        if (piVar8 == piVar7) goto LAB_0085fd5d;
        do {
          if (*piVar8 == iVar4) break;
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar7);
        if (piVar8 == piVar7) goto LAB_0085fd5d;
        pcStack_2c = acStack_20;
        DAT_0104f0e4 = '\0';
        DAT_0104f0e5 = '\0';
        acStack_20[0] = '\0';
        uStack_28 = 0;
        uStack_24 = 0x14;
        _strncpy(pcStack_2c,"",0);
        uStack_28 = 0;
        *pcStack_2c = '\0';
        uStack_4 = 0;
        pvVar6 = FUN_00865c90((int *)*DAT_0104f0ec,&pcStack_2c);
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_2c);
        }
      }
      else {
LAB_0085fd5d:
        pvVar6 = (void *)(**(code **)(*(int *)*DAT_0104f0ec + 0x1c))();
      }
      if (pvVar6 != (void *)0x0) {
        iStack_34 = *(int *)((int)pvVar6 + 0x60);
        piVar7 = FUN_0085ec30(&DAT_0104f0fc,&iStack_34);
        iVar4 = FUN_00566c70();
        *piVar7 = iVar4;
        iStack_34 = *(int *)((int)pvVar6 + 0x60);
        piVar7 = FUN_0085ec30(&DAT_0104f0f0,&iStack_34);
        iVar4 = FUN_00566c70();
        *piVar7 = iVar4;
        iVar4 = *(int *)((int)pvVar6 + 0x60);
        puVar5 = FUN_00867060(uStack_30,bVar2);
        piVar7 = *(int **)(puVar5 + 8);
        piVar8 = *(int **)(puVar5 + 4);
        if (piVar8 != piVar7) {
          do {
            if (*piVar8 == iVar4) break;
            piVar8 = piVar8 + 1;
          } while (piVar8 != piVar7);
          if (piVar8 != piVar7) {
            FUN_007942e0(bVar2);
          }
        }
      }
      bVar1 = true;
    }
    DAT_0104f0ec = DAT_0104f0ec + 1;
    if (bVar1) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_0085fe20 @ 0085fe20 ////

int __fastcall FUN_0085fe20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085d170();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0085fe50 @ 0085fe50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085fe50(void)

{
  char cVar1;
  int *piVar2;
  byte bVar3;
  int *piVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int local_74;
  undefined1 local_70 [4];
  int *local_6c;
  undefined4 local_68;
  float local_64;
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8928;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_6c = (int *)FUN_007cfd80();
  *(undefined1 *)((int)local_6c + 0x15) = 1;
  local_6c[1] = (int)local_6c;
  *local_6c = (int)local_6c;
  local_6c[2] = (int)local_6c;
  local_68 = 0;
  local_4 = 0;
  FUN_00857d80(&local_64);
  local_4._0_1_ = 1;
  while( true ) {
    pvVar6 = FUN_00857bd0(local_38);
    local_4._0_1_ = 2;
    bVar5 = FUN_00856dd0(&local_64,(int)pvVar6);
    local_4._0_1_ = 1;
    local_34 = &PTR_FUN_00d1aed0;
    if (local_2c != (int *)0x0) {
      *local_2c = local_30;
    }
    if (local_30 != 0) {
      *(int **)(local_30 + 4) = local_2c;
    }
    local_20 = 0;
    local_30 = 0;
    local_2c = (int *)0x0;
    if (!bVar5) break;
    FUN_00856da0((int)&local_64);
    bVar5 = FUN_00861a90();
    if (!bVar5) {
      iVar7 = FUN_00856da0((int)&local_64);
      iVar7 = *(int *)(iVar7 + 0xb8);
      iVar8 = GetPlayerStudio();
      if (iVar7 == iVar8) {
        FUN_00856da0((int)&local_64);
        if ((DAT_0104f0d3 == '\0') && (_DAT_0104f0d4 == 0.0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        uVar12 = FUN_0043b560();
        if ((int)uVar12 <= (int)((-(uint)bVar3 & 0xffffe0c6) + 9999)) {
          iVar7 = FUN_00856da0((int)&local_64);
          local_74 = *(int *)(iVar7 + 0x60);
          piVar9 = FUN_007d05b0(local_70,&local_74);
          *piVar9 = *piVar9 + 1;
        }
      }
    }
    FUN_00857260(&local_64);
  }
  local_4 = (uint)local_4._1_3_ << 8;
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
  puVar10 = FUN_00861c60();
  piVar9 = (int *)**(undefined4 **)(puVar10 + 4);
  puVar10 = FUN_00861c60();
  piVar2 = *(int **)(puVar10 + 4);
  while (piVar9 != piVar2) {
    piVar11 = FUN_007d05b0(local_70,piVar9 + 3);
    iVar7 = FUN_00860d80(piVar9[3]);
    if (*piVar11 < iVar7) break;
    if (*(char *)((int)piVar9 + 0x11) == '\0') {
      piVar11 = (int *)piVar9[2];
      if (*(char *)((int)piVar11 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar11 + 0x11);
        piVar9 = piVar11;
        piVar11 = (int *)*piVar11;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar11 + 0x11);
          piVar9 = piVar11;
          piVar11 = (int *)*piVar11;
        }
      }
      else {
        cVar1 = *(char *)(piVar9[1] + 0x11);
        piVar4 = (int *)piVar9[1];
        piVar11 = piVar9;
        while ((piVar9 = piVar4, cVar1 == '\0' && (piVar11 == (int *)piVar9[2]))) {
          cVar1 = *(char *)(piVar9[1] + 0x11);
          piVar4 = (int *)piVar9[1];
          piVar11 = piVar9;
        }
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_007d0350(local_70,&local_74,(int *)*local_6c,local_6c);
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_008600e0 @ 008600e0 ////

void FUN_008600e0(void)

{
  char cVar1;
  int iVar2;
  int extraout_ECX;
  
  DAT_0104f0b8 = DAT_0104f0bc;
  if ((DAT_0104f0bc == 0) && (iVar2 = FUN_008666a0('\0'), 8 < iVar2)) {
    DAT_0104f0bc = 1;
LAB_00860112:
    FUN_0043b560();
    iVar2 = FUN_0085c570();
    if (iVar2 <= extraout_ECX) goto LAB_00860138;
    DAT_0104f0bc = 2;
LAB_0086013d:
    cVar1 = FUN_0085fe50();
    if (cVar1 == '\0') goto LAB_0086015a;
    DAT_0104f0bc = 3;
  }
  else {
    if (DAT_0104f0bc == 1) goto LAB_00860112;
LAB_00860138:
    if (DAT_0104f0bc == 2) goto LAB_0086013d;
LAB_0086015a:
    if (DAT_0104f0bc < 2) goto LAB_0086016f;
  }
  if (DAT_0104f0b8 < 2) {
    FUN_00854970();
  }
LAB_0086016f:
  if ((2 < DAT_0104f0bc) && (DAT_0104f0b8 < 3)) {
    FUN_00854980();
    return;
  }
  return;
}


//// FUNCTION AwardBonuses_RecomputeActiveFromWinners @ 00860190 ////

void AwardBonuses_RecomputeActiveFromWinners(void)

{
  undefined4 *_Memory;
  int *piVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *piVar10;
  int *piVar11;
  float local_c0;
  undefined1 local_bc [4];
  int local_b8;
  undefined4 local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4 [3];
  undefined4 *local_98;
  undefined4 local_94;
  float local_90;
  undefined **local_8c;
  int local_88;
  int *local_84;
  undefined4 local_78;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8971;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_b8 = FUN_007d4720();
  *(undefined1 *)(local_b8 + 0x11) = 1;
  *(int *)(local_b8 + 4) = local_b8;
  *(int *)local_b8 = local_b8;
  *(int *)(local_b8 + 8) = local_b8;
  local_b4 = 0;
  local_4 = 0;
  local_a8 = 0;
  local_ac = 0;
  pvVar4 = FUN_00857d80(local_64);
  local_c0 = DAT_0104f0e8;
  local_4._0_1_ = 1;
  pfVar5 = (float *)FUN_0043b520(local_a4,(float)DAT_00e5d2d8);
  local_b0 = (int *)(local_c0 + *pfVar5);
  pfVar5 = FUN_00857b60(pvVar4,(float *)&local_b0);
  FUN_00500630(&local_90,pfVar5);
  local_4._0_1_ = 3;
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
  do {
    while( true ) {
      pvVar4 = FUN_00857bd0(local_38);
      local_4._0_1_ = 4;
      bVar2 = FUN_00856dd0(&local_90,(int)pvVar4);
      local_4._0_1_ = 3;
      local_34 = &PTR_FUN_00d1aed0;
      if (local_2c != (int *)0x0) {
        *local_2c = local_30;
      }
      if (local_30 != 0) {
        *(int **)(local_30 + 4) = local_2c;
      }
      local_20 = 0;
      local_30 = 0;
      local_2c = (int *)0x0;
      if (!bVar2) {
        local_4._0_1_ = 0;
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
        puVar8 = (undefined4 *)FUN_0085d0b0();
        local_94 = 0;
        local_4 = CONCAT31(local_4._1_3_,5);
        local_98 = puVar8;
        puVar9 = FUN_00861c60();
        piVar11 = (int *)**(int **)(puVar9 + 4);
        puVar9 = FUN_00861c60();
        local_b0 = *(int **)(puVar9 + 4);
        if (piVar11 != local_b0) {
          do {
            iVar6 = Award_GetBonusIndex();
            if (iVar6 != 0x11) {
              piVar10 = (int *)FUN_0085d670(local_bc,local_a4,piVar11 + 3);
              bVar2 = *piVar10 == local_b8;
              iVar7 = iVar6;
              pvVar4 = (void *)AwardBonusManager_Get();
              cVar3 = AwardBonusManager_IsBonusActive(pvVar4,iVar7);
              puVar8 = local_98;
              if (bVar2) {
                if (cVar3 != '\0') {
                  pvVar4 = (void *)AwardBonusManager_Get();
                  AwardBonusManager_DisableBonus(pvVar4,iVar6);
                  puVar8 = local_98;
                }
              }
              else if (cVar3 == '\0') {
                pvVar4 = (void *)AwardBonusManager_Get();
                AwardBonusManager_EnableBonus(pvVar4,iVar6);
                puVar8 = local_98;
              }
            }
            if (*(char *)((int)piVar11 + 0x11) == '\0') {
              piVar10 = (int *)piVar11[2];
              if (*(char *)((int)piVar10 + 0x11) == '\0') {
                cVar3 = *(char *)(*piVar10 + 0x11);
                piVar11 = piVar10;
                piVar10 = (int *)*piVar10;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)(*piVar10 + 0x11);
                  piVar11 = piVar10;
                  piVar10 = (int *)*piVar10;
                }
              }
              else {
                cVar3 = *(char *)(piVar11[1] + 0x11);
                piVar1 = (int *)piVar11[1];
                piVar10 = piVar11;
                while ((piVar11 = piVar1, cVar3 == '\0' && (piVar10 == (int *)piVar11[2]))) {
                  cVar3 = *(char *)(piVar11[1] + 0x11);
                  piVar1 = (int *)piVar11[1];
                  piVar10 = piVar11;
                }
              }
            }
          } while (piVar11 != local_b0);
        }
        iVar6 = local_a8;
        pvVar4 = (void *)AwardBonusManager_Get();
        FUN_00858e80(pvVar4,iVar6);
        iVar6 = local_ac;
        pvVar4 = (void *)AwardBonusManager_Get();
        FUN_00858ec0(pvVar4,iVar6);
        _Memory = (undefined4 *)*puVar8;
        *puVar8 = puVar8;
        puVar8[1] = puVar8;
        if (_Memory == puVar8) {
                    /* WARNING: Subroutine does not return */
          _free(puVar8);
        }
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      iVar6 = FUN_00856da0((int)&local_90);
      iVar6 = *(int *)(iVar6 + 0xb8);
      iVar7 = GetPlayerStudio();
      if (iVar6 == iVar7) break;
LAB_008603ac:
      FUN_00857260(&local_90);
    }
    iVar6 = FUN_00856da0((int)&local_90);
    local_c0 = *(float *)(iVar6 + 0x60);
    FUN_0085e460(local_bc,local_a4,(int *)&local_c0);
    iVar6 = FUN_00856da0((int)&local_90);
    if (*(int *)(iVar6 + 0x60) != 4) {
      iVar6 = FUN_00856da0((int)&local_90);
      if (*(int *)(iVar6 + 0x60) == 3) {
        iVar6 = FUN_00856da0((int)&local_90);
        local_ac = FUN_00ace790(*(int **)(iVar6 + 0xa0),0,&TM::TMObject::RTTI_Type_Descriptor,
                                &TM::CStar::RTTI_Type_Descriptor,0);
      }
      goto LAB_008603ac;
    }
    iVar6 = FUN_00856da0((int)&local_90);
    local_a8 = FUN_00ace790(*(int **)(iVar6 + 0xa0),0,&TM::TMObject::RTTI_Type_Descriptor,
                            &TM::CStar::RTTI_Type_Descriptor,0);
    FUN_00857260(&local_90);
  } while( true );
}


//// FUNCTION FUN_00860580 @ 00860580 ////

void FUN_00860580(void)

{
  float fVar1;
  float *pfVar2;
  undefined1 auStack_4 [4];
  
  FUN_0085fb00();
  FUN_008600e0();
  AwardBonuses_RecomputeActiveFromWinners();
  fVar1 = DAT_0104f0e8;
  pfVar2 = (float *)FUN_0043b520(auStack_4,(float)DAT_00e5d2d8);
  DAT_0104f0e8 = fVar1 + *pfVar2;
  return;
}


//// FUNCTION FUN_00860970 @ 00860970 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __cdecl FUN_00860970(int param_1)

{
  if ((DAT_0104f478 & 1) == 0) {
    DAT_0104f478 = DAT_0104f478 | 1;
    DAT_0104f458 = &DAT_0104f464;
    DAT_0104f464 = 0;
    _DAT_0104f45c = 0;
    DAT_0104f460 = 0x14;
    _strncpy(&DAT_0104f464,"",0);
    _DAT_0104f45c = 0;
    *DAT_0104f458 = 0;
    _atexit(FUN_00d13650);
  }
  if (param_1 < 0x46) {
    return &PTR_DAT_00e5d2e0 + param_1 * 8;
  }
  return &DAT_0104f458;
}


//// FUNCTION FUN_00860a00 @ 00860a00 ////

int __cdecl FUN_00860a00(undefined4 *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  ppuVar2 = &PTR_DAT_00e5d2e0;
  iVar3 = 0;
  do {
    iVar1 = __stricmp((char *)*param_1,*ppuVar2);
    if (iVar1 == 0) {
      return iVar3;
    }
    ppuVar2 = ppuVar2 + 8;
    iVar3 = iVar3 + 1;
  } while ((int)ppuVar2 < 0xe5dba0);
  return 0;
}


//// FUNCTION Awards_LoadAvailabilityAndTallyThresholds @ 00860a80 ////

void Awards_LoadAvailabilityAndTallyThresholds(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuVar6;
  float10 fVar7;
  char *local_184;
  undefined4 local_180;
  uint local_17c;
  char local_178 [20];
  char *local_164;
  undefined4 local_160;
  uint local_15c;
  char local_158 [20];
  char *local_144;
  undefined4 local_140;
  uint local_13c;
  char local_138 [20];
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce89d7;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  do {
    FUN_0043b700(&DAT_0104f340 + iVar5,0.0);
    *(undefined4 *)((int)&DAT_0104f110 + iVar5) = 5;
    *(undefined4 *)((int)&DAT_0104f228 + iVar5) = 0xffffffff;
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x118);
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  _strncpy(local_124,"awards",6);
  local_120 = 6;
  local_124[6] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  cVar1 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar1 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    puVar2 = FUN_005562f0(local_e4,local_104,0);
    iVar5 = 0;
    ppuVar6 = &PTR_DAT_00e5d2e0;
    do {
      iVar3 = __stricmp((char *)*puVar2,*ppuVar6);
      if (iVar3 == 0) goto LAB_00860b96;
      ppuVar6 = ppuVar6 + 8;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0xe5dba0);
    iVar5 = 0;
LAB_00860b96:
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    local_144 = local_138;
    local_138[0] = '\0';
    local_140 = 0;
    local_13c = 0x14;
    _strncpy(local_144,"available_from",0xe);
    local_140 = 0xe;
    local_144[0xe] = '\0';
    local_4._0_1_ = 3;
    fVar7 = FUN_00558610(local_e4,&local_144,0.0);
    FUN_0043b700(&DAT_0104f340 + iVar5 * 4,(float)fVar7);
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144);
    }
    local_184 = local_178;
    local_178[0] = '\0';
    local_180 = 0;
    local_17c = 0x14;
    _strncpy(local_184,"tally_threshold",0xf);
    local_180 = 0xf;
    local_184[0xf] = '\0';
    local_4._0_1_ = 4;
    uVar4 = FUN_00558750(local_e4,&local_184,5);
    (&DAT_0104f110)[iVar5] = uVar4;
    if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
      _free(local_184);
    }
    local_164 = local_158;
    local_158[0] = '\0';
    local_160 = 0;
    local_15c = 0x20;
    local_164 = _malloc(0x20);
    _strncpy(local_164,"available_post_stunt",0x14);
    local_160 = 0x14;
    local_164[0x14] = '\0';
    local_4._0_1_ = 5;
    uVar4 = FUN_00558750(local_e4,&local_164,0xffffffff);
    (&DAT_0104f228)[iVar5] = uVar4;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_15c) {
                    /* WARNING: Subroutine does not return */
      _free(local_164);
    }
    cVar1 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_00860d80 @ 00860d80 ////

undefined4 __cdecl FUN_00860d80(int param_1)

{
  if (DAT_0104f47c == '\0') {
    Awards_LoadAvailabilityAndTallyThresholds();
    DAT_0104f47c = 1;
    return (&DAT_0104f110)[param_1];
  }
  return (&DAT_0104f110)[param_1];
}


//// FUNCTION FUN_00860db0 @ 00860db0 ////

ulonglong FUN_00860db0(void)

{
  ulonglong uVar1;
  
  if (DAT_0104f47c == '\0') {
    Awards_LoadAvailabilityAndTallyThresholds();
    DAT_0104f47c = '\x01';
  }
  uVar1 = FUN_0043b560();
  return uVar1;
}


//// FUNCTION FUN_00860de0 @ 00860de0 ////

undefined4 __cdecl FUN_00860de0(int param_1)

{
  if (DAT_0104f47c == '\0') {
    Awards_LoadAvailabilityAndTallyThresholds();
    DAT_0104f47c = 1;
    return (&DAT_0104f228)[param_1];
  }
  return (&DAT_0104f228)[param_1];
}


//// FUNCTION FUN_00860e10 @ 00860e10 ////

void __thiscall FUN_00860e10(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00860e80 @ 00860e80 ////

void __thiscall FUN_00860e80(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  while (param_1 != iVar1) {
    FUN_0085e460(this,local_8,(int *)(param_1 + 0xc));
    FUN_0063b190(&param_1);
  }
  return;
}


//// FUNCTION FUN_00860ec0 @ 00860ec0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00860ec0(void)

{
  int local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce89fe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0104f48c & 1) == 0) {
    _DAT_0104f48c = _DAT_0104f48c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104f484 = FUN_007d4720();
    *(undefined1 *)(DAT_0104f484 + 0x11) = 1;
    *(int *)(DAT_0104f484 + 4) = DAT_0104f484;
    *(int *)DAT_0104f484 = DAT_0104f484;
    *(int *)(DAT_0104f484 + 8) = DAT_0104f484;
    _DAT_0104f488 = 0;
    _atexit(FUN_00d136f0);
  }
  local_4 = 0xffffffff;
  if (DAT_0104f47d == '\0') {
    FUN_007d47b0(*(void **)(DAT_0104f484 + 4));
    *(int *)(DAT_0104f484 + 4) = DAT_0104f484;
    _DAT_0104f488 = 0;
    *(int *)DAT_0104f484 = DAT_0104f484;
    *(int *)(DAT_0104f484 + 8) = DAT_0104f484;
    local_18 = 6;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    local_18 = 7;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    local_18 = 8;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    local_18 = 9;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    local_18 = 10;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    local_18 = 0xb;
    FUN_0085e460(&DAT_0104f480,local_14,&local_18);
    DAT_0104f47d = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104f480;
}


//// FUNCTION FUN_00861040 @ 00861040 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861040(void)

{
  int local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8a1e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0104f4a0 & 1) == 0) {
    _DAT_0104f4a0 = _DAT_0104f4a0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104f498 = FUN_007d4720();
    *(undefined1 *)(DAT_0104f498 + 0x11) = 1;
    *(int *)(DAT_0104f498 + 4) = DAT_0104f498;
    *(int *)DAT_0104f498 = DAT_0104f498;
    *(int *)(DAT_0104f498 + 8) = DAT_0104f498;
    _DAT_0104f49c = 0;
    _atexit(FUN_00d13700);
  }
  local_4 = 0xffffffff;
  if (DAT_0104f490 == '\0') {
    FUN_007d47b0(*(void **)(DAT_0104f498 + 4));
    *(int *)(DAT_0104f498 + 4) = DAT_0104f498;
    _DAT_0104f49c = 0;
    *(int *)DAT_0104f498 = DAT_0104f498;
    *(int *)(DAT_0104f498 + 8) = DAT_0104f498;
    local_18 = 0xc;
    FUN_0085e460(&DAT_0104f494,local_14,&local_18);
    local_18 = 0xd;
    FUN_0085e460(&DAT_0104f494,local_14,&local_18);
    DAT_0104f490 = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104f494;
}


//// FUNCTION FUN_00861150 @ 00861150 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861150(void)

{
  bool bVar1;
  int local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8a3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0104f4b4 & 1) == 0) {
    _DAT_0104f4b4 = _DAT_0104f4b4 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104f4ac = FUN_007d4720();
    *(undefined1 *)(DAT_0104f4ac + 0x11) = 1;
    *(int *)(DAT_0104f4ac + 4) = DAT_0104f4ac;
    *(int *)DAT_0104f4ac = DAT_0104f4ac;
    *(int *)(DAT_0104f4ac + 8) = DAT_0104f4ac;
    _DAT_0104f4b0 = 0;
    _atexit(FUN_00d13710);
  }
  local_4 = 0xffffffff;
  if (DAT_0104f4a4 == '\0') {
    FUN_007d47b0(*(void **)(DAT_0104f4ac + 4));
    *(int *)(DAT_0104f4ac + 4) = DAT_0104f4ac;
    _DAT_0104f4b0 = 0;
    *(int *)DAT_0104f4ac = DAT_0104f4ac;
    *(int *)(DAT_0104f4ac + 8) = DAT_0104f4ac;
    bVar1 = FUN_00541f60(0);
    if (bVar1) {
      local_18 = 0x31;
      FUN_0085e460(&DAT_0104f4a8,local_14,&local_18);
      local_18 = 0x32;
      FUN_0085e460(&DAT_0104f4a8,local_14,&local_18);
      local_18 = 0x33;
      FUN_0085e460(&DAT_0104f4a8,local_14,&local_18);
    }
    DAT_0104f4a4 = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104f4a8;
}


//// FUNCTION FUN_00861290 @ 00861290 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861290(void)

{
  int local_24;
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00ce8a5e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((DAT_0104f4c8 & 1) == 0) {
    DAT_0104f4c8 = DAT_0104f4c8 | 1;
    local_c = 0;
    ExceptionList = &local_14;
    DAT_0104f4c0 = FUN_007d4720();
    *(undefined1 *)(DAT_0104f4c0 + 0x11) = 1;
    *(int *)(DAT_0104f4c0 + 4) = DAT_0104f4c0;
    *(int *)DAT_0104f4c0 = DAT_0104f4c0;
    *(int *)(DAT_0104f4c0 + 8) = DAT_0104f4c0;
    _DAT_0104f4c4 = 0;
    _atexit(FUN_00d13730);
  }
  local_c = 0xffffffff;
  if (DAT_0104f4b8 == '\0') {
    FUN_007d47b0(*(void **)(DAT_0104f4c0 + 4));
    *(int *)(DAT_0104f4c0 + 4) = DAT_0104f4c0;
    _DAT_0104f4c4 = 0;
    *(int *)DAT_0104f4c0 = DAT_0104f4c0;
    *(int *)(DAT_0104f4c0 + 8) = DAT_0104f4c0;
    local_24 = 0xe;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0xf;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x10;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x11;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x12;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x13;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x14;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x15;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x16;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x17;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x18;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x19;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1a;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1b;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1c;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1d;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1e;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x1f;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x20;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x21;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x22;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x23;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x24;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x25;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x26;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x27;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x28;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x29;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2a;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2b;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2c;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2d;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2e;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x2f;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    local_24 = 0x30;
    FUN_0085e460(&DAT_0104f4bc,local_20,&local_24);
    DAT_0104f4b8 = '\x01';
  }
  ExceptionList = local_14;
  return &DAT_0104f4bc;
}


//// FUNCTION FUN_00861740 @ 00861740 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861740(void)

{
  bool bVar1;
  int local_24;
  undefined4 local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00ce8a7e;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if ((DAT_0104f4dc & 1) == 0) {
    DAT_0104f4dc = DAT_0104f4dc | 1;
    local_c = 0;
    ExceptionList = &local_14;
    DAT_0104f4d4 = FUN_007d4720();
    *(undefined1 *)(DAT_0104f4d4 + 0x11) = 1;
    *(int *)(DAT_0104f4d4 + 4) = DAT_0104f4d4;
    *(int *)DAT_0104f4d4 = DAT_0104f4d4;
    *(int *)(DAT_0104f4d4 + 8) = DAT_0104f4d4;
    _DAT_0104f4d8 = 0;
    _atexit(FUN_00d13740);
  }
  local_c = 0xffffffff;
  if (DAT_0104f4cc == '\0') {
    bVar1 = FUN_00541f60(0);
    if (bVar1) {
      local_24 = 0x34;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x35;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x36;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x37;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x38;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x39;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3a;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3b;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3c;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3d;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3e;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x3f;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x40;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x41;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x42;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x43;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x44;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
      local_24 = 0x45;
      FUN_0085e460(&DAT_0104f4d0,local_20,&local_24);
    }
    DAT_0104f4cc = '\x01';
  }
  ExceptionList = local_14;
  return &DAT_0104f4d0;
}


//// FUNCTION FUN_00861a30 @ 00861a30 ////

bool FUN_00861a30(void)

{
  undefined *this;
  int *piVar1;
  undefined4 local_4;
  
  this = FUN_00860ec0();
  piVar1 = (int *)FUN_00860e10(this,&local_4,(int *)&stack0x00000004);
  return *piVar1 != *(int *)(this + 4);
}


//// FUNCTION FUN_00861a60 @ 00861a60 ////

bool FUN_00861a60(void)

{
  undefined *this;
  int *piVar1;
  undefined4 local_4;
  
  this = FUN_00861150();
  piVar1 = (int *)FUN_00860e10(this,&local_4,(int *)&stack0x00000004);
  return *piVar1 != *(int *)(this + 4);
}


//// FUNCTION FUN_00861a90 @ 00861a90 ////

bool FUN_00861a90(void)

{
  undefined *this;
  int *piVar1;
  undefined4 local_4;
  
  this = FUN_00861290();
  piVar1 = (int *)FUN_00860e10(this,&local_4,(int *)&stack0x00000004);
  return *piVar1 != *(int *)(this + 4);
}


//// FUNCTION FUN_00861ac0 @ 00861ac0 ////

bool FUN_00861ac0(void)

{
  undefined *this;
  int *piVar1;
  undefined4 local_4;
  
  this = FUN_00861740();
  piVar1 = (int *)FUN_00860e10(this,&local_4,(int *)&stack0x00000004);
  return *piVar1 != *(int *)(this + 4);
}


//// FUNCTION FUN_00861af0 @ 00861af0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861af0(void)

{
  int local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8a9e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0104f4f0 & 1) == 0) {
    _DAT_0104f4f0 = _DAT_0104f4f0 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104f4e8 = FUN_007d4720();
    *(undefined1 *)(DAT_0104f4e8 + 0x11) = 1;
    *(int *)(DAT_0104f4e8 + 4) = DAT_0104f4e8;
    *(int *)DAT_0104f4e8 = DAT_0104f4e8;
    *(int *)(DAT_0104f4e8 + 8) = DAT_0104f4e8;
    _DAT_0104f4ec = 0;
    _atexit(FUN_00d13750);
  }
  local_4 = 0xffffffff;
  if (DAT_0104f4e0 == '\0') {
    FUN_007d47b0(*(void **)(DAT_0104f4e8 + 4));
    *(int *)(DAT_0104f4e8 + 4) = DAT_0104f4e8;
    _DAT_0104f4ec = 0;
    *(int *)DAT_0104f4e8 = DAT_0104f4e8;
    *(int *)(DAT_0104f4e8 + 8) = DAT_0104f4e8;
    local_18 = 0;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    local_18 = 1;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    local_18 = 2;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    local_18 = 3;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    local_18 = 4;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    local_18 = 5;
    FUN_0085e460(&DAT_0104f4e4,local_14,&local_18);
    DAT_0104f4e0 = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104f4e4;
}


//// FUNCTION FUN_00861c60 @ 00861c60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00861c60(void)

{
  int iVar1;
  undefined *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8abe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0104f504 & 1) == 0) {
    _DAT_0104f504 = _DAT_0104f504 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_0104f4fc = FUN_007d4720();
    *(undefined1 *)(DAT_0104f4fc + 0x11) = 1;
    *(int *)(DAT_0104f4fc + 4) = DAT_0104f4fc;
    *(int *)DAT_0104f4fc = DAT_0104f4fc;
    *(int *)(DAT_0104f4fc + 8) = DAT_0104f4fc;
    _DAT_0104f500 = 0;
    _atexit(FUN_00d13720);
  }
  local_4 = 0xffffffff;
  if (DAT_0104f4f4 == '\0') {
    puVar2 = FUN_00861af0();
    iVar1 = *(int *)(puVar2 + 4);
    puVar2 = FUN_00861af0();
    FUN_00860e80(&DAT_0104f4f8,**(int **)(puVar2 + 4),iVar1);
    puVar2 = FUN_00860ec0();
    iVar1 = *(int *)(puVar2 + 4);
    puVar2 = FUN_00860ec0();
    FUN_00860e80(&DAT_0104f4f8,**(int **)(puVar2 + 4),iVar1);
    puVar2 = FUN_00861040();
    iVar1 = *(int *)(puVar2 + 4);
    puVar2 = FUN_00861040();
    FUN_00860e80(&DAT_0104f4f8,**(int **)(puVar2 + 4),iVar1);
    puVar2 = FUN_00861150();
    iVar1 = *(int *)(puVar2 + 4);
    puVar2 = FUN_00861150();
    FUN_00860e80(&DAT_0104f4f8,**(int **)(puVar2 + 4),iVar1);
    DAT_0104f4f4 = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104f4f8;
}


//// FUNCTION FUN_00861db0 @ 00861db0 ////

bool FUN_00861db0(void)

{
  undefined *this;
  int *piVar1;
  undefined4 local_4;
  
  this = FUN_00861c60();
  piVar1 = (int *)FUN_00860e10(this,&local_4,(int *)&stack0x00000004);
  return *piVar1 != *(int *)(this + 4);
}


//// FUNCTION FUN_00861de0 @ 00861de0 ////

undefined4 * __cdecl FUN_00861de0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  size_t sVar7;
  undefined4 local_70;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  puStack_8 = &LAB_00ce8ae8;
  local_c = ExceptionList;
  local_70 = 0;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar3 = FUN_00861c60();
  iVar1 = *(int *)(puVar3 + 4);
  piVar4 = (int *)FUN_00860e10(puVar3,&local_70,&param_2);
  if (*piVar4 == iVar1) {
    param_2 = iVar2;
    puVar3 = FUN_00861290();
    iVar1 = *(int *)(puVar3 + 4);
    piVar4 = (int *)FUN_00860e10(puVar3,&local_70,&param_2);
    if (*piVar4 == iVar1) {
      param_2 = iVar2;
      puVar3 = FUN_00861740();
      iVar1 = *(int *)(puVar3 + 4);
      piVar4 = (int *)FUN_00860e10(puVar3,&local_70,&param_2);
      if (*piVar4 == iVar1) goto LAB_00861f5b;
    }
    sVar7 = 0xd;
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar6 = "AWARDS_TYPES_";
  }
  else {
    sVar7 = 10;
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar6 = "AWARDSNEW_";
  }
  local_4c = local_40;
  local_40[0] = 0;
  local_44 = 0x14;
  local_48 = 0;
  FUN_004073f0(&local_4c,pcVar6,sVar7);
  FUN_004073f0(&local_4c,(&PTR_DAT_00e5d2e0)[iVar2 * 8],*(size_t *)(&DAT_00e5d2e4 + iVar2 * 0x20));
  puVar5 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0(&local_6c,(wchar_t *)*puVar5,puVar5[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
LAB_00861f5b:
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00861fb0 @ 00861fb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_00861fb0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_4;
  
  if ((DAT_0104f588 & 1) == 0) {
    DAT_0104f588 = DAT_0104f588 | 1;
    DAT_0104f568 = &DAT_0104f574;
    DAT_0104f574 = 0;
    _DAT_0104f56c = 0;
    DAT_0104f570 = 0x14;
    _strncpy(&DAT_0104f574,"ui\\award_actor.dds",0x12);
    _DAT_0104f56c = 0x12;
    DAT_0104f568[0x12] = 0;
    _atexit(FUN_00d136d0);
  }
  if ((DAT_0104f588 & 2) == 0) {
    DAT_0104f588 = DAT_0104f588 | 2;
    DAT_0104f548 = &DAT_0104f554;
    DAT_0104f554 = 0;
    _DAT_0104f54c = 0;
    DAT_0104f550 = 0x14;
    _strncpy(&DAT_0104f554,"ui\\awards_film.dds",0x12);
    _DAT_0104f54c = 0x12;
    DAT_0104f548[0x12] = 0;
    _atexit(FUN_00d136b0);
  }
  if ((DAT_0104f588 & 4) == 0) {
    DAT_0104f588 = DAT_0104f588 | 4;
    DAT_0104f528 = &DAT_0104f534;
    DAT_0104f534 = 0;
    _DAT_0104f52c = 0;
    DAT_0104f530 = 0x14;
    _strncpy(&DAT_0104f534,"ui\\award_studio.dds",0x13);
    _DAT_0104f52c = 0x13;
    DAT_0104f528[0x13] = 0;
    _atexit(FUN_00d13690);
  }
  if ((DAT_0104f588 & 8) == 0) {
    DAT_0104f588 = DAT_0104f588 | 8;
    DAT_0104f508 = &DAT_0104f514;
    DAT_0104f514 = 0;
    _DAT_0104f50c = 0;
    DAT_0104f510 = 0x14;
    _strncpy(&DAT_0104f514,"ui\\awards_stunt.dds",0x13);
    _DAT_0104f50c = 0x13;
    DAT_0104f508[0x13] = 0;
    _atexit(FUN_00d13670);
  }
  iVar1 = param_1;
  puVar3 = FUN_00861af0();
  piVar4 = (int *)FUN_00860e10(puVar3,&local_4,&param_1);
  if (*piVar4 != *(int *)(puVar3 + 4)) {
    return &DAT_0104f568;
  }
  param_1 = iVar1;
  puVar3 = FUN_00861040();
  piVar4 = (int *)FUN_00860e10(puVar3,&local_4,&param_1);
  if (*piVar4 != *(int *)(puVar3 + 4)) {
    return &DAT_0104f548;
  }
  param_1 = iVar1;
  puVar3 = FUN_00860ec0();
  piVar4 = (int *)FUN_00860e10(puVar3,&local_4,&param_1);
  if (*piVar4 != *(int *)(puVar3 + 4)) {
    return &DAT_0104f528;
  }
  bVar2 = FUN_00861a60();
  puVar5 = &DAT_0104f508;
  if (!bVar2) {
    puVar5 = (undefined4 *)0x0;
  }
  return puVar5;
}


//// FUNCTION FUN_00862210 @ 00862210 ////

undefined4 * __fastcall FUN_00862210(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d62718;
  return param_1;
}


//// FUNCTION FUN_00862290 @ 00862290 ////

void FUN_00862290(void)

{
  DAT_0104f590 = 1;
  return;
}


//// FUNCTION FUN_008622c0 @ 008622c0 ////

undefined4 * __thiscall FUN_008622c0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008622e0 @ 008622e0 ////

void * __fastcall FUN_008622e0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *this;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_50;
  undefined1 auStack_4c [4];
  uint uStack_48;
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8b10;
  pvStack_c = ExceptionList;
  uVar6 = 1;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_0085c530((float *)&local_50);
  uVar2 = (**(code **)(*param_1 + 0xc))();
  this = (void *)FUN_00858930(uVar2,puVar1,uVar6);
  piVar3 = (int *)GetPlayerStudio();
  puVar1 = (undefined4 *)(**(code **)(*piVar3 + 0x20))(auStack_4c);
  puStack_8 = (undefined1 *)0x0;
  uVar2 = GetPlayerStudio();
  uVar5 = 0;
  uVar6 = GetPlayerStudio();
  FUN_00857110(this,puVar1,uVar6,uVar5,uVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  iVar4 = FUN_0054b120();
  if (iVar4 != 0) {
    iVar4 = (**(code **)(*param_1 + 0xc))();
    FUN_00861de0(apvStack_30,iVar4);
    puStack_8 = (undefined1 *)0x1;
    GetPlayerStudio();
    GetPlayerStudio();
    FUN_0054b120();
    FUN_0054af90();
    if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_30[0]);
    }
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_008623f0 @ 008623f0 ////

void __fastcall FUN_008623f0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_GetHighestQuality @ 00862410 ////

int PlayerMovies_GetHighestQuality(void)

{
  int iVar1;
  int iVar2;
  float local_c;
  int local_8;
  int local_4;
  
  iVar2 = 0;
  local_c = 0.0;
  PlayerMovies_Begin(&local_8);
  PlayerMovies_End(&local_4);
  for (; local_8 != local_4; local_8 = *(int *)(local_8 + 4)) {
    iVar1 = *(int *)(local_8 + 8);
    if (local_c < *(float *)(iVar1 + 0xb4)) {
      local_c = *(float *)(iVar1 + 0xb4);
      iVar2 = iVar1;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00862480 @ 00862480 ////

void __fastcall FUN_00862480(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_008624a0 @ 008624a0 ////

void __fastcall FUN_008624a0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_008624c0 @ 008624c0 ////

void __fastcall FUN_008624c0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_Count @ 008624e0 ////

int PlayerMovies_Count(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  iVar1 = 0;
  PlayerMovies_Begin(&local_8);
  PlayerMovies_End(&local_4);
  for (; local_8 != local_4; local_8 = *(int *)(local_8 + 4)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


//// FUNCTION FUN_00862530 @ 00862530 ////

void __fastcall FUN_00862530(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_00862550 @ 00862550 ////

void __fastcall FUN_00862550(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_SumQuality @ 00862570 ////

float10 PlayerMovies_SumQuality(void)

{
  int *piVar1;
  float10 fVar2;
  int local_c;
  float local_8;
  int local_4;
  
  local_8 = 0.0;
  PlayerMovies_Begin(&local_c);
  PlayerMovies_End(&local_4);
  if (local_c != local_4) {
    fVar2 = (float10)local_8;
    do {
      piVar1 = (int *)(local_c + 8);
      local_c = *(int *)(local_c + 4);
      fVar2 = fVar2 + (float10)*(float *)(*piVar1 + 0xb4);
    } while (local_c != local_4);
    return fVar2;
  }
  return (float10)local_8;
}


//// FUNCTION FUN_008625c0 @ 008625c0 ////

void __fastcall FUN_008625c0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0xe]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_008625f0 @ 008625f0 ////

void __fastcall FUN_008625f0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_00862610 @ 00862610 ////

void __fastcall FUN_00862610(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_GetHighestStuntDifficulty @ 00862630 ////

float10 PlayerMovies_GetHighestStuntDifficulty(void)

{
  float fVar1;
  float local_c;
  int local_8;
  int local_4;
  
  local_c = 0.0;
  PlayerMovies_Begin(&local_8);
  PlayerMovies_End(&local_4);
  for (; local_8 != local_4; local_8 = *(int *)(local_8 + 4)) {
    fVar1 = *(float *)(*(int *)(local_8 + 8) + 0xc4);
    if (local_c <= fVar1) {
      local_c = fVar1;
    }
  }
  return (float10)local_c;
}


//// FUNCTION FUN_00862690 @ 00862690 ////

void __fastcall FUN_00862690(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_SumStuntDifficulty @ 008626b0 ////

float10 PlayerMovies_SumStuntDifficulty(void)

{
  int *piVar1;
  float10 fVar2;
  int local_c;
  float local_8;
  int local_4;
  
  local_8 = 0.0;
  PlayerMovies_Begin(&local_c);
  PlayerMovies_End(&local_4);
  if (local_c != local_4) {
    fVar2 = (float10)local_8;
    do {
      piVar1 = (int *)(local_c + 8);
      local_c = *(int *)(local_c + 4);
      fVar2 = fVar2 + (float10)*(float *)(*piVar1 + 0xc4);
    } while (local_c != local_4);
    return fVar2;
  }
  return (float10)local_8;
}


//// FUNCTION FUN_00862700 @ 00862700 ////

void __fastcall FUN_00862700(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[4]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION PlayerMovies_GetHighestSceneDifficulty @ 00862720 ////

void PlayerMovies_GetHighestSceneDifficulty(float *param_1)

{
  float *pfVar1;
  float local_10;
  float local_c;
  int local_8;
  int local_4;
  
  local_10 = 0.0;
  PlayerMovies_Begin(&local_8);
  PlayerMovies_End(&local_4);
  while (local_8 != local_4) {
    local_c = *(float *)(*(int *)(local_8 + 8) + 200);
    pfVar1 = &local_10;
    if (local_10 <= local_c) {
      pfVar1 = &local_c;
    }
    local_8 = *(int *)(local_8 + 4);
    local_10 = *pfVar1;
  }
  *param_1 = local_10;
  return;
}


//// FUNCTION FUN_008627a0 @ 008627a0 ////

void __fastcall FUN_008627a0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION LifetimeAward_GetCachedThreshold @ 008627c0 ////

float10 __fastcall LifetimeAward_GetCachedThreshold(undefined4 *param_1)

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
  puStack_8 = &LAB_00ce8b28;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 9) == '\0') {
    local_2c = local_20;
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 9) = 1;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"awards",6);
    local_28 = 6;
    local_2c[6] = '\0';
    local_4 = 0;
    FUN_00558a50(DAT_00f88624,&local_2c,(undefined4 *)0x1);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    fVar1 = FUN_00558610(DAT_00f88624,param_1,0.0);
    param_1[8] = (float)fVar1;
  }
  ExceptionList = local_c;
  return (float10)(float)param_1[8];
}


//// FUNCTION LifetimeAward_BuildExplainTooltip @ 00862880 ////

undefined4 * __thiscall LifetimeAward_BuildExplainTooltip(void *this,undefined4 *param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  size_t sVar7;
  float local_70;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ce8b58;
  pvStack_c = ExceptionList;
  local_70 = 0.0;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  pfVar2 = (float *)FUN_0085c530(&local_70);
  uVar3 = FUN_0085d3e0(*pfVar2);
  if ((char)uVar3 != '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"AWARDS_SCREEN_EXPLAINPOSTSTUNT_",0x1f);
    local_48 = 0x1f;
    local_4c[0x1f] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = (**(code **)(*(int *)this + 0xc))();
    ppuVar5 = FUN_00860970(iVar4);
    FUN_004073f0(&local_4c,*ppuVar5,(size_t)ppuVar5[1]);
    bVar1 = FUN_009b46b0(&local_4c);
    if (bVar1) {
      puVar6 = FUN_009b5030(apvStack_2c,&local_4c);
      sVar7 = FUN_00ace02d(L"<phrasebook>");
      FUN_0040cae0(&local_6c,L"<phrasebook>",sVar7);
      FUN_0040cae0(&local_6c,(wchar_t *)*puVar6,puVar6[1]);
      if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      (**(code **)(*(int *)this + 0x20))(&local_6c);
      sVar7 = FUN_00ace02d(L"</phrasebook>");
      FUN_0040cae0(&local_6c,L"</phrasebook>",sVar7);
    }
    local_4 = local_4 & 0xffffff00;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_68 == 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    local_4._0_1_ = 2;
    FUN_004073f0(&local_4c,"AWARDS_SCREEN_EXPLAIN_",0x16);
    iVar4 = (**(code **)(*(int *)this + 0xc))();
    ppuVar5 = FUN_00860970(iVar4);
    FUN_004073f0(&local_4c,*ppuVar5,(size_t)ppuVar5[1]);
    puVar6 = FUN_009b5030(apvStack_2c,&local_4c);
    sVar7 = FUN_00ace02d(L"<phrasebook>");
    FUN_0040cae0(&local_6c,L"<phrasebook>",sVar7);
    FUN_0040cae0(&local_6c,(wchar_t *)*puVar6,puVar6[1]);
    if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    (**(code **)(*(int *)this + 0x20))(&local_6c);
    sVar7 = FUN_00ace02d(L"</phrasebook>");
    FUN_0040cae0(&local_6c,L"</phrasebook>",sVar7);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00862b30 @ 00862b30 ////

void __fastcall FUN_00862b30(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION CashRichAward_IsAchieved @ 00862b50 ////

undefined4 __fastcall CashRichAward_IsAchieved(int param_1)

{
  int *piVar1;
  longlong *plVar2;
  float unaff_ESI;
  undefined1 local_8 [8];
  
  piVar1 = (int *)GetPlayerStudio();
  LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 4));
  plVar2 = (longlong *)(**(code **)(*piVar1 + 0x24))(local_8);
  if (unaff_ESI <= (float)*plVar2 * 1.1920929e-07) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00862ba0 @ 00862ba0 ////

void __thiscall FUN_00862ba0(void *this,void *param_1)

{
  size_t sVar1;
  ulonglong local_8;
  
  sVar1 = FUN_00ace02d(L"<phrase key=CASH>");
  FUN_0040cae0(param_1,L"<phrase key=CASH>",sVar1);
  LifetimeAward_GetCachedThreshold((undefined4 *)((int)this + 4));
  local_8 = FUN_00acd42c();
  FUN_00471b10((longlong *)&local_8);
  FUN_00444a70((uint *)&local_8,param_1);
  sVar1 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar1);
  return;
}


//// FUNCTION FUN_00862c20 @ 00862c20 ////

void FUN_00862c20(void)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  size_t sVar4;
  void *unaff_retaddr;
  undefined1 *puVar5;
  undefined1 local_74 [4];
  char *pcStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  char acStack_64 [20];
  wchar_t *pwStack_50;
  undefined2 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined2 local_40 [8];
  void *apvStack_30 [2];
  uint uStack_28;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8b80;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar1 = (int *)GetPlayerStudio();
  puVar5 = local_74;
  puVar2 = (uint *)(**(code **)(*piVar1 + 0x24))(puVar5,&local_4c);
  FUN_00444a70(puVar2,puVar5);
  pcStack_70 = acStack_64;
  acStack_64[0] = '\0';
  uStack_6c = 0;
  uStack_68 = 0x40;
  pcStack_70 = _malloc(0x40);
  _strncpy(pcStack_70,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_CASHRICH",0x2b);
  uStack_6c = 0x2b;
  pcStack_70[0x2b] = '\0';
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
  puVar3 = FUN_009b5030(apvStack_30,&pcStack_70);
  sVar4 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(unaff_retaddr,L"<phrasebook>",sVar4);
  FUN_0040cae0(unaff_retaddr,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d(L"<phrase key=CASH>");
  FUN_0040cae0(unaff_retaddr,L"<phrase key=CASH>",sVar4);
  FUN_0040cae0(unaff_retaddr,pwStack_50,(size_t)local_4c);
  sVar4 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(unaff_retaddr,L"</phrase></phrasebook>",sVar4);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_30[0]);
  }
  if (0x14 < uStack_68) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_50);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00862e70 @ 00862e70 ////

void FUN_00862e70(void *param_1,undefined1 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8ba0;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = PlayerMovies_GetHighestQuality();
  if (iVar1 != 0) {
    FUN_004036d0(&local_4c,*(wchar_t **)(iVar1 + 0x70),*(uint *)(iVar1 + 0x74));
    *param_2 = 1;
    *param_3 = *(undefined4 *)(iVar1 + 0xb4);
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_MOVIEMILESTONE",0x31);
  local_68 = 0x31;
  local_6c[0x31] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar2 = FUN_009b5030(local_2c,&local_6c);
  sVar3 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar3);
  FUN_0040cae0(param_1,(wchar_t *)*puVar2,puVar2[1]);
  sVar3 = FUN_00ace02d(L"<phrase key=NAME>");
  FUN_0040cae0(param_1,L"<phrase key=NAME>",sVar3);
  FUN_0040cae0(param_1,local_4c,local_48);
  sVar3 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PlayerStudio_GetBestStarByRating @ 00863090 ////

void * PlayerStudio_GetBestStarByRating(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  void *this;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  this = (void *)0x0;
  local_c = 0.0;
  puVar5 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      iVar2 = FUN_005773c0(puVar5[2]);
      iVar3 = GetPlayerStudio();
      if ((iVar2 == iVar3) &&
         (pfVar4 = (float *)FUN_00585ff0((void *)puVar5[2],&local_8), local_c <= *pfVar4)) {
        this = (void *)puVar5[2];
        pfVar4 = (float *)FUN_00585ff0(this,&local_4);
        local_c = *pfVar4;
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d068);
  }
  return this;
}


//// FUNCTION StarMilestoneAward_IsAchieved @ 00863110 ////

undefined4 __fastcall StarMilestoneAward_IsAchieved(int param_1)

{
  float fVar1;
  void *this;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_4;
  
  this = PlayerStudio_GetBestStarByRating();
  if (this != (void *)0x0) {
    pfVar2 = (float *)FUN_00585ff0(this,&local_4);
    fVar1 = *pfVar2;
    fVar3 = LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 8));
    if (fVar3 < (float10)fVar1 != (fVar3 == (float10)fVar1)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00863160 @ 00863160 ////

void FUN_00863160(void *param_1,undefined1 *param_2,undefined4 *param_3)

{
  int *this;
  undefined4 *puVar1;
  size_t sVar2;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8bc0;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  this = PlayerStudio_GetBestStarByRating();
  if (this != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*this + 0x5c))(&local_6c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    *param_2 = 1;
    puVar1 = (undefined4 *)FUN_00585ff0(this,&param_2);
    *param_3 = *puVar1;
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_STARMILESTONE",0x30);
  local_68 = 0x30;
  local_6c[0x30] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar1 = FUN_009b5030(apvStack_2c,&local_6c);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=NAME>");
  FUN_0040cae0(param_1,L"<phrase key=NAME>",sVar2);
  FUN_0040cae0(param_1,local_4c,local_48);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION StudioMilestoneAward_IsAchieved @ 008633b0 ////

undefined4 __fastcall StudioMilestoneAward_IsAchieved(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 local_4 [4];
  
  piVar2 = (int *)GetPlayerStudio();
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x84))(local_4);
  fVar1 = *pfVar3;
  fVar4 = LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 8));
  if (fVar4 < (float10)fVar1 != (fVar4 == (float10)fVar1)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00863400 @ 00863400 ////

void FUN_00863400(void *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8bd8;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x40;
  ExceptionList = &pvStack_c;
  local_4c = _malloc(0x40);
  _strncpy(local_4c,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_STUDIOMILESTONE",0x32);
  local_48 = 0x32;
  local_4c[0x32] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  *(undefined1 *)param_2 = 1;
  piVar2 = (int *)GetPlayerStudio();
  puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0x84))(&param_1);
  *param_2 = *puVar1;
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_008635c0 @ 008635c0 ////

void FUN_008635c0(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Format;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8c06;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_HIGHLYPROLIFIC",0x31);
  local_c8 = 0x31;
  local_cc[0x31] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=COUNT>");
  FUN_0040cae0(param_1,L"<phrase key=COUNT>",sVar2);
  _Format = (wchar_t *)PlayerMovies_Count();
  sVar2 = _swprintf(local_8c,0xd18f7c,_Format);
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00863710 @ 00863710 ////

void __thiscall FUN_00863710(void *this,void *param_1)

{
  size_t sVar1;
  ulonglong local_8;
  
  sVar1 = FUN_00ace02d(L"<phrase key=CASH>");
  FUN_0040cae0(param_1,L"<phrase key=CASH>",sVar1);
  LifetimeAward_GetCachedThreshold((undefined4 *)((int)this + 8));
  local_8 = FUN_00acd42c();
  FUN_00471b10((longlong *)&local_8);
  FUN_00444a70((uint *)&local_8,param_1);
  sVar1 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar1);
  return;
}


//// FUNCTION MoneyMakerAward_IsAchieved @ 00863790 ////

undefined4 __fastcall MoneyMakerAward_IsAchieved(int param_1)

{
  float10 fVar1;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *(undefined4 *)(DAT_00f87ed8 + 0x120);
  uStack_4 = *(undefined4 *)(DAT_00f87ed8 + 0x124);
  FUN_00471b10((longlong *)&local_8);
  fVar1 = LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 8));
  if (fVar1 <= (float10)CONCAT44(uStack_4,local_8) * (float10)1.1920929e-07) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_008637f0 @ 008637f0 ////

void FUN_008637f0(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  uint local_74;
  undefined4 local_70;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  wchar_t *local_4c;
  size_t local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8c20;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_74 = *(uint *)(DAT_00f87ed8 + 0x120);
  local_70 = *(undefined4 *)(DAT_00f87ed8 + 0x124);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00471b10((longlong *)&local_74);
  FUN_00444a70(&local_74,&local_4c);
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x40;
  local_6c = _malloc(0x40);
  _strncpy(local_6c,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_MONEYMAKER",0x2d);
  local_68 = 0x2d;
  local_6c[0x2d] = '\0';
  local_4 = CONCAT31(local_4._1_3_,1);
  puVar1 = FUN_009b5030(local_2c,&local_6c);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=CASH>");
  FUN_0040cae0(param_1,L"<phrase key=CASH>",sVar2);
  FUN_0040cae0(param_1,local_4c,local_48);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00863a40 @ 00863a40 ////

void FUN_00863a40(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  float10 fVar3;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8c46;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_BIGOUTPUT",0x2c);
  local_c8 = 0x2c;
  local_cc[0x2c] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=COUNT>");
  FUN_0040cae0(param_1,L"<phrase key=COUNT>",sVar2);
  fVar3 = PlayerMovies_SumQuality();
  sVar2 = _swprintf(local_8c,0xd18f84,SUB84((double)(fVar3 * (float10)5.0),0));
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION PlayerMovies_CountAboveQualityBar @ 00863ca0 ////

int __fastcall PlayerMovies_CountAboveQualityBar(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_c;
  int local_8;
  float local_4;
  
  iVar1 = 0;
  PlayerMovies_Begin(&local_c);
  PlayerMovies_End(&local_8);
  if (local_c != local_8) {
    do {
      local_4 = *(float *)(*(int *)(local_c + 8) + 0xb4);
      fVar2 = LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 0x30));
      if (fVar2 < (float10)local_4 != (fVar2 == (float10)local_4)) {
        iVar1 = iVar1 + 1;
      }
      local_c = *(int *)(local_c + 4);
    } while (local_c != local_8);
  }
  return iVar1;
}


//// FUNCTION FUN_00863d50 @ 00863d50 ////

void __thiscall FUN_00863d50(void *this,void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Format;
  float10 fVar3;
  char *local_14c;
  undefined4 local_148;
  uint local_144;
  char local_140 [20];
  void *local_12c [2];
  uint local_124;
  wchar_t local_10c [64];
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8c66;
  local_c = ExceptionList;
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x40;
  ExceptionList = &local_c;
  local_14c = _malloc(0x40);
  _strncpy(local_14c,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_CONSISTENTQUALITY",0x34);
  local_148 = 0x34;
  local_14c[0x34] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_12c,&local_14c);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar3 = LifetimeAward_GetCachedThreshold((undefined4 *)((int)this + 0x30));
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=QUALITY>");
  FUN_0040cae0(param_1,L"<phrase key=QUALITY>",sVar2);
  sVar2 = _swprintf(local_10c,0xd18f7c,(wchar_t *)(int)ROUND((float)(fVar3 * (float10)5.0)));
  FUN_0040cae0(param_1,local_10c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar2);
  sVar2 = FUN_00ace02d(L"<phrase key=COUNT>");
  FUN_0040cae0(param_1,L"<phrase key=COUNT>",sVar2);
  _Format = (wchar_t *)PlayerMovies_CountAboveQualityBar((int)this);
  sVar2 = _swprintf(local_8c,0xd18f7c,_Format);
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c[0]);
  }
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008640b0 @ 008640b0 ////

void FUN_008640b0(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined2 in_FPUControlWord;
  float10 fVar3;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8c86;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_STUNTACHIEVEMENT_MOVIEDIFFICULTY",0x37);
  local_c8 = 0x37;
  local_cc[0x37] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar3 = PlayerMovies_GetHighestStuntDifficulty();
  DAT_0104eb78 = in_FPUControlWord;
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=TOTAL>");
  FUN_0040cae0(param_1,L"<phrase key=TOTAL>",sVar2);
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)(int)ROUND((float)(fVar3 * (float10)5.0)));
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar2);
  sVar2 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(param_1,L"</phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00864320 @ 00864320 ////

void FUN_00864320(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  undefined2 in_FPUControlWord;
  float10 fVar3;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8ca6;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_STUNTACHIEVEMENT_TOTALDIFFICULTY",0x37);
  local_c8 = 0x37;
  local_cc[0x37] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar3 = PlayerMovies_SumStuntDifficulty();
  DAT_0104eb78 = in_FPUControlWord;
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=TOTAL>");
  FUN_0040cae0(param_1,L"<phrase key=TOTAL>",sVar2);
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)(int)ROUND((float)(fVar3 * (float10)5.0)));
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar2);
  sVar2 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(param_1,L"</phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION StuntSceneDifficultyAward_IsAchieved @ 00864560 ////

undefined4 __fastcall StuntSceneDifficultyAward_IsAchieved(int param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float local_4;
  
  pfVar2 = (float *)PlayerMovies_GetHighestSceneDifficulty(&local_4);
  fVar1 = *pfVar2;
  fVar3 = LifetimeAward_GetCachedThreshold((undefined4 *)(param_1 + 8));
  if (fVar3 < (float10)fVar1 != (fVar3 == (float10)fVar1)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_008645a0 @ 008645a0 ////

void FUN_008645a0(void *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  size_t sVar3;
  undefined2 in_FPUControlWord;
  float local_d8;
  wchar_t *local_d4;
  float local_d0;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8cc6;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_STUNTACHIEVEMENT_SCENEDIFFICULTY",0x37);
  local_c8 = 0x37;
  local_cc[0x37] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  pfVar2 = (float *)PlayerMovies_GetHighestSceneDifficulty(&local_d8);
  local_d0 = *pfVar2 * 5.0;
  local_d4 = (wchar_t *)(int)ROUND(local_d0);
  DAT_0104eb78 = in_FPUControlWord;
  sVar3 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar3);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar3 = FUN_00ace02d(L"<phrase key=TOTAL>");
  FUN_0040cae0(param_1,L"<phrase key=TOTAL>",sVar3);
  sVar3 = _swprintf(local_8c,0xd18f7c,local_d4);
  FUN_0040cae0(param_1,local_8c,sVar3);
  sVar3 = FUN_00ace02d(L"</phrase>");
  FUN_0040cae0(param_1,L"</phrase>",sVar3);
  sVar3 = FUN_00ace02d(L"</phrasebook>");
  FUN_0040cae0(param_1,L"</phrasebook>",sVar3);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008647e0 @ 008647e0 ////

undefined4 * __thiscall FUN_008647e0(void *this,char *param_1,uint param_2,uint param_3)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,param_1,param_2);
  *(undefined1 *)((int)this + 0x24) = 0;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return this;
}


//// FUNCTION FUN_00864830 @ 00864830 ////

undefined4 * __thiscall FUN_00864830(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8cd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62a78;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),local_2c,local_28);
  *(undefined1 *)((int)this + 0x28) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0x2c) = in_stack_00000024;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864910 @ 00864910 ////

undefined4 * __thiscall FUN_00864910(void *this,byte param_1)

{
  FUN_00862b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864930 @ 00864930 ////

undefined4 * __thiscall FUN_00864930(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8cf8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62aa4;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864a10 @ 00864a10 ////

undefined4 * __thiscall FUN_00864a10(void *this,byte param_1)

{
  FUN_008623f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864a30 @ 00864a30 ////

undefined4 * __thiscall FUN_00864a30(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8d18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62ad0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864b10 @ 00864b10 ////

undefined4 * __thiscall FUN_00864b10(void *this,byte param_1)

{
  FUN_00862480(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864b30 @ 00864b30 ////

undefined4 * __thiscall FUN_00864b30(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8d38;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62afc;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864c10 @ 00864c10 ////

undefined4 * __thiscall FUN_00864c10(void *this,byte param_1)

{
  FUN_008624a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864c30 @ 00864c30 ////

undefined4 * __thiscall FUN_00864c30(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8d58;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62b28;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864d10 @ 00864d10 ////

undefined4 * __thiscall FUN_00864d10(void *this,byte param_1)

{
  FUN_008624c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864d30 @ 00864d30 ////

undefined4 * __thiscall FUN_00864d30(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8d78;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62b54;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864e10 @ 00864e10 ////

undefined4 * __thiscall FUN_00864e10(void *this,byte param_1)

{
  FUN_00862530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864e30 @ 00864e30 ////

undefined4 * __thiscall FUN_00864e30(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8d98;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62b80;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00864f20 @ 00864f20 ////

undefined4 * __thiscall FUN_00864f20(void *this,byte param_1)

{
  FUN_00862550(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00864f40 @ 00864f40 ////

undefined4 * __thiscall FUN_00864f40(void *this,char *param_1,size_t param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8db8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_4c = local_40;
  *(undefined ***)this = &PTR_FUN_00d62bc0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  FUN_004073f0(&local_4c,param_1,param_2);
  FUN_004073f0(&local_4c,"_Movies",7);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,local_4c,local_48);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  FUN_004073f0(&local_4c,param_1,param_2);
  FUN_004073f0(&local_4c,"_Quality",8);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,local_4c,local_48);
  *(undefined4 *)((int)this + 0x30) = (undefined1 *)((int)this + 0x3c);
  *(undefined1 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x30),local_2c,local_28);
  *(undefined1 *)((int)this + 0x54) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865110 @ 00865110 ////

undefined4 * __thiscall FUN_00865110(void *this,byte param_1)

{
  FUN_008625c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865130 @ 00865130 ////

undefined4 * __thiscall FUN_00865130(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8dd8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62bec;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865210 @ 00865210 ////

undefined4 * __thiscall FUN_00865210(void *this,byte param_1)

{
  FUN_008625f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865230 @ 00865230 ////

undefined4 * __thiscall FUN_00865230(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8df8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62c18;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865310 @ 00865310 ////

undefined4 * __thiscall FUN_00865310(void *this,byte param_1)

{
  FUN_00862610(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865330 @ 00865330 ////

undefined4 * __thiscall FUN_00865330(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8e18;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62c44;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865410 @ 00865410 ////

undefined4 * __thiscall FUN_00865410(void *this,byte param_1)

{
  FUN_00862690(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865430 @ 00865430 ////

undefined4 * __thiscall FUN_00865430(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8e38;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62c70;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),local_2c,local_28);
  *(undefined1 *)((int)this + 0x2c) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865510 @ 00865510 ////

undefined4 * __thiscall FUN_00865510(void *this,byte param_1)

{
  FUN_00862700(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION StuntAwardWinCount_Constructor @ 00865530 ////

undefined4 * __thiscall
StuntAwardWinCount_Constructor(void *this,char *param_1,uint param_2,uint param_3)

{
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8e58;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0084fa40(this);
  *(undefined4 *)((int)this + 4) = in_stack_00000024;
  *(undefined4 *)((int)this + 8) = in_stack_00000028;
  local_2c = local_20;
  *(undefined ***)this = &PTR_FUN_00d62c9c;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,param_1,param_2);
  *(undefined4 *)((int)this + 0xc) = (undefined1 *)((int)this + 0x18);
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xc),local_2c,local_28);
  *(undefined1 *)((int)this + 0x30) = 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)((int)this + 0x34) = in_stack_0000002c;
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00865620 @ 00865620 ////

undefined4 * __thiscall FUN_00865620(void *this,byte param_1)

{
  FUN_008627a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION PlayerStudio_CountAwardsWonOfType @ 00865640 ////

int __fastcall PlayerStudio_CountAwardsWonOfType(int param_1)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
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
  puStack_8 = &LAB_00ce8e8b;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  pvVar2 = FUN_00857d80(local_64);
  local_4 = 0;
  pfVar3 = FUN_00857b30(pvVar2,*(float *)(param_1 + 8));
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
    iVar4 = FUN_00856da0((int)local_38);
    iVar4 = *(int *)(iVar4 + 0xb8);
    iVar5 = GetPlayerStudio();
    if (iVar4 == iVar5) {
      iVar6 = iVar6 + 1;
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


//// FUNCTION FUN_008657c0 @ 008657c0 ////

void __thiscall FUN_008657c0(void *this,void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Format;
  void *local_cc [2];
  uint local_c4;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8eb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010((void *)((int)this + 0x34),local_cc);
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=TOTAL>");
  FUN_0040cae0(param_1,L"<phrase key=TOTAL>",sVar2);
  _Format = (wchar_t *)PlayerStudio_CountAwardsWonOfType((int)this);
  sVar2 = _swprintf(local_8c,0xd18f7c,_Format);
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008658e0 @ 008658e0 ////

void __fastcall FUN_008658e0(int *param_1)

{
  void *pvVar1;
  void *this;
  float fVar2;
  float *this_00;
  undefined1 local_64 [8];
  int iStack_5c;
  int *piStack_58;
  undefined1 local_38 [8];
  int iStack_30;
  int *piStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8ed0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = FUN_00857bd0(local_38);
  local_4 = 0;
  this = FUN_00857d80(local_64);
  local_4 = CONCAT31(local_4._1_3_,1);
  fVar2 = (float)(**(code **)(*param_1 + 0xc))();
  this_00 = FUN_00857b30(this,fVar2);
  FUN_00856dd0(this_00,(int)pvVar1);
  if (piStack_58 != (int *)0x0) {
    *piStack_58 = iStack_5c;
  }
  if (iStack_5c != 0) {
    *(int **)(iStack_5c + 4) = piStack_58;
  }
  if (piStack_2c != (int *)0x0) {
    *piStack_2c = iStack_30;
  }
  if (iStack_30 != 0) {
    *(int **)(iStack_30 + 4) = piStack_2c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION PlayerStudio_CountStandardAwardsWon @ 00865990 ////

int PlayerStudio_CountStandardAwardsWon(void)

{
  bool bVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_90 [2];
  int local_88;
  int *local_84;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8efb;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  pvVar2 = FUN_00857d80(local_64);
  local_4 = 0;
  pfVar3 = FUN_00857b90(pvVar2,0.0);
  FUN_00500630(local_90,pfVar3);
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
    pvVar2 = FUN_00857bd0(local_38);
    local_4._0_1_ = 3;
    bVar1 = FUN_00856dd0(local_90,(int)pvVar2);
    local_4._0_1_ = 2;
    local_34 = &PTR_FUN_00d1aed0;
    if (local_2c != (int *)0x0) {
      *local_2c = local_30;
    }
    if (local_30 != 0) {
      *(int **)(local_30 + 4) = local_2c;
    }
    local_20 = 0;
    local_30 = 0;
    local_2c = (int *)0x0;
    if (!bVar1) break;
    FUN_00856da0((int)local_90);
    bVar1 = FUN_00861a90();
    if (!bVar1) {
      FUN_00856da0((int)local_90);
      bVar1 = FUN_00861a60();
      if (!bVar1) {
        iVar4 = FUN_00856da0((int)local_90);
        iVar4 = *(int *)(iVar4 + 0xb8);
        iVar5 = GetPlayerStudio();
        if (iVar4 == iVar5) {
          iVar6 = iVar6 + 1;
        }
      }
    }
    FUN_00857260(local_90);
  }
  if (local_84 != (int *)0x0) {
    *local_84 = local_88;
  }
  if (local_88 != 0) {
    *(int **)(local_88 + 4) = local_84;
  }
  ExceptionList = local_c;
  return iVar6;
}


//// FUNCTION FUN_00865b40 @ 00865b40 ////

void FUN_00865b40(void *param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  wchar_t *_Format;
  char *local_cc;
  undefined4 local_c8;
  uint local_c4;
  char local_c0 [20];
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8f26;
  local_c = ExceptionList;
  local_cc = local_c0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x40;
  ExceptionList = &local_c;
  local_cc = _malloc(0x40);
  _strncpy(local_cc,"AWARDS_SCREEN_PROGRESS_ACHIEVEMENT_AWARDS",0x29);
  local_c8 = 0x29;
  local_cc[0x29] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_ac,&local_cc);
  local_4 = CONCAT31(local_4._1_3_,1);
  sVar2 = FUN_00ace02d(L"<phrasebook>");
  FUN_0040cae0(param_1,L"<phrasebook>",sVar2);
  FUN_0040cae0(param_1,(wchar_t *)*puVar1,puVar1[1]);
  sVar2 = FUN_00ace02d(L"<phrase key=COUNT>");
  FUN_0040cae0(param_1,L"<phrase key=COUNT>",sVar2);
  _Format = (wchar_t *)PlayerStudio_CountStandardAwardsWon();
  sVar2 = _swprintf(local_8c,0xd18f7c,_Format);
  FUN_0040cae0(param_1,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook>");
  FUN_0040cae0(param_1,L"</phrase></phrasebook>",sVar2);
  if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_ac[0]);
  }
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00865c90 @ 00865c90 ////

void * __cdecl FUN_00865c90(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  void *pvVar5;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::CAwardFactory::RTTI_Type_Descriptor,
                               &CLifetimeAwardFactory::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    return (void *)0x0;
  }
  if (param_2[1] != 0) {
    iVar3 = (**(code **)(*piVar2 + 0xc))();
    ppuVar4 = FUN_00860970(iVar3);
    iVar3 = __stricmp((char *)*param_2,*ppuVar4);
    if (iVar3 != 0) {
      return (void *)0x0;
    }
  }
  cVar1 = FUN_008658e0(piVar2);
  if (cVar1 != '\0') {
    return (void *)0x0;
  }
  pvVar5 = FUN_008622e0(piVar2);
  return pvVar5;
}


//// FUNCTION FUN_00865d00 @ 00865d00 ////

void * __fastcall FUN_00865d00(int *param_1)

{
  char cVar1;
  void *pvVar2;
  
  cVar1 = FUN_008658e0(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x24))();
    if ((cVar1 != '\0') || (DAT_0104f590 != '\0')) {
      pvVar2 = FUN_008622e0(param_1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}


//// FUNCTION FUN_00865d50 @ 00865d50 ////

undefined4 * __fastcall FUN_00865d50(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d631e0;
  return param_1;
}


//// FUNCTION FUN_00865d80 @ 00865d80 ////

undefined4 * __thiscall FUN_00865d80(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865df0 @ 00865df0 ////

undefined4 * __fastcall FUN_00865df0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d6320c;
  return param_1;
}


//// FUNCTION FUN_00865e20 @ 00865e20 ////

undefined4 * __thiscall FUN_00865e20(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865e40 @ 00865e40 ////

undefined4 * __fastcall FUN_00865e40(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63238;
  return param_1;
}


//// FUNCTION FUN_00865e80 @ 00865e80 ////

undefined4 * __thiscall FUN_00865e80(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00865eb0 @ 00865eb0 ////

undefined4 * FUN_00865eb0(undefined4 *param_1,int *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce8f38;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                &TM::CProjectAI::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                  &TM::CProject::RTTI_Type_Descriptor,0);
    if (pvVar1 == (void *)0x0) goto LAB_00865f7d;
    puVar2 = FUN_0045f620(pvVar1,local_2c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
  }
  else {
    puVar2 = FUN_005a3200(pvVar1,local_2c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
LAB_00865f7d:
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00865fd0 @ 00865fd0 ////

undefined4 * __fastcall FUN_00865fd0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63264;
  return param_1;
}


//// FUNCTION FUN_00866010 @ 00866010 ////

undefined4 * __thiscall FUN_00866010(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00866030 @ 00866030 ////

void FUN_00866030(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0045f410();
  iVar1 = *(int *)(iVar2 + 0x98);
  do {
    if (iVar1 == iVar2 + 0xa4) {
      ExceptionList = local_c;
      return;
    }
    local_34 = &local_40;
    local_1c = &local_28;
    local_3c = 0;
    local_38 = 0;
    local_40 = &PTR_FUN_00d1aed0;
    local_2c = 0;
    local_24 = 0;
    local_20 = 0;
    local_28 = &PTR_FUN_00d1e55c;
    local_14 = 0;
    iVar10 = 0;
    pTVar9 = &TM::CProjectAI::RTTI_Type_Descriptor;
    pTVar8 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar7 = 0;
    local_4 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
    iVar7 = FUN_00ace790(piVar3,iVar7,pTVar8,pTVar9,iVar10);
    if (iVar7 == 0) {
      iVar10 = 0;
      pTVar9 = &TM::CProject::RTTI_Type_Descriptor;
      pTVar8 = &TM::TMObject::RTTI_Type_Descriptor;
      iVar7 = 0;
      piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
      iVar7 = FUN_00ace790(piVar3,iVar7,pTVar8,pTVar9,iVar10);
      if (iVar7 != 0) {
        (*(code *)local_40[1])();
        local_2c = iVar7;
        (*(code *)*local_40)();
        uVar4 = GetPlayerStudio();
        (*(code *)local_28[1])();
        local_14 = uVar4;
        (*(code *)*local_28)();
        puVar6 = auStack_44;
        goto LAB_00866170;
      }
    }
    else {
      (*(code *)local_40[1])();
      local_2c = iVar7;
      (*(code *)*local_40)();
      uVar4 = FUN_005a2aa0(iVar7);
      (*(code *)local_28[1])();
      local_14 = uVar4;
      (*(code *)*local_28)();
      puVar6 = auStack_48;
LAB_00866170:
      puVar5 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 8) + 0x18))(puVar6);
      uStack_10 = *puVar5;
    }
    FUN_00851890(param_1,(int)&local_40);
    local_4 = 0xffffffff;
    FUN_008501c0(&local_40);
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


//// FUNCTION FUN_008661c0 @ 008661c0 ////

void FUN_008661c0(void *param_1)

{
  void *this;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void **ppvVar6;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8f78;
  local_c = ExceptionList;
  puVar5 = DAT_0104d688;
  ExceptionList = &local_c;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar2 = FUN_0085c460((void *)puVar5[2]);
      if ((char)uVar2 != '\0') {
        iVar3 = FUN_005b2330(puVar5[2]);
        cVar1 = FUN_005c5010(iVar3);
        if (cVar1 != '\0') {
          local_34 = &local_40;
          local_1c = &local_28;
          local_3c = 0;
          local_38 = 0;
          local_40 = &PTR_FUN_00d1aed0;
          local_2c = 0;
          local_24 = 0;
          local_20 = 0;
          local_28 = &PTR_FUN_00d1e55c;
          local_14 = 0;
          uVar2 = puVar5[2];
          local_4 = 0;
          FUN_0045f4a0((int)local_34);
          local_2c = uVar2;
          (*(code *)*local_40)();
          uVar2 = GetPlayerStudio();
          (*(code *)local_28[1])();
          local_14 = uVar2;
          (*(code *)*local_28)();
          ppvVar6 = &param_1;
          this_00 = (void *)FUN_005b2130(puVar5[2]);
          puVar4 = (undefined4 *)FUN_004bdbc0(this_00,ppvVar6);
          local_10 = *puVar4;
          FUN_00851890(this,(int)&local_40);
          local_4 = 0xffffffff;
          FUN_008501c0(&local_40);
        }
      }
      puVar4 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar4;
    } while ((undefined4 *)*puVar4 != &DAT_0104d694);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008662f0 @ 008662f0 ////

void FUN_008662f0(void *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *local_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8f98;
  local_c = ExceptionList;
  local_44 = DAT_0104bcf0;
  ExceptionList = &local_c;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      cVar3 = (**(code **)(*(int *)local_44[2] + 0x3c))();
      if (cVar3 != '\0') {
        iVar1 = local_44[2];
        for (iVar2 = *(int *)(iVar1 + 0x238); iVar2 != iVar1 + 0x244; iVar2 = *(int *)(iVar2 + 4)) {
          uVar4 = FUN_0085c4d0(*(int *)(iVar2 + 8));
          if ((char)uVar4 != '\0') {
            pppuStack_34 = &ppuStack_40;
            pppuStack_1c = &ppuStack_28;
            uStack_3c = 0;
            uStack_38 = 0;
            ppuStack_40 = &PTR_FUN_00d1aed0;
            uStack_2c = 0;
            uStack_24 = 0;
            uStack_20 = 0;
            ppuStack_28 = &PTR_FUN_00d1e55c;
            uStack_14 = 0;
            uVar4 = *(undefined4 *)(iVar2 + 8);
            uStack_4 = 0;
            FUN_0045f4a0((int)pppuStack_34);
            uStack_2c = uVar4;
            (*(code *)*ppuStack_40)();
            uVar4 = FUN_005a2aa0(*(int *)(iVar2 + 8));
            (*(code *)ppuStack_28[1])();
            uStack_14 = uVar4;
            (*(code *)*ppuStack_28)();
            uStack_10 = *(undefined4 *)(*(int *)(iVar2 + 8) + 0x114);
            FUN_00851890(param_1,(int)&ppuStack_40);
            uStack_4 = 0xffffffff;
            FUN_008501c0(&ppuStack_40);
          }
        }
      }
      local_44 = (undefined4 *)local_44[1];
    } while (local_44 != &DAT_0104bcfc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00866470 @ 00866470 ////

void __fastcall FUN_00866470(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)param_1);
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_008664b0 @ 008664b0 ////

void FUN_008664b0(void)

{
  DAT_01050058 = 0;
  return;
}


//// FUNCTION FUN_008664c0 @ 008664c0 ////

void FUN_008664c0(void)

{
  DAT_01050054 = 0;
  DAT_01050050 = 0;
  DAT_01050059 = 1;
  return;
}


//// FUNCTION FUN_00866520 @ 00866520 ////

int __fastcall FUN_00866520(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_00866670 @ 00866670 ////

void FUN_00866670(void)

{
  FUN_0098fd30("Rank",&DAT_01050054,1);
  FUN_0098fd30("StuntRank",&DAT_01050050,1);
  return;
}


//// FUNCTION FUN_008666a0 @ 008666a0 ////

undefined4 __cdecl FUN_008666a0(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_01050050;
  if (param_1 == '\0') {
    uVar1 = DAT_01050054;
  }
  return uVar1;
}


//// FUNCTION FUN_00866760 @ 00866760 ////

void __cdecl FUN_00866760(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00866790 @ 00866790 ////

void __fastcall FUN_00866790(int *param_1)

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
  puStack_8 = &LAB_00ce8fb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0xc))();
  iVar2 = FUN_00ace3df(param_1);
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
  Serialization_RegisterPointerMapEntry((char *)param_1,param_1);
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


//// FUNCTION FUN_00866870 @ 00866870 ////

void __cdecl FUN_00866870(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_008668e0 @ 008668e0 ////

void __cdecl FUN_008668e0(int *param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  void *this;
  float *this_00;
  float *pfVar4;
  undefined1 local_64 [4];
  undefined **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_4c;
  undefined1 local_38 [4];
  undefined **local_34;
  int local_30;
  int *local_2c;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce8fe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  do {
    if (param_3 <= *param_1) {
      ExceptionList = local_c;
      return;
    }
    iVar1 = *param_1 * 5 + 5;
    pfVar4 = *(float **)(*(int *)(param_4 + 4) + 8 + iVar1 * 4);
    iVar1 = *(int *)(param_4 + 4) + iVar1 * 4;
    if (pfVar4 != *(float **)(iVar1 + 0xc)) {
      do {
        pvVar3 = FUN_00857bd0(local_38);
        local_4 = 0;
        this = FUN_00857d80(local_64);
        local_4 = CONCAT31(local_4._1_3_,1);
        this_00 = FUN_00857b30(this,*pfVar4);
        bVar2 = FUN_00856db0(this_00,(int)pvVar3);
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
        local_4 = 0xffffffff;
        local_34 = &PTR_FUN_00d1aed0;
        if (local_2c != (int *)0x0) {
          *local_2c = local_30;
        }
        if (local_30 != 0) {
          *(int **)(local_30 + 4) = local_2c;
        }
        local_20 = 0;
        local_30 = 0;
        local_2c = (int *)0x0;
        if (bVar2) {
          ExceptionList = local_c;
          return;
        }
        pfVar4 = pfVar4 + 1;
      } while (pfVar4 != *(float **)(iVar1 + 0xc));
    }
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    thunk_FUN_00854600(iVar1 + 1,param_2);
  } while( true );
}


//// FUNCTION FUN_00866a10 @ 00866a10 ////

int __cdecl FUN_00866a10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  iVar1 = *(int *)(param_2 + 4);
  local_4 = 0;
  iVar4 = 1;
  puVar5 = (undefined4 *)(iVar1 + 0x20);
  do {
    while( true ) {
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)(param_2 + 8) - iVar1) / 0x14;
      }
      if (iVar2 <= iVar4) {
        return local_4;
      }
      piVar3 = (int *)puVar5[-1];
      iVar2 = local_4;
      if (piVar3 != (int *)*puVar5) break;
LAB_00866a79:
      local_4 = iVar2;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 5;
    }
    do {
      iVar2 = iVar4;
      if (param_1 == *piVar3) goto LAB_00866a79;
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)*puVar5);
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 5;
  } while( true );
}


//// FUNCTION FUN_00866ab0 @ 00866ab0 ////

void FUN_00866ab0(void)

{
  FUN_008668e0(&DAT_01050054,'\0',9,0x105005c);
  FUN_008668e0(&DAT_01050050,'\x01',3,0x105006c);
  return;
}


//// FUNCTION FUN_00866ae0 @ 00866ae0 ////

void __cdecl FUN_00866ae0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00866a10(param_1,0x105005c);
  if (iVar1 == 0) {
    FUN_00866a10(param_1,0x105006c);
  }
  return;
}


//// FUNCTION FUN_00866b10 @ 00866b10 ////

void __fastcall FUN_00866b10(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00866b40 @ 00866b40 ////

void * __thiscall FUN_00866b40(void *this,byte param_1)

{
  FUN_00866b10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00866b60 @ 00866b60 ////

void FUN_00866b60(void)

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
  puStack_8 = &LAB_00ce8ff8;
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


//// FUNCTION FUN_00866bd0 @ 00866bd0 ////

void FUN_00866bd0(void)

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
  puStack_8 = &LAB_00ce9018;
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


//// FUNCTION FUN_00866ce0 @ 00866ce0 ////

int __thiscall FUN_00866ce0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce9030;
  local_10 = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (uVar1 != 0) {
    if (0x3fffffff < uVar1) {
      uVar1 = FUN_007d72b0();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_00866870(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_00866da0 @ 00866da0 ////

void * __thiscall FUN_00866da0(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (this == param_1) {
    return this;
  }
  puVar1 = *(undefined4 **)((int)param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = (int)*(undefined4 **)((int)param_1 + 8) - (int)puVar1 >> 2;
    if (uVar3 != 0) {
      _Memory = *(undefined4 **)((int)this + 4);
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar3 <= uVar4) {
        FUN_00866760(puVar1,*(undefined4 **)((int)param_1 + 8),_Memory);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2) * 4;
        return this;
      }
      if (_Memory == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar4 < uVar3) {
        if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2;
        }
        uVar2 = FUN_007d79b0(this,uVar3);
        if ((char)uVar2 == '\0') {
          return this;
        }
        uVar2 = FUN_007d5ae0(*(undefined4 **)((int)param_1 + 4),*(undefined4 **)((int)param_1 + 8),
                             *(undefined4 **)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar2;
        return this;
      }
      if (_Memory == (undefined4 *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      puVar1 = *(undefined4 **)((int)param_1 + 4) + iVar5;
      FUN_00866760(*(undefined4 **)((int)param_1 + 4),puVar1,_Memory);
      uVar2 = FUN_007d3c80(puVar1,*(undefined4 **)((int)param_1 + 8),*(undefined4 **)((int)this + 8)
                          );
      *(undefined4 *)((int)this + 8) = uVar2;
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


//// FUNCTION FUN_00866f60 @ 00866f60 ////

undefined4 * __cdecl FUN_00866f60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_00866da0(param_3 + 1,param_1 + 1);
    param_1 = param_1 + 5;
    param_3 = param_3 + 5;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00866fd0 @ 00866fd0 ////

undefined4 * __cdecl FUN_00866fd0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x14;
    puVar2 = param_3 + -5;
    *puVar2 = *(undefined4 *)(param_2 + -0x14);
    FUN_00866da0(param_3 + -4,(void *)(param_2 + -0x10));
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}


//// FUNCTION FUN_00867010 @ 00867010 ////

void __cdecl FUN_00867010(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9051;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    FUN_00866ce0(param_1 + 1,(int)(param_2 + 1));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00867060 @ 00867060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_00867060(uint param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce906e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((_DAT_0105008c & 1) == 0) {
    _DAT_0105008c = _DAT_0105008c | 1;
    DAT_01050080 = 0;
    _DAT_01050084 = 0;
    _DAT_01050088 = 0;
    ExceptionList = &local_c;
    _atexit(FUN_00d13ad0);
  }
  local_4 = 0xffffffff;
  puVar2 = &DAT_0105006c;
  if (param_2 == '\0') {
    puVar2 = &DAT_0105005c;
  }
  if ((int)param_1 <= (int)((-(uint)(param_2 != '\0') & 0xfffffffa) + 9)) {
    iVar1 = *(int *)(puVar2 + 4);
    if ((iVar1 != 0) && (param_1 < (uint)((*(int *)(puVar2 + 8) - iVar1) / 0x14))) {
      ExceptionList = local_c;
      return (undefined *)(iVar1 + 4 + param_1 * 0x14);
    }
    puVar2 = (undefined *)FUN_00866b60();
    return puVar2;
  }
  ExceptionList = local_c;
  return &DAT_0105007c;
}


//// FUNCTION FUN_00867190 @ 00867190 ////

void __cdecl FUN_00867190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      FUN_00866da0(param_1 + 1,param_3 + 1);
      param_1 = param_1 + 5;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00867200 @ 00867200 ////

undefined4 * __cdecl FUN_00867200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce9091;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00866ce0(param_3 + 1,(int)(param_1 + 1));
    }
    param_3 = param_3 + 5;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_008672b0 @ 008672b0 ////

void FUN_008672b0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00866b10(param_1);
  }
  return;
}


//// FUNCTION FUN_00867310 @ 00867310 ////

void __cdecl FUN_00867310(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce90b1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      FUN_00866ce0(param_1 + 1,(int)(param_3 + 1));
    }
    param_1 = param_1 + 5;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008673c0 @ 008673c0 ////

void __fastcall FUN_008673c0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x14) {
    FUN_00866b10(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00867410 @ 00867410 ////

void __thiscall FUN_00867410(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_2 != param_3) {
    puVar2 = FUN_00866f60(param_3,*(undefined4 **)((int)this + 8),param_2);
    puVar1 = *(undefined4 **)((int)this + 8);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 5) {
      FUN_00866b10((int)puVar3);
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008674d0 @ 008674d0 ////

undefined4 * FUN_008674d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00867310(param_1,param_2,param_3);
  return param_1 + param_2 * 5;
}


//// FUNCTION FUN_00867500 @ 00867500 ////

void __thiscall FUN_00867500(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce90c8;
  local_10 = ExceptionList;
  local_30 = *param_3;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00866ce0(local_2c,(int)(param_3 + 1));
  iVar2 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x14;
    }
    if (0xcccccccU - iVar1 < param_2) {
      FUN_00866bd0();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x14;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0xccccccc - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x14;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_00866520((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x14);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_00867200(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00867310(puVar4,param_2,&local_30);
      FUN_00867200(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 5);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_008672b0(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar5 * 5;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 5;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar3 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar3 - (int)param_1) / 0x14) < param_2) {
        FUN_00867200(param_1,puVar3,param_1 + param_2 * 5);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_008674d0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,
                     &local_30);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x14;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_00867190(param_1,(undefined4 *)(iVar2 + param_2 * -0x14),&local_30);
      }
      else {
        puVar4 = FUN_00867200(puVar3 + param_2 * -5,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_00866fd0((int)param_1,(int)(puVar3 + param_2 * -5),puVar3);
        FUN_00867190(param_1,param_1 + param_2 * 5,&local_30);
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


//// FUNCTION FUN_00867800 @ 00867800 ////

void __thiscall
FUN_00867800(void *this,uint param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce90e8;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x14;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x14;
    }
    ExceptionList = &local_c;
    FUN_00867500(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,&param_2);
  }
  else {
    ExceptionList = &local_c;
    if (iVar2 != 0) {
      ExceptionList = &local_c;
      if (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x14)) {
        ExceptionList = &local_c;
        FUN_00867410(this,&param_1,(undefined4 *)(iVar2 + param_1 * 0x14),
                     *(undefined4 **)((int)this + 8));
      }
    }
  }
  if (param_4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(param_4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00867910 @ 00867910 ////

void FUN_00867910(void)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  undefined *this;
  bool bVar8;
  undefined4 *in_stack_fffffe14;
  undefined4 uVar9;
  void **ppvVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puStack_1c8;
  char *local_1c4;
  undefined4 local_1c0;
  uint local_1bc;
  char local_1b8 [20];
  byte *local_1a4;
  undefined4 local_1a0;
  uint local_19c;
  byte local_198 [20];
  char *pcStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  char acStack_178 [20];
  void *local_164 [2];
  uint uStack_15c;
  void *local_144 [2];
  uint uStack_13c;
  void *apvStack_124 [2];
  uint uStack_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9142;
  local_c = ExceptionList;
  if (DAT_01050090 == '\0') {
    local_1c4 = local_1b8;
    DAT_01050090 = '\x01';
    local_1b8[0] = '\0';
    local_1c0 = 0;
    local_1bc = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_1c4,"ranking",7);
    local_1c0 = 7;
    local_1c4[7] = '\0';
    local_4 = 0;
    FUN_0055c540(local_e4,&local_1c4);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_1bc) {
                    /* WARNING: Subroutine does not return */
      _free(local_1c4);
    }
    cVar3 = FUN_00558bb0(local_e4,0);
    while (cVar3 != '\0') {
      FUN_005562f0(local_e4,local_164,0);
      local_1a4 = local_198;
      local_4._0_1_ = 3;
      local_198[0] = 0;
      local_1a0 = 0;
      local_19c = 0x14;
      _strncpy((char *)local_1a4,"STUNT",5);
      uVar12 = 5;
      uVar11 = 0;
      ppvVar10 = local_104;
      local_1a0 = 5;
      local_1a4[5] = 0;
      uVar9 = 0x867a38;
      puVar4 = FUN_00430770(local_164,ppvVar10,uVar11,uVar12);
      pbVar5 = (byte *)*puVar4;
      pbVar7 = local_1a4;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00867a68:
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00867a6d;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00867a68;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00867a6d:
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      if (0x14 < local_19c) {
                    /* WARNING: Subroutine does not return */
        _free(local_1a4);
      }
      if (iVar6 == 0) {
        uVar9 = 0x867abc;
        puVar4 = FUN_00430770(local_164,local_144,5,0xffffffff);
        local_4._0_1_ = 4;
        iVar6 = FUN_00567d80(puVar4);
        local_4._0_1_ = 3;
        if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
          _free(local_144[0]);
        }
        this = &DAT_0105006c;
      }
      else {
        iVar6 = FUN_00567d80(local_164);
        this = &DAT_0105005c;
      }
      if (*(int *)(this + 4) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (*(int *)(this + 8) - *(int *)(this + 4)) / 0x14;
      }
      if (uVar11 < iVar6 + 1U) {
        puStack_1c8 = &stack0xfffffe14;
        FUN_00867800(this,iVar6 + 1U,in_stack_fffffe14,uVar9,(void *)0x0);
      }
      pcStack_184 = acStack_178;
      iVar6 = *(int *)(this + 4) + iVar6 * 0x14;
      acStack_178[0] = '\0';
      uStack_180 = 0;
      uStack_17c = 0x14;
      _strncpy(pcStack_184,"requires",8);
      uStack_180 = 8;
      pcStack_184[8] = '\0';
      local_4._0_1_ = 5;
      bVar8 = FUN_00558a90(local_e4,&pcStack_184,(undefined4 *)0x1);
      local_4._0_1_ = 3;
      if (0x14 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_184);
      }
      if ((bVar8) && (uVar9 = FUN_00558120(local_e4,0), (char)uVar9 != '\0')) {
        do {
          puVar4 = FUN_00558de0(local_e4,apvStack_124);
          local_4 = CONCAT31(local_4._1_3_,6);
          puStack_1c8 = (undefined1 *)FUN_00860a00(puVar4);
          iVar2 = *(int *)(iVar6 + 8);
          if ((iVar2 == 0) ||
             ((uint)(*(int *)(iVar6 + 0x10) - iVar2 >> 2) <=
              (uint)(*(int *)(iVar6 + 0xc) - iVar2 >> 2))) {
            FUN_007d7ca0((void *)(iVar6 + 4),*(undefined4 **)(iVar6 + 0xc),1,&puStack_1c8);
          }
          else {
            puVar4 = *(undefined4 **)(iVar6 + 0xc);
            in_stack_fffffe14 = puVar4;
            FUN_007d48c0(puVar4,1,&puStack_1c8);
            *(undefined4 **)(iVar6 + 0xc) = puVar4 + 1;
          }
          local_4._0_1_ = 3;
          if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_124[0]);
          }
          uVar9 = FUN_00558120(local_e4,2);
        } while ((char)uVar9 != '\0');
      }
      FUN_00558bb0(local_e4,5);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
        _free(local_164[0]);
      }
      cVar3 = FUN_00558bb0(local_e4,2);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION AwardLifetimeTracking_Constructor @ 00867d20 ////

/* WARNING: Removing unreachable block (ram,0x00867d9d) */

void AwardLifetimeTracking_Constructor(void)

{
  char local_20 [12];
  undefined1 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9158;
  local_c = ExceptionList;
  DAT_01050058 = 1;
  ExceptionList = &local_c;
  FUN_00867910();
  local_20[0] = '\0';
  _strncpy(local_20,"awd_lifetime",0xc);
  local_14 = 0;
  local_4 = 0;
  FUN_005434b0();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00867e20 @ 00867e20 ////

undefined4 __cdecl FUN_00867e20(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  void *this;
  
  iVar2 = FUN_005a2b70(*(int *)(param_1 + 8));
  if (iVar2 != 0) {
    this = (void *)FUN_005a2b70(*(int *)(param_1 + 8));
    cVar1 = FUN_005a7190(this,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00867e60 @ 00867e60 ////

undefined4 * __fastcall FUN_00867e60(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d632ac;
  return param_1;
}


//// FUNCTION FUN_00867e90 @ 00867e90 ////

undefined4 * __thiscall FUN_00867e90(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00867eb0 @ 00867eb0 ////

undefined4 * __fastcall FUN_00867eb0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d632d8;
  return param_1;
}


//// FUNCTION FUN_00867ef0 @ 00867ef0 ////

undefined4 * __thiscall FUN_00867ef0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00867f10 @ 00867f10 ////

undefined4 * __fastcall FUN_00867f10(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63304;
  return param_1;
}


//// FUNCTION FUN_00867f50 @ 00867f50 ////

undefined4 * __thiscall FUN_00867f50(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00867f70 @ 00867f70 ////

undefined4 * __fastcall FUN_00867f70(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63330;
  return param_1;
}


//// FUNCTION FUN_00867fb0 @ 00867fb0 ////

undefined4 * __thiscall FUN_00867fb0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00867fd0 @ 00867fd0 ////

undefined4 * __fastcall FUN_00867fd0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d6335c;
  return param_1;
}


//// FUNCTION FUN_00868010 @ 00868010 ////

undefined4 * __thiscall FUN_00868010(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868030 @ 00868030 ////

undefined4 * __fastcall FUN_00868030(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63388;
  return param_1;
}


//// FUNCTION FUN_00868070 @ 00868070 ////

undefined4 * __thiscall FUN_00868070(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008680b0 @ 008680b0 ////

undefined4 FUN_008680b0(void)

{
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9180;
  local_c = ExceptionList;
  if (DAT_01050091 == '\0') {
    local_2c = local_20;
    DAT_01050091 = '\x01';
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"awards",6);
    local_28 = 6;
    local_2c[6] = '\0';
    local_4 = 0;
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
    _strncpy(local_2c,"BestPerformanceMovieRank",0x18);
    local_28 = 0x18;
    local_2c[0x18] = '\0';
    local_4 = 1;
    DAT_00e5dfd4 = FUN_00558750(DAT_00f88624,&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return DAT_00e5dfd4;
}


//// FUNCTION FUN_008681d0 @ 008681d0 ////

undefined4 * FUN_008681d0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined2 **ppuVar2;
  uint uVar3;
  bool bVar4;
  undefined2 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34 [10];
  void *local_20 [2];
  uint uStack_18;
  
  piVar1 = (int *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  bVar4 = piVar1 == (int *)0x0;
  if (bVar4) {
    local_40 = local_34;
    local_34[0] = 0;
    local_3c = 0;
    local_38 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_40,(wchar_t *)&lpCaption_00d16918,uVar3);
    ppuVar2 = &local_40;
  }
  else {
    ppuVar2 = (undefined2 **)(**(code **)(*piVar1 + 0x5c))(local_20);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*ppuVar2,(uint)ppuVar2[1]);
  if ((bVar4) && (10 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if ((!bVar4) && (10 < uStack_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return param_1;
}


//// FUNCTION FUN_008682b0 @ 008682b0 ////

undefined4 * __fastcall FUN_008682b0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d633d0;
  return param_1;
}


//// FUNCTION FUN_008682f0 @ 008682f0 ////

undefined4 * __thiscall FUN_008682f0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868310 @ 00868310 ////

int FUN_00868310(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  
  iVar9 = 0;
  iVar3 = FUN_005773c0(param_1);
  iVar4 = GetPlayerStudio();
  if (iVar3 == iVar4) {
    puVar10 = DAT_0104d688;
    if (DAT_0104d688 != &DAT_0104d694) {
      do {
        uVar5 = FUN_0085c460((void *)puVar10[2]);
        if (((char)uVar5 != '\0') && (iVar3 = FUN_005b2220(puVar10[2]), iVar3 != 0)) {
          iVar3 = param_1;
          pvVar6 = (void *)FUN_005b2220(puVar10[2]);
          cVar2 = FUN_005a7190(pvVar6,iVar3);
          if (cVar2 != '\0') {
            iVar9 = iVar9 + 1;
          }
        }
        puVar1 = puVar10 + 1;
        puVar10 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d694);
      return iVar9;
    }
  }
  else {
    iVar4 = 0;
    pTVar12 = &TM::CStudioAI::RTTI_Type_Descriptor;
    pTVar11 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar3 = 0;
    piVar7 = (int *)FUN_005773c0(param_1);
    iVar3 = FUN_00ace790(piVar7,iVar3,pTVar11,pTVar12,iVar4);
    if (iVar3 != 0) {
      for (iVar4 = *(int *)(iVar3 + 0x238); iVar4 != iVar3 + 0x244; iVar4 = *(int *)(iVar4 + 4)) {
        uVar5 = FUN_0085c4d0(*(int *)(iVar4 + 8));
        if (((char)uVar5 != '\0') && (iVar8 = FUN_005a2b70(*(int *)(iVar4 + 8)), iVar8 != 0)) {
          iVar8 = param_1;
          pvVar6 = (void *)FUN_005a2b70(*(int *)(iVar4 + 8));
          cVar2 = FUN_005a7190(pvVar6,iVar8);
          if (cVar2 != '\0') {
            iVar9 = iVar9 + 1;
          }
        }
      }
    }
  }
  return iVar9;
}


//// FUNCTION FUN_00868400 @ 00868400 ////

float10 __cdecl FUN_00868400(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  float local_4;
  
  local_4 = 0.0;
  iVar2 = FUN_008680b0();
  iVar3 = FUN_005773c0((int)param_1);
  iVar4 = GetPlayerStudio();
  if (iVar3 == iVar4) {
    puVar8 = DAT_0104d688;
    if (DAT_0104d688 != &DAT_0104d694) {
      do {
        uVar5 = FUN_0085c460((void *)puVar8[2]);
        if ((((char)uVar5 != '\0') &&
            (piVar6 = (int *)(**(code **)(*(int *)puVar8[2] + 0x20))(), piVar6 != (int *)0x0)) &&
           ((iVar3 = (**(code **)(*piVar6 + 0x28))(), iVar3 <= iVar2 &&
            ((piVar6 = (int *)FUN_005b2780(puVar8[2]), piVar6 == param_1 &&
             (fVar9 = FUN_005b7570(puVar8[2],(float)param_1), (float10)local_4 < fVar9)))))) {
          local_4 = (float)fVar9;
        }
        puVar1 = puVar8 + 1;
        puVar8 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d694);
      return (float10)local_4;
    }
  }
  else {
    iVar4 = 0;
    pTVar11 = &TM::CStudioAI::RTTI_Type_Descriptor;
    pTVar10 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar3 = 0;
    piVar6 = (int *)FUN_005773c0((int)param_1);
    iVar3 = FUN_00ace790(piVar6,iVar3,pTVar10,pTVar11,iVar4);
    if (iVar3 != 0) {
      for (iVar4 = *(int *)(iVar3 + 0x238); iVar4 != iVar3 + 0x244; iVar4 = *(int *)(iVar4 + 4)) {
        uVar5 = FUN_0085c4d0(*(int *)(iVar4 + 8));
        if (((((char)uVar5 != '\0') &&
             (piVar6 = (int *)FUN_005a2a30(*(int *)(iVar4 + 8)), piVar6 != (int *)0x0)) &&
            (iVar7 = (**(code **)(*piVar6 + 0x28))(), iVar7 <= iVar2)) &&
           ((*(int **)(*(int *)(iVar4 + 8) + 0xc0) == param_1 &&
            (fVar9 = FUN_005a3c50(*(int *)(iVar4 + 8),param_1), (float10)local_4 < fVar9)))) {
          local_4 = (float)fVar9;
        }
      }
    }
  }
  return (float10)local_4;
}


//// FUNCTION FUN_00868540 @ 00868540 ////

float10 __cdecl FUN_00868540(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *this;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  float local_4;
  
  local_4 = 0.0;
  iVar2 = FUN_008680b0();
  iVar3 = FUN_005773c0((int)param_1);
  iVar4 = GetPlayerStudio();
  if (iVar3 == iVar4) {
    puVar8 = DAT_0104d688;
    if (DAT_0104d688 != &DAT_0104d694) {
      do {
        uVar5 = FUN_0085c460((void *)puVar8[2]);
        if ((((char)uVar5 != '\0') &&
            (piVar6 = (int *)(**(code **)(*(int *)puVar8[2] + 0x20))(), piVar6 != (int *)0x0)) &&
           ((iVar3 = (**(code **)(*piVar6 + 0x28))(), iVar3 <= iVar2 &&
            (iVar3 = FUN_005b2220(puVar8[2]), iVar3 != 0)))) {
          piVar6 = param_1;
          this = (void *)FUN_005b2220(puVar8[2]);
          cVar1 = FUN_005a7190(this,(int)piVar6);
          if ((cVar1 != '\0') &&
             (fVar9 = FUN_005b7570(puVar8[2],(float)param_1), (float10)local_4 < fVar9)) {
            local_4 = (float)fVar9;
          }
        }
        puVar8 = (undefined4 *)puVar8[1];
      } while (puVar8 != &DAT_0104d694);
      return (float10)local_4;
    }
  }
  else {
    iVar4 = 0;
    pTVar11 = &TM::CStudioAI::RTTI_Type_Descriptor;
    pTVar10 = &TM::CStudio::RTTI_Type_Descriptor;
    iVar3 = 0;
    piVar6 = (int *)FUN_005773c0((int)param_1);
    iVar3 = FUN_00ace790(piVar6,iVar3,pTVar10,pTVar11,iVar4);
    if (iVar3 != 0) {
      for (iVar4 = *(int *)(iVar3 + 0x238); iVar4 != iVar3 + 0x244; iVar4 = *(int *)(iVar4 + 4)) {
        uVar5 = FUN_0085c4d0(*(int *)(iVar4 + 8));
        if (((((char)uVar5 != '\0') &&
             (piVar6 = (int *)FUN_005a2a30(*(int *)(iVar4 + 8)), piVar6 != (int *)0x0)) &&
            (iVar7 = (**(code **)(*piVar6 + 0x28))(), iVar7 <= iVar2)) &&
           ((uVar5 = FUN_00867e20(iVar4,(int)param_1), (char)uVar5 != '\0' &&
            (fVar9 = FUN_005a3c50(*(int *)(iVar4 + 8),param_1), (float10)local_4 < fVar9)))) {
          local_4 = (float)fVar9;
        }
      }
    }
  }
  return (float10)local_4;
}


//// FUNCTION FUN_008686c0 @ 008686c0 ////

void FUN_008686c0(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  undefined1 auStack_44 [4];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  int iStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0045f400();
  for (iVar1 = *(int *)(iVar3 + 0x98); iVar1 != iVar3 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(int **)(iVar1 + 8);
    iVar10 = 0;
    pTVar9 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar8 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar7 = 0;
    piVar4 = (int *)(**(code **)(*piVar2 + 4))();
    iVar7 = FUN_00ace790(piVar4,iVar7,pTVar8,pTVar9,iVar10);
    if ((iVar7 != 0) && (iVar10 = FUN_005773c0(iVar7), iVar10 != 0)) {
      pppuStack_34 = &ppuStack_40;
      pppuStack_1c = &ppuStack_28;
      uStack_3c = 0;
      uStack_38 = 0;
      ppuStack_40 = &PTR_FUN_00d1aed0;
      iStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_28 = &PTR_FUN_00d1e55c;
      uStack_14 = 0;
      uStack_4 = 0;
      FUN_0045f4a0((int)pppuStack_34);
      iStack_2c = iVar7;
      (*(code *)*ppuStack_40)();
      uVar5 = FUN_005773c0(iVar7);
      (*(code *)ppuStack_28[1])();
      uStack_14 = uVar5;
      (*(code *)*ppuStack_28)();
      puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x18))(auStack_44);
      uStack_10 = *puVar6;
      FUN_00851890(param_1,(int)&ppuStack_40);
      uStack_4 = 0xffffffff;
      FUN_008501c0(&ppuStack_40);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00868800 @ 00868800 ////

void FUN_00868800(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  void *this;
  float *pfVar5;
  void *this_00;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float fStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  void *pvStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  undefined4 uStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce91b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0045f400();
  for (iVar1 = *(int *)(iVar3 + 0x98); iVar1 != iVar3 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar11 = 0;
    pTVar10 = &TM::CStar::RTTI_Type_Descriptor;
    pTVar9 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar8 = 0;
    piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
    this = (void *)FUN_00ace790(piVar4,iVar8,pTVar9,pTVar10,iVar11);
    iVar8 = FUN_005773c0((int)this);
    if (iVar8 != 0) {
      pfVar5 = (float *)FUN_0085bae0(&uStack_50);
      this_00 = (void *)FUN_00575ff0(this,&uStack_4c);
      uVar6 = FUN_0043b6e0(this_00,pfVar5);
      if ((char)uVar6 != '\0') {
        piVar4 = *(int **)(iVar1 + 8);
        piVar7 = (int *)(**(code **)(*piVar4 + 0x1c))(auStack_48);
        iVar8 = *piVar7;
        (**(code **)(*piVar4 + 0x18))(auStack_48);
        (**(code **)(*piVar4 + 0x30))();
        iVar11 = (**(code **)(*piVar4 + 0x28))();
        fVar2 = (float)(iVar8 - iVar11) + fStack_60;
        if (0.0 <= fVar2) {
          pppuStack_34 = &ppuStack_40;
          pppuStack_1c = &ppuStack_28;
          uStack_3c = 0;
          uStack_38 = 0;
          ppuStack_40 = &PTR_FUN_00d1aed0;
          pvStack_2c = (void *)0x0;
          uStack_24 = 0;
          uStack_20 = 0;
          ppuStack_28 = &PTR_FUN_00d1e55c;
          uStack_14 = 0;
          uStack_4 = 0;
          FUN_0045f4a0((int)pppuStack_34);
          pvStack_2c = this;
          (*(code *)*ppuStack_40)();
          fStack_10 = fVar2;
          uVar6 = FUN_005773c0((int)this);
          (*(code *)ppuStack_28[1])();
          uStack_14 = uVar6;
          (*(code *)*ppuStack_28)();
          FUN_00851890(param_1,(int)&ppuStack_40);
          uStack_4 = 0xffffffff;
          FUN_008501c0(&ppuStack_40);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00868e60 @ 00868e60 ////

undefined4 * __fastcall FUN_00868e60(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d633fc;
  return param_1;
}


//// FUNCTION FUN_00868e90 @ 00868e90 ////

undefined4 * __thiscall FUN_00868e90(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868eb0 @ 00868eb0 ////

undefined4 * __fastcall FUN_00868eb0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63428;
  return param_1;
}


//// FUNCTION FUN_00868ef0 @ 00868ef0 ////

undefined4 * __thiscall FUN_00868ef0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868f10 @ 00868f10 ////

undefined4 * __fastcall FUN_00868f10(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63454;
  return param_1;
}


//// FUNCTION FUN_00868f50 @ 00868f50 ////

undefined4 * __thiscall FUN_00868f50(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868f70 @ 00868f70 ////

undefined4 * __fastcall FUN_00868f70(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63480;
  return param_1;
}


//// FUNCTION FUN_00868fb0 @ 00868fb0 ////

undefined4 * __thiscall FUN_00868fb0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00868fd0 @ 00868fd0 ////

undefined4 * __fastcall FUN_00868fd0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d634ac;
  return param_1;
}


//// FUNCTION FUN_00869010 @ 00869010 ////

undefined4 * __thiscall FUN_00869010(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00869030 @ 00869030 ////

undefined4 * __fastcall FUN_00869030(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d634d8;
  return param_1;
}


//// FUNCTION FUN_00869070 @ 00869070 ////

undefined4 * __thiscall FUN_00869070(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00869090 @ 00869090 ////

undefined4 * FUN_00869090(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined2 **ppuVar2;
  uint uVar3;
  bool bVar4;
  undefined2 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34 [10];
  void *local_20 [2];
  uint uStack_18;
  
  piVar1 = (int *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                               &TM::CStudio::RTTI_Type_Descriptor,0);
  bVar4 = piVar1 == (int *)0x0;
  if (bVar4) {
    local_40 = local_34;
    local_34[0] = 0;
    local_3c = 0;
    local_38 = 10;
    uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_40,(wchar_t *)&lpCaption_00d16918,uVar3);
    ppuVar2 = &local_40;
  }
  else {
    ppuVar2 = (undefined2 **)(**(code **)(*piVar1 + 0x20))(local_20);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*ppuVar2,(uint)ppuVar2[1]);
  if ((bVar4) && (10 < local_38)) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if ((!bVar4) && (10 < uStack_18)) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return param_1;
}


//// FUNCTION FUN_00869170 @ 00869170 ////

undefined4 * __fastcall FUN_00869170(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63504;
  return param_1;
}


//// FUNCTION FUN_008691b0 @ 008691b0 ////

undefined4 * __thiscall FUN_008691b0(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008691d0 @ 008691d0 ////

void FUN_008691d0(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  undefined1 auStack_44 [4];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  int iStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  int iStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9258;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0045f420();
  for (iVar1 = *(int *)(iVar3 + 0x98); iVar1 != iVar3 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(int **)(iVar1 + 8);
    iVar9 = 0;
    pTVar8 = &TM::CStudio::RTTI_Type_Descriptor;
    pTVar7 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar6 = 0;
    piVar4 = (int *)(**(code **)(*piVar2 + 4))();
    iVar6 = FUN_00ace790(piVar4,iVar6,pTVar7,pTVar8,iVar9);
    if (iVar6 != 0) {
      pppuStack_34 = &ppuStack_40;
      pppuStack_1c = &ppuStack_28;
      uStack_3c = 0;
      uStack_38 = 0;
      ppuStack_40 = &PTR_FUN_00d1aed0;
      iStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_28 = &PTR_FUN_00d1e55c;
      iStack_14 = 0;
      uStack_4 = 0;
      FUN_0045f4a0((int)pppuStack_34);
      iStack_2c = iVar6;
      (*(code *)*ppuStack_40)();
      (*(code *)ppuStack_28[1])();
      iStack_14 = iVar6;
      (*(code *)*ppuStack_28)();
      puVar5 = (undefined4 *)(**(code **)(*piVar2 + 0x18))(auStack_44);
      uStack_10 = *puVar5;
      FUN_00851890(param_1,(int)&ppuStack_40);
      uStack_4 = 0xffffffff;
      FUN_008501c0(&ppuStack_40);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00869300 @ 00869300 ////

void FUN_00869300(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  float fStack_58;
  undefined1 auStack_48 [8];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  int iStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  int iStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_0045f420();
  for (iVar1 = *(int *)(iVar3 + 0x98); iVar1 != iVar3 + 0xa4; iVar1 = *(int *)(iVar1 + 4)) {
    iVar10 = 0;
    pTVar9 = &TM::CStudio::RTTI_Type_Descriptor;
    pTVar8 = &TM::TMObject::RTTI_Type_Descriptor;
    iVar7 = 0;
    piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 4))();
    iVar10 = FUN_00ace790(piVar4,iVar7,pTVar8,pTVar9,iVar10);
    piVar4 = *(int **)(iVar1 + 8);
    piVar5 = (int *)(**(code **)(*piVar4 + 0x1c))(auStack_48);
    iVar7 = *piVar5;
    (**(code **)(*piVar4 + 0x18))(auStack_48);
    (**(code **)(*piVar4 + 0x30))();
    iVar6 = (**(code **)(*piVar4 + 0x28))();
    fVar2 = (float)(iVar7 - iVar6) + fStack_58;
    if (0.0 <= fVar2) {
      pppuStack_34 = &ppuStack_40;
      pppuStack_1c = &ppuStack_28;
      uStack_3c = 0;
      uStack_38 = 0;
      ppuStack_40 = &PTR_FUN_00d1aed0;
      iStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_28 = &PTR_FUN_00d1e55c;
      iStack_14 = 0;
      uStack_4 = 0;
      FUN_0045f4a0((int)pppuStack_34);
      iStack_2c = iVar10;
      (*(code *)*ppuStack_40)();
      fStack_10 = fVar2;
      (*(code *)ppuStack_28[1])();
      iStack_14 = iVar10;
      (*(code *)*ppuStack_28)();
      FUN_00851890(param_1,(int)&ppuStack_40);
      uStack_4 = 0xffffffff;
      FUN_008501c0(&ppuStack_40);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008694b0 @ 008694b0 ////

void FUN_008694b0(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fStack_48;
  float fStack_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  undefined4 uStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9298;
  local_c = ExceptionList;
  puVar7 = DAT_0104bcf0;
  ExceptionList = &local_c;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      cVar3 = (**(code **)(*(int *)puVar7[2] + 0x3c))();
      if (cVar3 != '\0') {
        fStack_48 = 0.0;
        iVar4 = FUN_00ace790((int *)puVar7[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                             &TM::CStudioAI::RTTI_Type_Descriptor,0);
        for (iVar2 = *(int *)(iVar4 + 0x238); iVar2 != iVar4 + 0x244; iVar2 = *(int *)(iVar2 + 4)) {
          uVar5 = FUN_0085c4d0(*(int *)(iVar2 + 8));
          if ((char)uVar5 != '\0') {
            pfVar6 = (float *)FUN_005a4060(*(void **)(iVar2 + 8),&fStack_44);
            fStack_48 = *pfVar6 + fStack_48;
          }
        }
        pppuStack_34 = &ppuStack_40;
        pppuStack_1c = &ppuStack_28;
        uStack_3c = 0;
        uStack_38 = 0;
        ppuStack_40 = &PTR_FUN_00d1aed0;
        uStack_2c = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        ppuStack_28 = &PTR_FUN_00d1e55c;
        uStack_14 = 0;
        uVar5 = puVar7[2];
        uStack_4 = 0;
        FUN_0045f4a0((int)pppuStack_34);
        uStack_2c = uVar5;
        (*(code *)*ppuStack_40)();
        uVar5 = puVar7[2];
        fStack_10 = fStack_48;
        (*(code *)ppuStack_28[1])();
        uStack_14 = uVar5;
        (*(code *)*ppuStack_28)();
        FUN_00851890(param_1,(int)&ppuStack_40);
        uStack_4 = 0xffffffff;
        FUN_008501c0(&ppuStack_40);
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00869610 @ 00869610 ////

void FUN_00869610(void *param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  undefined4 uVar3;
  float *pfVar4;
  float local_48;
  float local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce92b8;
  local_48 = 0.0;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (puVar1 = DAT_0104d688; ExceptionList = ppvVar2, puVar1 != &DAT_0104d694;
      puVar1 = (undefined4 *)puVar1[1]) {
    uVar3 = FUN_0085c460((void *)puVar1[2]);
    if ((char)uVar3 != '\0') {
      pfVar4 = (float *)FUN_005b27d0((void *)puVar1[2],&local_44);
      local_48 = *pfVar4 + local_48;
    }
    ppvVar2 = ExceptionList;
  }
  local_34 = &local_40;
  local_1c = &local_28;
  local_3c = 0;
  local_38 = 0;
  local_40 = &PTR_FUN_00d1aed0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = &PTR_FUN_00d1e55c;
  local_14 = 0;
  local_4 = 0;
  uVar3 = GetPlayerStudio();
  (*(code *)local_40[1])();
  local_2c = uVar3;
  (*(code *)*local_40)();
  local_10 = local_48;
  uVar3 = GetPlayerStudio();
  (*(code *)local_28[1])();
  local_14 = uVar3;
  (*(code *)*local_28)();
  FUN_00851890(param_1,(int)&local_40);
  FUN_008501c0(&local_40);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00869750 @ 00869750 ////

void FUN_00869750(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iStack_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  undefined4 uStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce92d8;
  local_c = ExceptionList;
  puVar6 = DAT_0104bcf0;
  ExceptionList = &local_c;
  if (DAT_0104bcf0 != &DAT_0104bcfc) {
    do {
      cVar3 = (**(code **)(*(int *)puVar6[2] + 0x3c))();
      if (cVar3 != '\0') {
        iStack_44 = 0;
        iVar4 = FUN_00ace790((int *)puVar6[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                             &TM::CStudioAI::RTTI_Type_Descriptor,0);
        for (iVar2 = *(int *)(iVar4 + 0x238); iVar2 != iVar4 + 0x244; iVar2 = *(int *)(iVar2 + 4)) {
          uVar5 = FUN_0085c4d0(*(int *)(iVar2 + 8));
          if ((char)uVar5 != '\0') {
            iStack_44 = iStack_44 + 1;
          }
        }
        pppuStack_34 = &ppuStack_40;
        pppuStack_1c = &ppuStack_28;
        uStack_3c = 0;
        uStack_38 = 0;
        ppuStack_40 = &PTR_FUN_00d1aed0;
        uStack_2c = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        ppuStack_28 = &PTR_FUN_00d1e55c;
        uStack_14 = 0;
        uVar5 = puVar6[2];
        uStack_4 = 0;
        FUN_0045f4a0((int)pppuStack_34);
        uStack_2c = uVar5;
        (*(code *)*ppuStack_40)();
        fStack_10 = (float)iStack_44;
        uVar5 = puVar6[2];
        (*(code *)ppuStack_28[1])();
        uStack_14 = uVar5;
        (*(code *)*ppuStack_28)();
        FUN_00851890(param_1,(int)&ppuStack_40);
        uStack_4 = 0xffffffff;
        FUN_008501c0(&ppuStack_40);
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104bcfc);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008698a0 @ 008698a0 ////

void FUN_008698a0(void *param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce92f8;
  local_c = ExceptionList;
  iVar3 = 0;
  local_44 = 0;
  puVar4 = DAT_0104d688;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar2 = FUN_0085c460((void *)puVar4[2]);
      if ((char)uVar2 != '\0') {
        iVar3 = iVar3 + 1;
      }
      puVar4 = (undefined4 *)puVar4[1];
      ppvVar1 = ExceptionList;
      local_44 = iVar3;
    } while (puVar4 != &DAT_0104d694);
  }
  ExceptionList = ppvVar1;
  local_34 = &local_40;
  local_1c = &local_28;
  local_3c = 0;
  local_38 = 0;
  local_40 = &PTR_FUN_00d1aed0;
  local_2c = 0;
  local_24 = 0;
  local_20 = 0;
  local_28 = &PTR_FUN_00d1e55c;
  local_14 = 0;
  local_4 = 0;
  uVar2 = GetPlayerStudio();
  (*(code *)local_40[1])();
  local_2c = uVar2;
  (*(code *)*local_40)();
  local_10 = (float)local_44;
  uVar2 = GetPlayerStudio();
  (*(code *)local_28[1])();
  local_14 = uVar2;
  (*(code *)*local_28)();
  FUN_00851890(param_1,(int)&local_40);
  FUN_008501c0(&local_40);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00869c40 @ 00869c40 ////

undefined4 * __fastcall FUN_00869c40(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63534;
  return param_1;
}


//// FUNCTION FUN_00869c80 @ 00869c80 ////

undefined4 * __thiscall FUN_00869c80(void *this,byte param_1)

{
  thunk_FUN_0084faa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00869ea0 @ 00869ea0 ////

void __cdecl FUN_00869ea0(int *param_1)

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


//// FUNCTION FUN_00869f40 @ 00869f40 ////

void __thiscall FUN_00869f40(void *this,int *param_1)

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


//// FUNCTION FUN_00869fc0 @ 00869fc0 ////

/* WARNING: Removing unreachable block (ram,0x00869fe2) */

float10 __thiscall FUN_00869fc0(uint *param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return (float10)(uVar1 >> 6 & 0x7fffff) * (float10)1.192093e-07 * (float10)param_2;
}


//// FUNCTION FUN_0086a020 @ 0086a020 ////

void __thiscall FUN_0086a020(void *this,int *param_1)

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


//// FUNCTION FUN_0086a0d0 @ 0086a0d0 ////

void __cdecl FUN_0086a0d0(int param_1)

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


//// FUNCTION FUN_0086a0f0 @ 0086a0f0 ////

void __cdecl FUN_0086a0f0(int *param_1)

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


//// FUNCTION FUN_0086a120 @ 0086a120 ////

void __fastcall FUN_0086a120(int *param_1)

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


//// FUNCTION FUN_0086a180 @ 0086a180 ////

void __fastcall FUN_0086a180(int *param_1)

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


//// FUNCTION FUN_0086a1e0 @ 0086a1e0 ////

void __cdecl FUN_0086a1e0(int param_1)

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


//// FUNCTION FUN_0086a210 @ 0086a210 ////

void __fastcall FUN_0086a210(int *param_1)

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


//// FUNCTION FUN_0086a420 @ 0086a420 ////

void __fastcall FUN_0086a420(undefined4 *param_1)

{
  if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_0086a440 @ 0086a440 ////

void __fastcall FUN_0086a440(undefined4 *param_1)

{
  if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_0086a500 @ 0086a500 ////

void __fastcall FUN_0086a500(int *param_1)

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


//// FUNCTION FUN_0086a5d0 @ 0086a5d0 ////

undefined4 * __thiscall FUN_0086a5d0(void *this,float *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar4 + 0x15);
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    if (*param_1 <= (float)puVar4[3]) {
      puVar3 = (undefined4 *)*puVar4;
    }
    else {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = puVar2;
    }
    puVar2 = puVar4;
    puVar4 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0x15);
  }
  return puVar2;
}


//// FUNCTION FUN_0086a640 @ 0086a640 ////

void __thiscall FUN_0086a640(void *this,int param_1)

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


//// FUNCTION FUN_0086a6a0 @ 0086a6a0 ////

int * __fastcall FUN_0086a6a0(int *param_1)

{
  FUN_0086a180(param_1);
  return param_1;
}


//// FUNCTION FUN_0086a6b0 @ 0086a6b0 ////

int * __fastcall FUN_0086a6b0(int *param_1)

{
  FUN_0086a120(param_1);
  return param_1;
}


//// FUNCTION FUN_0086a6d0 @ 0086a6d0 ////

void __thiscall FUN_0086a6d0(void *this,int param_1)

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


//// FUNCTION FUN_0086a730 @ 0086a730 ////

int * __fastcall FUN_0086a730(int *param_1)

{
  FUN_0086a210(param_1);
  return param_1;
}


//// FUNCTION FUN_0086a800 @ 0086a800 ////

undefined4 * __thiscall FUN_0086a800(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined2 **ppuVar2;
  uint uVar3;
  bool bVar4;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  undefined2 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined2 local_40 [10];
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9358;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  if (param_2 == (int *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_004036d0(&local_6c,*(wchar_t **)((int)this + 4),*(uint *)((int)this + 8));
  }
  else {
    ExceptionList = &pvStack_c;
    piVar1 = (int *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                 &TM::CStaff::RTTI_Type_Descriptor,0);
    bVar4 = piVar1 == (int *)0x0;
    if (bVar4) {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 10;
      uVar3 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar3);
      ppuVar2 = &local_4c;
    }
    else {
      ppuVar2 = (undefined2 **)(**(code **)(*piVar1 + 0x5c))(local_2c);
    }
    FUN_004036d0(&local_6c,*ppuVar2,(uint)ppuVar2[1]);
    if ((bVar4) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if ((!bVar4) && (10 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0086a960 @ 0086a960 ////

void __fastcall FUN_0086a960(undefined4 *param_1)

{
  if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  FUN_0084faa0(param_1);
  return;
}


//// FUNCTION FUN_0086a980 @ 0086a980 ////

undefined4 * __fastcall FUN_0086a980(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  *param_1 = &PTR_FUN_00d63560;
  param_1[1] = param_1 + 4;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  return param_1;
}


//// FUNCTION FUN_0086a9b0 @ 0086a9b0 ////

undefined4 * __thiscall FUN_0086a9b0(void *this,byte param_1)

{
  FUN_0086a420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0086a9d0 @ 0086a9d0 ////

undefined4 * FUN_0086a9d0(undefined4 *param_1,int *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  wchar_t *local_4c;
  uint local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce9378;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                &TM::CProject::RTTI_Type_Descriptor,0);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                                  &TM::CProjectAI::RTTI_Type_Descriptor,0);
    if (pvVar1 == (void *)0x0) goto LAB_0086aa9d;
    puVar2 = FUN_005a3200(pvVar1,local_2c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
  }
  else {
    puVar2 = FUN_0045f620(pvVar1,local_2c);
    FUN_004036d0(&local_4c,(wchar_t *)*puVar2,puVar2[1]);
  }
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
LAB_0086aa9d:
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_4c,local_48);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0086aaf0 @ 0086aaf0 ////

undefined4 * __fastcall FUN_0086aaf0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  param_1[1] = param_1 + 4;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  *param_1 = &PTR_FUN_00d6358c;
  return param_1;
}


//// FUNCTION FUN_0086ab30 @ 0086ab30 ////

undefined4 * __thiscall FUN_0086ab30(void *this,byte param_1)

{
  FUN_0086a440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0086abc0 @ 0086abc0 ////

int * __fastcall FUN_0086abc0(int *param_1)

{
  FUN_0086a500(param_1);
  return param_1;
}


//// FUNCTION FUN_0086ac30 @ 0086ac30 ////

int * __fastcall FUN_0086ac30(int *param_1)

{
  FUN_0086a180(param_1);
  return param_1;
}


//// FUNCTION FUN_0086ac40 @ 0086ac40 ////

int * __fastcall FUN_0086ac40(int *param_1)

{
  FUN_0086a120(param_1);
  return param_1;
}


//// FUNCTION FUN_0086ac50 @ 0086ac50 ////

int * __fastcall FUN_0086ac50(int *param_1)

{
  FUN_0086a500(param_1);
  return param_1;
}


//// FUNCTION FUN_0086ac60 @ 0086ac60 ////

int * __fastcall FUN_0086ac60(int *param_1)

{
  FUN_0086a210(param_1);
  return param_1;
}


//// FUNCTION FUN_0086ac70 @ 0086ac70 ////

void FUN_0086ac70(void)

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


//// FUNCTION FUN_0086acb0 @ 0086acb0 ////

void FUN_0086acb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0086ad20 @ 0086ad20 ////

void FUN_0086ad20(void)

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


//// FUNCTION FUN_0086ad60 @ 0086ad60 ////

void FUN_0086ad60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0086add0 @ 0086add0 ////

void FUN_0086add0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0086add0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0086ae10 @ 0086ae10 ////

void FUN_0086ae10(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0086ae10(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0086aef0 @ 0086aef0 ////

undefined4 * __fastcall FUN_0086aef0(undefined4 *param_1)

{
  FUN_0084fa40(param_1);
  param_1[1] = param_1 + 4;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  *param_1 = &PTR_FUN_00d635b8;
  return param_1;
}


//// FUNCTION FUN_0086af30 @ 0086af30 ////

undefined4 * __thiscall FUN_0086af30(void *this,byte param_1)

{
  FUN_0086a960(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0086af50 @ 0086af50 ////

void __thiscall FUN_0086af50(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_0086afe0 @ 0086afe0 ////

void __fastcall FUN_0086afe0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ac70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0086b020 @ 0086b020 ////

void __fastcall FUN_0086b020(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ad20();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0086b060 @ 0086b060 ////

void __fastcall FUN_0086b060(int param_1)

{
  FUN_0086add0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0086b090 @ 0086b090 ////

void __fastcall FUN_0086b090(int param_1)

{
  FUN_0086ae10(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0086b0c0 @ 0086b0c0 ////

void __thiscall FUN_0086b0c0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_0050b040(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar2 != puVar1) {
    uVar3 = FUN_0050af20(param_2,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      *param_1 = (int)puVar2;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_0086b120 @ 0086b120 ////

int __fastcall FUN_0086b120(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ac70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086b150 @ 0086b150 ////

int __fastcall FUN_0086b150(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ad20();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086b180 @ 0086b180 ////

float10 __cdecl FUN_0086b180(float param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  float extraout_ECX;
  float extraout_ECX_00;
  float fVar4;
  float extraout_EDX;
  float extraout_EDX_00;
  float fVar5;
  float10 fVar6;
  undefined8 uVar7;
  float fVar8;
  float local_4;
  
  if (param_1 == 0.0) {
    return (float10)0.0;
  }
  iVar1 = FUN_005150b0((int)param_1);
  iVar3 = param_2;
  if (iVar1 != 0) {
    ppuVar2 = FUN_00860970(param_2);
    FUN_0086b0c0((void *)(iVar1 + 0x7c),(int *)&param_1,ppuVar2);
    fVar8 = param_1;
    if (param_1 != *(float *)(iVar1 + 0x80)) {
      iVar3 = Award_GetAvailableFromYear(iVar3);
      param_1 = (float)iVar3;
      fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
      if ((float10)param_1 <= fVar6) {
        fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
        if ((float10)param_1 + (float10)*(float *)((int)fVar8 + 0x3c) <= fVar6) {
          fVar4 = *(float *)((int)fVar8 + 0x34);
          fVar5 = *(float *)((int)fVar8 + 0x38);
          param_1 = fVar5;
          local_4 = fVar4;
        }
        else {
          fVar6 = FUN_0043b710((float *)&DAT_00e4fa4c);
          fVar6 = (fVar6 - (float10)param_1) / (float10)*(float *)((int)fVar8 + 0x3c);
          fVar4 = extraout_ECX_00;
          fVar5 = extraout_EDX_00;
          param_1 = (float)(((float10)*(float *)((int)fVar8 + 0x38) -
                            (float10)*(float *)((int)fVar8 + 0x30)) * fVar6 +
                           (float10)*(float *)((int)fVar8 + 0x30));
          local_4 = (float)(((float10)*(float *)((int)fVar8 + 0x34) -
                            (float10)*(float *)((int)fVar8 + 0x2c)) * fVar6 +
                           (float10)*(float *)((int)fVar8 + 0x2c));
        }
      }
      else {
        param_1 = 0.0;
        local_4 = 0.0;
        fVar4 = extraout_ECX;
        fVar5 = extraout_EDX;
      }
      fVar8 = param_1 + param_1;
      uVar7 = FUN_0085cee0(fVar4,fVar5);
      fVar6 = FUN_00869fc0((uint *)uVar7,fVar8);
      return (fVar6 + (float10)local_4) - (float10)param_1;
    }
    return (float10)0.0;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_0086b2b0 @ 0086b2b0 ////

void __thiscall
FUN_0086b2b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce9398;
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
  piVar3 = (int *)FUN_0086acb0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0086b3ab:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0086a640(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00869f40(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0086b3ab;
      if (piVar6 == (int *)*piVar2) {
        FUN_00869f40(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0086a640(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0086b460 @ 0086b460 ////

void __thiscall
FUN_0086b460(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce93b8;
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
  piVar3 = (int *)FUN_0086ad60(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0086b55b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0086a6d0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0086a020(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0086b55b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0086a020(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0086a6d0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0086b610 @ 0086b610 ////

void __thiscall FUN_0086b610(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce93d8;
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
  FUN_0086a180((int *)&param_2);
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
      goto LAB_0086b781;
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
      piVar2 = (int *)FUN_0086a0f0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0086a0d0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0086b781:
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
            FUN_0086a640(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00869f40(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0086a640(this,(int)piVar5);
              break;
            }
LAB_0086b844:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00869f40(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0086b844;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0086a640(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00869f40(this,piVar5);
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


//// FUNCTION FUN_0086b8d0 @ 0086b8d0 ////

void __thiscall FUN_0086b8d0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce93f8;
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
  FUN_0086a500((int *)&param_2);
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
      goto LAB_0086ba41;
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
      piVar2 = (int *)FUN_00869ea0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0086a1e0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0086ba41:
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
            FUN_0086a6d0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0086a020(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0086a6d0(this,(int)piVar5);
              break;
            }
LAB_0086bb04:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0086a020(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0086bb04;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0086a6d0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0086a020(this,piVar5);
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


//// FUNCTION FUN_0086bb90 @ 0086bb90 ////

void __thiscall FUN_0086bb90(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_0086b2b0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0086a120((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0086b2b0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0086bc50 @ 0086bc50 ////

void __thiscall FUN_0086bc50(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0086add0((void *)piVar6[1]);
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
    FUN_0086b610(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0086bd10 @ 0086bd10 ////

void __thiscall FUN_0086bd10(void *this,undefined4 *param_1,float *param_2)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  bool local_4;
  
  pfVar4 = param_2;
  pfVar2 = (float *)(*(float **)((int)this + 4))[1];
  cVar1 = *(char *)((int)pfVar2 + 0x15);
  bVar5 = true;
  local_4 = true;
  pfVar3 = *(float **)((int)this + 4);
  while (cVar1 == '\0') {
    bVar5 = pfVar2[3] <= *param_2;
    if (bVar5) {
      pfVar7 = (float *)pfVar2[2];
    }
    else {
      pfVar7 = (float *)*pfVar2;
    }
    local_4 = !bVar5;
    bVar5 = !bVar5;
    pfVar3 = pfVar2;
    pfVar2 = pfVar7;
    cVar1 = *(char *)((int)pfVar7 + 0x15);
  }
  param_2 = pfVar3;
  if (bVar5) {
    if (pfVar3 == (float *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_0086bd72;
    }
    FUN_0086a210((int *)&param_2);
  }
  if (*pfVar4 <= param_2[3]) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_0086bd72:
  puVar6 = (undefined4 *)FUN_0086b460(this,&param_2,local_4,pfVar3,pfVar4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_0086bdd0 @ 0086bdd0 ////

void __thiscall FUN_0086bdd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0086ae10((void *)piVar6[1]);
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
    FUN_0086b8d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0086be90 @ 0086be90 ////

undefined4 * __thiscall FUN_0086be90(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0086b2b0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0086b2b0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0086b2b0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0086a120((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0086b2b0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_0086b2b0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0086a180((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0086b2b0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_0086b2b0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_0086bb90(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_0086c030 @ 0086c030 ////

undefined4 * __thiscall FUN_0086c030(void *this,undefined4 *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  pfVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0086b460(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  pfVar1 = *(float **)((int)this + 4);
  if (param_2 == (float *)*pfVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0086b460(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == pfVar1) {
    puVar4 = (undefined4 *)pfVar1[2];
    uVar3 = FUN_0081f960((float *)(puVar4 + 3),param_3);
    if ((char)uVar3 != '\0') {
      FUN_0086b460(this,param_1,'\0',puVar4,pfVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_0081f960(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0086a210((int *)&param_3);
      pfVar1 = param_3;
      uVar3 = FUN_0081f960(param_3 + 3,pfVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)((int)pfVar1[2] + 0x15) != '\0') {
          FUN_0086b460(this,param_1,'\0',pfVar1,pfVar2);
          return param_1;
        }
        FUN_0086b460(this,param_1,'\x01',param_2,pfVar2);
        return param_1;
      }
    }
    uVar3 = FUN_0081f960(param_2 + 3,pfVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_0086a500((int *)&param_3);
      pfVar1 = param_3;
      if (param_3 != *(float **)((int)this + 4)) {
        uVar3 = FUN_0081f960(pfVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0086c1b0;
      }
      if (*(char *)((int)param_2[2] + 0x15) != '\0') {
        FUN_0086b460(this,param_1,'\0',param_2,pfVar2);
        return param_1;
      }
      FUN_0086b460(this,param_1,'\x01',pfVar1,pfVar2);
      return param_1;
    }
  }
LAB_0086c1b0:
  puVar4 = (undefined4 *)FUN_0086bd10(this,local_8,pfVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0086c200 @ 0086c200 ////

uint * __thiscall FUN_0086c200(void *this,uint *param_1)

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
  piVar3 = FUN_0086be90(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0086c2b0 @ 0086c2b0 ////

float * __thiscall FUN_0086c2b0(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float local_8 [2];
  
  pfVar1 = param_1;
  pfVar2 = (float *)FUN_0086a5d0(this,param_1);
  if ((pfVar2 != *(float **)((int)this + 4)) && (pfVar2[3] <= *pfVar1)) {
    return pfVar2 + 4;
  }
  local_8[0] = *pfVar1;
  local_8[1] = 0.0;
  piVar3 = FUN_0086c030(this,&param_1,pfVar2,local_8);
  return (float *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_0086c340 @ 0086c340 ////

void __fastcall FUN_0086c340(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0086bc50(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0086c370 @ 0086c370 ////

void __fastcall FUN_0086c370(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0086bdd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0086c3a0 @ 0086c3a0 ////

int __fastcall FUN_0086c3a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ac70();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086c3d0 @ 0086c3d0 ////

int __fastcall FUN_0086c3d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0086ad20();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0086c400 @ 0086c400 ////

void __fastcall FUN_0086c400(int *param_1,undefined4 param_2,void *param_3)

{
  undefined4 *puVar1;
  wchar_t *_Source;
  void **ppvVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  void *pvVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float10 fVar10;
  undefined8 uVar11;
  undefined **local_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined ***pppuStack_34;
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9418;
  ppvVar2 = &pvStack_c;
  piVar6 = param_1;
  pvStack_c = ExceptionList;
  for (puVar1 = DAT_0104bcf0; ExceptionList = ppvVar2, puVar1 != &DAT_0104bcfc;
      puVar1 = (undefined4 *)puVar1[1]) {
    fVar3 = (float)FUN_00ace790((int *)puVar1[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                                &TM::CStudioAI::RTTI_Type_Descriptor,0);
    iVar4 = (**(code **)(*param_1 + 0xc))();
    fVar10 = FUN_0086b180(fVar3,iVar4);
    piVar6 = extraout_ECX;
    param_2 = extraout_EDX;
    if ((float10)0.0 < fVar10) {
      pppuStack_34 = &local_40;
      pppuStack_1c = &ppuStack_28;
      uStack_3c = 0;
      uStack_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      uStack_2c = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      ppuStack_28 = &PTR_FUN_00d1e55c;
      fStack_14 = 0.0;
      fStack_10 = (float)fVar10;
      uStack_4 = 0;
      FUN_0045f4a0((int)pppuStack_34);
      uStack_2c = 0;
      (*(code *)*local_40)();
      (*(code *)ppuStack_28[1])();
      fStack_14 = fVar3;
      (*(code *)*ppuStack_28)();
      FUN_00851890(param_3,(int)&local_40);
      uStack_4 = 0xffffffff;
      FUN_008501c0(&local_40);
      piVar6 = extraout_ECX_00;
      param_2 = extraout_EDX_00;
    }
    ppvVar2 = ExceptionList;
  }
  uVar11 = FUN_0085cee0(piVar6,param_2);
  puVar5 = (uint *)uVar11;
  uVar9 = *puVar5 * 0x19660d + 0x3c6ef35f;
  *puVar5 = uVar9;
  piVar6 = FUN_005726a0((int *)&local_40,uVar9 & 1,puVar5);
  uVar9 = piVar6[1];
  _Source = (wchar_t *)*piVar6;
  if ((uint)param_1[3] <= uVar9) {
    if (10 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[1]);
    }
    uVar7 = uVar9 + 0x20 & 0xffffffe0;
    param_1[3] = uVar7;
    pvVar8 = _malloc(uVar7 * 2);
    param_1[1] = (int)pvVar8;
  }
  _wcsncpy((wchar_t *)param_1[1],_Source,uVar9);
  param_1[2] = uVar9;
  *(undefined2 *)(param_1[1] + uVar9 * 2) = 0;
  if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0086c5b0 @ 0086c5b0 ////

void FUN_0086c5b0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  void *this;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_58;
  undefined4 local_54;
  float local_50;
  undefined1 local_4c [4];
  int *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48 = (int *)FUN_0086ac70();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (int)local_48;
  *local_48 = (int)local_48;
  local_48[2] = (int)local_48;
  local_44 = 0;
  local_4 = 0;
  puVar12 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar5 = FUN_0085c460((void *)puVar12[2]);
      if (((char)uVar5 != '\0') &&
         (iVar13 = *(int *)(puVar12[2] + 0xac), iVar13 != puVar12[2] + 0xb8)) {
        do {
          cVar4 = FUN_004de210(*(int *)(iVar13 + 8));
          if (cVar4 == '\0') {
            iVar6 = FUN_004de100(*(int *)(iVar13 + 8));
            iVar6 = *(int *)(iVar6 + 8);
            iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
            if (iVar6 != iVar7 + 0x14) {
              do {
                pfVar8 = (float *)FUN_0048c9e0(*(void **)(iVar6 + 8),&local_54);
                if (((0.0 < *pfVar8) && (iVar7 = FUN_0048c9f0(*(int *)(iVar6 + 8)), iVar7 != 0)) &&
                   ((local_58 = FUN_005a64e0(iVar7), local_58 != 0 ||
                    (local_58 = FUN_005a6470(iVar7), local_58 != 0)))) {
                  pfVar9 = (float *)FUN_0086c200(local_4c,&local_58);
                  pfVar8 = &local_50;
                  this = (void *)FUN_004df4a0(*(int *)(iVar13 + 8));
                  pfVar8 = (float *)FUN_004b58b0(this,pfVar8);
                  *pfVar9 = *pfVar8 + *pfVar9;
                }
                iVar6 = *(int *)(iVar6 + 4);
                iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
              } while (iVar6 != iVar7 + 0x14);
            }
          }
          iVar13 = *(int *)(iVar13 + 4);
        } while (iVar13 != puVar12[2] + 0xb8);
      }
      puVar1 = puVar12 + 1;
      puVar12 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  piVar10 = (int *)*local_48;
  piVar11 = piVar10;
  if (piVar10 != local_48) {
    while( true ) {
      if (*(char *)((int)piVar10 + 0x15) == '\0') {
        piVar2 = (int *)piVar10[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar4 = *(char *)(*piVar2 + 0x15);
          piVar10 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x15);
            piVar10 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar4 = *(char *)(piVar10[1] + 0x15);
          piVar3 = (int *)piVar10[1];
          piVar2 = piVar10;
          while ((piVar10 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar10[2]))) {
            cVar4 = *(char *)(piVar10[1] + 0x15);
            piVar3 = (int *)piVar10[1];
            piVar2 = piVar10;
          }
        }
      }
      if (piVar10 == local_48) break;
      if ((float)piVar11[4] < (float)piVar10[4]) {
        piVar11 = piVar10;
      }
    }
    if ((piVar11 != local_48) && (iVar13 = piVar11[3], iVar13 != 0)) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = piVar11[4];
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045f4a0((int)local_34);
      local_2c = iVar13;
      (*(code *)*local_40)();
      uVar5 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar5;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  local_4 = 0xffffffff;
  FUN_0086bc50(local_4c,&param_1,(int *)*local_48,local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086c890 @ 0086c890 ////

void FUN_0086c890(void *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  void *this;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_4c;
  float local_48;
  float local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9458;
  local_c = ExceptionList;
  iVar6 = 0;
  local_48 = 0.0;
  puVar8 = DAT_0104d688;
  ExceptionList = &local_c;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar4 = FUN_0085c460((void *)puVar8[2]);
      if ((char)uVar4 != '\0') {
        iVar7 = *(int *)(puVar8[2] + 0xac);
        local_4c = 0.0;
        if (iVar7 != puVar8[2] + 0xb8) {
          do {
            cVar2 = FUN_004de210(*(int *)(iVar7 + 8));
            if ((cVar2 == '\0') &&
               (uVar3 = FUN_004e0fd0(*(float *)(iVar7 + 8)), (char)uVar3 != '\0')) {
              pfVar5 = &local_44;
              this = (void *)FUN_004df4a0(*(int *)(iVar7 + 8));
              pfVar5 = (float *)FUN_004b58b0(this,pfVar5);
              local_4c = *pfVar5 + local_4c;
            }
            iVar7 = *(int *)(iVar7 + 4);
          } while (iVar7 != puVar8[2] + 0xb8);
        }
        if (local_48 < local_4c) {
          iVar6 = puVar8[2];
          local_48 = local_4c;
        }
      }
      puVar1 = puVar8 + 1;
      puVar8 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
    if (iVar6 != 0) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = local_48;
      local_4 = 0;
      FUN_0045f4a0((int)local_34);
      local_2c = iVar6;
      (*(code *)*local_40)();
      uVar4 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar4;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0086ca10 @ 0086ca10 ////

void FUN_0086ca10(void *param_1)

{
  char cVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  float fVar13;
  float10 fVar14;
  undefined8 uVar15;
  float local_6c;
  int *local_68;
  int *local_64;
  undefined4 uStack_60;
  byte local_5c [8];
  float afStack_54 [2];
  undefined1 local_4c [4];
  float *local_48;
  undefined4 local_44;
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined ***pppuStack_34;
  float fStack_2c;
  undefined **ppuStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined ***pppuStack_1c;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce9480;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0045f410();
  iVar11 = 0;
  for (iVar4 = *(int *)(iVar2 + 0x98); iVar4 != iVar2 + 0xa4; iVar4 = *(int *)(iVar4 + 4)) {
    iVar11 = iVar11 + 1;
  }
  uVar15 = FUN_0085cee0(iVar4,iVar11);
  piVar7 = (int *)uVar15;
  puVar8 = DAT_0104bcf0;
  local_64 = piVar7;
  if (DAT_0104bcf0 == &DAT_0104bcfc) {
    ExceptionList = local_c;
    return;
  }
  while (fVar3 = (float)FUN_00ace790((int *)puVar8[2],0,&TM::CStudio::RTTI_Type_Descriptor,
                                     &TM::CStudioAI::RTTI_Type_Descriptor,0), fVar3 == 0.0) {
    if ((undefined4 *)puVar8[1] == &DAT_0104bcfc) {
      ExceptionList = local_c;
      return;
    }
    local_6c = 0.0;
    puVar8 = (undefined4 *)puVar8[1];
  }
  iVar4 = *piVar7 * 0x19660d + 0x3c6ef35f;
  iVar2 = iVar4 * 0x19660d + 0x3c6ef35f;
  iVar5 = iVar2 * 0x19660d + 0x3c6ef35f;
  local_5c[0] = ~(byte)iVar4 & 1;
  local_5c[1] = ~(byte)iVar2 & 1;
  iVar4 = iVar5 * 0x19660d + 0x3c6ef35f;
  iVar2 = iVar4 * 0x19660d + 0x3c6ef35f;
  *piVar7 = iVar2;
  local_5c[2] = ~(byte)iVar5 & 1;
  local_5c[3] = ~(byte)iVar4 & 1;
  local_5c[4] = ~(byte)iVar2 & 1;
  local_6c = fVar3;
  local_48 = (float *)FUN_0086ad20();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (float)local_48;
  *local_48 = (float)local_48;
  local_48[2] = (float)local_48;
  local_44 = 0;
  iVar4 = *(int *)((int)fVar3 + 0x238);
  local_4 = 0;
  if (iVar4 != (int)fVar3 + 0x244) {
    do {
      uVar6 = FUN_0085c4d0(*(int *)(iVar4 + 8));
      if (((char)uVar6 != '\0') &&
         (piVar7 = (int *)FUN_005a2a30(*(int *)(iVar4 + 8)), piVar7 != (int *)0x0)) {
        fVar3 = (float)iVar11;
        if (iVar11 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        iVar2 = (**(code **)(*piVar7 + 0x2c))();
        fVar13 = *(float *)(iVar4 + 8);
        fVar3 = ABS(fVar3 * 0.5 - (float)iVar2);
        cVar1 = *(char *)((int)local_48[1] + 0x15);
        pfVar10 = (float *)local_48[1];
        pfVar9 = local_48;
        while (pfVar12 = pfVar10, cVar1 == '\0') {
          if (fVar3 <= pfVar12[3]) {
            pfVar10 = (float *)*pfVar12;
          }
          else {
            pfVar10 = (float *)pfVar12[2];
            pfVar12 = pfVar9;
          }
          cVar1 = *(char *)((int)pfVar10 + 0x15);
          pfVar9 = pfVar12;
        }
        if ((pfVar9 == local_48) || (fVar3 < pfVar9[3])) {
          afStack_54[1] = 0.0;
          afStack_54[0] = fVar3;
          puVar8 = FUN_0086c030(local_4c,&uStack_60,pfVar9,afStack_54);
          pfVar9 = (float *)*puVar8;
        }
        pfVar9[4] = fVar13;
        fVar3 = local_6c;
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != (int)fVar3 + 0x244);
  }
  pfVar10 = (float *)*local_48;
  fVar13 = 0.0;
  iVar4 = 0;
  do {
    if ((pfVar10 == local_48) || (fVar13 = pfVar10[4], local_5c[iVar4] != 0)) break;
    iVar4 = iVar4 + 1;
    if (*(char *)((int)pfVar10 + 0x15) == '\0') {
      pfVar9 = (float *)pfVar10[2];
      if (*(char *)((int)pfVar9 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*pfVar9 + 0x15);
        pfVar10 = pfVar9;
        pfVar9 = (float *)*pfVar9;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*pfVar9 + 0x15);
          pfVar10 = pfVar9;
          pfVar9 = (float *)*pfVar9;
        }
      }
      else {
        cVar1 = *(char *)((int)pfVar10[1] + 0x15);
        pfVar12 = (float *)pfVar10[1];
        pfVar9 = pfVar10;
        while ((pfVar10 = pfVar12, cVar1 == '\0' && (pfVar9 == (float *)pfVar10[2]))) {
          cVar1 = *(char *)((int)pfVar10[1] + 0x15);
          pfVar12 = (float *)pfVar10[1];
          pfVar9 = pfVar10;
        }
      }
    }
  } while (iVar4 < 5);
  if (fVar13 != 0.0) {
    pppuStack_34 = &ppuStack_40;
    pppuStack_1c = &ppuStack_28;
    uStack_3c = 0;
    uStack_38 = 0;
    ppuStack_40 = &PTR_FUN_00d1aed0;
    fStack_2c = 0.0;
    uStack_24 = 0;
    uStack_20 = 0;
    ppuStack_28 = &PTR_FUN_00d1e55c;
    fStack_14 = 0.0;
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar4 = (**(code **)(*local_68 + 0xc))();
    fVar14 = FUN_0086b180(fVar3,iVar4);
    fStack_10 = (float)fVar14;
    (*(code *)ppuStack_40[1])();
    fStack_2c = fVar13;
    (*(code *)*ppuStack_40)();
    (*(code *)ppuStack_28[1])();
    fStack_14 = fVar3;
    (*(code *)*ppuStack_28)();
    FUN_00851890(param_1,(int)&ppuStack_40);
    FUN_008501c0(&ppuStack_40);
  }
  local_4 = 0xffffffff;
  FUN_0086bdd0(local_4c,&local_6c,(int *)*local_48,(int *)local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086cda0 @ 0086cda0 ////

void FUN_0086cda0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  uint local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [4];
  int *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined ***local_34;
  int local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined ***local_1c;
  undefined4 local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce94a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48 = (int *)FUN_0086ac70();
  *(undefined1 *)((int)local_48 + 0x15) = 1;
  local_48[1] = (int)local_48;
  *local_48 = (int)local_48;
  local_48[2] = (int)local_48;
  local_44 = 0;
  local_4 = 0;
  puVar12 = DAT_0104d688;
  if (DAT_0104d688 != &DAT_0104d694) {
    do {
      uVar5 = FUN_0085c460((void *)puVar12[2]);
      if (((char)uVar5 != '\0') &&
         (iVar13 = *(int *)(puVar12[2] + 0xac), iVar13 != puVar12[2] + 0xb8)) {
        do {
          local_58 = *(float *)(*(int *)(iVar13 + 8) + 0xf4);
          cVar4 = FUN_004de210(*(int *)(iVar13 + 8));
          if ((cVar4 == '\0') && (0.0 < local_58)) {
            iVar6 = FUN_004de100(*(int *)(iVar13 + 8));
            iVar6 = *(int *)(iVar6 + 8);
            iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
            if (iVar6 != iVar7 + 0x14) {
              do {
                pfVar8 = (float *)FUN_0048c9e0(*(void **)(iVar6 + 8),&local_54);
                if (((0.0 < *pfVar8) && (iVar7 = FUN_0048c9f0(*(int *)(iVar6 + 8)), iVar7 != 0)) &&
                   ((local_5c = FUN_005a64e0(iVar7), local_5c != 0 ||
                    (local_5c = FUN_005a6470(iVar7), local_5c != 0)))) {
                  piVar9 = (int *)FUN_0086af50(local_4c,&local_50,&local_5c);
                  if ((int *)*piVar9 == local_48) {
                    puVar10 = FUN_0086c200(local_4c,&local_5c);
                    *puVar10 = 0x3f800000;
                  }
                  pfVar8 = (float *)FUN_0086c200(local_4c,&local_5c);
                  *pfVar8 = local_58 * *pfVar8;
                }
                iVar6 = *(int *)(iVar6 + 4);
                iVar7 = FUN_004de100(*(int *)(iVar13 + 8));
              } while (iVar6 != iVar7 + 0x14);
            }
          }
          iVar13 = *(int *)(iVar13 + 4);
        } while (iVar13 != puVar12[2] + 0xb8);
      }
      puVar1 = puVar12 + 1;
      puVar12 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d694);
  }
  piVar9 = (int *)*local_48;
  piVar11 = piVar9;
  if (piVar9 != local_48) {
    while( true ) {
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar2 = (int *)piVar9[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar4 = *(char *)(*piVar2 + 0x15);
          piVar9 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar4 == '\0') {
            cVar4 = *(char *)(*piVar2 + 0x15);
            piVar9 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar4 = *(char *)(piVar9[1] + 0x15);
          piVar3 = (int *)piVar9[1];
          piVar2 = piVar9;
          while ((piVar9 = piVar3, cVar4 == '\0' && (piVar2 == (int *)piVar9[2]))) {
            cVar4 = *(char *)(piVar9[1] + 0x15);
            piVar3 = (int *)piVar9[1];
            piVar2 = piVar9;
          }
        }
      }
      if (piVar9 == local_48) break;
      if ((float)piVar9[4] < (float)piVar11[4]) {
        piVar11 = piVar9;
      }
    }
    if ((piVar11 != local_48) && (iVar13 = piVar11[3], iVar13 != 0)) {
      local_34 = &local_40;
      local_1c = &local_28;
      local_3c = 0;
      local_38 = 0;
      local_40 = &PTR_FUN_00d1aed0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_28 = &PTR_FUN_00d1e55c;
      local_14 = 0;
      local_10 = 1.0 - (float)piVar11[4];
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_0045f4a0((int)&local_40);
      local_2c = iVar13;
      (*(code *)*local_40)();
      uVar5 = GetPlayerStudio();
      (*(code *)local_28[1])();
      local_14 = uVar5;
      (*(code *)*local_28)();
      FUN_00851890(param_1,(int)&local_40);
      FUN_008501c0(&local_40);
    }
  }
  local_4 = 0xffffffff;
  FUN_0086bc50(local_4c,&param_1,(int *)*local_48,local_48);
                    /* WARNING: Subroutine does not return */
  _free(local_48);
}


//// FUNCTION FUN_0086d120 @ 0086d120 ////

void __fastcall FUN_0086d120(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d635e4;
  FUN_00746640(param_1);
  return;
}


//// FUNCTION FUN_0086d190 @ 0086d190 ////

undefined4 * __thiscall FUN_0086d190(void *this,byte param_1)

{
  FUN_0086d120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0086d1b0 @ 0086d1b0 ////

void __thiscall FUN_0086d1b0(void *this,float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *(float *)((int)this + 0xa0);
  fVar1 = *(float *)((int)this + 0xa0);
  fVar2 = *(float *)((int)this + 0xa8);
  fVar3 = *(float *)((int)this + 0xa0);
  fVar4 = *(float *)((int)this + 0x98);
  *param_1 = ((param_2 + (*(float *)((int)this + 0x9c) - *(float *)((int)this + 0xa4))) -
             *(float *)((int)this + 0x9c)) * *(float *)((int)this + 0x94) +
             *(float *)((int)this + 0x9c);
  param_1[1] = ((param_3 + (fVar1 - fVar2)) - fVar3) * fVar4 + fVar5;
  return;
}


//// FUNCTION FUN_0086d240 @ 0086d240 ////

void __thiscall FUN_0086d240(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_009840b0(&local_10,(undefined4 *)(*param_1 + 0x10));
  *(float *)((int)this + 0xac) = local_10;
  *(undefined4 *)((int)this + 0xb0) = local_c;
  puVar2 = (undefined4 *)(*param_1 + 0x1c);
  fVar3 = 1.2381465e-38;
  FUN_009840b0(&local_10,puVar2);
  *(float *)((int)this + 0xb4) = local_10;
  *(undefined4 *)((int)this + 0xb8) = local_c;
  FUN_009840b0(&stack0xffffffe0,(undefined4 *)(*param_1 + 0x10));
  FUN_0086d1b0(this,&local_10,fVar3,(float)puVar2);
  FUN_009840b0(&stack0xffffffe0,(undefined4 *)(*param_1 + 0x1c));
  FUN_0086d1b0(this,&local_8,fVar3,(float)puVar2);
  iVar1 = *param_1;
  *(float *)(iVar1 + 0x10) = local_10;
  *(undefined4 *)(iVar1 + 0x14) = local_c;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar1 = *param_1;
  *(float *)(iVar1 + 0x1c) = local_8;
  *(undefined4 *)(iVar1 + 0x20) = local_4;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  return;
}


//// FUNCTION FUN_0086d300 @ 0086d300 ////

void __thiscall FUN_0086d300(void *this,int param_1)

{
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  FUN_0086d1b0(this,&local_10,*(float *)(param_1 + 8),*(float *)(param_1 + 0xc));
  *(float *)(param_1 + 8) = local_10;
  *(undefined4 *)(param_1 + 0xc) = local_c;
  *(float *)(param_1 + 0x14) = *(float *)((int)this + 0x94) * *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x18) = *(float *)((int)this + 0x98) * *(float *)(param_1 + 0x18);
  if (*(char *)(*(int *)(param_1 + 0x10) + 8) != '\0') {
    *(float *)((int)this + 0xbc) = DAT_0105cb50;
    *(undefined4 *)((int)this + 0xc0) = DAT_0105cb54;
    *(float *)((int)this + 0xc4) = DAT_0105cb58;
    *(undefined4 *)((int)this + 200) = DAT_0105cb5c;
    FUN_0086d1b0(this,&local_10,*(float *)((int)this + 0xbc),*(float *)((int)this + 0xc0));
    FUN_0086d1b0(this,&local_8,*(float *)((int)this + 0xc4),*(float *)((int)this + 200));
    DAT_0105cb50 = local_10;
    DAT_0105cb54 = local_c;
    DAT_0105cb58 = local_8;
    DAT_0105cb5c = local_4;
  }
  return;
}


//// FUNCTION FUN_0086d400 @ 0086d400 ////

void __thiscall FUN_0086d400(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0x98);
  *param_1 = (1.0 / *(float *)((int)this + 0x94)) * *param_1;
  param_1[1] = (1.0 / fVar1) * param_1[1];
  return;
}


//// FUNCTION FUN_0086d450 @ 0086d450 ////

void __thiscall FUN_0086d450(void *this,float *param_1)

{
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0086d1b0(this,&local_10,*param_1,param_1[1]);
  FUN_0086d1b0(this,&local_8,param_1[2],param_1[3]);
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}


//// FUNCTION FUN_0086d4c0 @ 0086d4c0 ////

undefined4 * __thiscall FUN_0086d4c0(void *this,undefined4 param_1)

{
  FUN_00746480(this);
  *(undefined ***)this = &PTR_FUN_00d635e4;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xcc) = param_1;
  *(undefined4 *)((int)this + 0x98) = 0x3f800000;
  *(undefined4 *)((int)this + 0x94) = 0x3f800000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  FUN_004015d0((void *)((int)this + 0x60),"CFlashScaler",0xc);
  return this;
}


//// FUNCTION FUN_0086d680 @ 0086d680 ////

undefined4 __cdecl
FUN_0086d680(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  if (((0.0 < (param_8 - param_4) * (param_5 - param_3) - (param_6 - param_4) * (param_7 - param_3))
      && (0.0 < (param_8 - param_6) * (param_1 - param_5) -
                (param_7 - param_5) * (param_2 - param_6))) &&
     (0.0 < (param_8 - param_2) * (param_3 - param_1) - (param_7 - param_1) * (param_4 - param_2)))
  {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_0086daf0 @ 0086daf0 ////

void __cdecl FUN_0086daf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086db50 @ 0086db50 ////

void __cdecl FUN_0086db50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086dbb0 @ 0086dbb0 ////

void __cdecl FUN_0086dbb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0086dc20 @ 0086dc20 ////

void __cdecl FUN_0086dc20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
  }
  return;
}


//// FUNCTION FUN_0086dc60 @ 0086dc60 ////

void __cdecl FUN_0086dc60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -4;
    param_3 = param_3 + -4;
  }
  return;
}


//// FUNCTION FUN_0086ddb0 @ 0086ddb0 ////

void __thiscall FUN_0086ddb0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  iVar1 = *(int *)((int)this + 0xc);
  iVar2 = param_2[1];
  iVar3 = *(int *)((int)this + 4);
  iVar4 = *param_2;
  iVar5 = param_2[2];
  iVar6 = *(int *)this;
  iVar7 = *(int *)((int)this + 8);
  iVar8 = param_2[3];
  iVar9 = *(int *)((int)this + 0xc);
  iVar10 = param_2[3];
  iVar11 = *(int *)((int)this + 4);
  iVar12 = param_2[2];
  iVar13 = param_2[5];
  iVar14 = *(int *)((int)this + 8);
  iVar15 = param_2[4];
  iVar16 = *(int *)this;
  iVar17 = *(int *)((int)this + 0x10);
  iVar18 = param_2[4];
  iVar19 = *(int *)((int)this + 4);
  iVar20 = param_2[5];
  iVar21 = *(int *)((int)this + 0xc);
  iVar22 = *(int *)((int)this + 0x14);
  *param_1 = (int)ROUND(((float)*(int *)((int)this + 8) * (float)param_2[1] +
                        (float)*param_2 * (float)*(int *)this) * 1.5258789e-05);
  param_1[1] = (int)ROUND(((float)iVar3 * (float)iVar4 + (float)iVar1 * (float)iVar2) *
                          1.5258789e-05);
  param_1[2] = (int)ROUND(((float)iVar7 * (float)iVar8 + (float)iVar5 * (float)iVar6) *
                          1.5258789e-05);
  param_1[3] = (int)ROUND(((float)iVar11 * (float)iVar12 + (float)iVar9 * (float)iVar10) *
                          1.5258789e-05);
  param_1[4] = (int)ROUND(((float)iVar15 * (float)iVar16 + (float)iVar13 * (float)iVar14) *
                          1.5258789e-05 + (float)iVar17);
  param_1[5] = (int)ROUND(((float)iVar20 * (float)iVar21 + (float)iVar18 * (float)iVar19) *
                          1.5258789e-05 + (float)iVar22);
  return;
}


//// FUNCTION FUN_0086deb0 @ 0086deb0 ////

void __thiscall
FUN_0086deb0(void *this,float param_1,float param_2,undefined4 param_3,undefined4 param_4,
            float param_5,float param_6,int param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float local_8;
  float local_4;
  
  local_8 = param_1;
  local_4 = param_2;
  if (*(char *)this != '\0') {
    local_4 = (float)*(int *)((int)this + 0x14) * 1.5258789e-05 *
              (float)*(int *)((int)this + 8) * 1.5258789e-05 -
              (float)*(int *)((int)this + 0x10) * 1.5258789e-05 *
              (float)*(int *)((int)this + 0xc) * 1.5258789e-05;
    if (local_4 != 0.0) {
      local_4 = 1.0 / local_4;
    }
    fVar2 = param_1 - (float)*(int *)((int)this + 0x18);
    fVar1 = param_2 - (float)*(int *)((int)this + 0x1c);
    local_8 = ((float)*(int *)((int)this + 0x14) * fVar2 * 1.5258789e-05 +
              (float)-*(int *)((int)this + 0xc) * fVar1 * 1.5258789e-05) * local_4;
    local_4 = ((float)*(int *)((int)this + 8) * fVar1 * 1.5258789e-05 +
              (float)-*(int *)((int)this + 0x10) * fVar2 * 1.5258789e-05) * local_4;
  }
  switch(*(char *)this) {
  case '\x10':
    break;
  default:
    *(undefined4 *)(param_7 + 0xc) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)(param_7 + 0x14) = 0;
    *(undefined4 *)(param_7 + 0x10) = 0;
  case '\x12':
    return;
  case '@':
  case 'A':
    *(undefined4 *)(param_7 + 0xc) = 0xffffffff;
    *(float *)(param_7 + 0x10) = local_8 / param_5;
    *(float *)(param_7 + 0x14) = local_4 / param_6;
    return;
  }
  iVar3 = 0;
  param_5 = 0.0;
  if (*(byte *)((int)this + 0x20) != 0) {
    pfVar4 = (float *)((int)this + 0x24);
    do {
      if (local_8 <= *pfVar4) {
        if (iVar3 == 0) {
          param_5 = *(float *)((int)this + 0x28);
        }
        else {
          param_5 = *(float *)((int)this + iVar3 * 8 + 0x20);
        }
        break;
      }
      iVar3 = iVar3 + 1;
      pfVar4 = pfVar4 + 2;
    } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x20));
  }
  *(undefined4 *)(param_7 + 0x14) = 0;
  *(undefined4 *)(param_7 + 0x10) = 0;
  *(float *)(param_7 + 0xc) = param_5;
  return;
}


//// FUNCTION FUN_0086e090 @ 0086e090 ////

void FUN_0086e090(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce94bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_01050110 = (void *)0x0;
  }
  else {
    DAT_01050110 = (void *)FUN_009910f0(puVar1);
  }
  *(undefined1 *)((int)DAT_01050110 + 0xc) = 6;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0xbfffffff;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0x7fffffff;
  *(uint *)((int)DAT_01050110 + 0x14) = *(uint *)((int)DAT_01050110 + 0x14) & 0xfffffffe;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x8000000;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x10000000;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) & 0xfeffffff;
  *(uint *)((int)DAT_01050110 + 0x10) = *(uint *)((int)DAT_01050110 + 0x10) | 0x2000000;
  local_4 = 0xffffffff;
  if (*(int *)((int)DAT_01050110 + 0x18) != 0) {
    Engine_SetResourceReference(DAT_01050110,0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0086e150 @ 0086e150 ////

void FUN_0086e150(void)

{
  void *_Memory;
  
  _Memory = DAT_01050110;
  if (DAT_01050110 != (void *)0x0) {
    FUN_00990ec0((int)DAT_01050110);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_01050110 = (void *)0x0;
  return;
}


//// FUNCTION FUN_0086e470 @ 0086e470 ////

void __cdecl FUN_0086e470(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0086e590 @ 0086e590 ////

void __cdecl FUN_0086e590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e5d0 @ 0086e5d0 ////

void __cdecl FUN_0086e5d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e670 @ 0086e670 ////

void __fastcall FUN_0086e670(int param_1)

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


//// FUNCTION FUN_0086e6b0 @ 0086e6b0 ////

void FUN_0086e6b0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_0086e710 @ 0086e710 ////

void __thiscall FUN_0086e710(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_0086e750 @ 0086e750 ////

void __thiscall FUN_0086e750(void *this,undefined *param_1)

{
  int *piVar1;
  int *_Memory;
  int *piVar2;
  char cVar3;
  
  piVar1 = *(int **)((int)this + 4);
  piVar2 = (int *)*piVar1;
  do {
    while( true ) {
      _Memory = piVar2;
      if (_Memory == piVar1) {
        return;
      }
      cVar3 = (*(code *)param_1)(_Memory + 2);
      if (cVar3 != '\0') break;
      piVar2 = (int *)*_Memory;
    }
    piVar2 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0086e7f0 @ 0086e7f0 ////

void * FUN_0086e7f0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0086e820 @ 0086e820 ////

void __cdecl FUN_0086e820(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e860 @ 0086e860 ////

void __cdecl FUN_0086e860(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}


//// FUNCTION FUN_0086e940 @ 0086e940 ////

float10 __cdecl FUN_0086e940(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 8) - iVar3 >> 4;
  }
  fVar9 = (float10)0.0;
  iVar5 = 0;
  iVar8 = iVar6 + -1;
  if (3 < iVar6) {
    iVar7 = iVar8 * 0x10;
    pfVar4 = (float *)(iVar3 + 0x24);
    do {
      pfVar1 = (float *)(iVar7 + iVar3);
      iVar8 = iVar5 + 3;
      iVar5 = iVar5 + 4;
      iVar2 = iVar7 + 4;
      iVar7 = (int)pfVar4 + (0xc - iVar3);
      fVar9 = ((float10)pfVar4[4] * (float10)pfVar4[-1] - (float10)pfVar4[3] * (float10)*pfVar4) +
              ((float10)pfVar4[-5] * (float10)*pfVar4 - (float10)pfVar4[-1] * (float10)pfVar4[-4]) +
              ((float10)pfVar4[-9] * (float10)pfVar4[-4] - (float10)pfVar4[-5] * (float10)pfVar4[-8]
              ) + ((float10)*pfVar1 * (float10)pfVar4[-8] -
                  (float10)*(float *)(iVar2 + iVar3) * (float10)pfVar4[-9]) + fVar9;
      pfVar4 = pfVar4 + 0x10;
    } while (iVar5 < iVar6 + -3);
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar6 - iVar5;
    iVar5 = iVar5 << 4;
    iVar8 = iVar8 << 4;
    do {
      iVar7 = iVar5;
      iVar6 = iVar6 + -1;
      fVar9 = ((float10)*(float *)(iVar3 + 4 + iVar7) * (float10)*(float *)(iVar3 + iVar8) -
              (float10)*(float *)(iVar3 + iVar7) * (float10)*(float *)(iVar3 + 4 + iVar8)) + fVar9;
      iVar5 = iVar7 + 0x10;
      iVar8 = iVar7;
    } while (iVar6 != 0);
  }
  return fVar9 * (float10)0.5;
}


//// FUNCTION FUN_0086ea20 @ 0086ea20 ////

undefined4 __cdecl
FUN_0086ea20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  int extraout_ECX;
  int extraout_EDX;
  int iVar10;
  
  iVar10 = *(int *)(param_1 + 4);
  iVar8 = *(int *)(param_6 + param_2 * 4) * 0x10;
  fVar1 = *(float *)(iVar8 + iVar10);
  fVar2 = *(float *)(iVar8 + iVar10 + 4);
  iVar8 = *(int *)(param_6 + param_3 * 4) * 0x10;
  fVar3 = *(float *)(iVar8 + iVar10);
  fVar4 = *(float *)(iVar8 + iVar10 + 4);
  iVar8 = *(int *)(param_6 + param_4 * 4) * 0x10;
  fVar5 = *(float *)(iVar8 + iVar10);
  fVar6 = *(float *)(iVar8 + iVar10 + 4);
  fVar7 = (fVar3 - fVar1) * (fVar6 - fVar2) - (fVar5 - fVar1) * (fVar4 - fVar2);
  if (fVar7 < 0.001) {
    return CONCAT22((short)((uint)fVar6 >> 0x10),
                    (ushort)(fVar7 < 0.001) << 8 | (ushort)NAN(fVar7) << 10 |
                    (ushort)(fVar7 == 0.001) << 0xe);
  }
  iVar8 = 0;
  if (0 < param_5) {
    do {
      if ((((iVar8 != param_2) && (iVar8 != param_3)) && (iVar8 != param_4)) &&
         (iVar8 = *(int *)(param_6 + iVar8 * 4) * 0x10,
         uVar9 = FUN_0086d680(fVar1,fVar2,fVar3,fVar4,fVar5,fVar6,*(float *)(iVar8 + iVar10),
                              *(float *)(iVar8 + 4 + iVar10)), iVar8 = extraout_ECX,
         iVar10 = extraout_EDX, (char)uVar9 != '\0')) {
        return uVar9 & 0xffffff00;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_5);
  }
  return CONCAT31((int3)((uint)param_5 >> 8),1);
}


//// FUNCTION FUN_0086eb40 @ 0086eb40 ////

ulonglong __fastcall FUN_0086eb40(int param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  float10 extraout_ST0;
  ulonglong uVar5;
  ulonglong uVar6;
  float *in_stack_00000018;
  float *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  float local_48;
  float local_28;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar4 = (int *)*piVar3;
  local_48 = -1.0;
  if (piVar4 != piVar3) {
    do {
      fVar1 = (*(float *)piVar4[5] - *(float *)piVar4[4]) * 0.0 -
              (((float *)piVar4[5])[1] - ((float *)piVar4[4])[1]);
      if ((fVar1 != 0.0) && ((float)piVar4[3] == param_3[3])) {
        FUN_00acd42c();
        FUN_00acd42c();
        uVar5 = FUN_00acd42c();
        uVar6 = FUN_00acd42c();
        param_2 = (float)(uVar6 >> 0x20);
        fVar1 = (float)((int)uVar6 - (int)uVar5) / fVar1;
        if ((((float10)0.0 < extraout_ST0) && ((0.0 <= fVar1 && (fVar1 < 1.0 != (fVar1 == 1.0)))))
           && ((extraout_ST0 < (float10)local_48 || (local_48 < 0.0)))) {
          local_48 = (float)extraout_ST0;
          *in_stack_00000020 = piVar4;
          fVar2 = param_3[3];
          fVar1 = param_3[1];
          *in_stack_00000018 = (float)(extraout_ST0 + (float10)*param_3);
          in_stack_00000018[1] = (float)(extraout_ST0 * (float10)0.0) + fVar1;
          in_stack_00000018[2] = local_28;
          in_stack_00000018[3] = fVar2;
          param_2 = local_28;
        }
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_1 + 4));
    piVar3 = (int *)CONCAT22((short)((uint)param_1 >> 0x10),
                             (ushort)(local_48 < 0.0) << 8 | (ushort)NAN(local_48) << 10 |
                             (ushort)(local_48 == 0.0) << 0xe);
    if (local_48 >= 0.0) {
      *in_stack_0000001c = local_48;
      return CONCAT44(param_2,CONCAT31((int3)((uint)piVar3 >> 8),1));
    }
  }
  return CONCAT44(param_2,piVar3) & 0xffffffffffffff00;
}


//// FUNCTION FUN_0086ed00 @ 0086ed00 ////

void __fastcall FUN_0086ed00(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  
  fVar2 = 0.0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4);
      puVar1 != *(undefined4 **)(param_1 + 4); puVar1 = (undefined4 *)*puVar1) {
    fVar2 = fVar2 - (((float *)puVar1[5])[1] * *(float *)puVar1[4] -
                    ((float *)puVar1[4])[1] * *(float *)puVar1[5]);
  }
  *(float *)(param_1 + 0x30) = fVar2 * 0.5;
  return;
}


//// FUNCTION FUN_0086ed60 @ 0086ed60 ////

uint __thiscall FUN_0086ed60(void *this,float param_1,float param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 4);
  uVar8 = 0;
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 4)) {
      return uVar8 & 1;
    }
    pfVar2 = (float *)puVar1[4];
    fVar3 = *(float *)puVar1[5] - *pfVar2;
    fVar4 = ((float *)puVar1[5])[1] - pfVar2[1];
    fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
    if ((param_1 - *pfVar2) * (param_1 - *pfVar2) + (param_2 - pfVar2[1]) * (param_2 - pfVar2[1]) <
        9.999999e-09) break;
    if (9.999999e-09 < fVar5) {
      fVar7 = -fVar3;
      fVar6 = fVar7 * 0.0 + fVar4;
      if (0.0001 < ABS(fVar6)) {
        fVar6 = (((pfVar2[1] * fVar7 + *pfVar2 * fVar4) - param_1 * fVar4) - param_2 * fVar7) /
                fVar6;
        fVar5 = (((fVar6 * 0.0 + param_2) - pfVar2[1]) * fVar4 +
                ((fVar6 + param_1) - *pfVar2) * fVar3) / fVar5;
        if ((0.0 <= fVar5) && (fVar5 < 1.0)) {
          if (ABS(fVar6) < 0.0001) {
            return 1;
          }
          if (0.0 < fVar6) {
            uVar8 = uVar8 + 1;
          }
        }
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  return 1;
}


//// FUNCTION FUN_0086eef0 @ 0086eef0 ////

void __fastcall FUN_0086eef0(int param_1)

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


//// FUNCTION FUN_0086ef20 @ 0086ef20 ////

undefined4 * FUN_0086ef20(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0086f0a0 @ 0086f0a0 ////

void __fastcall FUN_0086f0a0(int param_1)

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


//// FUNCTION FUN_0086f0d0 @ 0086f0d0 ////

undefined4 * FUN_0086f0d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0086e820(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0086f100 @ 0086f100 ////

undefined4 * FUN_0086f100(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0086e860(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0086f150 @ 0086f150 ////

void __fastcall FUN_0086f150(int param_1)

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


//// FUNCTION FUN_0086f180 @ 0086f180 ////

void __fastcall FUN_0086f180(int param_1)

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


