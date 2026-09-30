//// FUNCTION FUN_00a34470 @ 00a34470 ////

undefined2 __fastcall FUN_00a34470(int *param_1)

{
  undefined2 uVar1;
  
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    do {
      if (*param_1 == 0) {
        return 0;
      }
      FUN_00a343e0(*param_1);
      param_1 = (int *)*param_1;
    } while ((uint)param_1[2] <= (uint)param_1[1]);
  }
  uVar1 = *(undefined2 *)((int)param_1 + param_1[1] * 2 + 0xc);
  param_1[1] = param_1[1] + 1;
  return uVar1;
}


//// FUNCTION FUN_00a344b0 @ 00a344b0 ////

void __fastcall FUN_00a344b0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00d7747c;
  local_4 = 0;
  FUN_00a34260(param_1);
  *param_1 = (int)&PTR_LAB_00d77450;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a34500 @ 00a34500 ////

undefined4 __fastcall FUN_00a34500(int param_1)

{
  undefined4 *puVar1;
  MMRESULT MVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa768;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00a341c0(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  puVar1 = DAT_010bb1f8;
  uStack_4 = 0;
  if (DAT_010bb1f8 != (undefined4 *)0x0) {
    FUN_00a34350(DAT_010bb1f8);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  DAT_010bb1f8 = (undefined4 *)0x0;
  puVar1 = operator_new(0xd755c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    DAT_010bb1fc = puVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  }
  DAT_010bb1f8 = puVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010bb208);
  DAT_010bb1f0 = 1;
  MVar2 = waveInStart(*(HWAVEIN *)(param_1 + 0x48));
  ExceptionList = pvStack_c;
  return CONCAT31((int3)(MVar2 >> 8),1);
}


//// FUNCTION FUN_00a345d0 @ 00a345d0 ////

void __fastcall FUN_00a345d0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa788;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x58));
}


//// FUNCTION FUN_00a34770 @ 00a34770 ////

int * __thiscall FUN_00a34770(void *this,byte param_1)

{
  FUN_00a344b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a34790 @ 00a34790 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_00a34790(DWORD_PTR param_1)

{
  LPHWAVEIN phwi;
  ushort uVar1;
  MMRESULT MVar2;
  uint uVar3;
  HGLOBAL hMem;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_34;
  tagWAVEINCAPSA local_30;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  MVar2 = waveInGetDevCapsA(0xffffffff,&local_30,0x30);
  if (MVar2 != 0) {
    return MVar2 & 0xffffff00;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((local_30.dwFormats & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = 0x2b11;
    *(undefined2 *)(param_1 + 0x12) = 8;
  }
  if ((local_30.dwFormats & 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0x5622;
    *(undefined2 *)(param_1 + 0x12) = 8;
  }
  if ((local_30.dwFormats & 0x100) != 0) {
    *(undefined4 *)(param_1 + 8) = 0xac44;
    *(undefined2 *)(param_1 + 0x12) = 8;
  }
  if ((local_30.dwFormats & 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0x2b11;
    *(undefined2 *)(param_1 + 0x12) = 0x10;
  }
  if ((local_30.dwFormats & 0x40) != 0) {
    *(undefined4 *)(param_1 + 8) = 0x5622;
    *(undefined2 *)(param_1 + 0x12) = 0x10;
  }
  if ((local_30.dwFormats & 0x400) != 0) {
    *(undefined4 *)(param_1 + 8) = 0xac44;
    *(undefined2 *)(param_1 + 0x12) = 0x10;
  }
  uVar1 = *(ushort *)(param_1 + 0x12);
  iVar5 = *(int *)(param_1 + 8);
  phwi = (LPHWAVEIN)(param_1 + 0x48);
  ((LPCWAVEFORMATEX)(param_1 + 4))->wFormatTag = 1;
  *(undefined2 *)(param_1 + 6) = 1;
  *(uint *)(param_1 + 0xc) = (uint)(uVar1 >> 3) * iVar5;
  *(ushort *)(param_1 + 0x10) = uVar1 >> 3;
  *(undefined2 *)(param_1 + 0x14) = 0;
  uVar3 = waveInOpen(phwi,0xffffffff,(LPCWAVEFORMATEX)(param_1 + 4),0xa346d0,param_1,0x30000);
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    DAT_010bb1f4 = 0;
    local_34 = 0;
    DAT_010bb1f0 = 0;
    _DAT_010bb204 = 0;
    piVar6 = (int *)(param_1 + 0x4c);
    while( true ) {
      iVar5 = *(int *)(param_1 + 8) * 2;
      hMem = GlobalAlloc(0x40,iVar5 + 0x20);
      piVar4 = GlobalLock(hMem);
      *piVar6 = (int)piVar4;
      uVar3 = 0;
      if (piVar4 == (int *)0x0) break;
      *piVar4 = (int)(piVar4 + 8);
      *(int *)(*piVar6 + 4) = iVar5;
      waveInPrepareHeader(*phwi,(LPWAVEHDR)*piVar6,0x20);
      waveInAddBuffer(*phwi,(LPWAVEHDR)*piVar6,0x20);
      local_34 = local_34 + 1;
      piVar6 = piVar6 + 1;
      if (1 < local_34) {
        return CONCAT31((int3)(local_34 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a34900 @ 00a34900 ////

undefined4 * FUN_00a34900(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = operator_new(0x60);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_00d7747c;
  }
  uVar2 = FUN_00a34790((DWORD_PTR)puVar1);
  if ((char)uVar2 == '\0') {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    return (undefined4 *)0x0;
  }
  return puVar1;
}


//// FUNCTION FUN_00a34980 @ 00a34980 ////

uint __thiscall FUN_00a34980(void *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    iVar3 = _tolower((int)cVar2);
    uVar4 = uVar4 * 0x17 + iVar3;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return uVar4 % *(uint *)((int)this + 4);
}


//// FUNCTION FUN_00a349c0 @ 00a349c0 ////

int __thiscall FUN_00a349c0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  pcVar4 = param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if ((('@' < cVar1) && (cVar1 < '[')) || (('`' < cVar1 && (cVar1 < '{')))) break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 1;
  }
  iVar2 = __stricmp(param_1,"NONE");
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = __stricmp(param_1,"DEFAULT");
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x838)) {
    pcVar4 = (char *)((int)this + 0x38);
    do {
      iVar3 = __stricmp(param_1,pcVar4);
      if (iVar3 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0x20;
    } while (iVar2 < *(int *)((int)this + 0x838));
  }
  pcVar4 = (char *)(*(int *)((int)this + 0x838) * 0x20 + 0x38 + (int)this);
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  *(int *)((int)this + 0x838) = *(int *)((int)this + 0x838) + 1;
  return iVar2;
}


//// FUNCTION FUN_00a34b00 @ 00a34b00 ////

uint __thiscall FUN_00a34b00(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x850) < (int)(*(int *)((int)this + 0x854) + param_2)) {
    return 0;
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(uint *)((int)this + 0x854) = *(int *)((int)this + 0x854) + param_2;
  return param_2;
}


//// FUNCTION FUN_00a34b80 @ 00a34b80 ////

void __cdecl FUN_00a34b80(short *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_00ace02d(param_1);
  if (iVar1 != 0) {
    do {
      if (param_1[uVar3] == 0x2019) {
        param_1[uVar3] = (short)DAT_00e692b8;
      }
      if (param_1[uVar3] == -3) {
        param_1[uVar3] = (short)DAT_00e692b8;
      }
      if ((param_1[uVar3] == 0x201c) || (param_1[uVar3] == 0x201d)) {
        param_1[uVar3] = (short)DAT_00e692bc;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_00ace02d(param_1);
    } while (uVar3 < uVar2);
  }
  return;
}


//// FUNCTION FUN_00a34bf0 @ 00a34bf0 ////

int __fastcall FUN_00a34bf0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_00a34eb0 @ 00a34eb0 ////

void __thiscall FUN_00a34eb0(void *this,int *param_1)

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


//// FUNCTION FUN_00a34f90 @ 00a34f90 ////

void __cdecl FUN_00a34f90(int param_1)

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


//// FUNCTION FUN_00a34fb0 @ 00a34fb0 ////

void __cdecl FUN_00a34fb0(int *param_1)

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


//// FUNCTION FUN_00a34fe0 @ 00a34fe0 ////

void __fastcall FUN_00a34fe0(int *param_1)

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


//// FUNCTION FUN_00a35040 @ 00a35040 ////

void __fastcall FUN_00a35040(int *param_1)

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


//// FUNCTION FUN_00a35130 @ 00a35130 ////

void __cdecl FUN_00a35130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_00a351f0 @ 00a351f0 ////

void __cdecl FUN_00a351f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a354b0 @ 00a354b0 ////

void __thiscall FUN_00a354b0(void *this,int param_1)

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


//// FUNCTION FUN_00a35510 @ 00a35510 ////

int * __fastcall FUN_00a35510(int *param_1)

{
  FUN_00a35040(param_1);
  return param_1;
}


//// FUNCTION FUN_00a35520 @ 00a35520 ////

int * __fastcall FUN_00a35520(int *param_1)

{
  FUN_00a34fe0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a35610 @ 00a35610 ////

void __thiscall FUN_00a35610(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa7d0;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x850) = 0;
  *(undefined4 *)((int)this + 0x84c) = 0;
  *(undefined4 *)((int)this + 0x854) = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  uVar3 = FUN_009d3720(&local_2c);
  *(uint *)((int)this + 0x850) = uVar3;
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0 < (int)*(uint *)((int)this + 0x850)) {
    pvVar4 = operator_new(*(uint *)((int)this + 0x850));
    *(void **)((int)this + 0x84c) = pvVar4;
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,param_1,(int)pcVar2 - (int)(param_1 + 1));
    local_4 = 1;
    FUN_009d3ca0(&local_2c,*(undefined4 **)((int)this + 0x84c),*(size_t *)((int)this + 0x850),
                 (undefined1 *)0x0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a35800 @ 00a35800 ////

int * __fastcall FUN_00a35800(int *param_1)

{
  FUN_00a35040(param_1);
  return param_1;
}


//// FUNCTION FUN_00a35810 @ 00a35810 ////

int * __fastcall FUN_00a35810(int *param_1)

{
  FUN_00a34fe0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a35820 @ 00a35820 ////

void FUN_00a35820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_00a35890 @ 00a35890 ////

void FUN_00a35890(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_00a35890(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a35930 @ 00a35930 ////

void __cdecl FUN_00a35930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a35970 @ 00a35970 ////

void __cdecl FUN_00a35970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a359d0 @ 00a359d0 ////

void __thiscall FUN_00a359d0(void *this,undefined4 *param_1,int *param_2)

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


//// FUNCTION FUN_00a35a50 @ 00a35a50 ////

void __fastcall FUN_00a35a50(int param_1)

{
  FUN_00a35890(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a35a80 @ 00a35a80 ////

void FUN_00a35a80(void)

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


//// FUNCTION FUN_00a35b00 @ 00a35b00 ////

void __cdecl FUN_00a35b00(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a35b70 @ 00a35b70 ////

undefined4 * __cdecl FUN_00a35b70(undefined4 *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  size_t _MaxCount;
  char *local_26c;
  uint local_268;
  uint local_264;
  char local_260 [20];
  undefined1 *local_24c;
  undefined4 local_248;
  uint local_244;
  undefined1 local_240 [20];
  undefined4 local_22c;
  void *local_228 [2];
  uint local_220;
  char local_208 [260];
  char local_104 [260];
  
  local_26c = local_260;
  local_22c = 0;
  local_260[0] = '\0';
  local_268 = 0;
  local_264 = 0x14;
  __splitpath(param_2,(char *)0x0,(char *)0x0,local_208,(char *)0x0);
  __splitpath(param_3,(char *)0x0,(char *)0x0,local_104,(char *)0x0);
  pcVar2 = local_208;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = local_104;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  _MaxCount = (int)pcVar5 - (int)(local_104 + 1);
  if ((int)_MaxCount < (int)pcVar2 - (int)(local_208 + 1)) {
    iVar3 = __strnicmp(local_208,local_104,_MaxCount);
    if (iVar3 == 0) {
      local_24c = local_240;
      local_240[0] = 0;
      local_248 = 0;
      local_244 = 0x14;
      iVar3 = (local_208[_MaxCount] == '_') + _MaxCount;
      pcVar2 = local_208 + iVar3;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(&local_24c,local_208 + iVar3,(int)pcVar2 - (int)(local_208 + iVar3 + 1));
      puVar4 = FUN_004312e0(local_228,&local_24c,"_");
      FUN_004015d0(&local_26c,(char *)*puVar4,puVar4[1]);
      if (0x14 < local_220) {
                    /* WARNING: Subroutine does not return */
        _free(local_228[0]);
      }
      if (0x14 < local_244) {
                    /* WARNING: Subroutine does not return */
        _free(local_24c);
      }
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_26c,local_268);
  if (0x14 < local_264) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  return param_1;
}


//// FUNCTION FUN_00a35cf0 @ 00a35cf0 ////

int __thiscall FUN_00a35cf0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00a34980(this,param_1);
  iVar3 = uVar2 * 0x10 + *(int *)this;
  for (uVar2 = 0;
      (iVar1 = *(int *)(iVar3 + 4), iVar1 != 0 && (uVar2 < (uint)(*(int *)(iVar3 + 8) - iVar1 >> 2))
      ); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(iVar1 + uVar2 * 4);
    iVar4 = __stricmp(*(char **)(*(int *)((int)this + 0x1c) + iVar1 * 0x14),param_1);
    if (iVar4 == 0) {
      return iVar1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00a35d60 @ 00a35d60 ////

int __thiscall FUN_00a35d60(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)((int)this + 0x1c) != 0)) &&
     (param_1 < (uint)((*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x14))) {
    iVar1 = *(int *)((int)this + 0x1c) + param_1 * 0x14;
    iVar2 = *(int *)(iVar1 + 8);
    if (iVar2 != 0) {
      return *(int *)(iVar1 + 0xc) - iVar2 >> 2;
    }
  }
  return 0;
}


//// FUNCTION FUN_00a35db0 @ 00a35db0 ////

undefined4 __thiscall FUN_00a35db0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int *)((int)this + 0x1c) != 0)) &&
     (param_1 < (uint)((*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x14))) {
    iVar2 = *(int *)(*(int *)((int)this + 0x1c) + 8 + param_1 * 0x14);
    iVar1 = *(int *)((int)this + 0x1c) + param_1 * 0x14;
    if ((iVar2 != 0) && (param_2 < (uint)(*(int *)(iVar1 + 0xc) - iVar2 >> 2))) {
      return *(undefined4 *)(*(int *)(iVar1 + 8) + param_2 * 4);
    }
  }
  return 0;
}


//// FUNCTION FUN_00a35e10 @ 00a35e10 ////

uint __thiscall FUN_00a35e10(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0x1c) + param_1 * 0x14;
  piVar2 = *(int **)(iVar1 + 8);
  while( true ) {
    if (piVar2 == *(int **)(iVar1 + 0xc)) {
      return (uint)piVar2 & 0xffffff00;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION FUN_00a35e50 @ 00a35e50 ////

undefined4 __thiscall FUN_00a35e50(void *this,int param_1)

{
  return *(undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x2c) + 8);
}


//// FUNCTION FUN_00a35e70 @ 00a35e70 ////

undefined4 __thiscall FUN_00a35e70(void *this,int param_1)

{
  return *(undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x2c) + 4);
}


//// FUNCTION FUN_00a35e90 @ 00a35e90 ////

int __thiscall FUN_00a35e90(void *this,int param_1)

{
  return *(int *)(param_1 * 0x10 + *(int *)((int)this + 0x2c) + 0xc) * 0x20 + 0x38 + (int)this;
}


//// FUNCTION FUN_00a35eb0 @ 00a35eb0 ////

int __thiscall FUN_00a35eb0(void *this,char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = FUN_00a34980((int *)((int)this + 0xc),param_1);
  iVar3 = uVar2 * 0x10 + *(int *)((int)this + 0xc);
  for (uVar2 = 0;
      (iVar1 = *(int *)(iVar3 + 4), iVar1 != 0 && (uVar2 < (uint)(*(int *)(iVar3 + 8) - iVar1 >> 2))
      ); uVar2 = uVar2 + 1) {
    iVar1 = *(int *)(iVar1 + uVar2 * 4);
    iVar4 = __stricmp(*(char **)(iVar1 * 0x10 + 4 + *(int *)((int)this + 0x2c)),param_1);
    if (iVar4 == 0) {
      return iVar1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00a35f20 @ 00a35f20 ////

undefined4 __thiscall FUN_00a35f20(void *this,int param_1)

{
  return *(undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x2c));
}


//// FUNCTION FUN_00a35f40 @ 00a35f40 ////

void __thiscall FUN_00a35f40(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0x2c)) = param_2;
  return;
}


//// FUNCTION FUN_00a35f60 @ 00a35f60 ////

void __fastcall FUN_00a35f60(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0x10;
  for (uVar3 = 1;
      (iVar1 = *(int *)(param_1 + 0x2c), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x30) - iVar1 >> 4))); uVar3 = uVar3 + 1) {
    FUN_009b6f40(*(char **)(iVar1 + 4 + iVar2),*(wchar_t **)(iVar1 + 8 + iVar2));
    iVar2 = iVar2 + 0x10;
  }
  return;
}


//// FUNCTION FUN_00a35fc0 @ 00a35fc0 ////

void __fastcall FUN_00a35fc0(int param_1)

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


//// FUNCTION FUN_00a35ff0 @ 00a35ff0 ////

void __fastcall FUN_00a35ff0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a35a80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a36100 @ 00a36100 ////

void __fastcall FUN_00a36100(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_0040e290);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00a36140 @ 00a36140 ////

void __fastcall FUN_00a36140(int param_1)

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


//// FUNCTION FUN_00a36170 @ 00a36170 ////

uint __thiscall FUN_00a36170(void *this,char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a35cf0(this,param_1);
  piVar2 = *(int **)(*(int *)((int)this + 0x1c) + 8 + iVar1 * 0x14);
  while( true ) {
    if (piVar2 == *(int **)(*(int *)((int)this + 0x1c) + iVar1 * 0x14 + 0xc)) {
      return (uint)piVar2 & 0xffffff00;
    }
    if (*piVar2 == param_2) break;
    piVar2 = piVar2 + 1;
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION FUN_00a361b0 @ 00a361b0 ////

void __fastcall FUN_00a361b0(int param_1)

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


//// FUNCTION FUN_00a361e0 @ 00a361e0 ////

void __fastcall FUN_00a361e0(int param_1)

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


//// FUNCTION FUN_00a36210 @ 00a36210 ////

undefined4 * FUN_00a36210(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a35b00(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_00a36240 @ 00a36240 ////

int __fastcall FUN_00a36240(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a35a80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a36270 @ 00a36270 ////

void * __thiscall FUN_00a36270(void *this,byte param_1)

{
  FUN_00a36140((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a362a0 @ 00a362a0 ////

void FUN_00a362a0(void)

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
  puStack_8 = &LAB_00cfa7e8;
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


//// FUNCTION FUN_00a36310 @ 00a36310 ////

void FUN_00a36310(void)

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
  puStack_8 = &LAB_00cfa808;
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


//// FUNCTION FUN_00a36380 @ 00a36380 ////

void __thiscall FUN_00a36380(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfa820;
  local_10 = ExceptionList;
  local_24 = *param_3;
  local_20 = param_3[1];
  local_1c = param_3[2];
  local_18 = param_3[3];
  iVar7 = *(int *)((int)this + 4);
  local_14 = &stack0xffffffd0;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar7 >> 4;
  }
  uVar8 = CONCAT44(iVar7,iVar2);
  if (param_2 != 0) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar8 = FUN_00a362a0();
      puVar1 = local_14;
    }
    local_14 = puVar1;
    iVar7 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar7 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
    }
    if (uVar3 < iVar2 + param_2) {
      if (0xfffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar7 >> 4;
      }
      if (uVar3 < iVar2 + param_2) {
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)((int)this + 8) - iVar7 >> 4;
        }
        uVar3 = iVar7 + param_2;
      }
      puVar4 = operator_new(uVar3 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00a35970(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00a35b00(puVar5,param_2,&local_24);
      FUN_00a35970(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar3 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar7) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_00a35970(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_00a36210(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_00a35130(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00a35970(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00a351f0(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_00a35130(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a365f0 @ 00a365f0 ////

void __thiscall
FUN_00a365f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfa838;
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
  piVar3 = (int *)FUN_00a35820(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_00a366eb:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a354b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_00a34eb0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_00a366eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a34eb0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00a354b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00a367a0 @ 00a367a0 ////

void __thiscall FUN_00a367a0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfa858;
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
  FUN_00a35040((int *)&param_2);
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
      goto LAB_00a36911;
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
      piVar2 = (int *)FUN_00a34fb0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_00a34f90((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a36911:
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
            FUN_00a354b0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_00a34eb0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_00a354b0(this,(int)piVar5);
              break;
            }
LAB_00a369d4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_00a34eb0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_00a369d4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_00a354b0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_00a34eb0(this,piVar5);
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


//// FUNCTION FUN_00a36a70 @ 00a36a70 ////

void __thiscall FUN_00a36a70(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cfa870;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xfffffff < param_1) {
    ExceptionList = &local_10;
    param_1 = FUN_00a362a0();
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 4;
  }
  if (uVar2 < param_1) {
    puVar1 = operator_new(param_1 * 0x10);
    local_8 = 0;
    FUN_00a35930(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar1);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar1 + param_1 * 4;
    *(undefined4 **)((int)this + 8) = puVar1;
    *(undefined4 **)((int)this + 4) = puVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a36c30 @ 00a36c30 ////

void __thiscall FUN_00a36c30(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_00a365f0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00a34fe0((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_00a365f0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a36cf0 @ 00a36cf0 ////

void __thiscall FUN_00a36cf0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a35890((void *)piVar6[1]);
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
    FUN_00a367a0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a36db0 @ 00a36db0 ////

void * __thiscall FUN_00a36db0(void *this,void *param_1)

{
  void *_Memory;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (this == param_1) {
    return this;
  }
  pvVar2 = *(void **)((int)param_1 + 4);
  if (pvVar2 != (void *)0x0) {
    uVar4 = *(int *)((int)param_1 + 8) - (int)pvVar2 >> 2;
    if (uVar4 != 0) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar4 <= uVar5) {
        _memmove(_Memory,pvVar2,(*(int *)((int)param_1 + 8) - (int)pvVar2 >> 2) << 2);
        if (*(int *)((int)param_1 + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2) * 4;
        return this;
      }
      if (_Memory == (void *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar5 < uVar4) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)param_1 + 4) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4) >> 2;
        }
        uVar3 = FUN_0040eb20(this,uVar4);
        if ((char)uVar3 == '\0') {
          return this;
        }
        pvVar2 = FUN_0040d790(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
                              *(void **)((int)this + 4));
        *(void **)((int)this + 8) = pvVar2;
        return this;
      }
      if (_Memory == (void *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      pvVar2 = (void *)((int)*(void **)((int)param_1 + 4) + iVar1 * 4);
      FUN_0040cf20(*(void **)((int)param_1 + 4),(int)pvVar2,_Memory);
      pvVar2 = FUN_0040d790(pvVar2,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
      *(void **)((int)this + 8) = pvVar2;
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


//// FUNCTION FUN_00a36f50 @ 00a36f50 ////

void __thiscall FUN_00a36f50(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00a35b00(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_00a36380(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00a36fc0 @ 00a36fc0 ////

undefined4 * __thiscall FUN_00a36fc0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a365f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    if (*param_3 < param_2[3]) {
      FUN_00a365f0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if ((int)((undefined4 *)piVar1[2])[3] < *param_3) {
      FUN_00a365f0(this,param_1,'\0',(undefined4 *)piVar1[2],param_3);
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[3];
    iVar4 = iVar3 - iVar2;
    if (iVar2 < iVar3) {
      param_3 = param_2;
      FUN_00a34fe0((int *)&param_3);
      if (param_3[3] < iVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_00a365f0(this,param_1,'\0',param_3,piVar5);
          return param_1;
        }
        FUN_00a365f0(this,param_1,'\x01',param_2,piVar5);
        return param_1;
      }
      iVar3 = param_2[3];
      iVar4 = iVar3 - iVar2;
    }
    if (SBORROW4(iVar3,iVar2) != iVar4 < 0) {
      param_3 = param_2;
      FUN_00a35040((int *)&param_3);
      if ((param_3 == *(int **)((int)this + 4)) || (iVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_00a365f0(this,param_1,'\0',param_2,piVar5);
          return param_1;
        }
        FUN_00a365f0(this,param_1,'\x01',param_3,piVar5);
        return param_1;
      }
    }
  }
  puVar6 = (undefined4 *)FUN_00a36c30(this,local_8,piVar5);
  *param_1 = *puVar6;
  return param_1;
}


//// FUNCTION FUN_00a371d0 @ 00a371d0 ////

undefined4 * __cdecl FUN_00a371d0(int param_1,int param_2,undefined4 *param_3)

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
    FUN_00a36db0(param_3 + -4,(void *)(param_2 + -0x10));
    param_2 = iVar1;
    param_3 = puVar2;
  } while (iVar1 != param_1);
  return puVar2;
}


//// FUNCTION FUN_00a37210 @ 00a37210 ////

void __cdecl FUN_00a37210(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa891;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    FUN_008a5820(param_1 + 1,(int)(param_2 + 1));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a37260 @ 00a37260 ////

void __thiscall FUN_00a37260(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa8ab;
  local_c = ExceptionList;
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_0040e290);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  piVar2 = operator_new(param_1 * 0x10 + 4);
  local_4 = 0;
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)this = 0;
  }
  else {
    *piVar2 = param_1;
    _eh_vector_constructor_iterator_(piVar2 + 1,0x10,param_1,FUN_0040f470,FUN_0040e290);
    *(int **)this = piVar2 + 1;
  }
  *(int *)((int)this + 4) = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a37310 @ 00a37310 ////

int * __thiscall FUN_00a37310(void *this,int *param_1)

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
  piVar3 = FUN_00a36fc0(this,&param_1,piVar3,local_8);
  return (int *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_00a373c0 @ 00a373c0 ////

void FUN_00a373c0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_00a36140(param_1);
  }
  return;
}


//// FUNCTION FUN_00a373f0 @ 00a373f0 ////

void __cdecl FUN_00a373f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    do {
      *param_1 = *param_3;
      FUN_00a36db0(param_1 + 1,param_3 + 1);
      param_1 = param_1 + 5;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a37460 @ 00a37460 ////

undefined4 * __cdecl FUN_00a37460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfa8d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_008a5820(param_3 + 1,(int)(param_1 + 1));
    }
    param_3 = param_3 + 5;
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_00a37510 @ 00a37510 ////

void __thiscall FUN_00a37510(void *this,char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *this_00;
  
  uVar3 = FUN_00a34980(this,param_1);
  this_00 = (void *)(uVar3 * 0x10 + *(int *)this);
  iVar1 = *(int *)((int)this_00 + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this_00 + 8) - iVar1 >> 2) <
      (uint)(*(int *)((int)this_00 + 0xc) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this_00 + 8);
    *puVar2 = param_2;
    *(undefined4 **)((int)this_00 + 8) = puVar2 + 1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return;
  }
  FUN_0040ec60(this_00,*(undefined4 **)((int)this_00 + 8),1,&param_2);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00a37590 @ 00a37590 ////

void __fastcall FUN_00a37590(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a36cf0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a375c0 @ 00a375c0 ////

int __fastcall FUN_00a375c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a35a80();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a375f0 @ 00a375f0 ////

void __fastcall FUN_00a375f0(int param_1)

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
    FUN_00a36140(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a37640 @ 00a37640 ////

void __cdecl FUN_00a37640(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cfa8f1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      FUN_008a5820(param_1 + 1,(int)(param_3 + 1));
    }
    param_1 = param_1 + 5;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a37790 @ 00a37790 ////

undefined4 * __fastcall FUN_00a37790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  *(undefined1 *)(param_1 + 0x212) = 0;
  *(undefined1 *)((int)param_1 + 0x849) = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x20e] = 1;
  puVar2 = param_1 + 0xe;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a37830 @ 00a37830 ////

void __fastcall FUN_00a37830(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x840));
}


//// FUNCTION FUN_00a37980 @ 00a37980 ////

undefined4 * FUN_00a37980(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a37640(param_1,param_2,param_3);
  return param_1 + param_2 * 5;
}


//// FUNCTION FUN_00a379b0 @ 00a379b0 ////

void __thiscall FUN_00a379b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cfa928;
  local_10 = ExceptionList;
  local_30 = *param_3;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_008a5820(local_2c,(int)(param_3 + 1));
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
      FUN_00a36310();
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
        iVar2 = FUN_00a34bf0((int)this);
        uVar5 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar5 * 0x14);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar3;
      puVar4 = FUN_00a37460(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00a37640(puVar4,param_2,&local_30);
      FUN_00a37460(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2 * 5);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00a373c0(*(int *)((int)this + 4),*(int *)((int)this + 8));
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
        FUN_00a37460(param_1,puVar3,param_1 + param_2 * 5);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00a37980(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,
                     &local_30);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x14;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_00a373f0(param_1,(undefined4 *)(iVar2 + param_2 * -0x14),&local_30);
      }
      else {
        puVar4 = FUN_00a37460(puVar3 + param_2 * -5,puVar3,puVar3);
        *(undefined4 **)((int)this + 8) = puVar4;
        FUN_00a371d0((int)param_1,(int)(puVar3 + param_2 * -5),puVar3);
        FUN_00a373f0(param_1,param_1 + param_2 * 5,&local_30);
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


//// FUNCTION FUN_00a37cb0 @ 00a37cb0 ////

void __fastcall FUN_00a37cb0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfa956;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00a37830(param_1);
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  FUN_00a375f0(param_1 + 0x18);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a37d20 @ 00a37d20 ////

void __thiscall FUN_00a37d20(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x14 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x14;
      goto LAB_00a37d65;
    }
  }
  iVar1 = 0;
LAB_00a37d65:
  FUN_00a379b0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x14;
  return;
}


//// FUNCTION FUN_00a37d90 @ 00a37d90 ////

void __thiscall FUN_00a37d90(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x14) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x14))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00a37640(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 5;
    return;
  }
  FUN_00a37d20(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a37e20 @ 00a37e20 ////

void __thiscall FUN_00a37e20(void *this,char *param_1)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  short *psVar19;
  uint uStack_51c;
  undefined4 uStack_518;
  undefined1 uStack_511;
  uint uStack_510;
  undefined1 *local_50c;
  undefined1 local_508 [4];
  int *local_504;
  undefined4 local_500;
  undefined4 *puStack_4fc;
  uint uStack_4f8;
  undefined4 uStack_4f4;
  char *pcStack_4f0;
  short *psStack_4ec;
  int iStack_4e8;
  undefined4 uStack_4e4;
  uint uStack_4e0;
  int iStack_4dc;
  char *apcStack_4d8 [2];
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 auStack_4c4 [2];
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  char *pcStack_4b0;
  size_t sStack_4ac;
  undefined4 auStack_490 [16];
  undefined1 uStack_450;
  undefined4 *puStack_448;
  undefined4 *puStack_444;
  char acStack_43c [31];
  char cStack_41d;
  char acStack_41c [259];
  char cStack_319;
  char acStack_318 [260];
  char acStack_214 [260];
  char acStack_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa997;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_504 = (int *)FUN_00a35a80();
  *(undefined1 *)((int)local_504 + 0x15) = 1;
  local_504[1] = (int)local_504;
  *local_504 = (int)local_504;
  local_504[2] = (int)local_504;
  local_500 = 0;
  local_4 = 0;
  if (param_1 == (char *)0x0) {
    local_4 = 0xffffffff;
    FUN_00a36cf0(local_508,&local_50c,(int *)*local_504,local_504);
                    /* WARNING: Subroutine does not return */
    _free(local_504);
  }
  FUN_00a37830((int)this);
  FUN_009c89a0(auStack_490);
  local_4 = CONCAT31(local_4._1_3_,1);
  __splitpath(param_1,acStack_318,acStack_214,acStack_41c,acStack_110);
  pcVar3 = acStack_214;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)acStack_214;
  pcVar3 = &cStack_319;
  do {
    pcVar15 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar15 != '\0');
  pcVar15 = acStack_214;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = &cStack_41d;
  do {
    pcVar15 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar15 != '\0');
  pcVar3[0] = '*';
  pcVar3[1] = '\0';
  pcVar3 = acStack_110;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar4 = (int)pcVar3 - (int)acStack_110;
  pcVar3 = &cStack_41d;
  do {
    pcVar15 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar15 != '\0');
  pcVar15 = acStack_110;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uStack_450 = 0;
  FUN_009ca9d0(auStack_490,acStack_41c,acStack_318,(undefined1 *)0x0);
  FUN_00a37260(this,0x5bf);
  FUN_00a37260((void *)((int)this + 0xc),0x826f);
  uStack_4bc = 0;
  uStack_4b8 = 0;
  uStack_4b4 = 0;
  local_4._0_1_ = 2;
  auStack_4c4[0] = 0;
  FUN_00a37d90((void *)((int)this + 0x18),auStack_4c4);
  pcStack_4f0 = (char *)0x0;
  psStack_4ec = (short *)0x0;
  uStack_4f4 = 0;
  FUN_00a36f50((void *)((int)this + 0x28),&uStack_4f4);
  uVar4 = uStack_4f8;
  uStack_511 = 0;
  puStack_4fc = puStack_448;
  if (puStack_448 == puStack_444) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009c8560(auStack_490);
    local_4 = 0xffffffff;
    FUN_00a36cf0(local_508,&uStack_4e4,(int *)*local_504,local_504);
                    /* WARNING: Subroutine does not return */
    _free(local_504);
  }
  FUN_00a35610(this,(char *)*puStack_448);
  if (*(int *)((int)this + 0x84c) == 0) {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_009c8560(auStack_490);
    local_4 = 0xffffffff;
    FUN_00a36cf0(local_508,&uStack_4e4,(int *)*local_504,local_504);
                    /* WARNING: Subroutine does not return */
    _free(local_504);
  }
  local_50c = &stack0xfffffacc;
  FUN_00a35b70(&pcStack_4b0,(char *)*puStack_448,param_1);
  iVar8 = *(int *)((int)this + 0x854) + 4;
  local_4 = CONCAT31(local_4._1_3_,3);
  uStack_51c = 0;
  uStack_518 = 0;
  if (iVar8 <= *(int *)((int)this + 0x850)) {
    iStack_4dc = *(int *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
    *(int *)((int)this + 0x854) = iVar8;
  }
  if (iStack_4dc == 0x5354484c) {
    FUN_00a34b00(this,(undefined4 *)((int)this + 0x848),1);
    FUN_00a34b00(this,(undefined4 *)((int)this + 0x849),1);
    iVar8 = *(int *)((int)this + 0x854);
    iVar5 = iVar8;
    if (iVar8 < *(int *)((int)this + 0x850)) {
      do {
        if (*(char *)(*(int *)((int)this + 0x84c) + iVar5) == '\0') break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)this + 0x850));
      if (iVar5 < *(int *)((int)this + 0x850)) {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 != iVar8) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x844));
    }
    iVar8 = *(int *)((int)this + 0x854);
    iVar5 = iVar8;
    if (iVar8 < *(int *)((int)this + 0x850)) {
      do {
        if (*(char *)(*(int *)((int)this + 0x84c) + iVar5) == '\0') break;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((int)this + 0x850));
      if (iVar5 < *(int *)((int)this + 0x850)) {
        iVar5 = iVar5 + 1;
      }
    }
    if (iVar5 != iVar8) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x840));
    }
    puVar1 = (uint *)((int)this + 0x83c);
    FUN_00a34b00(this,puVar1,4);
    uStack_510 = *puVar1;
    *puVar1 = (uStack_510 << 0x10 | uStack_510 & 0xff00 | uStack_510 >> 0x10 & 0xff) << 8 |
              (uint)*(byte *)((int)this + 0x83f);
    FUN_00a34b00(this,&uStack_51c,4);
    uVar16 = (uStack_51c & 0xff0000 | uStack_51c >> 0x10) >> 8 |
             (uStack_51c << 0x10 | uStack_51c & 0xff00) << 8;
    FUN_00a34b00(this,&uStack_518,4);
    uVar13 = uStack_518 >> 0x10;
    uVar10 = uStack_518 & 0xff0000;
    uVar14 = uStack_518 << 0x10;
    uVar11 = uStack_518 & 0xff00;
    uStack_518 = *(uint *)((int)this + 0x854);
    uVar11 = (uVar10 | uVar13) >> 8 | (uVar14 | uVar11) << 8;
    uVar10 = uStack_51c;
    if (uVar11 != 0) {
      if ((int)uVar11 < *(int *)((int)this + 0x850)) {
        *(uint *)((int)this + 0x854) = uVar11;
      }
      while (uStack_51c = uVar16, uStack_51c != 0) {
        iVar5 = *(int *)((int)this + 0x850);
        iVar8 = *(int *)((int)this + 0x854) + 4;
        uVar10 = 0;
        if (iVar8 <= iVar5) {
          uVar10 = *(uint *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
          *(int *)((int)this + 0x854) = iVar8;
        }
        iVar8 = *(int *)((int)this + 0x854);
        iVar6 = iVar8;
        if (iVar8 < iVar5) {
          do {
            if (*(char *)(*(int *)((int)this + 0x84c) + iVar6) == '\0') break;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)((int)this + 0x850));
          if (iVar6 < iVar5) {
            iVar6 = iVar6 + 1;
          }
        }
        uStack_510 = iVar6 - iVar8;
        if (uStack_510 != 0) {
          uStack_4d0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          local_4._1_3_ = (uint3)((uint)local_4 >> 8);
          local_4._0_1_ = 4;
          pcVar3 = operator_new(uStack_510);
          apcStack_4d8[0] = pcVar3;
          FUN_00a34b00(this,(undefined4 *)pcVar3,uStack_510);
          uVar4 = FUN_00a35cf0(this,pcVar3);
          if (uVar4 != 0) {
            uStack_510 = uVar4;
                    /* WARNING: Subroutine does not return */
            _free(pcVar3);
          }
          iVar8 = 0;
          if (*(int *)((int)this + 0x1c) != 0) {
            iVar8 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x14;
          }
          FUN_00a37510(this,pcVar3,iVar8);
          FUN_00a37d90((void *)((int)this + 0x18),apcStack_4d8);
          iVar8 = 0;
          if (*(int *)((int)this + 0x1c) != 0) {
            iVar8 = (*(int *)((int)this + 0x20) - *(int *)((int)this + 0x1c)) / 0x14;
          }
          uStack_510 = (uVar10 & 0xff0000 | uVar10 >> 0x10) >> 8 |
                       (uVar10 << 0x10 | uVar10 & 0xff00) << 8;
          piVar7 = FUN_00a37310(local_508,(int *)&uStack_510);
          *piVar7 = iVar8 + -1;
          local_4 = CONCAT31(local_4._1_3_,3);
          uStack_4d0 = 0;
          uStack_4cc = 0;
          uStack_4c8 = 0;
          uVar4 = uStack_4f8;
        }
        uVar10 = uStack_51c - 1;
        uVar16 = uStack_51c - 1;
      }
    }
    uStack_51c = uVar10;
    if ((int)uStack_518 < *(int *)((int)this + 0x850)) {
      *(uint *)((int)this + 0x854) = uStack_518;
    }
    if ((*(char *)((int)this + 0x848) == '\x01') && (*(char *)((int)this + 0x849) == '\x02')) {
      uStack_51c = 0;
      FUN_00a34b00(this,&uStack_51c,4);
      uVar10 = (uStack_51c & 0xff0000 | uStack_51c >> 0x10) >> 8 |
               (uStack_51c << 0x10 | uStack_51c & 0xff00) << 8;
      if (uVar10 != 0) {
        iVar8 = *(int *)((int)this + 0x850);
        do {
          iVar5 = *(int *)((int)this + 0x854) + 4;
          if (iVar5 <= iVar8) {
            uVar4 = *(uint *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
            *(int *)((int)this + 0x854) = iVar5;
          }
          uVar4 = (uVar4 & 0xff0000 | uVar4 >> 0x10) >> 8 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
          iVar5 = *(int *)((int)this + 0x854);
          if (iVar5 < iVar8) {
            do {
              if (*(char *)(*(int *)((int)this + 0x84c) + iVar5) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)((int)this + 0x850));
            if (iVar5 < iVar8) {
              iVar5 = iVar5 + 1;
            }
          }
          if (iVar5 <= iVar8) {
            *(int *)((int)this + 0x854) = iVar5;
          }
          iVar5 = *(int *)((int)this + 0x854) + 1;
          if (iVar5 <= iVar8) {
            *(int *)((int)this + 0x854) = iVar5;
          }
          uVar10 = uVar10 - 1;
          uStack_4f8 = uVar4;
        } while (uVar10 != 0);
      }
    }
    if (*(uint *)((int)this + 0x83c) != 0) {
      FUN_00a36a70((void *)((int)this + 0x28),*(uint *)((int)this + 0x83c));
      uStack_510 = 0;
      if (*(int *)((int)this + 0x83c) != 0) {
        do {
          iVar5 = *(int *)((int)this + 0x850);
          iVar8 = *(int *)((int)this + 0x854) + 4;
          if (iVar8 <= iVar5) {
            uStack_4e0 = *(uint *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
            *(int *)((int)this + 0x854) = iVar8;
          }
          iVar8 = *(int *)((int)this + 0x854);
          iVar6 = iVar8;
          if (iVar8 < iVar5) {
            do {
              if (*(char *)(*(int *)((int)this + 0x84c) + iVar6) == '\0') break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)((int)this + 0x850));
            if (iVar6 < iVar5) {
              iVar6 = iVar6 + 1;
            }
          }
          uVar4 = iVar6 - iVar8;
          if (uVar4 == 0) break;
          uStack_4e0 = (uStack_4e0 & 0xff0000 | uStack_4e0 >> 0x10) >> 8 |
                       (uStack_4e0 << 0x10 | uStack_4e0 & 0xff00) << 8;
          pcVar3 = operator_new(uVar4);
          if ((int)(*(int *)((int)this + 0x854) + uVar4) <= *(int *)((int)this + 0x850)) {
            pcVar15 = (char *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
            pcVar12 = pcVar3;
            for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar12 = *(undefined4 *)pcVar15;
              pcVar15 = pcVar15 + 4;
              pcVar12 = pcVar12 + 4;
            }
            for (uVar10 = uVar4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar12 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              pcVar12 = pcVar12 + 1;
            }
            *(uint *)((int)this + 0x854) = *(int *)((int)this + 0x854) + uVar4;
          }
          pcStack_4f0 = pcVar3;
          if ((sStack_4ac != 0) && (iVar8 = __strnicmp(pcVar3,pcStack_4b0,sStack_4ac), iVar8 == 0))
          {
            pcVar12 = pcVar3 + sStack_4ac;
            pcVar15 = pcVar3;
            do {
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              *pcVar15 = cVar2;
              pcVar15 = pcVar15 + 1;
            } while (cVar2 != '\0');
          }
          iVar8 = *(int *)((int)this + 0x854);
          iVar5 = *(int *)((int)this + 0x850);
          iVar6 = iVar8;
          if (iVar8 < iVar5) {
            do {
              if (*(char *)(*(int *)((int)this + 0x84c) + iVar6) == '\0') break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)((int)this + 0x850));
            if (iVar6 < iVar5) {
              iVar6 = iVar6 + 1;
            }
          }
          uVar4 = iVar6 - iVar8;
          if ((int)(iVar8 + uVar4) <= iVar5) {
            pcVar3 = (char *)(*(int *)((int)this + 0x84c) + iVar8);
            pcVar15 = acStack_43c;
            for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar10 = uVar4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar15 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar15 = pcVar15 + 1;
            }
            *(uint *)((int)this + 0x854) = iVar8 + uVar4;
            pcVar3 = pcStack_4f0;
          }
          iStack_4e8 = FUN_00a349c0(this,acStack_43c);
          iVar8 = *(int *)((int)this + 0x850);
          iVar5 = *(int *)((int)this + 0x854) + 1;
          if (iVar5 <= iVar8) {
            *(int *)((int)this + 0x854) = iVar5;
          }
          iVar5 = *(int *)((int)this + 0x854);
          if (iVar5 < iVar8) {
            do {
              if (*(char *)(*(int *)((int)this + 0x84c) + iVar5) == '\0') break;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)((int)this + 0x850));
            if (iVar5 < iVar8) {
              iVar5 = iVar5 + 1;
            }
          }
          if (iVar5 <= iVar8) {
            *(int *)((int)this + 0x854) = iVar5;
          }
          iVar5 = *(int *)((int)this + 0x854);
          iVar6 = iVar5;
          if (iVar5 < iVar8 + -1) {
            do {
              if ((*(char *)(*(int *)((int)this + 0x84c) + iVar6) == '\0') &&
                 (*(char *)(*(int *)((int)this + 0x84c) + 1 + iVar6) == '\0')) break;
              iVar6 = iVar6 + 2;
            } while (iVar6 < *(int *)((int)this + 0x850) + -1);
            if (iVar6 < iVar8 + -1) {
              iVar6 = iVar6 + 2;
            }
          }
          uVar4 = iVar6 - iVar5;
          if (uVar4 != 0) {
            psStack_4ec = operator_new(uVar4 * 2);
            if ((int)(*(int *)((int)this + 0x854) + uVar4) <= *(int *)((int)this + 0x850)) {
              puVar17 = (undefined4 *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
              psVar19 = psStack_4ec;
              for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined4 *)psVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                psVar19 = psVar19 + 2;
              }
              for (uVar10 = uVar4 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                *(undefined1 *)psVar19 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
                psVar19 = (short *)((int)psVar19 + 1);
              }
              *(uint *)((int)this + 0x854) = *(int *)((int)this + 0x854) + uVar4;
              pcVar3 = pcStack_4f0;
            }
            FUN_00a34b80(psStack_4ec);
          }
          uStack_4f4 = 0;
          if (*(int *)((int)this + 0x2c) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 4;
          }
          FUN_00a37510((void *)((int)this + 0xc),pcVar3,iVar8);
          iVar8 = *(int *)((int)this + 0x2c);
          if ((iVar8 == 0) ||
             ((uint)(*(int *)((int)this + 0x34) - iVar8 >> 4) <=
              (uint)(*(int *)((int)this + 0x30) - iVar8 >> 4))) {
            FUN_00a36380((void *)((int)this + 0x28),*(undefined4 **)((int)this + 0x30),1,&uStack_4f4
                        );
          }
          else {
            puVar17 = *(undefined4 **)((int)this + 0x30);
            FUN_00a35b00(puVar17,1,&uStack_4f4);
            *(undefined4 **)((int)this + 0x30) = puVar17 + 4;
          }
          iVar8 = *(int *)((int)this + 0x854) + 2;
          puVar18 = (undefined1 *)0x0;
          uStack_518._0_2_ = 0;
          uStack_51c = 0;
          if (iVar8 <= *(int *)((int)this + 0x850)) {
            uStack_518._0_2_ =
                 *(undefined2 *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
            *(int *)((int)this + 0x854) = iVar8;
          }
          uVar9 = CONCAT11((undefined1)uStack_518,uStack_518._1_1_);
          uStack_518 = CONCAT22((short)((uint)iVar8 >> 0x10),uVar9);
          uVar4 = (uint)uVar9;
          if (uVar9 != 0) {
            do {
              uStack_518 = uVar4;
              iVar8 = *(int *)((int)this + 0x854) + 4;
              if (iVar8 <= *(int *)((int)this + 0x850)) {
                puVar18 = *(undefined1 **)
                           (*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
                *(int *)((int)this + 0x854) = iVar8;
              }
              puVar18 = (undefined1 *)
                        (((uint)puVar18 & 0xff0000 | (uint)puVar18 >> 0x10) >> 8 |
                        ((int)puVar18 << 0x10 | (uint)puVar18 & 0xff00) << 8);
              iVar8 = *(int *)((int)this + 0x854) + 2;
              if (iVar8 <= *(int *)((int)this + 0x850)) {
                uStack_51c._0_2_ =
                     *(undefined2 *)(*(int *)((int)this + 0x84c) + *(int *)((int)this + 0x854));
                *(int *)((int)this + 0x854) = iVar8;
              }
              uStack_51c = CONCAT22((short)((uint)iVar8 >> 0x10),
                                    CONCAT11((undefined1)uStack_51c,
                                             (char)((ushort)(undefined2)uStack_51c >> 8)));
              local_50c = puVar18;
              piVar7 = (int *)FUN_00a359d0(local_508,&uStack_4e4,(int *)&local_50c);
              if ((int *)*piVar7 != local_504) {
                if (*(int *)((int)this + 0x2c) == 0) {
                  iVar8 = 0;
                }
                else {
                  iVar8 = *(int *)((int)this + 0x30) - *(int *)((int)this + 0x2c) >> 4;
                }
                local_50c = (undefined1 *)(iVar8 - 1);
                iVar8 = *(int *)((int)this + 0x1c) + ((int *)*piVar7)[4] * 0x14;
                iVar5 = *(int *)(iVar8 + 8);
                if ((iVar5 == 0) ||
                   ((uint)(*(int *)(iVar8 + 0x10) - iVar5 >> 2) <=
                    (uint)(*(int *)(iVar8 + 0xc) - iVar5 >> 2))) {
                  FUN_0040ec60((void *)(iVar8 + 4),*(undefined4 **)(iVar8 + 0xc),1,&local_50c);
                }
                else {
                  puVar1 = *(uint **)(iVar8 + 0xc);
                  *puVar1 = (uint)local_50c;
                  *(uint **)(iVar8 + 0xc) = puVar1 + 1;
                }
              }
              uStack_518 = uStack_518 - 1;
              uVar4 = uStack_518;
            } while (uStack_518 != 0);
          }
          if (((*(char *)((int)this + 0x848) == '\x01') && (*(char *)((int)this + 0x849) == '\x02'))
             && (iVar8 = *(int *)((int)this + 0x854) + 2, iVar8 <= *(int *)((int)this + 0x850))) {
            *(int *)((int)this + 0x854) = iVar8;
          }
          uStack_510 = uStack_510 + 1;
        } while (uStack_510 < *(uint *)((int)this + 0x83c));
      }
      uStack_511 = 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x84c));
}


//// FUNCTION FUN_00a38aa0 @ 00a38aa0 ////

void __fastcall FUN_00a38aa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d774b8;
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1[0x1e] + 0x7c) = param_1[0x1f];
  }
  if (param_1[0x1f] != 0) {
    *(undefined4 *)(param_1[0x1f] + 0x78) = param_1[0x1e];
  }
  if (DAT_010bb220 == param_1) {
    DAT_010bb220 = (undefined4 *)param_1[0x1f];
  }
  FUN_00a04130(param_1);
  return;
}


//// FUNCTION FUN_00a38b10 @ 00a38b10 ////

undefined4 * __thiscall FUN_00a38b10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  FUN_00a04100(this);
  *(undefined ***)this = &PTR_FUN_00d774b8;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_1;
  *(undefined4 *)((int)this + 0x2c) = param_1[1];
  *(undefined4 *)((int)this + 0x30) = param_1[2];
  *(undefined4 *)((int)this + 0x34) = *param_1;
  *(undefined4 *)((int)this + 0x38) = param_1[1];
  *(undefined4 *)((int)this + 0x3c) = param_1[2];
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = *param_2;
  *(undefined4 *)((int)this + 0x50) = param_2[1];
  *(undefined4 *)((int)this + 0x54) = param_2[2];
  *(undefined4 *)((int)this + 0x74) = 10000;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(void **)((int)this + 0x7c) = DAT_010bb220;
  if (DAT_010bb220 != (void *)0x0) {
    *(void **)((int)DAT_010bb220 + 0x78) = this;
  }
  DAT_010bb220 = this;
  *(undefined4 *)((int)this + 100) = 0x3f800000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x3f000000;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  return this;
}


//// FUNCTION FUN_00a38c50 @ 00a38c50 ////

undefined4 * __thiscall FUN_00a38c50(void *this,byte param_1)

{
  FUN_00a38aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a38c70 @ 00a38c70 ////

void __fastcall FUN_00a38c70(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  iVar1 = param_1[0x1c];
  param_1[0x1c] = iVar1 + 100;
  if ((int)param_1[0x1d] < iVar1 + 100) {
    LVar3 = InterlockedDecrement(param_1 + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar3 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*param_1)(1);
      DAT_0105b588 = uVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00a38cc0 @ 00a38cc0 ////

void __fastcall FUN_00a38cc0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 *puVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  ulonglong uVar12;
  undefined4 uStack_1c;
  
  if (*(int *)(param_1 + 0x24) != DAT_0105bec0) {
    fVar3 = (float)DAT_0105becc * 0.001;
    if (*(float *)(param_1 + 0x30) <= 0.0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    else {
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - fVar3 * 9.81;
      *(float *)(param_1 + 0x28) = fVar3 * *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x28);
      *(float *)(param_1 + 0x2c) = fVar3 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x30) = fVar3 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x30);
      if (*(float *)(param_1 + 0x30) < 0.0 != (*(float *)(param_1 + 0x30) == 0.0)) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        if (*(code **)(param_1 + 0x80) != (code *)0x0) {
          (**(code **)(param_1 + 0x80))(param_1);
        }
      }
      pfVar1 = (float *)(param_1 + 0x40);
      *pfVar1 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x38);
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x3c);
      *pfVar1 = *pfVar1 + 0.01;
      FUN_00412e20(pfVar1);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x2c);
      pfVar2 = (float *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *pfVar2 = 0.0;
      pfVar11 = (float *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
      FUN_00412fd0(pfVar11,pfVar2,pfVar1);
      FUN_00412e20(pfVar11);
      FUN_00412fd0(pfVar2,pfVar1,pfVar11);
      *(undefined4 *)(param_1 + 0x20) = 0x3d4ccccd;
      fVar3 = *(float *)(param_1 + 0x48) * 0.3 + *(float *)(param_1 + 0x30);
      if (fVar3 < 0.0) {
        *(float *)(param_1 + 0x20) = 0.05 - fVar3;
      }
    }
    FUN_009e6720(DAT_010600b8,5,4);
    pfVar2 = (float *)DAT_010600b8[10];
    puVar7 = (undefined2 *)DAT_010600b8[0xb];
    pfVar1 = (float *)(param_1 + 0x28);
    *pfVar2 = *pfVar1;
    pfVar2[1] = *(float *)(param_1 + 0x2c);
    pfVar2[2] = *(float *)(param_1 + 0x30);
    uStack_1c = -NAN;
    pfVar2[4] = 0.5;
    pfVar2[3] = -NAN;
    pfVar2[5] = 0.5;
    pfVar11 = pfVar2 + 6;
    if (*(int *)(param_1 + 0x74) + -0x9c4 < *(int *)(param_1 + 0x70)) {
      uVar12 = FUN_00acd42c();
      iVar10 = 0xff - ((uint)uVar12 & 0xff);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      else if (0xff < iVar10) {
        iVar10 = 0xff;
      }
      uStack_1c = (float)CONCAT13((char)iVar10,0xffffff);
    }
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar6 = *(float *)(param_1 + 0x30);
    *pfVar11 = *(float *)(param_1 + 0x40) * 0.3 + *pfVar1;
    pfVar2[7] = fVar3 * 0.3 + fVar5;
    pfVar2[8] = fVar4 * 0.3 + fVar6;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x5c);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = *pfVar11 - fVar3 * *(float *)(param_1 + 0x58);
    *pfVar11 = fVar6;
    fVar8 = pfVar2[7] - fVar3 * fVar4;
    pfVar2[7] = fVar8;
    fVar9 = pfVar2[8] - fVar3 * fVar5;
    pfVar2[8] = fVar9;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x68);
    fVar5 = *(float *)(param_1 + 0x6c);
    *pfVar11 = fVar6 - fVar3 * *(float *)(param_1 + 100);
    pfVar2[7] = fVar8 - fVar3 * fVar4;
    fVar9 = fVar9 - fVar3 * fVar5;
    pfVar2[8] = fVar9;
    if (fVar9 < 0.0) {
      pfVar2[8] = 0.0;
    }
    pfVar2[9] = uStack_1c;
    pfVar2[10] = 0.0;
    pfVar2[0xb] = 0.0;
    pfVar11 = pfVar2 + 0xc;
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar6 = *(float *)(param_1 + 0x30);
    *pfVar11 = *(float *)(param_1 + 0x40) * 0.3 + *pfVar1;
    pfVar2[0xd] = fVar3 * 0.3 + fVar5;
    pfVar2[0xe] = fVar4 * 0.3 + fVar6;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x5c);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = fVar3 * *(float *)(param_1 + 0x58) + *pfVar11;
    *pfVar11 = fVar6;
    fVar8 = fVar3 * fVar4 + pfVar2[0xd];
    pfVar2[0xd] = fVar8;
    fVar9 = fVar3 * fVar5 + pfVar2[0xe];
    pfVar2[0xe] = fVar9;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x68);
    fVar5 = *(float *)(param_1 + 0x6c);
    *pfVar11 = fVar6 - fVar3 * *(float *)(param_1 + 100);
    pfVar2[0xd] = fVar8 - fVar3 * fVar4;
    fVar9 = fVar9 - fVar3 * fVar5;
    pfVar2[0xe] = fVar9;
    if (fVar9 < 0.0) {
      pfVar2[0xe] = 0.0;
    }
    pfVar2[0xf] = uStack_1c;
    pfVar2[0x10] = 1.0;
    pfVar2[0x11] = 0.0;
    pfVar11 = pfVar2 + 0x12;
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar6 = *(float *)(param_1 + 0x30);
    *pfVar11 = *(float *)(param_1 + 0x40) * 0.3 + *pfVar1;
    pfVar2[0x13] = fVar3 * 0.3 + fVar5;
    pfVar2[0x14] = fVar4 * 0.3 + fVar6;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x5c);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = fVar3 * *(float *)(param_1 + 0x58) + *pfVar11;
    *pfVar11 = fVar6;
    fVar8 = fVar3 * fVar4 + pfVar2[0x13];
    pfVar2[0x13] = fVar8;
    fVar9 = fVar3 * fVar5 + pfVar2[0x14];
    pfVar2[0x14] = fVar9;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x68);
    fVar5 = *(float *)(param_1 + 0x6c);
    *pfVar11 = fVar3 * *(float *)(param_1 + 100) + fVar6;
    pfVar2[0x13] = fVar3 * fVar4 + fVar8;
    fVar9 = fVar3 * fVar5 + fVar9;
    pfVar2[0x14] = fVar9;
    if (fVar9 < 0.0) {
      pfVar2[0x14] = 0.0;
    }
    pfVar2[0x15] = uStack_1c;
    pfVar2[0x16] = 1.0;
    pfVar2[0x17] = 1.0;
    pfVar11 = pfVar2 + 0x18;
    fVar3 = *(float *)(param_1 + 0x44);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar6 = *(float *)(param_1 + 0x30);
    *pfVar11 = *(float *)(param_1 + 0x40) * 0.3 + *pfVar1;
    pfVar2[0x19] = fVar3 * 0.3 + fVar5;
    pfVar2[0x1a] = fVar4 * 0.3 + fVar6;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x5c);
    fVar5 = *(float *)(param_1 + 0x60);
    fVar6 = *pfVar11 - fVar3 * *(float *)(param_1 + 0x58);
    *pfVar11 = fVar6;
    fVar8 = pfVar2[0x19] - fVar3 * fVar4;
    pfVar2[0x19] = fVar8;
    fVar9 = pfVar2[0x1a] - fVar3 * fVar5;
    pfVar2[0x1a] = fVar9;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x68);
    fVar5 = *(float *)(param_1 + 0x6c);
    *pfVar11 = fVar3 * *(float *)(param_1 + 100) + fVar6;
    pfVar2[0x19] = fVar3 * fVar4 + fVar8;
    fVar9 = fVar3 * fVar5 + fVar9;
    pfVar2[0x1a] = fVar9;
    if (fVar9 < 0.0) {
      pfVar2[0x1a] = 0.0;
    }
    pfVar2[0x1b] = uStack_1c;
    pfVar2[0x1d] = 1.0;
    pfVar2[0x1c] = 0.0;
    *puVar7 = 0;
    puVar7[1] = 2;
    puVar7[2] = 1;
    puVar7[5] = 2;
    puVar7[3] = 0;
    puVar7[4] = 3;
    puVar7[6] = 0;
    puVar7[8] = 3;
    puVar7[7] = 4;
    puVar7[9] = 0;
    puVar7[10] = 1;
    puVar7[0xb] = 4;
    DAT_010600b8[0x10] = DAT_010b7048;
    FUN_009e6680(DAT_010600b8);
    *(int *)(param_1 + 0x24) = DAT_0105bec0;
  }
  return;
}


//// FUNCTION FUN_00a39340 @ 00a39340 ////

void __cdecl FUN_00a39340(int param_1,undefined4 param_2)

{
  void *this;
  undefined4 *puVar1;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa9bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x84);
  local_4 = 0;
  if (this != (void *)0x0) {
    local_18 = *(float *)(param_1 + 0x40) * -3.0;
    local_14 = *(float *)(param_1 + 0x44) * -3.0;
    local_10 = *(float *)(param_1 + 0x48) * -3.0;
    puVar1 = FUN_00a38b10(this,(undefined4 *)(param_1 + 0x34),&local_18);
    puVar1[0x20] = param_2;
    ExceptionList = local_c;
    return;
  }
  uRam00000080 = param_2;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a393f0 @ 00a393f0 ////

undefined4 * __cdecl FUN_00a393f0(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfa9db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x84);
  local_4 = 0;
  if (this != (void *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    puVar1 = FUN_00a38b10(this,param_1,&local_18);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION zlib_inflateReset_copy2 @ 00a39470 ////

undefined4 __cdecl zlib_inflateReset_copy2(int param_1)

{
  uint *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(uint **)(param_1 + 0x1c), puVar1 != (uint *)0x0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *puVar1 = -(uint)(puVar1[3] != 0) & 7;
    zlib_inflate_blocks_reset_copy2(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,&param_1);
    return 0;
  }
  return 0xfffffffe;
}


//// FUNCTION zlib_inflateEnd_copy2 @ 00a394c0 ////

undefined4 __cdecl zlib_inflateEnd_copy2(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 0x14);
    if (piVar1 != (int *)0x0) {
      zlib_inflate_blocks_free_copy2(piVar1,param_1,&param_1);
    }
    (**(code **)(iVar2 + 0x24))(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x1c));
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}


//// FUNCTION zlib_inflateInit2_copy2 @ 00a39510 ////

undefined4 __cdecl zlib_inflateInit2_copy2(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != s_1_0_4_00e692dc[0])) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(code **)(param_1 + 0x20) = FUN_00aa7840;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined **)(param_1 + 0x24) = &DAT_00aa7860;
  }
  iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x18);
  *(int *)(param_1 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    return 0xfffffffc;
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 0;
  if (param_2 < 0) {
    param_2 = -param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc) = 1;
  }
  if ((7 < param_2) && (param_2 < 0x10)) {
    *(int *)(*(int *)(param_1 + 0x1c) + 0x10) = param_2;
    piVar2 = zlib_inflate_blocks_new_copy2(param_1,~-(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) & 0xaa7700
                          ,1 << ((byte)param_2 & 0x1f));
    *(int **)(*(int *)(param_1 + 0x1c) + 0x14) = piVar2;
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == 0) {
      zlib_inflateEnd_copy2(param_1);
      return 0xfffffffc;
    }
    zlib_inflateReset_copy2(param_1);
    return 0;
  }
  zlib_inflateEnd_copy2(param_1);
  return 0xfffffffe;
}


//// FUNCTION zlib_inflateInit_copy2 @ 00a39620 ////

void __cdecl zlib_inflateInit_copy2(int param_1,char *param_2,int param_3)

{
  zlib_inflateInit2_copy2(param_1,0xf,param_2,param_3);
  return;
}


//// FUNCTION zlib_inflate_copy2 @ 00a39640 ////

int __cdecl zlib_inflate_copy2(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((param_1 == (int *)0x0) || (param_1[7] == 0)) || (*param_1 == 0)) || (param_2 < 0)) {
switchD_00a39688_default:
    return -2;
  }
  iVar4 = -5;
  do {
    puVar2 = (undefined4 *)param_1[7];
    switch(*puVar2) {
    case 0:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      puVar2[1] = (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      uVar3 = puVar2[1];
      *param_1 = *param_1 + 1;
      if (((byte)uVar3 & 0xf) != 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)s_unknown_compression_method_00e69338;
        *(undefined4 *)(param_1[7] + 4) = 5;
        break;
      }
      if ((uint)puVar2[4] < ((uint)puVar2[1] >> 4) + 8) {
        *puVar2 = 0xd;
        param_1[6] = (int)s_invalid_window_size_00e69324;
        *(undefined4 *)(param_1[7] + 4) = 5;
        break;
      }
      *puVar2 = 1;
    case 1:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      puVar2 = (undefined4 *)param_1[7];
      param_1[2] = param_1[2] + 1;
      bVar1 = *(byte *)*param_1;
      *param_1 = (int)((byte *)*param_1 + 1);
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)param_1[7] = 2;
          goto switchD_00a39688_caseD_2;
        }
        *puVar2 = 7;
      }
      else {
        *puVar2 = 0xd;
        param_1[6] = (int)s_incorrect_header_check_00e6930c;
        *(undefined4 *)(param_1[7] + 4) = 5;
      }
      break;
    case 2:
switchD_00a39688_caseD_2:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 3;
switchD_00a39688_caseD_3:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 4;
switchD_00a39688_caseD_4:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 5;
switchD_00a39688_caseD_5:
      if (param_1[1] == 0) {
        return iVar4;
      }
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      *param_1 = *param_1 + 1;
      param_1[0xc] = ((undefined4 *)param_1[7])[2];
      *(undefined4 *)param_1[7] = 6;
      return 2;
    case 3:
      goto switchD_00a39688_caseD_3;
    case 4:
      goto switchD_00a39688_caseD_4;
    case 5:
      goto switchD_00a39688_caseD_5;
    case 6:
      *(undefined4 *)param_1[7] = 0xd;
      param_1[6] = (int)s_need_dictionary_00e692e4;
      *(undefined4 *)(param_1[7] + 4) = 0;
      return -2;
    case 7:
      iVar4 = zlib_inflate_blocks_copy2((uint *)puVar2[5],param_1,iVar4);
      if (iVar4 == -3) {
        *(undefined4 *)param_1[7] = 0xd;
        *(undefined4 *)(param_1[7] + 4) = 0;
        iVar4 = -3;
      }
      else {
        if (iVar4 != 1) {
          return iVar4;
        }
        iVar4 = 0;
        zlib_inflate_blocks_reset_copy2(*(int **)(param_1[7] + 0x14),(int)param_1,(int *)(param_1[7] + 4));
        puVar2 = (undefined4 *)param_1[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          goto switchD_00a39688_caseD_8;
        }
        *puVar2 = 0xc;
      }
      break;
    case 8:
switchD_00a39688_caseD_8:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = (uint)*(byte *)*param_1 << 0x18;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 9;
switchD_00a39688_caseD_9:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x10000;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 10;
switchD_00a39688_caseD_a:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1 * 0x100;
      *param_1 = *param_1 + 1;
      *(undefined4 *)param_1[7] = 0xb;
switchD_00a39688_caseD_b:
      if (param_1[1] == 0) {
        return iVar4;
      }
      iVar4 = 0;
      param_1[1] = param_1[1] + -1;
      param_1[2] = param_1[2] + 1;
      *(uint *)(param_1[7] + 8) = *(int *)(param_1[7] + 8) + (uint)*(byte *)*param_1;
      puVar2 = (undefined4 *)param_1[7];
      *param_1 = *param_1 + 1;
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)param_1[7] = 0xc;
switchD_00a39688_caseD_c:
        return 1;
      }
      *puVar2 = 0xd;
      param_1[6] = (int)s_incorrect_data_check_00e692f4;
      *(undefined4 *)(param_1[7] + 4) = 5;
      break;
    case 9:
      goto switchD_00a39688_caseD_9;
    case 10:
      goto switchD_00a39688_caseD_a;
    case 0xb:
      goto switchD_00a39688_caseD_b;
    case 0xc:
      goto switchD_00a39688_caseD_c;
    case 0xd:
      return -3;
    default:
      goto switchD_00a39688_default;
    }
  } while( true );
}


//// FUNCTION FUN_00a39bc0 @ 00a39bc0 ////

void __fastcall FUN_00a39bc0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 1;
  if (*(char *)((int)param_1 + 0x11) != *(char *)(param_1 + 4)) {
    uVar6 = 2;
  }
  if (*(char *)((int)param_1 + 0x12) != *(char *)((int)param_1 + 0x11)) {
    uVar6 = uVar6 + 1;
  }
  if (*(char *)((int)param_1 + 0x13) != *(char *)((int)param_1 + 0x12)) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 4) {
    pfVar3 = param_1 + uVar6;
    for (iVar4 = 4 - uVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar3 = 0.0;
      pfVar3 = pfVar3 + 1;
    }
  }
  if (0.001 <= *param_1) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = 0.001;
  }
  iVar4 = 0;
  *param_1 = fVar1;
  fVar1 = 0.0;
  if (3 < uVar6) {
    iVar5 = (uVar6 - 4 >> 2) + 1;
    iVar4 = iVar5 * 4;
    pfVar3 = param_1 + 2;
    do {
      iVar5 = iVar5 + -1;
      fVar1 = fVar1 + pfVar3[-2] + pfVar3[-1] + *pfVar3 + pfVar3[1];
      pfVar3 = pfVar3 + 4;
    } while (iVar5 != 0);
  }
  for (; iVar4 < (int)uVar6; iVar4 = iVar4 + 1) {
    fVar1 = fVar1 + param_1[iVar4];
  }
  iVar4 = 0;
  if (3 < uVar6) {
    fVar2 = 1.0 / fVar1;
    iVar5 = (uVar6 - 4 >> 2) + 1;
    iVar4 = iVar5 * 4;
    pfVar3 = param_1 + 2;
    do {
      iVar5 = iVar5 + -1;
      pfVar3[-2] = fVar2 * pfVar3[-2];
      pfVar3[-1] = fVar2 * pfVar3[-1];
      *pfVar3 = fVar2 * *pfVar3;
      pfVar3[1] = fVar2 * pfVar3[1];
      pfVar3 = pfVar3 + 4;
    } while (iVar5 != 0);
  }
  if (iVar4 < (int)uVar6) {
    do {
      iVar5 = iVar4 + 1;
      param_1[iVar4] = (1.0 / fVar1) * param_1[iVar4];
      iVar4 = iVar5;
    } while (iVar5 < (int)uVar6);
  }
  return;
}


//// FUNCTION LH_DequantizeVertex @ 00a39e80 ////

void __thiscall LH_DequantizeVertex(void *this,float *param_1,float *param_2)

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
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
                    /* CONFIRMED: dequantizes one compressed 16-byte vertex (`this`, 8x uint16 LE)
                       into the standard 32-byte float vertex record (`param_1`: Pos3f@0x00,
                       Norm3f@0x0c, UV2f@0x18), using a per-primitive quantization reference block
                       (`param_2`, floats - populated from LH_LoadMeshPrimitiveHeader's this+0x1c
                       block, see FUN_009dad00's comment).
                       
                       Compressed source layout (this, 16 bytes):
                         +0x00 PosX (uint16) -> LERP(param_2[0] BBoxMin.x, param_2[3] BBoxMax.x,
                       val/65535)
                         +0x02 PosY (uint16) -> LERP(param_2[1] BBoxMin.y, param_2[4] BBoxMax.y,
                       val/65535)
                         +0x04 PosZ (uint16) -> LERP(param_2[2] BBoxMin.z, param_2[5] BBoxMax.z,
                       val/65535)
                         +0x06 NormX (uint16) -> 2*(val/65535) - 1  (direct signed unit-range, no
                       bbox needed since normals are unit length)
                         +0x08 NormY (uint16) -> 2*(val/65535) - 1
                         +0x0a NormZ (uint16) -> 2*(val/65535) - 1
                         +0x0c U (uint16) -> LERP(param_2[6] UMin, param_2[8] UMax, val/65535)
                         +0x0e V (uint16) -> LERP(param_2[7] VMin, param_2[9] VMax, val/65535)
                       
                       _DAT_00d7334c is consistent with 1/65535 (uint16 normalization constant);
                       _DAT_00d1658c is consistent with 1.0 (used in the 2x-minus-1 signed remap for
                       normals). Standard, textbook 16-bit-quantized-vertex compression - position
                       and UV use a per-primitive bounding box for maximum precision, normals use a
                       fixed unit range since no bbox is needed. */
  fVar1 = param_2[4];
  uVar13 = *(ushort *)((int)this + 2);
  fVar2 = param_2[1];
  fVar3 = param_2[5];
  fVar4 = param_2[2];
  uVar14 = *(ushort *)((int)this + 4);
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar17 = (float)*(ushort *)((int)this + 6) * 1.5259022e-05;
  uVar15 = *(ushort *)((int)this + 0xc);
  uVar16 = *(ushort *)((int)this + 0xe);
  fVar18 = (float)*(ushort *)((int)this + 8) * 1.5259022e-05;
  fVar19 = (float)*(ushort *)((int)this + 10) * 1.5259022e-05;
  fVar7 = param_2[8];
  fVar8 = param_2[6];
  fVar9 = param_2[9];
  fVar10 = param_2[7];
  fVar11 = param_2[6];
  fVar12 = param_2[7];
  *param_1 = (float)*(ushort *)this * 1.5259022e-05 * (param_2[3] - *param_2) + *param_2;
  param_1[1] = (float)uVar13 * 1.5259022e-05 * (fVar1 - fVar2) + fVar5;
  param_1[2] = (float)uVar14 * 1.5259022e-05 * (fVar3 - fVar4) + fVar6;
  param_1[3] = (fVar17 + fVar17) - 1.0;
  param_1[4] = (fVar18 + fVar18) - 1.0;
  param_1[5] = (fVar19 + fVar19) - 1.0;
  param_1[6] = (float)uVar15 * 1.5259022e-05 * (fVar7 - fVar8) + fVar11;
  param_1[7] = (float)uVar16 * 1.5259022e-05 * (fVar9 - fVar10) + fVar12;
  return;
}


//// FUNCTION FUN_00a3a000 @ 00a3a000 ////

void __fastcall FUN_00a3a000(int param_1)

{
  int *piVar1;
  
  if ((*(char *)(param_1 + 0xc) != '\0') && (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0))
  {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a020 @ 00a3a020 ////

void __fastcall FUN_00a3a020(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a3a090 @ 00a3a090 ////

void __fastcall FUN_00a3a090(int *param_1)

{
  int *piVar1;
  
  if (((char)param_1[2] != '\0') && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a0b0 @ 00a3a0b0 ////

void __fastcall FUN_00a3a0b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a3a0e0 @ 00a3a0e0 ////

void __thiscall FUN_00a3a0e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)((int)this + 0x10);
  iVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 0x14);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 0x14) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      return;
    }
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar2 + 0x14);
  }
  return;
}


//// FUNCTION FUN_00a3a120 @ 00a3a120 ////

void __thiscall FUN_00a3a120(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)((int)this + 0x10);
  if (*(int *)((int)this + 0x10) != 0) {
    while (iVar2 = iVar1, iVar2 != param_1) {
      iVar1 = *(int *)(iVar2 + 0x14);
      iVar3 = iVar2;
      if (*(int *)(iVar2 + 0x14) == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      return;
    }
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar2 + 0x14);
  }
  return;
}


//// FUNCTION FUN_00a3a160 @ 00a3a160 ////

void __thiscall FUN_00a3a160(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  param_1[4] = (int)this;
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    *(int **)((int)this + 0x10) = param_1;
    param_1[5] = 0;
    return;
  }
  piVar1 = *(int **)((int)this + 0x10);
  piVar3 = (int *)0x0;
  do {
    piVar2 = piVar1;
    if (*param_1 < *piVar2) {
      param_1[5] = (int)piVar2;
      if (piVar3 != (int *)0x0) {
        piVar3[5] = (int)param_1;
        return;
      }
      *(int **)((int)this + 0x10) = param_1;
      return;
    }
    piVar1 = (int *)piVar2[5];
    piVar3 = piVar2;
  } while ((int *)piVar2[5] != (int *)0x0);
  piVar2[5] = (int)param_1;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00a3a1b0 @ 00a3a1b0 ////

void __thiscall FUN_00a3a1b0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    *(int **)((int)this + 0x10) = param_1;
    param_1[5] = 0;
    return;
  }
  piVar1 = *(int **)((int)this + 0x10);
  piVar3 = (int *)0x0;
  do {
    piVar2 = piVar1;
    if (*param_1 < *piVar2) {
      param_1[5] = (int)piVar2;
      if (piVar3 != (int *)0x0) {
        piVar3[5] = (int)param_1;
        return;
      }
      *(int **)((int)this + 0x10) = param_1;
      return;
    }
    piVar1 = (int *)piVar2[5];
    piVar3 = piVar2;
  } while ((int *)piVar2[5] != (int *)0x0);
  piVar2[5] = (int)param_1;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00a3a210 @ 00a3a210 ////

uint __cdecl FUN_00a3a210(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_3;
  uVar2 = param_4 - 1;
  if (((int)uVar1 <= (int)uVar2) && ((int)uVar1 <= (int)param_3[1])) {
    iVar3 = (int)uVar1 / param_2;
    if (iVar3 * param_2 < (int)uVar1) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = iVar3 * param_2;
    uVar1 = param_1 * param_2 + -1 + uVar2;
    if ((int)uVar1 <= (int)param_3[1]) {
      *param_3 = uVar2;
      param_3[1] = uVar1;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00a3a260 @ 00a3a260 ////

bool __thiscall FUN_00a3a260(void *this,int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    *param_3 = 0;
    param_3[1] = *(int *)((int)this + 4) - 1;
    uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 4));
    return (char)uVar2 != '\0';
  }
  if (0 < **(int **)((int)this + 0x10)) {
    *param_3 = 0;
    param_3[1] = **(int **)((int)this + 0x10) - 1;
    uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 4));
    if ((char)uVar2 != '\0') {
      return true;
    }
  }
  piVar3 = *(int **)((int)this + 0x10);
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    return false;
  }
  do {
    do {
      piVar1 = (int *)piVar3[5];
      if (piVar1 == (int *)0x0) {
        *param_3 = piVar3[1] + 1;
        param_3[1] = *(int *)((int)this + 4) - 1;
        uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 4));
        return (char)uVar2 != '\0';
      }
      uVar2 = piVar3[1] + 1;
      *param_3 = uVar2;
      uVar5 = *piVar1 - 1;
      param_3[1] = uVar5;
      piVar3 = piVar1;
    } while ((*(int *)((int)this + 4) + -1 < (int)uVar2) || ((int)uVar5 < (int)uVar2));
    iVar4 = (int)uVar2 / param_2;
    if (iVar4 * param_2 < (int)uVar2) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = param_1 * param_2 + -1 + iVar4 * param_2;
  } while ((int)uVar5 < (int)uVar2);
  *param_3 = iVar4 * param_2;
  param_3[1] = uVar2;
  return true;
}


//// FUNCTION FUN_00a3a3b0 @ 00a3a3b0 ////

void __fastcall FUN_00a3a3b0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a3d0 @ 00a3a3d0 ////

undefined4 __thiscall FUN_00a3a3d0(void *this,undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  int unaff_EDI;
  
  piVar3 = param_3;
  piVar2 = param_2;
  *param_2 = 0;
  piVar1 = *(int **)((int)this + 4);
  param_2 = (int *)0x0;
  uVar5 = 0;
  if (piVar1 != (int *)0x0) {
    uVar5 = 0x1800;
    if (((*(uint *)((int)this + 0x10) & 2) != 0) || (*param_3 < *(int *)((int)this + 0xc))) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffd;
      *(undefined4 *)((int)this + 0xc) = 0;
      uVar5 = 0x2800;
    }
    iVar4 = (**(code **)(*piVar1 + 0x2c))
                      (piVar1,*param_3,(param_3[1] - *param_3) + 1,&param_2,uVar5);
    uVar5 = unaff_EBP;
    if (iVar4 == 0) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
      *piVar2 = *piVar3 / unaff_EDI;
      *(int *)((int)this + 0xc) = piVar3[1] + 1;
    }
  }
  return uVar5;
}


//// FUNCTION FUN_00a3a450 @ 00a3a450 ////

void __fastcall FUN_00a3a450(int param_1)

{
  int *piVar1;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
     (piVar1 = *(int **)(param_1 + 4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  }
  return;
}


//// FUNCTION FUN_00a3a470 @ 00a3a470 ////

uint __thiscall FUN_00a3a470(void *this,int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * param_2;
  if (iVar2 - *(int *)((int)this + 8) != 0 && *(int *)((int)this + 8) <= iVar2) {
    return param_1 & 0xffffff00;
  }
  *param_3 = *(uint *)((int)this + 0xc);
  param_3[1] = *(int *)((int)this + 8) - 1;
  uVar1 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 8));
  if ((char)uVar1 == '\0') {
    uVar1 = *(uint *)((int)this + 0x10) | 2;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 0x10) = uVar1;
    *param_3 = 0;
    param_3[1] = iVar2 - 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


//// FUNCTION FUN_00a3a4e0 @ 00a3a4e0 ////

void FUN_00a3a4e0(void)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*g_pDirect3DDevice + 0xc))(g_pDirect3DDevice);
  if (iVar4 != 0) {
    cVar3 = FUN_009a5430();
    if (cVar3 == '\0') {
      return;
    }
    FUN_009a5d60();
  }
  if (DAT_010bb230 != 0) {
    puVar1 = (uint *)(DAT_010bb230 + 0x10);
    if (((*(byte *)(DAT_010bb230 + 0x10) & 1) != 0) &&
       (piVar2 = *(int **)(DAT_010bb230 + 4), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x30))(piVar2);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    DAT_010bb224 = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a530 @ 00a3a530 ////

undefined4 __thiscall FUN_00a3a530(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  *param_2 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 8) < param_1) {
    return 0;
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0x1800;
    if (((*(uint *)((int)this + 0x10) & 2) != 0) ||
       (*(int *)((int)this + 8) <= *(int *)((int)this + 0xc) + param_1)) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffd;
      *(undefined4 *)((int)this + 0xc) = 0;
      uVar3 = 0x2800;
    }
    iVar2 = (**(code **)(*piVar1 + 0x2c))
                      (piVar1,*(int *)((int)this + 0xc) << 1,param_1 * 2,&local_4,uVar3);
    if (iVar2 == 0) {
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
      *param_2 = *(int *)((int)this + 0xc);
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1;
    }
  }
  return local_4;
}


//// FUNCTION FUN_00a3a5d0 @ 00a3a5d0 ////

void __fastcall FUN_00a3a5d0(int *param_1)

{
  int *piVar1;
  
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    param_1[4] = param_1[4] & 0xfffffffe;
  }
  return;
}


//// FUNCTION FUN_00a3a610 @ 00a3a610 ////

void __fastcall FUN_00a3a610(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a640 @ 00a3a640 ////

undefined4 * __thiscall FUN_00a3a640(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(void **)this = DAT_010bb228;
  DAT_010bb228 = this;
  *(undefined4 *)((int)this + 0x10) = 0;
  (**(code **)(*g_pDirect3DDevice + 0x68))
            (g_pDirect3DDevice,*(undefined4 *)((int)this + 8),8,0,0,(int)this + 4,0);
  return this;
}


//// FUNCTION FUN_00a3a690 @ 00a3a690 ////

void __fastcall FUN_00a3a690(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  piVar2 = *(int **)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a6d0 @ 00a3a6d0 ////

undefined4 __thiscall FUN_00a3a6d0(void *this,undefined4 param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  int unaff_EDI;
  
  piVar3 = param_3;
  piVar2 = param_2;
  param_2[2] = 0;
  param_2[4] = 0;
  piVar1 = *(int **)((int)this + 4);
  param_2 = (int *)0x0;
  uVar5 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar1 + 0x2c))
                        (piVar1,*param_3,(param_3[1] - *param_3) + 1,&param_2,0x800),
     uVar5 = unaff_EBP, iVar4 == 0)) {
    *(undefined1 *)((int)this + 0xc) = 1;
    piVar2[2] = *piVar3 / unaff_EDI;
    *piVar2 = *piVar3;
    piVar2[1] = piVar3[1];
    FUN_00a3a160(this,piVar2);
  }
  return uVar5;
}


//// FUNCTION FUN_00a3a790 @ 00a3a790 ////

void __fastcall FUN_00a3a790(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  piVar2 = (int *)*param_1;
  param_1[4] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00a3a7d0 @ 00a3a7d0 ////

undefined4 __thiscall FUN_00a3a7d0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBP;
  
  piVar3 = param_2;
  piVar2 = param_1;
  param_1[4] = 0;
  param_1[2] = 0;
  piVar1 = *(int **)this;
  param_1 = (int *)0x0;
  uVar5 = 0;
  if ((piVar1 != (int *)0x0) &&
     (iVar4 = (**(code **)(*piVar1 + 0x2c))
                        (piVar1,*param_2,(param_2[1] - *param_2) + 1,&param_1,0x800),
     uVar5 = unaff_EBP, iVar4 == 0)) {
    *(undefined1 *)((int)this + 8) = 1;
    piVar2[4] = (int)this;
    piVar2[2] = *piVar3 / 2;
    *piVar2 = *piVar3;
    piVar2[1] = piVar3[1];
    FUN_00a3a1b0(this,piVar2);
  }
  return uVar5;
}


//// FUNCTION FUN_00a3a840 @ 00a3a840 ////

void __fastcall FUN_00a3a840(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  param_1[4] = 0;
  if (((char)param_1[2] != '\0') && (piVar2 = (int *)*param_1, piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x30))(piVar2);
    *(undefined1 *)(param_1 + 2) = 0;
  }
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  piVar2 = (int *)*param_1;
  param_1[4] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *param_1 = 0;
  }
  piVar5 = (int *)0x0;
  piVar2 = DAT_010bb22c;
  if (DAT_010bb22c != (int *)0x0) {
    while (piVar4 = piVar2, piVar4 != param_1) {
      piVar2 = (int *)piVar4[3];
      piVar5 = piVar4;
      if ((int *)piVar4[3] == (int *)0x0) {
        return;
      }
    }
    if (piVar5 != (int *)0x0) {
      piVar5[3] = param_1[3];
      return;
    }
    DAT_010bb22c = (int *)param_1[3];
  }
  return;
}


//// FUNCTION FUN_00a3a8e0 @ 00a3a8e0 ////

void __fastcall FUN_00a3a8e0(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_00a3a0e0(*(void **)(param_1 + 0x10),param_1);
  }
  return;
}


//// FUNCTION FUN_00a3a8f0 @ 00a3a8f0 ////

void __fastcall FUN_00a3a8f0(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    FUN_00a3a120(*(void **)(param_1 + 0x10),param_1);
  }
  return;
}


//// FUNCTION FUN_00a3a900 @ 00a3a900 ////

float10 __fastcall FUN_00a3a900(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  fVar4 = (float10)0.0;
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      iVar3 = DAT_0105bec0 - *(int *)(iVar1 + 0xc);
      iVar2 = iVar2 + 1;
      fVar5 = (float10)iVar3;
      if (iVar3 < 0) {
        fVar5 = fVar5 + (float10)4.2949673e+09;
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      fVar4 = ABS(fVar5) + fVar4;
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      return fVar4 / (float10)iVar2;
    }
  }
  return (float10)1e+06;
}


//// FUNCTION FUN_00a3a960 @ 00a3a960 ////

float10 __fastcall FUN_00a3a960(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  fVar4 = (float10)0.0;
  iVar2 = 0;
  if (iVar1 != 0) {
    do {
      iVar3 = DAT_0105bec0 - *(int *)(iVar1 + 0xc);
      iVar2 = iVar2 + 1;
      fVar5 = (float10)iVar3;
      if (iVar3 < 0) {
        fVar5 = fVar5 + (float10)4.2949673e+09;
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      fVar4 = ABS(fVar5) + fVar4;
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      return fVar4 / (float10)iVar2;
    }
  }
  return (float10)1e+06;
}


//// FUNCTION FUN_00a3a9c0 @ 00a3a9c0 ////

bool __thiscall FUN_00a3a9c0(void *this,int param_1,int param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    *param_3 = 0;
    param_3[1] = *(int *)((int)this + 8) - 1;
    uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 8));
    return (char)uVar2 != '\0';
  }
  if (0 < **(int **)((int)this + 0x10)) {
    *param_3 = 0;
    param_3[1] = **(int **)((int)this + 0x10) - 1;
    uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 8));
    if ((char)uVar2 != '\0') {
      return true;
    }
  }
  piVar3 = *(int **)((int)this + 0x10);
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    return false;
  }
  do {
    do {
      piVar1 = (int *)piVar3[5];
      if (piVar1 == (int *)0x0) {
        *param_3 = piVar3[1] + 1;
        param_3[1] = *(int *)((int)this + 8) - 1;
        uVar2 = FUN_00a3a210(param_1,param_2,param_3,*(int *)((int)this + 8));
        return (char)uVar2 != '\0';
      }
      uVar2 = piVar3[1] + 1;
      *param_3 = uVar2;
      uVar5 = *piVar1 - 1;
      param_3[1] = uVar5;
      piVar3 = piVar1;
    } while ((*(int *)((int)this + 8) + -1 < (int)uVar2) || ((int)uVar5 < (int)uVar2));
    iVar4 = (int)uVar2 / param_2;
    if (iVar4 * param_2 < (int)uVar2) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = param_1 * param_2 + -1 + iVar4 * param_2;
  } while ((int)uVar5 < (int)uVar2);
  *param_3 = iVar4 * param_2;
  param_3[1] = uVar2;
  return true;
}


//// FUNCTION FUN_00a3ab40 @ 00a3ab40 ////

void __fastcall FUN_00a3ab40(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (((*(byte *)(param_1 + 4) & 1) != 0) && (piVar1 = (int *)param_1[1], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    param_1[4] = param_1[4] & 0xfffffffe;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  piVar3 = (int *)0x0;
  piVar1 = DAT_010bb230;
  if (DAT_010bb230 != (int *)0x0) {
    while (piVar2 = piVar1, piVar2 != param_1) {
      piVar1 = (int *)*piVar2;
      piVar3 = piVar2;
      if ((int *)*piVar2 == (int *)0x0) {
        return;
      }
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *param_1;
      return;
    }
    DAT_010bb230 = (int *)*param_1;
  }
  return;
}


//// FUNCTION FUN_00a3abb0 @ 00a3abb0 ////

undefined4 __thiscall FUN_00a3abb0(void *this,int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint local_8 [2];
  
  local_8[1] = 0;
  local_8[0] = 0;
  uVar1 = FUN_00a3a470(this,param_1,param_3,local_8);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_00a3a3d0(this,param_3,param_2,(int *)local_8);
    return uVar1;
  }
  return 0;
}


//// FUNCTION FUN_00a3ac00 @ 00a3ac00 ////

undefined4 __cdecl FUN_00a3ac00(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_retaddr;
  
  uVar3 = 0;
  iVar2 = (**(code **)(*g_pDirect3DDevice + 0xc))(g_pDirect3DDevice);
  if (iVar2 != 0) {
    cVar1 = FUN_009a5430();
    if (cVar1 == '\0') {
      return 0;
    }
    FUN_009a5d60();
  }
  if (DAT_010bb230 != (void *)0x0) {
    uVar3 = FUN_00a3abb0(DAT_010bb230,unaff_retaddr,param_1,param_2);
    DAT_010bb224 = 1;
  }
  return uVar3;
}


//// FUNCTION FUN_00a3ac50 @ 00a3ac50 ////

undefined4 * __thiscall FUN_00a3ac50(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe | 2;
  *(void **)((int)this + 4) = DAT_010bb234;
  DAT_010bb234 = this;
  (**(code **)(*g_pDirect3DDevice + 0x6c))
            (g_pDirect3DDevice,*(int *)((int)this + 8) << 1,0x208,0x65,0,this,0);
  return this;
}


//// FUNCTION FUN_00a3acb0 @ 00a3acb0 ////

void __fastcall FUN_00a3acb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) goto LAB_00a3acdb;
    (**(code **)(*piVar1 + 0x30))(piVar1);
    param_1[4] = param_1[4] & 0xfffffffe;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
LAB_00a3acdb:
  piVar1 = DAT_010bb234;
  piVar3 = (int *)0x0;
  if (DAT_010bb234 != (int *)0x0) {
    while (piVar2 = piVar1, piVar2 != param_1) {
      piVar1 = (int *)piVar2[1];
      piVar3 = piVar2;
      if ((int *)piVar2[1] == (int *)0x0) {
        return;
      }
    }
    if (piVar3 != (int *)0x0) {
      piVar3[1] = param_1[1];
      return;
    }
    DAT_010bb234 = (int *)param_1[1];
  }
  return;
}


//// FUNCTION FUN_00a3ad10 @ 00a3ad10 ////

void __cdecl FUN_00a3ad10(char param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int *local_4;
  
  piVar5 = DAT_010bb234;
  puVar4 = DAT_010bb230;
  piVar3 = DAT_010bb22c;
  local_4 = DAT_010bb234;
  puVar6 = DAT_010bb228;
  if (param_1 == '\0') {
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
      (**(code **)(*g_pDirect3DDevice + 0x68))(g_pDirect3DDevice,puVar6[2],8,0,0,puVar6 + 1,0);
    }
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
      (**(code **)(*g_pDirect3DDevice + 0x6c))(g_pDirect3DDevice,piVar3[1],8,0x65,0,piVar3,0);
    }
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      (**(code **)(*g_pDirect3DDevice + 0x68))(g_pDirect3DDevice,puVar4[2],0x208,0,0,puVar4 + 1,0);
    }
    for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
      (**(code **)(*g_pDirect3DDevice + 0x6c))
                (g_pDirect3DDevice,piVar5[2] << 1,0x208,0x65,0,piVar5,0);
    }
  }
  else {
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6) {
      iVar7 = puVar6[4];
      while (iVar7 != 0) {
        iVar1 = *(int *)(iVar7 + 0x14);
        *(undefined4 *)(iVar7 + 0x10) = 0;
        *(undefined4 *)(iVar7 + 0x14) = 0;
        iVar7 = iVar1;
      }
      piVar2 = (int *)puVar6[1];
      puVar6[4] = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        puVar6[1] = 0;
      }
    }
    for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
      iVar7 = piVar3[4];
      while (iVar7 != 0) {
        iVar1 = *(int *)(iVar7 + 0x14);
        *(undefined4 *)(iVar7 + 0x10) = 0;
        *(undefined4 *)(iVar7 + 0x14) = 0;
        iVar7 = iVar1;
      }
      piVar2 = (int *)*piVar3;
      piVar3[4] = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *piVar3 = 0;
      }
    }
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      piVar3 = (int *)puVar4[1];
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        puVar4[1] = 0;
      }
    }
    if (piVar5 != (int *)0x0) {
      do {
        piVar3 = (int *)*local_4;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          *local_4 = 0;
        }
        local_4 = (int *)local_4[1];
      } while (local_4 != (int *)0x0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a3aeb0 @ 00a3aeb0 ////

void FUN_00a3aeb0(void)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaa1c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*g_pDirect3DDevice + 0x10))(g_pDirect3DDevice);
  FUN_00acd42c();
  uVar6 = FUN_00acd42c();
  uVar7 = FUN_00acd42c();
  iVar4 = (int)((int)uVar6 + ((int)uVar6 >> 0x1f & 0x3fffffU)) >> 0x16;
  uVar5 = (uint)uVar7 >> 0x14;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  FUN_009d9820();
  if (0 < iVar4) {
    do {
      puVar2 = operator_new(0x14);
      puStack_8 = (undefined1 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar2 + 3) = 0;
        puVar2[2] = 0x400000;
        puVar2[1] = 0;
        *puVar2 = DAT_010bb228;
        DAT_010bb228 = puVar2;
        puVar2[4] = 0;
        (**(code **)(*g_pDirect3DDevice + 0x68))(g_pDirect3DDevice,puVar2[2],8,0,0,puVar2 + 1,0);
      }
      iVar4 = iVar4 + -1;
      puStack_8 = (undefined1 *)0xffffffff;
    } while (iVar4 != 0);
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    puVar2 = operator_new(0x14);
    puStack_8 = (undefined1 *)0x1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar2[1] = 0x100000;
      puVar2[3] = DAT_010bb22c;
      DAT_010bb22c = puVar2;
      puVar2[4] = 0;
      (**(code **)(*g_pDirect3DDevice + 0x6c))(g_pDirect3DDevice,puVar2[1],8,0x65,0,puVar2,0);
    }
    puStack_8 = (undefined1 *)0xffffffff;
  }
  puVar2 = operator_new(0x14);
  puStack_8 = (undefined1 *)0x2;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = 0;
    puVar2[4] = puVar2[4] & 0xfffffffe | 2;
    puVar2[2] = 0x400000;
    puVar2[1] = 0;
    *puVar2 = DAT_010bb230;
    DAT_010bb230 = puVar2;
    (**(code **)(*g_pDirect3DDevice + 0x68))(g_pDirect3DDevice,puVar2[2],0x208,0,0,puVar2 + 1,0);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar2 = operator_new(0x28);
  puStack_8 = (undefined1 *)0x3;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0x80000;
    puVar2[4] = puVar2[4] & 0xfffffffe | 2;
    puVar2[1] = DAT_010bb234;
    DAT_010bb234 = puVar2;
    (**(code **)(*g_pDirect3DDevice + 0x6c))(g_pDirect3DDevice,puVar2[2] << 1,0x208,0x65,0,puVar2,0)
    ;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar2 = operator_new(0x1800);
  iVar4 = 0;
  psVar3 = (short *)(puVar2 + 1);
  do {
    sVar1 = (short)iVar4;
    psVar3[-1] = sVar1 + 1;
    *psVar3 = sVar1 + 2;
    psVar3[2] = sVar1 + 2;
    psVar3[-2] = sVar1;
    psVar3[1] = sVar1;
    psVar3[3] = sVar1 + 3;
    iVar4 = iVar4 + 4;
    psVar3 = psVar3 + 6;
  } while (iVar4 < 0x800);
  DAT_010bb4dc = LH_BuildPrimitiveIndexBuffer(0,-1,0x400,puVar2,'\0');
                    /* WARNING: Subroutine does not return */
  _free(puVar2);
}


//// FUNCTION FUN_00a3b170 @ 00a3b170 ////

int * __thiscall FUN_00a3b170(void *this,byte param_1)

{
  FUN_00a3ab40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a3b190 @ 00a3b190 ////

int * __thiscall FUN_00a3b190(void *this,byte param_1)

{
  FUN_00a3acb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a3b1b0 @ 00a3b1b0 ////

int * __thiscall FUN_00a3b1b0(void *this,byte param_1)

{
  FUN_00a3a840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a3b1d0 @ 00a3b1d0 ////

void __fastcall FUN_00a3b1d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  param_1[4] = 0;
  if (((char)param_1[3] != '\0') && (piVar2 = (int *)param_1[1], piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x30))(piVar2);
    *(undefined1 *)(param_1 + 3) = 0;
  }
  iVar3 = param_1[4];
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    iVar3 = iVar1;
  }
  piVar2 = (int *)param_1[1];
  param_1[4] = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[1] = 0;
  }
  if (DAT_010bb228 != (int *)0x0) {
    piVar2 = DAT_010bb228;
    piVar5 = (int *)0x0;
    while (piVar4 = piVar2, piVar4 != param_1) {
      piVar2 = (int *)*piVar4;
      piVar5 = piVar4;
      if ((int *)*piVar4 == (int *)0x0) {
        return;
      }
    }
    if (piVar5 != (int *)0x0) {
      *piVar5 = *param_1;
      return;
    }
    DAT_010bb228 = (int *)*param_1;
  }
  return;
}


//// FUNCTION FUN_00a3b270 @ 00a3b270 ////

int FUN_00a3b270(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float local_4;
  
  iVar2 = DAT_010bb22c;
  if (DAT_010bb22c == 0) {
    return 0;
  }
  fVar3 = FUN_00a3a960(DAT_010bb22c);
  local_4 = (float)fVar3;
  for (iVar1 = *(int *)(iVar2 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    fVar3 = FUN_00a3a960(iVar1);
    if ((float10)local_4 < fVar3) {
      local_4 = (float)fVar3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}


//// FUNCTION FUN_00a3b2c0 @ 00a3b2c0 ////

undefined4 * FUN_00a3b2c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float local_4;
  
  puVar2 = DAT_010bb228;
  if (DAT_010bb228 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  fVar3 = FUN_00a3a900((int)DAT_010bb228);
  local_4 = (float)fVar3;
  for (puVar1 = (undefined4 *)*puVar2; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    fVar3 = FUN_00a3a900((int)puVar1);
    if ((float10)local_4 < fVar3) {
      local_4 = (float)fVar3;
      puVar2 = puVar1;
    }
  }
  return puVar2;
}


//// FUNCTION FUN_00a3b310 @ 00a3b310 ////

int * __thiscall FUN_00a3b310(void *this,byte param_1)

{
  FUN_00a3b1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a3b330 @ 00a3b330 ////

char __cdecl FUN_00a3b330(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *this;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  uint local_8;
  undefined4 local_4;
  
  if ((param_1 == (int *)0x0) || (param_1[0xf] == 0)) {
    return '\0';
  }
  bVar1 = true;
  if (((param_1[4] == 0) && ((param_2 & 1) != 0)) && (iVar4 = param_1[0xc], iVar4 != 0)) {
    bVar2 = false;
    local_4 = 0;
    local_8 = 0;
    this = DAT_010bb228;
    while (this != (undefined4 *)0x0) {
      if (bVar2) {
        if (this != (undefined4 *)0x0) goto LAB_00a3b3eb;
        break;
      }
      puVar8 = &local_8;
      iVar3 = FUN_008d9510(param_1[0xe]);
      bVar2 = FUN_00a3a9c0(this,iVar4,iVar3,puVar8);
      if (!bVar2) {
        this = (undefined4 *)*this;
      }
      bVar2 = bVar2;
    }
    this = FUN_00a3b2c0();
    if (this != (undefined4 *)0x0) {
      FUN_00a3a020((int)this);
      puVar8 = &local_8;
      iVar4 = FUN_008d9510(param_1[0xe]);
      bVar2 = FUN_00a3a9c0(this,param_1[0xc],iVar4,puVar8);
      if (bVar2) {
LAB_00a3b3eb:
        puVar8 = &local_8;
        piVar6 = param_1;
        uVar5 = FUN_008d9510(param_1[0xe]);
        iVar4 = FUN_00a3a6d0(this,uVar5,piVar6,(int *)puVar8);
        if ((iVar4 == 0) || (param_1[4] == 0)) {
          bVar1 = false;
          FUN_00a3a000((int)this);
        }
        else {
          (*(code *)param_1[0xf])(param_1[0x10],1,iVar4);
          FUN_00a3a000((int)this);
        }
        goto LAB_00a3b439;
      }
    }
    bVar1 = false;
  }
LAB_00a3b439:
  if (((param_1[10] == 0) && ((param_2 & 2) != 0)) && (iVar4 = param_1[0xd], iVar4 != 0)) {
    bVar2 = false;
    local_4 = 0;
    local_8 = 0;
    piVar6 = DAT_010bb22c;
    while (piVar6 != (int *)0x0) {
      if (bVar2) {
        if (piVar6 != (int *)0x0) goto LAB_00a3b4c8;
        break;
      }
      bVar2 = FUN_00a3a260(piVar6,iVar4,2,&local_8);
      if (!bVar2) {
        piVar6 = (int *)piVar6[3];
      }
      bVar2 = bVar2;
    }
    piVar6 = (int *)FUN_00a3b270();
    if (piVar6 != (int *)0x0) {
      FUN_00a3a0b0((int)piVar6);
      bVar2 = FUN_00a3a260(piVar6,param_1[0xd],2,&local_8);
      if (bVar2) {
LAB_00a3b4c8:
        iVar4 = FUN_00a3a7d0(piVar6,param_1 + 6,(int *)&local_8);
        if ((iVar4 == 0) || (param_1[10] == 0)) {
          bVar1 = false;
        }
        else {
          uVar7 = param_2 & 0xfffffffe;
          if (uVar7 != 2) {
            uVar7 = param_2 & 0xfffffffc;
          }
          (*(code *)param_1[0xf])(param_1[0x10],uVar7,iVar4);
        }
        FUN_00a3a090(piVar6);
        goto LAB_00a3b50c;
      }
    }
    bVar1 = false;
  }
  else {
LAB_00a3b50c:
    piVar6 = g_pDirect3DDevice;
    if ((bVar1) && (param_2 == 3)) {
      iVar4 = *g_pDirect3DDevice;
      uVar5 = FUN_008d9580(param_1[0xe]);
      (**(code **)(iVar4 + 0x164))(piVar6,uVar5);
      piVar6 = g_pDirect3DDevice;
      iVar4 = *g_pDirect3DDevice;
      uVar5 = FUN_008d9510(param_1[0xe]);
      (**(code **)(iVar4 + 400))(piVar6,0,*(undefined4 *)(param_1[4] + 4),0,uVar5);
      (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,*(undefined4 *)param_1[10]);
    }
  }
  if ((param_2 & 1) != 0) {
    param_1[3] = DAT_0105bec0;
  }
  if ((param_2 & 2) != 0) {
    param_1[9] = DAT_0105bec0;
  }
  return bVar1;
}


//// FUNCTION FUN_00a3b5b0 @ 00a3b5b0 ////

void FUN_00a3b5b0(void)

{
  int *_Memory;
  int *_Memory_00;
  int *_Memory_01;
  int *_Memory_02;
  
  if (DAT_010bb4dc != (void *)0x0) {
    FUN_00a509f0(DAT_010bb4dc);
    DAT_010bb4dc = (void *)0x0;
  }
  _Memory_02 = DAT_010bb234;
  _Memory_01 = DAT_010bb230;
  _Memory_00 = DAT_010bb22c;
  _Memory = DAT_010bb228;
  if ((DAT_010bb228 != (int *)0x0) && (DAT_010bb228 != (int *)0x0)) {
    FUN_00a3b1d0(DAT_010bb228);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if ((DAT_010bb230 != (int *)0x0) && (DAT_010bb230 != (int *)0x0)) {
    FUN_00a3ab40(DAT_010bb230);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_01);
  }
  if ((DAT_010bb234 != (int *)0x0) && (DAT_010bb234 != (int *)0x0)) {
    FUN_00a3acb0(DAT_010bb234);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_02);
  }
  if ((DAT_010bb22c != (int *)0x0) && (DAT_010bb22c != (int *)0x0)) {
    FUN_00a3a840(DAT_010bb22c);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  return;
}


//// FUNCTION FUN_00a3b700 @ 00a3b700 ////

void __thiscall FUN_00a3b700(void *this,int *param_1,undefined4 param_2)

{
  *(int **)((int)this + 0x18) = param_1;
  if (param_1 != (int *)0x0) {
    *(char *)((int)this + 0x48) = (char)param_2;
    (**(code **)(*param_1 + 0x1c))(this,param_2);
    return;
  }
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 0xff;
  return;
}


//// FUNCTION FUN_00a3b730 @ 00a3b730 ////

void __thiscall FUN_00a3b730(void *this,char param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x40), iVar1 != 0)) &&
     (iVar2 = *(int *)((int)this + 0x40), iVar2 != 0)) {
    if (param_1 != '\0') {
      FUN_00981a50(iVar1,iVar2,*(int *)((int)this + 0x44));
      return;
    }
    FUN_00983060(iVar1,iVar2,*(int *)((int)this + 0x44));
  }
  return;
}


//// FUNCTION FUN_00a3b770 @ 00a3b770 ////

undefined4 FUN_00a3b770(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


//// FUNCTION FUN_00a3b780 @ 00a3b780 ////

void __fastcall FUN_00a3b780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00971c30(*(void **)(param_1 + 0x44),*(int *)(param_1 + 0x18));
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


//// FUNCTION FUN_00a3b7a0 @ 00a3b7a0 ////

void __fastcall FUN_00a3b7a0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if ((uVar1 & 0x200000) == 0) {
    piVar2 = *(int **)(param_1 + 0x1c);
    *(uint *)(param_1 + 0x48) = uVar1 | 0x200000;
    *(int **)(param_1 + 0x18) = piVar2;
    if (piVar2 == (int *)0x0) {
      *(uint *)(param_1 + 0x48) = uVar1 | 0x2000ff;
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_1 + 0x49);
      (**(code **)(*piVar2 + 0x1c))(param_1,*(undefined1 *)(param_1 + 0x49));
    }
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0x34);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x44);
    }
    FUN_00980620(*(void **)(param_1 + 0x40),*(undefined4 **)(iVar3 + 0x14c));
  }
  return;
}


//// FUNCTION FUN_00a3b800 @ 00a3b800 ////

void __fastcall FUN_00a3b800(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x30))();
  iVar1 = param_1[0x10];
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x25] = 0;
  param_1[0x12] = param_1[0x12] & 0xffdfffffU | 0x4100ff;
  param_1[0x13] = param_1[0x13] & 0xffffffe7;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x90) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
    if (*(void **)(param_1[0x10] + 0x78) != (void *)0x0) {
      FUN_00a019d0(*(void **)(param_1[0x10] + 0x78),(void *)0x0,0xffffffff);
    }
  }
  return;
}


//// FUNCTION FUN_00a3b870 @ 00a3b870 ////

uint __fastcall FUN_00a3b870(int param_1)

{
  if ((*(byte *)(*(uint *)(param_1 + 0x44) + 0x52) & 1) == 0) {
    return *(uint *)(param_1 + 0x44) & 0xffffff00;
  }
  return *(uint *)(param_1 + 0x48) >> 0x17 & 1;
}


//// FUNCTION FUN_00a3b890 @ 00a3b890 ////

void __thiscall FUN_00a3b890(void *this,char param_1)

{
  void *this_00;
  
  if ((*(int *)((int)this + 0x40) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this + 0x40) + 0x78), this_00 != (void *)0x0)) {
    if (param_1 != '\0') {
      FUN_00a01e50(this_00,*(int *)(*(int *)((int)this + 0x44) + 0x148));
      return;
    }
    FUN_00a01e50(this_00,0);
    return;
  }
  return;
}


//// FUNCTION FUN_00a3b8f0 @ 00a3b8f0 ////

undefined4 __fastcall FUN_00a3b8f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = param_1[0x11];
  if (((*(uint *)(iVar1 + 0x50) & 0x100) == 0) ||
     (iVar1 = (**(code **)(*param_1 + 0x34))(), (char)iVar1 == '\0')) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  uVar3 = param_1[0x10];
  if (uVar3 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    for (piVar2 = *(int **)(uVar3 + 0x84); uVar3 = 0, piVar2 != (int *)0x0;
        piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) goto LAB_00a3b951;
    }
  }
  else {
    uVar5 = (uint)*(byte *)(param_1[0x11] + 0x4d);
    iVar1 = 0;
    if (uVar5 != 0) {
      puVar4 = *(uint **)(param_1[0x11] + 0x5c);
      while (((piVar2 = (int *)*puVar4, piVar2 == (int *)0x0 || (piVar2[2] != 0)) ||
             (piVar2[0x10] == 0))) {
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 1;
        if ((int)uVar5 <= iVar1) {
          return (uint)piVar2 & 0xffffff00;
        }
      }
LAB_00a3b951:
      return CONCAT31((int3)((uint)piVar2 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a3b980 @ 00a3b980 ////

undefined4 * __fastcall FUN_00a3b980(undefined4 *param_1)

{
  float fVar1;
  float10 fVar2;
  
  param_1[3] = 0.0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  fVar2 = FUN_004012c0(0.0);
  fVar1 = (float)fVar2;
  param_1[3] = fVar1;
  param_1[5] = fVar1;
  param_1[4] = fVar1;
  return param_1;
}


//// FUNCTION FUN_00a3ba00 @ 00a3ba00 ////

undefined4 * __fastcall FUN_00a3ba00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00a3b980(param_1 + 9);
  param_1[0x13] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a3ba30 @ 00a3ba30 ////

undefined1 * __thiscall FUN_00a3ba30(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  FUN_00972010(this,param_1);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)((int)param_1 + 0x21);
  *(undefined1 *)((int)this + 0x22) = *(undefined1 *)((int)param_1 + 0x22);
  puVar1 = param_1 + 9;
  *(undefined1 *)((int)this + 0x23) = *(undefined1 *)((int)param_1 + 0x23);
  if ((*(byte *)((int)this + 0x20) & 2) != 0) {
    *(undefined4 *)((int)this + 0x24) = *puVar1;
    *(undefined4 *)((int)this + 0x28) = param_1[10];
    *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
    *(undefined4 *)((int)this + 0x30) = param_1[0xc];
    *(undefined4 *)((int)this + 0x34) = param_1[0xd];
    *(undefined4 *)((int)this + 0x38) = param_1[0xe];
    puVar1 = param_1 + 0xf;
  }
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)puVar1;
  *(undefined1 *)((int)this + 0x3d) = *(undefined1 *)((int)puVar1 + 1);
  *(undefined2 *)((int)this + 0x3e) = *(undefined2 *)((int)puVar1 + 2);
  if ((*(byte *)((int)this + 0x20) & 0x10) != 0) {
    *(undefined4 *)((int)this + 0x40) = puVar1[1];
    *(undefined4 *)((int)this + 0x44) = puVar1[2];
    *(undefined4 *)((int)this + 0x48) = puVar1[3];
    *(undefined4 *)((int)this + 0x4c) = puVar1[4];
    return (undefined1 *)((int)puVar1 + (0x14 - (int)param_1));
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  return (undefined1 *)((int)(puVar1 + 1) - (int)param_1);
}


//// FUNCTION FUN_00a3bb30 @ 00a3bb30 ////

void __fastcall FUN_00a3bb30(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  fVar1 = FUN_004012c0(0.0);
  *(float *)(param_1 + 0x30) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x38) = 10;
  fVar1 = FUN_004012c0(0.0);
  *(float *)(param_1 + 0x3c) = (float)fVar1;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffc1ffff | 0x1ffff;
  *(undefined4 *)(param_1 + 0x54) = 0xc62d9c00;
  *(undefined4 *)(param_1 + 0x50) = 0xc62d9c00;
  *(undefined4 *)(param_1 + 0x6c) = 0xc62d9c00;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0x3fffff | 0x9400000;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffe3;
  return;
}


//// FUNCTION FUN_00a3bd10 @ 00a3bd10 ////

undefined4 * __thiscall FUN_00a3bd10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_5c [4];
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte local_3c;
  byte local_3a;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  byte local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaa3e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d77548;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  FUN_00a3b980((undefined4 *)((int)this + 0x98));
  FUN_00aa7870((undefined4 *)((int)this + 0xb0));
  local_5c[0] = 0;
  local_4 = 0;
  local_5c[1] = 0;
  FUN_00a3b980(&local_38);
  local_10 = 0;
  puVar2 = local_5c;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a3ba30(local_5c,param_1);
  FUN_00a3bb30((int)this);
  *(undefined1 *)((int)this + 0x49) = local_4c;
  *(undefined4 *)((int)this + 8) = local_5c[3];
  uVar3 = *(uint *)((int)this + 0x48) & 0xfff3ffff;
  *(undefined4 *)((int)this + 4) = local_5c[2];
  *(undefined4 *)((int)this + 0x18) = local_48;
  *(undefined4 *)((int)this + 0x10) = local_44;
  *(uint *)((int)this + 0x48) = uVar3;
  if ((local_3c & 4) != 0) {
    *(uint *)((int)this + 0x48) = uVar3 | 0x40000;
  }
  if ((local_3c & 8) != 0) {
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffbffff | 0x80000;
  }
  *(uint *)((int)this + 0x48) =
       *(uint *)((int)this + 0x48) ^
       ((uint)local_3a << 0x18 ^ *(uint *)((int)this + 0x48)) & 0x1000000;
  *(undefined4 *)((int)this + 0x98) = local_38;
  *(undefined4 *)((int)this + 0x90) = local_40;
  *(undefined4 *)((int)this + 0x9c) = local_34;
  *(undefined4 *)((int)this + 0xa0) = local_30;
  *(undefined4 *)((int)this + 0xa4) = local_2c;
  *(undefined4 *)((int)this + 0xa8) = local_28;
  *(undefined4 *)((int)this + 0xac) = local_24;
  *(undefined4 *)((int)this + 0x80) = local_1c;
  *(undefined4 *)((int)this + 0x84) = local_18;
  *(undefined4 *)((int)this + 0x88) = local_14;
  *(undefined4 *)((int)this + 0x8c) = local_10;
  *(uint *)((int)this + 0xc4) = (uint)local_20;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a3beb0 @ 00a3beb0 ////

void __fastcall FUN_00a3beb0(int *param_1)

{
  void *this;
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  
  if (param_1[2] == 0xe) {
    return;
  }
  if ((param_1[10] == -0x3b860000) && (param_1[0x10] != 0)) {
    param_1[10] = *(int *)(param_1[0x10] + 0x80);
    param_1[9] = 0x43480000;
  }
  bVar6 = param_1[2] == 0xf;
  if (bVar6) {
    iVar2 = *(int *)(param_1[0x11] + 0x148);
    param_1[0x10] = iVar2;
    if (iVar2 == 0) {
      return;
    }
    InterlockedIncrement((LONG *)(iVar2 + 0x10));
    if (((*(int *)(param_1[0x10] + 0x78) == 0) &&
        (iVar2 = FUN_0097e350((void *)param_1[0x10],0), iVar2 != 0)) &&
       (iVar2 = FUN_0097e350((void *)param_1[0x10],0), *(int *)(iVar2 + 0x40) != 0)) {
      FUN_0097e2b0(param_1[0x10]);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (((cVar1 == '\0') || (piVar5 = (int *)param_1[6], piVar5 == (int *)0x0)) ||
     (param_1[0x10] == 0)) {
    piVar5 = (int *)param_1[6];
    if (piVar5 != (int *)0x0) {
      if (!bVar6) goto LAB_00a3bfcc;
      goto LAB_00a3bf62;
    }
  }
  else {
LAB_00a3bf62:
    pvVar3 = (void *)(**(code **)(*piVar5 + 0x28))();
    this = *(void **)(param_1[0x10] + 0x78);
    if ((pvVar3 != (void *)0x0) && (this != (void *)0x0)) {
      *(uint *)((int)this + 0xc) =
           *(uint *)((int)this + 0xc) ^ (param_1[0x12] << 4 ^ *(uint *)((int)this + 0xc)) & 0xf0;
      uVar4 = FUN_00a019d0(this,pvVar3,0xffffffff);
      if ((char)uVar4 != '\0') {
        (**(code **)(*(int *)param_1[6] + 0x24))();
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
      }
    }
  }
  if ((bVar6) && ((undefined4 *)param_1[0x10] != (undefined4 *)0x0)) {
    FUN_0040a5b0((undefined4 *)param_1[0x10]);
    param_1[0x10] = 0;
  }
LAB_00a3bfcc:
  FUN_00aa7970(param_1 + 0x2c);
  return;
}


//// FUNCTION FUN_00a3bfe0 @ 00a3bfe0 ////

void __thiscall FUN_00a3bfe0(void *this,int param_1)

{
  void *this_00;
  
  if ((((*(int *)((int)this + 8) != 2) && (*(int *)((int)this + 8) != 3)) ||
      (*(int *)((int)this + 0x20) == 0)) &&
     (((*(int *)((int)this + 0x40) != 0 &&
       (this_00 = *(void **)(*(int *)((int)this + 0x40) + 0x78), this_00 != (void *)0x0)) &&
      (param_1 != 0)))) {
    FUN_00a017f0(this_00,param_1,0xffffffff,(undefined4 *)0x0);
  }
  return;
}


//// FUNCTION FUN_00a3c020 @ 00a3c020 ////

void __fastcall FUN_00a3c020(int param_1)

{
  uint *puVar1;
  int iVar2;
  void *this;
  undefined4 *_Memory;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x90) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x94) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc4) = 0;
    *(uint *)(*(int *)(param_1 + 0x40) + 0x9c) =
         *(uint *)(*(int *)(param_1 + 0x40) + 0x9c) & 0xbfffffff;
    FUN_00980620(*(void **)(param_1 + 0x40),(undefined4 *)0x0);
    puVar1 = (uint *)(*(int *)(param_1 + 0x40) + 0xa0);
    *puVar1 = *puVar1 & 0xfffff007;
    puVar1 = (uint *)(*(int *)(param_1 + 0x40) + 0xa0);
    *puVar1 = *puVar1 & 0xffffbfff;
    puVar1 = (uint *)(*(int *)(param_1 + 0x40) + 0xa0);
    *puVar1 = *puVar1 & 0xffffdfff;
    puVar1 = (uint *)(*(int *)(param_1 + 0x40) + 0xa0);
    *puVar1 = *puVar1 | 0x1000;
    FUN_00983b10(*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x44));
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xd0) = 0;
    this = *(void **)(*(int *)(param_1 + 0x40) + 0x78);
    if (this != (void *)0x0) {
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xffffff0f;
      FUN_00a01e50(this,0);
      _Memory = *(undefined4 **)((int)this + 0x74);
      if (_Memory != (undefined4 *)0x0) {
        FUN_00a01ff0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xfffffff0;
      *(undefined4 *)((int)this + 0x74) = 0;
      if (*(void **)((int)this + 0x178) != (void *)0x0) {
        FUN_00a31bb0(*(void **)((int)this + 0x178),(char *)0x0,-1,'\x01');
        FUN_00980750(*(void **)(param_1 + 0x40),0,1.0,-1);
      }
      FUN_00a01be0(this,(undefined4 *)0x0,0,0,(void *)0x0);
    }
    FUN_00973690(*(void **)(param_1 + 0x44),*(int *)(param_1 + 0xc),(void *)0x0);
    if (((*(uint *)(param_1 + 0x48) & 0x20000) != 0) &&
       (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0)) {
      FUN_0040a5b0(*(undefined4 **)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


//// FUNCTION FUN_00a3c720 @ 00a3c720 ////

undefined4 __fastcall FUN_00a3c720(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float fStack_20;
  undefined4 local_10;
  undefined4 *apuStack_c [3];
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 0x40) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x18), uVar3 = 0, piVar1 != (int *)0x0)) {
    local_10 = 0;
    iVar2 = *piVar1;
    fStack_20 = 1.5040687e-38;
    fStack_20 = (float)(**(code **)(*piVar1 + 0x24))();
    uVar3 = (**(code **)(iVar2 + 0x20))(*(uint *)(param_1 + 0x48) & 0xff,apuStack_c,&local_10);
    if ((char)uVar3 != '\0') {
      FUN_00973350(*(void **)(param_1 + 0x44),(float *)&stack0xffffffe4,&fStack_20,
                   *(byte *)(param_1 + 0x4c) & 1,param_1);
      *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc4) = unaff_ESI;
      if (apuStack_c[0] != (undefined4 *)0x0) {
        *apuStack_c[0] = unaff_EDI;
        apuStack_c[0][1] = unaff_EBX;
        apuStack_c[0][2] = unaff_ESI;
        return CONCAT31((int3)((uint)apuStack_c[0] >> 8),1);
      }
      apuStack_c[0] = (undefined4 *)0x3fa66666;
      if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
        apuStack_c[0] = (undefined4 *)0x3f800000;
      }
      uVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))
                        (&stack0xffffffe4,fStack_20,apuStack_c[0]);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a3c810 @ 00a3c810 ////

void __fastcall FUN_00a3c810(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfaa5e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d77548;
  local_4 = 0;
  FUN_00a3c020((int)param_1);
  local_4 = 0xffffffff;
  FUN_00aa7940(param_1 + 0x2c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a3c870 @ 00a3c870 ////

void __thiscall FUN_00a3c870(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float local_30 [12];
  
  local_30[0xb] = 0.0;
  local_30[10] = 0.0;
  local_30[9] = 0.0;
  local_30[7] = 0.0;
  local_30[6] = 0.0;
  local_30[5] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_30[8] = 1.0;
  local_30[4] = 1.0;
  local_30[0] = 1.0;
  FUN_009ab3f0(local_30,*(float *)((int)this + 0xdc),*(float *)((int)this + 0xe0),
               *(float *)((int)this + 0xe4));
  local_30[9] = local_30[9] + *(float *)((int)this + 0xd0);
  local_30[10] = local_30[10] + *(float *)((int)this + 0xd4);
  local_30[0xb] = local_30[0xb] + *(float *)((int)this + 0xd8);
  iVar1 = *(int *)(*(int *)((int)this + 0x44) + 0x148);
  if (iVar1 != 0) {
    FUN_009aa830(local_30,(float *)(iVar1 + 0x18));
  }
  pfVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00a3c960 @ 00a3c960 ////

void __thiscall
FUN_00a3c960(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  float afStack_38 [12];
  
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) | 2;
  *(undefined4 *)((int)this + 0xd0) = param_1;
  *(undefined4 *)((int)this + 0xd4) = param_2;
  *(undefined4 *)((int)this + 0xd8) = param_3;
  *(undefined4 *)((int)this + 0xdc) = param_4;
  *(undefined4 *)((int)this + 0xe0) = param_5;
  *(undefined4 *)((int)this + 0xe4) = param_6;
  if (*(int **)((int)this + 0x40) != (int *)0x0) {
    iVar1 = **(int **)((int)this + 0x40);
    FUN_00a3c870(this,afStack_38);
    (**(code **)(iVar1 + 0x24))();
  }
  return;
}


//// FUNCTION FUN_00a3c9c0 @ 00a3c9c0 ////

float * __thiscall FUN_00a3c9c0(void *this,float *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_30 [12];
  
  if ((*(byte *)((int)this + 0x4c) & 2) != 0) {
    FUN_00a3c870(this,param_1);
    return param_1;
  }
  local_30[0xb] = 0.0;
  local_30[10] = 0.0;
  local_30[9] = 0.0;
  local_30[7] = 0.0;
  local_30[6] = 0.0;
  local_30[5] = 0.0;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  local_30[8] = 1.0;
  local_30[4] = 1.0;
  local_30[0] = 1.0;
  FUN_009ab3f0(local_30,*(float *)((int)this + 0xa4),*(float *)((int)this + 0xa8),
               *(float *)((int)this + 0xac));
  local_30[9] = *(float *)((int)this + 0x98);
  local_30[10] = *(float *)((int)this + 0x9c);
  local_30[0xb] = *(float *)((int)this + 0xa0);
  FUN_009aa830(local_30,(float *)(*(int *)((int)this + 0x44) + 0x90));
  pfVar2 = local_30;
  pfVar3 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a3cab0 @ 00a3cab0 ////

void __fastcall FUN_00a3cab0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float afStack_8c [4];
  undefined4 uStack_7c;
  undefined4 in_stack_ffffff8c;
  undefined4 uVar9;
  int *piVar10;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  float fStack_4c;
  float afStack_48 [2];
  int iStack_40;
  float afStack_3c [2];
  undefined4 uStack_34;
  float afStack_30 [12];
  
  if ((((((int *)param_1[0x10] != (int *)0x0) && (uVar5 = param_1[0x12], (uVar5 & 0x10000) != 0)) &&
       (((*(uint *)(param_1[0x11] + 0x50) >> 0x10 & 1) == 0 || ((uVar5 >> 0x17 & 1) == 0)))) &&
      (param_1[2] != 0xe)) &&
     ((-1 < (int)uVar5 || ((*(uint *)(param_1[0x11] + 0x50) >> 0x1c & 1) == 0)))) {
    if ((uVar5 & 0x400000) != 0) {
      param_1[0x12] = uVar5 & 0xffbfffff;
      if ((*(byte *)(param_1 + 0x13) & 2) == 0) {
        iVar3 = *(int *)param_1[0x10];
        FUN_00a3c9c0(param_1,afStack_8c);
        (**(code **)(iVar3 + 0x24))();
      }
      else {
        piVar10 = param_1 + 0x37;
        uVar9 = 0xa3cb33;
        FUN_00403380(&stack0xffffff98,piVar10);
        uStack_7c = 0xa3cb44;
        FUN_00403380(&stack0xffffff8c,param_1 + 0x34);
        FUN_00a3c960(param_1,in_stack_ffffff8c,uVar9,piVar10,in_stack_ffffff98,in_stack_ffffff9c,
                     in_stack_ffffffa0);
      }
    }
    iVar3 = FUN_0097e350((void *)param_1[0x10],0);
    if (iVar3 != 0) {
      piVar10 = *(int **)(param_1[0x10] + 0x78);
      if ((piVar10 != (int *)0x0) &&
         ((*(int *)(iVar3 + 0x40) != 0 || ((*(uint *)(iVar3 + 0xe4) & 0x20000000) != 0)))) {
        if ((int *)param_1[6] != (int *)0x0) {
          iVar4 = (**(code **)(*(int *)param_1[6] + 0x24))();
          FUN_00a03180(piVar10,iVar4);
        }
        if ((*piVar10 == 0) && ((*(uint *)(param_1[0x11] + 0x50) & 0x200) != 0)) {
          FUN_00985490();
        }
        if ((int *)param_1[6] != (int *)0x0) {
          fStack_4c = 0.0;
          iVar4 = *(int *)param_1[6];
          (**(code **)(iVar4 + 0x24))();
          cVar2 = (**(code **)(iVar4 + 0x20))();
          if (cVar2 != '\0') {
            uVar5 = *(uint *)(iVar3 + 0xe4) >> 0x1e & 1;
            if (uVar5 != 0) {
              uStack_34 = 0;
            }
            if (((*(byte *)(param_1 + 0x13) & 1) == 0) && (uVar5 == 0)) {
              cVar2 = '\0';
            }
            else {
              cVar2 = '\x01';
            }
            FUN_00973350((void *)param_1[0x11],afStack_3c,&fStack_4c,cVar2,(int)param_1);
            *(undefined4 *)(param_1[0x10] + 0xc4) = uStack_34;
            afStack_48[0] = 1.3;
            if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
              afStack_48[0] = 1.0;
            }
            (**(code **)(*(int *)param_1[0x10] + 0x20))();
          }
        }
      }
      iVar3 = param_1[0x11];
      if (((*(byte *)(iVar3 + 0x54) & 2) != 0) && (*(int *)(iVar3 + 0x148) != 0)) {
        fVar8 = FUN_0097efd0(*(int *)(iVar3 + 0x148));
        if ((float10)1.0 == fVar8) {
          return;
        }
        *(undefined4 *)(param_1[0x10] + 0x44) = *(undefined4 *)(iVar3 + 0x1d8);
      }
      if ((param_1[0x12] & 0x8000000U) != 0) {
        fVar8 = FUN_009739f0(param_1[0x11]);
        fStack_4c = (float)fVar8;
        if ((float10)(float)param_1[0x33] != fVar8) {
          pfVar6 = (float *)(param_1[0x10] + 0x18);
          pfVar7 = afStack_30;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar7 = pfVar7 + 1;
          }
          FUN_009ab250(afStack_30);
          fVar1 = *(float *)(param_1[0x10] + 0x7c);
          FUN_00527c00(afStack_30,fVar1,fVar1,fStack_4c * *(float *)(param_1[0x10] + 0x7c));
          pfVar6 = afStack_30;
          pfVar7 = afStack_8c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar7 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar7 = pfVar7 + 1;
          }
          (**(code **)(*(int *)param_1[0x10] + 0x24))();
          param_1[0x33] = (int)fStack_4c;
        }
      }
      if ((param_1[0x12] & 0x10000000U) != 0) {
        afStack_48[0] = 0.0;
        FUN_00973c60((void *)param_1[0x11],afStack_3c,afStack_48);
        if ((*(uint *)(param_1[0x11] + 0x50) & 0x8000000) == 0) {
          fStack_4c = afStack_48[0];
        }
        else {
          fVar8 = FUN_00973d00(param_1[0x11]);
          fStack_4c = (float)fVar8;
        }
        iVar3 = *(int *)param_1[0x10];
        FUN_00401340(&stack0xffffff9c,fStack_4c);
        (**(code **)(iVar3 + 0x20))();
      }
      iStack_40 = param_1[0x10];
      afStack_48[1] = 1.4013e-45;
      if (((*(uint *)(param_1[0x11] + 0x50) >> 0x10 & 1) != 0) ||
         ((*(uint *)(param_1[0x11] + 0x50) >> 0x1c & 1) != 0)) {
        *(uint *)(iStack_40 + 0x9c) = *(uint *)(iStack_40 + 0x9c) | 0x400000;
      }
      uVar9 = FUN_00a3b8f0(param_1);
      if ((char)uVar9 != '\0') {
        (**(code **)(*(int *)param_1[0x10] + 0x10))();
      }
      param_1[0x13] = param_1[0x13] | 8;
    }
  }
  return;
}


//// FUNCTION FUN_00a3cdf0 @ 00a3cdf0 ////

void FUN_00a3cdf0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a3b770((int)param_1);
  *param_1 = 6;
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a3ce10 @ 00a3ce10 ////

void __fastcall FUN_00a3ce10(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfaa78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d707c0;
  puVar1 = (undefined4 *)param_1[0x10];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[0x10] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00a3c810(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a3d330 @ 00a3d330 ////

void __fastcall FUN_00a3d330(int param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined1 *puVar5;
  float fVar6;
  undefined1 auStack_44 [8];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float *pfStack_1c;
  float *apfStack_18 [6];
  
  if ((*(int **)(param_1 + 0x18) != (int *)0x0) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(), iVar2 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x28))();
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
    (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
    FUN_00401380(auStack_44,4,2,&LAB_00403280);
    FUN_00401380(apfStack_18,0xc,2,&LAB_00403370);
    fVar6 = 0.0;
    puVar5 = auStack_44;
    fVar4 = (float)(*(uint *)(param_1 + 0x48) & 0xff);
    (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0x18) + 0x20))
              (*(uint *)(param_1 + 0x48) & 0xff,&pfStack_1c,&stack0xffffffb0,900000);
    pfVar3 = FUN_00429400((float *)&stack0xffffff98,(float)puVar5,fVar6,fVar4);
    pfVar1 = apfStack_18[0];
    *apfStack_18[0] = *pfVar3;
    fStack_3c = fStack_24 * fVar4;
    fVar6 = 1.0 - fVar4;
    *pfStack_1c = fStack_38 * fVar6 + fStack_2c * fVar4;
    pfStack_1c[1] = fStack_34 * fVar6 + fStack_28 * fVar4;
    pfStack_1c[2] = fStack_30 * fVar6 + fStack_3c;
    apfStack_18[0] = (float *)pfStack_1c[2];
    FUN_00973350(*(void **)(param_1 + 0x44),pfStack_1c,pfVar1,'\0',param_1);
    pfStack_1c[2] = (float)apfStack_18[0];
  }
  return;
}


//// FUNCTION FUN_00a3d580 @ 00a3d580 ////

void __fastcall FUN_00a3d580(int param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float afStack_18 [2];
  float fStack_10;
  undefined4 auStack_c [3];
  
  bVar9 = *(int *)(param_1 + 8) == 0xf;
  if (((*(int *)(param_1 + 0x40) == 0) || ((*(byte *)(param_1 + 0x4a) & 1) == 0)) ||
     (uVar3 = FUN_00a3b870(param_1), (char)uVar3 != '\0')) {
    if (!bVar9) {
      return;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x44) + 0x148);
    *(int *)(param_1 + 0x40) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    InterlockedIncrement((LONG *)(iVar4 + 0x10));
  }
  if (*(float *)(param_1 + 0x24) == 0.0) {
LAB_00a3d606:
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x24) - (float)*(int *)(*(int *)(param_1 + 0x44) + 0x88);
    *(float *)(param_1 + 0x24) = fVar8;
    if (fVar8 < 0.0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      goto LAB_00a3d606;
    }
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x78);
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
LAB_00a3d627:
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) goto LAB_00a3d62f;
  }
  else {
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
      FUN_00a03180(piVar1,iVar4);
      goto LAB_00a3d627;
    }
LAB_00a3d62f:
    if ((*(uint *)(*(int *)(param_1 + 0x44) + 0x50) & 0x200) != 0) {
      FUN_00985490();
    }
  }
  piVar1 = *(int **)(param_1 + 0x18);
  fStack_28 = 0.0;
  if (piVar1 != (int *)0x0) {
    if ((piVar1[0x12] & 0x8000000U) == 0) {
      iVar4 = *piVar1;
      uVar5 = (**(code **)(iVar4 + 0x24))();
      (**(code **)(iVar4 + 0x20))(*(uint *)(param_1 + 0x48) & 0xff,afStack_18,&fStack_28,uVar5);
      FUN_00973350(*(void **)(param_1 + 0x44),afStack_18,&fStack_28,'\0',param_1);
      *(float *)(*(int *)(param_1 + 0x40) + 0xc4) = fStack_10;
    }
    else {
      FUN_00a3d330(param_1);
      pvVar2 = *(void **)(*(int *)(param_1 + 0x44) + 0x148);
      if (pvVar2 == (void *)0x0) {
        fVar10 = (float10)*(float *)(*(int *)(param_1 + 0x44) + 0x20);
      }
      else {
        fVar10 = FUN_0097f880(pvVar2,(float *)(*(int *)(param_1 + 0x40) + 0x3c),(undefined4 *)0x0);
      }
      *(float *)(*(int *)(param_1 + 0x40) + 0xc4) = (float)fVar10;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar4 = *(int *)(param_1 + 8);
      if ((((iVar4 == 2) || (iVar4 == 3)) || ((iVar4 == 10 || ((iVar4 == 0xb || (iVar4 == 5)))))) &&
         (fStack_28 = *(float *)(*(int *)(param_1 + 0x40) + 0x80),
         (*(uint *)(param_1 + 0x48) & 0x100000) != 0)) {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x78) + 0x74);
        if (piVar1 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *piVar1;
        }
        fStack_20 = *(float *)(param_1 + 0x38);
        fVar8 = *(float *)(param_1 + 0x3c);
        if (iVar4 != 0) {
          iVar7 = 0;
          if (*(char *)(iVar4 + 0x33) == '\0') {
            iVar7 = 0;
          }
          else {
            if (*(char *)(iVar4 + 0x33) == '\0') {
              iVar7 = -1;
            }
            iVar7 = *(int *)(iVar4 + 0x6c + iVar7 * 4);
          }
          uVar3 = FUN_00429570(iVar4);
          fVar8 = *(float *)(iVar7 + 0x1c);
          fStack_20 = (float)(uVar3 - 1);
        }
        fVar11 = (float)(int)fStack_20;
        if ((int)fStack_20 < 0) {
          fVar11 = fVar11 + 4.2949673e+09;
        }
        fStack_24 = ((float)*(int *)(param_1 + 0x2c) * 100.0 + (float)DAT_01050b60) /
                    (fVar11 * 100.0);
        if (fStack_24 <= 1.0) {
          if (fStack_24 < 0.0) {
            fStack_24 = 0.0;
          }
        }
        else {
          fStack_24 = 1.0;
        }
        fVar11 = fStack_24;
        fVar10 = FUN_004012c0(0.0);
        pfVar6 = FUN_00429400(&fStack_20,(float)fVar10,fVar8,fVar11);
        fVar10 = FUN_004012c0(*(float *)(param_1 + 0x30) + *pfVar6);
        fStack_28 = (float)fVar10;
        pvVar2 = *(void **)(*(int *)(*(int *)(param_1 + 0x40) + 0x78) + 0x74);
        if (pvVar2 != (void *)0x0) {
          FUN_00a03180(pvVar2,*(int *)(param_1 + 0x2c) * 100 + DAT_01050b60);
        }
      }
      if (*(int *)(param_1 + 8) == 1) {
        FUN_00a01be0(*(void **)(*(int *)(param_1 + 0x40) + 0x78),(undefined4 *)0x0,1000,0,
                     *(void **)(param_1 + 0x20));
      }
    }
    fVar8 = 1.0 - (200.0 - *(float *)(param_1 + 0x24)) * 0.005;
    fVar10 = FUN_004012c0(*(float *)(param_1 + 0x28));
    FUN_00429400(&fStack_20,fStack_28,(float)fVar10,fVar8);
    if ((*(uint *)(*(int *)(param_1 + 0x18) + 0x48) & 0x4000000) != 0) {
      pfVar6 = (float *)(param_1 + 0x50);
      if ((*(int *)(param_1 + 0x50) == -0x39d26400) ||
         (*(int *)(*(int *)(param_1 + 0x40) + 0xb0) != DAT_0105bec0 + -1)) {
        FUN_00413780(pfVar6,fStack_10);
      }
      else {
        FUN_004137b0(pfVar6,(float)*(int *)(*(int *)(param_1 + 0x44) + 0x88));
        fVar8 = fStack_10;
        fStack_24 = fStack_10;
        fStack_10 = *pfVar6;
        FUN_00415910(pfVar6,fVar8,0.0,160.0);
      }
    }
    if (!bVar9) {
      (**(code **)(**(int **)(param_1 + 0x40) + 0x20))(afStack_18,fStack_20,0x3f800000);
    }
    if ((*(int *)(param_1 + 8) == 0xb) &&
       ((*(uint *)((int)*(void **)(param_1 + 0x44) + 0x50) & 0x8000000) != 0)) {
      fStack_20 = 0.0;
      FUN_00973c60(*(void **)(param_1 + 0x44),auStack_c,&fStack_20);
      (**(code **)(**(int **)(param_1 + 0x40) + 0x20))
                (auStack_c,(*(int **)(param_1 + 0x40))[0x20],0x3f800000);
    }
  }
  uVar3 = *(uint *)(*(int *)(param_1 + 0x44) + 0x50);
  if (((((uVar3 >> 0x10 & 1) == 0) && ((uVar3 >> 0x1c & 1) == 0)) ||
      (iVar4 = *(int *)(param_1 + 0x40), iVar4 == 0)) || (bVar9)) {
    if (((*(int *)(param_1 + 8) == 1) || (*(int *)(param_1 + 8) == 5)) &&
       ((iVar4 = *(int *)(param_1 + 0x40), iVar4 != 0 &&
        (*(uint *)(iVar4 + 0x9c) = *(uint *)(iVar4 + 0x9c) | 0x400000, *(int *)(param_1 + 8) == 5)))
       ) {
      for (piVar1 = *(int **)(*(int *)(param_1 + 0x40) + 0x88); piVar1 != (int *)0x0;
          piVar1 = (int *)piVar1[1]) {
        *(uint *)(*piVar1 + 0x9c) = *(uint *)(*piVar1 + 0x9c) | 0x400000;
      }
    }
    if ((*(int *)(param_1 + 8) != 4) || (*(int *)(param_1 + 0x18) == 0)) goto LAB_00a3d9e5;
    pfVar6 = (float *)0x0;
  }
  else {
    fStack_20 = 1.4013e-45;
    *(uint *)(iVar4 + 0x9c) = *(uint *)(iVar4 + 0x9c) | 0x400000;
    pfVar6 = &fStack_20;
    iStack_1c = iVar4;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x10))(pfVar6,1);
LAB_00a3d9e5:
  FUN_00aa78c0((int *)(param_1 + 0xb0));
  if ((bVar9) && (*(undefined4 **)(param_1 + 0x40) != (undefined4 *)0x0)) {
    FUN_0040a5b0(*(undefined4 **)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 8;
  return;
}


//// FUNCTION FUN_00a3da30 @ 00a3da30 ////

undefined4 * __cdecl FUN_00a3da30(void *param_1,int param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaabb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(100);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00a45460(this,param_1,param_2);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a3da90 @ 00a3da90 ////

undefined4 * __cdecl FUN_00a3da90(undefined4 param_1,float *param_2,float param_3,int param_4)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaadb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x50);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00aa8940(this,param_1,param_2,param_3,param_4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a3db40 @ 00a3db40 ////

char * __cdecl FUN_00a3db40(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = _strncmp(param_1,param_2,(int)pcVar2 - (int)(param_2 + 1));
  if (iVar3 != 0) {
    return (char *)0x0;
  }
  return param_1 + ((int)pcVar2 - (int)(param_2 + 1));
}


//// FUNCTION FUN_00a3db80 @ 00a3db80 ////

float10 __cdecl FUN_00a3db80(void *param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_1 != (void *)0x0) {
    uVar1 = FUN_009734c0(param_1,(byte *)"sld_gore");
    if ((char)uVar1 != '\0') {
      fVar2 = FUN_009722e0((int)param_1,(byte *)"sld_gore");
      return fVar2;
    }
  }
  return (float10)1.0;
}


//// FUNCTION FUN_00a3dbb0 @ 00a3dbb0 ////

bool __cdecl FUN_00a3dbb0(int *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  if ((param_2 != (char *)0x0) && (cVar1 = *param_2, cVar1 != '\0')) {
    iVar3 = 0;
    if (cVar1 != '-') goto LAB_00a3dbd0;
    while( true ) {
      param_2 = param_2 + 1;
LAB_00a3dbd0:
      cVar2 = *param_2;
      if ((cVar2 < '0') || ('9' < cVar2)) break;
      iVar3 = cVar2 + -0x30 + iVar3 * 10;
    }
    *param_1 = iVar3;
    if (cVar1 == '-') {
      *param_1 = -iVar3;
    }
    return param_2 != (char *)0x0;
  }
  *param_1 = 0;
  return param_2 != (char *)0x0;
}


//// FUNCTION FUN_00a3dc50 @ 00a3dc50 ////

char * FUN_00a3dc50(void)

{
  char *pcVar1;
  char cVar2;
  char *in_EAX;
  int iVar3;
  
  if ((in_EAX != (char *)0x0) && (cVar2 = *in_EAX, cVar2 != '\0')) {
    while (cVar2 == ' ') {
      pcVar1 = in_EAX + 1;
      in_EAX = in_EAX + 1;
      cVar2 = *pcVar1;
    }
    if (*in_EAX != '\0') {
      cVar2 = *in_EAX;
      for (iVar3 = 0; (cVar2 != '\0' && (in_EAX[iVar3] != ' ')); iVar3 = iVar3 + 1) {
        cVar2 = in_EAX[iVar3 + 1];
      }
      in_EAX[iVar3] = '\0';
      return in_EAX;
    }
  }
  return (char *)0x0;
}


//// FUNCTION FUN_00a3dc90 @ 00a3dc90 ////

uint __cdecl FUN_00a3dc90(int *param_1,void *param_2)

{
  uint in_EAX;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == (void *)0x0) {
    return in_EAX & 0xffffff00;
  }
  pcVar1 = (char *)FUN_009722a0(param_2,*param_1);
  pcVar2 = (char *)FUN_009722a0(param_2,param_1[1]);
  if ((pcVar1 != (char *)0x0) && (pcVar2 != (char *)0x0)) {
    pcVar3 = FUN_00a3db40(pcVar1,(char *)&PTR_LAB_005f7863_3_00d708e0);
    if (pcVar3 != (char *)0x0) {
      iVar4 = 8;
      bVar5 = true;
      pcVar3 = "vehicle";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar5 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar5);
      if (bVar5) {
        return 1;
      }
    }
    pcVar2 = FUN_00a3db40(pcVar1,"coplights_");
    if (pcVar2 != (char *)0x0) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00a3dd60 @ 00a3dd60 ////

uint __cdecl FUN_00a3dd60(float *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined3 extraout_var;
  int local_4;
  
  pcVar3 = (char *)FUN_009ac120(param_2,param_3);
  if (pcVar3 != (char *)0xffffffff) {
    pcVar1 = param_3 + 1;
    do {
      cVar2 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar2 != '\0');
    pcVar3 = pcVar3 + ((int)param_3 - (int)pcVar1) + (int)param_2;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      FUN_00a3dbb0(&local_4,pcVar3);
      *param_1 = (float)local_4 * 0.001;
      return CONCAT31(extraout_var,1);
    }
  }
  return (uint)pcVar3 & 0xffffff00;
}


//// FUNCTION FUN_00a3de70 @ 00a3de70 ////

undefined4 * __thiscall FUN_00a3de70(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *puVar1 = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *puVar1 = *param_1;
  *(undefined4 *)((int)this + 0x10) = param_1[1];
  *(undefined4 *)((int)this + 0x14) = param_1[2];
  *(undefined4 *)((int)this + 0x18) = param_1[3];
  *(undefined4 *)((int)this + 0x1c) = param_1[4];
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)this = *(undefined4 *)(param_2 + 0x80);
  *(void **)(param_2 + 0x80) = this;
  *(int *)((int)this + 8) = param_3;
  if (param_3 != 0) {
    InterlockedIncrement((LONG *)(param_3 + 0x10));
  }
  return this;
}


//// FUNCTION FUN_00a3def0 @ 00a3def0 ////

void __fastcall FUN_00a3def0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  
  puVar4 = *(undefined4 **)(param_1[1] + 0x80);
  puVar1 = (undefined4 *)0x0;
  do {
    puVar2 = puVar4;
    if (puVar2 == (undefined4 *)0x0) {
LAB_00a3df23:
      puVar1 = (undefined4 *)param_1[2];
      if (puVar1 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar1 + 4);
        uVar3 = DAT_0105b588;
        if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar3;
        param_1[2] = 0;
      }
      return;
    }
    if (puVar2 == param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1[1] + 0x80) = *param_1;
      }
      else {
        *puVar1 = *param_1;
      }
      goto LAB_00a3df23;
    }
    puVar4 = (undefined4 *)*puVar2;
    puVar1 = puVar2;
  } while( true );
}


//// FUNCTION FUN_00a3df70 @ 00a3df70 ////

uint __cdecl FUN_00a3df70(float *param_1,char *param_2)

{
  char *pcVar1;
  uint in_EAX;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    in_EAX = FUN_009ac120(param_2,"v3(");
    if ((-1 < (int)in_EAX) && (pcVar1 = param_2 + in_EAX + 3, *pcVar1 != '\0')) {
      dVar2 = _atof(pcVar1);
      in_EAX = FUN_009ac120(pcVar1,",");
      if (-1 < (int)in_EAX) {
        pcVar1 = pcVar1 + in_EAX + 1;
        dVar3 = _atof(pcVar1);
        in_EAX = FUN_009ac120(pcVar1,",");
        if (-1 < (int)in_EAX) {
          dVar4 = _atof(pcVar1 + in_EAX + 1);
          *param_1 = (float)dVar2 * 0.001;
          param_1[1] = (float)dVar3 * 0.001;
          param_1[2] = (float)dVar4 * 0.001;
          return CONCAT31((int3)((uint)((float)dVar3 * 0.001) >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a3e060 @ 00a3e060 ////

void __cdecl FUN_00a3e060(char *param_1,char *param_2,int param_3,void *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  float local_240;
  undefined4 local_23c;
  undefined4 local_238;
  char *local_234;
  uint local_230 [3];
  float local_224;
  undefined4 local_220;
  undefined4 local_21c;
  int local_210;
  void *local_20c;
  char local_208;
  undefined4 local_207;
  char local_108;
  undefined4 local_107;
  
  if ((param_1 == (char *)0x0) ||
     ((param_3 != 0 &&
      ((((*(int *)(param_3 + 0x34) != 0 && (uVar2 = *(uint *)(param_3 + 0x50), (uVar2 & 0x100) == 0)
         ) && (((uVar2 >> 0x1c & 1) != 0 || ((uVar2 >> 0x10 & 1) != 0)))) ||
       (uVar2 = FUN_00a22fa0(), (char)uVar2 == '\0')))))) {
    return;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = (int)pcVar3 - (int)(param_1 + 1);
  if (uVar2 == 0) {
    return;
  }
  uVar7 = uVar2 + 1;
  local_234 = operator_new(uVar7);
  pcVar3 = local_234;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  pcVar3 = param_1;
  pcVar5 = local_234;
  for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  }
  iVar4 = _strncmp(param_1,"playsndloop",0xb);
  if (iVar4 == 0) {
    pcVar3 = FUN_00a3dc50();
    if (pcVar3 == (char *)0x0) {
      return;
    }
    FUN_009ac0b0(pcVar3);
    local_240 = 0.0;
    local_23c = 0;
    local_238 = 0;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_00a3df70(&local_240,param_1 + (int)(pcVar5 + (0xc - (int)(pcVar3 + 1))));
    if ((param_3 != 0) && ((char)uVar2 != '\0')) {
      FUN_0040b490((void *)(param_3 + 0x90),&local_240);
    }
    FUN_00a05f70(pcVar3,(undefined4 *)(-(uint)((char)uVar2 != '\0') & (uint)&local_240),param_3,
                 param_2);
                    /* WARNING: Subroutine does not return */
    _free(local_234);
  }
  iVar4 = _strncmp(param_1,"playsnd",7);
  if (iVar4 == 0) {
    pcVar3 = FUN_00a3dc50();
    if (pcVar3 == (char *)0x0) {
      return;
    }
    FUN_009ac0b0(pcVar3);
    local_240 = 0.0;
    local_23c = 0;
    local_238 = 0;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_00a3df70(&local_240,param_1 + (int)(pcVar5 + (8 - (int)(pcVar3 + 1))));
    if ((param_3 != 0) && ((char)uVar2 != '\0')) {
      FUN_0040b490((void *)(param_3 + 0x90),&local_240);
    }
    FUN_0041c9c0(local_230,pcVar3);
    if (param_4 != (void *)0x0) {
      local_20c = param_4;
    }
    if ((char)uVar2 != '\0') {
      local_230[0] = local_230[0] | 1;
      local_224 = local_240;
      local_220 = local_23c;
      local_21c = local_238;
    }
  }
  else {
    iVar4 = _strncmp(param_1,"pplaysnd",8);
    if (iVar4 != 0) goto LAB_00a3e43d;
    pcVar3 = FUN_00a3dc50();
    if (pcVar3 == (char *)0x0) {
      return;
    }
    local_108 = '\0';
    puVar8 = &local_107;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    local_208 = '\0';
    puVar8 = &local_207;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    _sprintf(&local_208,pcVar3);
    iVar4 = FUN_009ac120(&local_208,"_");
    if (iVar4 != -1) {
      (&local_208)[iVar4] = '\0';
    }
    FUN_009ac040(&local_208);
    pcVar5 = (char *)0x0;
    if (param_4 != (void *)0x0) {
      pcVar5 = FUN_0097e7c0(param_4,&local_208,(undefined4 *)0x0,(int *)0x0);
    }
    _sprintf(&local_108,"%s_%d",pcVar3,pcVar5);
    FUN_009ac0b0(&local_108);
    local_240 = 0.0;
    local_23c = 0;
    local_238 = 0;
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_00a3df70(&local_240,param_1 + (int)(pcVar3 + (8 - (int)pcVar5)));
    if ((param_3 != 0) && ((char)uVar2 != '\0')) {
      FUN_0040b490((void *)(param_3 + 0x90),&local_240);
    }
    FUN_0041c9c0(local_230,&local_108);
    if (param_4 != (void *)0x0) {
      local_20c = param_4;
    }
    if ((char)uVar2 != '\0') {
      local_230[0] = local_230[0] | 1;
      local_224 = local_240;
      local_220 = local_23c;
      local_21c = local_238;
    }
  }
  local_210 = param_3;
  FUN_009b1530((byte *)local_230,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
LAB_00a3e43d:
                    /* WARNING: Subroutine does not return */
  _free(local_234);
}


//// FUNCTION FUN_00a3e4b0 @ 00a3e4b0 ////

uint __cdecl FUN_00a3e4b0(float *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_009ac120(param_2,param_3);
  if (iVar3 == -1) {
    return 0xffffff00;
  }
  pcVar1 = param_3 + 1;
  do {
    cVar2 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar2 != '\0');
  uVar4 = FUN_00a3df70(param_1,param_2 + (int)(param_3 + (iVar3 - (int)pcVar1)));
  return uVar4;
}


//// FUNCTION SceneEventCommand_Dispatch @ 00a3e560 ////

void __cdecl
SceneEventCommand_Dispatch(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  float *pfVar12;
  void *pvVar13;
  uint *puVar14;
  uint *puVar15;
  char *pcVar16;
  undefined ***pppuVar17;
  char cVar18;
  char *pcVar19;
  bool bVar20;
  char cVar21;
  float10 fVar22;
  undefined4 auStackY_214 [5];
  undefined4 uStackY_200;
  undefined1 *puVar23;
  undefined1 *local_1d4;
  undefined **local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined **local_1c0;
  float local_1bc;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  char local_1ad;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  char *local_19c [2];
  uint local_194;
  undefined **local_17c;
  float local_178;
  undefined4 *local_174;
  undefined **local_170;
  float local_16c;
  undefined4 *local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined **local_14c;
  float local_148;
  undefined4 *local_144;
  void *local_140 [2];
  uint local_138;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Major find: the scripted event-tag command interpreter for animation/mocap
                       tracks. Dispatches on string command names (matches the "ai_"-prefixed
                       track-name convention seen in WShotFiddler_Constructor) to trigger in-scene
                       effects: playsnd/playsndloop/kill_snd_loop (audio), set_fire_on/off,
                       blood_cloud/blood_splash, fclexp (explosion), noshadow/fadeshadow,
                       above_ground/not_above_ground,
                       cam_binocular/cam_crosshair/cam_overlay/cam_none (camera overlay effects),
                       mumble/mumble_off (lip sync),
                       setpropindex/prophide_/propunhide_/hide_/unhide_ (prop visibility by index),
                       break_, play_dead_, look_at (targeting), rotor_hack, doorframe_fire,
                       boom/fire/pos: (spatial VFX placement), deform/notrans/reverse/unreverse,
                       set_global_altitude/use_global_altitude, cam_overlay_speed. This is the
                       mechanism that ties embedded animation-track event tags to gameplay VFX/SFX
                       during scripted shots -- a core piece of the cutscene/shot-directing system.
                       Falls through to FUN_00A3E060 for unmatched commands. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaafb;
  local_c = ExceptionList;
  local_1d0 = (undefined **)0x0;
  if (param_1 == (uint *)0x0) {
    return;
  }
  if ((param_3 != (undefined4 *)0x0) && ((param_3[0x14] & 0x400000) != 0)) {
    return;
  }
  ExceptionList = &local_c;
  iVar3 = _strncmp((char *)param_1,"playsndloop",0xb);
  if (iVar3 == 0) {
    uVar4 = FUN_00972830((int)param_3);
    if ((char)uVar4 != '\0') {
      ExceptionList = local_c;
      return;
    }
    if ((param_3[0x14] & 0x800000) == 0) goto LAB_00a3fc0c;
    puVar14 = (uint *)(param_3[0x15] & 0x100);
  }
  else {
    iVar3 = _strncmp((char *)param_1,"playsnd",7);
    if ((iVar3 != 0) && (iVar3 = _strncmp((char *)param_1,"pplaysnd",8), iVar3 != 0)) {
      iVar3 = 0xe;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "kill_snd_loop";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (((param_3[0x14] & 0x800000) != 0) && ((param_3[0x15] & 0x100) == 0)) {
          ExceptionList = local_c;
          return;
        }
        FUN_00a05420((byte *)param_2,(int)param_3);
        ExceptionList = local_c;
        return;
      }
      if (param_3 == (undefined4 *)0x0) {
        bVar2 = 1;
      }
      else {
        bVar2 = (byte)((uint)param_3[0x7a] >> 3) & 1;
      }
      if ((param_4 != (int *)0x0) && (bVar2 != 0)) {
        iVar3 = 0xc;
        bVar20 = true;
        puVar14 = param_1;
        pcVar8 = "set_fire_on";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if (bVar20) {
          if (param_3 == (undefined4 *)0x0) {
            ExceptionList = local_c;
            return;
          }
          puVar5 = FUN_00a3da30(param_4,(int)param_3);
          FUN_0097b600(param_3,(int)puVar5);
          ExceptionList = local_c;
          return;
        }
        iVar3 = 0xd;
        bVar20 = true;
        puVar14 = param_1;
        pcVar8 = "set_fire_off";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if (bVar20) {
          FUN_00a45a60((int)param_4);
          ExceptionList = local_c;
          return;
        }
      }
      if ((param_3 == (undefined4 *)0x0) || (((uint)param_3[0x7a] >> 2 & 1) != 0)) {
        iVar3 = 0xc;
        bVar20 = true;
        puVar14 = param_1;
        pcVar8 = "blood_cloud";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if ((bVar20) && (fVar22 = FUN_00a3db80(param_3), (float10)0.0 != fVar22)) {
          ExceptionList = local_c;
          return;
        }
      }
      if ((param_3 == (undefined4 *)0x0) ||
         (((*(byte *)(param_3 + 0x7a) & 4) != 0 && ((param_3[0x14] & 0x800000) != 0)))) {
        iVar3 = 0xd;
        bVar20 = true;
        puVar14 = param_1;
        pcVar8 = "blood_splash";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if ((bVar20) && (fVar22 = FUN_00a3db80(param_3), (float10)0.0 != fVar22)) {
          ExceptionList = local_c;
          return;
        }
      }
      iVar3 = 7;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "fclexp";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((param_3[0x14] & 0x800000) != 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_00980750(param_4,*(uint *)(param_5 + 4),*(float *)(param_5 + 0x10),
                     *(int *)(param_5 + 0xc));
        ExceptionList = local_c;
        return;
      }
      iVar3 = 9;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "noshadow";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e330(param_4,0);
        param_4[0x27] = param_4[0x27] & 0xfffffff7;
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xb;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "fadeshadow";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        param_4[0x28] = param_4[0x28] | 0x4000;
        DVar6 = GetTickCount();
        param_4[0x2a] = DVar6;
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xd;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "above_ground";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = FUN_00972220(param_3,(int)param_4);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) | 1;
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0x11;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "not_above_ground";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = FUN_00972220(param_3,(int)param_4);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) & 0xfffffffe;
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xe;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "cam_binocular";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 != (undefined4 *)0x0) {
          FUN_00401de0(local_19c,"none",0xffffffff);
          local_1d0 = (undefined **)0x1;
          uVar7 = FUN_00401ec0(param_3 + 0x7e,local_19c);
          if ((char)uVar7 != '\0') {
            bVar20 = true;
            goto LAB_00a3e8d2;
          }
        }
        bVar20 = false;
LAB_00a3e8d2:
        if ((((uint)local_1d0 & 1) != 0) && (0x14 < local_194)) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c[0]);
        }
        if (!bVar20) {
          ExceptionList = local_c;
          return;
        }
        FUN_00974ee0(param_3 + 0x97,(byte *)"fx_binocular.dds",param_3[0x23]);
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xe;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "cam_crosshair";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 != (undefined4 *)0x0) {
          FUN_00401de0(local_19c,"none",0xffffffff);
          local_1d0 = (undefined **)0x2;
          uVar7 = FUN_00401ec0(param_3 + 0x7e,local_19c);
          if ((char)uVar7 != '\0') {
            bVar20 = true;
            goto LAB_00a3e95d;
          }
        }
        bVar20 = false;
LAB_00a3e95d:
        if ((((uint)local_1d0 & 2) != 0) && (0x14 < local_194)) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c[0]);
        }
        if (!bVar20) {
          ExceptionList = local_c;
          return;
        }
        FUN_00974ee0(param_3 + 0x97,(byte *)"fx_crosshair.dds",param_3[0x23]);
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xc;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "cam_overlay";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 != (undefined4 *)0x0) {
          FUN_00401de0(local_19c,"none",0xffffffff);
          local_1d0 = (undefined **)0x4;
          uVar7 = FUN_00401ec0(param_3 + 0x7e,local_19c);
          if ((char)uVar7 != '\0') {
            bVar20 = true;
            goto LAB_00a3e9ec;
          }
        }
        bVar20 = false;
LAB_00a3e9ec:
        if ((((uint)local_1d0 & 4) != 0) && (0x14 < local_194)) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c[0]);
        }
        if (!bVar20) {
          ExceptionList = local_c;
          return;
        }
        FUN_00974ee0(param_3 + 0x97,(byte *)param_2,param_3[0x23]);
        *(undefined1 *)(param_3 + 0x97) = 1;
        ExceptionList = local_c;
        return;
      }
      iVar3 = 9;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "cam_none";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 != (undefined4 *)0x0) {
          FUN_00401de0(local_19c,"none",0xffffffff);
          local_1d0 = (undefined **)0x8;
          uVar7 = FUN_00401ec0(param_3 + 0x7e,local_19c);
          if ((char)uVar7 != '\0') {
            bVar20 = true;
            goto LAB_00a3ea7f;
          }
        }
        bVar20 = false;
LAB_00a3ea7f:
        if ((((uint)local_1d0 & 8) != 0) && (0x14 < local_194)) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c[0]);
        }
        if (!bVar20) {
          ExceptionList = local_c;
          return;
        }
        FUN_00974ee0(param_3 + 0x97,(byte *)0x0,0);
        ExceptionList = local_c;
        return;
      }
      iVar3 = 7;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "mumble";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        bVar20 = FUN_00a22ff0();
        if (!bVar20) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = FUN_00972220(param_3,(int)param_4);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)(iVar3 + 8) != 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_00aa7aa0((void *)(iVar3 + 0xb0),iVar3,(int)param_3,*(int *)(param_5 + 0xc));
        ExceptionList = local_c;
        return;
      }
      iVar3 = 0xb;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "mumble_off";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = FUN_00972220(param_3,(int)param_4);
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)(iVar3 + 8) != 0) {
          ExceptionList = local_c;
          return;
        }
        FUN_00aa7920((int *)(iVar3 + 0xb0));
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"setpropindex");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0xf < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        param_4[0x26] = param_4[0x26] ^ ((int)local_1d4 << 0x18 ^ param_4[0x26]) & 0xf000000U;
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"prophide_");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x1f < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e730(param_4,(int)local_1d4,'\x01');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"propunhide_");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x1f < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e730(param_4,(int)local_1d4,'\0');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"hide_");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x1f < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((void *)param_3[0x52] == (void *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e730((void *)param_3[0x52],(int)local_1d4,'\x01');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"unhide_");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x1f < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((void *)param_3[0x52] == (void *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e730((void *)param_3[0x52],(int)local_1d4,'\0');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"fe");
      if (pcVar8 != (char *)0x0) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = param_4[0x1e];
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        pvVar13 = *(void **)(iVar3 + 0x178);
        if (pvVar13 == (void *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (*pcVar8 == '\0') {
          if (param_5 != 0) {
            FUN_00a31bb0(pvVar13,(char *)param_2,*(int *)(param_5 + 0xc),'\x01');
            ExceptionList = local_c;
            return;
          }
          FUN_00a31bb0(pvVar13,(char *)param_2,-1,'\x01');
          ExceptionList = local_c;
          return;
        }
        pcVar8 = pcVar8 + 1;
        local_1d0 = (undefined **)0xffffffff;
        local_1d4 = (undefined1 *)0x0;
        iVar9 = -(int)pcVar8;
        do {
          cVar21 = *pcVar8;
          pcVar8[(int)(local_10c + iVar9)] = cVar21;
          pcVar8 = pcVar8 + 1;
        } while (cVar21 != '\0');
        uVar7 = FUN_009b7af0(local_10c,(int *)&local_1d0,(int *)&local_1d4);
        if ((char)uVar7 != '\0') {
          pcVar8 = local_1d4 + 4 + (int)param_1;
          iVar9 = -(int)pcVar8;
          do {
            cVar21 = *pcVar8;
            pcVar8[(int)(local_10c + iVar9)] = cVar21;
            pcVar8 = pcVar8 + 1;
          } while (cVar21 != '\0');
        }
        FUN_00a31bb0(*(void **)(iVar3 + 0x178),local_10c,(int)local_1d0,'\x01');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"break_");
      if (pcVar8 != (char *)0x0) {
        local_1d4 = (undefined1 *)0xffffffff;
        FUN_009b7af0(pcVar8,(int *)&local_1d4,(int *)0x0);
        if ((int)local_1d4 < 0) {
          ExceptionList = local_c;
          return;
        }
        if (0x1f < (int)local_1d4) {
          ExceptionList = local_c;
          return;
        }
        if (param_3 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if ((void *)param_3[0x52] == (void *)0x0) {
          ExceptionList = local_c;
          return;
        }
        FUN_0097e730((void *)param_3[0x52],(int)local_1d4,'\x01');
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"play_dead_");
      if (pcVar8 != (char *)0x0) {
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = 3;
        bVar20 = true;
        pcVar16 = "on";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = *pcVar8 == *pcVar16;
          pcVar8 = pcVar8 + 1;
          pcVar16 = pcVar16 + 1;
        } while (bVar20);
        if (bVar20) {
          param_4[0x27] = param_4[0x27] | 0x40000000;
          ExceptionList = local_c;
          return;
        }
        param_4[0x27] = param_4[0x27] & 0xbfffffff;
        ExceptionList = local_c;
        return;
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"look_at");
      if (pcVar8 != (char *)0x0) {
        if (param_5 == 0) {
          ExceptionList = local_c;
          return;
        }
        iVar3 = FUN_00971c30(param_3,*(int *)(param_5 + 0xc));
        if (iVar3 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (param_4 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
        if (param_4[0x1e] == 0) {
          ExceptionList = local_c;
          return;
        }
        iVar9 = FUN_00971c80(*(void **)(iVar3 + 0x1c),*(int *)(iVar3 + 0x90));
        if (((*(byte *)(iVar3 + 0xa4) & 1) == 0) && (iVar9 == 0)) {
          ExceptionList = local_c;
          return;
        }
        local_1d4 = (undefined1 *)
                    (CONCAT31(local_1d4._1_3_,*(byte *)(iVar3 + 0xa4) >> 1) & 0xffffff01);
        if ((*(byte *)(iVar3 + 0xa4) & 1) != 0) {
          local_1c0 = *(undefined ***)(iVar3 + 0x98);
          local_1bc = *(float *)(iVar3 + 0x9c);
          local_1b8 = *(undefined4 **)(iVar3 + 0xa0);
          if ((param_3 != (undefined4 *)0x0) && (param_3[0x52] != 0)) {
            FUN_0040b490((void *)(param_3[0x52] + 0x18),(float *)&local_1c0);
          }
          FUN_00a01be0((void *)param_4[0x1e],&local_1c0,*(uint *)(iVar3 + 0x94),(byte)local_1d4,
                       (void *)0x0);
          ExceptionList = local_c;
          return;
        }
        FUN_00a01be0((void *)param_4[0x1e],(undefined4 *)0x0,*(uint *)(iVar3 + 0x94),(byte)local_1d4
                     ,*(void **)(iVar9 + 0x40));
        ExceptionList = local_c;
        return;
      }
      if (param_4 != (int *)0x0) {
        iVar3 = 0xb;
        bVar20 = true;
        puVar14 = param_1;
        pcVar8 = "rotor_hack";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if (bVar20) {
          param_4[0x28] = param_4[0x28] | 0x8000;
        }
      }
      iVar3 = 0xf;
      bVar20 = true;
      puVar14 = param_1;
      pcVar8 = "doorframe_fire";
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar20 = (char)*puVar14 == *pcVar8;
        puVar14 = (uint *)((int)puVar14 + 1);
        pcVar8 = pcVar8 + 1;
      } while (bVar20);
      if (bVar20) {
        param_4 = (int *)param_3[0x52];
      }
      if (param_4 != (int *)0x0) {
        for (local_1d0 = &PTR_PTR_00d78c0c; local_1d0 != (undefined **)"doorframe_fire";
            local_1d0 = local_1d0 + 1) {
          local_1b4 = (undefined4 *)*local_1d0;
          pcVar8 = FUN_00a3db40((char *)param_1,(char *)*local_1b4);
          if (pcVar8 != (char *)0x0) {
            bVar20 = true;
            iVar3 = 5;
            pcVar16 = pcVar8;
            pcVar19 = "_off";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar20 = *pcVar16 == *pcVar19;
              pcVar16 = pcVar16 + 1;
              pcVar19 = pcVar19 + 1;
            } while (bVar20);
            local_1ad = !bVar20;
            if ((bool)local_1ad) {
              iVar3 = 4;
              bVar20 = true;
              pcVar16 = "_on";
              do {
                if (iVar3 == 0) break;
                iVar3 = iVar3 + -1;
                bVar20 = *pcVar8 == *pcVar16;
                pcVar8 = pcVar8 + 1;
                pcVar16 = pcVar16 + 1;
              } while (bVar20);
              local_1d4 = (undefined1 *)CONCAT31(local_1d4._1_3_,1);
              if (!bVar20) goto LAB_00a3f0b4;
            }
            else {
LAB_00a3f0b4:
              local_1d4 = (undefined1 *)((uint)local_1d4 & 0xffffff00);
            }
            puVar23 = local_1d4;
            puVar5 = local_1b4 + 1;
            pcVar8 = (char *)local_1b4[1];
            while (pcVar8 != (char *)0x0) {
              if (local_1ad == '\0') {
                FUN_00a95200((int)param_4,pcVar8);
              }
              else {
                FUN_00a95970(param_4,pcVar8,(char)puVar23,(byte *)puVar5[1]);
              }
              puVar1 = puVar5 + 2;
              puVar5 = puVar5 + 2;
              pcVar8 = (char *)*puVar1;
            }
          }
        }
      }
      ppuVar10 = (undefined **)FUN_00a3db40((char *)param_1,(char *)&PTR_LAB_005f7863_3_00d708e0);
      local_1d0 = ppuVar10;
      if (ppuVar10 == (undefined **)0x0) goto LAB_00a3f51e;
      local_1b4 = *(undefined4 **)(param_5 + 0xc);
      if (local_1b4 == (undefined4 *)0x64) {
        local_1d4 = (undefined1 *)0x0;
      }
      else {
        local_1d4 = (undefined1 *)((float)(int)local_1b4 * 0.001);
      }
      if ((param_4 != (int *)0x0) && (param_2 != (uint *)0x0)) {
        if ((char)*param_2 == '@') {
          puVar23 = local_1d4;
          lVar11 = _atol((char *)((int)param_2 + 1));
          FUN_00a954e0(param_4,(char *)ppuVar10,'\x01',lVar11,(float)puVar23);
          ExceptionList = local_c;
          return;
        }
        iVar3 = 4;
        bVar20 = true;
        pcVar8 = "off";
        puVar14 = param_2;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = *pcVar8 == (char)*puVar14;
          pcVar8 = pcVar8 + 1;
          puVar14 = (uint *)((int)puVar14 + 1);
        } while (bVar20);
        if (bVar20) {
          FUN_00a95200((int)param_4,(char *)ppuVar10);
          ExceptionList = local_c;
          return;
        }
      }
      FUN_00401de0(local_19c,(char *)ppuVar10,0xffffffff);
      local_4 = 0;
      uVar4 = FUN_004155b0(local_19c," ",0);
      puVar5 = FUN_00430770(local_19c,local_140,0,uVar4);
      FUN_00401e30(local_19c,puVar5);
      if (0x14 < local_138) {
                    /* WARNING: Subroutine does not return */
        _free(local_140[0]);
      }
      local_1ac = 0.0;
      local_1a8 = 0.0;
      local_1a4 = 0.0;
      FUN_0040b670(&local_17c);
      uVar4 = FUN_00a3dd60((float *)&local_1b4,(char *)ppuVar10,"zangle(");
      if ((char)uVar4 == '\0') {
        uVar4 = FUN_00a3e4b0((float *)&local_1c0,(char *)ppuVar10,"normal");
        if (((char)uVar4 == '\0') ||
           (uVar4 = FUN_00a3e4b0(&local_1ac,(char *)ppuVar10,"pos"), (char)uVar4 == '\0')) {
          if (local_194 < 0x15) {
            ExceptionList = local_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_19c[0]);
        }
        if ((float)local_1b8 <= 0.996) {
          pfVar12 = (float *)FUN_00412df0((float *)&local_14c,(float)local_1b8,(float *)&local_1c0);
          local_1c4 = 1.0 - pfVar12[2];
          local_1c8 = -pfVar12[1];
          local_1cc = -*pfVar12;
          FUN_00412e20(&local_1cc);
          local_1b4 = (undefined4 *)-(float)local_1b8;
          local_1a0 = -local_1bc;
          local_1d0 = (undefined **)-(float)local_1c0;
          local_14c = local_1d0;
          local_148 = local_1a0;
          local_144 = local_1b4;
          FUN_00412fd0(&local_1c0,(float *)&local_14c,&local_1cc);
          FUN_00412e20((float *)&local_1c0);
          local_174 = local_1b8;
          local_178 = local_1bc;
          local_1bc = local_1a0;
          local_17c = local_1c0;
          local_1b8 = local_1b4;
          local_170 = local_1d0;
          local_16c = local_1a0;
          local_168 = local_1b4;
          local_1c0 = local_170;
          local_164 = local_1cc;
          local_160 = local_1c8;
          local_15c = local_1c4;
        }
        else {
          local_17c = (undefined **)0x3f800000;
          local_178 = 0.0;
          local_174 = (undefined4 *)0x0;
          local_170 = (undefined **)0x0;
          local_16c = 0.0;
          local_168 = (undefined4 *)0xbf800000;
          local_164 = 0.0;
          local_1bc = 1.0;
          local_160 = 1.0;
          local_1b8 = (undefined4 *)0x0;
          local_15c = 0.0;
          local_1c0 = local_170;
        }
      }
      else {
        FUN_0040b4f0(&local_17c,(float)local_1b4 - 1.5707964);
        FUN_00a3df70(&local_1ac,(char *)ppuVar10);
      }
      local_158 = local_1ac;
      local_154 = local_1a8;
      local_150 = local_1a4;
      if ((param_4 == (int *)0x0) || (param_2 == (uint *)0x0)) {
LAB_00a3f4bc:
        FUN_00a7b9b0(local_140,&local_17c);
        iVar3 = FUN_00a7e290(local_19c[0],param_3,local_140,local_1d4);
        if ((param_2 != (uint *)0x0) && ((char)*param_2 == '!')) {
          *(undefined4 *)(iVar3 + 0x54) = 0x40200000;
        }
      }
      else {
        iVar3 = 8;
        bVar20 = true;
        puVar14 = param_2;
        pcVar8 = "vehicle";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar20 = (char)*puVar14 == *pcVar8;
          puVar14 = (uint *)((int)puVar14 + 1);
          pcVar8 = pcVar8 + 1;
        } while (bVar20);
        if (!bVar20) goto LAB_00a3f4bc;
        FUN_00a95ac0((int)param_4,local_19c[0],'\0',(float *)&local_17c);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_194) {
                    /* WARNING: Subroutine does not return */
        _free(local_19c[0]);
      }
LAB_00a3f51e:
      if ((param_3 != (undefined4 *)0x0) &&
         (pcVar8 = FUN_00a3db40((char *)param_1,"stop_all_effects"), pcVar8 != (char *)0x0)) {
        FUN_00978c50((int)param_3);
      }
      pcVar8 = FUN_00a3db40((char *)param_1,"boom");
      if (pcVar8 == (char *)0x0) {
        pcVar8 = FUN_00a3db40((char *)param_1,"fire");
        if (pcVar8 == (char *)0x0) {
          pcVar8 = FUN_00a3db40((char *)param_1,"pos:");
          if (pcVar8 != (char *)0x0) {
            if (param_4 == (int *)0x0) {
              ExceptionList = local_c;
              return;
            }
            local_1ac = 0.0;
            local_1a8 = 0.0;
            local_1a4 = 0.0;
            iVar3 = FUN_009ac120((char *)param_1,"v3(");
            if (iVar3 < 0) {
              ExceptionList = local_c;
              return;
            }
            uVar4 = FUN_00a3df70(&local_1cc,(char *)param_1);
            if ((char)uVar4 == '\0') {
              ExceptionList = local_c;
              return;
            }
            FUN_00a3df70(&local_1ac,(char *)(iVar3 + 3 + (int)param_1));
            local_1ac = local_1ac * 10.0;
            local_1a8 = local_1a8 * 10.0;
            local_1a4 = local_1a4 * 10.0;
            local_1cc = local_1cc * 10.0;
            local_1c8 = local_1c8 * 10.0;
            local_1c4 = local_1c4 * 10.0;
            pvVar13 = (void *)FUN_00972220(param_3,(int)param_4);
            if (pvVar13 != (void *)0x0) {
              local_1d4 = &stack0xfffffe04;
              uStackY_200 = 0xa3f845;
              FUN_00a3c960(pvVar13,local_1cc,local_1c8,local_1c4,local_1ac,local_1a8,local_1a4);
              ExceptionList = local_c;
              return;
            }
            FUN_0040b670(&local_17c);
            FUN_009ab3f0(&local_17c,local_1ac,local_1a8,local_1a4);
            local_158 = local_158 + local_1cc;
            local_154 = local_154 + local_1c8;
            local_150 = local_150 + local_1c4;
            if ((param_3 != (undefined4 *)0x0) && (param_3[0x52] != 0)) {
              FUN_009aa830(&local_17c,(float *)(param_3[0x52] + 0x18));
            }
            pppuVar17 = &local_17c;
            puVar5 = auStackY_214;
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar5 = *pppuVar17;
              pppuVar17 = pppuVar17 + 1;
              puVar5 = puVar5 + 1;
            }
            local_1d4 = (undefined1 *)auStackY_214;
            (**(code **)(*param_4 + 0x24))();
            ExceptionList = local_c;
            return;
          }
          iVar3 = 0x10;
          bVar20 = true;
          puVar14 = param_1;
          pcVar8 = "check_vis_extra";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar20 = (char)*puVar14 == *pcVar8;
            puVar14 = (uint *)((int)puVar14 + 1);
            pcVar8 = pcVar8 + 1;
          } while (bVar20);
          if (bVar20) {
            if (param_4 == (int *)0x0) {
              ExceptionList = local_c;
              return;
            }
            iVar3 = FUN_00972220(param_3,(int)param_4);
            if (iVar3 == 0) {
              ExceptionList = local_c;
              return;
            }
            *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) | 4;
            ExceptionList = local_c;
            return;
          }
          iVar3 = 0x1e;
          bVar20 = true;
          puVar14 = param_1;
          pcVar8 = "reset_animated_static_on_prop";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar20 = (char)*puVar14 == *pcVar8;
            puVar14 = (uint *)((int)puVar14 + 1);
            pcVar8 = pcVar8 + 1;
          } while (bVar20);
          if (bVar20) {
            if (param_4 == (int *)0x0) {
              ExceptionList = local_c;
              return;
            }
            if (param_4[0x3e] != 0) {
              FUN_00973570(param_4[0x3e]);
            }
            param_4[0x3e] = 0;
            ExceptionList = local_c;
            return;
          }
          pcVar8 = FUN_00a3db40((char *)param_1,"set_value_");
          if (pcVar8 == (char *)0x0) {
            iVar3 = 0x14;
            bVar20 = true;
            puVar14 = param_1;
            pcVar8 = "set_global_altitude";
            do {
              if (iVar3 == 0) break;
              iVar3 = iVar3 + -1;
              bVar20 = (char)*puVar14 == *pcVar8;
              puVar14 = (uint *)((int)puVar14 + 1);
              pcVar8 = pcVar8 + 1;
            } while (bVar20);
            if (bVar20) {
              if (param_3 == (undefined4 *)0x0) {
                ExceptionList = local_c;
                return;
              }
              local_1b4 = (undefined4 *)0x0;
              local_1a0 = 0.0;
              FUN_009ace70((char *)param_2,"altitude",(float *)&local_1b4);
              uStackY_200 = 0xa3f9fc;
              FUN_009ace70((char *)param_2,"time",&local_1a0);
              FUN_00976850(param_3,(float)local_1b4,local_1a0);
              ExceptionList = local_c;
              return;
            }
            iVar3 = _strncmp((char *)param_1,"use_global_altitude",0x13);
            if (iVar3 != 0) {
              iVar3 = _strncmp((char *)param_1,"deform",6);
              if (iVar3 == 0) {
                if (param_3 == (undefined4 *)0x0) {
                  ExceptionList = local_c;
                  return;
                }
                cVar21 = '\0';
                cVar18 = '\x01';
                if (param_2 != (uint *)0x0) {
                  puVar14 = FUN_00ace080(param_2,"left");
                  puVar15 = FUN_00ace080(param_2,"mid");
                  cVar18 = puVar15 != (uint *)0x0 || puVar14 == (uint *)0x0;
                  puVar14 = FUN_00ace080(param_2,"right");
                  if (puVar14 != (uint *)0x0) {
                    cVar18 = '\x02';
                  }
                  FUN_00ace080(param_2,"front");
                  puVar14 = FUN_00ace080(param_2,"top");
                  cVar21 = puVar14 != (uint *)0x0;
                  puVar14 = FUN_00ace080(param_2,"back");
                  if (puVar14 != (uint *)0x0) {
                    cVar21 = '\x02';
                  }
                }
                uVar4 = param_4[0x28];
                param_4[0x28] =
                     (((1 << cVar18 + cVar21 * '\x03') << 3 | uVar4) ^ uVar4) & 0xff8 ^ uVar4;
                ExceptionList = local_c;
                return;
              }
              iVar3 = _strncmp((char *)param_1,"notrans",7);
              if (iVar3 == 0) {
                param_4[0x28] = param_4[0x28] & 0xffffefff;
              }
              iVar3 = _strncmp((char *)param_1,"reverse",7);
              if (iVar3 == 0) {
                if (param_3 == (undefined4 *)0x0) {
                  ExceptionList = local_c;
                  return;
                }
                if (param_3[0x52] == 0) {
                  ExceptionList = local_c;
                  return;
                }
                puVar14 = (uint *)(param_3[0x52] + 0xa0);
                *puVar14 = *puVar14 | 0x2000;
              }
              iVar3 = _strncmp((char *)param_1,"unreverse",7);
              if (iVar3 != 0) {
                ExceptionList = local_c;
                return;
              }
              if (param_3 == (undefined4 *)0x0) {
                ExceptionList = local_c;
                return;
              }
              if (param_3[0x52] == 0) {
                ExceptionList = local_c;
                return;
              }
              puVar14 = (uint *)(param_3[0x52] + 0xa0);
              *puVar14 = *puVar14 & 0xffffdfff;
              ExceptionList = local_c;
              return;
            }
            iVar3 = FUN_00972220(param_3,(int)param_4);
            if (param_3 == (undefined4 *)0x0) {
              ExceptionList = local_c;
              return;
            }
            if (iVar3 == 0) {
              ExceptionList = local_c;
              return;
            }
            iVar9 = 0x17;
            bVar20 = true;
            pcVar8 = "use_global_altitude_on";
            do {
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              bVar20 = (char)*param_1 == *pcVar8;
              param_1 = (uint *)((int)param_1 + 1);
              pcVar8 = pcVar8 + 1;
            } while (bVar20);
            if (bVar20) {
              *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) | 0x10;
              ExceptionList = local_c;
              return;
            }
            *(uint *)(iVar3 + 0x4c) = *(uint *)(iVar3 + 0x4c) & 0xffffffef;
            ExceptionList = local_c;
            return;
          }
          iVar3 = 0x12;
          bVar20 = true;
          pcVar16 = "cam_overlay_speed";
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            bVar20 = *pcVar8 == *pcVar16;
            pcVar8 = pcVar8 + 1;
            pcVar16 = pcVar16 + 1;
          } while (bVar20);
          if (!bVar20) {
            ExceptionList = local_c;
            return;
          }
          if (param_3 == (undefined4 *)0x0) {
            ExceptionList = local_c;
            return;
          }
          FUN_00a3dbb0((int *)&local_1b4,(char *)param_2);
          param_3[0x69] = (float)(int)local_1b4;
          ExceptionList = local_c;
          return;
        }
        local_1cc = 0.0;
        local_1c8 = 0.0;
        local_1c4 = 0.0;
        uVar4 = FUN_00a3df70(&local_1cc,(char *)param_1);
        if ((char)uVar4 != '\0') {
          local_1cc = local_1cc * 10.0;
          local_1c8 = local_1c8 * 10.0;
          local_1c4 = local_1c4 * 10.0;
        }
        local_1d4 = (undefined1 *)0x3f800000;
        uVar4 = FUN_00a3dd60((float *)&local_1d4,(char *)param_1,"scale:");
        if ((char)uVar4 != '\0') {
          local_1d4 = (undefined1 *)((float)local_1d4 * 100.0);
        }
        if ((param_3 != (undefined4 *)0x0) && (param_3[0x52] != 0)) {
          FUN_0040b490((void *)(param_3[0x52] + 0x18),&local_1cc);
        }
        puVar5 = FUN_0097e180(&local_1cc,(float)local_1d4,(int)param_3);
      }
      else {
        local_1cc = 0.0;
        local_1c8 = 0.0;
        local_1c4 = 0.0;
        uVar4 = FUN_00a3df70(&local_1cc,(char *)param_1);
        if ((char)uVar4 != '\0') {
          local_1cc = local_1cc * 10.0;
          local_1c8 = local_1c8 * 10.0;
          local_1c4 = local_1c4 * 10.0;
        }
        local_1d4 = (undefined1 *)0x3f800000;
        uVar4 = FUN_00a3dd60((float *)&local_1d4,(char *)param_1,"scale:");
        if ((char)uVar4 != '\0') {
          local_1d4 = (undefined1 *)((float)local_1d4 * 100.0);
        }
        local_1d0 = (undefined **)0x3f800000;
        uVar4 = FUN_00a3dd60((float *)&local_1d0,(char *)param_1,"speed:");
        if ((char)uVar4 != '\0') {
          local_1d0 = (undefined **)((float)local_1d0 * 100.0);
        }
        if ((param_3 != (undefined4 *)0x0) && (param_3[0x52] != 0)) {
          FUN_0040b490((void *)(param_3[0x52] + 0x18),&local_1cc);
        }
        puVar5 = FUN_00a3da90(param_3,&local_1cc,(float)local_1d4,(int)local_1d0);
      }
      if (param_3 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return;
      }
      FUN_0097b600(param_3,(int)puVar5);
      ExceptionList = local_c;
      return;
    }
    uVar4 = FUN_00972830((int)param_3);
    if ((char)uVar4 != '\0') {
      ExceptionList = local_c;
      return;
    }
    puVar14 = FUN_00ace080(param_1,"_loop");
    if ((param_3[0x14] & 0x800000) == 0) goto LAB_00a3fc0c;
    if ((param_3[0x15] & 0x100) == 0) {
      ExceptionList = local_c;
      return;
    }
  }
  if (puVar14 == (uint *)0x0) {
    ExceptionList = local_c;
    return;
  }
LAB_00a3fc0c:
  FUN_00a3e060((char *)param_1,(char *)param_2,(int)param_3,param_4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a3fc40 @ 00a3fc40 ////

void __cdecl FUN_00a3fc40(int *param_1,undefined4 *param_2,int *param_3)

{
  void *this;
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_1[2] < 1) {
    puVar3 = param_2;
    piVar4 = param_1;
    puVar1 = (uint *)FUN_009722a0(param_2,param_1[1]);
    puVar2 = (uint *)FUN_009722a0(param_2,*param_1);
    SceneEventCommand_Dispatch(puVar2,puVar1,puVar3,param_3,(int)piVar4);
  }
  else {
    this = operator_new(0x20);
    if (this != (void *)0x0) {
      FUN_00a3de70(this,param_1,(int)param_2,(int)param_3);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a3fce0 @ 00a3fce0 ////

void __thiscall FUN_00a3fce0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0xe8);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x110);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00a3fd10 @ 00a3fd10 ////

void __thiscall FUN_00a3fd10(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)((int)this + 0xe8);
  puVar3 = (undefined4 *)((int)this + 0x110);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0xe8);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION FUN_00a3fd50 @ 00a3fd50 ////

void FUN_00a3fd50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a3b770((int)param_1);
  *param_1 = 8;
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a3fd70 @ 00a3fd70 ////

void __fastcall FUN_00a3fd70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_28 [10];
  
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x400000;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[7] = 0x3f9c61ab;
  puVar2 = local_28;
  puVar3 = (undefined4 *)(param_1 + 0xe8);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_28;
  puVar3 = (undefined4 *)(param_1 + 0x110);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x138) = 0x3c23d70a;
  return;
}


//// FUNCTION FUN_00a3fdf0 @ 00a3fdf0 ////

undefined4 * __thiscall FUN_00a3fdf0(void *this,undefined4 *param_1)

{
  FUN_00a3bd10(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d78da8;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x104) = 0x3f9c61ab;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 300) = 0x3f9c61ab;
  FUN_00a3fd70((int)this);
  return this;
}


//// FUNCTION FUN_00a3fef0 @ 00a3fef0 ////

undefined4 __thiscall FUN_00a3fef0(void *this,int param_1)

{
  float *pfVar1;
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
  uint in_EAX;
  int iVar14;
  undefined4 extraout_EAX;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
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
  
  if (param_1 != 0) {
    in_EAX = *(uint *)((int)this + 0x44);
    if (*(void **)(in_EAX + 0x148) != (void *)0x0) {
      iVar14 = FUN_0097e350(*(void **)(in_EAX + 0x148),0);
      in_EAX = 0;
      if (iVar14 != 0) {
        fVar2 = *(float *)(iVar14 + 0xd4);
        fVar3 = *(float *)(iVar14 + 0xd8);
        fVar4 = *(float *)(iVar14 + 0xdc);
        fVar5 = *(float *)(iVar14 + 200);
        fVar6 = *(float *)(iVar14 + 0xcc);
        fVar7 = *(float *)(iVar14 + 0xd0);
        fVar8 = *(float *)(iVar14 + 0xd4);
        fVar9 = *(float *)(iVar14 + 0xd8);
        fVar10 = *(float *)(iVar14 + 0xdc);
        fVar11 = *(float *)(iVar14 + 200);
        fVar12 = *(float *)(iVar14 + 0xcc);
        fVar13 = *(float *)(iVar14 + 0xd0);
        fVar15 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_posz");
        fVar16 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_posy");
        fVar17 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_posx");
        pfVar1 = (float *)(param_1 + 0x10);
        *pfVar1 = 1.0;
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        local_4 = 0;
        local_8 = 0;
        local_c = 0;
        local_14 = 0;
        local_18 = 0;
        local_1c = 0;
        local_24 = 0;
        local_28 = 0;
        local_2c = 0;
        local_10 = 0x3f800000;
        local_20 = 0x3f800000;
        local_30 = 0x3f800000;
        fVar18 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_az");
        fVar19 = (float)((fVar18 - (float10)0.5) * (float10)6.2831855);
        fVar18 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_ay");
        FUN_009ab3f0(&local_30,0.0,(float)((fVar18 - (float10)0.5) * (float10)3.1395926),fVar19);
        FUN_0040b490(&local_30,pfVar1);
        *(float *)(param_1 + 4) =
             (fVar8 * 1.1 + fVar11) * (float)fVar17 + (1.0 - (float)fVar17) * (fVar5 - fVar2 * 1.1);
        *(float *)(param_1 + 8) =
             (1.0 - (float)fVar16) * (fVar6 - fVar3 * 1.1) + (float)fVar16 * (fVar9 * 1.1 + fVar12);
        *(float *)(param_1 + 0xc) =
             (1.0 - (float)fVar15) * (fVar7 - fVar4 * 1.1) + (float)fVar15 * (fVar10 * 1.1 + fVar13)
        ;
        *pfVar1 = *pfVar1 + *(float *)(param_1 + 4);
        *(float *)(param_1 + 0x14) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x14);
        *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x18);
        fVar15 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_fov");
        *(undefined4 *)(param_1 + 0x20) = 0x3e99999a;
        *(float *)(param_1 + 0x1c) =
             (float)((fVar15 * (float10)80.0 + (float10)10.0) * (float10)0.017453292);
        fVar15 = FUN_009722e0(*(int *)((int)this + 0x44),(byte *)"ai_ucam_ax");
        *(float *)(param_1 + 0x24) = (float)(fVar15 * (float10)6.2831855);
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a40200 @ 00a40200 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00a40200(void *this,undefined4 *param_1)

{
  float *pfVar1;
  float *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint in_EAX;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float10 fVar16;
  int local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_14;
  float fStack_10;
  float fStack_4;
  
  if ((param_1 == (undefined4 *)0x0) || (in_EAX = 0, *(int *)((int)this + 0x18) == 0)) {
    return in_EAX & 0xffffff00;
  }
  if ((*(byte *)((int)*(void **)((int)this + 0x44) + 0x54) & 0x10) != 0) {
    uVar10 = FUN_00a3fef0(this,(int)param_1);
    return uVar10;
  }
  iVar11 = FUN_00975360(*(void **)((int)this + 0x44),param_1);
  if ((char)iVar11 == '\0') {
    local_28 = 0;
    cVar9 = (**(code **)(**(int **)((int)this + 0x18) + 0x58))();
    if (cVar9 != '\0') {
      iVar11 = *(int *)((int)this + 0x18);
      uVar6 = *(uint *)(iVar11 + 0x88);
      if (((uVar6 & 0x40000) != 0) && (*(int *)(iVar11 + 0x254) == 0)) {
        puVar14 = (undefined4 *)(*(int *)((int)this + 0x44) + 200);
        for (iVar13 = 10; iVar13 != 0; iVar13 = iVar13 + -1) {
          *param_1 = *puVar14;
          puVar14 = puVar14 + 1;
          param_1 = param_1 + 1;
        }
        goto LAB_00a4027f;
      }
      if ((uVar6 & 0x100000) == 0) {
        if ((uVar6 & 0x200000) != 0) {
          local_28 = 2;
        }
      }
      else {
        local_28 = 1;
      }
    }
    pfVar1 = (float *)(param_1 + 1);
    fVar8 = (float)DAT_01050b60 * 0.01;
    this_00 = (float *)(param_1 + 4);
    fVar7 = 1.0 - fVar8;
    fVar2 = *(float *)((int)this + 0xf0);
    fVar3 = *(float *)((int)this + 0xf4);
    fVar4 = *(float *)((int)this + 0x118);
    fVar5 = *(float *)((int)this + 0x11c);
    *pfVar1 = fVar7 * *(float *)((int)this + 0x114) + fVar8 * *(float *)((int)this + 0xec);
    param_1[2] = fVar7 * fVar4 + fVar8 * fVar2;
    param_1[3] = fVar7 * fVar5 + fVar8 * fVar3;
    fVar2 = *(float *)((int)this + 0xfc);
    fStack_4 = fVar8 * *(float *)((int)this + 0x100);
    fStack_14 = fVar7 * *(float *)((int)this + 0x124);
    fStack_10 = fVar7 * *(float *)((int)this + 0x128);
    fStack_24 = fVar7 * *(float *)((int)this + 0x120) + fVar8 * *(float *)((int)this + 0xf8);
    *this_00 = fStack_24;
    fStack_20 = fStack_14 + fVar8 * fVar2;
    param_1[5] = fStack_20;
    fStack_1c = fStack_10 + fStack_4;
    param_1[6] = fStack_1c;
    param_1[7] = fVar8 * *(float *)((int)this + 0x104) + fVar7 * *(float *)((int)this + 300);
    param_1[8] = fVar8 * *(float *)((int)this + 0x108) + fVar7 * *(float *)((int)this + 0x130);
    param_1[9] = fVar8 * *(float *)((int)this + 0x10c) + fVar7 * *(float *)((int)this + 0x134);
    pfVar12 = this_00;
    if ((local_28 != 0) &&
       (pfVar12 = (float *)CONCAT31((int3)((uint)this_00 >> 8),DAT_0105be81), DAT_0105be81 == '\0'))
    {
      FUN_00411ca0(this_00,&fStack_24,pfVar1);
      FUN_00412e20(&fStack_24);
      if (local_28 == 1) {
        fVar15 = FUN_00990e30(-*(float *)((int)this + 0x138),*(float *)((int)this + 0x138));
        fStack_24 = (float)(fVar15 + (float10)fStack_24);
        fVar15 = FUN_00990e30(-*(float *)((int)this + 0x138),*(float *)((int)this + 0x138));
        fStack_20 = (float)(fVar15 + (float10)fStack_20);
        fVar15 = FUN_00990e30(-*(float *)((int)this + 0x138),*(float *)((int)this + 0x138));
      }
      else {
        *(undefined4 *)((int)this + 0x138) = 0x3b83126f;
        fVar15 = (float10)*(int *)(*(int *)((int)this + 0x44) + 0x8c);
        if (*(int *)(*(int *)((int)this + 0x44) + 0x8c) < 0) {
          fVar15 = fVar15 + (float10)4.2949673e+09;
        }
        fVar15 = (fVar15 + (float10)fVar8) * (float10)_DAT_00e69370;
        fVar16 = (float10)fcos(fVar15);
        fStack_24 = (float)(fVar16 * (float10)0.004 + (float10)fStack_24);
        fVar16 = (float10)fcos((float10)0.9 * fVar15);
        fStack_20 = (float)(fVar16 * (float10)0.004 + (float10)fStack_20);
        fVar15 = (float10)fcos(fVar15 * (float10)0.7);
        fVar15 = fVar15 * (float10)0.004;
      }
      pfVar12 = (float *)(fStack_20 + (float)param_1[2]);
      *this_00 = fStack_24 + *pfVar1;
      param_1[5] = pfVar12;
      param_1[6] = (float)(fVar15 + (float10)fStack_1c + (float10)(float)param_1[3]);
    }
    return CONCAT31((int3)((uint)pfVar12 >> 8),1);
  }
LAB_00a4027f:
  return CONCAT31((int3)((uint)iVar11 >> 8),1);
}


//// FUNCTION FUN_00a40590 @ 00a40590 ////

void __thiscall FUN_00a40590(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  FUN_00a24f50(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)((int)this + 0x44) = bVar1;
  *(undefined1 *)((int)this + 0x45) = *(undefined1 *)((int)param_1 + 0x45);
  puVar2 = param_1 + 0x12;
  *(undefined2 *)((int)this + 0x46) = *(undefined2 *)((int)param_1 + 0x46);
  if ((bVar1 & 2) == 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x48) = 0xffffffff;
    *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)this + 0x48) = *puVar2;
    *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
    *(undefined4 *)((int)this + 0x50) = param_1[0x14];
    *(undefined4 *)((int)this + 0x54) = param_1[0x15];
    *(undefined4 *)((int)this + 0x58) = param_1[0x16];
    puVar2 = param_1 + 0x17;
  }
  if ((*(byte *)((int)this + 0x44) & 8) != 0) {
    *(undefined4 *)((int)this + 0x5c) = *puVar2;
    *(undefined4 *)((int)this + 0x60) = puVar2[1];
    *(undefined4 *)((int)this + 100) = puVar2[2];
    *(undefined4 *)((int)this + 0x68) = puVar2[3];
    *(undefined4 *)((int)this + 0x6c) = puVar2[4];
    return;
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00a406c0 @ 00a406c0 ////

void __fastcall FUN_00a406c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d78e54;
  FUN_00a43a90(param_1);
  return;
}


//// FUNCTION FUN_00a40790 @ 00a40790 ////

undefined4 * __fastcall FUN_00a40790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  puVar2 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  puVar2 = param_1;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a40890 @ 00a40890 ////

undefined4 * __thiscall FUN_00a40890(void *this,byte param_1)

{
  FUN_00a406c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a408b0 @ 00a408b0 ////

undefined4 * __thiscall FUN_00a408b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_7c [15];
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
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
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfab18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  *(undefined ***)this = &PTR_LAB_00d78e54;
  puVar1 = (undefined4 *)((int)this + 0x6c);
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *puVar1 = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this + 0x80);
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *puVar2 = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  local_4 = 0;
  FUN_00a444f0(this,param_1);
  *(uint *)((int)this + 100) = *(uint *)((int)this + 100) & 0xfffffffc;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *puVar1 = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0xffffffff;
  *puVar2 = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *puVar2 = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  FUN_00a40790(local_7c);
  FUN_00a40590(local_7c,param_1);
  *(undefined4 *)((int)this + 0x60) = local_40;
  *(undefined4 *)((int)this + 0x68) = local_3c;
  *(uint *)((int)this + 100) =
       *(uint *)((int)this + 100) ^ ((uint)local_38 ^ *(uint *)((int)this + 100)) & 1;
  *puVar1 = local_34;
  *(undefined4 *)((int)this + 0x70) = local_30;
  *(undefined4 *)((int)this + 0x74) = local_2c;
  *(undefined4 *)((int)this + 0x78) = local_28;
  *puVar2 = local_20;
  *(undefined4 *)((int)this + 0x84) = local_1c;
  *(undefined4 *)((int)this + 0x7c) = local_24;
  *(undefined4 *)((int)this + 0x88) = local_18;
  *(undefined4 *)((int)this + 0x8c) = local_14;
  *(undefined4 *)((int)this + 0x90) = local_10;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a40a10 @ 00a40a10 ////

undefined4 __fastcall FUN_00a40a10(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 local_8;
  
  if ((*(byte *)(param_1 + 100) & 1) != 0) {
    local_8 = *(float *)(param_1 + 0x60);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1a8);
    if (iVar1 != 0) {
      local_8 = local_8 / (float)iVar1;
    }
    FUN_00415910((void *)(*(int *)(param_1 + 0x1c) + 0x150),local_8,0.0,*(float *)(param_1 + 0x68));
  }
  if (**(int **)(param_1 + 0x28) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(**(int **)(param_1 + 0x28) + 0x40);
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00a3fc40((int *)(param_1 + 0x6c),*(undefined4 **)(param_1 + 0x1c),piVar3);
  }
  if ((piVar3 != (int *)0x0) && ((*(byte *)(**(int **)(param_1 + 0x28) + 0x4c) & 0x20) == 0)) {
    uVar2 = FUN_00a3dc90((int *)(param_1 + 0x80),*(void **)(param_1 + 0x1c));
    if ((char)uVar2 != '\0') {
      FUN_00a4ca10((void *)**(undefined4 **)(param_1 + 0x28));
      *(uint *)(**(int **)(param_1 + 0x28) + 0x4c) =
           *(uint *)(**(int **)(param_1 + 0x28) + 0x4c) | 0x20;
    }
  }
  FUN_00a3fc40((int *)(param_1 + 0x80),*(undefined4 **)(param_1 + 0x1c),piVar3);
  return 2;
}


//// FUNCTION FUN_00a40be0 @ 00a40be0 ////

void __thiscall FUN_00a40be0(void *this,undefined4 *param_1)

{
  FUN_00a24f50(this,param_1);
  *(undefined1 *)((int)this + 0x3c) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)((int)this + 0x3d) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined2 *)((int)this + 0x3e) = *(undefined2 *)((int)param_1 + 0x3e);
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined2 *)((int)this + 0x58) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)((int)this + 0x5a) = *(undefined2 *)((int)param_1 + 0x5a);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined4 *)((int)this + 0x70) = param_1[0x1c];
  *(undefined1 *)((int)this + 0x74) = *(undefined1 *)(param_1 + 0x1d);
  *(undefined1 *)((int)this + 0x75) = *(undefined1 *)((int)param_1 + 0x75);
  *(undefined2 *)((int)this + 0x76) = *(undefined2 *)((int)param_1 + 0x76);
  *(undefined4 *)((int)this + 0x78) = param_1[0x1e];
  *(undefined4 *)((int)this + 0x7c) = param_1[0x1f];
  *(undefined1 *)((int)this + 0x80) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x81) = *(undefined1 *)((int)param_1 + 0x81);
  *(undefined2 *)((int)this + 0x82) = *(undefined2 *)((int)param_1 + 0x82);
  return;
}


//// FUNCTION FUN_00a40cf0 @ 00a40cf0 ////

void __fastcall FUN_00a40cf0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d78ec4;
  FUN_00a43a90(param_1);
  return;
}


//// FUNCTION FUN_00a40d40 @ 00a40d40 ////

void __thiscall FUN_00a40d40(void *this,void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    if (*(int *)this == 1) {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x44) + 0x34);
      iVar2 = *(int *)((int)param_1 + 0x44);
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      if (((*(int *)((int)this + 4) != -1) && (iVar2 != 0)) && (*(char *)(iVar2 + 0x4d) != '\0')) {
        *(undefined4 *)((int)param_1 + 0x20) = **(undefined4 **)(iVar2 + 0x68);
        if (*(int *)((int)param_1 + 8) == 0xb) {
          *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) | 0x8000000;
        }
        if (*(int *)((int)param_1 + 8) == 10) {
          *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) | 0x4000000;
        }
      }
      if (*(int *)((int)this + 8) != -1) {
        *(undefined4 *)((int)param_1 + 0x20) = 0;
        *(undefined4 *)((int)param_1 + 0x28) = 0xc47a0000;
        if (*(int *)((int)param_1 + 8) == 0xb) {
          *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xf7ffffff;
        }
        if (*(int *)((int)param_1 + 8) == 10) {
          *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfbffffff;
        }
      }
    }
    else {
      if (*(int *)((int)this + 4) != -1) {
        iVar1 = FUN_00402e80(*(void **)((int)param_1 + 0x44),*(int *)((int)this + 4));
        FUN_00a3b730(param_1,'\x01',iVar1);
      }
      if (*(int *)((int)this + 8) != -1) {
        iVar1 = FUN_00402e80(*(void **)((int)param_1 + 0x44),*(int *)((int)this + 8));
        FUN_00a3b730(param_1,'\0',iVar1);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a40f20 @ 00a40f20 ////

undefined4 * __fastcall FUN_00a40f20(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  puVar2 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)((int)param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a41010 @ 00a41010 ////

undefined4 * __thiscall FUN_00a41010(void *this,byte param_1)

{
  FUN_00a40cf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a41030 @ 00a41030 ////

undefined4 * __thiscall FUN_00a41030(void *this,undefined4 *param_1)

{
  undefined4 local_90 [15];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
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
  char local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfab3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  *(undefined ***)this = &PTR_LAB_00d78ec4;
  *(undefined1 *)((int)this + 0x61) = 1;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x88) = 0xffff;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x8a) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  local_4 = 0;
  FUN_00a444f0(this,param_1);
  *(undefined4 *)((int)this + 0x70) = 1;
  *(undefined1 *)((int)this + 0x7c) = 1;
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  FUN_00a40f20(local_90);
  FUN_00a40be0(local_90,param_1);
  *(undefined4 *)((int)this + 100) = local_50;
  *(undefined4 *)((int)this + 0x68) = local_4c;
  *(undefined4 *)((int)this + 0x70) = local_44;
  *(undefined4 *)((int)this + 0x6c) = local_48;
  *(undefined4 *)((int)this + 0x74) = local_40;
  *(undefined4 *)((int)this + 0x60) = local_54;
  *(undefined4 *)((int)this + 0x78) = local_3c;
  *(undefined4 *)((int)this + 0x80) = local_14;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x84) = local_18;
  *(undefined4 *)((int)this + 0x80) = local_14;
  *(bool *)((int)this + 0x7c) = local_10 != '\0';
  *(undefined4 *)((int)this + 0x88) = local_38;
  *(undefined4 *)((int)this + 0x8c) = local_34;
  *(undefined4 *)((int)this + 0x90) = local_30;
  *(undefined4 *)((int)this + 0x94) = local_2c;
  *(undefined4 *)((int)this + 0x98) = local_28;
  *(undefined4 *)((int)this + 0x9c) = local_24;
  *(undefined4 *)((int)this + 0xa0) = local_20;
  *(undefined4 *)((int)this + 0xa4) = local_1c;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a411d0 @ 00a411d0 ////

void __thiscall FUN_00a411d0(void *this,int param_1)

{
  int iVar1;
  int local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  if ((((param_1 != 0) && (iVar1 = **(int **)(param_1 + 0x28), iVar1 != 0)) &&
      (*(int *)(iVar1 + 0x40) != 0)) && (*(int *)(*(int *)(iVar1 + 0x40) + 0x78) != 0)) {
    local_14[2] = (int)*(ushort *)((int)this + 0x16);
    local_4 = 0;
    local_8 = *(undefined4 *)(param_1 + 4);
    local_14[1] = 0xffffffff;
    local_14[0] = -10;
    FUN_00a3fc40(local_14,*(undefined4 **)(param_1 + 0x1c),*(int **)(iVar1 + 0x40));
  }
  return;
}


//// FUNCTION FUN_00a41250 @ 00a41250 ////

void __thiscall FUN_00a41250(void *this,void *param_1)

{
  short sVar1;
  int iVar2;
  void *this_00;
  byte *pbVar3;
  uint uVar4;
  float10 fVar5;
  void *pvVar6;
  undefined4 uVar7;
  
  this_00 = param_1;
  if (((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0xc4) != 0)) &&
     (*(ushort *)this < (ushort)*(byte *)((int)param_1 + 0x4e))) {
    param_1 = *(void **)(*(int *)((int)param_1 + 0xc4) + (uint)*(ushort *)this * 0x18);
    sVar1 = *(short *)((int)this + 2);
    if (sVar1 == 0) {
      param_1 = *(void **)((int)this + 4);
    }
    else if (sVar1 == 1) {
      param_1 = (void *)((float)param_1 + *(float *)((int)this + 4));
    }
    else if (sVar1 == 2) {
      if (*(float *)((int)this + 4) == 0.0) {
        *(undefined4 *)((int)this + 4) = 0x3f800000;
      }
      fVar5 = FUN_00990e30(0.0,*(float *)((int)this + 4));
      param_1 = (void *)(float)fVar5;
    }
    FUN_00974c20((void *)(*(int *)((int)this_00 + 0xc4) + (uint)*(ushort *)this * 0x18),
                 (float)param_1,(void *)0x0);
    for (uVar4 = 0;
        (iVar2 = *(int *)((int)this_00 + 0x3c), iVar2 != 0 &&
        (uVar4 < (uint)(*(int *)((int)this_00 + 0x40) - iVar2 >> 2))); uVar4 = uVar4 + 1) {
      uVar7 = 0;
      pvVar6 = param_1;
      pbVar3 = (byte *)FUN_009722a0(this_00,(uint)*(ushort *)this);
      FUN_009757a0(*(void **)(iVar2 + uVar4 * 4),pbVar3,(float)pvVar6,uVar7);
    }
    pvVar6 = *(void **)((int)this_00 + 0x34);
    if (pvVar6 != (void *)0x0) {
      uVar7 = 0;
      pbVar3 = (byte *)FUN_009722a0(this_00,(uint)*(ushort *)this);
      FUN_009757a0(pvVar6,pbVar3,(float)param_1,uVar7);
    }
  }
  return;
}


//// FUNCTION FUN_00a41360 @ 00a41360 ////

undefined4 __fastcall FUN_00a41360(int param_1)

{
  int iVar1;
  
  FUN_00a40d40((void *)(param_1 + 100),(void *)**(undefined4 **)(param_1 + 0x28),
               *(int *)(param_1 + 0x1c));
  iVar1 = **(int **)(param_1 + 0x28);
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x60) != '\0')) {
    *(uint *)(iVar1 + 0x48) =
         *(uint *)(iVar1 + 0x48) ^
         ((uint)*(byte *)(param_1 + 0x61) << 0x10 ^ *(uint *)(iVar1 + 0x48)) & 0x10000;
  }
  FUN_00a40d40((void *)(param_1 + 0x70),(void *)**(undefined4 **)(param_1 + 0x28),
               *(int *)(param_1 + 0x1c));
  if ((*(char *)(param_1 + 0x7c) != '\0') && (iVar1 = **(int **)(param_1 + 0x28), iVar1 != 0)) {
    if (*(int *)(iVar1 + 8) == 0xf) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x148);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x40);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(param_1 + 0x84);
    }
  }
  FUN_00a41250((void *)(param_1 + 0x88),*(void **)(param_1 + 0x1c));
  FUN_00a411d0((void *)(param_1 + 0x90),param_1);
  return 2;
}


//// FUNCTION FUN_00a41430 @ 00a41430 ////

int __thiscall FUN_00a41430(void *this,undefined4 *param_1)

{
  byte bVar1;
  
  FUN_00a24f50(this,param_1);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x10);
  bVar1 = *(byte *)((int)param_1 + 0x41);
  *(byte *)((int)this + 0x41) = bVar1;
  *(undefined2 *)((int)this + 0x42) = *(undefined2 *)((int)param_1 + 0x42);
  if ((bVar1 & 1) != 0) {
    *(undefined4 *)((int)this + 0x44) = param_1[0x11];
    *(undefined4 *)((int)this + 0x48) = param_1[0x12];
    return 0x4c;
  }
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  return (int)(param_1 + 0x11) - (int)param_1;
}


//// FUNCTION FUN_00a41490 @ 00a41490 ////

void __fastcall FUN_00a41490(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d78f34;
  if ((param_1[0x1a] != 0) && (0 < (int)param_1[0x19])) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)param_1[0x1a]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1a]);
}


//// FUNCTION FUN_00a41640 @ 00a41640 ////

void __thiscall FUN_00a41640(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar2 = FUN_00a43f10(this,param_1);
  *param_1 = 3;
  param_1[0xf] = *(undefined4 *)((int)this + 0x60);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((int)this + 100);
  *(byte *)((int)param_1 + 0x41) = *(byte *)((int)param_1 + 0x41) | 1;
  param_1[0x11] = *(undefined4 *)((int)this + 0x74);
  param_1[0x12] = *(undefined4 *)((int)this + 0x78);
  puVar7 = (undefined4 *)(iVar2 + (int)param_1);
  iVar2 = 0;
  puVar8 = puVar7;
  if (0 < *(int *)((int)this + 100)) {
    uVar5 = (uint)*(byte *)((int)this + 0x4a);
    do {
      uVar3 = 0;
      if (uVar5 != 0) {
        iVar4 = 0;
        do {
          iVar1 = *(int *)(iVar4 + *(int *)(*(int *)((int)this + 0x68) + iVar2 * 4));
          if (iVar1 == 0) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = *(undefined4 *)(iVar1 + 4);
          }
          *puVar7 = uVar6;
          puVar7[1] = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x68) + iVar2 * 4) + 4 + iVar4);
          puVar7[2] = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x68) + iVar2 * 4) + 8 + iVar4);
          uVar5 = (uint)*(byte *)((int)this + 0x4a);
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0xc;
          puVar8 = puVar8 + 3;
          puVar7 = puVar7 + 3;
        } while (uVar3 < uVar5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 100));
  }
  uVar5 = *(uint *)((int)this + 100);
  puVar7 = *(undefined4 **)((int)this + 0x6c);
  puVar9 = puVar8;
  for (uVar3 = uVar5 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  param_1[1] = (undefined1 *)((uVar5 * 4 - (int)param_1) + (int)puVar8);
  return;
}


//// FUNCTION FUN_00a41710 @ 00a41710 ////

void __fastcall FUN_00a41710(int param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
  FUN_00a44090(param_1);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    do {
      uVar3 = 0;
      if (*(char *)(param_1 + 0x4a) != '\0') {
        iVar4 = 0;
        do {
          iVar1 = FUN_00971c30(*(void **)(param_1 + 0x1c),
                               *(int *)(*(int *)(*(int *)(param_1 + 0x68) + iVar6 * 4) + iVar4));
          *(int *)(iVar4 + *(int *)(*(int *)(param_1 + 0x68) + iVar6 * 4)) = iVar1;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0xc;
        } while (uVar3 < *(byte *)(param_1 + 0x4a));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 100));
  }
  pcVar2 = (char *)FUN_009722a0(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x60));
  if (pcVar2 != (char *)0x0) {
    iVar6 = 0xd;
    bVar8 = true;
    pcVar5 = pcVar2;
    pcVar7 = "ai_no_3d_obj";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 1;
      return;
    }
    iVar6 = 0x14;
    bVar8 = true;
    pcVar5 = pcVar2;
    pcVar7 = "ai_linked_no_3d_obj";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 4;
      return;
    }
    iVar6 = 0x10;
    bVar8 = true;
    pcVar5 = "ai_set_variance";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar2 == *pcVar5;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar8);
    if (bVar8) {
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 2;
    }
  }
  return;
}


//// FUNCTION FUN_00a41840 @ 00a41840 ////

float10 __thiscall FUN_00a41840(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x60)) {
    return (float10)0.0;
  }
  return (float10)*(int *)(param_1 + 100);
}


//// FUNCTION FUN_00a418c0 @ 00a418c0 ////

undefined4 * __thiscall FUN_00a418c0(void *this,byte param_1)

{
  FUN_00a41490(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a418e0 @ 00a418e0 ////

void __thiscall FUN_00a418e0(void *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(int *)((int)this + 100) = param_1;
  pvVar1 = operator_new(param_1 << 2);
  *(void **)((int)this + 0x68) = pvVar1;
  param_1 = 0;
  if (0 < *(int *)((int)this + 100)) {
    do {
      uVar3 = (uint)*(byte *)((int)this + 0x4a);
      pvVar1 = operator_new(uVar3 * 0xc);
      if (pvVar1 == (void *)0x0) {
        pvVar1 = (void *)0x0;
      }
      else if (-1 < (int)(uVar3 - 1)) {
        puVar2 = (undefined4 *)((int)pvVar1 + 8);
        do {
          puVar2[-2] = 0;
          puVar2[-1] = 0xffffffff;
          *puVar2 = 0x78;
          puVar2 = puVar2 + 3;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      *(void **)(*(int *)((int)this + 0x68) + param_1 * 4) = pvVar1;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)((int)this + 100));
  }
  return;
}


//// FUNCTION FUN_00a41970 @ 00a41970 ////

undefined4 __fastcall FUN_00a41970(int param_1)

{
  int *piVar1;
  float fVar2;
  char *pcVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  bool bVar13;
  float10 fVar14;
  ulonglong uVar15;
  double dVar16;
  float local_48;
  float local_44;
  char *local_40;
  int local_3c;
  uint local_38;
  char *local_20;
  int local_1c;
  uint local_18;
  
  if (((*(uint *)((int)*(void **)(param_1 + 0x1c) + 0x50) >> 0x1c & 1) == 0) &&
     (pcVar3 = (char *)FUN_009722a0(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x60)),
     pcVar3 != (char *)0x0)) {
    iVar7 = 9;
    bVar13 = true;
    pcVar11 = "endshoot";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar13 = *pcVar3 == *pcVar11;
      pcVar3 = pcVar3 + 1;
      pcVar11 = pcVar11 + 1;
    } while (bVar13);
    if (bVar13) {
      piVar1 = (int *)(*(int *)(param_1 + 0x1c) + 0x1cc);
      *piVar1 = *piVar1 + 1;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x7c);
  local_44 = 0.0;
  if ((uVar10 & 2) == 0) {
    if (((uVar10 & 1) == 0) && ((uVar10 & 4) == 0)) {
      FUN_00976530(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x60));
    }
  }
  else {
    pvVar4 = *(void **)(*(int *)(param_1 + 0x1c) + 0x148);
    if (pvVar4 != (void *)0x0) {
      local_48 = 1.0;
      pvVar4 = (void *)FUN_0097e350(pvVar4,0);
      if (pvVar4 != (void *)0x0) {
        bVar13 = FUN_009daa10(pvVar4,"[variance:");
        if (bVar13) {
          FUN_009ddf60(pvVar4,&local_40,"[variance");
          if (local_3c != 0) {
            dVar16 = _atof(local_40);
            local_48 = (float)dVar16;
          }
          if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
            _free(local_40);
          }
        }
        bVar13 = FUN_009daa10(pvVar4,"[count variance:");
        if (bVar13) {
          FUN_009ddf60(pvVar4,&local_20,"count variance");
          if (local_1c != 0) {
            _atof(local_20);
          }
          if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
            _free(local_20);
          }
        }
      }
    }
  }
  fVar2 = *(float *)(param_1 + 100);
  local_44 = fVar2;
  uVar15 = FUN_00acd42c();
  uVar10 = (uint)uVar15;
  if ((int)uVar10 < 0) {
    uVar10 = 0;
  }
  else if ((int)fVar2 <= (int)uVar10) {
    uVar10 = (int)fVar2 - 1;
  }
  if (*(int *)(param_1 + 0x60) == -1) {
    fVar14 = FUN_00972130(*(int *)(param_1 + 0x1c),0.0,1.0);
    local_44 = (float)fVar14;
    uVar10 = FUN_009732d0(*(void **)(param_1 + 0x1c),*(float **)(param_1 + 0x6c),local_44,
                          *(int *)(param_1 + 100),4);
  }
  if (*(int *)(param_1 + 0x60) == -2) {
    pbVar5 = (byte *)FUN_009722a0(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x74));
    fVar14 = FUN_009722e0(*(int *)(param_1 + 0x1c),pbVar5);
    local_48 = (float)fVar14;
    pbVar5 = (byte *)FUN_009722a0(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x78));
    fVar14 = FUN_009722e0(*(int *)(param_1 + 0x1c),pbVar5);
    if ((float10)local_48 == fVar14) {
      uVar10 = 1;
    }
    else if (fVar14 <= (float10)local_48) {
      uVar10 = 2;
    }
    else {
      uVar10 = 0;
    }
  }
  if (*(int *)(param_1 + 0x60) == -3) {
    uVar10 = 0;
    if ((**(int **)(param_1 + 0x28) != 0) &&
       (pvVar4 = *(void **)(**(int **)(param_1 + 0x28) + 0x40), pvVar4 != (void *)0x0)) {
      uVar10 = FUN_0097e770(pvVar4);
    }
  }
  if (*(int *)(param_1 + 0x60) == -4) {
    uVar10 = 0;
    local_48 = 0.0;
    if ((((**(int **)(param_1 + 0x28) != 0) &&
         (pvVar4 = *(void **)(**(int **)(param_1 + 0x28) + 0x40), pvVar4 != (void *)0x0)) &&
        (iVar7 = FUN_0097e350(pvVar4,0), iVar7 != 0)) &&
       (((*(int *)(iVar7 + 0xa4) != 0 &&
         (pcVar3 = *(char **)(*(int *)(iVar7 + 0xa4) + 0x10), pcVar3 != (char *)0x0)) &&
        (uVar6 = FUN_009ace70(pcVar3,"proptype",&local_48), (char)uVar6 != '\0')))) {
      uVar15 = FUN_00acd42c();
      uVar10 = (uint)uVar15;
      if ((int)uVar10 < 0) {
        uVar10 = 0;
      }
      else if (*(int *)(param_1 + 100) <= (int)uVar10) {
        uVar10 = *(int *)(param_1 + 100) - 1;
      }
    }
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    iVar7 = 0;
    do {
      puVar9 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x68) + uVar10 * 4) + iVar7);
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0x24) + iVar7);
      *puVar12 = *puVar9;
      puVar12[1] = puVar9[1];
      puVar12[2] = puVar9[2];
      uVar8 = uVar8 + 1;
      iVar7 = iVar7 + 0xc;
    } while (uVar8 < *(byte *)(param_1 + 0x4a));
  }
  return 2;
}


//// FUNCTION FUN_00a41ce0 @ 00a41ce0 ////

void __thiscall FUN_00a41ce0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  FUN_00a418e0(this,param_2);
  pvVar1 = operator_new(param_1 * 0x14);
  if (pvVar1 != (void *)0x0) {
    if (-1 < param_1 + -1) {
      fVar3 = FUN_004012c0(0.0);
      puVar2 = (undefined4 *)((int)pvVar1 + 8);
      do {
        puVar2[2] = 0;
        *(undefined1 *)(puVar2 + -2) = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[-1] = 0;
        puVar2[2] = (float)fVar3;
        puVar2 = puVar2 + 5;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    *(void **)((int)this + 0x70) = pvVar1;
    return;
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  return;
}


//// FUNCTION FUN_00a41d60 @ 00a41d60 ////

undefined4 * __thiscall
FUN_00a41d60(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfab58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,param_4);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d78f34;
  FUN_00a442a0(this,(byte)param_1);
  *(undefined4 *)((int)this + 0x60) = param_3;
  FUN_00a41ce0(this,param_1,param_2);
  pvVar1 = operator_new(param_2 * 4);
  *(void **)((int)this + 0x6c) = pvVar1;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 100)) {
    do {
      iVar2 = iVar2 + 1;
      *(float *)(*(int *)((int)this + 0x6c) + -4 + iVar2 * 4) =
           1.0 / (float)*(int *)((int)this + 100);
    } while (iVar2 < *(int *)((int)this + 100));
  }
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a41e10 @ 00a41e10 ////

undefined4 * __thiscall FUN_00a41e10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int local_58 [7];
  undefined4 local_3c;
  undefined4 local_1c;
  byte local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfab78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  *(uint *)((int)this + 0x7c) = *(uint *)((int)this + 0x7c) & 0xfffffff8;
  local_58[0] = 0;
  local_58[1] = 0;
  local_3c = 0;
  piVar4 = local_58;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar4 = local_58;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d78f34;
  *(undefined4 *)((int)this + 0x6c) = 0;
  FUN_00a41430(local_58,param_1);
  *(undefined4 *)((int)this + 0x74) = local_14;
  *(undefined4 *)((int)this + 0x78) = local_10;
  FUN_00a444f0(this,param_1);
  *(undefined4 *)((int)this + 0x60) = local_1c;
  *(uint *)((int)this + 100) = (uint)local_18;
  FUN_00a41ce0(this,(uint)*(byte *)((int)this + 0x4a),(uint)local_18);
  puVar3 = (undefined4 *)
           ((int)param_1 +
           (local_58[1] - ((uint)*(byte *)((int)this + 0x4a) * 0xc + 4) * *(int *)((int)this + 100))
           );
  param_1 = (undefined4 *)0x0;
  if (0 < *(int *)((int)this + 100)) {
    do {
      uVar5 = 0;
      if (*(char *)((int)this + 0x4a) != '\0') {
        iVar2 = 0;
        do {
          FUN_00a44190((void *)(*(int *)(*(int *)((int)this + 0x68) + (int)param_1 * 4) + iVar2),
                       puVar3);
          puVar3 = puVar3 + 3;
          uVar5 = uVar5 + 1;
          iVar2 = iVar2 + 0xc;
        } while (uVar5 < *(byte *)((int)this + 0x4a));
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)((int)this + 100));
  }
  puVar1 = operator_new(*(int *)((int)this + 100) << 2);
  *(undefined4 **)((int)this + 0x6c) = puVar1;
  for (uVar5 = *(uint *)((int)this + 100) & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a41f60 @ 00a41f60 ////

void __fastcall FUN_00a41f60(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfab98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d79024;
  local_4 = 0;
  if ((void *)param_1[0x26] != (void *)0x0) {
    FUN_00985de0((void *)param_1[0x26]);
    param_1[0x26] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x2b]);
}


//// FUNCTION FUN_00a42070 @ 00a42070 ////

void __thiscall FUN_00a42070(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00a43f10(this,param_1);
  *param_1 = 2;
  puVar3 = (undefined4 *)((int)this + 0x60);
  puVar4 = param_1 + 0xf;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x1c] = *(undefined4 *)((int)this + 0x94);
  *(byte *)(param_1 + 0x1d) =
       *(byte *)(param_1 + 0x1d) ^ (*(byte *)((int)this + 0xb0) ^ *(byte *)(param_1 + 0x1d)) & 1;
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a420c0 @ 00a420c0 ////

void __fastcall FUN_00a420c0(int param_1)

{
  FUN_00a44130(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


//// FUNCTION FUN_00a42160 @ 00a42160 ////

void __fastcall FUN_00a42160(int param_1)

{
  FUN_00a44180(param_1);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}


//// FUNCTION FUN_00a42230 @ 00a42230 ////

void __fastcall FUN_00a42230(undefined4 *param_1)

{
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_00a422a0 @ 00a422a0 ////

void __thiscall FUN_00a422a0(void *this,float *param_1,float param_2)

{
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (0.0 <= param_2) {
    local_1c = param_2;
    if (1.0 < param_2) {
      local_1c = 1.0;
    }
  }
  else {
    local_1c = 0.0;
  }
  param_2 = local_1c - 0.001;
  if (0.0 <= param_2) {
    if (1.0 < param_2) {
      param_2 = 1.0;
    }
  }
  else {
    param_2 = 0.0;
  }
  local_1c = local_1c + 0.001;
  if (0.0 <= local_1c) {
    if (1.0 < local_1c) {
      local_1c = 1.0;
    }
  }
  else {
    local_1c = 0.0;
  }
  FUN_009a3dc0(this,&local_c,param_2);
  FUN_009a3dc0(this,&local_18,local_1c);
  local_18 = local_18 - local_c;
  local_14 = local_14 - local_8;
  local_10 = local_10 - local_4;
  FUN_00412e20(&local_18);
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}


//// FUNCTION FUN_00a423d0 @ 00a423d0 ////

undefined4 * __fastcall FUN_00a423d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  puVar2 = param_1;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a42230(param_1 + 0xf);
  puVar2 = param_1;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a42400 @ 00a42400 ////

undefined4 * __thiscall FUN_00a42400(void *this,char *param_1,undefined4 param_2)

{
  byte *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfabb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,param_2);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d79024;
  FUN_00a42230((undefined4 *)((int)this + 0x60));
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  pbVar1 = Anim_LoadByName(param_1);
  *(byte **)((int)this + 0x98) = pbVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a424b0 @ 00a424b0 ////

undefined4 * __thiscall FUN_00a424b0(void *this,byte param_1)

{
  FUN_00a41f60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a424d0 @ 00a424d0 ////

undefined4 * __thiscall FUN_00a424d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_84 [7];
  undefined4 local_68;
  undefined4 local_48 [13];
  undefined4 local_14;
  byte local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfabdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d79024;
  FUN_00a42230((undefined4 *)((int)this + 0x60));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  FUN_00a444f0(this,param_1);
  local_84[0] = 0;
  local_84[1] = 0;
  local_68 = 0;
  puVar2 = local_84;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a42230(local_48);
  puVar2 = local_84;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a24f50(local_84,param_1);
  local_14 = param_1[0x1c];
  local_10 = *(byte *)(param_1 + 0x1d);
  puVar2 = param_1 + 0xf;
  puVar3 = local_48;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_48;
  puVar3 = (undefined4 *)((int)this + 0x60);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((uint)local_10 ^ *(uint *)((int)this + 0xb0)) & 1;
  *(undefined4 *)((int)this + 0x94) = local_14;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a42610 @ 00a42610 ////

undefined4 __fastcall FUN_00a42610(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fStack_8;
  
  param_1[0x2a] = param_1[0x29];
  param_1[0x29] = (int)((float)param_1[0x27] * 0.1 + (float)param_1[0x29]);
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    iVar3 = FUN_00a43cd0((int)param_1);
    if ((((*(int *)param_1[10] != 0) && (iVar4 = *(int *)(*(int *)param_1[10] + 0x40), iVar4 != 0))
        && (piVar1 = *(int **)(iVar4 + 0x78), piVar1 != (int *)0x0)) &&
       (iVar4 = *piVar1, iVar4 != 0)) {
      iVar4 = FUN_0059ee40(iVar4);
      if (iVar3 <= iVar4) {
        return 1;
      }
      goto LAB_00a4269c;
    }
  }
  if ((float)param_1[0x24] - 0.001 < (float)param_1[0x2a] ==
      ((float)param_1[0x24] - 0.001 == (float)param_1[0x2a])) {
    return 1;
  }
LAB_00a4269c:
  if ((*(int **)param_1[9] != (int *)0x0) &&
     (cVar2 = (**(code **)(**(int **)param_1[9] + 0x4c))(), cVar2 != '\0')) {
    piVar1 = *(int **)param_1[9];
    iVar3 = param_1[0x26];
    if (piVar1[0x26] != iVar3) {
      iVar4 = (**(code **)(*param_1 + 0x24))();
      uVar5 = FUN_00429570(iVar3);
      uVar6 = FUN_00429570(param_1[0x26]);
      iVar3 = (**(code **)(*param_1 + 0x24))();
      uVar7 = FUN_00429570(param_1[0x26]);
      fStack_8 = ((float)(int)(iVar3 + uVar6 * (iVar4 / (int)(uVar5 * 100)) * -100) * 0.01) /
                 (float)(int)(uVar7 - 1);
      if (0.0 <= fStack_8) {
        if (1.0 < fStack_8) {
          fStack_8 = 1.0;
        }
        (**(code **)(*piVar1 + 0x50))(fStack_8);
        return 2;
      }
      (**(code **)(*piVar1 + 0x50))(0);
      return 2;
    }
    iVar3 = (**(code **)(*param_1 + 0x24))();
    piVar1[0x28] = iVar3;
  }
  return 2;
}


//// FUNCTION FUN_00a427b0 @ 00a427b0 ////

void __fastcall FUN_00a427b0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 != 0) {
    iVar4 = 0;
    if (*(char *)(iVar2 + 0x33) != '\0') {
      if (*(char *)(iVar2 + 0x33) == '\0') {
        iVar4 = -1;
      }
      if (*(int *)(iVar2 + 0x6c + iVar4 * 4) != 0) {
        uVar5 = FUN_00acd42c();
        *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x90) / ((float)(int)uVar5 * 0.1);
        if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
          fVar1 = *(float *)(param_1 + 0x90);
          iVar2 = FUN_0059ee40(iVar2);
          *(float *)(param_1 + 0x9c) = (fVar1 * 1000.0) / (float)iVar2;
        }
        pfVar3 = FUN_009a4160((void *)(param_1 + 0x60));
        *(float **)(param_1 + 0xac) = pfVar3;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a42880 @ 00a42880 ////

float10 __fastcall FUN_00a42880(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  if (((((*(byte *)(param_1 + 0xb0) & 1) != 0) && (**(int **)(param_1 + 0x28) != 0)) &&
      (iVar1 = *(int *)(**(int **)(param_1 + 0x28) + 0x40), iVar1 != 0)) &&
     ((piVar2 = *(int **)(iVar1 + 0x78), piVar2 != (int *)0x0 && (*piVar2 != 0)))) {
    iVar1 = piVar2[1];
    iVar3 = FUN_0059ee40(*piVar2);
    return (float10)iVar1 / (float10)iVar3;
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    fVar4 = FUN_009a3ea0(*(int *)(param_1 + 0xac),
                         (*(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8)) *
                         (float)DAT_01050b60 * 0.01 + *(float *)(param_1 + 0xa8));
    return fVar4;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00a429a0 @ 00a429a0 ////

uint __thiscall
FUN_00a429a0(void *this,undefined4 param_1,float *param_2,float *param_3,float param_4)

{
  float *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  float local_c [3];
  
  if (param_4 != 0.0) {
    if (param_4 == 1.261169e-39) {
      param_4 = 1.0;
    }
    else {
      fVar7 = FUN_00a42880((int)this);
      param_4 = (float)fVar7;
      if (fVar7 < (float10)0.001) goto LAB_00a42a74;
    }
    this_00 = (float *)((int)this + 0x60);
    if ((*(byte *)((int)this + 0xb0) & 1) == 0) {
      FUN_009a3dc0(this_00,param_2,param_4);
    }
    else {
      fVar1 = *(float *)((int)this + 0x88);
      fVar2 = *(float *)((int)this + 0x8c);
      fVar5 = 1.0 - param_4;
      fVar3 = *(float *)((int)this + 100);
      fVar4 = *(float *)((int)this + 0x68);
      *param_2 = fVar5 * *this_00 + param_4 * *(float *)((int)this + 0x84);
      param_2[1] = fVar5 * fVar3 + param_4 * fVar1;
      param_2[2] = fVar5 * fVar4 + param_4 * fVar2;
    }
    FUN_00a422a0(this_00,local_c,param_4);
    fVar7 = FUN_009a4140(local_c);
    fVar7 = FUN_004012c0((float)fVar7);
    *param_3 = (float)fVar7;
    return (uint)(*(int *)((int)this + 8) != 0);
  }
LAB_00a42a74:
  uVar6 = FUN_00a43d30(this,param_1,param_2,param_3);
  return uVar6;
}


//// FUNCTION FUN_00a42ae0 @ 00a42ae0 ////

void __fastcall FUN_00a42ae0(int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  
  FUN_00a44090(param_1);
  pcVar1 = (char *)FUN_009722a0(*(void **)(param_1 + 0x1c),*(int *)(param_1 + 0x94));
  pbVar2 = Anim_LoadByName(pcVar1);
  *(byte **)(param_1 + 0x98) = pbVar2;
  FUN_00a427b0(param_1);
  return;
}


//// FUNCTION FUN_00a42bf0 @ 00a42bf0 ////

void __fastcall FUN_00a42bf0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfabf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d79094;
  local_4 = 0;
  if ((void *)param_1[0x18] != (void *)0x0) {
    FUN_00aa9580((void *)param_1[0x18]);
    param_1[0x18] = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  local_4 = 0xffffffff;
  FUN_00a43a90(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a42c50 @ 00a42c50 ////

void __thiscall FUN_00a42c50(void *this,int param_1)

{
  void *this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(char *)((int)this + 0x4a) != '\0') {
    do {
      this_00 = *(void **)(*(int *)((int)this + 0x28) + uVar1 * 4);
      if (this_00 != (void *)0x0) {
        FUN_00a3bfe0(this_00,param_1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x4a));
  }
  return;
}


//// FUNCTION FUN_00a42c90 @ 00a42c90 ////

undefined4 __thiscall FUN_00a42c90(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a43f10(this,param_1);
  *param_1 = 1;
  param_1[0xf] = *(undefined4 *)((int)this + 0x6c);
  param_1[0x10] = *(undefined4 *)((int)this + 0x70);
  param_1[0x11] = *(undefined4 *)((int)this + 0x78);
  return uVar1;
}


//// FUNCTION FUN_00a42cc0 @ 00a42cc0 ////

undefined4 __fastcall FUN_00a42cc0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  
  if (((*(int *)(param_1 + 0x74) < 3) && (*(int *)(param_1 + 0x60) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x60) + 8) != 0)) {
    fVar2 = FUN_00972130(*(int *)(param_1 + 0x1c),0.0,100.0);
    if ((float10)30.0 <= fVar2) {
      fVar2 = FUN_00972130(*(int *)(param_1 + 0x1c),0.0,1.0);
      uVar1 = FUN_009732d0(*(void **)(param_1 + 0x1c),*(float **)(*(int *)(param_1 + 0x60) + 0xc),
                           (float)fVar2,*(int *)(*(int *)(param_1 + 0x60) + 8),8);
      return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 4 + uVar1 * 8);
    }
  }
  return 0;
}


//// FUNCTION FUN_00a42d40 @ 00a42d40 ////

int __thiscall FUN_00a42d40(void *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  FUN_00972130(*(int *)((int)this + 0x1c),-0.2,0.2);
  uVar2 = FUN_00acd42c();
  iVar1 = (int)uVar2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (param_1 <= iVar1) {
    iVar1 = param_1 + -1;
  }
  return iVar1;
}


//// FUNCTION FUN_00a42de0 @ 00a42de0 ////

void __thiscall FUN_00a42de0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = fVar1 * *(float *)this +
             fVar2 * *(float *)((int)this + 0xc) + fVar3 * *(float *)((int)this + 0x18);
  param_1[1] = fVar1 * *(float *)((int)this + 4) +
               fVar2 * *(float *)((int)this + 0x10) + fVar3 * *(float *)((int)this + 0x1c);
  param_1[2] = fVar1 * *(float *)((int)this + 8) +
               fVar2 * *(float *)((int)this + 0x14) + fVar3 * *(float *)((int)this + 0x20);
  return;
}


//// FUNCTION FUN_00a42e60 @ 00a42e60 ////

undefined4 * __thiscall FUN_00a42e60(void *this,byte param_1)

{
  FUN_00a42bf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a42e80 @ 00a42e80 ////

undefined4 * __thiscall FUN_00a42e80(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_54 [7];
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfac18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a444c0(this,0xffffffff);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d79094;
  FUN_00a444f0(this,param_1);
  local_54[0] = 0;
  local_54[1] = 0;
  local_38 = 0;
  puVar4 = local_54;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_54;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_00a24f50(local_54,param_1);
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  *(undefined4 *)((int)this + 0x78) = param_1[0x11];
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  *(undefined4 *)((int)this + 0x70) = uVar2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a42f30 @ 00a42f30 ////

undefined4 __thiscall FUN_00a42f30(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)((int)this + 0x60);
  iVar4 = piVar1[1];
  *(undefined4 *)((int)this + 0x38) = 0;
  iVar5 = *piVar1;
  if (iVar5 != 0) {
    if (iVar5 < 1) {
      return param_1;
    }
    if (3 < iVar5) {
      return param_1;
    }
    *(undefined4 *)((int)this + 100) = 0;
    if ((((*(int *)((int)this + 0x34) != -1) &&
         (*(int *)((int)this + 0x34) <= *(int *)((int)this + 0x3c))) ||
        ((*(byte *)((int)this + 0x4b) & 1) != 0)) &&
       (((*piVar1 != 3 && (*piVar1 != 2)) ||
        (((*(uint *)((int)this + 0x48) & 0x1000000) != 0 ||
         (((*(uint *)((int)this + 0x48) & 0x10000000) == 0 ||
          (uVar2 = FUN_00975740(*(void **)((int)this + 0x1c),*(int *)((int)this + 0x70)),
          (char)uVar2 == '\0')))))))) {
      *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfeffffff;
      if (**(int **)((int)this + 0x60) == 1) {
        iVar4 = (*(int **)((int)this + 0x60))[4];
        iVar5 = 8;
        fVar3 = FUN_00972130(*(int *)((int)this + 0x1c),0.0,1.0);
        uVar2 = FUN_009732d0(*(void **)((int)this + 0x1c),
                             *(float **)(*(int *)((int)this + 0x60) + 0x14),(float)fVar3,iVar4,iVar5
                            );
        *(uint *)((int)this + 100) = uVar2;
        *(undefined4 *)((int)this + 0x68) =
             *(undefined4 *)(*(int *)(*(int *)((int)this + 0x60) + 0x14) + 4 + uVar2 * 8);
      }
      return 2;
    }
    iVar5 = FUN_00a42cc0((int)this);
    *(int *)((int)this + 0x68) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 0x74) = 0;
      iVar5 = **(int **)((int)this + 0x60);
      if ((iVar5 == 3) || (iVar5 == 2)) {
        FUN_00976530(*(int *)((int)this + 0x1c),*(int *)((int)this + 0x70));
        uVar2 = FUN_00a42d40(this,*(int *)(*(int *)((int)this + 0x60) + 0x10));
      }
      else {
        iVar5 = (*(int **)((int)this + 0x60))[4];
        iVar6 = 8;
        fVar3 = FUN_00972130(*(int *)((int)this + 0x1c),0.0,1.0);
        uVar2 = FUN_009732d0(*(void **)((int)this + 0x1c),
                             *(float **)(*(int *)((int)this + 0x60) + 0x14),(float)fVar3,iVar5,iVar6
                            );
      }
      *(uint *)((int)this + 100) = uVar2;
      *(undefined4 *)((int)this + 0x68) =
           *(undefined4 *)(*(int *)(*(int *)((int)this + 0x60) + 0x14) + 4 + uVar2 * 8);
      FUN_00a42c50(this,iVar4);
      return param_1;
    }
    *(int *)((int)this + 0x74) = *(int *)((int)this + 0x74) + 1;
    FUN_00a42c50(this,iVar4);
    return param_1;
  }
  iVar5 = *(int *)((int)this + 100) + 1;
  *(int *)((int)this + 100) = iVar5;
  if (iVar5 < piVar1[4]) {
    FUN_00a42c50(this,iVar4);
    goto LAB_00a430f3;
  }
  if (*(int *)((int)this + 0x34) == -1) {
    uVar2 = *(uint *)((int)this + 0x48);
    if ((uVar2 & 0x1000000) == 0) {
      FUN_00a42c50(this,iVar4);
      *(undefined4 *)((int)this + 100) = 0;
      goto LAB_00a430f3;
    }
LAB_00a430d6:
    *(uint *)((int)this + 0x48) = uVar2 & 0xfeffffff;
    param_1 = 2;
  }
  else if ((*(int *)((int)this + 0x34) <= *(int *)((int)this + 0x3c)) ||
          ((*(byte *)((int)this + 0x4b) & 1) != 0)) {
    uVar2 = *(uint *)((int)this + 0x48);
    goto LAB_00a430d6;
  }
  *(undefined4 *)((int)this + 100) = 0;
LAB_00a430f3:
  *(undefined4 *)((int)this + 0x68) =
       *(undefined4 *)
        (*(int *)(*(int *)((int)this + 0x60) + 0x14) + 4 + *(int *)((int)this + 100) * 8);
  return param_1;
}


//// FUNCTION FUN_00a43110 @ 00a43110 ////

undefined4 __fastcall FUN_00a43110(void *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  void *local_4;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0x60);
  if (puVar1 != (undefined4 *)0x0) {
    local_4 = param_1;
    switch(*puVar1) {
    case 0:
      return *(undefined4 *)(puVar1[5] + 4);
    case 1:
      goto switchD_00a4312c_caseD_1;
    case 2:
    case 3:
      FUN_00976530(*(int *)((int)param_1 + 0x1c),*(int *)((int)param_1 + 0x70));
      iVar3 = FUN_00a42d40(param_1,*(int *)(*(int *)((int)param_1 + 0x60) + 0x10));
      return *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x60) + 0x14) + 4 + iVar3 * 8);
    default:
      return 0;
    }
  }
  return *(undefined4 *)((int)param_1 + 0x68);
switchD_00a4312c_caseD_1:
  if ((*(uint *)(*(int *)((int)param_1 + 0x1c) + 0x50) & 0x40000) == 0) {
    local_4 = *(void **)((int)param_1 + 4);
    fVar4 = FUN_0044fa90((uint *)&local_4,0.0,1.0);
  }
  else {
    fVar4 = FUN_00972130(*(int *)((int)param_1 + 0x1c),0.0,1.0);
  }
  local_4 = (void *)(float)fVar4;
  uVar2 = FUN_009732d0(*(void **)((int)param_1 + 0x1c),
                       *(float **)(*(int *)((int)param_1 + 0x60) + 0x14),(float)local_4,
                       *(int *)(*(int *)((int)param_1 + 0x60) + 0x10),8);
  return *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x60) + 0x14) + 4 + uVar2 * 8);
}


//// FUNCTION FUN_00a431e0 @ 00a431e0 ////

void __fastcall FUN_00a431e0(void *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)param_1 + 100) = 0;
  uVar1 = FUN_00a43110(param_1);
  *(undefined4 *)((int)param_1 + 0x68) = uVar1;
  FUN_00a44130((int)param_1);
  return;
}


//// FUNCTION FUN_00a43230 @ 00a43230 ////

undefined4 __fastcall FUN_00a43230(void *param_1)

{
  int iVar1;
  void *this;
  void *this_00;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)((int)param_1 + 0x68);
  uVar5 = 1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)param_1 + 100) = 0;
    return 2;
  }
  if ((*(byte *)(iVar1 + 0x34) & 2) == 0) {
    uVar2 = *(uint *)(iVar1 + 0x30) & 0xffff;
  }
  else {
    uVar2 = (int)((*(uint *)(iVar1 + 0x30) & 0xffff) - 1) / 3 + 1;
  }
  if ((int)(uVar2 - 1) <= *(int *)((int)param_1 + 0x38)) {
    uVar5 = FUN_00a42f30(param_1,1);
  }
  this = *(void **)((int)param_1 + 0x1c);
  if (((*(int *)((int)this + 0x34) != 0) && ((*(uint *)((int)this + 0x50) & 0x100) == 0)) &&
     (*(int *)((int)param_1 + 0x78) != -1)) {
    this_00 = *(void **)((int)this + 0x34);
    pbVar3 = (byte *)FUN_009722a0(this,*(int *)((int)param_1 + 0x78));
    if (((this_00 != (void *)0x0) && (pbVar3 != (byte *)0x0)) &&
       (uVar4 = FUN_009736f0(this_00,pbVar3), (char)uVar4 != '\0')) {
      *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 0x1000000;
    }
  }
  if ((*(int *)((int)param_1 + 0x3c) == *(int *)((int)param_1 + 0x34)) &&
     ((*(uint *)((int)param_1 + 0x48) & 0x20000000) != 0)) {
    *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 0x1000000;
  }
  if ((*(uint *)((int)param_1 + 0x48) & 0x1000000) == 0) {
    return uVar5;
  }
  *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) & 0xfeffffff;
  return 2;
}


//// FUNCTION FUN_00a43310 @ 00a43310 ////

bool __thiscall FUN_00a43310(void *this,int param_1,float *param_2,float *param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float fVar9;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = *(int *)((int)this + 8);
  iVar3 = (**(code **)(*(int *)this + 0x28))();
  if (iVar3 == 0) {
    *param_2 = *(float *)((int)this + 0xc);
    param_2[1] = *(float *)((int)this + 0x10);
    param_2[2] = *(float *)((int)this + 0x14);
    *param_3 = *(float *)((int)this + 0x18);
    return true;
  }
  if (param_1 < 0) {
LAB_00a43389:
    param_1 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x28))();
    if ((*(byte *)(iVar3 + 0x34) & 1) == 0) {
      uVar4 = (uint)*(byte *)(iVar3 + 0x33);
    }
    else {
      uVar4 = 1;
    }
    if ((int)uVar4 <= param_1) goto LAB_00a43389;
    if (param_1 != 0) {
      iVar3 = (**(code **)(*(int *)this + 0x28))();
      iVar3 = *(int *)(iVar3 + 0x28);
      if (iVar3 != 0) {
        fStack_4 = 0.0;
        fStack_8 = 0.0;
        fStack_c = 0.0;
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        fStack_24 = 0.0;
        uStack_28 = 0;
        fStack_2c = 0.0;
        uStack_10 = 0x3f800000;
        fStack_20 = 1.0;
        fStack_30 = 1.0;
        FUN_0040b4f0(&fStack_30,*(float *)((int)this + 0x18));
        fStack_c = fStack_c + *(float *)((int)this + 0xc);
        pfVar6 = (float *)(iVar3 + -0x10 + param_1 * 0x10);
        fStack_8 = fStack_8 + *(float *)((int)this + 0x10);
        fStack_4 = fStack_4 + *(float *)((int)this + 0x14);
        fVar8 = FUN_004012c0(pfVar6[3] + *(float *)((int)this + 0x18));
        pfVar7 = param_3;
        *param_3 = (float)fVar8;
        fStack_3c = *pfVar6;
        fStack_38 = pfVar6[1];
        fStack_34 = pfVar6[2];
        FUN_00a42de0(&fStack_30,&fStack_3c);
        fStack_34 = fStack_34 + *(float *)((int)this + 0x14);
        fStack_38 = fStack_38 + *(float *)((int)this + 0x10);
        fStack_3c = fStack_3c + *(float *)((int)this + 0xc);
        *param_2 = fStack_3c;
        param_2[1] = fStack_38;
        param_2[2] = fStack_34;
        goto LAB_00a433b1;
      }
    }
  }
  *param_2 = *(float *)((int)this + 0xc);
  param_2[1] = *(float *)((int)this + 0x10);
  param_2[2] = *(float *)((int)this + 0x14);
  *param_3 = *(float *)((int)this + 0x18);
  pfVar7 = param_3;
LAB_00a433b1:
  pfVar6 = param_2;
  fStack_c = *param_2;
  fStack_4 = param_2[2];
  fVar8 = (float10)fcos((float10)*pfVar7);
  fStack_8 = param_2[1];
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_28 = 0;
  uStack_10 = 0x3f800000;
  fStack_20 = (float)fVar8;
  fStack_30 = (float)fVar8;
  fVar8 = (float10)fsin((float10)*pfVar7);
  fStack_2c = (float)fVar8;
  fStack_24 = (float)-fVar8;
  iVar3 = (**(code **)(*(int *)this + 0x28))();
  bVar1 = *(byte *)(iVar3 + 0x33);
  if (bVar1 != 0) {
    if (param_1 < 0) {
      param_1 = 0;
    }
    if ((int)(uint)bVar1 <= param_1) {
      param_1 = bVar1 - 1;
    }
    iVar3 = *(int *)(iVar3 + 0x6c + param_1 * 4);
    if (iVar3 != 0) {
      iVar5 = (**(code **)(*(int *)this + 0x28))();
      if ((*(byte *)(iVar5 + 0x34) & 2) == 0) {
        uVar4 = *(uint *)(iVar5 + 0x30) & 0xffff;
      }
      else {
        uVar4 = (int)((*(uint *)(iVar5 + 0x30) & 0xffff) - 1) / 3 + 1;
      }
      param_2 = (float *)((float)param_4 / ((float)(int)(uVar4 - 1) * 100.0));
      if ((float)param_2 <= 1.0) {
        if ((float)param_2 < 0.0) {
          param_2 = (float *)0x0;
        }
      }
      else {
        param_2 = (float *)0x3f800000;
      }
      fStack_34 = (float)param_2 * *(float *)(iVar3 + 0x18);
      fStack_38 = (float)param_2 * *(float *)(iVar3 + 0x14);
      fStack_3c = (float)param_2 * *(float *)(iVar3 + 0x10);
      FUN_00a42de0(&fStack_30,&fStack_3c);
      fStack_34 = fStack_34 + pfVar6[2];
      fStack_38 = fStack_38 + pfVar6[1];
      fStack_3c = fStack_3c + *pfVar6;
      *pfVar6 = fStack_3c;
      pfVar6[1] = fStack_38;
      pfVar6[2] = fStack_34;
      fVar9 = *(float *)(iVar3 + 0x1c);
      pfVar6 = param_2;
      fVar8 = FUN_004012c0(0.0);
      pfVar6 = FUN_00429400((float *)&param_2,(float)fVar8,fVar9,(float)pfVar6);
      fVar8 = FUN_004012c0(*pfVar6 + *pfVar7);
      *pfVar7 = (float)fVar8;
    }
  }
  return iVar2 != 0;
}


//// FUNCTION FUN_00a43990 @ 00a43990 ////

void __thiscall FUN_00a43990(void *this,char *param_1)

{
  undefined4 extraout_EAX;
  undefined4 uVar1;
  
  if (((*(byte *)((int)this + 0x4c) & 1) == 0) || (DAT_010b956c == '\0')) {
    if (param_1 == (char *)0x0) {
      param_1 = (char *)FUN_009722a0(*(void **)((int)this + 0x1c),*(int *)((int)this + 0x6c));
    }
    FUN_00aa9160(param_1,'\x01');
    *(undefined4 *)((int)this + 0x60) = extraout_EAX;
    uVar1 = FUN_00a43110(this);
    *(undefined4 *)((int)this + 0x68) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00a439e0 @ 00a439e0 ////

void __fastcall FUN_00a439e0(void *param_1)

{
  char *pcVar1;
  undefined4 extraout_EAX;
  undefined4 uVar2;
  
  FUN_00a44090((int)param_1);
  if (((*(byte *)((int)param_1 + 0x4c) & 1) == 0) || (DAT_010b956c == '\0')) {
    pcVar1 = (char *)FUN_009722a0(*(void **)((int)param_1 + 0x1c),*(int *)((int)param_1 + 0x6c));
    FUN_00aa9160(pcVar1,'\x01');
    *(undefined4 *)((int)param_1 + 0x60) = extraout_EAX;
    uVar2 = FUN_00a43110(param_1);
    *(undefined4 *)((int)param_1 + 0x68) = uVar2;
  }
  return;
}


//// FUNCTION FUN_00a43a90 @ 00a43a90 ////

void __fastcall FUN_00a43a90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7912c;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[9]);
}


//// FUNCTION FUN_00a43b20 @ 00a43b20 ////

int __fastcall FUN_00a43b20(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x4a);
  iVar1 = 0;
  if (uVar3 != 0) {
    piVar2 = *(int **)(param_1 + 0x28);
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return iVar1;
}


//// FUNCTION FUN_00a43b70 @ 00a43b70 ////

void __thiscall FUN_00a43b70(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_2 < *(byte *)((int)this + 0x4a)) &&
     (*(void **)(*(int *)((int)this + 0x28) + param_2 * 4) = param_1, param_1 != (void *)0x0)) {
    *(uint *)((int)param_1 + 0x94) = *(uint *)((int)param_1 + 0x94) | *(uint *)((int)this + 0x44);
    FUN_00a3b890(param_1,(byte)((uint)*(undefined4 *)((int)this + 0x48) >> 0x1a) & 1);
    *(undefined4 *)((int)param_1 + 0x54) = 0xc62d9c00;
    *(undefined4 *)((int)param_1 + 0x50) = 0xc62d9c00;
    *(undefined4 *)((int)param_1 + 0x6c) = 0xc62d9c00;
    *(undefined4 *)((int)param_1 + 0x68) = 0;
    *(undefined4 *)((int)param_1 + 100) = 0;
    *(undefined4 *)((int)param_1 + 0x7c) = 0;
    *(undefined4 *)((int)param_1 + 0x78) = 0;
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    *(undefined4 *)((int)param_1 + 0x74) = 0;
    *(undefined4 *)((int)param_1 + 0x5c) = 0;
    *(undefined4 *)((int)param_1 + 0x70) = 0;
    *(undefined4 *)((int)param_1 + 0x58) = 0;
    if ((*(int *)((int)param_1 + 8) == 0xf) && (*(int *)(*(int *)((int)this + 0x1c) + 0x148) != 0))
    {
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x1c) + 0x148) + 0x9c);
      *puVar1 = *puVar1 & 0xffdfffff;
      iVar2 = (**(code **)(*(int *)this + 0x28))();
      if (((iVar2 != 0) && (*(char *)(iVar2 + 0x33) == '\0')) && (*(char *)(iVar2 + 0x32) != '\0'))
      {
        puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x1c) + 0x148) + 0x9c);
        *puVar1 = *puVar1 | 0x200000;
        if (*(int *)(*(int *)(*(int *)((int)this + 0x1c) + 0x148) + 0x78) == 0) {
          FUN_0097e2b0(*(int *)(*(int *)((int)this + 0x1c) + 0x148));
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a43c50 @ 00a43c50 ////

void __fastcall FUN_00a43c50(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfdffffff;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    piVar1 = *(int **)(param_1 + 0x28);
    uVar2 = (uint)*(byte *)(param_1 + 0x4a);
    do {
      if (*piVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (iVar3 != 0) {
      FUN_00971920(*(void **)(param_1 + 0x1c),param_1);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a43c90 @ 00a43c90 ////

undefined4 __thiscall
FUN_00a43c90(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  if (*(uint *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 0xc) = *param_2;
    *(undefined4 *)((int)this + 0x10) = param_2[1];
    *(undefined4 *)((int)this + 0x14) = param_2[2];
    *(undefined4 *)((int)this + 0x18) = param_3;
    *(uint *)((int)this + 8) = (param_4 != '\0') + 1;
    return CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return *(uint *)((int)this + 8) & 0xffffff00;
}


//// FUNCTION FUN_00a43cd0 @ 00a43cd0 ////

int __fastcall FUN_00a43cd0(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 0) && (-1 < *(int *)(param_1 + 0x38))) {
    return *(int *)(param_1 + 0x38) * 100 + (-(uint)(*(int *)(param_1 + 0x1c) != 0) & DAT_01050b60);
  }
  return 0;
}


//// FUNCTION FUN_00a43d30 @ 00a43d30 ////

undefined4 __thiscall
FUN_00a43d30(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)((int)this + 0xc);
  param_2[1] = *(undefined4 *)((int)this + 0x10);
  param_2[2] = *(undefined4 *)((int)this + 0x14);
  *param_3 = *(undefined4 *)((int)this + 0x18);
  return CONCAT31((int3)((uint)*(int *)((int)this + 8) >> 8),*(int *)((int)this + 8) != 0);
}


//// FUNCTION FUN_00a43e60 @ 00a43e60 ////

void __thiscall FUN_00a43e60(void *this,int param_1,int param_2)

{
  int iVar1;
  void *this_00;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfac3b;
  local_c = ExceptionList;
  if ((param_1 != 0) && (iVar2 = 0, ExceptionList = &local_c, 0 < param_2)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 1)) {
        if (*(int *)(iVar1 + 0x54) == 0) {
          *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x1000000;
          FUN_00971920(*(void **)((int)this + 0x1c),iVar1);
        }
        else {
          this_00 = operator_new(0xc);
          local_4 = 0;
          if (this_00 != (void *)0x0) {
            FUN_00a446e0(this_00,*(undefined4 *)(iVar1 + 0x54),iVar1);
          }
          local_4 = 0xffffffff;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a43f10 @ 00a43f10 ////

void __thiscall FUN_00a43f10(void *this,undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar3 = (**(code **)(*(int *)this + 0x10))();
  *param_1 = 0;
  param_1[2] = *(undefined4 *)((int)this + 4);
  param_1[3] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0xc);
  param_1[5] = *(undefined4 *)((int)this + 0x10);
  param_1[6] = *(undefined4 *)((int)this + 0x14);
  param_1[7] = *(undefined4 *)((int)this + 0x18);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((int)this + 0x4a);
  param_1[9] = *(uint *)((int)this + 0x48) & 0xff;
  param_1[10] = (uint)*(byte *)((int)this + 0x49);
  param_1[0xb] = *(undefined4 *)((int)this + 0x34);
  param_1[0xc] = *(undefined4 *)((int)this + 0x54);
  param_1[0xd] = *(undefined4 *)((int)this + 0x44);
  bVar2 = *(byte *)((int)param_1 + 0x21) ^
          ((byte)((uint)*(undefined4 *)((int)this + 0x48) >> 0x1a) ^ *(byte *)((int)param_1 + 0x21))
          & 1;
  *(byte *)((int)param_1 + 0x21) = bVar2;
  bVar2 = ((byte)((uint)*(undefined4 *)((int)this + 0x48) >> 0x1c) << 1 ^ bVar2) & 2 ^ bVar2;
  *(byte *)((int)param_1 + 0x21) = bVar2;
  bVar2 = ((byte)((uint)*(undefined4 *)((int)this + 0x48) >> 0x1d) << 2 ^ bVar2) & 4 ^ bVar2;
  *(byte *)((int)param_1 + 0x21) = bVar2;
  *(byte *)((int)param_1 + 0x21) = (*(char *)((int)this + 0x4c) << 3 ^ bVar2) & 8 ^ bVar2;
  *(byte *)((int)param_1 + 0x22) = (byte)((uint)*(undefined4 *)((int)this + 0x48) >> 0x1b) & 1;
  param_1[0xe] = *(undefined4 *)((int)this + 0x5c);
  puVar7 = (undefined4 *)(iVar3 + (int)param_1);
  uVar5 = 0;
  if (*(char *)((int)this + 0x4a) != '\0') {
    puVar4 = puVar7 + 2;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)((int)this + 0x24));
      if (iVar1 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(iVar1 + 4);
      }
      puVar4[-2] = uVar6;
      puVar4[-1] = *(undefined4 *)(iVar3 + 4 + *(int *)((int)this + 0x24));
      *puVar4 = *(undefined4 *)(iVar3 + 8 + *(int *)((int)this + 0x24));
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0xc;
      puVar7 = puVar7 + 3;
      puVar4 = puVar4 + 3;
    } while (uVar5 < *(byte *)((int)this + 0x4a));
  }
  uVar5 = 0;
  puVar4 = puVar7;
  if ((*(uint *)((int)this + 0x48) & 0xff) != 0) {
    do {
      *puVar7 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x2c) + uVar5 * 4) + 4);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 < (*(uint *)((int)this + 0x48) & 0xff));
  }
  uVar5 = 0;
  if (*(char *)((int)this + 0x49) != '\0') {
    do {
      *puVar7 = *(undefined4 *)(*(int *)(*(int *)((int)this + 0x30) + uVar5 * 4) + 4);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 < *(byte *)((int)this + 0x49));
  }
  param_1[1] = (int)puVar4 - (int)param_1;
  return;
}


//// FUNCTION FUN_00a44090 @ 00a44090 ////

void __fastcall FUN_00a44090(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    iVar3 = 0;
    do {
      iVar1 = FUN_00971c30(*(void **)(param_1 + 0x1c),*(int *)(*(int *)(param_1 + 0x24) + iVar3));
      *(int *)(iVar3 + *(int *)(param_1 + 0x24)) = iVar1;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar2 < *(byte *)(param_1 + 0x4a));
  }
  uVar2 = 0;
  if ((*(uint *)(param_1 + 0x48) & 0xff) != 0) {
    do {
      iVar3 = FUN_00971c30(*(void **)(param_1 + 0x1c),*(int *)(*(int *)(param_1 + 0x2c) + uVar2 * 4)
                          );
      *(int *)(*(int *)(param_1 + 0x2c) + uVar2 * 4) = iVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(param_1 + 0x48) & 0xff));
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x49) != '\0') {
    do {
      iVar3 = FUN_00971c30(*(void **)(param_1 + 0x1c),*(int *)(*(int *)(param_1 + 0x30) + uVar2 * 4)
                          );
      *(int *)(*(int *)(param_1 + 0x30) + uVar2 * 4) = iVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x49));
  }
  return;
}


//// FUNCTION FUN_00a44130 @ 00a44130 ////

void __fastcall FUN_00a44130(int param_1)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfcffffff;
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(char *)(param_1 + 0x4a) != '\0') {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x28) + uVar1 * 4) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x4a));
  }
  return;
}


//// FUNCTION FUN_00a44180 @ 00a44180 ////

void __fastcall FUN_00a44180(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


//// FUNCTION FUN_00a44190 @ 00a44190 ////

void __thiscall FUN_00a44190(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}


//// FUNCTION FUN_00a441b0 @ 00a441b0 ////

void __fastcall FUN_00a441b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d7912c;
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[9]);
}


//// FUNCTION FUN_00a44210 @ 00a44210 ////

void __fastcall FUN_00a44210(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  fVar1 = FUN_004012c0(0.0);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfcffffff;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(float *)(param_1 + 0x18) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xc3ffffff;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  return;
}


//// FUNCTION FUN_00a442a0 @ 00a442a0 ////

void __thiscall FUN_00a442a0(void *this,byte param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  *(byte *)((int)this + 0x4a) = param_1;
  pvVar1 = operator_new(uVar4 * 0xc);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else if (-1 < (int)(uVar4 - 1)) {
    puVar2 = (undefined4 *)((int)pvVar1 + 8);
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0xffffffff;
      *puVar2 = 0x78;
      puVar2 = puVar2 + 3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(void **)((int)this + 0x24) = pvVar1;
  puVar2 = operator_new((uint)*(byte *)((int)this + 0x4a) << 2);
  *(undefined4 **)((int)this + 0x28) = puVar2;
  for (uVar4 = (uint)*(byte *)((int)this + 0x4a); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  return;
}


//// FUNCTION FUN_00a44320 @ 00a44320 ////

void __fastcall FUN_00a44320(int *param_1)

{
  void *this;
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  iVar5 = 0;
  if (param_1[8] == 0) {
    (**(code **)(*param_1 + 0x34))();
    uVar6 = 0;
    if (*(byte *)((int)param_1 + 0x4a) != 0) {
      piVar2 = (int *)param_1[10];
      uVar4 = (uint)*(byte *)((int)param_1 + 0x4a);
      do {
        if (*piVar2 != 0) {
          uVar6 = uVar6 + 1;
        }
        piVar2 = piVar2 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (uVar6 != *(byte *)((int)param_1 + 0x4a)) {
      return;
    }
    param_1[0x16] = param_1[0x16] + 1;
    param_1[8] = 1;
    param_1[0xe] = 0;
    FUN_00a43e60(param_1,param_1[0xb],param_1[0x12] & 0xff);
  }
  if (param_1[8] == 1) {
    iVar3 = (**(code **)(*param_1 + 0x2c))();
    param_1[8] = iVar3;
  }
  if (param_1[8] == 2) {
    uVar6 = 0;
    if (*(char *)((int)param_1 + 0x4a) != '\0') {
      do {
        this = *(void **)(param_1[10] + uVar6 * 4);
        if (this != (void *)0x0) {
          FUN_00a3b890(this,'\0');
        }
        piVar2 = *(int **)(iVar5 + param_1[9]);
        if (piVar2 == (int *)0x0) {
          FUN_00a3b700(*(void **)(param_1[10] + uVar6 * 4),(int *)0x0,0xffffffff);
          *(undefined4 *)(param_1[10] + uVar6 * 4) = 0;
        }
        else {
          (**(code **)(*piVar2 + 0x1c))
                    (*(undefined4 *)(param_1[10] + uVar6 * 4),
                     *(undefined4 *)(iVar5 + param_1[9] + 4));
          if (this != (void *)0x0) {
            FUN_00a3bfe0(this,*(int *)(iVar5 + 8 + param_1[9]));
          }
          *(undefined4 *)(param_1[10] + uVar6 * 4) = 0;
          if (this != (void *)0x0) {
            FUN_00a3b700(this,*(int **)(iVar5 + param_1[9]),*(undefined4 *)(iVar5 + 4 + param_1[9]))
            ;
          }
          if (*(int *)(iVar5 + param_1[9]) != 0) {
            uStack_10 = 0;
            cVar1 = (**(code **)(*param_1 + 0x20))(uVar6,auStack_c,&uStack_10,900000);
            if (cVar1 != '\0') {
              (**(code **)(**(int **)(iVar5 + param_1[9]) + 0x14))
                        (*(undefined4 *)(iVar5 + param_1[9] + 4),auStack_c,uStack_10,1,0);
            }
          }
          FUN_00971920((void *)param_1[7],*(int *)(iVar5 + param_1[9]));
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (uVar6 < *(byte *)((int)param_1 + 0x4a));
    }
    param_1[8] = 0;
    FUN_00a43e60(param_1,param_1[0xc],(uint)*(byte *)((int)param_1 + 0x49));
  }
  param_1[0xf] = param_1[0xf] + 1;
  return;
}


//// FUNCTION FUN_00a444c0 @ 00a444c0 ////

undefined4 * __thiscall FUN_00a444c0(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_00d7912c;
  *(undefined4 *)((int)this + 0x18) = 0;
  FUN_00a44210((int)this);
  *(undefined4 *)((int)this + 4) = param_1;
  return this;
}


//// FUNCTION FUN_00a444f0 @ 00a444f0 ////

void __thiscall FUN_00a444f0(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  byte local_1b;
  byte local_1a;
  undefined1 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_20 = 0;
  puVar2 = local_3c;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_00a24f50(local_3c,param_1);
  FUN_00a44210((int)this);
  *(undefined4 *)((int)this + 4) = local_3c[2];
  *(undefined4 *)((int)this + 8) = local_3c[3];
  *(undefined4 *)((int)this + 0xc) = local_2c;
  *(undefined4 *)((int)this + 0x10) = local_28;
  *(undefined4 *)((int)this + 0x14) = local_24;
  *(undefined4 *)((int)this + 0x18) = local_20;
  *(byte *)((int)this + 0x4c) =
       *(byte *)((int)this + 0x4c) ^ (local_1b >> 3 ^ *(byte *)((int)this + 0x4c)) & 1;
  *(uint *)((int)this + 0x48) =
       ((local_1a & 1 | local_1b & 6) << 1 | local_1b & 1) << 0x1a |
       *(uint *)((int)this + 0x48) & 0xc3ffffff;
  *(undefined1 *)((int)this + 0x4a) = local_1c;
  *(undefined4 *)((int)this + 0x5c) = local_4;
  *(undefined1 *)((int)this + 0x48) = local_18;
  *(undefined1 *)((int)this + 0x49) = local_14;
  *(undefined4 *)((int)this + 0x34) = local_10;
  *(undefined4 *)((int)this + 0x54) = local_c;
  *(undefined4 *)((int)this + 0x44) = local_8;
  FUN_00a442a0(this,*(byte *)((int)this + 0x4a));
  if ((*(uint *)((int)this + 0x48) & 0xff) != 0) {
    *(char *)((int)this + 0x48) = (char)*(uint *)((int)this + 0x48);
    puVar2 = operator_new((*(uint *)((int)this + 0x48) & 0xff) << 2);
    *(undefined4 **)((int)this + 0x2c) = puVar2;
    for (uVar5 = *(uint *)((int)this + 0x48) & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  bVar1 = *(byte *)((int)this + 0x49);
  if (bVar1 != 0) {
    *(byte *)((int)this + 0x49) = bVar1;
    puVar2 = operator_new((uint)bVar1 << 2);
    *(undefined4 **)((int)this + 0x30) = puVar2;
    for (uVar5 = (uint)*(byte *)((int)this + 0x49); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0x10))();
  puVar2 = (undefined4 *)((int)param_1 + iVar4);
  uVar5 = 0;
  if (*(char *)((int)this + 0x4a) != '\0') {
    iVar4 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)((int)this + 0x24) + iVar4);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0xc;
      puVar2 = puVar2 + 3;
    } while (uVar5 < *(byte *)((int)this + 0x4a));
  }
  uVar5 = 0;
  if ((*(uint *)((int)this + 0x48) & 0xff) != 0) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x2c) + uVar5 * 4) = *puVar2;
      puVar2 = puVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)((int)this + 0x48) & 0xff));
  }
  uVar5 = 0;
  if (*(char *)((int)this + 0x49) != '\0') {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x30) + uVar5 * 4) = *puVar2;
      puVar2 = puVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)((int)this + 0x49));
  }
  return;
}


//// FUNCTION FUN_00a446e0 @ 00a446e0 ////

void __thiscall FUN_00a446e0(void *this,undefined4 param_1,int param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x7c);
  *(void **)(*(int *)(param_2 + 0x1c) + 0x7c) = this;
  return;
}


//// FUNCTION FUN_00a44710 @ 00a44710 ////

void __fastcall FUN_00a44710(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1c);
  iVar3 = *(int *)(iVar1 + 0x7c);
  if (iVar3 != param_1) {
    do {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar2 + 8);
    } while (iVar3 != param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(iVar3 + 8);
  return;
}


//// FUNCTION FUN_00a44760 @ 00a44760 ////

void __fastcall FUN_00a44760(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_00a44760((int *)param_1[2]);
  }
  *param_1 = *param_1 + -1;
  if (((*param_1 == 0) && (iVar1 = param_1[1], iVar1 != 0)) && (*(int *)(iVar1 + 0x20) == 1)) {
    *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) | 0x1000000;
  }
  if (-1 < *param_1) {
    return;
  }
  piVar3 = *(int **)(*(int *)(param_1[1] + 0x1c) + 0x7c);
  if (piVar3 != param_1) {
    do {
      piVar2 = piVar3;
      piVar3 = (int *)piVar2[2];
    } while (piVar3 != param_1);
    if (piVar2 != (int *)0x0) {
      piVar2[2] = piVar3[2];
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
  }
  *(int *)(*(int *)(param_1[1] + 0x1c) + 0x7c) = piVar3[2];
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION Camera_InitCachedTransform @ 00a447d0 ////

void __fastcall Camera_InitCachedTransform(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  FUN_009aa310(local_40,(undefined4 *)(param_1 + 0x4c));
  puVar2 = local_40;
  puVar3 = (undefined4 *)(param_1 + 8);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_009aad40((undefined4 *)(param_1 + 8),(float *)&DAT_0105c328);
  *(undefined4 *)(param_1 + 0x48) = DAT_010bb240;
  return;
}


//// FUNCTION Camera_GetCachedTransform @ 00a44820 ////

int __fastcall Camera_GetCachedTransform(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (*(int *)(param_1 + 0x48) != DAT_010bb240) {
    FUN_009aa310(local_40,(undefined4 *)(param_1 + 0x4c));
    puVar2 = local_40;
    puVar3 = (undefined4 *)(param_1 + 8);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_009aad40((undefined4 *)(param_1 + 8),(float *)&DAT_00e69408);
    *(int *)(param_1 + 0x48) = DAT_010bb240;
  }
  return param_1 + 8;
}


//// FUNCTION Camera_CommitMatrixAndInvalidateCache @ 00a44870 ////

void Camera_CommitMatrixAndInvalidateCache(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_0105c328;
  puVar3 = &DAT_00e69408;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_010bb240 = DAT_010bb240 + 1;
  return;
}


//// FUNCTION FUN_00a448a0 @ 00a448a0 ////

void __fastcall FUN_00a448a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((param_1[1] == 0) && (DAT_010bb238 != '\0')) {
    puVar1 = (undefined4 *)0x0;
    for (puVar2 = DAT_010bb23c; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[0x1f]) {
      if (puVar2 == param_1) {
        if (puVar2 != (undefined4 *)0x0) {
          if (puVar1 == (undefined4 *)0x0) {
            DAT_010bb23c = (undefined4 *)param_1[0x1f];
          }
          else {
            puVar1[0x1f] = param_1[0x1f];
          }
        }
        break;
      }
      puVar1 = puVar2;
    }
    if ((void *)*param_1 != (void *)0x0) {
      FUN_0099b400((void *)*param_1);
      *param_1 = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00a44900 @ 00a44900 ////

undefined4 * __thiscall FUN_00a44900(void *this,byte param_1)

{
  FUN_00a448a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a44920 @ 00a44920 ////

void __thiscall FUN_00a44920(void *this,int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  if (*(void **)this != (void *)0x0) {
    FUN_0099b400(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = param_1;
  return;
}


//// FUNCTION FUN_00a44950 @ 00a44950 ////

void __fastcall FUN_00a44950(undefined4 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[0x11] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x1f] = DAT_010bb23c;
  DAT_010bb23c = param_1;
  param_1[0x20] = param_1[0x20] & 0xfffffffe;
  *param_1 = 0;
  param_1[1] = 1;
  return;
}


//// FUNCTION FUN_00a449e0 @ 00a449e0 ////

void FUN_00a449e0(void)

{
  undefined4 *puVar1;
  
  DAT_010bb239 = 1;
  puVar1 = operator_new(0x84);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a44950(puVar1);
    DAT_010bb239 = 0;
    return;
  }
  DAT_010bb239 = 0;
  return;
}


//// FUNCTION FUN_00a44a10 @ 00a44a10 ////

void __fastcall FUN_00a44a10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    DAT_010bb238 = 1;
    FUN_00a448a0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a44a40 @ 00a44a40 ////

void __fastcall FUN_00a44a40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_00a44a60 @ 00a44a60 ////

void __fastcall FUN_00a44a60(int *param_1)

{
  undefined4 *puVar1;
  void *this;
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
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[1] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[2] = 0;
  }
  if ((param_1[3] != 0) && (this = *(void **)(param_1[3] + 0x148), this != (void *)0x0)) {
    FUN_009806e0(this,0);
  }
  return;
}


//// FUNCTION FUN_00a44b30 @ 00a44b30 ////

void __thiscall FUN_00a44b30(void *this,char param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float afStack_90 [8];
  undefined4 uStack_70;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*(void **)((int)this + 0x10) != (void *)0x0) &&
     (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0)) {
    FUN_009fe3b0(*(void **)((int)this + 0x10),*(undefined4 **)((int)this + 0xc));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_00a57ee0(*(int **)this);
  }
  if (((*(int *)((int)this + 4) != 0) && (*(void **)((int)this + 8) != (void *)0x0)) &&
     (param_1 == '\0')) {
    uStack_70 = 0xa44b8a;
    FUN_009833d0(*(void **)((int)this + 8),local_30,(byte *)0xd791a4,0);
    local_54 = local_30[0];
    local_50 = local_30[1];
    local_4c = local_30[2];
    FUN_00412fd0(&local_48,&local_54,(float *)&DAT_0105c3c0);
    FUN_00412fd0(&local_3c,&local_54,&local_48);
    local_30[3] = local_48;
    local_20 = local_44;
    local_1c = local_40;
    local_18 = local_3c;
    local_14 = local_38;
    local_10 = local_34;
    pfVar2 = local_30;
    pfVar3 = afStack_90;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar3 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 1;
    }
    (**(code **)(**(int **)((int)this + 4) + 0x24))();
    FUN_00999900(*(int **)((int)this + 4),4);
  }
  return;
}


//// FUNCTION FUN_00a44c30 @ 00a44c30 ////

void __fastcall FUN_00a44c30(int *param_1)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  void *pvVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if ((*param_1 == 0) && (param_1[3] != 0)) {
    FUN_00a44a60(param_1);
    iVar6 = FUN_009763f0(param_1[3]);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_009720f0(iVar6);
    }
    param_1[2] = iVar6;
    if (iVar6 != 0) {
      InterlockedIncrement((LONG *)(iVar6 + 0x10));
      puVar7 = FUN_00433eb0();
      param_1[1] = (int)puVar7;
      pbVar8 = FUN_009de1d0("water_ray.msh",1);
      FUN_009dc300((int)pbVar8);
      if (*(int *)(pbVar8 + 0x34) != 0) {
        *(undefined1 *)(*(int *)(pbVar8 + 0x34) + 0xc) = 0x1e;
      }
      if ((*(int **)(pbVar8 + 0x2c) != (int *)0x0) &&
         (piVar5 = *(int **)(**(int **)(pbVar8 + 0x2c) + 4), piVar5 != (int *)0x0)) {
        iVar6 = *piVar5;
        pvVar9 = operator_new(*(uint *)(iVar6 + 0x2c));
        *(void **)(*(int *)(iVar6 + 0x28) + 0x18) = pvVar9;
        iVar12 = 0;
        if (0 < *(int *)(iVar6 + 0x2c)) {
          iVar11 = 0;
          do {
            fVar2 = *(float *)(*(int *)(iVar6 + 0x30) + iVar11);
            iVar10 = *(int *)(iVar6 + 0x30) + iVar11;
            fVar3 = *(float *)(iVar10 + 4);
            fVar4 = *(float *)(iVar10 + 8);
            pbVar1 = (byte *)(*(int *)(*(int *)(iVar6 + 0x28) + 0x18) + iVar12);
            *pbVar1 = *pbVar1 ^ (*pbVar1 ^
                                SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) <= 0.0001) & 1;
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + 0x20;
          } while (iVar12 < *(int *)(iVar6 + 0x2c));
        }
      }
      (**(code **)(*(int *)param_1[1] + 0x18))(pbVar8);
      FUN_009de3b0(pbVar8);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a44d60 @ 00a44d60 ////

void __fastcall FUN_00a44d60(int *param_1)

{
  if ((param_1[3] != 0) && (*(int *)(param_1[3] + 0x148) != 0)) {
    FUN_00a44a60(param_1);
    if ((*(uint *)((int)*(void **)(param_1[3] + 0x148) + 0x9c) & 0x80000) == 0) {
      FUN_009806e0(*(void **)(param_1[3] + 0x148),1);
    }
  }
  return;
}


//// FUNCTION FUN_00a44da0 @ 00a44da0 ////

void __fastcall FUN_00a44da0(int *param_1)

{
  void *_Memory;
  
  FUN_00a44a60(param_1);
  _Memory = (void *)param_1[4];
  if (_Memory != (void *)0x0) {
    FUN_009fa890((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_00a44dd0 @ 00a44dd0 ////

void __thiscall FUN_00a44dd0(void *this,int param_1)

{
  FUN_00a44a60(this);
  *(int *)((int)this + 0xc) = param_1;
  return;
}


//// FUNCTION FUN_00a44e70 @ 00a44e70 ////

void __cdecl FUN_00a44e70(undefined4 *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(param_1 + 4);
    uVar1 = DAT_0105b588;
    DAT_0105b588 = uVar1;
    if (LVar2 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*param_1)(1);
      DAT_0105b588 = uVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a44eb0 @ 00a44eb0 ////

void __fastcall FUN_00a44eb0(int param_1)

{
  void *this;
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x34) = 7;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xbeffffff | 0x2000000;
  pvVar1 = FUN_0099bb50("fx_fire.dds",0,0,0,'\0');
  this = (void *)(param_1 + 0x28);
  if (*(void **)(param_1 + 0x40) != pvVar1) {
    Engine_SetResourceReference(this,(int)pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    FUN_0099b400(pvVar1);
    *(void **)(*(int *)(param_1 + 0x24) + 0x18) = this;
    return;
  }
  *(void **)(*(int *)(param_1 + 0x24) + 0x18) = this;
  return;
}


//// FUNCTION FUN_00a44f20 @ 00a44f20 ////

void __fastcall FUN_00a44f20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  FUN_00a04290(param_1);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar8 = FUN_00acd42c();
    *(uint *)(param_1 + 0x50) =
         *(uint *)(param_1 + 0x50) ^ ((uint)uVar8 ^ *(uint *)(param_1 + 0x50)) & 0x3f;
  }
  else {
    uVar4 = *(int *)(iVar1 + 0x8c) - *(int *)(param_1 + 0x5c);
    if (uVar4 != *(uint *)(param_1 + 0x60)) {
      uVar5 = *(uint *)(param_1 + 0x50);
      uVar4 = uVar5 ^ (*(uint *)(param_1 + 0x50) ^ uVar4) & 0x3f;
      *(uint *)(param_1 + 0x50) = uVar4;
      if ((uVar4 & 0x40) == 0) {
        uVar5 = uVar5 >> 7;
        if ((uVar5 & 0x1f) == 0) {
          *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
          goto LAB_00a44fcc;
        }
        uVar4 = ((uVar5 - 1) * 0x80 ^ uVar4) & 0xf80 ^ uVar4;
      }
      else {
        uVar4 = ((uVar4 & 0xffffff80) + 0x80 ^ uVar4) & 0xf80 ^ uVar4;
        *(uint *)(param_1 + 0x50) = uVar4;
        if ((uVar4 & 0xf80) < 0x280) goto LAB_00a44fcc;
        uVar4 = uVar4 & 0xfffff2ff | 0x280;
      }
      *(uint *)(param_1 + 0x50) = uVar4;
    }
  }
LAB_00a44fcc:
  bVar3 = 0x32 < DAT_01050b60;
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    iVar7 = 0;
    do {
      *(byte *)(*(int *)(*(int *)(param_1 + 0x24) + 0x20) + 0x30 + iVar7) =
           '?' - (*(char *)(*(int *)(param_1 + 0x4c) + iVar6) +
                  (iVar1 != 0 && bVar3) + ((byte)uVar2 & 0x3f) * '\x02' & 0x3f);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x34;
    } while (iVar6 < *(int *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00a4501c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 8))();
  return;
}


//// FUNCTION FUN_00a45460 @ 00a45460 ////

undefined4 * __thiscall FUN_00a45460(void *this,void *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *this_00;
  void *pvVar4;
  int iVar5;
  LONG LVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfac63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a042c0(this,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d791d8;
  FUN_009910f0((undefined4 *)((int)this + 0x28));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xffffe040 | 0x40;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((param_1 != (void *)0x0) && (*(int *)((int)param_1 + 0x78) != 0)) {
    *(void **)((int)this + 0x54) = param_1;
    InterlockedIncrement((LONG *)((int)param_1 + 0x10));
    *(int *)((int)this + 0x18) = param_2;
    if (param_2 != 0) {
      *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_2 + 0x8c);
    }
    if ((((*(int *)((int)param_1 + 0x78) == 0) || (iVar2 = FUN_0097e350(param_1,0), iVar2 == 0)) ||
        (iVar2 = FUN_0097e350(param_1,0), *(int *)(iVar2 + 0x40) == 0)) ||
       (iVar2 = FUN_0097e350(param_1,0), (*(uint *)(*(int *)(iVar2 + 0x40) + 8) & 0x100) == 0)) {
      *(undefined4 *)((int)this + 0x58) = 1;
    }
    else {
      *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x1000;
      FUN_00a01d80(*(void **)(*(int *)((int)this + 0x54) + 0x78),(LONG *)((int)this + 0x10),
                   &LAB_00a45020,this,FUN_00a44e70,this);
      *(undefined4 *)((int)this + 0x58) = 9;
    }
    uVar3 = FUN_00990d30(0,0x3f);
    *(uint *)((int)this + 0x50) =
         *(uint *)((int)this + 0x50) ^ (*(uint *)((int)this + 0x50) ^ uVar3) & 0x3f;
    this_00 = FUN_0040a690(*(uint *)((int)this + 0x58),'\x01');
    *(undefined4 **)((int)this + 0x24) = this_00;
    FUN_0099a220(this_00,8);
    pvVar4 = operator_new(*(uint *)((int)this + 0x58));
    *(void **)((int)this + 0x4c) = pvVar4;
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x58)) {
      iVar7 = 0;
      do {
        iVar5 = FUN_00990d30(0,0x3f);
        *(char *)(iVar2 + *(int *)((int)this + 0x4c)) = (char)iVar5;
        *(undefined4 *)(*(int *)(*(int *)((int)this + 0x24) + 0x20) + iVar7 + 0x2c) = 0x80f28221;
        iVar2 = iVar2 + 1;
        iVar7 = iVar7 + 0x34;
      } while (iVar2 < *(int *)((int)this + 0x58));
    }
    FUN_00a44eb0((int)this);
    ExceptionList = local_c;
    return this;
  }
  LVar6 = InterlockedDecrement((LONG *)((int)this + 0x10));
  uVar1 = DAT_0105b588;
  if (LVar6 != 0) {
    ExceptionList = local_c;
    return this;
  }
  DAT_0105b588 = 1;
  (*(code *)**(undefined4 **)this)(1);
  DAT_0105b588 = uVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a45670 @ 00a45670 ////

void __thiscall FUN_00a45670(void *this,float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_24;
  float local_20;
  float local_1c;
  
  fVar1 = param_2 * 0.33333334;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  if ((param_3 == '\0') && (*(int *)((int)this + 0x58) != 0)) {
    pfVar6 = *(float **)(*(int *)((int)this + 0x24) + 0x20);
    local_24 = *param_1 - *pfVar6;
    local_20 = param_1[1] - pfVar6[1];
    local_1c = param_1[2] - (pfVar6[2] - pfVar6[9] * 0.8);
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x58)) {
    iVar5 = 0;
    do {
      pfVar6 = (float *)(*(int *)(*(int *)((int)this + 0x24) + 0x20) + iVar5);
      pfVar6[9] = param_2;
      if (param_3 == '\0') {
        *pfVar6 = local_24 + *pfVar6;
        pfVar6[1] = local_20 + pfVar6[1];
        fVar2 = local_1c;
LAB_00a457f0:
        pfVar6[2] = fVar2 + pfVar6[2];
      }
      else {
        iVar3 = FUN_00990d30(0,0x3f);
        *(char *)(iVar4 + *(int *)((int)this + 0x4c)) = (char)iVar3;
        *pfVar6 = *param_1;
        pfVar6[1] = param_1[1];
        pfVar6[2] = param_1[2];
        pfVar6[2] = param_2 * 0.8 + pfVar6[2];
        if (iVar5 != 0) {
          fVar7 = FUN_00990e30(0.0,fVar1);
          fVar8 = FUN_00990e30(-fVar1,fVar1);
          fVar9 = FUN_00990e30(-fVar1,fVar1);
          *pfVar6 = (float)(fVar9 + (float10)*pfVar6);
          pfVar6[1] = (float)fVar8 + pfVar6[1];
          fVar2 = (float)fVar7;
          goto LAB_00a457f0;
        }
      }
      pfVar6[0xb] = -2.2270872e-38;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar4 < *(int *)((int)this + 0x58));
  }
  return;
}


//// FUNCTION FUN_00a45820 @ 00a45820 ////

void __thiscall FUN_00a45820(void *this,float *param_1,float param_2)

{
  FUN_00a45670(this,param_1,param_2,'\0');
  return;
}


//// FUNCTION FUN_00a45840 @ 00a45840 ////

void __fastcall FUN_00a45840(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfac83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d791d8;
  puVar1 = (undefined4 *)param_1[9];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[9] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x13]);
}


//// FUNCTION FUN_00a45930 @ 00a45930 ////

float10 __cdecl FUN_00a45930(float param_1)

{
  return ABS((float10)param_1) * (float10)1.4323945 + (float10)0.5;
}


//// FUNCTION FUN_00a45950 @ 00a45950 ////

undefined4 * __thiscall FUN_00a45950(void *this,byte param_1)

{
  FUN_00a45840(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a45970 @ 00a45970 ////

undefined4 * __thiscall FUN_00a45970(void *this,float *param_1,float param_2,int param_3)

{
  uint uVar1;
  undefined4 *this_00;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaca3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a042c0(this,0);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d791d8;
  FUN_009910f0((undefined4 *)((int)this + 0x28));
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xffffe040 | 0x40;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(int *)((int)this + 0x18) = param_3;
  if (param_3 != 0) {
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_3 + 0x8c);
  }
  uVar1 = FUN_00990d30(0,0x3f);
  *(uint *)((int)this + 0x50) =
       *(uint *)((int)this + 0x50) ^ (*(uint *)((int)this + 0x50) ^ uVar1) & 0x3f;
  *(undefined4 *)((int)this + 0x58) = 4;
  this_00 = FUN_0040a690(4,'\x01');
  *(undefined4 **)((int)this + 0x24) = this_00;
  FUN_0099a220(this_00,8);
  pvVar2 = operator_new(*(uint *)((int)this + 0x58));
  *(void **)((int)this + 0x4c) = pvVar2;
  FUN_00a45670(this,param_1,param_2,'\x01');
  FUN_00a44eb0((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a45a60 @ 00a45a60 ////

void __cdecl FUN_00a45a60(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 0) && (iVar3 = *(int *)(param_1 + 0xd0), iVar3 != 0)) {
    if (*(int *)(iVar3 + 0x14) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14) >> 2;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xd0) + 0x14) + iVar4 * 4);
        cVar2 = (**(code **)(*piVar1 + 0x14))();
        if ((cVar2 != '\0') && (piVar1[0x15] == param_1)) {
          piVar1[0x14] = piVar1[0x14] & 0xffffffbf;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  return;
}


//// FUNCTION FUN_00a45b00 @ 00a45b00 ////

void __fastcall FUN_00a45b00(int param_1)

{
  float10 fVar1;
  
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_00971df0(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  fVar1 = FUN_00990e30(15.0,30.0);
  *(float *)(param_1 + 0x14) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a45c10 @ 00a45c10 ////

void __cdecl FUN_00a45c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a45d30 @ 00a45d30 ////

undefined4 * __thiscall FUN_00a45d30(void *this,void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)this = 1;
  *(void **)((int)this + 4) = param_1;
  InterlockedIncrement((LONG *)((int)param_1 + 0x10));
  iVar1 = FUN_0097e350(param_1,0);
  *(int *)((int)this + 8) = iVar1;
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  fVar2 = FUN_00990e30(15.0,30.0);
  *(float *)((int)this + 0x14) = (float)fVar2;
  return this;
}


//// FUNCTION FUN_00a45da0 @ 00a45da0 ////

void __fastcall FUN_00a45da0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_00971df0(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    FUN_009de3b0(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


//// FUNCTION FUN_00a45e10 @ 00a45e10 ////

void __fastcall FUN_00a45e10(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  float10 fVar3;
  
  iVar2 = FUN_00990d30(0,*(int *)(*(int *)(param_1 + 8) + 0x68));
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x68);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1 + -1;
    }
  }
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    FUN_00971df0(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  this = FUN_0097c450(*(char **)(iVar2 * 0x20 + *(int *)(*(int *)(param_1 + 8) + 0x6c)),0,
                      (undefined4 *)0x0,0);
  *(void **)(param_1 + 0xc) = this;
  if (this == (void *)0x0) {
    fVar3 = FUN_00990e30(15.0,30.0);
    *(float *)(param_1 + 0x14) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 1;
  FUN_00978350(this,(undefined4 *)(iVar2 + 0x3c),*(float *)(iVar2 + 0x80),iVar2);
  iVar2 = 0;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x4d) != '\0') {
    do {
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 0x5c) + iVar2 * 4) + 0x28))(0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 0x4d));
  }
  FUN_009777b0(*(int *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00a45fc0 @ 00a45fc0 ////

void __cdecl FUN_00a45fc0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a46040 @ 00a46040 ////

undefined4 * __cdecl FUN_00a46040(void *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfacbb;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    iVar1 = FUN_0097e350(param_1,0);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe4) & 0x40) != 0)) && (*(int *)(iVar1 + 0x68) != 0))
    {
      this = operator_new(0x18);
      local_4 = 0;
      if (this != (void *)0x0) {
        puVar2 = FUN_00a45d30(this,param_1);
        ExceptionList = local_c;
        return puVar2;
      }
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a460c0 @ 00a460c0 ////

void __fastcall FUN_00a460c0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    fVar1 = *(float *)(param_1 + 0x14) - 0.1;
    *(float *)(param_1 + 0x14) = fVar1;
    if (fVar1 < 0.0) {
      FUN_00a45e10(param_1);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x10) == 1) && (*(void **)(param_1 + 0xc) != (void *)0x0)) {
    FUN_00977c80(*(void **)(param_1 + 0xc));
    uVar2 = FUN_00971d90(*(int *)(param_1 + 0xc));
    if ((char)uVar2 != '\0') {
      FUN_00a45b00(param_1);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a46160 @ 00a46160 ////

void __fastcall FUN_00a46160(int param_1)

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


//// FUNCTION FUN_00a461b0 @ 00a461b0 ////

void * FUN_00a461b0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a461e0 @ 00a461e0 ////

void FUN_00a461e0(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = 0;
LAB_00a461f0:
  do {
    if (DAT_010bb248 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010bb24c - DAT_010bb248 >> 2;
    }
    if (iVar2 <= iVar4) {
      return;
    }
    iVar2 = *(int *)(DAT_010bb248 + iVar4 * 4);
    if (*(int *)(iVar2 + 0x10) == 0) {
      fVar1 = *(float *)(iVar2 + 0x14) - 0.1;
      *(float *)(iVar2 + 0x14) = fVar1;
      if (fVar1 < 0.0) {
        FUN_00a45e10(iVar2);
      }
    }
    else if ((*(int *)(iVar2 + 0x10) == 1) && (*(void **)(iVar2 + 0xc) != (void *)0x0)) {
      FUN_00977c80(*(void **)(iVar2 + 0xc));
      uVar3 = FUN_00971d90(*(int *)(iVar2 + 0xc));
      if ((char)uVar3 != '\0') {
        if (*(void **)(iVar2 + 0xc) != (void *)0x0) {
          FUN_00971df0(*(void **)(iVar2 + 0xc));
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
        fVar5 = FUN_00990e30(15.0,30.0);
        *(float *)(iVar2 + 0x14) = (float)fVar5;
        *(undefined4 *)(iVar2 + 0x10) = 0;
        iVar4 = iVar4 + 1;
        goto LAB_00a461f0;
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_00a46290 @ 00a46290 ////

void FUN_00a46290(void)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = DAT_010bb248;
  while( true ) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_010bb24c - iVar3 >> 2;
    }
    if (iVar2 <= iVar4) break;
    iVar2 = *(int *)(iVar3 + iVar4 * 4);
    if ((*(int *)(iVar2 + 0x10) == 1) && (pvVar1 = *(void **)(iVar2 + 0xc), pvVar1 != (void *)0x0))
    {
      Model_UpdateVisuals(pvVar1);
      iVar3 = DAT_010bb248;
    }
    iVar4 = iVar4 + 1;
  }
  return;
}


//// FUNCTION FUN_00a462e0 @ 00a462e0 ////

void __fastcall FUN_00a462e0(int param_1)

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


//// FUNCTION FUN_00a46340 @ 00a46340 ////

void __fastcall FUN_00a46340(int param_1)

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


//// FUNCTION FUN_00a46370 @ 00a46370 ////

undefined4 * FUN_00a46370(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a463a0 @ 00a463a0 ////

void __cdecl FUN_00a463a0(int param_1)

{
  void *_Src;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x104), iVar1 != 0)) {
    uVar5 = 0xffffffff;
    for (uVar4 = 0; (DAT_010bb248 != 0 && (uVar4 < (uint)(DAT_010bb24c - DAT_010bb248 >> 2)));
        uVar4 = uVar4 + 1) {
      if (*(int *)(DAT_010bb248 + uVar4 * 4) == iVar1) {
        uVar5 = uVar4;
      }
    }
    if (uVar5 != 0xffffffff) {
      if (*(void **)(iVar1 + 0xc) != (void *)0x0) {
        FUN_00971df0(*(void **)(iVar1 + 0xc));
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      fVar6 = FUN_00990e30(15.0,30.0);
      *(float *)(iVar1 + 0x14) = (float)fVar6;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      iVar1 = uVar5 * 4;
      piVar2 = *(int **)(iVar1 + DAT_010bb248);
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        *piVar2 = iVar3 + -1;
        if (iVar3 + -1 < 1) {
          FUN_00a45da0((int)piVar2);
                    /* WARNING: Subroutine does not return */
          _free(piVar2);
        }
        *(undefined4 *)(iVar1 + DAT_010bb248) = 0;
      }
      _Src = (void *)(DAT_010bb248 + iVar1 + 4);
      _memmove((void *)(DAT_010bb248 + iVar1),_Src,(DAT_010bb24c - (int)_Src >> 2) << 2);
      DAT_010bb24c = DAT_010bb24c + -4;
      piVar2 = *(int **)(param_1 + 0x104);
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        *piVar2 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          FUN_00a45da0((int)piVar2);
                    /* WARNING: Subroutine does not return */
          _free(piVar2);
        }
        *(undefined4 *)(param_1 + 0x104) = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a46560 @ 00a46560 ////

void FUN_00a46560(void)

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
  puStack_8 = &LAB_00cfacd8;
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


//// FUNCTION FUN_00a46620 @ 00a46620 ////

void __thiscall FUN_00a46620(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00a46560();
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
      _Dst = FUN_00a46370((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00a461b0(param_1,iVar5,param_1 + param_2);
      FUN_00a46370(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00a45c10(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00a461b0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00a45fc0(param_1,(int)pvVar3,iVar5);
    FUN_00a45c10(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00a468b0 @ 00a468b0 ////

void __cdecl FUN_00a468b0(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_1 != (void *)0x0) {
    FUN_0097ea60(param_1);
    puVar1 = (undefined4 *)((int)param_1 + 0x104);
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      for (uVar3 = 0; (DAT_010bb248 != 0 && (uVar3 < (uint)((int)DAT_010bb24c - DAT_010bb248 >> 2)))
          ; uVar3 = uVar3 + 1) {
        if (*(int **)(DAT_010bb248 + uVar3 * 4) == piVar2) {
          return;
        }
      }
      *piVar2 = *piVar2 + 1;
      if ((DAT_010bb248 != 0) &&
         ((uint)((int)DAT_010bb24c - DAT_010bb248 >> 2) < (uint)(DAT_010bb250 - DAT_010bb248 >> 2)))
      {
        *DAT_010bb24c = *puVar1;
        DAT_010bb24c = DAT_010bb24c + 1;
        return;
      }
      FUN_00a46620(&DAT_010bb244,DAT_010bb24c,1,puVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00a46950 @ 00a46950 ////

undefined4 * __thiscall FUN_00a46950(void *this,byte param_1)

{
  FUN_009d5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a46a00 @ 00a46a00 ////

float10 __thiscall FUN_00a46a00(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = param_2;
  if (*param_1 != 0) {
    fVar3 = FUN_00a6c200(*(int *)param_1[1],(int)param_2);
    param_2 = (float)fVar3;
    iVar2 = 1;
    if (1 < *param_1) {
      do {
        fVar3 = FUN_00a6c200(*(int *)(param_1[1] + iVar2 * 4),(int)fVar1);
        if ((float10)param_2 < fVar3) {
          param_2 = (float)fVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_1);
    }
    return (float10)param_2;
  }
  return (float10)-1000.0;
}


//// FUNCTION LH_Submesh_TestLightMask @ 00a46a70 ////

bool __thiscall LH_Submesh_TestLightMask(void *this,uint param_1)

{
                    /* CONFIRMED: per-submesh dynamic-light acceptance test, called from
                       FUN_00a49770 (the light/projector overlay draw pass) with param_1 = a bitmask
                       of currently-active light indices (bit N-1 = light N active).
                       
                       submesh+0x24 (short) = "ONLY light index" - if nonzero, this submesh accepts
                       ONLY that specific light (returns true iff that light's bit is set in
                       param_1)
                       submesh+0x26 (short) = "EXCLUDE light index" - if nonzero (and +0x24 is
                       zero), this submesh accepts every light EXCEPT that one (inverted bit test)
                       submesh+0x28 bit4 (0x10) = a "requires dynamic lighting enabled" flag, gated
                       by global DAT_0105bea0
                       If none of the above apply, defaults to true (accepts any/all lights).
                       
                       This is a per-submesh light-channel masking system - likely used so specific
                       parts of a set/building mesh can be tagged to respond to (or ignore) specific
                       stage lights individually, fitting the movie-studio lighting rig theme. */
  if (((*(byte *)((int)this + 0x28) & 0x10) != 0) && (DAT_0105bea0 == '\0')) {
    return false;
  }
  if (*(short *)((int)this + 0x26) != 0) {
    return (bool)('\x01' - ((1 << ((char)*(short *)((int)this + 0x26) - 1U & 0x1f) & param_1) != 0))
    ;
  }
  if (*(short *)((int)this + 0x24) != 0) {
    return (param_1 & 1 << ((char)*(short *)((int)this + 0x24) - 1U & 0x1f)) != 0;
  }
  return true;
}


//// FUNCTION FUN_00a46b70 @ 00a46b70 ////

void __fastcall FUN_00a46b70(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_009d5810(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a46b90 @ 00a46b90 ////

void __fastcall FUN_00a46b90(int *param_1)

{
  int *piVar1;
  undefined4 *_Memory;
  int iVar2;
  
  if (param_1[1] == 0) {
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_1 = 0;
      param_1 = param_1 + 1;
    }
    return;
  }
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      _Memory = *(undefined4 **)(param_1[1] + iVar2 * 4);
      if (_Memory != (undefined4 *)0x0) {
        piVar1 = _Memory + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_009d5810(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        *(undefined4 *)(param_1[1] + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}


//// FUNCTION FUN_00a46c00 @ 00a46c00 ////

void __fastcall FUN_00a46c00(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_4;
  
  if (*param_1 != 0) {
    pfVar1 = (float *)(param_1 + 2);
    fVar4 = FUN_00a6c450(*(int *)param_1[1],pfVar1);
    local_4 = (float)fVar4;
    iVar3 = 0;
    if (0 < *param_1) {
      do {
        iVar2 = *(int *)(param_1[1] + iVar3 * 4);
        fVar4 = FUN_00a6c450(iVar2,pfVar1);
        if ((float10)local_4 <= fVar4) {
          fVar4 = FUN_00a6c450(iVar2,pfVar1);
          local_4 = (float)fVar4;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *param_1);
    }
    if (SQRT(local_4) < (float)param_1[8]) {
      param_1[8] = (int)SQRT(local_4);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a46cc0 @ 00a46cc0 ////

undefined4 * __fastcall FUN_00a46cc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  puVar2 = param_1;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_00a46cf0 @ 00a46cf0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a46cf0(int *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *this;
  int *piVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float afStackY_e4 [6];
  undefined4 uStackY_cc;
  int *local_a0;
  float local_9c [9];
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  float local_60 [24];
  
  if (DAT_01050c48 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = DAT_01050c48[0x26] & 0xffff;
  }
  bVar4 = LH_Submesh_TestLightMask(param_1,uVar5);
  if (!bVar4) {
    return;
  }
  _DAT_0105eb3c = param_1[0xb];
  bVar4 = false;
  if ((_DAT_010bb28c & 1) == 0) {
    _DAT_010bb28c = _DAT_010bb28c | 1;
    _DAT_010bb288 = 0;
    _DAT_010bb284 = 0;
    _DAT_010bb280 = 0;
    _DAT_010bb278 = 0;
    _DAT_010bb274 = 0;
    _DAT_010bb270 = 0;
    _DAT_010bb268 = 0;
    _DAT_010bb264 = 0;
    DAT_010bb260 = 0;
    _DAT_010bb27c = 0x3f800000;
    _DAT_010bb26c = 0x3f800000;
    DAT_010bb25c = 0x3f800000;
  }
  DAT_010bb254 = param_1;
  if (this == (void *)0x0) {
    iVar6 = 0;
    piVar8 = (int *)0x0;
  }
  else {
    iVar6 = FUN_0097e350(this,0);
    piVar8 = DAT_01050c48;
  }
  if ((((param_1[10] & 1U) == 0) || (piVar8 == (int *)0x0)) ||
     (((piVar8[0x21] == 0 && ((piVar8[0x27] & 0x200000U) == 0)) &&
      ((iVar6 == 0 || ((*(uint *)(iVar6 + 0xe4) & 0x20000000) == 0)))))) goto LAB_00a47235;
  local_60[0xb] = 0.0;
  local_60[10] = 0.0;
  local_60[9] = 0.0;
  local_60[7] = 0.0;
  local_60[6] = 0.0;
  local_60[5] = 0.0;
  local_60[3] = 0.0;
  local_60[2] = 0.0;
  local_60[1] = 0.0;
  local_60[8] = 1.0;
  local_60[4] = 1.0;
  local_60[0] = 1.0;
  uStackY_cc = 0xa46eab;
  local_a0 = (int *)Anim_ApplyTrackToSubmesh
                              ((uint *)piVar8[0x21],local_60,(byte)((uint)param_1[10] >> 1) & 1,
                               (byte)param_1[0xb],DAT_0105eb40);
  if ((local_a0 == (int *)0x0) &&
     ((((*(byte *)(param_1 + 10) & 2) != 0 && ((*(uint *)(iVar6 + 0xe4) & 0x20000000) != 0)) &&
      (0 < DAT_0105eb40)))) {
    uStackY_cc = 0xa46eed;
    local_a0 = (int *)Anim_ApplyTrackToSubmesh
                                ((uint *)0x0,local_60,'\x01',
                                 (byte)*(undefined4 *)(**(int **)(DAT_0105eb48 + 0x2c) + 0x2c),0);
    if (local_a0 != (int *)0x0) {
      FUN_009aa830(local_60,(float *)(*(int *)(DAT_0105eb48 + 0x44) + 0x50));
      FUN_009aafb0(local_60,(float *)(DAT_0105eb40 * 0x80 + 0x20 + *(int *)(DAT_0105eb48 + 0x44)));
    }
  }
  iVar6 = DAT_0105eb40;
  bVar4 = local_a0 != (int *)0x0;
  if (!bVar4) {
    FUN_0040b670(local_9c);
    iVar6 = FUN_0097e3c0(DAT_01050c48,iVar6,local_9c);
    if ((char)iVar6 != '\0') {
      FUN_009aa830(local_9c,(float *)(DAT_01050c48 + 6));
      puVar10 = &DAT_0105c4f8;
      puVar12 = &DAT_010bb25c;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      FUN_009a1480(&DAT_0105c2e8,local_9c,'\x01');
      bVar4 = true;
    }
    goto LAB_00a47235;
  }
  puVar10 = &DAT_0105c4f8;
  puVar12 = &DAT_010bb25c;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  bVar1 = *(byte *)(param_1 + 10);
  iVar7 = iVar6 * 0x80 + *(int *)(DAT_0105eb48 + 0x44);
  pfVar9 = (float *)(iVar7 + 0x50);
  pfVar11 = local_9c;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  if ((bVar1 & 2) == 0) {
    FUN_009aa830(local_9c,local_60);
    FUN_009aa830(local_9c,(float *)(iVar7 + 0x20));
    FUN_009832f0(DAT_01050c48,local_9c,DAT_0105eb40,*(int *)(DAT_0105eb48 + 0x28));
    FUN_009aa830(local_9c,(float *)(DAT_01050c48 + 6));
    FUN_009a1480(&DAT_0105c2e8,local_9c,'\x01');
    goto LAB_00a47235;
  }
  FUN_009aa830(local_9c,local_60);
  FUN_009aa830(local_9c,(float *)(local_a0 + 6));
  if ((param_1[10] & 0x400U) != 0) {
    _DAT_010bb258 = _DAT_010bb258 + 1;
  }
  if ((param_1[10] & 0x20U) != 0) {
    FUN_009aa830(local_9c,(float *)(DAT_01050c48 + 0x12));
    uVar5 = param_1[10];
    if ((uVar5 & 0x40) == 0) {
      if ((char)uVar5 < '\0') {
        fVar2 = *(float *)(iVar7 + 0x44) - _DAT_00e6947c;
        fVar3 = *(float *)(iVar7 + 0x48) - _DAT_00e69480;
        local_64 = *(float *)(iVar7 + 0x4c) - _DAT_00e69484;
        goto LAB_00a47071;
      }
      if ((uVar5 & 0x100) != 0) {
        fVar2 = *(float *)(iVar7 + 0x44) - _DAT_00e69470;
        fVar3 = *(float *)(iVar7 + 0x48) - _DAT_00e69474;
        local_64 = *(float *)(iVar7 + 0x4c) - _DAT_00e69478;
        goto LAB_00a47071;
      }
    }
    else {
      fVar2 = *(float *)(iVar7 + 0x44) - _DAT_00e69464;
      fVar3 = *(float *)(iVar7 + 0x48) - _DAT_00e69468;
      local_64 = *(float *)(iVar7 + 0x4c) - _DAT_00e6946c;
LAB_00a47071:
      local_74 = local_74 + fVar3;
      local_78 = local_78 + fVar2;
      local_70 = local_70 + local_64;
    }
    FUN_009aa830(local_9c,(float *)(DAT_01050c48 + 6));
  }
  if ((param_1[10] & 0x200U) != 0) {
    pfVar9 = (float *)(DAT_01050c48 + 6);
    pfVar11 = local_9c;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
  }
  pfVar9 = local_9c;
  pfVar11 = local_60 + 0xc;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pfVar11 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar11 = pfVar11 + 1;
  }
  FUN_009aa830(local_60 + 0xc,(float *)(DAT_01050c48 + 0x12));
  FUN_009832f0(DAT_01050c48,local_60 + 0xc,DAT_0105eb40,*(int *)(DAT_0105eb48 + 0x28));
  piVar8 = DAT_01050c48;
  if ((float)DAT_01050c48[0x1f] != 1.0) {
    FUN_0097eb80(local_9c,(float)DAT_01050c48[0x1f]);
  }
  if (((*(byte *)(param_1 + 10) & 4) != 0) && (local_a0 != piVar8)) {
    pfVar9 = local_9c;
    pfVar11 = afStackY_e4;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pfVar11 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    }
    (**(code **)(*DAT_01050c48 + 0x24))();
    DAT_01050c48[0x31] = local_a0[0x31];
    if (((*(byte *)(DAT_0105eb48 + 0xe6) & 1) != 0) && ((void *)DAT_01050c48[0x42] != (void *)0x0))
    {
      FUN_0099f3d0((void *)DAT_01050c48[0x42],(int)DAT_01050c48);
    }
  }
  FUN_009a1480(&DAT_0105c2e8,local_9c,'\x01');
LAB_00a47235:
  iVar6 = 0;
  if (DAT_0105bed0 == '\0') {
    if (0 < *param_1) {
      do {
        LH_DispatchPrimitiveDraw(*(undefined4 **)(param_1[1] + iVar6 * 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < *param_1);
    }
  }
  else if (0 < *param_1) {
    do {
      FUN_00a71180(*(void **)(param_1[1] + iVar6 * 4));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  if (bVar4) {
    FUN_009a1480(&DAT_0105c2e8,&DAT_010bb25c,'\x01');
  }
  DAT_010bb254 = (int *)0x0;
  return;
}


//// FUNCTION FUN_00a472b0 @ 00a472b0 ////

void __fastcall FUN_00a472b0(int *param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = *param_1;
  local_c = 3.4028235e+38;
  local_8 = 3.4028235e+38;
  local_4 = 3.4028235e+38;
  local_18 = -3.4028235e+38;
  local_14 = -3.4028235e+38;
  local_10 = -3.4028235e+38;
  if (0 < iVar4) {
    piVar3 = (int *)param_1[1];
    do {
      iVar1 = *piVar3;
      iVar6 = 0;
      if (0 < *(int *)(iVar1 + 0x2c)) {
        iVar5 = 0;
        do {
          pfVar2 = (float *)(*(int *)(iVar1 + 0x30) + iVar5);
          if (*(float *)(*(int *)(iVar1 + 0x30) + iVar5) <= local_c) {
            local_c = *pfVar2;
          }
          if (pfVar2[1] <= local_8) {
            local_8 = pfVar2[1];
          }
          if (pfVar2[2] <= local_4) {
            local_4 = pfVar2[2];
          }
          pfVar2 = (float *)(*(int *)(iVar1 + 0x30) + iVar5);
          if (local_18 <= *(float *)(*(int *)(iVar1 + 0x30) + iVar5)) {
            local_18 = *pfVar2;
          }
          if (local_14 <= pfVar2[1]) {
            local_14 = pfVar2[1];
          }
          if (local_10 <= pfVar2[2]) {
            local_10 = pfVar2[2];
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x20;
        } while (iVar6 < *(int *)(iVar1 + 0x2c));
      }
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00a47960(param_1 + 2,&local_c,&local_18);
  FUN_00a46c00(param_1);
  return;
}


//// FUNCTION FUN_00a474b0 @ 00a474b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __thiscall FUN_00a474b0(void *this,void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30 [12];
  
  fVar1 = *(float *)((int)param_1 + 0x7c) * *(float *)((int)this + 0x18);
  DAT_01050c58 = 0;
  DAT_01050c59 = 0;
  if ((*(byte *)((int)param_1 + 0x9c) & 0x40) == 0) {
    iVar9 = *(int *)((int)param_1 + 0x78);
  }
  else {
    iVar9 = 0;
  }
  if (((iVar9 == 0) || (iVar6 = FUN_0097e350(param_1,0), (*(byte *)(iVar6 + 0xe4) & 1) == 0)) ||
     ((*(uint *)(iVar9 + 0xc) & 0x2000) == 0)) {
    local_48 = *(float *)this;
    local_40 = *(float *)((int)this + 8);
    local_44 = *(float *)((int)this + 4);
    pfVar7 = (float *)FUN_0097f1f0(param_1,local_30);
    fVar4 = local_40 * pfVar7[6];
    fVar3 = local_40 * pfVar7[7];
    fVar2 = local_48 * pfVar7[1];
    local_40 = local_48 * pfVar7[2] + local_44 * pfVar7[5] + local_40 * pfVar7[8] + pfVar7[0xb];
    local_48 = local_48 * *pfVar7 + fVar4 + local_44 * pfVar7[3] + pfVar7[9];
    local_44 = fVar2 + fVar3 + local_44 * pfVar7[4] + pfVar7[10];
  }
  else if (*(int *)((int)param_1 + 0xb0) + 1 < DAT_0105bec0) {
    local_48 = *(float *)this;
    local_44 = *(float *)((int)this + 4);
    local_40 = *(float *)((int)this + 8);
    FUN_0040b490((void *)((int)param_1 + 0x18),&local_48);
  }
  else {
    local_40 = *(float *)(iVar9 + 0x30);
    local_48 = *(float *)(iVar9 + 0x28);
    local_44 = *(float *)(iVar9 + 0x2c);
  }
  fVar2 = DAT_0105c468 * local_48 + _DAT_0105c480 * local_40 + _DAT_0105c474 * local_44 +
          _DAT_0105c48c;
  fVar3 = DAT_0105c46c * local_48 + _DAT_0105c484 * local_40 + _DAT_0105c478 * local_44 +
          _DAT_0105c490;
  _DAT_01050c50 =
       _DAT_0105c470 * local_48 + _DAT_0105c488 * local_40 + _DAT_0105c47c * local_44 +
       _DAT_0105c494;
  fVar4 = _DAT_01050c50 + fVar1;
  if (fVar4 < DAT_0105c3e0) {
    return (ushort)(fVar4 < DAT_0105c3e0) << 8 | (ushort)(NAN(fVar4) || NAN(DAT_0105c3e0)) << 10 |
           (ushort)(fVar4 == DAT_0105c3e0) << 0xe;
  }
  fVar4 = (local_48 - DAT_0105c3a8) * (local_48 - DAT_0105c3a8) +
          (local_44 - DAT_0105c3ac) * (local_44 - DAT_0105c3ac) +
          (local_40 - DAT_0105c3b0) * (local_40 - DAT_0105c3b0);
  fVar5 = fVar1 * fVar1;
  if (fVar5 >= fVar4 && (fVar5 == fVar4) == 0) {
    DAT_01050c59 = 1;
    DAT_01050c58 = 1;
    _DAT_01050c54 = fVar1;
    return CONCAT11(fVar5 < fVar4 | (byte)((ushort)((ushort)(NAN(fVar5) || NAN(fVar4)) << 10) >> 8)
                    | (byte)((ushort)((ushort)(fVar5 == fVar4) << 0xe) >> 8),1);
  }
  if (fVar2 <= 0.0) {
    if (fVar3 <= 0.0) {
      if (fVar3 <= fVar2) goto LAB_00a4782f;
      fVar4 = _DAT_0105c584 * local_48 + _DAT_0105c58c * local_40 + _DAT_0105c588 * local_44 +
              _DAT_0105c590;
    }
    else {
      if (-fVar2 <= fVar3) goto LAB_00a47747;
      fVar4 = _DAT_0105c584 * local_48 + _DAT_0105c58c * local_40 + _DAT_0105c588 * local_44 +
              _DAT_0105c590;
    }
  }
  else if (fVar3 <= 0.0) {
    if (fVar2 <= -fVar3) {
LAB_00a4782f:
      fVar4 = _DAT_0105c574 * local_48 + _DAT_0105c57c * local_40 + _DAT_0105c578 * local_44 +
              _DAT_0105c580;
    }
    else {
      fVar4 = _DAT_0105c594 * local_48 + _DAT_0105c59c * local_40 + _DAT_0105c598 * local_44 +
              _DAT_0105c5a0;
    }
  }
  else if (fVar2 <= fVar3) {
LAB_00a47747:
    fVar4 = _DAT_0105c564 * local_48 + _DAT_0105c56c * local_40 + _DAT_0105c568 * local_44 +
            _DAT_0105c570;
  }
  else {
    fVar4 = _DAT_0105c594 * local_48 + _DAT_0105c59c * local_40 + _DAT_0105c598 * local_44 +
            _DAT_0105c5a0;
  }
  uVar10 = (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
           (ushort)(fVar4 == fVar1) << 0xe;
  uVar8 = (uint)uVar10;
  if (fVar4 >= fVar1 && (fVar4 == fVar1) == 0) {
    return uVar10;
  }
  fVar4 = 1.0 / _DAT_01050c50;
  DAT_01050c59 = 1;
  local_3c = (fVar2 * fVar4 + 1.0) * _DAT_0105c410;
  local_38 = (1.0 - fVar3 * fVar4) * _DAT_0105c414;
  fVar2 = (DAT_0105c3e0 * fVar4 * fVar1 * _DAT_0105c410) / _DAT_0105c3e8;
  _DAT_01050c54 = fVar1;
  if ((*(byte *)((int)param_1 + 0x9c) & 2) != 0) {
    local_48 = (DAT_0105c430 - (float)_DAT_0105c408) - local_3c;
    local_44 = (DAT_0105c434 - (float)_DAT_0105c40c) - local_38;
    local_34 = _DAT_01050c50;
    uVar8 = FUN_0097f920(param_1);
    if ((char)uVar8 == '\0') {
      fVar1 = local_48 * local_48 + local_44 * local_44;
      fVar2 = fVar2 * fVar2;
      uVar8 = (uint)(ushort)((ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                            | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1 != 0 || (fVar2 == fVar1) != 0) goto LAB_00a47947;
    }
    DAT_01050c58 = 1;
  }
LAB_00a47947:
  return (short)CONCAT31((int3)(uVar8 >> 8),1);
}


//// FUNCTION FUN_00a47960 @ 00a47960 ////

void __thiscall FUN_00a47960(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  *(float *)this = (*param_1 + *param_2) * 0.5;
  *(float *)((int)this + 4) = (fVar1 + fVar2) * 0.5;
  *(float *)((int)this + 8) = (fVar3 + fVar4) * 0.5;
  fVar1 = param_2[1];
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  *(float *)((int)this + 0xc) = (*param_2 - *param_1) * 0.5;
  *(float *)((int)this + 0x10) = (fVar1 - fVar2) * 0.5;
  *(float *)((int)this + 0x14) = (fVar3 - fVar4) * 0.5;
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x18) =
       SQRT(*(float *)((int)this + 0x14) * *(float *)((int)this + 0x14) +
            *(float *)((int)this + 0x10) * *(float *)((int)this + 0x10) + fVar1 * fVar1);
  return;
}


//// FUNCTION FUN_00a47a40 @ 00a47a40 ////

void __thiscall FUN_00a47a40(void *this,float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar8 = *(float *)((int)this + 0xc);
  fVar11 = *(float *)((int)this + 0x10);
  fVar12 = *(float *)((int)this + 0x14);
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *param_1 = fVar8 + *(float *)this;
  param_1[1] = fVar11 + fVar9;
  param_1[2] = fVar12 + fVar10;
  pfVar1 = param_1 + 3;
  fVar13 = -fVar8;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar1 = fVar13 + *(float *)this;
  param_1[4] = fVar11 + fVar9;
  param_1[5] = fVar12 + fVar10;
  pfVar2 = param_1 + 6;
  fVar14 = -fVar11;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar2 = fVar13 + *(float *)this;
  param_1[7] = fVar14 + fVar9;
  param_1[8] = fVar12 + fVar10;
  pfVar3 = param_1 + 9;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar3 = fVar8 + *(float *)this;
  param_1[10] = fVar14 + fVar9;
  param_1[0xb] = fVar12 + fVar10;
  fVar12 = -fVar12;
  pfVar4 = param_1 + 0xc;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar4 = fVar8 + *(float *)this;
  param_1[0xd] = fVar11 + fVar9;
  param_1[0xe] = fVar12 + fVar10;
  pfVar5 = param_1 + 0xf;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar5 = fVar13 + *(float *)this;
  param_1[0x10] = fVar11 + fVar9;
  param_1[0x11] = fVar12 + fVar10;
  pfVar6 = param_1 + 0x12;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  *pfVar6 = fVar13 + *(float *)this;
  param_1[0x13] = fVar14 + fVar9;
  param_1[0x14] = fVar12 + fVar10;
  fVar9 = *(float *)((int)this + 4);
  fVar10 = *(float *)((int)this + 8);
  pfVar7 = param_1 + 0x15;
  *pfVar7 = fVar8 + *(float *)this;
  param_1[0x16] = fVar14 + fVar9;
  param_1[0x17] = fVar12 + fVar10;
  if (param_2 != (float *)0x0) {
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    *param_1 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[1] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[2] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar1;
    fVar9 = param_1[4];
    fVar10 = param_1[5];
    *pfVar1 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[4] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[5] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar2;
    fVar9 = param_1[7];
    fVar10 = param_1[8];
    *pfVar2 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[7] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[8] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar3;
    fVar9 = param_1[10];
    fVar10 = param_1[0xb];
    *pfVar3 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[10] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[0xb] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar4;
    fVar9 = param_1[0xd];
    fVar10 = param_1[0xe];
    *pfVar4 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[0xd] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[0xe] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar5;
    fVar9 = param_1[0x10];
    fVar10 = param_1[0x11];
    *pfVar5 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[0x10] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[0x11] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar6;
    fVar9 = param_1[0x13];
    fVar10 = param_1[0x14];
    *pfVar6 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[0x13] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[0x14] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
    fVar8 = *pfVar7;
    fVar9 = param_1[0x16];
    fVar10 = param_1[0x17];
    *pfVar7 = fVar10 * param_2[6] + fVar8 * *param_2 + fVar9 * param_2[3] + param_2[9];
    param_1[0x16] = fVar9 * param_2[4] + fVar10 * param_2[7] + fVar8 * param_2[1] + param_2[10];
    param_1[0x17] = fVar9 * param_2[5] + fVar8 * param_2[2] + fVar10 * param_2[8] + param_2[0xb];
  }
  return;
}


//// FUNCTION FUN_00a47ec0 @ 00a47ec0 ////

void __thiscall FUN_00a47ec0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)this - *(float *)((int)this + 0xc);
  local_8 = *(float *)((int)this + 4) - *(float *)((int)this + 0x10);
  local_4 = *(float *)((int)this + 8) - *(float *)((int)this + 0x14);
  if (*param_1 - param_1[3] <= local_c) {
    local_c = *param_1 - param_1[3];
  }
  if (param_1[1] - param_1[4] <= local_8) {
    local_8 = param_1[1] - param_1[4];
  }
  if (param_1[2] - param_1[5] <= local_4) {
    local_4 = param_1[2] - param_1[5];
  }
  local_18 = param_1[3] + *param_1;
  local_14 = param_1[4] + param_1[1];
  local_10 = param_1[5] + param_1[2];
  fVar1 = *(float *)this + *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 0x10) + *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 0x14) + *(float *)((int)this + 8);
  if (local_18 < fVar1) {
    local_18 = fVar1;
  }
  if (local_14 < fVar2) {
    local_14 = fVar2;
  }
  if (fVar3 <= local_10) {
    FUN_00a47960(this,&local_c,&local_18);
    return;
  }
  local_10 = fVar3;
  FUN_00a47960(this,&local_c,&local_18);
  return;
}


//// FUNCTION FUN_00a48080 @ 00a48080 ////

void __fastcall FUN_00a48080(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a48090 @ 00a48090 ////

undefined4 * __fastcall FUN_00a48090(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  _eh_vector_constructor_iterator_(param_1 + 2,0xc,0x40,FUN_00a48080,FUN_009a17e0);
  param_1[0xc2] = DAT_010bb290;
  DAT_010bb290 = param_1;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  puVar1 = param_1 + 4;
  iVar2 = 0x40;
  do {
    *puVar1 = param_1;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}


//// FUNCTION FUN_00a48190 @ 00a48190 ////

void __fastcall FUN_00a48190(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_00a481b0 @ 00a481b0 ////

ushort __thiscall FUN_00a481b0(void *this,float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  
  fVar2 = *(float *)((int)this + 0xc) - *param_1;
  fVar4 = *(float *)((int)this + 0x18) - *param_1;
  fVar3 = (*(float *)((int)this + 0x1c) - param_1[1]) * fVar2 -
          (*(float *)((int)this + 0x10) - param_1[1]) * fVar4;
  bVar1 = fVar3 < 0.0;
  uVar5 = (ushort)bVar1 << 8 | (ushort)NAN(fVar3) << 10 | (ushort)(fVar3 == 0.0) << 0xe;
  if ((*(float *)((int)this + 0x10) - param_1[1]) * (*(float *)this - *param_1) -
      (*(float *)((int)this + 4) - param_1[1]) * fVar2 <= 0.0) {
    if (bVar1 || (fVar3 == 0.0) != 0) {
      fVar2 = (*(float *)((int)this + 0x28) - param_1[1]) * fVar4 -
              (*(float *)((int)this + 0x1c) - param_1[1]) *
              (*(float *)((int)this + 0x24) - *param_1);
      uVar5 = (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 | (ushort)(fVar2 == 0.0) << 0xe;
      if (fVar2 < 0.0 || (fVar2 == 0.0) != 0) goto LAB_00a4825e;
    }
  }
  else if (!bVar1) {
    fVar2 = (*(float *)((int)this + 0x28) - param_1[1]) * fVar4 -
            (*(float *)((int)this + 0x1c) - param_1[1]) * (*(float *)((int)this + 0x24) - *param_1);
    uVar5 = (ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 | (ushort)(fVar2 == 0.0) << 0xe;
    if (fVar2 >= 0.0) {
LAB_00a4825e:
      return CONCAT11((char)(uVar5 >> 8),1);
    }
  }
  return uVar5;
}


//// FUNCTION FUN_00a48310 @ 00a48310 ////

float10 __thiscall FUN_00a48310(float *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  ushort uVar2;
  int extraout_ECX;
  void *this;
  int iVar3;
  float10 fVar4;
  
  if ((((*param_2 < *param_1) || (param_1[2] < *param_2)) || (param_2[1] < param_1[1])) ||
     (param_1[3] < param_2[1])) {
    return (float10)0.0;
  }
  this = (void *)param_1[5];
  fVar1 = param_1[4];
  iVar3 = 0;
  if (0 < (int)fVar1) {
    do {
      uVar2 = FUN_00a481b0(this,param_2);
      if ((char)uVar2 != '\0') {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(extraout_ECX + 0x30);
          param_3[1] = *(undefined4 *)(extraout_ECX + 0x34);
          param_3[2] = *(undefined4 *)(extraout_ECX + 0x38);
        }
        fVar4 = -(((float10)*(float *)(extraout_ECX + 0x34) * (float10)param_2[1] +
                   (float10)*(float *)(extraout_ECX + 0x30) * (float10)*param_2 +
                  (float10)*(float *)(extraout_ECX + 0x3c)) /
                 (float10)*(float *)(extraout_ECX + 0x38));
        if (fVar4 < (float10)*(float *)(extraout_ECX + 8)) {
          return fVar4;
        }
        return (float10)*(float *)(extraout_ECX + 8);
      }
      iVar3 = iVar3 + 1;
      this = (void *)(extraout_ECX + 0x40);
    } while (iVar3 < (int)fVar1);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00a483d0 @ 00a483d0 ////

float10 __thiscall FUN_00a483d0(float *param_1,float *param_2)

{
  ushort uVar1;
  void *this;
  int extraout_ECX;
  int iVar2;
  float10 fVar3;
  
  if ((((*param_1 <= *param_2) && (*param_2 <= param_1[2])) && (param_1[1] <= param_2[1])) &&
     (param_2[1] <= param_1[3])) {
    iVar2 = (int)param_1[4] + -1;
    if (-1 < iVar2) {
      this = (void *)(iVar2 * 0x40 + (int)param_1[5]);
      do {
        uVar1 = FUN_00a481b0(this,param_2);
        if ((char)uVar1 != '\0') {
          fVar3 = -(((float10)*(float *)(extraout_ECX + 0x30) * (float10)*param_2 +
                     (float10)*(float *)(extraout_ECX + 0x34) * (float10)param_2[1] +
                    (float10)*(float *)(extraout_ECX + 0x3c)) /
                   (float10)*(float *)(extraout_ECX + 0x38));
          if (fVar3 < (float10)*(float *)(extraout_ECX + 8)) {
            return fVar3;
          }
          return (float10)*(float *)(extraout_ECX + 8);
        }
        iVar2 = iVar2 + -1;
        this = (void *)(extraout_ECX + -0x40);
      } while (-1 < iVar2);
    }
    return (float10)0.0;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00a48470 @ 00a48470 ////

ushort __fastcall FUN_00a48470(int param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
               *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
               *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
  uVar2 = (ushort)(fVar1 < 0.99) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.99) << 0xe;
  if (fVar1 >= 0.99) {
    fVar1 = ABS(*(float *)(param_1 + 0x38));
    uVar2 = (ushort)(fVar1 < 0.1) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 0.1) << 0xe;
    if (fVar1 >= 0.1) {
      return CONCAT11((char)(uVar2 >> 8),1);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00a484c0 @ 00a484c0 ////

undefined2 __cdecl FUN_00a484c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  
  if ((SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
            *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
            *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30)) < 0.99) ||
     (ABS(*(float *)(param_1 + 0x38)) < 0.1)) {
    uVar3 = FUN_00a48470(param_2);
    if ((char)uVar3 != '\0') goto LAB_00a48586;
  }
  if ((SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
            *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
            *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30)) < 0.99) ||
     (ABS(*(float *)(param_1 + 0x38)) < 0.1)) {
    uVar3 = FUN_00a48470(param_2);
    if ((char)uVar3 == '\0') goto LAB_00a4858b;
  }
  uVar3 = FUN_00a48470(param_2);
  if ((char)uVar3 != '\0') {
    fVar1 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x14) + *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_2 + 0x20) + *(float *)(param_2 + 0x14) + *(float *)(param_2 + 8);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
LAB_00a48586:
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
LAB_00a4858b:
  return uVar3 & 0xff00;
}


//// FUNCTION FUN_00a48590 @ 00a48590 ////

void __fastcall FUN_00a48590(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00a485b0 @ 00a485b0 ////

void __fastcall FUN_00a485b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


//// FUNCTION FUN_00a48600 @ 00a48600 ////

void __cdecl FUN_00a48600(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (0 < param_1) {
    do {
      uVar1 = *param_4;
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      *param_4 = *param_3;
      param_4[1] = param_3[1];
      param_4[2] = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = uVar1;
      param_2[1] = uVar2;
      param_1 = param_1 + -1;
      param_2[2] = uVar3;
    } while (param_1 != 0);
  }
  return;
}


//// FUNCTION FUN_00a48670 @ 00a48670 ////

void __thiscall FUN_00a48670(void *this,float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  if (param_1[2] <= param_2[2]) {
    if (param_2[2] < param_3[2]) goto LAB_00a486ac;
    iVar1 = 2;
  }
  else {
    if ((param_3[2] < param_2[2]) || (param_3[2] < param_1[2])) goto LAB_00a486ca;
LAB_00a486ac:
    iVar1 = 1;
  }
  FUN_00a48600(iVar1,param_1,param_2,param_3);
LAB_00a486ca:
  FUN_009a3f80((void *)((int)this + 0x30),param_1,param_2,param_3);
  *(float *)this = *param_1;
  *(float *)((int)this + 4) = param_1[1];
  *(float *)((int)this + 8) = param_1[2];
  *(float *)((int)this + 0xc) = *param_2;
  *(float *)((int)this + 0x10) = param_2[1];
  *(float *)((int)this + 0x14) = param_2[2];
  *(float *)((int)this + 0x18) = *param_3;
  *(float *)((int)this + 0x1c) = param_3[1];
  *(float *)((int)this + 0x20) = param_3[2];
  *(float *)((int)this + 0x24) = *param_1;
  *(float *)((int)this + 0x28) = param_1[1];
  *(float *)((int)this + 0x2c) = param_1[2];
  return;
}


//// FUNCTION FUN_00a48760 @ 00a48760 ////

void __thiscall FUN_00a48760(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 4;
  puVar2 = this;
  do {
    puVar1 = (undefined4 *)((param_1 - (int)this) + (int)puVar2);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    iVar3 = iVar3 + -1;
    puVar2[2] = puVar1[2];
    puVar2 = puVar2 + 3;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  return;
}


//// FUNCTION FUN_00a487c0 @ 00a487c0 ////

void __fastcall FUN_00a487c0(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_44;
  undefined4 local_40 [16];
  
  do {
    iVar5 = 0;
    bVar1 = false;
    local_44 = 0;
    if (*(int *)(param_1 + 0x10) == 1 || *(int *)(param_1 + 0x10) + -1 < 0) break;
    do {
      iVar3 = *(int *)(param_1 + 0x14) + iVar5;
      uVar2 = FUN_00a484c0(iVar3,iVar3 + 0x40);
      if ((char)uVar2 != '\0') {
        FUN_00a48760(local_40,iVar3);
        puVar7 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar5);
        puVar6 = puVar7 + 0x10;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar7 = local_40;
        puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) + 0x40 + iVar5);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
        }
        bVar1 = true;
      }
      local_44 = local_44 + 1;
      iVar5 = iVar5 + 0x40;
    } while (local_44 < *(int *)(param_1 + 0x10) + -1);
  } while (bVar1);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    pfVar4 = (float *)(*(int *)(param_1 + 0x14) + 0x34);
    while ((0.99 <= SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1] + pfVar4[-1] * pfVar4[-1]) &&
           (0.1 <= ABS(pfVar4[1])))) {
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
      if (*(int *)(param_1 + 0x10) <= iVar5) {
        return;
      }
    }
    *(int *)(param_1 + 0x10) = iVar5 + -1;
  }
  return;
}


//// FUNCTION FUN_00a488c0 @ 00a488c0 ////

void __thiscall FUN_00a488c0(void *this,int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfacfb;
  local_c = ExceptionList;
  if (param_1 != 0) {
    iVar8 = *(int *)(param_1 + 4);
    ExceptionList = &local_c;
    *(int *)((int)this + 0x10) = iVar8;
    pvVar5 = operator_new(iVar8 << 6);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar5,0x40,iVar8,FUN_00a485b0);
    }
    *(void **)((int)this + 0x14) = pvVar5;
    local_4 = 0xffffffff;
    bVar4 = false;
    local_38 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      local_34 = 0;
      iVar8 = 0;
      do {
        uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + iVar8);
        iVar3 = *(int *)(param_1 + 8);
        iVar6 = *(int *)(param_1 + 0xc) + iVar8;
        local_30 = *(float *)(iVar3 + uVar7 * 0xc);
        iVar1 = iVar3 + uVar7 * 0xc;
        local_2c = *(float *)(iVar1 + 4);
        local_28 = *(undefined4 *)(iVar1 + 8);
        uVar7 = (uint)*(ushort *)(iVar6 + 2);
        local_18 = *(float *)(iVar3 + uVar7 * 0xc);
        iVar1 = iVar3 + uVar7 * 0xc;
        local_14 = *(float *)(iVar1 + 4);
        local_10 = *(undefined4 *)(iVar1 + 8);
        pfVar2 = (float *)(iVar3 + (uint)*(ushort *)(iVar6 + 4) * 0xc);
        local_24 = *pfVar2;
        local_20 = pfVar2[1];
        local_1c = pfVar2[2];
        if (!bVar4) {
          *(float *)((int)this + 8) = local_30;
          *(float *)this = local_30;
          *(float *)((int)this + 0xc) = local_2c;
          *(float *)((int)this + 4) = local_2c;
          bVar4 = true;
        }
        if (local_30 < *(float *)this) {
          *(float *)this = local_30;
        }
        if (*(float *)((int)this + 8) < local_30) {
          *(float *)((int)this + 8) = local_30;
        }
        if (local_2c < *(float *)((int)this + 4)) {
          *(float *)((int)this + 4) = local_2c;
        }
        if (*(float *)((int)this + 0xc) < local_2c) {
          *(float *)((int)this + 0xc) = local_2c;
        }
        if (local_18 < *(float *)this) {
          *(float *)this = local_18;
        }
        if (*(float *)((int)this + 8) < local_18) {
          *(float *)((int)this + 8) = local_18;
        }
        if (local_14 < *(float *)((int)this + 4)) {
          *(float *)((int)this + 4) = local_14;
        }
        if (*(float *)((int)this + 0xc) < local_14) {
          *(float *)((int)this + 0xc) = local_14;
        }
        if (local_24 < *(float *)this) {
          *(float *)this = local_24;
        }
        if (*(float *)((int)this + 8) < local_24) {
          *(float *)((int)this + 8) = local_24;
        }
        if (local_20 < *(float *)((int)this + 4)) {
          *(float *)((int)this + 4) = local_20;
        }
        if (*(float *)((int)this + 0xc) < local_20) {
          *(float *)((int)this + 0xc) = local_20;
        }
        FUN_00a48670((void *)(*(int *)((int)this + 0x14) + local_34),&local_30,&local_18,&local_24);
        local_38 = local_38 + 1;
        local_34 = local_34 + 0x40;
        iVar8 = iVar8 + 6;
      } while (local_38 < *(int *)(param_1 + 4));
    }
    FUN_00a487c0((int)this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a48b30 @ 00a48b30 ////

undefined1 FUN_00a48b30(void)

{
  return 1;
}


//// FUNCTION FUN_00a48b40 @ 00a48b40 ////

undefined1 FUN_00a48b40(void)

{
  return 1;
}


//// FUNCTION FUN_00a48b50 @ 00a48b50 ////

void FUN_00a48b50(void)

{
  return;
}


//// FUNCTION FUN_00a48b60 @ 00a48b60 ////

void FUN_00a48b60(void)

{
  return;
}


//// FUNCTION FUN_00a48b70 @ 00a48b70 ////

undefined1 FUN_00a48b70(void)

{
  return 0;
}


//// FUNCTION FUN_00a48b80 @ 00a48b80 ////

undefined1 FUN_00a48b80(void)

{
  return 0;
}


//// FUNCTION FUN_00a48b90 @ 00a48b90 ////

void FUN_00a48b90(void)

{
  return;
}


//// FUNCTION FUN_00a48ba0 @ 00a48ba0 ////

void FUN_00a48ba0(void)

{
  return;
}


//// FUNCTION FUN_00a48c50 @ 00a48c50 ////

void __thiscall FUN_00a48c50(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfad1b;
  local_c = ExceptionList;
  if ((param_1 != 0) && (param_2 != 0)) {
    ExceptionList = &local_c;
    if (*(int *)((int)this + 0x34) == 0) {
      ExceptionList = &local_c;
      puVar1 = operator_new(0xc);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      *(undefined4 **)((int)this + 0x34) = puVar1;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*(int *)((int)this + 0x34) + 4));
  }
  return;
}


//// FUNCTION FUN_00a48d30 @ 00a48d30 ////

void __fastcall FUN_00a48d30(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_009db1e0(param_1);
  if ((char)uVar3 != '\0') {
    bVar1 = false;
    DAT_0105eb48 = param_1;
    if ((((*(int *)(param_1 + 0xb0) != 0) && (DAT_01050c48 != 0)) &&
        (*(int *)(DAT_01050c48 + 0x78) != 0)) &&
       ((*(int *)(*(int *)(DAT_01050c48 + 0x78) + 0x178) != 0 &&
        (bVar2 = FUN_0097eaa0(DAT_01050c48), bVar2)))) {
      FUN_00a163c0(1,param_1);
      bVar1 = true;
    }
    uVar3 = *(uint *)(param_1 + 0xe4);
    if ((uVar3 & 8) == 0) {
      if ((((uVar3 & 4) != 0) && (DAT_0105beac == '\0')) && (DAT_01050c3d == '\0')) {
        FUN_009a6510('\x01');
        if (0 < *(int *)(param_1 + 0x28)) {
          iVar4 = 0;
          do {
            DAT_0105eb40 = iVar4;
            FUN_00a46cf0(*(int **)(*(int *)(param_1 + 0x2c) + iVar4 * 4));
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0x28));
        }
        FUN_009a6510('\0');
      }
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 4) + 0x28) & 8) == 0) {
            DAT_0105eb40 = iVar4;
            FUN_00a46cf0(*(int **)(*(int *)(param_1 + 0x2c) + iVar4 * 4));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x28));
      }
    }
    else {
      if ((uVar3 & 0x10) == 0) {
        FUN_00aa9760(param_1);
      }
      DAT_0105eaf4 = 1;
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x28)) {
        do {
          if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar4 * 4) + 0x28) & 8) == 0) {
            DAT_0105eb40 = iVar4;
            FUN_00a46cf0(*(int **)(*(int *)(param_1 + 0x2c) + iVar4 * 4));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_1 + 0x28));
      }
      DAT_0105eaf4 = 0;
    }
    if (bVar1) {
      FUN_00a163c0(0,param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00a48e80 @ 00a48e80 ////

void __thiscall FUN_00a48e80(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (((-1 < (int)param_1) && ((int)param_1 < *(int *)((int)this + 0x38))) && (param_2 != 0)) {
    pvVar2 = *(void **)(*(int *)((int)this + 0x3c) + param_1 * 4);
    if (pvVar2 != (void *)0x0) {
      FUN_0099b400(pvVar2);
      *(undefined4 *)(*(int *)((int)this + 0x3c) + param_1 * 4) = 0;
    }
    *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4) = param_2;
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x30)) {
      iVar3 = 0;
      do {
        pvVar2 = (void *)(*(int *)((int)this + 0x34) + iVar3);
        if ((*(byte *)(*(int *)((int)this + 0x34) + 8 + iVar3) == param_1) &&
           (iVar1 = *(int *)(*(int *)((int)this + 0x3c) + param_1 * 4),
           *(int *)((int)pvVar2 + 0x18) != iVar1)) {
          Engine_SetResourceReference(pvVar2,iVar1);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x24;
      } while (iVar4 < *(int *)((int)this + 0x30));
    }
  }
  return;
}


//// FUNCTION FUN_00a48f10 @ 00a48f10 ////

void __thiscall FUN_00a48f10(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int local_1c;
  int local_14;
  int local_10;
  
  local_10 = 0;
  if (0 < *(int *)((int)this + 0x28)) {
    do {
      piVar2 = *(int **)(*(int *)((int)this + 0x2c) + local_10 * 4);
      local_14 = 0;
      if (0 < *piVar2) {
        do {
          piVar3 = *(int **)(piVar2[1] + local_14 * 4);
          piVar4 = (int *)piVar3[0xd];
          if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
            piVar9 = (int *)piVar4[1];
            iVar8 = *piVar4;
            iVar10 = 0;
            if (3 < iVar8) {
              local_1c = (iVar8 - 4U >> 2) + 1;
              iVar10 = local_1c * 4;
              do {
                puVar11 = (undefined4 *)(*piVar9 * 0x20 + piVar3[0xc]);
                if (*piVar3 != 0) {
                  puVar1 = (undefined4 *)(*piVar3 + *piVar9 * 0x14);
                  *(undefined1 *)(puVar1 + 4) = 3;
                  *(undefined1 *)((int)puVar1 + 0x11) = 4;
                  *(undefined1 *)((int)puVar1 + 0x12) = 4;
                  *(undefined1 *)((int)puVar1 + 0x13) = 4;
                  *puVar1 = 0x3f59999a;
                  puVar1[1] = 0x3e19999a;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                }
                iVar7 = piVar9[1];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                *puVar11 = (&DAT_00e68318)[iVar7 * 3];
                puVar11[1] = (&DAT_00e6831c)[iVar7 * 3];
                puVar11[2] = (&DAT_00e68320)[iVar7 * 3];
                iVar7 = piVar9[1];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                uVar5 = (&DAT_00e68394)[iVar7 * 3];
                uVar6 = (&DAT_00e68398)[iVar7 * 3];
                puVar11[3] = (&DAT_00e68390)[iVar7 * 3];
                puVar11[4] = uVar5;
                puVar11[5] = uVar6;
                puVar11 = (undefined4 *)(piVar9[2] * 0x20 + piVar3[0xc]);
                if (*piVar3 != 0) {
                  puVar1 = (undefined4 *)(*piVar3 + piVar9[2] * 0x14);
                  *(undefined1 *)(puVar1 + 4) = 3;
                  *(undefined1 *)((int)puVar1 + 0x11) = 4;
                  *(undefined1 *)((int)puVar1 + 0x12) = 4;
                  *(undefined1 *)((int)puVar1 + 0x13) = 4;
                  *puVar1 = 0x3f59999a;
                  puVar1[1] = 0x3e19999a;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                }
                iVar7 = piVar9[3];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                *puVar11 = (&DAT_00e68318)[iVar7 * 3];
                puVar11[1] = (&DAT_00e6831c)[iVar7 * 3];
                puVar11[2] = (&DAT_00e68320)[iVar7 * 3];
                iVar7 = piVar9[3];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                uVar5 = (&DAT_00e68394)[iVar7 * 3];
                uVar6 = (&DAT_00e68398)[iVar7 * 3];
                puVar11[3] = (&DAT_00e68390)[iVar7 * 3];
                puVar11[4] = uVar5;
                puVar11[5] = uVar6;
                puVar11 = (undefined4 *)(piVar9[4] * 0x20 + piVar3[0xc]);
                if (*piVar3 != 0) {
                  puVar1 = (undefined4 *)(*piVar3 + piVar9[4] * 0x14);
                  *(undefined1 *)(puVar1 + 4) = 3;
                  *(undefined1 *)((int)puVar1 + 0x11) = 4;
                  *(undefined1 *)((int)puVar1 + 0x12) = 4;
                  *(undefined1 *)((int)puVar1 + 0x13) = 4;
                  *puVar1 = 0x3f59999a;
                  puVar1[1] = 0x3e19999a;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                }
                iVar7 = piVar9[5];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                *puVar11 = (&DAT_00e68318)[iVar7 * 3];
                puVar11[1] = (&DAT_00e6831c)[iVar7 * 3];
                puVar11[2] = (&DAT_00e68320)[iVar7 * 3];
                iVar7 = piVar9[5];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                uVar5 = (&DAT_00e68394)[iVar7 * 3];
                uVar6 = (&DAT_00e68398)[iVar7 * 3];
                puVar11[3] = (&DAT_00e68390)[iVar7 * 3];
                puVar11[4] = uVar5;
                puVar11[5] = uVar6;
                puVar11 = (undefined4 *)(piVar9[6] * 0x20 + piVar3[0xc]);
                if (*piVar3 != 0) {
                  puVar1 = (undefined4 *)(*piVar3 + piVar9[6] * 0x14);
                  *(undefined1 *)(puVar1 + 4) = 3;
                  *(undefined1 *)((int)puVar1 + 0x11) = 4;
                  *(undefined1 *)((int)puVar1 + 0x12) = 4;
                  *(undefined1 *)((int)puVar1 + 0x13) = 4;
                  *puVar1 = 0x3f59999a;
                  puVar1[1] = 0x3e19999a;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                }
                iVar7 = piVar9[7];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                *puVar11 = (&DAT_00e68318)[iVar7 * 3];
                puVar11[1] = (&DAT_00e6831c)[iVar7 * 3];
                puVar11[2] = (&DAT_00e68320)[iVar7 * 3];
                iVar7 = piVar9[7];
                if (iVar7 < 0) {
                  iVar7 = 0;
                }
                else if (9 < iVar7) {
                  iVar7 = 9;
                }
                if (param_1 == 1) {
                  iVar7 = iVar7 + 0x14;
                }
                uVar5 = (&DAT_00e68394)[iVar7 * 3];
                uVar6 = (&DAT_00e68398)[iVar7 * 3];
                puVar11[3] = (&DAT_00e68390)[iVar7 * 3];
                piVar9 = piVar9 + 8;
                puVar11[4] = uVar5;
                local_1c = local_1c + -1;
                puVar11[5] = uVar6;
              } while (local_1c != 0);
            }
            if (iVar10 < iVar8) {
              local_1c = iVar8 - iVar10;
              do {
                puVar11 = (undefined4 *)(*piVar9 * 0x20 + piVar3[0xc]);
                if (*piVar3 != 0) {
                  puVar1 = (undefined4 *)(*piVar3 + *piVar9 * 0x14);
                  *(undefined1 *)(puVar1 + 4) = 3;
                  *(undefined1 *)((int)puVar1 + 0x11) = 4;
                  *(undefined1 *)((int)puVar1 + 0x12) = 4;
                  *(undefined1 *)((int)puVar1 + 0x13) = 4;
                  *puVar1 = 0x3f59999a;
                  puVar1[1] = 0x3e19999a;
                  puVar1[2] = 0;
                  puVar1[3] = 0;
                }
                iVar8 = piVar9[1];
                if (iVar8 < 0) {
                  iVar8 = 0;
                }
                else if (9 < iVar8) {
                  iVar8 = 9;
                }
                if (param_1 == 1) {
                  iVar8 = iVar8 + 0x14;
                }
                *puVar11 = (&DAT_00e68318)[iVar8 * 3];
                puVar11[1] = (&DAT_00e6831c)[iVar8 * 3];
                puVar11[2] = (&DAT_00e68320)[iVar8 * 3];
                iVar8 = piVar9[1];
                if (iVar8 < 0) {
                  iVar8 = 0;
                }
                else if (9 < iVar8) {
                  iVar8 = 9;
                }
                if (param_1 == 1) {
                  iVar8 = iVar8 + 0x14;
                }
                uVar5 = (&DAT_00e68394)[iVar8 * 3];
                uVar6 = (&DAT_00e68398)[iVar8 * 3];
                puVar11[3] = (&DAT_00e68390)[iVar8 * 3];
                piVar9 = piVar9 + 2;
                puVar11[4] = uVar5;
                local_1c = local_1c + -1;
                puVar11[5] = uVar6;
              } while (local_1c != 0);
            }
          }
          local_14 = local_14 + 1;
        } while (local_14 < *piVar2);
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)((int)this + 0x28));
  }
  return;
}


//// FUNCTION FUN_00a493c0 @ 00a493c0 ////

void __cdecl FUN_00a493c0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x807);
  iVar2 = 0x1fe;
  do {
    iVar3 = 0x66;
    pcVar1 = pcVar4;
    do {
      if ((*pcVar1 == '\0') &&
         (((((pcVar1[-0x804] == -1 || (pcVar1[-0x800] == -1)) || (pcVar1[-0x7fc] == -1)) ||
           ((pcVar1[-4] == -1 || (pcVar1[4] == -1)))) ||
          ((pcVar1[0x7fc] == -1 || ((pcVar1[0x800] == -1 || (pcVar1[0x804] == -1)))))))) {
        *pcVar1 = -0x80;
      }
      if ((pcVar1[0x800] == '\0') &&
         ((((pcVar1[-4] == -1 || (*pcVar1 == -1)) || (pcVar1[4] == -1)) ||
          (((pcVar1[0x7fc] == -1 || (pcVar1[0x804] == -1)) ||
           ((pcVar1[0xffc] == -1 || ((pcVar1[0x1000] == -1 || (pcVar1[0x1004] == -1)))))))))) {
        pcVar1[0x800] = -0x80;
      }
      if ((pcVar1[0x1000] == '\0') &&
         (((((pcVar1[0x7fc] == -1 || (pcVar1[0x800] == -1)) || (pcVar1[0x804] == -1)) ||
           ((pcVar1[0xffc] == -1 || (pcVar1[0x1004] == -1)))) ||
          ((pcVar1[0x17fc] == -1 || ((pcVar1[0x1800] == -1 || (pcVar1[0x1804] == -1)))))))) {
        pcVar1[0x1000] = -0x80;
      }
      if ((pcVar1[0x1800] == '\0') &&
         ((((((pcVar1[0xffc] == -1 || (pcVar1[0x1000] == -1)) || (pcVar1[0x1004] == -1)) ||
            ((pcVar1[0x17fc] == -1 || (pcVar1[0x1804] == -1)))) || (pcVar1[0x1ffc] == -1)) ||
          ((pcVar1[0x2000] == -1 || (pcVar1[0x2004] == -1)))))) {
        pcVar1[0x1800] = -0x80;
      }
      if ((pcVar1[0x2000] == '\0') &&
         ((((pcVar1[0x17fc] == -1 || (pcVar1[0x1800] == -1)) || (pcVar1[0x1804] == -1)) ||
          (((pcVar1[0x1ffc] == -1 || (pcVar1[0x2004] == -1)) ||
           ((pcVar1[0x27fc] == -1 || ((pcVar1[0x2800] == -1 || (pcVar1[0x2804] == -1)))))))))) {
        pcVar1[0x2000] = -0x80;
      }
      pcVar1 = pcVar1 + 0x2800;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pcVar4 = pcVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar4 = (char *)(param_1 + 3);
  iVar2 = 0x40000;
  do {
    if (*pcVar4 != '\0') {
      *pcVar4 = -1;
    }
    pcVar4 = pcVar4 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00a495a0 @ 00a495a0 ////

void __cdecl FUN_00a495a0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  while (puVar2 = param_1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (uint *)puVar2[2];
    param_1 = (undefined4 *)puVar2[1];
    if (puVar1 != (uint *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar3 = (int)puVar2 + (-8 - (int)puVar1);
      uVar4 = 1 << (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                    (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f) & 0x1fU);
      *puVar1 = *puVar1 | uVar4;
      puVar1[1] = puVar1[1] | (int)uVar4 >> 0x1f;
    }
  }
  return;
}


//// FUNCTION LH_DrawMeshLightProjectorPass @ 00a49770 ////

void __fastcall LH_DrawMeshLightProjectorPass(int param_1)

{
  int *piVar1;
  void *this;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *local_70;
  uint local_64;
  float local_5c [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_30 [3];
  undefined1 local_24;
  undefined1 uStack_22;
  uint local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* CONFIRMED: draws a mesh's geometry (walks real mesh+0x28/+0x2c submesh array
                       and each submesh's primitive array, calls DrawIndexedPrimitive at
                       vtable+0x148 with a real triangle count from FUN_00a6c360/FUN_00a6c2a0) - but
                       this is a DYNAMIC LIGHT/PROJECTOR OVERLAY PASS, not the primary/base textured
                       draw pass. Evidence: the material passed to LH_ApplyMeshMaterial (local_30)
                       is a freshly-constructed throwaway (via FUN_009910f0), never read from the
                       mesh's real material array (mesh+0x34) - same pattern used by the ruled-out
                       effect-quad drawers (FUN_009e56f0/5860/5b40). Before drawing, it walks a
                       linked list of "light" nodes (local_70, chained via node[1]) gated by
                       mesh+0xe4 bit14 (0x4000), setting SetTransform (vtable+0xb0,
                       D3DTS_TEXTURE0+i) and SetTexture (vtable+0x104) per light - almost certainly
                       the movie-studio stage-lighting/projector-cookie system (thematically fitting
                       for this game). Each primitive is gated by a per-primitive flag (this+8 bit
                       0x40000, "affected by dynamic light") and each submesh by FUN_00a46a70's
                       light-mask test (see its own comment) using a light-index bitmask built from
                       a global light-manager object (DAT_01050c48).
                       
                       The PRIMARY/base per-primitive-material textured draw pass (the one that
                       would read real materials from mesh+0x34 via a per-primitive material index)
                       has NOT been located yet - it is presumably a sibling function elsewhere, not
                       among the other ~20 callers of LH_ApplyMeshMaterial checked in this pass (all
                       turned out to be other effect/light passes or unrelated systems). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfad58;
  local_c = ExceptionList;
  if ((((*(uint *)(param_1 + 0xe4) & 0x4000) != 0) &&
      (ExceptionList = &local_c, uVar6 = FUN_009db1e0(param_1), (char)uVar6 != '\0')) &&
     ((*(byte *)(DAT_0105be74 + 4) & 1) == 0)) {
    local_5c[1] = 0.0;
    local_5c[3] = 0.0;
    local_5c[2] = 0.0;
    local_5c[0] = 0.0;
    FUN_0099f1f0(local_5c,(void *)(param_1 + 200),(float *)(DAT_01050c48 + 0x18));
    piVar7 = FUN_0099f150(local_5c,'\x01');
    iVar2 = DAT_0105c9a8;
    if (piVar7 != (int *)0x0) {
      FUN_009910f0(local_30);
      local_20 = local_20 & 0xbeffffff;
      local_4 = 0;
      local_24 = 0xe;
      local_70 = piVar7;
      if (DAT_01050c48 == 0) {
        local_64 = 0;
      }
      else {
        local_64 = *(uint *)(DAT_01050c48 + 0x98) & 0xffff;
      }
      do {
        iVar8 = 0;
        if (0 < iVar2) {
          piVar10 = &DAT_01058f18;
          piVar9 = &DAT_01059398;
          do {
            piVar3 = g_pDirect3DDevice;
            if (local_70 == (int *)0x0) break;
            piVar1 = (int *)*local_70;
            if ((int)piVar9 < 0x10595a8) {
              if (piVar9[-0xd] != 0x20000) {
                piVar9[-0xd] = 0x20000;
                (**(code **)(*piVar3 + 0x10c))(piVar3,iVar8,0xb,0x20000);
              }
            }
            else {
              (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,iVar8,0xb,0x20000);
            }
            piVar3 = g_pDirect3DDevice;
            if ((int)piVar9 < 0x10595a8) {
              if (*piVar9 != 2) {
                *piVar9 = 2;
                (**(code **)(*piVar3 + 0x10c))(piVar3,iVar8,0x18,2);
              }
            }
            else {
              (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,iVar8,0x18,2);
            }
            piVar3 = g_pDirect3DDevice;
            if ((int)piVar9 < 0x10595a8) {
              if (piVar10[-1] != 3) {
                piVar10[-1] = 3;
                (**(code **)(*piVar3 + 0x114))(piVar3,iVar8,1,3);
              }
            }
            else {
              (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar8,1,3);
            }
            piVar3 = g_pDirect3DDevice;
            if ((int)piVar9 < 0x10595a8) {
              if (*piVar10 != 3) {
                *piVar10 = 3;
                (**(code **)(*piVar3 + 0x114))(piVar3,iVar8,2,3);
              }
            }
            else {
              (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,iVar8,2,3);
            }
            (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,iVar8 + 0x10,piVar1 + 2);
            (**(code **)(*g_pDirect3DDevice + 0x104))
                      (g_pDirect3DDevice,iVar8,*(undefined4 *)(*piVar1 + 0x24));
            local_70 = (int *)local_70[1];
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 0x21;
            piVar10 = piVar10 + 0xe;
          } while (iVar8 < iVar2);
        }
        uStack_22 = (undefined1)iVar8;
        LH_ApplyMeshMaterial(local_30);
        iVar8 = 0;
        if (0 < *(int *)(param_1 + 0x28)) {
          do {
            piVar9 = *(int **)(*(int *)(param_1 + 0x2c) + iVar8 * 4);
            bVar4 = LH_Submesh_TestLightMask(piVar9,local_64);
            if ((bVar4) && (0 < *piVar9)) {
              iVar11 = 0;
              do {
                this = *(void **)(piVar9[1] + iVar11 * 4);
                if ((*(uint *)((int)this + 8) & 0x40000) != 0) {
                  cVar5 = LH_GetPrimitiveDrawInfo(this,&iStack_4c,'\0');
                  if (cVar5 == '\0') goto LAB_00a49a7d;
                  (**(code **)(*g_pDirect3DDevice + 0x148))
                            (g_pDirect3DDevice,4,uStack_3c,0,iStack_4c,uStack_40,uStack_48);
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < *piVar9);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(param_1 + 0x28));
        }
      } while (local_70 != (int *)0x0);
      FUN_00a495a0(piVar7);
LAB_00a49a7d:
      local_4 = 0xffffffff;
      FUN_00990ec0((int)local_30);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a49ab0 @ 00a49ab0 ////

void FUN_00a49ab0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *_Memory;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_13c;
  int local_138;
  char *local_12c;
  uint local_128;
  uint local_124;
  char local_120 [20];
  undefined4 local_10c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfad7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  _sprintf((char *)&local_10c,"Data\\Meshes\\ExtraInfo\\%s.inf",param_1);
  _Memory = operator_new(0x300000);
  puVar8 = _Memory;
  for (iVar3 = 0xc0000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *_Memory = 1;
  puVar8 = *(undefined4 **)(param_1 + 0x84);
  puVar7 = _Memory + 2;
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x84) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x88);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x88) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x8c);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x8c) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x90);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x90) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0xa8);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0xa8) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x94);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x94) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x98);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x98) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x9c);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0x9c) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0xa0);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0xa0) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  puVar8 = *(undefined4 **)(param_1 + 0xa4);
  if (puVar8 != (undefined4 *)0x0) {
    uVar5 = puVar8[1];
    puVar9 = puVar7;
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
    puVar7 = (undefined4 *)((int)puVar7 + *(int *)(*(int *)(param_1 + 0xa4) + 4));
    _Memory[1] = _Memory[1] + 1;
  }
  piVar2 = *(int **)(param_1 + 0x70);
  if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (local_138 = 0, 0 < *piVar2)) {
    local_13c = 0;
    puVar8 = puVar7;
    do {
      puVar8[1] = 0x44;
      *puVar8 = 0xb;
      iVar3 = piVar2[1] + local_13c;
      puVar7 = puVar8 + 0x11;
      _sprintf((char *)(puVar8 + 3),(char *)(iVar3 + 4));
      puVar8[0xe] = *(undefined4 *)(iVar3 + 0x84);
      puVar8[0xf] = *(undefined4 *)(iVar3 + 0x7c);
      puVar8[0x10] = *(undefined4 *)(iVar3 + 0x80);
      puVar8[0xb] = *(undefined4 *)(iVar3 + 0x70);
      puVar8[0xc] = *(undefined4 *)(iVar3 + 0x74);
      puVar8[0xd] = *(undefined4 *)(iVar3 + 0x78);
      _Memory[1] = _Memory[1] + 1;
      local_138 = local_138 + 1;
      local_13c = local_13c + 0x90;
      puVar8 = puVar7;
    } while (local_138 < *piVar2);
  }
  FUN_00a60930();
  FUN_00a628d0(&local_10c);
  local_12c = local_120;
  pcVar6 = (char *)&local_10c;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar6 - ((int)&local_10c + 1);
  if (0x13 < uVar5) {
    local_124 = uVar5 + 0x20 & 0xffffffe0;
    local_12c = _malloc(local_124);
  }
  _strncpy(local_12c,(char *)&local_10c,uVar5);
  local_12c[uVar5] = '\0';
  local_4 = 0;
  local_128 = uVar5;
  FUN_009d4370(&local_12c,_Memory,(int)puVar7 - (int)_Memory);
  local_4 = 0xffffffff;
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  FUN_00a62390(&local_10c,-1);
  FUN_00a62130();
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a4a030 @ 00a4a030 ////

void __thiscall FUN_00a4a030(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 0x9c) == 0) {
    puVar1 = operator_new(0x10);
    *(undefined4 **)((int)this + 0x9c) = puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    **(undefined4 **)((int)this + 0x9c) = 9;
    *(undefined4 *)(*(int *)((int)this + 0x9c) + 4) = 0x10;
  }
  *(undefined4 *)(*(int *)((int)this + 0x9c) + 0xc) = param_1;
  FUN_00a49ab0((int)this);
  return;
}


//// FUNCTION FUN_00a4a090 @ 00a4a090 ////

void __cdecl
FUN_00a4a090(char *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack00000020;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfadb8;
  local_c = ExceptionList;
  uStack00000020 = 0;
  ExceptionList = &local_c;
  puVar2 = operator_new(0xa0);
  puVar5 = puVar2;
  for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = puVar2;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)puVar2 + 0x1f) = 0;
  puVar2[8] = param_6;
  puVar2[9] = param_7;
  puVar2[10] = uStack00000020;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0x3f800000;
  puVar2[0xe] = 0x3f800000;
  puVar2[0xf] = 0;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_7;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0x3f800000;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = param_3;
  puVar2[0x19] = param_4;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0x3f800000;
  puVar2[0x1f] = 0x3f800000;
  puVar2[0x1e] = 0;
  puVar2[0x20] = param_6;
  puVar2[0x21] = param_4;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  uStack00000020 = 0x3f800000;
  puVar2[0x25] = 0x3f800000;
  puVar2[0x27] = 0x3f800000;
  puVar2[0x26] = 0x3f800000;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_009d4370(&local_2c,puVar2,0xa0);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a4a2d0 @ 00a4a2d0 ////

/* WARNING: Removing unreachable block (ram,0x00a4aa88) */
/* WARNING: Removing unreachable block (ram,0x00a4a847) */
/* WARNING: Removing unreachable block (ram,0x00a4a853) */
/* WARNING: Removing unreachable block (ram,0x00a4a8c4) */
/* WARNING: Removing unreachable block (ram,0x00a4a8d1) */
/* WARNING: Removing unreachable block (ram,0x00a4a8e8) */
/* WARNING: Removing unreachable block (ram,0x00a4a8ea) */
/* WARNING: Removing unreachable block (ram,0x00a4a915) */
/* WARNING: Removing unreachable block (ram,0x00a4a91c) */
/* WARNING: Removing unreachable block (ram,0x00a4a924) */
/* WARNING: Removing unreachable block (ram,0x00a4a93e) */
/* WARNING: Removing unreachable block (ram,0x00a4a984) */
/* WARNING: Removing unreachable block (ram,0x00a4a991) */

void __fastcall FUN_00a4a2d0(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  float fVar3;
  int *piVar4;
  void *this;
  char *pcVar5;
  undefined1 *this_00;
  LONG LVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  float *pfVar11;
  float10 fVar12;
  float afStack_918 [4];
  undefined1 uStack_905;
  undefined4 uStack_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  int iStack_8e8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float fStack_8c8;
  undefined4 uStack_8c4;
  undefined1 *puStack_8c0;
  float fStack_8bc;
  float fStack_8b8;
  float afStack_8b4 [3];
  undefined4 *puStack_8a8;
  undefined4 uStack_8a0;
  int iStack_89c;
  undefined1 *puStack_890;
  float fStack_884;
  int *local_874;
  int local_870;
  float afStack_868 [4];
  float fStack_858;
  float fStack_854;
  float fStack_850;
  float fStack_84c;
  float fStack_848;
  float fStack_844;
  float fStack_840;
  float fStack_83c;
  char acStack_440 [1024];
  void *pvStack_40;
  int iStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cfae07;
  pvStack_c = ExceptionList;
  iStack_8e8 = 0xa4a2fa;
  ExceptionList = &pvStack_c;
  local_870 = param_1;
  piVar4 = FUN_00433eb0();
  uStack_8ec = 0xa4a309;
  iStack_8e8 = param_1;
  local_874 = piVar4;
  (**(code **)(*piVar4 + 0x18))();
  fStack_8d0 = *(float *)(param_1 + 0x28);
  bVar1 = true;
  if (0 < (int)fStack_8d0) {
    piVar9 = *(int **)(param_1 + 0x2c);
    do {
      fStack_8d4 = *(float *)*piVar9;
      if (0 < (int)fStack_8d4) {
        piVar10 = (int *)((float *)*piVar9)[1];
        do {
          iVar8 = *(int *)(*piVar10 + 0x2c);
          if (0 < iVar8) {
            pfVar7 = *(float **)(*piVar10 + 0x30);
            do {
              if (bVar1) {
                fStack_8c8 = *pfVar7;
                uStack_8c4 = pfVar7[1];
                puStack_8c0 = (undefined1 *)pfVar7[2];
                fStack_8bc = *pfVar7;
                fStack_8b8 = pfVar7[1];
                afStack_8b4[0] = pfVar7[2];
                bVar1 = false;
              }
              else {
                if (*pfVar7 < fStack_8c8) {
                  fStack_8c8 = *pfVar7;
                }
                if (pfVar7[1] < uStack_8c4) {
                  uStack_8c4 = pfVar7[1];
                }
                if (pfVar7[2] < (float)puStack_8c0) {
                  puStack_8c0 = (undefined1 *)pfVar7[2];
                }
                if (fStack_8bc < *pfVar7) {
                  fStack_8bc = *pfVar7;
                }
                if (fStack_8b8 < pfVar7[1]) {
                  fStack_8b8 = pfVar7[1];
                }
                if (afStack_8b4[0] < pfVar7[2]) {
                  afStack_8b4[0] = pfVar7[2];
                }
              }
              pfVar7 = pfVar7 + 8;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          piVar10 = piVar10 + 1;
          fStack_8d4 = (float)((int)fStack_8d4 + -1);
        } while (fStack_8d4 != 0.0);
      }
      piVar9 = piVar9 + 1;
      fStack_8d0 = (float)((int)fStack_8d0 + -1);
    } while (fStack_8d0 != 0.0);
  }
  puStack_890 = (undefined1 *)afStack_918;
  fStack_8d0 = -(fStack_8b8 + uStack_8c4) * 0.5;
  fStack_884 = -(fStack_8bc + fStack_8c8) * 0.5;
  fStack_8d4 = 1.0 / ((afStack_8b4[0] - (float)puStack_8c0) * 0.5);
  fStack_8cc = 1.0 / ((fStack_8b8 - uStack_8c4) * 0.5);
  fStack_848 = fStack_8d4;
  afStack_868[0] = 1.0 / ((fStack_8bc - fStack_8c8) * 0.5);
  fStack_858 = fStack_8cc;
  afStack_868[3] = afStack_868[0] * 0.0;
  fStack_850 = afStack_868[0] * 0.0;
  fStack_844 = fStack_884 * afStack_868[0];
  afStack_868[1] = fStack_8cc * 0.0;
  fStack_84c = fStack_8cc * 0.0;
  fStack_840 = fStack_8d0 * fStack_8cc;
  afStack_868[2] = fStack_8d4 * 0.0;
  fStack_854 = fStack_8d4 * 0.0;
  fStack_83c = -(afStack_8b4[0] + (float)puStack_8c0) * 0.5 * fStack_8d4;
  pfVar7 = afStack_868;
  pfVar11 = afStack_918;
  for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar11 = pfVar11 + 1;
  }
  (**(code **)(*piVar4 + 0x24))();
  uStack_905 = DAT_00e67b8c;
  DAT_00e67b8c = 0;
  FUN_009a2270(afStack_868);
  iStack_38._0_1_ = 0;
  iStack_38._1_3_ = 0;
  FUN_009a1bf0(&DAT_0105c3a8);
  FUN_009a6fb0('\x01');
  puStack_8c0 = &stack0xfffff6e4;
  fVar12 = FUN_004012c0(0.052359883);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar12);
  FUN_009a6070(&DAT_0105c2e8,38.0);
  puStack_8c0 = (undefined1 *)0x0;
  fStack_8bc = 0.0;
  fStack_8b8 = 0.0;
  afStack_8b4[0] = 0.0;
  afStack_8b4[1] = -0.001;
  afStack_8b4[2] = 40.0;
  FUN_009a2830(&DAT_0105c2e8,afStack_8b4,(float *)&puStack_8c0,0.0);
  piVar4[0x27] = piVar4[0x27] | 0x40;
  iVar8 = 2;
  do {
    puStack_8c0 = &stack0xfffff6e0;
    FUN_009a56b0(0,'\x01');
    FUN_009a4f10();
    DAT_0105eae8 = 1;
    FUN_0097e5e0(piVar4);
    (**(code **)(*piVar4 + 8))();
    DAT_0105eae8 = 0;
    FUN_009a4fb0();
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  this = FUN_0099bb50("",-2,0x200,0x200,'\0');
  puStack_8c0 = &stack0xfffff6e4;
  FUN_009a56e0((int)this);
  puStack_8c0 = (undefined1 *)0x0;
  fStack_8bc = 0.0;
  MediaPlayer_LockVideoBuffer(this,&puStack_8c0);
  fVar3 = fStack_8bc;
  if (fStack_8bc != 0.0) {
    iVar8 = 0;
    do {
      if (*(int *)((int)fStack_8bc + iVar8 * 4) == 0) {
        *(undefined4 *)((int)fStack_8bc + iVar8 * 4) = 0x10101;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40000);
    pcVar5 = (char *)((int)fStack_8bc + 3);
    iVar8 = 0x40000;
    do {
      if (*pcVar5 != '\0') {
        *pcVar5 = -1;
      }
      pcVar5 = pcVar5 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_00a493c0((int)fStack_8bc);
    FUN_00a493c0((int)fVar3);
    FUN_00a493c0((int)fVar3);
  }
  MediaPlayer_UnlockVideoBuffer((int)this);
  this_00 = FUN_0099bb50("thumb_costume",0x33545844,0x200,0x200,'\0');
  puStack_8c0 = this_00;
  FUN_0099a9b0(this_00,0,(uint)this,0);
  if (this != (void *)0x0) {
    FUN_0099b400(this);
  }
  _sprintf((char *)&fStack_840,"data\\Textures\\bp%c%s.dds");
  uStack_8a0 = 0;
  iStack_89c = 0;
  MediaPlayer_LockVideoBuffer(this_00,&uStack_8a0);
  if (iStack_89c != 0) {
    fStack_8d4 = (float)((uint)fStack_8d4 & 0xffffff00);
    pcVar5 = _malloc(0x40);
    _strncpy(pcVar5,"Data\\Textures\\BluePrint\\blp_building.dds",0x28);
    pcVar5[0x28] = '\0';
    iStack_38._0_1_ = 1;
    FUN_009d3720((undefined4 *)&stack0xfffff720);
    iStack_38._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
    _free(pcVar5);
  }
  MediaPlayer_UnlockVideoBuffer((int)this_00);
  if (this_00 != (undefined1 *)0x0) {
    FUN_0099b400(this_00);
  }
  DAT_00e67b8c = uStack_905;
  afStack_8b4[0] = 7100.0;
  afStack_8b4[1] = -9300.0;
  afStack_8b4[2] = 14800.0;
  FUN_009a1bf0(afStack_8b4);
  LVar6 = InterlockedDecrement(puStack_8a8 + 4);
  uVar2 = DAT_0105b588;
  if (LVar6 == 0) {
    DAT_0105b588 = 1;
    uStack_905 = uVar2;
    (**(code **)*puStack_8a8)();
    DAT_0105b588 = uStack_905;
  }
  FUN_009a6fb0('\0');
  fStack_8d4 = (float)((uint)fStack_8d4 & 0xffffff00);
  _strncpy((char *)&fStack_8d4,"Tools\\BlpBinFiles\\",0x12);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_8c4._2_1_ = 0;
  iStack_38._0_1_ = 4;
  FUN_009b9360(&stack0xfffff720);
  iStack_38 = (uint)iStack_38._1_3_ << 8;
  _sprintf(acStack_440,"Tools\\BlpBinFiles\\%s.bin");
  _sprintf((char *)&fStack_840,"bp%c%s.dds");
  puStack_8a8 = (undefined4 *)&stack0xfffff6d0;
  FUN_00a4a090(acStack_440,&fStack_840,uStack_8f8,uStack_8f4,uStack_8f0,uStack_8ec,iStack_8e8);
  iStack_38 = 0xffffffff;
  FUN_009a2da0(afStack_868);
  ExceptionList = pvStack_40;
  return;
}


//// FUNCTION FUN_00a4ae60 @ 00a4ae60 ////

void __fastcall FUN_00a4ae60(char *param_1)

{
  char cVar1;
  int *piVar2;
  void *this;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_c;
  int local_8;
  char *local_4;
  
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar8 = 0;
    do {
      pcVar5 = *(char **)(*(int *)(param_1 + 0x34) + 0x1c + iVar8);
      if ((pcVar5 != (char *)0x0) &&
         (iVar3 = _strncmp(pcVar5,(char *)&PTR_LAB_00d71474,3), iVar3 == 0)) {
        pcVar4 = pcVar5;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar3 = (int)pcVar4 - (int)(pcVar5 + 1);
        if (((6 < iVar3) && (pcVar5[iVar3 + -6] == '_')) && (pcVar5[iVar3 + -5] == '0')) {
          *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 0x8000;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x24;
    } while (iVar7 < *(int *)(param_1 + 0x30));
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + local_8 * 4);
      piVar2[0xb] = local_8;
      local_c = 0;
      iVar7 = DAT_0105ca7c;
      if (0 < *piVar2) {
        do {
          this = *(void **)(piVar2[1] + local_c * 4);
          if (*(char *)(*(int *)(param_1 + 0x34) + 0xc + (*(uint *)((int)this + 8) & 0xff) * 0x24)
              == '\x16') {
            *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0x1000;
            iVar7 = DAT_0105ca7c;
          }
          iVar8 = *(int *)(param_1 + 0x34) + (*(uint *)((int)this + 8) & 0xff) * 0x24;
          if (((*(char *)(iVar8 + 0x10) != '\0') || (*(char *)(iVar8 + 0x11) != '\0')) ||
             (*(char *)(iVar8 + 0x12) != '\0')) {
            for (uVar6 = 0; (iVar7 != 0 && (uVar6 < (uint)((int)DAT_0105ca80 - iVar7 >> 2)));
                uVar6 = uVar6 + 1) {
              if (*(char **)(iVar7 + uVar6 * 4) == param_1) goto LAB_00a4afc5;
            }
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            local_4 = param_1;
            if ((DAT_0105ca7c == 0) ||
               ((uint)(DAT_0105ca84 - DAT_0105ca7c >> 2) <=
                (uint)((int)DAT_0105ca80 - DAT_0105ca7c >> 2))) {
              FUN_00490b50(&DAT_0105ca78,DAT_0105ca80,1,&local_4);
              iVar7 = DAT_0105ca7c;
            }
            else {
              *DAT_0105ca80 = param_1;
              iVar7 = DAT_0105ca7c;
              DAT_0105ca80 = DAT_0105ca80 + 1;
            }
          }
LAB_00a4afc5:
          if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x14 + (*(uint *)((int)this + 8) & 0xff) * 0x24)
              & 0x80) != 0) {
            FUN_00a70e20(this,(int)param_1);
            *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 0x400000;
            iVar7 = DAT_0105ca7c;
          }
          local_c = local_c + 1;
        } while (local_c < *piVar2);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x28));
  }
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar7 = _strncmp(param_1,"generic_head.msh",(int)pcVar5 - (int)(param_1 + 1));
  if (iVar7 == 0) {
    FUN_009da710(param_1,(wchar_t *)"head_m_white_joe.hd",(char *)0x0,(IAtlStringMgr *)0x0);
    FUN_00a48c50((void *)**(undefined4 **)(**(int **)(param_1 + 0x2c) + 4),0xc,0x10b9488);
    FUN_00a17040(param_1);
    FUN_00a48f10(param_1,0);
  }
  FUN_00a72d60(param_1,(int *)0x0);
  return;
}


//// FUNCTION FUN_00a4b0e0 @ 00a4b0e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_00a4b0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _DAT_0105bdd0 = param_1;
  _DAT_0105bdd4 = param_2;
  _DAT_0105bdd8 = param_3;
  _DAT_0105bddc = param_4;
  return;
}


//// FUNCTION FUN_00a4b170 @ 00a4b170 ////

void FUN_00a4b170(char *param_1)

{
  int iVar1;
  float fVar2;
  float *_Memory;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  float *local_c;
  
  _Memory = operator_new(0x100000);
  pcVar3 = param_1 + 0x3fe00;
  iVar6 = 0x200;
  pcVar4 = param_1;
  do {
    pcVar3[-0x3fe00] = -1;
    *pcVar3 = -1;
    *pcVar4 = -1;
    pcVar4[0x1ff] = -1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 0x200;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = 0;
  local_14 = -0xa00;
  local_c = _Memory;
  do {
    local_18 = 0;
    do {
      local_1c = 100000.0;
      iVar7 = -5;
      iVar6 = local_14;
      do {
        local_10 = -5;
        iVar1 = iVar7 + local_20;
        iVar5 = local_18 + -5;
        do {
          if ((((-1 < iVar1) && (iVar1 < 0x200)) && (-1 < iVar5)) &&
             (((iVar5 < 0x200 && (param_1[iVar5 + iVar6] != '\0')) &&
              (fVar2 = SQRT((float)local_10 * (float)local_10 +
                            (float)(iVar1 - local_20) * (float)(iVar1 - local_20)), fVar2 < local_1c
              )))) {
            local_1c = fVar2;
          }
          local_10 = local_10 + 1;
          iVar5 = iVar5 + 1;
        } while (local_10 < 6);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0x200;
      } while (iVar7 < 6);
      *local_c = local_1c;
      local_18 = local_18 + 1;
      local_c = local_c + 1;
    } while (local_18 < 0x200);
    local_14 = local_14 + 0x200;
    local_20 = local_20 + 1;
  } while (local_14 < 0x3f600);
  iVar6 = 0x200;
  pfVar8 = _Memory;
  do {
    iVar7 = 0x200;
    do {
      if (5.0 <= *pfVar8) {
        *param_1 = -1;
      }
      else {
        uVar9 = FUN_00acd42c();
        *param_1 = -1 - (char)uVar9;
      }
      pfVar8 = pfVar8 + 1;
      param_1 = param_1 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a4b420 @ 00a4b420 ////

undefined4 * __thiscall FUN_00a4b420(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  undefined4 local_110;
  int local_10c;
  int local_108;
  char local_100 [256];
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 8) = param_1;
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  *(void **)((int)this + 0x10) = DAT_010bb294;
  iVar10 = 0;
  DAT_010bb294 = this;
  *(undefined4 *)this = 1;
  iVar5 = FUN_0097e350(*(void **)((int)this + 8),0);
  if ((iVar5 != 0) && (iVar4 = *(int *)(iVar5 + 0xa0), iVar4 != 0)) {
    puVar6 = FUN_0040a690(*(uint *)(iVar4 + 0x10),'\x01');
    *(undefined4 **)((int)this + 0xc) = puVar6;
    puVar6[6] = DAT_010b7058;
    FUN_0099a220(*(void **)((int)this + 0xc),8);
    if (0 < *(int *)(iVar4 + 0x10)) {
      local_110 = 2.3509886e-38;
      local_10c = 0;
      local_108 = 0;
      do {
        pfVar11 = (float *)(*(int *)(*(int *)((int)this + 0xc) + 0x20) + local_108);
        pfVar7 = (float *)(*(int *)(iVar4 + 0x24) + local_10c);
        *pfVar11 = *pfVar7;
        pfVar11[1] = pfVar7[1];
        pfVar11[2] = pfVar7[2];
        fVar1 = *pfVar11;
        iVar8 = *(int *)((int)this + 8);
        fVar2 = pfVar11[1];
        fVar3 = pfVar11[2];
        *pfVar11 = fVar1 * *(float *)(iVar8 + 0x18) +
                   fVar2 * *(float *)(iVar8 + 0x24) + fVar3 * *(float *)(iVar8 + 0x30) +
                   *(float *)(iVar8 + 0x3c);
        pfVar11[1] = fVar1 * *(float *)(iVar8 + 0x1c) +
                     fVar2 * *(float *)(iVar8 + 0x28) + fVar3 * *(float *)(iVar8 + 0x34) +
                     *(float *)(iVar8 + 0x40);
        pfVar11[2] = fVar1 * *(float *)(iVar8 + 0x20) +
                     fVar2 * *(float *)(iVar8 + 0x2c) + fVar3 * *(float *)(iVar8 + 0x38) +
                     *(float *)(iVar8 + 0x44);
        pfVar11[9] = *(float *)(*(int *)(iVar4 + 0x28) + iVar10 * 4);
        fVar12 = FUN_00990e30(-3.1415927,3.1415927);
        pfVar11[10] = (float)fVar12;
        iVar8 = FUN_00990d30(0,0xf);
        *(char *)(pfVar11 + 0xc) = (char)iVar8;
        iVar8 = FUN_00990d30(-0x14,0x14);
        iVar8 = iVar8 + 0x40;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (0xff < iVar8) {
          iVar8 = 0xff;
        }
        local_110 = (float)CONCAT13((char)iVar8,(undefined3)local_110);
        pfVar11[0xb] = local_110;
        iVar10 = iVar10 + 1;
        local_108 = local_108 + 0x34;
        local_10c = local_10c + 0xc;
      } while (iVar10 < *(int *)(iVar4 + 0x10));
    }
    _sprintf(local_100,"fog%s.dds",iVar5 + 3);
    pvVar9 = FUN_0099bb50(local_100,0,0,0,'\0');
    *(void **)((int)this + 0x18) = pvVar9;
  }
  return this;
}


//// FUNCTION FUN_00a4b610 @ 00a4b610 ////

void __fastcall FUN_00a4b610(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  iVar5 = DAT_010bb294;
  if (DAT_010bb294 != param_1) {
    do {
      iVar4 = iVar5;
      iVar5 = *(int *)(iVar4 + 0x10);
    } while (iVar5 != param_1);
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      return;
    }
  }
  DAT_010bb294 = *(undefined4 *)(iVar5 + 0x10);
  return;
}


//// FUNCTION FUN_00a4b6d0 @ 00a4b6d0 ////

void __fastcall FUN_00a4b6d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (((*(byte *)(*(int *)(param_1 + 0x18) + 0x54) & 8) != 0) &&
     (*(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe,
     *(int *)(param_1 + 0xc) != 0)) {
    iVar2 = FUN_0097e350(*(void **)(param_1 + 8),0);
    if ((iVar2 != 0) &&
       ((iVar2 = *(int *)(iVar2 + 0xa0), iVar2 != 0 &&
        (*(uint *)(iVar2 + 0x10) == (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x1c))))) {
      FUN_00a4b0e0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),
                   *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20));
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
      if (*(int *)((int)DAT_010b7058 + 0x1c) != *(int *)(param_1 + 0x18)) {
        FUN_00994bc0(DAT_010b7058,*(int *)(param_1 + 0x18));
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + 0x48);
      puVar6 = &DAT_00e67720;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      FUN_00996020(*(int *)(param_1 + 0xc));
      iVar2 = *(int *)(param_1 + 4) + DAT_0105becc;
      *(int *)(param_1 + 4) = iVar2;
      if (0x6e < iVar2) {
        iVar2 = 0;
        if (*(short *)(*(int *)(param_1 + 0xc) + 0x1c) != 0) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x20);
            iVar3 = (*(uint *)(iVar1 + 0x30 + iVar4) & 0xff) + 1;
            if (iVar3 == 0x10) {
              iVar3 = 0;
            }
            *(char *)(iVar1 + iVar4 + 0x30) = (char)iVar3;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0x34;
          } while (iVar2 < (int)(uint)*(ushort *)(*(int *)(param_1 + 0xc) + 0x1c));
        }
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a4c1a0 @ 00a4c1a0 ////

undefined4 * __cdecl FUN_00a4c1a0(void *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfae9b;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    iVar1 = FUN_0097e350(param_1,0);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe4) & 0x40) != 0)) && (*(int *)(iVar1 + 0xa0) != 0))
    {
      this = operator_new(0x1c);
      local_4 = 0;
      if (this != (void *)0x0) {
        puVar2 = FUN_00a4b420(this,(int)param_1);
        ExceptionList = local_c;
        return puVar2;
      }
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a4c230 @ 00a4c230 ////

void * __thiscall FUN_00a4c230(void *this,byte param_1)

{
  FUN_00a4b610((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a4c250 @ 00a4c250 ////

void __fastcall FUN_00a4c250(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 == 0) {
    FUN_00a4b610((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a4c270 @ 00a4c270 ////

undefined2 __thiscall FUN_00a4c270(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort in_AX;
  
  if (*(int *)this != 0) {
LAB_00a4c302:
    return CONCAT11((char)(in_AX >> 8),1);
  }
  fVar1 = *(float *)((int)this + 0x34) * 0.5;
  fVar4 = *(float *)((int)this + 0x38) * 0.5;
  fVar3 = param_2 + *param_1;
  fVar2 = -fVar1;
  in_AX = (ushort)(fVar2 < fVar3) << 8 | (ushort)(NAN(fVar2) || NAN(fVar3)) << 10 |
          (ushort)(fVar2 == fVar3) << 0xe;
  if (fVar2 < fVar3 || (fVar2 == fVar3) != 0) {
    fVar2 = *param_1 - param_2;
    in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      fVar1 = param_2 + param_1[1];
      fVar2 = -fVar4;
      in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
        fVar1 = param_1[1] - param_2;
        in_AX = (ushort)(fVar1 < fVar4) << 8 | (ushort)(NAN(fVar1) || NAN(fVar4)) << 10 |
                (ushort)(fVar1 == fVar4) << 0xe;
        if (fVar1 < fVar4 || (fVar1 == fVar4) != 0) {
          fVar1 = param_2 + param_1[2];
          in_AX = (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                  (ushort)(fVar1 == 0.0) << 0xe;
          if (fVar1 >= 0.0) {
            fVar2 = param_1[2] - param_2;
            fVar1 = *(float *)((int)this + 0x3c);
            in_AX = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                    (ushort)(fVar2 == fVar1) << 0xe;
            if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) goto LAB_00a4c302;
          }
        }
      }
    }
  }
  return in_AX;
}


//// FUNCTION FUN_00a4c370 @ 00a4c370 ////

void __thiscall FUN_00a4c370(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStackY_74 [8];
  undefined4 uStackY_54;
  
  if ((param_1 != (float *)0x0) && (*(int *)this == 0)) {
    if (DAT_010bb29c == (byte *)0x0) {
      DAT_010bb29c = FUN_009de1d0("ShapeBox.msh",1);
    }
    if (DAT_010bb2a0 == (int *)0x0) {
      DAT_010bb2a0 = FUN_00433eb0();
    }
    (**(code **)(*DAT_010bb2a0 + 0x18))();
    fVar1 = *(float *)((int)this + 0x3c);
    fVar2 = *(float *)((int)this + 0x38);
    puVar5 = (undefined4 *)&stack0xffffffcc;
    puVar4 = this;
    for (iVar3 = 0xc; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar5 = puVar5 + 1;
    }
    uStackY_54 = 0xa4c3ef;
    FUN_00527c00(&stack0xffffffcc,*(float *)((int)this + 0x34),fVar2,fVar1);
    FUN_009aa830(&stack0xffffffcc,param_1);
    puVar4 = (undefined4 *)&stack0xffffffcc;
    puVar5 = auStackY_74;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(*DAT_010bb2a0 + 0x24))();
    (**(code **)(*DAT_010bb2a0 + 8))();
  }
  return;
}


//// FUNCTION FUN_00a4c630 @ 00a4c630 ////

void FUN_00a4c630(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_40 [16];
  
  if (DAT_01059364 != 0x20000) {
    DAT_01059364 = 0x20000;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0xb,0x20000);
  }
  puVar2 = &DAT_0105c328;
  puVar3 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00990f90(local_40,DAT_00e69488);
  (**(code **)(*g_pDirect3DDevice + 0xb0))(g_pDirect3DDevice,0x10,local_40);
  if (DAT_01059398 != 2) {
    DAT_01059398 = 2;
    (**(code **)(*g_pDirect3DDevice + 0x10c))(g_pDirect3DDevice,0,0x18,2);
  }
  if (DAT_01058f14 != 1) {
    DAT_01058f14 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,1,1);
  }
  if (DAT_01058f18 != 1) {
    DAT_01058f18 = 1;
    (**(code **)(*g_pDirect3DDevice + 0x114))(g_pDirect3DDevice,0,2,1);
  }
  return;
}


//// FUNCTION FUN_00a4c710 @ 00a4c710 ////

void __thiscall
FUN_00a4c710(void *this,undefined4 param_1,undefined4 *param_2,byte param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_34;
  int local_30 [3];
  undefined1 local_24;
  uint local_20;
  undefined4 uStack_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaed8;
  local_c = ExceptionList;
  if (param_2 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_009a1480(&DAT_0105c2e8,param_2,'\x01');
    FUN_009910f0(local_30);
    iVar2 = param_4;
    local_4 = 0;
    if (param_4 == 0) {
      local_24 = 1;
    }
    else {
      local_24 = 6;
      if (local_18 != param_4) {
        Engine_SetResourceReference(local_30,param_4);
      }
    }
    local_20 = (param_3 & 1) << 0x1e | local_20 & 0xbeffffff | 0x2000000;
    LH_ApplyMeshMaterial(local_30);
    if (iVar2 != 0) {
      FUN_00a4c630();
    }
    param_3 = 1;
    local_34 = 0;
    puVar1 = (undefined4 *)FUN_00a3ac00(*(int **)this,(int)&local_34);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = 0;
      if (0 < *(int *)this) {
        iVar6 = 0;
        do {
          puVar7 = (undefined4 *)(*(int *)((int)this + 8) + iVar6);
          *puVar1 = *puVar7;
          puVar1[1] = puVar7[1];
          puVar1[2] = puVar7[2];
          puVar1[3] = param_1;
          puVar1 = puVar1 + 4;
          iVar2 = iVar2 + 1;
          iVar6 = iVar6 + 0xc;
        } while (iVar2 < *(int *)this);
      }
      FUN_00a3a4e0();
      param_2 = (undefined4 *)0x0;
      if ((DAT_010bb234 == (int *)0x0) ||
         (puVar1 = (undefined4 *)
                   FUN_00a3a530(DAT_010bb234,*(int *)((int)this + 4) * 3,(int *)&param_2),
         puVar1 == (undefined4 *)0x0)) {
        param_3 = 0;
      }
      else {
        uVar3 = *(int *)((int)this + 4) * 6;
        puVar7 = *(undefined4 **)((int)this + 0xc);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar1 = puVar1 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar1 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar1 = (undefined4 *)((int)puVar1 + 1);
        }
      }
      if (DAT_010bb234 != (int *)0x0) {
        FUN_00a3a5d0(DAT_010bb234);
      }
      if (param_3 != 0) {
        (**(code **)(*g_pDirect3DDevice + 0x164))(g_pDirect3DDevice,0x42);
        if (DAT_010bb230 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(DAT_010bb230 + 4);
        }
        uVar8 = 0;
        (**(code **)(*g_pDirect3DDevice + 400))(g_pDirect3DDevice,0,uVar5,0,0x10);
        if (DAT_010bb234 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *DAT_010bb234;
        }
        (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,iVar2);
        (**(code **)(*g_pDirect3DDevice + 0x148))
                  (g_pDirect3DDevice,4,uVar8,0,*(undefined4 *)this,uStack_1c,
                   *(undefined4 *)((int)this + 4));
      }
    }
    local_4 = 0xffffffff;
    FUN_00990ec0((int)local_30);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a4c910 @ 00a4c910 ////

undefined1 __fastcall FUN_00a4c910(int param_1)

{
  return *(undefined1 *)(param_1 + 0x34);
}


//// FUNCTION FUN_00a4c920 @ 00a4c920 ////

int __thiscall FUN_00a4c920(void *this,int *param_1)

{
  int iVar1;
  
  if ((*(char *)((int)this + 0x34) != '\0') && (*(int *)((int)this + 0x38) != 0)) {
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0x58);
      *param_1 = iVar1;
      return iVar1;
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x38) + 0x6c);
    *param_1 = iVar1;
    return iVar1;
  }
  return 0;
}


//// FUNCTION FUN_00a4c990 @ 00a4c990 ////

int __cdecl FUN_00a4c990(int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  
  FUN_009803f0(param_1);
  piVar2 = (int *)(*(int *)(param_1 + 0x100) + 4);
  if (*(int *)(*(int *)(param_1 + 0x100) + 4) == 0) {
    puVar1 = operator_new(0x3c);
    if (puVar1 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar1 + 0x30) = 0;
      *(undefined4 *)(puVar1 + 0x2c) = 0;
      *(undefined4 *)(puVar1 + 0x28) = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      *(undefined4 *)(puVar1 + 0x1c) = 0;
      *(undefined4 *)(puVar1 + 0x18) = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0x24) = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
      *piVar2 = (int)puVar1;
      *puVar1 = 0;
      *(undefined1 *)(*piVar2 + 0x34) = 0;
      return *piVar2;
    }
    *piVar2 = 0;
    DAT_00000000 = 0;
    *(undefined1 *)(*piVar2 + 0x34) = 0;
  }
  return *piVar2;
}


//// FUNCTION FUN_00a4ca10 @ 00a4ca10 ////

void __cdecl FUN_00a4ca10(void *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_30 [12];
  
  if (*(int *)((int)param_1 + 0x40) != 0) {
    pfVar1 = (float *)FUN_00a4c990(*(int *)((int)param_1 + 0x40));
    pfVar2 = FUN_00a3c9c0(param_1,local_30);
    pfVar4 = pfVar1;
    for (iVar3 = 0xc; pfVar4 = pfVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar2;
      pfVar2 = pfVar2 + 1;
    }
    *(undefined1 *)pfVar1 = 1;
  }
  return;
}


//// FUNCTION FUN_00a4ca50 @ 00a4ca50 ////

void __cdecl FUN_00a4ca50(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a4c990(param_1);
    *(int *)(iVar1 + 0x38) = param_2;
    *(undefined1 *)(iVar1 + 0x34) = 1;
    return;
  }
  if ((*(int *)(param_1 + 0x100) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x100) + 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x34) = 0;
  }
  return;
}


//// FUNCTION FUN_00a4ca90 @ 00a4ca90 ////

byte __fastcall FUN_00a4ca90(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return 4;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      return 9;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      return 4;
    }
  }
  return -(*(int *)(param_1 + 0x14) != 0) & 7;
}


//// FUNCTION FUN_00a4caf0 @ 00a4caf0 ////

void __thiscall FUN_00a4caf0(void *this,undefined4 *param_1)

{
  *(undefined1 *)((int)this + 0xc) = 0xff;
  *(undefined1 *)((int)this + 0xd) = 0xff;
  *(undefined1 *)((int)this + 0xe) = 0xff;
  *(undefined1 *)((int)this + 0xf) = 0xff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = param_1[6];
  *(undefined4 *)((int)this + 0x14) = param_1[7];
  return;
}


//// FUNCTION FUN_00a4cb40 @ 00a4cb40 ////

void __fastcall FUN_00a4cb40(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
LAB_00a4cb46:
    FUN_008d9510(4);
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_008d9510(9);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_00a4cb46;
  }
  FUN_008d9510(-(uint)(*(int *)(param_1 + 0x14) != 0) & 7);
  return;
}


//// FUNCTION FUN_00a4cb90 @ 00a4cb90 ////

void __fastcall FUN_00a4cb90(int param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
LAB_00a4cb96:
    FUN_008d9580(4);
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_008d9580(9);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_00a4cb96;
  }
  FUN_008d9580(-(uint)(*(int *)(param_1 + 0x14) != 0) & 7);
  return;
}


//// FUNCTION FUN_00a4cbe0 @ 00a4cbe0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00a4cbe0(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_3c = *param_1;
  local_38 = param_1[1];
  local_34 = param_1[2];
  local_30 = *param_2;
  local_2c = param_2[1];
  local_28 = param_2[2];
  iVar3 = *(int *)((int)this + 0x60);
  if (0 < iVar3) {
    pfVar4 = (float *)((int)this + 0x2c);
    do {
      fVar1 = (local_3c - pfVar4[-3]) * (local_3c - pfVar4[-3]) +
              (local_38 - pfVar4[-2]) * (local_38 - pfVar4[-2]) +
              (local_34 - pfVar4[-1]) * (local_34 - pfVar4[-1]);
      if (fVar1 < *pfVar4 * *pfVar4) {
        fVar1 = 1.0 - SQRT(fVar1) / *pfVar4;
        local_24 = *param_1 - pfVar4[-3];
        local_20 = param_1[1] - pfVar4[-2];
        local_1c = (param_1[2] - pfVar4[-1]) * 0.25;
        FUN_00412e20(&local_24);
        fVar2 = _DAT_00e69490 * *pfVar4 * fVar1;
        local_14 = local_20 * fVar2;
        local_10 = fVar2 * local_1c;
        local_3c = local_24 * fVar2 + local_3c;
        local_38 = local_14 + local_38;
        fVar5 = (float10)fsin((float10)(fVar1 * 25.132742));
        local_34 = (float)((float10)local_10 + (float10)local_34 +
                          fVar5 * (float10)*pfVar4 * (float10)_DAT_00e6948c * (float10)fVar1);
        fVar5 = (float10)fcos((float10)(fVar1 * 25.132742));
        local_8 = (float)((float10)local_20 * fVar5);
        local_4 = (float)(fVar5 * (float10)local_1c);
        local_30 = (float)((float10)local_24 * fVar5 + (float10)local_30);
        local_2c = local_2c + local_8;
        local_28 = local_28 + local_4;
      }
      pfVar4 = pfVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00412e20(&local_30);
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  *param_2 = local_30;
  param_2[1] = local_2c;
  param_2[2] = local_28;
  return;
}


//// FUNCTION FUN_00a4cdb0 @ 00a4cdb0 ////

void __thiscall FUN_00a4cdb0(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return;
}


//// FUNCTION FUN_00a4ce20 @ 00a4ce20 ////

void __thiscall FUN_00a4ce20(void *this,undefined4 *param_1)

{
  *(undefined1 *)((int)this + 0xc) = 0xff;
  *(undefined1 *)((int)this + 0xd) = 0xff;
  *(undefined1 *)((int)this + 0xe) = 0xff;
  *(undefined1 *)((int)this + 0xf) = 0xff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = param_1[6];
  *(undefined4 *)((int)this + 0x14) = param_1[7];
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00a4cea0 @ 00a4cea0 ////

void __cdecl FUN_00a4cea0(int *param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_60;
  int iStack_54;
  
  local_60 = 0;
  piVar7 = &DAT_010bb2ac;
  do {
    if ((((((char)piVar7[-1] != '\0') && (piVar7[1] == param_2[1])) && (*piVar7 == *param_2)) &&
        ((piVar7[3] == param_2[3] && (piVar7[4] == param_2[4])))) &&
       ((piVar7[5] == param_2[5] && ((piVar7[6] == param_2[6] && (piVar7[0x17] == param_4)))))) {
      iVar6 = 0;
      if (param_4 < 1) {
LAB_00a4cf8b:
        if ((local_60 != 0) && (DAT_010bb2a8 != '\0')) {
          DAT_010bb320 = (DAT_010bb320 >> 1) + 0xff;
        }
        if ((local_60 != 1) && (DAT_010bb324 != '\0')) {
          DAT_010bb39c = (DAT_010bb39c >> 1) + 0xff;
        }
        if ((local_60 != 2) && (DAT_010bb3a0 != '\0')) {
          DAT_010bb418 = (DAT_010bb418 >> 1) + 0xff;
        }
        if ((local_60 != 3) && (DAT_010bb41c != '\0')) {
          DAT_010bb494 = (DAT_010bb494 >> 1) + 0xff;
        }
        piVar7[0x1d] = piVar7[0x1d] + 0x3039;
        *param_1 = piVar7[0x18];
        param_1[1] = piVar7[0x19];
        param_1[2] = piVar7[0x1a];
        param_1[3] = piVar7[0x1b];
        param_1[4] = piVar7[0x1c];
        return;
      }
      pfVar4 = (float *)(param_3 + 2);
      pfVar3 = (float *)(piVar7 + 9);
      while (((pfVar3[-2] - pfVar4[-2]) * (pfVar3[-2] - pfVar4[-2]) +
              (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4) +
              (pfVar3[-1] - pfVar4[-1]) * (pfVar3[-1] - pfVar4[-1]) <= 0.0001 &&
             (ABS(pfVar3[1] - pfVar4[1]) <= 0.01))) {
        iVar6 = iVar6 + 1;
        pfVar3 = pfVar3 + 4;
        pfVar4 = pfVar4 + 4;
        if (param_4 <= iVar6) goto LAB_00a4cf8b;
      }
    }
    local_60 = local_60 + 1;
    piVar7 = piVar7 + 0x1f;
  } while ((int)piVar7 < 0x10bb49c);
  piVar7 = (int *)0x0;
  iVar6 = 0x7fffffff;
  piVar1 = (int *)&DAT_010bb2a8;
  do {
    piVar5 = piVar1;
    if ((char)*piVar1 == '\0') break;
    if (piVar1[0x1e] < iVar6) {
      iVar6 = piVar1[0x1e];
      piVar7 = piVar1;
    }
    piVar1 = piVar1 + 0x1f;
    piVar5 = piVar7;
  } while ((int)piVar1 < 0x10bb498);
  if (((char)*piVar5 != '\0') && (piVar7 = (int *)piVar5[0x1d], piVar7 != (int *)0x0)) {
    (**(code **)(*piVar7 + 8))(piVar7);
    piVar5[0x1d] = 0;
  }
  piVar7 = piVar5;
  for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  *(char *)piVar5 = '\x01';
  piVar1 = param_2;
  piVar7 = piVar5;
  for (iVar6 = 7; piVar7 = piVar7 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = *piVar1;
    piVar1 = piVar1 + 1;
  }
  piVar5[0x1e] = 0x5ba0;
  if (0 < param_4) {
    piVar7 = piVar5 + 8;
    iStack_54 = param_4;
    do {
      *piVar7 = *param_3;
      piVar7[1] = param_3[1];
      piVar7[2] = param_3[2];
      piVar7[3] = param_3[3];
      param_3 = param_3 + 4;
      piVar7 = piVar7 + 4;
      iStack_54 = iStack_54 + -1;
    } while (iStack_54 != 0);
  }
  piVar5[0x18] = param_4;
  iVar6 = param_2[6];
  if ((*(byte *)(iVar6 + 0x28) & 1) != 0) {
    uVar2 = 4;
    goto LAB_00a4d18b;
  }
  if (*(int *)(iVar6 + 0x18) != 0) {
    if (*(int *)(iVar6 + 0x14) != 0) {
      uVar2 = 9;
      goto LAB_00a4d18b;
    }
    if (*(int *)(iVar6 + 0x18) != 0) {
      uVar2 = 4;
      goto LAB_00a4d18b;
    }
  }
  uVar2 = -(uint)(*(int *)(iVar6 + 0x14) != 0) & 7;
LAB_00a4d18b:
                    /* WARNING: Could not recover jumptable at 0x00a4d18b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_00a4d7a8)[uVar2])();
  return;
}


//// FUNCTION FUN_00a4d850 @ 00a4d850 ////

void __fastcall FUN_00a4d850(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION Anim_MeasureRleArray @ 00a4dab0 ////

int __thiscall Anim_MeasureRleArray(void *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(ushort *)this;
    do {
      uVar2 = *param_2;
      if ((uVar1 & uVar2) == 0) {
        param_2 = param_2 + 1;
        iVar3 = -1;
        iVar4 = iVar4 + 1;
      }
      else {
        iVar3 = -((int)((uint)uVar2 - (uint)uVar1) >> 1 & 0xffffU & (int)~(uVar1 - 1) >> 1 & 0xffffU
                 | (uint)(uVar1 - 1 & uVar2));
        iVar4 = iVar4 + 2;
        param_2 = param_2 + 2;
      }
      param_1 = param_1 + iVar3;
    } while (param_1 != 0);
  }
  return iVar4 * 2;
}


//// FUNCTION Anim_DecodeRleArray @ 00a4db20 ////

void __thiscall Anim_DecodeRleArray(void *this,ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = *(ushort **)((int)this + 4);
  while( true ) {
    while( true ) {
      if (param_2 == 0) {
        return;
      }
      uVar3 = (uint)*(ushort *)this;
      uVar1 = *puVar2;
      if ((*(ushort *)this & uVar1) == 0) break;
      uVar3 = (int)(uVar1 - uVar3) >> 1 & 0xffffU & (int)~(uVar3 - 1) >> 1 & 0xffffU |
              uVar3 - 1 & 0xffff & (uint)uVar1;
      param_2 = param_2 - uVar3;
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          iVar4 = iVar4 + 1;
          *param_1 = puVar2[1];
          if ((iVar4 < (int)uVar3) || (param_2 != 0)) {
            param_1 = param_1 + param_3 / 2;
          }
        } while (iVar4 < (int)uVar3);
      }
      puVar2 = puVar2 + 2;
    }
    param_2 = param_2 + -1;
    *param_1 = uVar1;
    if (param_2 == 0) break;
    param_1 = param_1 + param_3 / 2;
    puVar2 = puVar2 + 1;
  }
  return;
}


//// FUNCTION Anim_ExpandChannel @ 00a4dbd0 ////

void __thiscall Anim_ExpandChannel(void *this,ushort *param_1,int param_2)

{
  ushort *puVar1;
  ulonglong uVar2;
  
  Anim_DecodeRleArray(*(void **)this,param_1 + 3,param_2,0xc);
  Anim_DecodeRleArray(*(void **)((int)this + 4),param_1 + 4,param_2,0xc);
  Anim_DecodeRleArray(*(void **)((int)this + 8),param_1 + 5,param_2,0xc);
  if ((*(byte *)((int)this + 0x18) & 1) == 0) {
    Anim_DecodeRleArray(*(void **)((int)this + 0xc),param_1,param_2,0xc);
    Anim_DecodeRleArray(*(void **)((int)this + 0x10),param_1 + 1,param_2,0xc);
    Anim_DecodeRleArray(*(void **)((int)this + 0x14),param_1 + 2,param_2,0xc);
  }
  else if (0 < param_2) {
    puVar1 = param_1 + 2;
    do {
      uVar2 = FUN_00acd42c();
      puVar1[-2] = (ushort)uVar2;
      uVar2 = FUN_00acd42c();
      puVar1[-1] = (ushort)uVar2;
      uVar2 = FUN_00acd42c();
      *puVar1 = (ushort)uVar2;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}


//// FUNCTION FUN_00a4dd50 @ 00a4dd50 ////

void __fastcall FUN_00a4dd50(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  return;
}


//// FUNCTION Anim_ReadRleArray @ 00a4deb0 ////

undefined2 * __cdecl Anim_ReadRleArray(int *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  ushort *puVar6;
  undefined2 *this;
  ushort *puVar7;
  
  puVar1 = (undefined2 *)*param_1;
  puVar2 = operator_new(8);
  this = (undefined2 *)0x0;
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    this = puVar2;
  }
  puVar6 = puVar1 + 1;
  *this = *puVar1;
  uVar3 = Anim_MeasureRleArray(this,param_2,puVar6);
  puVar4 = operator_new(uVar3 & 0xfffffffe);
  *(undefined4 **)(this + 2) = puVar4;
  puVar7 = puVar6;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 2;
    puVar4 = puVar4 + 1;
  }
  for (uVar5 = uVar3 & 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)puVar4 = (char)*puVar7;
    puVar7 = (ushort *)((int)puVar7 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *param_1 = (uVar3 & 0xfffffffe) + (int)puVar6;
  return this;
}


//// FUNCTION FUN_00a4df30 @ 00a4df30 ////

int __cdecl FUN_00a4df30(ushort *param_1,int param_2,ushort *param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  
  puVar2 = param_3;
  do {
    if (param_2 == 0) {
      return (int)puVar2 - (int)param_3 >> 1;
    }
    uVar4 = 0;
    uVar1 = (ushort)param_5;
    if ((*param_1 & uVar1) == 0) {
      iVar3 = param_2;
      puVar5 = param_1;
      if (param_2 == 0) {
LAB_00a4dfb7:
        if ((int)uVar4 < 2) goto LAB_00a4df6f;
      }
      else {
        do {
          if (*puVar5 != *param_1) break;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar3 != 0);
        if ((int)uVar4 < 0x7fff) goto LAB_00a4dfb7;
        uVar4 = 0x7fff;
      }
      *puVar2 = (ushort)((~(param_5 - 1U) & uVar4) << 1) | (ushort)(param_5 - 1U) & (ushort)uVar4 |
                uVar1;
      puVar2 = puVar2 + 1;
      *puVar2 = *param_1;
      param_1 = param_1 + uVar4;
      param_2 = param_2 - uVar4;
    }
    else {
      *puVar2 = ((byte)~(byte)(param_5 + -1) & 1) << 1 | (ushort)(param_5 + -1) & 1 | uVar1;
      puVar2 = puVar2 + 1;
LAB_00a4df6f:
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION Anim_ReadChannel @ 00a4e030 ////

undefined4 * __thiscall Anim_ReadChannel(void *this,uint *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar4 = param_2;
  puVar3 = param_1;
  pbVar1 = (byte *)*param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  param_1 = (uint *)(pbVar1 + 4);
  *(byte *)((int)this + 0x18) =
       *(byte *)((int)this + 0x18) ^ (*(byte *)((int)this + 0x18) ^ *pbVar1) & 1;
  puVar5 = Anim_ReadRleArray((int *)&param_1,param_2);
  *(undefined2 **)this = puVar5;
  puVar5 = Anim_ReadRleArray((int *)&param_1,iVar4);
  *(undefined2 **)((int)this + 4) = puVar5;
  puVar5 = Anim_ReadRleArray((int *)&param_1,iVar4);
  *(undefined2 **)((int)this + 8) = puVar5;
  param_1 = (uint *)FUN_009ac020((uint)param_1);
  if ((*(byte *)((int)this + 0x18) & 1) == 0) {
    puVar5 = Anim_ReadRleArray((int *)&param_1,iVar4);
    *(undefined2 **)((int)this + 0xc) = puVar5;
    puVar5 = Anim_ReadRleArray((int *)&param_1,iVar4);
    *(undefined2 **)((int)this + 0x10) = puVar5;
    puVar5 = Anim_ReadRleArray((int *)&param_1,iVar4);
    *(undefined2 **)((int)this + 0x14) = puVar5;
    puVar6 = param_1;
  }
  else {
    uVar7 = param_1[1];
    uVar2 = param_1[2];
    *(uint *)((int)this + 0xc) = *param_1;
    puVar6 = param_1 + 3;
    *(uint *)((int)this + 0x10) = uVar7;
    *(uint *)((int)this + 0x14) = uVar2;
  }
  uVar7 = FUN_009ac020((uint)puVar6);
  *puVar3 = uVar7;
  return this;
}


//// FUNCTION FUN_00a4e130 @ 00a4e130 ////

void __fastcall FUN_00a4e130(int *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*param_1 + 4));
  }
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1[1] + 4));
  }
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1[2] + 4));
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1[3] + 4));
    }
    if (param_1[4] != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1[4] + 4));
    }
    if (param_1[5] != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1[5] + 4));
    }
  }
  return;
}


//// FUNCTION FUN_00a4e450 @ 00a4e450 ////

void FUN_00a4e450(ushort *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  ushort *_Memory;
  int iVar3;
  short *psVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  int iVar9;
  
  iVar1 = param_2;
  _Memory = operator_new(param_2 * 4);
  param_2 = -1;
  uVar7 = iVar1 * 2;
  iVar9 = 0;
  do {
    iVar3 = FUN_00a4df30(param_1,iVar1,_Memory,iVar9,1 << ((byte)iVar9 & 0x1f));
    if (iVar3 * 2 < (int)uVar7) {
      uVar7 = iVar3 * 2;
      param_2 = iVar9;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  psVar4 = operator_new(8);
  psVar8 = (short *)0x0;
  if (psVar4 != (short *)0x0) {
    *psVar4 = 0;
    psVar4[2] = 0;
    psVar4[3] = 0;
    psVar8 = psVar4;
  }
  if (param_2 == -1) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)(1 << ((byte)param_2 & 0x1f));
  }
  *psVar8 = sVar2;
  puVar5 = operator_new(uVar7 * 2);
  *(ushort **)(psVar8 + 2) = puVar5;
  if (*psVar8 != 0) {
    FUN_00a4df30(param_1,iVar1,puVar5,param_2,1 << ((byte)param_2 & 0x1f));
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)puVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar5 = puVar5 + 2;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(char *)puVar5 = (char)*param_1;
    param_1 = (ushort *)((int)param_1 + 1);
    puVar5 = (ushort *)((int)puVar5 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a4e550 @ 00a4e550 ////

void __thiscall FUN_00a4e550(void *this,int param_1,int param_2)

{
  float fVar1;
  ushort *_Memory;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  ushort *local_24;
  float local_1c;
  float local_18;
  float local_14;
  ushort *local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  _Memory = operator_new(param_2 * 6);
  iVar3 = 0;
  if (0 < param_2) {
    local_10 = _Memory + param_2 * 2;
    local_24 = _Memory + param_2;
    pfVar4 = (float *)(param_1 + 0x2c);
    do {
      local_1c = 0.0;
      local_18 = 0.0;
      local_14 = 0.0;
      FUN_009ab850(pfVar4 + -0xb,&local_1c,&local_18,&local_14);
      uVar5 = FUN_00acd42c();
      _Memory[iVar3] = (ushort)uVar5;
      uVar5 = FUN_00acd42c();
      *local_24 = (ushort)uVar5;
      uVar5 = FUN_00acd42c();
      *local_10 = (ushort)uVar5;
      local_c = local_c + pfVar4[-2];
      iVar3 = iVar3 + 1;
      local_24 = local_24 + 1;
      local_10 = local_10 + 1;
      local_8 = local_8 + pfVar4[-1];
      local_4 = local_4 + *pfVar4;
      pfVar4 = pfVar4 + 0xc;
    } while (iVar3 < param_2);
  }
  fVar1 = 1.0 / (float)param_2;
  local_c = local_c * fVar1;
  local_8 = local_8 * fVar1;
  local_4 = local_4 * fVar1;
  uVar2 = FUN_00a4e450(_Memory,param_2);
  *(undefined4 *)this = uVar2;
  uVar2 = FUN_00a4e450(_Memory + param_2,param_2);
  *(undefined4 *)((int)this + 4) = uVar2;
  uVar2 = FUN_00a4e450(_Memory + param_2 * 2,param_2);
  *(undefined4 *)((int)this + 8) = uVar2;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a4e980 @ 00a4e980 ////

undefined4 * __fastcall FUN_00a4e980(undefined4 *param_1)

{
  FUN_009b38a0(param_1);
  *param_1 = &PTR_FUN_00d79330;
  return param_1;
}


//// FUNCTION FUN_00a4e9a0 @ 00a4e9a0 ////

void __fastcall FUN_00a4e9a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d79330;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_00a4e9b0 @ 00a4e9b0 ////

void FUN_00a4e9b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00aa9e70();
  if (iVar1 == 1) {
    DAT_00e69494 = 0xc00000;
    return;
  }
  if (iVar1 != 2) {
    DAT_00e69494 = 0x300000;
    return;
  }
  DAT_00e69494 = 0x1e00000;
  return;
}


//// FUNCTION FUN_00a4eab0 @ 00a4eab0 ////

void __cdecl FUN_00a4eab0(int param_1)

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


//// FUNCTION FUN_00a4ead0 @ 00a4ead0 ////

void __cdecl FUN_00a4ead0(int *param_1)

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


//// FUNCTION FUN_00a4eb10 @ 00a4eb10 ////

void __thiscall FUN_00a4eb10(void *this,int *param_1)

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


//// FUNCTION FUN_00a4ec30 @ 00a4ec30 ////

void __fastcall FUN_00a4ec30(int *param_1)

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


//// FUNCTION FUN_00a4ecc0 @ 00a4ecc0 ////

void __fastcall FUN_00a4ecc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x31) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x31) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x31);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x31);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x31) == '\0');
    if (*(char *)((int)piVar4 + 0x31) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00a4ed80 @ 00a4ed80 ////

undefined4 * __thiscall FUN_00a4ed80(void *this,byte param_1)

{
  FUN_00a4e9a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a4edc0 @ 00a4edc0 ////

void __fastcall FUN_00a4edc0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a4ede0 @ 00a4ede0 ////

void __thiscall FUN_00a4ede0(void *this,int param_1)

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


//// FUNCTION FUN_00a4ee60 @ 00a4ee60 ////

undefined4 * __thiscall FUN_00a4ee60(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00a4eed0 @ 00a4eed0 ////

int * __fastcall FUN_00a4eed0(int *param_1)

{
  FUN_00a4ec30(param_1);
  return param_1;
}


//// FUNCTION FUN_00a4eef0 @ 00a4eef0 ////

int * __fastcall FUN_00a4eef0(int *param_1)

{
  FUN_00a4ecc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a4ef30 @ 00a4ef30 ////

undefined4 * __thiscall FUN_00a4ef30(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00a4ef90 @ 00a4ef90 ////

void __fastcall FUN_00a4ef90(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a4efb0 @ 00a4efb0 ////

undefined4 * __fastcall FUN_00a4efb0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfaf03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 1;
  param_1[0xd] = param_1;
  FUN_00acdb9e(0xe694c0);
  iVar1 = FUN_0097dda0();
  param_1[0xe] = iVar1;
  if (s___AVMyAsyncFile__A0xe820ce05___00e694a0[0x1f] != '\0') {
    iVar1 = 0x2c;
    pcVar3 = "LRULink";
    pcVar2 = (char *)FUN_00acdb9e(0xe694c0);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVMyAsyncFile__A0xe820ce05___00e694a0[0x1f] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a4f090 @ 00a4f090 ////

int * __fastcall FUN_00a4f090(int *param_1)

{
  FUN_00a4ec30(param_1);
  return param_1;
}


//// FUNCTION FUN_00a4f0a0 @ 00a4f0a0 ////

int * __fastcall FUN_00a4f0a0(int *param_1)

{
  FUN_00a4ecc0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a4f100 @ 00a4f100 ////

undefined4 * __thiscall
FUN_00a4f100(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00a4f160 @ 00a4f160 ////

void * __thiscall FUN_00a4f160(void *this,byte param_1)

{
  FUN_00a4ef90((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a4f180 @ 00a4f180 ////

undefined4 * __thiscall FUN_00a4f180(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x31) == '\0') {
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
LAB_00a4f1c4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a4f1c9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a4f1c4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a4f1c9:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x31) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_00a4f200 @ 00a4f200 ////

void FUN_00a4f200(void)

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


//// FUNCTION FUN_00a4f240 @ 00a4f240 ////

void * FUN_00a4f240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00a4f100(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a4f2c0 @ 00a4f2c0 ////

void __fastcall FUN_00a4f2c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4f200();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a4f2f0 @ 00a4f2f0 ////

void FUN_00a4f2f0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00a4f2f0(*(void **)((int)param_1 + 8));
    FUN_00a4ef90((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a4f390 @ 00a4f390 ////

int __fastcall FUN_00a4f390(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4f200();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a4f3c0 @ 00a4f3c0 ////

void __fastcall FUN_00a4f3c0(int param_1)

{
  FUN_00a4f2f0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a4f3f0 @ 00a4f3f0 ////

uint __cdecl FUN_00a4f3f0(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 **ppuVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 *local_34;
  undefined4 *local_30;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfaf18;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_2c);
  local_34 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_34 != DAT_010bb4a0) {
    pbVar8 = (byte *)local_34[3];
    pbVar4 = local_2c;
    do {
      bVar2 = *pbVar4;
      bVar9 = bVar2 < *pbVar8;
      if (bVar2 != *pbVar8) {
LAB_00a4f4a4:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00a4f4a9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar9 = bVar2 < pbVar8[1];
      if (bVar2 != pbVar8[1]) goto LAB_00a4f4a4;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a4f4a9:
    if (-1 < iVar5) {
      ppuVar6 = &local_34;
      goto LAB_00a4f4bb;
    }
  }
  local_30 = DAT_010bb4a0;
  ppuVar6 = &local_30;
LAB_00a4f4bb:
  if (*ppuVar6 == DAT_010bb4a0) {
    uVar7 = FUN_009d3720(&local_2c);
  }
  else {
    uVar7 = *(uint *)((*ppuVar6)[0xb] + 0x24);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return uVar7;
}


//// FUNCTION FUN_00a4f500 @ 00a4f500 ////

void __thiscall FUN_00a4f500(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cfaf38;
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
  FUN_00a4ec30((int *)&param_2);
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
      goto LAB_00a4f671;
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
      piVar2 = (int *)FUN_00a4ead0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00a4eab0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a4f671:
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
            FUN_00a4ede0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00a4eb10(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00a4ede0(this,(int)piVar5);
              break;
            }
LAB_00a4f734:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00a4eb10(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00a4f734;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00a4ede0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00a4eb10(this,piVar5);
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


//// FUNCTION FUN_00a4f7d0 @ 00a4f7d0 ////

void __thiscall FUN_00a4f7d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a4f2f0((void *)piVar6[1]);
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
    FUN_00a4f500(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a4f890 @ 00a4f890 ////

void __thiscall
FUN_00a4f890(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cfaf58;
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
  piVar3 = FUN_00a4f240(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a4f98b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a4ede0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00a4eb10(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00a4f98b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a4eb10(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00a4ede0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00a4fa40 @ 00a4fa40 ////

void __fastcall FUN_00a4fa40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfaf83;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)param_1[0xc] != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    *(undefined4 *)param_1[0xc] = param_1[0xb];
  }
  if (param_1[0xb] != 0) {
    *(undefined4 *)(param_1[0xb] + 4) = param_1[0xc];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_10 = param_1;
  local_18 = FUN_00a4f180(&DAT_010bb49c,param_1);
  piVar1 = DAT_010bb4a0;
  if (local_18 != DAT_010bb4a0) {
    uVar2 = FUN_00441060(param_1,local_18 + 3);
    if ((char)uVar2 == '\0') {
      ppiVar3 = &local_18;
      goto LAB_00a4fac4;
    }
  }
  local_14 = piVar1;
  ppiVar3 = &local_14;
LAB_00a4fac4:
  if (*ppiVar3 != piVar1) {
    FUN_00a4f500(&DAT_010bb49c,&local_14,*ppiVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[8]);
}


//// FUNCTION FUN_00a4fb40 @ 00a4fb40 ////

undefined4 * __thiscall FUN_00a4fb40(void *this,byte param_1)

{
  FUN_00a4fa40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a4fb60 @ 00a4fb60 ////

void FUN_00a4fb60(void)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  
  puVar1 = DAT_010bb4b0;
  while ((DAT_00e69494 < DAT_010bb498 && (puVar1 != &DAT_010bb4bc))) {
    _Memory = (undefined4 *)puVar1[2];
    puVar1 = (undefined4 *)puVar1[1];
    if (*(char *)(_Memory + 10) != '\0') {
      FUN_00a4fa40(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}


//// FUNCTION FUN_00a4fbb0 @ 00a4fbb0 ////

void FUN_00a4fbb0(void)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  
  puVar2 = DAT_010bb4b0;
  if (DAT_010bb4b0 != &DAT_010bb4bc) {
    do {
      _Memory = (undefined4 *)puVar2[2];
      puVar1 = puVar2 + 1;
      if (_Memory != (undefined4 *)0x0) {
        FUN_00a4fa40(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      puVar2 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_010bb4bc);
  }
  return;
}


//// FUNCTION FUN_00a4fbf0 @ 00a4fbf0 ////

void __fastcall FUN_00a4fbf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d79344;
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


//// FUNCTION FUN_00a4fc40 @ 00a4fc40 ////

undefined4 * __thiscall FUN_00a4fc40(void *this,byte param_1)

{
  FUN_00a4fbf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a4fc90 @ 00a4fc90 ////

void __thiscall FUN_00a4fc90(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00a4fcf4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00a4fcf9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a4fcf4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a4fcf9:
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
      puVar5 = (undefined4 *)FUN_00a4f890(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a4ecc0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00a4f890(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a4fdb0 @ 00a4fdb0 ////

int __fastcall FUN_00a4fdb0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  uint3 uVar5;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00a4f180(&DAT_010bb49c,(undefined4 *)(param_1 + 4));
  puVar2 = DAT_010bb4a0;
  if (local_8 != DAT_010bb4a0) {
    uVar3 = FUN_00441060((undefined4 *)(param_1 + 4),local_8 + 3);
    if ((char)uVar3 == '\0') {
      ppuVar4 = &local_8;
      goto LAB_00a4fdf8;
    }
  }
  local_4 = puVar2;
  ppuVar4 = &local_4;
LAB_00a4fdf8:
  puVar1 = *ppuVar4;
  uVar5 = (uint3)((uint)puVar1 >> 8);
  if (puVar1 != puVar2) {
    if (*(char *)(param_1 + 0x34) != '\0') {
      *(undefined4 *)(puVar1[0xb] + 0x20) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined1 *)(puVar1[0xb] + 0x28) = 1;
      return CONCAT31(uVar5,1);
    }
    puVar2 = (undefined4 *)puVar1[0xb];
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00a4fa40(puVar2);
                    /* WARNING: Subroutine does not return */
      _free(puVar2);
    }
  }
  return (uint)uVar5 << 8;
}


//// FUNCTION FUN_00a4fe80 @ 00a4fe80 ////

undefined4 * __thiscall FUN_00a4fe80(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a4f890(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00a4f890(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00a4f890(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a4ecc0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00a4f890(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00a4f890(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a4ec30((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00a50002;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00a4f890(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00a4f890(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00a50002:
  puVar4 = (undefined4 *)FUN_00a4fc90(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00a50030 @ 00a50030 ////

void __fastcall FUN_00a50030(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a4f7d0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a50060 @ 00a50060 ////

int __fastcall FUN_00a50060(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a4f200();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a50090 @ 00a50090 ////

int * __thiscall FUN_00a50090(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00cfaf98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00a4f180(this,param_1);
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
  piVar2 = FUN_00a4fe80(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00a50160 @ 00a50160 ////

void __cdecl FUN_00a50160(char *param_1)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  int **ppiVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *this;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_34;
  int *local_30;
  byte *local_2c;
  uint local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfafce;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_2c);
  local_34 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_34 != DAT_010bb4a0) {
    pbVar10 = (byte *)local_34[3];
    pbVar4 = local_2c;
    do {
      bVar2 = *pbVar4;
      bVar11 = bVar2 < *pbVar10;
      if (bVar2 != *pbVar10) {
LAB_00a50209:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00a5020e;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar11 = bVar2 < pbVar10[1];
      if (bVar2 != pbVar10[1]) goto LAB_00a50209;
      pbVar4 = pbVar4 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a5020e:
    if (-1 < iVar5) {
      ppiVar6 = &local_34;
      goto LAB_00a50220;
    }
  }
  local_30 = DAT_010bb4a0;
  ppiVar6 = &local_30;
LAB_00a50220:
  if ((*ppiVar6 == DAT_010bb4a0) && (uVar7 = FUN_009d3720(&local_2c), 0 < (int)uVar7)) {
    piVar8 = operator_new(0x54);
    local_4._0_1_ = 1;
    local_30 = piVar8;
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      FUN_009b38a0(piVar8);
      *piVar8 = (int)&PTR_FUN_00d79330;
    }
    local_4._0_1_ = 0;
    FUN_004015d0(piVar8 + 1,(char *)local_2c,local_28);
    piVar8[0xb] = uVar7;
    local_30 = operator_new(0x3c);
    local_4._0_1_ = 2;
    if (local_30 == (int *)0x0) {
      this = (undefined4 *)0x0;
    }
    else {
      this = FUN_00a4efb0(local_30);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004015d0(this,(char *)local_2c,local_28);
    this[8] = 0;
    *(undefined1 *)(this + 10) = 0;
    this[9] = uVar7;
    piVar9 = FUN_00a50090(&DAT_010bb49c,&local_2c);
    *piVar9 = (int)this;
    piVar9 = this + 0xb;
    this[0xc] = &DAT_010bb4bc;
    *piVar9 = (int)DAT_010bb4bc;
    *(int **)((int)DAT_010bb4bc + 4) = piVar9;
    DAT_010bb4bc = piVar9;
    AsyncLoadJob_ExecuteSync(piVar8);
    DAT_010bb498 = DAT_010bb498 + uVar7;
  }
  FUN_00a4fb60();
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a50330 @ 00a50330 ////

uint __cdecl FUN_00a50330(char *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 **ppuVar6;
  int *piVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined4 *local_34;
  undefined4 *local_30;
  byte *local_2c;
  undefined4 local_28;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfafe8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_0048ad50((int *)&local_2c);
  local_34 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_34 != DAT_010bb4a0) {
    pbVar12 = (byte *)local_34[3];
    pbVar9 = local_2c;
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00a503d9:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00a503de;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00a503d9;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a503de:
    if (-1 < iVar5) {
      ppuVar6 = &local_34;
      goto LAB_00a503f0;
    }
  }
  local_30 = DAT_010bb4a0;
  ppuVar6 = &local_30;
LAB_00a503f0:
  if (*ppuVar6 == DAT_010bb4a0) {
    FUN_00a50160(param_1);
  }
  do {
    puVar8 = DAT_010bb4a0;
    local_30 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
    if (local_30 == puVar8) {
LAB_00a50454:
      local_34 = puVar8;
      ppuVar6 = &local_34;
    }
    else {
      pbVar12 = (byte *)local_30[3];
      pbVar9 = local_2c;
      do {
        bVar2 = *pbVar9;
        bVar13 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_00a50445:
          iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_00a5044a;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar9[1];
        bVar13 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_00a50445;
        pbVar9 = pbVar9 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_00a5044a:
      if (iVar5 < 0) goto LAB_00a50454;
      ppuVar6 = &local_30;
    }
    if ((*ppuVar6 == puVar8) || (*(char *)((*ppuVar6)[0xb] + 0x28) != '\0')) break;
    FUN_009d9830(0);
    FUN_009b3890();
  } while( true );
  uVar11 = 0;
  local_30 = FUN_00a4f180(&DAT_010bb49c,&local_2c);
  if (local_30 != puVar8) {
    pbVar12 = (byte *)local_30[3];
    pbVar9 = local_2c;
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_00a504c4:
        iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00a504c9;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_00a504c4;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar5 = 0;
LAB_00a504c9:
    if (-1 < iVar5) {
      ppuVar6 = &local_30;
      goto LAB_00a504db;
    }
  }
  local_34 = puVar8;
  ppuVar6 = &local_34;
LAB_00a504db:
  puVar3 = *ppuVar6;
  if (puVar3 != puVar8) {
    uVar11 = *(uint *)(puVar3[0xb] + 0x24);
    if ((int)param_3 <= (int)uVar11) {
      uVar11 = param_3;
    }
    puVar8 = *(undefined4 **)(puVar3[0xb] + 0x20);
    for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar10 = uVar11 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    iVar5 = puVar3[0xb];
    piVar7 = (int *)(iVar5 + 0x2c);
    if (*(int **)(iVar5 + 0x30) != (int *)0x0) {
      **(int **)(iVar5 + 0x30) = *piVar7;
    }
    if (*piVar7 != 0) {
      *(undefined4 *)(*piVar7 + 4) = *(undefined4 *)(iVar5 + 0x30);
    }
    *piVar7 = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    puVar8 = (undefined4 *)(puVar3[0xb] + 0x2c);
    *(undefined4 ***)(puVar3[0xb] + 0x30) = &DAT_010bb4bc;
    *puVar8 = DAT_010bb4bc;
    *(undefined4 **)((int)DAT_010bb4bc + 4) = puVar8;
    DAT_010bb4bc = puVar8;
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00a50580 @ 00a50580 ////

void __fastcall FUN_00a50580(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d79344;
  return;
}


//// FUNCTION FUN_00a505e0 @ 00a505e0 ////

void __fastcall FUN_00a505e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_010bb4e0;
  do {
    if (iVar2 == 0) {
LAB_00a50614:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x14));
    }
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        DAT_010bb4e0 = *(int *)(iVar2 + 0x18);
      }
      else {
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      }
      goto LAB_00a50614;
    }
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


//// FUNCTION FUN_00a50630 @ 00a50630 ////

void * __thiscall FUN_00a50630(void *this,byte param_1)

{
  FUN_00a505e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a50650 @ 00a50650 ////

void __fastcall FUN_00a50650(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 != 0) {
    return;
  }
  pvVar2 = DAT_010bb4e8;
  pvVar4 = (void *)0x0;
  if (DAT_010bb4e8 != (void *)0x0) {
    while (pvVar3 = pvVar2, pvVar3 != param_1) {
      pvVar2 = *(void **)((int)pvVar3 + 4);
      pvVar4 = pvVar3;
      if (*(void **)((int)pvVar3 + 4) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
    }
    if (pvVar4 != (void *)0x0) {
      *(undefined4 *)((int)pvVar4 + 4) = *(undefined4 *)((int)pvVar3 + 4);
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    DAT_010bb4e8 = *(void **)((int)pvVar3 + 4);
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00a506a0 @ 00a506a0 ////

uint * __cdecl FUN_00a506a0(uint param_1,uint param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  uVar1 = param_3 * 0x14 + 0x1c;
  puVar2 = operator_new(uVar1);
  puVar6 = puVar2;
  for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  puVar2[4] = param_2;
  *puVar2 = uVar1;
  puVar2[3] = param_1;
  puVar2[2] = 1;
  puVar2[6] = puVar2[6] & 0xfffffffe;
  puVar2[5] = (uint)(puVar2 + 7);
  if (0 < param_3) {
    iVar5 = 0;
    do {
      iVar3 = FUN_00a76d00((void *)(puVar2[5] + iVar5),param_4);
      param_4 = (undefined4 *)((int)param_4 + iVar3);
      iVar5 = iVar5 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar2[1] = (uint)DAT_010bb4e8;
  DAT_010bb4e8 = puVar2;
  return puVar2;
}


//// FUNCTION FUN_00a50730 @ 00a50730 ////

void __fastcall FUN_00a50730(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0(*(byte **)(param_1 + 0x14),*(uint *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x10) = uVar1;
  return;
}


//// FUNCTION FUN_00a50750 @ 00a50750 ////

void __fastcall FUN_00a50750(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0((byte *)param_1[4],*param_1);
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a50770 @ 00a50770 ////

void __fastcall FUN_00a50770(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_009ac1e0((byte *)param_1[5],*param_1);
  param_1[1] = uVar1;
  return;
}


//// FUNCTION FUN_00a50840 @ 00a50840 ////

undefined4 * __thiscall
FUN_00a50840(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb036;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  puVar1 = this;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_4 = 0;
  if ((param_4 != (undefined4 *)0x0) && (param_3 != 0)) {
    uVar4 = param_3 * 6;
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = param_2;
    *(undefined4 *)((int)this + 8) = 1;
    *(int *)((int)this + 0x10) = param_3;
    puVar1 = operator_new(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,6,param_3,&LAB_009d72d0);
    }
    *(undefined4 **)((int)this + 0x14) = puVar1;
    if (param_5 == '\0') {
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *param_4;
        param_4 = param_4 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    else {
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = *param_4;
        param_4 = param_4 + 1;
        puVar1 = puVar1 + 1;
      }
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(void **)((int)this + 0x18) = DAT_010bb4e0;
    DAT_010bb4e0 = this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION LH_BuildPrimitiveIndexBuffer @ 00a50940 ////

int * __cdecl
LH_BuildPrimitiveIndexBuffer(int param_1,int param_2,int param_3,undefined4 *param_4,char param_5)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb04b;
  local_c = ExceptionList;
  if (param_3 != 0) {
    piVar1 = DAT_010bb4e0;
    if (param_2 != -1) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[6]) {
        if ((param_1 == *piVar1) && (param_2 == piVar1[1])) {
          piVar1[2] = piVar1[2] + 1;
          return piVar1;
        }
      }
    }
    ExceptionList = &local_c;
    this = operator_new(0x34);
    local_4 = 0;
    if (this != (void *)0x0) {
      piVar1 = FUN_00a50840(this,param_1,param_2,param_3,param_4,param_5);
      ExceptionList = local_c;
      return piVar1;
    }
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_00a509f0 @ 00a509f0 ////

void __fastcall FUN_00a509f0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00a505e0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a50a10 @ 00a50a10 ////

char __fastcall FUN_00a50a10(int param_1)

{
  int iVar1;
  bool bVar2;
  int *this;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char local_a;
  uint local_8;
  undefined4 local_4;
  
  local_a = '\x01';
  if (*(int *)(param_1 + 0x10) == 0) {
    return '\0';
  }
  iVar1 = *(int *)(param_1 + 0x10) * 3;
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_4 = 0;
    local_8 = 0;
    bVar2 = false;
    this = DAT_010bb22c;
    while (this != (int *)0x0) {
      if (bVar2) {
        if (this != (int *)0x0) goto LAB_00a50aaa;
        break;
      }
      bVar2 = FUN_00a3a260(this,iVar1,2,&local_8);
      if (!bVar2) {
        this = (int *)this[3];
      }
      bVar2 = bVar2;
    }
    this = (int *)FUN_00a3b270();
    if (this == (int *)0x0) {
LAB_00a50b1c:
      *(undefined4 *)(param_1 + 0x28) = DAT_0105bec0;
      return '\0';
    }
    FUN_00a3a0b0((int)this);
    bVar2 = FUN_00a3a260(this,iVar1,2,&local_8);
    if (!bVar2) goto LAB_00a50b1c;
LAB_00a50aaa:
    puVar3 = (undefined4 *)FUN_00a3a7d0(this,(int *)(param_1 + 0x1c),(int *)&local_8);
    if ((puVar3 == (undefined4 *)0x0) || (*(int *)(param_1 + 0x2c) == 0)) {
      local_a = '\0';
    }
    else {
      uVar4 = *(int *)(param_1 + 0x10) * 6;
      puVar6 = *(undefined4 **)(param_1 + 0x14);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    FUN_00a3a090(this);
    if (local_a == '\0') goto LAB_00a50b08;
  }
  (**(code **)(*g_pDirect3DDevice + 0x1a0))(g_pDirect3DDevice,**(undefined4 **)(param_1 + 0x2c));
LAB_00a50b08:
  *(undefined4 *)(param_1 + 0x28) = DAT_0105bec0;
  return local_a;
}


//// FUNCTION FUN_00a50b40 @ 00a50b40 ////

undefined4 * __thiscall
FUN_00a50b40(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cfb06b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  local_4 = 0;
  puVar4 = this;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((param_4 != (undefined4 *)0x0) && (param_3 != 0)) {
    *(undefined4 *)this = param_1;
    *(undefined4 *)((int)this + 4) = param_2;
    uVar1 = param_3 * 0x20;
    *(undefined4 *)((int)this + 8) = 1;
    *(int *)((int)this + 0xc) = param_3;
    if (param_5 != (undefined4 *)0x0) {
      uVar1 = param_3 * 0x28;
    }
    puVar2 = operator_new(uVar1);
    *(undefined4 **)((int)this + 0x10) = puVar2;
    puVar4 = puVar2;
    for (iVar3 = (*(uint *)((int)this + 0xc) & 0x7ffffff) << 3; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_4;
      param_4 = (undefined4 *)((int)param_4 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 **)((int)this + 0x14) = puVar2 + *(uint *)((int)this + 0xc) * 8;
      puVar4 = puVar2 + *(uint *)((int)this + 0xc) * 8;
      for (iVar3 = (*(uint *)((int)this + 0xc) & 0x1fffffff) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *param_5;
        param_5 = param_5 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar4 = *(undefined1 *)param_5;
        param_5 = (undefined4 *)((int)param_5 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
    }
    *(void **)((int)this + 0x20) = DAT_010bb4e4;
    DAT_010bb4e4 = this;
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a50c50 @ 00a50c50 ////

void __fastcall FUN_00a50c50(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = DAT_010bb4e4;
  do {
    if (iVar2 == 0) {
LAB_00a50c85:
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x10));
    }
    if (iVar2 == param_1) {
      if (iVar1 == 0) {
        DAT_010bb4e4 = *(int *)(iVar2 + 0x20);
      }
      else {
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
      }
      goto LAB_00a50c85;
    }
    iVar1 = iVar2;
    iVar2 = *(int *)(iVar2 + 0x20);
  } while( true );
}


//// FUNCTION FUN_00a50cd0 @ 00a50cd0 ////

int * __cdecl
FUN_00a50cd0(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb08b;
  local_c = ExceptionList;
  piVar1 = DAT_010bb4e4;
  if (param_2 != -1) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[8]) {
      if ((param_1 == *piVar1) && (param_2 == piVar1[1])) {
        piVar1[2] = piVar1[2] + 1;
        return piVar1;
      }
    }
  }
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  if (this == (void *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  piVar1 = FUN_00a50b40(this,param_1,param_2,param_3,param_4,param_5);
  ExceptionList = local_c;
  return piVar1;
}


//// FUNCTION FUN_00a50d80 @ 00a50d80 ////

void * __thiscall FUN_00a50d80(void *this,byte param_1)

{
  FUN_00a50c50((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a50da0 @ 00a50da0 ////

void __thiscall
FUN_00a50da0(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    piVar1 = LH_BuildPrimitiveIndexBuffer(param_4,param_5,param_2,param_3,'\0');
    *(int **)((int)this + 4) = piVar1;
  }
  return;
}


//// FUNCTION FUN_00a50de0 @ 00a50de0 ////

void __cdecl FUN_00a50de0(uint param_1,uint param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = DAT_010bb4e8;
  if (param_2 != 0xffffffff) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if ((param_1 == *(uint *)(iVar1 + 0xc)) && (param_2 == *(uint *)(iVar1 + 0x10))) {
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        return;
      }
    }
  }
  FUN_00a506a0(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00a50e20 @ 00a50e20 ////

void __fastcall FUN_00a50e20(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  puVar2 = operator_new(uVar1);
  puVar4 = param_1;
  puVar5 = puVar2;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar5 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    puVar5 = (uint *)((int)puVar5 + 1);
  }
  puVar2[4] = 0xffffffff;
  puVar2[3] = uVar1 - 0x1c;
  puVar2[5] = (uint)(puVar2 + 7);
  puVar2[1] = 0;
  puVar2[2] = 1;
  puVar2[6] = puVar2[6] ^ (param_1[6] ^ puVar2[6]) & 1;
  return;
}


//// FUNCTION FUN_00a50e80 @ 00a50e80 ////

int __cdecl FUN_00a50e80(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_010bb4e8;
  if (param_2 == -1) {
    return 0;
  }
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_1 == *(int *)(iVar1 + 0xc)) && (param_2 == *(int *)(iVar1 + 0x10))) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}


//// FUNCTION FUN_00a50ec0 @ 00a50ec0 ////

int * __cdecl FUN_00a50ec0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_010bb4e4;
  if (param_2 == -1) {
    return (int *)0x0;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((param_1 == *piVar1) && (param_2 == piVar1[1])) break;
    piVar1 = (int *)piVar1[8];
  }
  return piVar1;
}


//// FUNCTION FUN_00a50f00 @ 00a50f00 ////

undefined4 * __fastcall FUN_00a50f00(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = operator_new(0x44);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar5 = puVar1;
    for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar1[2] = 1;
  }
  puVar1[1] = 0xffffffff;
  *puVar1 = *param_1;
  puVar1[3] = param_1[3];
  iVar3 = param_1[9];
  puVar1[9] = iVar3;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar1[10] = puVar1[10] ^ (param_1[10] ^ puVar1[10]) & 2;
  uVar4 = param_1[3] * 0x20;
  if (param_1[5] != 0) {
    uVar4 = param_1[3] * 0x28;
  }
  puVar2 = operator_new(uVar4);
  puVar1[4] = puVar2;
  puVar5 = (undefined4 *)param_1[4];
  puVar6 = puVar2;
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if (param_1[5] != 0) {
    puVar1[5] = puVar2 + param_1[3] * 8;
  }
  puVar1[8] = 0;
  return puVar1;
}


//// FUNCTION FUN_00a50fd0 @ 00a50fd0 ////

int * __cdecl FUN_00a50fd0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_010bb4e0;
  if (param_2 == -1) {
    return (int *)0x0;
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((param_1 == *piVar1) && (param_2 == piVar1[1])) break;
    piVar1 = (int *)piVar1[6];
  }
  return piVar1;
}


//// FUNCTION FUN_00a51010 @ 00a51010 ////

undefined4 * __fastcall FUN_00a51010(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x34);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar2 = puVar1;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar1[2] = 1;
  }
  puVar1[1] = 0xffffffff;
  *puVar1 = *param_1;
  puVar1[4] = param_1[4];
  puVar1[3] = puVar1[3] ^ (param_1[3] ^ puVar1[3]) & 1;
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    puVar2 = operator_new(iVar3 * 6);
    local_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar2,6,iVar3,&LAB_009d72d0);
    }
    puVar1[5] = puVar2;
    iVar3 = param_1[4];
    puVar5 = (undefined4 *)param_1[5];
    for (uVar4 = (uint)(iVar3 * 6) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = iVar3 * 6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  puVar1[6] = 0;
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00a51110 @ 00a51110 ////

undefined4 __cdecl FUN_00a51110(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint in_EAX;
  undefined3 extraout_var;
  short *psVar4;
  undefined4 uVar5;
  short sVar6;
  
  *param_2 = 0;
  if (0 < param_1) {
    if ((DAT_010bb4dc != 0) && (param_1 < 0x201)) {
      cVar3 = FUN_00a50a10(DAT_010bb4dc);
      iVar1 = DAT_010bb4dc;
      in_EAX = CONCAT31(extraout_var,cVar3);
      if (cVar3 != '\0') {
        *param_2 = *(int *)(DAT_010bb4dc + 0x24);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    if (DAT_010bb234 != (int *)0x0) {
      psVar4 = (short *)FUN_00a3a530(DAT_010bb234,param_1 * 6,param_2);
      if (psVar4 != (short *)0x0) {
        sVar6 = 0;
        if (0 < param_1) {
          do {
            *psVar4 = sVar6;
            psVar4[1] = sVar6 + 1;
            psVar4[2] = sVar6 + 2;
            psVar4[3] = sVar6;
            psVar4[4] = sVar6 + 2;
            psVar4[5] = sVar6 + 3;
            psVar4 = psVar4 + 6;
            sVar6 = sVar6 + 4;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        FUN_008d9640();
        piVar2 = g_pDirect3DDevice;
        iVar1 = *g_pDirect3DDevice;
        uVar5 = FUN_008d9650();
        uVar5 = (**(code **)(iVar1 + 0x1a0))(piVar2,uVar5);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      in_EAX = 0;
      if (DAT_010bb234 != (int *)0x0) {
        in_EAX = FUN_00a3a5d0(DAT_010bb234);
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a511e0 @ 00a511e0 ////

void __fastcall FUN_00a511e0(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00a50c50((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a51200 @ 00a51200 ////

char __thiscall FUN_00a51200(void *this,char param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  char local_35;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28 [4];
  int local_18;
  int local_14;
  
  piVar5 = g_pDirect3DDevice;
  iVar10 = 0;
  local_35 = '\x01';
  if ((*(int *)((int)this + 0xc) == 0) || (*(int *)((int)this + 0x10) == 0)) {
    return '\0';
  }
  if (param_1 != '\0') {
    if (param_2 != -1) {
      iVar4 = *g_pDirect3DDevice;
      uVar3 = FUN_008d9580(param_2);
      (**(code **)(iVar4 + 0x164))(piVar5,uVar3);
      piVar5 = g_pDirect3DDevice;
      if (DAT_010bb230 != 0) {
        iVar10 = *(int *)(DAT_010bb230 + 4);
      }
      iVar4 = *g_pDirect3DDevice;
      uVar3 = FUN_008d9510(param_2);
      (**(code **)(iVar4 + 400))(piVar5,0,iVar10,0,uVar3);
      return '\x01';
    }
    iVar4 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb90((int)this);
    (**(code **)(iVar4 + 0x164))(piVar5,uVar3);
    piVar5 = g_pDirect3DDevice;
    if (DAT_010bb230 != 0) {
      iVar10 = *(int *)(DAT_010bb230 + 4);
    }
    iVar4 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb40((int)this);
    (**(code **)(iVar4 + 400))(piVar5,0,iVar10,0,uVar3);
    return '\x01';
  }
  if (*(int *)((int)this + 0x3c) == 0) {
    bVar1 = false;
    local_2c = 0;
    local_30 = 0;
    _param_1 = DAT_010bb228;
    while (_param_1 != (undefined4 *)0x0) {
      if (bVar1) {
        if (_param_1 != (undefined4 *)0x0) goto LAB_00a51362;
        break;
      }
      puVar13 = &local_30;
      iVar4 = FUN_00a4cb40((int)this);
      bVar1 = FUN_00a3a9c0(_param_1,*(int *)((int)this + 0xc),iVar4,puVar13);
      if (!bVar1) {
        _param_1 = (undefined4 *)*_param_1;
      }
      bVar1 = bVar1;
    }
    _param_1 = FUN_00a3b2c0();
    if (_param_1 != (undefined4 *)0x0) {
      FUN_00a3a020((int)_param_1);
      puVar13 = &local_30;
      iVar4 = FUN_00a4cb40((int)this);
      bVar1 = FUN_00a3a9c0(_param_1,*(int *)((int)this + 0xc),iVar4,puVar13);
      if (bVar1) {
LAB_00a51362:
        puVar13 = &local_30;
        piVar5 = (int *)((int)this + 0x2c);
        uVar3 = FUN_00a4cb40((int)this);
        piVar5 = (int *)FUN_00a3a6d0(_param_1,uVar3,piVar5,(int *)puVar13);
        if ((piVar5 == (int *)0x0) || (*(int *)((int)this + 0x3c) == 0)) {
switchD_00a513a3_caseD_1:
          local_35 = '\0';
        }
        else {
          bVar2 = FUN_00a4ca90((int)this);
          switch(CONCAT31(extraout_var,bVar2)) {
          case 0:
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              iVar4 = 0;
              do {
                puVar7 = (undefined4 *)(*(int *)((int)this + 0x10) + iVar4);
                puVar11 = (undefined4 *)(iVar4 + (int)piVar5);
                for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
                  *puVar11 = *puVar7;
                  puVar7 = puVar7 + 1;
                  puVar11 = puVar11 + 1;
                }
                iVar10 = iVar10 + 1;
                iVar4 = iVar4 + 0x20;
              } while (iVar10 < *(int *)((int)this + 0xc));
            }
            break;
          default:
            goto switchD_00a513a3_caseD_1;
          case 4:
            if (*(int *)((int)this + 0x18) == 0) {
              if (0 < *(int *)((int)this + 0xc)) {
                iVar4 = 0;
                do {
                  FUN_00a4caf0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + iVar4));
                  *piVar5 = local_28[0];
                  piVar5[1] = local_28[1];
                  piVar5[2] = local_28[2];
                  piVar5[3] = local_28[3];
                  piVar5[4] = local_18;
                  piVar5[5] = local_14;
                  piVar5[3] = -1;
                  iVar10 = iVar10 + 1;
                  iVar4 = iVar4 + 0x20;
                  piVar5 = piVar5 + 6;
                } while (iVar10 < *(int *)((int)this + 0xc));
              }
            }
            else {
              iVar4 = 0;
              if (0 < *(int *)((int)this + 0xc)) {
                do {
                  FUN_00a4caf0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + iVar10));
                  *piVar5 = local_28[0];
                  piVar5[1] = local_28[1];
                  piVar5[2] = local_28[2];
                  piVar5[3] = local_28[3];
                  piVar5[4] = local_18;
                  piVar5[5] = local_14;
                  piVar5[3] = (-(uint)((*(byte *)(iVar4 + *(int *)((int)this + 0x18)) & 1) != 0) &
                              0xff000000) + 0xffffff;
                  iVar4 = iVar4 + 1;
                  iVar10 = iVar10 + 0x20;
                  piVar5 = piVar5 + 6;
                } while (iVar4 < *(int *)((int)this + 0xc));
              }
            }
            break;
          case 7:
            local_34 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              param_2 = 0;
              do {
                FUN_00a4cdb0(local_28,(undefined4 *)(*(int *)((int)this + 0x10) + param_2));
                piVar8 = local_28;
                piVar9 = piVar5;
                for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *piVar9 = *piVar8;
                  piVar8 = piVar8 + 1;
                  piVar9 = piVar9 + 1;
                }
                iVar10 = *(int *)((int)this + 0x14);
                piVar5[8] = *(int *)(iVar10 + local_34 * 8);
                piVar5[9] = *(int *)(iVar10 + 4 + local_34 * 8);
                local_34 = local_34 + 1;
                param_2 = param_2 + 0x20;
                piVar5 = piVar5 + 10;
              } while (local_34 < *(int *)((int)this + 0xc));
            }
            break;
          case 8:
            iVar10 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              iVar4 = 0;
              do {
                piVar8 = (int *)(*(int *)((int)this + 0x10) + iVar4);
                *piVar5 = *piVar8;
                piVar5[1] = piVar8[1];
                piVar5[2] = piVar8[2];
                iVar10 = iVar10 + 1;
                iVar4 = iVar4 + 0x20;
                piVar5 = piVar5 + 3;
              } while (iVar10 < *(int *)((int)this + 0xc));
            }
            break;
          case 9:
            param_2 = 0;
            if (0 < *(int *)((int)this + 0xc)) {
              piVar8 = piVar5 + 3;
              do {
                FUN_00a4ce20(local_28,(undefined4 *)
                                      ((int)piVar8 +
                                      *(int *)((int)this + 0x10) + (-0xc - (int)piVar5)));
                piVar9 = local_28;
                piVar12 = piVar8 + -3;
                for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
                  *piVar12 = *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar12 = piVar12 + 1;
                }
                iVar10 = *(int *)((int)this + 0x14);
                piVar8[3] = *(int *)(iVar10 + param_2 * 8);
                piVar8[4] = *(int *)(iVar10 + 4 + param_2 * 8);
                *piVar8 = (-(uint)((*(byte *)(param_2 + *(int *)((int)this + 0x18)) & 1) != 0) &
                          0xff000000) + 0xffffff;
                param_2 = param_2 + 1;
                piVar8 = piVar8 + 8;
              } while (param_2 < *(int *)((int)this + 0xc));
            }
          }
        }
        FUN_00a3a000((int)_param_1);
        if (local_35 == '\0') goto LAB_00a51630;
        goto LAB_00a515f9;
      }
    }
    local_35 = '\0';
  }
  else {
LAB_00a515f9:
    piVar5 = g_pDirect3DDevice;
    iVar10 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb90((int)this);
    (**(code **)(iVar10 + 0x164))(piVar5,uVar3);
    piVar5 = g_pDirect3DDevice;
    iVar10 = *g_pDirect3DDevice;
    uVar3 = FUN_00a4cb40((int)this);
    (**(code **)(iVar10 + 400))(piVar5,0,*(undefined4 *)(*(int *)((int)this + 0x3c) + 4),0,uVar3);
  }
LAB_00a51630:
  *(undefined4 *)((int)this + 0x38) = DAT_0105bec0;
  return local_35;
}


//// FUNCTION FUN_00a51690 @ 00a51690 ////

void FUN_00a51690(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb4f0);
}


//// FUNCTION FUN_00a516b0 @ 00a516b0 ////

void FUN_00a516b0(void)

{
                    /* WARNING: Subroutine does not return */
  _free(DAT_010bb4f0);
}


//// FUNCTION FUN_00a516e0 @ 00a516e0 ////

void FUN_00a516e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  iVar3 = 0;
  if (0 < DAT_010bb4fc) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + DAT_010bb4f0;
      uVar5 = FUN_00acd42c();
      iVar2 = (int)uVar5;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0x3ff < iVar2) {
        iVar2 = 0x3ff;
      }
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(DAT_010bb4ec + iVar2 * 4);
      *(int *)(DAT_010bb4ec + iVar2 * 4) = iVar1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < DAT_010bb4fc);
  }
  return;
}


//// FUNCTION FUN_00a51770 @ 00a51770 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a51770(void)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0cb;
  local_c = ExceptionList;
  if (DAT_010bb4f0 == (void *)0x0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x3000);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar1,0xc,0x400,&LAB_00a51680);
    }
    local_4 = 0xffffffff;
    DAT_010bb500 = 0x400;
    DAT_010bb4f0 = pvVar1;
    DAT_010bb4ec = operator_new(0x1000);
  }
  _DAT_010bb4f4 = 0x7f7fffff;
  _DAT_010bb4f8 = 0xff7fffff;
  DAT_010bb4fc = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(iVar2 + (int)DAT_010bb4ec) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x1000);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a51840 @ 00a51840 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a51840(undefined4 param_1,float param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cfb0eb;
  local_c = ExceptionList;
  if (DAT_010bb4fc == DAT_010bb500) {
    iVar3 = DAT_010bb500 + 0x200;
    ExceptionList = &local_c;
    puVar1 = operator_new(iVar3 * 0xc);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00401380(puVar1,0xc,iVar3,&LAB_00a51680);
    }
    puVar4 = DAT_010bb4f0;
    for (uVar2 = DAT_010bb4fc * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010bb4f0);
  }
  puVar1 = DAT_010bb4f0 + DAT_010bb4fc * 3;
  puVar1[1] = param_2;
  *puVar1 = param_1;
  if (DAT_010bb4fc == 0) {
    _DAT_010bb4f8 = param_2;
  }
  else if (_DAT_010bb4f4 <= param_2) {
    if (_DAT_010bb4f8 < param_2) {
      _DAT_010bb4f8 = param_2;
    }
    goto LAB_00a5193a;
  }
  _DAT_010bb4f4 = param_2;
LAB_00a5193a:
  DAT_010bb4fc = DAT_010bb4fc + 1;
  return;
}


//// FUNCTION FUN_00a519d0 @ 00a519d0 ////

void __thiscall FUN_00a519d0(void *this,int param_1)

{
  if (*(void **)this != (void *)0x0) {
    FUN_0099b400(*(void **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return;
}


//// FUNCTION FUN_00a51a00 @ 00a51a00 ////

void __fastcall FUN_00a51a00(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  
  iVar4 = DAT_010bb504;
  if (DAT_010bb504 != param_1) {
    do {
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar3 + 0x24);
    } while (iVar4 != param_1);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      goto LAB_00a51a2e;
    }
  }
  DAT_010bb504 = *(int *)(iVar4 + 0x24);
LAB_00a51a2e:
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = puVar1[1] | 1;
    if ((void *)*puVar1 != (void *)0x0) {
      FUN_0099b400((void *)*puVar1);
      *puVar1 = 0;
    }
    FUN_0099f2f0((int)puVar1);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    FUN_0099b400(*(void **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}


//// FUNCTION FUN_00a51ab0 @ 00a51ab0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a51ab0(int param_1)

{
  float local_8;
  float local_4;
  
  if ((DAT_0105bec5 == '\0') && (*(void **)(param_1 + 0x2c) != (void *)0x0)) {
    local_8 = (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x1c)) * _DAT_0105be84 +
              *(float *)(param_1 + 0x1c);
    if (local_8 <= 0.001) {
      local_8 = 0.001;
    }
    local_4 = local_8;
    FUN_0099f770(*(void **)(param_1 + 0x2c),(float *)(param_1 + 8),&local_8,
                 *(float *)(param_1 + 0x18));
  }
  return;
}


//// FUNCTION FUN_00a51d00 @ 00a51d00 ////

undefined4 * __thiscall FUN_00a51d00(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  *(undefined4 *)((int)this + 0x30) = param_1[0xe];
  *(int *)((int)this + 4) = param_1[0xd] + 0x28;
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = param_1[1];
  *(undefined4 *)((int)this + 0x10) = param_1[2];
  *(undefined4 *)((int)this + 0x14) = param_1[3];
  *(undefined4 *)((int)this + 0x18) = param_1[4];
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = param_1[0xf];
  *(uint *)((int)this + 0x38) =
       *(uint *)((int)this + 0x38) ^ (param_1[0x10] ^ *(uint *)((int)this + 0x38)) & 1;
  if (*(int *)((int)this + 0x34) != 0) {
    InterlockedIncrement((LONG *)(*(int *)((int)this + 0x34) + 0x10));
  }
  if (((*(uint *)((int)this + 0x38) & 1) != 0) && (*(int *)((int)this + 0x34) == 0)) {
    *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) & 0xfffffffe;
  }
  if ((*(byte *)((int)this + 0x38) & 1) != 0) {
    *(undefined4 *)((int)this + 4) = 0x154;
  }
  if (*(char *)(param_1 + 5) != '\0') {
    pvVar2 = FUN_0099bb50((char *)(param_1 + 5),0,0,0,'\0');
    *(void **)((int)this + 0x28) = pvVar2;
  }
  *(void **)((int)this + 0x24) = DAT_010bb504;
  DAT_010bb504 = this;
  *(undefined4 *)this = 0;
  piVar3 = FUN_0099f680('\0',(void *)0x0);
  *(int **)((int)this + 0x2c) = piVar3;
  if (piVar3 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x28);
    if ((void *)*piVar3 != (void *)0x0) {
      FUN_0099b400((void *)*piVar3);
      *piVar3 = 0;
    }
    *piVar3 = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
    }
    return this;
  }
  FUN_00a51a00((int)this);
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION FUN_00a51e20 @ 00a51e20 ////

void __fastcall FUN_00a51e20(int *param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float local_8;
  float local_4;
  
  if (param_1[0xb] != 0) {
    puVar1 = (uint *)(param_1[0xb] + 4);
    *puVar1 = *puVar1 | 4;
  }
  iVar4 = param_1[1];
  param_1[7] = param_1[8];
  iVar2 = *param_1;
  if (iVar4 < iVar2) {
    FUN_00a51a00((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  param_1[8] = param_1[5];
  if (iVar2 < 0x14) {
    iVar4 = -iVar2;
  }
  else {
    if (iVar2 <= iVar4 + -0x14) goto LAB_00a51e98;
    iVar4 = iVar2 - iVar4;
  }
  param_1[8] = (int)((1.0 - (float)(iVar4 + 0x14) * 0.05) * (float)param_1[5]);
LAB_00a51e98:
  *param_1 = iVar2 + 1;
  local_8 = (float)param_1[7];
  local_4 = local_8;
  FUN_0099f770((void *)param_1[0xb],(float *)(param_1 + 2),&local_8,(float)param_1[6]);
  if ((param_1[0xe] & 1U) != 0) {
    puVar3 = (undefined4 *)param_1[0xd];
    if (puVar3[4] == 1) {
      if (puVar3 != (undefined4 *)0x0) {
        FUN_0040a5b0(puVar3);
        param_1[0xd] = 0;
      }
      param_1[0xe] = param_1[0xe] & 0xfffffffe;
      *param_1 = param_1[1] + 1;
      return;
    }
    if ((puVar3[0x1e] != 0) && (1.0 < *(float *)(puVar3[0x1e] + 0x3c))) {
      *param_1 = param_1[1] + -0x14;
      param_1[0xe] = param_1[0xe] & 0xfffffffe;
    }
  }
  return;
}


//// FUNCTION FUN_00a520e0 @ 00a520e0 ////

void __cdecl FUN_00a520e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a52120 @ 00a52120 ////

void __cdecl FUN_00a52120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00a52540 @ 00a52540 ////

void __cdecl FUN_00a52540(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a52570 @ 00a52570 ////

void __cdecl FUN_00a52570(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00a526e0 @ 00a526e0 ////

void __fastcall FUN_00a526e0(int param_1)

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


//// FUNCTION FUN_00a52760 @ 00a52760 ////

void * FUN_00a52760(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a52790 @ 00a52790 ////

void * FUN_00a52790(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00a527e0 @ 00a527e0 ////

void __fastcall FUN_00a527e0(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  LONG LVar3;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 4) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  }
  local_8 = 0;
  if (0 < local_c) {
    do {
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + local_8 * 4) + 4);
      (**(code **)(*piVar1 + 8))();
      piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
      if (piVar1[0x1e] != 0) {
        *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
      }
      LVar3 = InterlockedDecrement(piVar1 + 4);
      uVar2 = DAT_0105b588;
      if (LVar3 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar1)(1);
      }
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x14) + local_8 * 4) + 4);
      DAT_0105b588 = uVar2;
      (**(code **)(*piVar1 + 8))();
      piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
      if (piVar1[0x1e] != 0) {
        *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
      }
      LVar3 = InterlockedDecrement(piVar1 + 4);
      uVar2 = DAT_0105b588;
      if (LVar3 == 0) {
        DAT_0105b588 = 1;
        (**(code **)*piVar1)(1);
      }
      local_8 = local_8 + 1;
      DAT_0105b588 = uVar2;
    } while (local_8 < local_c);
  }
  if (local_4 != local_c) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + -4 + local_4 * 4) + 4);
    (**(code **)(*piVar1 + 8))();
    piVar1[0x27] = piVar1[0x27] & 0x7fffffff;
    if (piVar1[0x1e] != 0) {
      *(undefined4 *)(piVar1[0x1e] + 0x84) = 0;
    }
    LVar3 = InterlockedDecrement(piVar1 + 4);
    uVar2 = DAT_0105b588;
    DAT_0105b588 = uVar2;
    if (LVar3 == 0) {
      DAT_0105b588 = 1;
      (**(code **)*piVar1)(1);
      DAT_0105b588 = uVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00a52970 @ 00a52970 ////

void __fastcall FUN_00a52970(int param_1)

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


//// FUNCTION FUN_00a529d0 @ 00a529d0 ////

void __fastcall FUN_00a529d0(int param_1)

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


//// FUNCTION FUN_00a52a00 @ 00a52a00 ////

void __fastcall FUN_00a52a00(int param_1)

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


//// FUNCTION FUN_00a52a30 @ 00a52a30 ////

undefined4 * FUN_00a52a30(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a52a60 @ 00a52a60 ////

undefined4 * FUN_00a52a60(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00a52a90 @ 00a52a90 ////

void __cdecl FUN_00a52a90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a52ac0 @ 00a52ac0 ////

void __fastcall FUN_00a52ac0(int param_1)

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


