//// FUNCTION FUN_00968970 @ 00968970 ////

undefined4 __cdecl
FUN_00968970(uint *param_1,int *param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
            char *param_7,int *param_8,int param_9,int *param_10,char param_11,int *param_12)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *local_c;
  uint local_8 [2];
  
  local_c = (uint *)(*param_5 + param_4);
  param_1 = (uint *)(*param_2 + (int)param_1);
  if (*param_6 == 0) {
    if (0 < param_9) {
      pcVar5 = param_7 + param_9;
      iVar2 = 0;
      do {
        param_7[iVar2] = ((char)iVar2 + '\x01') * *pcVar5;
        iVar2 = iVar2 + 1;
        pcVar5 = pcVar5 + -1;
      } while (iVar2 < param_9);
    }
    param_10[2] = (int)param_7[1];
    param_10[3] = (int)*param_7;
    param_10[1] = (int)param_7[2];
    *param_10 = (int)param_7[3];
    if (param_11 == '\0') {
      *local_c = param_3;
      local_c = local_c + 1;
      *param_5 = *param_5 + 4;
    }
    else {
      *param_6 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *param_2 + 4;
    }
  }
  uVar4 = param_3 - *param_2;
  iVar2 = *param_8;
  for (param_4 = *param_12; (7 < (int)uVar4 && (0 < param_4)); param_4 = param_4 + -8) {
    if (param_11 == '\0') {
      FUN_00968400(param_1,local_c,param_10);
    }
    else {
      FUN_00968530(param_1,local_c,param_10);
    }
    local_c = local_c + 2;
    param_1 = param_1 + 2;
    *param_5 = *param_5 + 8;
    *param_2 = *param_2 + 8;
    if (param_9 <= iVar2) {
      iVar2 = 0;
    }
    *param_10 = *param_10 + (int)param_7[iVar2];
    iVar2 = iVar2 + 1;
    if (param_9 <= iVar2) {
      iVar2 = 0;
    }
    param_10[1] = param_10[1] - (int)param_7[iVar2];
    iVar2 = iVar2 + 1;
    if (param_9 <= iVar2) {
      iVar2 = 0;
    }
    param_10[2] = param_10[2] + (int)param_7[iVar2];
    iVar2 = iVar2 + 1;
    if (param_9 <= iVar2) {
      iVar2 = 0;
    }
    param_10[3] = param_10[3] - (int)param_7[iVar2];
    iVar2 = iVar2 + 1;
    *param_8 = iVar2;
    uVar4 = uVar4 - 8;
  }
  uVar1 = 0;
  if (((int)uVar4 < 1) || (param_4 < 1)) {
    if (uVar4 != 0) goto LAB_00968b95;
  }
  else {
    local_8[0] = 0;
    local_8[1] = 0;
    puVar6 = local_8;
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    if (param_11 == '\0') {
      FUN_00968400(local_8,local_c,param_10);
    }
    else {
      FUN_00968530(local_8,local_c,param_10);
    }
    *param_5 = *param_5 + uVar4;
    *param_2 = *param_2 + uVar4;
    puVar7 = (undefined4 *)((int)local_c + uVar4);
    for (uVar3 = 8 - uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = 8 - uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    param_4 = param_4 - uVar4;
  }
  uVar1 = 1;
LAB_00968b95:
  *param_6 = *param_5;
  *param_12 = param_4;
  return CONCAT31((int3)((uint)param_4 >> 8),uVar1);
}


//// FUNCTION FUN_00968bc0 @ 00968bc0 ////

void FUN_00968bc0(uint *param_1,uint *param_2,uint param_3,char *param_4,char param_5)

{
  char cVar1;
  char *_Memory;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint local_1c [2];
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar4 = param_4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(param_4 + 1);
  uVar3 = uVar5 + 1;
  _Memory = operator_new(uVar3);
  pcVar4 = _Memory;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = 0;
  uVar2 = 4;
  if (uVar5 != 0) {
    pcVar4 = param_4 + uVar5;
    do {
      _Memory[uVar3] = *pcVar4;
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + -1;
    } while (uVar3 < uVar5);
  }
  local_8 = (int)_Memory[1];
  local_4 = (int)*_Memory;
  local_10 = (int)_Memory[uVar5 - 2];
  local_c = (int)_Memory[uVar5 - 1];
  local_14 = param_2;
  if (param_5 == '\0') {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  else {
    if ((int)(param_3 + 10) < (int)*param_1) {
      uVar3 = param_3 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      param_3 = param_3 - uVar3;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 - 4;
  }
  if (7 < (int)param_3) {
    local_1c[0] = param_3 >> 3;
    param_3 = param_3 + local_1c[0] * -8;
    do {
      if (param_5 == '\0') {
        FUN_00968400(param_1,param_2,&local_10);
      }
      else {
        FUN_00968530(param_1,param_2,&local_10);
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_10 = local_10 + _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_c = local_c - _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_8 = local_8 + _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_4 = local_4 - _Memory[uVar2];
      uVar2 = uVar2 + 1;
      local_1c[0] = local_1c[0] - 1;
    } while (local_1c[0] != 0);
    local_1c[0] = 0;
  }
  if (0 < (int)param_3) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    puVar6 = local_1c;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    if (param_5 == '\0') {
      FUN_00968400(local_1c,param_2,&local_10);
    }
    else {
      FUN_00968530(local_1c,param_2,&local_10);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00968dd0 @ 00968dd0 ////

void FUN_00968dd0(uint *param_1,uint *param_2,uint param_3,char *param_4,char param_5)

{
  char cVar1;
  char *_Memory;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint *puVar6;
  uint local_1c [2];
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar4 = param_4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(param_4 + 1);
  uVar3 = uVar5 + 1;
  _Memory = operator_new(uVar3);
  pcVar4 = _Memory;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  uVar3 = 0;
  uVar2 = 4;
  if (uVar5 != 0) {
    pcVar4 = param_4 + (uVar5 - 1);
    do {
      _Memory[uVar3] = *pcVar4;
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + -1;
    } while (uVar3 < uVar5);
  }
  local_8 = (int)_Memory[1];
  local_4 = (int)*_Memory;
  local_10 = (int)_Memory[uVar5 - 2];
  local_c = (int)_Memory[uVar5 - 1];
  local_14 = param_2;
  if (param_5 == '\0') {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  else {
    if ((int)(param_3 + 10) < (int)*param_1) {
      uVar3 = param_3 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      param_3 = param_3 - uVar3;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 - 4;
  }
  if (7 < (int)param_3) {
    local_1c[0] = param_3 >> 3;
    param_3 = param_3 + local_1c[0] * -8;
    do {
      if (param_5 == '\0') {
        FUN_00968400(param_1,param_2,&local_10);
      }
      else {
        FUN_00968530(param_1,param_2,&local_10);
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_10 = local_10 + _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_c = local_c - _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_8 = local_8 + _Memory[uVar2];
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      local_4 = local_4 - _Memory[uVar2];
      uVar2 = uVar2 + 1;
      local_1c[0] = local_1c[0] - 1;
    } while (local_1c[0] != 0);
    local_1c[0] = 0;
  }
  if (0 < (int)param_3) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    puVar6 = local_1c;
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    if (param_5 == '\0') {
      FUN_00968400(local_1c,param_2,&local_10);
    }
    else {
      FUN_00968530(local_1c,param_2,&local_10);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00968fe0 @ 00968fe0 ////

void FUN_00968fe0(uint *param_1,uint *param_2,uint param_3,char *param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *_Memory;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_1c [2];
  uint *local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(param_4 + 1);
  uVar5 = uVar3 + 1;
  _Memory = operator_new(uVar5);
  pcVar2 = _Memory;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  uVar5 = 0;
  uVar4 = 4;
  if (uVar3 != 0) {
    pcVar2 = param_4 + uVar3;
    do {
      _Memory[uVar5] = ((char)uVar5 + '\x01') * *pcVar2;
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + -1;
    } while (uVar5 < uVar3);
  }
  local_8 = (int)_Memory[1];
  local_c = (int)_Memory[2];
  local_4 = (int)*_Memory;
  local_10 = (int)_Memory[3];
  local_14 = param_2;
  if (param_5 == '\0') {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  else {
    if ((int)(param_3 + 10) < (int)*param_1) {
      uVar5 = param_3 & 0x80000007;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
      }
      param_3 = param_3 - uVar5;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 - 4;
  }
  if (7 < (int)param_3) {
    local_1c[0] = param_3 >> 3;
    param_3 = param_3 + local_1c[0] * -8;
    do {
      if (param_5 == '\0') {
        FUN_00968400(param_1,param_2,&local_10);
      }
      else {
        FUN_00968530(param_1,param_2,&local_10);
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      if (uVar3 <= uVar4) {
        uVar4 = 0;
      }
      local_10 = local_10 + _Memory[uVar4];
      uVar4 = uVar4 + 1;
      if (uVar3 <= uVar4) {
        uVar4 = 0;
      }
      local_c = local_c - _Memory[uVar4];
      uVar4 = uVar4 + 1;
      if (uVar3 <= uVar4) {
        uVar4 = 0;
      }
      local_8 = local_8 + _Memory[uVar4];
      uVar4 = uVar4 + 1;
      if (uVar3 <= uVar4) {
        uVar4 = 0;
      }
      local_4 = local_4 - _Memory[uVar4];
      uVar4 = uVar4 + 1;
      local_1c[0] = local_1c[0] - 1;
    } while (local_1c[0] != 0);
    local_1c[0] = 0;
  }
  if (0 < (int)param_3) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    puVar6 = local_1c;
    for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *param_1;
      param_1 = param_1 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar6 = (char)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    if (param_5 == '\0') {
      FUN_00968400(local_1c,param_2,&local_10);
    }
    else {
      FUN_00968530(local_1c,param_2,&local_10);
    }
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009691f0 @ 009691f0 ////

void __cdecl
FUN_009691f0(uint *param_1,uint *param_2,uint param_3,char *param_4,char param_5,char param_6)

{
  if (param_6 == '\0') {
    FUN_00968fe0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (param_6 == '\x01') {
    FUN_00968bc0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  FUN_00968dd0(param_1,param_2,param_3,param_4,param_5);
  return;
}


//// FUNCTION FUN_00969290 @ 00969290 ////

void __fastcall FUN_00969290(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_009692b0 @ 009692b0 ////

void __fastcall FUN_009692b0(undefined2 *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_009692e0 @ 009692e0 ////

void __thiscall FUN_009692e0(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
  *(char **)((int)this + 4) = pcVar2;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)((int)this + 8) = param_2;
  return;
}


//// FUNCTION FUN_00969330 @ 00969330 ////

uint __cdecl FUN_00969330(uint param_1)

{
  bool bVar1;
  undefined4 in_EAX;
  uint3 uVar5;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *_Memory;
  undefined4 *puVar3;
  uint uVar4;
  int iVar6;
  undefined4 *puVar7;
  
  uVar5 = (uint3)((uint)in_EAX >> 8);
  if ((char)param_1 == '\x01') {
    return CONCAT31(uVar5,(char)param_1);
  }
  if ((char)param_1 != '\x02') {
    hModule = LoadLibraryA("Iphlpapi.dll");
    uVar4 = 0;
    if (hModule != (HMODULE)0x0) {
      pFVar2 = GetProcAddress(hModule,"GetAdaptersInfo");
      if (pFVar2 != (FARPROC)0x0) {
        _Memory = operator_new(0x280);
        param_1 = 4;
        puVar3 = _Memory;
        for (iVar6 = 0xa0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        iVar6 = (*pFVar2)(_Memory,&param_1);
        if (iVar6 == 0x6f) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (iVar6 == 0) {
          bVar1 = false;
          puVar3 = _Memory;
          puVar7 = (undefined4 *)*_Memory;
          do {
            if (*(char *)(puVar3 + 0x76) != '\0') {
              bVar1 = true;
            }
          } while (((undefined4 *)*puVar7 != (undefined4 *)0x0) &&
                  (puVar3 = puVar7, puVar7 = (undefined4 *)*puVar7, !bVar1));
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      uVar4 = FreeLibrary(hModule);
    }
    return uVar4 & 0xffffff00;
  }
  return (uint)uVar5 << 8;
}


//// FUNCTION FUN_00969450 @ 00969450 ////

byte * __cdecl FUN_00969450(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    bVar1 = *param_1;
    bVar2 = false;
    pbVar5 = param_2;
    do {
      if (bVar1 == 0) {
        return (byte *)0x0;
      }
      iVar3 = _tolower((uint)*pbVar5);
      iVar4 = _tolower((uint)*param_1);
      if (iVar3 == iVar4) {
        if (!bVar2) {
          bVar2 = true;
        }
        pbVar5 = pbVar5 + 1;
      }
      else if (bVar2) {
        if (*pbVar5 == 0) {
          return param_1;
        }
        bVar2 = false;
        pbVar5 = param_2;
      }
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
    } while( true );
  }
  return (byte *)0x0;
}


//// FUNCTION FUN_009694c0 @ 009694c0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl FUN_009694c0(int param_1,ushort param_2,undefined2 *param_3,byte *param_4)

{
  byte bVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_1014;
  undefined1 local_1010;
  undefined1 local_100f [7];
  byte *pbStack_1008;
  undefined4 local_c;
  
  local_c = DAT_00e9a098;
  hModule = LoadLibraryA("wininet.dll");
  pbVar3 = (byte *)0x0;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"InternetQueryOptionA");
    if (pFVar2 != (FARPROC)0x0) {
      local_1010 = 0;
      puVar9 = (undefined4 *)local_100f;
      for (iVar6 = 0x3ff; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined2 *)puVar9 = 0;
      *(undefined1 *)((int)puVar9 + 2) = 0;
      local_1014 = 0x1000;
      iVar6 = (*pFVar2)(0,0x26,&local_1010,&local_1014);
      if ((char)iVar6 != '\0') {
        FreeLibrary(hModule);
        if (((param_4 == (byte *)0x0) ||
            (pbVar3 = FUN_00969450(pbStack_1008,param_4), pbVar3 == (byte *)0x0)) &&
           ((pbVar4 = FUN_00969450((byte *)local_100f._3_4_,(byte *)"http="), pbVar4 != (byte *)0x0
            || (pbVar3 = (byte *)0x0, pbVar4 = (byte *)local_100f._3_4_,
               (byte *)local_100f._3_4_ != (byte *)0x0)))) {
          uVar7 = 0;
          if (pbVar4 != (byte *)0x0) {
            while( true ) {
              bVar1 = pbVar4[uVar7];
              if ((bVar1 == 0) || (bVar1 == 0x3a)) break;
              if (uVar7 < param_2) {
                *(byte *)((uint)uVar7 + param_1) = bVar1;
              }
              uVar7 = uVar7 + 1;
            }
          }
          if (uVar7 < param_2) {
            *(undefined1 *)((uint)uVar7 + param_1) = 0;
          }
          bVar1 = pbVar4[uVar7 + 1];
          uVar8 = 0;
          pbVar4 = pbVar4 + uVar7 + 1;
          pbVar3 = pbVar4;
          while ((bVar1 != 0 && (*pbVar3 != 0x20))) {
            uVar8 = uVar8 + 1;
            bVar1 = pbVar4[uVar8 & 0xffff];
            pbVar3 = pbVar4 + (uVar8 & 0xffff);
          }
          pbVar4[uVar8 & 0xffff] = 0;
          lVar5 = _atol((char *)pbVar4);
          *param_3 = (short)lVar5;
          return CONCAT31((int3)((uint)lVar5 >> 8),1);
        }
        goto LAB_00969509;
      }
    }
    pbVar3 = (byte *)FreeLibrary(hModule);
  }
LAB_00969509:
  return (uint)pbVar3 & 0xffffff00;
}


//// FUNCTION FUN_00969620 @ 00969620 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __cdecl
FUN_00969620(char *param_1,undefined2 param_2,char *param_3,char *param_4,ushort param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_1274 [1177];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4e9b;
  pvStack_c = ExceptionList;
  local_10 = DAT_00e9a098;
  ExceptionList = &pvStack_c;
  FUN_0096dbb0(local_1274);
  local_4 = 0;
  if (param_4 != (char *)0x0) {
    FUN_0096d150(local_1274,param_4,param_5);
  }
  iVar1 = FUN_0096e580(local_1274,param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0096e860(local_1274,0,param_3,(void *)0x0,(char *)0x0,0);
    if ((iVar1 == 8) && (iVar1 = FUN_0096f7c0(local_1274,'\0'), iVar1 == 7)) {
      iVar1 = FUN_0096da50((int)local_1274);
      local_4 = 0xffffffff;
      if (iVar1 != 0) {
        uVar3 = FUN_0096dcf0(local_1274);
        ExceptionList = pvStack_c;
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    local_4 = 0xffffffff;
    uVar2 = FUN_0096dcf0(local_1274);
  }
  else {
    local_4 = 0xffffffff;
    uVar2 = FUN_0096dcf0(local_1274);
  }
  ExceptionList = pvStack_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00969740 @ 00969740 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * __cdecl FUN_00969740(byte *param_1,undefined2 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined2 *this;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 local_808;
  char local_804 [2048];
  undefined4 local_4;
  
  uVar2 = 0;
  local_4 = DAT_00e9a098;
  local_808 = 0;
  uVar1 = FUN_00969620((char *)param_1,param_2,param_3,(char *)0x0,0);
  if ((char)uVar1 == '\0') {
    param_2 = 0x1f90;
    uVar1 = FUN_00969620((char *)param_1,0x1f90,param_3,(char *)0x0,0);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_009694c0((int)local_804,0x800,(undefined2 *)&local_808,param_1);
      uVar2 = local_808;
      if ((char)uVar1 == '\0') {
        return (undefined2 *)0x0;
      }
      param_2 = 0x2440;
      uVar3 = (ushort)local_808;
      uVar1 = FUN_00969620((char *)param_1,0x2440,param_3,local_804,uVar3);
      if ((char)uVar1 == '\0') {
        param_2 = 0x1f90;
        uVar1 = FUN_00969620((char *)param_1,0x1f90,param_3,local_804,uVar3);
        if ((char)uVar1 == '\0') {
          return (undefined2 *)0x0;
        }
      }
    }
  }
  this = operator_new(0xc);
  if (this == (undefined2 *)0x0) {
    this = (undefined2 *)0x0;
  }
  else {
    *this = 0;
    *(undefined4 *)(this + 2) = 0;
    this[4] = 0;
  }
  if ((short)uVar2 != 0) {
    FUN_009692e0(this,local_804,(short)uVar2);
  }
  *this = param_2;
  return this;
}


//// FUNCTION FUN_00969860 @ 00969860 ////

void __fastcall FUN_00969860(undefined4 *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00969880 @ 00969880 ////

void __fastcall FUN_00969880(undefined2 *param_1)

{
  if (*(void **)(param_1 + 2) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 2));
  }
  *param_1 = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_00969900 @ 00969900 ////

ulonglong FUN_00969900(void)

{
  ulonglong uVar1;
  
  GetTickCount();
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_009699a0 @ 009699a0 ////

void __thiscall FUN_009699a0(void *this,undefined4 param_1)

{
  DWORD DVar1;
  ulonglong uVar2;
  
  if (*(float *)((int)this + 0x108) != 0.0) {
    uVar2 = FUN_00969900();
    *(int *)((int)this + 0x104) = (int)uVar2;
    DVar1 = GetTickCount();
    *(DWORD *)((int)this + 0x100) = DVar1;
    *(undefined4 *)((int)this + 0x108) = param_1;
    return;
  }
  *(undefined4 *)((int)this + 0x10c) = param_1;
  return;
}


//// FUNCTION FUN_00969a30 @ 00969a30 ////

bool __fastcall FUN_00969a30(int param_1)

{
  return *(int *)(param_1 + 0x58) != -1;
}


//// FUNCTION FUN_00969ba0 @ 00969ba0 ////

undefined4 __thiscall FUN_00969ba0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  timeval *timeout;
  undefined1 local_10d;
  timeval local_10c;
  fd_set local_104;
  
  local_10c.tv_sec = 0;
  if (param_1 == 0) {
    local_10c.tv_usec = 0x32;
  }
  else {
    local_10c.tv_usec = param_1 * 1000;
    if (param_1 == -1) {
      local_104.fd_array[0] = *(SOCKET *)((int)this + 0x58);
      timeout = (PTIMEVAL)0x0;
      goto LAB_00969bd0;
    }
  }
  local_104.fd_array[0] = *(SOCKET *)((int)this + 0x58);
  timeout = &local_10c;
LAB_00969bd0:
  local_104.fd_count = 1;
  uVar1 = select(0,&local_104,(fd_set *)0x0,(fd_set *)0x0,timeout);
  if (uVar1 == 0xffffffff) {
    local_10d = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10d,&DAT_00e33ba4);
  }
  if (uVar1 == 1) {
    iVar2 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x58),&local_104);
    uVar1 = 0;
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00969c50 @ 00969c50 ////

undefined4 __thiscall FUN_00969c50(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_10d;
  timeval local_10c;
  fd_set local_104;
  
  local_10c.tv_sec = 0;
  if (param_1 == 0) {
    local_10c.tv_usec = 0x32;
  }
  else {
    local_10c.tv_usec = param_1 * 1000;
  }
  local_104.fd_array[0] = *(SOCKET *)((int)this + 0x58);
  local_104.fd_count = 1;
  uVar1 = select(0,(fd_set *)0x0,&local_104,(fd_set *)0x0,&local_10c);
  if (uVar1 == 0xffffffff) {
    local_10d = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10d,&DAT_00e33ba4);
  }
  if (uVar1 == 1) {
    iVar2 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x58),&local_104);
    uVar1 = 0;
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00969cf0 @ 00969cf0 ////

undefined4 __fastcall FUN_00969cf0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10d;
  timeval local_10c;
  fd_set local_104;
  
  uVar1 = FUN_00969c50(param_1,0);
  if ((char)uVar1 != '\0') {
    return 0;
  }
  local_104.fd_array[0] = *(SOCKET *)((int)param_1 + 0x58);
  local_10c.tv_sec = 0;
  local_10c.tv_usec = 0x32;
  local_104.fd_count = 1;
  iVar2 = select(0,(fd_set *)0x0,(fd_set *)0x0,&local_104,&local_10c);
  if (iVar2 != -1) {
    if ((iVar2 == 1) &&
       (iVar2 = __WSAFDIsSet(*(SOCKET *)((int)param_1 + 0x58),&local_104), iVar2 != 0)) {
      return 5;
    }
    return 4;
  }
  local_10d = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10d,&DAT_00e33ba4);
}


//// FUNCTION FUN_00969d90 @ 00969d90 ////

int __thiscall FUN_00969d90(void *this,char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = send(*(SOCKET *)((int)this + 0x58),param_1,param_2,0);
  if (iVar1 < 0) {
    iVar2 = WSAGetLastError();
    if (iVar2 == 0x2733) {
      return 0;
    }
  }
  else {
    *(int *)((int)this + 0xb8) = iVar1;
    *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + iVar1;
  }
  return iVar1;
}


//// FUNCTION FUN_00969de0 @ 00969de0 ////

u_long __fastcall FUN_00969de0(int param_1)

{
  u_long local_4;
  
  local_4 = 0;
  ioctlsocket(*(SOCKET *)(param_1 + 0x58),0x4004667f,&local_4);
  return local_4;
}


//// FUNCTION FUN_0096a050 @ 0096a050 ////

void __cdecl FUN_0096a050(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0096a0f0 @ 0096a0f0 ////

uint __thiscall FUN_0096a0f0(void *this,uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(uint *)((int)this + 0x14) < param_1) {
    FUN_00acbc74();
  }
  uVar1 = *(int *)((int)this + 0x14) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    uVar1 = param_2;
    if (param_4 <= param_2) {
      uVar1 = param_4;
    }
    if (*(uint *)((int)this + 0x18) < 0x10) {
      iVar2 = (int)this + 4;
    }
    else {
      iVar2 = *(int *)((int)this + 4);
    }
    bVar5 = false;
    uVar3 = 0;
    bVar6 = true;
    pbVar4 = (byte *)(iVar2 + param_1);
    do {
      if (uVar1 == 0) break;
      uVar1 = uVar1 - 1;
      bVar5 = *pbVar4 < *param_3;
      bVar6 = *pbVar4 == *param_3;
      pbVar4 = pbVar4 + 1;
      param_3 = param_3 + 1;
    } while (bVar6);
    if (!bVar6) {
      uVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if (param_4 <= param_2) {
    return (uint)(param_2 != param_4);
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0096a200 @ 0096a200 ////

void __fastcall FUN_0096a200(void *param_1)

{
  if (*(float *)((int)param_1 + 0x108) != 0.0) {
    if (*(float *)((int)param_1 + 0x108) != 0.0) {
      *(undefined4 *)((int)param_1 + 0x10c) = *(undefined4 *)((int)param_1 + 0x108);
      FUN_009699a0(param_1,0);
      return;
    }
    *(undefined4 *)((int)param_1 + 0x10c) = *(undefined4 *)((int)param_1 + 0x10c);
    FUN_009699a0(param_1,0);
  }
  return;
}


//// FUNCTION FUN_0096a410 @ 0096a410 ////

void __thiscall FUN_0096a410(void *this,int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x18)) {
    FUN_0096a0f0(this,0,*(uint *)((int)this + 0x14),*(byte **)(param_1 + 4),
                 *(uint *)(param_1 + 0x14));
    return;
  }
  FUN_0096a0f0(this,0,*(uint *)((int)this + 0x14),(byte *)(param_1 + 4),*(uint *)(param_1 + 0x14));
  return;
}


//// FUNCTION FUN_0096a490 @ 0096a490 ////

void __thiscall FUN_0096a490(void *this,undefined4 param_1)

{
  DWORD DVar1;
  
  DVar1 = GetTickCount();
  *(DWORD *)((int)this + 0x100) = DVar1;
  *(undefined4 *)((int)this + 0x104) = param_1;
  FUN_0096a200(this);
  return;
}


//// FUNCTION FUN_0096a500 @ 0096a500 ////

void __fastcall FUN_0096a500(int param_1)

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


//// FUNCTION FUN_0096a580 @ 0096a580 ////

void __fastcall FUN_0096a580(int param_1)

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


//// FUNCTION FUN_0096a5b0 @ 0096a5b0 ////

void FUN_0096a5b0(void)

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


//// FUNCTION FUN_0096a5d0 @ 0096a5d0 ////

void __fastcall FUN_0096a5d0(int param_1)

{
  FUN_0096a500(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0096a5f0 @ 0096a5f0 ////

void FUN_0096a5f0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0096a6d0 @ 0096a6d0 ////

void * __fastcall FUN_0096a6d0(void *param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)((int)param_1 + 0x100) = DVar1;
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  FUN_0096a200(param_1);
  FUN_0096a200(param_1);
  return param_1;
}


//// FUNCTION FUN_0096a710 @ 0096a710 ////

undefined4 __cdecl FUN_0096a710(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  fd_set *readfds;
  fd_set *writefds;
  int *piVar4;
  timeval *timeout;
  fd_set *local_110;
  timeval local_10c;
  fd_set local_104;
  
  DAT_01050b21 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_3 == 0) {
    local_10c.tv_usec = 0x32;
  }
  else {
    local_10c.tv_usec = param_3 * 1000;
  }
  writefds = (fd_set *)0x0;
  readfds = (fd_set *)0x0;
  local_10c.tv_sec = 0;
  local_104.fd_count = 0;
  local_110 = (fd_set *)0x0;
  if (param_2 == 1) {
    readfds = &local_104;
  }
  else if (param_2 == 2) {
    writefds = &local_104;
  }
  else if (param_2 == 4) {
    local_110 = &local_104;
  }
  piVar2 = (int *)**(int **)(param_1 + 4);
  if (piVar2 != *(int **)(param_1 + 4)) {
    do {
      iVar3 = piVar2[2];
      uVar1 = 0;
      if (local_104.fd_count != 0) {
        do {
          if (local_104.fd_array[uVar1] == *(SOCKET *)(iVar3 + 0x58)) break;
          uVar1 = uVar1 + 1;
        } while (uVar1 < local_104.fd_count);
      }
      if ((uVar1 == local_104.fd_count) && (local_104.fd_count < 0x40)) {
        local_104.fd_array[uVar1] = *(SOCKET *)(iVar3 + 0x58);
        local_104.fd_count = local_104.fd_count + 1;
      }
      *(undefined1 *)(iVar3 + 0xac) = 0;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 4));
  }
  if (param_3 == -1) {
    timeout = (PTIMEVAL)0x0;
  }
  else {
    timeout = &local_10c;
  }
  piVar2 = (int *)select(0,readfds,writefds,local_110,timeout);
  if (piVar2 != (int *)0xffffffff) {
    if (0 < (int)piVar2) {
      piVar2 = *(int **)(param_1 + 4);
      piVar4 = (int *)*piVar2;
      if (piVar4 != piVar2) {
        do {
          iVar3 = __WSAFDIsSet(*(SOCKET *)(piVar4[2] + 0x58),&local_104);
          piVar2 = (int *)0x0;
          if (iVar3 != 0) {
            piVar2 = (int *)piVar4[2];
            *(undefined1 *)(piVar2 + 0x2b) = 1;
          }
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(param_1 + 4));
      }
      DAT_01050b21 = 1;
    }
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  return 0xffffff00;
}


//// FUNCTION FUN_0096a8d0 @ 0096a8d0 ////

void __fastcall FUN_0096a8d0(int param_1)

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


//// FUNCTION FUN_0096a940 @ 0096a940 ////

void __fastcall FUN_0096a940(int param_1)

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


//// FUNCTION FUN_0096a970 @ 0096a970 ////

void __fastcall FUN_0096a970(int param_1)

{
  FUN_0096a500(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0096a9e0 @ 0096a9e0 ////

undefined1 * FUN_0096a9e0(undefined1 *param_1,int param_2,undefined1 *param_3)

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


//// FUNCTION FUN_0096aa10 @ 0096aa10 ////

void __fastcall FUN_0096aa10(int param_1)

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


//// FUNCTION FUN_0096aa40 @ 0096aa40 ////

undefined4 __fastcall FUN_0096aa40(void *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)param_1 + 0x88);
  if (((iVar1 != 0) && (*(int *)((int)param_1 + 0x8c) != iVar1)) &&
     (*(int *)((int)param_1 + 0x58) != -1)) {
    iVar1 = FUN_00969c50(param_1,0);
    if ((char)iVar1 != '\0') {
      if (*(int *)((int)param_1 + 0x88) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)param_1 + 0x8c) - *(int *)((int)param_1 + 0x88);
      }
      iVar1 = send(*(SOCKET *)((int)param_1 + 0x58),*(char **)((int)param_1 + 0x88),iVar1,0);
      if (iVar1 == -1) {
        return 0xffffff00;
      }
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_0096aab0 @ 0096aab0 ////

undefined4 FUN_0096aab0(void)

{
  undefined4 in_EAX;
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)CONCAT31((int3)((uint)in_EAX >> 8),DAT_01050b20);
  if (DAT_01050b20 != '\0') {
    piVar2 = (int *)*DAT_01050b28;
    piVar1 = DAT_01050b28;
    if (piVar2 != DAT_01050b28) {
      do {
        if (*(int *)(piVar2[2] + 0x58) != -1) {
          FUN_0096aa40((void *)piVar2[2]);
          piVar1 = DAT_01050b28;
        }
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
    }
    DAT_01050b20 = '\0';
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}


//// FUNCTION FUN_0096aaf0 @ 0096aaf0 ////

int __fastcall FUN_0096aaf0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0096a5b0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0096ab60 @ 0096ab60 ////

void * __fastcall FUN_0096ab60(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4eb8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)((int)param_1 + 4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined1 *)puVar1 = 0;
  local_4 = 0;
  puVar2 = puVar1;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_00963ea0(param_1,&local_10,(int)puVar1,*(int *)((int)param_1 + 0x14) + (int)puVar2);
  *(undefined2 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0096abe0 @ 0096abe0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong __cdecl FUN_0096abe0(undefined4 param_1,char *param_2)

{
  ulong uVar1;
  char **ppcVar2;
  hostent *phVar3;
  uint in_stack_0000001c;
  int local_30;
  undefined1 local_2c [4];
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4ee0;
  local_c = ExceptionList;
  local_10 = DAT_00e9a098;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (void *)((uint)local_28[0] & 0xffffff00);
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00963ea0(local_2c,&local_30,(int)local_28,(uint)local_28);
  ppcVar2 = (char **)param_2;
  if (in_stack_0000001c < 0x10) {
    ppcVar2 = &param_2;
  }
  uVar1 = inet_addr((char *)ppcVar2);
  if (uVar1 == 0xffffffff) {
    ppcVar2 = (char **)param_2;
    if (in_stack_0000001c < 0x10) {
      ppcVar2 = &param_2;
    }
    phVar3 = gethostbyname((char *)ppcVar2);
    if (phVar3 == (hostent *)0x0) {
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (void *)((uint)local_28[0] & 0xffffff00);
      if (in_stack_0000001c < 0x10) {
        ExceptionList = local_c;
        return 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    uVar1 = *(ulong *)*phVar3->h_addr_list;
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (void *)((uint)local_28[0] & 0xffffff00);
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_c;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_0096ad80 @ 0096ad80 ////

void FUN_0096ad80(void)

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
  puStack_8 = &LAB_00cf4ef8;
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


//// FUNCTION FUN_0096adf0 @ 0096adf0 ////

void __thiscall FUN_0096adf0(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf4f18;
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


//// FUNCTION FUN_0096ae90 @ 0096ae90 ////

undefined4 __cdecl FUN_0096ae90(void *param_1,ulong *param_2)

{
  byte ***pppbVar1;
  uint uVar2;
  ulong uVar3;
  undefined4 in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  char *pcVar4;
  undefined1 local_28 [4];
  byte **local_24 [4];
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4f38;
  local_c = ExceptionList;
  uVar3 = *(ulong *)((int)param_1 + 0x1c);
  if (uVar3 == 0) {
    local_10 = 0xf;
    local_14 = 0;
    local_24[0] = (byte **)((uint)local_24[0] & 0xffffff00);
    ExceptionList = &local_c;
    FUN_00405d50(local_28,(undefined4 *)&DAT_00d70668,3);
    local_4 = 0;
    pppbVar1 = (byte ***)local_24[0];
    if (local_10 < 0x10) {
      pppbVar1 = local_24;
    }
    uVar2 = FUN_0096a0f0(param_1,0,*(uint *)((int)param_1 + 0x14),(byte *)pppbVar1,local_14);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24[0]);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24[0] = (byte **)((uint)local_24[0] & 0xffffff00);
    if (uVar2 == 0) {
      *param_2 = 0;
      ExceptionList = local_c;
      return 1;
    }
    pcVar4 = (char *)(in_stack_ffffffb4 & 0xffffff00);
    FUN_00405c30(&stack0xffffffb0,param_1,0,0xffffffff);
    uVar3 = FUN_0096abe0(in_stack_ffffffb0,pcVar4);
    *(ulong *)((int)param_1 + 0x1c) = uVar3;
    if (*param_2 == 0xffffffff) {
      ExceptionList = local_c;
      return uVar3 & 0xffffff00;
    }
  }
  *param_2 = uVar3;
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_0096afc0 @ 0096afc0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

SOCKET __cdecl FUN_0096afc0(void *param_1,int param_2)

{
  SOCKET s;
  int iVar1;
  sockaddr local_14;
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if (param_2 == 1) {
    iVar1 = 1;
  }
  else {
    if (param_2 != 2) {
      return 0xffffffff;
    }
    iVar1 = 2;
  }
  s = socket(2,iVar1,0);
  if (s != 0xffffffff) {
    FUN_0096ae90(param_1,(ulong *)(local_14.sa_data + 2));
    local_14.sa_data._0_2_ = htons(*(u_short *)((int)param_1 + 0x20));
    local_14.sa_family = 2;
    iVar1 = bind(s,&local_14,0x10);
    if (iVar1 == 0) {
      return s;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0096b050 @ 0096b050 ////

undefined4 __cdecl FUN_0096b050(void *param_1,undefined2 *param_2)

{
  u_short uVar1;
  undefined2 extraout_var;
  
  *param_2 = 2;
  FUN_0096ae90(param_1,(ulong *)(param_2 + 2));
  if (*(ulong *)(param_2 + 2) == 0xffffffff) {
    return 0xffffff00;
  }
  uVar1 = htons(*(u_short *)((int)param_1 + 0x20));
  param_2[1] = uVar1;
  return CONCAT31((int3)(CONCAT22(extraout_var,uVar1) >> 8),1);
}


//// FUNCTION FUN_0096b0a0 @ 0096b0a0 ////

undefined4 __cdecl FUN_0096b0a0(int param_1,void *param_2)

{
  char cVar1;
  u_short uVar2;
  char *pcVar3;
  undefined2 extraout_var;
  char *pcVar4;
  
  pcVar3 = inet_ntoa((in_addr)((_union_1235 *)(param_1 + 4))->S_un_b);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00405d50(param_2,(undefined4 *)pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  *(undefined4 *)((int)param_2 + 0x1c) = *(undefined4 *)(param_1 + 4);
  uVar2 = ntohs(*(u_short *)(param_1 + 2));
  *(u_short *)((int)param_2 + 0x20) = uVar2;
  return CONCAT31((int3)(CONCAT22(extraout_var,uVar2) >> 8),1);
}


//// FUNCTION FUN_0096b0f0 @ 0096b0f0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall FUN_0096b0f0(int param_1)

{
  int iVar1;
  char *_Dest;
  int _Radix;
  undefined1 local_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  local_3c = *(SOCKET *)(param_1 + 0x58);
  if (local_3c != 0xffffffff) {
    iVar1 = ioctlsocket(local_3c,-0x7ffb9982,(u_long *)&stack0x00000004);
    if (iVar1 == 0) {
      return 1;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    FUN_00405d50(local_54,(undefined4 *)"Winsock Error: ",0xf);
    _Radix = 10;
    _Dest = local_38;
    iVar1 = WSAGetLastError();
    __itoa(iVar1,_Dest,_Radix);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
  }
  return local_3c & 0xffffff00;
}


//// FUNCTION FUN_0096b190 @ 0096b190 ////

undefined4 __thiscall FUN_0096b190(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0xffffff00;
  }
  *(int *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 0x5c) = *param_2;
  *(undefined4 *)((int)this + 0x60) = param_2[1];
  *(undefined4 *)((int)this + 100) = param_2[2];
  *(undefined4 *)((int)this + 0x68) = param_2[3];
  *(undefined4 *)((int)this + 0x6c) = *param_3;
  *(undefined4 *)((int)this + 0x70) = param_3[1];
  *(undefined4 *)((int)this + 0x74) = param_3[2];
  *(undefined4 *)((int)this + 0x78) = param_3[3];
  FUN_0096b0a0((int)this + 0x5c,this);
  uVar1 = FUN_0096b0a0((int)this + 0x6c,(void *)((int)this + 0x2c));
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0096b210 @ 0096b210 ////

void * __thiscall FUN_0096b210(void *this,void *param_1)

{
  FUN_00405c30(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)((int)param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)param_1 + 0x28);
  return this;
}


//// FUNCTION FUN_0096b250 @ 0096b250 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096b250(void *this,void *param_1)

{
  u_short uVar1;
  SOCKET s;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char local_65;
  sockaddr local_64;
  undefined1 local_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  local_65 = '\x01';
  s = socket(2,1,0);
  *(SOCKET *)((int)this + 0x58) = s;
  iVar2 = setsockopt(s,0xffff,4,&local_65,1);
  if (iVar2 != 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    FUN_00405d50(local_54,(undefined4 *)"Winsock Error: ",0xf);
    iVar4 = 10;
    pcVar3 = local_38;
    iVar2 = WSAGetLastError();
    __itoa(iVar2,pcVar3,iVar4);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      _free(local_50);
    }
    return local_3c & 0xffffff00;
  }
  local_64.sa_family = 2;
  FUN_0096ae90(param_1,(ulong *)(local_64.sa_data + 2));
  if (local_64.sa_data._2_4_ != -1) {
    uVar1 = htons(*(u_short *)((int)param_1 + 0x20));
    local_64.sa_data[0] = (char)uVar1;
    local_64.sa_data[1] = (char)(uVar1 >> 8);
  }
  *(undefined4 *)((int)this + 0x6c) = local_64._0_4_;
  *(undefined4 *)((int)this + 0x70) = local_64.sa_data._2_4_;
  *(undefined4 *)((int)this + 0x74) = local_64.sa_data._6_4_;
  *(undefined4 *)((int)this + 0x78) = local_64.sa_data._10_4_;
  FUN_00405c30((void *)((int)this + 0x2c),param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)param_1 + 0x1c);
  *(undefined2 *)((int)this + 0x4c) = *(undefined2 *)((int)param_1 + 0x20);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)param_1 + 0x24);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)param_1 + 0x28);
  iVar2 = bind(*(SOCKET *)((int)this + 0x58),&local_64,0x10);
  if (iVar2 == 0) {
    iVar2 = listen(*(SOCKET *)((int)this + 0x58),0x7fffffff);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x80) = 1;
      *(undefined1 *)((int)this + 0x7c) = 1;
      return 1;
    }
    FUN_00406070(local_54,"Winsock Error: ");
  }
  else {
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (void *)((uint)local_50 & 0xffffff00);
    FUN_00405d50(local_54,(undefined4 *)"Winsock Error: ",0xf);
  }
  iVar4 = 10;
  pcVar3 = local_38;
  iVar2 = WSAGetLastError();
  __itoa(iVar2,pcVar3,iVar4);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  return local_3c & 0xffffff00;
}


//// FUNCTION FUN_0096b430 @ 0096b430 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096b430(void *this,void *param_1)

{
  int _Value;
  undefined4 uVar1;
  char *_Dest;
  int _Radix;
  int local_68;
  undefined1 local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  sockaddr local_48;
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if (*(char *)((int)this + 0x7c) == '\0') {
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    FUN_00405d50(local_64,(undefined4 *)"Winsock Error: ",0xf);
    _Radix = 10;
    _Dest = local_38;
    _Value = WSAGetLastError();
    __itoa(_Value,_Dest,_Radix);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  else {
    local_68 = 0x10;
    local_4c = accept(*(SOCKET *)((int)this + 0x58),&local_48,&local_68);
    if (local_4c != 0xffffffff) {
      uVar1 = FUN_0096b190(param_1,local_4c,(undefined4 *)&local_48,(undefined4 *)((int)this + 0x6c)
                          );
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  return local_4c & 0xffffff00;
}


//// FUNCTION FUN_0096b4f0 @ 0096b4f0 ////

bool __thiscall FUN_0096b4f0(void *this,void *param_1)

{
  SOCKET SVar1;
  
  SVar1 = FUN_0096afc0(param_1,*(int *)((int)param_1 + 0x24));
  *(SOCKET *)((int)this + 0x58) = SVar1;
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)param_1 + 0x24);
  return SVar1 != 0xffffffff;
}


//// FUNCTION FUN_0096b620 @ 0096b620 ////

uint __thiscall FUN_0096b620(void *this,void *param_1)

{
  undefined4 uVar1;
  uint in_EAX;
  
  if (*(int *)((int)this + 0x58) == -1) {
    return in_EAX & 0xffffff00;
  }
  FUN_00405c30(param_1,this,0,0xffffffff);
  *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined2 *)((int)param_1 + 0x20) = *(undefined2 *)((int)this + 0x20);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)this + 0x24);
  uVar1 = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)param_1 + 0x28) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_0096b710 @ 0096b710 ////

void __thiscall FUN_0096b710(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

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
      iVar1 = FUN_0096ad80();
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
      _Dst = FUN_0096a9e0((undefined1 *)((int)pvVar3 + sVar5),param_2,(undefined1 *)&param_3);
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
      FUN_0096a9e0(*(undefined1 **)((int)this + 8),
                   (int)(param_1 + (param_2 - (int)*(undefined1 **)((int)this + 8))),
                   (undefined1 *)&param_3);
      iVar1 = *(int *)((int)this + 8) + param_2;
      *(int *)((int)this + 8) = iVar1;
      FUN_0096a050(param_1,(undefined1 *)(iVar1 - param_2),(undefined1 *)&param_3);
      return;
    }
    sVar5 = (int)pvVar3 - (int)((int)pvVar3 - param_2);
    pvVar2 = _memmove(pvVar3,(void *)((int)pvVar3 - param_2),sVar5);
    *(size_t *)((int)this + 8) = (int)pvVar2 + sVar5;
    sVar5 = (int)pvVar3 + (-param_2 - (int)param_1);
    _memmove((void *)((int)pvVar3 - sVar5),param_1,sVar5);
    FUN_0096a050(param_1,param_1 + param_2,(undefined1 *)&param_3);
  }
  return;
}


//// FUNCTION FUN_0096b920 @ 0096b920 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096b920(void *this,void *param_1,void *param_2,int param_3)

{
  ulong *puVar1;
  u_short uVar2;
  SOCKET SVar3;
  ulong uVar4;
  int iVar5;
  char *_Dest;
  int _Radix;
  sockaddr local_64;
  undefined1 local_54 [28];
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  uVar2 = htons(*(u_short *)((int)param_1 + 0x20));
  puVar1 = (ulong *)((int)this + 0x60);
  *(u_short *)((int)this + 0x5e) = uVar2;
  *(undefined2 *)((int)this + 0x5c) = 2;
  FUN_0096ae90(param_1,puVar1);
  uVar4 = *puVar1;
  if (uVar4 == 0xffffffff) goto LAB_0096ba17;
  *(int *)((int)this + 0x80) = param_3;
  if (param_3 == 1) {
LAB_0096b998:
    iVar5 = 1;
  }
  else {
    if (param_3 != 2) {
      if (param_3 - 3U != 0) {
        return param_3 - 3U & 0xffffff00;
      }
      goto LAB_0096b998;
    }
    iVar5 = 2;
  }
  SVar3 = socket(2,iVar5,0);
  *(SOCKET *)((int)this + 0x58) = SVar3;
  uVar2 = htons(*(u_short *)((int)param_2 + 0x20));
  local_64.sa_data[0] = (char)uVar2;
  local_64.sa_data[1] = (char)(uVar2 >> 8);
  local_64.sa_family = 2;
  FUN_0096ae90(param_2,(ulong *)(local_64.sa_data + 2));
  uVar4 = *puVar1;
  if (uVar4 != 0xffffffff) {
    iVar5 = bind(*(SOCKET *)((int)this + 0x58),&local_64,0x10);
    if (iVar5 == 0) {
      FUN_0096b210((void *)((int)this + 0x2c),param_2);
      *(undefined4 *)((int)this + 0x6c) = local_64._0_4_;
      *(undefined4 *)((int)this + 0x70) = local_64.sa_data._2_4_;
      *(undefined4 *)((int)this + 0x74) = local_64.sa_data._6_4_;
      *(undefined4 *)((int)this + 0x78) = local_64.sa_data._10_4_;
      return CONCAT31(local_64.sa_data._11_3_,1);
    }
    FUN_00406070(local_54,"Winsock Error: ");
    _Radix = 10;
    _Dest = local_38;
    iVar5 = WSAGetLastError();
    __itoa(iVar5,_Dest,_Radix);
    uVar4 = FUN_00405a80((int)local_54);
  }
LAB_0096ba17:
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_0096ba70 @ 0096ba70 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096ba70(void *this,void *param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  char *_Dest;
  int _Radix;
  undefined1 local_54 [28];
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  uVar1 = FUN_0096b920(this,param_1,param_2,param_3);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_0096b0f0((int)this);
    if ((char)uVar1 != '\0') {
      iVar2 = connect(*(SOCKET *)((int)this + 0x58),(sockaddr *)((int)this + 0x5c),0x10);
      if (iVar2 != 0) {
        iVar2 = WSAGetLastError();
        if (iVar2 != 0x2733) {
          FUN_00406070(local_54,"Winsock Error: ");
          _Radix = 10;
          _Dest = local_38;
          iVar2 = WSAGetLastError();
          __itoa(iVar2,_Dest,_Radix);
          uVar1 = FUN_00405a80((int)local_54);
          return uVar1 & 0xffffff00;
        }
      }
      pvVar3 = FUN_0096b210(this,param_1);
      return CONCAT31((int3)((uint)pvVar3 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0096bb40 @ 0096bb40 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096bb40(void *this,void *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  char *_Dest;
  int _Radix;
  undefined1 local_54 [4];
  void *local_50;
  undefined4 local_40;
  uint local_3c;
  char local_38 [52];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  local_3c = FUN_0096b920(this,param_1,param_2,param_3);
  if ((char)local_3c != '\0') {
    iVar1 = connect(*(SOCKET *)((int)this + 0x58),(sockaddr *)((int)this + 0x5c),0x10);
    if (iVar1 == 0) {
      local_3c = FUN_0096b0f0((int)this);
      if ((char)local_3c != '\0') {
        pvVar2 = FUN_0096b210(this,param_1);
        return CONCAT31((int3)((uint)pvVar2 >> 8),1);
      }
    }
    else {
      local_3c = 0xf;
      local_40 = 0;
      local_50 = (void *)((uint)local_50 & 0xffffff00);
      FUN_00405d50(local_54,(undefined4 *)"Winsock Error: ",0xf);
      _Radix = 10;
      _Dest = local_38;
      iVar1 = WSAGetLastError();
      __itoa(iVar1,_Dest,_Radix);
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        _free(local_50);
      }
    }
  }
  return local_3c & 0xffffff00;
}


//// FUNCTION FUN_0096bc20 @ 0096bc20 ////

void __thiscall FUN_0096bc20(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2;
    }
    FUN_0096b710(this,*(undefined1 **)((int)this + 8),param_1 - iVar2,&stack0x00000008);
    return;
  }
  if (((iVar2 != 0) && (pvVar3 = *(void **)((int)this + 8), param_1 < (uint)((int)pvVar3 - iVar2)))
     && ((void *)(iVar2 + param_1) != pvVar3)) {
    pvVar3 = _memmove((void *)(iVar2 + param_1),pvVar3,0);
    *(void **)((int)this + 8) = pvVar3;
  }
  return;
}


//// FUNCTION FUN_0096bce0 @ 0096bce0 ////

void __fastcall FUN_0096bce0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_4;
  
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  *(undefined1 *)((int)param_1 + 0xac) = 0;
  puVar1 = (undefined4 *)((int)param_1 + 4);
  puVar2 = puVar1;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  local_4 = param_1;
  FUN_00963ea0(param_1,(int *)&local_4,(int)puVar1,*(int *)((int)param_1 + 0x14) + (int)puVar2);
  *(undefined2 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  puVar1 = (undefined4 *)((int)param_1 + 0x30);
  puVar2 = puVar1;
  if (0xf < *(uint *)((int)param_1 + 0x44)) {
    puVar2 = (undefined4 *)*puVar1;
  }
  if (0xf < *(uint *)((int)param_1 + 0x44)) {
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_00963ea0((void *)((int)param_1 + 0x2c),(int *)&local_4,(int)puVar1,
               *(int *)((int)param_1 + 0x40) + (int)puVar2);
  *(undefined2 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  *(undefined4 *)((int)param_1 + 0x54) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(undefined4 *)((int)param_1 + 0xb4) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  *(undefined4 *)((int)param_1 + 0x58) = 0xffffffff;
  FUN_0096bc20((void *)((int)param_1 + 0x94),0);
  if (*(void **)((int)param_1 + 0x98) == (void *)0x0) {
    *(undefined4 *)((int)param_1 + 0x98) = 0;
    *(undefined4 *)((int)param_1 + 0x9c) = 0;
    *(undefined4 *)((int)param_1 + 0xa0) = 0;
    if (*(void **)((int)param_1 + 0x88) == (void *)0x0) {
      *(undefined4 *)((int)param_1 + 0x88) = 0;
      *(undefined4 *)((int)param_1 + 0x8c) = 0;
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      FUN_0096bc20((void *)((int)param_1 + 0x84),0);
      *(undefined1 *)((int)param_1 + 0x7c) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x88));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 0x98));
}


//// FUNCTION FUN_0096be00 @ 0096be00 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __fastcall FUN_0096be00(void *param_1)

{
  int iVar1;
  int iVar2;
  void *local_1a8;
  void *local_1a4;
  WSAData local_1a0;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4f8b;
  local_c = ExceptionList;
  local_10 = DAT_00e9a098;
  ExceptionList = &local_c;
  local_1a4 = param_1;
  FUN_0096ab60(param_1);
  local_4 = 0;
  FUN_0096ab60((void *)((int)param_1 + 0x2c));
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)((int)param_1 + 0x58) = 0xffffffff;
  FUN_0096bce0(param_1);
  if (DAT_01050b2c == 0) {
    WSAStartup(0x202,&local_1a0);
  }
  iVar1 = DAT_01050b28;
  local_1a8 = param_1;
  iVar2 = FUN_0096a5f0(DAT_01050b28,*(undefined4 *)(DAT_01050b28 + 4),&local_1a8);
  FUN_0096adf0(&DAT_01050b24,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *(undefined1 *)((int)param_1 + 0xa4) = 0;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xc0) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0096bf10 @ 0096bf10 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __fastcall FUN_0096bf10(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_14 [16];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if ((*(SOCKET *)((int)param_1 + 0x58) != 0xffffffff) && (*(int *)((int)param_1 + 0x80) != 0)) {
    shutdown(*(SOCKET *)((int)param_1 + 0x58),1);
    do {
      iVar1 = recv(*(SOCKET *)((int)param_1 + 0x58),local_14,0x10,0);
    } while (0 < iVar1);
    uVar2 = closesocket(*(SOCKET *)((int)param_1 + 0x58));
    if (uVar2 != 0) {
      return uVar2 & 0xffffff00;
    }
  }
  if (*(void **)((int)param_1 + 0xa8) != (void *)0x0) {
    FUN_009704d0(*(void **)((int)param_1 + 0xa8),(int)param_1);
  }
  uVar3 = FUN_0096bce0(param_1);
  *(undefined4 *)((int)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x80) = 0;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0096bfb0 @ 0096bfb0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096bfb0(void *this,int param_1,void *param_2,void *param_3)

{
  char *pcVar1;
  int *piVar2;
  SOCKET s;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_2e;
  undefined1 local_2d;
  void *local_2c;
  undefined1 local_28 [4];
  undefined4 *local_24;
  char local_20 [8];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf4fa8;
  local_10 = ExceptionList;
  local_18 = DAT_00e9a098;
  piVar2 = *(int **)((int)this + 0x80);
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 0xb8) = 0;
  if (piVar2 != (int *)0x3) {
    piVar2 = (int *)((int)param_2 + 4);
    piVar4 = piVar2;
    if (0xf < *(uint *)((int)param_2 + 0x18)) {
      piVar4 = (int *)*piVar2;
    }
    if (((char)*piVar4 != '\0') || (*(int *)((int)this + 0x58) != -1)) {
      local_2c = this;
      if (*(int *)((int)param_2 + 0x24) == 2) {
        if (0xf < *(uint *)((int)param_2 + 0x18)) {
          piVar2 = (int *)*piVar2;
        }
        if (*(char *)piVar2 != '\0') {
          local_14 = &stack0xffffffbc;
          piVar2 = (int *)FUN_0096b050(param_2,(undefined2 *)local_28);
          if ((char)piVar2 != '\0') {
            s = FUN_0096afc0(param_3,2);
            pcVar1 = *(char **)(param_1 + 4);
            if (pcVar1 == (char *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(param_1 + 8) - (int)pcVar1;
            }
            piVar2 = (int *)sendto(s,pcVar1,iVar5,0,(sockaddr *)local_28,0x10);
            if (piVar2 != (int *)0xffffffff) {
              iVar5 = closesocket(s);
              *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + (int)piVar2;
              *(int **)((int)this + 0xb8) = piVar2;
              ExceptionList = local_10;
              return CONCAT31((int3)((uint)iVar5 >> 8),1);
            }
          }
          goto LAB_0096c3f1;
        }
      }
      local_8 = 0;
      uVar3 = FUN_00969c50(this,0);
      if ((char)uVar3 == '\0') {
        iVar5 = *(int *)(param_1 + 4);
        if ((iVar5 != 0) && (iVar8 = *(int *)(param_1 + 8) - iVar5, iVar8 != 0)) {
          if (*(int *)((int)this + 0x88) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
          }
          FUN_0096bc20((void *)((int)this + 0x84),iVar8 + iVar5);
          puVar9 = *(undefined4 **)(param_1 + 4);
          if (puVar9 == (undefined4 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(int *)(param_1 + 8) - (int)puVar9;
          }
          puVar10 = (undefined4 *)(*(int *)((int)local_2c + 0x88) + iVar5);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          DAT_01050b20 = 1;
          if (*(int *)(param_1 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          }
          *(int *)((int)local_2c + 0xb8) = iVar5;
          iVar5 = *(int *)(param_1 + 4);
          if (iVar5 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(param_1 + 8) - iVar5;
          }
          *(int *)((int)local_2c + 0xb0) = *(int *)((int)local_2c + 0xb0) + iVar8;
        }
      }
      else {
        if ((*(int *)((int)this + 0x88) == 0) ||
           (*(int *)((int)this + 0x8c) == *(int *)((int)this + 0x88))) {
          pcVar1 = *(char **)(param_1 + 4);
          if (pcVar1 == (char *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 8) - (int)pcVar1;
          }
          iVar5 = send(*(SOCKET *)((int)this + 0x58),pcVar1,iVar5,0);
          if (iVar5 != -1) {
            iVar8 = *(int *)(param_1 + 4);
            if (iVar8 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(int *)(param_1 + 8) - iVar8;
            }
            if (iVar5 < (int)uVar6) {
              if (iVar8 == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)(param_1 + 8) - iVar8;
              }
              uVar6 = iVar8 - iVar5;
              if (*(int *)((int)this + 0x88) == 0) {
                iVar8 = 0;
              }
              else {
                iVar8 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
              }
              FUN_0096bc20((void *)((int)this + 0x84),uVar6 + iVar8);
              puVar9 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5);
              puVar10 = (undefined4 *)(*(int *)((int)local_2c + 0x88) + iVar8);
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
              DAT_01050b20 = 1;
              this = local_2c;
            }
            *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + iVar5;
            *(int *)((int)this + 0xb8) = iVar5;
            ExceptionList = local_10;
            return CONCAT31((int3)(uVar6 >> 8),1);
          }
          local_2d = 0;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_2d,&DAT_00e33ba4);
        }
        if ((*(int *)(param_1 + 4) != 0) &&
           (iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4), iVar5 != 0)) {
          if (*(int *)((int)this + 0x88) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
          }
          FUN_0096bc20((void *)((int)this + 0x84),iVar5 + iVar8);
          if (*(int *)(param_1 + 4) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          }
          puVar9 = *(undefined4 **)(param_1 + 4);
          puVar10 = (undefined4 *)(*(int *)((int)local_2c + 0x88) + iVar8);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          if (*(int *)(param_1 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          }
          *(int *)((int)local_2c + 0xb8) = iVar5;
          if (*(int *)(param_1 + 4) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
          }
          *(int *)((int)local_2c + 0xb0) = *(int *)((int)local_2c + 0xb0) + iVar5;
          this = local_2c;
        }
        if (*(int *)((int)this + 0x88) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
        }
        iVar8 = send(*(SOCKET *)((int)this + 0x58),*(char **)((int)this + 0x88),iVar5,0);
        if (iVar8 == -1) {
          local_2e = 0;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_2e,&DAT_00e33ba4);
        }
        if (*(int *)((int)this + 0x88) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
        }
        if (iVar8 == iVar5) {
          FUN_0096a940((int)this + 0x84);
          uVar3 = FUN_0096bc20((void *)((int)this + 0x84),0);
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        if (0 < iVar8) {
          if (*(int *)((int)this + 0x88) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)((int)this + 0x8c) - *(int *)((int)this + 0x88);
          }
          uVar7 = iVar5 - iVar8;
          local_24 = (undefined4 *)0x0;
          local_20[0] = '\0';
          local_20[1] = '\0';
          local_20[2] = '\0';
          local_20[3] = '\0';
          local_20[4] = '\0';
          local_20[5] = '\0';
          local_20[6] = '\0';
          local_20[7] = '\0';
          local_8 = CONCAT31(local_8._1_3_,1);
          FUN_0096bc20(local_28,uVar7);
          puVar9 = (undefined4 *)(iVar8 + *(int *)((int)local_2c + 0x88));
          puVar10 = local_24;
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_0096a940((int)local_2c + 0x84);
          FUN_0096bc20((void *)((int)local_2c + 0x84),uVar7);
          puVar9 = local_24;
          puVar10 = *(undefined4 **)((int)local_2c + 0x88);
          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          DAT_01050b20 = 1;
          uVar3 = FUN_0096a8d0((int)local_28);
          ExceptionList = local_10;
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
      }
      ExceptionList = local_10;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
LAB_0096c3f1:
  ExceptionList = local_10;
  return (uint)piVar2 & 0xffffff00;
}


//// FUNCTION FUN_0096c410 @ 0096c410 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096c410(void *this,void *param_1,void *param_2,void *param_3)

{
  SOCKET SVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  u_long len;
  int _Radix;
  undefined1 local_175;
  int local_174;
  timeval local_170;
  undefined1 local_168 [28];
  sockaddr local_14c;
  char local_13c [52];
  fd_set local_108;
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  uVar5 = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  if (*(int *)((int)this + 0x80) == 3) {
    return 0;
  }
  if (*(uint *)((int)param_3 + 0x18) < 0x10) {
    pcVar4 = (char *)((int)param_3 + 4);
  }
  else {
    pcVar4 = *(char **)((int)param_3 + 4);
  }
  if ((*pcVar4 == '\0') || (*(int *)((int)param_3 + 0x24) != 2)) {
    uVar3 = *(uint *)((int)this + 0x58);
    if (uVar3 == 0xffffffff) goto LAB_0096c580;
    local_170.tv_sec = 0;
    local_170.tv_usec = 0x32;
    local_108.fd_count = 1;
    local_108.fd_array[0] = uVar3;
    uVar3 = select(0,&local_108,(fd_set *)0x0,(fd_set *)0x0,&local_170);
    if (uVar3 == 0xffffffff) {
      local_175 = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_175,&DAT_00e33ba4);
    }
    if (uVar3 != 1) goto LAB_0096c580;
    iVar2 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x58),&local_108);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_0096c580;
    if ((*(int *)((int)param_1 + 4) == 0) ||
       (len = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4), len == 0)) {
      len = FUN_00969de0((int)this);
    }
    if ((*(int *)((int)param_1 + 4) == 0) ||
       (local_174 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4), local_174 == 0)) {
      FUN_0096bc20(param_1,len);
    }
    uVar5 = recv(*(SOCKET *)((int)this + 0x58),*(char **)((int)param_1 + 4),len,0);
    if (uVar5 == 0xffffffff) {
      iVar2 = WSAGetLastError();
      if ((iVar2 < 0x2745) || (0x2746 < iVar2)) {
        FUN_00406070(local_168,"Winsock Error: ");
        _Radix = 10;
        pcVar4 = local_13c;
        iVar2 = WSAGetLastError();
        goto LAB_0096c56e;
      }
      uVar5 = 0;
    }
    uVar3 = FUN_0096bc20(param_1,uVar5);
    if (uVar5 == 0) {
LAB_0096c580:
      return uVar3 & 0xffffff00;
    }
  }
  else {
    local_174 = 0x10;
    if (*(char *)((int)this + 0xa4) == '\0') {
      SVar1 = FUN_0096afc0(param_3,2);
      *(SOCKET *)((int)this + 0x58) = SVar1;
      FUN_0096b0f0((int)this);
    }
    local_108.fd_array[0] = *(uint *)((int)this + 0x58);
    local_170.tv_sec = 0;
    local_170.tv_usec = 0x32;
    local_108.fd_count = 1;
    iVar2 = select(0,&local_108,(fd_set *)0x0,(fd_set *)0x0,&local_170);
    if (iVar2 == -1) {
      local_175 = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_175,&DAT_00e33ba4);
    }
    if (iVar2 == 1) {
      iVar2 = __WSAFDIsSet(*(SOCKET *)((int)this + 0x58),&local_108);
      if (iVar2 != 0) {
        pcVar4 = *(char **)((int)param_1 + 4);
        if (pcVar4 == (char *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((int)param_1 + 8) - (int)pcVar4;
        }
        uVar5 = recvfrom(*(SOCKET *)((int)this + 0x58),pcVar4,iVar2,0,&local_14c,&local_174);
        if (uVar5 == 0xffffffff) {
          FUN_00406070(local_168,"Winsock Error: ");
          _Radix = 10;
          pcVar4 = local_13c;
          iVar2 = WSAGetLastError();
LAB_0096c56e:
          __itoa(iVar2,pcVar4,_Radix);
          uVar3 = FUN_00405a80((int)local_168);
          goto LAB_0096c580;
        }
      }
    }
    FUN_0096bc20(param_1,uVar5);
    FUN_0096b0a0((int)&local_14c,param_2);
    if (*(char *)((int)this + 0xa4) == '\0') {
      closesocket(*(SOCKET *)((int)this + 0x58));
    }
  }
  iVar2 = *(int *)((int)this + 0xb4) + uVar5;
  *(uint *)((int)this + 0xbc) = uVar5;
  *(int *)((int)this + 0xb4) = iVar2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_0096c8f0 @ 0096c8f0 ////

void __fastcall FUN_0096c8f0(void *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf502f;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0x58) != -1) {
    ExceptionList = &local_c;
    FUN_0096bf10(param_1);
  }
  if (DAT_01050b2c != 0) {
    for (_Memory = (int *)*DAT_01050b28; _Memory != DAT_01050b28; _Memory = (int *)*_Memory) {
      if ((void *)_Memory[2] == param_1) {
        if (_Memory != DAT_01050b28) {
          *(int *)_Memory[1] = *_Memory;
          *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        break;
      }
    }
  }
  if (*(int *)((int)param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  if (*(void **)((int)param_1 + 0x98) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x98));
  }
  *(undefined4 *)((int)param_1 + 0x98) = 0;
  *(undefined4 *)((int)param_1 + 0x9c) = 0;
  *(undefined4 *)((int)param_1 + 0xa0) = 0;
  if (*(void **)((int)param_1 + 0x88) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x88));
  }
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x44)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x30));
  }
  *(undefined4 *)((int)param_1 + 0x44) = 0xf;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined1 *)((int)param_1 + 0x30) = 0;
  if (0xf < *(uint *)((int)param_1 + 0x18)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined1 *)((int)param_1 + 4) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0096ca20 @ 0096ca20 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_0096ca20(void *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_68 [4];
  void *local_64;
  undefined4 local_54;
  uint local_50;
  undefined1 local_3c [4];
  void *local_38;
  uint local_24;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5050;
  local_c = ExceptionList;
  local_10 = DAT_00e9a098;
  ExceptionList = &local_c;
  FUN_0096ab60(local_3c);
  local_4 = 0;
  FUN_0096ab60(local_68);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_0096c410(this,param_1,local_3c,local_68);
  uVar1 = local_50;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = (void *)((uint)local_64 & 0xffffff00);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar1 >> 8),(char)uVar2);
}


//// FUNCTION FUN_0096cc90 @ 0096cc90 ////

void * __thiscall FUN_0096cc90(void *this,byte param_1)

{
  FUN_0096c8f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0096cd50 @ 0096cd50 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl FUN_0096cd50(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte local_14;
  byte local_13 [15];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  bVar1 = *param_1;
  if (bVar1 != 0) {
    do {
      if (((((char)bVar1 < 'A') || ('Z' < (char)bVar1)) &&
          (((char)bVar1 < 'a' || ('z' < (char)bVar1)))) &&
         (((char)bVar1 < '0' || ('9' < (char)bVar1)))) {
        _sprintf((char *)&local_14,"%c%02X",0x25,(uint)bVar1);
        pbVar2 = &local_14;
        bVar1 = local_14;
        while (bVar1 != 0) {
          pbVar2 = pbVar2 + 1;
          *param_2 = bVar1;
          param_2 = param_2 + 1;
          bVar1 = *pbVar2;
        }
        param_2 = param_2 + -1;
      }
      else {
        *param_2 = bVar1;
      }
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 != 0);
    *param_2 = 0;
    return 0;
  }
  *param_2 = 0;
  return 0;
}


//// FUNCTION FUN_0096cdf0 @ 0096cdf0 ////

undefined4 __cdecl FUN_0096cdf0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == (char *)0x0) {
    return 2;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar6 = 0;
  if (pcVar2 != param_2 + 1) {
    iVar5 = (int)param_2 - (int)param_1;
    do {
      cVar1 = *param_1;
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = _tolower((int)param_1[iVar5]);
      iVar4 = _tolower((int)cVar1);
      if (iVar4 != iVar3) {
        return 3;
      }
      uVar6 = uVar6 + 1;
      param_1 = param_1 + 1;
    } while (uVar6 < (uint)((int)pcVar2 - (int)(param_2 + 1)));
  }
  return 0;
}


//// FUNCTION LHHttp_ParseURL @ 0096ce70 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall LHHttp_ParseURL(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if ((*(int *)(param_1 + 0x20) == 0) &&
     (pcVar7 = *(char **)(param_1 + 0x14), pcVar7 != (char *)0x0)) {
    *(undefined2 *)(param_1 + 0x24) = 0x50;
    iVar4 = FUN_0096cdf0(pcVar7,"http://");
    if (iVar4 == 0) {
      pcVar7 = pcVar7 + 7;
    }
    iVar4 = 0;
    cVar3 = *pcVar7;
    pcVar8 = pcVar7;
    while (((cVar3 != '\0' && (cVar3 != ':')) && (cVar3 != '/'))) {
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      iVar4 = iVar4 + 1;
      cVar3 = *pcVar1;
    }
    pvVar5 = operator_new(iVar4 + 1);
    *(void **)(param_1 + 0x1c) = pvVar5;
    iVar4 = 0;
    cVar3 = *pcVar7;
    while (((cVar3 != '\0' && (cVar3 != ':')) && (cVar3 != '/'))) {
      pcVar7 = pcVar7 + 1;
      *(char *)(iVar4 + *(int *)(param_1 + 0x1c)) = cVar3;
      iVar4 = iVar4 + 1;
      cVar3 = *pcVar7;
    }
    *(undefined1 *)(iVar4 + *(int *)(param_1 + 0x1c)) = 0;
    if (*pcVar7 == ':') {
      pcVar8 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      iVar4 = 0;
      cVar3 = *pcVar8;
      while ((cVar3 != '\0' && (cVar3 != '/'))) {
        pcVar7 = pcVar7 + 1;
        local_204[iVar4] = cVar3;
        iVar4 = iVar4 + 1;
        cVar3 = *pcVar7;
      }
      local_204[iVar4] = '\0';
      lVar6 = _atol(local_204);
      *(short *)(param_1 + 0x24) = (short)lVar6;
    }
    iVar4 = 0;
    cVar3 = *pcVar7;
    pcVar8 = pcVar7;
    while (cVar3 != '\0') {
      pcVar1 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      iVar4 = iVar4 + 1;
      cVar3 = *pcVar1;
    }
    pvVar5 = operator_new(iVar4 + 1);
    *(void **)(param_1 + 0x20) = pvVar5;
    iVar4 = 0;
    cVar3 = *pcVar7;
    while (cVar3 != '\0') {
      *(char *)(iVar4 + *(int *)(param_1 + 0x20)) = cVar3;
      iVar2 = iVar4 + 1;
      iVar4 = iVar4 + 1;
      cVar3 = pcVar7[iVar2];
    }
    *(undefined1 *)(iVar4 + *(int *)(param_1 + 0x20)) = 0;
  }
  return;
}


//// FUNCTION FUN_0096cf90 @ 0096cf90 ////

undefined4 __fastcall FUN_0096cf90(int param_1)

{
  LHHttp_ParseURL(param_1);
  return *(undefined4 *)(param_1 + 0x1c);
}


//// FUNCTION FUN_0096cfa0 @ 0096cfa0 ////

undefined4 __fastcall FUN_0096cfa0(int param_1)

{
  LHHttp_ParseURL(param_1);
  return *(undefined4 *)(param_1 + 0x20);
}


//// FUNCTION FUN_0096cfb0 @ 0096cfb0 ////

undefined2 __fastcall FUN_0096cfb0(int param_1)

{
  LHHttp_ParseURL(param_1);
  return *(undefined2 *)(param_1 + 0x24);
}


//// FUNCTION FUN_0096cfc0 @ 0096cfc0 ////

void __fastcall FUN_0096cfc0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_0096d000 @ 0096d000 ////

void __fastcall FUN_0096d000(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0096d020 @ 0096d020 ////

void __fastcall FUN_0096d020(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[0x82] = 0;
  *(undefined2 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x87] = 0x3c;
  param_1[0x88] = 0;
  *(undefined2 *)((int)param_1 + 0x226) = 0;
  param_1[0x28d] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x295] = 0;
  param_1[0x8b] = 10;
  param_1[0x8c] = 0;
  param_1[0x294] = 0;
  param_1[0x496] = 0;
  *(undefined1 *)(param_1 + 0x497) = 0;
  param_1[0x498] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  return;
}


//// FUNCTION FUN_0096d0b0 @ 0096d0b0 ////

undefined4 * __thiscall FUN_0096d0b0(void *this,byte param_1)

{
  if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)this);
  }
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0096d0f0 @ 0096d0f0 ////

undefined4 __thiscall FUN_0096d0f0(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)this + iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)((int)this + 0x204) = param_2;
  return 0;
}


//// FUNCTION FUN_0096d120 @ 0096d120 ////

undefined4 __thiscall FUN_0096d120(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)this + iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)((int)this + 0x204) = param_2;
  return 0;
}


//// FUNCTION FUN_0096d150 @ 0096d150 ////

void __thiscall FUN_0096d150(void *this,char *param_1,ushort param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    *(char **)((int)this + 0xa38) = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *(uint *)((int)this + 0xa3c) = (uint)param_2;
    return;
  }
  if (*(void **)((int)this + 0xa38) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa38));
  }
  *(undefined4 *)((int)this + 0xa38) = 0;
  *(uint *)((int)this + 0xa3c) = (uint)param_2;
  return;
}


//// FUNCTION FUN_0096d1d0 @ 0096d1d0 ////

undefined4 __thiscall FUN_0096d1d0(void *this,char *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(void **)this == (void *)0x0) {
    return 3;
  }
  iVar2 = 0;
  uVar1 = FUN_00969c50(*(void **)this,0);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00969d90(*(void **)this,param_1,param_2);
    if (iVar2 == -1) {
      return 3;
    }
  }
  *param_3 = iVar2;
  return 0;
}


//// FUNCTION FUN_0096d220 @ 0096d220 ////

void __fastcall FUN_0096d220(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x208));
}


//// FUNCTION FUN_0096d260 @ 0096d260 ////

int __fastcall FUN_0096d260(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((void *)*param_1 != (void *)0x0) {
    uVar1 = FUN_00969ba0((void *)*param_1,0);
    return (-(uint)((char)uVar1 != '\0') & 0xfffffffd) + 3;
  }
  return 2;
}


//// FUNCTION FUN_0096d660 @ 0096d660 ////

void __fastcall FUN_0096d660(int param_1)

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


//// FUNCTION FUN_0096d6e0 @ 0096d6e0 ////

void FUN_0096d6e0(void)

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


//// FUNCTION FUN_0096d700 @ 0096d700 ////

void __fastcall FUN_0096d700(int param_1)

{
  FUN_0096d660(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0096d720 @ 0096d720 ////

void FUN_0096d720(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0096d750 @ 0096d750 ////

void FUN_0096d750(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0096d790 @ 0096d790 ////

void __cdecl FUN_0096d790(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0096d7c0 @ 0096d7c0 ////

void __fastcall FUN_0096d7c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  
  *param_1 = 0xffffffff;
  if (param_1[3] != 0) {
    piVar1 = *(int **)param_1[2];
    if (piVar1 != (int *)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)piVar1[2]);
    }
    puVar2 = (undefined4 *)param_1[2];
    _Memory = (void *)*puVar2;
    *puVar2 = puVar2;
    *(undefined4 *)(param_1[2] + 4) = param_1[2];
    param_1[3] = 0;
    if (_Memory != (void *)param_1[2]) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if ((void *)param_1[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[5]);
  }
  if ((void *)param_1[7] == (void *)0x0) {
    if ((void *)param_1[8] == (void *)0x0) {
      *(undefined2 *)(param_1 + 9) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[7]);
}


//// FUNCTION FUN_0096d870 @ 0096d870 ////

void __fastcall FUN_0096d870(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)**(int **)(param_1 + 4);
    if (piVar1 != *(int **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
      _free((void *)piVar1[2]);
    }
    puVar2 = *(undefined4 **)(param_1 + 4);
    _Memory = (void *)*puVar2;
    *puVar2 = puVar2;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    if (_Memory != *(void **)(param_1 + 4)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  return;
}


//// FUNCTION FUN_0096d8f0 @ 0096d8f0 ////

char * __thiscall FUN_0096d8f0(void *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int *piVar5;
  
  piVar5 = (int *)**(int **)((int)this + 4);
  if (piVar5 != *(int **)((int)this + 4)) {
    do {
      pcVar3 = (char *)piVar5[2];
      iVar2 = FUN_0096cdf0(pcVar3,param_1);
      if (iVar2 == 0) {
        cVar4 = *pcVar3;
        bVar1 = false;
        if (cVar4 == '\0') {
          return pcVar3;
        }
        do {
          if (cVar4 == ':') {
            bVar1 = true;
          }
          else if ((cVar4 == ' ') && (bVar1)) {
            cVar4 = *pcVar3;
            if (cVar4 == '\0') {
              return pcVar3;
            }
            do {
              if (cVar4 != ' ') {
                return pcVar3;
              }
              cVar4 = pcVar3[1];
              pcVar3 = pcVar3 + 1;
            } while (cVar4 != '\0');
            return pcVar3;
          }
          cVar4 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
          if (cVar4 == '\0') {
            return pcVar3;
          }
        } while( true );
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)((int)this + 4));
  }
  return (char *)0x0;
}


//// FUNCTION FUN_0096d970 @ 0096d970 ////

void __fastcall FUN_0096d970(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0xa44);
  if (piVar2 != *(int **)(param_1 + 0xa44)) {
    do {
      puVar1 = (undefined4 *)piVar2[2];
      if (puVar1 != (undefined4 *)0x0) {
        if ((void *)*puVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar1);
        }
        puVar1[1] = 0;
                    /* WARNING: Subroutine does not return */
        _free(puVar1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0xa44));
  }
  puVar1 = *(undefined4 **)(param_1 + 0xa44);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 0xa44) + 4) = *(int *)(param_1 + 0xa44);
  *(undefined4 *)(param_1 + 0xa48) = 0;
  if (_Memory != *(void **)(param_1 + 0xa44)) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_0096da00 @ 0096da00 ////

void __fastcall FUN_0096da00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(undefined4 *)(param_1 + 0xa50) = 0;
  *(undefined4 *)(param_1 + 0xa54) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x234);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xa58);
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x125c) = 0;
  FUN_0096d970(param_1);
  return;
}


//// FUNCTION FUN_0096da50 @ 0096da50 ////

int __fastcall FUN_0096da50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0xa44);
      puVar1 != *(undefined4 **)(param_1 + 0xa44); puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[2] != 0) {
      iVar2 = iVar2 + *(int *)(puVar1[2] + 4);
    }
  }
  return iVar2;
}


//// FUNCTION FUN_0096da80 @ 0096da80 ////

undefined4 __thiscall FUN_0096da80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  piVar1 = *(int **)((int)this + 0xa44);
  piVar6 = (int *)*piVar1;
  for (piVar2 = piVar6; piVar2 != piVar1; piVar2 = (int *)*piVar2) {
  }
  iVar7 = 0;
  if (piVar6 != piVar1) {
    do {
      puVar3 = (undefined4 *)piVar6[2];
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = puVar3[1];
        puVar8 = (undefined4 *)*puVar3;
        puVar9 = (undefined4 *)(param_1 + iVar7);
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
        iVar7 = iVar7 + puVar3[1];
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)((int)this + 0xa44));
  }
  return 1000;
}


//// FUNCTION FUN_0096daf0 @ 0096daf0 ////

void __fastcall FUN_0096daf0(int param_1)

{
  FUN_0096d660(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0096db50 @ 0096db50 ////

void * __thiscall FUN_0096db50(void *this,byte param_1)

{
  FUN_009640b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0096db70 @ 0096db70 ////

int __fastcall FUN_0096db70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0096d6e0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0096dbb0 @ 0096dbb0 ////

undefined4 * __fastcall FUN_0096dbb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0096d6e0();
  param_1[0x291] = uVar1;
  param_1[0x292] = 0;
  FUN_0096d020(param_1);
  return param_1;
}


//// FUNCTION FUN_0096dbe0 @ 0096dbe0 ////

void __fastcall FUN_0096dbe0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_0096c8f0(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  if ((void *)param_1[0x82] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x82]);
  }
  if (param_1[0x85] != 0) {
    FUN_0096d870(param_1[0x85]);
  }
  if (param_1[0x86] != 0) {
    FUN_0096d870(param_1[0x86]);
  }
  FUN_0096d970((int)param_1);
  pvVar1 = (void *)param_1[0x85];
  if (pvVar1 != (void *)0x0) {
    FUN_009640b0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x86];
  param_1[0x85] = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_009640b0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  param_1[0x86] = 0;
  if ((void *)param_1[0x28e] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x28e]);
  }
  param_1[0x28f] = 0;
  FUN_0096d020(param_1);
  return;
}


//// FUNCTION FUN_0096dcb0 @ 0096dcb0 ////

undefined4 __fastcall FUN_0096dcb0(undefined4 *param_1)

{
  void *_Memory;
  
  if ((void *)*param_1 != (void *)0x0) {
    FUN_0096bf10((void *)*param_1);
    _Memory = (void *)*param_1;
    if (_Memory != (void *)0x0) {
      FUN_0096c8f0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *param_1 = 0;
  }
  FUN_0096dbe0(param_1);
  return 0;
}


//// FUNCTION FUN_0096dcf0 @ 0096dcf0 ////

void __fastcall FUN_0096dcf0(undefined4 *param_1)

{
  void *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf508e;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((void *)*param_1 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_0096bf10((void *)*param_1);
    _Memory = (void *)*param_1;
    if (_Memory != (void *)0x0) {
      FUN_0096c8f0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *param_1 = 0;
  }
  FUN_0096dbe0(param_1);
  FUN_0096d660((int)(param_1 + 0x290));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x291]);
}


//// FUNCTION FUN_0096dd80 @ 0096dd80 ////

void __thiscall FUN_0096dd80(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf50a8;
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


//// FUNCTION FUN_0096de20 @ 0096de20 ////

void __thiscall FUN_0096de20(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf50c8;
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


//// FUNCTION FUN_0096dec0 @ 0096dec0 ////

void * __thiscall FUN_0096dec0(void *this,undefined4 param_1,void *param_2)

{
  uint in_stack_0000001c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf50e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00405c30(this,&param_1,0,0xffffffff);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0096df20 @ 0096df20 ////

undefined4 __thiscall FUN_0096df20(void *this,char param_1)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  void *in_stack_ffffff0c;
  void *in_stack_ffffff10;
  int iVar6;
  undefined1 local_bc [4];
  void *local_b8;
  undefined4 local_a8;
  uint local_a4;
  undefined1 local_90 [4];
  void *local_8c;
  uint local_78;
  undefined1 local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_38 [4];
  void *local_34;
  uint local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf51b8;
  local_c = ExceptionList;
  pcVar1 = (char *)((int)this + 4);
  if (pcVar1 == (char *)0x0) {
    return 1;
  }
  ExceptionList = &local_c;
  pvVar3 = operator_new(0xc4);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = FUN_0096be00(pvVar3);
  }
  *(void **)this = pvVar3;
  local_4 = 0xffffffff;
  iVar6 = 1;
  if (*(int *)((int)this + 0xa38) == 0) {
    if (param_1 == '\0') {
      FUN_00406070(&stack0xffffff0c,"ANY");
      local_4 = 0x13;
      pvVar3 = FUN_0096ab60(local_38);
      local_4._0_1_ = 0x15;
      uVar5 = 0x96e1a3;
      pvVar3 = FUN_0096dec0(pvVar3,in_stack_ffffff0c,in_stack_ffffff10);
      FUN_00406070(&stack0xffffff08,pcVar1);
      local_4._0_1_ = 0x16;
      pvVar4 = FUN_0096ab60(local_64);
      local_4 = CONCAT31(local_4._1_3_,0x18);
      pvVar4 = FUN_0096dec0(pvVar4,uVar5,in_stack_ffffff0c);
      *(undefined2 *)((int)pvVar4 + 0x20) = *(undefined2 *)((int)this + 0x204);
      uVar5 = FUN_0096bb40(*(void **)this,pvVar4,pvVar3,iVar6);
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      if (local_20 < 0x10) {
        if ((char)uVar5 == '\0') {
          ExceptionList = local_c;
          return 3;
        }
        ExceptionList = local_c;
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_34);
    }
    FUN_00406070(&stack0xffffff0c,"ANY");
    local_4 = 0xd;
    pvVar3 = FUN_0096ab60(local_90);
    local_4._0_1_ = 0xf;
    uVar5 = 0x96e0e3;
    pvVar3 = FUN_0096dec0(pvVar3,in_stack_ffffff0c,in_stack_ffffff10);
    FUN_00406070(&stack0xffffff08,pcVar1);
    local_4._0_1_ = 0x10;
    pvVar4 = FUN_0096ab60(local_bc);
    local_4 = CONCAT31(local_4._1_3_,0x12);
    pvVar4 = FUN_0096dec0(pvVar4,uVar5,in_stack_ffffff0c);
    *(undefined2 *)((int)pvVar4 + 0x20) = *(undefined2 *)((int)this + 0x204);
    uVar5 = FUN_0096ba70(*(void **)this,pvVar4,pvVar3,iVar6);
    cVar2 = (char)uVar5;
  }
  else if (param_1 == '\0') {
    FUN_00406070(&stack0xffffff0c,"ANY");
    local_4 = 7;
    pvVar3 = FUN_0096ab60(local_90);
    local_4._0_1_ = 9;
    uVar5 = 0x96e052;
    pvVar3 = FUN_0096dec0(pvVar3,in_stack_ffffff0c,in_stack_ffffff10);
    FUN_00406070(&stack0xffffff08,*(char **)((int)this + 0xa38));
    local_4._0_1_ = 10;
    pvVar4 = FUN_0096ab60(local_bc);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    pvVar4 = FUN_0096dec0(pvVar4,uVar5,in_stack_ffffff0c);
    *(undefined2 *)((int)pvVar4 + 0x20) = *(undefined2 *)((int)this + 0xa3c);
    uVar5 = FUN_0096bb40(*(void **)this,pvVar4,pvVar3,iVar6);
    cVar2 = (char)uVar5;
  }
  else {
    FUN_00406070(&stack0xffffff0c,"ANY");
    local_4 = 1;
    pvVar3 = FUN_0096ab60(local_90);
    local_4._0_1_ = 3;
    uVar5 = 0x96dfd7;
    pvVar3 = FUN_0096dec0(pvVar3,in_stack_ffffff0c,in_stack_ffffff10);
    FUN_00406070(&stack0xffffff08,*(char **)((int)this + 0xa38));
    local_4._0_1_ = 4;
    pvVar4 = FUN_0096ab60(local_bc);
    local_4 = CONCAT31(local_4._1_3_,6);
    pvVar4 = FUN_0096dec0(pvVar4,uVar5,in_stack_ffffff0c);
    *(undefined2 *)((int)pvVar4 + 0x20) = *(undefined2 *)((int)this + 0xa3c);
    uVar5 = FUN_0096ba70(*(void **)this,pvVar4,pvVar3,iVar6);
    cVar2 = (char)uVar5;
  }
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffffff00);
  if (local_78 < 0x10) {
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return 3;
    }
    ExceptionList = local_c;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8c);
}


//// FUNCTION FUN_0096e270 @ 0096e270 ////

int __fastcall FUN_0096e270(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  time_t tVar7;
  int *local_4;
  
  if (param_1[0x82] == 0) {
    return -0x68;
  }
  local_4 = param_1;
  if ((void *)*param_1 != (void *)0x0) {
    if (*(short *)((int)param_1 + 0x226) == 2) {
      iVar3 = FUN_00969cf0((void *)*param_1);
      if (iVar3 != 0) {
        return ((iVar3 != 5) - 1 & 0xffffff8c) + 9;
      }
      *(undefined2 *)((int)param_1 + 0x226) = 0;
    }
    uVar1 = param_1[0x83];
    if ((uint)param_1[0x84] <= uVar1) {
      iVar3 = *(int *)(*param_1 + 0x88);
      if ((iVar3 == 0) ||
         (local_4 = (int *)(*(int *)(*param_1 + 0x8c) - iVar3), local_4 == (int *)0x0)) {
        FUN_0096d220((int)param_1);
        FUN_0096d870(param_1[0x86]);
        *(undefined1 *)(param_1 + 0x89) = 0;
        *(undefined2 *)((int)param_1 + 0x226) = 1;
        return 2;
      }
    }
    uVar2 = param_1[0x84] - uVar1;
    if (0xfff < uVar2) {
      uVar2 = 0x1000;
    }
    local_4 = (int *)0x0;
    iVar3 = FUN_0096d1d0(param_1,(char *)(param_1[0x82] + uVar1),uVar2,(int *)&local_4);
    piVar4 = local_4;
    if (iVar3 == 3) {
      FUN_0096d220((int)param_1);
      piVar4 = param_1 + 0x8d;
      for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      param_1[0x28d] = 0;
      return -100;
    }
    if ((local_4 == (int *)0x0) && ((char)param_1[0x89] != '\0')) {
      tVar7 = _time((time_t *)0x0);
      if ((uint)(param_1[0x88] + param_1[0x87]) < (uint)tVar7) {
        FUN_0096d220((int)param_1);
        return -0x66;
      }
    }
    else {
      _time((time_t *)(param_1 + 0x88));
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    param_1[0x83] = param_1[0x83] + (int)piVar4;
    return 1;
  }
  if ((short)param_1[0x81] != 0) {
    iVar3 = 1;
    bVar6 = true;
    piVar4 = param_1 + 1;
    pcVar5 = "";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = (char)*piVar4 == *pcVar5;
      piVar4 = (int *)((int)piVar4 + 1);
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      iVar3 = FUN_0096df20(param_1,'\x01');
      if (iVar3 != 0) {
        return -0x6b;
      }
      *(undefined2 *)((int)param_1 + 0x226) = 2;
      return 9;
    }
  }
  return -0x6a;
}


//// FUNCTION FUN_0096e440 @ 0096e440 ////

/* WARNING: Removing unreachable block (ram,0x0096e46b) */

void __thiscall FUN_0096e440(void *this,uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf51d0;
  local_10 = ExceptionList;
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4);
  }
  if (uVar1 < param_1) {
    ExceptionList = &local_10;
    puVar2 = operator_new(param_1);
    local_8 = 0;
    FUN_0096d790(*(undefined1 **)((int)this + 4),*(undefined1 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined1 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined1 **)((int)this + 8) = puVar2;
    *(undefined1 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0096e580 @ 0096e580 ////

void __thiscall FUN_0096e580(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 4 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)this + iVar2] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)((int)this + 0x204) = param_2;
  FUN_0096df20(this,'\0');
  return;
}


//// FUNCTION FUN_0096e600 @ 0096e600 ////

void __thiscall FUN_0096e600(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  iVar2 = FUN_0096d750(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_0096de20(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


//// FUNCTION FUN_0096e640 @ 0096e640 ////

void __thiscall FUN_0096e640(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = param_1;
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_1 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    iVar5 = (int)param_1 - (int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[iVar5] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar5 = *(int *)((int)this + 4);
    iVar3 = FUN_0096d720(iVar5,*(undefined4 *)(iVar5 + 4),&param_1);
    FUN_0096dd80(this,1);
    *(int *)(iVar5 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
  }
  return;
}


//// FUNCTION FUN_0096e6b0 @ 0096e6b0 ////

void __thiscall FUN_0096e6b0(void *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar2 = param_2;
  pcVar7 = param_1;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    param_1 = operator_new((uint)(pcVar3 + (int)(pcVar4 + ((8 - (int)(param_2 + 1)) -
                                                          (int)(param_1 + 1)))));
    pcVar3 = pcVar7;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    iVar8 = (int)param_1 - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[iVar8] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (pcVar4[-1] != ':') {
      pcVar7 = param_1 + -1;
      do {
        pcVar3 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar3 != '\0');
      pcVar7[0] = ':';
      pcVar7[1] = '\0';
    }
    pcVar7 = param_1 + -1;
    do {
      pcVar3 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar3 != '\0');
    pcVar7[0] = ' ';
    pcVar7[1] = '\0';
    pcVar7 = pcVar2;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar3 = param_1 + -1;
    do {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = pcVar2;
    for (uVar6 = (uint)((int)pcVar7 - (int)pcVar2) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = (int)pcVar7 - (int)pcVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar8 = *(int *)((int)this + 4);
    iVar5 = FUN_0096d720(iVar8,*(undefined4 *)(iVar8 + 4),&param_1);
    FUN_0096dd80(this,1);
    *(int *)(iVar8 + 4) = iVar5;
    **(int **)(iVar5 + 4) = iVar5;
  }
  return;
}


//// FUNCTION LHHttp_BuildHeaderBlock @ 0096e7b0 ////

undefined4 __fastcall LHHttp_BuildHeaderBlock(void *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)0x0;
  if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0xc));
  }
  pcVar3 = FUN_0096d8f0(param_1,"User-Agent");
  if (pcVar3 == (char *)0x0) {
    FUN_0096e640(param_1,PTR_s_User_Agent__Lionhead_Studios_HTT_00e66af4);
  }
  for (puVar2 = (undefined4 *)**(undefined4 **)((int)param_1 + 4);
      puVar2 != *(undefined4 **)((int)param_1 + 4); puVar2 = (undefined4 *)*puVar2) {
    pcVar4 = (char *)puVar2[2];
    pcVar3 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar4 + (int)(pcVar6 + (10 - (int)pcVar3));
  }
  puVar5 = operator_new((uint)pcVar6);
  *(undefined1 **)((int)param_1 + 0xc) = puVar5;
  *puVar5 = 0;
  piVar7 = (int *)**(int **)((int)param_1 + 4);
  if (piVar7 != *(int **)((int)param_1 + 4)) {
    do {
      _sprintf(*(char **)((int)param_1 + 0xc),"%s%s\r\n",*(char **)((int)param_1 + 0xc),piVar7[2]);
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)param_1 + 4));
  }
  return *(undefined4 *)((int)param_1 + 0xc);
}


//// FUNCTION FUN_0096e860 @ 0096e860 ////

void __thiscall
FUN_0096e860(void *this,int param_1,char *param_2,void *param_3,char *param_4,uint param_5)

{
  char cVar1;
  undefined2 *puVar2;
  char *pcVar3;
  void *pvVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined2 *puVar15;
  char *local_f4;
  char *local_ec;
  char local_e4 [12];
  char local_d8 [200];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf51fc;
  pvStack_c = ExceptionList;
  local_10 = DAT_00e9a098;
  local_f4 = (char *)0x14;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  pcVar3 = operator_new((uint)(pcVar3 + (0xa0 - (int)(param_2 + 1))));
  local_ec = (char *)0x0;
  if (*(void **)((int)this + 0x208) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x208));
  }
  iVar9 = *(int *)((int)this + 0x214);
  if (iVar9 != 0) {
    FUN_0096d870(iVar9);
    FUN_00963e30(iVar9);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar9 + 4));
  }
  iVar9 = *(int *)((int)this + 0x218);
  if (iVar9 != 0) {
    FUN_0096d870(iVar9);
    FUN_00963e30(iVar9);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar9 + 4));
  }
  puVar8 = (undefined4 *)((int)this + 0xa58);
  for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  pvVar4 = operator_new(0x10);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar5 = FUN_00963e10();
    *(undefined4 *)((int)pvVar4 + 4) = uVar5;
    *(undefined4 *)((int)pvVar4 + 8) = 0;
    *(undefined4 *)((int)pvVar4 + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x214) = pvVar4;
  pvVar4 = operator_new(0x10);
  local_4 = 1;
  if (pvVar4 == (void *)0x0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar5 = FUN_00963e10();
    *(undefined4 *)((int)pvVar4 + 4) = uVar5;
    *(undefined4 *)((int)pvVar4 + 8) = 0;
    *(undefined4 *)((int)pvVar4 + 0xc) = 0;
  }
  local_4 = 0xffffffff;
  *(void **)((int)this + 0x218) = pvVar4;
  *(undefined4 *)((int)this + 0x20c) = 0;
  if (param_1 == 0) {
LAB_0096ea12:
    builtin_strncpy(pcVar3,"GET ",4);
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 2) {
        builtin_strncpy(pcVar3,"POST ",6);
        goto LAB_0096ea23;
      }
      goto LAB_0096ea12;
    }
    builtin_strncpy(pcVar3,"PUT ",4);
  }
  pcVar3[4] = '\0';
LAB_0096ea23:
  pcVar7 = param_2;
  if (*(int *)((int)this + 0xa38) != 0) {
    pcVar14 = pcVar3 + -1;
    do {
      pcVar6 = pcVar14;
      pcVar14 = pcVar6 + 1;
    } while (pcVar6[1] != '\0');
    builtin_strncpy(pcVar6 + 1,"HTTP://",8);
    pcVar14 = (char *)((int)this + 4);
    pcVar6 = pcVar14;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar13 = pcVar3 + -1;
    do {
      pcVar12 = pcVar13 + 1;
      pcVar13 = pcVar13 + 1;
    } while (*pcVar12 != '\0');
    pcVar12 = pcVar14;
    for (uVar10 = (uint)((int)pcVar6 - (int)pcVar14) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar10 = (int)pcVar6 - (int)pcVar14 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (*(short *)((int)this + 0x204) != 0x50) {
      pcVar14 = pcVar3 + -1;
      do {
        pcVar6 = pcVar14 + 1;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar6 != '\0');
      pcVar14[0] = ':';
      pcVar14[1] = '\0';
      _sprintf(local_e4,(char *)&param_2_00d1b93c,(uint)*(ushort *)((int)this + 0x204));
      pcVar14 = local_e4;
      do {
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + 1;
      } while (cVar1 != '\0');
      uVar10 = (int)pcVar14 - (int)local_e4;
      pcVar14 = pcVar3 + -1;
      do {
        pcVar6 = pcVar14 + 1;
        pcVar14 = pcVar14 + 1;
      } while (*pcVar6 != '\0');
      pcVar6 = local_e4;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar14 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
  }
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar10 = (int)pcVar7 - (int)param_2;
  pcVar7 = pcVar3 + -1;
  do {
    pcVar14 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar14 != '\0');
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar7 = pcVar3 + -1;
  do {
    pcVar14 = pcVar7;
    pcVar7 = pcVar14 + 1;
  } while (pcVar14[1] != '\0');
  builtin_strncpy(pcVar14 + 1," HTTP/1.1\r\n",0xc);
  if (param_3 != (void *)0x0) {
    local_ec = (char *)LHHttp_BuildHeaderBlock(param_3);
    local_f4 = local_ec;
    do {
      cVar1 = *local_f4;
      local_f4 = local_f4 + 1;
    } while (cVar1 != '\0');
    local_f4 = local_f4 + (0x14 - (int)(local_ec + 1));
  }
  FUN_0096e6b0(*(void **)((int)this + 0x214),"Host",(char *)((int)this + 4));
  FUN_0096e640(*(void **)((int)this + 0x214),"Connection: close");
  if (param_4 != (char *)0x0) {
    _sprintf(local_d8,"%ld",param_5);
    FUN_0096e6b0(*(void **)((int)this + 0x214),"Content-Length:",local_d8);
    local_f4 = local_f4 + param_5 + 2;
  }
  pcVar14 = (char *)LHHttp_BuildHeaderBlock(*(void **)((int)this + 0x214));
  pcVar7 = pcVar14;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar7 + (int)(pcVar6 + (int)(local_f4 + (-(int)(pcVar3 + 1) - (int)(pcVar14 + 1))));
  puVar8 = operator_new((uint)pcVar7);
  *(undefined4 **)((int)this + 0x208) = puVar8;
  for (uVar10 = (uint)pcVar7 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (uVar10 = (uint)pcVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  pcVar7 = *(char **)((int)this + 0x208);
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  pcVar7 = pcVar14;
  pcVar6 = local_ec;
  if (local_ec != (char *)0x0) {
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar10 = (int)pcVar6 - (int)local_ec;
    pcVar6 = (char *)(*(int *)((int)this + 0x208) + -1);
    do {
      pcVar13 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
    } while (*pcVar13 != '\0');
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)local_ec;
      local_ec = local_ec + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar6 = *local_ec;
      local_ec = local_ec + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar10 = (int)pcVar7 - (int)pcVar14;
  pcVar7 = (char *)(*(int *)((int)this + 0x208) + -1);
  do {
    pcVar6 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar6 != '\0');
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar14;
    pcVar14 = pcVar14 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar7 = *pcVar14;
    pcVar14 = pcVar14 + 1;
    pcVar7 = pcVar7 + 1;
  }
  puVar2 = (undefined2 *)(*(int *)((int)this + 0x208) + -1);
  do {
    puVar15 = puVar2;
    puVar2 = (undefined2 *)((int)puVar15 + 1);
  } while (*(char *)((int)puVar15 + 1) != '\0');
  *(undefined2 *)((int)puVar15 + 1) = 0xa0d;
  *(undefined1 *)((int)puVar15 + 3) = 0;
  pcVar7 = *(char **)((int)this + 0x208);
  pcVar14 = pcVar7;
  do {
    cVar1 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar1 != '\0');
  *(int *)((int)this + 0x210) = (int)pcVar14 - (int)(pcVar7 + 1);
  if (param_4 != (char *)0x0) {
    pcVar7 = pcVar7 + ((int)pcVar14 - (int)(pcVar7 + 1));
    for (uVar10 = param_5 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar10 = param_5 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar7 = *param_4;
      param_4 = param_4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    *(int *)((int)this + 0x210) = *(int *)((int)this + 0x210) + param_5;
  }
  pvVar4 = *(void **)(*(int *)((int)this + 0x214) + 0xc);
  if (pvVar4 == (void *)0x0) {
    if ((param_3 != (void *)0x0) && (*(void **)((int)param_3 + 0xc) != (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_3 + 0xc));
    }
                    /* WARNING: Subroutine does not return */
    _free(pcVar3);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvVar4);
}


//// FUNCTION FUN_0096ed70 @ 0096ed70 ////

undefined4 __fastcall FUN_0096ed70(int *param_1)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  char *pcVar12;
  int *piVar13;
  bool bVar14;
  time_t tVar15;
  undefined4 local_24;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5218;
  local_c = ExceptionList;
  uVar8 = 1;
  bVar2 = false;
  local_24 = 4;
  if (*(short *)((int)param_1 + 0x226) != 1) {
    return 0xffffff97;
  }
  ExceptionList = &local_c;
  if (((param_1[0x28d] == 0) && (ExceptionList = &local_c, *(int *)(param_1[0x86] + 8) == 0)) &&
     (ExceptionList = &local_c, (char)param_1[0x89] == '\0')) {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x89) = 1;
    _time((time_t *)(param_1 + 0x88));
  }
  if (((void *)*param_1 == (void *)0x0) ||
     (uVar4 = FUN_00969ba0((void *)*param_1,0), (char)uVar4 == '\0')) {
    tVar15 = _time((time_t *)0x0);
    if ((uint)(param_1[0x88] + param_1[0x87]) < (uint)tVar15) {
      FUN_0096d870(param_1[0x86]);
      param_1[0x28d] = 0;
      piVar13 = param_1 + 0x8d;
      for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar13 = 0;
        piVar13 = piVar13 + 1;
      }
      local_24 = 0xffffff9a;
    }
  }
  else {
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    uVar3 = 0;
    do {
      if (uVar8 == 0) break;
      FUN_0096bc20(local_1c,uVar8);
      uVar8 = FUN_0096ca20((void *)*param_1,local_1c);
      if ((char)uVar8 == '\0') {
        if (local_18 == (undefined4 *)0x0) {
          ExceptionList = local_c;
          return 0xffffff9b;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      uVar8 = *(uint *)(*param_1 + 0xbc);
      puVar9 = local_18;
      puVar11 = (undefined4 *)(param_1[0x28d] + 0x234 + (int)param_1);
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar6 = uVar8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      if (uVar8 == 0) {
        tVar15 = _time((time_t *)0x0);
        if ((uint)(param_1[0x88] + param_1[0x87]) < (uint)tVar15) {
          FUN_0096d870(param_1[0x86]);
          param_1[0x28d] = 0;
          param_1[0x294] = 0;
          param_1[0x295] = 0;
          param_1[0x496] = 0;
          piVar13 = param_1 + 0x8d;
          for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
          *(undefined1 *)(param_1 + 0x497) = 0;
          local_24 = 0xffffff9a;
        }
      }
      else {
        iVar5 = param_1[0x28d];
        cVar1 = *(char *)(iVar5 + 0x234 + (int)param_1);
        if (cVar1 == '\r') {
          bVar2 = true;
        }
        if ((cVar1 == '\n') && (bVar2)) {
          piVar13 = param_1 + 0x8d;
          iVar7 = 1;
          bVar14 = true;
          *(undefined1 *)(iVar5 + 0x233 + (int)param_1) = 0;
          piVar10 = piVar13;
          pcVar12 = "";
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar14 = (char)*piVar10 == *pcVar12;
            piVar10 = (int *)((int)piVar10 + 1);
            pcVar12 = pcVar12 + 1;
          } while (bVar14);
          if (bVar14) {
            *(undefined2 *)((int)param_1 + 0x226) = 2;
            *(undefined1 *)(param_1 + 0x89) = 0;
            param_1[0x294] = 0;
            param_1[0x295] = 0;
            piVar13 = param_1 + 0x296;
            for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar13 = 0;
              piVar13 = piVar13 + 1;
            }
            puVar9 = (undefined4 *)param_1[0x498];
            param_1[0x496] = 0;
            *(undefined1 *)(param_1 + 0x497) = 0;
            if (puVar9 == (undefined4 *)0x0) {
              FUN_0096a8d0((int)local_1c);
              ExceptionList = local_c;
              return 5;
            }
            if ((void *)*puVar9 == (void *)0x0) {
              puVar9[1] = 0;
                    /* WARNING: Subroutine does not return */
              _free(puVar9);
            }
                    /* WARNING: Subroutine does not return */
            _free((void *)*puVar9);
          }
          iVar5 = FUN_0096cdf0((char *)piVar13,"http/1.");
          if (iVar5 == 0) {
            FUN_0096e6b0((void *)param_1[0x86],"ServerCode",(char *)piVar13);
          }
          else {
            FUN_0096e640((void *)param_1[0x86],(char *)piVar13);
          }
          param_1[0x28d] = 0;
          for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
            *piVar13 = 0;
            piVar13 = piVar13 + 1;
          }
        }
        else {
          param_1[0x28d] = iVar5 + uVar8;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x400);
    if (uVar3 != 0) {
      _time((time_t *)(param_1 + 0x88));
    }
    if (local_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
  }
  ExceptionList = local_c;
  return local_24;
}


//// FUNCTION LHHttp_ParseResponseHeaders @ 0096f0d0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall LHHttp_ParseResponseHeaders(void *this,int param_1)

{
  void *this_00;
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  undefined1 local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if (*(int *)(*(int *)((int)this + 0x218) + 8) != 0) {
    piVar2 = *(int **)(*(int *)((int)this + 0x218) + 4);
    piVar7 = (int *)*piVar2;
    if (piVar7 != piVar2) {
      do {
        FUN_0096e640((void *)(param_1 + 4),(char *)piVar7[2]);
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(*(int *)((int)this + 0x218) + 4));
    }
    this_00 = (void *)(param_1 + 4);
    pcVar3 = FUN_0096d8f0(this_00,"ServerCode");
    if (pcVar3 != (char *)0x0) {
      _sscanf(pcVar3,"%s %ld",local_404,param_1);
    }
    pcVar3 = FUN_0096d8f0(this_00,"Location:");
    if (pcVar3 != (char *)0x0) {
      if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 0x14));
      }
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar4 = operator_new((uint)(pcVar4 + (1 - (int)(pcVar3 + 1))));
      *(char **)(param_1 + 0x14) = pcVar4;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    *(undefined4 *)((int)this + 0xa4c) = 0;
    pcVar3 = FUN_0096d8f0(this_00,"Content-Length");
    if (pcVar3 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    }
    else {
      lVar5 = _atol(pcVar3);
      *(long *)(param_1 + 0x18) = lVar5;
    }
    pcVar3 = FUN_0096d8f0(this_00,"Transfer-Encoding");
    if (pcVar3 != (char *)0x0) {
      iVar6 = FUN_0096cdf0(pcVar3,"chunked");
      if (iVar6 == 0) {
        *(undefined4 *)((int)this + 0xa4c) = 1;
        return 1000;
      }
    }
  }
  return 1000;
}


//// FUNCTION FUN_0096f240 @ 0096f240 ////

undefined4 __thiscall FUN_0096f240(void *this,int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 local_1c [4];
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5238;
  local_c = ExceptionList;
  uVar5 = 0;
  bVar2 = false;
  if (*(void **)this != (void *)0x0) {
    ExceptionList = &local_c;
    uVar3 = FUN_00969ba0(*(void **)this,0);
    if ((char)uVar3 != '\0') {
      local_18 = (undefined1 *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 0;
      FUN_0096e440(local_1c,1);
      do {
        FUN_0096bc20(local_1c,1);
        uVar4 = FUN_0096ca20(*(void **)this,local_1c);
        if ((char)uVar4 == '\0') {
          if (local_18 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_18);
          }
          ExceptionList = local_c;
          return 0xffffff9a;
        }
        *(undefined1 *)(param_1 + *param_2) = *local_18;
        cVar1 = *(char *)(*param_2 + param_1);
        if (cVar1 == '\r') {
          bVar2 = true;
        }
        if ((cVar1 == '\n') && (bVar2)) {
          *(undefined1 *)(*param_2 + -1 + param_1) = 0;
          FUN_0096a8d0((int)local_1c);
          ExceptionList = local_c;
          return 7;
        }
        uVar5 = uVar5 + 1;
        *param_2 = *param_2 + 1;
      } while (uVar5 < 0x400);
      if (local_18 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
    }
  }
  ExceptionList = local_c;
  return 6;
}


//// FUNCTION FUN_0096f370 @ 0096f370 ////

undefined4 __fastcall FUN_0096f370(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  time_t tVar9;
  uint local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5260;
  local_c = ExceptionList;
  local_20 = 6;
  if (param_1[0x293] == 1) {
    if ((char)param_1[0x497] == '\0') {
      piVar8 = param_1 + 0x296;
      ExceptionList = &local_c;
      iVar4 = FUN_0096f240(param_1,(int)piVar8,param_1 + 0x496);
      if (iVar4 == 7) {
        local_24 = 0;
        *(undefined1 *)(param_1 + 0x497) = 1;
        _sscanf((char *)piVar8,"%X",&local_24);
        if (local_24 == 0) {
          *(undefined1 *)(param_1 + 0x89) = 0;
          local_20 = 7;
        }
        else {
          local_24 = local_24 + 2;
          puVar2 = operator_new(0xc);
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
          param_1[0x498] = (int)puVar2;
          pvVar3 = operator_new(local_24);
          *(void **)param_1[0x498] = pvVar3;
          puVar2 = *(undefined4 **)param_1[0x498];
          for (uVar6 = local_24 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar2 = 0;
            puVar2 = puVar2 + 1;
          }
          for (uVar6 = local_24 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar2 = 0;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
          }
          *(uint *)(param_1[0x498] + 4) = local_24;
        }
        for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        param_1[0x496] = 0;
      }
      else if (iVar4 == -0x66) {
        ExceptionList = local_c;
        return 0xffffff9a;
      }
    }
    else {
      iVar4 = param_1[0x498];
      piVar8 = param_1 + 0x498;
      if (iVar4 == 0) {
        local_20 = 7;
      }
      else if (*(uint *)(iVar4 + 8) < *(uint *)(iVar4 + 4)) {
        ExceptionList = &local_c;
        iVar4 = FUN_0096d260(param_1);
        if (iVar4 == 0) {
          local_18 = (undefined4 *)0x0;
          local_14 = 0;
          local_10 = 0;
          local_4 = 0;
          FUN_0096bc20(local_1c,*(int *)(*piVar8 + 4) - *(int *)(*piVar8 + 8));
          uVar6 = FUN_0096ca20((void *)*param_1,local_1c);
          if ((char)uVar6 == '\0') {
            FUN_0096a8d0((int)local_1c);
            ExceptionList = local_c;
            return 0xffffff9b;
          }
          uVar6 = *(uint *)(*param_1 + 0xbc);
          puVar2 = local_18;
          puVar7 = (undefined4 *)(((int *)*piVar8)[2] + *(int *)*piVar8);
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar7 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar7 = puVar7 + 1;
          }
          for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          *(int *)(*piVar8 + 8) = *(int *)(*piVar8 + 8) + uVar6;
          param_1[0x8a] = param_1[0x8a] + uVar6;
          _time((time_t *)(param_1 + 0x88));
          FUN_0096a8d0((int)local_1c);
        }
        else if ((char)param_1[0x89] == '\0') {
          _time((time_t *)(param_1 + 0x88));
          *(undefined1 *)(param_1 + 0x89) = 1;
        }
        else {
          tVar9 = _time((time_t *)0x0);
          if ((uint)(param_1[0x88] + param_1[0x87]) < (uint)tVar9) {
            puVar2 = (undefined4 *)*piVar8;
            if (puVar2 != (undefined4 *)0x0) {
              if ((void *)*puVar2 == (void *)0x0) {
                puVar2[1] = 0;
                    /* WARNING: Subroutine does not return */
                _free(puVar2);
              }
                    /* WARNING: Subroutine does not return */
              _free((void *)*puVar2);
            }
            FUN_0096da00((int)param_1);
            local_20 = 0xffffff9a;
          }
        }
      }
      else {
        ExceptionList = &local_c;
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -2;
        FUN_0096e600(param_1 + 0x290,piVar8);
        *(undefined1 *)(param_1 + 0x497) = 0;
      }
    }
  }
  else {
    ExceptionList = &local_c;
    if (((void *)*param_1 != (void *)0x0) &&
       (ExceptionList = &local_c, uVar1 = FUN_00969ba0((void *)*param_1,0), (char)uVar1 != '\0')) {
      local_18 = (undefined4 *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4 = 1;
      FUN_0096bc20(local_1c,0);
      FUN_0096ca20((void *)*param_1,local_1c);
      uVar6 = *(uint *)(*param_1 + 0xbc);
      local_24 = uVar6;
      if (uVar6 == 0) {
        *(undefined1 *)(param_1 + 0x89) = 0;
        local_20 = 7;
      }
      else {
        puVar2 = operator_new(0xc);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        piVar8 = param_1 + 0x498;
        *piVar8 = (int)puVar2;
        pvVar3 = operator_new(uVar6);
        *(void **)*piVar8 = pvVar3;
        puVar2 = *(undefined4 **)*piVar8;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
        uVar6 = *(uint *)(*param_1 + 0xbc);
        puVar2 = local_18;
        puVar7 = *(undefined4 **)*piVar8;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
          puVar2 = (undefined4 *)((int)puVar2 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(uint *)(*piVar8 + 4) = local_24;
        param_1[0x8a] = param_1[0x8a] + local_24;
        FUN_0096e600(param_1 + 0x290,piVar8);
        _time((time_t *)(param_1 + 0x88));
      }
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_c;
        return local_20;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    if ((char)param_1[0x89] == '\0') {
      _time((time_t *)(param_1 + 0x88));
      *(undefined1 *)(param_1 + 0x89) = 1;
    }
    else {
      tVar9 = _time((time_t *)0x0);
      if ((uint)(param_1[0x88] + param_1[0x87]) < (uint)tVar9) {
        puVar2 = (undefined4 *)param_1[0x498];
        if (puVar2 != (undefined4 *)0x0) {
          if ((void *)*puVar2 == (void *)0x0) {
            puVar2[1] = 0;
                    /* WARNING: Subroutine does not return */
            _free(puVar2);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar2);
        }
        FUN_0096da00((int)param_1);
        local_20 = 0xffffff9a;
      }
    }
  }
  ExceptionList = local_c;
  return local_20;
}


//// FUNCTION FUN_0096f7c0 @ 0096f7c0 ////

void __thiscall FUN_0096f7c0(void *this,char param_1)

{
  ushort uVar1;
  int iVar2;
  uint local_838;
  undefined1 local_834 [4];
  void *local_830;
  undefined4 local_82c;
  undefined4 local_828;
  int local_824;
  char *local_81c;
  char *local_818;
  undefined4 local_814;
  char local_810 [2048];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf527b;
  pvStack_c = ExceptionList;
  local_10 = DAT_00e9a098;
  ExceptionList = &pvStack_c;
  local_830 = (void *)FUN_00963e10();
  local_82c = 0;
  local_828 = 0;
  local_838 = 0xffffffff;
  local_824 = 0;
  local_81c = (char *)0x0;
  local_818 = (char *)0x0;
  local_814 = (uint)local_814._2_2_ << 0x10;
  local_4 = 0;
  if (param_1 == '\0') {
    *(undefined4 *)((int)this + 0x230) = 0;
  }
  do {
    iVar2 = FUN_0096e270(this);
    if (((iVar2 == -0x6b) || (iVar2 == -0x6a)) || (iVar2 == -0x68)) break;
    if (iVar2 == 2) goto LAB_0096f860;
  } while (iVar2 != -100);
  if (iVar2 == 2) {
LAB_0096f860:
    do {
      iVar2 = FUN_0096ed70(this);
      if (iVar2 == 5) {
        LHHttp_ParseResponseHeaders(this,(int)&local_838);
        if (local_838 == 200) goto LAB_0096f898;
        if (((299 < local_838) && (local_838 < 400)) && (local_824 != 0)) {
          _strncpy(local_810,*(char **)((int)this + 0xa38),0x7ff);
          uVar1 = *(ushort *)((int)this + 0xa3c);
          FUN_0096dcb0(this);
          FUN_0096dbe0(this);
          FUN_0096d150(this,local_810,uVar1);
          LHHttp_ParseURL((int)&local_838);
          iVar2 = local_814;
          LHHttp_ParseURL((int)&local_838);
          iVar2 = FUN_0096e580(this,local_81c,(short)iVar2);
          if (iVar2 == 0) {
            LHHttp_ParseURL((int)&local_838);
            iVar2 = FUN_0096e860(this,0,local_818,(void *)0x0,(char *)0x0,0);
            if (iVar2 == 8) {
              FUN_0096d7c0(&local_838);
              FUN_0096f7c0(this,'\x01');
            }
          }
        }
        break;
      }
      if ((iVar2 == -0x65) || (iVar2 == -0x66)) break;
    } while( true );
  }
  goto LAB_0096f973;
  while (iVar2 != -0x66) {
LAB_0096f898:
    iVar2 = FUN_0096f370(this);
    if ((iVar2 == 7) || (iVar2 == -0x65)) break;
  }
LAB_0096f973:
  FUN_0096d7c0(&local_838);
  FUN_0096d870((int)local_834);
  FUN_00963e30((int)local_834);
                    /* WARNING: Subroutine does not return */
  _free(local_830);
}


//// FUNCTION FUN_0096f9f0 @ 0096f9f0 ////

undefined4 __thiscall FUN_0096f9f0(void *this,int *param_1)

{
  void *_Memory;
  void *pvVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf529b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc4);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_0096be00(pvVar1);
  }
  *(void **)this = pvVar1;
  local_4 = 0xffffffff;
  if (param_1[9] == 1) {
    pvVar1 = (void *)FUN_0096b250(pvVar1,param_1);
    if ((char)pvVar1 != '\0') {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)pvVar1 >> 8),1);
    }
    _Memory = *(void **)this;
    if (_Memory != (void *)0x0) {
      FUN_0096c8f0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)this = 0;
  }
  else if (param_1[9] == 2) {
    piVar4 = (int *)((int)this + 0x30);
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *param_1;
      param_1 = param_1 + 1;
      piVar4 = piVar4 + 1;
    }
    uVar3 = 1;
    FUN_0096b4f0(pvVar1,(int *)((int)this + 0x30));
    FUN_0096b0f0(*(int *)this);
    pvVar1 = *(void **)this;
    *(undefined1 *)((int)pvVar1 + 0xa4) = 1;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar1 >> 8),uVar3);
}


//// FUNCTION FUN_0096ffb0 @ 0096ffb0 ////

void __fastcall FUN_0096ffb0(int param_1)

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


//// FUNCTION FUN_00970010 @ 00970010 ////

void __fastcall FUN_00970010(int param_1)

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


//// FUNCTION FUN_00970090 @ 00970090 ////

void FUN_00970090(void)

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


//// FUNCTION FUN_009700b0 @ 009700b0 ////

void __fastcall FUN_009700b0(int param_1)

{
  FUN_0096ffb0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009700d0 @ 009700d0 ////

void FUN_009700d0(void)

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


//// FUNCTION FUN_009700f0 @ 009700f0 ////

void __fastcall FUN_009700f0(int param_1)

{
  FUN_00970010(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00970110 @ 00970110 ////

void FUN_00970110(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00970150 @ 00970150 ////

void FUN_00970150(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00970330 @ 00970330 ////

void __thiscall FUN_00970330(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_0096a500((int)this);
    *param_1 = param_3;
    return;
  }
  do {
    _Memory = param_2;
    if (_Memory == param_3) {
      *param_1 = param_3;
      return;
    }
    param_2 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009703a0 @ 009703a0 ////

void __thiscall FUN_009703a0(void *this,int *param_1)

{
  int *_Memory;
  int *piVar1;
  
  piVar1 = (int *)**(int **)((int)this + 4);
  do {
    while( true ) {
      _Memory = piVar1;
      if (_Memory == *(int **)((int)this + 4)) {
        return;
      }
      if (_Memory[2] == *param_1) break;
      piVar1 = (int *)*_Memory;
    }
    piVar1 = (int *)*_Memory;
  } while (_Memory == *(int **)((int)this + 4));
  *(int **)_Memory[1] = (int *)*_Memory;
  *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_009703f0 @ 009703f0 ////

void __fastcall FUN_009703f0(int param_1)

{
  FUN_0096ffb0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00970450 @ 00970450 ////

void __fastcall FUN_00970450(int param_1)

{
  FUN_00970010(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009704d0 @ 009704d0 ////

void __thiscall FUN_009704d0(void *this,int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x1c);
      (puVar1 != *(undefined4 **)((int)this + 0x1c) && (puVar1[2] != param_1));
      puVar1 = (undefined4 *)*puVar1) {
  }
  FUN_009703a0((void *)((int)this + 0x18),puVar1 + 2);
  return;
}


//// FUNCTION FUN_00970500 @ 00970500 ////

int __fastcall FUN_00970500(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00970090();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00970520 @ 00970520 ////

int __fastcall FUN_00970520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009700d0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00970540 @ 00970540 ////

void __fastcall FUN_00970540(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x28) = 0xf;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00970590 @ 00970590 ////

void * __thiscall FUN_00970590(void *this,byte param_1)

{
  FUN_00970540((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009705b0 @ 009705b0 ////

void __fastcall FUN_009705b0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf52dc;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  if ((void *)*param_1 != (void *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_0096bf10((void *)*param_1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_0096c8f0(pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  *param_1 = 0;
  piVar2 = (int *)*DAT_01050b34;
  do {
    if (piVar2 == DAT_01050b34) {
LAB_00970644:
      piVar2 = *(int **)param_1[4];
      if (piVar2 != (int *)param_1[4]) {
        do {
          pvVar1 = *(void **)((int)piVar2 + 8);
          if (pvVar1 != (void *)0x0) {
            FUN_0096c8f0(pvVar1);
                    /* WARNING: Subroutine does not return */
            _free(pvVar1);
          }
          piVar2 = *(int **)param_1[4];
        } while (piVar2 != (int *)param_1[4]);
      }
      piVar2 = *(int **)param_1[7];
      if (piVar2 != (int *)param_1[7]) {
        do {
          pvVar1 = *(void **)((int)piVar2 + 8);
          if (pvVar1 != (void *)0x0) {
            FUN_0096c8f0(pvVar1);
                    /* WARNING: Subroutine does not return */
            _free(pvVar1);
          }
          piVar2 = *(int **)param_1[7];
        } while (piVar2 != (int *)param_1[7]);
      }
      piVar2 = *(int **)param_1[10];
      if (piVar2 != (int *)param_1[10]) {
        do {
          pvVar1 = *(void **)((int)piVar2 + 8);
          if (pvVar1 != (void *)0x0) {
            if (0xf < *(uint *)((int)pvVar1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)((int)pvVar1 + 0x14));
            }
            *(undefined4 *)((int)pvVar1 + 0x28) = 0xf;
            *(undefined4 *)((int)pvVar1 + 0x24) = 0;
            *(undefined1 *)((int)pvVar1 + 0x14) = 0;
            if (*(void **)((int)pvVar1 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(*(void **)((int)pvVar1 + 4));
            }
            *(undefined4 *)((int)pvVar1 + 4) = 0;
            *(undefined4 *)((int)pvVar1 + 8) = 0;
            *(undefined4 *)((int)pvVar1 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
            _free(pvVar1);
          }
          *(undefined4 *)((int)piVar2 + 8) = 0;
          piVar2 = *(int **)param_1[10];
        } while (piVar2 != (int *)param_1[10]);
      }
      FUN_0096a500((int)(param_1 + 3));
      FUN_00970010((int)(param_1 + 9));
      FUN_0096a500((int)(param_1 + 6));
      if (0xf < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[0xd]);
      }
      param_1[0x12] = 0xf;
      param_1[0x11] = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      FUN_00970010((int)(param_1 + 9));
                    /* WARNING: Subroutine does not return */
      _free((void *)param_1[10]);
    }
    if ((undefined4 *)piVar2[2] == param_1) {
      if (piVar2 != DAT_01050b34) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
                    /* WARNING: Subroutine does not return */
        _free(piVar2);
      }
      goto LAB_00970644;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}


//// FUNCTION FUN_009707a0 @ 009707a0 ////

undefined4 * __thiscall FUN_009707a0(void *this,byte param_1)

{
  FUN_009705b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009708a0 @ 009708a0 ////

void __thiscall FUN_009708a0(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf52f8;
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


//// FUNCTION FUN_00970940 @ 00970940 ////

void __thiscall FUN_00970940(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf5318;
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


//// FUNCTION FUN_00970ae0 @ 00970ae0 ////

undefined4 * __fastcall FUN_00970ae0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf535c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  uVar2 = FUN_0096a5b0();
  param_1[4] = uVar2;
  param_1[5] = 0;
  local_4 = 0;
  uVar2 = FUN_0096a5b0();
  param_1[7] = uVar2;
  param_1[8] = 0;
  local_4._0_1_ = 1;
  uVar2 = FUN_009700d0();
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  local_4._0_1_ = 2;
  FUN_0096ab60(param_1 + 0xc);
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0x800;
  *param_1 = 0;
  iVar1 = DAT_01050b34;
  local_4 = CONCAT31(local_4._1_3_,3);
  local_14 = param_1;
  iVar3 = FUN_00970110(DAT_01050b34,*(undefined4 *)(DAT_01050b34 + 4),&local_14);
  FUN_009708a0(&DAT_01050b30,1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00970bb0 @ 00970bb0 ////

uint __cdecl FUN_00970bb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf537b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x5c);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_00970ae0(puVar1);
  }
  local_4 = 0xffffffff;
  uVar2 = FUN_0096f9f0(this,param_1);
  ExceptionList = local_c;
  return -(uint)((char)uVar2 != '\0') & (uint)this;
}


//// FUNCTION FUN_00970d00 @ 00970d00 ////

int __fastcall FUN_00970d00(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5398;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  FUN_0096ab60((void *)(param_1 + 0x10));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00970e50 @ 00970e50 ////

void __cdecl FUN_00970e50(void *param_1)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  void *local_20;
  int local_1c;
  undefined1 local_18 [4];
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf53d6;
  local_c = ExceptionList;
  if ((char)param_1 != '\0') {
    ExceptionList = &local_c;
    local_14 = (int *)FUN_0096a5b0();
    local_10 = 0;
    piVar10 = (int *)*DAT_01050b34;
    local_4 = 0;
    if (piVar10 != DAT_01050b34) {
      do {
        piVar1 = local_14 + 1;
        iVar5 = FUN_0096a5f0(local_14,local_14[1],(undefined4 *)piVar10[2]);
        FUN_0096adf0(local_18,1);
        *piVar1 = iVar5;
        **(int **)(iVar5 + 4) = iVar5;
        piVar10 = (int *)*piVar10;
      } while (piVar10 != DAT_01050b34);
    }
    FUN_0096a710((int)local_18,1,-1);
    FUN_00970330(local_18,&param_1,(int *)*local_14,local_14);
    piVar10 = (int *)*local_14;
    *local_14 = (int)local_14;
    local_14[1] = (int)local_14;
    local_4 = 0xffffffff;
    local_10 = 0;
    if (piVar10 != local_14) {
                    /* WARNING: Subroutine does not return */
      _free(piVar10);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_14);
  }
  piVar10 = (int *)*DAT_01050b34;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar10 != DAT_01050b34) {
    do {
      ExceptionList = ppvVar3;
      iVar5 = *(int *)((int)*(void **)piVar10[2] + 0x80);
      if (iVar5 == 1) {
        uVar6 = FUN_00969ba0(*(void **)piVar10[2],0);
        cVar4 = (char)uVar6;
        while (cVar4 != '\0') {
          iVar5 = piVar10[2];
          if ((uint)(*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x20)) < *(uint *)(iVar5 + 4)) {
            param_1 = operator_new(0xc4);
            local_4 = 1;
            if (param_1 == (void *)0x0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = FUN_0096be00(param_1);
            }
            local_4 = 0xffffffff;
            param_1 = pvVar7;
            uVar6 = FUN_0096b430(*(void **)piVar10[2],pvVar7);
            if ((char)uVar6 != '\0') {
              *(int *)((int)pvVar7 + 0xa8) = piVar10[2];
              iVar5 = piVar10[2];
              iVar2 = *(int *)(iVar5 + 0x10);
              iVar8 = FUN_0096a5f0(iVar2,*(undefined4 *)(iVar2 + 4),&param_1);
              FUN_0096adf0((void *)(iVar5 + 0xc),1);
              *(int *)(iVar2 + 4) = iVar8;
              **(int **)(iVar8 + 4) = iVar8;
            }
          }
          uVar6 = FUN_00969ba0(*(void **)piVar10[2],0);
          cVar4 = (char)uVar6;
        }
      }
      else if (iVar5 == 2) {
        param_1 = (void *)((uint)param_1 & 0xffffff00);
        goto LAB_00971030;
      }
      piVar10 = (int *)*piVar10;
      ppvVar3 = ExceptionList;
    } while (piVar10 != DAT_01050b34);
  }
  FUN_0096aab0();
  ExceptionList = local_c;
  return;
LAB_00971030:
  pvVar7 = operator_new(0x3c);
  if (pvVar7 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar7 + 4) = 0;
    *(undefined4 *)((int)pvVar7 + 8) = 0;
    *(undefined4 *)((int)pvVar7 + 0xc) = 0;
    local_4 = 3;
    local_20 = pvVar7;
    FUN_0096ab60((void *)((int)pvVar7 + 0x10));
  }
  iVar5 = *(int *)((int)pvVar7 + 4);
  local_4 = 0xffffffff;
  local_20 = pvVar7;
  if (iVar5 == 0) {
LAB_0097108e:
    iVar5 = 0;
LAB_00971097:
    FUN_0096b710(pvVar7,*(undefined1 **)((int)pvVar7 + 8),0x400 - iVar5,(undefined1 *)&param_1);
  }
  else {
    pvVar9 = *(void **)((int)pvVar7 + 8);
    if ((uint)((int)pvVar9 - iVar5) < 0x400) {
      if (iVar5 == 0) goto LAB_0097108e;
      iVar5 = *(int *)((int)pvVar7 + 8) - iVar5;
      goto LAB_00971097;
    }
    if ((0x400 < (uint)((int)pvVar9 - iVar5)) && ((void *)(iVar5 + 0x400) != pvVar9)) {
      pvVar9 = _memmove((void *)(iVar5 + 0x400),pvVar9,0);
      *(void **)((int)pvVar7 + 8) = pvVar9;
    }
  }
  FUN_0096c410(*(void **)piVar10[2],pvVar7,(void *)((int)pvVar7 + 0x10),
               (undefined4 *)piVar10[2] + 0xc);
  if ((*(int *)((int)pvVar7 + 4) == 0) ||
     (local_1c = *(int *)((int)pvVar7 + 8) - *(int *)((int)pvVar7 + 4), local_1c == 0)) {
    if (0xf < *(uint *)((int)pvVar7 + 0x28)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)pvVar7 + 0x14));
    }
    *(undefined4 *)((int)pvVar7 + 0x28) = 0xf;
    *(undefined4 *)((int)pvVar7 + 0x24) = 0;
    *(undefined1 *)((int)pvVar7 + 0x14) = 0;
    if (*(void **)((int)pvVar7 + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)pvVar7 + 4));
    }
    *(undefined4 *)((int)pvVar7 + 4) = 0;
    *(undefined4 *)((int)pvVar7 + 8) = 0;
    *(undefined4 *)((int)pvVar7 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
    _free(pvVar7);
  }
  iVar5 = piVar10[2];
  iVar2 = *(int *)(iVar5 + 0x28);
  iVar8 = FUN_00970150(iVar2,*(undefined4 *)(iVar2 + 4),&local_20);
  FUN_00970940((void *)(iVar5 + 0x24),1);
  *(int *)(iVar2 + 4) = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  goto LAB_00971030;
}


//// FUNCTION FUN_00971190 @ 00971190 ////

uint __fastcall FUN_00971190(int *param_1)

{
  uint in_EAX;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  FUN_00970e50((void *)0x0);
  return (uint)(param_1[5] != 0);
}


//// FUNCTION FUN_00971340 @ 00971340 ////

void __fastcall FUN_00971340(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009713a0 @ 009713a0 ////

void __fastcall FUN_009713a0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_0099b400(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00971460 @ 00971460 ////

int __thiscall FUN_00971460(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)((int)this + 0x2d) = *(undefined1 *)((int)param_1 + 0x2d);
  *(undefined1 *)((int)this + 0x2e) = *(undefined1 *)((int)param_1 + 0x2e);
  *(undefined1 *)((int)this + 0x2f) = *(undefined1 *)((int)param_1 + 0x2f);
  *(undefined2 *)((int)this + 0x30) = *(undefined2 *)(param_1 + 0xc);
  *(undefined2 *)((int)this + 0x32) = *(undefined2 *)((int)param_1 + 0x32);
  *(undefined1 *)((int)this + 0x34) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)((int)this + 0x35) = *(undefined1 *)((int)param_1 + 0x35);
  *(undefined1 *)((int)this + 0x36) = *(undefined1 *)((int)param_1 + 0x36);
  *(undefined1 *)((int)this + 0x37) = *(undefined1 *)((int)param_1 + 0x37);
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  return (int)(param_1 + 0xe) + (4 - (int)param_1);
}


//// FUNCTION FUN_00971560 @ 00971560 ////

void __fastcall FUN_00971560(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x10));
}


//// FUNCTION FUN_00971620 @ 00971620 ////

undefined4 * __thiscall FUN_00971620(void *this,undefined4 *param_1)

{
  FUN_00a3bd10(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d707c0;
  return this;
}


//// FUNCTION FUN_009716b0 @ 009716b0 ////

undefined4 * __thiscall FUN_009716b0(void *this,byte param_1)

{
  FUN_00a3def0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009716d0 @ 009716d0 ////

undefined4 __fastcall FUN_009716d0(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (((*(byte *)(param_1 + 5) & 1) == 0) && ((param_1[4] == 0 || (*param_1 == -1)))) {
    uVar1 = 0;
  }
  return uVar1;
}


//// FUNCTION FUN_00971790 @ 00971790 ////

undefined4 * __fastcall FUN_00971790(undefined4 *param_1)

{
  FUN_009b38a0(param_1);
  *param_1 = &PTR_FUN_00d707fc;
  return param_1;
}


//// FUNCTION FUN_009717d0 @ 009717d0 ////

undefined4 * __thiscall FUN_009717d0(void *this,byte param_1)

{
  FUN_009717f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009717f0 @ 009717f0 ////

void __fastcall FUN_009717f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d707fc;
  FUN_009b32b0(param_1);
  return;
}


//// FUNCTION FUN_00971800 @ 00971800 ////

undefined4 * __thiscall FUN_00971800(void *this,byte param_1)

{
  FUN_00a3c810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00971880 @ 00971880 ////

void __thiscall FUN_00971880(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    puVar1 = operator_new(param_1 * 4);
    uVar3 = param_1 & 0x3fffffff;
    *(undefined4 **)((int)this + 0x5c) = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  if (param_2 != 0) {
    puVar1 = operator_new(param_2 * 4);
    uVar3 = param_2 & 0x3fffffff;
    *(undefined4 **)((int)this + 0x60) = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  pvVar2 = operator_new(param_1 * 4 + 4);
  *(void **)((int)this + 0x68) = pvVar2;
  iVar4 = 0;
  if (0 < (int)(param_1 + 1)) {
    do {
      *(undefined4 *)(*(int *)((int)this + 0x68) + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(param_1 + 1));
  }
  return;
}


//// FUNCTION FUN_00971920 @ 00971920 ////

void __thiscall FUN_00971920(void *this,int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x48) & 0x2000000) == 0)) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((int)this + 0x70);
    *(int *)((int)this + 0x70) = param_1;
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x2000000;
  }
  return;
}


//// FUNCTION FUN_00971950 @ 00971950 ////

undefined4 __thiscall FUN_00971950(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf544e;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  *param_1 = 0;
  switch(*(undefined4 *)this) {
  case 0:
    pvVar1 = operator_new(0x60);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      puVar2 = FUN_00a444c0(pvVar1,0xffffffff);
    }
    local_4 = 0xffffffff;
    FUN_00a444f0(puVar2,param_2);
    *param_1 = puVar2;
    goto switchD_0097197d_default;
  case 1:
    pvVar1 = operator_new(0x7c);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
LAB_00971b6a:
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00a42e80(pvVar1,param_2);
    }
    break;
  case 2:
    pvVar1 = operator_new(0xb4);
    local_4 = 2;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a424d0(pvVar1,param_2);
    break;
  case 3:
    pvVar1 = operator_new(0x80);
    local_4 = 3;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a41e10(pvVar1,param_2);
    break;
  case 4:
    pvVar1 = operator_new(0xa8);
    local_4 = 4;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a41030(pvVar1,param_2);
    break;
  case 5:
    pvVar1 = operator_new(0xe8);
    local_4 = 6;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a3bd10(pvVar1,param_2);
    break;
  case 6:
    pvVar1 = operator_new(0xe8);
    local_4 = 7;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00971620(pvVar1,param_2);
    break;
  case 7:
    pvVar1 = operator_new(600);
    local_4 = 8;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a25460(pvVar1,param_2);
    break;
  case 8:
    pvVar1 = operator_new(0x13c);
    local_4 = 9;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a3fdf0(pvVar1,param_2);
    break;
  case 9:
    pvVar1 = operator_new(0x94);
    local_4 = 5;
    if (pvVar1 == (void *)0x0) goto LAB_00971b6a;
    puVar2 = FUN_00a408b0(pvVar1,param_2);
    break;
  default:
    goto switchD_0097197d_default;
  }
  *param_1 = puVar2;
switchD_0097197d_default:
  ExceptionList = local_c;
  return *(undefined4 *)((int)this + 4);
}


//// FUNCTION FUN_00971c30 @ 00971c30 ////

int __thiscall FUN_00971c30(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x48) & 0xffff;
  if (uVar3 != 0) {
    piVar1 = *(int **)((int)this + 0x60);
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 4) == param_1)) {
        return (*(int **)((int)this + 0x60))[uVar2];
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}


//// FUNCTION FUN_00971c80 @ 00971c80 ////

int __thiscall FUN_00971c80(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)((int)this + 0x4d) != 0) {
    piVar1 = *(int **)((int)this + 0x5c);
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 4) == param_1)) {
        return (*(int **)((int)this + 0x5c))[uVar2];
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(byte *)((int)this + 0x4d));
  }
  return 0;
}


//// FUNCTION FUN_00971d30 @ 00971d30 ////

uint __fastcall FUN_00971d30(int param_1)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x4d));
  uVar4 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      if ((*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 4) == 0) ||
         (cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x5c) + uVar4 * 4) + 0x34))(),
         cVar1 != '\0')) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x5c) + uVar4 * 4);
        uVar3 = uVar2;
        if ((*(uint *)(uVar2 + 0x48) & 0x200000) == 0) goto LAB_00971d64;
      }
      else {
        uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 4) + 0x18);
        uVar2 = 0;
        if (uVar3 != 0) {
LAB_00971d64:
          return uVar3 & 0xffffff00;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0x4d));
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00971d90 @ 00971d90 ////

undefined4 __fastcall FUN_00971d90(int param_1)

{
  uint in_EAX;
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    puVar1 = *(uint **)(param_1 + 0x5c);
    do {
      in_EAX = *puVar1;
      if ((in_EAX != 0) && (*(int *)(in_EAX + 0x18) != 0)) {
        return in_EAX & 0xffffff00;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x4d));
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00971df0 @ 00971df0 ////

void __fastcall FUN_00971df0(void *param_1)

{
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 0x1000000;
  FUN_0097a4b0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00971e10 @ 00971e10 ////

undefined4 __thiscall FUN_00971e10(void *this,uint param_1)

{
  int *piVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if (*(char *)((int)this + 0x4d) != '\0') {
    while( true ) {
      uVar2 = *(uint *)((int)this + 0x5c);
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (((piVar1 != (int *)0x0) &&
          (((piVar1[2] == 7 || (uVar2 = (**(code **)(*piVar1 + 8))(), (char)uVar2 != '\0')) &&
           ((piVar1[0x24] & param_1) != 0)))) && ((piVar1[0x25] & param_1) == 0)) break;
      uVar3 = uVar3 + 1;
      if (*(byte *)((int)this + 0x4d) <= uVar3) {
        return 1;
      }
    }
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}


//// FUNCTION FUN_00971e70 @ 00971e70 ////

void __thiscall FUN_00971e70(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(char *)((int)this + 0x4d) != '\0') {
    do {
      piVar1 = *(int **)(*(int *)((int)this + 0x5c) + uVar4 * 4);
      if ((piVar1 != (int *)0x0) &&
         (((piVar1[2] == 7 || (cVar3 = (**(code **)(*piVar1 + 8))(), cVar3 != '\0')) &&
          ((piVar1[0x24] & param_1) != 0)))) {
        piVar1[0x25] = piVar1[0x25] & ~param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((int)this + 0x4d));
  }
  uVar4 = 0;
  if ((*(uint *)((int)this + 0x48) & 0xffff) != 0) {
    do {
      iVar2 = *(int *)(*(int *)((int)this + 0x60) + uVar4 * 4);
      if (((iVar2 != 0) && ((*(uint *)(iVar2 + 0x44) & param_1) != 0)) &&
         (*(int *)(iVar2 + 0x20) == 1)) {
        *(uint *)(iVar2 + 0x48) = *(uint *)(iVar2 + 0x48) | 0x1000000;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (*(uint *)((int)this + 0x48) & 0xffff));
  }
  return;
}


//// FUNCTION FUN_00971f10 @ 00971f10 ////

undefined4 __fastcall FUN_00971f10(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    piVar2 = *(int **)(param_1 + 0x5c);
    do {
      if (*(int *)(*piVar2 + 8) == 7) {
        return *(undefined4 *)(*piVar2 + 0x18);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x4d));
  }
  return 0;
}


//// FUNCTION FUN_00971f40 @ 00971f40 ////

uint __thiscall FUN_00971f40(void *this,undefined4 *param_1)

{
  uint in_EAX;
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return in_EAX & 0xffffff00;
  }
  uVar1 = 0;
  if (*(byte *)((int)this + 0x4d) != 0) {
    puVar2 = *(undefined4 **)((int)this + 0x5c);
    do {
      if (*(int *)((int)*puVar2 + 8) == 7) {
        uVar1 = FUN_00a40200((void *)*puVar2,param_1);
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x4d));
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00971fc0 @ 00971fc0 ////

void * __thiscall FUN_00971fc0(void *this,byte param_1)

{
  FUN_00a44710((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00972010 @ 00972010 ////

void __thiscall FUN_00972010(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return;
}


//// FUNCTION FUN_00972030 @ 00972030 ////

bool __cdecl FUN_00972030(int param_1)

{
  return param_1 == 0;
}


//// FUNCTION FUN_00972070 @ 00972070 ////

void FUN_00972070(void)

{
  FUN_009d9820();
  return;
}


//// FUNCTION FUN_00972090 @ 00972090 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00972090(int param_1)

{
  DAT_01050b60 = param_1;
  _DAT_0105be84 = (float)param_1 * 0.01;
  return;
}


//// FUNCTION FUN_009720b0 @ 009720b0 ////

undefined4 FUN_009720b0(void)

{
  return 0x300;
}


//// FUNCTION FUN_009720c0 @ 009720c0 ////

float10 __fastcall FUN_009720c0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)*(int *)(param_1 + 0x8c);
  if (*(int *)(param_1 + 0x8c) < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  return (fVar1 * (float10)100.0 + (float10)DAT_01050b60) * (float10)0.001;
}


//// FUNCTION FUN_009720f0 @ 009720f0 ////

undefined4 __fastcall FUN_009720f0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    piVar2 = *(int **)(param_1 + 0x5c);
    do {
      iVar1 = *piVar2;
      if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x48) & 0x40000000) != 0)) &&
         (*(int *)(iVar1 + 0x40) != 0)) {
        return *(undefined4 *)((*(int **)(param_1 + 0x5c))[uVar3] + 0x40);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x4d));
  }
  return 0;
}


//// FUNCTION FUN_00972130 @ 00972130 ////

/* WARNING: Removing unreachable block (ram,0x00972179) */

float10 __thiscall FUN_00972130(int param_1,float param_2,float param_3)

{
  uint uVar1;
  float10 fVar2;
  
  if (((*(uint *)(param_1 + 0x50) & 0x40000) != 0) && ((*(byte *)(param_1 + 0x54) & 0x20) == 0)) {
    fVar2 = FUN_00990e30(param_2,param_3);
    return fVar2;
  }
  uVar1 = *(int *)(param_1 + 8) * 0x19660d + 0x3c6ef35f;
  *(uint *)(param_1 + 8) = uVar1;
  return ((float10)param_3 - (float10)param_2) *
         (float10)(uVar1 >> 6 & 0x7fffff) * (float10)1.192093e-07 + (float10)param_2;
}


//// FUNCTION FUN_009721f0 @ 009721f0 ////

void __fastcall FUN_009721f0(int param_1)

{
  FUN_009b00b0(param_1);
  return;
}


//// FUNCTION FUN_00972220 @ 00972220 ////

int __thiscall FUN_00972220(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(byte *)((int)this + 0x4d) != 0) {
    piVar1 = *(int **)((int)this + 0x5c);
    do {
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x40) == param_1)) {
        return (*(int **)((int)this + 0x5c))[uVar2];
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (uVar2 < *(byte *)((int)this + 0x4d));
  }
  return 0;
}


//// FUNCTION FUN_00972270 @ 00972270 ////

void __thiscall FUN_00972270(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < (int)(uint)*(byte *)((int)this + 0x4d))) {
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x5c) + param_1 * 4) + 200) = param_2;
  }
  return;
}


//// FUNCTION FUN_009722a0 @ 009722a0 ////

uint __thiscall FUN_009722a0(void *this,int param_1)

{
  if (((*(int *)((int)this + 0x58) != 0) && (-1 < param_1)) &&
     (param_1 < (int)(*(uint *)((int)this + 0x4c) & 0xff))) {
    return *(uint *)(*(int *)((int)this + 0x58) + param_1 * 4);
  }
  return (param_1 != -10) - 1 & 0xe66f00;
}


//// FUNCTION FUN_009722e0 @ 009722e0 ////

float10 __thiscall FUN_009722e0(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = *(byte *)(param_1 + 0x4e);
  if (((bVar1 == 0) || (*(int *)(param_1 + 0xc4) == 0)) || (param_2 == (byte *)0x0)) {
    return (float10)0.0;
  }
  uVar6 = 0;
  if (bVar1 != 0) {
    do {
      pbVar5 = param_2;
      if (((*(int *)(param_1 + 0x58) == 0) || ((int)uVar6 < 0)) ||
         ((int)(*(uint *)(param_1 + 0x4c) & 0xff) <= (int)uVar6)) {
        pbVar3 = (byte *)((uVar6 != 0xfffffff6) - 1 & 0xe66f00);
      }
      else {
        pbVar3 = *(byte **)(*(int *)(param_1 + 0x58) + uVar6 * 4);
      }
      do {
        bVar2 = *pbVar3;
        bVar7 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_00972374:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00972379;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar7 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_00972374;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00972379:
      if (iVar4 == 0) {
        return (float10)*(float *)(*(int *)(param_1 + 0xc4) + uVar6 * 0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar1);
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00972420 @ 00972420 ////

void __thiscall FUN_00972420(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x148) != 0) && (param_1 != 0)) {
    FUN_00981a50(param_1,*(int *)((int)this + 0x148),(int)this);
  }
  return;
}


//// FUNCTION FUN_00972440 @ 00972440 ////

uint __thiscall FUN_00972440(void *this,uint param_1)

{
  char *_Str2;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (int)(uint)*(byte *)((int)this + 0x4e))) {
    if ((*(int *)((int)this + 0x58) == 0) ||
       ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)param_1)) {
      if (param_1 != 0xfffffff6) goto LAB_009724ea;
      _Str2 = s_look_at_00e66f00;
    }
    else {
      _Str2 = *(char **)(*(int *)((int)this + 0x58) + param_1 * 4);
      param_1 = 0;
      if (_Str2 == (char *)0x0) goto LAB_009724ea;
    }
    iVar1 = 9;
    bVar4 = true;
    pcVar2 = _Str2;
    pcVar3 = "ai_crane";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
      iVar1 = 9;
      bVar4 = true;
      pcVar2 = _Str2;
      pcVar3 = "ai_dolly";
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (!bVar4) {
        iVar1 = 0x11;
        bVar4 = true;
        pcVar2 = _Str2;
        pcVar3 = "ai_director_mood";
        do {
          if (iVar1 == 0) break;
          iVar1 = iVar1 + -1;
          bVar4 = *pcVar2 == *pcVar3;
          pcVar2 = pcVar2 + 1;
          pcVar3 = pcVar3 + 1;
        } while (bVar4);
        if (!bVar4) {
          iVar1 = 9;
          bVar4 = true;
          pcVar2 = _Str2;
          pcVar3 = "ai_crank";
          do {
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            bVar4 = *pcVar2 == *pcVar3;
            pcVar2 = pcVar2 + 1;
            pcVar3 = pcVar3 + 1;
          } while (bVar4);
          if (!bVar4) {
            iVar1 = _strncmp("sld_",_Str2,4);
            return (uint)(iVar1 == 0);
          }
        }
      }
    }
    return CONCAT31((int3)((uint)_Str2 >> 8),1);
  }
LAB_009724ea:
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_009724f0 @ 009724f0 ////

float10 __thiscall FUN_009724f0(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  float10 fVar9;
  
  fVar2 = param_2;
  if (((*(int *)(param_1 + 0x58) == 0) || ((int)param_2 < 0)) ||
     ((int)(*(uint *)(param_1 + 0x4c) & 0xff) <= (int)param_2)) {
    if (param_2 != -NAN) goto LAB_00972568;
    pcVar4 = s_look_at_00e66f00;
  }
  else {
    pcVar4 = *(char **)(*(int *)(param_1 + 0x58) + (int)param_2 * 4);
    if (pcVar4 == (char *)0x0) goto LAB_00972568;
  }
  iVar5 = 9;
  bVar8 = true;
  pcVar6 = pcVar4;
  pcVar7 = "ai_crane";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar8 = *pcVar6 == *pcVar7;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar5 = 9;
    bVar8 = true;
    pcVar6 = pcVar4;
    pcVar7 = "ai_dolly";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar5 = 9;
      bVar8 = true;
      pcVar6 = "ai_crank";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar4 == *pcVar6;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (!bVar8) {
LAB_00972568:
        iVar5 = 0;
        param_2 = 0.0;
        if ((*(uint *)(param_1 + 0x48) & 0xffff) != 0) {
          do {
            piVar1 = *(int **)(*(int *)(param_1 + 0x60) + iVar5 * 4);
            if (((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x5c))(), cVar3 != '\0'))
               && (fVar9 = FUN_00a41840((int)piVar1,(int)fVar2), (float10)param_2 < fVar9)) {
              param_2 = (float)fVar9;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(*(uint *)(param_1 + 0x48) & 0xffff));
        }
        return (float10)param_2;
      }
    }
  }
  return (float10)2.0;
}


//// FUNCTION FUN_00972630 @ 00972630 ////

void __thiscall FUN_00972630(void *this,undefined4 param_1,float param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  char local_44 [4];
  char local_40 [64];
  
  iVar1 = FUN_009ad870(&DAT_010b9588,(byte *)"blue_ground_v00.dds");
  if (iVar1 < 2) {
    return;
  }
  uVar6 = FUN_00acd42c();
  iVar4 = (int)uVar6;
  iVar5 = iVar4;
  if (iVar1 <= iVar4) {
    iVar5 = iVar1 + -1;
  }
  if (iVar5 < 10) {
    pcVar7 = "blue_ground_v0%d.dds";
  }
  else {
    pcVar7 = "blue_ground_v%d.dds";
  }
  _sprintf(local_40,pcVar7,iVar5);
  if (param_2 != -1.0) {
    if (iVar1 == 0) {
      return;
    }
    uVar6 = FUN_00acd42c();
    iVar2 = (int)uVar6;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (iVar1 <= iVar2) {
      iVar2 = iVar1 + -1;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else if (iVar1 <= iVar4) {
      iVar4 = iVar1 + -1;
    }
    if (iVar2 == iVar4) {
      return;
    }
  }
  if (((*(void **)((int)this + 0x148) != (void *)0x0) &&
      (FUN_00981fc0(*(void **)((int)this + 0x148),(byte *)"blue_ground_v00.dds",local_40,-1),
      PTR_FUN_00e66ef8 != (undefined *)0x0)) && (param_3 != -1)) {
    pcVar7 = local_40;
    do {
      pcVar3 = pcVar7;
      pcVar7 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-4] = '\0';
    (*(code *)PTR_FUN_00e66ef8)
              (DAT_01050b5c,this,local_40,
               (float)(iVar5 + 1) * (1.0 / (float)iVar1) - (1.0 / (float)iVar1) * 0.5,param_3);
  }
  return;
}


//// FUNCTION FUN_00972770 @ 00972770 ////

uint __fastcall FUN_00972770(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = param_1;
  }
  if (*(int *)(iVar1 + 600) != 0) {
    uVar2 = FUN_009f53b0(*(int *)(iVar1 + 600));
    return uVar2;
  }
  return 0;
}


//// FUNCTION FUN_00972790 @ 00972790 ////

void __thiscall FUN_00972790(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((int)this + 0xf0);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 0x40;
    if (param_2 == -1) {
      param_2 = *(int *)((int)this + 0x74);
    }
    *(int *)((int)this + 0x140) = param_2;
    return;
  }
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xffffffbf;
  return;
}


//// FUNCTION FUN_009727e0 @ 009727e0 ////

void __thiscall FUN_009727e0(void *this,undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)((int)this + 0x118);
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 0x80;
    if (param_2 == -1) {
      param_2 = *(int *)((int)this + 0x78);
    }
    *(int *)((int)this + 0x144) = param_2;
    return;
  }
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xffffff7f;
  return;
}


//// FUNCTION FUN_00972830 @ 00972830 ////

uint __fastcall FUN_00972830(int param_1)

{
  return *(uint *)(param_1 + 0x54) >> 9 & 1;
}


//// FUNCTION FUN_00972a40 @ 00972a40 ////

void __cdecl FUN_00972a40(float *param_1)

{
  ulonglong uVar1;
  
  if (0.0 <= *param_1) {
    uVar1 = FUN_00acd42c();
    *param_1 = *param_1 - (float)(int)uVar1;
    return;
  }
  uVar1 = FUN_00acd42c();
  *param_1 = (*param_1 - (float)(int)uVar1) + 1.0;
  return;
}


//// FUNCTION FUN_00972bb0 @ 00972bb0 ////

void __cdecl FUN_00972bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00972bd0 @ 00972bd0 ////

void __cdecl FUN_00972bd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00972c10 @ 00972c10 ////

void __cdecl FUN_00972c10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00972c50 @ 00972c50 ////

void __cdecl FUN_00972c50(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00972f70 @ 00972f70 ////

void __fastcall FUN_00972f70(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION MeshInstance_SetUVScrollOffset @ 00972fa0 ////

void __thiscall MeshInstance_SetUVScrollOffset(void *this,undefined4 *param_1)

{
  float fVar1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0xbc) = *param_1;
  *(undefined4 *)((int)this + 0xc0) = param_1[1];
  if (*(float *)((int)this + 0xbc) < 0.0) {
    uVar2 = FUN_00acd42c();
    fVar1 = (*(float *)((int)this + 0xbc) - (float)(int)uVar2) + 1.0;
  }
  else {
    uVar2 = FUN_00acd42c();
    fVar1 = *(float *)((int)this + 0xbc) - (float)(int)uVar2;
  }
  *(float *)((int)this + 0xbc) = fVar1;
  if (0.0 <= *(float *)((int)this + 0xc0)) {
    uVar2 = FUN_00acd42c();
    *(float *)((int)this + 0xc0) = *(float *)((int)this + 0xc0) - (float)(int)uVar2;
    return;
  }
  uVar2 = FUN_00acd42c();
  *(float *)((int)this + 0xc0) = (*(float *)((int)this + 0xc0) - (float)(int)uVar2) + 1.0;
  return;
}


//// FUNCTION FUN_00973060 @ 00973060 ////

void __thiscall FUN_00973060(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return;
}


//// FUNCTION FUN_009730b0 @ 009730b0 ////

void __fastcall FUN_009730b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 8) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_0099b400(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_009730c0 @ 009730c0 ////

int __thiscall FUN_009730c0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    return -1;
  }
  uVar4 = 0;
  if (*(byte *)((int)this + 0x4f) != 0) {
    piVar6 = *(int **)((int)this + 100);
    do {
      iVar3 = *piVar6;
      pbVar5 = param_1;
      if (((*(int *)((int)this + 0x58) == 0) || (iVar3 < 0)) ||
         ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= iVar3)) {
        pbVar2 = (byte *)((iVar3 != -10) - 1 & 0xe66f00);
      }
      else {
        pbVar2 = *(byte **)(*(int *)((int)this + 0x58) + iVar3 * 4);
      }
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0097314a:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0097314f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0097314a;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0097314f:
      if (iVar3 == 0) {
        return 1 << ((byte)uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 < *(byte *)((int)this + 0x4f));
  }
  return -1;
}


//// FUNCTION FUN_00973180 @ 00973180 ////

uint __thiscall FUN_00973180(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if (*(byte *)((int)this + 0x4f) != 0) {
    piVar6 = *(int **)((int)this + 100);
    do {
      iVar3 = *piVar6;
      pbVar5 = param_1;
      if (((*(int *)((int)this + 0x58) == 0) || (iVar3 < 0)) ||
         ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= iVar3)) {
        pbVar2 = (byte *)((iVar3 != -10) - 1 & 0xe66f00);
      }
      else {
        pbVar2 = *(byte **)(*(int *)((int)this + 0x58) + iVar3 * 4);
      }
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0097320a:
          iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0097320f;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0097320a;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0097320f:
      if (iVar3 == 0) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 < *(byte *)((int)this + 0x4f));
  }
  return 0xffffffff;
}


//// FUNCTION FUN_00973290 @ 00973290 ////

void __fastcall FUN_00973290(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  param_1[5] = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    param_1[5] = 0;
    FUN_00a3fc40(param_1 + 3,(undefined4 *)param_1[1],(int *)param_1[2]);
    FUN_00a3def0(param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009732d0 @ 009732d0 ////

uint __thiscall FUN_009732d0(void *this,float *param_1,float param_2,int param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 < 2) {
    return 0;
  }
  uVar1 = 0;
  if (0 < param_3) {
    do {
      if (param_2 <= *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      param_1 = (float *)((int)param_1 + param_4);
    } while ((int)uVar1 < param_3);
  }
  if (((*(uint *)((int)this + 0x50) & 0x40000) != 0) && ((*(byte *)((int)this + 0x54) & 0x20) == 0))
  {
    uVar1 = FUN_00990d30(0,param_3 - 1U);
    return uVar1;
  }
  uVar1 = *(int *)((int)this + 8) * 0x19660d + 0x3c6ef35f;
  *(uint *)((int)this + 8) = uVar1;
  return uVar1 % (param_3 - 1U);
}


//// FUNCTION FUN_00973350 @ 00973350 ////

void __thiscall FUN_00973350(void *this,float *param_1,float *param_2,char param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = FUN_004012c0(*(float *)((int)this + 0xc0) + *param_2);
  *param_2 = (float)fVar4;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = fVar1 * *(float *)((int)this + 0x90) +
             fVar2 * *(float *)((int)this + 0x9c) + fVar3 * *(float *)((int)this + 0xa8) +
             *(float *)((int)this + 0xb4);
  param_1[1] = fVar1 * *(float *)((int)this + 0x94) +
               fVar2 * *(float *)((int)this + 0xa0) + fVar3 * *(float *)((int)this + 0xac) +
               *(float *)((int)this + 0xb8);
  param_1[2] = fVar1 * *(float *)((int)this + 0x98) +
               fVar2 * *(float *)((int)this + 0xa4) + fVar3 * *(float *)((int)this + 0xb0) +
               *(float *)((int)this + 0xbc);
  if (param_3 == '\0') {
    if (*(void **)((int)this + 0x148) == (void *)0x0) {
      fVar4 = (float10)*(float *)((int)this + 0x20);
    }
    else {
      fVar4 = FUN_0097f880(*(void **)((int)this + 0x148),param_1,(undefined4 *)0x0);
    }
    param_1[2] = (float)fVar4;
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x4c) & 0x10) != 0)) {
    param_1[2] = *(float *)((int)this + 0x218) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00973430 @ 00973430 ////

undefined4 __thiscall FUN_00973430(void *this,int param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  if (param_1 != 0) {
    *param_3 = *(float *)(param_1 + 0x80);
    param_3[1] = *(float *)(param_1 + 0x84);
    param_3[2] = *(float *)(param_1 + 0x88);
    *param_2 = *(float *)(param_1 + 0x8c);
    uVar1 = FUN_00973350(this,param_3,param_2,'\0',param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  fVar2 = FUN_004012c0(0.0);
  *param_2 = (float)fVar2;
  uVar1 = FUN_00973350(this,param_3,param_2,'\0',0);
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_009734c0 @ 009734c0 ////

undefined4 __thiscall FUN_009734c0(void *this,byte *param_1)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = *(byte *)((int)this + 0x4e);
  if ((bVar1 == 0) || (*(int *)((int)this + 0xc4) == 0)) {
    return in_EAX & 0xffffff00;
  }
  if (bVar1 != 0) {
    uVar6 = 0;
    do {
      pbVar5 = param_1;
      if (((*(int *)((int)this + 0x58) == 0) || ((int)uVar6 < 0)) ||
         ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)uVar6)) {
        pbVar3 = (byte *)((uVar6 != 0xfffffff6) - 1 & 0xe66f00);
      }
      else {
        pbVar3 = *(byte **)(*(int *)((int)this + 0x58) + uVar6 * 4);
      }
      do {
        bVar2 = *pbVar3;
        bVar7 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_00973544:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00973549;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar7 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_00973544;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_00973549:
      if (iVar4 == 0) {
        return 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar1);
  }
  return 0;
}


//// FUNCTION FUN_00973570 @ 00973570 ////

void __fastcall FUN_00973570(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009735b0 @ 009735b0 ////

void __fastcall FUN_009735b0(int param_1)

{
  void *_Memory;
  undefined4 *_Memory_00;
  
  _Memory = *(void **)(param_1 + 0x7c);
  if (_Memory != (void *)0x0) {
    FUN_00a44710((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  _Memory_00 = *(undefined4 **)(param_1 + 0x80);
  if (_Memory_00 != (undefined4 *)0x0) {
    FUN_00a3def0(_Memory_00);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  return;
}


//// FUNCTION FUN_00973600 @ 00973600 ////

void __thiscall FUN_00973600(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x4f);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      if (((int)uVar4 < 0) || ((int)uVar2 <= (int)uVar4)) {
        pbVar3 = (byte *)0x0;
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1 + 100) + uVar4 * 8);
        if (((*(int *)(param_1 + 0x58) == 0) || (iVar1 < 0)) ||
           ((int)(*(uint *)(param_1 + 0x4c) & 0xff) <= iVar1)) {
          pbVar3 = (byte *)((iVar1 != -10) - 1 & 0xe66f00);
        }
        else {
          pbVar3 = *(byte **)(*(int *)(param_1 + 0x58) + iVar1 * 4);
        }
      }
      uVar2 = FUN_00973180(this,pbVar3);
      if (uVar2 != 0xffffffff) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 4 + uVar4 * 8) = 1;
        *(undefined1 *)(*(int *)((int)this + 100) + 4 + uVar2 * 8) = 1;
      }
      uVar2 = (uint)*(byte *)(param_1 + 0x4f);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}


//// FUNCTION FUN_00973690 @ 00973690 ////

void __thiscall FUN_00973690(void *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) && (param_1 < (int)(*(byte *)((int)this + 0x4d) + 1))) {
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x68) + param_1 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0040a5b0(puVar1);
      *(undefined4 *)(*(int *)((int)this + 0x68) + param_1 * 4) = 0;
    }
    if (param_2 != (void *)0x0) {
      InterlockedIncrement((LONG *)((int)param_2 + 0x10));
      FUN_0097fec0(param_2);
    }
    *(void **)(*(int *)((int)this + 0x68) + param_1 * 4) = param_2;
  }
  return;
}


//// FUNCTION FUN_009736f0 @ 009736f0 ////

undefined4 __thiscall FUN_009736f0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  bool bVar8;
  
  if (param_1 != (byte *)0x0) {
    uVar5 = 0;
    if (*(byte *)((int)this + 0x4f) != 0) {
      piVar7 = *(int **)((int)this + 100);
      do {
        iVar3 = *piVar7;
        pbVar2 = param_1;
        if (((*(int *)((int)this + 0x58) == 0) || (iVar3 < 0)) ||
           ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= iVar3)) {
          pbVar6 = (byte *)((iVar3 != -10) - 1 & 0xe66f00);
        }
        else {
          pbVar6 = *(byte **)(*(int *)((int)this + 0x58) + iVar3 * 4);
        }
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00973779:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0097377e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00973779;
          pbVar6 = pbVar6 + 2;
          pbVar2 = pbVar2 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0097377e:
        if (iVar3 == 0) {
          uVar4 = FUN_00971e10(this,1 << ((byte)uVar5 & 0x1f));
          return uVar4;
        }
        uVar5 = uVar5 + 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 < *(byte *)((int)this + 0x4f));
    }
  }
  return 0;
}


//// FUNCTION FUN_009737c0 @ 009737c0 ////

void __thiscall FUN_009737c0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *this_00;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  local_8 = 0;
  local_4 = 0;
  local_c = 0x3f9c61ab;
  local_14 = 0;
  local_18 = 0.0;
  local_10 = 0;
  if (*(void **)((int)this + 0x148) != (void *)0x0) {
    iVar1 = FUN_0097e350(*(void **)((int)this + 0x148),0);
    if (iVar1 != 0) {
      iVar1 = FUN_0097e350(*(void **)((int)this + 0x148),0);
      local_20 = *(float *)(iVar1 + 0xe0) * -1.0;
      this_00 = (void *)(*(int *)((int)this + 0x148) + 0x18);
      local_8 = 0x3f800000;
      local_c = 0x3f9c61ab;
      local_24 = local_20 + *(float *)(iVar1 + 200);
      local_20 = local_20 + *(float *)(iVar1 + 0xcc);
      local_1c = *(float *)(iVar1 + 0xe0) * 0.7 + *(float *)(iVar1 + 0xd0);
      local_18 = *(float *)(iVar1 + 200);
      local_10 = *(undefined4 *)(iVar1 + 0xd0);
      local_14 = *(undefined4 *)(iVar1 + 0xcc);
      FUN_0040b490(this_00,&local_24);
      FUN_0040b490(this_00,&local_18);
    }
  }
  *param_1 = 0;
  param_1[1] = local_24;
  param_1[2] = local_20;
  param_1[3] = local_1c;
  param_1[4] = local_18;
  param_1[5] = local_14;
  param_1[6] = local_10;
  param_1[7] = local_c;
  param_1[8] = local_8;
  param_1[9] = local_4;
  return;
}


//// FUNCTION FUN_00973910 @ 00973910 ////

void __fastcall FUN_00973910(int param_1)

{
  uint uVar1;
  
  FUN_009d9820();
  FUN_009d9820();
  uVar1 = 0;
  if (*(char *)(param_1 + 0x4e) != '\0') {
    do {
      FUN_009d9820();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x4e));
  }
  uVar1 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      if (*(int *)(*(int *)(param_1 + 0x5c) + uVar1 * 4) != 0) {
        FUN_009d9820();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x4d));
  }
  return;
}


//// FUNCTION FUN_009739f0 @ 009739f0 ////

float10 __fastcall FUN_009739f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((*(int *)(param_1 + 0x74) != 0) && (*(int *)(param_1 + 0x74) <= *(int *)(param_1 + 0x8c))) {
LAB_00973ab1:
    return (float10)1.0;
  }
  iVar1 = *(int *)(param_1 + 0x8c) * 100 + DAT_01050b60;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  fVar2 = fVar2 * (float10)0.0005;
  if ((float10)0.01 < fVar2) {
    if (fVar2 < (float10)1.0 == (fVar2 == (float10)1.0)) goto LAB_00973ab1;
  }
  else {
    fVar2 = (float10)0.01;
  }
  fVar3 = (float10)0.0;
  fVar4 = (float10)1.0;
  do {
    fVar5 = (float10)fsin(fVar4 * fVar2 * (float10)3.1415927 * (float10)0.5);
    fVar3 = ((float10)1.0 / fVar4) * fVar5 + fVar3;
    fVar4 = fVar4 + (float10)2.0;
  } while (fVar4 < (float10)11.0);
  return ((float10)1.0 - fVar2) * fVar3 * (float10)1.2732395 + fVar2;
}


//// FUNCTION FUN_00973ac0 @ 00973ac0 ////

uint __fastcall FUN_00973ac0(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x4e);
  if ((*(byte *)((int)param_1 + 0x1e8) & 4) == 0) {
    uVar1 = FUN_009734c0(param_1,(byte *)"sld_gore");
    if ((char)uVar1 != '\0') {
      uVar2 = uVar2 - 1;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00973af0 @ 00973af0 ////

void __fastcall FUN_00973af0(int param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  pvVar1 = operator_new((uint)*(byte *)(param_1 + 0x4e) << 2);
  *(void **)(param_1 + 0x1f0) = pvVar1;
  iVar5 = 0;
  iVar2 = 0;
  if (*(char *)(param_1 + 0x4e) != '\0') {
    do {
      *(int *)(*(int *)(param_1 + 0x1f0) + iVar2 * 4) = iVar2 + iVar5;
      if ((*(byte *)(param_1 + 0x1e8) & 4) == 0) {
        if (((*(int *)(param_1 + 0x58) == 0) || (iVar2 < 0)) ||
           ((int)(*(uint *)(param_1 + 0x4c) & 0xff) <= iVar2)) {
          pcVar3 = (char *)((iVar2 != -10) - 1 & 0xe66f00);
        }
        else {
          pcVar3 = *(char **)(*(int *)(param_1 + 0x58) + iVar2 * 4);
        }
        iVar4 = 9;
        bVar7 = true;
        pcVar6 = "sld_gore";
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pcVar3 == *pcVar6;
          pcVar3 = pcVar3 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        if (bVar7) {
          iVar5 = iVar5 + 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x4e));
  }
  return;
}


//// FUNCTION FUN_00973b90 @ 00973b90 ////

void __thiscall FUN_00973b90(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  puVar2 = PTR_FUN_00e66ef8;
  iVar1 = *(int *)((int)this + 0xc);
  if ((((iVar1 != 0) && (param_1 != (void *)0x0)) && (PTR_FUN_00e66ef8 != (undefined *)0x0)) &&
     (((-1 < param_2 && (param_2 < iVar1)) &&
      (uVar3 = FUN_009722a0(param_1,*(int *)(*(int *)((int)this + 0x10) + param_2 * 4)), uVar3 != 0)
      ))) {
    (*(code *)puVar2)(DAT_01050b5c,param_1,uVar3,
                      (float)(param_2 + 1) * (1.0 / (float)iVar1) - (1.0 / (float)iVar1) * 0.5,
                      *(undefined4 *)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_00973c10 @ 00973c10 ////

bool __thiscall FUN_00973c10(void *this,int param_1)

{
  char *_Str1;
  int iVar1;
  
  if (((*(int *)((int)this + 0x58) == 0) || (param_1 < 0)) ||
     ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= param_1)) {
    if (param_1 == -10) {
      _Str1 = s_look_at_00e66f00;
      goto LAB_00973c42;
    }
  }
  else {
    _Str1 = *(char **)(*(int *)((int)this + 0x58) + param_1 * 4);
    if (_Str1 != (char *)0x0) {
LAB_00973c42:
      iVar1 = _strncmp(_Str1,"ai_",3);
      return iVar1 != 0;
    }
  }
  return false;
}


//// FUNCTION FUN_00973c60 @ 00973c60 ////

void __thiscall FUN_00973c60(void *this,undefined4 *param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  float10 fVar4;
  
  uVar2 = 0;
  if (*(byte *)((int)this + 0x4d) != 0) {
    piVar3 = *(int **)((int)this + 0x5c);
    do {
      iVar1 = *piVar3;
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0x4b) & 0x20) != 0)) && (*(int *)(iVar1 + 0x40) != 0)
         ) {
        iVar1 = *(int *)((*(int **)((int)this + 0x5c))[uVar2] + 0x40);
        *param_1 = *(undefined4 *)(iVar1 + 0x3c);
        param_1[1] = *(undefined4 *)(iVar1 + 0x40);
        param_1[2] = *(undefined4 *)(iVar1 + 0x44);
        *param_2 = *(float *)(*(int *)(*(int *)(*(int *)((int)this + 0x5c) + uVar2 * 4) + 0x40) +
                             0x80);
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(byte *)((int)this + 0x4d));
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  fVar4 = FUN_004012c0(0.0);
  *param_2 = (float)fVar4;
  return;
}


//// FUNCTION FUN_00973d00 @ 00973d00 ////

float10 __fastcall FUN_00973d00(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    piVar2 = *(int **)(param_1 + 0x5c);
    do {
      iVar1 = *piVar2;
      if (((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0xb)) && (*(int *)(iVar1 + 0x40) != 0)) {
        return (float10)*(float *)(*(int *)((*(int **)(param_1 + 0x5c))[uVar3] + 0x40) + 0x80);
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x4d));
  }
  return (float10)0.0;
}


//// FUNCTION UI_UpdateAndQueueElement @ 00973d50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UI_UpdateAndQueueElement(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((int)this + 0x14);
  if ((iVar1 != 0) && (DAT_010b9550 != '\0')) {
    fVar3 = (float)_DAT_0105c40c;
    fVar2 = (float)_DAT_0105c408;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(float *)(iVar1 + 0x10) = fVar2;
    *(float *)(iVar1 + 0x14) = fVar3;
    iVar1 = *(int *)((int)this + 0x14);
    fVar2 = DAT_0105c404 + *(float *)(iVar1 + 0x14);
    *(float *)(iVar1 + 0x1c) = DAT_0105c400 + *(float *)(iVar1 + 0x10);
    *(float *)(iVar1 + 0x20) = fVar2;
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar1 + 0x18);
    iVar1 = *(int *)((int)this + 0x14);
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    iVar1 = *(int *)((int)this + 0x14);
    *(undefined4 *)(iVar1 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
    if ((DAT_00e67b9d != '\0') && (fVar2 = DAT_0105c400 * 0.5625, fVar2 != DAT_0105c404)) {
      if (DAT_0105c404 <= fVar2) {
        fVar2 = DAT_0105c404 * 1.7777778;
        *(float *)(*(int *)((int)this + 0x14) + 0x10) =
             ((DAT_0105c400 - fVar2) * 0.5 + (float)_DAT_0105c408) - 1.0;
        *(float *)(*(int *)((int)this + 0x14) + 0x1c) =
             (((float)_DAT_0105c408 + DAT_0105c400) - (DAT_0105c400 - fVar2) * 0.5) + 1.0;
      }
      else {
        *(float *)(*(int *)((int)this + 0x14) + 0x14) =
             ((DAT_0105c404 - fVar2) * 0.5 + (float)_DAT_0105c40c) - 1.0;
        *(float *)(*(int *)((int)this + 0x14) + 0x20) =
             (((float)_DAT_0105c40c + DAT_0105c404) - (DAT_0105c404 - fVar2) * 0.5) + 1.0;
      }
    }
    if (1 < *(int *)((int)this + 4)) {
      iVar1 = *(int *)(*(int *)((int)this + 0xc) +
                      ((param_1 - *(int *)((int)this + 8)) % *(int *)((int)this + 4)) * 4);
      if (*(int *)((int)*(void **)((int)this + 0x10) + 0x18) != iVar1) {
        Engine_SetResourceReference(*(void **)((int)this + 0x10),iVar1);
      }
    }
    QueueRenderPrimitive(*(undefined4 **)((int)this + 0x14));
  }
  return;
}


//// FUNCTION FUN_00973f20 @ 00973f20 ////

void __fastcall FUN_00973f20(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_0099b400(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_00973fa0 @ 00973fa0 ////

void __fastcall FUN_00973fa0(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 0xc) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_0099b400(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc));
}


//// FUNCTION FUN_00973fb0 @ 00973fb0 ////

undefined4 __thiscall FUN_00973fb0(void *this,float *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(void **)((int)this + 0x148) != (void *)0x0) {
    iVar2 = FUN_0097e350(*(void **)((int)this + 0x148),0);
    if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 0x70), piVar1 != (int *)0x0)) {
      local_c = *param_1;
      local_8 = param_1[1];
      local_4 = param_1[2];
      FUN_0040b490((void *)(*(int *)((int)this + 0x148) + 0x48),&local_c);
      iVar2 = 0;
      if (0 < *piVar1) {
        iVar4 = 0;
        do {
          uVar3 = FUN_009e8300(*(void **)(iVar4 + 100 + piVar1[1]),local_c,local_8);
          if ((char)uVar3 != '\0') {
            return *(undefined4 *)(iVar2 * 0x90 + 0x68 + piVar1[1]);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x90;
        } while (iVar2 < *piVar1);
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00974070 @ 00974070 ////

int FUN_00974070(void)

{
  if (DAT_01050b88 == 0) {
    return 0;
  }
  return DAT_01050b8c - DAT_01050b88 >> 2;
}


//// FUNCTION FUN_00974390 @ 00974390 ////

void __cdecl FUN_00974390(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009743c0 @ 009743c0 ////

void __cdecl FUN_009743c0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009743f0 @ 009743f0 ////

void __cdecl FUN_009743f0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00974430 @ 00974430 ////

void __cdecl FUN_00974430(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00974550 @ 00974550 ////

void __thiscall FUN_00974550(void *this,undefined4 *param_1,int param_2)

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
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)((int)this + 8);
  fVar5 = *(float *)(param_2 + 0xc);
  fVar6 = *(float *)((int)this + 0xc);
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)((int)this + 0x10);
  fVar9 = *(float *)(param_2 + 0x14);
  fVar10 = *(float *)((int)this + 0x14);
  fVar11 = *(float *)(param_2 + 0x18);
  fVar12 = *(float *)((int)this + 0x18);
  fVar13 = *(float *)(param_2 + 0x1c);
  fVar14 = *(float *)((int)this + 0x1c);
  fVar15 = *(float *)(param_2 + 0x20);
  fVar16 = *(float *)((int)this + 0x20);
  fVar17 = *(float *)(param_2 + 0x24);
  fVar18 = *(float *)((int)this + 0x24);
  *param_1 = 0;
  param_1[1] = fVar1 + fVar2;
  param_1[2] = fVar3 + fVar4;
  param_1[3] = fVar5 + fVar6;
  param_1[4] = fVar7 + fVar8;
  param_1[5] = fVar9 + fVar10;
  param_1[6] = fVar11 + fVar12;
  param_1[7] = fVar13 + fVar14;
  param_1[8] = fVar15 + fVar16;
  param_1[9] = fVar17 + fVar18;
  return;
}


//// FUNCTION FUN_00974620 @ 00974620 ////

void __thiscall FUN_00974620(void *this,undefined4 *param_1,int param_2)

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
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)((int)this + 8);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)((int)this + 0xc);
  fVar6 = *(float *)(param_2 + 0xc);
  fVar7 = *(float *)((int)this + 0x10);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)((int)this + 0x14);
  fVar10 = *(float *)(param_2 + 0x14);
  fVar11 = *(float *)((int)this + 0x18);
  fVar12 = *(float *)(param_2 + 0x18);
  fVar13 = *(float *)((int)this + 0x1c);
  fVar14 = *(float *)(param_2 + 0x1c);
  fVar15 = *(float *)((int)this + 0x20);
  fVar16 = *(float *)(param_2 + 0x20);
  fVar17 = *(float *)((int)this + 0x24);
  fVar18 = *(float *)(param_2 + 0x24);
  *param_1 = 0;
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar3 - fVar4;
  param_1[3] = fVar5 - fVar6;
  param_1[4] = fVar7 - fVar8;
  param_1[5] = fVar9 - fVar10;
  param_1[6] = fVar11 - fVar12;
  param_1[7] = fVar13 - fVar14;
  param_1[8] = fVar15 - fVar16;
  param_1[9] = fVar17 - fVar18;
  return;
}


//// FUNCTION FUN_009746f0 @ 009746f0 ////

void __thiscall FUN_009746f0(void *this,undefined4 *param_1,float param_2)

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
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  fVar3 = *(float *)((int)this + 0xc);
  fVar4 = *(float *)((int)this + 0x10);
  fVar5 = *(float *)((int)this + 0x14);
  fVar6 = *(float *)((int)this + 0x18);
  fVar7 = *(float *)((int)this + 0x1c);
  fVar8 = *(float *)((int)this + 0x20);
  fVar9 = *(float *)((int)this + 0x24);
  *param_1 = 0;
  param_1[1] = param_2 * fVar1;
  param_1[2] = param_2 * fVar2;
  param_1[3] = param_2 * fVar3;
  param_1[4] = param_2 * fVar4;
  param_1[5] = param_2 * fVar5;
  param_1[6] = param_2 * fVar6;
  param_1[7] = param_2 * fVar7;
  param_1[8] = param_2 * fVar8;
  param_1[9] = param_2 * fVar9;
  return;
}


//// FUNCTION FUN_009747c0 @ 009747c0 ////

void __cdecl FUN_009747c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *_Memory;
  
  do {
    _Memory = param_1;
    if (_Memory == (undefined4 *)0x0) {
      return;
    }
    iVar1 = _Memory[5];
    _Memory[5] = iVar1 + -1;
    param_1 = (undefined4 *)*_Memory;
  } while (0 < iVar1 + -1);
  _Memory[5] = 0;
  FUN_00a3fc40(_Memory + 3,(undefined4 *)_Memory[1],(int *)_Memory[2]);
  FUN_00a3def0(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00974820 @ 00974820 ////

void __cdecl FUN_00974820(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  char local_34;
  undefined1 uStack_33;
  char cStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined2 local_2f;
  undefined1 local_2d;
  char *local_2c;
  char *local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5473;
  local_c = ExceptionList;
  uStack_33 = 0;
  cStack_32 = '\0';
  uStack_30 = 0;
  local_2f = 0;
  local_2d = 0;
  local_34 = '\0';
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(param_1 + 1)) < 4) {
    bVar2 = false;
  }
  else if ((*param_1 < '0') || ('9' < *param_1)) {
    bVar2 = false;
  }
  else if ((param_1[1] < '0') || ('9' < param_1[1])) {
    bVar2 = false;
  }
  else if ((param_1[2] < '0') || ('9' < param_1[2])) {
    bVar2 = false;
  }
  else {
    cStack_32 = param_1[2];
    local_34 = (char)*(undefined2 *)param_1;
    uStack_33 = (undefined1)((ushort)*(undefined2 *)param_1 >> 8);
    bVar2 = true;
  }
  uStack_31 = 0;
  pcVar3 = s_Data_Scene_Interactions_00e66af8;
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  if (pcVar6 == s_Data_Scene_Interactions_00e66af8) {
    if (!bVar2) {
      iVar7 = (int)&DAT_0105bed8 - (int)param_1;
      ExceptionList = &local_c;
      do {
        cVar1 = *param_1;
        param_1[iVar7] = cVar1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      goto LAB_00974920;
    }
    pcVar3 = &local_34;
  }
  else {
    if (bVar2) {
      ExceptionList = &local_c;
      _sprintf(&DAT_0105bed8,"%s\\%s\\%s",s_Data_Scene_Interactions_00e66af8,&local_34);
      goto LAB_00974920;
    }
    pcVar3 = s_Data_Scene_Interactions_00e66af8;
  }
  ExceptionList = &local_c;
  _sprintf(&DAT_0105bed8,"%s\\%s",pcVar3,param_1);
LAB_00974920:
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = (char *)0x0;
  local_24 = 0x14;
  pcVar3 = &DAT_0105bed8;
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  pcVar3 = pcVar6 + -0x105bed8;
  if ((char *)0x13 < pcVar3) {
    local_24 = (uint)(pcVar6 + -0x105beb8) & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,&DAT_0105bed8,(size_t)pcVar3);
  local_2c[(int)pcVar3] = '\0';
  local_4 = 0;
  local_28 = pcVar3;
  uVar4 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar4 != 0) {
    piVar5 = operator_new(0x58);
    local_4 = 1;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_009b38a0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d707fc;
    }
    local_4 = 0xffffffff;
    pcVar3 = &DAT_0105bed8;
    do {
      pcVar6 = pcVar3;
      pcVar3 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    FUN_004015d0(piVar5 + 1,&DAT_0105bed8,(uint)(pcVar6 + -0x105bed8));
    piVar5[0xb] = uVar4;
    AsyncLoadJob_ExecuteSync(piVar5);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00974a40 @ 00974a40 ////

void __fastcall FUN_00974a40(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[8] = 0;
  param_1[0x15] = param_1[0x15] & 0xfffffffe;
  if (DAT_0105be88 == '\0') {
    param_1[3] = 0;
  }
  else {
    pvVar1 = FUN_0099bb50("bd_canvas.dds",0,0,0,'\0');
    param_1[3] = pvVar1;
  }
  param_1[0x14] = param_1[0x14] & 0xfc1bf7ff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x62] = 0xffffffff;
  param_1[99] = 0xffffffff;
  param_1[0x74] = 0xffffffff;
  param_1[0x7d] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = param_1[0x14] & 0x1ffffeff;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 0;
  param_1[0x7c] = 0;
  *param_1 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x4a) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[100] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = param_1[0x15] & 0xfffffb21;
  FUN_004015d0(param_1 + 0x7e,"none",4);
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x15] = param_1[0x15] & 0xfffffddf;
  return;
}


//// FUNCTION FUN_00974b40 @ 00974b40 ////

void __thiscall FUN_00974b40(void *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x148) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x148) + 0xf8);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar1 + 4));
    }
    *(undefined4 *)(*(int *)((int)this + 0x148) + 0xf8) = 0;
    if (*(char *)((int)this + 0x4d) != '\0') {
      uVar2 = 0;
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0x5c) + uVar2 * 4);
        if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x40), iVar1 != 0)) {
          if (param_1 == '\0') {
            FUN_00983060(iVar1,*(int *)((int)this + 0x148),(int)this);
          }
          else {
            FUN_00981a50(iVar1,*(int *)((int)this + 0x148),(int)this);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)((int)this + 0x4d));
    }
  }
  return;
}


//// FUNCTION FUN_00974bf0 @ 00974bf0 ////

void __thiscall FUN_00974bf0(void *this,void *param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < 1)) {
    FUN_00973690(this,(uint)*(byte *)((int)this + 0x4d) + param_2,param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00974c20 @ 00974c20 ////

void __thiscall FUN_00974c20(void *this,float param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (((iVar4 != 0) && (param_2 != (void *)0x0)) && (PTR_FUN_00e66ef8 != (undefined *)0x0)) {
    uVar5 = FUN_00acd42c();
    iVar3 = (int)uVar5;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (iVar4 <= iVar3) {
      iVar3 = iVar4 + -1;
    }
    uVar5 = FUN_00acd42c();
    iVar2 = (int)uVar5;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (iVar4 <= iVar2) {
      iVar2 = iVar4 + -1;
    }
    if (iVar3 != iVar2) {
      iVar4 = 1;
      if (iVar2 < iVar3) {
        iVar4 = -1;
        iVar2 = iVar3 - iVar2;
      }
      else {
        iVar2 = iVar2 - iVar3;
      }
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar3 = iVar3 + iVar4;
        FUN_00973b90(this,param_2,iVar3);
      }
      bVar1 = FUN_00973c10(param_2,((int)this - *(int *)((int)param_2 + 0xc4)) / 0x18);
      if (bVar1) {
        *(uint *)((int)param_2 + 0x50) = *(uint *)((int)param_2 + 0x50) | 0x2000000;
      }
    }
  }
  *(float *)this = param_1;
  return;
}


//// FUNCTION FUN_00974d40 @ 00974d40 ////

void __fastcall FUN_00974d40(void *param_1)

{
  void *this;
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  LONG LVar5;
  
  if (*(int *)((int)param_1 + 0x148) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x148) + 0xd0) = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x148) + 0x98) = 0;
    iVar4 = *(int *)((int)param_1 + 0x148);
    *(undefined4 *)(iVar4 + 0x90) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x94) = 0xffffffff;
    FUN_00983b10(*(int *)((int)param_1 + 0x148),(int)param_1);
    FUN_00974b40(param_1,'\0');
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x148) + 0xf8);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar4 + 4));
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x148) + 0xf8) = 0;
    FUN_009806e0(*(void **)((int)param_1 + 0x148),0);
    this = *(void **)(*(int *)((int)param_1 + 0x148) + 0x78);
    if (this != (void *)0x0) {
      FUN_00a019d0(this,(void *)0x0,0xffffffff);
    }
    iVar4 = FUN_0097e350(*(void **)((int)param_1 + 0x148),0);
    if (iVar4 != 0) {
      do {
        piVar1 = *(int **)((int)*(void **)((int)param_1 + 0x148) + 0x8c);
        while( true ) {
          if (piVar1 == (int *)0x0) goto LAB_00974e2e;
          if ((*(uint *)(*piVar1 + 8) & 0x80000) != 0) break;
          piVar1 = (int *)piVar1[1];
        }
        FUN_00981b80(*(void **)((int)param_1 + 0x148),*(int *)*piVar1);
      } while( true );
    }
LAB_00974e2e:
    puVar2 = *(undefined4 **)((int)param_1 + 0x148);
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      *(undefined4 *)((int)param_1 + 0x148) = 0;
    }
    if (*(undefined4 **)((int)param_1 + 0x14c) != (undefined4 *)0x0) {
      FUN_00a44a10(*(undefined4 **)((int)param_1 + 0x14c));
      *(undefined4 *)((int)param_1 + 0x14c) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00974ea0 @ 00974ea0 ////

undefined4 __thiscall FUN_00974ea0(void *this,int param_1)

{
  if (((*(byte *)((int)this + 0x4e) != 0) && (-1 < param_1)) &&
     (param_1 < (int)(uint)*(byte *)((int)this + 0x4e))) {
    if (*(int *)((int)this + 0x1f0) == 0) {
      FUN_00973af0((int)this);
    }
    return *(undefined4 *)(*(int *)((int)this + 0x1f0) + param_1 * 4);
  }
  return 0;
}


//// FUNCTION FUN_00974ee0 @ 00974ee0 ////

void __thiscall FUN_00974ee0(void *this,byte *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  int iStack_454;
  undefined4 *puStack_450;
  char acStack_44c [64];
  char acStack_40c [1024];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf548e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00973f20((int)this);
  if (param_1 != (byte *)0x0) {
    iVar4 = 5;
    bVar7 = true;
    pbVar5 = param_1;
    pbVar6 = &DAT_00d17518;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar4 = FUN_009ad870(&DAT_010b9588,param_1);
      *(int *)((int)this + 4) = iVar4;
      if (iVar4 < 1) {
        *(undefined4 *)((int)this + 4) = 1;
      }
      pvVar1 = operator_new(*(int *)((int)this + 4) << 2);
      *(void **)((int)this + 0xc) = pvVar1;
      if (*(int *)((int)this + 4) < 2) {
        iVar4 = _strncmp((char *)&PTR_LAB_005f7863_3_00d708e0,(char *)param_1,3);
        if (iVar4 == 0) {
          pvVar1 = FUN_0099bb50((char *)param_1,0,0,0,'\0');
        }
        else {
          _sprintf(acStack_40c,"Overlays\\%s",param_1);
          pvVar1 = FUN_0099bb50(acStack_40c,0,0,0,'\0');
        }
        **(undefined4 **)((int)this + 0xc) = pvVar1;
      }
      else {
        iStack_454 = 0;
        if (0 < *(int *)((int)this + 4)) {
          do {
            FUN_009ad980(&DAT_010b9588,acStack_44c,(char *)param_1,&iStack_454);
            _sprintf(acStack_40c,"Overlays\\%s",acStack_44c);
            pvVar1 = FUN_0099bb50(acStack_40c,0,0,0,'\0');
            *(void **)(*(int *)((int)this + 0xc) + iStack_454 * 4) = pvVar1;
            iStack_454 = iStack_454 + 1;
          } while (iStack_454 < *(int *)((int)this + 4));
        }
      }
      puStack_450 = operator_new(0x24);
      uStack_4 = 0;
      if (puStack_450 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_009910f0(puStack_450);
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)((int)this + 0x10) = uVar2;
      puVar3 = operator_new(0x3c);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_0041f350(puVar3);
      }
      *(undefined4 **)((int)this + 0x14) = puVar3;
      puVar3[1] = *(undefined4 *)((int)this + 0x10);
      if (*(int *)((int)*(void **)((int)this + 0x10) + 0x18) != **(int **)((int)this + 0xc)) {
        Engine_SetResourceReference(*(void **)((int)this + 0x10),**(int **)((int)this + 0xc));
      }
      *(undefined1 *)(*(int *)((int)this + 0x10) + 0xc) = 6;
      *(undefined4 *)((int)this + 8) = param_2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009750b0 @ 009750b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009750b0(void *param_1)

{
  void *this;
  int iVar1;
  char *this_00;
  void *local_54 [2];
  uint local_4c;
  byte local_34 [36];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf54a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_1 == (void *)0x0) ||
     (ExceptionList = &local_c, iVar1 = FUN_0097e350(param_1,0), iVar1 == 0)) {
    FUN_009b0ed0(DAT_00e66f08);
    DAT_00e66f08 = (DAT_00e66f08 != -3) - 4;
    ExceptionList = local_c;
    return;
  }
  if ((DAT_01050bc4 & 1) == 0) {
    DAT_01050bc4 = DAT_01050bc4 | 1;
    DAT_01050ba4 = &DAT_01050bb0;
    DAT_01050bb0 = 0;
    _DAT_01050ba8 = 0;
    DAT_01050bac = 0x14;
    _atexit(FUN_00d14260);
  }
  this_00 = (char *)FUN_0097e350(this,0);
  FUN_009b24a0(this_00);
  FUN_009ddc70(this_00,(int *)local_54,'\0',(int *)&param_1);
  local_4 = 0;
  FUN_0041c9c0(local_34,local_54[0]);
  local_10 = DAT_00e66f08;
  FUN_009b1530(local_34,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
  if (local_4c < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_54[0]);
}


//// FUNCTION FUN_00975360 @ 00975360 ////

undefined4 __thiscall FUN_00975360(void *this,undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined4 in_EAX;
  uint uVar4;
  undefined4 *puVar5;
  void *this_00;
  int iVar6;
  undefined4 *puVar7;
  float local_80;
  undefined4 local_78 [10];
  undefined4 local_50 [10];
  undefined4 local_28 [10];
  
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)this + 4));
  if (*(char *)((int)this + 4) != '\0') {
LAB_0097549a:
    return uVar4 & 0xffffff00;
  }
  uVar1 = *(uint *)((int)this + 0x54);
  puVar5 = (undefined4 *)(uVar1 >> 7 & 1);
  if ((puVar5 == (undefined4 *)0x0) && (uVar4 = 0, (uVar1 & 0x40) == 0)) goto LAB_0097549a;
  if (puVar5 == (undefined4 *)0x0) {
LAB_009753b7:
    if ((uVar1 & 0x40) != 0) {
      puVar7 = (undefined4 *)((int)this + 0xf0);
      goto LAB_00975398;
    }
  }
  else {
    if ((uVar1 & 0x40) == 0) {
      puVar7 = (undefined4 *)((int)this + 0x118);
      goto LAB_00975398;
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_009753b7;
  }
  if (*(int *)((int)this + 0x144) == *(int *)((int)this + 0x140)) {
    local_80 = 0.5;
  }
  else {
    fVar2 = (float)*(int *)((int)this + 0x140) * 0.1;
    fVar3 = (float)*(int *)((int)this + 0x8c);
    if (*(int *)((int)this + 0x8c) < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    local_80 = ((fVar3 * 100.0 + (float)DAT_01050b60) * 0.001 - fVar2) /
               ((float)*(int *)((int)this + 0x144) * 0.1 - fVar2);
    if (local_80 <= 1.0) {
      if (local_80 < 0.0) {
        local_80 = 0.0;
      }
    }
    else {
      local_80 = 1.0;
    }
  }
  puVar5 = local_78;
  this_00 = (void *)FUN_00974620((void *)((int)this + 0x118),local_50,(int)this + 0xf0);
  iVar6 = FUN_009746f0(this_00,puVar5,local_80);
  puVar5 = (undefined4 *)FUN_00974550((void *)((int)this + 0xf0),local_28,iVar6);
  puVar7 = puVar5;
LAB_00975398:
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_1 = *puVar7;
    puVar7 = puVar7 + 1;
    param_1 = param_1 + 1;
  }
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}


//// FUNCTION FUN_00975520 @ 00975520 ////

void __fastcall FUN_00975520(int param_1)

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


//// FUNCTION FUN_00975570 @ 00975570 ////

void __fastcall FUN_00975570(int param_1)

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


//// FUNCTION FUN_00975640 @ 00975640 ////

void * FUN_00975640(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00975670 @ 00975670 ////

void * FUN_00975670(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009756a0 @ 009756a0 ////

void * FUN_009756a0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009756d0 @ 009756d0 ////

void * FUN_009756d0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00975720 @ 00975720 ////

void __fastcall FUN_00975720(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[2] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[1] = param_1[1] & 0xfffffffc;
  return;
}


//// FUNCTION FUN_00975740 @ 00975740 ////

uint __thiscall FUN_00975740(void *this,int param_1)

{
  byte bVar1;
  undefined4 in_EAX;
  uint uVar2;
  
  bVar1 = *(byte *)((int)this + 0x4e);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if (((bVar1 != 0) && (-1 < param_1)) && (uVar2 = (uint)bVar1, param_1 < (int)uVar2)) {
    if (*(int *)((int)this + 0x1f0) == 0) {
      FUN_00973af0((int)this);
    }
    uVar2 = *(uint *)(*(int *)((int)this + 0x1f0) + param_1 * 4);
    if (((0 < (int)uVar2) && ((int)uVar2 < (int)(uint)*(byte *)((int)this + 0x4e))) &&
       (*(int *)((int)this + 0xc4) != 0)) {
      return CONCAT31((int3)(uVar2 * 3 >> 8),
                      *(undefined1 *)(*(int *)((int)this + 0xc4) + 4 + uVar2 * 0x18)) & 0xffffff01;
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009757a0 @ 009757a0 ////

uint __thiscall FUN_009757a0(void *this,byte *param_1,float param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  uint in_EAX;
  uint3 uVar6;
  char *pcVar4;
  undefined4 uVar5;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  if (param_1 == (byte *)0x0) {
    return in_EAX & 0xffffff00;
  }
  for (uVar9 = 0;
      (iVar7 = *(int *)((int)this + 0x3c), iVar7 != 0 &&
      (in_EAX = *(int *)((int)this + 0x40) - iVar7 >> 2, uVar9 < in_EAX)); uVar9 = uVar9 + 1) {
    in_EAX = FUN_009757a0(*(void **)(iVar7 + uVar9 * 4),param_1,param_2,param_3);
  }
  bVar1 = *(byte *)((int)this + 0x4e);
  uVar6 = (uint3)(in_EAX >> 8);
  uVar9 = CONCAT31(uVar6,bVar1);
  if ((bVar1 == 0) || (*(int *)((int)this + 0xc4) == 0)) {
    return (uint)uVar6 << 8;
  }
  uVar8 = 0;
  if (bVar1 != 0) {
    do {
      uVar9 = *(uint *)((int)this + 0x58);
      pbVar10 = param_1;
      if (((uVar9 == 0) || ((int)uVar8 < 0)) ||
         ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)uVar8)) {
        if (uVar8 == 0xfffffff6) {
          pcVar4 = s_look_at_00e66f00;
          goto LAB_00975836;
        }
      }
      else {
        pcVar4 = *(char **)(uVar9 + uVar8 * 4);
        uVar9 = 0;
        if ((byte *)pcVar4 != (byte *)0x0) {
LAB_00975836:
          do {
            bVar2 = *pcVar4;
            bVar12 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_00975866:
              uVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0097586b;
            }
            if (bVar2 == 0) break;
            bVar2 = pcVar4[1];
            bVar12 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_00975866;
            pcVar4 = pcVar4 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          uVar9 = 0;
LAB_0097586b:
          if (uVar9 == 0) {
            fVar3 = *(float *)(*(int *)((int)this + 0xc4) + uVar8 * 0x18);
            FUN_00974c20((void *)(*(int *)((int)this + 0xc4) + uVar8 * 0x18),param_2,this);
            iVar7 = 0xe;
            uVar5 = 0;
            bVar12 = true;
            pbVar10 = param_1;
            pbVar11 = (byte *)"sld_miniature";
            goto code_r0x009758ba;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < bVar1);
  }
  return uVar9 & 0xffffff00;
  while( true ) {
    iVar7 = iVar7 + -1;
    bVar12 = *pbVar10 == *pbVar11;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    if (!bVar12) break;
code_r0x009758ba:
    if (iVar7 == 0) break;
  }
  if (bVar12) {
    uVar5 = FUN_00a00f30(this,param_2,fVar3,uVar8);
  }
  iVar7 = 0x10;
  bVar12 = true;
  pbVar10 = (byte *)"sld_blue_ground";
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar12 = *param_1 == *pbVar10;
    param_1 = param_1 + 1;
    pbVar10 = pbVar10 + 1;
  } while (bVar12);
  if (bVar12) {
    uVar5 = FUN_00972630(this,param_2,fVar3,uVar8);
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00975910 @ 00975910 ////

uint __thiscall FUN_00975910(void *this,byte *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint in_EAX;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  for (uVar5 = 0;
      (iVar2 = *(int *)((int)this + 0x3c), iVar2 != 0 &&
      (in_EAX = *(int *)((int)this + 0x40) - iVar2 >> 2, uVar5 < in_EAX)); uVar5 = uVar5 + 1) {
    in_EAX = FUN_00975910(*(void **)(iVar2 + uVar5 * 4),param_1,param_2);
  }
  bVar1 = *(byte *)((int)this + 0x4e);
  uVar5 = CONCAT31((int3)(in_EAX >> 8),bVar1);
  if ((bVar1 != 0) && (iVar2 = *(int *)((int)this + 0xc4), iVar2 != 0)) {
    uVar5 = (uint)bVar1;
    uVar7 = 0;
    if (bVar1 != 0) {
      do {
        pbVar6 = param_1;
        if (((*(int *)((int)this + 0x58) == 0) || ((int)uVar7 < 0)) ||
           ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)uVar7)) {
          pbVar3 = (byte *)((uVar7 != 0xfffffff6) - 1 & 0xe66f00);
        }
        else {
          pbVar3 = *(byte **)(*(int *)((int)this + 0x58) + uVar7 * 4);
        }
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_009759c5:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_009759ca;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_009759c5;
          pbVar3 = pbVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_009759ca:
        if (iVar4 == 0) {
          uVar5 = *(uint *)(iVar2 + 4 + uVar7 * 0x18);
          iVar2 = iVar2 + uVar7 * 0x18;
          *(uint *)(iVar2 + 4) = uVar5 ^ (param_2 ^ uVar5) & 1;
          return CONCAT31((int3)((uint)iVar2 >> 8),1);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar5);
    }
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00975a10 @ 00975a10 ////

void __thiscall FUN_00975a10(void *this,undefined4 *param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (*(char *)((int)this + 0x4d) != '\0') {
    do {
      this_00 = *(void **)(*(int *)(*(int *)((int)this + 0x5c) + iVar1 * 4) + 0x40);
      if (this_00 != (void *)0x0) {
        FUN_00980620(this_00,param_1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(byte *)((int)this + 0x4d));
  }
  for (uVar2 = 0;
      (iVar1 = *(int *)((int)this + 0x3c), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)((int)this + 0x40) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00975a10(*(void **)(iVar1 + uVar2 * 4),param_1);
  }
  return;
}


//// FUNCTION FUN_00975a70 @ 00975a70 ////

uint * __thiscall FUN_00975a70(void *this,uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_c;
  uint local_8 [2];
  
  uVar1 = (uint)*(byte *)((int)this + 0x4d);
  iVar6 = 0;
  uVar3 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    piVar4 = *(int **)((int)this + 0x5c);
    do {
      if (param_2 == *(int *)(*piVar4 + 8)) {
        if (iVar6 == param_3) {
          *param_1 = uVar3;
          param_1[1] = 0xffffffff;
          return param_1;
        }
        iVar6 = iVar6 + 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      local_c = iVar6;
    } while (uVar3 < uVar1);
  }
  iVar6 = 0;
  if (uVar1 != 0) {
    piVar4 = *(int **)((int)this + 0x5c);
    do {
      if (param_2 == *(int *)(*piVar4 + 8)) {
        iVar6 = iVar6 + 1;
      }
      piVar4 = piVar4 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  for (uVar1 = 0;
      (iVar5 = *(int *)((int)this + 0x3c), iVar5 != 0 &&
      (uVar1 < (uint)(*(int *)((int)this + 0x40) - iVar5 >> 2))); uVar1 = uVar1 + 1) {
    pvVar2 = *(void **)(iVar5 + uVar1 * 4);
    FUN_00975a70(pvVar2,local_8,param_2,param_3 - iVar6);
    if (local_8[0] != 0xffffffff) {
      param_1[1] = uVar1;
      *param_1 = local_8[0];
      return param_1;
    }
    uVar3 = (uint)*(byte *)((int)pvVar2 + 0x4d);
    iVar5 = 0;
    if (uVar3 != 0) {
      piVar4 = *(int **)((int)pvVar2 + 0x5c);
      do {
        if (param_2 == *(int *)(*piVar4 + 8)) {
          iVar5 = iVar5 + 1;
        }
        piVar4 = piVar4 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    iVar6 = iVar6 + iVar5;
  }
  if (param_2 == 2) {
    if ((*(uint *)((int)this + 0x1e8) & 2) != 0) {
      if (param_3 == local_c) {
        FUN_00975a70(this,param_1,10,0);
        return param_1;
      }
      local_c = local_c + 1;
    }
    if (((*(uint *)((int)this + 0x1e8) & 1) != 0) && (param_3 == local_c)) {
      FUN_00975a70(this,param_1,0xb,0);
      return param_1;
    }
  }
  else if (param_2 == 6) {
    if ((*(byte *)((int)this + 0x1e8) & 1) != 0) {
      if (param_3 == local_c) {
        FUN_00975a70(this,param_1,0xc,0);
        return param_1;
      }
      local_c = local_c + 1;
    }
    pvVar2 = *(void **)((int)this + 0x34);
    if (*(void **)((int)this + 0x34) == (void *)0x0) {
      pvVar2 = this;
    }
    if (((*(int *)((int)pvVar2 + 600) != 0) &&
        (uVar1 = FUN_009f53b0(*(int *)((int)pvVar2 + 600)), uVar1 != 0)) && (param_3 == local_c)) {
      FUN_00975a70(this,param_1,0xd,0);
      return param_1;
    }
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return param_1;
}


//// FUNCTION FUN_00975c50 @ 00975c50 ////

int __thiscall FUN_00975c50(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)((int)this + 0x4d);
  iVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int **)((int)this + 0x5c);
    do {
      if (param_1 == *(int *)(*piVar3 + 8)) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  for (uVar1 = 0;
      (iVar2 = *(int *)((int)this + 0x3c), iVar2 != 0 &&
      (uVar1 < (uint)(*(int *)((int)this + 0x40) - iVar2 >> 2))); uVar1 = uVar1 + 1) {
    iVar2 = FUN_00975c50(*(void **)(iVar2 + uVar1 * 4),param_1);
    iVar4 = iVar4 + iVar2;
  }
  if (*(int *)((int)this + 0x34) == 0) {
    return iVar4;
  }
  if ((*(uint *)((int)this + 0x50) & 0x100) != 0) {
    return iVar4;
  }
  if (param_1 == 2) {
    if ((*(uint *)((int)this + 0x1e8) & 2) != 0) {
      iVar4 = iVar4 + 1;
    }
    uVar1 = *(uint *)((int)this + 0x1e8) & 1;
  }
  else {
    if (param_1 != 6) {
      return iVar4;
    }
    if ((*(byte *)((int)this + 0x1e8) & 1) != 0) {
      iVar4 = iVar4 + 1;
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x34) + 600);
    if (iVar2 == 0) {
      return iVar4;
    }
    uVar1 = FUN_009f53b0(iVar2);
  }
  if (uVar1 != 0) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


//// FUNCTION FUN_00975cf0 @ 00975cf0 ////

uint __fastcall FUN_00975cf0(void *param_1)

{
  void *pvVar1;
  undefined4 in_EAX;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  char local_9;
  uint local_8;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)((int)param_1 + 0x4f));
  local_8 = 0;
  if (*(char *)((int)param_1 + 0x4f) != '\0') {
    do {
      uVar9 = 1 << ((byte)local_8 & 0x1f);
      if (((*(uint *)((int)param_1 + 0x50) & 0x80000) == 0) && (DAT_01050bc8 != '\0')) {
        FUN_009d9820();
      }
      uVar2 = FUN_00971e10(param_1,uVar9);
      uVar6 = uVar2 & 0xff;
      local_9 = '\0';
      if ((char)uVar2 != '\0') {
        for (uVar10 = 0;
            (*(int *)((int)param_1 + 0x3c) != 0 &&
            (uVar2 = *(int *)((int)param_1 + 0x40) - *(int *)((int)param_1 + 0x3c) >> 2,
            uVar10 < uVar2)); uVar10 = uVar10 + 1) {
          iVar5 = *(int *)(*(int *)((int)param_1 + 100) + local_8 * 8);
          if ((*(int *)((int)param_1 + 0x58) == 0) ||
             ((iVar5 < 0 || ((int)(*(uint *)((int)param_1 + 0x4c) & 0xff) <= iVar5)))) {
            pbVar4 = (byte *)((iVar5 != -10) - 1 & 0xe66f00);
          }
          else {
            pbVar4 = *(byte **)(*(int *)((int)param_1 + 0x58) + iVar5 * 4);
          }
          iVar5 = *(int *)((int)param_1 + 0x3c);
          iVar3 = FUN_009730c0(*(void **)(iVar5 + uVar10 * 4),pbVar4);
          *(int *)(*(int *)(iVar5 + uVar10 * 4) + 0x1b4) = iVar3;
          pvVar1 = *(void **)(*(int *)((int)param_1 + 0x3c) + uVar10 * 4);
          uVar2 = *(int *)((int)param_1 + 0x3c) + uVar10 * 4;
          if (*(int *)((int)pvVar1 + 0x1b4) != -1) {
            uVar2 = FUN_00971e10(pvVar1,*(uint *)((int)pvVar1 + 0x1b4));
            uVar6 = uVar2 & 0xff;
          }
          if ((char)uVar6 == '\0') goto LAB_00975f6a;
          local_9 = '\x01';
        }
        if (((char)uVar6 != '\0') &&
           (((*(uint *)((int)param_1 + 0x50) & 0x80000) == 0 ||
            (uVar2 = *(uint *)((int)param_1 + 100), *(char *)(uVar2 + 4 + local_8 * 8) == '\0')))) {
          iVar5 = *(int *)(*(int *)((int)param_1 + 100) + local_8 * 8);
          if ((*(int *)((int)param_1 + 0x58) == 0) ||
             ((iVar5 < 0 || ((int)(*(uint *)((int)param_1 + 0x4c) & 0xff) <= iVar5)))) {
            if (iVar5 == -10) {
              pcVar7 = s_look_at_00e66f00;
              goto LAB_00975e88;
            }
          }
          else {
            pcVar7 = *(char **)(*(int *)((int)param_1 + 0x58) + iVar5 * 4);
            if (pcVar7 != (char *)0x0) {
LAB_00975e88:
              iVar5 = 7;
              bVar12 = true;
              pcVar8 = pcVar7;
              pcVar11 = "action";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar12 = *pcVar8 == *pcVar11;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              } while (bVar12);
              if (((bVar12) && (*(code **)((int)param_1 + 0x1dc) != (code *)0x0)) &&
                 ((*(uint *)((int)param_1 + 0x50) & 0xc00000) == 0)) {
                (**(code **)((int)param_1 + 0x1dc))(*(undefined4 *)((int)param_1 + 0x1e0));
              }
              iVar5 = 4;
              bVar12 = true;
              pcVar8 = pcVar7;
              pcVar11 = "cut";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar12 = *pcVar8 == *pcVar11;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              } while (bVar12);
              if (bVar12) {
                *(uint *)((int)param_1 + 0x54) = *(uint *)((int)param_1 + 0x54) | 0x800;
              }
              if (pcVar7 != (char *)0x0) {
                iVar5 = 0xc;
                bVar12 = true;
                pcVar8 = "dummy_extra";
                do {
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  bVar12 = *pcVar7 == *pcVar8;
                  pcVar7 = pcVar7 + 1;
                  pcVar8 = pcVar8 + 1;
                } while (bVar12);
                if ((bVar12) &&
                   (((iVar5 = 0, DAT_0105c2e1 == '\0' ||
                     ((*(int *)((int)param_1 + 0x3c) != 0 &&
                      (iVar5 = *(int *)((int)param_1 + 0x40) - *(int *)((int)param_1 + 0x3c) >> 2,
                      iVar5 != 0)))) &&
                    (uVar2 = CONCAT31((int3)((uint)iVar5 >> 8),local_9), local_9 == '\0'))))
                goto LAB_00975f6a;
              }
            }
          }
          uVar2 = FUN_00971e70(param_1,uVar9);
          for (uVar9 = 0;
              (iVar5 = *(int *)((int)param_1 + 0x3c), iVar5 != 0 &&
              (uVar2 = *(int *)((int)param_1 + 0x40) - iVar5 >> 2, uVar9 < uVar2));
              uVar9 = uVar9 + 1) {
            pvVar1 = *(void **)(iVar5 + uVar9 * 4);
            uVar2 = iVar5 + uVar9 * 4;
            if (*(int *)((int)pvVar1 + 0x1b4) != -1) {
              uVar2 = FUN_00971e70(pvVar1,*(uint *)((int)pvVar1 + 0x1b4));
            }
          }
        }
      }
LAB_00975f6a:
      local_8 = local_8 + 1;
    } while (local_8 < *(byte *)((int)param_1 + 0x4f));
  }
  return uVar2;
}


//// FUNCTION FUN_00975f90 @ 00975f90 ////

void __thiscall FUN_00975f90(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  *(char *)((int)this + 0x1e4) = (char)param_1;
  for (uVar2 = 0;
      (iVar1 = *(int *)((int)this + 0x3c), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)((int)this + 0x40) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00975f90(*(void **)(iVar1 + uVar2 * 4),param_1);
  }
  return;
}


//// FUNCTION FUN_00975fd0 @ 00975fd0 ////

uint __fastcall FUN_00975fd0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 in_EAX;
  uint uVar4;
  uint uVar5;
  
  uVar4 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(param_1 + 0x4d));
  uVar5 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x5c) + uVar5 * 4);
      if ((((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x34))(), cVar3 == '\0')) &&
          (piVar1[2] != 0xe)) && ((piVar1[2] != 0xf && (uVar4 = piVar1[6], uVar4 != 0))))
      goto LAB_00976038;
      uVar4 = (uint)*(byte *)(param_1 + 0x4d);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar5 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if ((iVar2 == 0) || (uVar4 = *(int *)(param_1 + 0x40) - iVar2 >> 2, uVar4 <= uVar5)) {
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
    uVar4 = FUN_00975fd0(*(int *)(iVar2 + uVar5 * 4));
    if ((char)uVar4 == '\0') break;
    uVar5 = uVar5 + 1;
  }
LAB_00976038:
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00976050 @ 00976050 ////

undefined4 __thiscall FUN_00976050(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((param_1 & 0xff) << 0x10 ^ *(uint *)((int)this + 0x50)) & 0x10000;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) ^ uVar2;
  for (uVar3 = 0;
      (iVar1 = *(int *)((int)this + 0x3c), iVar1 != 0 &&
      (uVar2 = *(int *)((int)this + 0x40) - iVar1 >> 2, uVar3 < uVar2)); uVar3 = uVar3 + 1) {
    uVar2 = FUN_00976050(*(void **)(iVar1 + uVar3 * 4),param_1);
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_009760a0 @ 009760a0 ////

void __thiscall FUN_009760a0(void *this,int param_1)

{
  wchar_t *_Source;
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  *(int *)((int)this + 0x1d4) = param_1;
  do {
    if (param_1 == 0) {
      return;
    }
    do {
      bVar1 = false;
      puVar6 = (uint *)(param_1 + 0x48);
      iVar5 = 2;
      do {
        if ((puVar6[-9] == 0) && (uVar4 = puVar6[-1], uVar4 != 0)) {
          _Source = (wchar_t *)puVar6[-2];
          if (puVar6[-8] <= uVar4) {
            if (10 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar6[-10]);
            }
            uVar2 = uVar4 + 0x20 & 0xffffffe0;
            puVar6[-8] = uVar2;
            pvVar3 = _malloc(uVar2 * 2);
            puVar6[-10] = (uint)pvVar3;
          }
          _wcsncpy((wchar_t *)puVar6[-10],_Source,uVar4);
          puVar6[-9] = uVar4;
          *(undefined2 *)(puVar6[-10] + uVar4 * 2) = 0;
          uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
          if (*puVar6 <= uVar4) {
            if (10 < *puVar6) {
                    /* WARNING: Subroutine does not return */
              _free((void *)puVar6[-2]);
            }
            uVar2 = uVar4 + 0x20 & 0xffffffe0;
            *puVar6 = uVar2;
            pvVar3 = _malloc(uVar2 * 2);
            puVar6[-2] = (uint)pvVar3;
          }
          _wcsncpy((wchar_t *)puVar6[-2],(wchar_t *)&lpCaption_00d16918,uVar4);
          puVar6[-1] = uVar4;
          *(undefined2 *)(puVar6[-2] + uVar4 * 2) = 0;
          bVar1 = true;
        }
        puVar6 = puVar6 + -8;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    } while (bVar1);
    param_1 = *(int *)(param_1 + 0x90);
  } while( true );
}


//// FUNCTION FUN_009761c0 @ 009761c0 ////

void __fastcall FUN_009761c0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x5c) + uVar4 * 4);
      if (((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x34))(), cVar3 != '\0')) &&
         ((piVar1[0x12] & 0x2000000U) == 0)) {
        (**(code **)(*piVar1 + 0x28))(0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0x4d));
  }
  for (uVar4 = 0;
      (iVar2 = *(int *)(param_1 + 0x3c), iVar2 != 0 &&
      (uVar4 < (uint)(*(int *)(param_1 + 0x40) - iVar2 >> 2))); uVar4 = uVar4 + 1) {
    FUN_009761c0(*(int *)(iVar2 + uVar4 * 4));
  }
  return;
}


//// FUNCTION FUN_00976230 @ 00976230 ////

int __fastcall FUN_00976230(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x34) != 0) && ((*(uint *)(param_1 + 0x50) & 0x100) == 0)) {
    return 0;
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x4d);
  iVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int **)(param_1 + 0x5c);
    do {
      if ((*piVar3 != 0) && ((*(uint *)(*piVar3 + 0x48) & 0x4000000) != 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar3 = piVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  for (uVar1 = 0;
      (iVar2 = *(int *)(param_1 + 0x3c), iVar2 != 0 &&
      (uVar1 < (uint)(*(int *)(param_1 + 0x40) - iVar2 >> 2))); uVar1 = uVar1 + 1) {
    piVar3 = (int *)(iVar2 + uVar1 * 4);
    iVar2 = *piVar3;
    if ((*(int *)(iVar2 + 0x34) == 0) || ((*(uint *)(iVar2 + 0x50) & 0x100) != 0)) {
      iVar2 = FUN_00976230(*piVar3);
      iVar4 = iVar4 + iVar2;
    }
  }
  return iVar4;
}


//// FUNCTION FUN_009762b0 @ 009762b0 ////

uint __thiscall FUN_009762b0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = 0;
  if (*(byte *)((int)this + 0x4d) != 0) {
    piVar4 = *(int **)((int)this + 0x5c);
    do {
      if ((*piVar4 != 0) && ((*(byte *)(*piVar4 + 0x4b) & 4) != 0)) {
        if (iVar5 == param_1) {
          iVar5 = *(int *)((*(int **)((int)this + 0x5c))[uVar1] + 0x10);
          if (((*(int *)((int)this + 0x58) != 0) && (-1 < iVar5)) &&
             (iVar5 < (int)(*(uint *)((int)this + 0x4c) & 0xff))) {
            return *(uint *)(*(int *)((int)this + 0x58) + iVar5 * 4);
          }
          return (iVar5 != -10) - 1 & 0xe66f00;
        }
        iVar5 = iVar5 + 1;
      }
      uVar1 = uVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar1 < *(byte *)((int)this + 0x4d));
  }
  for (uVar1 = 0;
      (iVar3 = *(int *)((int)this + 0x3c), iVar3 != 0 &&
      (uVar1 < (uint)(*(int *)((int)this + 0x40) - iVar3 >> 2))); uVar1 = uVar1 + 1) {
    uVar2 = FUN_009762b0(*(void **)(iVar3 + uVar1 * 4),param_1 - iVar5);
    if (uVar2 != 0) {
      return uVar2;
    }
    iVar3 = FUN_00976230(*(int *)(*(int *)((int)this + 0x3c) + uVar1 * 4));
    iVar5 = iVar5 + iVar3;
  }
  return 0;
}


//// FUNCTION FUN_00976370 @ 00976370 ////

void __thiscall FUN_00976370(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  
  if ((*(byte *)((int)this + 0x54) & 0x20) != 0) {
    param_1 = *(int *)((int)this + 0x1c0);
  }
  *(int *)((int)this + 8) = param_1;
  uVar3 = 0;
  iVar2 = param_1 + 1000;
  while ((iVar1 = *(int *)((int)this + 0x3c), iVar1 != 0 &&
         (uVar3 < (uint)(*(int *)((int)this + 0x40) - iVar1 >> 2)))) {
    this_00 = *(void **)(iVar1 + uVar3 * 4);
    if ((*(int *)((int)this_00 + 0x34) == 0) || ((*(uint *)((int)this_00 + 0x50) & 0x100) != 0)) {
      FUN_00976370(*(void **)(iVar1 + uVar3 * 4),iVar2);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 1000;
    }
    else {
      FUN_00976370(this_00,0);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 1000;
    }
  }
  return;
}


//// FUNCTION FUN_009763f0 @ 009763f0 ////

undefined4 __fastcall FUN_009763f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x3c) == 0) ||
       ((uint)(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 2) <= uVar2)) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + uVar2 * 4);
    if ((*(int *)(iVar1 + 0x34) != 0) && ((*(uint *)(iVar1 + 0x50) & 0x100) == 0)) break;
    uVar2 = uVar2 + 1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x3c) + uVar2 * 4);
}


//// FUNCTION FUN_00976440 @ 00976440 ////

undefined4 __thiscall FUN_00976440(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (*(int *)((int)this + 0x3c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
    }
    if (param_1 < iVar1) {
      return *(undefined4 *)(*(int *)((int)this + 0x3c) + param_1 * 4);
    }
  }
  return 0;
}


//// FUNCTION FUN_00976480 @ 00976480 ////

uint __fastcall FUN_00976480(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  
  if (*(uint *)(param_1 + 0x34) != 0) {
    return *(uint *)(param_1 + 0x34) & 0xffffff00;
  }
  iVar4 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    puVar5 = *(uint **)(param_1 + 0x5c);
    do {
      uVar3 = *puVar5;
      if (((uVar3 != 0) && (*(int *)(uVar3 + 8) == 0)) && (*(int *)(uVar3 + 0x18) != 0))
      goto LAB_0097651d;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x4d));
  }
  uVar3 = FUN_009763f0(param_1);
  if (uVar3 != 0) {
    pbVar1 = (byte *)(uVar3 + 0x4d);
    iVar4 = 0;
    if (*pbVar1 != 0) {
      piVar6 = *(int **)(uVar3 + 0x5c);
      do {
        iVar2 = *piVar6;
        if (((iVar2 != 0) &&
            (((((uVar3 = *(uint *)(iVar2 + 8), uVar3 == 1 || (uVar3 == 2)) ||
               ((uVar3 == 3 || ((uVar3 == 5 || (uVar3 == 6)))))) || (uVar3 == 10)) ||
             (((uVar3 == 0xb || (uVar3 == 0xc)) || (uVar3 == 0xd)))))) &&
           (uVar3 = *(uint *)(iVar2 + 0x18), uVar3 != 0)) {
LAB_0097651d:
          return uVar3 & 0xffffff00;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < (int)(uint)*pbVar1);
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_0097648a @ 0097648a ////

undefined4 __fastcall FUN_0097648a(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  
  iVar4 = 0;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    puVar5 = *(uint **)(param_1 + 0x5c);
    do {
      uVar3 = *puVar5;
      if (((uVar3 != 0) && (*(int *)(uVar3 + 8) == 0)) && (*(int *)(uVar3 + 0x18) != 0))
      goto LAB_0097651d;
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x4d));
  }
  uVar3 = FUN_009763f0(param_1);
  if (uVar3 != 0) {
    pbVar1 = (byte *)(uVar3 + 0x4d);
    iVar4 = 0;
    if (*pbVar1 != 0) {
      piVar6 = *(int **)(uVar3 + 0x5c);
      do {
        iVar2 = *piVar6;
        if (((iVar2 != 0) &&
            (((((uVar3 = *(uint *)(iVar2 + 8), uVar3 == 1 || (uVar3 == 2)) ||
               ((uVar3 == 3 || ((uVar3 == 5 || (uVar3 == 6)))))) || (uVar3 == 10)) ||
             (((uVar3 == 0xb || (uVar3 == 0xc)) || (uVar3 == 0xd)))))) &&
           (uVar3 = *(uint *)(iVar2 + 0x18), uVar3 != 0)) {
LAB_0097651d:
          return uVar3 & 0xffffff00;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < (int)(uint)*pbVar1);
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION FUN_00976530 @ 00976530 ////

float10 __thiscall FUN_00976530(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(byte *)(param_1 + 0x4e) == 0) || (param_2 < 0)) ||
     ((int)(uint)*(byte *)(param_1 + 0x4e) <= param_2)) {
LAB_0097656b:
    iVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1f0) == 0) {
      FUN_00973af0(param_1);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x1f0) + param_2 * 4);
    if (iVar2 == -1) goto LAB_009765b2;
    if (iVar2 < 1) goto LAB_0097656b;
    if ((int)(uint)*(byte *)(param_1 + 0x4e) <= iVar2) {
      iVar2 = *(byte *)(param_1 + 0x4e) - 1;
    }
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    pfVar1 = (float *)(*(int *)(param_1 + 0xc4) + iVar2 * 0x18);
    if ((((uint)pfVar1[1] & 2) == 0) || (*(int *)(param_1 + 0x34) == 0)) {
      return (float10)*pfVar1;
    }
    uVar3 = FUN_00976480(*(int *)(param_1 + 0x34));
    if ((char)uVar3 != '\0') {
      return (float10)1.0;
    }
  }
LAB_009765b2:
  return (float10)0.0;
}


//// FUNCTION FUN_009765c0 @ 009765c0 ////

void __thiscall FUN_009765c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((char)param_1 == '\0') || ((*(uint *)((int)this + 0x50) & 0x10000000) == 0)) {
    *(uint *)((int)this + 0x50) =
         *(uint *)((int)this + 0x50) ^ (param_1 << 0x1c ^ *(uint *)((int)this + 0x50)) & 0x10000000;
    iVar2 = 0;
    while( true ) {
      if (*(int *)((int)this + 0x3c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
      }
      if (iVar1 <= iVar2) break;
      FUN_009765c0(*(void **)(*(int *)((int)this + 0x3c) + iVar2 * 4),param_1);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00976620 @ 00976620 ////

void __fastcall FUN_00976620(int param_1)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  char local_104 [260];
  
  for (uVar6 = 0;
      (iVar5 = *(int *)(param_1 + 0x3c), iVar5 != 0 &&
      (uVar6 < (uint)(*(int *)(param_1 + 0x40) - iVar5 >> 2))); uVar6 = uVar6 + 1) {
    FUN_00976620(*(int *)(iVar5 + uVar6 * 4));
  }
  iVar5 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + iVar5 * 4);
      iVar2 = *(int *)(iVar4 + 0x10);
      if (((*(int *)(param_1 + 0x58) == 0) || (iVar2 < 0)) ||
         ((int)(*(uint *)(param_1 + 0x4c) & 0xff) <= iVar2)) {
        if (iVar2 == -10) {
          pcVar3 = s_look_at_00e66f00;
          goto LAB_00976688;
        }
      }
      else {
        pcVar3 = *(char **)(*(int *)(param_1 + 0x58) + iVar2 * 4);
        if (pcVar3 != (char *)0x0) {
LAB_00976688:
          if (*(int *)(iVar4 + 8) == 4) {
            __splitpath(pcVar3,(char *)0x0,(char *)0x0,(char *)0x0,local_104);
            iVar4 = 5;
            bVar8 = true;
            pcVar3 = local_104;
            pcVar7 = ".msh";
            do {
              if (iVar4 == 0) break;
              iVar4 = iVar4 + -1;
              bVar8 = *pcVar3 == *pcVar7;
              pcVar3 = pcVar3 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar8);
            if (!bVar8) {
              puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x5c) + iVar5 * 4) + 0x48);
              *puVar1 = *puVar1 | 0x4000000;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x4d));
  }
  return;
}


//// FUNCTION FUN_009766f0 @ 009766f0 ////

void __thiscall FUN_009766f0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)((int)this + 0x54) =
       *(uint *)((int)this + 0x54) ^ ((param_1 & 0xff) << 9 ^ *(uint *)((int)this + 0x54)) & 0x200;
  FUN_009b0f10(this,param_1);
  for (uVar2 = 0;
      (iVar1 = *(int *)((int)this + 0x3c), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)((int)this + 0x40) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_009766f0(*(void **)(iVar1 + uVar2 * 4),param_1);
  }
  return;
}


//// FUNCTION FUN_00976790 @ 00976790 ////

void __thiscall FUN_00976790(void *this,char param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = param_1 == '\0';
  _param_1 = 1.0;
  if (bVar1) {
    _param_1 = 0.0;
  }
  FUN_009757a0(this,(byte *)"ai_dolly",_param_1,0);
  _param_1 = 1.0;
  if (param_2 == '\0') {
    _param_1 = 0.0;
  }
  FUN_009757a0(this,(byte *)"ai_crane",_param_1,0);
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x2000000;
  return;
}


//// FUNCTION FUN_00976850 @ 00976850 ////

void __thiscall FUN_00976850(void *this,float param_1,float param_2)

{
  if ((0.0 <= param_2) && (param_2 != 0.0)) {
    FUN_00415910((void *)((int)this + 0x218),param_1,0.0,param_2);
    return;
  }
  *(float *)((int)this + 0x21c) = param_1;
  *(float *)((int)this + 0x234) = param_1;
  *(float *)((int)this + 0x218) = param_1;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  return;
}


//// FUNCTION FUN_00976920 @ 00976920 ////

void __fastcall FUN_00976920(int param_1)

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


//// FUNCTION FUN_00976980 @ 00976980 ////

void __fastcall FUN_00976980(int param_1)

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


//// FUNCTION FUN_009769b0 @ 009769b0 ////

void __fastcall FUN_009769b0(int param_1)

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


//// FUNCTION FUN_00976a10 @ 00976a10 ////

void __fastcall FUN_00976a10(int param_1)

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


//// FUNCTION FUN_00976a50 @ 00976a50 ////

void __fastcall FUN_00976a50(int param_1)

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


//// FUNCTION FUN_00976a80 @ 00976a80 ////

undefined4 * FUN_00976a80(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00976ab0 @ 00976ab0 ////

undefined4 * FUN_00976ab0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00976ae0 @ 00976ae0 ////

undefined4 * FUN_00976ae0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00976b10 @ 00976b10 ////

void __fastcall FUN_00976b10(int param_1)

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


//// FUNCTION FUN_00976b40 @ 00976b40 ////

undefined4 * FUN_00976b40(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00976b90 @ 00976b90 ////

void __fastcall FUN_00976b90(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  LONG LVar5;
  int iVar6;
  float10 fVar7;
  
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xefff7dff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  fVar7 = FUN_004012c0(0.0);
  *(float *)(param_1 + 0xc0) = (float)fVar7;
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xfffefbff | 0x1000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(void **)(param_1 + 0x3c) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffe7ffff;
    if ((*(int *)(param_1 + 100) != 0) && (uVar4 = 0, *(char *)(param_1 + 0x4f) != '\0')) {
      do {
        *(undefined1 *)(*(int *)(param_1 + 100) + 4 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(byte *)(param_1 + 0x4f));
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      bVar1 = *(byte *)(param_1 + 0x4d);
      iVar6 = 0;
      if (bVar1 != 0xffffffff) {
        do {
          if ((-1 < iVar6) && (iVar6 < (int)(*(byte *)(param_1 + 0x4d) + 1))) {
            puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x68) + iVar6 * 4);
            if (puVar2 != (undefined4 *)0x0) {
              LVar5 = InterlockedDecrement(puVar2 + 4);
              uVar3 = DAT_0105b588;
              if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
                (**(code **)*puVar2)(1);
              }
              DAT_0105b588 = uVar3;
              *(undefined4 *)(*(int *)(param_1 + 0x68) + iVar6 * 4) = 0;
            }
            *(undefined4 *)(*(int *)(param_1 + 0x68) + iVar6 * 4) = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(bVar1 + 1));
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x3c));
}


//// FUNCTION FUN_00976d10 @ 00976d10 ////

void __fastcall FUN_00976d10(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  *(uint *)((int)param_1 + 0x54) = *(uint *)((int)param_1 + 0x54) & 0xfffff7ff;
  *(undefined4 *)((int)param_1 + 0x8c) = 0;
  *(undefined4 *)((int)param_1 + 0x84) = 0;
  *(undefined4 *)((int)param_1 + 0x88) = 0;
  *(undefined4 *)((int)param_1 + 0x1c4) = 0;
  *(undefined4 *)((int)param_1 + 0x1c8) = 0;
  *(undefined4 *)((int)param_1 + 0x1d4) = 0;
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xfffd9fff;
  *(undefined4 *)((int)param_1 + 0x154) = 0;
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  *(undefined4 *)((int)param_1 + 0x16c) = 0;
  *(undefined4 *)((int)param_1 + 0x168) = 0;
  *(undefined4 *)((int)param_1 + 0x164) = 0;
  *(undefined4 *)((int)param_1 + 0x17c) = 0;
  *(undefined4 *)((int)param_1 + 0x178) = 0;
  *(undefined4 *)((int)param_1 + 0x160) = 0;
  *(undefined4 *)((int)param_1 + 0x174) = 0;
  *(undefined4 *)((int)param_1 + 0x15c) = 0;
  *(undefined4 *)((int)param_1 + 0x170) = 0;
  *(undefined4 *)((int)param_1 + 0x158) = 0;
  *(undefined4 *)((int)param_1 + 0x180) = 0;
  *(undefined4 *)((int)param_1 + 0x184) = 0;
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xf3ffffff;
  FUN_00976850(param_1,0.0,0.0);
  return;
}


//// FUNCTION FUN_00976dc0 @ 00976dc0 ////

void __fastcall FUN_00976dc0(undefined4 *param_1)

{
  FUN_00974a40(param_1);
  FUN_00976b90((int)param_1);
  FUN_00976d10(param_1);
  return;
}


//// FUNCTION FUN_00976de0 @ 00976de0 ////

uint __thiscall FUN_00976de0(void *this,uint param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  void *this_00;
  
  if (param_2 == -1) {
    if (((int)param_1 < 0) || ((int)(uint)*(byte *)((int)this + 0x4d) <= (int)param_1)) {
      param_1 = 0;
    }
    if (*(int *)((int)this + 0x5c) != 0) {
      uVar2 = FUN_00973430(this,*(int *)(*(int *)((int)this + 0x5c) + param_1 * 4),param_4,param_3);
      return uVar2;
    }
    goto LAB_00976e69;
  }
  if (param_2 < 0) {
LAB_00976e10:
    this_00 = (void *)0x0;
  }
  else {
    if (*(int *)((int)this + 0x3c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
    }
    if (iVar1 <= param_2) goto LAB_00976e10;
    this_00 = *(void **)(*(int *)((int)this + 0x3c) + param_2 * 4);
  }
  if (this_00 != (void *)0x0) {
    uVar2 = FUN_00976de0(this_00,param_1,-1,param_3,param_4);
    return uVar2;
  }
LAB_00976e69:
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_00976e70 @ 00976e70 ////

void __thiscall FUN_00976e70(void *this,int param_1,int param_2,void *param_3,char param_4)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 != (void *)0x0) {
      *(uint *)((int)param_3 + 0x9c) = *(uint *)((int)param_3 + 0x9c) | 8;
      FUN_0097e330(param_3,1);
    }
    if (param_2 == -1) {
      if (((-1 < param_1) && (param_1 < (int)(uint)*(byte *)((int)this + 0x4d))) &&
         (pvVar1 = *(void **)(*(int *)(*(int *)((int)this + 0x5c) + param_1 * 4) + 0x40),
         param_3 != pvVar1)) {
        if (pvVar1 != (void *)0x0) {
          FUN_00983440((int)pvVar1,(int)param_3);
        }
        FUN_00a3c020(*(int *)(*(int *)((int)this + 0x5c) + param_1 * 4));
        if ((param_3 != (void *)0x0) && (*(int *)((int)param_3 + 0xd0) == 0)) {
          (**(code **)(**(int **)(*(int *)((int)this + 0x5c) + param_1 * 4) + 0x28))(param_3);
          *(void **)((int)param_3 + 0xd0) = this;
          FUN_00972420(this,(int)param_3);
        }
        if ((param_4 != '\0') || (param_3 != (void *)0x0)) {
          FUN_00a3b7a0(*(int *)(*(int *)((int)this + 0x5c) + param_1 * 4));
        }
      }
      return;
    }
    if (param_2 < 0) {
      return;
    }
    if (*(int *)((int)this + 0x3c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
    }
    if (iVar2 <= param_2) break;
    this = *(void **)(*(int *)((int)this + 0x3c) + param_2 * 4);
    if (this == (void *)0x0) {
      return;
    }
    param_2 = -1;
  }
  return;
}


//// FUNCTION FUN_00976f50 @ 00976f50 ////

void __fastcall FUN_00976f50(void *param_1)

{
  char cVar1;
  char *_Str1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char *pcVar6;
  uint _Count;
  undefined4 *puVar7;
  char *local_13c;
  uint local_138;
  uint local_134;
  char local_130 [36];
  char local_10c [23];
  char local_f5 [233];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf54cb;
  local_c = ExceptionList;
  if (((*(void **)((int)param_1 + 0x148) != (void *)0x0) &&
      (ExceptionList = &local_c, _Str1 = (char *)FUN_0097e350(*(void **)((int)param_1 + 0x148),0),
      _Str1 != (char *)0x0)) &&
     (((*(uint *)(_Str1 + 0xe4) & 0x100000) != 0 || (iVar2 = _strncmp(_Str1,"fac_",4), iVar2 == 0)))
     ) {
    _sprintf(local_10c,"Data\\Textures\\LightMap\\%s.dds",_Str1);
    local_f5[0] = 'l';
    local_f5[1] = 0x66;
    local_13c = local_130;
    pcVar6 = local_10c;
    local_f5[2] = (byte)((uint)*(undefined4 *)(*(int *)((int)param_1 + 0x148) + 0x98) >> 0x1c) +
                  0x30;
    local_130[0] = '\0';
    local_138 = 0;
    local_134 = 0x14;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar6 - (int)(local_10c + 1);
    if (0x13 < _Count) {
      local_134 = _Count + 0x20 & 0xffffffe0;
      local_13c = _malloc(local_134);
    }
    _strncpy(local_13c,local_10c,_Count);
    local_13c[_Count] = '\0';
    local_4 = 0;
    local_138 = _Count;
    uVar3 = FUN_009d3660(&local_13c,(uint *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_134) {
                    /* WARNING: Subroutine does not return */
      _free(local_13c);
    }
    if ((char)uVar3 != '\0') {
      if (*(int *)((int)param_1 + 0x14c) == 0) {
        uVar3 = FUN_00a449e0();
        *(undefined4 *)((int)param_1 + 0x14c) = uVar3;
      }
      puVar4 = (undefined4 *)FUN_009dd8d0(_Str1,(float *)&local_13c);
      puVar7 = (undefined4 *)(*(int *)((int)param_1 + 0x14c) + 0x4c);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_009aafb0((void *)(*(int *)((int)param_1 + 0x14c) + 0x4c),
                   (float *)(*(int *)((int)param_1 + 0x148) + 0x48));
      *(uint *)(*(int *)((int)param_1 + 0x14c) + 0x80) =
           *(uint *)(*(int *)((int)param_1 + 0x14c) + 0x80) | 1;
      pvVar5 = FUN_0099bb50(local_f5,0,0,0,'\0');
      FUN_00a44920(*(void **)((int)param_1 + 0x14c),(int)pvVar5);
      if (pvVar5 != (void *)0x0) {
        FUN_0099b400(pvVar5);
      }
      FUN_00975a10(param_1,*(undefined4 **)((int)param_1 + 0x14c));
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00977150 @ 00977150 ////

void __fastcall FUN_00977150(void *param_1)

{
  void *_Memory;
  undefined4 *_Memory_00;
  int iVar1;
  char *_Str1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  int iStack_4;
  
  if (*(int *)((int)param_1 + 0x148) != 0) {
    *(undefined2 *)(*(int *)((int)param_1 + 0x148) + 0x98) = 0;
  }
  for (uVar2 = 0;
      (iVar1 = *(int *)((int)param_1 + 0x3c), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)((int)param_1 + 0x40) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00977150(*(void **)(iVar1 + uVar2 * 4));
  }
  _Memory = *(void **)((int)param_1 + 0x7c);
  if (_Memory != (void *)0x0) {
    FUN_00a44710((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  _Memory_00 = *(undefined4 **)((int)param_1 + 0x80);
  if (_Memory_00 != (undefined4 *)0x0) {
    FUN_00a3def0(_Memory_00);
                    /* WARNING: Subroutine does not return */
    _free(_Memory_00);
  }
  uVar2 = 0;
  if ((*(uint *)((int)param_1 + 0x48) & 0xffff) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x60) + uVar2 * 4) + 0x30))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)((int)param_1 + 0x48) & 0xffff));
  }
  if ((*(int *)((int)param_1 + 0x34) == 0) || ((*(uint *)((int)param_1 + 0x50) & 0x100) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar2 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4) + 0x40);
      if ((iVar1 != 0) && (!bVar5)) {
        FUN_00983b10(iVar1,(int)param_1);
        iVar1 = *(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4) + 0x40) + 0xf8
                        );
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar1 + 4));
        }
        *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4) + 0x40) + 0xf8)
             = 0;
      }
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4) + 0x30))();
      (**(code **)(**(int **)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4) + 0x2c))();
      FUN_00a3b7a0(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)((int)param_1 + 0x4d));
  }
  FUN_00974b40(param_1,'\x01');
  FUN_00976d10(param_1);
  if (((~(byte)(*(uint *)((int)param_1 + 0x50) >> 0x12) & 1) != 0) &&
     (iStack_4 = 0, *(char *)((int)param_1 + 0x4e) != '\0')) {
    do {
      if ((*(int *)((int)param_1 + 0x58) == 0) ||
         ((iStack_4 < 0 || ((int)(*(uint *)((int)param_1 + 0x4c) & 0xff) <= iStack_4)))) {
        if (iStack_4 == -10) {
          _Str1 = s_look_at_00e66f00;
          goto LAB_0097731f;
        }
      }
      else {
        _Str1 = *(char **)(*(int *)((int)param_1 + 0x58) + iStack_4 * 4);
        if (_Str1 != (char *)0x0) {
LAB_0097731f:
          iVar1 = _strncmp(_Str1,"ai_",3);
          if (iVar1 == 0) {
            iVar1 = 9;
            bVar5 = true;
            pcVar3 = _Str1;
            pcVar4 = "ai_crank";
            do {
              if (iVar1 == 0) break;
              iVar1 = iVar1 + -1;
              bVar5 = *pcVar3 == *pcVar4;
              pcVar3 = pcVar3 + 1;
              pcVar4 = pcVar4 + 1;
            } while (bVar5);
            if (!bVar5) {
              iVar1 = 0x11;
              bVar5 = true;
              pcVar3 = _Str1;
              pcVar4 = "ai_director_mood";
              do {
                if (iVar1 == 0) break;
                iVar1 = iVar1 + -1;
                bVar5 = *pcVar3 == *pcVar4;
                pcVar3 = pcVar3 + 1;
                pcVar4 = pcVar4 + 1;
              } while (bVar5);
              if (!bVar5) {
                iVar1 = 9;
                bVar5 = true;
                pcVar3 = _Str1;
                pcVar4 = "ai_crane";
                do {
                  if (iVar1 == 0) break;
                  iVar1 = iVar1 + -1;
                  bVar5 = *pcVar3 == *pcVar4;
                  pcVar3 = pcVar3 + 1;
                  pcVar4 = pcVar4 + 1;
                } while (bVar5);
                if (!bVar5) {
                  iVar1 = 9;
                  bVar5 = true;
                  pcVar3 = _Str1;
                  pcVar4 = "ai_dolly";
                  do {
                    if (iVar1 == 0) break;
                    iVar1 = iVar1 + -1;
                    bVar5 = *pcVar3 == *pcVar4;
                    pcVar3 = pcVar3 + 1;
                    pcVar4 = pcVar4 + 1;
                  } while (bVar5);
                  if (!bVar5) {
                    iVar1 = 0xe;
                    bVar5 = true;
                    pcVar3 = "ai_stunt_fail";
                    do {
                      if (iVar1 == 0) break;
                      iVar1 = iVar1 + -1;
                      bVar5 = *_Str1 == *pcVar3;
                      _Str1 = _Str1 + 1;
                      pcVar3 = pcVar3 + 1;
                    } while (bVar5);
                    if (!bVar5) {
                      *(undefined4 *)(*(int *)((int)param_1 + 0xc4) + iStack_4 * 0x18) = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < (int)(uint)*(byte *)((int)param_1 + 0x4e));
  }
  if ((*(byte *)((int)param_1 + 0x54) & 0x20) != 0) {
    FUN_009757a0(param_1,(byte *)"ai_action",0.0,0);
    FUN_009757a0(param_1,(byte *)"ai_cg",*(float *)((int)param_1 + 0x1b8),0);
  }
  if ((*(uint *)((int)param_1 + 0x50) & 0x400000) != 0) {
    return;
  }
  FUN_00a00f10(param_1);
  return;
}


//// FUNCTION FUN_00977410 @ 00977410 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_00977410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
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
  
  if ((_DAT_01050bd8 & 1) == 0) {
    _DAT_01050bd8 = _DAT_01050bd8 | 1;
    _DAT_01050bcc = 0;
    _DAT_01050bd0 = 0;
    _DAT_01050bd4 = 0.0;
  }
  if ((*(char *)(param_1 + 0x1e4) == '\0') && (iVar2 = FUN_009763f0(param_1), iVar2 != 0)) {
    uVar4 = 0;
    if (*(byte *)(iVar2 + 0x4d) != 0) {
      piVar5 = *(int **)(iVar2 + 0x5c);
      do {
        iVar1 = *piVar5;
        if (((iVar1 != 0) && (*(int *)(iVar1 + 8) == 2)) && (*(int *)(iVar1 + 0x40) != 0)) {
          iVar2 = *(int *)((*(int **)(iVar2 + 0x5c))[uVar4] + 0x40);
          _DAT_01050bcc = *(undefined4 *)(iVar2 + 0x3c);
          _DAT_01050bd0 = *(undefined4 *)(iVar2 + 0x40);
          _DAT_01050bd4 = *(float *)(iVar2 + 0x44) + 1.0;
          return &DAT_01050bcc;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < *(byte *)(iVar2 + 0x4d));
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  uVar4 = 0;
  local_4 = 0;
  local_c = 0x3f9c61ab;
  if (*(byte *)(param_1 + 0x4d) != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x5c);
    do {
      if (*(int *)((int)*puVar6 + 8) == 7) {
        uVar3 = FUN_00a40200((void *)*puVar6,&local_28);
        if ((char)uVar3 == '\0') {
          _DAT_01050bcc = 0;
          _DAT_01050bd0 = 0;
          _DAT_01050bd4 = 0.0;
          return &DAT_01050bcc;
        }
        _DAT_01050bd4 = (float)local_1c;
        _DAT_01050bcc = local_24;
        _DAT_01050bd0 = local_20;
        return &DAT_01050bcc;
      }
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0x4d));
  }
  _DAT_01050bd4 = 0.0;
  _DAT_01050bd0 = 0;
  _DAT_01050bcc = 0;
  return &DAT_01050bcc;
}


//// FUNCTION FUN_00977590 @ 00977590 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00977590(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  undefined4 local_c;
  
  if ((*(uint *)((int)param_1 + 0x50) & 0x80000) != 0) {
    return;
  }
  fVar10 = FUN_009722e0((int)param_1,(byte *)"ai_ended_by_user");
  FUN_009757a0(param_1,(byte *)"ai_ended_by_user",1.0,0);
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 0x400000;
  iVar8 = 0;
  while( true ) {
    if (*(int *)((int)param_1 + 0x3c) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x40) - *(int *)((int)param_1 + 0x3c) >> 2;
    }
    if (iVar7 <= iVar8) break;
    puVar1 = (uint *)(*(int *)(*(int *)((int)param_1 + 0x3c) + iVar8 * 4) + 0x50);
    *puVar1 = *puVar1 | 0x400000;
    iVar8 = iVar8 + 1;
  }
  FUN_00976370(param_1,0);
  iVar8 = DAT_01050b60;
  DAT_01050b60 = 0;
  _DAT_0105be84 = 0.0;
  FUN_00977150(param_1);
  local_c = 0;
  bVar4 = false;
  bVar3 = true;
  bVar5 = true;
  if (*(char *)((int)param_1 + 0x4d) == '\0') {
LAB_00977689:
    bVar5 = false;
  }
  else {
    uVar9 = 0;
    do {
      piVar2 = *(int **)(*(int *)((int)param_1 + 0x5c) + uVar9 * 4);
      if (piVar2 != (int *)0x0) {
        cVar6 = (**(code **)(*piVar2 + 0x24))();
        if ((cVar6 == '\0') &&
           (cVar6 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x5c) + uVar9 * 4) + 0x34))(),
           cVar6 == '\0')) {
          bVar5 = false;
        }
        cVar6 = (**(code **)(**(int **)(*(int *)((int)param_1 + 0x5c) + uVar9 * 4) + 0x24))();
        if (cVar6 != '\0') {
          bVar4 = true;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)((int)param_1 + 0x4d));
    if (!bVar4) goto LAB_00977689;
  }
  if (DAT_01050bdc != '\0') {
    FUN_00973910((int)param_1);
  }
  if ((*(uint *)((int)param_1 + 0x50) >> 0xe & 1) == 0) {
    do {
      uVar9 = FUN_00971d30((int)param_1);
      if ((((char)uVar9 != '\0') && (!bVar5)) || (5999 < *(uint *)((int)param_1 + 0x8c))) break;
      FUN_00977c80(param_1);
      if (DAT_01050bdc != '\0') {
        FUN_00973910((int)param_1);
      }
      if (((*(uint *)((int)param_1 + 0x50) >> 0xd & 1) != 0) && (bVar3)) {
        local_c = *(undefined4 *)((int)param_1 + 0x8c);
        bVar3 = false;
      }
    } while ((*(uint *)((int)param_1 + 0x50) >> 0xe & 1) == 0);
    if (!bVar3) {
      *(short *)((int)param_1 + 0x4a) = (short)local_c;
      *(undefined4 *)((int)param_1 + 0x74) = local_c;
      *(int *)((int)param_1 + 0x78) = *(int *)((int)param_1 + 0x8c) + -1;
      goto LAB_00977729;
    }
  }
  *(undefined2 *)((int)param_1 + 0x4a) = 0;
LAB_00977729:
  FUN_009757a0(param_1,(byte *)"ai_ended_by_user",(float)fVar10,0);
  FUN_00978cd0(param_1,0,1);
  _DAT_0105be84 = (float)iVar8 * 0.01;
  DAT_01050b60 = iVar8;
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xffbfffff;
  iVar8 = 0;
  while( true ) {
    if (*(int *)((int)param_1 + 0x3c) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)param_1 + 0x40) - *(int *)((int)param_1 + 0x3c) >> 2;
    }
    if (iVar7 <= iVar8) break;
    puVar1 = (uint *)(*(int *)(*(int *)((int)param_1 + 0x3c) + iVar8 * 4) + 0x50);
    *puVar1 = *puVar1 & 0xffbfffff;
    iVar8 = iVar8 + 1;
  }
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 0x20000000;
  return;
}


//// FUNCTION FUN_009777b0 @ 009777b0 ////

void __fastcall FUN_009777b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x4d) != '\0') {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x5c) + uVar2 * 4);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x48) & 0x200000) == 0)) {
        FUN_00a3b7a0(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x4d));
  }
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x3c), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x40) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_009777b0(*(int *)(iVar1 + uVar2 * 4));
  }
  FUN_009761c0(param_1);
  return;
}


//// FUNCTION FUN_00977870 @ 00977870 ////

int __fastcall FUN_00977870(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x198);
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x19c) - iVar2 >> 2;
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x198) + iVar3 * 4);
      iVar2 = *(int *)(param_1 + 0x198) + iVar3 * 4;
      if (piVar1 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar1 + 0x10))(0,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return iVar2;
}


//// FUNCTION FUN_009778c0 @ 009778c0 ////

void __thiscall FUN_009778c0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *_Dst;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = *(int **)((int)this + 0x18);
    _Dst = *(int **)((int)this + 0x14);
    if (_Dst != piVar1) {
      do {
        if ((undefined4 *)*_Dst == param_1) break;
        _Dst = _Dst + 1;
      } while (_Dst != piVar1);
      if (_Dst != piVar1) {
        _memmove(_Dst,_Dst + 1,(*(int *)((int)this + 0x18) - (int)(_Dst + 1) >> 2) << 2);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -4;
        FUN_0040a5b0(param_1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00977920 @ 00977920 ////

float10 __fastcall FUN_00977920(void *param_1)

{
  float10 fVar1;
  
  if ((*(uint *)((int)param_1 + 0x50) & 0x20000000) == 0) {
    if (*(int *)((int)param_1 + 0x8c) != 0) {
      return (float10)0.0;
    }
    FUN_00977590(param_1);
  }
  fVar1 = (float10)*(int *)((int)param_1 + 0x8c);
  if (*(int *)((int)param_1 + 0x8c) < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  fVar1 = (fVar1 - (float10)*(int *)((int)param_1 + 0x74)) /
          ((float10)*(int *)((int)param_1 + 0x78) - (float10)*(int *)((int)param_1 + 0x74));
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_009779a0 @ 009779a0 ////

void __thiscall FUN_009779a0(void *this,int param_1)

{
  if (*(void **)((int)this + 0x148) != (void *)0x0) {
    FUN_00982a90(*(void **)((int)this + 0x148),param_1);
  }
  FUN_00976f50(this);
  FUN_00a00f10(this);
  return;
}


//// FUNCTION FUN_009779d0 @ 009779d0 ////

void __fastcall FUN_009779d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x198) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198) >> 2;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      FUN_00980620(*(void **)(*(int *)(param_1 + 0x198) + iVar1 * 4),
                   *(undefined4 **)(param_1 + 0x14c));
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  return;
}


//// FUNCTION FUN_00977a20 @ 00977a20 ////

undefined4 * __cdecl FUN_00977a20(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_01050b88 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_01050b8c - DAT_01050b88 >> 2;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (iVar2 <= param_2) {
    param_2 = iVar2 + -1;
  }
  puVar1 = *(undefined4 **)(DAT_01050b88 + param_2 * 4);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*puVar1,puVar1[1]);
  return param_1;
}


//// FUNCTION FUN_00977ba0 @ 00977ba0 ////

void __fastcall FUN_00977ba0(int param_1)

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


//// FUNCTION FUN_00977bd0 @ 00977bd0 ////

void __fastcall FUN_00977bd0(int param_1)

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


//// FUNCTION FUN_00977c00 @ 00977c00 ////

void __fastcall FUN_00977c00(int param_1)

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


//// FUNCTION FUN_00977c30 @ 00977c30 ////

void __fastcall FUN_00977c30(int param_1)

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


//// FUNCTION FUN_00977c80 @ 00977c80 ////

void __fastcall FUN_00977c80(void *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  
  if (((*(uint *)((int)param_1 + 0x50) >> 0x1c & 1) != 0) &&
     ((*(uint *)((int)param_1 + 0x50) & 0xc80000) == 0)) {
    bVar4 = true;
    if ((*(int *)((int)param_1 + 0x74) == 0) && (*(int *)((int)param_1 + 0x78) == 1)) {
      FUN_00977590(param_1);
      bVar4 = false;
    }
    uVar5 = *(uint *)((int)param_1 + 0x50) >> 0xe;
    if ((uVar5 & 1) != 0) {
      *(int *)((int)param_1 + 0x1cc) = *(int *)((int)param_1 + 0x1cc) + 1;
    }
    if (((((uVar5 & 1) != 0) || ((*(uint *)((int)param_1 + 0x50) & 0x2000000) != 0)) ||
        (*(int *)((int)param_1 + 0x8c) < *(int *)((int)param_1 + 0x74))) ||
       (*(int *)((int)param_1 + 0x78) <= *(int *)((int)param_1 + 0x8c))) {
      FUN_00977590(param_1);
      FUN_00978cd0(param_1,*(uint *)((int)param_1 + 0x74),1);
      *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xfdffffff;
    }
    if (((*(code **)((int)param_1 + 0x1dc) != (code *)0x0) &&
        ((*(uint *)((int)param_1 + 0x50) & 0x800000) == 0)) && (bVar4)) {
      (**(code **)((int)param_1 + 0x1dc))(*(undefined4 *)((int)param_1 + 0x1e0));
    }
  }
  if ((*(uint *)((int)param_1 + 0x50) & 0xc00000) == 0) {
    FUN_004137b0((undefined4 *)((int)param_1 + 0x150),100.0);
    pfVar1 = (float *)((int)param_1 + 0x180);
    *pfVar1 = *(float *)((int)param_1 + 0x184) * 0.1 + *pfVar1;
    FUN_00972a40(pfVar1);
    *(undefined4 *)((int)param_1 + 0x184) = *(undefined4 *)((int)param_1 + 0x150);
    if ((*(uint *)((int)param_1 + 0x50) & 0x1000) != 0) {
      *(undefined4 *)((int)param_1 + 0x1cc) = 0;
      FUN_009761c0((int)param_1);
      FUN_00974b40(param_1,'\x01');
      *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xffffefff;
    }
  }
  for (uVar5 = 0;
      (iVar2 = *(int *)((int)param_1 + 0x3c), iVar2 != 0 &&
      (uVar5 < (uint)(*(int *)((int)param_1 + 0x40) - iVar2 >> 2))); uVar5 = uVar5 + 1) {
    FUN_00977c80(*(void **)(iVar2 + uVar5 * 4));
  }
  uVar5 = *(uint *)((int)param_1 + 0x50);
  if (((((uVar5 >> 0x10 & 1) != 0) && ((uVar5 & 0x800000) == 0)) &&
      (*(int *)((int)param_1 + 0x34) == 0)) &&
     (((uVar5 & 0x400000) == 0 && (((uVar5 >> 0xe & 1) != 0 || ((uVar5 >> 0xd & 1) == 0)))))) {
    FUN_00977590(param_1);
    FUN_00976050(param_1,0);
    FUN_00978cd0(param_1,(uint)*(ushort *)((int)param_1 + 0x4a),1);
    FUN_00976050(param_1,1);
  }
  if (*(int **)((int)param_1 + 0x7c) != (int *)0x0) {
    FUN_00a44760(*(int **)((int)param_1 + 0x7c));
  }
  if (*(undefined4 **)((int)param_1 + 0x80) != (undefined4 *)0x0) {
    FUN_009747c0(*(undefined4 **)((int)param_1 + 0x80));
  }
  *(undefined4 *)((int)param_1 + 0x70) = 0;
  FUN_00975cf0(param_1);
  uVar5 = 0;
  if ((*(uint *)((int)param_1 + 0x48) & 0xffff) != 0) {
    do {
      iVar2 = *(int *)(*(int *)((int)param_1 + 0x60) + uVar5 * 4);
      if (iVar2 != 0) {
        FUN_00a43c50(iVar2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)((int)param_1 + 0x48) & 0xffff));
  }
  iVar2 = *(int *)((int)param_1 + 0x70);
  while (iVar2 != 0) {
    piVar3 = *(int **)((int)param_1 + 0x70);
    *(int *)((int)param_1 + 0x70) = piVar3[0x14];
    piVar3[0x12] = piVar3[0x12] & 0xfdffffff;
    FUN_00a44320(piVar3);
    iVar2 = *(int *)((int)param_1 + 0x70);
  }
  if ((*(int *)((int)param_1 + 500) != -1) &&
     (piVar3 = *(int **)(*(int *)((int)param_1 + 0x5c) + *(int *)((int)param_1 + 500) * 4),
     piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x18))();
  }
  uVar5 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      if ((*(int *)(*(int *)((int)param_1 + 0x5c) + uVar5 * 4) != 0) &&
         (uVar5 != *(uint *)((int)param_1 + 500))) {
        (**(code **)(**(int **)(*(int *)((int)param_1 + 0x5c) + uVar5 * 4) + 0x18))();
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)((int)param_1 + 0x4d));
  }
  if (((*(byte *)((int)param_1 + 0x54) & 0x20) != 0) &&
     (*(int *)((int)param_1 + 0x8c) == *(int *)((int)param_1 + 0x1bc))) {
    FUN_009757a0(param_1,(byte *)"ai_action",1.0,0);
  }
  *(int *)((int)param_1 + 0x8c) = *(int *)((int)param_1 + 0x8c) + 1;
  return;
}


//// FUNCTION Model_UpdateVisuals @ 00977f10 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Model_UpdateVisuals(void *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  LONG LVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float local_8;
  undefined4 local_4;
  
  if (((*(byte *)((int)param_1 + 0x54) & 2) != 0) &&
     (pvVar1 = *(void **)((int)param_1 + 0x148), pvVar1 != (void *)0x0)) {
    fVar11 = FUN_0097f880(pvVar1,(float *)((int)pvVar1 + 0x3c),(undefined4 *)0x0);
    *(float *)((int)param_1 + 0x1d8) = (float)fVar11;
  }
  if (DAT_010b9556 != '\0') {
    FUN_00a21550(*(void **)((int)param_1 + 0x148));
  }
  iVar5 = *(int *)((int)param_1 + 0x8c) * 100 + DAT_01050b60;
  *(int *)((int)param_1 + 0x88) = iVar5 - *(int *)((int)param_1 + 0x84);
  *(int *)((int)param_1 + 0x84) = iVar5;
  FUN_004137b0((void *)((int)param_1 + 0x218),(float)*(int *)((int)param_1 + 0x88) * 0.001);
  if (((*(int *)((int)param_1 + 0x34) == 0) ||
      (uVar8 = *(uint *)((int)param_1 + 0x50), (uVar8 & 0x100) != 0)) ||
     (((uVar8 >> 0x10 & 1) == 0 && ((uVar8 >> 0x1c & 1) == 0)))) {
    if ((*(uint *)((int)param_1 + 0x50) & 0x80000) == 0) {
      FUN_00a44b30((void *)((int)param_1 + 0x248),(byte)(*(uint *)((int)param_1 + 0x50) >> 0x10) & 1
                  );
    }
    if ((*(void **)((int)param_1 + 0x148) != (void *)0x0) &&
       ((*(uint *)((int)param_1 + 0x50) & 0x80000) == 0)) {
      local_4 = 0;
      local_8 = _DAT_0105be84 * *(float *)((int)param_1 + 0x184) * 0.1 +
                *(float *)((int)param_1 + 0x180);
      MeshInstance_SetUVScrollOffset(*(void **)((int)param_1 + 0x148),&local_8);
      if (((*(uint *)((int)param_1 + 0x50) >> 0x1c & 1) != 0) || (DAT_010b9556 != '\0')) {
        FUN_00a00660(param_1,'\x01');
      }
    }
    for (uVar8 = 0;
        (iVar5 = *(int *)((int)param_1 + 0x3c), iVar5 != 0 &&
        (uVar8 < (uint)(*(int *)((int)param_1 + 0x40) - iVar5 >> 2))); uVar8 = uVar8 + 1) {
      Model_UpdateVisuals(*(void **)(iVar5 + uVar8 * 4));
    }
    uVar8 = 0;
    if (*(char *)((int)param_1 + 0x4d) != '\0') {
      do {
        piVar6 = *(int **)(*(int *)((int)param_1 + 0x5c) + uVar8 * 4);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x1c))();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)((int)param_1 + 0x4d));
    }
    if (*(int *)((int)param_1 + 0x198) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)param_1 + 0x19c) - *(int *)((int)param_1 + 0x198) >> 2;
    }
    if (0 < iVar5) {
      iVar9 = 0;
      do {
        piVar6 = *(int **)(*(int *)((int)param_1 + 0x198) + iVar9 * 4);
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0x10))(0,1);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar5);
    }
    puVar2 = *(undefined4 **)((int)param_1 + 0x18);
    for (puVar10 = *(undefined4 **)((int)param_1 + 0x14); puVar10 != puVar2; puVar10 = puVar10 + 1)
    {
      (**(code **)(*(int *)*puVar10 + 0x10))();
    }
    if (*(int *)((int)param_1 + 0x14) != 0) {
      iVar5 = *(int *)((int)param_1 + 0x18) - *(int *)((int)param_1 + 0x14) >> 2;
      while (iVar5 != 0) {
        piVar6 = *(int **)((int)param_1 + 0x14);
        puVar10 = (undefined4 *)piVar6[iVar5 + -1];
        iVar5 = iVar5 + -1;
        if ((((*(byte *)(puVar10 + 7) & 1) != 0) && (puVar10 != (undefined4 *)0x0)) &&
           (piVar3 = *(int **)((int)param_1 + 0x18), piVar6 != piVar3)) {
          do {
            if ((undefined4 *)*piVar6 == puVar10) break;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar3);
          if (piVar6 != piVar3) {
            _memmove(piVar6,piVar6 + 1,(*(int *)((int)param_1 + 0x18) - (int)(piVar6 + 1) >> 2) << 2
                    );
            *(int *)((int)param_1 + 0x18) = *(int *)((int)param_1 + 0x18) + -4;
            LVar7 = InterlockedDecrement(puVar10 + 4);
            uVar4 = DAT_0105b588;
            DAT_0105b588 = uVar4;
            if (LVar7 == 0) {
              DAT_0105b588 = 1;
              (**(code **)*puVar10)(1);
              DAT_0105b588 = uVar4;
            }
          }
        }
      }
    }
    UI_UpdateAndQueueElement((void *)((int)param_1 + 0x25c),*(int *)((int)param_1 + 0x8c));
  }
  return;
}


//// FUNCTION FUN_00978190 @ 00978190 ////

void FUN_00978190(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_010b702c;
  if (DAT_0105be88 != '\0') {
    iVar5 = 0;
    if (DAT_010b702c != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_010b702c + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_010b702c = (undefined4 *)0x0;
      DAT_0105b588 = uVar2;
    }
    puVar1 = DAT_010b7028;
    if (DAT_010b7028 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_010b7028 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_010b7028 = (undefined4 *)0x0;
      DAT_0105b588 = uVar2;
    }
    puVar1 = DAT_010b7020;
    if (DAT_010b7020 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(DAT_010b7020 + 4);
      uVar2 = DAT_0105b588;
      if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_010b7020 = (undefined4 *)0x0;
      DAT_0105b588 = uVar2;
    }
    if (DAT_01050b88 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = DAT_01050b8c - (int)DAT_01050b88 >> 2;
    }
    if (0 < iVar4) {
      do {
        puVar1 = *(undefined4 **)((int)DAT_01050b88 + iVar5 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          if ((uint)puVar1[2] < 0x15) {
                    /* WARNING: Subroutine does not return */
            _free(puVar1);
          }
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar1);
        }
        *(undefined4 *)((int)DAT_01050b88 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (DAT_01050b88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_01050b88);
    }
    DAT_01050b88 = (void *)0x0;
    DAT_01050b8c = 0;
    DAT_01050b90 = 0;
  }
  return;
}


//// FUNCTION FUN_009782d0 @ 009782d0 ////

void __thiscall FUN_009782d0(void *this,int param_1,int param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  uint local_8 [2];
  
  puVar1 = FUN_00975a70(this,local_8,param_1,param_2);
  FUN_00976de0(this,*puVar1,puVar1[1],param_3,param_4);
  return;
}


//// FUNCTION FUN_00978310 @ 00978310 ////

void __thiscall FUN_00978310(void *this,int param_1,int param_2,void *param_3)

{
  uint *puVar1;
  uint local_8 [2];
  
  puVar1 = FUN_00975a70(this,local_8,param_1,param_2);
  FUN_00976e70(this,*puVar1,puVar1[1],param_3,'\x01');
  return;
}


//// FUNCTION FUN_00978350 @ 00978350 ////

void __thiscall FUN_00978350(void *this,undefined4 *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  for (uVar3 = 0;
      (iVar2 = *(int *)((int)this + 0x3c), iVar2 != 0 &&
      (uVar3 < (uint)(*(int *)((int)this + 0x40) - iVar2 >> 2))); uVar3 = uVar3 + 1) {
    FUN_00978350(*(void **)(iVar2 + uVar3 * 4),&local_24,param_2,param_3);
  }
  if (*(int *)((int)this + 0x148) != 0) {
    FUN_00974d40(this);
  }
  if (*(undefined4 **)((int)this + 0x14c) != (undefined4 *)0x0) {
    FUN_00a44a10(*(undefined4 **)((int)this + 0x14c));
    *(undefined4 *)((int)this + 0x14c) = 0;
  }
  fVar4 = (float10)fcos((float10)param_2);
  *(undefined4 *)((int)this + 0x148) = param_3;
  *(undefined4 *)((int)this + 0xbc) = local_1c;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xb4) = local_24;
  *(undefined4 *)((int)this + 0xb8) = local_20;
  *(undefined4 *)((int)this + 0xb0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xa0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  fVar5 = (float10)fsin((float10)param_2);
  fVar1 = *(float *)((int)this + 0x90);
  *(float *)((int)this + 0x90) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x90) +
              fVar5 * (float10)*(float *)((int)this + 0x9c));
  *(float *)((int)this + 0x9c) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x9c) - fVar5 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x94);
  *(float *)((int)this + 0x94) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x94) +
              fVar5 * (float10)*(float *)((int)this + 0xa0));
  *(float *)((int)this + 0xa0) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0xa0) - fVar5 * (float10)fVar1);
  fVar1 = *(float *)((int)this + 0x98);
  *(float *)((int)this + 0x98) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0x98) +
              fVar5 * (float10)*(float *)((int)this + 0xa4));
  *(float *)((int)this + 0xa4) =
       (float)(fVar4 * (float10)*(float *)((int)this + 0xa4) -
              (float10)(float)(fVar5 * (float10)fVar1));
  *(float *)((int)this + 0xc0) = param_2;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x400;
  if (*(int *)((int)this + 0x148) == 0) {
    *(undefined4 *)((int)this + 0x20) = local_1c;
  }
  else {
    InterlockedIncrement((LONG *)(*(int *)((int)this + 0x148) + 0x10));
    FUN_00976f50(this);
    iVar2 = FUN_0097e350(*(void **)((int)this + 0x148),0);
    if (iVar2 != 0) {
      fVar1 = *(float *)(iVar2 + 0xe0);
      *(undefined4 *)((int)this + 0xe8) = 0x3f800000;
      local_14 = fVar1 * -1.0;
      *(undefined4 *)((int)this + 0xe4) = 0x428c0000;
      local_c[1] = 0.0;
      local_c[0] = 0.0;
      local_18 = local_14 + *(float *)(iVar2 + 200);
      local_14 = local_14 + *(float *)(iVar2 + 0xcc);
      local_c[2] = 0.0;
      local_10 = fVar1 * 0.7 + *(float *)(iVar2 + 0xd0);
      *(float *)((int)this + 0xcc) = local_18;
      *(float *)((int)this + 0xd0) = local_14;
      *(float *)((int)this + 0xd4) = local_10;
      *(float *)((int)this + 0xd8) = *(float *)(iVar2 + 200);
      *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(iVar2 + 0xcc);
      *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(iVar2 + 0xd0);
      fVar4 = FUN_0097f880(*(void **)((int)this + 0x148),local_c,(undefined4 *)0x0);
      *(float *)((int)this + 0x1d8) = (float)fVar4;
    }
    if ((*(uint *)((int)this + 0x50) & 0xc0000) == 0) {
      *(void **)(*(int *)((int)this + 0x148) + 0xd0) = this;
    }
    if (DAT_0105be88 == '\0') {
      *(void **)(*(int *)((int)this + 0x148) + 0xd0) = this;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00978610 @ 00978610 ////

uint __thiscall
FUN_00978610(void *this,undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  uint in_EAX;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  float local_80;
  float local_7c;
  float local_78 [10];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [10];
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)((int)this + 0x4d) == '\0') {
    return in_EAX & 0xffffff00;
  }
  local_3c = *(undefined4 *)((int)this + 0xb4);
  local_38 = *(undefined4 *)((int)this + 0xb8);
  local_34 = *(undefined4 *)((int)this + 0xbc);
  fVar1 = *(float *)((int)this + 0xc0);
  uVar5 = 0;
  uVar3 = *(undefined4 *)((int)this + 0x148);
  fVar4 = FUN_004012c0(0.0);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  FUN_00978350(this,&local_48,(float)fVar4,uVar5);
  uVar2 = FUN_00976de0(this,0,-1,param_3,param_4);
  if ((char)uVar2 != '\0') {
    local_30[9] = (float)*param_1;
    local_8 = param_1[1];
    local_4 = param_1[2];
    local_30[7] = 0.0;
    local_30[6] = 0.0;
    local_30[5] = 0.0;
    local_30[3] = 0.0;
    local_30[2] = 0.0;
    local_30[1] = 0.0;
    local_30[8] = 1.0;
    local_30[4] = 1.0;
    local_30[0] = 1.0;
    FUN_004d5390(local_30,*param_2);
    local_78[9] = *param_3;
    local_50 = param_3[1];
    local_4c = param_3[2];
    local_78[7] = 0.0;
    local_78[6] = 0.0;
    local_78[5] = 0.0;
    local_78[3] = 0.0;
    local_78[2] = 0.0;
    local_78[1] = 0.0;
    local_78[8] = 1.0;
    local_78[4] = 1.0;
    local_78[0] = 1.0;
    FUN_004d5390(local_78,*param_4);
    FUN_009aa670(local_78);
    FUN_009aa830(local_78,local_30);
    *param_3 = local_78[9];
    param_3[1] = local_50;
    param_3[2] = local_4c;
    local_7c = 0.0;
    local_80 = 0.0;
    FUN_009ab850(local_78,&local_7c,&local_80,param_4);
  }
  uVar3 = FUN_00978350(this,&local_3c,fVar1,uVar3);
  return CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar2);
}


//// FUNCTION FUN_00978830 @ 00978830 ////

/* WARNING: Removing unreachable block (ram,0x009788fe) */

void __fastcall FUN_00978830(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  LONG LVar4;
  uint uVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf54eb;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)*param_1;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    LVar4 = InterlockedDecrement(puVar1 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar3;
    *param_1 = 0;
  }
  *param_1 = 0;
  for (uVar5 = 0; (iVar2 = param_1[9], iVar2 != 0 && (uVar5 < (uint)(param_1[10] - iVar2 >> 2)));
      uVar5 = uVar5 + 1) {
    puVar1 = *(undefined4 **)(iVar2 + uVar5 * 4);
    if ((puVar1 != (undefined4 *)0x0) &&
       (LVar4 = InterlockedDecrement(puVar1 + 4), uVar3 = DAT_0105b588, DAT_0105b588 = uVar3,
       LVar4 == 0)) {
      DAT_0105b588 = 1;
      (**(code **)*puVar1)(1);
      DAT_0105b588 = uVar3;
    }
  }
  if ((void *)param_1[9] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00978930 @ 00978930 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00978930(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int local_30;
  uint local_2c;
  undefined4 uStack_28;
  float afStack_24 [9];
  
  if (param_2 != 0) {
    FUN_009a88e0();
    DAT_0105bec4 = 1;
    local_30 = 0;
    local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)((int)this + 0x52)) & 0xffffff01;
    FUN_00976050(this,1);
    uVar4 = param_1;
    if ((char)param_1 == '\0') {
      uVar3 = FUN_00a28000();
      DAT_0105becc = (undefined4)(1000 / (ulonglong)uVar3);
      uVar4 = DAT_0105becc;
    }
    if (*(int *)((int)this + 0x1c8) == 0) {
      bVar1 = true;
      *(undefined4 *)((int)this + 0x1c8) = DAT_0105becc;
    }
    else {
      uVar5 = FUN_00acd42c();
      local_30 = *(int *)((int)this + 0x1c8) + (int)uVar5;
      *(int *)((int)this + 0x1c8) = local_30;
      bVar1 = (*(int *)((int)this + 0x1c4) + 1) * 100 <= local_30;
      if (bVar1) {
        *(int *)((int)this + 0x1c4) = *(int *)((int)this + 0x1c4) + 1;
      }
      local_30 = local_30 + *(int *)((int)this + 0x1c4) * -100;
      if (local_30 < 0) {
        local_30 = 0;
      }
      else if (99 < local_30) {
        local_30 = 99;
      }
    }
    _DAT_0105be84 = (float)local_30 * 0.01;
    DAT_01050b60 = local_30;
    if (bVar1) {
      FUN_009a1570();
      DAT_01050b50 = DAT_01050b50 + 1;
      FUN_00977c80(this);
    }
    FUN_009a56b0(0,'\x01');
    uStack_28 = 0;
    afStack_24[0] = 0.0;
    afStack_24[1] = 0.0;
    afStack_24[2] = 0.0;
    afStack_24[3] = 0.0;
    afStack_24[4] = 0.0;
    afStack_24[5] = 0.0;
    afStack_24[7] = 0.0;
    afStack_24[8] = 0.0;
    afStack_24[6] = 1.2217306;
    uVar3 = FUN_00971f40(this,&uStack_28);
    if ((char)uVar3 != '\0') {
      FUN_00a28070(afStack_24,afStack_24 + 3);
      FUN_00a25410((int)&uStack_28);
    }
    FUN_009a1410();
    if ((char)param_1 == '\0') {
      DAT_0105becc = uVar4;
    }
    Model_UpdateVisuals(this);
    FUN_00a2bd10(param_2);
    FUN_009a1420();
    FUN_00a2bba0((int)this);
    uVar2 = DAT_010b9548;
    DAT_010b9548 = 1;
    FUN_009a1460();
    DAT_010b9548 = uVar2;
    FUN_00a25410((int)&uStack_28);
    DAT_0105bec4 = 0;
    FUN_00976050(this,local_2c);
  }
  return;
}


//// FUNCTION FUN_00978b30 @ 00978b30 ////

void __fastcall FUN_00978b30(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x198) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x198) >> 2;
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x198) + local_4 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(puVar1 + 4);
        uVar2 = DAT_0105b588;
        if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_0105b588 = uVar2;
        *(undefined4 *)(*(int *)(param_1 + 0x198) + local_4 * 4) = 0;
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  if (*(void **)(param_1 + 0x198) == (void *)0x0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x198));
}


//// FUNCTION FUN_00978c10 @ 00978c10 ////

void __fastcall FUN_00978c10(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar2 = *(undefined4 **)(param_1 + 0x14); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x1c))();
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


//// FUNCTION FUN_00978c50 @ 00978c50 ////

void __fastcall FUN_00978c50(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  for (puVar2 = *(undefined4 **)(param_1 + 0x14); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x18))();
  }
  return;
}


//// FUNCTION FUN_00978c70 @ 00978c70 ////

void __thiscall FUN_00978c70(void *this,char param_1)

{
  if (*(void **)((int)this + 600) != (void *)0x0) {
    FUN_009fa970(*(void **)((int)this + 600),this);
  }
  FUN_00978c10((int)this);
  if (param_1 != '\0') {
    FUN_00a44a60((int *)((int)this + 0x248));
    FUN_00a04f80((int)this);
    return;
  }
  if (*(void **)((int)this + 600) != (void *)0x0) {
    FUN_009fe620(*(void **)((int)this + 600),this);
  }
  FUN_00a04f80((int)this);
  return;
}


//// FUNCTION FUN_00978cd0 @ 00978cd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00978cd0(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  undefined4 *puVar5;
  void *this_00;
  uint in_EAX;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iStack_c;
  
  if ((*(uint *)((int)this + 0x50) & 0x80000) != 0) {
    return in_EAX & 0xffffff00;
  }
  iVar11 = 0;
  if (*(char *)((int)this + 0x4d) != '\0') {
    do {
      iVar8 = *(int *)(*(int *)((int)this + 0x5c) + iVar11 * 4);
      if ((iVar8 != 0) && (pvVar7 = *(void **)(iVar8 + 0x40), pvVar7 != (void *)0x0)) {
        FUN_00980750(pvVar7,0,1.0,-1);
        if (((*(int *)((int)pvVar7 + 0x78) != 0) &&
            ((iVar8 = *(int *)(*(int *)((int)pvVar7 + 0x78) + 0x178), iVar8 != 0 &&
             (piVar2 = (int *)(iVar8 + 0x124), piVar2 != (int *)0x0)))) &&
           (((*(byte *)(iVar8 + 0x138) & 1) != 0 ||
            ((*(int *)(iVar8 + 0x134) != 0 && (*piVar2 != -1)))))) {
          FUN_00a30330(piVar2);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*(byte *)((int)this + 0x4d));
  }
  FUN_009b00b0((int)this);
  FUN_00974ee0((void *)((int)this + 0x25c),(byte *)0x0,0);
  pcVar4 = *(char **)((int)this + 0x1f8);
  piVar2 = (int *)((int)this + 0x1f8);
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    if (*(uint *)((int)this + 0x200) < 5) {
      if (0x14 < *(uint *)((int)this + 0x200)) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar2);
      }
      *(undefined4 *)((int)this + 0x200) = 0x20;
      pvVar7 = _malloc(0x20);
      *piVar2 = (int)pvVar7;
    }
    _strncpy((char *)*piVar2,"none",4);
    *(undefined4 *)((int)this + 0x1fc) = 4;
    *(undefined1 *)(*piVar2 + 4) = 0;
  }
  else {
    pcVar6 = pcVar4;
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    FUN_004015d0(piVar2,pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  }
  FUN_00974ee0((void *)((int)this + 0x25c),(byte *)*piVar2,0);
  DAT_01050b3c = 1;
  if (*(void **)((int)this + 600) != (void *)0x0) {
    FUN_009fa970(*(void **)((int)this + 600),this);
  }
  puVar5 = *(undefined4 **)((int)this + 0x18);
  for (puVar12 = *(undefined4 **)((int)this + 0x14); puVar12 != puVar5; puVar12 = puVar12 + 1) {
    (**(code **)(*(int *)*puVar12 + 0x1c))();
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (*(void **)((int)this + 600) != (void *)0x0) {
    FUN_009fe620(*(void **)((int)this + 600),this);
  }
  FUN_00a04f80((int)this);
  DAT_01050b3c = 0;
  uVar13 = (param_2 & 1) << 8;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x800000;
  *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) & 0xfffffeff | uVar13;
  DAT_01050b3d = 1;
  for (uVar10 = 0;
      (*(int *)((int)this + 0x3c) != 0 &&
      (uVar10 < (uint)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2)));
      uVar10 = uVar10 + 1) {
    puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x3c) + uVar10 * 4) + 0x50);
    *puVar1 = *puVar1 | 0x800000;
    iVar11 = *(int *)(*(int *)((int)this + 0x3c) + uVar10 * 4);
    *(uint *)(iVar11 + 0x54) = *(uint *)(iVar11 + 0x54) & 0xfffffeff | uVar13;
  }
  FUN_00976370(this,0);
  iVar11 = DAT_01050b60;
  DAT_01050b60 = 0;
  _DAT_0105be84 = 0.0;
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  FUN_00977150(this);
  DAT_01050b3d = 0;
  uVar10 = *(uint *)((int)this + 0x8c);
  while (uVar10 < param_1) {
    FUN_00977c80(this);
    FUN_00a054a0();
    uVar10 = *(uint *)((int)this + 0x8c);
  }
  if (*(int *)((int)this + 0x3c) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
  }
  param_1 = 0;
  if (0 < iVar8 + 1) {
    iStack_c = -4;
    do {
      pvVar7 = this;
      if (iStack_c < 1) {
LAB_00978f7f:
        if ((pvVar7 != (void *)0x0) && (param_2 = 0, *(char *)((int)pvVar7 + 0x4d) != '\0')) {
          do {
            piVar2 = *(int **)(*(int *)((int)pvVar7 + 0x5c) + param_2 * 4);
            (**(code **)(*piVar2 + 0x30))();
            if ((piVar2[0x10] != 0) &&
               ((this_00 = *(void **)(piVar2[0x10] + 0x78), this_00 != (void *)0x0 &&
                ((int *)piVar2[6] != (int *)0x0)))) {
              iVar9 = (**(code **)(*(int *)piVar2[6] + 0x24))();
              FUN_00a03180(this_00,iVar9);
            }
            param_2 = param_2 + 1;
          } while (param_2 < *(byte *)((int)pvVar7 + 0x4d));
        }
      }
      else if (-1 < (int)(param_1 - 1)) {
        if (*(int *)((int)this + 0x3c) == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2;
        }
        if ((int)(param_1 - 1) < iVar9) {
          pvVar7 = *(void **)(*(int *)((int)this + 0x3c) + iStack_c);
          goto LAB_00978f7f;
        }
      }
      param_1 = param_1 + 1;
      iStack_c = iStack_c + 4;
    } while ((int)param_1 < iVar8 + 1);
  }
  _DAT_0105be84 = (float)iVar11 * 0.01;
  DAT_01050b60 = iVar11;
  *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) & 0xff7fffff;
  for (uVar10 = 0;
      (iVar11 = *(int *)((int)this + 0x3c), iVar11 != 0 &&
      (uVar10 < (uint)(*(int *)((int)this + 0x40) - iVar11 >> 2))); uVar10 = uVar10 + 1) {
    puVar1 = (uint *)(*(int *)(iVar11 + uVar10 * 4) + 0x50);
    *puVar1 = *puVar1 & 0xff7fffff;
  }
  iVar11 = 0;
  if (*(char *)((int)this + 0x4d) != '\0') {
    do {
      iVar8 = *(int *)(*(int *)((int)this + 0x5c) + iVar11 * 4);
      if (((iVar8 != 0) && (iVar8 = *(int *)(iVar8 + 0x40), iVar8 != 0)) &&
         (pvVar7 = *(void **)(iVar8 + 0x78), pvVar7 != (void *)0x0)) {
        FUN_00a01be0(pvVar7,(undefined4 *)0x0,0,0,(void *)0x0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(uint)*(byte *)((int)this + 0x4d));
  }
  iVar11 = 0;
  if (*(int *)((int)this + 0x148) != 0) {
    iVar11 = *(int *)(*(int *)((int)this + 0x148) + 0xf8);
    if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(iVar11 + 4));
    }
    *(undefined4 *)(*(int *)((int)this + 0x148) + 0xf8) = 0;
    iVar11 = *(int *)((int)this + 0x148);
    if (*(void **)(iVar11 + 0x78) != (void *)0x0) {
      iVar11 = FUN_00a019d0(*(void **)(iVar11 + 0x78),(void *)0x0,0xffffffff);
    }
  }
  return CONCAT31((int3)((uint)iVar11 >> 8),1);
}


//// FUNCTION FUN_009791a0 @ 009791a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_009791a0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) | 0x400000;
  for (uVar6 = 0;
      (iVar2 = *(int *)((int)param_1 + 0x3c), iVar2 != 0 &&
      (uVar6 < (uint)(*(int *)((int)param_1 + 0x40) - iVar2 >> 2))); uVar6 = uVar6 + 1) {
    puVar1 = (uint *)(*(int *)(iVar2 + uVar6 * 4) + 0x50);
    *puVar1 = *puVar1 | 0x400000;
  }
  FUN_00976370(param_1,0);
  iVar2 = DAT_01050b60;
  DAT_01050b60 = 0;
  _DAT_0105be84 = 0.0;
  FUN_00977150(param_1);
  fVar9 = FUN_009722e0((int)param_1,(byte *)"ai_ended_by_user");
  if ((DAT_01050b98 != 0) && (DAT_01050b9c - DAT_01050b98 >> 2 != 0)) {
    iVar8 = 0;
    iVar7 = DAT_01050b98;
    while( true ) {
      if (iVar7 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = DAT_01050b9c - iVar7 >> 2;
      }
      if (iVar4 <= iVar8) break;
      iVar4 = **(int **)(iVar7 + iVar8 * 4);
      if ((-1 < iVar4) && (iVar4 < (int)(uint)*(byte *)((int)param_1 + 0x4e))) {
        FUN_00974c20((void *)(*(int *)((int)param_1 + 0xc4) + iVar4 * 0x18),
                     *(float *)(*(int *)(iVar7 + iVar8 * 4) + 4),param_1);
        iVar7 = DAT_01050b98;
      }
      iVar8 = iVar8 + 1;
    }
  }
  bVar3 = false;
  do {
    if (5999 < *(uint *)((int)param_1 + 0x8c)) break;
    uVar5 = FUN_00975fd0((int)param_1);
    if ((char)uVar5 != '\0') {
      bVar3 = true;
    }
    FUN_00977c80(param_1);
  } while (!bVar3);
  uVar5 = *(undefined4 *)((int)param_1 + 0x8c);
  *(uint *)((int)param_1 + 0x50) = *(uint *)((int)param_1 + 0x50) & 0xffbfffff;
  for (uVar6 = 0;
      (iVar7 = *(int *)((int)param_1 + 0x3c), iVar7 != 0 &&
      (uVar6 < (uint)(*(int *)((int)param_1 + 0x40) - iVar7 >> 2))); uVar6 = uVar6 + 1) {
    puVar1 = (uint *)(*(int *)(iVar7 + uVar6 * 4) + 0x50);
    *puVar1 = *puVar1 & 0xffbfffff;
  }
  FUN_009757a0(param_1,(byte *)"ai_ended_by_user",(float)fVar9,0);
  FUN_00978cd0(param_1,0,1);
  DAT_01050b60 = iVar2;
  _DAT_0105be84 = (float)iVar2 * 0.01;
  return uVar5;
}


//// FUNCTION FUN_00979320 @ 00979320 ////

void __thiscall FUN_00979320(void *this,byte *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  void *unaff_retaddr;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  do {
    pbVar5 = (byte *)0x0;
    uVar3 = 0;
    if (*(char *)((int)this + 0x4d) != '\0') {
      do {
        iVar2 = *(int *)(*(int *)((int)this + 0x5c) + uVar3 * 4);
        if (iVar2 != 0) {
          if ((*(int *)(iVar2 + 0x40) == 0) && (*(int *)(iVar2 + 8) != 0)) {
            (**(code **)(**(int **)(*(int *)((int)this + 0x5c) + uVar3 * 4) + 0x28))(0);
          }
          iVar2 = *(int *)(*(int *)((int)this + 0x5c) + uVar3 * 4);
          if ((*(uint *)(iVar2 + 0x48) & 0x4000000) != 0) {
            if ((pbVar5 == param_1) && (*(int *)(iVar2 + 0x40) != 0)) {
              iVar2 = 6;
              bVar7 = true;
              pcVar4 = param_2;
              pcVar6 = "blank";
              goto code_r0x009793e9;
            }
            pbVar5 = pbVar5 + 1;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(byte *)((int)this + 0x4d));
    }
    iVar2 = *(int *)((int)this + 0x3c);
    uVar3 = 0;
    while( true ) {
      if (iVar2 == 0) {
        return;
      }
      if ((uint)(*(int *)((int)this + 0x40) - iVar2 >> 2) <= uVar3) {
        return;
      }
      iVar1 = FUN_00976230(*(int *)(*(int *)((int)this + 0x3c) + uVar3 * 4));
      if ((int)param_1 < (int)(pbVar5 + iVar1)) break;
      uVar3 = uVar3 + 1;
      pbVar5 = pbVar5 + iVar1;
    }
    this = *(void **)(*(int *)((int)this + 0x3c) + uVar3 * 4);
    param_1 = param_1 + -(int)pbVar5;
  } while( true );
  while( true ) {
    iVar2 = iVar2 + -1;
    bVar7 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
    if (!bVar7) break;
code_r0x009793e9:
    if (iVar2 == 0) break;
  }
  param_1 = (byte *)0x0;
  if (!bVar7) {
    iVar2 = 10;
    bVar7 = true;
    pcVar4 = param_2;
    pcVar6 = "blank.msh";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *pcVar4 == *pcVar6;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      param_1 = FUN_009de1d0(param_2,1);
    }
  }
  (**(code **)(**(int **)(*(int *)(*(int *)((int)this + 0x5c) + uVar3 * 4) + 0x40) + 0x18))(param_1)
  ;
  if (unaff_retaddr != (void *)0x0) {
    FUN_009dc300((int)unaff_retaddr);
    FUN_009de3b0(unaff_retaddr);
  }
  FUN_00978cd0(this,*(uint *)((int)this + 0x8c),1);
  return;
}


//// FUNCTION FUN_00979460 @ 00979460 ////

void FUN_00979460(void)

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
  puStack_8 = &LAB_00cf5508;
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


//// FUNCTION FUN_009794d0 @ 009794d0 ////

void FUN_009794d0(void)

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
  puStack_8 = &LAB_00cf5528;
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


//// FUNCTION FUN_00979540 @ 00979540 ////

void FUN_00979540(void)

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
  puStack_8 = &LAB_00cf5548;
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


//// FUNCTION FUN_009795b0 @ 009795b0 ////

void FUN_009795b0(void)

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
  puStack_8 = &LAB_00cf5568;
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


//// FUNCTION FUN_00979760 @ 00979760 ////

void __thiscall FUN_00979760(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00979460();
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
      _Dst = FUN_00976a80((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00975640(param_1,iVar5,param_1 + param_2);
      FUN_00976a80(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00972bb0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00975640(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00974390(param_1,(int)pvVar3,iVar5);
    FUN_00972bb0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00979940 @ 00979940 ////

void __thiscall FUN_00979940(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009794d0();
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
      _Dst = FUN_00976ab0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00975670(param_1,iVar5,param_1 + param_2);
      FUN_00976ab0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00972bd0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00975670(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009743c0(param_1,(int)pvVar3,iVar5);
    FUN_00972bd0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00979b20 @ 00979b20 ////

void __thiscall FUN_00979b20(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00979540();
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
      _Dst = FUN_00976ae0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009756a0(param_1,iVar5,param_1 + param_2);
      FUN_00976ae0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00972c10(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009756a0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009743f0(param_1,(int)pvVar3,iVar5);
    FUN_00972c10(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00979d00 @ 00979d00 ////

void __thiscall FUN_00979d00(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009795b0();
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
      _Dst = FUN_00976b40((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009756d0(param_1,iVar5,param_1 + param_2);
      FUN_00976b40(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00972c50(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009756d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00974430(param_1,(int)pvVar3,iVar5);
    FUN_00972c50(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0097a060 @ 0097a060 ////

undefined4 * __fastcall FUN_0097a060(undefined4 *param_1)

{
  uint *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cf55e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 1;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x28] = 0x3f800000;
  param_1[0x24] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0x3f9c61ab;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x43] = 0x3f9c61ab;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0x3f9c61ab;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x58] = 0;
  param_1[0x5d] = 0;
  param_1[0x57] = 0;
  param_1[0x5c] = 0;
  param_1[0x56] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0x47c35000;
  param_1[0x6a] = 0;
  param_1[0x6c] = param_1[0x6c] & 0xfffffffe;
  param_1[0x6b] = 0;
  puVar1 = param_1 + 0x7a;
  *puVar1 = 0;
  param_1[0x7b] = 0;
  *puVar1 = *puVar1 & 0xfffffffc | 0xc;
  param_1[0x7e] = param_1 + 0x81;
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x14;
  local_4 = 5;
  uStack_3 = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8a] = 0;
  param_1[0x8f] = 0;
  param_1[0x89] = 0;
  param_1[0x8e] = 0;
  param_1[0x88] = 0;
  FUN_00a44a40(param_1 + 0x92);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  _local_4 = CONCAT31(uStack_3,7);
  FUN_00974a40(param_1);
  FUN_00976b90((int)param_1);
  FUN_00976d10(param_1);
  param_1[0x14] = param_1[0x14] | 0x200;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0097a2f0 @ 0097a2f0 ////

undefined4 * __fastcall FUN_0097a2f0(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = DAT_00e67b84;
  uVar2 = FUN_00acd42c();
  param_1[5] = (int)uVar2;
  param_1[3] = (iVar1 - (int)uVar2) / 2;
  uVar2 = FUN_00acd42c();
  param_1[4] = (int)uVar2;
  return param_1;
}


//// FUNCTION FUN_0097a3c0 @ 0097a3c0 ////

void __thiscall FUN_0097a3c0(void *this,undefined4 *param_1)

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
  FUN_00979940(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0097a410 @ 0097a410 ////

void __thiscall FUN_0097a410(void *this,undefined4 *param_1)

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
  FUN_00979b20(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0097a4b0 @ 0097a4b0 ////

/* WARNING: Removing unreachable block (ram,0x0097a576) */
/* WARNING: Removing unreachable block (ram,0x0097a57d) */
/* WARNING: Removing unreachable block (ram,0x0097a588) */
/* WARNING: Removing unreachable block (ram,0x0097a584) */
/* WARNING: Removing unreachable block (ram,0x0097a590) */
/* WARNING: Removing unreachable block (ram,0x0097a594) */
/* WARNING: Removing unreachable block (ram,0x0097a59e) */

void __fastcall FUN_0097a4b0(void *param_1)

{
  void *_Src;
  void *_Dst;
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf5667;
  pvStack_c = ExceptionList;
  local_4 = 7;
  ExceptionList = &pvStack_c;
  if ((*(byte *)((int)param_1 + 0x54) & 1) != 0) {
    iVar5 = 0;
    iVar2 = DAT_01050b78;
    iVar3 = DAT_01050b7c;
    ExceptionList = &pvStack_c;
    while( true ) {
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar3 - iVar2 >> 2;
      }
      if (iVar1 <= iVar5) break;
      _Dst = (void *)(iVar2 + iVar5 * 4);
      if (*(void **)(iVar2 + iVar5 * 4) == param_1) {
        _Src = (void *)((int)_Dst + 4);
        _memmove(_Dst,_Src,(iVar3 - (int)_Src >> 2) << 2);
        iVar3 = DAT_01050b7c + -4;
        iVar2 = DAT_01050b78;
        DAT_01050b7c = iVar3;
      }
      iVar5 = iVar5 + 1;
    }
    *(uint *)((int)param_1 + 0x54) = *(uint *)((int)param_1 + 0x54) & 0xfffffffe;
  }
  FUN_00974d40(param_1);
  FUN_00978b30((int)param_1);
  FUN_009735b0((int)param_1);
  uVar4 = 0;
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    do {
      if ((((*(int *)(*(int *)((int)param_1 + 0x5c) + uVar4 * 4) != 0) && (-1 < (int)uVar4)) &&
          ((int)uVar4 < (int)(uint)*(byte *)((int)param_1 + 0x4d))) &&
         (iVar2 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar4 * 4) + 0x40), iVar2 != 0))
      {
        FUN_00983440(iVar2,0);
        FUN_00a3c020(*(int *)(*(int *)((int)param_1 + 0x5c) + uVar4 * 4));
      }
      _Memory = *(undefined4 **)(*(int *)((int)param_1 + 0x5c) + uVar4 * 4);
      if (_Memory != (undefined4 *)0x0) {
        FUN_00a3c810(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x5c) + uVar4 * 4) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)((int)param_1 + 0x4d));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 0x5c));
}


//// FUNCTION Scene_InitGlobalAssets @ 0097a970 ////

void Scene_InitGlobalAssets(void)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  uint _Count;
  uint _Size;
  int iVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  int *piStack_20c;
  char *local_208;
  undefined4 local_204;
  uint local_200;
  char local_1fc [20];
  char *local_1e8;
  undefined4 local_1e4;
  uint local_1e0;
  char local_1dc [20];
  undefined1 local_1c8 [8];
  char *local_1c0;
  uint local_1bc;
  uint uStack_1b8;
  char *local_1a0 [2];
  uint uStack_198;
  void *local_180 [2];
  uint uStack_178;
  undefined4 auStack_160 [16];
  undefined1 uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  char acStack_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5720;
  local_c = ExceptionList;
  if (DAT_0105be88 == '\0') {
    return;
  }
  local_208 = local_1fc;
  local_1fc[0] = '\0';
  local_204 = 0;
  local_200 = 0x40;
  ExceptionList = &local_c;
  local_208 = _malloc(0x40);
  _strncpy(local_208,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_204 = 0x27;
  local_208[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_1c8,&local_208,0);
  if (0x14 < local_200) {
                    /* WARNING: Subroutine does not return */
    _free(local_208);
  }
  local_1e8 = local_1dc;
  local_1dc[0] = '\0';
  local_1e4 = 0;
  local_1e0 = 0x14;
  _strncpy(local_1e8,"DivX",4);
  local_1e4 = 4;
  local_1e8[4] = '\0';
  local_208 = local_1fc;
  local_1fc[0] = '\0';
  local_204 = 0;
  local_200 = 0x14;
  _strncpy(local_208,"Video Codec",0xb);
  local_204 = 0xb;
  local_208[0xb] = '\0';
  local_4._0_1_ = 4;
  FUN_00a06260(local_1c8,&local_1c0,&local_208,&local_1e8);
  if (0x14 < local_200) {
                    /* WARNING: Subroutine does not return */
    _free(local_208);
  }
  if (0x14 < local_1e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e8);
  }
  local_208 = local_1fc;
  local_1fc[0] = '\0';
  local_204 = 0;
  local_200 = 0x14;
  _strncpy(local_208,"0.7",3);
  local_204 = 3;
  local_208[3] = '\0';
  local_1e8 = local_1dc;
  local_1dc[0] = '\0';
  local_1e4 = 0;
  local_1e0 = 0x14;
  _strncpy(local_1e8,"Avi Quality",0xb);
  local_1e4 = 0xb;
  local_1e8[0xb] = '\0';
  local_4._0_1_ = 9;
  FUN_00a06260(local_1c8,local_1a0,&local_1e8,&local_208);
  if (0x14 < local_1e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e8);
  }
  if (0x14 < local_200) {
                    /* WARNING: Subroutine does not return */
    _free(local_208);
  }
  local_208 = local_1fc;
  local_1fc[0] = '\0';
  local_204 = 0;
  local_200 = 0x14;
  _strncpy(local_208,"2",1);
  local_204 = 1;
  local_208[1] = '\0';
  local_1e8 = local_1dc;
  local_1dc[0] = '\0';
  local_1e4 = 0;
  local_1e0 = 0x14;
  _strncpy(local_1e8,"Avi Res",7);
  local_1e4 = 7;
  local_1e8[7] = '\0';
  local_4._0_1_ = 0xe;
  FUN_00a06260(local_1c8,local_180,&local_1e8,&local_208);
  if (0x14 < local_1e0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e8);
  }
  local_4 = CONCAT31(local_4._1_3_,0x10);
  if (0x14 < local_200) {
                    /* WARNING: Subroutine does not return */
    _free(local_208);
  }
  dVar12 = _atof(local_1a0[0]);
  DAT_01050b48 = (float)dVar12;
  FUN_004015d0(&PTR_DAT_00e66f0c,local_1c0,local_1bc);
  DAT_010b702c = FUN_00433eb0();
  pbVar3 = FUN_009de1d0("dome.msh",1);
  FUN_009dc300((int)pbVar3);
  iVar9 = 0;
  if (0 < *(int *)(pbVar3 + 0x30)) {
    iVar10 = 0;
    do {
      pbVar1 = (byte *)(*(int *)(pbVar3 + 0x34) + 0x13 + iVar10);
      *pbVar1 = *pbVar1 & 0xfe;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar9 < *(int *)(pbVar3 + 0x30));
  }
  (**(code **)(*DAT_010b702c + 0x18))(pbVar3);
  FUN_009de3b0(pbVar3);
  puVar4 = operator_new(0x110);
  puStack_8._0_1_ = 0x12;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_010b7028 = (undefined4 *)0x0;
  }
  else {
    DAT_010b7028 = MeshInstance_Constructor(puVar4);
  }
  puStack_8._0_1_ = 0x10;
  puVar4 = operator_new(0x110);
  puStack_8._0_1_ = 0x13;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_010b7020 = (int *)0x0;
  }
  else {
    DAT_010b7020 = MeshInstance_Constructor(puVar4);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,0x10);
  pbVar3 = FUN_009de1d0("shadaw_fp.msh",1);
  (**(code **)(*DAT_010b7020 + 0x18))(pbVar3);
  *(uint *)(*(int *)(pbVar3 + 0x34) + 0x10) = *(uint *)(*(int *)(pbVar3 + 0x34) + 0x10) & 0xbfffffff
  ;
  *(uint *)(*(int *)(pbVar3 + 0x34) + 0x10) = *(uint *)(*(int *)(pbVar3 + 0x34) + 0x10) & 0x7fffffff
  ;
  FUN_009de3b0(pbVar3);
  FUN_009c89a0(auStack_160);
  local_4 = CONCAT31(local_4._1_3_,0x14);
  uStack_120 = 0;
  FUN_009ca9d0(auStack_160,(char *)&PTR_DAT_00d1e2c0,"Data\\Textures\\Overlays\\",(undefined1 *)0x1)
  ;
  piVar5 = operator_new(0x20);
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = (int)(piVar5 + 3);
    *(undefined1 *)(piVar5 + 3) = 0;
    piVar5[1] = 0;
    piVar5[2] = 0x14;
  }
  piStack_20c = piVar5;
  if ((uint)piVar5[2] < 5) {
    if (0x14 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar5);
    }
    piVar5[2] = 0x20;
    pvVar6 = _malloc(0x20);
    *piVar5 = (int)pvVar6;
  }
  _strncpy((char *)*piVar5,"none",4);
  piVar5[1] = 4;
  *(undefined1 *)(*piVar5 + 4) = 0;
  if ((DAT_01050b88 == 0) ||
     ((uint)(DAT_01050b90 - DAT_01050b88 >> 2) <= (uint)((int)DAT_01050b8c - DAT_01050b88 >> 2))) {
    FUN_00979760(&DAT_01050b84,DAT_01050b8c,1,&piStack_20c);
  }
  else {
    *DAT_01050b8c = piVar5;
    DAT_01050b8c = DAT_01050b8c + 1;
  }
  iVar9 = 0;
  do {
    while( true ) {
      if (iStack_118 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = uStack_114 - iStack_118 >> 2;
      }
      if (iVar10 <= iVar9) {
        local_4 = CONCAT31(local_4._1_3_,0x10);
        FUN_009c8560(auStack_160);
        if (0x14 < uStack_178) {
                    /* WARNING: Subroutine does not return */
          _free(local_180[0]);
        }
        if (uStack_198 < 0x15) {
          if (uStack_1b8 < 0x15) {
            local_4 = 0xffffffff;
            FUN_00a05fe0((int)local_1c8);
            ExceptionList = local_c;
            return;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_1c0);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_1a0[0]);
      }
      pcVar8 = *(char **)(iStack_118 + iVar9 * 4);
      pcVar7 = _strrchr(pcVar8,0x5c);
      if (pcVar7 != (char *)0x0) {
        pcVar8 = pcVar7 + 1;
      }
      _sprintf(acStack_10c,pcVar8);
      FUN_009ac040(acStack_10c);
      pcVar8 = acStack_10c;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if (0xe < (int)pcVar8 - (int)(acStack_10c + 1)) break;
LAB_0097af81:
      iVar9 = iVar9 + 1;
    }
    iVar10 = 8;
    bVar11 = true;
    pcVar8 = (char *)((int)&uStack_114 + ((int)pcVar8 - (int)(acStack_10c + 1)) + 1);
    pcVar7 = "v00.dds";
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar11 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar11);
    if (!bVar11) goto LAB_0097af81;
    piVar5 = operator_new(0x20);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = (int)(piVar5 + 3);
      *(undefined1 *)(piVar5 + 3) = 0;
      piVar5[1] = 0;
      piVar5[2] = 0x14;
    }
    pcVar8 = acStack_10c;
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    _Count = (int)pcVar8 - (int)(acStack_10c + 1);
    piStack_20c = piVar5;
    if ((uint)piVar5[2] <= _Count) {
      if (0x14 < (uint)piVar5[2]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar5);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      piVar5[2] = _Size;
      pvVar6 = _malloc(_Size);
      *piVar5 = (int)pvVar6;
    }
    _strncpy((char *)*piVar5,acStack_10c,_Count);
    piVar5[1] = _Count;
    *(undefined1 *)(_Count + *piVar5) = 0;
    if ((DAT_01050b88 == 0) ||
       ((uint)(DAT_01050b90 - DAT_01050b88 >> 2) <= (uint)((int)DAT_01050b8c - DAT_01050b88 >> 2)))
    {
      FUN_00979760(&DAT_01050b84,DAT_01050b8c,1,&piStack_20c);
      goto LAB_0097af81;
    }
    *DAT_01050b8c = piVar5;
    iVar9 = iVar9 + 1;
    DAT_01050b8c = DAT_01050b8c + 1;
  } while( true );
}


//// FUNCTION FUN_0097b020 @ 0097b020 ////

void * __thiscall FUN_0097b020(void *this,byte param_1)

{
  FUN_0097a4b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0097b040 @ 0097b040 ////

void __fastcall FUN_0097b040(void *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float10 fVar5;
  float *local_4;
  
  if (DAT_01050b98 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)DAT_01050b9c - (int)DAT_01050b98 >> 2;
  }
  if (iVar2 < 1) {
    if (DAT_01050b98 == (undefined4 *)0x0) {
      DAT_01050b98 = (undefined4 *)0x0;
      DAT_01050b9c = (undefined4 *)0x0;
      DAT_01050ba0 = 0;
      fVar4 = 0.0;
      if (*(char *)((int)param_1 + 0x4e) != '\0') {
        do {
          uVar3 = FUN_00972440(param_1,(uint)fVar4);
          if ((char)uVar3 != '\0') {
            fVar5 = FUN_009724f0((int)param_1,fVar4);
            fVar1 = (float)fVar5;
            if (fVar1 != 0.0) {
              local_4 = operator_new(0x10);
              if (local_4 == (float *)0x0) {
                local_4 = (float *)0x0;
              }
              else {
                *local_4 = 0.0;
                local_4[1] = 0.0;
                local_4[2] = 1.0;
                local_4[3] = 1.0;
              }
              *local_4 = fVar4;
              local_4[2] = fVar1;
              local_4[3] = 1.0 / fVar1;
              local_4[1] = (1.0 / fVar1) * 0.5;
              if ((DAT_01050b98 == (undefined4 *)0x0) ||
                 ((uint)(DAT_01050ba0 - (int)DAT_01050b98 >> 2) <=
                  (uint)((int)DAT_01050b9c - (int)DAT_01050b98 >> 2))) {
                FUN_00979d00(&DAT_01050b94,DAT_01050b9c,1,&local_4);
              }
              else {
                *DAT_01050b9c = local_4;
                DAT_01050b9c = DAT_01050b9c + 1;
              }
            }
          }
          fVar4 = (float)((int)fVar4 + 1);
        } while ((int)fVar4 < (int)(uint)*(byte *)((int)param_1 + 0x4e));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_01050b98);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*DAT_01050b98);
}


//// FUNCTION FUN_0097b190 @ 0097b190 ////

int __fastcall FUN_0097b190(void *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0097b040(param_1);
  iVar5 = 0;
  do {
    iVar2 = FUN_009791a0(param_1);
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    if ((0x176e < iVar5) || (DAT_01050b98 == 0)) {
      return iVar5;
    }
    iVar2 = DAT_01050b9c - DAT_01050b98 >> 2;
    if (iVar2 == 0) {
      return iVar5;
    }
    iVar4 = 0;
    while( true ) {
      if (DAT_01050b98 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = DAT_01050b9c - DAT_01050b98 >> 2;
      }
      if (iVar3 <= iVar4) break;
      iVar3 = *(int *)(DAT_01050b98 + iVar4 * 4);
      fVar1 = *(float *)(iVar3 + 4) + *(float *)(iVar3 + 0xc);
      *(float *)(iVar3 + 4) = fVar1;
      if (fVar1 <= 1.0) break;
      if (iVar4 == iVar2 + -1) {
        return iVar5;
      }
      iVar4 = iVar4 + 1;
      *(float *)(iVar3 + 4) = *(float *)(iVar3 + 0xc) * 0.5;
    }
  } while( true );
}


//// FUNCTION FUN_0097b230 @ 0097b230 ////

void __thiscall FUN_0097b230(void *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x180000;
    *(void **)(param_1 + 0x34) = this;
    FUN_00973600(this,param_1);
    FUN_0097a410((void *)((int)this + 0x38),&param_1);
  }
  return;
}


//// FUNCTION FUN_0097b260 @ 0097b260 ////

void __thiscall FUN_0097b260(void *this,int param_1)

{
  void *_Memory;
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStackY_94 [9];
  undefined4 uStackY_70;
  int local_4c;
  int *local_48;
  undefined1 *local_44;
  undefined4 auStack_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00978b30((int)this);
  _Memory = *(void **)((int)this + 400);
  if (_Memory != (void *)0x0) {
    piVar3 = (int *)((int)_Memory + 0x10);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_004eddb0((int)_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)this + 400) = 0;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) &&
     ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50 != 0)) {
    *(int *)((int)this + 400) = param_1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    iVar5 = *(int *)(*(int *)((int)this + 400) + 4);
    if (iVar5 == 0) {
      local_4c = 0;
    }
    else {
      local_4c = (*(int *)(*(int *)((int)this + 400) + 8) - iVar5) / 0x50;
    }
    local_44 = (undefined1 *)CONCAT31(local_44._1_3_,DAT_0105cc5c);
    DAT_0105cc5c = 0;
    local_4 = 0;
    if (0 < local_4c) {
      param_1 = 0;
      do {
        iVar5 = *(int *)(*(int *)((int)this + 400) + 4);
        pbVar2 = FUN_009de1d0(*(char **)(param_1 + iVar5),1);
        piVar3 = FUN_00433eb0();
        local_48 = piVar3;
        (**(code **)(*piVar3 + 0x18))();
        iVar1 = *(int *)(unaff_EBX + 0x148);
        puVar6 = (undefined4 *)(param_1 + 0x20 + iVar5);
        puVar7 = auStack_40;
        for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        if (iVar1 != 0) {
          FUN_009aa830(auStack_40,(float *)(iVar1 + 0x18));
        }
        puVar6 = auStack_40;
        puVar7 = auStackY_94;
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_44 = (undefined1 *)auStackY_94;
        (**(code **)(*piVar3 + 0x24))();
        if (pbVar2 != (byte *)0x0) {
          FUN_009de3b0(pbVar2);
        }
        iVar5 = *(int *)((int)this + 0x198);
        if ((iVar5 == 0) ||
           ((uint)(*(int *)((int)this + 0x1a0) - iVar5 >> 2) <=
            (uint)(*(int *)((int)this + 0x19c) - iVar5 >> 2))) {
          uStackY_70 = 0x97b40b;
          FUN_004688e0((void *)((int)this + 0x194),*(undefined4 **)((int)this + 0x19c),1,&local_48);
        }
        else {
          puVar6 = *(undefined4 **)((int)this + 0x19c);
          *puVar6 = piVar3;
          *(undefined4 **)((int)this + 0x19c) = puVar6 + 1;
        }
        param_1 = param_1 + 0x50;
        local_4c = local_4c + -1;
      } while (local_4c != 0);
    }
    local_4 = 0xffffffff;
    DAT_0105cc5c = local_44._0_1_;
  }
  FUN_009779d0((int)this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0097b500 @ 0097b500 ////

void __fastcall FUN_0097b500(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *local_104;
  char local_100 [256];
  
  uVar5 = 0;
  if ((*(uint *)((int)param_1 + 0x50) & 0xff) != 0) {
    do {
      iVar1 = *(int *)(*(int *)((int)param_1 + 0x6c) + uVar5 * 4);
      if (((*(int *)((int)param_1 + 0x58) == 0) || (iVar1 < 0)) ||
         ((int)(*(uint *)((int)param_1 + 0x4c) & 0xff) <= iVar1)) {
        uVar4 = (iVar1 != -10) - 1 & 0xe66f00;
      }
      else {
        uVar4 = *(uint *)(*(int *)((int)param_1 + 0x58) + iVar1 * 4);
      }
      _sprintf(local_100,"%s.flm",uVar4);
      pvVar3 = FUN_0097c450(local_100,0,(undefined4 *)0x0,1);
      local_104 = pvVar3;
      if (pvVar3 != (void *)0x0) {
        *(uint *)((int)pvVar3 + 0x50) = *(uint *)((int)pvVar3 + 0x50) | 0x80000;
        *(void **)((int)pvVar3 + 0x34) = param_1;
        FUN_00973600(param_1,(int)pvVar3);
        iVar1 = *(int *)((int)param_1 + 0x3c);
        if ((iVar1 == 0) ||
           ((uint)(*(int *)((int)param_1 + 0x44) - iVar1 >> 2) <=
            (uint)(*(int *)((int)param_1 + 0x40) - iVar1 >> 2))) {
          FUN_00979b20((void *)((int)param_1 + 0x38),*(undefined4 **)((int)param_1 + 0x40),1,
                       &local_104);
        }
        else {
          puVar2 = *(undefined4 **)((int)param_1 + 0x40);
          *puVar2 = pvVar3;
          *(undefined4 **)((int)param_1 + 0x40) = puVar2 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (*(uint *)((int)param_1 + 0x50) & 0xff));
  }
  return;
}


//// FUNCTION FUN_0097b600 @ 0097b600 ////

void __thiscall FUN_0097b600(void *this,int param_1)

{
  if (param_1 != 0) {
    FUN_0097a3c0((void *)((int)this + 0x10),&param_1);
  }
  return;
}


//// FUNCTION FUN_0097b6a0 @ 0097b6a0 ////

void __thiscall FUN_0097b6a0(void *this,char *param_1,byte param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  char *pcVar5;
  size_t _Count;
  int iVar6;
  char *pcVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint **ppuVar18;
  undefined4 *puVar19;
  char *pcVar20;
  bool bVar21;
  bool bVar22;
  int *local_16c;
  char local_165;
  uint *local_164;
  char local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  char local_15c;
  undefined1 uStack_15b;
  char cStack_15a;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined2 local_157;
  undefined1 local_155;
  char *local_154;
  uint *local_150 [2];
  uint local_148;
  uint local_144 [8];
  byte local_124;
  byte local_123;
  char local_122;
  byte local_121;
  undefined2 local_120;
  ushort local_11e;
  undefined1 local_11c;
  byte local_11b;
  byte local_11a;
  char local_119;
  undefined4 uStack_118;
  int local_114;
  int local_110;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5794;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00974a40(this);
  FUN_00976b90((int)this);
  FUN_00976d10(this);
  local_160 = '\0';
  local_15f = 0;
  local_15e = 0;
  local_15d = 0;
  *(uint *)((int)this + 0x50) =
       *(uint *)((int)this + 0x50) ^ ((uint)param_2 << 8 ^ *(uint *)((int)this + 0x50)) & 0x100;
  pcVar5 = param_1;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  if ((uint)((int)pcVar5 - (int)(param_1 + 1)) < 4) {
    pcVar5 = param_1;
    do {
      cVar4 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
    _Count = (int)pcVar5 - (int)(param_1 + 1);
  }
  else {
    _Count = 3;
  }
  _strncpy(&local_160,param_1,_Count);
  FUN_009ac040(&local_160);
  iVar6 = _strncmp(&local_160,"ai_",3);
  if (iVar6 == 0) {
    *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x40000;
  }
  iVar6 = _strncmp(&local_160,"_debug",3);
  if (iVar6 == 0) {
    *(uint *)((int)this + 0x50) = *(uint *)((int)this + 0x50) | 0x40000;
  }
  iVar6 = 0x1c;
  bVar21 = true;
  pcVar5 = "015_fall_window_on_fire.flm";
  pcVar7 = param_1;
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar21 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar21);
  if (bVar21) {
LAB_0097b7c3:
    iVar6 = 1;
  }
  else {
    iVar13 = 0x1b;
    iVar6 = 0;
    bVar21 = true;
    pcVar5 = "015_fall_from_building.flm";
    pcVar7 = param_1;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar21 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar21);
    if (bVar21) goto LAB_0097b7c3;
    iVar13 = 0x17;
    bVar21 = true;
    pcVar5 = "015_window_explode.flm";
    pcVar7 = param_1;
    do {
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      bVar21 = *pcVar5 == *pcVar7;
      pcVar5 = pcVar5 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar21);
    if (bVar21) goto LAB_0097b7c3;
  }
  uStack_15b = 0;
  cStack_15a = '\0';
  uStack_158 = 0;
  local_157 = 0;
  local_155 = 0;
  *(uint *)((int)this + 0x54) =
       *(uint *)((int)this + 0x54) ^ (iVar6 << 10 ^ *(uint *)((int)this + 0x54)) & 0x400;
  local_15c = '\0';
  pcVar5 = param_1;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  if ((uint)((int)pcVar5 - (int)(param_1 + 1)) < 4) {
    bVar21 = false;
  }
  else if ((*param_1 < '0') || ('9' < *param_1)) {
    bVar21 = false;
  }
  else if ((param_1[1] < '0') || ('9' < param_1[1])) {
    bVar21 = false;
  }
  else if ((param_1[2] < '0') || ('9' < param_1[2])) {
    bVar21 = false;
  }
  else {
    cStack_15a = param_1[2];
    local_15c = (char)*(undefined2 *)param_1;
    uStack_15b = (undefined1)((ushort)*(undefined2 *)param_1 >> 8);
    bVar21 = true;
  }
  uStack_159 = 0;
  pcVar5 = s_Data_Scene_Interactions_00e66af8;
  do {
    pcVar7 = pcVar5;
    pcVar5 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  local_164 = (uint *)(pcVar7 + -0xe66af8);
  if (local_164 == (uint *)0x0) {
    if (bVar21) {
      pcVar5 = &local_15c;
      goto LAB_0097b88a;
    }
    pcVar5 = param_1;
    do {
      cVar4 = *pcVar5;
      pcVar5[(int)&DAT_0105bed8 - (int)param_1] = cVar4;
      pcVar5 = pcVar5 + 1;
    } while (cVar4 != '\0');
  }
  else if (bVar21) {
    _sprintf(&DAT_0105bed8,"%s\\%s\\%s",s_Data_Scene_Interactions_00e66af8,&local_15c);
  }
  else {
    pcVar5 = s_Data_Scene_Interactions_00e66af8;
LAB_0097b88a:
    _sprintf(&DAT_0105bed8,"%s\\%s",pcVar5,param_1);
  }
  if (((*(uint *)((int)this + 0x50) & 0x40000) == 0) || (bVar21 = true, DAT_0105c2e1 != '\0')) {
    bVar21 = false;
  }
  uVar17 = 0;
  if ((!bVar21) || (cVar4 = FUN_00a22f20(), cVar4 == '\0')) {
    local_150[0] = local_144;
    local_144[0] = local_144[0] & 0xffffff00;
    local_150[1] = (uint *)0x0;
    local_148 = 0x14;
    pcVar5 = &DAT_0105bed8;
    do {
      pcVar7 = pcVar5;
      pcVar5 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar5 = pcVar7 + -0x105bed8;
    if ((char *)0x13 < pcVar5) {
      local_148 = (uint)(pcVar7 + -0x105beb8) & 0xffffffe0;
      local_150[0] = _malloc(local_148);
    }
    _strncpy((char *)local_150[0],&DAT_0105bed8,(size_t)pcVar5);
    *(char *)((int)local_150[0] + (int)pcVar5) = '\0';
    local_4 = 0;
    local_150[1] = (uint *)pcVar5;
    uVar17 = FUN_009d3720(local_150);
    local_4 = 0xffffffff;
    if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
      _free(local_150[0]);
    }
    if (uVar17 == 0) {
      _sprintf(local_10c,"Missing scene: %s",param_1);
      ExceptionList = local_c;
      return;
    }
  }
  if (bVar21) {
    pcVar7 = (char *)FUN_00a23030(&DAT_0105bed8);
    local_154 = pcVar7;
  }
  else {
    pcVar7 = operator_new(uVar17);
    local_150[0] = local_144;
    local_144[0] = local_144[0] & 0xffffff00;
    local_150[1] = (uint *)0x0;
    local_148 = 0x14;
    pcVar5 = &DAT_0105bed8;
    do {
      pcVar20 = pcVar5;
      pcVar5 = pcVar20 + 1;
    } while (*pcVar20 != '\0');
    pcVar5 = pcVar20 + -0x105bed8;
    local_154 = pcVar7;
    if ((char *)0x13 < pcVar5) {
      local_148 = (uint)(pcVar20 + -0x105beb8) & 0xffffffe0;
      local_150[0] = _malloc(local_148);
    }
    _strncpy((char *)local_150[0],&DAT_0105bed8,(size_t)pcVar5);
    *(char *)((int)local_150[0] + (int)pcVar5) = '\0';
    local_4 = 1;
    local_150[1] = (uint *)pcVar5;
    FUN_009d3ca0(local_150,(undefined4 *)pcVar7,uVar17,(undefined1 *)0x0);
    local_4 = 0xffffffff;
    if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
      _free(local_150[0]);
    }
  }
  local_165 = '\0';
  if ((((*pcVar7 == 'z') && (pcVar7[1] == 'c')) && (pcVar7[2] == 'm')) && (pcVar7[3] == 'p')) {
    local_154 = (char *)FUN_00afb9d0((int)(pcVar7 + 4));
                    /* WARNING: Subroutine does not return */
    _free((void *)(bVar21 - 1 & (uint)pcVar7));
  }
  ppuVar18 = local_150;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppuVar18 = (uint *)0x0;
    ppuVar18 = ppuVar18 + 1;
  }
  iVar6 = FUN_00971460(local_150,(undefined4 *)pcVar7);
  DAT_00e68f68 = (char *)local_150[1];
  pcVar7 = pcVar7 + iVar6;
  if (local_119 != '\0') {
    *(char *)((int)this + 0x50) = local_119;
    pvVar8 = operator_new((*(uint *)((int)this + 0x50) & 0xff) << 2);
    *(void **)((int)this + 0x6c) = pvVar8;
    uVar17 = 0;
    if ((*(uint *)((int)this + 0x50) & 0xff) != 0) {
      do {
        *(undefined4 *)(*(int *)((int)this + 0x6c) + uVar17 * 4) = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        uVar17 = uVar17 + 1;
      } while (uVar17 < (*(uint *)((int)this + 0x50) & 0xff));
    }
  }
  uVar17 = local_148;
  piVar11 = (int *)(pcVar7 + ((uint)local_124 + (uint)local_123) * 4);
  *(uint *)((int)this + 0x54) =
       *(uint *)((int)this + 0x54) ^ ((uint)(local_11b >> 1) ^ *(uint *)((int)this + 0x54)) & 0xc;
  piVar15 = piVar11;
  if (local_122 != '\0') {
    *(char *)((int)this + 0x4c) = local_122;
    piVar9 = operator_new(local_148);
    uVar14 = uVar17 >> 2;
    *(int **)((int)this + 0x58) = piVar9;
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      *piVar9 = *piVar15;
      piVar15 = piVar15 + 1;
      piVar9 = piVar9 + 1;
    }
    for (uVar14 = uVar17 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)piVar9 = (char)*piVar15;
      piVar15 = (int *)((int)piVar15 + 1);
      piVar9 = (int *)((int)piVar9 + 1);
    }
    piVar15 = (int *)((int)piVar11 + uVar17);
    uVar17 = 0;
    if ((*(uint *)((int)this + 0x4c) & 0xff) != 0) {
      do {
        *(int *)(*(int *)((int)this + 0x58) + uVar17 * 4) =
             piVar11[uVar17] + *(int *)((int)this + 0x58);
        uVar17 = uVar17 + 1;
      } while (uVar17 < (*(uint *)((int)this + 0x4c) & 0xff));
    }
  }
  *(byte *)((int)this + 0x4e) = local_121;
  if (local_121 == 0) {
    *(undefined4 *)((int)this + 0xc4) = 0;
  }
  else {
    uVar17 = (uint)local_121;
    local_164 = operator_new(uVar17 * 0x18 + 4);
    local_4 = 2;
    if (local_164 == (uint *)0x0) {
      local_4 = 0xffffffff;
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    else {
      puVar12 = local_164 + 1;
      *local_164 = uVar17;
      _eh_vector_constructor_iterator_(puVar12,0x18,uVar17,FUN_00975720,FUN_00971560);
      local_4 = 0xffffffff;
      *(uint **)((int)this + 0xc4) = puVar12;
    }
  }
  *(undefined1 *)((int)this + 0x4f) = local_11c;
  *(undefined2 *)((int)this + 0x4a) = local_120;
  FUN_00971880(this,(uint)local_11a,(uint)local_11e);
  bVar1 = *(byte *)((int)this + 0x4f);
  if (bVar1 == 0) {
    *(undefined4 *)((int)this + 100) = 0;
  }
  else {
    puVar10 = operator_new((uint)bVar1 * 8);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      iVar6 = bVar1 - 1;
      if (-1 < iVar6) {
        puVar19 = puVar10;
        for (uVar17 = iVar6 * 8 + 8U >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar19 = 0;
          puVar19 = (undefined4 *)((int)puVar19 + 1);
        }
      }
    }
    *(undefined4 **)((int)this + 100) = puVar10;
    local_16c = (int *)0x0;
    if (*(char *)((int)this + 0x4f) != '\0') {
      pcVar5 = (char *)((int)piVar15 + 5);
      do {
        piVar11 = (int *)(*(int *)((int)this + 100) + (int)local_16c * 8);
        *piVar11 = *piVar15;
        *(char *)(piVar11 + 1) = pcVar5[-1];
        *(char *)((int)piVar11 + 5) = *pcVar5;
        *(undefined2 *)((int)piVar11 + 6) = *(undefined2 *)(pcVar5 + 1);
        local_164 = (uint *)((int)local_16c * 8 + *(int *)((int)this + 100));
        uVar17 = *local_164;
        if (((*(int *)((int)this + 0x58) == 0) || ((int)uVar17 < 0)) ||
           ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)uVar17)) {
          pcVar7 = (char *)((uVar17 != 0xfffffff6) - 1 & 0xe66f00);
        }
        else {
          pcVar7 = *(char **)(*(int *)((int)this + 0x58) + uVar17 * 4);
        }
        iVar6 = 0xc;
        bVar22 = true;
        pcVar20 = "dummy_extra";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar22 = *pcVar7 == *pcVar20;
          pcVar7 = pcVar7 + 1;
          pcVar20 = pcVar20 + 1;
        } while (bVar22);
        if (bVar22) {
          *(char *)((int)local_164 + 5) = '\x01';
        }
        piVar15 = piVar15 + 2;
        pcVar5 = pcVar5 + 8;
        local_16c = (int *)((int)local_16c + 1);
      } while (local_16c < (int *)(uint)*(byte *)((int)this + 0x4f));
    }
  }
  if (*(char *)((int)this + 0x4e) != '\0') {
    local_16c = (int *)0x0;
    do {
      iVar6 = *piVar15;
      piVar15 = piVar15 + 1;
      if (iVar6 != 0) {
        iVar16 = (int)local_16c * 0x18;
        *(int **)(iVar16 + 0x14 + *(int *)((int)this + 0xc4)) = local_16c;
        *(int *)(iVar16 + 0xc + *(int *)((int)this + 0xc4)) = iVar6;
        pvVar8 = operator_new(iVar6 * 4);
        *(void **)(iVar16 + 0x10 + *(int *)((int)this + 0xc4)) = pvVar8;
        iVar13 = 0;
        if (0 < iVar6) {
          do {
            iVar2 = *piVar15;
            piVar15 = piVar15 + 1;
            *(int *)(*(int *)(iVar16 + 0x10 + *(int *)((int)this + 0xc4)) + iVar13 * 4) = iVar2;
            iVar13 = iVar13 + 1;
          } while (iVar13 < iVar6);
        }
      }
      if (((*(int *)((int)this + 0x58) == 0) || ((int)local_16c < 0)) ||
         ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)local_16c)) {
        pcVar5 = (char *)((local_16c != (int *)0xfffffff6) - 1 & 0xe66f00);
      }
      else {
        pcVar5 = *(char **)(*(int *)((int)this + 0x58) + (int)local_16c * 4);
      }
      iVar6 = 0xd;
      bVar22 = true;
      pcVar7 = "extras_leave";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar22 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar22);
      if (bVar22) {
        puVar12 = (uint *)(*(int *)((int)this + 0xc4) + 4 + (int)local_16c * 0x18);
        *puVar12 = *puVar12 | 2;
      }
      local_16c = (int *)((int)local_16c + 1);
    } while (local_16c < (int *)(uint)*(byte *)((int)this + 0x4e));
  }
  if (((*(char *)((int)this + 0x4e) != '\0') && ((local_11b & 2) != 0)) &&
     (uVar17 = 0, *(char *)((int)this + 0x4e) != '\0')) {
    iVar6 = 0;
    do {
      *(int *)(iVar6 + 8 + *(int *)((int)this + 0xc4)) = *piVar15;
      piVar15 = piVar15 + 1;
      uVar17 = uVar17 + 1;
      iVar6 = iVar6 + 0x18;
    } while (uVar17 < *(byte *)((int)this + 0x4e));
  }
  puVar3 = (uint *)((uint)local_11e + (uint)local_11a);
  puVar12 = local_164;
  while (local_164 = puVar3, local_164 != (uint *)0x0) {
    local_114 = *piVar15;
    iVar6 = piVar15[1];
    local_16c = (int *)0x0;
    local_110 = iVar6;
    FUN_00971950(&local_114,&local_16c,piVar15);
    piVar11 = local_16c;
    if ((local_16c == (int *)0x0) || (cVar4 = (**(code **)(*local_16c + 4))(), cVar4 == '\0')) {
      *(int **)(*(int *)((int)this + 0x5c) + (uint)*(byte *)((int)this + 0x4d) * 4) = piVar11;
      piVar11[3] = (uint)*(byte *)((int)this + 0x4d);
      piVar11[0x11] = (int)this;
      *(char *)((int)this + 0x4d) = *(char *)((int)this + 0x4d) + '\x01';
    }
    else {
      *(int **)(*(int *)((int)this + 0x60) + (*(uint *)((int)this + 0x48) & 0xffff) * 4) = piVar11;
      piVar11[7] = (int)this;
      *(short *)((int)this + 0x48) = *(short *)((int)this + 0x48) + 1;
    }
    piVar15 = (int *)((int)piVar15 + iVar6);
    puVar12 = (uint *)((int)local_164 + -1);
    puVar3 = puVar12;
  }
  uVar17 = 0;
  local_164 = puVar12;
  if ((*(uint *)((int)this + 0x48) & 0xffff) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x60) + uVar17 * 4) + 0xc))();
      uVar17 = uVar17 + 1;
    } while (uVar17 < (*(uint *)((int)this + 0x48) & 0xffff));
  }
  uVar17 = 0;
  if (*(char *)((int)this + 0x4d) != '\0') {
    do {
      (**(code **)(**(int **)(*(int *)((int)this + 0x5c) + uVar17 * 4) + 0xc))();
      *(uint *)(*(int *)(*(int *)((int)this + 0x5c) + uVar17 * 4) + 0xc) = uVar17;
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(byte *)((int)this + 0x4d));
  }
  FUN_009757a0(this,(byte *)"endshoot",1.0,0);
  *(undefined4 *)((int)this + 0x18c) = uStack_118;
  FUN_0097b500(this);
  iVar6 = *(int *)((int)this + 0x18c);
  if (((*(int *)((int)this + 0x58) == 0) || (iVar6 < 0)) ||
     ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= iVar6)) {
    if (iVar6 == -10) {
      pcVar5 = s_look_at_00e66f00;
      goto LAB_0097bfa3;
    }
  }
  else {
    pcVar5 = *(char **)(*(int *)((int)this + 0x58) + iVar6 * 4);
    if (pcVar5 != (char *)0x0) {
LAB_0097bfa3:
      iVar6 = FUN_009ac120(pcVar5,"trailer");
      if (iVar6 != -1) {
        *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 2;
      }
    }
  }
  iVar6 = *(int *)((int)this + 0x18c);
  if (((*(int *)((int)this + 0x58) == 0) || (iVar6 < 0)) ||
     ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= iVar6)) {
    if (iVar6 == -10) {
      pcVar5 = s_look_at_00e66f00;
      goto LAB_0097bff0;
    }
  }
  else {
    pcVar5 = *(char **)(*(int *)((int)this + 0x58) + iVar6 * 4);
    if (pcVar5 != (char *)0x0) {
LAB_0097bff0:
      iVar6 = FUN_009ac120(pcVar5,"[user camera]");
      if (iVar6 != -1) {
        *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 0x10;
      }
    }
  }
  if (((*(int *)((int)this + 0x58) == 0) || ((int)local_144[0] < 0)) ||
     ((int)(*(uint *)((int)this + 0x4c) & 0xff) <= (int)local_144[0])) {
    if (local_144[0] != 0xfffffff6) goto LAB_0097c136;
    pcVar5 = s_look_at_00e66f00;
  }
  else {
    pcVar5 = *(char **)(*(int *)((int)this + 0x58) + local_144[0] * 4);
    if (pcVar5 == (char *)0x0) goto LAB_0097c136;
  }
  if (((*pcVar5 != '\0') && ((*(uint *)((int)this + 0x50) & 0x100) == 0)) && (DAT_010b956c == '\0'))
  {
    puVar12 = FUN_0097c450(pcVar5,0,(undefined4 *)0x0,0);
    uVar17 = 0;
    while (((*(int *)((int)this + 0x3c) != 0 &&
            (uVar17 < (uint)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2))) &&
           ((iVar6 = *(int *)(*(int *)((int)this + 0x3c) + uVar17 * 4), *(int *)(iVar6 + 0x34) == 0
            || ((*(uint *)(iVar6 + 0x50) & 0x100) != 0))))) {
      uVar17 = uVar17 + 1;
    }
    local_164 = puVar12;
    if (puVar12 != (uint *)0x0) {
      puVar12[0x14] = puVar12[0x14] | 0x180000;
      puVar12[0xd] = (uint)this;
      FUN_00973600(this,(int)puVar12);
      iVar6 = *(int *)((int)this + 0x3c);
      if ((iVar6 == 0) ||
         ((uint)(*(int *)((int)this + 0x44) - iVar6 >> 2) <=
          (uint)(*(int *)((int)this + 0x40) - iVar6 >> 2))) {
        FUN_00979b20((void *)((int)this + 0x38),*(undefined4 **)((int)this + 0x40),1,&local_164);
      }
      else {
        puVar10 = *(undefined4 **)((int)this + 0x40);
        *puVar10 = puVar12;
        *(undefined4 **)((int)this + 0x40) = puVar10 + 1;
      }
    }
  }
LAB_0097c136:
  if ((bVar21) && (local_165 == '\0')) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_154);
}


//// FUNCTION FUN_0097c170 @ 0097c170 ////

void * __thiscall FUN_0097c170(void *this,char *param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cf5807;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xa0) = 0x3f800000;
  *(undefined4 *)((int)this + 0x90) = 0x3f800000;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0x3f9c61ab;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0x3f9c61ab;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x134) = 0x3f9c61ab;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0x47c35000;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(uint *)((int)this + 0x1b0) = *(uint *)((int)this + 0x1b0) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  puVar1 = (uint *)((int)this + 0x1e8);
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *puVar1 = *puVar1 & 0xfffffffc | 0xc;
  *(undefined1 **)((int)this + 0x1f8) = (undefined1 *)((int)this + 0x204);
  *(undefined1 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0x14;
  local_4 = 5;
  uStack_3 = 0;
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  FUN_00a44a40((undefined4 *)((int)this + 0x248));
  *(undefined4 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  _local_4 = CONCAT31(uStack_3,7);
  FUN_0097b6a0(this,param_1,param_2);
  FUN_00976620((int)this);
  if (param_2 == 0) {
    uVar2 = 0;
    if (*(char *)((int)this + 0x4d) != '\0') {
      piVar4 = *(int **)((int)this + 0x5c);
      do {
        if ((*piVar4 != 0) && (*(int *)(*piVar4 + 8) == 7)) {
          *(uint *)((int)this + 500) = uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 < *(byte *)((int)this + 0x4d));
    }
  }
  else {
    iVar3 = 0;
    if (*(char *)((int)this + 0x4d) != '\0') {
      do {
        puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0x5c) + iVar3 * 4) + 0x48);
        *puVar1 = *puVar1 & 0xfeffffff;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)((int)this + 0x4d));
    }
  }
  *(undefined1 *)((int)this + 4) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0097c450 @ 0097c450 ////

void * __cdecl FUN_0097c450(char *param_1,int param_2,undefined4 *param_3,byte param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  void *this;
  void *pvVar6;
  int iVar7;
  bool bVar8;
  void *local_3c;
  char *local_38;
  char local_34;
  undefined1 uStack_33;
  char cStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined2 local_2f;
  undefined1 local_2d;
  char *local_2c;
  char *local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf583b;
  local_c = ExceptionList;
  uStack_33 = 0;
  cStack_32 = '\0';
  uStack_30 = 0;
  local_2f = 0;
  local_2d = 0;
  local_34 = '\0';
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(param_1 + 1)) < 4) {
    bVar2 = false;
  }
  else if ((*param_1 < '0') || ('9' < *param_1)) {
    bVar2 = false;
  }
  else if ((param_1[1] < '0') || ('9' < param_1[1])) {
    bVar2 = false;
  }
  else if ((param_1[2] < '0') || ('9' < param_1[2])) {
    bVar2 = false;
  }
  else {
    cStack_32 = param_1[2];
    local_34 = (char)*(undefined2 *)param_1;
    uStack_33 = (undefined1)((ushort)*(undefined2 *)param_1 >> 8);
    bVar2 = true;
  }
  uStack_31 = 0;
  pcVar3 = s_Data_Scene_Interactions_00e66af8;
  do {
    local_38 = pcVar3;
    pcVar3 = local_38 + 1;
  } while (*local_38 != '\0');
  local_38 = local_38 + -0xe66af8;
  if (local_38 == (char *)0x0) {
    if (bVar2) {
      pcVar3 = &local_34;
      goto LAB_0097c53b;
    }
    pcVar3 = param_1;
    ExceptionList = &local_c;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)&DAT_0105bed8 - (int)param_1] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else if (bVar2) {
    ExceptionList = &local_c;
    _sprintf(&DAT_0105bed8,"%s\\%s\\%s",s_Data_Scene_Interactions_00e66af8,&local_34);
  }
  else {
    pcVar3 = s_Data_Scene_Interactions_00e66af8;
LAB_0097c53b:
    ExceptionList = &local_c;
    _sprintf(&DAT_0105bed8,"%s\\%s",pcVar3,param_1);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = (char *)0x0;
  local_24 = 0x14;
  pcVar3 = &DAT_0105bed8;
  do {
    pcVar5 = pcVar3;
    pcVar3 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  pcVar3 = pcVar5 + -0x105bed8;
  if ((char *)0x13 < pcVar3) {
    local_24 = (uint)(pcVar5 + -0x105beb8) & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,&DAT_0105bed8,(size_t)pcVar3);
  local_2c[(int)pcVar3] = '\0';
  local_4 = 0;
  local_28 = pcVar3;
  uVar4 = FUN_009d3720(&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (uVar4 == 0) {
    iVar7 = 9;
    bVar8 = true;
    pcVar3 = "None.flm";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar8 = *param_1 == *pcVar3;
      param_1 = param_1 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar8);
    if ((bVar8) || (bVar2)) {
      ExceptionList = local_c;
      return (void *)0x0;
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = (char *)0x0;
    local_24 = 0x14;
    FUN_004073f0(&local_2c,"Missing flm file:",0x11);
    pcVar3 = &DAT_0105bed8;
    do {
      pcVar5 = pcVar3;
      pcVar3 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    FUN_004073f0(&local_2c,&DAT_0105bed8,(size_t)(pcVar5 + -0x105bed8));
    FUN_004073f0(&local_2c," Using blank scene instead",0x1a);
    param_1 = "ai_donothing.flm";
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_38 = (char *)CONCAT31(local_38._1_3_,DAT_0105cc5c);
  DAT_0105cc5c = 0;
  local_4 = 1;
  local_3c = operator_new(0x274);
  local_4._0_1_ = 2;
  if (local_3c == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = FUN_0097c170(local_3c,param_1,param_4);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  local_3c = this;
  if (param_4 == 0) {
    iVar7 = FUN_009763f0((int)this);
    if (((iVar7 == 0) && (param_2 != 0)) && (DAT_010b956c == '\0')) {
      pvVar6 = FUN_0097c450((char *)param_2,0,(undefined4 *)0x0,0);
      FUN_0097b230(this,(int)pvVar6);
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x1e8) = *param_3;
    *(undefined4 *)((int)this + 0x1ec) = param_3[1];
  }
  FUN_00a44dd0((void *)((int)this + 0x248),(int)this);
  if ((*(byte *)((int)this + 0x54) & 8) != 0) {
    *(uint *)((int)this + 0x1e8) = *(uint *)((int)this + 0x1e8) | 2;
  }
  if ((*(byte *)((int)this + 0x54) & 4) != 0) {
    *(uint *)((int)this + 0x1e8) = *(uint *)((int)this + 0x1e8) | 1;
  }
  for (uVar4 = 0;
      (iVar7 = *(int *)((int)this + 0x3c), iVar7 != 0 &&
      (uVar4 < (uint)(*(int *)((int)this + 0x40) - iVar7 >> 2))); uVar4 = uVar4 + 1) {
    iVar7 = *(int *)(iVar7 + uVar4 * 4);
    *(undefined4 *)(iVar7 + 0x1e8) = *(undefined4 *)((int)this + 0x1e8);
    *(undefined4 *)(iVar7 + 0x1ec) = *(undefined4 *)((int)this + 0x1ec);
  }
  if (DAT_01050c91 == '\0') {
    if (param_4 != 0) goto LAB_0097c85a;
    *(uint *)((int)this + 0x54) = *(uint *)((int)this + 0x54) | 1;
    if ((DAT_01050b78 == 0) ||
       ((uint)(DAT_01050b80 - DAT_01050b78 >> 2) <= (uint)((int)DAT_01050b7c - DAT_01050b78 >> 2)))
    {
      FUN_00979b20(&DAT_01050b74,DAT_01050b7c,1,&local_3c);
    }
    else {
      *DAT_01050b7c = this;
      DAT_01050b7c = DAT_01050b7c + 1;
    }
  }
  else if (param_4 != 0) goto LAB_0097c85a;
  local_3c = (void *)0x3f800000;
  if ((*(byte *)((int)this + 0x1e8) & 2) == 0) {
    local_3c = (void *)0x0;
  }
  FUN_009757a0(this,(byte *)"ai_crane",(float)local_3c,0);
  local_3c = (void *)0x3f800000;
  if ((*(byte *)((int)this + 0x1e8) & 1) == 0) {
    local_3c = (void *)0x0;
  }
  FUN_009757a0(this,(byte *)"ai_dolly",(float)local_3c,0);
LAB_0097c85a:
  DAT_0105cc5c = local_38._0_1_;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0097c880 @ 0097c880 ////

void __cdecl FUN_0097c880(char *param_1,int param_2,undefined4 *param_3,byte param_4)

{
  undefined1 uVar1;
  
  uVar1 = DAT_01050c91;
  DAT_01050c91 = 1;
  FUN_0097c450(param_1,param_2,param_3,param_4);
  DAT_01050c91 = uVar1;
  return;
}


//// FUNCTION FUN_0097c900 @ 0097c900 ////

int __fastcall FUN_0097c900(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_0097c9b0 @ 0097c9b0 ////

int __fastcall FUN_0097c9b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_0097ca90 @ 0097ca90 ////

void __cdecl FUN_0097ca90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_0097caf0 @ 0097caf0 ////

void __cdecl FUN_0097caf0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_0097cb40 @ 0097cb40 ////

void __cdecl FUN_0097cb40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
  }
  return;
}


//// FUNCTION FUN_0097cb80 @ 0097cb80 ////

void __cdecl FUN_0097cb80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_0097cbc0 @ 0097cbc0 ////

void __cdecl FUN_0097cbc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -3;
    param_3 = param_3 + -3;
  }
  return;
}


//// FUNCTION FUN_0097ceb0 @ 0097ceb0 ////

void __cdecl FUN_0097ceb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_0097cef0 @ 0097cef0 ////

void __cdecl FUN_0097cef0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_0097cf30 @ 0097cf30 ////

undefined4 * __cdecl FUN_0097cf30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x20 + DAT_01050c08);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*puVar1,puVar1[1]);
  return param_1;
}


//// FUNCTION FUN_0097cff0 @ 0097cff0 ////

void __fastcall FUN_0097cff0(int param_1)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5858;
  iVar6 = *(int *)(param_1 + 8);
  iVar1 = param_1 + 0x14;
  local_3c = 0;
  ppvVar2 = &local_c;
  local_30 = iVar1;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar2, iVar6 != iVar1; iVar6 = *(int *)(iVar6 + 4)) {
    iVar3 = FUN_00ace790(*(int **)(iVar6 + 8),0,&TM::TMBase::RTTI_Type_Descriptor,
                         &MV::MVSaveable::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      local_3c = local_3c + 1;
    }
    ppvVar2 = ExceptionList;
  }
  FUN_0098a3a0(&local_3c);
  if ((local_3c != 0) && (iVar6 = *(int *)(param_1 + 8), iVar6 != iVar1)) {
    do {
      piVar5 = *(int **)(iVar6 + 8);
      pcVar4 = (char *)FUN_00ace790(piVar5,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &MV::MVSaveable::RTTI_Type_Descriptor,0);
      if (pcVar4 != (char *)0x0) {
        iVar1 = *(int *)(iVar6 + 8);
        FUN_00990310(pcVar4,piVar5);
        FUN_0097cf30(local_2c,*(int *)(iVar6 + 0xc));
        local_4 = 0;
        iVar3 = FUN_009f3be0(local_2c[0]);
        for (piVar5 = DAT_01050bf8; piVar5 != DAT_01050bfc; piVar5 = piVar5 + 3) {
          if ((*piVar5 == iVar3) && (piVar5[2] == iVar6 - iVar1)) {
            local_38 = piVar5[1];
            goto LAB_0097d0e7;
          }
        }
        local_38 = 0;
LAB_0097d0e7:
        FUN_0098a3a0(&local_38);
        local_34 = FUN_009f3be0(local_2c[0]);
        FUN_0098a3a0(&local_34);
        local_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
      }
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar6 != local_30);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0097d1b0 @ 0097d1b0 ////

void __cdecl FUN_0097d1b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}


//// FUNCTION FUN_0097d250 @ 0097d250 ////

void __cdecl FUN_0097d250(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}


//// FUNCTION FUN_0097d290 @ 0097d290 ////

void __fastcall FUN_0097d290(int param_1)

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


//// FUNCTION FUN_0097d370 @ 0097d370 ////

void __fastcall FUN_0097d370(int param_1)

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


//// FUNCTION FUN_0097d3a0 @ 0097d3a0 ////

undefined4 * FUN_0097d3a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0097d1b0(param_1,param_2,param_3);
  return param_1 + param_2 * 3;
}


//// FUNCTION FUN_0097d410 @ 0097d410 ////

undefined4 * FUN_0097d410(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0097d250(param_1,param_2,param_3);
  return param_1 + param_2 * 3;
}


//// FUNCTION FUN_0097d440 @ 0097d440 ////

void __fastcall FUN_0097d440(int param_1)

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


//// FUNCTION FUN_0097d470 @ 0097d470 ////

void __fastcall FUN_0097d470(int param_1)

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


//// FUNCTION FUN_0097d4a0 @ 0097d4a0 ////

void __fastcall FUN_0097d4a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 != *(int **)(param_1 + 0x2c)) {
    do {
      iVar5 = piVar6[2];
      iVar2 = piVar6[1];
      iVar3 = FUN_0098b720(*piVar6);
      piVar1 = DAT_01050bf8;
      if (iVar3 != 0) {
        for (; piVar1 != DAT_01050bfc; piVar1 = piVar1 + 3) {
          if ((*piVar1 == iVar5) && (piVar1[1] == iVar2)) {
            iVar5 = piVar1[2];
            goto LAB_0097d4e7;
          }
        }
        iVar5 = 0;
LAB_0097d4e7:
        piVar4 = (int *)(iVar3 + iVar5);
        piVar1 = (int *)(param_1 + 0x14);
        piVar4[1] = (int)piVar1;
        *piVar4 = *piVar1;
        *(int **)(*piVar1 + 4) = piVar4;
        *piVar1 = (int)piVar4;
      }
      piVar6 = piVar6 + 3;
    } while (piVar6 != *(int **)(param_1 + 0x2c));
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


//// FUNCTION FUN_0097d530 @ 0097d530 ////

void FUN_0097d530(void)

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
  puStack_8 = &LAB_00cf5878;
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


//// FUNCTION FUN_0097d640 @ 0097d640 ////

void __thiscall FUN_0097d640(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf5890;
  local_10 = ExceptionList;
  local_20 = *param_3;
  local_1c = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[2];
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x15555555U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_0097d530();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x15555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_0097c900((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0097ceb0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0097d1b0(puVar5,param_2,&local_20);
      FUN_0097ceb0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 3;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0xc) < param_2) {
      FUN_0097ceb0(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_0097d3a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_0097ca90(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0097ceb0(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0097cb40(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_0097ca90(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0097d900 @ 0097d900 ////

void __thiscall FUN_0097d900(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf58a0;
  local_10 = ExceptionList;
  local_20 = *param_3;
  local_1c = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[2];
  local_14 = &stack0xffffffd4;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd4;
    if (0x15555555U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_004062d0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x15555555 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_0097c9b0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_0097cef0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0097d250(puVar5,param_2,&local_20);
      FUN_0097cef0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 3;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0xc) < param_2) {
      FUN_0097cef0(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_0097d410(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_0097caf0(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_0097cef0(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_0097cbc0(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_0097caf0(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0097dbe0 @ 0097dbe0 ////

void __thiscall FUN_0097dbe0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_0097dc23;
    }
  }
  iVar1 = 0;
LAB_0097dc23:
  FUN_0097d640(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_0097dc50 @ 0097dc50 ////

void __thiscall FUN_0097dc50(void *this,uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)((int)this + 8) - iVar4) / 0xc;
  }
  if (param_1 <= uVar3) {
    if (((iVar4 != 0) &&
        (puVar2 = *(undefined4 **)((int)this + 8), param_1 < (uint)(((int)puVar2 - iVar4) / 0xc)))
       && (puVar1 = (undefined4 *)(iVar4 + param_1 * 0xc), puVar1 != puVar2)) {
      uVar5 = FUN_0097cb80(puVar2,puVar2,puVar1);
      *(undefined4 *)((int)this + 8) = uVar5;
    }
    return;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 8) - iVar4) / 0xc;
  }
  FUN_0097d900(this,*(undefined4 **)((int)this + 8),param_1 - iVar4,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_0097dd00 @ 0097dd00 ////

void __thiscall FUN_0097dd00(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0097d1b0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 3;
    return;
  }
  FUN_0097dbe0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0097dda0 @ 0097dda0 ////

int FUN_0097dda0(void)

{
  byte bVar1;
  void **ppvVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  int local_50;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  byte *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf58c0;
  local_c = ExceptionList;
  local_50 = 0;
  piVar6 = DAT_01050c08;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (DAT_01050c08 != DAT_01050c0c) {
    do {
      FUN_0048f010(&stack0x00000004,&local_2c);
      pbVar3 = (byte *)*piVar6;
      pbVar5 = local_2c;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0097de0f:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0097de14;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0097de0f;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0097de14:
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (iVar4 == 0) {
        ExceptionList = local_c;
        return local_50;
      }
      local_50 = local_50 + 1;
      piVar6 = piVar6 + 8;
      ppvVar2 = ExceptionList;
    } while (piVar6 != DAT_01050c0c);
  }
  ExceptionList = ppvVar2;
  FUN_0048f010(&stack0x00000004,&local_2c);
  pbVar3 = local_2c;
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  if (0x13 < local_28) {
    local_44 = local_28 + 0x20 & 0xffffffe0;
    local_4c = _malloc(local_44);
  }
  _strncpy(local_4c,(char *)pbVar3,local_28);
  local_48 = local_28;
  local_4c[local_28] = '\0';
  piVar6 = DAT_01050c0c;
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((DAT_01050c08 == (int *)0x0) ||
     ((uint)(DAT_01050c10 - (int)DAT_01050c08 >> 5) <=
      (uint)((int)DAT_01050c0c - (int)DAT_01050c08 >> 5))) {
    FUN_00439fd0(&DAT_01050c04,DAT_01050c0c,1,&local_4c);
  }
  else {
    FUN_00439ea0(DAT_01050c0c,1,&local_4c);
    DAT_01050c0c = piVar6 + 8;
  }
  if (local_44 < 0x15) {
    if (local_24 < 0x15) {
      ExceptionList = local_c;
      return local_50;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_0097df60 @ 0097df60 ////

void __cdecl FUN_0097df60(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = FUN_009f3be0(param_1);
  iVar2 = FUN_009f3be0(param_2);
  piVar3 = DAT_01050bf8;
  while( true ) {
    if (piVar3 == DAT_01050bfc) {
      local_c = FUN_009f3be0(param_1);
      local_4 = param_3;
      local_8 = FUN_009f3be0(param_2);
      FUN_0097dd00(&DAT_01050bf4,&local_c);
      return;
    }
    if (((*piVar3 == iVar1) && (piVar3[2] == param_3)) && (piVar3[1] == iVar2)) break;
    piVar3 = piVar3 + 3;
  }
  return;
}


//// FUNCTION FUN_0097dff0 @ 0097dff0 ////

void __fastcall FUN_0097dff0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  int local_4;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = (int *)(param_1 + 0x14);
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  *(int **)(param_1 + 8) = piVar1;
  *piVar1 = param_1 + 4;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_8 = 0;
  SLVAR_LoadUint(&local_8);
  FUN_0097dc50((void *)(param_1 + 0x24),local_8);
  uVar3 = 0;
  if (local_8 != 0) {
    iVar4 = 0;
    do {
      SLVAR_LoadUint((undefined4 *)(*(int *)(param_1 + 0x28) + iVar4));
      SLVAR_LoadUint((undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iVar4));
      SLVAR_LoadUint((undefined4 *)(*(int *)(param_1 + 0x28) + 8 + iVar4));
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 < local_8);
  }
  if ((DAT_01050be8 != 0) &&
     ((uint)((int)DAT_01050bec - DAT_01050be8 >> 2) < (uint)(DAT_01050bf0 - DAT_01050be8 >> 2))) {
    *DAT_01050bec = param_1;
    DAT_01050bec = DAT_01050bec + 1;
    return;
  }
  local_4 = param_1;
  FUN_00463ff0(&DAT_01050be4,DAT_01050bec,1,&local_4);
  return;
}


//// FUNCTION FUN_0097e180 @ 0097e180 ////

undefined4 * __cdecl FUN_0097e180(float *param_1,float param_2,int param_3)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf58db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(100);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00a45970(this,param_1,param_2,param_3);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0097e1f0 @ 0097e1f0 ////

void * __thiscall FUN_0097e1f0(void *this,byte param_1)

{
  FUN_00a45da0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0097e210 @ 0097e210 ////

void * __thiscall FUN_0097e210(void *this,byte param_1)

{
  FUN_00a01ff0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0097e280 @ 0097e280 ////

void __fastcall FUN_0097e280(int *param_1)

{
  if (*param_1 != 0) {
    FUN_009a1480(&DAT_0105c2e8,(undefined4 *)(*param_1 + 0x18),'\x01');
  }
  return;
}


//// FUNCTION FUN_0097e2b0 @ 0097e2b0 ////

void __fastcall FUN_0097e2b0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf58fb;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x78) == 0) {
    ExceptionList = &local_c;
    this = operator_new(0x17c);
    local_4 = 0;
    if (this != (void *)0x0) {
      puVar1 = FUN_00a01f70(this,param_1);
      *(undefined4 **)(param_1 + 0x78) = puVar1;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0097e320 @ 0097e320 ////

void FUN_0097e320(void)

{
  return;
}


//// FUNCTION FUN_0097e330 @ 0097e330 ////

void __thiscall FUN_0097e330(void *this,byte param_1)

{
  *(uint *)((int)this + 0x9c) =
       *(uint *)((int)this + 0x9c) ^ ((uint)param_1 << 5 ^ *(uint *)((int)this + 0x9c)) & 0x20;
  return;
}


//// FUNCTION FUN_0097e350 @ 0097e350 ////

undefined4 __thiscall FUN_0097e350(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  
  pvVar3 = *(void **)((int)this + 0xf4);
  while (pvVar2 = pvVar3, pvVar2 != (void *)0x0) {
    this = pvVar2;
    pvVar3 = *(void **)((int)pvVar2 + 0xf4);
  }
  piVar1 = *(int **)((int)this + 0x8c);
  iVar4 = 0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (iVar4 == param_1) break;
    piVar1 = (int *)piVar1[1];
    iVar4 = iVar4 + 1;
  }
  if ((undefined4 *)*piVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*piVar1;
}


//// FUNCTION FUN_0097e3a0 @ 0097e3a0 ////

undefined4 * __thiscall FUN_0097e3a0(void *this,byte param_1)

{
  FUN_00a31550(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0097e3c0 @ 0097e3c0 ////

int __thiscall FUN_0097e3c0(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint3 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)((int)this + 0xf8);
  uVar2 = (uint3)((uint)piVar1 >> 8);
  if ((((piVar1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 < *piVar1)) &&
     (*(char *)(param_1 + piVar1[2]) == '\0')) {
    puVar4 = (undefined4 *)(piVar1[1] + param_1 * 0x30);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_0097e410 @ 0097e410 ////

void __thiscall FUN_0097e410(void *this,byte param_1)

{
  *(uint *)((int)this + 0x9c) =
       *(uint *)((int)this + 0x9c) ^ ((uint)param_1 << 9 ^ *(uint *)((int)this + 0x9c)) & 0x200;
  return;
}


//// FUNCTION FUN_0097e430 @ 0097e430 ////

void __thiscall FUN_0097e430(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xb8) = param_1;
  return;
}


//// FUNCTION FUN_0097e470 @ 0097e470 ////

void __fastcall FUN_0097e470(int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 8) & 0xff) != 0) {
    do {
      pvVar1 = *(void **)(*(int *)(param_1 + 4) + uVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_0099b400(pvVar1);
        *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (*(uint *)(param_1 + 8) & 0xff));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0097e4d0 @ 0097e4d0 ////

void __fastcall FUN_0097e4d0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_009de3b0((void *)*param_1);
    *param_1 = 0;
  }
  FUN_0097e470((int)param_1);
  return;
}


//// FUNCTION FUN_0097e4f0 @ 0097e4f0 ////

void __fastcall FUN_0097e4f0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_009de3b0((void *)*param_1);
    *param_1 = 0;
  }
  FUN_0097e470((int)param_1);
  return;
}


//// FUNCTION FUN_0097e510 @ 0097e510 ////

float10 __fastcall FUN_0097e510(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc4);
}


//// FUNCTION FUN_0097e520 @ 0097e520 ////

undefined4 __thiscall FUN_0097e520(void *this,byte *param_1,char param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar3 = param_1;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  puVar2 = *(undefined4 **)((int)this + 0x8c);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_2 == '\0') {
      pbVar5 = *(byte **)*puVar2;
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0097e5aa:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0097e5af;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0097e5aa;
        pbVar5 = pbVar5 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0097e5af:
      if (iVar4 == 0) {
        FUN_009dc300(*(int *)*puVar2);
        return *puVar2;
      }
    }
    else {
      iVar4 = _strncmp(*(char **)*puVar2,(char *)param_1,
                       (size_t)(pbVar3 + (-2 - (int)(param_1 + 1))));
      if (iVar4 == 0) {
        FUN_009dc300(*(int *)*puVar2);
        return *puVar2;
      }
    }
    puVar2 = (undefined4 *)puVar2[1];
  } while( true );
}


//// FUNCTION FUN_0097e5e0 @ 0097e5e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0097e5e0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0097e350(param_1,0);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xe4) & 0x1000) != 0)) {
    uVar2 = FUN_009db1e0(iVar1);
    if ((char)uVar2 != '\0') {
      DAT_0105ef78 = 1;
      DAT_01050c48 = param_1;
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)((int)param_1 + 0x18),'\x01');
      DAT_0105eb40 = 0;
      _DAT_0105eb3c = 0;
      DAT_0105eb48 = iVar1;
      FUN_00a46cf0((int *)**(undefined4 **)(iVar1 + 0x2c));
      DAT_0105eb48 = 0;
      DAT_01050c48 = (void *)0x0;
      DAT_0105ef78 = 0;
    }
  }
  return;
}


//// FUNCTION FUN_0097e660 @ 0097e660 ////

void __fastcall FUN_0097e660(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1[0x27];
  uVar5 = uVar1 & 0xffffdfff;
  param_1[0x27] = uVar5;
  uVar4 = DAT_0105eae8;
  param_1[0x27] = uVar1 & 0xffffdeff;
  uVar2 = CONCAT11(DAT_0105eae8,(char)(uVar5 >> 8));
  DAT_0105eae8 = 1;
  LH_ApplyMeshMaterial(DAT_010b7050);
  DAT_01058f0c = 1;
  uVar1 = param_1[0x27];
  param_1[0x27] = param_1[0x27] & 0xfffffdff;
  uVar3 = DAT_01050c3d;
  DAT_01050c3d = 1;
  (**(code **)(*param_1 + 8))();
  DAT_01050c3d = uVar3;
  param_1[0x27] =
       ((uint)((byte)(uVar1 >> 9) & 1) << 1 | uVar2 & 1) << 8 | param_1[0x27] & 0xfffffcffU;
  DAT_0105eae8 = uVar4;
  DAT_01058f0c = 0;
  return;
}


//// FUNCTION FUN_0097e730 @ 0097e730 ////

void __thiscall FUN_0097e730(void *this,int param_1,char param_2)

{
  byte bVar1;
  
  if ((0 < param_1) && (param_1 < 0x11)) {
    bVar1 = (char)param_1 - 1;
    if (param_2 != '\0') {
      *(ushort *)((int)this + 0x98) = *(ushort *)((int)this + 0x98) | (ushort)(1 << (bVar1 & 0x1f));
      return;
    }
    *(ushort *)((int)this + 0x98) = *(ushort *)((int)this + 0x98) & ~(ushort)(1 << (bVar1 & 0x1f));
  }
  return;
}


//// FUNCTION FUN_0097e770 @ 0097e770 ////

undefined4 __fastcall FUN_0097e770(void *param_1)

{
  char *_Str1;
  int iVar1;
  
  _Str1 = (char *)FUN_0097e350(param_1,0);
  if (_Str1 != (char *)0x0) {
    iVar1 = _strncmp(_Str1,"cos_m_",6);
    if (iVar1 != 0) {
      iVar1 = _strncmp(_Str1,"cos_f_",6);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_0097e7c0 @ 0097e7c0 ////

char * __thiscall FUN_0097e7c0(void *this,char *param_1,undefined4 *param_2,int *param_3)

{
  char *pcVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  pcVar1 = param_1;
  if (param_1 != (char *)0x0) {
    pvVar3 = (void *)FUN_0097e350(this,0);
    piVar2 = param_3;
    if ((pvVar3 == (void *)0x0) || ((*(uint *)((int)pvVar3 + 0xe4) & 0x20000000) == 0)) {
      if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
        puVar5 = *(undefined4 **)((int)this + 0x88);
      }
      else {
        puVar5 = *(undefined4 **)(*param_3 + 4);
      }
      if (param_3 != (int *)0x0) {
        *param_3 = (int)puVar5;
      }
      while( true ) {
        if (puVar5 == (undefined4 *)0x0) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = 0;
          }
          return (char *)0x0;
        }
        if ((((void *)*puVar5 != (void *)0x0) &&
            (pvVar3 = (void *)FUN_0097e350((void *)*puVar5,0), pvVar3 != (void *)0x0)) &&
           (uVar4 = FUN_009d9c10(pvVar3,pcVar1,&param_1), (char)uVar4 != '\0')) break;
        puVar5 = (undefined4 *)puVar5[1];
        if (piVar2 != (int *)0x0) {
          *piVar2 = (int)puVar5;
        }
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *puVar5;
      }
      return param_1;
    }
    uVar4 = FUN_009d9c10(pvVar3,pcVar1,&param_1);
    if ((char)uVar4 != '\0') {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = this;
      }
      return param_1;
    }
  }
  return (char *)0x0;
}


//// FUNCTION FUN_0097e890 @ 0097e890 ////

undefined4 __fastcall FUN_0097e890(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (((int *)*piVar1 != (int *)0x0) && (*(int *)(*(int *)*piVar1 + 0x40) != 0)) break;
    piVar1 = (int *)piVar1[1];
  }
  return *(undefined4 *)(*(int *)*piVar1 + 0x40);
}


//// FUNCTION FUN_0097e8f0 @ 0097e8f0 ////

void __fastcall FUN_0097e8f0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = *(undefined4 **)(param_1 + 0x8c);
  bVar2 = true;
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffefffff;
  bVar3 = true;
  if (puVar5 != (undefined4 *)0x0) {
    do {
      iVar1 = *(int *)*puVar5;
      if ((*(byte *)(iVar1 + 0xe4) & 0x40) == 0) {
        bVar3 = false;
      }
      if (bVar2) {
        puVar6 = (undefined4 *)(iVar1 + 200);
        puVar7 = (undefined4 *)(param_1 + 0xd4);
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      else {
        FUN_00a47ec0((void *)(param_1 + 0xd4),(float *)(iVar1 + 200));
      }
      puVar5 = (undefined4 *)puVar5[1];
      bVar2 = false;
    } while (puVar5 != (undefined4 *)0x0);
    if (!bVar3) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 0x100000;
  }
  return;
}


//// FUNCTION FUN_0097e990 @ 0097e990 ////

int __fastcall FUN_0097e990(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fVar1 = -1.0;
  iVar3 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0x8c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    if (fVar1 < *(float *)(*(int *)*puVar2 + 0xe0)) {
      iVar3 = *(int *)*puVar2;
      fVar1 = *(float *)(iVar3 + 0xe0);
    }
  }
  return iVar3;
}


//// FUNCTION FUN_0097e9d0 @ 0097e9d0 ////

undefined4 __fastcall FUN_0097e9d0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0097e350(param_1,0);
  if (iVar1 != 0) {
    FUN_009dc300(iVar1);
    if (*(undefined4 **)(iVar1 + 0x70) != (undefined4 *)0x0) {
      return **(undefined4 **)(iVar1 + 0x70);
    }
  }
  return 0;
}


//// FUNCTION MeshRoomList_GetRoomByIndex @ 0097ea00 ////

int __thiscall MeshRoomList_GetRoomByIndex(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_0097e350(this,0);
  if (iVar2 != 0) {
    FUN_009dc300(iVar2);
    piVar1 = *(int **)(iVar2 + 0x70);
    if (((piVar1 != (int *)0x0) && (-1 < param_1)) && (param_1 < *piVar1)) {
      return param_1 * 0x90 + piVar1[1];
    }
  }
  return 0;
}


//// FUNCTION FUN_0097ea60 @ 0097ea60 ////

void __fastcall FUN_0097ea60(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_0105c2e1 == '\0') {
    iVar1 = FUN_0097e350(param_1,0);
    if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe4) & 0x40) != 0)) && (*(int *)(iVar1 + 0x68) != 0))
    {
      puVar2 = FUN_00a46040(param_1);
      *(undefined4 **)((int)param_1 + 0x104) = puVar2;
    }
  }
  return;
}


//// FUNCTION FUN_0097eaa0 @ 0097eaa0 ////

bool __fastcall FUN_0097eaa0(int param_1)

{
  return (bool)('\x01' - (0x800 < (*(uint *)(param_1 + 0x9c) & 0x1c00)));
}


//// FUNCTION FUN_0097eac0 @ 0097eac0 ////

void __thiscall FUN_0097eac0(void *this,int param_1)

{
  int *this_00;
  
  if (((*(uint *)((int)this + 0x9c) & 0x20) != 0) &&
     ((*(uint *)((int)this + 0x9c) & 0x80800000) == 0)) {
    this_00 = FUN_0099f680('\x01',this);
    if (this_00 != (int *)0x0) {
      FUN_009a0760(this_00,*(int *)((int)this + 0xb4),this,param_1,DAT_0105be8c);
    }
  }
  return;
}


//// FUNCTION FUN_0097eb40 @ 0097eb40 ////

void __thiscall FUN_0097eb40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return;
}


//// FUNCTION FUN_0097eb80 @ 0097eb80 ////

void __thiscall FUN_0097eb80(void *this,float param_1)

{
  *(float *)this = param_1 * *(float *)this;
  *(float *)((int)this + 4) = param_1 * *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1 * *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = param_1 * *(float *)((int)this + 0xc);
  *(float *)((int)this + 0x10) = param_1 * *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = param_1 * *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = param_1 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = param_1 * *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x20) = param_1 * *(float *)((int)this + 0x20);
  return;
}


//// FUNCTION FUN_0097ec60 @ 0097ec60 ////

ushort __fastcall FUN_0097ec60(float *param_1)

{
  float fVar1;
  ushort uVar2;
  
  fVar1 = param_1[1] * param_1[1] + (*param_1 - 1.0) * (*param_1 - 1.0) + param_1[2] * param_1[2];
  uVar2 = (ushort)(fVar1 < 1e-05) << 8 | (ushort)NAN(fVar1) << 10 | (ushort)(fVar1 == 1e-05) << 0xe;
  if (fVar1 < 1e-05 || (fVar1 == 1e-05) != 0) {
    fVar1 = (param_1[4] - 1.0) * (param_1[4] - 1.0) +
            param_1[3] * param_1[3] + param_1[5] * param_1[5];
    uVar2 = (ushort)(fVar1 < 1e-05) << 8 | (ushort)NAN(fVar1) << 10 |
            (ushort)(fVar1 == 1e-05) << 0xe;
    if (fVar1 < 1e-05 || (fVar1 == 1e-05) != 0) {
      fVar1 = param_1[7] * param_1[7] +
              param_1[6] * param_1[6] + (param_1[8] - 1.0) * (param_1[8] - 1.0);
      uVar2 = (ushort)(fVar1 < 1e-05) << 8 | (ushort)NAN(fVar1) << 10 |
              (ushort)(fVar1 == 1e-05) << 0xe;
      if (fVar1 < 1e-05 || (fVar1 == 1e-05) != 0) {
        fVar1 = param_1[0xb] * param_1[0xb] + param_1[10] * param_1[10] + param_1[9] * param_1[9];
        uVar2 = (ushort)(fVar1 < 1e-05) << 8 | (ushort)NAN(fVar1) << 10 |
                (ushort)(fVar1 == 1e-05) << 0xe;
        if (fVar1 < 1e-05 || (fVar1 == 1e-05) != 0) {
          return CONCAT11((char)(uVar2 >> 8),1);
        }
      }
    }
  }
  return uVar2;
}


//// FUNCTION FUN_0097ed90 @ 0097ed90 ////

uint * __fastcall FUN_0097ed90(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = 1 << ((byte)iVar1 & 0x1f);
    if ((uVar2 & *param_1) != 0 || ((int)uVar2 >> 0x1f & param_1[1]) != 0) {
      *param_1 = ~uVar2 & *param_1;
      param_1[1] = (int)~uVar2 >> 0x1f & param_1[1];
      return param_1 + iVar1 * 3 + 2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40);
  return (uint *)0x0;
}


//// FUNCTION FUN_0097ee30 @ 0097ee30 ////

void FUN_0097ee30(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf591b;
  local_c = ExceptionList;
  for (puVar2 = DAT_010bb290; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[0xc2]) {
    ExceptionList = &local_c;
    if (*puVar2 != 0 || puVar2[1] != 0) goto LAB_0097ee8a;
  }
  ExceptionList = &local_c;
  puVar1 = operator_new(0x310);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = FUN_00a48090(puVar1);
  }
LAB_0097ee8a:
  FUN_0097ed90(puVar2);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0097eef0 @ 0097eef0 ////

int __thiscall FUN_0097eef0(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x8c);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*(int *)(*piVar1 + 0xc) == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1;
}


//// FUNCTION FUN_0097ef70 @ 0097ef70 ////

undefined4 __fastcall FUN_0097ef70(int param_1)

{
  if (*(int *)(param_1 + 0x100) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x100) + 8);
  }
  return 0;
}


//// FUNCTION FUN_0097efb0 @ 0097efb0 ////

int __fastcall FUN_0097efb0(int param_1)

{
  if ((*(uint *)(param_1 + 0x9c) & 0x100000) == 0) {
    FUN_0097e8f0(param_1);
  }
  return param_1 + 0xd4;
}


//// FUNCTION FUN_0097efd0 @ 0097efd0 ////

float10 __fastcall FUN_0097efd0(int param_1)

{
  return (float10)1.0 - (float10)*(byte *)(param_1 + 0x9a) * (float10)0.003921569;
}


//// FUNCTION FUN_0097f050 @ 0097f050 ////

int * __cdecl FUN_0097f050(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_00acd42c();
  iVar2 = (int)uVar3;
  uVar3 = FUN_00acd42c();
  iVar1 = (int)uVar3;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x100 < iVar2) {
    iVar2 = 0x100;
  }
  if (iVar1 < 0) {
    *param_1 = iVar2;
    param_1[1] = 0;
    return param_1;
  }
  if (0x100 < iVar1) {
    iVar1 = 0x100;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return param_1;
}


//// FUNCTION FUN_0097f110 @ 0097f110 ////

undefined * FUN_0097f110(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_00acd42c();
  iVar3 = (int)uVar4;
  uVar4 = FUN_00acd42c();
  iVar1 = (int)uVar4;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x100 < iVar3) {
    iVar3 = 0x100;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0x100 < iVar1) {
    iVar1 = 0x100;
  }
  iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  iVar3 = (int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5;
  if ((((-1 < iVar2) && (iVar2 < 8)) && (-1 < iVar3)) && (iVar3 < 8)) {
    return &DAT_0105f8f8 + (iVar3 + iVar2 * 8) * 0x1c;
  }
  return (undefined *)0x0;
}


//// FUNCTION FUN_0097f1d0 @ 0097f1d0 ////

void __fastcall FUN_0097f1d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_00a45da0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0097f1f0 @ 0097f1f0 ////

void __thiscall FUN_0097f1f0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_30 [12];
  
  iVar2 = *(int *)((int)this + 0xf8);
  if ((iVar2 != 0) && (*(int *)((int)this + 0x84) == 0)) {
    iVar1 = FUN_0097e350(this,0);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xe4) & 0x20000000) != 0)) {
      puVar3 = *(undefined4 **)(iVar2 + 4);
      puVar4 = local_30;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_009aa830(local_30,(float *)((int)this + 0x18));
      puVar3 = local_30;
      goto LAB_0097f247;
    }
  }
  puVar3 = (undefined4 *)((int)this + 0x18);
LAB_0097f247:
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0097f260 @ 0097f260 ////

void __fastcall FUN_0097f260(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = (float *)(param_1 + 0x18);
  pfVar2 = (float *)register0x00000010;
  for (iVar1 = 0xc; pfVar2 = pfVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar3 = pfVar3 + 1;
  }
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  FUN_009ab850(&stack0x00000004,&local_4,&local_8,&local_c);
  *(float *)(param_1 + 0x80) = local_c;
  pfVar2 = (float *)(param_1 + 0x18);
  pfVar3 = (float *)(param_1 + 0x48);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar3 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_009aa670((float *)(param_1 + 0x48));
  return;
}


//// FUNCTION FUN_0097f2e0 @ 0097f2e0 ////

void __thiscall FUN_0097f2e0(void *this,float *param_1,float param_2,float param_3)

{
  int iVar1;
  float *this_00;
  float *pfVar2;
  float10 fVar3;
  
  if ((*(int **)((int)this + 0x100) != (int *)0x0) && (**(int **)((int)this + 0x100) != 0)) {
    fVar3 = FUN_00a45930(param_2);
    param_3 = (float)fVar3;
  }
  this_00 = (float *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (param_2 == 0.0) {
    if (param_3 == 1.0) {
      *(undefined4 *)((int)this + 0x38) = 0x3f800000;
      *(undefined4 *)((int)this + 0x28) = 0x3f800000;
      *this_00 = 1.0;
      *(float *)((int)this + 0x3c) = *param_1;
      *(float *)((int)this + 0x40) = param_1[1];
      *(float *)((int)this + 0x44) = param_1[2];
    }
    else {
      *(float *)((int)this + 0x38) = param_3;
      *this_00 = param_3;
      *(float *)((int)this + 0x28) = param_3;
      *(float *)((int)this + 0x3c) = *(float *)((int)this + 0x3c) + *param_1;
      *(float *)((int)this + 0x40) = param_1[1] + *(float *)((int)this + 0x40);
      *(float *)((int)this + 0x44) = param_1[2] + *(float *)((int)this + 0x44);
    }
  }
  else if (param_3 == 1.0) {
    *(undefined4 *)((int)this + 0x38) = 0x3f800000;
    *(undefined4 *)((int)this + 0x28) = 0x3f800000;
    *this_00 = 1.0;
    *(float *)((int)this + 0x3c) = *param_1;
    *(float *)((int)this + 0x40) = param_1[1];
    *(float *)((int)this + 0x44) = param_1[2];
    FUN_004d5390(this_00,param_2);
  }
  else {
    *(float *)((int)this + 0x38) = param_3;
    *(float *)((int)this + 0x28) = param_3;
    *this_00 = param_3;
    *(float *)((int)this + 0x3c) = *param_1 + *(float *)((int)this + 0x3c);
    *(float *)((int)this + 0x40) = param_1[1] + *(float *)((int)this + 0x40);
    *(float *)((int)this + 0x44) = param_1[2] + *(float *)((int)this + 0x44);
    FUN_004d5390(this_00,param_2);
  }
  *(float *)((int)this + 0x7c) = param_3;
  *(float *)((int)this + 0x80) = param_2;
  pfVar2 = (float *)((int)this + 0x48);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *this_00;
    this_00 = this_00 + 1;
    pfVar2 = pfVar2 + 1;
  }
  FUN_009aa670((float *)((int)this + 0x48));
  if ((*(int **)((int)this + 0x100) != (int *)0x0) && (**(int **)((int)this + 0x100) != 0)) {
    fVar3 = FUN_00a45930(*(float *)((int)this + 0x80));
    FUN_00a45820((void *)**(undefined4 **)((int)this + 0x100),(float *)((int)this + 0x3c),
                 (float)fVar3);
  }
  return;
}


//// FUNCTION FUN_0097f470 @ 0097f470 ////

void __thiscall FUN_0097f470(void *this,float *param_1,float param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *this_00;
  float *pfVar3;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  if (local_18 < 0.001) {
    local_18 = 0.001;
  }
  if (local_14 < 0.001) {
    local_14 = 0.001;
  }
  if (local_10 < 0.001) {
    local_10 = 0.001;
  }
  this_00 = (float *)((int)this + 0x18);
  *(float *)((int)this + 0x28) = local_14;
  *this_00 = local_18;
  if (param_2 == 0.0) {
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(float *)((int)this + 0x38) = local_10;
    *(float *)((int)this + 0x3c) = *param_1 + *(float *)((int)this + 0x3c);
    *(float *)((int)this + 0x40) = param_1[1] + *(float *)((int)this + 0x40);
    *(float *)((int)this + 0x44) = param_1[2] + *(float *)((int)this + 0x44);
  }
  else {
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(float *)((int)this + 0x38) = local_10;
    *(float *)((int)this + 0x3c) = *param_1 + *(float *)((int)this + 0x3c);
    *(float *)((int)this + 0x40) = param_1[1] + *(float *)((int)this + 0x40);
    *(float *)((int)this + 0x44) = param_1[2] + *(float *)((int)this + 0x44);
    FUN_004d5390(this_00,param_2);
  }
  fVar1 = local_14;
  if (local_14 < local_18) {
    fVar1 = local_18;
  }
  if ((local_10 < fVar1) && (local_10 = local_14, local_14 < local_18)) {
    local_10 = local_18;
  }
  *(float *)((int)this + 0x7c) = local_10;
  *(float *)((int)this + 0x80) = param_2;
  pfVar3 = (float *)((int)this + 0x48);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *this_00;
    this_00 = this_00 + 1;
    pfVar3 = pfVar3 + 1;
  }
  FUN_009aa670((float *)((int)this + 0x48));
  return;
}


//// FUNCTION FUN_0097f610 @ 0097f610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0097f610(float param_1)

{
  float fVar1;
  uint uVar2;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  uVar2 = FUN_009a1b30(&DAT_0105c2e8,unaff_ESI,&local_20);
  if ((char)uVar2 != '\0') {
    local_c = _DAT_0105c498 * param_1;
    local_18 = local_c + *unaff_ESI;
    local_14 = _DAT_0105c4a4 * param_1 + unaff_ESI[1];
    local_10 = DAT_0105c4b0 * param_1 + unaff_ESI[2];
    uVar2 = FUN_009a1b30(&DAT_0105c2e8,&local_18,local_28);
    if ((char)uVar2 != '\0') {
      local_28[0] = local_28[0] - local_20;
      fVar1 = local_28[0] * local_28[0];
      local_20 = (DAT_0105c430 - (float)_DAT_0105c408) - local_20;
      local_1c = (DAT_0105c434 - (float)_DAT_0105c40c) - local_1c;
      local_28[0] = SQRT(local_1c * local_1c + local_20 * local_20) - local_28[0];
      local_28[0] = local_28[0] * local_28[0];
      if (local_28[0] < *unaff_EDI) {
        *unaff_EDI = local_28[0];
      }
      uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                       (ushort)(local_28[0] < fVar1) << 8 |
                       (ushort)(NAN(local_28[0]) || NAN(fVar1)) << 10 |
                       (ushort)(local_28[0] == fVar1) << 0xe);
      if (local_28[0] < fVar1) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0097f710 @ 0097f710 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_0097f710(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  *param_1 = 0x7f7fffff;
  if ((((*(int *)((int)this + 0x78) != 0) && (iVar2 = FUN_0097e350(this,0), iVar2 != 0)) &&
      (*(int *)(iVar2 + 0x40) != 0)) && ((*(uint *)(*(int *)(iVar2 + 0x40) + 8) & 0x100) != 0)) {
    uVar3 = FUN_0097f610(_DAT_00e66fcc * 0.2);
    if ((((char)uVar3 == '\0') && (uVar3 = FUN_0097f610(_DAT_00e66fcc * 0.2), (char)uVar3 == '\0'))
       && ((uVar3 = FUN_0097f610(_DAT_00e66fcc * 0.15), (char)uVar3 == '\0' &&
           (uVar3 = FUN_0097f610(_DAT_00e66fcc * 0.2), (char)uVar3 == '\0')))) {
      return uVar3;
    }
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  FUN_009a1480(&DAT_0105c2e8,(undefined4 *)((int)this + 0x18),'\0');
  DAT_0105eb48 = FUN_0097e350(this,0);
  if (DAT_0105eb48 != 0) {
    puVar1 = (undefined4 *)(DAT_0105eb48 + 0x50);
    if (*(int *)(DAT_0105eb48 + 0x50) == 0) {
      uVar4 = FUN_009e6e90(DAT_0105eb48);
      *puVar1 = uVar4;
    }
    uVar3 = FUN_009e8ed0((void *)*puVar1,param_1);
    return uVar3;
  }
  return 0;
}


//// FUNCTION FUN_0097f880 @ 0097f880 ////

float10 __thiscall FUN_0097f880(void *param_1,float *param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = FUN_0097e350(param_1,0);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 100) == 0) {
      FUN_009d9da0(iVar2);
      if (*(int *)(iVar2 + 100) == 0) goto LAB_0097f8a9;
    }
    local_c = *param_2;
    local_8 = param_2[1];
    local_4 = param_2[2];
    FUN_0040b490((void *)((int)param_1 + 0x48),&local_c);
    bVar1 = *(byte *)((int)param_1 + 0x9a);
    fVar3 = FUN_00a48310(*(float **)(iVar2 + 100),&local_c,param_3);
    return fVar3 * (float10)(1.0 - (float)bVar1 * 0.003921569);
  }
LAB_0097f8a9:
  return (float10)0.0;
}


//// FUNCTION FUN_0097f920 @ 0097f920 ////

uint __fastcall FUN_0097f920(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_0097e350(param_1,0);
  if (((uVar2 != 0) && ((*(byte *)(uVar2 + 0xe4) & 1) != 0)) &&
     (iVar1 = *(int *)(uVar2 + 0x40), uVar2 = 0, iVar1 != 0)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 8) == '\x1e');
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_0097f950 @ 0097f950 ////

float10 __fastcall FUN_0097f950(void *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_30 [12];
  
  iVar1 = FUN_0097f1f0(param_1,local_30);
  fVar2 = (float10)DAT_0105c4d8 * ((float10)*(float *)(iVar1 + 0x28) - (float10)DAT_0105c3ac) +
          (float10)DAT_0105c4d4 * ((float10)*(float *)(iVar1 + 0x24) - (float10)DAT_0105c3a8) +
          (float10)DAT_0105c4dc * ((float10)*(float *)(iVar1 + 0x2c) - (float10)DAT_0105c3b0);
  if (((char)((uint)*(undefined4 *)((int)param_1 + 0xa0) >> 8) < '\0') && ((float10)0.0 < fVar2)) {
    fVar2 = fVar2 * (float10)0.02 + (float10)2.0;
  }
  return fVar2;
}


//// FUNCTION FUN_0097f9d0 @ 0097f9d0 ////

void __fastcall FUN_0097f9d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  DAT_01050c48 = param_1;
  do {
    if (*(void **)(param_1 + 0xf4) == (void *)0x0) {
      iVar2 = 0;
      for (piVar1 = *(int **)(param_1 + 0x8c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (iVar2 == iVar3) {
          if ((int *)*piVar1 != (int *)0x0) {
            iVar2 = *(int *)*piVar1;
            goto LAB_0097fa0e;
          }
          break;
        }
        iVar2 = iVar2 + 1;
      }
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0097e350(*(void **)(param_1 + 0xf4),iVar3);
    }
LAB_0097fa0e:
    iVar3 = iVar3 + 1;
    if (iVar2 == 0) {
      DAT_01050c48 = 0;
      return;
    }
    FUN_009a1480(&DAT_0105c2e8,(undefined4 *)(param_1 + 0x18),'\x01');
    LH_DrawMeshLightProjectorPass(iVar2);
  } while( true );
}


//// FUNCTION FUN_0097fa60 @ 0097fa60 ////

void __thiscall FUN_0097fa60(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x78);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) & 0x2000) != 0)) {
    uVar2 = *(undefined4 *)((int)this + 0x44);
    uVar3 = *(undefined4 *)(iVar1 + 0x2c);
    *param_1 = *(undefined4 *)(iVar1 + 0x28);
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    return;
  }
  *param_1 = *(undefined4 *)((int)this + 0x3c);
  param_1[1] = *(undefined4 *)((int)this + 0x40);
  param_1[2] = *(undefined4 *)((int)this + 0x44);
  return;
}


//// FUNCTION FUN_0097fad0 @ 0097fad0 ////

void __thiscall FUN_0097fad0(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)((int)this + 0xb0);
  iVar3 = *(int *)((int)this + 0x78);
  if ((((iVar2 <= DAT_0105bec0) && (iVar2 != -1)) && (DAT_0105bec0 + -1 <= iVar2)) && (iVar3 != 0))
  {
    *param_1 = *(undefined4 *)(iVar3 + 0x34);
    param_1[1] = *(undefined4 *)(iVar3 + 0x38);
    param_1[2] = *(undefined4 *)(iVar3 + 0x3c);
    return;
  }
  fVar1 = *(float *)((int)this + 0x44);
  uVar4 = *(undefined4 *)((int)this + 0x3c);
  param_1[1] = *(undefined4 *)((int)this + 0x40);
  *param_1 = uVar4;
  param_1[2] = fVar1 + 1.6;
  return;
}


//// FUNCTION FUN_0097fb40 @ 0097fb40 ////

void __thiscall FUN_0097fb40(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)((int)this + 0xb0);
  iVar3 = *(int *)((int)this + 0x78);
  if ((((iVar2 <= DAT_0105bec0) && (iVar2 != -1)) && (DAT_0105bec0 + -1 <= iVar2)) && (iVar3 != 0))
  {
    *param_1 = *(undefined4 *)(iVar3 + 0x4c);
    param_1[1] = *(undefined4 *)(iVar3 + 0x50);
    param_1[2] = *(undefined4 *)(iVar3 + 0x54);
    return;
  }
  fVar1 = *(float *)((int)this + 0x44);
  uVar4 = *(undefined4 *)((int)this + 0x3c);
  param_1[1] = *(undefined4 *)((int)this + 0x40);
  *param_1 = uVar4;
  param_1[2] = fVar1 + 1.2;
  return;
}


//// FUNCTION FUN_0097fbb0 @ 0097fbb0 ////

void __thiscall FUN_0097fbb0(void *this,undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)((int)this + 0xb0);
  iVar3 = *(int *)((int)this + 0x78);
  if ((((iVar2 <= DAT_0105bec0) && (iVar2 != -1)) && (DAT_0105bec0 + -1 <= iVar2)) && (iVar3 != 0))
  {
    *param_1 = *(undefined4 *)(iVar3 + 0x28);
    param_1[1] = *(undefined4 *)(iVar3 + 0x2c);
    param_1[2] = *(undefined4 *)(iVar3 + 0x30);
    return;
  }
  fVar1 = *(float *)((int)this + 0x44);
  uVar4 = *(undefined4 *)((int)this + 0x3c);
  param_1[1] = *(undefined4 *)((int)this + 0x40);
  *param_1 = uVar4;
  param_1[2] = fVar1 + 0.8;
  return;
}


//// FUNCTION FUN_0097fc20 @ 0097fc20 ////

void __thiscall FUN_0097fc20(void *this,float *param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = 0.0;
  local_8 = 0.0;
  local_c = 0.0;
  FUN_009ab850((void *)((int)this + 0x18),&local_4,&local_8,&local_c);
  *param_1 = local_c;
  return;
}


//// FUNCTION FUN_0097fc60 @ 0097fc60 ////

int * __thiscall FUN_0097fc60(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  
  iVar1 = FUN_0097e350(this,0);
  if (iVar1 != 0) {
    iVar1 = FUN_0097e350(this,0);
    if ((*(uint *)(iVar1 + 0xe4) >> 6 & 1) != 0) {
      iVar1 = FUN_0097e350(this,0);
      pvVar4 = *(void **)(iVar1 + 0x5c);
      if (pvVar4 == (void *)0x0) {
        iVar1 = FUN_0097e350(this,0);
        if (*(int *)(iVar1 + 0x50) == 0) {
          iVar1 = FUN_0097e350(this,0);
          uVar2 = FUN_009e6e90(iVar1);
          iVar1 = FUN_0097e350(this,0);
          *(undefined4 *)(iVar1 + 0x50) = uVar2;
        }
        iVar1 = FUN_0097e350(this,0);
        pvVar4 = *(void **)(iVar1 + 0x50);
      }
      if (param_2 == 1) {
        iVar1 = FUN_0097e350(this,0);
        piVar3 = FUN_009e8060(this,param_1,pvVar4,*(void **)(iVar1 + 0x5c));
        return piVar3;
      }
      iVar1 = FUN_0097e350(this,0);
      piVar3 = FUN_009e8060(this,param_1,pvVar4,*(void **)(iVar1 + 0x60));
      return piVar3;
    }
  }
  return (int *)0x0;
}


//// FUNCTION FUN_0097fd20 @ 0097fd20 ////

undefined4 * __thiscall FUN_0097fd20(void *this,byte param_1)

{
  FUN_0097e4f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0097fd40 @ 0097fd40 ////

void __fastcall FUN_0097fd40(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  FUN_0097e470((int)param_1);
  if (*param_1 != 0) {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*param_1 + 0x38);
    puVar2 = operator_new((param_1[2] & 0xffU) << 2);
    param_1[1] = (int)puVar2;
    for (uVar3 = param_1[2] & 0xff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    uVar3 = 0;
    if ((param_1[2] & 0xffU) != 0) {
      do {
        *(undefined4 *)(param_1[1] + uVar3 * 4) =
             *(undefined4 *)(*(int *)(*param_1 + 0x3c) + uVar3 * 4);
        iVar4 = *(int *)(param_1[1] + uVar3 * 4);
        if (iVar4 != 0) {
          piVar1 = (int *)(iVar4 + 0x30);
          *piVar1 = *piVar1 + 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (param_1[2] & 0xffU));
    }
  }
  return;
}


//// FUNCTION FUN_0097fe40 @ 0097fe40 ////

void __fastcall FUN_0097fe40(int *param_1)

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


//// FUNCTION FUN_0097fec0 @ 0097fec0 ////

void __fastcall FUN_0097fec0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0097e350(param_1,0);
  if ((((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe4) & 1) != 0)) && (*(int *)(iVar1 + 0x40) != 0)) &&
     (((*(char *)(*(int *)(iVar1 + 0x40) + 8) == '\x1e' &&
       (iVar1 = *(int *)((int)param_1 + 0x78), iVar1 != 0)) && (*(int *)(iVar1 + 0x178) == 0)))) {
    FUN_00a01190(iVar1);
    return;
  }
  return;
}


//// FUNCTION FUN_0097ff00 @ 0097ff00 ////

void __fastcall FUN_0097ff00(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30 [12];
  
  if ((DAT_00e66fc0 != '\0') || (DAT_0105bed2 == '\0')) {
    uVar9 = *(uint *)(param_1 + 0x9c);
    if ((uVar9 & 0x10000000) == 0) {
      *(uint *)(param_1 + 0x9c) = uVar9 & 0xfffe3fff;
    }
    else {
      local_38 = DAT_0105c3ac;
      puVar10 = (undefined4 *)(param_1 + 0x48);
      puVar11 = local_30;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_3c = DAT_0105c3a8;
      local_34 = DAT_0105c3b0;
      FUN_00527db0(local_30,0.7853982);
      FUN_0040b490(local_30,&local_3c);
      uVar9 = uVar9 & 0xfffe3fff;
      *(uint *)(param_1 + 0x9c) = uVar9;
      if (local_3c <= 0.0) {
        if (local_38 < 0.0) {
          *(uint *)(param_1 + 0x9c) = uVar9 | 0x8000;
        }
        else {
          *(uint *)(param_1 + 0x9c) = uVar9 | 0x4000;
        }
      }
      else if (local_38 < 0.0) {
        *(uint *)(param_1 + 0x9c) = uVar9 | 0xc000;
      }
    }
    if ((DAT_00e66fc0 == '\0') || (DAT_01050c3c != '\0')) {
      piVar7 = *(int **)(param_1 + 0x8c);
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffe3ff;
      if (piVar7 != (int *)0x0) {
        do {
          *(uint *)(*piVar7 + 8) = *(uint *)(*piVar7 + 8) & 0xfff8ffff;
          piVar7 = (int *)piVar7[1];
        } while (piVar7 != (int *)0x0);
        return;
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x9c);
      *(uint *)(param_1 + 0x9c) = uVar9 & 0xffffe3ff;
      piVar7 = *(int **)(param_1 + 0x8c);
      if ((uVar9 & 0x8000000) == 0) {
        if (DAT_0105be08 < 2) {
          fVar2 = 0.6;
        }
        else {
          fVar2 = 1.0;
        }
        for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
          piVar1 = (int *)*piVar7;
          fVar3 = *(float *)(*piVar1 + 0xe0) * 0.9090909;
          if ((fVar3 <= 0.35) || (fVar3 < 1.5)) {
            if (fVar3 <= 0.35) {
              fVar3 = 0.35;
            }
          }
          else {
            fVar3 = 1.5;
          }
          fVar3 = (1.2217306 / DAT_0105c3dc) * *(float *)(param_1 + 0x7c) * fVar3 * fVar2;
          fVar4 = *(float *)(param_1 + 0x3c) - DAT_0105c3a8;
          fVar6 = *(float *)(param_1 + 0x40) - DAT_0105c3ac;
          fVar5 = *(float *)(param_1 + 0x44) - DAT_0105c3b0;
          fVar4 = fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5;
          if (fVar3 * 5.0 * fVar3 * 5.0 <= fVar4) {
            if (fVar3 * 12.0 * fVar3 * 12.0 <= fVar4) {
              if (fVar3 * 20.0 * fVar3 * 20.0 <= fVar4) {
                if (fVar3 * 35.0 * fVar3 * 35.0 <= fVar4) {
                  uVar9 = piVar1[2] & 0xfffcffffU | 0x40000;
                }
                else {
                  uVar9 = piVar1[2] & 0xfffbffffU | 0x30000;
                }
              }
              else {
                uVar9 = piVar1[2] & 0xfffaffffU | 0x20000;
              }
            }
            else {
              uVar9 = piVar1[2] & 0xfff9ffffU | 0x10000;
            }
          }
          else {
            uVar9 = piVar1[2] & 0xfff8ffff;
          }
          piVar1[2] = uVar9;
        }
      }
      else if (piVar7 != (int *)0x0) {
        do {
          *(uint *)(*piVar7 + 8) = *(uint *)(*piVar7 + 8) & 0xfff8ffff;
          piVar7 = (int *)piVar7[1];
        } while (piVar7 != (int *)0x0);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00980250 @ 00980250 ////

void __fastcall FUN_00980250(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0097e350(param_1,0);
  if ((((iVar2 != 0) && ((*(uint *)(iVar2 + 0xe4) & 0x800) != 0)) &&
      (*(int *)((int)param_1 + 0x78) != 0)) && (*(int *)(iVar2 + 0xac) != 0)) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0xac) + 0x28);
    iVar3 = FUN_00990d30(0,iVar1);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else {
      iVar1 = iVar1 + -1;
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
    }
    FUN_00a019d0(*(void **)((int)param_1 + 0x78),
                 *(void **)(*(int *)(*(int *)(iVar2 + 0xac) + 0x2c) + iVar3 * 4),0xffffffff);
  }
  return;
}


//// FUNCTION FUN_009802c0 @ 009802c0 ////

void __thiscall FUN_009802c0(void *this,float *param_1)

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
  
  if ((*(uint *)((int)this + 0x9c) & 0x100000) == 0) {
    FUN_0097e8f0((int)this);
  }
  fVar9 = *(float *)((int)this + 0xd4);
  fVar10 = *(float *)((int)this + 0xd8);
  fVar11 = *(float *)((int)this + 0xdc);
  fVar1 = *(float *)((int)this + 0x34);
  fVar2 = *(float *)((int)this + 0x28);
  fVar3 = *(float *)((int)this + 0x1c);
  fVar4 = *(float *)((int)this + 0x40);
  fVar5 = *(float *)((int)this + 0x38);
  fVar6 = *(float *)((int)this + 0x2c);
  fVar7 = *(float *)((int)this + 0x20);
  fVar8 = *(float *)((int)this + 0x44);
  *param_1 = fVar9 * *(float *)((int)this + 0x18) +
             fVar10 * *(float *)((int)this + 0x24) + fVar11 * *(float *)((int)this + 0x30) +
             *(float *)((int)this + 0x3c);
  param_1[1] = fVar9 * fVar3 + fVar10 * fVar2 + fVar11 * fVar1 + fVar4;
  param_1[2] = fVar9 * fVar7 + fVar10 * fVar6 + fVar11 * fVar5 + fVar8;
  return;
}


//// FUNCTION FUN_00980380 @ 00980380 ////

void __fastcall FUN_00980380(int *param_1)

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
  if ((int *)param_1[3] != (int *)0x0) {
    FUN_00a4c250((int *)param_1[3]);
    param_1[3] = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[1]);
}


//// FUNCTION FUN_009803f0 @ 009803f0 ////

void __fastcall FUN_009803f0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x100) == 0) {
    puVar1 = operator_new(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 **)(param_1 + 0x100) = puVar1;
      return;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}


//// FUNCTION FUN_00980430 @ 00980430 ////

void __fastcall FUN_00980430(int *param_1)

{
  undefined4 *puVar1;
  float10 fVar2;
  int iVar3;
  
  FUN_009803f0((int)param_1);
  if (*(int *)param_1[0x40] == 0) {
    iVar3 = 0;
    fVar2 = FUN_00a45930((float)param_1[0x20]);
    puVar1 = FUN_0097e180((float *)(param_1 + 0xf),(float)fVar2,iVar3);
    *(undefined4 **)param_1[0x40] = puVar1;
    (**(code **)(*param_1 + 0x20))(param_1 + 0xf,param_1[0x20],param_1[0x1f]);
  }
  return;
}


//// FUNCTION FUN_00980490 @ 00980490 ////

void __thiscall FUN_00980490(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1 != 0) && (param_2 != -1)) && (*(int *)((int)this + 0x78) != 0)) &&
     (iVar1 = *(int *)(*(int *)((int)this + 0x78) + 0x178), iVar1 != 0)) {
    FUN_00a30f20((void *)(iVar1 + 0x124),param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_009804d0 @ 009804d0 ////

uint __fastcall FUN_009804d0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  float *pfVar6;
  undefined2 extraout_var;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar9 = 0;
  iVar5 = FUN_0097e350(param_1,0);
  fVar3 = DAT_0105c5e8;
  if ((iVar5 == 0) || (*(int *)(iVar5 + 0x78) == 0)) {
    return CONCAT31((int3)((uint)iVar5 >> 8),1);
  }
  local_48 = 0.0;
  fVar7 = DAT_0105c5e8;
  if (0 < *(int *)(iVar5 + 0x74)) {
    do {
      local_34 = DAT_0105c5f4;
      local_3c = DAT_0105c5ec;
      pfVar6 = (float *)(*(int *)(iVar5 + 0x78) + iVar9);
      local_38 = DAT_0105c5f0;
      pfVar10 = local_30;
      for (iVar8 = 0xc; pfVar6 = pfVar6 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
        *pfVar10 = *pfVar6;
        pfVar10 = pfVar10 + 1;
      }
      FUN_009aa830(local_30,(float *)((int)param_1 + 0x18));
      FUN_009aa670(local_30);
      fVar2 = local_18 * local_34;
      fVar1 = local_14 * local_34;
      fVar7 = local_30[1] * local_3c;
      local_34 = local_30[2] * local_3c + local_1c * local_38 + local_10 * local_34 + local_4;
      local_3c = local_30[3] * local_38 + local_30[0] * local_3c + fVar2 + local_c;
      local_38 = local_20 * local_38 + fVar7 + fVar1 + local_8;
      uVar4 = FUN_00a4c270((void *)(*(int *)(iVar5 + 0x78) + iVar9),&local_3c,fVar3);
      if ((char)uVar4 != '\0') {
        return CONCAT31((int3)(CONCAT22(extraout_var,uVar4) >> 8),1);
      }
      fVar7 = (float)((int)local_48 + 1);
      iVar9 = iVar9 + 0x40;
      local_48 = fVar7;
    } while ((int)fVar7 < *(int *)(iVar5 + 0x74));
  }
  return (uint)fVar7 & 0xffffff00;
}


//// FUNCTION FUN_00980620 @ 00980620 ////

void __thiscall FUN_00980620(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((*(byte *)((int)this + 0x9c) & 8) != 0) {
    FUN_009803f0((int)this);
    puVar1 = *(undefined4 **)(*(int *)((int)this + 0x100) + 8);
    if (puVar1 != param_1) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00a44a10(puVar1);
        *(undefined4 *)(*(int *)((int)this + 0x100) + 8) = 0;
      }
      if (param_1 != (undefined4 *)0x0) {
        param_1[1] = param_1[1] + 1;
        *(undefined4 **)(*(int *)((int)this + 0x100) + 8) = param_1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00980670 @ 00980670 ////

void __thiscall FUN_00980670(void *this,int *param_1)

{
  int *piVar1;
  
  FUN_009803f0((int)this);
  piVar1 = *(int **)(*(int *)((int)this + 0x100) + 0xc);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      FUN_00a4c250(piVar1);
      *(undefined4 *)(*(int *)((int)this + 0x100) + 0xc) = 0;
    }
    *(int **)(*(int *)((int)this + 0x100) + 0xc) = param_1;
  }
  return;
}


//// FUNCTION FUN_009806b0 @ 009806b0 ////

int __fastcall FUN_009806b0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(int *)(*(int *)*puVar1 + 0xb0) != 0) break;
    puVar1 = (undefined4 *)puVar1[1];
  }
  return *(int *)*puVar1;
}


//// FUNCTION FUN_009806e0 @ 009806e0 ////

void __thiscall FUN_009806e0(void *this,byte param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0x100);
  *(uint *)((int)this + 0x9c) =
       *(uint *)((int)this + 0x9c) ^ ((uint)param_1 << 0x13 ^ *(uint *)((int)this + 0x9c)) & 0x80000
  ;
  if (param_1 == 0) {
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0xc) != (int *)0x0)) {
      FUN_00a4c250(*(int **)(iVar1 + 0xc));
      *(undefined4 *)(*(int *)((int)this + 0x100) + 0xc) = 0;
    }
  }
  else if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) {
    piVar2 = FUN_00a4c1a0(this);
    FUN_00980670(this,piVar2);
    return;
  }
  return;
}


//// FUNCTION FUN_00980750 @ 00980750 ////

void __thiscall FUN_00980750(void *this,uint param_1,float param_2,int param_3)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0097e350(this,0);
  if (((((iVar1 != 0) && ((*(byte *)(iVar1 + 0xe4) & 1) != 0)) && (*(int *)(iVar1 + 0x40) != 0)) &&
      ((*(char *)(*(int *)(iVar1 + 0x40) + 8) == '\x1e' &&
       (iVar1 = *(int *)((int)this + 0x78), iVar1 != 0)))) && (*(int *)(iVar1 + 0x178) == 0)) {
    FUN_00a01190(iVar1);
  }
  if (0.0 <= param_2) {
    if (1.0 <= param_2) {
      param_2 = 1.0;
      goto LAB_009807cf;
    }
    if (0.0 <= param_2) goto LAB_009807cf;
  }
  param_2 = 0.0;
LAB_009807cf:
  uVar2 = param_1 & ((int)param_1 < 0) - 1;
  if (0x34 < (int)uVar2) {
    uVar2 = 0x35;
  }
  if ((*(int *)((int)this + 0x78) != 0) &&
     (this_00 = *(void **)(*(int *)((int)this + 0x78) + 0x178), this_00 != (void *)0x0)) {
    FUN_00a304f0(this_00,uVar2,param_2,param_3);
    return;
  }
  return;
}


//// FUNCTION FUN_00980810 @ 00980810 ////

int __thiscall FUN_00980810(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_c [2];
  undefined4 local_4;
  
  iVar3 = FUN_0097e350(this,0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x70) == 0)) {
    return 0;
  }
  puVar6 = &DAT_0105c468;
  puVar7 = &DAT_0105c528;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_009aafb0(&DAT_0105c528,(float *)((int)this + 0x18));
  uVar2 = DAT_0105c430;
  local_4 = DAT_0105c434;
  DAT_0105c430 = *param_1;
  DAT_0105c434 = param_1[1];
  piVar1 = *(int **)(iVar3 + 0x70);
  iVar3 = 1;
  if (1 < *piVar1) {
    iVar5 = 0x90;
    do {
      uVar4 = FUN_009e8ed0(*(void **)(piVar1[1] + 100 + iVar5),local_c);
      if ((char)uVar4 != '\0') {
        return iVar3 * 0x90 + piVar1[1];
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x90;
    } while (iVar3 < *piVar1);
  }
  uVar4 = FUN_009e8ed0(*(void **)(piVar1[1] + 100),local_c);
  if ((char)uVar4 != '\0') {
    return piVar1[1];
  }
  DAT_0105c430 = uVar2;
  DAT_0105c434 = local_4;
  return 0;
}


//// FUNCTION FUN_00980910 @ 00980910 ////

int __thiscall FUN_00980910(void *this,float *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float local_c;
  float local_8;
  float local_4;
  
  iVar2 = FUN_0097e350(this,0);
  if ((iVar2 != 0) && (piVar1 = *(int **)(iVar2 + 0x70), piVar1 != (int *)0x0)) {
    local_c = *param_1;
    local_8 = param_1[1];
    local_4 = param_1[2];
    FUN_0040b490((void *)((int)this + 0x48),&local_c);
    iVar2 = 1;
    if (1 < *piVar1) {
      iVar4 = 0x90;
      do {
        uVar3 = FUN_009e8300(*(void **)(iVar4 + 100 + piVar1[1]),local_c,local_8);
        if ((char)uVar3 != '\0') {
          return iVar2 * 0x90 + piVar1[1];
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x90;
      } while (iVar2 < *piVar1);
    }
    uVar3 = FUN_009e8300(*(void **)(piVar1[1] + 100),local_c,local_8);
    if ((char)uVar3 != '\0') {
      return piVar1[1];
    }
  }
  return 0;
}


//// FUNCTION FUN_00980a00 @ 00980a00 ////

void __thiscall FUN_00980a00(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf593b;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0xf0) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(param_1 << 4);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      FUN_00401380(pvVar1,0x10,param_1,&LAB_0097eec0);
    }
    *(void **)((int)this + 0xf0) = pvVar1;
    if (0 < param_1) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + *(int *)((int)this + 0xf0)) = 0xffb2dffc;
        iVar2 = iVar2 + 0x10;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00980ab0 @ 00980ab0 ////

void __thiscall FUN_00980ab0(void *this,int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_0097e350(this,0);
  if (iVar2 != 0) {
    FUN_009dc300(iVar2);
    if ((((*(int **)(iVar2 + 0x70) != (int *)0x0) && (iVar2 = **(int **)(iVar2 + 0x70), iVar2 != 0))
        && (-1 < param_1)) && (param_1 < iVar2)) {
      FUN_00980a00(this,iVar2);
      uVar1 = *(uint *)(*(int *)((int)this + 0xf0) + 0xc + param_1 * 0x10);
      *(uint *)(*(int *)((int)this + 0xf0) + 0xc + param_1 * 0x10) =
           uVar1 ^ (param_2 == '\0' ^ uVar1) & 1;
    }
  }
  return;
}


//// FUNCTION FUN_00980b20 @ 00980b20 ////

void __thiscall FUN_00980b20(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0097e350(this,0);
  if (iVar1 != 0) {
    FUN_009dc300(iVar1);
    if ((((*(int **)(iVar1 + 0x70) != (int *)0x0) && (iVar1 = **(int **)(iVar1 + 0x70), iVar1 != 0))
        && (-1 < param_1)) && (param_1 < iVar1)) {
      FUN_00980a00(this,iVar1);
      *(undefined4 *)(param_1 * 0x10 + *(int *)((int)this + 0xf0)) = param_2;
    }
  }
  return;
}


//// FUNCTION FUN_00980b70 @ 00980b70 ////

int __thiscall FUN_00980b70(void *this,byte *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  piVar2 = *(int **)((int)this + 0x8c);
  iVar5 = 0;
  if (piVar2 != (int *)0x0) {
    while (iVar5 != 0) {
      piVar2 = (int *)piVar2[1];
      iVar5 = iVar5 + 1;
      if (piVar2 == (int *)0x0) {
        return -1;
      }
    }
    if (((int *)*piVar2 != (int *)0x0) && (iVar5 = *(int *)*piVar2, iVar5 != 0)) {
      iVar6 = 0;
      if (0 < *(int *)(iVar5 + 0x38)) {
        puVar8 = *(undefined4 **)(iVar5 + 0x3c);
        do {
          pbVar3 = (byte *)*puVar8;
          pbVar7 = param_1;
          do {
            bVar1 = *pbVar3;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_00980be4:
              iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00980be9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar3[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_00980be4;
            pbVar3 = pbVar3 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_00980be9:
          if (iVar4 == 0) {
            return iVar6;
          }
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < *(int *)(iVar5 + 0x38));
      }
      return -1;
    }
  }
  return -1;
}


//// FUNCTION FUN_00980c10 @ 00980c10 ////

void __thiscall FUN_00980c10(void *this,char param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char *_Str1;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  bool bVar12;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  void *local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c [2];
  int local_44 [2];
  int local_3c [2];
  int local_34 [2];
  float local_2c;
  float local_20;
  float local_14;
  
  if (((DAT_01050c5a == '\0') && (local_90 = this, iVar5 = FUN_0097e350(this,0), iVar5 != 0)) &&
     (local_5c = 0, 0 < *(int *)(iVar5 + 0x48))) {
    local_94 = 0;
    do {
      _Str1 = (char *)(local_94 + *(int *)(iVar5 + 0x4c));
      iVar8 = 0xf;
      bVar12 = true;
      pcVar9 = _Str1;
      pcVar10 = "_sp_pavement_0";
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        bVar12 = *pcVar9 == *pcVar10;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      } while (bVar12);
      if (bVar12) {
        fVar2 = *(float *)(_Str1 + 0x44);
        fVar3 = *(float *)(_Str1 + 0x48);
        fVar4 = *(float *)(_Str1 + 0x4c);
        local_8c = fVar2 * *(float *)((int)local_90 + 0x18) +
                   fVar3 * *(float *)((int)local_90 + 0x24) +
                   fVar4 * *(float *)((int)local_90 + 0x30) + *(float *)((int)local_90 + 0x3c);
        local_88 = fVar2 * *(float *)((int)local_90 + 0x1c) +
                   fVar3 * *(float *)((int)local_90 + 0x28) +
                   fVar4 * *(float *)((int)local_90 + 0x34) + *(float *)((int)local_90 + 0x40);
        local_84 = fVar2 * *(float *)((int)local_90 + 0x20) +
                   fVar3 * *(float *)((int)local_90 + 0x2c) +
                   fVar4 * *(float *)((int)local_90 + 0x38) + *(float *)((int)local_90 + 0x44);
        FUN_0097f050(local_4c);
        if (param_1 == '\0') {
          FUN_009e1ff0(local_4c);
        }
        else {
          DAT_0105ef80 = 1;
          FUN_009e1980(local_4c);
          DAT_0105ef80 = 0;
        }
      }
      else if ((DAT_00e685c8 != '\0') && (param_1 != '\0')) {
        iVar6 = _strncmp(_Str1,"_sp_tarmac",10);
        iVar8 = local_94;
        if (iVar6 == 0) {
          pcVar9 = (char *)(local_94 + 0xb + *(int *)(iVar5 + 0x4c));
          local_a0 = -1;
          local_9c = -1;
          uVar7 = FUN_009b7af0(pcVar9,&local_a0,&local_50);
          if ((char)uVar7 != '\0') {
            FUN_009b7af0(pcVar9 + local_50 + 1,&local_9c,(int *)0x0);
          }
          if (((local_a0 != -1) && (local_9c != -1)) &&
             (local_a4 = 0, iVar8 = local_9c, iVar6 = local_a0, 0 < local_a0)) {
            do {
              local_98 = 0;
              if (0 < iVar8) {
                pvVar11 = (void *)((int)local_90 + 0x18);
                local_2c = (float)local_a4 + (float)local_a4;
                do {
                  iVar6 = local_98;
                  iVar8 = local_94 + 0x44 + *(int *)(iVar5 + 0x4c);
                  local_68 = local_2c + *(float *)(local_94 + 0x44 + *(int *)(iVar5 + 0x4c));
                  local_60 = *(undefined4 *)(iVar8 + 8);
                  local_64 = *(float *)(iVar8 + 4) + (float)local_98 + (float)local_98;
                  FUN_0040b490(pvVar11,&local_68);
                  FUN_0097f050(local_34);
                  FUN_009e4760(DAT_0105f8d4 - 2,local_34);
                  local_98 = iVar6 + 1;
                  iVar8 = local_9c;
                  iVar6 = local_a0;
                } while (local_98 < local_9c);
              }
              local_a4 = local_a4 + 1;
            } while (local_a4 < iVar6);
          }
        }
        else {
          iVar6 = _strncmp((char *)(*(int *)(iVar5 + 0x4c) + local_94),"_sp_grass",9);
          if (iVar6 == 0) {
            pcVar9 = (char *)(iVar8 + 10 + *(int *)(iVar5 + 0x4c));
            local_9c = -1;
            local_a0 = -1;
            uVar7 = FUN_009b7af0(pcVar9,&local_9c,&local_54);
            if ((char)uVar7 != '\0') {
              FUN_009b7af0(pcVar9 + local_54 + 1,&local_a0,(int *)0x0);
            }
            if (((local_9c != -1) && (local_a0 != -1)) &&
               (local_98 = 0, iVar8 = local_9c, iVar6 = local_a0, 0 < local_9c)) {
              do {
                local_a4 = 0;
                if (0 < iVar6) {
                  pvVar11 = (void *)((int)local_90 + 0x18);
                  local_20 = (float)local_98 + (float)local_98;
                  do {
                    pfVar1 = (float *)(local_94 + 0x44 + *(int *)(iVar5 + 0x4c));
                    local_6c = pfVar1[2];
                    local_74 = local_20 + *pfVar1;
                    local_70 = pfVar1[1] + (float)local_a4 + (float)local_a4;
                    FUN_0040b490(pvVar11,&local_74);
                    FUN_0097f050(local_3c);
                    iVar8 = 4;
                    do {
                      FUN_009e4760(1,local_3c);
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    local_a4 = local_a4 + 1;
                    iVar8 = local_9c;
                    iVar6 = local_a0;
                  } while (local_a4 < local_a0);
                }
                local_98 = local_98 + 1;
              } while (local_98 < iVar8);
            }
          }
          else {
            iVar8 = _strncmp((char *)(*(int *)(iVar5 + 0x4c) + iVar8),"_sp_sand",8);
            if (iVar8 == 0) {
              pcVar9 = (char *)(local_94 + 9 + *(int *)(iVar5 + 0x4c));
              local_a0 = -1;
              local_a4 = -1;
              uVar7 = FUN_009b7af0(pcVar9,&local_a0,&local_58);
              if ((char)uVar7 != '\0') {
                FUN_009b7af0(pcVar9 + local_58 + 1,&local_a4,(int *)0x0);
              }
              if (((local_a0 != -1) && (local_a4 != -1)) &&
                 (local_9c = 0, iVar8 = local_a4, iVar6 = local_a0, 0 < local_a0)) {
                do {
                  local_98 = 0;
                  if (0 < iVar8) {
                    pvVar11 = (void *)((int)local_90 + 0x18);
                    local_14 = (float)local_9c + (float)local_9c;
                    do {
                      iVar8 = local_94 + 0x44 + *(int *)(iVar5 + 0x4c);
                      local_78 = *(undefined4 *)(iVar8 + 8);
                      local_80 = local_14 + *(float *)(local_94 + 0x44 + *(int *)(iVar5 + 0x4c));
                      local_7c = *(float *)(iVar8 + 4) + (float)local_98 + (float)local_98;
                      FUN_0040b490(pvVar11,&local_80);
                      FUN_0097f050(local_44);
                      iVar8 = 4;
                      do {
                        FUN_009e4760(0,local_44);
                        iVar8 = iVar8 + -1;
                      } while (iVar8 != 0);
                      iVar8 = FUN_00990d30(0,3);
                      if (0 < iVar8) {
                        do {
                          FUN_009e4760(4,local_44);
                          iVar8 = iVar8 + -1;
                        } while (iVar8 != 0);
                      }
                      local_98 = local_98 + 1;
                      iVar8 = local_a4;
                      iVar6 = local_a0;
                    } while (local_98 < local_a4);
                  }
                  local_9c = local_9c + 1;
                } while (local_9c < iVar6);
              }
            }
          }
        }
      }
      local_5c = local_5c + 1;
      local_94 = local_94 + 0x50;
    } while (local_5c < *(int *)(iVar5 + 0x48));
  }
  return;
}


//// FUNCTION FUN_009811d0 @ 009811d0 ////

void __fastcall FUN_009811d0(void *param_1)

{
  bool bVar1;
  void *this;
  undefined4 *puVar2;
  double dVar3;
  void *local_20 [2];
  uint local_18;
  
  if ((*(byte *)((int)param_1 + 0x9c) & 0x40) != 0) {
    FUN_009e39e0(param_1);
  }
  this = (void *)FUN_0097e350(param_1,0);
  bVar1 = FUN_009daa10(this,"[isdrawinlist2notlist1]");
  *(uint *)((int)param_1 + 0x9c) =
       *(uint *)((int)param_1 + 0x9c) ^
       ((uint)bVar1 << 0x17 ^ *(uint *)((int)param_1 + 0x9c)) & 0x800000;
  puVar2 = FUN_009ddf60(this,local_20,"scaling");
  dVar3 = _atof((char *)*puVar2);
  *(float *)((int)param_1 + 0xcc) = (float)dVar3;
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  return;
}


//// FUNCTION FUN_00981260 @ 00981260 ////

int __thiscall FUN_00981260(void *this,int param_1,int param_2,char param_3,float param_4)

{
  bool bVar1;
  char *_Str1;
  int iVar2;
  void *local_54 [2];
  uint local_4c;
  uint local_34 [3];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _Str1 = (char *)FUN_0097e350(this,0);
  if (_Str1 == (char *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar2 = _strncmp(_Str1,"set_",4);
  if ((iVar2 == 0) || (iVar2 = _strncmp(_Str1,"fac_",4), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar2 = _strncmp(_Str1,"blp_",4);
  if (iVar2 == 0) {
    if (!bVar1) goto LAB_00981306;
  }
  else if (!bVar1) {
    ExceptionList = local_c;
    return 0;
  }
  FUN_009b24a0(_Str1);
LAB_00981306:
  if (param_2 != 0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((char)param_1 != '\0') {
    param_1 = *(int *)((int)this + 0xac);
    FUN_009ddc70(_Str1,(int *)local_54,'\x01',&param_1);
    local_4 = 0;
    if ((param_3 == '\0') || (param_1 != *(int *)((int)this + 0xac))) {
      FUN_0041c9c0(local_34,local_54[0]);
      local_34[0] = local_34[0] | 1;
      local_28 = *(undefined4 *)((int)this + 0x3c);
      local_24 = *(undefined4 *)((int)this + 0x40);
      local_20 = *(undefined4 *)((int)this + 0x44);
      local_10 = this;
      FUN_009b1530((byte *)local_34,6,0,'\0',&DAT_00d17518,'\x01',0x3f800000,param_4);
      *(int *)((int)this + 0xac) = param_1;
    }
    if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54[0]);
    }
    ExceptionList = local_c;
    return param_1;
  }
  FUN_009b0ed0(this);
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00981410 @ 00981410 ////

void __thiscall FUN_00981410(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  
  if (param_1 == '\0') {
    DAT_01059548 = 0;
    for (piVar4 = *(int **)((int)this + 0x8c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
      piVar1 = (int *)*piVar4;
      if (piVar1[0x10] != 0) {
        *(int *)(*piVar1 + 0x3c) = piVar1[0x10];
        FUN_009dc1a0(*piVar1);
      }
    }
  }
  else {
    iVar2 = FUN_0097e350(this,0);
    if (((((*(byte *)((int)this + 0x9c) & 8) != 0) && (iVar2 != 0)) &&
        ((*(uint *)(iVar2 + 0xe4) & 0x2000000) == 0)) && (DAT_0105be08 != 0)) {
      iVar2 = FUN_0097ef70((int)this);
      if (iVar2 == 0) {
        puVar3 = FUN_0097f110();
        if ((puVar3 != (undefined *)0x0) && (*(int *)(puVar3 + 0xc) != 0)) {
          DAT_01059548 = *(undefined4 *)(*(int *)(puVar3 + 0xc) + 0x14);
        }
      }
      else {
        DAT_01059548 = FUN_0097ef70((int)this);
      }
    }
    piVar4 = *(int **)((int)this + 0x8c);
    if (piVar4 != (int *)0x0) {
      do {
        piVar1 = (int *)*piVar4;
        piVar1[0x10] = 0;
        if (piVar1[1] != 0) {
          piVar1[0x10] = *(int *)(*piVar1 + 0x3c);
          *(int *)(*piVar1 + 0x3c) = piVar1[1];
          FUN_009dc1a0(*piVar1);
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00981500 @ 00981500 ////

void __thiscall FUN_00981500(void *this,undefined4 *param_1,int param_2,void *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_01050c48;
  DAT_01050c48 = this;
  if (*(void **)((int)this + 0x78) != (void *)0x0) {
    uVar2 = FUN_00a03c40(*(void **)((int)this + 0x78),param_1);
    *(uint *)((int)this + 0xa0) =
         *(uint *)((int)this + 0xa0) ^ (uVar2 ^ *(uint *)((int)this + 0xa0)) & 1;
    *(undefined4 **)(*(int *)((int)this + 0x78) + 0x84) = param_1;
  }
  uVar2 = *(uint *)((int)this + 0x9c);
  *(uint *)((int)this + 0x9c) = uVar2 | 0x80000000;
  if (((uVar2 & 0x800000) == 0) && (param_3 != (void *)0x0)) {
    FUN_009a0760(param_3,*(int *)((int)this + 0xb4),this,(int)param_1,param_2);
  }
  DAT_01050c48 = (void *)uVar1;
  return;
}


//// FUNCTION FUN_00981580 @ 00981580 ////

void __fastcall FUN_00981580(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)param_1[2];
  if (puVar1 != (uint *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    iVar3 = (int)param_1 + (-8 - (int)puVar1);
    uVar2 = 1 << (((char)(iVar3 / 0xc) + (char)(iVar3 >> 0x1f)) -
                  (char)((longlong)iVar3 * 0x2aaaaaab >> 0x3f) & 0x1fU);
    *puVar1 = *puVar1 | uVar2;
    puVar1[1] = puVar1[1] | (int)uVar2 >> 0x1f;
  }
  return;
}


//// FUNCTION FUN_009815d0 @ 009815d0 ////

void __fastcall FUN_009815d0(int param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00981680 @ 00981680 ////

int * __cdecl FUN_00981680(int param_1)

{
  int *piVar1;
  
  piVar1 = operator_new(0xc);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1[1] = 0;
    piVar1[2] = 0;
    if (param_1 != 0) {
      InterlockedIncrement((LONG *)(param_1 + 0x10));
    }
    return piVar1;
  }
  return (int *)0x0;
}


//// FUNCTION FUN_009816c0 @ 009816c0 ////

int * __thiscall FUN_009816c0(void *this,byte param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)this;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) == 0) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  _free(this);
}


//// FUNCTION MeshInstance_Constructor @ 009817d0 ////

undefined4 * __fastcall MeshInstance_Constructor(undefined4 *param_1)

{
  float10 fVar1;
  float fVar2;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5978;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(param_1);
  *param_1 = &PTR_FUN_00d70b04;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb9) = 0xff;
  *(undefined1 *)((int)param_1 + 0xba) = 0xff;
  *(undefined1 *)((int)param_1 + 0xbb) = 0xff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x29] = DAT_01050c40;
  DAT_01050c40 = DAT_01050c40 + 1;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x34] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2d] = 1;
  param_1[0x3e] = 0;
  param_1[0x27] = param_1[0x27] & 0xfffffc01 | 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x43] = DAT_01050c4c;
  local_4 = 0;
  local_14 = 0;
  DAT_01050c4c = param_1;
  param_1[0x31] = 0;
  param_1[0x3f] = 0;
  fVar2 = 1.0;
  local_18 = &stack0xffffffcc;
  param_1[0x27] = param_1[0x27] & 0xffffc3ff;
  param_1[0x40] = 0;
  fVar1 = FUN_004012c0(0.0);
  local_18 = (undefined1 *)0x0;
  local_14 = 0;
  local_10 = 0;
  FUN_0097f2e0(param_1,(float *)&local_18,(float)fVar1,fVar2);
  *(undefined2 *)(param_1 + 0x26) = 0;
  param_1[0x26] = param_1[0x26] & 0xf0ffffff;
  *(undefined1 *)((int)param_1 + 0x9a) = 0;
  param_1[0x33] = 0x3f800000;
  param_1[0x26] = param_1[0x26] & 0xfffffff;
  param_1[0x32] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = 0;
  param_1[0x27] = param_1[0x27] & 0x3fff;
  param_1[0x42] = 0;
  param_1[0x28] = param_1[0x28] & 0xffff1004 | 0x1004;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00981a30 @ 00981a30 ////

int * __thiscall FUN_00981a30(void *this,byte param_1)

{
  FUN_00980380(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00981a50 @ 00981a50 ////

void __cdecl FUN_00981a50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    for (piVar1 = *(int **)(param_2 + 0x84); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 == param_1) {
        *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
        return;
      }
    }
    piVar1 = FUN_00981680(param_1);
    piVar1[1] = *(int *)(param_2 + 0x84);
    *(int **)(param_2 + 0x84) = piVar1;
    piVar2 = FUN_00981680(param_2);
    piVar2[1] = *(int *)(param_1 + 0x88);
    *(int **)(param_1 + 0x88) = piVar2;
    piVar1[2] = param_3;
    piVar2[2] = param_3;
  }
  return;
}


//// FUNCTION FUN_00981ad0 @ 00981ad0 ////

void __fastcall FUN_00981ad0(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xcfffffff;
  puVar1 = *(undefined4 **)(param_1 + 0x8c);
  while( true ) {
    puVar3 = puVar1;
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      FUN_0097e8f0(param_1);
      return;
    }
    puVar1 = (undefined4 *)*puVar3;
    if (puVar1 != (undefined4 *)0x0) break;
    puVar2 = (uint *)puVar3[2];
    puVar1 = (undefined4 *)puVar3[1];
    if (puVar2 != (uint *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      iVar5 = (int)puVar3 + (-8 - (int)puVar2);
      uVar4 = 1 << (((char)(iVar5 / 0xc) + (char)(iVar5 >> 0x1f)) -
                    (char)((longlong)iVar5 * 0x2aaaaaab >> 0x3f) & 0x1fU);
      *puVar2 = *puVar2 | uVar4;
      puVar2[1] = puVar2[1] | (int)uVar4 >> 0x1f;
    }
  }
  FUN_0097e4f0(puVar1);
                    /* WARNING: Subroutine does not return */
  _free(puVar1);
}


//// FUNCTION FUN_00981b80 @ 00981b80 ////

void __thiscall FUN_00981b80(void *this,int param_1)

{
  undefined4 *puVar1;
  int *_Memory;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0xf4) == 0)) {
    puVar3 = *(undefined4 **)((int)this + 0x8c);
    puVar2 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      do {
        _Memory = (int *)*puVar3;
        if (*_Memory == param_1) {
          if (puVar2 == (undefined4 *)0x0) {
            *(undefined4 *)((int)this + 0x8c) = puVar3[1];
          }
          else {
            puVar2[1] = puVar3[1];
          }
          FUN_0097e4f0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        puVar1 = puVar3 + 1;
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00981bf0 @ 00981bf0 ////

void __thiscall FUN_00981bf0(void *this,int param_1,int param_2)

{
  void *pvVar1;
  
  if (*(char *)((int)this + 8) == '\0') {
    FUN_0097fd40(this);
  }
  if ((-1 < param_1) && (param_1 < (int)(*(uint *)((int)this + 8) & 0xff))) {
    pvVar1 = *(void **)(*(int *)((int)this + 4) + param_1 * 4);
    if (pvVar1 != (void *)0x0) {
      FUN_0099b400(pvVar1);
      *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4) = 0;
    }
    *(int *)(*(int *)((int)this + 4) + param_1 * 4) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00981c50 @ 00981c50 ////

void __thiscall FUN_00981c50(void *this,int param_1,int param_2,int param_3)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x8c);
  if (param_3 == -1) {
    iVar2 = 0;
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (iVar2 == 0) goto LAB_00981c9f;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 0xc) == param_3) goto LAB_00981c9f;
    }
  }
  this_00 = (void *)0x0;
LAB_00981c73:
  if (this_00 != (void *)0x0) {
    FUN_00981bf0(this_00,param_1,param_2);
  }
  return;
LAB_00981c9f:
  this_00 = (void *)*piVar1;
  goto LAB_00981c73;
}


//// FUNCTION FUN_00981cb0 @ 00981cb0 ////

int * __thiscall FUN_00981cb0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x20) = 0x3f800000;
  *(undefined4 *)((int)this + 0x10) = 0x3f800000;
  puVar2 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 0xff00;
  *(int *)((int)this + 0xc) = DAT_01050c44;
  DAT_01050c44 = DAT_01050c44 + 1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(int *)this = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return this;
}


//// FUNCTION FUN_00981d20 @ 00981d20 ////

void __thiscall FUN_00981d20(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  int *piVar5;
  
  if (param_1 != 0) {
    iVar3 = FUN_0097e350(this,1);
    FUN_00981b80(this,iVar3);
    FUN_00a26d00(param_1);
    this_00 = (void *)FUN_0097e350(this,0);
    if (this_00 != (void *)0x0) {
      for (iVar3 = FUN_009da080(this_00,0); iVar3 != -1; iVar3 = FUN_009da080(this_00,iVar3 + 1)) {
        iVar4 = 0;
        for (puVar1 = *(undefined4 **)((int)this + 0x8c); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)puVar1[1]) {
          if (iVar4 == 0) {
            piVar5 = (int *)*puVar1;
            goto LAB_00981d8e;
          }
          iVar4 = iVar4 + 1;
        }
        piVar5 = (int *)0x0;
LAB_00981d8e:
        if (piVar5 != (int *)0x0) {
          if ((char)piVar5[2] == '\0') {
            FUN_0097fd40(piVar5);
          }
          if ((-1 < iVar3) && (iVar3 < (int)(piVar5[2] & 0xffU))) {
            pvVar2 = *(void **)(piVar5[1] + iVar3 * 4);
            if (pvVar2 != (void *)0x0) {
              FUN_0099b400(pvVar2);
              *(undefined4 *)(piVar5[1] + iVar3 * 4) = 0;
            }
            *(int *)(piVar5[1] + iVar3 * 4) = param_1;
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00981df0 @ 00981df0 ////

void __thiscall FUN_00981df0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  
  pvVar2 = (void *)FUN_0097e350(this,0);
  if (pvVar2 != (void *)0x0) {
    FUN_009dc300((int)pvVar2);
    iVar3 = FUN_009da040(pvVar2,(char *)*param_1);
    if (iVar3 != -1) {
      pvVar2 = FUN_0099bb50((char *)*param_2,0,0,0,'\0');
      iVar4 = 0;
      for (puVar1 = *(undefined4 **)((int)this + 0x8c); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)puVar1[1]) {
        if (iVar4 == 0) {
          this_00 = (void *)*puVar1;
          goto LAB_00981e51;
        }
        iVar4 = iVar4 + 1;
      }
      this_00 = (void *)0x0;
LAB_00981e51:
      if (this_00 != (void *)0x0) {
        FUN_00981bf0(this_00,iVar3,(int)pvVar2);
      }
      if (pvVar2 != (void *)0x0) {
        FUN_0099b400(pvVar2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00981ee0 @ 00981ee0 ////

void __thiscall FUN_00981ee0(void *this,int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  char local_100 [256];
  
  piVar4 = *(int **)((int)this + 0x8c);
  if (piVar4 != (int *)0x0) {
    while (*(int *)(*piVar4 + 0xc) != param_1) {
      piVar4 = (int *)piVar4[1];
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    if ((((int *)*piVar4 != (int *)0x0) && (iVar1 = *(int *)*piVar4, iVar1 != 0)) &&
       (iVar6 = 0, 0 < *(int *)(iVar1 + 0x38))) {
      do {
        pcVar2 = *(char **)(*(int *)(iVar1 + 0x3c) + iVar6 * 4);
        bVar3 = FUN_009ada70(pcVar2);
        if (bVar3) {
          FUN_009ad980(&DAT_010b9588,local_100,pcVar2,param_2);
          pvVar5 = FUN_0099bb50(local_100,0,0,0,'\0');
          FUN_00981c50(this,iVar6,(int)pvVar5,param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_0099b400(pvVar5);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar1 + 0x38));
    }
  }
  return;
}


//// FUNCTION FUN_00981fc0 @ 00981fc0 ////

void __thiscall FUN_00981fc0(void *this,byte *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  piVar6 = *(int **)((int)this + 0x8c);
  if (param_3 == -1) {
    iVar5 = 0;
    for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      if (iVar5 == 0) goto LAB_0098204e;
      iVar5 = iVar5 + 1;
    }
  }
  else {
    for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
      if (*(int *)(*piVar6 + 0xc) == param_3) goto LAB_0098204e;
    }
  }
  piVar6 = (int *)0x0;
LAB_00981fe5:
  if (((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != 0)) &&
     (iVar8 = 0, 0 < *(int *)(iVar5 + 0x38))) {
    do {
      pbVar2 = *(byte **)(*(int *)(iVar5 + 0x3c) + iVar8 * 4);
      pbVar7 = param_1;
      do {
        bVar1 = *pbVar2;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00982052:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00982057;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00982052;
        pbVar2 = pbVar2 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00982057:
      if (iVar3 == 0) {
        pvVar4 = FUN_0099bb50(param_2,0,0,0,'\0');
        FUN_00981bf0(piVar6,iVar8,(int)pvVar4);
        if (pvVar4 != (void *)0x0) {
          FUN_0099b400(pvVar4);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(iVar5 + 0x38));
  }
  return;
LAB_0098204e:
  piVar6 = (int *)*piVar6;
  goto LAB_00981fe5;
}


//// FUNCTION FUN_009820a0 @ 009820a0 ////

void __fastcall FUN_009820a0(void *param_1)

{
  byte *pbVar1;
  
  if ((*(uint *)((int)param_1 + 0x9c) & 0x20000) == 0) {
    pbVar1 = (byte *)FUN_0097e350(param_1,0);
    if ((pbVar1 != (byte *)0x0) && ((*(uint *)(pbVar1 + 0xe4) & 0x800) != 0)) {
      FUN_009da570(pbVar1);
      if (*(int *)((int)param_1 + 0x78) == 0) {
        FUN_0097e2b0((int)param_1);
      }
      FUN_00980250(param_1);
      FUN_009a3d70(param_1);
      *(uint *)((int)param_1 + 0x9c) = *(uint *)((int)param_1 + 0x9c) | 0x20000;
    }
  }
  return;
}


//// FUNCTION FUN_00982100 @ 00982100 ////

void __fastcall FUN_00982100(void *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)param_1 + 0x9c);
  if ((uVar1 & 0x2000) != 0) {
    if (((uVar1 & 0x1000000) == 0) && (*(char *)((int)param_1 + 0x9a) == '\0')) {
      uVar1 = FUN_009804d0(param_1);
      *(uint *)((int)param_1 + 0x9c) =
           *(uint *)((int)param_1 + 0x9c) ^
           ((uVar1 & 0xff) << 0xd ^ *(uint *)((int)param_1 + 0x9c)) & 0x2000;
      return;
    }
    *(uint *)((int)param_1 + 0x9c) = uVar1 & 0xffffdfff;
  }
  return;
}


//// FUNCTION FUN_00982150 @ 00982150 ////

void __thiscall FUN_00982150(void *this,undefined4 *param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (((param_2 != (byte *)0x0) && (param_3 != (int *)0x0)) && (iVar4 = *param_3, -1 < iVar4)) {
    iVar2 = FUN_0097e350(this,0);
    if ((iVar2 != 0) && (iVar4 < *(int *)(iVar2 + 0x48))) {
      do {
        pbVar3 = (byte *)(*param_3 * 0x50 + *(int *)(iVar2 + 0x4c));
        pbVar6 = param_2;
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < *pbVar3;
          if (bVar1 != *pbVar3) {
LAB_009821b6:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_009821bb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < pbVar3[1];
          if (bVar1 != pbVar3[1]) goto LAB_009821b6;
          pbVar6 = pbVar6 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_009821bb:
        if (iVar4 == 0) {
          iVar4 = *param_3;
          iVar2 = *(int *)(iVar2 + 0x4c);
          *param_3 = iVar4 + 1;
          puVar7 = (undefined4 *)(iVar4 * 0x50 + 0x20 + iVar2);
          for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
            *param_1 = *puVar7;
            puVar7 = puVar7 + 1;
            param_1 = param_1 + 1;
          }
          return;
        }
        iVar4 = *param_3 + 1;
        *param_3 = iVar4;
      } while (iVar4 < *(int *)(iVar2 + 0x48));
    }
    *param_3 = 0;
  }
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


//// FUNCTION FUN_00982230 @ 00982230 ////

int __thiscall
FUN_00982230(void *this,int param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  void *local_104;
  char local_100 [256];
  
  if (param_1 == 0) {
    return -1;
  }
  _sprintf(local_100,"Data\\Audio\\LipsSync\\%s.lps",param_1);
  pvVar2 = (void *)FUN_00a29bd0(local_100);
  local_128 = 0;
  local_124 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_104 = (void *)0x0;
  local_120 = 0xffffffff;
  local_124 = FUN_009b01a0(param_1);
  local_108 = param_2;
  if (param_3 != '\0') {
    local_11c = *(undefined4 *)((int)this + 0x3c);
    local_118 = *(undefined4 *)((int)this + 0x40);
    local_114 = *(undefined4 *)((int)this + 0x44);
    local_128 = local_128 | 3;
    local_104 = this;
  }
  iVar4 = -2;
  uVar3 = FUN_00a30610();
  if ((char)uVar3 == '\0') {
    iVar4 = FUN_009b1530((byte *)&local_128,4,0,'\0',param_4,'\0',0x3f800000,0.0);
  }
  if (pvVar2 != (void *)0x0) {
    if (((iVar4 != -1) && (*(int *)((int)this + 0x78) != 0)) &&
       (iVar1 = *(int *)(*(int *)((int)this + 0x78) + 0x178), iVar1 != 0)) {
      FUN_00a30f20((void *)(iVar1 + 0x124),iVar4,(int)pvVar2);
    }
    FUN_00a29960(pvVar2);
  }
  return iVar4;
}


//// FUNCTION FUN_00982360 @ 00982360 ////

void __fastcall FUN_00982360(void *param_1)

{
  int *this;
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf5998;
  local_c = ExceptionList;
  iVar7 = 0;
  ExceptionList = &local_c;
  iVar4 = FUN_0097e350(param_1,0);
  uVar2 = DAT_01050c48;
  DAT_0105eb48 = iVar4;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x70) != 0)) {
    DAT_01050c48 = (void *)uVar2;
    if (*(int *)(iVar4 + 0x2c) != 0) {
      DAT_01050c48 = param_1;
      FUN_009a1480(&DAT_0105c2e8,(undefined4 *)((int)param_1 + 0x18),'\x01');
      iVar5 = *(int *)(iVar4 + 0x28);
      local_4 = 0;
      if (iVar5 != 0) {
        do {
          if (*(short *)(*(int *)(*(int *)(iVar4 + 0x2c) + iVar7 * 4) + 0x26) == 0xb) {
            DAT_0105eb40 = iVar7;
            FUN_00a46cf0(*(int **)(*(int *)(iVar4 + 0x2c) + iVar7 * 4));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != iVar5);
      }
      local_4 = 0xffffffff;
      DAT_01050c48 = (void *)uVar2;
      if (param_1 != (void *)0x0) {
        FUN_009a1480(&DAT_0105c2e8,(undefined4 *)((int)param_1 + 0x18),'\x01');
      }
    }
    iVar7 = 0;
    if ((*(int *)((int)param_1 + 0xf0) == 0) && (iVar5 = FUN_0097e350(param_1,0), iVar5 != 0)) {
      FUN_009dc300(iVar5);
      if ((*(int **)(iVar5 + 0x70) != (int *)0x0) && (iVar5 = **(int **)(iVar5 + 0x70), 0 < iVar5))
      {
        FUN_00980a00(param_1,iVar5);
        **(undefined4 **)((int)param_1 + 0xf0) = 0xffb2dffc;
      }
    }
    this = *(int **)(iVar4 + 0x70);
    local_1c = 0;
    if (0 < *this) {
      iVar4 = 0;
      do {
        local_20 = *(undefined4 *)(iVar4 + *(int *)((int)param_1 + 0xf0));
        *(undefined4 *)(this[1] + 0x88 + iVar7) =
             *(undefined4 *)(*(int *)((int)param_1 + 0xf0) + 4 + iVar4);
        *(undefined4 *)(this[1] + 0x8c + iVar7) =
             *(undefined4 *)(*(int *)((int)param_1 + 0xf0) + 8 + iVar4);
        uVar1 = *(uint *)(this[1] + 0x6c + iVar7);
        *(uint *)(this[1] + 0x6c + iVar7) =
             uVar1 ^ (*(int *)(*(int *)((int)param_1 + 0xf0) + 0xc + iVar4) << 10 ^ uVar1) & 0x800;
        uVar1 = *(uint *)(this[1] + 0x6c + iVar7);
        *(uint *)(this[1] + 0x6c + iVar7) =
             uVar1 ^ (*(int *)(*(int *)((int)param_1 + 0xf0) + 0xc + iVar4) << 7 ^ uVar1) & 0x200;
        if ((*(byte *)(this[1] + 0x6c + iVar7) & 2) == 0) {
          if ((*(byte *)(this[1] + 0x6c + iVar7) & 8) != 0) {
            local_20 = 0xff3e3e6b;
          }
        }
        else {
          local_20 = 0xff3e3e6b;
        }
        DAT_00e69488 = 0x40400000;
        uVar1 = *(uint *)(this[1] + 0x6c + iVar7);
        iVar5 = 0;
        if ((uVar1 & 1) != 0) {
          iVar5 = DAT_010b938c;
        }
        if ((uVar1 & 4) != 0) {
          DAT_00e69488 = 0x3f800000;
          iVar5 = DAT_010b9390;
        }
        FUN_00a144f0((void *)(this[1] + iVar7),(undefined4 *)((int)param_1 + 0x18),local_20,iVar5);
        *(uint *)(*(int *)((int)param_1 + 0xf0) + 0xc + iVar4) =
             *(uint *)(*(int *)((int)param_1 + 0xf0) + 0xc + iVar4) & 0xfffffffb;
        iVar5 = DAT_010b939c;
        if ((*(byte *)(*(int *)((int)param_1 + 0xf0) + 0xc + iVar4) & 1) != 0) {
          DAT_00e69488 = 0x3f800000;
          uVar2 = *(undefined4 *)(iVar4 + *(int *)((int)param_1 + 0xf0));
          if (*(void **)((int)param_1 + 0xf4) == (void *)0x0) {
            iVar6 = 0;
            for (piVar3 = *(int **)((int)param_1 + 0x8c); piVar3 != (int *)0x0;
                piVar3 = (int *)piVar3[1]) {
              if (iVar6 == 0) {
                if ((int *)*piVar3 != (int *)0x0) {
                  iVar6 = *(int *)*piVar3;
                  goto LAB_00982611;
                }
                break;
              }
              iVar6 = iVar6 + 1;
            }
          }
          else {
            iVar6 = FUN_0097e350(*(void **)((int)param_1 + 0xf4),0);
LAB_00982611:
            if (iVar6 != 0) {
              FUN_009dc300(iVar6);
              if ((((*(int **)(iVar6 + 0x70) != (int *)0x0) &&
                   (iVar6 = **(int **)(iVar6 + 0x70), iVar6 != 0)) && (-1 < iVar7)) &&
                 (local_1c < iVar6)) {
                FUN_00980a00(param_1,iVar6);
                *(undefined4 *)(iVar4 + *(int *)((int)param_1 + 0xf0)) = 0xffffffff;
              }
            }
          }
          FUN_00a144f0((void *)(this[1] + iVar7),(undefined4 *)((int)param_1 + 0x18),local_20,iVar5)
          ;
          if (*(void **)((int)param_1 + 0xf4) == (void *)0x0) {
            iVar5 = 0;
            for (piVar3 = *(int **)((int)param_1 + 0x8c); piVar3 != (int *)0x0;
                piVar3 = (int *)piVar3[1]) {
              if (iVar5 == 0) {
                if ((int *)*piVar3 != (int *)0x0) {
                  iVar5 = *(int *)*piVar3;
                  goto LAB_009826a3;
                }
                break;
              }
              iVar5 = iVar5 + 1;
            }
          }
          else {
            iVar5 = FUN_0097e350(*(void **)((int)param_1 + 0xf4),0);
LAB_009826a3:
            if (iVar5 != 0) {
              FUN_009dc300(iVar5);
              if (((*(int **)(iVar5 + 0x70) != (int *)0x0) &&
                  (iVar5 = **(int **)(iVar5 + 0x70), iVar5 != 0)) &&
                 ((-1 < iVar7 && (local_1c < iVar5)))) {
                FUN_00980a00(param_1,iVar5);
                *(undefined4 *)(iVar4 + *(int *)((int)param_1 + 0xf0)) = uVar2;
              }
            }
          }
        }
        local_1c = local_1c + 1;
        iVar7 = iVar7 + 0x90;
        iVar4 = iVar4 + 0x10;
      } while (local_1c < *this);
    }
    FUN_00a15580(this,(int)param_1);
    iVar4 = 1;
    if (1 < *this) {
      iVar7 = 0x90;
      do {
        FUN_00a157b0((void *)(this[1] + iVar7),(int)param_1,0xff1f1f6b);
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x90;
      } while (iVar4 < *this);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00982760 @ 00982760 ////

void __fastcall FUN_00982760(int *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  float unaff_EDI;
  ulonglong uVar5;
  float local_10 [3];
  float local_4;
  
  iVar3 = FUN_0097e350(param_1,0);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x70) != 0)) {
    if (DAT_0105c2e1 != '\0') {
      FUN_00982360(param_1);
    }
    DAT_00e66fc8 = 0;
    if ((*(byte *)((int)param_1 + 0x9f) & 1) == 0) {
      uVar5 = FUN_00acd42c();
      iVar4 = (uint)*(byte *)((int)param_1 + 0x9a) - (int)uVar5;
      *(byte *)((int)param_1 + 0x9a) = (iVar4 < 1) - 1U & (byte)iVar4;
    }
    else {
      uVar5 = FUN_00acd42c();
      iVar4 = (uint)*(byte *)((int)param_1 + 0x9a) - (int)uVar5;
      if (iVar4 < 0xff) {
        *(char *)((int)param_1 + 0x9a) = (char)iVar4;
      }
      else {
        param_1[0x26] = param_1[0x26] | 0xff0000;
      }
    }
    if ((*(char *)((int)param_1 + 0x9a) != -1) && (DAT_0105c9b4 != 0)) {
      FUN_00870760(local_10);
      FUN_00888020(0x98,1);
      uVar1 = param_1[0x27];
      param_1[0x27] = uVar1 & 0xfeffffff;
      local_4 = -((*(float *)(iVar3 + 0xdc) + *(float *)(iVar3 + 0xd0) + 3.3) *
                  (float)*(byte *)((int)param_1 + 0x9a) * 0.003921569);
      (**(code **)(*g_pDirect3DDevice + 0xdc))(g_pDirect3DDevice,0);
      uVar2 = DAT_0105eae8;
      DAT_0105eae8 = 1;
      (**(code **)(*param_1 + 8))();
      DAT_0105eae8 = uVar2;
      FUN_00888020(0x98,3);
      local_10[0] = 3.3 - unaff_EDI;
      (**(code **)(*g_pDirect3DDevice + 0xdc))(g_pDirect3DDevice,0,&stack0xffffffe4);
      (**(code **)(*g_pDirect3DDevice + 0xdc))(g_pDirect3DDevice,1,&stack0xffffffd8);
      FUN_0097e660(param_1);
      FUN_00888020(0x98,0);
      param_1[0x27] =
           param_1[0x27] ^ ((uint)((byte)(uVar1 >> 0x18) & 1) << 0x18 ^ param_1[0x27]) & 0x1000000;
    }
    DAT_00e66fc8 = 1;
  }
  return;
}


//// FUNCTION FUN_00982950 @ 00982950 ////

void __thiscall FUN_00982950(void *this,int param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((int)this + 0xf4) != param_1) {
    FUN_00981ad0((int)this);
    puVar4 = *(undefined4 **)((int)this + 0xf4);
    if (puVar4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar4 + 4);
      uVar1 = DAT_0105b588;
      if ((LVar2 == 0) && (DAT_0105b588 = 1, puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
      DAT_0105b588 = uVar1;
      *(undefined4 *)((int)this + 0xf4) = 0;
    }
    *(int *)((int)this + 0xf4) = param_1;
    if (param_1 != 0) {
      *(uint *)((int)this + 0x9c) =
           *(uint *)((int)this + 0x9c) ^
           (*(uint *)(param_1 + 0x9c) ^ *(uint *)((int)this + 0x9c)) & 0x100000;
      puVar4 = (undefined4 *)(param_1 + 0xd4);
      puVar5 = (undefined4 *)((int)this + 0xd4);
      for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      InterlockedIncrement((LONG *)(param_1 + 0x10));
      iVar3 = *(int *)(*(int *)((int)this + 0xf4) + 0x8c);
      if (*(int *)((int)this + 0x8c) != iVar3) {
        *(int *)((int)this + 0x8c) = iVar3;
        FUN_0097e8f0((int)this);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00982a20 @ 00982a20 ////

void __cdecl FUN_00982a20(int param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  
  if ((param_1 != 0) && (pvVar2 = DAT_01050c4c, *(int *)(param_1 + 0x20) != 1)) {
    for (; pvVar2 != (void *)0x0; pvVar2 = *(void **)((int)pvVar2 + 0x10c)) {
      if (*(void **)((int)pvVar2 + 0xf4) == (void *)0x0) {
        iVar3 = 0;
        for (piVar1 = *(int **)((int)pvVar2 + 0x8c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]
            ) {
          if (iVar3 == 0) {
            if ((int *)*piVar1 != (int *)0x0) {
              iVar3 = *(int *)*piVar1;
              goto LAB_00982a6e;
            }
            break;
          }
          iVar3 = iVar3 + 1;
        }
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0097e350(*(void **)((int)pvVar2 + 0xf4),0);
      }
LAB_00982a6e:
      if (iVar3 == param_1) {
        FUN_009811d0(pvVar2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00982a90 @ 00982a90 ////

void __thiscall FUN_00982a90(void *this,int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  void *this_00;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  void *this_01;
  char *pcVar10;
  uint uVar11;
  int local_158;
  char *local_14c;
  uint local_148;
  uint local_144;
  char local_140 [20];
  char *local_12c;
  uint local_128;
  uint local_124;
  char local_120 [20];
  char local_10c [23];
  char local_f5 [233];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar3 = DAT_0105cc5c;
  puStack_8 = &LAB_00cf59d1;
  local_c = ExceptionList;
  DAT_0105cc5c = 0;
  local_4 = 0;
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xf < param_1) {
    param_1 = 0xf;
  }
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff | param_1 << 0x1c;
  this_00 = (void *)FUN_0097e350(this,0);
  if (this_00 != (void *)0x0) {
    FUN_009dc300((int)this_00);
    local_158 = 0;
    iVar5 = FUN_009d9ff0(this_00,0);
    while (-1 < iVar5) {
      pcVar10 = *(char **)(*(int *)((int)this_00 + 0x3c) + iVar5 * 4);
      pcVar6 = pcVar10;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      iVar7 = (int)pcVar6 - (int)(pcVar10 + 1);
      if (((6 < iVar7) && (pcVar10[iVar7 + -6] == '_')) && (pcVar10[iVar7 + -5] == '0')) {
        _sprintf(local_10c,"Data\\Textures\\LightMap\\%s");
        pcVar10 = local_10c;
        do {
          pcVar6 = pcVar10;
          local_140[0] = *pcVar6;
          pcVar10 = pcVar6 + 1;
        } while (local_140[0] != '\0');
        pcVar6[-5] = (char)param_1 + '0';
        local_14c = local_140;
        pcVar10 = local_10c;
        local_148 = 0;
        local_144 = 0x14;
        do {
          cVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar4 != '\0');
        uVar11 = (int)pcVar10 - (int)(local_10c + 1);
        if (0x13 < uVar11) {
          local_144 = uVar11 + 0x20 & 0xffffffe0;
          local_14c = _malloc(local_144);
        }
        _strncpy(local_14c,local_10c,uVar11);
        local_14c[uVar11] = '\0';
        local_4._0_1_ = 1;
        local_148 = uVar11;
        uVar8 = FUN_009d3660(&local_14c,(uint *)0x0);
        cVar4 = (char)uVar8;
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
          _free(local_14c);
        }
        if (cVar4 == '\0') {
          if ((*(uint *)((int)this + 0x98) & 0xf0000000) == 0x40000000) {
            *(uint *)((int)this + 0x98) = *(uint *)((int)this + 0x98) & 0xfffffff;
            local_12c = local_120;
            pcVar10 = local_10c;
            local_124 = 0x14;
            param_1 = 0;
            pcVar6[-5] = '0';
            local_128 = 0;
            do {
              cVar1 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar1 != '\0');
            uVar11 = (int)pcVar10 - (int)(local_10c + 1);
            local_120[0] = cVar4;
            if (0x13 < uVar11) {
              local_124 = uVar11 + 0x20 & 0xffffffe0;
              local_12c = _malloc(local_124);
            }
            _strncpy(local_12c,local_10c,uVar11);
            local_12c[uVar11] = '\0';
            local_4._0_1_ = 2;
            local_128 = uVar11;
            uVar8 = FUN_009d3660(&local_12c,(uint *)0x0);
            local_4 = (uint)local_4._1_3_ << 8;
            if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
              _free(local_12c);
            }
            if ((char)uVar8 != '\0') goto LAB_00982d1e;
          }
        }
        else {
LAB_00982d1e:
          pvVar9 = FUN_0099bb50(local_f5,0,0,0,'\0');
          if (pvVar9 != (void *)0x0) {
            FUN_00a26d00((int)pvVar9);
            iVar7 = 0;
            for (puVar2 = *(undefined4 **)((int)this + 0x8c); puVar2 != (undefined4 *)0x0;
                puVar2 = (undefined4 *)puVar2[1]) {
              if (iVar7 == 0) {
                this_01 = (void *)*puVar2;
                goto LAB_00982d5e;
              }
              iVar7 = iVar7 + 1;
            }
            this_01 = (void *)0x0;
LAB_00982d5e:
            if (this_01 != (void *)0x0) {
              FUN_00981bf0(this_01,iVar5,(int)pvVar9);
            }
            FUN_0099b400(pvVar9);
          }
        }
      }
      local_158 = local_158 + 1;
      iVar5 = FUN_009d9ff0(this_00,local_158);
    }
  }
  DAT_0105cc5c = uVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00982dc0 @ 00982dc0 ////

int __fastcall FUN_00982dc0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_009815d0(param_1);
  return param_1;
}


//// FUNCTION FUN_00982de0 @ 00982de0 ////

void __fastcall FUN_00982de0(int *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  if (param_1 == (int *)0x0) {
    return;
  }
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
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00983060 @ 00983060 ////

void __cdecl FUN_00983060(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    piVar3 = *(int **)(param_2 + 0x84);
    piVar2 = (int *)0x0;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      if (*piVar1 == param_1) {
        if (piVar1[2] == param_3) {
          if (piVar2 == (int *)0x0) {
            *(int *)(param_2 + 0x84) = piVar1[1];
          }
          else {
            piVar2[1] = piVar1[1];
          }
          FUN_00982de0(piVar1);
        }
        break;
      }
      piVar2 = piVar1;
      piVar3 = (int *)piVar1[1];
    }
    piVar3 = *(int **)(param_1 + 0x88);
    piVar2 = (int *)0x0;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      if (*piVar1 == param_2) {
        if (piVar1[2] != param_3) {
          return;
        }
        if (piVar2 == (int *)0x0) {
          *(int *)(param_1 + 0x88) = piVar1[1];
          FUN_00982de0(piVar1);
          return;
        }
        piVar2[1] = piVar1[1];
        FUN_00982de0(piVar1);
        return;
      }
      piVar2 = piVar1;
      piVar3 = (int *)piVar1[1];
    }
  }
  return;
}


//// FUNCTION MeshInstance_AddMeshWithChildren @ 00983100 ////

undefined4 __thiscall MeshInstance_AddMeshWithChildren(void *this,int param_1,byte param_2)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  void **ppvVar11;
  char *pcVar12;
  void *local_120 [2];
  uint local_118;
  char local_100 [256];
  
  iVar9 = 0;
  if ((param_1 == 0) || (*(int *)((int)this + 0xf4) != 0)) {
    return 0xffffffff;
  }
  piVar2 = (int *)FUN_0097ee30();
  *piVar2 = 0;
  piVar2[1] = 0;
  pvVar3 = operator_new(0x44);
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00981cb0(pvVar3,param_1);
  }
  *piVar2 = (int)piVar4;
  piVar4[2] = piVar4[2] ^ ((uint)param_2 << 0x13 ^ piVar4[2]) & 0x80000;
  piVar2[1] = 0;
  iVar5 = *(int *)((int)this + 0x8c);
  do {
    iVar8 = iVar5;
    if (iVar8 == 0) {
      *(int **)((int)this + 0x8c) = piVar2;
      goto LAB_00983193;
    }
    iVar5 = *(int *)(iVar8 + 4);
  } while (*(int *)(iVar8 + 4) != 0);
  *(int **)(iVar8 + 4) = piVar2;
LAB_00983193:
  iVar5 = *(int *)(param_1 + 0xb8);
  if (0 < iVar5) {
    iVar8 = 0;
    do {
      if ((iVar8 < 0) || (iVar5 <= iVar9)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 0xbc) + iVar8;
      }
      _sprintf(local_100,"%s.msh",iVar5);
      pbVar6 = FUN_009de1d0(local_100,1);
      MeshInstance_AddMeshWithChildren(this,(int)pbVar6,0);
      if (pbVar6 != (byte *)0x0) {
        FUN_009de3b0(pbVar6);
      }
      iVar5 = *(int *)(param_1 + 0xb8);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x20;
    } while (iVar9 < iVar5);
  }
  if ((((*(int *)(param_1 + 0x40) != 0) && ((*(uint *)(*(int *)(param_1 + 0x40) + 8) & 0x100) == 0))
      && (*(int *)((int)this + 0x78) != 0)) &&
     (puVar7 = *(undefined4 **)(*(int *)((int)this + 0x78) + 0x178), puVar7 != (undefined4 *)0x0)) {
    FUN_00a31550(puVar7);
                    /* WARNING: Subroutine does not return */
    _free(puVar7);
  }
  FUN_0097e8f0((int)this);
  uVar1 = *(uint *)((int)this + 0x9c);
  *(uint *)((int)this + 0x9c) =
       ((*(int *)(param_1 + 0xe4) << 6 | uVar1) ^ uVar1) & 0x10000000 ^ uVar1;
  if ((*(uint *)(param_1 + 0xe4) & 0x10000000) != 0) {
    pcVar12 = "scaling";
    ppvVar11 = local_120;
    pvVar3 = (void *)FUN_0097e350(this,0);
    puVar7 = FUN_009ddf60(pvVar3,ppvVar11,pcVar12);
    dVar10 = _atof((char *)*puVar7);
    *(float *)((int)this + 0xcc) = (float)dVar10;
    if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
      _free(local_120[0]);
    }
  }
  return *(undefined4 *)(*piVar2 + 0xc);
}


//// FUNCTION FUN_009832f0 @ 009832f0 ////

void __thiscall FUN_009832f0(void *this,float *param_1,int param_2,int param_3)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  void *unaff_EBX;
  float *pfVar4;
  undefined1 unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf59eb;
  local_c = ExceptionList;
  if (((param_1 != (float *)0x0) && (param_2 < param_3)) && (-1 < param_2)) {
    ExceptionList = &local_c;
    uVar1 = FUN_0097ec60(param_1);
    if (*(int *)((int)this + 0xf8) == 0) {
      if ((char)uVar1 != '\0') {
        ExceptionList = unaff_EBX;
        return;
      }
      pvVar2 = operator_new(0xc);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00982dc0((int)pvVar2);
      }
      local_4 = 0xffffffff;
      *(int *)((int)this + 0xf8) = iVar3;
    }
    if (**(int **)((int)this + 0xf8) != param_3) {
      FUN_009815d0((int)*(int **)((int)this + 0xf8));
    }
    pfVar4 = (float *)(*(int *)(*(int *)((int)this + 0xf8) + 4) + param_2 * 0x30);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *param_1;
      param_1 = param_1 + 1;
      pfVar4 = pfVar4 + 1;
    }
    *(undefined1 *)(param_2 + *(int *)(*(int *)((int)this + 0xf8) + 8)) = unaff_retaddr;
  }
  ExceptionList = unaff_EBX;
  return;
}


//// FUNCTION FUN_009833d0 @ 009833d0 ////

void __thiscall FUN_009833d0(void *this,undefined4 *param_1,byte *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int local_34;
  undefined4 local_30 [12];
  
  local_34 = 0;
  FUN_00982150(this,local_30,param_2,&local_34);
  iVar1 = local_34;
  if (local_34 != 0) {
    FUN_009aa830(local_30,(float *)((int)this + 0x18));
  }
  if (param_3 != 0) {
    *(bool *)param_3 = iVar1 != 0;
  }
  puVar2 = local_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00983440 @ 00983440 ////

void __cdecl FUN_00983440(int param_1,int param_2)

{
  int *piVar1;
  
  if (((param_2 != param_1) && (param_2 != 0)) && (param_1 != 0)) {
    piVar1 = *(int **)(param_2 + 0x88);
    while (piVar1 != (int *)0x0) {
      FUN_00983060(param_2,*piVar1,0);
      piVar1 = *(int **)(param_2 + 0x88);
    }
    for (piVar1 = *(int **)(param_1 + 0x88); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      FUN_00981a50(param_2,*piVar1,piVar1[2]);
    }
    for (piVar1 = *(int **)(param_1 + 0x84); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      FUN_00981a50(*piVar1,param_2,piVar1[2]);
    }
  }
  return;
}


//// FUNCTION FUN_00983b10 @ 00983b10 ////

void __cdecl FUN_00983b10(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
LAB_00983b20:
  do {
    bVar2 = false;
    for (piVar1 = *(int **)(param_1 + 0x88); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (piVar1[2] == param_2) {
        FUN_00983060(param_1,*piVar1,param_2);
        bVar2 = true;
        break;
      }
    }
    for (piVar1 = *(int **)(param_1 + 0x84); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (piVar1[2] == param_2) {
        FUN_00983060(*piVar1,param_1,param_2);
        goto LAB_00983b20;
      }
    }
    if (!bVar2) {
      return;
    }
  } while( true );
}


