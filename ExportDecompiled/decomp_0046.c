//// FUNCTION FUN_009f4d50 @ 009f4d50 ////

void __thiscall FUN_009f4d50(void *this,undefined4 *param_1)

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
  FUN_009f4b10(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009f4da0 @ 009f4da0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f4da0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  bool bVar6;
  uint _Count;
  uint *local_3b0;
  char *local_3ac;
  uint local_3a8;
  uint local_3a4;
  char local_3a0 [20];
  wchar_t *local_38c;
  uint local_388;
  uint local_384;
  undefined4 local_36c [18];
  int local_324;
  undefined4 local_320;
  char acStack_31c [4];
  char local_318 [260];
  char local_214 [260];
  char local_110 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8b7b;
  local_c = ExceptionList;
  bVar6 = false;
  DAT_010b6ff4 = 0;
  ExceptionList = &local_c;
  FUN_009c89a0(local_36c);
  local_4 = 0;
  FUN_009ca9d0(local_36c,"bd_*.dds","Data\\Textures\\BackDrops\\",(undefined1 *)0x1);
  if (local_324 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = local_320 - local_324 >> 2;
  }
joined_r0x009f4e0f:
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
    if (DAT_010b7004 == 0) {
      DAT_010b6ff4 = 0;
    }
    else {
      DAT_010b6ff4 = (int)DAT_010b7008 - DAT_010b7004 >> 2;
    }
    if (DAT_010b7014 == (void *)0x0) {
      DAT_010b7014 = (void *)0x0;
      DAT_010b7018 = 0;
      _DAT_010b701c = 0;
      local_4 = 0xffffffff;
      FUN_009c8560(local_36c);
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b7014);
  }
  __splitpath(*(char **)(local_324 + iVar3 * 4),(char *)0x0,(char *)0x0,local_110,local_214);
  _sprintf(local_318,"%s%s",local_110,local_214);
  FUN_009ac040(local_318);
  bVar2 = FUN_009ada70(local_318);
  if (bVar2) goto code_r0x009f4e93;
  goto LAB_009f4ec5;
code_r0x009f4e93:
  pcVar4 = local_318;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((pcVar4[(int)(acStack_31c + (-2 - (int)(local_318 + 1)))] == '0') &&
     (pcVar4[(int)(acStack_31c + (-1 - (int)(local_318 + 1)))] == '0')) {
LAB_009f4ec5:
    puVar5 = operator_new(0x24);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      local_3ac = local_3a0;
      pcVar4 = local_318;
      local_3a0[0] = '\0';
      local_3a8 = 0;
      local_3a4 = 0x14;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      _Count = (int)pcVar4 - (int)(local_318 + 1);
      local_3b0 = puVar5;
      if (0x13 < _Count) {
        local_3a4 = _Count + 0x20 & 0xffffffe0;
        local_3ac = _malloc(local_3a4);
      }
      _strncpy(local_3ac,local_318,_Count);
      local_3ac[_Count] = '\0';
      bVar6 = true;
      local_4 = CONCAT31(local_4._1_3_,2);
      local_3a8 = _Count;
      FUN_009acf60(&local_38c,&local_3ac);
      puVar5[1] = (uint)(puVar5 + 4);
      *(undefined2 *)(puVar5 + 4) = 0;
      puVar5[2] = 0;
      puVar5[3] = 10;
      FUN_004036d0(puVar5 + 1,local_38c,local_388);
      *puVar5 = *puVar5 & 0xfffffffe | 2;
      if (10 < local_384) {
                    /* WARNING: Subroutine does not return */
        _free(local_38c);
      }
    }
    local_4 = 0;
    local_3b0 = puVar5;
    if ((bVar6) && (bVar6 = false, 0x14 < local_3a4)) {
                    /* WARNING: Subroutine does not return */
      _free(local_3ac);
    }
    if ((DAT_010b7004 == 0) ||
       ((uint)(DAT_010b700c - DAT_010b7004 >> 2) <= (uint)((int)DAT_010b7008 - DAT_010b7004 >> 2)))
    {
      FUN_009f4b10(&DAT_010b7000,DAT_010b7008,1,&local_3b0);
    }
    else {
      *DAT_010b7008 = puVar5;
      DAT_010b7008 = DAT_010b7008 + 1;
    }
  }
  goto joined_r0x009f4e0f;
}


//// FUNCTION FUN_009f50a0 @ 009f50a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009f50a0(void *param_1,char *param_2)

{
  byte *pbVar1;
  void **ppvVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  char *local_4c;
  uint local_48;
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8b98;
  local_c = ExceptionList;
  if (DAT_010b7014 != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(DAT_010b7014);
  }
  DAT_010b7014 = (void *)0x0;
  DAT_010b7018 = 0;
  _DAT_010b701c = 0;
  if (param_1 != (void *)0x0) {
    bVar4 = false;
    iVar9 = 0;
    ExceptionList = &local_c;
    ppvVar2 = &local_c;
    if (0 < *(int *)((int)param_1 + 0x38)) {
      do {
        ExceptionList = ppvVar2;
        uStack_6c = 0x9f5113;
        iVar6 = _strncmp(*(char **)(*(int *)((int)param_1 + 0x3c) + iVar9 * 4),"bd_",3);
        if (iVar6 == 0) {
          bVar4 = true;
          break;
        }
        iVar9 = iVar9 + 1;
        ppvVar2 = ExceptionList;
      } while (iVar9 < *(int *)((int)param_1 + 0x38));
    }
    bVar3 = FUN_009daa10(param_1,"[proper dome]");
    if ((!bVar3) && ((bVar4 || (bVar4 = FUN_009daa10(param_1,"[dome backdrops]"), bVar4)))) {
      iVar9 = 0x18;
      bVar4 = true;
      pcVar10 = "015_fall_window_on_fire";
      pcVar11 = param_2;
      do {
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        bVar4 = *pcVar10 == *pcVar11;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      } while (bVar4);
      if (!bVar4) {
        iVar9 = 0x17;
        bVar4 = true;
        pcVar10 = "015_fall_from_building";
        pcVar11 = param_2;
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar4 = *pcVar10 == *pcVar11;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar4);
        if (!bVar4) {
          iVar9 = 0x13;
          bVar4 = true;
          pcVar10 = "015_window_explode";
          do {
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            bVar4 = *pcVar10 == *param_2;
            pcVar10 = pcVar10 + 1;
            param_2 = param_2 + 1;
          } while (bVar4);
          if (!bVar4) {
            iVar9 = 0;
            while( true ) {
              if (DAT_010b7004 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = DAT_010b7008 - DAT_010b7004 >> 2;
              }
              if (iVar6 <= iVar9) break;
              if ((DAT_010b6ffc == (code *)0x0) ||
                 (pbVar1 = *(byte **)(DAT_010b7004 + iVar9 * 4), (*pbVar1 & 1) != 0)) {
LAB_009f5292:
                FUN_009f4d50(&DAT_010b7010,(undefined4 *)(DAT_010b7004 + iVar9 * 4));
              }
              else {
                FUN_009ac940(&local_4c,(undefined4 *)(pbVar1 + 4));
                local_4 = 0;
                uStack_6c = 0x9f5200;
                uVar7 = FUN_00448220(&local_4c,&DAT_00d1a3f0,0,1);
                if (uVar7 != 0xffffffff) {
                  uStack_6c = 0x9f5215;
                  puVar8 = FUN_00430770(&local_4c,local_2c,0,uVar7);
                  FUN_004015d0(&local_4c,(char *)*puVar8,puVar8[1]);
                  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                    _free(local_2c[0]);
                  }
                }
                local_7c = local_70;
                local_70[0] = 0;
                local_78 = 0;
                local_74 = 0x14;
                FUN_004015d0(&local_7c,local_4c,local_48);
                cVar5 = (*DAT_010b6ffc)();
                local_4 = 0xffffffff;
                if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                if (cVar5 != '\0') goto LAB_009f5292;
              }
              iVar9 = iVar9 + 1;
            }
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009f52d0 @ 009f52d0 ////

undefined4 __cdecl FUN_009f52d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}


//// FUNCTION FUN_009f53b0 @ 009f53b0 ////

uint __fastcall FUN_009f53b0(int param_1)

{
  return *(uint *)(param_1 + 4) & 3;
}


//// FUNCTION FUN_009f5460 @ 009f5460 ////

int __fastcall FUN_009f5460(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_009f5640 @ 009f5640 ////

int __fastcall FUN_009f5640(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 6;
}


//// FUNCTION FUN_009f5a00 @ 009f5a00 ////

void __cdecl FUN_009f5a00(int *param_1)

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


//// FUNCTION FUN_009f5c60 @ 009f5c60 ////

void __cdecl FUN_009f5c60(int param_1)

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


//// FUNCTION FUN_009f5c80 @ 009f5c80 ////

void __cdecl FUN_009f5c80(int param_1)

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


//// FUNCTION FUN_009f5ca0 @ 009f5ca0 ////

void __cdecl FUN_009f5ca0(int *param_1)

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


//// FUNCTION FUN_009f5d00 @ 009f5d00 ////

void __fastcall FUN_009f5d00(int *param_1)

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


//// FUNCTION FUN_009f5db0 @ 009f5db0 ////

undefined4 __cdecl FUN_009f5db0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint3 uVar1;
  
  do {
    if (param_1 == param_2) {
LAB_009f5df1:
      if (param_3 == param_4) {
        return 0;
      }
      return 1;
    }
    if (param_3 == param_4) {
      if (param_1 != param_2) {
        return 0;
      }
      goto LAB_009f5df1;
    }
    uVar1 = (uint3)((uint)param_1 >> 8);
    if (*param_1 < *param_3) {
      return CONCAT31(uVar1,1);
    }
    if (*param_3 < *param_1) {
      return (uint)uVar1 << 8;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while( true );
}


//// FUNCTION FUN_009f5ff0 @ 009f5ff0 ////

void __cdecl FUN_009f5ff0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009f60e0 @ 009f60e0 ////

void __cdecl FUN_009f60e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_009f6120 @ 009f6120 ////

void __cdecl FUN_009f6120(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined4 *)((int)param_1 + 6)) {
    *param_1 = *param_3;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_3 + 1);
  }
  return;
}


//// FUNCTION FUN_009f6510 @ 009f6510 ////

int __fastcall FUN_009f6510(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_009f6930 @ 009f6930 ////

void __cdecl FUN_009f6930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009f6e90 @ 009f6e90 ////

void __cdecl FUN_009f6e90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (param_4 <= iVar1) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_009f6ee0 @ 009f6ee0 ////

void __cdecl FUN_009f6ee0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = (int)param_3 - (int)param_1 >> 2;
  iVar7 = param_2 - (int)param_1 >> 2;
  iVar5 = iVar7;
  param_2 = iVar6;
  while (iVar2 = iVar5, iVar2 != 0) {
    iVar5 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar6) && (0 < param_2)) {
    puVar8 = param_1 + param_2;
    do {
      uVar1 = *puVar8;
      puVar4 = puVar8 + iVar7;
      puVar3 = puVar8;
      if (puVar8 + iVar7 == param_3) {
        puVar4 = param_1;
      }
      while (puVar4 != puVar8) {
        *puVar3 = *puVar4;
        iVar5 = (int)param_3 - (int)puVar4 >> 2;
        puVar3 = puVar4;
        if (iVar7 < iVar5) {
          puVar4 = puVar4 + iVar7;
        }
        else {
          puVar4 = param_1 + (iVar7 - iVar5);
        }
      }
      *puVar3 = uVar1;
      puVar8 = puVar8 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_009f6f80 @ 009f6f80 ////

void __cdecl FUN_009f6f80(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  
  if (param_2 <= param_3) {
    *(float *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar1 = (param_2 + -1) / 2;
    if (param_4 <= *(float *)(param_1 + iVar1 * 4)) break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    param_2 = iVar1;
  } while (param_3 < iVar1);
  *(float *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_009f6fe0 @ 009f6fe0 ////

void __cdecl FUN_009f6fe0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar6 = (int)param_3 - (int)param_1 >> 2;
  iVar7 = param_2 - (int)param_1 >> 2;
  iVar5 = iVar7;
  param_2 = iVar6;
  while (iVar2 = iVar5, iVar2 != 0) {
    iVar5 = param_2 % iVar2;
    param_2 = iVar2;
  }
  if ((param_2 < iVar6) && (0 < param_2)) {
    puVar8 = param_1 + param_2;
    do {
      uVar1 = *puVar8;
      puVar4 = puVar8 + iVar7;
      puVar3 = puVar8;
      if (puVar8 + iVar7 == param_3) {
        puVar4 = param_1;
      }
      while (puVar4 != puVar8) {
        *puVar3 = *puVar4;
        iVar5 = (int)param_3 - (int)puVar4 >> 2;
        puVar3 = puVar4;
        if (iVar7 < iVar5) {
          puVar4 = puVar4 + iVar7;
        }
        else {
          puVar4 = param_1 + (iVar7 - iVar5);
        }
      }
      *puVar3 = uVar1;
      puVar8 = puVar8 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_009f7170 @ 009f7170 ////

void __thiscall FUN_009f7170(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = *(float **)((int)this + 4);
  pfVar2 = *(float **)((int)this + 8);
  local_18 = *pfVar1 - *pfVar2;
  pfVar3 = *(float **)this;
  local_14 = pfVar1[1] - pfVar2[1];
  local_10 = pfVar1[2] - pfVar2[2];
  local_c = *pfVar3 - *pfVar1;
  local_8 = pfVar3[1] - pfVar1[1];
  local_4 = pfVar3[2] - pfVar1[2];
  FUN_00412fd0(&local_24,&local_c,&local_18);
  FUN_00412e20(&local_24);
  *param_1 = local_24;
  param_1[1] = local_20;
  param_1[2] = local_1c;
  return;
}


//// FUNCTION FUN_009f71f0 @ 009f71f0 ////

void __thiscall FUN_009f71f0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1[2];
  fVar1 = param_1[4];
  fVar2 = param_1[1];
  *(float *)((int)this + 0xc) = *param_1 - (param_1[3] - 2.0);
  *(float *)((int)this + 0x10) = fVar2 - (fVar1 - 2.0);
  *(float *)((int)this + 0x14) = fVar3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(float *)((int)this + 0x18) = (param_1[3] - 2.0) + (param_1[3] - 2.0);
  *(float *)((int)this + 0x1c) = (param_1[4] - 2.0) + (param_1[4] - 2.0);
  return;
}


//// FUNCTION Environment_UpdateThunderOrFlash @ 009f7270 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Environment_UpdateThunderOrFlash(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  ulonglong uVar5;
  byte local_28 [36];
  undefined4 local_4;
  
  fVar1 = param_1 - *(float *)((int)this + 0x78);
  if (0.0 <= fVar1) {
    if (_DAT_00e68860 < fVar1) {
      fVar4 = FUN_00990e30(10.0,25.0);
      *(float *)((int)this + 0x78) = (float)(fVar4 + (float10)param_1);
      return;
    }
    if (fVar1 <= _DAT_00e68858) {
      if (_DAT_00e6885c < fVar1) {
        uVar5 = FUN_00acd42c();
        iVar3 = (int)uVar5;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0xff < iVar3) {
          iVar3 = 0xff;
        }
        param_1 = (float)(iVar3 << 0x18);
        *(float *)((int)this + 0x20) = param_1;
        QueueRenderPrimitive((undefined4 *)((int)this + 0x18));
        return;
      }
      *(undefined4 *)((int)this + 0x20) = 0x80ffffff;
      QueueRenderPrimitive((undefined4 *)((int)this + 0x18));
    }
    else {
      uVar2 = FUN_00a22fa0();
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_00761480();
        if ((char)uVar2 == '\0') {
          FUN_0041c9c0(local_28,"THUNDERCLAP");
          local_4 = *(undefined4 *)((int)this + 0x80);
          FUN_009b1530(local_28,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009f7400 @ 009f7400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009f7400(void *this,undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  byte local_28 [32];
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_01050b3c == '\0') && ((*(byte *)((int)this + 4) & 8) != 0)) {
    if (*(int *)((int)this + 0x7c) == -1) {
      *(undefined4 *)((int)this + 0x80) = DAT_00e66f08;
    }
    else {
      FUN_009b11d0(*(int *)((int)this + 0x7c));
    }
    uVar4 = FUN_00761480();
    if ((char)uVar4 == '\0') {
      uVar4 = FUN_00a22fa0();
      if ((char)uVar4 != '\0') {
        fVar1 = DAT_0105c3a8 - *(float *)((int)this + 0xa4);
        fVar2 = DAT_0105c3ac - *(float *)((int)this + 0xa8);
        fVar3 = DAT_0105c3b0 - *(float *)((int)this + 0xac);
        fVar1 = (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) / _DAT_00e68854;
        if (fVar1 < 1.0 != (fVar1 == 1.0)) {
          FUN_0041c9c0(local_28,*(undefined4 *)((int)this + 0x84));
          local_4 = *(undefined4 *)((int)this + 0x80);
          local_8 = param_1;
          uVar5 = FUN_009b1530(local_28,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
          *(undefined4 *)((int)this + 0x7c) = uVar5;
          FUN_009b10a0(uVar5,1.0 - fVar1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009f7860 @ 009f7860 ////

void __thiscall FUN_009f7860(void *this,int param_1)

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


//// FUNCTION FUN_009f78c0 @ 009f78c0 ////

void __thiscall FUN_009f78c0(void *this,int *param_1)

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


//// FUNCTION FUN_009f7920 @ 009f7920 ////

void __fastcall FUN_009f7920(int *param_1)

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


//// FUNCTION FUN_009f79a0 @ 009f79a0 ////

void __thiscall FUN_009f79a0(void *this,int param_1)

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


//// FUNCTION FUN_009f7a00 @ 009f7a00 ////

void __thiscall FUN_009f7a00(void *this,int *param_1)

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


//// FUNCTION FUN_009f7b70 @ 009f7b70 ////

void __fastcall FUN_009f7b70(int param_1)

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


//// FUNCTION FUN_009f7d20 @ 009f7d20 ////

void __fastcall FUN_009f7d20(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_009f7da0 @ 009f7da0 ////

void __fastcall FUN_009f7da0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x1d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x1d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x1d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x1d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x1d) == '\0');
    if (*(char *)((int)piVar4 + 0x1d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_009f7f20 @ 009f7f20 ////

int * __fastcall FUN_009f7f20(int *param_1)

{
  FUN_009f5d00(param_1);
  return param_1;
}


//// FUNCTION FUN_009f81b0 @ 009f81b0 ////

void __cdecl FUN_009f81b0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009f8200 @ 009f8200 ////

void __cdecl FUN_009f8200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    *(undefined4 *)((int)param_3 + -6) = *(undefined4 *)((int)param_2 + -6);
    *(undefined2 *)((int)param_3 + -2) = *(undefined2 *)((int)param_2 + -2);
    param_2 = (undefined4 *)((int)param_2 + -6);
    param_3 = (undefined4 *)((int)param_3 + -6);
  }
  return;
}


//// FUNCTION FUN_009f8350 @ 009f8350 ////

void FUN_009f8350(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_009f8350(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009f8390 @ 009f8390 ////

undefined4 * __thiscall FUN_009f8390(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x1d) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (((int)puVar2[3] < *param_1) || ((puVar2[3] == *param_1 && ((int)puVar2[4] < param_1[1]))))
      {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  return puVar2;
}


//// FUNCTION FUN_009f83d0 @ 009f83d0 ////

undefined4 * __thiscall FUN_009f83d0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x1d) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((*param_1 < (int)puVar2[3]) || ((*param_1 == puVar2[3] && (param_1[1] < (int)puVar2[4]))))
      {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  return puVar1;
}


//// FUNCTION FUN_009f8600 @ 009f8600 ////

void __cdecl FUN_009f8600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009f8640 @ 009f8640 ////

void __cdecl FUN_009f8640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009f8680 @ 009f8680 ////

void __cdecl FUN_009f8680(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined4 *)((int)param_1 + 6)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 1);
    }
    param_3 = (undefined4 *)((int)param_3 + 6);
  }
  return;
}


//// FUNCTION FUN_009f86e0 @ 009f86e0 ////

void * __cdecl FUN_009f86e0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009f8860 @ 009f8860 ////

void __cdecl FUN_009f8860(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(int *)(param_1 + iVar1 * 4) < *(int *)(param_1 + -4 + iVar1 * 4)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_009f6e90(param_1,iVar2,param_2,param_4);
  return;
}


//// FUNCTION FUN_009f88e0 @ 009f88e0 ////

void __cdecl FUN_009f88e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  if (*param_2 < *param_1) {
    fVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = fVar1;
  }
  if (*param_3 < *param_2) {
    fVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = fVar1;
  }
  if (*param_2 < *param_1) {
    fVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = fVar1;
  }
  return;
}


//// FUNCTION FUN_009f8930 @ 009f8930 ////

void __cdecl FUN_009f8930(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  while( true ) {
    iVar1 = iVar2 * 2 + 2;
    if (param_3 <= iVar1) break;
    if (*(float *)(param_1 + iVar1 * 4) < *(float *)(param_1 + -4 + iVar1 * 4)) {
      iVar1 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar1 * 4);
    iVar2 = iVar1;
  }
  if (iVar1 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  FUN_009f6f80(param_1,iVar2,param_2,param_4);
  return;
}


//// FUNCTION FUN_009f8b60 @ 009f8b60 ////

void FUN_009f8b60(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_009f8b90 @ 009f8b90 ////

int * __fastcall FUN_009f8b90(int *param_1)

{
  FUN_009f7920(param_1);
  return param_1;
}


//// FUNCTION FUN_009f8bc0 @ 009f8bc0 ////

void FUN_009f8bc0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_009f8be0 @ 009f8be0 ////

void __fastcall FUN_009f8be0(int param_1)

{
  FUN_009f7b70(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009f8c50 @ 009f8c50 ////

void __fastcall FUN_009f8c50(int param_1)

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


//// FUNCTION FUN_009f8cc0 @ 009f8cc0 ////

void FUN_009f8cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  return;
}


//// FUNCTION FUN_009f8d10 @ 009f8d10 ////

int * __fastcall FUN_009f8d10(int *param_1)

{
  FUN_009f7d20(param_1);
  return param_1;
}


//// FUNCTION FUN_009f8d20 @ 009f8d20 ////

void FUN_009f8d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    puVar1[6] = param_4[3];
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  return;
}


//// FUNCTION FUN_009f8d80 @ 009f8d80 ////

int * __fastcall FUN_009f8d80(int *param_1)

{
  FUN_009f7da0(param_1);
  return param_1;
}


//// FUNCTION FUN_009f8da0 @ 009f8da0 ////

void FUN_009f8da0(void)

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


//// FUNCTION FUN_009f8e40 @ 009f8e40 ////

void __thiscall FUN_009f8e40(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = *param_3;
  *(undefined4 *)((int)this + 0xc) = param_3[1];
  *(undefined4 *)((int)this + 0x10) = param_3[2];
  *(undefined4 *)((int)this + 0x14) = param_3[3];
  *(undefined4 *)((int)this + 0x18) = param_3[4];
  *(undefined4 *)((int)this + 0x1c) = param_3[5];
  *(undefined4 *)((int)this + 0x20) = param_3[6];
  *(undefined4 *)((int)this + 0x24) = param_3[7];
  *(undefined4 *)((int)this + 0x28) = param_3[8];
  return;
}


//// FUNCTION FUN_009f8ea0 @ 009f8ea0 ////

void FUN_009f8ea0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_009f8ea0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009f8ee0 @ 009f8ee0 ////

int * __fastcall FUN_009f8ee0(int *param_1)

{
  FUN_009f5d00(param_1);
  return param_1;
}


//// FUNCTION FUN_009f8fb0 @ 009f8fb0 ////

void * FUN_009f8fb0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009f9030 @ 009f9030 ////

void __fastcall FUN_009f9030(int param_1)

{
  FUN_009f8350(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_009f90a0 @ 009f90a0 ////

void FUN_009f90a0(void)

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


//// FUNCTION FUN_009f90f0 @ 009f90f0 ////

undefined4 * __thiscall FUN_009f90f0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8bb0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_009f8cc0(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 7));
    if (*(char *)((int)local_18 + 0x1d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_009f90f0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_009f90f0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_009f9210 @ 009f9210 ////

void __cdecl FUN_009f9210(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009f9250 @ 009f9250 ////

void __cdecl FUN_009f9250(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_3 + 1);
    }
    param_1 = (undefined4 *)((int)param_1 + 6);
  }
  return;
}


//// FUNCTION FUN_009f9410 @ 009f9410 ////

void * FUN_009f9410(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_009f9440 @ 009f9440 ////

void __cdecl FUN_009f9440(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  iVar2 = (int)param_3 - (int)param_1 >> 2;
  if (iVar2 < 0x29) {
    iVar2 = *param_2;
    if (iVar2 < iVar1) {
      *param_2 = iVar1;
      *param_1 = iVar2;
    }
    iVar1 = *param_3;
    if (iVar1 < *param_2) {
      *param_3 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar1;
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    iVar2 = param_1[iVar3];
    if (iVar2 < iVar1) {
      param_1[iVar3] = iVar1;
      *param_1 = iVar2;
    }
    iVar1 = param_1[iVar3 * 2];
    if (iVar1 < param_1[iVar3]) {
      param_1[iVar3 * 2] = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = param_1[iVar3];
    if (iVar1 < *param_1) {
      param_1[iVar3] = *param_1;
      *param_1 = iVar1;
    }
    iVar1 = *param_2;
    piVar4 = param_2 + -iVar3;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = param_2[iVar3];
    if (iVar1 < *param_2) {
      param_2[iVar3] = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar1;
    }
    piVar4 = param_3 + -iVar3;
    iVar1 = *piVar4;
    piVar5 = param_3 + iVar3 * -2;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_3;
    if (iVar1 < *piVar4) {
      *param_3 = *piVar4;
      *piVar4 = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
    }
    iVar1 = *piVar4;
    if (iVar1 < *param_2) {
      *piVar4 = *param_2;
      *param_2 = iVar1;
    }
    iVar1 = *param_2;
    if (iVar1 < param_1[iVar3]) {
      *param_2 = param_1[iVar3];
      param_1[iVar3] = iVar1;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_009f9560 @ 009f9560 ////

void __cdecl FUN_009f9560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_009f8860(param_1,iVar2,iVar3,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_009f95d0 @ 009f95d0 ////

void __cdecl FUN_009f95d0(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_009f88e0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    FUN_009f88e0(param_2 + -iVar1,param_2,param_2 + iVar1);
    FUN_009f88e0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    FUN_009f88e0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  FUN_009f88e0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_009f9660 @ 009f9660 ////

void __cdecl FUN_009f9660(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_009f8930(param_1,iVar2,iVar3,*(float *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_009f96d0 @ 009f96d0 ////

void __cdecl FUN_009f96d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_009f9780 @ 009f9780 ////

int * __fastcall FUN_009f9780(int *param_1)

{
  FUN_009f7920(param_1);
  return param_1;
}


//// FUNCTION FUN_009f9790 @ 009f9790 ////

void __fastcall FUN_009f9790(int param_1)

{
  FUN_009f7b70(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009f97d0 @ 009f97d0 ////

void __fastcall FUN_009f97d0(int param_1)

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


//// FUNCTION FUN_009f9800 @ 009f9800 ////

undefined4 * FUN_009f9800(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009f9830 @ 009f9830 ////

void __fastcall FUN_009f9830(int param_1)

{
  FUN_009f8c50(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009f9870 @ 009f9870 ////

int * __fastcall FUN_009f9870(int *param_1)

{
  FUN_009f7d20(param_1);
  return param_1;
}


//// FUNCTION FUN_009f9880 @ 009f9880 ////

int * __fastcall FUN_009f9880(int *param_1)

{
  FUN_009f7da0(param_1);
  return param_1;
}


//// FUNCTION FUN_009f98a0 @ 009f98a0 ////

void FUN_009f98a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = param_1;
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
    puVar1[7] = param_3[5];
  }
  return;
}


//// FUNCTION FUN_009f9900 @ 009f9900 ////

void __fastcall FUN_009f9900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f8da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_009f9940 @ 009f9940 ////

void * FUN_009f9940(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_009f8e40(this,param_1,param_2,param_3);
  }
  return this;
}


//// FUNCTION FUN_009f9970 @ 009f9970 ////

void __fastcall FUN_009f9970(int param_1)

{
  FUN_009f8ea0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_009f9af0 @ 009f9af0 ////

void __fastcall FUN_009f9af0(int param_1)

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


//// FUNCTION FUN_009f9b20 @ 009f9b20 ////

undefined4 * __thiscall FUN_009f9b20(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_009f83d0(this,param_2);
  puVar2 = FUN_009f8390(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_009f9b80 @ 009f9b80 ////

void __fastcall FUN_009f9b80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f90a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_009f9be0 @ 009f9be0 ////

void __thiscall FUN_009f9be0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_009f90f0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x1d) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x1d);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x1d);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x1d);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x1d);
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


//// FUNCTION FUN_009f9d70 @ 009f9d70 ////

void __fastcall FUN_009f9d70(int param_1)

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


//// FUNCTION FUN_009f9da0 @ 009f9da0 ////

void __cdecl FUN_009f9da0(undefined4 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_009f9440(param_2,piVar4,param_3 + -1);
  piVar5 = piVar4 + 1;
  for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
    if ((piVar4[-1] < *piVar4) || (*piVar4 < piVar4[-1])) break;
  }
  piVar6 = piVar5;
  piVar3 = piVar4;
  if (piVar5 < param_3) {
    do {
      piVar6 = piVar5;
      if ((*piVar5 < *piVar4) || (*piVar4 < *piVar5)) break;
      piVar5 = piVar5 + 1;
      piVar6 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x009f9e05:
  do {
    if (param_3 <= piVar5) {
joined_r0x009f9e2b:
      for (; param_2 < piVar4; piVar4 = piVar4 + -1) {
        if (*piVar3 <= piVar4[-1]) {
          if (*piVar3 < piVar4[-1]) break;
          iVar1 = piVar3[-1];
          piVar3 = piVar3 + -1;
          *piVar3 = piVar4[-1];
          piVar4[-1] = iVar1;
        }
      }
      if (piVar4 == param_2) {
        if (piVar5 == param_3) {
          param_1[1] = piVar6;
          *param_1 = piVar3;
          return;
        }
        if (piVar6 != piVar5) {
          iVar1 = *piVar3;
          *piVar3 = *piVar6;
          *piVar6 = iVar1;
        }
        iVar1 = *piVar3;
        *piVar3 = *piVar5;
        *piVar5 = iVar1;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
        piVar3 = piVar3 + 1;
      }
      else {
        piVar4 = piVar4 + -1;
        if (piVar5 == param_3) {
          piVar3 = piVar3 + -1;
          if (piVar4 != piVar3) {
            iVar1 = *piVar4;
            *piVar4 = *piVar3;
            *piVar3 = iVar1;
          }
          iVar1 = *piVar3;
          *piVar3 = piVar6[-1];
          piVar6[-1] = iVar1;
          piVar6 = piVar6 + -1;
        }
        else {
          iVar1 = *piVar5;
          *piVar5 = *piVar4;
          *piVar4 = iVar1;
          piVar5 = piVar5 + 1;
        }
      }
      goto joined_r0x009f9e05;
    }
    iVar1 = *piVar5;
    if (iVar1 <= *piVar3) {
      if (iVar1 < *piVar3) goto joined_r0x009f9e2b;
      iVar2 = *piVar6;
      *piVar6 = iVar1;
      *piVar5 = iVar2;
      piVar6 = piVar6 + 1;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_009f9f10 @ 009f9f10 ////

void __cdecl FUN_009f9f10(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (piVar4 = param_1 + 1, piVar4 != param_2)) {
    piVar5 = param_1 + 2;
    do {
      iVar1 = *piVar4;
      piVar2 = param_1;
      if (iVar1 < *param_1) {
joined_r0x009f9f5c:
        if ((piVar2 != piVar4) && (piVar4 != piVar5)) {
          FUN_009f6ee0(piVar2,(int)piVar4,piVar5);
        }
      }
      else {
        piVar3 = piVar5 + -2;
        if (iVar1 < piVar5[-2]) {
          do {
            piVar2 = piVar3;
            piVar3 = piVar2 + -1;
          } while (iVar1 < *piVar3);
          goto joined_r0x009f9f5c;
        }
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (piVar4 != param_2);
  }
  return;
}


//// FUNCTION FUN_009f9f80 @ 009f9f80 ////

void __cdecl FUN_009f9f80(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  
  pfVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_009f95d0(param_2,pfVar6,param_3 + -1);
  pfVar4 = pfVar6 + 1;
  for (; ((param_2 < pfVar6 && (*pfVar6 <= pfVar6[-1])) && (pfVar6[-1] <= *pfVar6));
      pfVar6 = pfVar6 + -1) {
  }
  iVar2 = (int)param_3 + (3 - (int)pfVar4);
  pfVar3 = pfVar6;
  if (3 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    do {
      pfVar5 = pfVar4;
      if ((*pfVar4 < *pfVar6) || (*pfVar6 < *pfVar4)) goto joined_r0x009fa092;
      if ((pfVar4[1] < *pfVar6) || (*pfVar6 < pfVar4[1])) {
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar4;
        goto joined_r0x009fa092;
      }
      if ((pfVar4[2] < *pfVar6) || (*pfVar6 < pfVar4[2])) {
        pfVar4 = pfVar4 + 2;
        pfVar5 = pfVar4;
        goto joined_r0x009fa092;
      }
      if ((pfVar4[3] < *pfVar6) || (*pfVar6 < pfVar4[3])) {
        pfVar4 = pfVar4 + 3;
        pfVar5 = pfVar4;
        goto joined_r0x009fa092;
      }
      pfVar4 = pfVar4 + 4;
    } while ((int)pfVar4 < (int)(param_3 + -3));
  }
  for (; ((pfVar5 = pfVar4, pfVar4 < param_3 && (*pfVar6 <= *pfVar4)) && (*pfVar4 <= *pfVar6));
      pfVar4 = pfVar4 + 1) {
  }
joined_r0x009fa092:
  do {
    if (param_3 <= pfVar4) {
joined_r0x009fa0c4:
      for (; param_2 < pfVar6; pfVar6 = pfVar6 + -1) {
        if (*pfVar3 <= pfVar6[-1]) {
          if (*pfVar3 < pfVar6[-1]) break;
          fVar1 = pfVar3[-1];
          pfVar3 = pfVar3 + -1;
          *pfVar3 = pfVar6[-1];
          pfVar6[-1] = fVar1;
        }
      }
      if (pfVar6 == param_2) {
        if (pfVar4 == param_3) {
          param_1[1] = pfVar5;
          *param_1 = pfVar3;
          return;
        }
        if (pfVar5 != pfVar4) {
          fVar1 = *pfVar3;
          *pfVar3 = *pfVar5;
          *pfVar5 = fVar1;
        }
        fVar1 = *pfVar3;
        *pfVar3 = *pfVar4;
        *pfVar4 = fVar1;
        pfVar4 = pfVar4 + 1;
        pfVar5 = pfVar5 + 1;
        pfVar3 = pfVar3 + 1;
      }
      else {
        pfVar6 = pfVar6 + -1;
        if (pfVar4 == param_3) {
          pfVar3 = pfVar3 + -1;
          if (pfVar6 != pfVar3) {
            fVar1 = *pfVar6;
            *pfVar6 = *pfVar3;
            *pfVar3 = fVar1;
          }
          fVar1 = *pfVar3;
          *pfVar3 = pfVar5[-1];
          pfVar5[-1] = fVar1;
          pfVar5 = pfVar5 + -1;
        }
        else {
          fVar1 = *pfVar4;
          *pfVar4 = *pfVar6;
          *pfVar6 = fVar1;
          pfVar4 = pfVar4 + 1;
        }
      }
      goto joined_r0x009fa092;
    }
    if (*pfVar4 <= *pfVar3) {
      if (*pfVar4 < *pfVar3) goto joined_r0x009fa0c4;
      fVar1 = *pfVar5;
      *pfVar5 = *pfVar4;
      *pfVar4 = fVar1;
      pfVar5 = pfVar5 + 1;
    }
    pfVar4 = pfVar4 + 1;
  } while( true );
}


//// FUNCTION FUN_009fa1a0 @ 009fa1a0 ////

void __cdecl FUN_009fa1a0(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  if ((param_1 != param_2) && (pfVar3 = param_1 + 1, pfVar3 != param_2)) {
    pfVar4 = param_1 + 2;
    do {
      pfVar2 = param_1;
      if (*param_1 <= *pfVar3) {
        pfVar1 = pfVar4 + -2;
        if (*pfVar3 < pfVar4[-2]) {
          do {
            pfVar2 = pfVar1;
            pfVar1 = pfVar2 + -1;
          } while (*pfVar3 < pfVar2[-1]);
          goto joined_r0x009fa207;
        }
      }
      else {
joined_r0x009fa207:
        if ((pfVar2 != pfVar3) && (pfVar3 != pfVar4)) {
          FUN_009f6fe0(pfVar2,(int)pfVar3,pfVar4);
        }
      }
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (pfVar3 != param_2);
  }
  return;
}


//// FUNCTION FUN_009fa310 @ 009fa310 ////

void __cdecl FUN_009fa310(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_3;
  piVar1 = (int *)param_2[1];
  param_2 = (int *)*piVar1;
  if (param_2 != piVar1) {
    iVar2 = *param_3;
    do {
      if (((iVar2 == param_2[3]) && ((piVar3[1] == param_2[4] || (piVar3[2] == param_2[4])))) ||
         ((piVar3[1] == param_2[3] && (piVar3[2] == param_2[4])))) {
        *param_1 = (int)param_2;
        return;
      }
      FUN_009f7920((int *)&param_2);
    } while (param_2 != piVar1);
  }
  *param_1 = (int)piVar1;
  return;
}


//// FUNCTION FUN_009fa380 @ 009fa380 ////

void __fastcall FUN_009fa380(int param_1)

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


//// FUNCTION FUN_009fa3b0 @ 009fa3b0 ////

void __fastcall FUN_009fa3b0(int param_1)

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


//// FUNCTION FUN_009fa3e0 @ 009fa3e0 ////

int __fastcall FUN_009fa3e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009f8b60();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fa400 @ 009fa400 ////

void __fastcall FUN_009fa400(int param_1)

{
  FUN_009f8c50(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009fa450 @ 009fa450 ////

int __fastcall FUN_009fa450(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009f8bc0();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fa470 @ 009fa470 ////

int __fastcall FUN_009fa470(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f8da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fa4a0 @ 009fa4a0 ////

undefined4 * FUN_009fa4a0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_009f9210(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_009fa4d0 @ 009fa4d0 ////

int FUN_009fa4d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_009f9250(param_1,param_2,param_3);
  return (int)param_1 + param_2 * 6;
}


//// FUNCTION FUN_009fa610 @ 009fa610 ////

void __fastcall FUN_009fa610(int param_1)

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


//// FUNCTION FUN_009fa640 @ 009fa640 ////

int __fastcall FUN_009fa640(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f90a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fa6d0 @ 009fa6d0 ////

void __cdecl FUN_009fa6d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_009f8860((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_009fa720 @ 009fa720 ////

void __cdecl FUN_009fa720(undefined4 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    fVar1 = *(float *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_009f8930((int)param_1,0,iVar2 + -4 >> 2,fVar1);
  }
  return;
}


//// FUNCTION FUN_009fa770 @ 009fa770 ////

uint __thiscall FUN_009fa770(void *this,undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined2 unaff_BX;
  ulonglong uVar7;
  float local_8;
  float local_4;
  
  fVar6 = *(float *)((int)this + 0x28);
  pfVar1 = (float *)((int)this + 0x24);
  if (fVar6 == *(float *)((int)this + 0x24)) {
    return (uint)fVar6 & 0xffffff00;
  }
  bVar4 = false;
  bVar5 = false;
LAB_009fa793:
  do {
    if (this == pfVar1) {
      if ((bVar4) && (bVar5)) {
        FUN_00ad1180((double)local_8,unaff_BX);
        uVar7 = FUN_00acd42c();
        *param_1 = (int)uVar7;
        *param_2 = *pfVar1;
        *pfVar1 = (float)((int)*pfVar1 + 1);
        if (local_4 < local_8) {
          uVar3 = *param_1;
          *param_3 = uVar3;
          return CONCAT31((int3)((uint)uVar3 >> 8),1);
        }
        FUN_00ad1180((double)local_4,unaff_BX);
        uVar7 = FUN_00acd42c();
        *param_3 = (int)uVar7;
        return CONCAT31((int3)(uVar7 >> 8),1);
      }
      return (uint)fVar6 & 0xffffff00;
    }
    fVar6 = *(float *)((int)this + 8);
    if (fVar6 != -NAN) {
      if (fVar6 != 0.0) {
        if (bVar4) {
          fVar2 = *(float *)this;
          fVar6 = (float)CONCAT22((short)((uint)fVar6 >> 0x10),
                                  (ushort)(local_8 < fVar2) << 8 |
                                  (ushort)(NAN(local_8) || NAN(fVar2)) << 10 |
                                  (ushort)(local_8 == fVar2) << 0xe);
          if (local_8 < fVar2 || (local_8 == fVar2) != 0) {
            local_8 = *(float *)this;
            bVar4 = true;
            *(float *)this = *(float *)((int)this + 4) + *(float *)this;
            this = (float *)((int)this + 0xc);
            goto LAB_009fa793;
          }
        }
        else {
          fVar6 = *(float *)this;
          local_8 = fVar6;
        }
        bVar4 = true;
        *(float *)this = *(float *)((int)this + 4) + *(float *)this;
        this = (float *)((int)this + 0xc);
        goto LAB_009fa793;
      }
      if (bVar5) {
        fVar2 = *(float *)this;
        fVar6 = (float)(uint)(ushort)((ushort)(local_4 < fVar2) << 8 |
                                      (ushort)(NAN(local_4) || NAN(fVar2)) << 10 |
                                     (ushort)(local_4 == fVar2) << 0xe);
        if (local_4 >= fVar2) goto LAB_009fa7eb;
      }
      else {
LAB_009fa7eb:
        local_4 = *(float *)this;
      }
      bVar5 = true;
      *(float *)this = *(float *)((int)this + 4) + *(float *)this;
    }
    this = (void *)((int)this + 0xc);
  } while( true );
}


//// FUNCTION FUN_009fa890 @ 009fa890 ////

void __fastcall FUN_009fa890(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf8be4;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x7c) != -1) {
    ExceptionList = &pvStack_c;
    FUN_009b11d0(*(int *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  for (piVar5 = *(int **)(param_1 + 0xc); piVar5 != piVar1; piVar5 = piVar5 + 1) {
    puVar2 = (undefined4 *)*piVar5;
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
  }
  if (*(uint *)(param_1 + 0x8c) < 0x15) {
    local_4 = local_4 & 0xffffff00;
    FUN_00990ec0(param_1 + 0x54);
    if (*(void **)(param_1 + 0xc) == (void *)0x0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x84));
}


//// FUNCTION FUN_009fa970 @ 009fa970 ////

void __thiscall FUN_009fa970(void *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  LONG LVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)((int)this + 0x78) = 0;
  if (*(int *)((int)this + 0x7c) != -1) {
    FUN_009b11d0(*(int *)((int)this + 0x7c));
    *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  }
  puVar1 = *(undefined4 **)((int)this + 0x10);
  for (puVar5 = *(undefined4 **)((int)this + 0xc); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    puVar2 = (undefined4 *)*puVar5;
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    FUN_009778c0(param_1,puVar2);
  }
  FUN_00a44a60((int *)((int)param_1 + 0x248));
  if (*(void **)((int)this + 0xc) == (void *)0x0) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0xc));
}


//// FUNCTION FUN_009faa50 @ 009faa50 ////

void __fastcall FUN_009faa50(int param_1)

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


//// FUNCTION FUN_009faa80 @ 009faa80 ////

void __fastcall FUN_009faa80(int param_1)

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


//// FUNCTION FUN_009faab0 @ 009faab0 ////

void __fastcall FUN_009faab0(int param_1)

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


//// FUNCTION FUN_009faae0 @ 009faae0 ////

void __cdecl FUN_009faae0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_009fab63:
      if (1 < iVar2) {
        FUN_009f9f10(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_009f9560((int)param_1,(int)param_2);
        }
        FUN_009fa6d0(param_1,(int)param_2);
        return;
      }
      goto LAB_009fab63;
    }
    FUN_009f9da0(&local_8,param_1,param_2);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_009faae0(param_1,local_8,param_3);
      param_1 = piVar1;
    }
    else {
      FUN_009faae0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_009fabb0 @ 009fabb0 ////

void __cdecl FUN_009fabb0(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float *local_8;
  float *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_009fac33:
      if (1 < iVar2) {
        FUN_009fa1a0(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_009f9660((int)param_1,(int)param_2);
        }
        FUN_009fa720(param_1,(int)param_2);
        return;
      }
      goto LAB_009fac33;
    }
    FUN_009f9f80(&local_8,param_1,param_2);
    pfVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_009fabb0(param_1,local_8,param_3);
      param_1 = pfVar1;
    }
    else {
      FUN_009fabb0(local_4,param_2,param_3);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_009fac80 @ 009fac80 ////

void * __thiscall FUN_009fac80(void *this,byte param_1)

{
  FUN_009faab0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009faca0 @ 009faca0 ////

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_009faca0(float *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uStack_10024;
  int iStack_10020;
  float fStack_10018;
  undefined1 local_10000 [65532];
  undefined4 uStack_4;
  
  uStack_4 = 0x9facaa;
  if (*(uint *)(param_2 + 0x30) <= param_3) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  uVar10 = FUN_00acd42c();
  uVar11 = FUN_00acd42c();
  if ((*(int *)(param_2 + 0x24) != 0) &&
     ((*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24)) / 0x14 != 0)) {
    fStack_10018 = *(float *)(param_2 + 0xc) + 2.0;
    iStack_10020 = param_3 + 1;
    fVar3 = *(float *)(param_2 + 0x10);
    uStack_10024 = 0;
    if ((uint)uVar10 != 0) {
      do {
        iVar5 = 0;
        if ((int)uVar11 != 0) {
          uVar8 = 1 << ((byte)uStack_10024 & 0x1f);
          piVar6 = (int *)(*(int *)(param_2 + 0x24) + 4);
          puVar9 = local_10000 + uStack_10024;
          fVar2 = fVar3 + 2.0;
          do {
            puVar1 = (uint *)((uStack_10024 >> 5) * 4 + *piVar6);
            *puVar9 = (*puVar1 & uVar8) != 0;
            if (((*puVar1 & uVar8) == 0) && (iStack_10020 = iStack_10020 + -1, iStack_10020 == 0)) {
              *param_1 = fStack_10018;
              param_1[1] = fVar2;
              return;
            }
            fVar2 = fVar2 + 4.0;
            iVar5 = iVar5 + 1;
            puVar9 = puVar9 + 0x100;
            piVar6 = piVar6 + 5;
          } while (iVar5 != (int)uVar11);
        }
        fStack_10018 = fStack_10018 + 4.0;
        uStack_10024 = uStack_10024 + 1;
      } while (uStack_10024 != (uint)uVar10);
    }
    *param_1 = 0.0;
    param_1[1] = 0.0;
    return;
  }
  iVar5 = (int)((ulonglong)param_3 / (uVar11 & 0xffffffff));
  iVar7 = (int)((ulonglong)param_3 % (uVar11 & 0xffffffff));
  fVar3 = (float)iVar7;
  if (iVar7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar2 = *(float *)(param_2 + 0x10);
  fVar4 = (float)iVar5;
  if (iVar5 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  *param_1 = (fVar4 + 0.5) * 4.0 + *(float *)(param_2 + 0xc);
  param_1[1] = (fVar3 + 0.5) * 4.0 + fVar2;
  return;
}


//// FUNCTION FUN_009faea0 @ 009faea0 ////

void * __thiscall FUN_009faea0(void *this,byte param_1)

{
  FUN_009fa890((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009faec0 @ 009faec0 ////

void __fastcall FUN_009faec0(int param_1)

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


//// FUNCTION FUN_009faef0 @ 009faef0 ////

void __fastcall FUN_009faef0(int param_1)

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


//// FUNCTION FUN_009faf70 @ 009faf70 ////

uint * __thiscall FUN_009faf70(void *this,ushort *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = (int)param_1;
  *(uint *)this = (uint)*param_1;
  *(uint *)((int)this + 4) = (uint)param_1[1];
  *(uint *)((int)this + 8) = (uint)param_1[2];
  FUN_009faae0(this,piVar1,(int)piVar1 - (int)this >> 2);
  return this;
}


//// FUNCTION FUN_009fafb0 @ 009fafb0 ////

int __thiscall FUN_009fafb0(void *this,float *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 unaff_DI;
  ulonglong uVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18 [6];
  
  local_24 = param_1[1];
  local_1c = param_1[5];
  local_20 = param_1[3];
  FUN_009fabb0(&local_24,local_18,3);
  FUN_00ad1180((double)local_24,unaff_DI);
  uVar7 = FUN_00acd42c();
  *(int *)((int)this + 0x24) = (int)uVar7;
  FUN_00ad1180((double)local_1c,unaff_DI);
  uVar7 = FUN_00acd42c();
  *(int *)((int)this + 0x28) = (int)uVar7;
  if ((int)uVar7 != *(int *)((int)this + 0x24)) {
    local_18[0] = param_1[2] - param_1[4];
    local_18[1] = param_1[3] - param_1[5];
    local_18[2] = param_1[4] - *param_1;
    local_18[3] = param_1[5] - param_1[1];
    local_18[4] = *param_1 - param_1[2];
    local_18[5] = param_1[1] - param_1[3];
    fVar4 = (param_1[5] - param_1[1]) * (param_1[2] - param_1[4]) -
            (param_1[3] - param_1[5]) * (param_1[4] - *param_1);
    if (fVar4 == 0.0) {
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x24);
      return (int)this;
    }
    if (fVar4 < 0.0) {
      fVar4 = -fVar4;
      fVar2 = *param_1;
      fVar3 = param_1[1];
      *param_1 = param_1[2];
      param_1[1] = param_1[3];
      param_1[2] = fVar2;
      param_1[3] = fVar3;
      local_18[0] = param_1[2] - param_1[4];
      local_18[1] = param_1[3] - param_1[5];
      local_18[2] = param_1[4] - *param_1;
      local_18[3] = param_1[5] - param_1[1];
      local_18[4] = *param_1 - param_1[2];
      local_18[5] = param_1[1] - param_1[3];
    }
    iVar6 = 0;
    puVar5 = (undefined4 *)((int)this + 8);
    do {
      if (local_18[iVar6 * 2 + 1] == 0.0) {
        *puVar5 = 0xffffffff;
      }
      else {
        pfVar1 = local_18 + iVar6 * 2;
        fVar2 = local_18[iVar6 * 2 + 1];
        puVar5[-2] = (((float)*(int *)((int)this + 0x24) -
                      *(float *)((int)local_18 + ((int)param_1 - (int)local_18) + iVar6 * 8 + 4)) *
                      *pfVar1 - fVar4) * (1.0 / fVar2) +
                     *(float *)((int)pfVar1 + ((int)param_1 - (int)local_18));
        puVar5[-1] = (1.0 / fVar2) * *pfVar1;
        if (local_18[iVar6 * 2 + 1] <= 0.0) {
          *puVar5 = 0;
        }
        else {
          *puVar5 = 1;
        }
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar6 != 3);
  }
  return (int)this;
}


//// FUNCTION FUN_009fb1a0 @ 009fb1a0 ////

void __thiscall
FUN_009fb1a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf8bf8;
  local_c = ExceptionList;
  if (0xffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_009f8cc0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x1c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x1c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[7] == '\0') {
LAB_009fb29b:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_009f7860(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_009f78c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_009fb29b;
      if (piVar6 == (int *)*piVar2) {
        FUN_009f78c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_009f7860(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_009fb350 @ 009fb350 ////

void __thiscall
FUN_009fb350(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf8c18;
  local_c = ExceptionList;
  if (0xffffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = (int *)FUN_009f8d20(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
  cVar1 = *(char *)(piVar3[1] + 0x1c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x1c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[7] == '\0') {
LAB_009fb44b:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_009f79a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_009f7a00(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_009fb44b;
      if (piVar6 == (int *)*piVar2) {
        FUN_009f7a00(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_009f79a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_009fb500 @ 009fb500 ////

void FUN_009fb500(void)

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
  puStack_8 = &LAB_00cf8c38;
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


//// FUNCTION FUN_009fb570 @ 009fb570 ////

void __thiscall FUN_009fb570(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf8c58;
  local_c = ExceptionList;
  if (0xaaaaaaaU - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_009fb610 @ 009fb610 ////

void FUN_009fb610(void)

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
  puStack_8 = &LAB_00cf8c78;
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


//// FUNCTION FUN_009fb680 @ 009fb680 ////

void FUN_009fb680(void)

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
  puStack_8 = &LAB_00cf8c98;
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


//// FUNCTION FUN_009fb6f0 @ 009fb6f0 ////

void FUN_009fb6f0(void)

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
  puStack_8 = &LAB_00cf8cb8;
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


//// FUNCTION FUN_009fb760 @ 009fb760 ////

void FUN_009fb760(void)

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
  puStack_8 = &LAB_00cf8cd8;
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


//// FUNCTION FUN_009fb7d0 @ 009fb7d0 ////

void __thiscall FUN_009fb7d0(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf8cf8;
  local_c = ExceptionList;
  if (0x71c71c7U - *(int *)((int)this + 8) < param_1) {
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


//// FUNCTION FUN_009fb870 @ 009fb870 ////

void __thiscall FUN_009fb870(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf8d18;
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
  FUN_009f5d00((int *)&param_2);
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
      goto LAB_009fb9e1;
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
      piVar2 = (int *)FUN_009f5ca0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      uVar3 = FUN_009f5c80((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_009fb9e1:
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
            FUN_009f79a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(*piVar4 + 0x1c) != '\x01') || (*(char *)(piVar4[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x1c) = 1;
                *(undefined1 *)(piVar4 + 7) = 0;
                FUN_009f7a00(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 7) = (char)piVar5[7];
              *(undefined1 *)(piVar5 + 7) = 1;
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              FUN_009f79a0(this,(int)piVar5);
              break;
            }
LAB_009fbaa4:
            *(undefined1 *)(piVar4 + 7) = 0;
          }
        }
        else {
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_009f7a00(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x1c) == '\x01') && (*(char *)(*piVar4 + 0x1c) == '\x01'))
            goto LAB_009fbaa4;
            if (*(char *)(*piVar4 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              *(undefined1 *)(piVar4 + 7) = 0;
              FUN_009f79a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 7) = (char)piVar5[7];
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(*piVar4 + 0x1c) = 1;
            FUN_009f7a00(this,piVar5);
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


//// FUNCTION FUN_009fbb30 @ 009fbb30 ////

void __thiscall FUN_009fbb30(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf8d38;
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
  FUN_009f7920((int *)&param_2);
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
      goto LAB_009fbca1;
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
      piVar2 = (int *)FUN_009f5a00(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      uVar3 = FUN_009f5c60((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_009fbca1:
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
            FUN_009f7860(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(*piVar4 + 0x1c) != '\x01') || (*(char *)(piVar4[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x1c) = 1;
                *(undefined1 *)(piVar4 + 7) = 0;
                FUN_009f78c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 7) = (char)piVar5[7];
              *(undefined1 *)(piVar5 + 7) = 1;
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              FUN_009f7860(this,(int)piVar5);
              break;
            }
LAB_009fbd64:
            *(undefined1 *)(piVar4 + 7) = 0;
          }
        }
        else {
          if ((char)piVar4[7] == '\0') {
            *(undefined1 *)(piVar4 + 7) = 1;
            *(undefined1 *)(piVar5 + 7) = 0;
            FUN_009f78c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x1d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x1c) == '\x01') && (*(char *)(*piVar4 + 0x1c) == '\x01'))
            goto LAB_009fbd64;
            if (*(char *)(*piVar4 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x1c) = 1;
              *(undefined1 *)(piVar4 + 7) = 0;
              FUN_009f7860(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 7) = (char)piVar5[7];
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(*piVar4 + 0x1c) = 1;
            FUN_009f78c0(this,piVar5);
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


//// FUNCTION FUN_009fbdf0 @ 009fbdf0 ////

void __thiscall FUN_009fbdf0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_009f8350((void *)piVar6[1]);
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
    FUN_009fbb30(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_009fbeb0 @ 009fbeb0 ////

void __fastcall FUN_009fbeb0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_009fbdf0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009fbee0 @ 009fbee0 ////

void FUN_009fbee0(void)

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
  puStack_8 = &LAB_00cf8d58;
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


//// FUNCTION FUN_009fbf50 @ 009fbf50 ////

void * __thiscall FUN_009fbf50(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_009f90a0();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_009f9be0(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_009fc020 @ 009fc020 ////

void __thiscall FUN_009fc020(void *this,undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char local_4;
  
  piVar2 = param_2;
  piVar5 = *(int **)((int)this + 4);
  bVar1 = true;
  local_4 = '\x01';
  if (*(char *)(piVar5[1] + 0x1d) == '\0') {
    piVar3 = (int *)piVar5[1];
    do {
      piVar5 = piVar3;
      if ((*param_2 < piVar5[3]) || ((*param_2 == piVar5[3] && (param_2[1] < piVar5[4])))) {
        piVar3 = (int *)*piVar5;
        bVar1 = true;
        local_4 = '\x01';
      }
      else {
        piVar3 = (int *)piVar5[2];
        bVar1 = false;
        local_4 = '\0';
      }
    } while (*(char *)((int)piVar3 + 0x1d) == '\0');
  }
  param_2 = piVar5;
  if (bVar1) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      local_4 = '\x01';
      goto LAB_009fc07e;
    }
    FUN_009f7d20((int *)&param_2);
  }
  if ((*piVar2 <= param_2[3]) && ((param_2[3] != *piVar2 || (piVar2[1] <= param_2[4])))) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_009fc07e:
  puVar4 = (undefined4 *)FUN_009fb1a0(this,&param_2,local_4,piVar5,piVar2);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_009fc0f0 @ 009fc0f0 ////

void __thiscall FUN_009fc0f0(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char local_4;
  
  piVar4 = param_2;
  piVar2 = (int *)(*(int **)((int)this + 4))[1];
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  local_4 = '\x01';
  piVar3 = *(int **)((int)this + 4);
  while (cVar1 == '\0') {
    uVar5 = FUN_009f5db0(piVar4,piVar4 + 3,piVar2 + 3,piVar2 + 6);
    local_4 = (char)uVar5;
    if (local_4 == '\0') {
      piVar7 = (int *)piVar2[2];
    }
    else {
      piVar7 = (int *)*piVar2;
    }
    piVar3 = piVar2;
    piVar2 = piVar7;
    cVar1 = *(char *)((int)piVar7 + 0x1d);
  }
  param_2 = piVar3;
  if (local_4 != '\0') {
    if (piVar3 == (int *)**(int **)((int)this + 4)) {
      local_4 = '\x01';
      goto LAB_009fc152;
    }
    FUN_009f7da0((int *)&param_2);
  }
  piVar2 = param_2;
  uVar5 = FUN_009f5db0(param_2 + 3,param_2 + 6,piVar4,piVar4 + 3);
  if ((char)uVar5 == '\0') {
    *param_1 = piVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_009fc152:
  puVar6 = (undefined4 *)FUN_009fb350(this,&param_2,local_4,piVar3,piVar4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_009fc3d0 @ 009fc3d0 ////

void __thiscall FUN_009fc3d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_009fb500();
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
      _Dst = FUN_009f9800((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009f8fb0(param_1,iVar5,param_1 + param_2);
      FUN_009f9800(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009f5ff0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009f8fb0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_009f81b0(param_1,(int)pvVar3,iVar5);
    FUN_009f5ff0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_009fc5b0 @ 009fc5b0 ////

void __thiscall FUN_009fc5b0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_009f8ea0((void *)piVar6[1]);
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
    FUN_009fb870(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_009fc670 @ 009fc670 ////

void __thiscall FUN_009fc670(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf8d80;
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
      uVar8 = FUN_009fb680();
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
      puVar5 = (undefined4 *)FUN_009f8640(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_009f9210(puVar5,param_2,&local_24);
      FUN_009f8640(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
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
      FUN_009f8640(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_009fa4a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar7 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar7;
      FUN_009f60e0(param_1,(undefined4 *)(iVar7 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_009f8640(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_009f6930(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_009f60e0(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009fc8e0 @ 009fc8e0 ////

void __thiscall FUN_009fc8e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8d90;
  local_10 = ExceptionList;
  local_1c = *param_3;
  iVar3 = *(int *)((int)this + 4);
  local_18 = *(undefined2 *)(param_3 + 1);
  local_14 = &stack0xffffffd8;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 6;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 6;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd8;
    if (0x2aaaaaaaU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_009fb6f0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 6;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x2aaaaaaa - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 6;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_009f5640((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 6);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_009f8680(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_009f9250(puVar5,param_2,&local_1c);
      FUN_009f8680(param_1,*(undefined4 **)((int)this + 8),(undefined4 *)((int)puVar5 + param_2 * 6)
                  );
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 6;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(uint *)((int)this + 0xc) = uVar7 * 6 + (int)puVar4;
      *(uint *)((int)this + 8) = (int)puVar4 + (param_2 + iVar3) * 6;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 6) < param_2) {
      FUN_009f8680(param_1,puVar4,(undefined4 *)(param_2 * 6 + (int)param_1));
      local_8 = 2;
      FUN_009fa4d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 6,&local_1c);
      iVar3 = *(int *)((int)this + 8) + param_2 * 6;
      *(int *)((int)this + 8) = iVar3;
      FUN_009f6120(param_1,(undefined4 *)(iVar3 + param_2 * -6),&local_1c);
      ExceptionList = local_10;
      return;
    }
    puVar5 = (undefined4 *)((int)puVar4 + param_2 * -6);
    uVar6 = FUN_009f8680(puVar5,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_009f8200(param_1,puVar5,puVar4);
    FUN_009f6120(param_1,(undefined4 *)(param_2 * 6 + (int)param_1),&local_1c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009fcc00 @ 009fcc00 ////

undefined4 __thiscall FUN_009fcc00(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
    param_1 = FUN_009fbee0();
  }
  pvVar1 = operator_new(param_1 * 4);
  *(void **)((int)this + 0xc) = (void *)(param_1 * 4 + (int)pvVar1);
  *(void **)((int)this + 4) = pvVar1;
  *(void **)((int)this + 8) = pvVar1;
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}


//// FUNCTION FUN_009fcc70 @ 009fcc70 ////

void __thiscall FUN_009fcc70(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8 [2];
  
  iVar1 = param_2;
  while (param_1 != iVar1) {
    FUN_009fc020(this,local_8,(int *)(param_1 + 0xc));
    FUN_009f7920(&param_1);
  }
  return;
}


//// FUNCTION FUN_009fcd10 @ 009fcd10 ////

void * __thiscall FUN_009fcd10(void *this,void *param_1)

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
        uVar3 = FUN_009fcc00(this,uVar4);
        if ((char)uVar3 == '\0') {
          return this;
        }
        pvVar2 = FUN_009f9410(*(void **)((int)param_1 + 4),*(int *)((int)param_1 + 8),
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
      FUN_009f86e0(*(void **)((int)param_1 + 4),(int)pvVar2,_Memory);
      pvVar2 = FUN_009f9410(pvVar2,*(int *)((int)param_1 + 8),*(void **)((int)this + 8));
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


//// FUNCTION FUN_009fce60 @ 009fce60 ////

void __thiscall FUN_009fce60(void *this,int *param_1)

{
  undefined4 local_18 [2];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = param_1[2];
  local_10 = *param_1;
  local_c = param_1[1];
  local_4 = param_1[3];
  FUN_009fc020(this,local_18,&local_10);
  local_c = param_1[2];
  local_8 = *param_1;
  local_10 = param_1[1];
  local_4 = param_1[3];
  FUN_009fc020(this,local_18,&local_10);
  local_c = param_1[2];
  local_8 = param_1[1];
  local_10 = *param_1;
  local_4 = param_1[3];
  FUN_009fc020(this,local_18,&local_10);
  return;
}


//// FUNCTION FUN_009fcf10 @ 009fcf10 ////

void __thiscall FUN_009fcf10(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)((int)this + 4);
  iVar2 = FUN_009f98a0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_009fb570(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


//// FUNCTION FUN_009fcff0 @ 009fcff0 ////

int __thiscall FUN_009fcff0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8da0;
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
      uVar1 = FUN_009fb680();
    }
    puVar2 = operator_new(uVar1 * 0x10);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1 * 4;
    local_8 = 0;
    uVar3 = FUN_009f8600(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_009fd0b0 @ 009fd0b0 ////

void __fastcall FUN_009fd0b0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_009fd1e0 @ 009fd1e0 ////

void __thiscall FUN_009fd1e0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 6 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 6;
      goto LAB_009fd21f;
    }
  }
  iVar1 = 0;
LAB_009fd21f:
  FUN_009fc8e0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 6;
  return;
}


//// FUNCTION FUN_009fd2b0 @ 009fd2b0 ////

int __thiscall FUN_009fd2b0(void *this,int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8db0;
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
      uVar1 = FUN_009fbee0();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    local_8 = 0;
    uVar3 = FUN_009f96d0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8),puVar2);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  ExceptionList = local_10;
  return (int)this;
}


//// FUNCTION FUN_009fd370 @ 009fd370 ////

int __fastcall FUN_009fd370(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f90a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fd3a0 @ 009fd3a0 ////

void __thiscall FUN_009fd3a0(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    if (0x3fffffff < param_1) {
      FUN_009fbee0();
    }
    puVar1 = operator_new(param_1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar1 + param_1;
    *(undefined4 **)((int)this + 4) = puVar1;
    *(undefined4 **)((int)this + 8) = puVar1;
    puVar2 = puVar1;
    for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar1 + param_1;
  }
  return;
}


//// FUNCTION FUN_009fd450 @ 009fd450 ////

void * __cdecl FUN_009fd450(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_009fcd10(param_3,param_1);
    *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
    param_1 = (void *)((int)param_1 + 0x14);
    param_3 = (void *)((int)param_3 + 0x14);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_009fd490 @ 009fd490 ////

void * __cdecl FUN_009fd490(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *this;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    pvVar1 = (void *)((int)param_2 + -0x14);
    this = (void *)((int)param_3 + -0x14);
    FUN_009fcd10(this,pvVar1);
    *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)param_2 + -4);
    param_2 = pvVar1;
    param_3 = this;
  } while (pvVar1 != param_1);
  return this;
}


//// FUNCTION FUN_009fd500 @ 009fd500 ////

void * __cdecl FUN_009fd500(void *param_1,void *param_2,void *param_3)

{
  void *this;
  
  this = param_3;
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (this != param_1) {
      FUN_009fbdf0(this,&param_3,(int *)**(int **)((int)this + 4),*(int **)((int)this + 4));
      FUN_009f9be0(this,(int)param_1);
    }
    param_1 = (void *)((int)param_1 + 0xc);
    this = (void *)((int)this + 0xc);
  } while (param_1 != param_2);
  return this;
}


//// FUNCTION FUN_009fd550 @ 009fd550 ////

void * __cdecl FUN_009fd550(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *this;
  
  pvVar1 = param_3;
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0xc);
    this = (void *)((int)pvVar1 + -0xc);
    if (this != param_2) {
      FUN_009fbdf0(this,&param_3,(int *)**(int **)((int)pvVar1 + -8),*(int **)((int)pvVar1 + -8));
      FUN_009f9be0(this,(int)param_2);
    }
    pvVar1 = this;
  } while (param_2 != param_1);
  return this;
}


//// FUNCTION FUN_009fd5a0 @ 009fd5a0 ////

void __cdecl FUN_009fd5a0(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf8dd1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_009fbf50(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009fd5f0 @ 009fd5f0 ////

undefined4 * __thiscall FUN_009fd5f0(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf8deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  FUN_0041f350((undefined4 *)((int)this + 0x18));
  FUN_009910f0((undefined4 *)((int)this + 0x54));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined1 **)((int)this + 0x84) = (undefined1 *)((int)this + 0x90);
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x14;
  *(undefined1 *)((int)this + 0xb0) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009fd680 @ 009fd680 ////

void __thiscall FUN_009fd680(void *this,undefined4 *param_1)

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
  FUN_009fc3d0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009fd700 @ 009fd700 ////

void __thiscall FUN_009fd700(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_009f9210(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_009fc670(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_009fd770 @ 009fd770 ////

void __thiscall FUN_009fd770(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 6) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 6))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_009f9250(puVar2,1,param_1);
    *(int *)((int)this + 8) = (int)puVar2 + 6;
    return;
  }
  FUN_009fd1e0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_009fd7f0 @ 009fd7f0 ////

void FUN_009fd7f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    FUN_009faab0(param_1);
  }
  return;
}


//// FUNCTION FUN_009fd860 @ 009fd860 ////

void __cdecl FUN_009fd860(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x14)) {
    FUN_009fcd10(param_1,param_3);
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_3 + 0x10);
  }
  return;
}


//// FUNCTION FUN_009fd8b0 @ 009fd8b0 ////

int __fastcall FUN_009fd8b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f90a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fd8e0 @ 009fd8e0 ////

void __fastcall FUN_009fd8e0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_009fbdf0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009fd950 @ 009fd950 ////

void __cdecl FUN_009fd950(void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *this;
  
  pvVar2 = param_3;
  pvVar1 = param_2;
  for (this = param_1; this != pvVar1; this = (void *)((int)this + 0xc)) {
    if (this != pvVar2) {
      FUN_009fbdf0(this,&param_1,(int *)**(int **)((int)this + 4),*(int **)((int)this + 4));
      FUN_009f9be0(this,(int)pvVar2);
    }
  }
  return;
}


//// FUNCTION FUN_009fd9b0 @ 009fd9b0 ////

void __cdecl FUN_009fd9b0(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf8e11;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_009fd2b0(param_1,param_2);
    *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009fda00 @ 009fda00 ////

void * __thiscall FUN_009fda00(void *this,byte param_1)

{
  FUN_009fd8e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009fda40 @ 009fda40 ////

void __fastcall FUN_009fda40(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_009fc5b0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009fda70 @ 009fda70 ////

void __cdecl FUN_009fda70(int param_1,void *param_2)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8e2b;
  local_c = ExceptionList;
  if (param_1 != 0) {
    if (*(void **)((int)param_2 + 600) != (void *)0x0) {
      ExceptionList = &local_c;
      FUN_009fa970(*(void **)((int)param_2 + 600),param_2);
      **(undefined4 **)((int)param_2 + 600) = 0;
      *(int *)(*(int *)((int)param_2 + 600) + 4) = param_1;
      ExceptionList = local_c;
      return;
    }
    ExceptionList = &local_c;
    this = operator_new(0xb4);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_009fd5f0(this,param_1);
    }
    *(undefined4 **)((int)param_2 + 600) = puVar1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009fdb10 @ 009fdb10 ////

void __thiscall FUN_009fdb10(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_44 [10];
  undefined4 uStack_1c;
  
  puVar2 = param_3;
  puVar3 = auStack_44;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_3 = FUN_00a7e1d0(param_1,param_2);
  iVar1 = *(int *)((int)this + 0xc);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x14) - iVar1 >> 2) <=
      (uint)(*(int *)((int)this + 0x10) - iVar1 >> 2))) {
    uStack_1c = 0x9fdb8a;
    FUN_009fc3d0((void *)((int)this + 8),*(undefined4 **)((int)this + 0x10),1,&param_3);
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x10);
    *puVar2 = param_3;
    *(undefined4 **)((int)this + 0x10) = puVar2 + 1;
  }
  FUN_00a7cba0((void *)(*(int *)(*(int *)((int)this + 0x10) + -4) + 0x24),0.5);
  return;
}


//// FUNCTION FUN_009fdbb0 @ 009fdbb0 ////

int __fastcall FUN_009fdbb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_009f8da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009fdbe0 @ 009fdbe0 ////

void __fastcall FUN_009fdbe0(int param_1)

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
    FUN_009faab0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009fdc30 @ 009fdc30 ////

void __thiscall FUN_009fdc30(void *this,undefined4 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_3) {
    pvVar2 = FUN_009fd450(param_3,*(void **)((int)this + 8),param_2);
    pvVar1 = *(void **)((int)this + 8);
    for (pvVar3 = pvVar2; pvVar3 != pvVar1; pvVar3 = (void *)((int)pvVar3 + 0x14)) {
      FUN_009faab0((int)pvVar3);
    }
    *(void **)((int)this + 8) = pvVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_009fdd20 @ 009fdd20 ////

void * __cdecl FUN_009fdd20(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf8e51;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x14) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_009fd2b0(param_3,param_1);
      *(undefined4 *)((int)param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    }
    param_3 = (void *)((int)param_3 + 0x14);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_009fdde0 @ 009fdde0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009fdde0(void *this,int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  float10 fVar8;
  ulonglong uVar9;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  void *local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 *local_b0;
  float local_ac;
  float local_a8 [3];
  float local_9c;
  float local_98;
  float local_94;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  int local_5c;
  float local_50;
  float local_44;
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8e6e;
  local_c = ExceptionList;
  if (((param_2[0x14] & 0x400000) == 0) && ((param_2[0x14] & 0x2000) != 0)) {
    uVar4 = *(uint *)((int)this + 4) & 3;
    if (uVar4 == 1) {
      piVar7 = param_2 + 0x92;
      ExceptionList = &local_c;
      FUN_00a44c30(piVar7);
      if ((*piVar7 == 0) && ((*(byte *)((int)this + 4) & 4) != 0)) {
        local_cc = operator_new(0x458);
        local_4 = 0;
        if (local_cc == (void *)0x0) {
          local_4 = 0xffffffff;
          *piVar7 = 0;
        }
        else {
          puVar5 = FUN_00a57f10(local_cc,param_2[0x52],param_1);
          local_4 = 0xffffffff;
          *piVar7 = (int)puVar5;
        }
      }
    }
    else if (uVar4 == 2) {
      ExceptionList = &local_c;
      FUN_00a44d60(param_2 + 0x92);
    }
    else {
      ExceptionList = &local_c;
      FUN_00a44a60(param_2 + 0x92);
    }
    local_b4 = *(float *)(param_1 + 0x14);
    local_bc = *(float *)(param_1 + 0x18) * 0.5 + *(float *)(param_1 + 0xc);
    local_b8 = *(float *)(param_1 + 0x1c) * 0.5 + *(float *)(param_1 + 0x10);
    *(float *)((int)this + 0xa4) = local_bc;
    *(float *)((int)this + 0xa8) = local_b8;
    *(float *)((int)this + 0xac) = local_b4;
    if (param_2[0x52] != 0) {
      FUN_0040b490((void *)(param_2[0x52] + 0x18),(float *)((int)this + 0xa4));
    }
    FUN_009f7400(this,param_2);
    if (*(int *)this != 0) {
      uVar9 = FUN_00acd42c();
      local_b0 = (undefined4 *)uVar9;
      uVar9 = FUN_00acd42c();
      pvVar6 = (void *)uVar9;
      local_d8 = *(float *)(param_1 + 0xc) + 2.0;
      local_d0 = *(float *)(param_1 + 0x14);
      puVar5 = (undefined4 *)0x0;
      local_d4 = *(float *)(param_1 + 0x10) + 2.0;
      local_cc = pvVar6;
      if (local_b0 != (undefined4 *)0x0) {
        do {
          local_c8 = local_d8;
          local_c4 = local_d4;
          local_c0 = local_d0;
          if (pvVar6 != (void *)0x0) {
            local_dc = 0.0;
            local_ac = (float)pvVar6;
            do {
              if (((*(int *)(param_1 + 0x24) == 0) ||
                  (local_5c = (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24)) / 0x14,
                  local_5c == 0)) ||
                 ((*(uint *)(*(int *)(*(int *)(param_1 + 0x24) + 4 + (int)local_dc) +
                            ((uint)puVar5 >> 5) * 4) & 1 << ((byte)puVar5 & 0x1f)) == 0)) {
                if ((void *)param_2[0x52] != (void *)0x0) {
                  fVar8 = FUN_0097f880((void *)param_2[0x52],&local_c8,(undefined4 *)0x0);
                  local_c0 = (float)fVar8;
                }
                FUN_00a7bed0(&local_9c,&local_c8);
                FUN_009fdb10(this,*(int **)this,param_2,&local_9c);
                InterlockedIncrement((LONG *)(*(int *)(*(int *)((int)this + 0x10) + -4) + 0x10));
              }
              local_c4 = local_c4 + 4.0;
              local_dc = (float)((int)local_dc + 0x14);
              local_ac = (float)((int)local_ac + -1);
            } while (local_ac != 0.0);
            local_ac = 0.0;
            pvVar6 = local_cc;
          }
          local_d8 = local_d8 + 4.0;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
        } while (puVar5 != local_b0);
      }
      if ((*(byte *)((int)this + 4) & 0x10) != 0) {
        piVar7 = (int *)FUN_00a8e7f0("RPH_water_gutter",(char *)0x0);
        if (piVar7 != (int *)0x0) {
          local_b0 = *(undefined4 **)(param_1 + 4);
          puVar5 = (undefined4 *)*local_b0;
          local_dc = -1.0;
          for (; puVar5 != local_b0; puVar5 = (undefined4 *)*puVar5) {
            local_d8 = (float)puVar5[5] - (float)puVar5[2];
            local_d4 = (float)puVar5[6] - (float)puVar5[3];
            local_d0 = (float)puVar5[7] - (float)puVar5[4];
            fVar8 = FUN_00412e20(&local_d8);
            local_cc = (void *)(float)fVar8;
            local_50 = local_d0 * local_d0;
            local_bc = -(local_d8 * local_d0);
            local_b8 = -(local_d4 * local_d0);
            local_b4 = 1.0 - local_50;
            FUN_00412e20(&local_bc);
            local_68 = -local_d8;
            local_64 = -local_d4;
            local_60 = -local_d0;
            FUN_00412fd0(local_a8,&local_68,&local_bc);
            FUN_00412e20(local_a8);
            local_44 = local_d0 * local_dc;
            local_c8 = (float)puVar5[2] - local_d8 * local_dc;
            local_70 = 0.0;
            local_c4 = (float)puVar5[3] - local_d4 * local_dc;
            local_74 = 0.0;
            local_78 = 0.0;
            local_c0 = (float)puVar5[4] - local_44;
            fVar1 = local_d8 + local_d8;
            fVar2 = local_d4 + local_d4;
            fVar3 = local_d0 + local_d0;
            local_9c = local_d8;
            local_98 = local_d4;
            local_94 = local_d0;
            local_84 = local_bc;
            local_80 = local_b8;
            local_7c = local_b4;
            for (local_dc = (float)local_cc + local_dc; local_d0 = fVar3, local_d4 = fVar2,
                local_d8 = fVar1, 0.0 < local_dc; local_dc = local_dc - 2.0) {
              local_78 = local_c8;
              local_74 = local_c4;
              local_70 = local_c0;
              FUN_00a7b9b0(local_40,&local_9c);
              FUN_009fdb10(this,piVar7,param_2,local_40);
              InterlockedIncrement((LONG *)(*(int *)(*(int *)((int)this + 0x10) + -4) + 0x10));
              local_c8 = local_c8 + local_d8;
              local_c4 = local_c4 + local_d4;
              local_c0 = local_c0 + local_d0;
              fVar1 = local_d8;
              fVar2 = local_d4;
              fVar3 = local_d0;
            }
          }
        }
        if ((*(byte *)((int)param_2 + 0x52) & 1) != 0) {
          fVar2 = (float)_DAT_0105c40c;
          fVar1 = (float)_DAT_0105c408;
          *(undefined4 *)((int)this + 0x30) = 0;
          *(float *)((int)this + 0x28) = fVar1;
          *(float *)((int)this + 0x2c) = fVar2;
          local_b4 = *(float *)((int)this + 0x30);
          local_bc = DAT_0105c400 + *(float *)((int)this + 0x28);
          local_b8 = DAT_0105c404 + *(float *)((int)this + 0x2c);
          *(float *)((int)this + 0x34) = local_bc;
          *(undefined1 *)((int)this + 0x60) = 1;
          *(float *)((int)this + 0x38) = local_b8;
          *(int *)((int)this + 0x1c) = (int)this + 0x54;
          *(float *)((int)this + 0x3c) = local_b4;
          fVar8 = FUN_009720c0((int)param_2);
          local_cc = (void *)(float)fVar8;
          fVar8 = FUN_00990e30(5.0,20.0);
          *(float *)((int)this + 0x78) = (float)(fVar8 + (float10)(float)local_cc);
        }
      }
    }
  }
  else {
    ExceptionList = &local_c;
    *(undefined1 *)((int)this + 0xb0) = 1;
    FUN_00a44a60(param_2 + 0x92);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009fe3b0 @ 009fe3b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_009fe3b0(void *this,undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  
  if (*(char *)((int)this + 0xb0) == '\0') {
    if ((param_1[0x14] & 0x4000) != 0) {
      iVar4 = FUN_00770aa0();
      if ((iVar4 != 0) || ((param_1[0x15] & 0x800) != 0)) {
        FUN_009fa970(this,param_1);
        return;
      }
    }
    goto LAB_009fe3f9;
  }
  if ((param_1[0x14] & 0x2000) == 0) goto LAB_009fe3f9;
  if ((void *)param_1[0x52] == (void *)0x0) {
LAB_009fe3e7:
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0097e350((void *)param_1[0x52],0);
    if (iVar4 == 0) goto LAB_009fe3e7;
    iVar4 = *(int *)(iVar4 + 0x80);
  }
  FUN_009fdde0(this,iVar4,param_1);
  *(undefined1 *)((int)this + 0xb0) = 0;
LAB_009fe3f9:
  if ((param_1[0x15] & 0x200) == 0) {
    iVar4 = *(int *)((int)this + 0x7c);
    if (iVar4 == -1) {
      FUN_009f7400(this,param_1);
    }
    else {
      fVar1 = DAT_0105c3a8 - *(float *)((int)this + 0xa4);
      fVar2 = DAT_0105c3ac - *(float *)((int)this + 0xa8);
      fVar3 = DAT_0105c3b0 - *(float *)((int)this + 0xac);
      fVar1 = (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) / _DAT_00e68854;
      if (fVar1 <= 1.0) {
        FUN_009b10a0(iVar4,1.0 - fVar1);
      }
      else {
        FUN_009b11d0(iVar4);
        *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
      }
    }
  }
  if (*(float *)((int)this + 0x78) != 0.0) {
    fVar5 = FUN_009720c0((int)param_1);
    Environment_UpdateThunderOrFlash(this,(float)fVar5);
  }
  return;
}


//// FUNCTION FUN_009fe4e0 @ 009fe4e0 ////

undefined4 * __thiscall
FUN_009fe4e0(void *this,char *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8ea4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00a8e7f0(param_1,(char *)0x0);
  *(undefined4 *)this = uVar2;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  FUN_0041f350((undefined4 *)((int)this + 0x18));
  FUN_009910f0((undefined4 *)((int)this + 0x54));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = (undefined1 *)((int)this + 0x90);
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0x14;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0((undefined4 *)((int)this + 0x84),param_1,(int)pcVar3 - (int)(param_1 + 1));
  *(undefined1 *)((int)this + 0xb0) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((param_4[0x14] & 0x2000) != 0) {
    FUN_009fdde0(this,param_3,param_4);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009fe5b0 @ 009fe5b0 ////

void __thiscall FUN_009fe5b0(void *this,char *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00a8e7f0(param_1,(char *)0x0);
  if ((param_2 != *(int *)((int)this + 4)) || (*(int *)this != iVar2)) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x84),param_1,(int)pcVar3 - (int)(param_1 + 1));
    if (param_4 != (undefined4 *)0x0) {
      FUN_009fa970(this,param_4);
    }
    *(int *)this = iVar2;
    *(int *)((int)this + 4) = param_2;
    FUN_009fdde0(this,param_3,param_4);
  }
  return;
}


//// FUNCTION FUN_009fe620 @ 009fe620 ////

void __thiscall FUN_009fe620(void *this,undefined4 *param_1)

{
  int iVar1;
  
  FUN_009fa970(this,param_1);
  if ((void *)param_1[0x52] != (void *)0x0) {
    iVar1 = FUN_0097e350((void *)param_1[0x52],0);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x80) != 0)) {
      FUN_009fdde0(this,*(int *)(iVar1 + 0x80),param_1);
    }
  }
  return;
}


//// FUNCTION FUN_009fe660 @ 009fe660 ////

void __fastcall FUN_009fe660(int param_1)

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
    FUN_009faab0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009fe6a0 @ 009fe6a0 ////

void __cdecl FUN_009fe6a0(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf8ec1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_009fd2b0(param_1,param_3);
      *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    }
    param_1 = (void *)((int)param_1 + 0x14);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009fe760 @ 009fe760 ////

void __cdecl FUN_009fe760(void *param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf8ee1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (void *)0x0) {
      FUN_009fbf50(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0xc);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009fe810 @ 009fe810 ////

void * __cdecl FUN_009fe810(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00cf8f01;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_009fbf50(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_009fe8c0 @ 009fe8c0 ////

void __fastcall FUN_009fe8c0(int param_1)

{
  FUN_009fdbe0(param_1 + 0x20);
  FUN_009f8c50(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009fe8f0 @ 009fe8f0 ////

void * __thiscall FUN_009fe8f0(void *this,float *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_009f8b60();
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  FUN_009f71f0(this,param_1);
  uVar2 = FUN_00acd42c();
  uVar3 = FUN_00acd42c();
  *(int *)((int)this + 0x30) = (int)uVar2 * (int)uVar3;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009fe970 @ 009fe970 ////

void __cdecl FUN_009fe970(char *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8f3b;
  local_c = ExceptionList;
  if (param_3 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    if ((((void *)param_3[0x52] != (void *)0x0) &&
        (ExceptionList = &local_c, iVar1 = FUN_0097e350((void *)param_3[0x52],0), iVar1 != 0)) &&
       (iVar1 = *(int *)(iVar1 + 0x80), iVar1 != 0)) {
      if ((void *)param_3[0x96] == (void *)0x0) {
        if (param_2 == 0) {
          ExceptionList = local_c;
          return;
        }
        pvVar2 = operator_new(0xb4);
        local_4 = 0;
        if (pvVar2 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_009fe4e0(pvVar2,param_1,param_2,iVar1,param_3);
        }
        param_3[0x96] = puVar3;
        ExceptionList = local_c;
        return;
      }
      if (param_2 != 0) {
        FUN_009fe5b0((void *)param_3[0x96],param_1,param_2,iVar1,param_3);
        ExceptionList = local_c;
        return;
      }
      FUN_00a44a60(param_3 + 0x92);
      pvVar2 = (void *)param_3[0x96];
      if (pvVar2 == (void *)0x0) {
        param_3[0x96] = 0;
        ExceptionList = local_c;
        return;
      }
      FUN_009fa890((int)pvVar2);
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    if ((void *)param_3[0x96] != (void *)0x0) {
      FUN_009fa970((void *)param_3[0x96],param_3);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009feb80 @ 009feb80 ////

void * __thiscall FUN_009feb80(void *this,byte param_1)

{
  FUN_009fe8c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009feba0 @ 009feba0 ////

void __thiscall FUN_009feba0(void *this,float *param_1)

{
  int iVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8f5b;
  local_c = ExceptionList;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_009fdbe0(iVar1 + 0x20);
    FUN_009f8c50(iVar1);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar1 + 4));
  }
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  pvVar2 = operator_new(0x34);
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = FUN_009fe8f0(pvVar2,param_1);
    *(void **)this = pvVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009fec40 @ 009fec40 ////

void * FUN_009fec40(void *param_1,int param_2,int param_3)

{
  FUN_009fe6a0(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0x14);
}


//// FUNCTION FUN_009feca0 @ 009feca0 ////

void * FUN_009feca0(void *param_1,int param_2,int param_3)

{
  FUN_009fe760(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0xc);
}


//// FUNCTION FUN_009fecf0 @ 009fecf0 ////

void __fastcall FUN_009fecf0(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_009fe8c0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *param_1 = 0;
  return;
}


//// FUNCTION FUN_009fed20 @ 009fed20 ////

void FUN_009fed20(void *param_1,void *param_2)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0xc)) {
    FUN_009fd8e0(param_1);
  }
  return;
}


//// FUNCTION FUN_009fed50 @ 009fed50 ////

void __thiscall FUN_009fed50(void *this,void *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined1 local_30 [4];
  void *local_2c;
  undefined4 local_20;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8f78;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_009fd2b0(local_30,param_3);
  local_20 = *(undefined4 *)(param_3 + 0x10);
  iVar2 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x14;
    }
    if (0xcccccccU - iVar1 < param_2) {
      FUN_009fb610();
      uVar6 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x14;
    }
    if (uVar6 < iVar1 + param_2) {
      if (0xccccccc - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x14;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_009f5460((int)this);
        uVar6 = iVar2 + param_2;
      }
      pvVar3 = operator_new(uVar6 * 0x14);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar3;
      pvVar4 = FUN_009fdd20(*(int *)((int)this + 4),(int)param_1,pvVar3);
      FUN_009fe6a0(pvVar4,param_2,(int)local_30);
      FUN_009fdd20((int)param_1,*(int *)((int)this + 8),(void *)((int)pvVar4 + param_2 * 0x14));
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_009fd7f0(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x14 + (int)pvVar3);
      *(void **)((int)this + 8) = (void *)((int)pvVar3 + (param_2 + iVar2) * 0x14);
      *(void **)((int)this + 4) = pvVar3;
    }
    else {
      pvVar3 = *(void **)((int)this + 8);
      if ((uint)(((int)pvVar3 - (int)param_1) / 0x14) < param_2) {
        FUN_009fdd20((int)param_1,(int)pvVar3,(void *)(param_2 * 0x14 + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009fec40(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x14,(int)local_30)
        ;
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x14;
        *(int *)((int)this + 8) = iVar2;
        local_8 = 0;
        FUN_009fd860(param_1,(void *)(iVar2 + param_2 * -0x14),local_30);
      }
      else {
        pvVar4 = (void *)((int)pvVar3 + param_2 * -0x14);
        pvVar5 = FUN_009fdd20((int)pvVar4,(int)pvVar3,pvVar3);
        *(void **)((int)this + 8) = pvVar5;
        FUN_009fd490(param_1,pvVar4,pvVar3);
        FUN_009fd860(param_1,(void *)(param_2 * 0x14 + (int)param_1),local_30);
      }
    }
  }
  if (local_2c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009ff050 @ 009ff050 ////

void __thiscall FUN_009ff050(void *this,undefined4 *param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  FUN_009fd500((void *)((int)param_2 + 0xc),*(void **)((int)this + 8),param_2);
  pvVar1 = *(void **)((int)this + 8);
  for (pvVar2 = (void *)((int)pvVar1 + -0xc); pvVar2 != pvVar1; pvVar2 = (void *)((int)pvVar2 + 0xc)
      ) {
    FUN_009fd8e0(pvVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0xc;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_009ff0a0 @ 009ff0a0 ////

void __thiscall FUN_009ff0a0(void *this,void *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined1 local_28 [4];
  int *local_24;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf8f98;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &pvStack_10;
  local_18 = this;
  FUN_009fbf50(local_28,(int)param_3);
  pvVar1 = param_2;
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0xc;
  }
  if (param_2 != (void *)0x0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if ((void *)(0x15555555U - iVar2) < param_2) {
      FUN_009fb760();
      uVar6 = extraout_ECX;
    }
    pvVar4 = param_1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc;
    }
    if (uVar6 < (uint)(iVar2 + (int)pvVar1)) {
      if (0x15555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc;
      }
      if (uVar6 < (uint)(iVar3 + (int)pvVar1)) {
        iVar3 = FUN_009f6510((int)this);
        uVar6 = iVar3 + (int)pvVar1;
      }
      param_3 = (void *)(uVar6 * 0xc);
      pvVar4 = operator_new((uint)param_3);
      local_8 = CONCAT31(local_8._1_3_,1);
      param_2 = pvVar4;
      local_1c = pvVar4;
      param_2 = FUN_009fe810(*(int *)((int)this + 4),(int)param_1,pvVar4);
      FUN_009fe760(param_2,(int)pvVar1,(int)local_28);
      param_2 = (void *)((int)param_2 + (int)pvVar1 * 0xc);
      FUN_009fe810((int)param_1,*(int *)((int)this + 8),param_2);
      local_8 = 0;
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
        FUN_009fed20(*(void **)((int)this + 4),*(void **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int *)((int)this + 0xc) = (int)param_3 + (int)pvVar4;
      *(void **)((int)this + 8) = (void *)((int)pvVar4 + ((int)pvVar1 + iVar3) * 0xc);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      param_3 = *(void **)((int)this + 8);
      if ((void *)(((int)param_3 - (int)param_1) / 0xc) < pvVar1) {
        pvVar5 = param_3;
        param_3 = (void *)((int)pvVar1 * 0xc);
        FUN_009fe810((int)param_1,(int)pvVar5,(void *)((int)pvVar1 * 0xc + (int)param_1));
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009feca0(*(void **)((int)this + 8),
                     (int)pvVar1 - ((int)*(void **)((int)this + 8) - (int)pvVar4) / 0xc,
                     (int)local_28);
        iVar3 = *(int *)((int)this + 8) + (int)param_3;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_009fd950(pvVar4,(void *)(iVar3 - (int)param_3),local_28);
      }
      else {
        param_1 = (void *)((int)param_3 + (int)pvVar1 * -0xc);
        pvVar5 = FUN_009fe810((int)param_1,(int)param_3,param_3);
        *(void **)((int)this + 8) = pvVar5;
        FUN_009fd550(pvVar4,param_1,param_3);
        FUN_009fd950(pvVar4,(void *)((int)pvVar1 * 0xc + (int)pvVar4),local_28);
      }
    }
  }
  local_8 = 0xffffffff;
  FUN_009fbdf0(local_28,&param_1,(int *)*local_24,local_24);
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}


//// FUNCTION FUN_009ff3b0 @ 009ff3b0 ////

void __fastcall FUN_009ff3b0(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 4);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  pvVar1 = *(void **)(param_1 + 8);
  for (; pvVar2 != pvVar1; pvVar2 = (void *)((int)pvVar2 + 0xc)) {
    FUN_009fd8e0(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009ff420 @ 009ff420 ////

void __thiscall FUN_009ff420(void *this,int *param_1,void *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_009ff463;
    }
  }
  iVar1 = 0;
LAB_009ff463:
  FUN_009ff0a0(this,param_2,(void *)0x1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_009ff490 @ 009ff490 ////

void __fastcall FUN_009ff490(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 4);
  if (pvVar2 == (void *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  pvVar1 = *(void **)(param_1 + 8);
  for (; pvVar2 != pvVar1; pvVar2 = (void *)((int)pvVar2 + 0xc)) {
    FUN_009fd8e0(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009ff4a0 @ 009ff4a0 ////

void __thiscall FUN_009ff4a0(void *this,uint param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [4];
  void *local_1c;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf8fb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009fd2b0(local_20,param_2);
  local_10 = *(undefined4 *)(iVar1 + 0x10);
  local_4 = 0;
  FUN_009fdc30(this,&param_2,*(void **)((int)this + 4),*(void **)((int)this + 8));
  FUN_009fed50(this,*(void **)((int)this + 4),param_1,(int)local_20);
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_1c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009ff530 @ 009ff530 ////

void __thiscall FUN_009ff530(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_009fe760(pvVar2,1,(int)param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0xc;
    return;
  }
  FUN_009ff420(this,(int *)&param_1,*(void **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_009ff5c0 @ 009ff5c0 ////

void __cdecl
FUN_009ff5c0(undefined4 param_1,int *param_2,int *param_3,undefined4 param_4,void *param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *this;
  int *this_00;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int *piStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf8fe0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_009ff3b0((int)param_5);
  local_28 = param_3;
  piVar5 = param_2;
  while( true ) {
    this = (int *)0x0;
    if (piVar5 == local_28) {
      if (param_2 == (int *)0x0) {
        ExceptionList = pvStack_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    local_2c = *(int **)((int)param_5 + 8);
    this_00 = *(int **)((int)param_5 + 4);
    if (this_00 == local_2c) break;
    do {
      FUN_009fa310((int *)&local_24,this_00,piVar5);
      piVar3 = local_24;
      piVar6 = (int *)this_00[1];
      if (local_24 == piVar6) {
        piVar6 = this_00 + 3;
      }
      else if (this == (int *)0x0) {
        piVar6 = this_00 + 3;
        FUN_009fce60(this_00,piVar5);
        FUN_009fbb30(this_00,&local_1c,piVar3);
        this = this_00;
      }
      else {
        FUN_009fcc70(this,*piVar6,(int)piVar6);
        piVar3 = piVar3 + 3;
        piVar6 = FUN_009f83d0(this,piVar3);
        piVar7 = FUN_009f8390(this,piVar3);
        piVar3 = piVar7;
        while (piVar3 != piVar6) {
          if (*(char *)((int)piVar3 + 0x1d) == '\0') {
            piVar2 = (int *)piVar3[2];
            if (*(char *)((int)piVar2 + 0x1d) == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x1d);
              piVar3 = piVar2;
              piVar2 = (int *)*piVar2;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar2 + 0x1d);
                piVar3 = piVar2;
                piVar2 = (int *)*piVar2;
              }
            }
            else {
              cVar1 = *(char *)(piVar3[1] + 0x1d);
              piVar4 = (int *)piVar3[1];
              piVar2 = piVar3;
              while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
                cVar1 = *(char *)(piVar3[1] + 0x1d);
                piVar4 = (int *)piVar3[1];
                piVar2 = piVar3;
              }
            }
          }
        }
        FUN_009fbdf0(this,&local_2c,piVar7,piVar6);
        puVar8 = (undefined4 *)FUN_009ff050(param_5,&local_20,this_00);
        local_2c = *(int **)((int)param_5 + 8);
        piVar6 = (int *)*puVar8;
      }
      this_00 = piVar6;
    } while (piVar6 != local_2c);
    if (this == (int *)0x0) break;
    piVar5 = piVar5 + 4;
  }
  piStack_14 = (int *)FUN_009f90a0();
  *(undefined1 *)((int)piStack_14 + 0x1d) = 1;
  piStack_14[1] = (int)piStack_14;
  *piStack_14 = (int)piStack_14;
  piStack_14[2] = (int)piStack_14;
  local_4._0_1_ = 1;
  uStack_10 = 0;
  FUN_009ff530(param_5,local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_009fbdf0(local_18,&local_1c,(int *)*piStack_14,piStack_14);
                    /* WARNING: Subroutine does not return */
  _free(piStack_14);
}


//// FUNCTION FUN_009ff7e0 @ 009ff7e0 ////

void __thiscall FUN_009ff7e0(void *this,int param_1,float *param_2)

{
  float *pfVar1;
  ushort uVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  void *pvVar10;
  int iVar11;
  float fVar12;
  byte *pbVar13;
  float *pfVar14;
  float fVar15;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  float10 fVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 in_stack_fffffe78;
  int *in_stack_fffffe7c;
  float **ppfVar22;
  undefined1 *puVar23;
  float *local_15c;
  float local_158;
  uint local_154;
  float **local_150;
  float local_14c;
  float *local_148;
  int local_144;
  uint local_140;
  float local_13c;
  float *local_138;
  float local_134;
  float local_130;
  float local_12c;
  float *local_128;
  float local_124 [7];
  float local_108;
  float local_104;
  uint local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined1 local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [4];
  int local_d4;
  undefined4 *local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  uint *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  undefined4 *local_94;
  float local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  float *local_7c;
  float *local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  void *local_3c;
  undefined1 local_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf903f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_3c = this;
  uVar6 = FUN_009f8b60();
  *(undefined4 *)((int)this + 4) = uVar6;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_009f71f0(this,param_2);
  local_e0 = FUN_009f8da0();
  *(undefined1 *)(local_e0 + 0x1d) = 1;
  *(int *)(local_e0 + 4) = local_e0;
  *(int *)local_e0 = local_e0;
  *(int *)(local_e0 + 8) = local_e0;
  local_dc = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_7c = (float *)0x0;
  local_78 = (float *)0x0;
  local_74 = 0;
  local_4._0_1_ = 4;
  local_140 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar16 = 0;
    do {
      iVar7 = *(int *)(param_1 + 8);
      puVar17 = (uint *)(*(int *)(param_1 + 0xc) + iVar16);
      local_134 = (float)(iVar7 + (*puVar17 & 0xffff) * 0xc);
      local_130 = (float)(iVar7 + (*puVar17 >> 0x10) * 0xc);
      local_12c = (float)(iVar7 + (uint)(ushort)puVar17[1] * 0xc);
      iVar7 = FUN_009f7170(&local_134,&local_98);
      if (ABS(*(float *)(iVar7 + 8)) <= 0.087) {
        uVar2 = (ushort)*puVar17;
        if ((uVar2 != *(ushort *)((int)puVar17 + 2)) && (uVar2 != (ushort)puVar17[1])) {
          local_b0 = (float)(uint)uVar2;
          local_ac = (float)(uint)*(ushort *)((int)puVar17 + 2);
          local_a8 = (float)(uint)(ushort)puVar17[1];
          in_stack_fffffe7c = (int *)0x9ff98f;
          local_a4 = puVar17;
          FUN_009faae0((int *)&local_b0,(int *)&local_a4,3);
          iVar7 = FUN_009fc0f0(local_e4,&local_14c,(int *)&local_b0);
          if (*(char *)(iVar7 + 4) == '\0') {
            local_c8 = (float)(uint)(ushort)*puVar17;
            local_c4 = (float)(uint)*(ushort *)((int)puVar17 + 2);
            local_c0 = (float)(uint)(ushort)puVar17[1];
            in_stack_fffffe7c = (int *)0x9ff9f0;
            local_bc = puVar17;
            FUN_009faae0((int *)&local_c8,(int *)&local_bc,3);
            FUN_009fd700(local_58,&local_c8);
          }
        }
      }
      else {
        FUN_009fd770(local_80,puVar17);
      }
      local_140 = local_140 + 1;
      iVar16 = iVar16 + 6;
    } while (local_140 != *(int *)(param_1 + 4));
  }
  uVar20 = FUN_00acd42c();
  uVar8 = (uint)uVar20;
  local_140 = uVar8;
  uVar21 = FUN_00acd42c();
  local_150 = (float **)uVar21;
  local_15c = (float *)0x0;
  FUN_009fd3a0(&local_98,(uint)((uVar20 & 0x1f) != 0) + (uVar8 >> 5),&local_15c);
  if (uVar8 != 0) {
    *local_94 = 0;
  }
  local_4._0_1_ = 5;
  puVar17 = (uint *)0x9ffab3;
  ppfVar22 = local_150;
  local_88 = uVar8;
  FUN_009ff4a0((void *)((int)this + 0x20),(uint)local_150,(int)&local_98);
  local_4._0_1_ = 4;
  if (local_94 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_94);
  }
  local_138 = local_78;
  for (local_128 = local_7c; local_128 != local_138; local_128 = (float *)((int)local_128 + 6)) {
    local_fc = *local_128;
    local_13c = *(float *)((int)this + 0x10) + 2.0;
    uVar2 = *(ushort *)(local_128 + 1);
    local_158 = *(float *)((int)this + 0x14);
    local_48 = *(float *)((int)this + 0xc) + 2.0;
    pfVar9 = (float *)(*(int *)(param_1 + 8) + ((uint)local_fc & 0xffff) * 0xc);
    local_c8 = *pfVar9 - local_48;
    local_12c = (pfVar9[2] - local_158) * 0.25;
    local_130 = (pfVar9[1] - local_13c) * 0.25;
    local_134 = local_c8 * 0.25;
    FUN_009840b0(local_124,&local_134);
    pfVar9 = (float *)(*(int *)(param_1 + 8) + ((uint)local_fc >> 0x10) * 0xc);
    local_b0 = *pfVar9 - local_48;
    local_e8 = (pfVar9[2] - local_158) * 0.25;
    local_ec = (pfVar9[1] - local_13c) * 0.25;
    local_f0 = local_b0 * 0.25;
    FUN_009840b0(local_124 + 2,&local_f0);
    pfVar9 = (float *)(*(int *)(param_1 + 8) + (uint)uVar2 * 0xc);
    local_98 = *pfVar9 - local_48;
    local_68 = (pfVar9[2] - local_158) * 0.25;
    local_6c = (pfVar9[1] - local_13c) * 0.25;
    local_70 = local_98 * 0.25;
    FUN_009840b0(local_124 + 4,&local_70);
    local_13c = (local_124[3] + local_124[1] + local_124[5]) * 0.33333334;
    fVar15 = (local_124[0] + local_124[2] + local_124[4]) * 0.33333334;
    for (pfVar9 = local_124; pfVar9 != local_124 + 6; pfVar9 = pfVar9 + 2) {
      local_148 = (float *)((pfVar9[1] - local_13c) * 1.3 + local_13c);
      local_14c = (*pfVar9 - fVar15) * 1.3 + fVar15;
      *pfVar9 = local_14c;
      pfVar9[1] = (float)local_148;
    }
    FUN_009fafb0(local_38,local_124);
    ppfVar22 = &local_15c;
    puVar17 = &local_154;
    in_stack_fffffe7c = (int *)0x9ffd1b;
    uVar6 = FUN_009fa770(local_38,puVar17,(float *)ppfVar22,&local_100);
    cVar5 = (char)uVar6;
    uVar8 = local_140;
    while (local_140 = uVar8, cVar5 != '\0') {
      if ((-1 < (int)local_15c) && ((int)local_15c < (int)local_150)) {
        if ((int)uVar8 <= (int)local_100) {
          local_100 = uVar8;
        }
        local_154 = local_154 & ((int)local_154 < 0) - 1;
        if ((int)local_154 < (int)local_100) {
          do {
            puVar17 = (uint *)(*(int *)(*(int *)((int)this + 0x24) + 4 + (int)local_15c * 0x14) +
                              (local_154 >> 5) * 4);
            bVar4 = (byte)local_154;
            local_154 = local_154 + 1;
            *puVar17 = *puVar17 | 1 << (bVar4 & 0x1f);
          } while (local_154 != local_100);
        }
      }
      ppfVar22 = &local_15c;
      puVar17 = &local_154;
      in_stack_fffffe7c = (int *)0x9ffda5;
      uVar6 = FUN_009fa770(local_38,puVar17,(float *)ppfVar22,&local_100);
      uVar8 = local_140;
      cVar5 = (char)uVar6;
    }
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  for (puVar18 = (undefined4 *)(*(int *)((int)this + 0x24) + 4);
      puVar18 + -1 != *(undefined4 **)((int)this + 0x28); puVar18 = puVar18 + 5) {
    pbVar13 = (byte *)*puVar18;
    if (pbVar13 == (byte *)0x0) {
      iVar16 = 0;
    }
    else {
      iVar16 = puVar18[1] - (int)pbVar13 >> 2;
    }
    iVar7 = 0;
    if (iVar16 != 0) {
      iVar16 = iVar16 << 2;
      do {
        iVar7 = iVar7 + (uint)(byte)(&DAT_00d74140)[*pbVar13];
        pbVar13 = pbVar13 + 1;
        iVar16 = iVar16 + -1;
        uVar8 = local_140;
      } while (iVar16 != 0);
    }
    *(uint *)((int)this + 0x30) = *(int *)((int)this + 0x30) + (uVar8 - iVar7);
  }
  local_d4 = 0;
  local_d0 = (undefined4 *)0x0;
  local_cc = 0;
  puVar23 = local_d8;
  local_4._0_1_ = 6;
  FUN_009fcff0(&stack0xfffffe78,(int)local_58);
  FUN_009ff5c0(in_stack_fffffe78,in_stack_fffffe7c,(int *)puVar17,ppfVar22,puVar23);
  local_148 = (float *)FUN_009f8bc0();
  puVar18 = local_d0;
  local_144 = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  for (local_150 = (float **)(local_d4 + 4); local_150 + -1 != (float **)puVar18;
      local_150 = local_150 + 3) {
    local_138 = *local_150;
    local_15c = (float *)*local_138;
    while (local_15c != local_138) {
      fVar15 = local_15c[3];
      iVar16 = (int)fVar15 * 0xc;
      if (*(float *)(*(int *)(param_1 + 8) + 8 + (int)local_15c[5] * 0xc) <
          *(float *)(*(int *)(param_1 + 8) + 8 + iVar16)) {
        fVar12 = local_15c[4];
        pfVar9 = (float *)(iVar16 + *(int *)(param_1 + 8));
        local_f0 = *pfVar9;
        local_ec = pfVar9[1];
        local_e8 = pfVar9[2];
        pfVar9 = (float *)(*(int *)(param_1 + 8) + (int)fVar12 * 0xc);
        local_134 = *pfVar9;
        local_130 = pfVar9[1];
        local_12c = pfVar9[2];
        local_f4 = local_e8 - local_12c;
        local_f8 = local_ec - local_130;
        local_fc = local_f0 - local_134;
        fVar19 = FUN_00412e20(&local_fc);
        if (ABS(local_f4) < 0.577) {
          local_124[3] = *pfVar9;
          local_124[2] = (float)fVar19;
          local_124[4] = pfVar9[1];
          local_124[5] = pfVar9[2];
          local_124[6] = local_fc;
          local_108 = local_f8;
          pfVar9 = local_148 + 1;
          local_104 = local_f4;
          local_124[0] = fVar15;
          local_124[1] = fVar12;
          pvVar10 = FUN_009f9940(local_148,*pfVar9,local_124);
          FUN_009fb7d0(&local_14c,1);
          *pfVar9 = (float)pvVar10;
          **(undefined4 **)((int)pvVar10 + 4) = pvVar10;
        }
      }
      FUN_009f7920((int *)&local_15c);
    }
  }
  if (local_144 != 0) {
    pfVar9 = (float *)*local_148;
    local_158 = pfVar9[3];
    fVar15 = pfVar9[2];
    if (pfVar9 != local_148) {
      *(float *)pfVar9[1] = *pfVar9;
      *(float *)((int)*pfVar9 + 4) = pfVar9[1];
                    /* WARNING: Subroutine does not return */
      _free(pfVar9);
    }
    iVar16 = *(int *)(param_1 + 8);
    iVar7 = *(int *)((int)this + 4);
    pfVar9 = (float *)(iVar16 + (int)local_158 * 0xc);
    pfVar14 = (float *)(iVar16 + (int)fVar15 * 0xc);
    local_124[0] = *pfVar14;
    local_124[1] = pfVar14[1];
    local_124[2] = pfVar14[2];
    local_124[3] = *pfVar9;
    local_124[4] = pfVar9[1];
    local_124[5] = pfVar9[2];
    iVar11 = FUN_009f98a0(iVar7,*(undefined4 *)(iVar7 + 4),local_124);
    FUN_009fb570(this,1);
    *(int *)(iVar7 + 4) = iVar11;
    **(int **)(iVar11 + 4) = iVar11;
    local_154 = *(uint *)((int)this + 4);
    pfVar14 = (float *)*local_148;
    local_150 = (float **)0x0;
    pfVar9 = pfVar14;
    local_15c = pfVar14;
    do {
      if (local_144 == 0) break;
      fVar12 = pfVar9[2];
      fVar3 = pfVar9[3];
      if (fVar12 == fVar15) {
        pfVar14 = (float *)(iVar16 + (int)fVar3 * 0xc);
        pfVar1 = (float *)(iVar16 + (int)fVar15 * 0xc);
        local_124[0] = *pfVar14;
        local_124[1] = pfVar14[1];
        local_124[2] = pfVar14[2];
        local_124[3] = *pfVar1;
        local_124[4] = pfVar1[1];
        local_124[5] = pfVar1[2];
        iVar7 = **(int **)((int)this + 4);
        iVar11 = FUN_009f98a0(iVar7,*(undefined4 *)(iVar7 + 4),local_124);
        FUN_009fb570(this,1);
        *(int *)(iVar7 + 4) = iVar11;
        **(int **)(iVar11 + 4) = iVar11;
        fVar15 = pfVar9[3];
LAB_00a003da:
        local_15c = (float *)*pfVar9;
        if (pfVar9 != local_148) {
          *(float **)pfVar9[1] = local_15c;
          *(float *)((int)*pfVar9 + 4) = pfVar9[1];
                    /* WARNING: Subroutine does not return */
          _free(pfVar9);
        }
        pfVar14 = (float *)*local_148;
        pfVar9 = local_15c;
        if (local_15c == local_148) {
          pfVar9 = pfVar14;
          local_15c = pfVar14;
        }
      }
      else {
        if (fVar3 == fVar15) {
          pfVar14 = (float *)(iVar16 + (int)fVar12 * 0xc);
          puVar18 = (undefined4 *)(iVar16 + (int)fVar15 * 0xc);
          local_98 = *pfVar14;
          local_94 = (undefined4 *)pfVar14[1];
          local_90 = pfVar14[2];
          local_88 = puVar18[1];
          local_8c = *puVar18;
          local_84 = puVar18[2];
          iVar7 = **(int **)((int)this + 4);
          iVar11 = FUN_009f98a0(iVar7,*(undefined4 *)(iVar7 + 4),&local_98);
          FUN_009fb570(this,1);
          *(int *)(iVar7 + 4) = iVar11;
          **(int **)(iVar11 + 4) = iVar11;
          fVar15 = pfVar9[2];
          goto LAB_00a003da;
        }
        if (fVar12 == local_158) {
          puVar18 = (undefined4 *)(iVar16 + (int)fVar3 * 0xc);
          pfVar14 = (float *)(iVar16 + (int)local_158 * 0xc);
          local_b0 = *pfVar14;
          local_ac = pfVar14[1];
          local_a8 = pfVar14[2];
          local_a4 = (uint *)*puVar18;
          local_a0 = puVar18[1];
          local_9c = puVar18[2];
          iVar7 = FUN_009f98a0(local_154,*(undefined4 *)(local_154 + 4),&local_b0);
          FUN_009fb570(this,1);
          *(int *)(local_154 + 4) = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          local_158 = pfVar9[3];
          goto LAB_00a003da;
        }
        if (fVar3 == local_158) {
          puVar18 = (undefined4 *)(iVar16 + (int)fVar12 * 0xc);
          pfVar14 = (float *)(iVar16 + (int)local_158 * 0xc);
          local_c8 = *pfVar14;
          local_c4 = pfVar14[1];
          local_c0 = pfVar14[2];
          local_bc = (uint *)*puVar18;
          local_b8 = puVar18[1];
          local_b4 = puVar18[2];
          iVar7 = FUN_009f98a0(local_154,*(undefined4 *)(local_154 + 4),&local_c8);
          FUN_009fb570(this,1);
          *(int *)(local_154 + 4) = iVar7;
          **(int **)(iVar7 + 4) = iVar7;
          local_158 = pfVar9[2];
          goto LAB_00a003da;
        }
        pfVar9 = (float *)*pfVar9;
        if (pfVar9 == local_148) {
          pfVar9 = pfVar14;
        }
        if (pfVar9 == local_15c) {
          local_154 = **(uint **)((int)this + 4);
          local_158 = pfVar9[3];
          fVar15 = pfVar9[2];
          puVar18 = (undefined4 *)(iVar16 + (int)local_158 * 0xc);
          local_70 = *(float *)(iVar16 + (int)fVar15 * 0xc);
          iVar7 = iVar16 + (int)fVar15 * 0xc;
          local_6c = *(float *)(iVar7 + 4);
          local_68 = *(float *)(iVar7 + 8);
          local_64 = *puVar18;
          local_60 = puVar18[1];
          local_5c = puVar18[2];
          local_138 = (float *)**(undefined4 **)((int)this + 4);
          fVar12 = (float)FUN_009f98a0(local_138,local_138[1],&local_70);
          FUN_009fb570(this,1);
          local_138[1] = fVar12;
          **(float **)((int)fVar12 + 4) = fVar12;
          goto LAB_00a003da;
        }
      }
      local_150 = (float **)((int)local_150 + 1);
    } while (local_150 < (undefined4 *)0x2711);
  }
  pfVar9 = (float *)*local_148;
  *local_148 = (float)local_148;
  local_148[1] = (float)local_148;
  if (pfVar9 != local_148) {
                    /* WARNING: Subroutine does not return */
    _free(pfVar9);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_148);
}


//// FUNCTION FUN_00a00580 @ 00a00580 ////

void __thiscall FUN_00a00580(void *this,int param_1,float *param_2)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf905b;
  local_c = ExceptionList;
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_009fdbe0(iVar1 + 0x20);
    FUN_009f8c50(iVar1);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar1 + 4));
  }
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  this_00 = operator_new(0x34);
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    uVar2 = FUN_009ff7e0(this_00,param_1,param_2);
    *(undefined4 *)this = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)this = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a00660 @ 00a00660 ////

void __thiscall FUN_00a00660(void *this,char param_1)

{
  int iVar1;
  bool bVar2;
  void *this_00;
  char cVar3;
  
  iVar1 = *(int *)((int)this + 0x148);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xa0) = *(uint *)(iVar1 + 0xa0) & 0xfffffffb;
    this_00 = (void *)FUN_0097e350(*(void **)((int)this + 0x148),0);
    if ((((param_1 != '\0') && (this_00 != (void *)0x0)) &&
        (bVar2 = FUN_009daa10(this_00,"[dome backdrops]"), bVar2)) && (DAT_010b702c != (int *)0x0))
    {
      (**(code **)(*DAT_010b702c + 8))();
    }
    if (DAT_010b7026 == '\0') {
      FUN_0097e5e0(*(void **)((int)this + 0x148));
    }
    else {
      if (((*(byte *)((int)*(void **)((int)this + 0x148) + 0x9c) & 0x40) == 0) &&
         (FUN_009e56f0(), DAT_010b7020 != (int *)0x0)) {
        DAT_01058f0d = 1;
        (**(code **)(*DAT_010b7020 + 8))();
        DAT_01058f0d = 0;
      }
      if ((*(uint *)((int)this_00 + 0xe4) & 0x1000) != 0) {
        FUN_0097e5e0(*(void **)((int)this + 0x148));
      }
      if ((DAT_010b7020 != (int *)0x0) && (DAT_0105be08 != 0)) {
        (**(code **)(*DAT_010b7020 + 8))();
      }
    }
    (**(code **)(**(int **)((int)this + 0x148) + 0x10))(0,1);
    if (DAT_010b7028 != (int *)0x0) {
      cVar3 = DAT_010b7024;
      if (param_1 == '\0') {
        cVar3 = DAT_010b7025;
      }
      if (cVar3 != '\0') {
        DAT_010b7028[0x27] = DAT_010b7028[0x27] | 0x400000;
        (**(code **)(*DAT_010b7028 + 0x10))(0,1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a00780 @ 00a00780 ////

void __thiscall FUN_00a00780(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  byte *pbVar4;
  char acStack_40 [64];
  
  FUN_009713a0((int)this);
  pbVar1 = param_1;
  if ((param_1 != (byte *)0x0) && (iVar2 = FUN_009ad870(&DAT_010b9588,param_1), 1 < iVar2)) {
    *(int *)((int)this + 4) = iVar2;
    pvVar3 = operator_new(iVar2 << 2);
    *(void **)((int)this + 8) = pvVar3;
    pbVar4 = (byte *)0x0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        param_1 = pbVar4;
        FUN_009ad980(&DAT_010b9588,acStack_40,(char *)pbVar1,(int *)&param_1);
        pvVar3 = FUN_0099bb50(acStack_40,0,0,0,'\0');
        *(void **)(*(int *)((int)this + 8) + (int)pbVar4 * 4) = pvVar3;
        pbVar4 = pbVar4 + 1;
      } while ((int)pbVar4 < *(int *)((int)this + 4));
    }
  }
  return;
}


//// FUNCTION FUN_00a00810 @ 00a00810 ////

void __fastcall FUN_00a00810(int param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  void **ppvVar12;
  undefined4 auStackY_e8 [7];
  undefined4 uStackY_cc;
  float local_a8;
  float local_a4;
  undefined1 *local_a0;
  undefined1 *local_9c;
  float local_98;
  float fStack_94;
  void *pvStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  int local_80;
  void *local_7c [2];
  uint local_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  char *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf909f;
  local_c = ExceptionList;
  local_9c = (undefined1 *)0x0;
  DAT_010b7025 = 0;
  DAT_010b7026 = 0;
  DAT_010b7024 = 0;
  if (*(void **)(param_1 + 0x148) == (void *)0x0) {
    DAT_010b7024 = 0;
    DAT_010b7025 = 0;
    DAT_010b7026 = 0;
    return;
  }
  ExceptionList = &local_c;
  local_80 = param_1;
  pvVar4 = (void *)FUN_0097e350(*(void **)(param_1 + 0x148),0);
  if (pvVar4 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
  FUN_009dc300((int)pvVar4);
  if ((DAT_010b7028 == (int *)0x0) ||
     ((bVar2 = FUN_009daa10(pvVar4,"[proper dome]"), !bVar2 &&
      ((*(uint *)(param_1 + 0x54) & 0x400) == 0)))) {
    bVar2 = FUN_009daa10(pvVar4,"[dome backdrops]");
    if (!bVar2) goto LAB_00a00b20;
    if (DAT_010b702c != (int *)0x0) {
      local_9c = &stack0xffffff40;
      FUN_004012c0(0.0);
      local_a8 = *(float *)((int)pvVar4 + 200);
      local_a4 = *(float *)((int)pvVar4 + 0xcc);
      local_a0 = (undefined1 *)0x0;
      (**(code **)(*DAT_010b702c + 0x20))();
    }
    if (-1 < *(int *)(param_1 + 0x50)) goto LAB_00a00b20;
    FUN_009ddf60(pvVar4,local_4c,"fake backdrop");
    local_4 = 3;
    pcVar7 = local_4c[0];
    do {
      cVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    if ((4 < (uint)((int)pcVar7 - (int)(local_4c[0] + 1))) && (DAT_010b7028 != (int *)0x0)) {
      DAT_010b7025 = 1;
      pbVar6 = FUN_009de1d0(local_4c[0],1);
      (**(code **)(*DAT_010b7028 + 0x18))();
      if (pbVar6 != (byte *)0x0) {
        FUN_009de3b0(pbVar6);
      }
      local_a0 = &stack0xffffff3c;
      uStackY_cc = 0xa00ad7;
      FUN_004012c0(0.0);
      local_a8 = 0.0;
      local_a4 = 0.0;
      uStackY_cc = 0xa00b01;
      (**(code **)(*DAT_010b7028 + 0x20))();
    }
  }
  else {
    bVar2 = (*(uint *)(param_1 + 0x54) & 0x400) == 0;
    if (bVar2) {
      puVar5 = FUN_009ddf60(pvVar4,local_2c,"dome model");
    }
    else {
      puVar5 = FUN_00401de0(local_7c,"sky_box_city.msh",0xffffffff);
    }
    FUN_00403de0(local_4c,puVar5);
    local_4 = 1;
    if ((bVar2) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = 2;
    if ((!bVar2) && (0x14 < local_74)) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c[0]);
    }
    pbVar6 = FUN_009de1d0(local_4c[0],1);
    (**(code **)(*DAT_010b7028 + 0x18))();
    if (pbVar6 != (byte *)0x0) {
      FUN_009de3b0(pbVar6);
    }
    local_a0 = &stack0xffffff3c;
    uStackY_cc = 0xa0096f;
    FUN_004012c0(0.0);
    local_a8 = *(float *)(*(int *)(param_1 + 0x148) + 0x40);
    local_a4 = *(float *)(*(int *)(param_1 + 0x148) + 0x44);
    uStackY_cc = 0xa0099e;
    (**(code **)(*DAT_010b7028 + 0x20))();
    if (((*(uint *)(param_1 + 0x50) >> 0x10 & 1) == 0) &&
       ((*(uint *)(param_1 + 0x50) >> 0x1c & 1) == 0)) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    FUN_0097e730(*(void **)(param_1 + 0x148),0xd,cVar3);
    DAT_010b7024 = 1;
  }
  local_4 = 0xffffffff;
  if (0x14 < uStack_44) {
    local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
LAB_00a00b20:
  if (*(int *)(param_1 + 0x14c) != 0) {
    DAT_010b7026 = 1;
    FUN_004139b0((void *)((int)pvVar4 + 200),&local_98);
    FUN_004139f0((void *)((int)pvVar4 + 200),&local_a8);
    iVar8 = *(int *)((int)pvVar4 + 0x88);
    if ((iVar8 != 0) && (iVar10 = *(int *)(iVar8 + 8), 0 < iVar10)) {
      pfVar9 = *(float **)(iVar8 + 0xc);
      do {
        iVar8 = 8;
        bVar2 = true;
        pfVar11 = pfVar9 + 3;
        pcVar7 = "_fp_min";
        do {
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          bVar2 = *(char *)pfVar11 == *pcVar7;
          pfVar11 = (float *)((int)pfVar11 + 1);
          pcVar7 = pcVar7 + 1;
        } while (bVar2);
        if (bVar2) {
          local_98 = *pfVar9;
          fStack_94 = pfVar9[1];
        }
        else {
          iVar8 = 8;
          bVar2 = true;
          pfVar11 = pfVar9 + 3;
          pcVar7 = "_fp_max";
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            bVar2 = *(char *)pfVar11 == *pcVar7;
            pfVar11 = (float *)((int)pfVar11 + 1);
            pcVar7 = pcVar7 + 1;
          } while (bVar2);
          if (bVar2) {
            local_a8 = *pfVar9;
            local_a4 = pfVar9[1];
          }
        }
        pfVar9 = pfVar9 + 0xb;
        iVar10 = iVar10 + -1;
        param_1 = local_80;
      } while (iVar10 != 0);
    }
    uStack_84 = 0x3f800000;
    pvStack_8c = (void *)(local_a8 - local_98);
    local_a0 = (undefined1 *)0x3f800000;
    fStack_88 = local_a4 - fStack_94;
    uStack_5c = 0x3f800000;
    uStack_60 = 0;
    local_a8 = (float)pvStack_8c * 0.0;
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_74 = 0;
    local_7c[1] = (void *)0x0;
    local_a4 = fStack_88 * 0.0;
    local_7c[0] = pvStack_8c;
    fStack_6c = fStack_88;
    uStack_50 = 0;
    fStack_58 = local_98 - local_a8;
    fStack_54 = fStack_94 - local_a4;
    if (DAT_010b7020 != (int *)0x0) {
      ppvVar12 = local_7c;
      puVar5 = auStackY_e8;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *ppvVar12;
        ppvVar12 = ppvVar12 + 1;
        puVar5 = puVar5 + 1;
      }
      local_9c = (undefined1 *)auStackY_e8;
      (**(code **)(*DAT_010b7020 + 0x24))();
      pvVar4 = (void *)FUN_0097e350(DAT_010b7020,0);
      if (pvVar4 != (void *)0x0) {
        *(undefined1 *)(*(int *)((int)pvVar4 + 0x34) + 0xc) = 9;
        puVar1 = (uint *)(*(int *)((int)pvVar4 + 0x34) + 0x10);
        *puVar1 = *puVar1 & 0xf7ffffff;
        puVar1 = (uint *)(*(int *)((int)pvVar4 + 0x34) + 0x10);
        *puVar1 = *puVar1 & 0xefffffff;
        FUN_00a48e80(pvVar4,0,**(int **)(param_1 + 0x14c));
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a00cf0 @ 00a00cf0 ////

void __thiscall FUN_00a00cf0(void *this,byte *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  void *this_00;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uStackY_12c;
  char local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf90bb;
  local_c = ExceptionList;
  if (param_1 == (byte *)0x0) {
    return;
  }
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
    FUN_0099b400(*(void **)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(byte **)((int)this + 0xc) = param_1;
  if (*(void **)((int)this + 0x148) != (void *)0x0) {
    FUN_00981d20(*(void **)((int)this + 0x148),(int)param_1);
    this_00 = (void *)FUN_0097e350(*(void **)((int)this + 0x148),0);
    if (DAT_010b702c != (void *)0x0) {
      if (this_00 == (void *)0x0) goto LAB_00a00e3d;
      bVar3 = FUN_009daa10(this_00,"[dome backdrops]");
      if (bVar3) {
        FUN_00981d20(DAT_010b702c,(int)param_1);
      }
    }
    if ((this_00 != (void *)0x0) && (bVar3 = FUN_009daa10(this_00,"[scaling"), bVar3)) {
      uStackY_12c = 0xa00db1;
      iVar4 = _strncmp("bd_f_",(char *)param_1,5);
      uVar2 = DAT_0105cc5c;
      DAT_0105cc5c = uVar2;
      if (iVar4 == 0) {
        DAT_0105cc5c = 0;
        uStackY_12c = 0xa00dde;
        local_4 = iVar4;
        _sprintf(local_10c,(char *)param_1);
        pcVar5 = local_10c;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        pcVar5 = pcVar5 + (-0x11 - (int)&stack0xfffffed8);
        (&stack0xfffffee5)[(int)pcVar5] = 0x6d;
        (&stack0xfffffee6)[(int)pcVar5] = 0x73;
        (&stack0xfffffee7)[(int)pcVar5] = 0x68;
        uStackY_12c = 0xa00e0d;
        pbVar6 = FUN_009de1d0(local_10c,1);
        uStackY_12c = 0xa00e20;
        MeshInstance_AddMeshWithChildren(*(void **)((int)this + 0x148),(int)pbVar6,0);
        if (pbVar6 != (byte *)0x0) {
          FUN_009de3b0(pbVar6);
        }
        local_4 = 0xffffffff;
        DAT_0105cc5c = uVar2;
      }
    }
  }
LAB_00a00e3d:
  if ((DAT_010b7028 != (void *)0x0) && (DAT_010b7025 != '\0')) {
    FUN_00981d20(DAT_010b7028,(int)param_1);
  }
  for (uVar7 = 0;
      (iVar4 = *(int *)((int)this + 0x3c), iVar4 != 0 &&
      (uVar7 < (uint)(*(int *)((int)this + 0x40) - iVar4 >> 2))); uVar7 = uVar7 + 1) {
    FUN_00a00780((void *)(*(int *)(iVar4 + uVar7 * 4) + 0x1a4),param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a00ea0 @ 00a00ea0 ////

undefined4 __thiscall FUN_00a00ea0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  char local_24 [12];
  undefined4 uStack_18;
  
  pcVar4 = local_24;
  local_24[0] = '\0';
  uVar5 = 0;
  uVar6 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&stack0xffffffd0,param_1,(int)pcVar2 - (int)(param_1 + 1));
  pbVar3 = FUN_009f41f0(pcVar4,uVar5,uVar6);
  if (pbVar3 != (byte *)0x0) {
    uStack_18 = 0xa00ef6;
    FUN_00a00cf0(this,pbVar3);
    uVar5 = FUN_0099b400(pbVar3);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_00a00f10 @ 00a00f10 ////

void __fastcall FUN_00a00f10(void *param_1)

{
  FUN_00a00810((int)param_1);
  FUN_00a00cf0(param_1,*(byte **)((int)param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00a00f30 @ 00a00f30 ////

void __thiscall FUN_00a00f30(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte *_Str2;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int local_11c;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  undefined4 local_104;
  char local_100 [256];
  
  FUN_00a26b40(&DAT_010b9570);
  if ((((*(void **)((int)this + 0x148) != (void *)0x0) &&
       (iVar2 = FUN_0097e350(*(void **)((int)this + 0x148),0), iVar2 != 0)) && (DAT_010b9578 != 0))
     && (iVar6 = DAT_010b957c - DAT_010b9578 >> 2, iVar6 != 0)) {
    local_110 = iVar2;
    uVar7 = FUN_00acd42c();
    local_104 = (int)uVar7;
    if (local_104 < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = local_104;
      if (iVar6 <= local_104) {
        iVar5 = iVar6 + -1;
      }
    }
    local_11c = 0;
    if (0 < *(int *)(iVar2 + 0x38)) {
      do {
        _Str2 = *(byte **)(*(int *)(iVar2 + 0x3c) + local_11c * 4);
        iVar2 = _strncmp("mbp_",(char *)_Str2,4);
        if (iVar2 == 0) {
          local_10c = 0;
          local_114 = 0;
          FUN_009ad890((char *)_Str2,&local_10c,&local_114);
          FUN_009ad980(&DAT_010b9588,local_100,(char *)**(undefined4 **)(DAT_010b9578 + iVar5 * 4),
                       &local_114);
          FUN_00981fc0(*(void **)((int)this + 0x148),_Str2,local_100,-1);
          uVar7 = FUN_00acd42c();
          iVar2 = (int)uVar7;
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          else if (iVar6 <= iVar2) {
            iVar2 = iVar6 + -1;
          }
          if (local_104 < 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = local_104;
            if (iVar6 <= local_104) {
              iVar4 = iVar6 + -1;
            }
          }
          if (((iVar2 != iVar4) && (PTR_FUN_00e66ef8 != (undefined *)0x0)) && (param_3 != -1)) {
            pcVar3 = local_100;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            pcVar3[(int)(local_100 + (-4 - (int)(local_100 + 1)))] = '\0';
            pcVar3 = local_100;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            iVar2 = (int)pcVar3 - (int)(local_100 + 1);
            if (((4 < iVar2) && (local_100[iVar2 + -4] == '_')) && (local_100[iVar2 + -3] == 'v')) {
              local_100[iVar2 + -2] = '0';
              local_100[iVar2 + -1] = '0';
            }
            local_108 = iVar5 + 1;
            (*(code *)PTR_FUN_00e66ef8)
                      (DAT_01050b5c,this,local_100,
                       (float)local_108 * (1.0 / (float)iVar6) - (1.0 / (float)iVar6) * 0.5,param_3)
            ;
          }
        }
        local_11c = local_11c + 1;
        iVar2 = local_110;
      } while (local_11c < *(int *)(local_110 + 0x38));
    }
  }
  return;
}


//// FUNCTION FUN_00a01150 @ 00a01150 ////

void __thiscall FUN_00a01150(void *this,undefined4 param_1,int param_2)

{
  if (*(void **)((int)this + 4) != (void *)0x0) {
    FUN_00985de0(*(void **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  if (param_2 != 0) {
    FUN_00984680(param_2);
  }
  return;
}


//// FUNCTION FUN_00a01190 @ 00a01190 ////

void __fastcall FUN_00a01190(int param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf90db;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x178) == 0) {
    ExceptionList = &local_c;
    this = operator_new(0x1a4);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00a31e00(this,*(int *)(param_1 + 0x78));
    }
    *(undefined4 **)(param_1 + 0x178) = puVar1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a01210 @ 00a01210 ////

void __fastcall FUN_00a01210(int param_1)

{
  if (*(int *)(param_1 + 0x80) != DAT_0105bec0) {
    *(int *)(param_1 + 0x80) = DAT_0105bec0;
  }
  return;
}


//// FUNCTION FUN_00a01230 @ 00a01230 ////

int * __thiscall FUN_00a01230(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_010b7030;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
  }
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))();
    if ((iVar2 == 0) && ((void *)piVar1[0xb] == this)) break;
    piVar1 = (int *)piVar1[6];
  }
  return piVar1;
}


//// FUNCTION FUN_00a01280 @ 00a01280 ////

void __fastcall FUN_00a01280(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = DAT_010b7030;
  if (DAT_010b7030 == (int *)0x0) {
    return;
  }
  while ((iVar2 = (**(code **)(*piVar3 + 0x1c))(), iVar2 != 0 || (piVar3[0xb] != param_1))) {
    piVar1 = piVar3 + 6;
    piVar3 = (int *)*piVar1;
    if ((int *)*piVar1 == (int *)0x0) {
      return;
    }
  }
  do {
    FUN_00a8ee10((int)piVar3);
    piVar1 = DAT_010b7030;
    if (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[6];
    }
    while( true ) {
      piVar3 = piVar1;
      if (piVar3 == (int *)0x0) {
        return;
      }
      iVar2 = (**(code **)(*piVar3 + 0x1c))();
      if ((iVar2 == 0) && (piVar3[0xb] == param_1)) break;
      piVar1 = (int *)piVar3[6];
    }
  } while( true );
}


//// FUNCTION FUN_00a012f0 @ 00a012f0 ////

void __fastcall FUN_00a012f0(int *param_1)

{
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x68) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c78);
    FUN_00a04ec0(*(void **)(*param_1 + 0x68),param_1[2],param_1[1],(void *)param_1[0x1e],
                 (int)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_01050c78);
  }
  return;
}


//// FUNCTION FUN_00a01360 @ 00a01360 ////

void __fastcall FUN_00a01360(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


//// FUNCTION FUN_00a013d0 @ 00a013d0 ////

uint * __thiscall FUN_00a013d0(void *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  *(uint *)this = *(uint *)this & 0xfffffff0 | param_1 & 0xf | 0x20;
  return this;
}


//// FUNCTION FUN_00a01410 @ 00a01410 ////

uint * __thiscall
FUN_00a01410(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  *(uint *)((int)this + 0xc) = param_4;
  *(uint *)((int)this + 0x10) = param_5;
  *(uint *)this = *(uint *)this & 0xfffffff0 | param_1 & 0xf | 0x20;
  return this;
}


//// FUNCTION FUN_00a01480 @ 00a01480 ////

void __fastcall FUN_00a01480(undefined4 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    FUN_00985de0((void *)param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_00a01530 @ 00a01530 ////

void __fastcall FUN_00a01530(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


//// FUNCTION FUN_00a015a0 @ 00a015a0 ////

uint __fastcall FUN_00a015a0(int *param_1)

{
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0x34) & 1) != 0)) {
    return (uint)param_1[3] >> 8 & 0xf;
  }
  return (uint)param_1[3] >> 4 & 0xf;
}


//// FUNCTION FUN_00a015c0 @ 00a015c0 ////

void * __thiscall FUN_00a015c0(void *this,byte param_1)

{
  if (*(code **)((int)this + 0x10) != (code *)0x0) {
    (**(code **)((int)this + 0x10))(*(undefined4 *)((int)this + 0x14));
  }
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a015f0 @ 00a015f0 ////

void __fastcall FUN_00a015f0(undefined4 *param_1)

{
  param_1[0x1c] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1[3] & 0xfffff00f;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x5d] = 0;
  param_1[0x1f] = 0;
  param_1[0x5e] = 0;
  param_1[3] = param_1[3] & 0xffff0ff0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_00a016b0 @ 00a016b0 ////

undefined4 __thiscall FUN_00a016b0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint in_EAX;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint local_30 [5];
  uint local_1c;
  
  pvVar1 = *(void **)this;
  if ((pvVar1 == (void *)0x0) || (in_EAX = 0, param_1 == 0)) {
    return in_EAX & 0xffffff00;
  }
  uVar3 = *(uint *)((int)this + 0xc);
  if ((*(byte *)((int)pvVar1 + 0x34) & 1) == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = 8;
  }
  puVar6 = local_30;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_30[1] = *(undefined4 *)((int)this + 4);
  local_30[0] = local_30[0] ^ (uVar3 >> iVar2 & 0xf ^ local_30[0]) & 0xf | 0x20;
  local_30[2] = param_1;
  if ((*(int *)((int)this + 0x74) == 0) && ((uVar3 & 0x1000) == 0)) {
    uVar3 = FUN_00987ae0(pvVar1,local_30);
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  local_1c = uVar3 & 0xf;
  uVar3 = FUN_00987ae0(pvVar1,local_30);
  pvVar1 = *(void **)((int)this + 0x74);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((int)pvVar1 + 0x70) == 0) {
      uVar4 = FUN_00a016b0(pvVar1,param_1);
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
    uVar3 = FUN_00a01880(pvVar1,(float)param_1);
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}


//// FUNCTION AnimPlayer_SampleTrack @ 00a01790 ////

undefined4 __thiscall AnimPlayer_SampleTrack(void *this,void *param_1,void *param_2)

{
  undefined4 uVar1;
  float local_c;
  uint local_8;
  int local_4;
  
  if (((-1 < *(int *)((int)this + 0x70)) && (*(int *)((int)this + 0x70) < 2)) &&
     (*(void **)this != (void *)0x0)) {
    FUN_00985eb0(*(void **)this,*(int *)((int)this + 4),&local_4,&local_8,&local_c);
    uVar1 = AnimTrack_SampleInterpolated(param_1,local_4,local_8,local_c,param_2);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return (uint)this & 0xffffff00;
}


//// FUNCTION FUN_00a017f0 @ 00a017f0 ////

void __thiscall FUN_00a017f0(void *this,int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  void *this_00;
  
  fVar2 = *(float *)((int)this + 4);
  uVar3 = 0;
  this_00 = *(void **)this;
  if (param_3 != (undefined4 *)0x0) {
    this_00 = (void *)*param_3;
    fVar2 = (float)param_3[1];
    uVar3 = param_3[3] & 0xf;
  }
  if ((this_00 != (void *)0x0) && (0 < param_1)) {
    if (param_2 == 0xffffffff) {
      param_2 = *(uint *)((int)this + 0xc) >> 4 & 0xf;
    }
    uVar1 = FUN_00987b20(this_00,fVar2,param_2);
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      FUN_00985de0(*(void **)((int)this + 0x18));
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    *(undefined4 *)((int)this + 0x14) = uVar1;
    *(void **)((int)this + 0x18) = this_00;
    FUN_00984680((int)this_00);
    *(undefined4 *)((int)this + 0x20) = 0;
    *(uint *)((int)this + 0x24) = uVar3;
    *(float *)((int)this + 0x1c) = (float)param_1;
    *(undefined4 *)((int)this + 0x70) = 1;
  }
  return;
}


//// FUNCTION FUN_00a01880 @ 00a01880 ////

undefined4 __thiscall FUN_00a01880(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *this_00;
  uint in_EAX;
  uint uVar4;
  undefined4 uVar5;
  int local_34;
  uint local_30 [5];
  uint local_1c;
  undefined4 local_18;
  undefined2 uVar6;
  
  fVar1 = param_1;
  if (((*(int *)this != 0) && (*(uint *)((int)this + 0x14) != 0)) && (param_1 != 0.0)) {
    param_1 = *(float *)((int)this + 0x20) / *(float *)((int)this + 0x1c);
    if (0.0 <= param_1) {
      if (1.0 < param_1) {
        param_1 = 1.0;
      }
    }
    else {
      param_1 = 0.0;
    }
    iVar3 = *(int *)(*(int *)((int)this + 0x78) + 0xd0);
    if (iVar3 == 0) {
      local_34 = DAT_0105becc;
    }
    else {
      local_34 = *(int *)(iVar3 + 0x88);
    }
    *(float *)((int)this + 0x20) = (float)local_34 + *(float *)((int)this + 0x20);
    if ((*(byte *)(*(int *)this + 0x34) & 1) == 0) {
      iVar3 = 4;
    }
    else {
      iVar3 = 8;
    }
    FUN_00a01410(local_30,*(uint *)((int)this + 0xc) >> iVar3 & 0xf,*(uint *)((int)this + 4),
                 (uint)fVar1,*(uint *)((int)this + 0x14),(uint)param_1);
    local_18 = *(undefined4 *)((int)this + 0x24);
    if ((*(int *)((int)this + 0x74) == 0) && ((*(uint *)((int)this + 0xc) & 0x1000) == 0)) {
      uVar4 = FUN_00987ae0(*(void **)this,local_30);
      uVar6 = (undefined2)(uVar4 >> 0x10);
    }
    else {
      local_1c = *(uint *)((int)this + 0xc) & 0xf;
      uVar4 = FUN_00987ae0(*(void **)this,local_30);
      uVar6 = (undefined2)(uVar4 >> 0x10);
      this_00 = *(void **)((int)this + 0x74);
      if (this_00 != (void *)0x0) {
        if (*(int *)((int)this_00 + 0x70) == 0) {
          uVar5 = FUN_00a016b0(this_00,(int)fVar1);
          uVar6 = (undefined2)((uint)uVar5 >> 0x10);
        }
        else {
          uVar5 = FUN_00a01880(this_00,fVar1);
          uVar6 = (undefined2)((uint)uVar5 >> 0x10);
        }
      }
    }
    fVar1 = *(float *)((int)this + 0x20);
    fVar2 = *(float *)((int)this + 0x1c);
    uVar5 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                           (ushort)(fVar1 == fVar2) << 0xe);
    if (fVar1 < fVar2 == 0) {
      *(undefined4 *)((int)this + 0x70) = 0;
      if (*(void **)((int)this + 0x18) != (void *)0x0) {
        uVar5 = FUN_00985de0(*(void **)((int)this + 0x18));
        *(undefined4 *)((int)this + 0x18) = 0;
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a019d0 @ 00a019d0 ////

/* WARNING: Removing unreachable block (ram,0x00a01b7c) */

uint __thiscall FUN_00a019d0(void *this,void *param_1,uint param_2)

{
  byte bVar1;
  void *this_00;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)((int)this + 0xc) >> 4 & 0xf;
  }
  if (((param_1 == (void *)0x0) && (in_EAX = *(uint *)((int)this + 0x78), in_EAX != 0)) &&
     ((*(uint *)(in_EAX + 0x9c) & 0x20000) != 0)) {
    return in_EAX & 0xffffff00;
  }
  this_00 = *(void **)this;
  if (param_1 != this_00) {
    if (param_1 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x70) = 0;
    }
    else if (((((this_00 != (void *)0x0) && (*(int *)((int)this + 0x78) != 0)) &&
              ((*(int *)(*(int *)((int)this + 0x78) + 0xd0) == 0 ||
               (-1 < (char)((uint)*(undefined4 *)((int)this + 0xc) >> 8))))) &&
             (((*(byte *)((int)this_00 + 0x34) & 1) != 0 || (*(char *)((int)this_00 + 0x33) != '\0')
              ))) && (((*(byte *)((int)param_1 + 0x34) & 1) != 0 ||
                      (*(char *)((int)param_1 + 0x33) != '\0')))) {
      uVar2 = FUN_00a015a0(this);
      iVar7 = FUN_00984d30(param_1,uVar2);
      iVar3 = FUN_00984d30(this_00,param_2);
      if (*(char *)(iVar3 + 2) == *(char *)(iVar7 + 2)) {
        FUN_00a017f0(this,200,param_2,(undefined4 *)0x0);
      }
    }
    if ((*(int *)((int)this + 0x78) == 0) || (param_1 == (void *)0x0)) {
      uVar2 = *(uint *)((int)this + 0xc) & 0xffff7fff;
    }
    else {
      uVar2 = *(uint *)((int)this + 0xc) ^
              ((uint)(*(int *)(*(int *)((int)this + 0x78) + 0xd0) != 0) << 0xf ^
              *(uint *)((int)this + 0xc)) & 0x8000;
    }
    *(uint *)((int)this + 0xc) = uVar2;
    if (*(void **)this != (void *)0x0) {
      FUN_00985de0(*(void **)this);
      *(undefined4 *)this = 0;
    }
    *(void **)this = param_1;
    if (param_1 != (void *)0x0) {
      FUN_00984680((int)param_1);
      iVar7 = *(int *)this;
      if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x34) & 1) == 0)) {
        uVar2 = *(uint *)((int)this + 0xc) >> 4;
      }
      else {
        uVar2 = *(uint *)((int)this + 0xc) >> 8;
      }
      uVar6 = 1;
      if ((*(byte *)(iVar7 + 0x34) & 1) == 0) {
        uVar6 = (uint)*(byte *)(iVar7 + 0x33);
      }
      if (uVar6 <= (uVar2 & 0xf)) {
        uVar2 = 1;
        if ((*(byte *)(iVar7 + 0x34) & 1) == 0) {
          uVar2 = (uint)*(byte *)(iVar7 + 0x33);
        }
        uVar2 = ((uVar2 - 1) * 0x10 ^ *(uint *)((int)this + 0xc)) & 0xf0 ^
                *(uint *)((int)this + 0xc);
        *(uint *)((int)this + 0xc) = (uVar2 << 4 ^ uVar2) & 0xf00 ^ uVar2;
      }
      if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x34) & 1) == 0)) {
        uVar2 = *(uint *)((int)this + 0xc) >> 4;
      }
      else {
        uVar2 = *(uint *)((int)this + 0xc) >> 8;
      }
      bVar1 = *(byte *)(iVar7 + 0x33);
      uVar2 = uVar2 & 0xf;
      if (bVar1 == 0) {
        iVar7 = 0;
      }
      else {
        if (bVar1 <= uVar2) {
          uVar2 = bVar1 - 1;
        }
        iVar7 = *(int *)(iVar7 + 0x6c + uVar2 * 4);
      }
      if (*(int *)((int)this + 0x78) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0097e890(*(int *)((int)this + 0x78));
      }
      if ((((*(void **)((int)this + 0x78) != (void *)0x0) &&
           (iVar4 = FUN_0097e350(*(void **)((int)this + 0x78),0), iVar4 != 0)) && (iVar3 != 0)) &&
         ((iVar7 != 0 && (*(char *)(iVar7 + 2) != (char)*(undefined4 *)(iVar3 + 8))))) {
        FUN_00a019d0(this,(void *)0x0,0xffffffff);
      }
    }
    uVar5 = FUN_00a01280((int)this);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00a01be0 @ 00a01be0 ////

void __thiscall FUN_00a01be0(void *this,undefined4 *param_1,uint param_2,byte param_3,void *param_4)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)((int)this + 0x78);
  if (pvVar2 != (void *)0x0) {
    while (uVar1 = FUN_0097f920(pvVar2), (char)uVar1 != '\0') {
      pvVar2 = *(void **)((int)this + 0x78);
      if (pvVar2 != param_4) {
        if (*(undefined4 **)((int)this + 0xd0) != (undefined4 *)0x0) {
          FUN_0040a5b0(*(undefined4 **)((int)this + 0xd0));
          *(undefined4 *)((int)this + 0xd0) = 0;
        }
        if ((param_1 == (undefined4 *)0x0) && (param_4 == (void *)0x0)) {
          *(uint *)((int)this + 0xbc) = *(uint *)((int)this + 0xbc) & 0xfffffffe;
          FUN_00413780((void *)((int)this + 0xe4),0);
          FUN_00413780((void *)((int)this + 0x114),0);
          FUN_00413780((void *)((int)this + 0x144),0);
          return;
        }
        if ((*(byte *)((int)this + 0xbc) & 1) == 0) {
          FUN_00413780((void *)((int)this + 0xe4),0);
          FUN_00413780((void *)((int)this + 0x114),0);
          FUN_00413780((void *)((int)this + 0x144),0);
          *(undefined4 *)((int)this + 0xe0) = 0;
        }
        if (param_1 == (undefined4 *)0x0) {
          *(void **)((int)this + 0xd0) = param_4;
          *(undefined4 *)((int)this + 0xcc) = 0x47c35000;
          InterlockedIncrement((LONG *)((int)param_4 + 0x10));
        }
        else {
          *(undefined4 *)((int)this + 0xc0) = *param_1;
          *(undefined4 *)((int)this + 0xc4) = param_1[1];
          *(undefined4 *)((int)this + 200) = param_1[2];
        }
        uVar1 = ((int)param_2 < 0) - 1 & param_2;
        *(uint *)((int)this + 0xd4) = uVar1;
        *(uint *)((int)this + 0xd8) = uVar1;
        uVar1 = ((uint)param_3 << 1 ^ *(uint *)((int)this + 0xbc)) & 2 ^ *(uint *)((int)this + 0xbc)
        ;
        *(uint *)((int)this + 0xbc) = uVar1 | 1;
        if (*(int *)(*(int *)((int)this + 0x78) + 0xd0) == 0) {
          *(uint *)((int)this + 0xbc) = uVar1 & 0xfffffffb | 1;
          return;
        }
        *(uint *)((int)this + 0xbc) = uVar1 | 5;
        *(int *)((int)this + 0xdc) =
             *(int *)(*(int *)(*(int *)((int)this + 0x78) + 0xd0) + 0x8c) * 100 + DAT_01050b60;
        return;
      }
      param_4 = (void *)0x0;
      param_2 = 0;
      param_1 = (undefined4 *)0x0;
      param_3 = 0;
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a01d80 @ 00a01d80 ////

void __thiscall
FUN_00a01d80(void *this,LONG *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[3] = 0;
    puVar1[2] = param_1;
    InterlockedIncrement(param_1);
    puVar1[4] = param_4;
    puVar1[5] = param_5;
  }
  puVar1[3] = *(undefined4 *)((int)this + 0x174);
  *(undefined4 **)((int)this + 0x174) = puVar1;
  if (*(int *)((int)this + 0x88) == 0) {
    FUN_009856c0();
  }
  return;
}


//// FUNCTION FUN_00a01df0 @ 00a01df0 ////

void __thiscall FUN_00a01df0(void *this,int param_1)

{
  int *piVar1;
  void *pvVar2;
  void *_Memory;
  
  _Memory = *(void **)((int)this + 0x174);
  pvVar2 = (void *)0x0;
  if (_Memory == (void *)0x0) {
    return;
  }
  do {
    if (*(int *)((int)_Memory + 8) == param_1) {
      if (pvVar2 == (void *)0x0) {
        *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)_Memory + 0xc);
      }
      else {
        *(undefined4 *)((int)pvVar2 + 0xc) = *(undefined4 *)((int)_Memory + 0xc);
      }
      if (*(code **)((int)_Memory + 0x10) != (code *)0x0) {
        (**(code **)((int)_Memory + 0x10))(*(undefined4 *)((int)_Memory + 0x14));
      }
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar1 = (int *)((int)_Memory + 0xc);
    pvVar2 = _Memory;
    _Memory = (void *)*piVar1;
  } while ((void *)*piVar1 != (void *)0x0);
  return;
}


//// FUNCTION FUN_00a01e50 @ 00a01e50 ////

void __thiscall FUN_00a01e50(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  
  puVar1 = *(undefined4 **)((int)this + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    *(undefined4 *)((int)this + 0x7c) = 0;
  }
  *(int *)((int)this + 0x7c) = param_1;
  if (param_1 == 0) {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & 0xffffbfff;
    return;
  }
  InterlockedIncrement((LONG *)(param_1 + 0x10));
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 0x4000;
  return;
}


//// FUNCTION FUN_00a01ee0 @ 00a01ee0 ////

undefined4 * __fastcall FUN_00a01ee0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0xc] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x18] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x2e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[4] = 0x461c4000;
  return param_1;
}


//// FUNCTION FUN_00a01f70 @ 00a01f70 ////

undefined4 * __thiscall FUN_00a01f70(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xac) = 0x3f800000;
  *(undefined4 *)((int)this + 0x9c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  FUN_00a01ee0((undefined4 *)((int)this + 0xbc));
  FUN_00a015f0(this);
  *(undefined4 *)((int)this + 0x78) = param_1;
  return this;
}


//// FUNCTION FUN_00a01ff0 @ 00a01ff0 ////

void __fastcall FUN_00a01ff0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  LONG LVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf9109;
  pvStack_c = ExceptionList;
  local_4 = 1;
  if (((param_1[0x1e] == 0) ||
      (ExceptionList = &pvStack_c, (*(uint *)(param_1[0x1e] + 0x9c) & 0x20000) == 0)) &&
     (ExceptionList = &pvStack_c, (void *)*param_1 != (void *)0x0)) {
    ExceptionList = &pvStack_c;
    param_1[0x1c] = 0;
    param_1[3] = param_1[3] & 0xffff7fff;
    FUN_00985de0((void *)*param_1);
    *param_1 = 0;
    FUN_00a01280((int)param_1);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    FUN_00985de0((void *)param_1[6]);
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  if ((void *)param_1[0x1d] != (void *)0x0) {
    FUN_0097e210((void *)param_1[0x1d],1);
  }
  puVar1 = (undefined4 *)param_1[0x1f];
  param_1[0x1d] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar4;
    param_1[0x1f] = 0;
  }
  _Memory = (void *)param_1[0x5d];
  param_1[0x1f] = 0;
  param_1[3] = param_1[3] & 0xffffbfff;
  if (_Memory != (void *)0x0) {
    if (*(code **)((int)_Memory + 0x10) != (code *)0x0) {
      (**(code **)((int)_Memory + 0x10))(*(undefined4 *)((int)_Memory + 0x14));
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  puVar1 = (undefined4 *)param_1[0x5e];
  param_1[0x5d] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00a31550(puVar1);
                    /* WARNING: Subroutine does not return */
    _free(puVar1);
  }
  param_1[0x5e] = 0;
  piVar2 = DAT_010b7030;
  while (piVar3 = piVar2, piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[6];
    iVar6 = (**(code **)(*piVar3 + 0x1c))();
    if (((iVar6 == 0) && ((undefined4 *)piVar3[0xb] == param_1)) &&
       (LVar5 = InterlockedDecrement(piVar3 + 4), uVar4 = DAT_0105b588, DAT_0105b588 = uVar4,
       LVar5 == 0)) {
      DAT_0105b588 = 1;
      (**(code **)*piVar3)(1);
      DAT_0105b588 = uVar4;
    }
  }
  puVar1 = (undefined4 *)param_1[0x34];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar1 + 4);
    uVar4 = DAT_0105b588;
    if ((LVar5 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar4;
    param_1[0x34] = 0;
  }
  local_4 = 0xffffffff;
  if ((void *)param_1[6] != (void *)0x0) {
    FUN_00985de0((void *)param_1[6]);
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a021e0 @ 00a021e0 ////

void __fastcall FUN_00a021e0(float param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  char local_101;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  char local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
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
  float local_8;
  float local_4;
  
  if ((*(int *)((int)param_1 + 0x7c) != 0) && ((*(uint *)((int)param_1 + 0xc) & 0x4000) != 0)) {
    puVar5 = *(undefined4 **)((int)param_1 + 0x88);
    local_7c = param_1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = FUN_009856c0();
    }
    local_44 = (float)puVar5[0x129];
    local_40 = puVar5[0x12a];
    local_3c = (float)puVar5[299];
    FUN_0040b490((void *)(*(int *)((int)param_1 + 0x78) + 0x18),&local_44);
    fVar6 = FUN_0097f880(*(void **)((int)param_1 + 0x7c),&local_44,(undefined4 *)0x0);
    if ((float10)local_3c < fVar6) {
      local_120 = (float)(fVar6 - (float10)local_3c);
      if ((float10)0.55 <= fVar6 - (float10)local_3c) {
        local_120 = 0.55;
      }
      pfVar1 = (float *)(puVar5 + 0x111);
      local_c8 = (float)puVar5[0x105] - *pfVar1;
      local_d0 = (float)puVar5[0x106] - (float)puVar5[0x112];
      local_cc = (float)puVar5[0x107] - (float)puVar5[0x113];
      local_d4 = (float)puVar5[0x11d] - *pfVar1;
      local_d8 = (float)puVar5[0x11e] - (float)puVar5[0x112];
      local_e8 = (float)puVar5[0x11f] - (float)puVar5[0x113];
      puVar5[299] = local_120 + (float)puVar5[299];
      puVar5[0x11f] = local_120 + (float)puVar5[0x11f];
      puVar5[0x113] = local_120 + (float)puVar5[0x113];
      local_e4 = (float)puVar5[0x105];
      fVar2 = (float)puVar5[0x11d];
      local_e0 = (float)puVar5[0x106];
      local_dc = (float)puVar5[0x107];
      local_144 = *pfVar1;
      local_140 = (float)puVar5[0x112];
      local_138 = fVar2 - local_e4;
      local_13c = (float)puVar5[0x113];
      local_10c = (float)puVar5[0x11e];
      local_108 = (float)puVar5[0x11f];
      local_134 = local_10c - local_e0;
      local_130 = local_108 - local_dc;
      local_110 = fVar2;
      local_f4 = local_138;
      local_f0 = local_134;
      local_ec = local_130;
      local_94 = local_138;
      local_84 = local_130;
      local_80 = local_134;
      FUN_00412e20(&local_138);
      local_11c = local_144 - local_e4;
      local_118 = local_140 - local_e0;
      local_114 = local_13c - local_dc;
      local_f4 = local_11c;
      local_f0 = local_118;
      local_ec = local_114;
      FUN_00412e20(&local_f4);
      FUN_00412e20(&local_f4);
      FUN_00412fd0(&local_11c,&local_138,&local_f4);
      FUN_00412e20(&local_11c);
      FUN_00412fd0(&local_12c,&local_11c,&local_138);
      local_c4 = local_138;
      local_c0 = local_134;
      local_b8 = local_12c;
      local_bc = local_130;
      local_b4 = local_128;
      local_ac = local_11c;
      local_a0 = (float)puVar5[0x105];
      local_b0 = local_124;
      local_a8 = local_118;
      local_9c = (float)puVar5[0x106];
      local_a4 = local_114;
      local_98 = (float)puVar5[0x107];
      local_c = 0;
      local_10 = 0;
      local_14 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_18 = 0x3f800000;
      local_28 = 0x3f800000;
      local_38 = 0x3f800000;
      FUN_009aa500(&local_38,&local_c4);
      local_f0 = local_10c;
      local_ec = local_108;
      local_f4 = fVar2;
      FUN_0040b490(&local_38,&local_f4);
      FUN_00a01360(local_78);
      local_5c = local_f4;
      local_58 = SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
      local_54 = SQRT(local_d4 * local_d4 + local_d8 * local_d8 + local_e8 * local_e8);
      FUN_009a42e0(local_78);
      if (local_78[0] == '\0') {
        puVar5[0x113] = local_120 + (float)puVar5[0x113];
      }
      else {
        local_144 = local_74;
        local_13c = local_6c;
        local_140 = local_70;
        FUN_0040b490(&local_c4,&local_144);
        local_101 = '\x01';
        pfVar1 = (float *)(puVar5 + 0xff);
        while( true ) {
          local_138 = local_110 - local_144;
          local_134 = local_10c - local_140;
          local_130 = local_108 - local_13c;
          local_f4 = local_138;
          local_f0 = local_134;
          local_ec = local_130;
          FUN_00412e20(&local_138);
          local_12c = local_144 - local_e4;
          local_128 = local_140 - local_e0;
          local_124 = local_13c - local_dc;
          local_e8 = local_124;
          local_d8 = local_128;
          local_d4 = local_12c;
          local_90 = local_12c;
          local_8c = local_128;
          local_88 = local_124;
          FUN_00412e20(&local_12c);
          FUN_00412fd0(&local_11c,&local_138,&local_12c);
          FUN_00412e20(&local_11c);
          FUN_00412fd0(&local_12c,&local_11c,&local_138);
          FUN_00412e20(&local_12c);
          puVar5[0x108] = local_138;
          puVar5[0x109] = local_134;
          puVar5[0x10a] = local_130;
          puVar5[0x10b] = local_12c;
          puVar5[0x10c] = local_128;
          puVar5[0x10d] = local_124;
          puVar5[0x10e] = local_11c;
          puVar5[0x10f] = local_118;
          puVar5[0x110] = local_114;
          puVar5[0x111] = local_144;
          puVar5[0x112] = local_140;
          puVar5[0x113] = local_13c;
          local_f8 = local_e8;
          local_130 = local_e8;
          local_100 = local_d4;
          local_fc = local_d8;
          local_138 = local_d4;
          local_134 = local_d8;
          FUN_00412e20(&local_138);
          local_12c = *pfVar1;
          local_128 = (float)puVar5[0x100];
          local_124 = (float)puVar5[0x101];
          FUN_00412fd0(&local_11c,&local_138,&local_12c);
          FUN_00412e20(&local_11c);
          FUN_00412fd0(&local_12c,&local_11c,&local_138);
          FUN_00412e20(&local_12c);
          puVar5[0xfc] = local_138;
          puVar5[0xfd] = local_134;
          puVar5[0xfe] = local_130;
          *pfVar1 = local_12c;
          puVar5[0x100] = local_128;
          puVar5[0x101] = local_124;
          puVar5[0x102] = local_11c;
          puVar5[0x103] = local_118;
          puVar5[0x104] = local_114;
          param_1 = local_7c;
          if ((local_101 == '\0') ||
             (local_101 = '\0',
             local_94 * *pfVar1 + local_80 * (float)puVar5[0x100] + local_84 * (float)puVar5[0x101]
             <= 0.0)) break;
          local_144 = local_ac * local_60 + local_b8 * local_64 + local_68 * local_c4 + local_a0;
          local_140 = local_c0 * local_68 + local_a8 * local_60 + local_b4 * local_64 + local_9c;
          local_13c = local_bc * local_68 + local_b0 * local_64 + local_a4 * local_60 + local_98;
        }
      }
    }
    local_50 = (float)puVar5[0x159];
    local_4c = puVar5[0x15a];
    local_48 = (float)puVar5[0x15b];
    FUN_0040b490((void *)(*(int *)((int)param_1 + 0x78) + 0x18),&local_50);
    fVar6 = FUN_0097f880(*(void **)((int)param_1 + 0x7c),&local_50,(undefined4 *)0x0);
    if ((float10)local_48 < fVar6) {
      local_120 = (float)(fVar6 - (float10)local_48);
      if ((float10)0.55 <= fVar6 - (float10)local_48) {
        local_120 = 0.55;
      }
      pfVar1 = (float *)(puVar5 + 0x141);
      local_e8 = (float)puVar5[0x135] - *pfVar1;
      local_d8 = (float)puVar5[0x136] - (float)puVar5[0x142];
      local_d4 = (float)puVar5[0x137] - (float)puVar5[0x143];
      local_cc = (float)puVar5[0x14d] - *pfVar1;
      local_d0 = (float)puVar5[0x14e] - (float)puVar5[0x142];
      local_c8 = (float)puVar5[0x14f] - (float)puVar5[0x143];
      puVar5[0x15b] = local_120 + (float)puVar5[0x15b];
      puVar5[0x14f] = local_120 + (float)puVar5[0x14f];
      puVar5[0x143] = local_120 + (float)puVar5[0x143];
      local_e4 = (float)puVar5[0x135];
      fVar2 = (float)puVar5[0x14d];
      fVar3 = (float)puVar5[0x14e];
      local_e0 = (float)puVar5[0x136];
      local_dc = (float)puVar5[0x137];
      local_138 = fVar2 - local_e4;
      local_144 = *pfVar1;
      local_140 = (float)puVar5[0x142];
      local_134 = fVar3 - local_e0;
      local_13c = (float)puVar5[0x143];
      local_ec = (float)puVar5[0x14f];
      local_130 = local_ec - local_dc;
      local_100 = local_138;
      local_fc = local_134;
      local_f8 = local_130;
      local_f4 = fVar2;
      local_f0 = fVar3;
      local_94 = local_138;
      local_8 = local_130;
      local_4 = local_134;
      FUN_00412e20(&local_138);
      local_110 = local_144 - local_e4;
      local_10c = local_140 - local_e0;
      local_108 = local_13c - local_dc;
      local_100 = local_110;
      local_fc = local_10c;
      local_f8 = local_108;
      FUN_00412e20(&local_110);
      FUN_00412e20(&local_110);
      FUN_00412fd0(&local_11c,&local_138,&local_110);
      FUN_00412e20(&local_11c);
      FUN_00412fd0(&local_12c,&local_11c,&local_138);
      local_c4 = local_138;
      local_bc = local_130;
      local_b8 = local_12c;
      local_c0 = local_134;
      local_b0 = local_124;
      local_ac = local_11c;
      local_a0 = (float)puVar5[0x135];
      local_b4 = local_128;
      local_a4 = local_114;
      local_98 = (float)puVar5[0x137];
      local_a8 = local_118;
      local_9c = (float)puVar5[0x136];
      local_c = 0;
      local_10 = 0;
      local_14 = 0;
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_2c = 0;
      local_30 = 0;
      local_34 = 0;
      local_18 = 0x3f800000;
      local_28 = 0x3f800000;
      local_38 = 0x3f800000;
      FUN_009aa500(&local_38,&local_c4);
      local_108 = local_ec;
      local_110 = fVar2;
      local_10c = fVar3;
      FUN_0040b490(&local_38,&local_110);
      FUN_00a01360(local_78);
      local_5c = local_110;
      local_58 = SQRT(local_e8 * local_e8 + local_d8 * local_d8 + local_d4 * local_d4);
      local_54 = SQRT(local_cc * local_cc + local_d0 * local_d0 + local_c8 * local_c8);
      FUN_009a42e0(local_78);
      if (local_78[0] == '\0') {
        puVar5[0x143] = local_120 + (float)puVar5[0x143];
        return;
      }
      local_144 = local_74;
      local_140 = local_70;
      local_13c = local_6c;
      FUN_0040b490(&local_c4,&local_144);
      bVar4 = true;
      pfVar1 = (float *)(puVar5 + 0x12f);
      while( true ) {
        local_138 = local_f4 - local_144;
        local_134 = local_f0 - local_140;
        local_130 = local_ec - local_13c;
        local_100 = local_138;
        local_fc = local_134;
        local_f8 = local_130;
        FUN_00412e20(&local_138);
        local_12c = local_144 - local_e4;
        local_128 = local_140 - local_e0;
        local_124 = local_13c - local_dc;
        local_90 = local_12c;
        local_8c = local_128;
        local_88 = local_124;
        local_84 = local_128;
        local_80 = local_124;
        local_7c = local_12c;
        FUN_00412e20(&local_12c);
        FUN_00412fd0(&local_11c,&local_138,&local_12c);
        FUN_00412e20(&local_11c);
        FUN_00412fd0(&local_12c,&local_11c,&local_138);
        FUN_00412e20(&local_12c);
        puVar5[0x138] = local_138;
        puVar5[0x139] = local_134;
        puVar5[0x13a] = local_130;
        puVar5[0x13b] = local_12c;
        puVar5[0x13c] = local_128;
        puVar5[0x13d] = local_124;
        puVar5[0x13e] = local_11c;
        puVar5[0x13f] = local_118;
        puVar5[0x140] = local_114;
        puVar5[0x141] = local_144;
        puVar5[0x142] = local_140;
        puVar5[0x143] = local_13c;
        local_108 = local_80;
        local_130 = local_80;
        local_110 = local_7c;
        local_10c = local_84;
        local_138 = local_7c;
        local_134 = local_84;
        FUN_00412e20(&local_138);
        local_12c = *pfVar1;
        local_128 = (float)puVar5[0x130];
        local_124 = (float)puVar5[0x131];
        FUN_00412fd0(&local_11c,&local_138,&local_12c);
        FUN_00412e20(&local_11c);
        FUN_00412fd0(&local_12c,&local_11c,&local_138);
        FUN_00412e20(&local_12c);
        puVar5[300] = local_138;
        puVar5[0x12d] = local_134;
        puVar5[0x12e] = local_130;
        *pfVar1 = local_12c;
        puVar5[0x130] = local_128;
        puVar5[0x131] = local_124;
        puVar5[0x132] = local_11c;
        puVar5[0x133] = local_118;
        puVar5[0x134] = local_114;
        if ((!bVar4) ||
           (bVar4 = false,
           local_94 * *pfVar1 + local_4 * (float)puVar5[0x130] + local_8 * (float)puVar5[0x131] <=
           0.0)) break;
        local_144 = local_68 * local_c4 + local_ac * local_60 + local_b8 * local_64 + local_a0;
        local_140 = local_c0 * local_68 + local_a8 * local_60 + local_b4 * local_64 + local_9c;
        local_13c = local_bc * local_68 + local_b0 * local_64 + local_a4 * local_60 + local_98;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a03180 @ 00a03180 ////

void __thiscall FUN_00a03180(void *this,int param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  float10 fVar7;
  
  iVar4 = *(int *)this;
  if (iVar4 != 0) {
    iVar3 = FUN_0059ee40(iVar4);
    param_1 = param_1 % iVar3;
  }
  iVar3 = *(int *)((int)this + 4);
  *(int *)((int)this + 8) = iVar3;
  *(int *)((int)this + 4) = param_1;
  if (((param_1 < iVar3) && (iVar4 != 0)) && ((*(byte *)(iVar4 + 0x34) & 1) != 0)) {
    fVar7 = FUN_00990e30(0.0,100.0);
    fVar2 = 0.0;
    uVar5 = (uint)*(byte *)(*(int *)this + 0x33);
    iVar4 = 0;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)this + 0x6c);
      do {
        fVar2 = fVar2 + *(float *)(*piVar6 + 0xc);
        if ((float)fVar7 < fVar2) {
          *(uint *)((int)this + 0xc) =
               *(uint *)((int)this + 0xc) ^ (iVar4 << 8 ^ *(uint *)((int)this + 0xc)) & 0xf00;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar4 < (int)uVar5);
    }
    uVar1 = *(uint *)((int)this + 0xc);
    if (uVar5 <= (uVar1 >> 8 & 0xf)) {
      *(uint *)((int)this + 0xc) = ((uVar5 - 1) * 0x100 ^ uVar1) & 0xf00 ^ uVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a03240 @ 00a03240 ////

void __fastcall FUN_00a03240(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00a021e0((float)param_1);
  puVar2 = *(undefined4 **)((int)param_1 + 0x174);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[3];
    if (*(int *)puVar2[2] == 1) {
      FUN_00a01df0(param_1,(int)puVar2[2]);
      puVar2 = puVar1;
    }
    else {
      puVar3 = *(undefined4 **)((int)param_1 + 0x88);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = FUN_009856c0();
      }
      (*(code *)*puVar2)(puVar2[1],puVar3);
      puVar2 = puVar1;
    }
  }
  return;
}


//// FUNCTION FUN_00a03290 @ 00a03290 ////

void __thiscall FUN_00a03290(void *this,void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  void *this_00;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float10 fVar10;
  float local_114;
  float local_110;
  float local_10c;
  float local_104;
  float local_100;
  void *local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  uint local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float *local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0 [13];
  float local_6c [15];
  float local_30 [12];
  
  local_e8 = *(uint *)((int)this + 0xd8);
  local_100 = (float)DAT_0105becc;
  if ((*(uint *)((int)this + 0xbc) & 4) != 0) {
    iVar7 = *(int *)(*(int *)((int)this + 0x78) + 0xd0);
    if (iVar7 == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = (*(int *)((int)this + 0xdc) + *(int *)(iVar7 + 0x8c) * -100 +
                 *(int *)((int)this + 0xd4)) - DAT_01050b60;
      local_e8 = ((int)local_e8 < 0) - 1 & local_e8;
      local_100 = *(float *)(iVar7 + 0x88);
    }
  }
  uVar6 = *(int *)((int)this + 0xd8) - (int)local_100;
  *(uint *)((int)this + 0xd8) = uVar6;
  local_fc = param_1;
  local_a4 = 0.0;
  local_a8 = 0.0;
  local_ac = 0.0;
  *(uint *)((int)this + 0xd8) = uVar6 & ((int)uVar6 < 0) - 1;
  local_b4 = 0.0;
  local_b8 = 0.0;
  local_bc = 0.0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  local_cc = 0.0;
  local_b0 = 1.0;
  local_c0 = 1.0;
  local_d0 = 1.0;
  local_6c[0xb] = 0.0;
  local_6c[10] = 0.0;
  local_6c[9] = 0.0;
  local_6c[7] = 0.0;
  local_6c[6] = 0.0;
  local_6c[5] = 0.0;
  local_6c[3] = 0.0;
  local_6c[2] = 0.0;
  local_6c[1] = 0.0;
  local_6c[8] = 1.0;
  local_6c[4] = 1.0;
  local_6c[0] = 1.0;
  if ((int)local_e8 < 200) {
    *(float *)((int)this + 0xe0) = (float)(int)local_e8 * 0.005;
  }
  else if (1.0 <= *(float *)((int)this + 0xe0)) {
    *(undefined4 *)((int)this + 0xe0) = 0x3f800000;
  }
  else {
    *(float *)((int)this + 0xe0) = (float)(int)local_100 * 0.005 + *(float *)((int)this + 0xe0);
  }
  local_104 = *(float *)((int)this + 0xe0);
  if (0.0 <= local_104) {
    if (1.0 < local_104) {
      local_104 = 1.0;
    }
  }
  else {
    local_104 = 0.0;
  }
  iVar7 = *(int *)this;
  if ((iVar7 == 0) || ((*(byte *)(iVar7 + 0x34) & 1) == 0)) {
    uVar6 = *(uint *)((int)this + 0xc) >> 4;
  }
  else {
    uVar6 = *(uint *)((int)this + 0xc) >> 8;
  }
  local_d4 = *(float **)(*(int *)(iVar7 + 0x6c + (uVar6 & 0xf) * 4) + 0x30);
  if ((*(uint *)((int)this + 0xbc) & 2) == 0) {
    fVar1 = 0.5;
  }
  else {
    fVar1 = 0.2;
  }
  fVar1 = fVar1 * local_104;
  FUN_009ab3f0(&local_d0,fVar1 * *(float *)((int)this + 0xe4),fVar1 * *(float *)((int)this + 0x114),
               fVar1 * *(float *)((int)this + 0x144));
  iVar7 = 0;
  do {
    if (*(byte *)(iVar7 + (int)local_d4) != 0xff) {
      FUN_009aa830(local_fc,(float *)((uint)*(byte *)(iVar7 + (int)local_d4) * 0x30 + (int)param_1))
      ;
    }
    if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
LAB_00a03589:
      if (iVar7 == 4) {
        this_00 = (void *)((int)param_1 + 0xc0);
LAB_00a03599:
        FUN_009ab130(this_00,&local_d0);
      }
    }
    else {
      if (iVar7 != 2) {
        if (iVar7 != 3) goto LAB_00a03589;
        this_00 = (void *)((int)param_1 + 0x90);
        goto LAB_00a03599;
      }
      pfVar8 = (float *)((int)param_1 + 0x60);
      pfVar9 = local_6c;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      FUN_009ab130((float *)((int)param_1 + 0x60),&local_d0);
    }
    iVar7 = iVar7 + 1;
    local_fc = (void *)((int)local_fc + 0x30);
    if (0x1d < iVar7) {
      if ((*(byte *)((int)this + 0xbc) & 2) == 0) {
        pfVar8 = (float *)((int)param_1 + 0x60);
        pfVar9 = local_6c;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar9 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
      }
      local_6c[10] = (float)*(undefined4 *)((int)param_1 + 0x598);
      local_6c[9] = *(float *)((int)param_1 + 0x594);
      local_6c[0xb] = (float)*(undefined4 *)((int)param_1 + 0x59c);
      local_a0[0xb] = 0.0;
      local_a0[10] = 0.0;
      local_a0[9] = 0.0;
      local_a0[7] = 0.0;
      local_a0[6] = 0.0;
      local_a0[5] = 0.0;
      local_a0[3] = 0.0;
      local_a0[2] = 0.0;
      local_a0[1] = 0.0;
      local_a0[8] = 1.0;
      local_a0[4] = 1.0;
      local_a0[0] = 1.0;
      if (1.0 <= local_104) {
        pfVar8 = local_6c;
        pfVar9 = local_a0;
        for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar9 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar9 = pfVar9 + 1;
        }
      }
      else {
        FUN_009a9a70(&local_f8,(float *)((int)param_1 + 0x570));
        FUN_009a9a70(&local_e4,local_6c);
        FUN_009a9cf0(&local_114,&local_f8,&local_e4,local_104);
        FUN_009aa380(local_a0,&local_114);
        local_a0[9] = *(float *)((int)param_1 + 0x594);
        local_a0[10] = *(float *)((int)param_1 + 0x598);
        local_a0[0xb] = *(float *)((int)param_1 + 0x59c);
      }
      local_d4 = (float *)((int)param_1 + 0x570);
      pfVar8 = local_a0;
      pfVar9 = local_d4;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      iVar7 = *(int *)((int)this + 0xd0);
      if ((iVar7 == 0) || (iVar5 = *(int *)(iVar7 + 0x78), iVar5 == 0)) {
        local_114 = *(float *)((int)this + 0xc0);
        local_110 = *(float *)((int)this + 0xc4);
        fVar1 = *(float *)((int)this + 200);
      }
      else {
        local_114 = *(float *)(iVar5 + 0x34);
        local_110 = *(float *)(iVar5 + 0x38);
        local_10c = *(float *)(iVar5 + 0x3c);
        if ((local_114 == 0.0) && (local_10c == 0.0)) {
          local_114 = *(float *)(iVar7 + 0x3c);
          local_110 = *(float *)(iVar7 + 0x40);
          local_10c = *(float *)(iVar7 + 0x44) + 1.6;
          local_e4 = local_114;
          local_e0 = local_110;
          local_dc = local_10c;
        }
        if (0.2 < ABS(*(float *)((int)this + 0xcc) - local_10c)) {
          *(float *)((int)this + 0xcc) = local_10c;
        }
        fVar1 = *(float *)((int)this + 0xcc);
      }
      iVar7 = *(int *)((int)this + 0x78);
      fVar4 = local_114 * *(float *)(iVar7 + 0x4c);
      fVar2 = local_110 * *(float *)(iVar7 + 0x5c);
      fVar3 = local_114 * *(float *)(iVar7 + 0x50);
      local_f0 = 0.085 / SQRT(local_a0[1] * local_a0[1] +
                              local_a0[2] * local_a0[2] + local_a0[0] * local_a0[0]);
      local_f8 = local_a0[0] * local_f0;
      local_f4 = local_a0[1] * local_f0;
      local_f0 = local_a0[2] * local_f0;
      local_114 = local_f8 +
                  (local_a0[9] -
                  (local_114 * *(float *)(iVar7 + 0x48) +
                   local_110 * *(float *)(iVar7 + 0x54) + fVar1 * *(float *)(iVar7 + 0x60) +
                  *(float *)(iVar7 + 0x6c)));
      local_110 = local_f4 +
                  (local_a0[10] -
                  (local_110 * *(float *)(iVar7 + 0x58) + fVar1 * *(float *)(iVar7 + 100) + fVar4 +
                  *(float *)(iVar7 + 0x70)));
      local_10c = local_f0 +
                  (local_a0[0xb] -
                  (fVar1 * *(float *)(iVar7 + 0x68) + fVar3 + fVar2 + *(float *)(iVar7 + 0x74)));
      FUN_00412e20(&local_114);
      fVar1 = (local_110 + local_114) * 0.0 + local_10c;
      local_e0 = local_110 * fVar1;
      local_dc = local_10c * fVar1;
      local_f8 = -(local_114 * fVar1);
      local_f4 = -local_e0;
      local_f0 = 1.0 - local_dc;
      FUN_00412e20(&local_f8);
      local_e4 = local_10c * local_f4 - local_110 * local_f0;
      local_cc = local_f4;
      local_c0 = local_110;
      local_d0 = local_f8;
      local_c8 = local_f0;
      local_c4 = local_114;
      local_e0 = local_f0 * local_114 - local_10c * local_f8;
      local_bc = local_10c;
      local_a8 = local_a0[10];
      local_dc = local_110 * local_f8 - local_f4 * local_114;
      pfVar8 = local_a0;
      pfVar9 = local_6c + 0xf;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      local_ac = local_a0[9];
      local_a4 = local_a0[0xb];
      local_b8 = local_e4;
      local_b4 = local_e0;
      local_b0 = local_dc;
      FUN_009aa670(local_6c + 0xf);
      FUN_009aa830(&local_d0,local_6c + 0xf);
      FUN_009ab850(&local_d0,local_6c + 0xc,local_6c + 0xd,local_6c + 0xe);
      fVar1 = (float)(int)local_100;
      iVar7 = 0;
      pfVar8 = (float *)((int)this + 0xe4);
      do {
        local_fc = (void *)*pfVar8;
        local_100 = local_6c[iVar7 + 0xc];
        if ((((float)local_fc <= 3.0543263) || (-3.0543263 <= local_100)) ||
           (3.2288592 <= (float)local_fc)) {
          if ((((float)local_fc < -3.0543263) && (3.0543263 < local_100)) &&
             (-3.2288592 < (float)local_fc)) {
            local_100 = local_100 - 6.2831855;
          }
        }
        else {
          local_100 = local_100 + 6.2831855;
        }
        fVar10 = FUN_00990e30(250.0,550.0);
        local_a0[0xc] = (float)fVar10;
        FUN_00415910(pfVar8,local_100,0.0,local_a0[0xc]);
        FUN_004137b0(pfVar8,fVar1);
        iVar7 = iVar7 + 1;
        pfVar8 = pfVar8 + 0xc;
      } while (iVar7 < 3);
      fVar2 = local_104 * 0.8;
      fVar1 = *(float *)((int)this + 0x144);
      pfVar8 = local_d4;
      pfVar9 = (float *)((int)this + 0x8c);
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar9 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar9 = pfVar9 + 1;
      }
      FUN_009ab3f0(&local_d0,fVar2 * *(float *)((int)this + 0xe4),
                   fVar2 * *(float *)((int)this + 0x114),fVar2 * fVar1);
      FUN_009ab130(local_d4,&local_d0);
      FUN_009ab3f0(&local_d0,local_104 * *(float *)((int)this + 0xe4),
                   local_104 * *(float *)((int)this + 0x114),
                   local_104 * *(float *)((int)this + 0x144));
      FUN_009ab130((float *)((int)this + 0x8c),&local_d0);
      if (local_e8 == 0) {
        FUN_00a01be0(this,(undefined4 *)0x0,0,0,(void *)0x0);
      }
      return;
    }
  } while( true );
}


//// FUNCTION FUN_00a03c40 @ 00a03c40 ////

uint __thiscall FUN_00a03c40(void *this,undefined4 *param_1)

{
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *puVar11;
  char local_71;
  undefined4 *local_6c;
  undefined4 local_60 [9];
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [9];
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)((int)this + 0x78);
  uVar6 = (uint3)((uint)in_EAX >> 8);
  if (iVar2 == 0) {
    return (uint)uVar6 << 8;
  }
  if (DAT_01050c92 == '\0') {
    if (*(int *)(iVar2 + 0x9c) < 0) {
      return *(uint *)(iVar2 + 0xa0) & 1;
    }
    *(undefined4 **)((int)this + 0x88) = param_1;
    uVar1 = FUN_0097e890(iVar2);
    uVar4 = uVar1;
    if (param_1 != (undefined4 *)0x0) {
      iVar2 = FUN_0097e350(*(void **)((int)this + 0x78),0);
      uVar4 = 0;
      if ((((iVar2 != 0) && (uVar4 = *(uint *)this, uVar4 != 0)) && (uVar1 != 0)) &&
         (*(char *)(uVar4 + 0x33) != '\0')) {
        local_71 = '\0';
        if (*(int *)((int)this + 0x70) == 0) {
          uVar3 = FUN_00a016b0(this,(int)param_1);
          local_71 = (char)uVar3;
        }
        else if (*(int *)((int)this + 0x70) == 1) {
          uVar3 = FUN_00a01880(this,(float)param_1);
          local_71 = (char)uVar3;
        }
        if ((*(uint *)((int)this + 0xc) & 0x1000) == 0) {
          local_6c = param_1;
          uVar4 = FUN_00a015a0(this);
          uVar8 = (uint)*(byte *)(*(int *)this + 0x33);
          if ((int)uVar8 <= (int)uVar4) {
            uVar4 = uVar8 - 1;
          }
          iVar2 = *(int *)(*(int *)this + 0x6c + uVar4 * 4);
          uVar4 = (uint)*(byte *)(iVar2 + 2);
          iVar2 = *(int *)(iVar2 + 0x30);
          if ((*(byte *)((int)this + 0xbc) & 1) == 0) {
            uVar8 = 0;
            if (uVar4 != 0) {
              do {
                uVar5 = (uint)*(byte *)(uVar8 + iVar2);
                if (uVar5 != 0xff) {
                  FUN_009aa830(local_6c,(float *)(param_1 + uVar5 * 0xc));
                }
                uVar8 = uVar8 + 1;
                local_6c = local_6c + 0xc;
              } while (uVar8 < uVar4);
            }
          }
          else {
            FUN_00a03290(this,param_1);
          }
          FUN_00a321d0(this,(int)param_1);
          FUN_00a03240(this);
          if (uVar4 != 0) {
            pfVar10 = (float *)(*(int *)(uVar1 + 0xc) + 0x58);
            puVar9 = param_1;
            local_6c = (undefined4 *)uVar4;
            do {
              FUN_009aafb0(puVar9,pfVar10);
              pfVar10 = pfVar10 + 0x22;
              puVar9 = puVar9 + 0xc;
              local_6c = (undefined4 *)((int)local_6c - 1);
            } while (local_6c != (undefined4 *)0x0);
          }
          iVar2 = FUN_0097e350(*(void **)((int)this + 0x78),0);
          if (((local_71 != '\0') && (iVar2 != 0)) && ((*(uint *)(uVar1 + 8) & 0x100) != 0)) {
            *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 0x2000;
            puVar9 = param_1;
            puVar11 = local_30;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_009aafb0(local_30,(float *)(*(int *)(uVar1 + 0xc) + 0x28));
            *(float *)((int)this + 0x28) = local_c;
            *(undefined4 *)((int)this + 0x2c) = local_8;
            *(undefined4 *)((int)this + 0x30) = local_4;
            FUN_0040b490((void *)(*(int *)((int)this + 0x78) + 0x18),(float *)((int)this + 0x28));
            iVar2 = *(int *)(uVar1 + 0xc);
            puVar9 = param_1 + 0x60;
            puVar11 = local_60;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_009aafb0(local_60,(float *)(iVar2 + 0x468));
            *(float *)((int)this + 0x58) = local_3c;
            *(undefined4 *)((int)this + 0x5c) = local_38;
            *(undefined4 *)((int)this + 0x60) = local_34;
            FUN_0040b490((void *)(*(int *)((int)this + 0x78) + 0x18),(float *)((int)this + 0x58));
            puVar9 = param_1 + 0x24;
            puVar11 = local_60;
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_009aafb0(local_60,(float *)(*(int *)(uVar1 + 0xc) + 0x1c0));
            *(float *)((int)this + 0x4c) = local_3c;
            *(undefined4 *)((int)this + 0x50) = local_38;
            *(undefined4 *)((int)this + 0x54) = local_34;
            FUN_0040b490((void *)(*(int *)((int)this + 0x78) + 0x18),(float *)((int)this + 0x4c));
            iVar2 = *(int *)(uVar1 + 0xc);
            puVar9 = param_1 + 0x15c;
            puVar11 = local_60;
            for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            FUN_009aafb0(local_60,(float *)(iVar2 + 0xf90));
            *(float *)((int)this + 0x34) = local_3c;
            *(undefined4 *)((int)this + 0x38) = local_38;
            *(undefined4 *)((int)this + 0x3c) = local_34;
            FUN_0040b490((void *)(*(int *)((int)this + 0x78) + 0x18),(float *)((int)this + 0x34));
          }
        }
        uVar3 = FUN_00a012f0(this);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
    }
    return uVar4 & 0xffffff00;
  }
  return CONCAT31(uVar6,1);
}


//// FUNCTION FUN_00a03f80 @ 00a03f80 ////

void * __thiscall FUN_00a03f80(void *this,byte param_1)

{
  FUN_00a51a00((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a03fc0 @ 00a03fc0 ////

void __fastcall FUN_00a03fc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_010b7080;
  if (DAT_010b7080 != param_1) {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 0x40);
    } while (*(int *)(iVar2 + 0x40) != param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      goto LAB_00a03fee;
    }
  }
  DAT_010b7080 = *(int *)(param_1 + 0x40);
LAB_00a03fee:
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x1c));
}


//// FUNCTION FUN_00a04020 @ 00a04020 ////

void * __thiscall FUN_00a04020(void *this,byte param_1)

{
  FUN_00a03fc0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a04040 @ 00a04040 ////

void __cdecl FUN_00a04040(int param_1)

{
  int *_Memory;
  int *piVar1;
  
  piVar1 = DAT_010b7080;
  if (param_1 != 0) {
    while (_Memory = piVar1, _Memory != (int *)0x0) {
      piVar1 = (int *)_Memory[0x10];
      if (*_Memory == param_1) {
        FUN_00a03fc0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a04080 @ 00a04080 ////

void __cdecl FUN_00a04080(char *param_1,undefined4 *param_2,void *param_3,undefined ***param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  
  if (((param_3 != (void *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_1 != (char *)0x0)) {
    bVar4 = true;
    iVar1 = 0x11;
    pcVar3 = param_1;
    pcVar2 = "META_PROP_PISTOL";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar3 == *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
    } while (bVar4);
    if (bVar4 == false) {
      pcVar3 = ":META_PROP_GUN";
      iVar1 = 0xe;
      bVar5 = true;
      do {
        pcVar3 = pcVar3 + 1;
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *param_1 == *pcVar3;
        param_1 = param_1 + 1;
      } while (bVar5);
      if (!bVar5) {
        return;
      }
    }
    FUN_00a93d30(param_2,param_3,bVar4,param_4);
  }
  return;
}


//// FUNCTION FUN_00a04100 @ 00a04100 ////

undefined4 * __fastcall FUN_00a04100(undefined4 *param_1)

{
  FUN_00999750(param_1);
  *param_1 = &PTR_FUN_00d742d4;
  param_1[6] = DAT_010b7030;
  DAT_010b7030 = param_1;
  param_1[7] = 0;
  return param_1;
}


//// FUNCTION FUN_00a04130 @ 00a04130 ////

void __fastcall FUN_00a04130(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_00d742d4;
  puVar1 = DAT_010b7030;
  puVar3 = (undefined4 *)0x0;
  if (DAT_010b7030 != (undefined4 *)0x0) {
    while (puVar2 = puVar1, puVar2 != param_1) {
      puVar1 = (undefined4 *)puVar2[6];
      puVar3 = puVar2;
      if ((undefined4 *)puVar2[6] == (undefined4 *)0x0) {
        FUN_00999aa0(param_1);
        return;
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[6] = param_1[6];
      FUN_00999aa0(param_1);
      return;
    }
    DAT_010b7030 = (undefined4 *)param_1[6];
  }
  FUN_00999aa0(param_1);
  return;
}


//// FUNCTION FUN_00a04170 @ 00a04170 ////

void FUN_00a04170(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_010b7030;
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[6];
    (**(code **)(iVar1 + 0x10))();
  }
  return;
}


//// FUNCTION FUN_00a04190 @ 00a04190 ////

void __thiscall
FUN_00a04190(void *this,float param_1,float param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  float fVar2;
  int *piVar3;
  
  if (param_4 != (undefined4 *)0x0) {
    fVar2 = (float)*(int *)((int)this + 4);
    bVar1 = fVar2 == param_2;
    if ((param_1 <= fVar2) && (fVar2 < param_2)) {
      bVar1 = true;
    }
    if ((param_2 < param_1) && (fVar2 < param_2)) {
      bVar1 = true;
    }
    if ((fVar2 != param_1) && (bVar1)) {
      bVar1 = false;
      piVar3 = FUN_00a01230(param_4,0);
      if (piVar3 != (int *)0x0) {
        do {
          if (*(int *)((int)this + 8) == 0) {
            FUN_00a8edb0((int)piVar3);
LAB_00a0422c:
            bVar1 = true;
          }
          else if (*(int *)((int)this + 8) == 1) {
            FUN_00a8edd0((int)piVar3);
            goto LAB_00a0422c;
          }
          piVar3 = FUN_00a01230(param_4,(int)piVar3);
        } while (piVar3 != (int *)0x0);
        if (bVar1) {
          return;
        }
      }
      if (*(int *)((int)this + 8) == 0) {
        FUN_00a8efa0(param_4);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a04290 @ 00a04290 ////

void __fastcall FUN_00a04290(int param_1)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x18) == 0) &&
     (fVar1 = (float)DAT_0105becc * 0.001 + *(float *)(param_1 + 0x20),
     *(float *)(param_1 + 0x20) = fVar1, 1000.0 < fVar1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


//// FUNCTION FUN_00a042c0 @ 00a042c0 ////

undefined4 * __thiscall FUN_00a042c0(void *this,int param_1)

{
  float10 fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d742f8;
  *(int *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
  if (param_1 == 0) {
    fVar1 = (float10)0.0;
  }
  else {
    fVar1 = FUN_009720c0(param_1);
  }
  *(float *)((int)this + 0x20) = (float)fVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a04350 @ 00a04350 ////

undefined4 * __thiscall FUN_00a04350(void *this,byte param_1)

{
  FUN_00a04370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a04370 @ 00a04370 ////

void __fastcall FUN_00a04370(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d742f8;
  FUN_00999aa0(param_1);
  return;
}


//// FUNCTION FUN_00a04380 @ 00a04380 ////

float10 __fastcall FUN_00a04380(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    fVar1 = FUN_009720c0(*(int *)(param_1 + 0x18));
    return fVar1 - (float10)*(float *)(param_1 + 0x20);
  }
  return (float10)*(float *)(param_1 + 0x20);
}


//// FUNCTION FUN_00a043a0 @ 00a043a0 ////

char * __cdecl FUN_00a043a0(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,param_2,3);
  if (iVar1 != 0) {
    return (char *)0x0;
  }
  return param_1 + 3;
}


//// FUNCTION FUN_00a043d0 @ 00a043d0 ////

char * __cdecl FUN_00a043d0(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _strncmp(param_1,param_2,4);
  if (iVar1 != 0) {
    return (char *)0x0;
  }
  return param_1 + 4;
}


//// FUNCTION FUN_00a04420 @ 00a04420 ////

void __fastcall FUN_00a04420(undefined4 *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  
  param_1[7] = 0;
  LVar2 = InterlockedDecrement(param_1 + 4);
  uVar1 = DAT_0105b588;
  if (LVar2 == 0) {
    DAT_0105b588 = 1;
    (**(code **)*param_1)(1);
  }
  DAT_0105b588 = uVar1;
  return;
}


//// FUNCTION FUN_00a04460 @ 00a04460 ////

void __fastcall FUN_00a04460(undefined4 *param_1)

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


//// FUNCTION FUN_00a044a0 @ 00a044a0 ////

void __cdecl FUN_00a044a0(int param_1)

{
  void *_Memory;
  void *pvVar1;
  
  pvVar1 = DAT_010bb504;
  if (param_1 != 0) {
    while (_Memory = pvVar1, _Memory != (void *)0x0) {
      pvVar1 = *(void **)((int)_Memory + 0x24);
      if (*(int *)((int)_Memory + 0x30) == param_1) {
        FUN_00a51a00((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a044e0 @ 00a044e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a044e0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf91ae;
  local_c = ExceptionList;
  if ((DAT_010b7034 == '\0') && ((DAT_0105be88 != '\0' || (DAT_0105c2e0 != '\0')))) {
    DAT_010b7038 = (void *)0x0;
    DAT_010b703c = (void *)0x0;
    DAT_010b7040 = (void *)0x0;
    DAT_010b7044 = (void *)0x0;
    DAT_010b7048 = (void *)0x0;
    DAT_010b7060 = (void *)0x0;
    _DAT_010b704c = (void *)0x0;
    DAT_010b7064 = (void *)0x0;
    DAT_010b7050 = (void *)0x0;
    DAT_010b7068 = (void *)0x0;
    DAT_010b7054 = 0;
    DAT_010b7058 = (void *)0x0;
    DAT_010b706c = (void *)0x0;
    DAT_010b7070 = (void *)0x0;
    DAT_010b7074 = (void *)0x0;
    DAT_010b7078 = (void *)0x0;
    DAT_010b707c = (void *)0x0;
    DAT_010b705c = (void *)0x0;
    ExceptionList = &local_c;
    DAT_010b7060 = FUN_0099bb50("fx_smoky.dds",0,0,0,'\0');
    DAT_010b7064 = FUN_0099bb50("fx_cigarette.dds",0,0,0,'\0');
    DAT_010b7068 = FUN_0099bb50("fx_rain.dds",0,0,0,'\0');
    DAT_010b706c = FUN_0099bb50("fx_plouf.dds",0,0,0,'\0');
    DAT_010b7070 = FUN_0099bb50("fx_sick.dds",0,0,0,'\0');
    DAT_010b7074 = FUN_0099bb50("fx_heart.dds",0,0,0,'\0');
    DAT_010b7078 = FUN_0099bb50("fx_camera_way.dds",0,0,0,'\0');
    DAT_010b707c = FUN_0099bb50("fx_flash.dds",0,0,0,'\0');
    puVar1 = operator_new(0x24);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7038 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7060) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7060);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 1;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b703c = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7064) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7064);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x1a000000;
    puVar1 = operator_new(0x24);
    local_4 = 2;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7040 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7068) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7068);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x12000000;
    puVar1 = operator_new(0x24);
    local_4 = 3;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7044 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b706c) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b706c);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 4;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7048 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7070) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7070);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 5;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    _DAT_010b704c = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7074) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7074);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 6;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbcffffff;
    puVar1 = operator_new(0x24);
    local_4 = 6;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7050 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7078) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7078);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 0x1d;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 7;
    if (puVar1 == (undefined4 *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7054 = iVar3;
    *(undefined1 *)(iVar3 + 0xc) = 1;
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 8;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b7058 = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7060) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7060);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 0x20;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
    puVar1 = operator_new(0x24);
    local_4 = 9;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)FUN_009910f0(puVar1);
    }
    local_4 = 0xffffffff;
    DAT_010b705c = pvVar2;
    if (*(void **)((int)pvVar2 + 0x18) != DAT_010b7060) {
      Engine_SetResourceReference(pvVar2,(int)DAT_010b7060);
    }
    *(undefined1 *)((int)pvVar2 + 0xc) = 7;
    *(uint *)((int)pvVar2 + 0x10) = *(uint *)((int)pvVar2 + 0x10) & 0xbeffffff | 0x2000000;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a049b0 @ 00a049b0 ////

void FUN_00a049b0(void)

{
  void *_Memory;
  undefined4 *puVar1;
  
  if ((DAT_010b7034 == '\0') && ((DAT_0105be88 != '\0' || (DAT_0105c2e0 != '\0')))) {
    puVar1 = &DAT_010b7060;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_0099b400((void *)*puVar1);
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 0x10b7080);
    puVar1 = &DAT_010b7038;
    do {
      _Memory = (void *)*puVar1;
      if (_Memory != (void *)0x0) {
        FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 0x10b7060);
    FUN_00a7ca30();
    return;
  }
  return;
}


//// FUNCTION FUN_00a04a30 @ 00a04a30 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a04a30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 extraout_ST0;
  float10 fVar14;
  ulonglong uVar15;
  int local_40;
  int local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  
  fVar5 = (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x10)) * _DAT_0105be84 +
          *(float *)(param_1 + 0x10);
  if (0.0 < fVar5) {
    uVar6 = (uint)*(byte *)(param_1 + 0x28);
    fVar4 = 1.0 - fVar5;
    uVar9 = (uint)*(byte *)(param_1 + 0x29);
    uVar11 = (uint)*(byte *)(param_1 + 0x2a);
    uVar15 = FUN_00acd42c();
    FUN_0040a530(&local_38,(int)uVar15,uVar11,uVar9,uVar6);
    iVar8 = *(int *)(param_1 + 0x24);
    iVar13 = 0;
    local_3c = 0;
    if (*(short *)(iVar8 + 0x1c) != 0) {
      uVar15 = FUN_00acd42c();
      iVar12 = 0;
      do {
        iVar8 = *(int *)(iVar8 + 0x20);
        *(undefined4 *)(iVar8 + 0x2c + iVar13) = local_38;
        pfVar10 = (float *)(iVar8 + iVar13);
        local_40 = -1;
        if (*(float *)(*(int *)(param_1 + 0x1c) + iVar12) <=
            *(float *)(*(int *)(param_1 + 0x1c) + 8 + iVar12)) {
          local_40 = 1;
        }
        pfVar10[10] = (float)local_40 * _DAT_00e688a4 * fVar5 +
                      *(float *)(*(int *)(param_1 + 0x1c) + iVar12);
        fVar14 = extraout_ST0 * (float10)*(float *)(param_1 + 0x18) * (float10)0.5;
        if (fVar14 < (float10)0.001) {
          fVar14 = (float10)0.001;
        }
        pfVar10[9] = (float)fVar14;
        pfVar7 = (float *)(*(int *)(param_1 + 0x20) + iVar12);
        *pfVar10 = *pfVar7;
        pfVar10[1] = pfVar7[1];
        pfVar10[2] = pfVar7[2];
        pfVar7 = (float *)(*(int *)(param_1 + 0x1c) + iVar12);
        iVar8 = *(int *)(param_1 + 0x1c) + iVar12;
        iVar13 = iVar13 + 0x34;
        iVar12 = iVar12 + 0xc;
        local_10 = fVar4 * *(float *)(iVar8 + 8);
        fVar3 = *(float *)(param_1 + 0x30);
        local_c = fVar4 * *pfVar7 * fVar3;
        local_30 = _DAT_00e688a0 * local_c;
        local_2c = fVar4 * *(float *)(iVar8 + 4) * fVar3 * _DAT_00e688a0;
        local_34 = local_10 * fVar3 * _DAT_00e688a0;
        fVar3 = *pfVar10;
        *pfVar10 = local_30 + fVar3;
        fVar1 = pfVar10[1];
        pfVar10[1] = local_2c + fVar1;
        local_34 = local_34 + pfVar10[2];
        pfVar10[2] = local_34;
        fVar2 = *(float *)(param_1 + 0x34);
        local_20 = fVar4 * *(float *)(param_1 + 0x38);
        local_1c = fVar4 * *(float *)(param_1 + 0x3c);
        *(char *)(pfVar10 + 0xc) = (char)uVar15;
        local_3c = local_3c + 1;
        *pfVar10 = local_30 + fVar3 + fVar4 * fVar2;
        pfVar10[1] = local_2c + fVar1 + local_20;
        pfVar10[2] = local_34 + local_1c;
        iVar8 = *(int *)(param_1 + 0x24);
      } while (local_3c < (int)(uint)*(ushort *)(iVar8 + 0x1c));
    }
    FUN_00995ba0(*(int **)(param_1 + 0x24));
  }
  return;
}


//// FUNCTION FUN_00a04c50 @ 00a04c50 ////

void __fastcall FUN_00a04c50(void *param_1)

{
  float fVar1;
  
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)param_1 + 0x14);
  fVar1 = *(float *)((int)param_1 + 0x14) - *(float *)((int)param_1 + 0x30) * 0.05;
  *(float *)((int)param_1 + 0x14) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)param_1 + 0x14) = 0;
  }
  fVar1 = *(float *)((int)param_1 + 0x10);
  if (!NAN(fVar1) && fVar1 < 0.0 != (fVar1 == 0.0)) {
    FUN_00a03fc0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a04cc0 @ 00a04cc0 ////

void FUN_00a04cc0(void)

{
  float fVar1;
  void *_Memory;
  void *pvVar2;
  
  pvVar2 = DAT_010b7080;
  do {
    _Memory = pvVar2;
    if (_Memory == (void *)0x0) {
      return;
    }
    *(undefined4 *)((int)_Memory + 0x10) = *(undefined4 *)((int)_Memory + 0x14);
    fVar1 = *(float *)((int)_Memory + 0x14) - *(float *)((int)_Memory + 0x30) * 0.05;
    *(float *)((int)_Memory + 0x14) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)((int)_Memory + 0x14) = 0;
    }
    pvVar2 = *(void **)((int)_Memory + 0x40);
  } while (*(float *)((int)_Memory + 0x10) < 0.0 == (*(float *)((int)_Memory + 0x10) == 0.0));
  FUN_00a03fc0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00a04d30 @ 00a04d30 ////

void __thiscall
FUN_00a04d30(void *this,void *param_1,float *param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  void *local_54 [2];
  uint local_4c;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf91c8;
  local_c = ExceptionList;
  local_34 = 0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_2c = 0xffffffff;
  local_30 = param_4;
  ExceptionList = &local_c;
  if (((((*(byte *)((int)this + 0x10) & 0x40) != 0) &&
       (ExceptionList = &local_c, param_1 != (void *)0x0)) &&
      (ExceptionList = &local_c, param_2 != (float *)0x0)) &&
     (((ExceptionList = &local_c, param_3 != 0 &&
       (ExceptionList = &local_c, *(int *)(param_3 + 0x78) != 0)) &&
      (ExceptionList = &local_c, iVar1 = FUN_00973fb0(param_1,param_2), iVar1 != 0)))) {
    FUN_0097e770(*(void **)(param_3 + 0x78));
    puVar2 = FUN_00a15d80(local_54,iVar1);
    local_4 = 0;
    local_30 = FUN_009b01a0(*puVar2);
    local_4 = 0xffffffff;
    if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_54[0]);
    }
  }
  local_14 = param_1;
  local_34 = local_34 ^ (*(uint *)((int)this + 0x10) >> 4 ^ local_34) & 2;
  local_10 = param_5;
  if (param_2 != (float *)0x0) {
    local_28 = *param_2;
    local_20 = param_2[2];
    local_34 = local_34 | 1;
    local_24 = param_2[1];
  }
  iVar1 = _strncmp("DIRECTOR_",(char *)(*(int *)((int)this + 0x14) + 9),9);
  if (iVar1 == 0) {
    pcVar4 = "director";
    local_34 = local_34 & 0xfffffffe;
    uVar3 = 6;
  }
  else {
    pcVar4 = "none";
    uVar3 = 4;
  }
  FUN_009b1530((byte *)&local_34,uVar3,0,'\0',pcVar4,'\0',0x3f800000,0.0);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a04ec0 @ 00a04ec0 ////

void __thiscall FUN_00a04ec0(void *this,int param_1,int param_2,void *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30 [12];
  
  if (param_3 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0097f1f0(param_3,local_30);
    iVar3 = iVar3 + 0x24;
  }
  uVar1 = *(uint *)(param_4 + 0xc);
  iVar4 = 0;
  if (0 < *(int *)this) {
    do {
      cVar2 = (**(code **)(**(int **)(*(int *)((int)this + 4) + iVar4 * 4) + 0xc))(uVar1 >> 4 & 0xf)
      ;
      if (cVar2 != '\0') {
        (**(code **)(**(int **)(*(int *)((int)this + 4) + iVar4 * 4) + 4))
                  ((float)param_1 * 0.01,(float)param_2 * 0.01,iVar3,param_4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)this);
  }
  return;
}


//// FUNCTION FUN_00a04f60 @ 00a04f60 ////

undefined4 * __thiscall FUN_00a04f60(void *this,byte param_1)

{
  FUN_00a04130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a04f80 @ 00a04f80 ////

void __cdecl FUN_00a04f80(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00a04040(param_1);
  FUN_00a044a0(param_1);
  piVar1 = DAT_010b7030;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[6];
    if (piVar2[7] == param_1) {
      (**(code **)(*piVar2 + 0x18))();
    }
  }
  return;
}


//// FUNCTION FUN_00a04fc0 @ 00a04fc0 ////

/* WARNING: Removing unreachable block (ram,0x00a05082) */
/* WARNING: Removing unreachable block (ram,0x00a0508e) */

undefined4 * __thiscall FUN_00a04fc0(void *this,undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_18;
  undefined1 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf91f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  *(undefined ***)this = &PTR_FUN_00d742d4;
  *(void **)((int)this + 0x18) = DAT_010b7030;
  DAT_010b7030 = this;
  *(undefined4 *)((int)this + 0x1c) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d743a8;
  FUN_009910f0((undefined4 *)((int)this + 0x24));
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x48) = param_3;
  puVar2 = FUN_0040a690(3,'\x01');
  *(undefined4 **)((int)this + 0x20) = puVar2;
  fVar5 = FUN_00990e30(0.0,6.0);
  uVar3 = param_2 >> 8 & 0xff;
  param_3 = 0x3f000000;
  iVar4 = 0;
  do {
    puVar2 = (undefined4 *)(*(int *)(*(int *)((int)this + 0x20) + 0x20) + iVar4);
    puVar2[9] = 0x3a83126f;
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    uVar1 = param_1[2];
    puVar2[10] = (float)fVar5;
    puVar2[2] = uVar1;
    if ((int)uVar3 < 0) {
      local_18 = 0;
    }
    else if (uVar3 < 0x100) {
      local_18 = (undefined1)(param_2 >> 8);
    }
    else {
      local_18 = 0xff;
    }
    if ((int)(param_2 & 0xff) < 0) {
      local_14 = 0;
    }
    else if ((param_2 & 0xff) < 0x100) {
      local_14 = (undefined1)param_2;
    }
    else {
      local_14 = 0xff;
    }
    param_3 = CONCAT31(CONCAT21(CONCAT11(param_3._3_1_,param_2._2_1_),local_18),local_14);
    iVar4 = iVar4 + 0x34;
    puVar2[0xb] = param_3;
  } while (iVar4 < 0x9c);
  *(undefined1 *)((int)this + 0x30) = 7;
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xbeffffff | 0x2000000;
  if (*(int *)((int)this + 0x3c) != DAT_010b707c) {
    Engine_SetResourceReference((void *)((int)this + 0x24),DAT_010b707c);
  }
  *(void **)(*(int *)((int)this + 0x20) + 0x18) = (void *)((int)this + 0x24);
  *(uint *)((int)this + 0x4c) = *(uint *)((int)this + 0x4c) & 0xfffffff0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a05170 @ 00a05170 ////

undefined4 * __thiscall FUN_00a05170(void *this,byte param_1)

{
  FUN_00a05190(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a05190 @ 00a05190 ////

void __fastcall FUN_00a05190(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  LONG LVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf9213;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d743a8;
  puVar1 = (undefined4 *)param_1[8];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 4);
    uVar2 = DAT_0105b588;
    if ((LVar3 == 0) && (DAT_0105b588 = 1, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_0105b588 = uVar2;
    param_1[8] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00990ec0((int)(param_1 + 9));
  local_4 = 0xffffffff;
  FUN_00a04130(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a05230 @ 00a05230 ////

void __fastcall FUN_00a05230(undefined4 *param_1)

{
  undefined1 uVar1;
  LONG LVar2;
  
  if (1 < ((byte)param_1[0x13] & 0xf)) {
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


//// FUNCTION FUN_00a05270 @ 00a05270 ////

void __fastcall FUN_00a05270(int param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((byte)*(undefined4 *)(param_1 + 0x4c) & 0xf) < 2) {
    fVar3 = DAT_0105c3c0 * 0.5;
    fVar4 = DAT_0105c3c4 * 0.5;
    fVar5 = DAT_0105c3c8 * 0.5;
    *(float *)(*(int *)(*(int *)(param_1 + 0x20) + 0x20) + 0x24) = *(float *)(param_1 + 0x48) * 1.75
    ;
    pfVar1 = *(float **)(*(int *)(param_1 + 0x20) + 0x20);
    pfVar1[0x16] = *(float *)(param_1 + 0x48) * 1.75;
    pfVar1[0xd] = fVar3 + *pfVar1;
    pfVar1[0xe] = fVar4 + pfVar1[1];
    pfVar1[0xf] = fVar5 + pfVar1[2];
    pfVar1 = *(float **)(*(int *)(param_1 + 0x20) + 0x20);
    pfVar1[0x23] = *(float *)(param_1 + 0x48) * 1.75;
    pfVar1[0x1a] = *pfVar1 - fVar3;
    pfVar1[0x1b] = pfVar1[1] - fVar4;
    pfVar1[0x1c] = pfVar1[2] - fVar5;
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    uVar2 = *(uint *)(param_1 + 0x4c);
    *(uint *)(param_1 + 0x4c) = (uVar2 + 1 ^ uVar2) & 0xf ^ uVar2;
  }
  return;
}


//// FUNCTION FUN_00a05370 @ 00a05370 ////

void __fastcall FUN_00a05370(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf9233;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d743d0;
  local_4 = 1;
  FUN_009b11d0(param_1[8]);
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  local_4 = 0xffffffff;
  FUN_00a04130(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a05420 @ 00a05420 ////

void __cdecl FUN_00a05420(byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  piVar2 = DAT_010b7030;
  if (param_1 != (byte *)0x0) {
    while (piVar3 = piVar2, piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[6];
      iVar4 = (**(code **)(*piVar3 + 0x1c))();
      if ((iVar4 == 5) && (piVar3[7] == param_2)) {
        pbVar5 = (byte *)piVar3[9];
        pbVar6 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar7 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00a05477:
            iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_00a0547c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar7 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00a05477;
          pbVar5 = pbVar5 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00a0547c:
        if (iVar4 == 0) {
          (**(code **)(*piVar3 + 0x18))();
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a054a0 @ 00a054a0 ////

void FUN_00a054a0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_010b7030;
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[6];
    (**(code **)(iVar1 + 0x10))();
  }
  FUN_00a04cc0();
  piVar2 = DAT_010bb504;
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[9];
    FUN_00a51e20(piVar2);
    piVar2 = piVar3;
  }
  return;
}


//// FUNCTION FUN_00a054e0 @ 00a054e0 ////

void FUN_00a054e0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_010b7080;
  if (DAT_0105bec5 == '\0') {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x40)) {
      FUN_00a04a30(iVar1);
    }
    FUN_00a7c6b0();
    piVar2 = DAT_010b7030;
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[6];
      (**(code **)(iVar1 + 0x14))();
    }
  }
  return;
}


//// FUNCTION FUN_00a057e0 @ 00a057e0 ////

void __thiscall FUN_00a057e0(void *this,float param_1,float param_2,float *param_3,int param_4)

{
  void *this_00;
  float fVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined ***pppuVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  void *pvVar12;
  bool bVar13;
  void *local_218;
  undefined ***local_214;
  int local_210;
  void *local_20c;
  char local_208;
  undefined4 local_207;
  char local_108 [260];
  
  fVar1 = (float)*(int *)((int)this + 4);
  bVar13 = fVar1 == param_2;
  if ((param_1 < fVar1) && (fVar1 < param_2)) {
    bVar13 = true;
  }
  if (fVar1 == param_1) {
    return;
  }
  if (!bVar13) {
    return;
  }
  if ((*(byte *)((int)this + 0x10) & 0x10) != 0) {
    local_208 = '\0';
    puVar8 = &local_207;
    for (iVar6 = 0x3f; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    iVar6 = _strncmp("SEX_",(char *)(*(int *)((int)this + 0x14) + 5),4);
    if (iVar6 == 0) {
      if (param_4 == 0) {
        return;
      }
      if (*(void **)(param_4 + 0x78) == (void *)0x0) {
        return;
      }
      iVar6 = FUN_0097e770(*(void **)(param_4 + 0x78));
      if (iVar6 == 0) {
        _sprintf(&local_208,"%s_MALE_%d",*(int *)((int)this + 0x14) + 9,
                 *(uint *)(*(int *)(param_4 + 0x78) + 0xa4) % 5 + 1);
        uVar2 = FUN_009b01a0(&local_208);
        *(undefined4 *)((int)this + 8) = uVar2;
      }
      else {
        if (iVar6 != 1) goto LAB_00a05b1d;
        _sprintf(&local_208,"%s_FEMALE_%d",*(int *)((int)this + 0x14) + 9,
                 *(uint *)(*(int *)(param_4 + 0x78) + 0xa4) % 5 + 1);
        uVar2 = FUN_009b01a0(&local_208);
        *(undefined4 *)((int)this + 8) = uVar2;
      }
    }
    else {
      iVar6 = _strncmp("PROP_",(char *)(*(int *)((int)this + 0x14) + 5),5);
      if (iVar6 == 0) {
        if (param_4 == 0) {
          return;
        }
        pvVar12 = *(void **)(param_4 + 0x78);
        if (pvVar12 == (void *)0x0) {
          return;
        }
        iVar6 = FUN_0097e350(pvVar12,0);
        if (iVar6 == 0) {
          return;
        }
        _sprintf(&local_208,(char *)(*(int *)((int)this + 0x14) + 10));
        iVar6 = FUN_009ac120(&local_208,"_");
        if (iVar6 != -1) {
          (&local_208)[iVar6] = '\0';
        }
        FUN_009ac040(&local_208);
        iVar6 = 4;
        bVar13 = true;
        pcVar3 = &local_208;
        pcVar7 = "car";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar13 = *pcVar3 == *pcVar7;
          pcVar3 = pcVar3 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar13);
        if ((((bVar13) && (*(int *)((int)pvVar12 + 0xd0) != 0)) &&
            (this_00 = *(void **)(*(int *)((int)pvVar12 + 0xd0) + 0x148), this_00 != (void *)0x0))
           && ((iVar6 = FUN_0097e350(this_00,0), iVar6 != 0 &&
               ((*(uint *)(iVar6 + 0xe4) & 0x4000000) != 0)))) {
          pcVar3 = (char *)(*(int *)((int)this + 0x14) + 0xe);
          iVar6 = 5;
          bVar13 = true;
          pcVar7 = pcVar3;
          pcVar9 = "HORN";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar13 = *pcVar7 == *pcVar9;
            pcVar7 = pcVar7 + 1;
            pcVar9 = pcVar9 + 1;
          } while (bVar13);
          if (!bVar13) {
            iVar6 = 0xc;
            bVar13 = true;
            pcVar7 = pcVar3;
            pcVar9 = "GEAR_CRUNCH";
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar13 = *pcVar7 == *pcVar9;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            } while (bVar13);
            if (!bVar13) {
              iVar6 = 10;
              bVar13 = true;
              pcVar7 = pcVar3;
              pcVar9 = "DOOR_OPEN";
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar13 = *pcVar7 == *pcVar9;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar13);
              if (!bVar13) {
                iVar6 = 0xb;
                bVar13 = true;
                pcVar7 = pcVar3;
                pcVar9 = "DOOR_CLOSE";
                do {
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  bVar13 = *pcVar7 == *pcVar9;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (bVar13);
                if (!bVar13) {
                  iVar6 = 10;
                  bVar13 = true;
                  pcVar7 = "BRAKE_PED";
                  do {
                    if (iVar6 == 0) break;
                    iVar6 = iVar6 + -1;
                    bVar13 = *pcVar3 == *pcVar7;
                    pcVar3 = pcVar3 + 1;
                    pcVar7 = pcVar7 + 1;
                  } while (bVar13);
                  if (!bVar13) {
                    return;
                  }
                }
              }
            }
          }
        }
        local_214 = (undefined ***)0xffffffff;
        local_210 = 0;
        pppuVar10 = (undefined ***)0xffffffff;
        do {
          local_218 = (void *)0x0;
          pppuVar4 = (undefined ***)FUN_0097e7c0(pvVar12,&local_208,&local_218,&local_210);
          pppuVar11 = pppuVar10;
          if ((local_218 != (void *)0x0) &&
             (FUN_00a04080(*(char **)((int)this + 0x14),*(undefined4 **)((int)pvVar12 + 0xd0),
                           local_218,pppuVar4), pppuVar11 = pppuVar4,
             pppuVar10 != (undefined ***)0xffffffff)) {
            local_20c = local_218;
            pppuVar11 = pppuVar10;
            local_214 = pppuVar4;
          }
          pppuVar10 = pppuVar11;
        } while (local_210 != 0);
        _sprintf(&local_208,"%s_%d",*(int *)((int)this + 0x14) + 10,
                 ((int)pppuVar11 < 0) - 1 & (uint)pppuVar11);
        if (local_214 != (undefined ***)0xffffffff) {
          _sprintf(local_108,"%s_%d",*(int *)((int)this + 0x14) + 10,local_214);
          uVar2 = FUN_009b01a0(local_108);
          *(undefined4 *)((int)this + 0xc) = uVar2;
        }
      }
LAB_00a05b1d:
      uVar2 = FUN_009b01a0(&local_208);
      *(undefined4 *)((int)this + 8) = uVar2;
    }
  }
  if (param_4 != 0) {
    if ((*(int *)(*(int *)(param_4 + 0x78) + 0xd0) != 0) &&
       (uVar5 = FUN_00a22fa0(), (char)uVar5 == '\0')) {
      return;
    }
    if (*(int *)(param_4 + 0x78) != 0) {
      pvVar12 = *(void **)(*(int *)(param_4 + 0x78) + 0xd0);
      goto LAB_00a05b5d;
    }
  }
  pvVar12 = (void *)0x0;
LAB_00a05b5d:
  if (*(int *)((int)this + 8) != -1) {
    FUN_00a04d30(this,pvVar12,param_3,param_4,*(int *)((int)this + 8),
                 *(undefined4 *)(param_4 + 0x78));
  }
  if (*(int *)((int)this + 0xc) != -1) {
    FUN_00a04d30(this,pvVar12,param_3,param_4,*(int *)((int)this + 0xc),local_20c);
  }
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00a05bb0 @ 00a05bb0 ////

void __thiscall FUN_00a05bb0(void *this,float param_1,float param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  float fVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  long lVar9;
  uint *puVar10;
  bool bVar11;
  
  fVar3 = (float)*(int *)((int)this + 4);
  bVar11 = false;
  if ((param_1 <= fVar3) && (fVar3 < param_2)) {
    bVar11 = true;
  }
  if ((param_2 < param_1) && (fVar3 < param_2)) {
    bVar11 = true;
  }
  if (fVar3 == param_1) {
    bVar11 = false;
  }
  if ((fVar3 == param_2) || (bVar11)) {
    if ((param_4 != 0) &&
       (((*(int *)(param_4 + 0x78) != 0 && (*(int *)(*(int *)(param_4 + 0x78) + 0xd0) != 0)) &&
        (pcVar4 = FUN_00a043a0(*(char **)((int)this + 8),(char *)&PTR_LAB_005f7863_3_00d708e0),
        pcVar4 != (char *)0x0)))) {
      if (*pcVar4 == '+') {
        pcVar5 = FUN_00a043d0(pcVar4 + 1,"off_");
        pcVar4 = pcVar4 + 1;
        if (pcVar5 != (char *)0x0) {
          pcVar4 = pcVar5;
        }
        piVar7 = *(int **)(*(int *)(param_4 + 0x78) + 0x88);
        if (piVar7 == (int *)0x0) {
          return;
        }
        do {
          if (pcVar5 == (char *)0x0) {
            FUN_00a95970((void *)*piVar7,pcVar4,'\x01',(byte *)"_sp_fx");
          }
          else {
            FUN_00a95200(*piVar7,pcVar4);
          }
          piVar7 = (int *)piVar7[1];
        } while (piVar7 != (int *)0x0);
        return;
      }
      pcVar5 = FUN_00a043d0(pcVar4,"off_");
      if (pcVar5 == (char *)0x0) {
        lVar9 = 3;
        if (*pcVar4 == '@') {
          lVar9 = _atol(pcVar4 + 1);
          do {
            cVar1 = pcVar4[1];
            pcVar4 = pcVar4 + 1;
            if ((cVar1 == '\0') || (cVar1 < '0')) break;
          } while (cVar1 < ':');
        }
        pcVar5 = FUN_00a043a0(pcVar4,(char *)&PTR_LAB_00d74460);
        if (pcVar5 != (char *)0x0) {
          pcVar4 = pcVar5;
        }
        FUN_00a954e0(*(void **)(param_4 + 0x78),pcVar4,pcVar5 != (char *)0x0,lVar9,0.0);
        return;
      }
      bVar11 = true;
      iVar6 = 4;
      pcVar4 = pcVar5;
      pcVar8 = "all";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar11 = *pcVar4 == *pcVar8;
        pcVar4 = pcVar4 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar11);
      FUN_00a95200(*(int *)(param_4 + 0x78),(char *)(bVar11 - 1 & (uint)pcVar5));
      return;
    }
    puVar2 = *(uint **)((int)this + 8);
    iVar6 = 6;
    bVar11 = true;
    pcVar4 = "vomit";
    puVar10 = puVar2;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar11 = *pcVar4 == (char)*puVar10;
      pcVar4 = pcVar4 + 1;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (bVar11);
    if (bVar11) {
      FUN_00a39340(param_4,0);
      return;
    }
    iVar6 = 0xc;
    bVar11 = true;
    pcVar4 = "flash_photo";
    puVar10 = puVar2;
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar11 = *pcVar4 == (char)*puVar10;
      pcVar4 = pcVar4 + 1;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (bVar11);
    if (bVar11) {
      FUN_00527a40((undefined4 *)(param_4 + 0x58),0xffffffff,0x3f800000);
      return;
    }
    if ((param_4 != 0) && (piVar7 = *(int **)(param_4 + 0x78), piVar7 != (int *)0x0)) {
      SceneEventCommand_Dispatch(puVar2,(uint *)0x0,(undefined4 *)piVar7[0x34],piVar7,0);
    }
  }
  return;
}


//// FUNCTION FUN_00a05df0 @ 00a05df0 ////

undefined4 * __thiscall
FUN_00a05df0(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4)

{
  undefined4 *this_00;
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint local_34;
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
  puStack_8 = &LAB_00cf9253;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00999750(this);
  *(undefined ***)this = &PTR_FUN_00d742d4;
  *(void **)((int)this + 0x18) = DAT_010b7030;
  this_00 = (undefined4 *)((int)this + 0x24);
  DAT_010b7030 = this;
  *(undefined ***)this = &PTR_FUN_00d743d0;
  *this_00 = (undefined1 *)((int)this + 0x30);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x14;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  local_10 = 0;
  local_2c = 0xffffffff;
  local_30 = FUN_009b01a0(param_1);
  if (param_2 != (undefined4 *)0x0) {
    local_24 = param_2[1];
    local_34 = local_34 | 1;
    local_28 = *param_2;
    local_20 = param_2[2];
  }
  local_14 = *(undefined4 *)((int)this + 0x1c);
  uVar2 = FUN_009b1530((byte *)&local_34,4,0,'\0',&DAT_00d17518,'\0',0x3f800000,0.0);
  *(undefined4 *)((int)this + 0x20) = uVar2;
  if (param_4 != (char *)0x0) {
    pcVar3 = param_4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(this_00,param_4,(int)pcVar3 - (int)(param_4 + 1));
    ExceptionList = local_c;
    return this;
  }
  FUN_004015d0(this_00,"",0);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a05f50 @ 00a05f50 ////

undefined4 * __thiscall FUN_00a05f50(void *this,byte param_1)

{
  FUN_00a05370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a05f70 @ 00a05f70 ////

undefined4 * __cdecl
FUN_00a05f70(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf926b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x44);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00a05df0(this,param_1,param_2,param_3,param_4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a05fe0 @ 00a05fe0 ////

void __fastcall FUN_00a05fe0(int param_1)

{
  if (*(HKEY *)(param_1 + 4) != (HKEY)0x0) {
    RegCloseKey(*(HKEY *)(param_1 + 4));
  }
  return;
}


//// FUNCTION FUN_00a05ff0 @ 00a05ff0 ////

undefined4 * __thiscall FUN_00a05ff0(void *this,undefined4 *param_1,int param_2)

{
  PHKEY phkResult;
  LONG LVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)this = 0x80000001;
  }
  else if (param_2 == 2) {
    *(undefined4 *)this = 0x80000000;
  }
  else {
    *(undefined1 **)this = &fdwControls_80000002;
  }
  phkResult = (PHKEY)((int)this + 4);
  *phkResult = (HKEY)0x0;
  if (DAT_0105be80 == '\0') {
    LVar1 = RegCreateKeyExA(*(HKEY *)this,(LPCSTR)*param_1,0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,phkResult,(LPDWORD)0x0);
    if (LVar1 != 0) {
      *phkResult = (HKEY)0x0;
      return this;
    }
  }
  return this;
}


//// FUNCTION FUN_00a06070 @ 00a06070 ////

undefined4 __thiscall FUN_00a06070(void *this,undefined4 *param_1,undefined4 param_2)

{
  LONG LVar1;
  undefined4 local_c;
  DWORD local_8 [2];
  
  if (*(HKEY *)((int)this + 4) != (HKEY)0x0) {
    local_8[1] = 0;
    local_c = 0;
    local_8[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1,(LPDWORD)0x0,local_8 + 1,
                             (LPBYTE)&local_c,local_8);
    if (LVar1 == 0) {
      return local_c;
    }
  }
  return param_2;
}


//// FUNCTION FUN_00a060c0 @ 00a060c0 ////

bool __thiscall FUN_00a060c0(void *this,undefined4 *param_1,byte param_2)

{
  LONG LVar1;
  uint local_c;
  DWORD local_8 [2];
  
  if (*(HKEY *)((int)this + 4) != (HKEY)0x0) {
    local_8[1] = 0;
    local_c = 0;
    local_8[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1,(LPDWORD)0x0,local_8 + 1,
                             (LPBYTE)&local_c,local_8);
    if (LVar1 == 0) goto LAB_00a0610d;
  }
  local_c = (uint)param_2;
LAB_00a0610d:
  return local_c != 0;
}


//// FUNCTION FUN_00a06120 @ 00a06120 ////

void __thiscall FUN_00a06120(void *this,undefined4 *param_1,undefined4 param_2)

{
  if ((DAT_0105be80 == '\0') && (*(HKEY *)((int)this + 4) != (HKEY)0x0)) {
    RegSetValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1,0,4,(BYTE *)&param_2,4);
  }
  return;
}


//// FUNCTION FUN_00a06160 @ 00a06160 ////

void __thiscall FUN_00a06160(void *this,undefined4 *param_1,byte param_2)

{
  if ((DAT_0105be80 == '\0') && (*(HKEY *)((int)this + 4) != (HKEY)0x0)) {
    _param_2 = (uint)param_2;
    RegSetValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1,0,4,&param_2,4);
  }
  return;
}


//// FUNCTION FUN_00a061a0 @ 00a061a0 ////

void __thiscall FUN_00a061a0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if ((DAT_0105be80 == '\0') && (*(HKEY *)((int)this + 4) != (HKEY)0x0)) {
    RegSetValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1,0,1,(BYTE *)*param_2,param_2[1] + 1);
  }
  return;
}


//// FUNCTION FUN_00a06240 @ 00a06240 ////

void __thiscall FUN_00a06240(void *this,undefined4 *param_1)

{
  RegDeleteValueA(*(HKEY *)((int)this + 4),(LPCSTR)*param_1);
  return;
}


//// FUNCTION FUN_00a06260 @ 00a06260 ////

undefined4 * __thiscall
FUN_00a06260(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  BYTE BVar1;
  LONG LVar2;
  BYTE *pBVar3;
  DWORD local_208 [2];
  BYTE local_200 [512];
  
  local_208[0] = 0;
  if (*(HKEY *)((int)this + 4) != (HKEY)0x0) {
    local_208[0] = 0;
    local_208[1] = 0x200;
    LVar2 = RegQueryValueExA(*(HKEY *)((int)this + 4),(LPCSTR)*param_2,(LPDWORD)0x0,local_208,
                             local_200,local_208 + 1);
    if (LVar2 == 0) {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      pBVar3 = local_200;
      param_1[1] = 0;
      param_1[2] = 0x14;
      do {
        BVar1 = *pBVar3;
        pBVar3 = pBVar3 + 1;
      } while (BVar1 != '\0');
      FUN_004015d0(param_1,(char *)local_200,(int)pBVar3 - (int)(local_200 + 1));
      return param_1;
    }
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)*param_3,param_3[1]);
  return param_1;
}


//// FUNCTION FUN_00a07050 @ 00a07050 ////

LPCRITICAL_SECTION __fastcall FUN_00a07050(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)param_1);
  return param_1;
}


//// FUNCTION FUN_00a070b0 @ 00a070b0 ////

void __fastcall FUN_00a070b0(undefined4 *param_1)

{
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a070c0 @ 00a070c0 ////

undefined1 __fastcall FUN_00a070c0(int param_1)

{
  undefined1 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  return uVar1;
}


//// FUNCTION FUN_00a070f0 @ 00a070f0 ////

undefined1 __fastcall FUN_00a070f0(int param_1)

{
  undefined1 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  return uVar1;
}


//// FUNCTION FUN_00a07120 @ 00a07120 ////

undefined4 __fastcall FUN_00a07120(int param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  return uVar1;
}


//// FUNCTION FUN_00a07150 @ 00a07150 ////

void __fastcall FUN_00a07150(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d744dc;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (0x14 < (uint)param_1[6]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[4]);
  }
  return;
}


//// FUNCTION FUN_00a071d0 @ 00a071d0 ////

undefined4 * __thiscall FUN_00a071d0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf929e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d744dc;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined4 *)((int)this + 0x10) = (undefined1 *)((int)this + 0x1c);
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x14;
  puVar1 = (undefined4 *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x30) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  local_4 = CONCAT31(local_4._1_3_,2);
  *(void **)((int)this + 0x40) = this;
  FUN_00acdb9e(0xe68910);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x44) = iVar2;
  if (DAT_00e6890c != '\0') {
    iVar2 = 0x38;
    pcVar4 = "m_Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe68910);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e6890c = '\0';
  }
  FUN_004015d0((undefined4 *)((int)this + 0x10),*(char **)(param_1 + 4),*(uint *)(param_1 + 8));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 ***)((int)this + 0x3c) = &DAT_010b7098;
    *puVar1 = DAT_010b7098;
    DAT_010b7098[1] = puVar1;
    DAT_010b7098 = puVar1;
  }
  else {
    *(undefined4 ***)((int)this + 0x3c) = &DAT_010b70cc;
    *puVar1 = DAT_010b70cc;
    DAT_010b70cc[1] = puVar1;
    DAT_010b70cc = puVar1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00a07330 @ 00a07330 ////

undefined4 * __thiscall FUN_00a07330(void *this,byte param_1)

{
  FUN_00a07150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a07350 @ 00a07350 ////

uint FUN_00a07350(void)

{
  char cVar1;
  char *pcVar2;
  uint extraout_EAX;
  char *pcVar3;
  size_t sVar4;
  undefined4 extraout_EAX_00;
  undefined4 extraout_EAX_01;
  int iVar5;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf92b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  if (((DAT_010b708c == &DAT_010b7098) || (iVar5 = DAT_010b708c[2], iVar5 == 0)) &&
     ((DAT_010b70c0 == &DAT_010b70cc || (iVar5 = DAT_010b70c0[2], iVar5 == 0)))) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
    ExceptionList = local_c;
    return extraout_EAX & 0xffffff00;
  }
  if (((*(int *)(iVar5 + 0x14) == 0) || (*(int *)(iVar5 + 4) == 0)) || (*(int *)(iVar5 + 8) == 0)) {
    if (*(undefined4 **)(iVar5 + 0x3c) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar5 + 0x3c) = *(undefined4 *)(iVar5 + 0x38);
    }
    if (*(int *)(iVar5 + 0x38) != 0) {
      *(undefined4 *)(*(int *)(iVar5 + 0x38) + 4) = *(undefined4 *)(iVar5 + 0x3c);
    }
    *(undefined4 *)(iVar5 + 0x38) = 0;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(iVar5 + 0x30) = 0;
    *(undefined1 *)(iVar5 + 0xc) = 0;
    *(undefined1 *)(iVar5 + 0xd) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)extraout_EAX_01 >> 8),1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  pcVar2 = *(char **)(iVar5 + 0x10);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  sVar4 = FUN_009d3ca0(&local_2c,*(undefined4 **)(iVar5 + 4),*(size_t *)(iVar5 + 8),
                       (undefined1 *)(iVar5 + 0x48));
  *(size_t *)(iVar5 + 0x30) = sVar4;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  FUN_004013b0((int *)(iVar5 + 0x38));
  *(undefined1 *)(iVar5 + 0xd) = 1;
  *(bool *)(iVar5 + 0xc) = *(int *)(iVar5 + 0x30) == *(int *)(iVar5 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&lpCriticalSection_010b70ec);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
}


//// FUNCTION FUN_00a074e0 @ 00a074e0 ////

void __fastcall FUN_00a074e0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d744e4;
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


//// FUNCTION FUN_00a07530 @ 00a07530 ////

undefined4 * __thiscall FUN_00a07530(void *this,byte param_1)

{
  FUN_00a074e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a07550 @ 00a07550 ////

void __fastcall FUN_00a07550(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d744e4;
  return;
}


//// FUNCTION FUN_00a075d0 @ 00a075d0 ////

void __cdecl FUN_00a075d0(undefined4 *param_1)

{
  if (DAT_010b7624 != '\0') {
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00a075f0 @ 00a075f0 ////

void FUN_00a075f0(void)

{
  int iVar1;
  
  if ((DAT_010b7624 != '\0') && (iVar1 = (*DAT_010b765c)(DAT_010b7628), iVar1 != 0)) {
    (*DAT_010b7680)(iVar1,0x11,0,0);
    (*DAT_010b7660)(DAT_010b7628,iVar1);
  }
  return;
}


//// FUNCTION FUN_00a07660 @ 00a07660 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00a07660(uint param_1)

{
  int iVar1;
  SIZE_T SVar2;
  HANDLE pvVar3;
  LPVOID lpMem;
  uint uVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  uint uStack_420;
  undefined1 *puStack_41c;
  undefined4 uStack_418;
  CHAR aCStack_40c [12];
  undefined1 local_400 [1008];
  uint uStack_10;
  
  if (DAT_010b7624 == '\0') {
    return 0;
  }
  if (1 < param_1) {
    return 0;
  }
  if (DAT_010b8afc == DAT_010b7630) goto LAB_00a078c0;
  DAT_010b8afc = DAT_010b7630;
  if (((DAT_010b7630 != 0xe0080404) && (DAT_010b7630 != 0xe0090404)) && (DAT_010b7630 != 0xe00e0804)
     ) {
LAB_00a076bf:
    _DAT_010b8af8 = 0;
    _DAT_010b8af4 = 0;
    return *(undefined4 *)(&DAT_010b8af4 + param_1 * 4);
  }
  uStack_418 = 0x3ff;
  puStack_41c = local_400;
  uStack_420 = DAT_010b7630;
  iVar1 = (*DAT_010b7678)();
  if (iVar1 == 0) goto LAB_00a076bf;
  if ((((DAT_010b7690 == 0) &&
       (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"TINTLGNT.IME",-1), iVar1 != 2)) &&
      ((iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"CINTLGNT.IME",-1), iVar1 != 2 &&
       ((iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"MSTCIPHA.IME",-1), iVar1 != 2 &&
        (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"PINTLGNT.IME",-1), iVar1 != 2)))))) &&
     (iVar1 = CompareStringA(0x409,1,aCStack_40c,-1,"MSSCIPYA.IME",-1), iVar1 != 2)) {
    _DAT_010b8af8 = 0;
    _DAT_010b8af4 = 0;
    return *(undefined4 *)(&DAT_010b8af4 + param_1 * 4);
  }
  SVar2 = (*DAT_010b76a0)(aCStack_40c,&stack0xfffffbec);
  if (SVar2 == 0) goto LAB_00a078c0;
  DVar5 = 0;
  dwBytes = SVar2;
  pvVar3 = GetProcessHeap();
  lpMem = HeapAlloc(pvVar3,DVar5,dwBytes);
  param_1 = uStack_10;
  if (lpMem == (LPVOID)0x0) goto LAB_00a078c0;
  iVar1 = (*DAT_010b769c)(&stack0xfffffbec,puStack_41c,SVar2,lpMem);
  if ((iVar1 == 0) ||
     (iVar1 = (*DAT_010b7698)(lpMem,&DAT_00d1835c,&uStack_420,&uStack_418), iVar1 == 0))
  goto LAB_00a078ac;
  uVar4 = ((*(uint *)(uStack_420 + 8) & 0xff) << 8 | *(uint *)(uStack_420 + 8) & 0xffff0000) * 0x100
  ;
  if (DAT_010b7690 == 0) {
    if ((short)DAT_010b7630 == 0x404) {
      if ((((uVar4 == 0x4020000) || (uVar4 == 0x4030000)) || (uVar4 == 0x4040000)) ||
         (((uVar4 == 0x5000000 || (uVar4 == 0x5010000)) ||
          ((uVar4 == 0x5020000 || (uVar4 == 0x6000000)))))) goto LAB_00a07899;
    }
    else if (((short)DAT_010b7630 == 0x804) &&
            (((uVar4 == 0x4010000 || (uVar4 == 0x4020000)) || (uVar4 == 0x5030000))))
    goto LAB_00a07899;
  }
  else {
LAB_00a07899:
    _DAT_010b8af4 = DAT_010b7630 & 0xffff | uVar4;
    _DAT_010b8af8 = *(undefined4 *)(uStack_420 + 0xc);
  }
LAB_00a078ac:
  DVar5 = 0;
  pvVar3 = GetProcessHeap();
  HeapFree(pvVar3,DVar5,lpMem);
  param_1 = uStack_10;
LAB_00a078c0:
  return *(undefined4 *)(&DAT_010b8af4 + param_1 * 4);
}


//// FUNCTION FUN_00a078d0 @ 00a078d0 ////

void FUN_00a078d0(void)

{
  int iVar1;
  undefined4 uStack_114;
  undefined1 *puStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [264];
  
  puStack_110 = local_108;
  if (DAT_010b7624 != '\0') {
    uStack_10c = 0x104;
    uStack_114 = DAT_010b7630;
    DAT_010b7690 = (FARPROC)0x0;
    DAT_010b7694 = (FARPROC)0x0;
    iVar1 = (*DAT_010b7678)();
    if (iVar1 != 0) {
      if (DAT_010b761c != (HMODULE)0x0) {
        FreeLibrary(DAT_010b761c);
      }
      DAT_010b761c = LoadLibraryA((LPCSTR)&uStack_114);
      if (DAT_010b761c != (HMODULE)0x0) {
        FUN_009d9820();
        DAT_010b7690 = GetProcAddress(DAT_010b761c,"GetReadingString");
        DAT_010b7694 = GetProcAddress(DAT_010b761c,"ShowReadingWindow");
        if (DAT_010b7690 != (FARPROC)0x0) {
          FUN_009d9820();
        }
        if (DAT_010b7694 != (FARPROC)0x0) {
          FUN_009d9820();
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a079b0 @ 00a079b0 ////

undefined1 FUN_00a079b0(void)

{
  return DAT_010b762c;
}


//// FUNCTION FUN_00a079c0 @ 00a079c0 ////

undefined1 FUN_00a079c0(void)

{
  if (DAT_010b762d != '\0') {
    DAT_010b762d = 0;
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00a079e0 @ 00a079e0 ////

byte FUN_00a079e0(void)

{
  return (DAT_010b7624 == '\0') - 1U & DAT_010b7509;
}


//// FUNCTION FUN_00a07a00 @ 00a07a00 ////

uint FUN_00a07a00(void)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(DAT_010b7624 == '\0') + -1) & DAT_010b8ae0;
}


//// FUNCTION FUN_00a07a20 @ 00a07a20 ////

void __cdecl FUN_00a07a20(uint param_1)

{
  uint uVar1;
  wchar_t *_Source;
  LONG LVar2;
  HKEY local_218;
  byte local_214 [4];
  DWORD local_210;
  DWORD local_20c;
  wchar_t local_208 [260];
  
  if (DAT_010b7624 != '\0') {
    if (((DAT_010b7630 == -0x1ff1f7fc) || (DAT_010b7630 == -0x1ff6fbfc)) || (param_1 == 0)) {
      DAT_010b7508 = 1;
      return;
    }
    DAT_010b7508 = 0;
    if ((param_1 & 0xffff) == 0x404) {
      uVar1 = param_1 & 0xffff0000;
      _wcscpy(local_208,L"software\\microsoft\\windows\\currentversion\\");
      _Source = L"MSTCIPH";
      if (uVar1 < 0x5010000) {
        _Source = L"TINTLGNT";
      }
      _wcscat(local_208,_Source);
      LVar2 = RegOpenKeyExW((HKEY)&hKey_80000001,local_208,0,0x20019,&local_218);
      if (LVar2 == 0) {
        local_210 = 4;
        LVar2 = RegQueryValueExW(local_218,L"Keyboard Mapping",(LPDWORD)0x0,&local_20c,local_214,
                                 &local_210);
        if ((LVar2 == 0) &&
           (((uVar1 < 0x5000001 && ((local_214[0] == 0x22 || (local_214[0] == 0x23)))) ||
            (((uVar1 == 0x5010000 || (uVar1 == 0x5020000)) &&
             ((0x21 < local_214[0] && (local_214[0] < 0x25)))))))) {
          DAT_010b7508 = 1;
        }
        RegCloseKey(local_218);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a07b70 @ 00a07b70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a07b70(void)

{
  BYTE *lpMultiByteStr;
  uint uVar1;
  DWORD *pDVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong CodePage;
  WINBOOL WVar7;
  undefined2 *puVar8;
  uint unaff_EBX;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int unaff_ESI;
  LPWSTR unaff_EDI;
  bool bVar11;
  bool bVar12;
  DWORD DVar13;
  SIZE_T dwBytes;
  undefined1 *puStack_168;
  DWORD *pDStack_164;
  undefined1 *puStack_15c;
  LPWSTR pWVar14;
  DWORD *pDVar15;
  int iStack_148;
  uint local_144;
  WCHAR aWStack_140 [2];
  undefined1 auStack_13c [4];
  undefined4 uStack_138;
  DWORD *pDStack_134;
  _OSVERSIONINFOW _Stack_130;
  
  if (DAT_010b7624 == '\0') {
    return;
  }
  puVar10 = (undefined1 *)0x0;
  uVar1 = FUN_00a07660(0);
  if (uVar1 == 0) {
    DAT_010b7509 = 0;
    return;
  }
  local_144 = uVar1;
  pDVar2 = (DWORD *)(*DAT_010b765c)();
  if (pDVar2 == (DWORD *)0x0) {
    DAT_010b7509 = 0;
    return;
  }
  bVar12 = false;
  pDVar15 = (DWORD *)0x0;
  uStack_138 = 0;
  _Stack_130.dwOSVersionInfoSize = 0;
  pDStack_134 = pDVar2;
  if (DAT_010b7690 != (code *)0x0) {
    pDStack_164 = &_Stack_130.dwMajorVersion;
    puStack_168 = auStack_13c;
    iVar3 = (*DAT_010b7690)(pDVar2,0,0,&stack0xfffffeb0);
    puVar10 = (undefined1 *)0x0;
    if (iVar3 != 0) {
      dwBytes = iVar3 * 2;
      DVar13 = 0;
      pvVar4 = GetProcessHeap();
      pDVar15 = HeapAlloc(pvVar4,DVar13,dwBytes);
      pDStack_164 = pDVar15;
      if (pDVar15 == (DWORD *)0x0) {
        (*DAT_010b7660)(DAT_010b7628,pDVar2);
        return;
      }
      puVar10 = (undefined1 *)
                (*DAT_010b7690)(pDVar2,iVar3,pDVar15,&puStack_168,&stack0xfffffeac,&local_144);
    }
    DAT_010b7508 = unaff_ESI == 0;
    bVar12 = true;
    goto LAB_00a07d0c;
  }
  puStack_168 = (undefined1 *)0xa07c81;
  pDStack_164 = pDVar2;
  iStack_148 = (*DAT_010b7644)();
  if (0x4040404 < uVar1) {
    if (uVar1 < 0x5020405) {
      if (uVar1 != 0x5020404) {
        if (uVar1 == 0x5000404) {
          iVar3 = (*DAT_010b764c)(*(undefined4 *)(iStack_148 + 0x124));
          if ((*(int *)(iVar3 + 0xc) != 0) &&
             (iVar3 = *(int *)(*(int *)(iVar3 + 0xc) + 0x20), iVar3 != 0)) {
            puVar10 = *(undefined1 **)(iVar3 + 0x50);
            puStack_168 = *(undefined1 **)(iVar3 + 0x54);
            pDStack_164 = (DWORD *)(iVar3 + 0x40);
            bVar12 = false;
          }
          goto LAB_00a07d0c;
        }
        if (uVar1 != 0x5010404) goto LAB_00a07d0c;
      }
    }
    else if (uVar1 != 0x5030804) goto LAB_00a07d0c;
    iVar3 = (*DAT_010b764c)(*(undefined4 *)(iStack_148 + 0x124));
    if ((*(int *)(iVar3 + 4) != 0) && (iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x18), iVar3 != 0)) {
      puVar10 = *(undefined1 **)(iVar3 + 0x60);
      puStack_168 = *(undefined1 **)(iVar3 + 100);
      pDStack_164 = (DWORD *)(iVar3 + 0x40);
      bVar12 = true;
    }
    goto LAB_00a07d0c;
  }
  if (uVar1 != 0x4040404) {
    if (uVar1 < 0x4020805) {
      if (uVar1 == 0x4020804) {
        _Stack_130.dwOSVersionInfoSize = 0x114;
        GetVersionExW(&_Stack_130);
        bVar11 = _Stack_130.dwPlatformId == 2;
        uVar1 = unaff_EBX;
        iVar3 = (*DAT_010b764c)(*(undefined4 *)(iStack_148 + 0x124));
        iVar3 = *(int *)(iVar3 + 0x20);
        unaff_EBX = uVar1;
        if (iVar3 != 0) {
          puVar10 = *(undefined1 **)((bVar11 + 5) * 0x10 + iVar3);
          puStack_168 = *(undefined1 **)((bVar11 + 1) * 0x10 + 0x44 + iVar3);
          pDStack_164 = (DWORD *)(iVar3 + 0x40);
          bVar12 = _Stack_130.dwPlatformId == 2;
        }
        goto LAB_00a07d0c;
      }
      if (uVar1 == 0x4010804) {
        uVar5 = FUN_00a07660(1);
        uVar1 = unaff_EBX;
        iVar3 = (*DAT_010b764c)(*(undefined4 *)(iStack_148 + 0x124));
        iVar3 = *(int *)(iVar3 + (8 - (uint)(uVar5 < 2)) * 4);
        unaff_EBX = uVar1;
        if (iVar3 != 0) {
          puVar10 = *(undefined1 **)(iVar3 + 0x9c);
          puStack_168 = *(undefined1 **)(iVar3 + 0xa0);
          if (puVar10 <= *(undefined1 **)(iVar3 + 0xa0)) {
            puStack_168 = puVar10;
          }
          pDStack_164 = (DWORD *)(iVar3 + 0x38);
          bVar12 = true;
        }
        goto LAB_00a07d0c;
      }
      if (uVar1 != 0x4020404) goto LAB_00a07d0c;
    }
    else if (uVar1 != 0x4030404) goto LAB_00a07d0c;
  }
  iVar3 = (*DAT_010b764c)(*(undefined4 *)(iStack_148 + 0x124));
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 != 0) {
    puVar10 = *(undefined1 **)(iVar3 + 0x9c);
    puStack_168 = *(undefined1 **)(iVar3 + 0xa0);
    pDStack_164 = (DWORD *)(iVar3 + 0x38);
    bVar12 = true;
  }
LAB_00a07d0c:
  puVar6 = (undefined1 *)0x0;
  DAT_010b76a8 = 0;
  DAT_010b78a8 = 0;
  DAT_010b7aa8 = 0;
  DAT_010b7ca8 = 0;
  DAT_010b8ad4 = (undefined1 *)0xffffffff;
  DAT_010b8ad0 = puVar10;
  if (bVar12) {
    if (puVar10 != (undefined1 *)0x0) {
      puVar8 = &DAT_010b76aa;
      do {
        if ((puStack_168 <= puVar6) && (DAT_010b8ad4 == (undefined1 *)0xffffffff)) {
          DAT_010b8ad4 = puVar6;
        }
        puVar8[-1] = *(undefined2 *)((int)pDStack_164 + (int)puVar6 * 2);
        *puVar8 = 0;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 0x100;
      } while (puVar6 < puVar10);
    }
    (&DAT_010b76a8)[(int)puVar6 * 0x100] = 0;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    puStack_15c = (undefined1 *)0x0;
    if (puVar10 != (undefined1 *)0x0) {
      unaff_EDI = &DAT_010b76a8;
      uVar1 = unaff_EBX;
      do {
        CodePage = 0;
        if ((puStack_168 <= puVar9) && (DAT_010b8ad4 == (undefined1 *)0xffffffff)) {
          DAT_010b8ad4 = puStack_15c;
        }
        iVar3 = GetLocaleInfoW(DAT_010b7630 & 0xffff,0x1004,aWStack_140,8);
        if (iVar3 != 0) {
          CodePage = _wcstoul(aWStack_140,(wchar_t **)0x0,0);
        }
        lpMultiByteStr = puVar9 + (int)pDStack_164;
        iVar3 = 1;
        pWVar14 = unaff_EDI;
        WVar7 = IsDBCSLeadByteEx(CodePage,*lpMultiByteStr);
        MultiByteToWideChar(CodePage,0,(LPCCH)lpMultiByteStr,(WVar7 != 0) + 1,unaff_EDI,iVar3);
        WVar7 = IsDBCSLeadByteEx(CodePage,*lpMultiByteStr);
        if (WVar7 != 0) {
          puVar9 = puVar9 + 1;
        }
        puVar9 = puVar9 + 1;
        puVar6 = puStack_15c + 1;
        unaff_EDI = pWVar14 + 0x100;
        puStack_15c = puVar6;
      } while (puVar9 < puVar10);
    }
    (&DAT_010b76a8)[(int)puVar6 * 0x100] = 0;
    DAT_010b8ad0 = puVar6;
  }
  if (DAT_010b7690 == (code *)0x0) {
    (*DAT_010b7650)(*(undefined4 *)(iStack_148 + 0x124));
    (*DAT_010b7648)(pDVar15);
    FUN_00a07a20(uVar1);
  }
  (*DAT_010b7660)(DAT_010b7628,0);
  if (unaff_EDI != (LPWSTR)0x0) {
    DVar13 = 0;
    pvVar4 = GetProcessHeap();
    HeapFree(pvVar4,DVar13,unaff_EDI);
  }
  _DAT_010b8adc = 0xffffffff;
  DAT_010b8ad8 = 10;
  DAT_010b7509 = DAT_010b8ad0 != (undefined1 *)0x0;
  return;
}


//// FUNCTION FUN_00a08060 @ 00a08060 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00a08060(void)

{
  byte bVar1;
  FARPROC pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar3 = false;
    pFVar2 = DAT_010b7644;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmLockIMC");
    bVar3 = pFVar2 != (FARPROC)0x0;
    if (!bVar3) {
      pFVar2 = DAT_010b7644;
    }
  }
  DAT_010b7644 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar4 = false;
    pFVar2 = DAT_010b7648;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmUnlockIMC");
    bVar4 = pFVar2 != (FARPROC)0x0;
    if (!bVar4) {
      pFVar2 = DAT_010b7648;
    }
  }
  DAT_010b7648 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar5 = false;
    pFVar2 = DAT_010b764c;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmLockIMCC");
    bVar5 = pFVar2 != (FARPROC)0x0;
    if (!bVar5) {
      pFVar2 = DAT_010b764c;
    }
  }
  DAT_010b764c = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar6 = false;
    pFVar2 = DAT_010b7650;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmUnlockIMCC");
    bVar6 = pFVar2 != (FARPROC)0x0;
    if (!bVar6) {
      pFVar2 = DAT_010b7650;
    }
  }
  DAT_010b7650 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar7 = false;
    pFVar2 = DAT_010b7654;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetCompositionStringW");
    bVar7 = pFVar2 != (FARPROC)0x0;
    if (!bVar7) {
      pFVar2 = DAT_010b7654;
    }
  }
  DAT_010b7654 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar8 = false;
    pFVar2 = DAT_010b7658;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetCandidateListW");
    bVar8 = pFVar2 != (FARPROC)0x0;
    if (!bVar8) {
      pFVar2 = DAT_010b7658;
    }
  }
  DAT_010b7658 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar9 = false;
    pFVar2 = DAT_010b765c;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetContext");
    bVar9 = pFVar2 != (FARPROC)0x0;
    if (!bVar9) {
      pFVar2 = DAT_010b765c;
    }
  }
  DAT_010b765c = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar10 = false;
    pFVar2 = DAT_010b7660;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmReleaseContext");
    bVar10 = pFVar2 != (FARPROC)0x0;
    if (!bVar10) {
      pFVar2 = DAT_010b7660;
    }
  }
  DAT_010b7660 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar11 = false;
    pFVar2 = DAT_010b7664;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmAssociateContext");
    bVar11 = pFVar2 != (FARPROC)0x0;
    if (!bVar11) {
      pFVar2 = DAT_010b7664;
    }
  }
  DAT_010b7664 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar12 = false;
    pFVar2 = DAT_010b7668;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetOpenStatus");
    bVar12 = pFVar2 != (FARPROC)0x0;
    if (!bVar12) {
      pFVar2 = DAT_010b7668;
    }
  }
  DAT_010b7668 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar13 = false;
    pFVar2 = _DAT_010b766c;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmSetOpenStatus");
    bVar13 = pFVar2 != (FARPROC)0x0;
    if (!bVar13) {
      pFVar2 = _DAT_010b766c;
    }
  }
  _DAT_010b766c = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar14 = false;
    pFVar2 = DAT_010b7670;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetConversionStatus");
    bVar14 = pFVar2 != (FARPROC)0x0;
    if (!bVar14) {
      pFVar2 = DAT_010b7670;
    }
  }
  DAT_010b7670 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar15 = false;
    pFVar2 = _DAT_010b7674;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetDefaultIMEWnd");
    bVar15 = pFVar2 != (FARPROC)0x0;
    if (!bVar15) {
      pFVar2 = _DAT_010b7674;
    }
  }
  _DAT_010b7674 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar16 = false;
    pFVar2 = DAT_010b7678;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetIMEFileNameA");
    bVar16 = pFVar2 != (FARPROC)0x0;
    if (!bVar16) {
      pFVar2 = DAT_010b7678;
    }
  }
  DAT_010b7678 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar17 = false;
    pFVar2 = _DAT_010b767c;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmGetVirtualKey");
    bVar17 = pFVar2 != (FARPROC)0x0;
    if (!bVar17) {
      pFVar2 = _DAT_010b767c;
    }
  }
  _DAT_010b767c = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar18 = false;
    pFVar2 = DAT_010b7680;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmNotifyIME");
    bVar18 = pFVar2 != (FARPROC)0x0;
    if (!bVar18) {
      pFVar2 = DAT_010b7680;
    }
  }
  DAT_010b7680 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar19 = false;
    pFVar2 = _DAT_010b7684;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmSetConversionStatus");
    bVar19 = pFVar2 != (FARPROC)0x0;
    if (!bVar19) {
      pFVar2 = _DAT_010b7684;
    }
  }
  _DAT_010b7684 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar20 = false;
    pFVar2 = _DAT_010b7688;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmSimulateHotKey");
    bVar20 = pFVar2 != (FARPROC)0x0;
    if (!bVar20) {
      pFVar2 = _DAT_010b7688;
    }
  }
  _DAT_010b7688 = pFVar2;
  if (DAT_010b7620 == (HMODULE)0x0) {
    bVar1 = 0;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7620,"ImmIsIME");
    if (pFVar2 == (FARPROC)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
      DAT_010b768c = pFVar2;
    }
  }
  if (DAT_010b7618 == (HMODULE)0x0) {
    bVar21 = false;
    pFVar2 = DAT_010b7698;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7618,"VerQueryValueA");
    bVar21 = pFVar2 != (FARPROC)0x0;
    if (!bVar21) {
      pFVar2 = DAT_010b7698;
    }
  }
  DAT_010b7698 = pFVar2;
  if (DAT_010b7618 == (HMODULE)0x0) {
    bVar22 = false;
    pFVar2 = DAT_010b769c;
  }
  else {
    pFVar2 = GetProcAddress(DAT_010b7618,"GetFileVersionInfoA");
    bVar22 = pFVar2 != (FARPROC)0x0;
    if (!bVar22) {
      pFVar2 = DAT_010b769c;
    }
  }
  DAT_010b769c = pFVar2;
  if ((DAT_010b7618 != (HMODULE)0x0) &&
     (pFVar2 = GetProcAddress(DAT_010b7618,"GetFileVersionInfoSizeA"), pFVar2 != (FARPROC)0x0)) {
    DAT_010b76a0 = pFVar2;
    return bVar3 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12 & bVar13
           & bVar14 & bVar15 & bVar16 & bVar17 & bVar18 & bVar19 & bVar20 & bVar1 & bVar21 & bVar22;
  }
  return 0;
}


//// FUNCTION FUN_00a083c0 @ 00a083c0 ////

int __fastcall FUN_00a083c0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x8c;
}


//// FUNCTION FUN_00a08500 @ 00a08500 ////

void __cdecl FUN_00a08500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x23;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x23; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a085b0 @ 00a085b0 ////

void __fastcall FUN_00a085b0(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x1408)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x1400));
  }
  return;
}


//// FUNCTION FUN_00a085d0 @ 00a085d0 ////

void FUN_00a085d0(void)

{
  wint_t wVar1;
  uint uVar2;
  int iVar3;
  WCHAR local_c;
  wint_t local_a;
  
  if (DAT_010b7624 == '\0') {
    return;
  }
  DAT_010b7630 = GetKeyboardLayout(0);
  uVar2 = (uint)DAT_010b7630 & 0x3ff;
  if (uVar2 == 4) {
    FUN_009d9820();
    uVar2 = ((uint)DAT_010b7630 & 0xffff) >> 10;
    DAT_010b7634 = '\x01';
    if (uVar2 == 1) {
      FUN_009d9820();
      PTR_DAT_00e68980 = &DAT_00e6896c;
      return;
    }
    if (uVar2 == 2) {
      FUN_009d9820();
      PTR_DAT_00e68980 = &DAT_00e68966;
      iVar3 = FUN_00a07660(0);
      DAT_010b7634 = '\x01' - (iVar3 != 0);
      if ((undefined2 *)PTR_DAT_00e68980 != &DAT_00e68960) {
        return;
      }
      goto LAB_00a086c0;
    }
  }
  else {
    if (uVar2 == 0x11) {
      FUN_009d9820();
      PTR_DAT_00e68980 = &DAT_00e68978;
      DAT_010b7634 = 1;
      return;
    }
    if (uVar2 == 0x12) {
      FUN_009d9820();
      PTR_DAT_00e68980 = &DAT_00e68972;
      DAT_010b7634 = 0;
      return;
    }
  }
  FUN_009d9820();
  PTR_DAT_00e68980 = (undefined *)&DAT_00e68960;
LAB_00a086c0:
  GetLocaleInfoW((uint)DAT_010b7630 & 0xffff,3,&local_c,5);
  *(WCHAR *)PTR_DAT_00e68980 = local_c;
  wVar1 = _towlower(local_a);
  *(wint_t *)(PTR_DAT_00e68980 + 2) = wVar1;
  return;
}


//// FUNCTION FUN_00a08730 @ 00a08730 ////

bool FUN_00a08730(void)

{
  if (DAT_010b7624 == '\0') {
    return false;
  }
  return DAT_00e689a8 != 0;
}


//// FUNCTION FUN_00a087f0 @ 00a087f0 ////

void __cdecl FUN_00a087f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0x23;
    param_3 = param_3 + -0x23;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


//// FUNCTION FUN_00a08860 @ 00a08860 ////

void __fastcall FUN_00a08860(int param_1)

{
  *(undefined2 **)(param_1 + 0x1400) = (undefined2 *)(param_1 + 0x140c);
  *(undefined2 *)(param_1 + 0x140c) = 0;
  *(undefined4 *)(param_1 + 0x1404) = 0;
  *(undefined4 *)(param_1 + 0x1408) = 10;
  return;
}


//// FUNCTION FUN_00a08890 @ 00a08890 ////

void FUN_00a08890(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uStack_10;
  
  if (DAT_010b7624 == '\0') {
    return;
  }
  uStack_10 = 0xa088a6;
  FUN_00a085d0();
  uStack_10 = DAT_010b7630;
  iVar1 = (*DAT_010b768c)();
  if (((DAT_010b7630 & 0x3ff) != 4) || (DAT_010b7635 = '\x01', iVar1 == 0)) {
    DAT_010b7635 = '\0';
  }
  iVar2 = (*DAT_010b765c)(DAT_010b7628);
  if (iVar2 == 0) {
    DAT_010b7640 = 0;
    return;
  }
  if (DAT_010b7635 != '\0') {
    uVar3 = 0;
    (*DAT_010b7670)(iVar2,&uStack_10);
    DAT_010b7640 = 2 - (uint)((uVar3 & 1) != 0);
    (*DAT_010b7660)(DAT_010b7628,iVar2);
    return;
  }
  if (iVar1 != 0) {
    iVar1 = (*DAT_010b7668)(iVar2);
    DAT_010b7640 = 1;
    if (iVar1 != 0) goto LAB_00a08952;
  }
  DAT_010b7640 = 0;
LAB_00a08952:
  (*DAT_010b7660)(DAT_010b7628,iVar2);
  return;
}


//// FUNCTION FUN_00a089d0 @ 00a089d0 ////

void __cdecl FUN_00a089d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x23) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x23;
  }
  return;
}


//// FUNCTION FUN_00a08a10 @ 00a08a10 ////

void FUN_00a08a10(void)

{
  int iVar1;
  
  if (DAT_010b7624 != '\0') {
    FUN_009d9820();
    FUN_00a08890();
    DAT_010b7636 = (DAT_010b7630 & 0x3ff) == 0x12;
    FUN_00a078d0();
    if ((DAT_010b7694 != (code *)0x0) && (iVar1 = (*DAT_010b765c)(DAT_010b7628), iVar1 != 0)) {
      (*DAT_010b7694)(iVar1,0);
      (*DAT_010b7660)(DAT_010b7628,iVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00a08a80 @ 00a08a80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a08a80(void)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  SIZE_T SVar5;
  HANDLE pvVar6;
  LPVOID lpMem;
  int iVar7;
  short *psVar8;
  uint uVar9;
  int *piVar10;
  wchar_t *_Format;
  short *psVar11;
  undefined4 *puVar12;
  DWORD DVar13;
  SIZE_T dwBytes;
  uint uVar14;
  uint uStack_274;
  int iStack_270;
  undefined4 uStack_26c;
  wchar_t awStack_236 [2];
  undefined4 auStack_232 [139];
  
  if (DAT_010b7624 != '\0') {
    uStack_26c = DAT_010b7628;
    DAT_010b8ae0._0_1_ = 1;
    DAT_010b7626 = 1;
    iStack_270 = 0xa08ab7;
    iVar4 = (*DAT_010b765c)();
    if (iVar4 != 0) {
      iStack_270 = 0;
      uStack_274 = 0;
      DAT_010b7509 = 0;
      SVar5 = (*DAT_010b7658)(iVar4,0);
      if (SVar5 != 0) {
        DVar13 = 0;
        dwBytes = SVar5;
        pvVar6 = GetProcessHeap();
        lpMem = HeapAlloc(pvVar6,DVar13,dwBytes);
        (*DAT_010b7658)(iVar4,0,lpMem,SVar5);
        if (lpMem != (LPVOID)0x0) {
          DAT_010b8ad4 = *(uint *)((int)lpMem + 0xc);
          DAT_010b8ad0 = *(undefined4 *)((int)lpMem + 8);
          DAT_010b8ad8 = *(uint *)((int)lpMem + 0x14);
          if (9 < DAT_010b8ad8) {
            DAT_010b8ad8 = 10;
          }
          if ((DAT_010b7630 & 0x3ff) == 0x11) {
            uVar9 = (DAT_010b8ad4 / DAT_010b8ad8) * DAT_010b8ad8;
          }
          else {
            uVar9 = *(uint *)((int)lpMem + 0x10);
          }
          uVar14 = uVar9;
          if (((short)DAT_010b7630 == 0x804) && (iVar7 = FUN_00a07660(0), iVar7 == 0)) {
            DAT_010b8ad4 = 0xffffffff;
          }
          else {
            DAT_010b8ad4 = DAT_010b8ad4 - uVar9;
          }
          puVar12 = (undefined4 *)&DAT_010b76a8;
          for (iVar7 = 0x500; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          uStack_274 = 0;
          if (uVar9 < *(uint *)((int)lpMem + 8)) {
            psVar11 = &DAT_010b76aa;
            piVar10 = (int *)((int)lpMem + uVar9 * 4 + 0x18);
            do {
              iVar4 = iStack_270;
              if (DAT_010b8ad8 <= uStack_274) break;
              psVar11[-1] = (short)((ulonglong)((1 - uVar14) + uVar9) % 10) + 0x30;
              *psVar11 = 0x20;
              psVar8 = (short *)(*piVar10 + (int)lpMem);
              sVar1 = *(short *)(*piVar10 + (int)lpMem);
              psVar3 = psVar11;
              while (psVar2 = psVar3 + 1, sVar1 != 0) {
                *psVar2 = sVar1;
                psVar8 = psVar8 + 1;
                psVar3 = psVar2;
                sVar1 = *psVar8;
              }
              *psVar2 = 0x20;
              uStack_274 = uStack_274 + 1;
              piVar10 = piVar10 + 1;
              psVar11 = psVar11 + 0x100;
              psVar3[2] = 0;
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)((int)lpMem + 8));
          }
          DAT_010b8ad0 = *(int *)((int)lpMem + 8) - *(int *)((int)lpMem + 0x10);
          if (*(uint *)((int)lpMem + 0x14) < DAT_010b8ad0) {
            DAT_010b8ad0 = *(uint *)((int)lpMem + 0x14);
          }
          DVar13 = 0;
          pvVar6 = GetProcessHeap();
          HeapFree(pvVar6,DVar13,lpMem);
          (*DAT_010b7660)(DAT_010b7628,iVar4);
          if (((DAT_010b7630 & 0x3ff) == 0x12) ||
             (((short)DAT_010b7630 == 0x404 && (iVar4 = FUN_00a07660(0), iVar4 == 0)))) {
            DAT_010b8ad4 = 0xffffffff;
          }
          if (DAT_010b7634 == '\0') {
            awStack_236[1] = 0;
            puVar12 = auStack_232;
            for (iVar4 = 0x7f; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar12 = 0;
              puVar12 = puVar12 + 1;
            }
            *(undefined2 *)puVar12 = 0;
            _DAT_010b8ac8 = 0;
            _DAT_010b8acc = 0;
            uVar9 = 0;
            _Format = &DAT_010b76a8;
            do {
              if (*_Format == L'\0') break;
              _swprintf((wchar_t *)&uStack_274,0xd7489c,_Format);
              if (DAT_010b8ad4 == uVar9) {
                _DAT_010b8ac8 = FUN_00ace02d(awStack_236 + 1);
                _DAT_010b8acc = FUN_00ace02d((short *)&uStack_274);
                _DAT_010b8acc = _DAT_010b8acc + -1;
              }
              _wcscat(awStack_236 + 1,(wchar_t *)&uStack_274);
              uVar9 = uVar9 + 1;
              _Format = _Format + 0x100;
            } while (uVar9 < 10);
            iVar4 = FUN_00ace02d(awStack_236 + 1);
            awStack_236[iVar4] = L'\0';
            uVar9 = FUN_00ace02d(awStack_236 + 1);
            if (DAT_010b8ab0 <= uVar9) {
              if (10 < DAT_010b8ab0) {
                    /* WARNING: Subroutine does not return */
                _free(DAT_010b8aa8);
              }
              DAT_010b8ab0 = uVar9 + 0x20 & 0xffffffe0;
              DAT_010b8aa8 = _malloc(DAT_010b8ab0 * 2);
            }
            _wcsncpy(DAT_010b8aa8,awStack_236 + 1,uVar9);
            DAT_010b8aac = uVar9;
            DAT_010b8aa8[uVar9] = L'\0';
          }
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a08dc0 @ 00a08dc0 ////

void FUN_00a08dc0(void)

{
  int iVar1;
  
  if (DAT_010b7624 != '\0') {
    if (DAT_010b7625 == '\0') {
      (*DAT_010b7664)(DAT_010b7628,0);
    }
    else {
      (*DAT_010b7664)(DAT_010b7628,DAT_010b7614);
      FUN_00a08890();
    }
    iVar1 = (*DAT_010b765c)(DAT_010b7628);
    if (iVar1 != 0) {
      (*DAT_010b7660)(DAT_010b7628,iVar1);
      FUN_00a08890();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00a08e20 @ 00a08e20 ////

void FUN_00a08e20(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DAT_010b7610 = 0;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&PTR_DAT_00e689a4,(wchar_t *)&lpCaption_00d16918,uVar1);
  puVar3 = &DAT_010b7510;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}


//// FUNCTION FUN_00a08e60 @ 00a08e60 ////

void __cdecl FUN_00a08e60(void *param_1)

{
  uint uVar1;
  
  if (DAT_010b7624 != '\0') {
    FUN_004036d0(param_1,(wchar_t *)PTR_DAT_00e68984,DAT_00e68988);
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&PTR_DAT_00e68984,(wchar_t *)&lpCaption_00d16918,uVar1);
    DAT_010b762c = 0;
  }
  return;
}


//// FUNCTION FUN_00a08eb0 @ 00a08eb0 ////

void __cdecl FUN_00a08eb0(void *param_1)

{
  if (DAT_010b7624 != '\0') {
    FUN_004036d0(param_1,(wchar_t *)PTR_DAT_00e689a4,DAT_00e689a8);
  }
  return;
}


//// FUNCTION FUN_00a08ed0 @ 00a08ed0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a08ed0(void *param_1,void *param_2)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  uint uVar4;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  if ((DAT_010b7624 != '\0') && (DAT_010b7509 != '\0')) {
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_20 = local_14;
    uVar4 = 0;
    _DAT_010b8adc = 0xffffffff;
    local_14[0] = L'\0';
    local_1c = 0;
    local_18 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar1);
    if (DAT_010b8ad0 != 0) {
      pwVar3 = &DAT_010b76a8;
      do {
        if (DAT_010b8ad4 == uVar4) {
          _DAT_010b8adc = *(undefined4 *)((int)param_1 + 4);
        }
        uVar1 = FUN_00ace02d(pwVar3);
        FUN_004036d0(&local_20,pwVar3,uVar1);
        if (local_1c != 0) {
          if (*(uint *)((int)param_2 + 4) < local_1c) {
            FUN_004036d0(param_2,local_20,local_1c);
          }
          FUN_0040cae0(param_1,local_20,local_1c);
          if (DAT_010b7508 == '\0') {
            sVar2 = FUN_00ace02d(L"<br>");
            FUN_0040cae0(param_1,L"<br>",sVar2);
          }
        }
        uVar4 = uVar4 + 1;
        pwVar3 = pwVar3 + 0x100;
      } while (uVar4 < DAT_010b8ad0);
    }
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
  }
  return;
}


//// FUNCTION FUN_00a09010 @ 00a09010 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00a09010(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  wchar_t *pwVar4;
  wchar_t *local_20;
  uint local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1,(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_2,(wchar_t *)&lpCaption_00d16918,uVar1);
  if (DAT_010b7624 != '\0') {
    _DAT_010b8adc = 0xffffffff;
    if (DAT_010b7634 == '\0') {
      FUN_004036d0(param_1,DAT_010b8aa8,DAT_010b8aac);
      FUN_004036d0(param_2,(wchar_t *)*param_1,param_1[1]);
    }
    else {
      local_20 = local_14;
      uVar3 = 0;
      local_14[0] = L'\0';
      local_1c = 0;
      local_18 = 10;
      uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar1);
      if (DAT_010b8ad0 != 0) {
        pwVar4 = &DAT_010b76a8;
        do {
          if (DAT_010b8ad4 == uVar3) {
            _DAT_010b8adc = param_1[1];
          }
          uVar1 = FUN_00ace02d(pwVar4);
          FUN_004036d0(&local_20,pwVar4,uVar1);
          if (local_1c != 0) {
            if (*(uint *)((int)param_2 + 4) < local_1c) {
              FUN_004036d0(param_2,local_20,local_1c);
            }
            FUN_0040cae0(param_1,local_20,local_1c);
            sVar2 = FUN_00ace02d(L"<br>");
            FUN_0040cae0(param_1,L"<br>",sVar2);
          }
          uVar3 = uVar3 + 1;
          pwVar4 = pwVar4 + 0x100;
        } while (uVar3 < DAT_010b8ad0);
      }
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00a091b0 @ 00a091b0 ////

void __cdecl FUN_00a091b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x23;
  }
  return;
}


//// FUNCTION FUN_00a09210 @ 00a09210 ////

void __cdecl FUN_00a09210(char param_1)

{
  int iVar1;
  
  if ((DAT_010b7624 != '\0') && (DAT_010b7625 != param_1)) {
    DAT_010b7625 = param_1;
    if ((param_1 == '\0') && (iVar1 = (*DAT_010b765c)(DAT_010b7628), iVar1 != 0)) {
      (*DAT_010b7680)(iVar1,0x11,0,0);
      (*DAT_010b7660)(DAT_010b7628,iVar1);
    }
    FUN_00a08dc0();
    return;
  }
  return;
}


//// FUNCTION FUN_00a09270 @ 00a09270 ////

void FUN_00a09270(void)

{
  int iVar1;
  
  if (DAT_010b7624 != '\0') {
    iVar1 = (*DAT_010b765c)(DAT_010b7628);
    if (iVar1 != 0) {
      (*DAT_010b7680)(iVar1,0x15,4,0);
      (*DAT_010b7660)(DAT_010b7628,iVar1);
    }
    FUN_00a08dc0();
    return;
  }
  return;
}


//// FUNCTION FUN_00a092b0 @ 00a092b0 ////

void FUN_00a092b0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_010b7624 != '\0') {
    DAT_010b7610 = 0;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&PTR_DAT_00e689a4,(wchar_t *)&lpCaption_00d16918,uVar1);
    puVar3 = &DAT_010b7510;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_010b763d = 1;
  }
  return;
}


//// FUNCTION FUN_00a09300 @ 00a09300 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a09300(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  uint *unaff_retaddr;
  wchar_t awStack_214 [266];
  
  if (DAT_010b7624 != '\0') {
    DAT_010b7626 = 1;
    iVar1 = (*DAT_010b765c)(DAT_010b7628);
    if (iVar1 != 0) {
      if (((*unaff_retaddr & 0x800) != 0) &&
         (uVar2 = (*DAT_010b7654)(iVar1,0x800,&stack0xfffffbfc,0x200), 0 < (int)uVar2)) {
        *(undefined2 *)(&stack0xfffffbfc + (uVar2 & 0xfffffffe)) = 0;
        FUN_00ace02d((short *)&stack0xfffffbfc);
        uVar2 = FUN_00ace02d((short *)&stack0xfffffbfc);
        FUN_004036d0(&PTR_DAT_00e689a4,(wchar_t *)&stack0xfffffbfc,uVar2);
        FUN_00a09950();
        DAT_010b762d = 1;
        FUN_00a08e20();
      }
      if (((*unaff_retaddr & 8) != 0) &&
         (uVar2 = (*DAT_010b7654)(iVar1,8,&stack0xfffffbfc,0x200), 0 < (int)uVar2)) {
        *(undefined2 *)(&stack0xfffffbfc + (uVar2 & 0xfffffffe)) = 0;
        FUN_00ace02d((short *)&stack0xfffffbfc);
        uVar2 = FUN_00ace02d((short *)&stack0xfffffbfc);
        FUN_004036d0(&PTR_DAT_00e689a4,(wchar_t *)&stack0xfffffbfc,uVar2);
        iVar3 = (*DAT_010b7654)(iVar1,0x10,&DAT_010b7510,0x100);
        if (0 < iVar3) {
          *(undefined1 *)((int)&DAT_010b7510 + iVar3) = 0;
        }
        if (((short)DAT_010b7630 == 0x404) && (iVar3 = FUN_00a07660(0), iVar3 == 0)) {
          if (DAT_00e689a8 == 0) {
            DAT_010b8ad0 = 0;
            DAT_010b7509 = 0;
          }
          else {
            DAT_010b8ad0 = 4;
            DAT_010b8ad4 = 0xffffffff;
            _wcscpy(awStack_214,(wchar_t *)PTR_DAT_00e689a4);
            iVar3 = 3;
            iVar5 = DAT_00e689a8 + -1;
            pwVar4 = &DAT_010b7ca8;
            do {
              if (iVar5 < iVar3) {
                *pwVar4 = L'\0';
              }
              else {
                *pwVar4 = awStack_214[iVar3];
                pwVar4[1] = L'\0';
              }
              pwVar4 = pwVar4 + -0x100;
              iVar3 = iVar3 + -1;
            } while (0x10b76a7 < (int)pwVar4);
            DAT_010b8ad8 = 10;
            FUN_00403e90(&PTR_DAT_00e689a4,(wchar_t *)&lpCaption_00d16918);
            DAT_010b7509 = 1;
            if (DAT_010b7624 != '\0') {
              DAT_010b7508 = 1;
            }
          }
        }
        DAT_010b7610 = (*DAT_010b7654)(iVar1,0x80,0,0);
        if (DAT_010b7610 < 0) {
          DAT_010b7610 = 0;
        }
        _DAT_010b7638 = 0;
        if (DAT_010b7636 != '\0') {
          FUN_00a09950();
          _DAT_010b7638 = FUN_00ace02d((short *)(PTR_DAT_00e689a4 + DAT_010b7610 * 2));
        }
      }
      if ((*unaff_retaddr & 0x20) != 0) {
        uVar2 = (*DAT_010b7654)(iVar1,0x20,&DAT_010b7108,0x400);
        *(undefined4 *)(&DAT_010b7108 + (uVar2 & 0xfffffffc)) = 0;
      }
      (*DAT_010b7660)(DAT_010b7628,iVar1);
    }
  }
  return;
}


//// FUNCTION FUN_00a09560 @ 00a09560 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a09560(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_010b7624 != '\0') {
    _DAT_010b7638 = 0;
    DAT_010b7610 = 0;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&PTR_DAT_00e689a4,(wchar_t *)&lpCaption_00d16918,uVar1);
    puVar3 = &DAT_010b7510;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    DAT_010b7509 = 0;
  }
  return;
}


//// FUNCTION FUN_00a095b0 @ 00a095b0 ////

void __cdecl FUN_00a095b0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  if (DAT_010b7624 == '\0') {
    return;
  }
  switch(param_1) {
  case 3:
  case 5:
    FUN_00a08a80();
    return;
  case 4:
    DAT_010b8ae0._0_1_ = '\0';
    if (DAT_010b7509 == '\0') {
      DAT_010b8ad0 = 0;
      puVar3 = (undefined4 *)&DAT_010b76a8;
      for (iVar2 = 0x500; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      DAT_010b7626 = 1;
      return;
    }
    break;
  case 6:
  case 8:
    FUN_00a08890();
    return;
  default:
    goto switchD_00a095d4_caseD_7;
  case 0xe:
    if ((char)DAT_010b8ae0 == '\0') {
      FUN_00a07b70();
    }
    uVar1 = FUN_00a07660(0);
    if (uVar1 < 0x5000405) {
      if (uVar1 == 0x5000404) goto LAB_00a0968f;
      if (uVar1 < 0x4020805) {
        if (((uVar1 != 0x4020804) && (uVar1 != 0x4010804)) && (uVar1 != 0x4020404)) {
          return;
        }
      }
      else if ((uVar1 != 0x4030404) && (uVar1 != 0x4040404)) {
        return;
      }
      if (param_2 == 1) break;
      bVar4 = param_2 == 2;
    }
    else {
      if (uVar1 < 0x5030805) {
        if (((uVar1 != 0x5030804) && (uVar1 != 0x5010404)) && (uVar1 != 0x5020404)) {
          return;
        }
      }
      else if (uVar1 != 0x6000404) {
        return;
      }
LAB_00a0968f:
      if (((param_2 == 0x10) || (param_2 == 0x11)) || ((param_2 == 0x1a || (param_2 == 0x1b))))
      break;
      bVar4 = param_2 == 0x1c;
    }
    if (!bVar4) {
      return;
    }
  }
  DAT_010b7626 = 1;
switchD_00a095d4_caseD_7:
  return;
}


//// FUNCTION FUN_00a096f0 @ 00a096f0 ////

void __fastcall FUN_00a096f0(int param_1)

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


//// FUNCTION FUN_00a09770 @ 00a09770 ////

void FUN_00a09770(void)

{
  int iVar1;
  
  if ((DAT_010b7624 != '\0') && (DAT_010b7625 != '\0')) {
    DAT_010b7625 = '\0';
    iVar1 = (*DAT_010b765c)(DAT_010b7628);
    if (iVar1 != 0) {
      (*DAT_010b7680)(iVar1,0x11,0,0);
      (*DAT_010b7660)(DAT_010b7628,iVar1);
    }
    FUN_00a08dc0();
  }
  FreeLibrary(DAT_010b7620);
  DAT_010b7620 = (HMODULE)0x0;
  FreeLibrary(DAT_010b7618);
  DAT_010b7618 = (HMODULE)0x0;
  DAT_010b7624 = 0;
  return;
}


//// FUNCTION FUN_00a097f0 @ 00a097f0 ////

undefined1 __cdecl FUN_00a097f0(uint param_1,undefined4 *param_2,int *param_3)

{
  if (DAT_010b7624 == '\0') {
    return 0;
  }
  DAT_010b7626 = 0;
  if (param_1 < 0x110) {
    if (param_1 == 0x10f) {
      FUN_00a09300();
      return 1;
    }
    if (param_1 < 0x10e) {
      if (param_1 == 0x10d) {
        FUN_00a092b0();
        return 1;
      }
      if (param_1 == 7) {
        FUN_00a08dc0();
      }
      else if (param_1 == 0x51) {
        FUN_00a08a10();
        return 1;
      }
    }
    else if (param_1 == 0x10e) {
      FUN_00a09560();
      return DAT_010b7626;
    }
  }
  else {
    switch(param_1) {
    case 0x201:
    case 0x203:
      FUN_00a075f0();
      return 0;
    case 0x281:
      FUN_00a075d0(param_3);
      return 0;
    case 0x282:
      FUN_00a095b0(*param_2,*param_3);
      return DAT_010b7626;
    }
  }
  return DAT_010b7626;
}


//// FUNCTION FUN_00a09950 @ 00a09950 ////

void FUN_00a09950(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  wchar_t local_200 [256];
  
  if (DAT_010b7624 != '\0') {
    FUN_004036d0(&PTR_DAT_00e68984,(wchar_t *)PTR_DAT_00e689a4,DAT_00e689a8);
    DAT_010b762c = 1;
    _wcscpy(local_200,(wchar_t *)PTR_DAT_00e689a4);
    uVar3 = 0;
    iVar1 = FUN_00ace02d(local_200);
    if (iVar1 != 0) {
      do {
        if (DAT_010b7624 != '\0') {
          DAT_010b7626 = 0;
        }
        uVar3 = uVar3 + 1;
        uVar2 = FUN_00ace02d(local_200);
      } while (uVar3 < uVar2);
    }
  }
  return;
}


//// FUNCTION FUN_00a099d0 @ 00a099d0 ////

void __fastcall FUN_00a099d0(int param_1)

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


//// FUNCTION FUN_00a09a40 @ 00a09a40 ////

undefined4 * FUN_00a09a40(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a091b0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x23;
}


//// FUNCTION FUN_00a09a70 @ 00a09a70 ////

void FUN_00a09a70(void)

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
  puStack_8 = &LAB_00cf92f8;
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


//// FUNCTION FUN_00a09b30 @ 00a09b30 ////

void __thiscall FUN_00a09b30(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_a0 [35];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf9310;
  local_10 = ExceptionList;
  puVar1 = local_a0;
  for (iVar4 = 0x23; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  iVar4 = *(int *)((int)this + 4);
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar4) / 0x8c;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffff54;
    if (0x1d41d41U - iVar4 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffff54;
      FUN_00a09a70();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
    }
    if (uVar5 < iVar4 + param_2) {
      if (0x1d41d41 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
      }
      if (uVar5 < iVar4 + param_2) {
        iVar4 = FUN_00a083c0((int)this);
        uVar5 = iVar4 + param_2;
      }
      puVar1 = operator_new(uVar5 * 0x8c);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_00a089d0(*(undefined4 **)((int)this + 4),param_1,puVar1);
      FUN_00a091b0(puVar2,param_2,local_a0);
      FUN_00a089d0(param_1,*(undefined4 **)((int)this + 8),puVar2 + param_2 * 0x23);
      iVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x8c;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar1 + uVar5 * 0x23;
      *(undefined4 **)((int)this + 8) = puVar1 + (param_2 + iVar4) * 0x23;
      *(undefined4 **)((int)this + 4) = puVar1;
      ExceptionList = local_10;
      return;
    }
    puVar1 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar1 - (int)param_1) / 0x8c) < param_2) {
      FUN_00a089d0(param_1,puVar1,param_1 + param_2 * 0x23);
      local_8 = 2;
      FUN_00a09a40(*(undefined4 **)((int)this + 8),
                   param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x8c,local_a0);
      iVar4 = *(int *)((int)this + 8) + param_2 * 0x8c;
      *(int *)((int)this + 8) = iVar4;
      FUN_00a08500(param_1,(undefined4 *)(iVar4 + param_2 * -0x8c),local_a0);
      ExceptionList = local_10;
      return;
    }
    uVar3 = FUN_00a089d0(puVar1 + param_2 * -0x23,puVar1,puVar1);
    *(undefined4 *)((int)this + 8) = uVar3;
    FUN_00a087f0(param_1,puVar1 + param_2 * -0x23,puVar1);
    FUN_00a08500(param_1,param_1 + param_2 * 0x23,local_a0);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a09e30 @ 00a09e30 ////

void __thiscall FUN_00a09e30(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x8c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x8c;
      goto LAB_00a09e79;
    }
  }
  iVar1 = 0;
LAB_00a09e79:
  FUN_00a09b30(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x8c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00a09ea0 @ 00a09ea0 ////

void __thiscall FUN_00a09ea0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x8c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x8c))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00a091b0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 0x23;
    return;
  }
  FUN_00a09e30(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a09f30 @ 00a09f30 ////

void FUN_00a09f30(void)

{
  ushort uVar1;
  uint nBuff;
  HKL *lpList;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  HKL *ppHVar6;
  undefined4 *puVar7;
  wchar_t *_Source;
  uint local_1a4;
  HKL pHStack_198;
  WCHAR WStack_194;
  wint_t wStack_192;
  undefined2 uStack_190;
  wchar_t awStack_18e [63];
  undefined2 uStack_110;
  WCHAR WStack_108;
  undefined4 auStack_106 [64];
  
  if (DAT_010b7624 != '\0') {
    while (DAT_010b8ae8 != (ushort *)0x0) {
      iVar2 = DAT_010b8aec - (int)DAT_010b8ae8 >> 0x1f;
      iVar4 = (DAT_010b8aec - (int)DAT_010b8ae8) / 0x8c + iVar2;
      if (iVar4 == iVar2) break;
      if (iVar4 != iVar2) {
        DAT_010b8aec = DAT_010b8aec + -0x8c;
      }
    }
    nBuff = GetKeyboardLayoutList(0,(HKL *)0x0);
    lpList = operator_new(nBuff * 4);
    if (lpList != (HKL *)0x0) {
      GetKeyboardLayoutList(nBuff,lpList);
      local_1a4 = 0;
      ppHVar6 = lpList;
      if (nBuff == 0) {
LAB_00a0a186:
                    /* WARNING: Subroutine does not return */
        _free(lpList);
      }
      do {
        uVar1 = *(ushort *)ppHVar6 & 0x3ff;
        if ((((uVar1 != 4) && (uVar1 != 0x11)) && (uVar1 != 0x12)) ||
           (iVar2 = (*DAT_010b768c)(*ppHVar6), iVar2 != 0)) {
          iVar2 = 0;
          puVar5 = DAT_010b8ae8;
          while( true ) {
            if (DAT_010b8ae8 == (ushort *)0x0) {
              iVar4 = 0;
            }
            else {
              iVar4 = (DAT_010b8aec - (int)DAT_010b8ae8) / 0x8c;
            }
            if (iVar4 <= iVar2) break;
            if (*puVar5 == *(ushort *)ppHVar6) goto LAB_00a0a186;
            iVar2 = iVar2 + 1;
            puVar5 = puVar5 + 0x46;
          }
          pHStack_198 = *ppHVar6;
          WStack_108 = L'\0';
          puVar7 = auStack_106;
          for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          uVar1 = *(ushort *)ppHVar6;
          *(undefined2 *)puVar7 = 0;
          uVar3 = uVar1 & 0x3ff;
          if (uVar3 == 4) {
            if (uVar1 >> 10 == 1) {
              _Source = (wchar_t *)&DAT_00e6896c;
            }
            else {
              if (uVar1 >> 10 != 2) goto LAB_00a0a08e;
              _Source = (wchar_t *)&DAT_00e68966;
            }
LAB_00a0a103:
            _wcscpy(&WStack_194,_Source);
          }
          else {
            if (uVar3 == 0x11) {
              _Source = (wchar_t *)&DAT_00e68978;
              goto LAB_00a0a103;
            }
            if (uVar3 == 0x12) {
              _Source = (wchar_t *)&DAT_00e68972;
              goto LAB_00a0a103;
            }
LAB_00a0a08e:
            GetLocaleInfoW((uint)uVar1,3,&WStack_108,0x80);
            WStack_194 = WStack_108;
            wStack_192 = _towlower((wint_t)auStack_106[0]);
            uStack_190 = 0;
          }
          GetLocaleInfoW((uint)*(ushort *)ppHVar6,2,&WStack_108,0x80);
          _wcsncpy(awStack_18e,&WStack_108,0x40);
          uStack_110 = 0;
          FUN_00a09ea0(&DAT_010b8ae4,&pHStack_198);
        }
        local_1a4 = local_1a4 + 1;
        ppHVar6 = ppHVar6 + 1;
        if (nBuff <= local_1a4) {
                    /* WARNING: Subroutine does not return */
          _free(lpList);
        }
      } while( true );
    }
  }
  return;
}


//// FUNCTION FUN_00a0a1a0 @ 00a0a1a0 ////

undefined4 __cdecl FUN_00a0a1a0(undefined4 param_1)

{
  char *pcVar1;
  byte bVar2;
  UINT UVar3;
  undefined3 extraout_var;
  undefined4 uVar5;
  char *pcVar6;
  CHAR local_104 [10];
  char acStack_fa [250];
  uint uVar4;
  
  DAT_010b7628 = param_1;
  UVar3 = GetSystemDirectoryA(local_104,0x104);
  if (UVar3 == 0) {
    return 0;
  }
  pcVar1 = &stack0xfffffefb;
  do {
    pcVar6 = pcVar1;
    pcVar1 = pcVar6 + 1;
  } while (pcVar6[1] != '\0');
  builtin_strncpy(pcVar6 + 1,"\\imm32.dll",0xb);
  DAT_010b7620 = LoadLibraryA(local_104);
  uVar4 = 0;
  if (DAT_010b7620 != (HMODULE)0x0) {
    UVar3 = GetSystemDirectoryA(local_104,0x104);
    uVar4 = 0;
    if (UVar3 != 0) {
      pcVar1 = &stack0xfffffefb;
      do {
        pcVar6 = pcVar1;
        pcVar1 = pcVar6 + 1;
      } while (pcVar6[1] != '\0');
      builtin_strncpy(pcVar6 + 1,"\\version.dll",0xd);
      DAT_010b7618 = LoadLibraryA(local_104);
      uVar4 = 0;
      if (DAT_010b7618 != (HMODULE)0x0) {
        bVar2 = FUN_00a08060();
        uVar4 = CONCAT31(extraout_var,bVar2);
        if (bVar2 != 0) {
          DAT_010b7614 = (*DAT_010b765c)(DAT_010b7628);
          (*DAT_010b7660)(DAT_010b7628,DAT_010b7614);
          DAT_010b7624 = 1;
          FUN_00a09f30();
          FUN_00a08dc0();
          uVar5 = FUN_00a09210('\0');
          return CONCAT31((int3)((uint)uVar5 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00a0a2d0 @ 00a0a2d0 ////

undefined4 FUN_00a0a2d0(void)

{
  return DAT_010b8b00;
}


//// FUNCTION FUN_00a0a2e0 @ 00a0a2e0 ////

undefined4 * __fastcall FUN_00a0a2e0(undefined4 *param_1)

{
  FUN_00a95b30(param_1);
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_00d748c4;
  return param_1;
}


//// FUNCTION FUN_00a0a310 @ 00a0a310 ////

void FUN_00a0a310(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_010b8b00 != 0) {
    *(undefined4 *)(DAT_010b8b00 + 0x724) = 0;
    *(undefined4 *)(DAT_010b8b00 + 0x72c) = 0;
    *(undefined4 *)(DAT_010b8b00 + 0x728) = 0;
    iVar1 = 0;
    puVar3 = (undefined4 *)(DAT_010b8b00 + 0x41c);
    for (iVar2 = 0xc0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    do {
      *(undefined1 *)(DAT_010b8b00 + 0x730 + iVar1) = 0;
      *(undefined1 *)(DAT_010b8b00 + 0x7bf + iVar1) = 0;
      *(undefined1 *)(DAT_010b8b00 + 0x84e + iVar1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x8f);
    iVar1 = 0x910;
    do {
      *(undefined4 *)(iVar1 + -0x30 + DAT_010b8b00) = 0;
      *(undefined4 *)(iVar1 + DAT_010b8b00) = 0;
      iVar1 = iVar1 + 4;
    } while (iVar1 < 0x940);
  }
  return;
}


//// FUNCTION FUN_00a0a3b0 @ 00a0a3b0 ////

void __fastcall FUN_00a0a3b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d748c4;
  FUN_00a96350(param_1);
  return;
}


//// FUNCTION FUN_00a0a3c0 @ 00a0a3c0 ////

undefined1 __thiscall FUN_00a0a3c0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 0x8f)) {
    return *(undefined1 *)(param_1 + 0x730 + (int)this);
  }
  return 0;
}


//// FUNCTION FUN_00a0a3e0 @ 00a0a3e0 ////

uint __thiscall FUN_00a0a3e0(void *this,uint param_1)

{
  if ((-1 < (int)param_1) && ((int)param_1 < 0x8f)) {
    return *(byte *)(param_1 + 0x84e + (int)this) & 1;
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_00a0a410 @ 00a0a410 ////

uint __thiscall FUN_00a0a410(void *this,int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if ((-1 < param_1) && (param_1 < 0x8f)) {
    return CONCAT31(uVar1,*(byte *)(param_1 + 0x84e + (int)this) >> 1) & 0xffffff01;
  }
  return (uint)uVar1 << 8;
}


//// FUNCTION FUN_00a0a470 @ 00a0a470 ////

uint __thiscall FUN_00a0a470(void *this,int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if ((-1 < param_1) && (param_1 < 0x8f)) {
    return CONCAT31(uVar1,*(byte *)(param_1 + 0x84e + (int)this) >> 3) & 0xffffff01;
  }
  return (uint)uVar1 << 8;
}


//// FUNCTION FUN_00a0a4e0 @ 00a0a4e0 ////

uint __thiscall FUN_00a0a4e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x71c) == *(int *)((int)this + 0x720)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return (uint)param_1 & 0xffffff00;
  }
  puVar1 = (undefined4 *)((int)this + *(int *)((int)this + 0x71c) * 0xc + 0x41c);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  iVar2 = *(int *)((int)this + 0x71c) + 1;
  *(int *)((int)this + 0x71c) = iVar2;
  if (0x3f < iVar2) {
    *(undefined4 *)((int)this + 0x71c) = 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00a0a550 @ 00a0a550 ////

void __fastcall FUN_00a0a550(int *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  param_1[0x1ca] = (int)uVar1;
  FUN_00a96130(param_1);
  return;
}


//// FUNCTION FUN_00a0a570 @ 00a0a570 ////

void __fastcall FUN_00a0a570(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x724) != 0) {
    uVar5 = FUN_00990ae0(param_1,param_2);
    if (DAT_00e689c4 < (uint)((int)uVar5 - *(int *)(param_1 + 0x72c))) {
      iVar2 = *(int *)(param_1 + 0x724) + param_1;
      if (((*(byte *)(*(int *)(param_1 + 0x724) + 0x7bf + param_1) & 0xf7) == 0) &&
         (*(char *)(iVar2 + 0x730) == '\0')) {
        pbVar1 = (byte *)(iVar2 + 0x7bf);
        *pbVar1 = *pbVar1 | 4;
      }
      *(undefined4 *)(param_1 + 0x724) = 0;
      *(undefined4 *)(param_1 + 0x72c) = 0;
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x7bf);
  puVar4 = (undefined1 *)(param_1 + 0x84e);
  for (iVar2 = 0x8f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x7bf);
  for (iVar2 = 0x23; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  return;
}


//// FUNCTION FUN_00a0a650 @ 00a0a650 ////

void __thiscall FUN_00a0a650(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + *(int *)((int)this + 0x720) * 0xc + 0x41c);
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  iVar2 = *(int *)((int)this + 0x720) + 1;
  *(int *)((int)this + 0x720) = iVar2;
  if (0x3f < iVar2) {
    *(undefined4 *)((int)this + 0x720) = 0;
  }
  if ((*(int *)((int)this + 0x720) == *(int *)((int)this + 0x71c)) &&
     (iVar2 = *(int *)((int)this + 0x71c) + 1, *(int *)((int)this + 0x71c) = iVar2, 0x3f < iVar2)) {
    *(undefined4 *)((int)this + 0x71c) = 0;
  }
  return;
}


//// FUNCTION FUN_00a0a6e0 @ 00a0a6e0 ////

void FUN_00a0a6e0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf932b;
  local_c = ExceptionList;
  if (DAT_010b8b00 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x940);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_00a95b30(puVar1);
      *puVar1 = &PTR_FUN_00d748c4;
      puVar1[0x1c7] = 0;
      puVar1[0x1c8] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
    }
    local_4 = 0xffffffff;
    DAT_010b8b00 = puVar1;
    FUN_00a0a310();
    FUN_00a95f90((int)DAT_010b8b00);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0a770 @ 00a0a770 ////

undefined4 * __thiscall FUN_00a0a770(void *this,byte param_1)

{
  FUN_00a0a3b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0a790 @ 00a0a790 ////

void __thiscall FUN_00a0a790(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  int extraout_ECX;
  byte bVar2;
  undefined4 local_c;
  int local_8;
  uint local_4;
  
  local_4 = (uint)param_2;
  local_c = 1;
  local_8 = param_1;
  FUN_00a0a650(this,&local_c);
  if (param_1 < 1) {
    return;
  }
  if (0x8e < param_1) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x7bf + extraout_ECX);
  if (param_2 == 0) {
    *pbVar1 = *pbVar1 | 2;
  }
  else {
    *pbVar1 = *pbVar1 | 1;
  }
  *(byte *)(param_1 + 0x730 + extraout_ECX) = param_2;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(extraout_ECX + 0x724) == 0) {
    *(int *)(extraout_ECX + 0x724) = param_1;
    *(undefined4 *)(extraout_ECX + 0x72c) = *(undefined4 *)(extraout_ECX + 0x728);
    return;
  }
  if (param_1 == *(int *)(extraout_ECX + 0x724)) {
    if (DAT_00e689c4 < (uint)(*(int *)(extraout_ECX + 0x728) - *(int *)(extraout_ECX + 0x72c)))
    goto LAB_00a0a846;
    bVar2 = *pbVar1 & 0xfb | 8;
  }
  else {
    if ((*pbVar1 & 0xf7) != 0) goto LAB_00a0a846;
    bVar2 = *pbVar1 | 4;
  }
  *pbVar1 = bVar2;
LAB_00a0a846:
  *(undefined4 *)(extraout_ECX + 0x72c) = 0;
  *(undefined4 *)(extraout_ECX + 0x724) = 0;
  return;
}


//// FUNCTION FUN_00a0a860 @ 00a0a860 ////

void __thiscall FUN_00a0a860(void *this,int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  local_c = 2;
  local_8 = param_1;
  local_4 = param_2;
  FUN_00a0a650(this,&local_c);
  if ((0 < param_1) && (param_1 < 0xc)) {
    *(undefined4 *)(extraout_ECX + 0x8e0 + param_1 * 4) = param_2;
  }
  return;
}


//// FUNCTION FUN_00a0a920 @ 00a0a920 ////

void __thiscall FUN_00a0a920(void *this,undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 3;
  local_8 = 0;
  local_4 = param_1;
  FUN_00a0a650(this,&local_c);
  return;
}


//// FUNCTION FUN_00a0a950 @ 00a0a950 ////

void __thiscall FUN_00a0a950(void *this,undefined4 param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 4;
  local_8 = param_1;
  local_4 = 0;
  FUN_00a0a650(this,&local_c);
  return;
}


//// FUNCTION FUN_00a0a980 @ 00a0a980 ////

void FUN_00a0a980(void)

{
  undefined4 *_Memory;
  
  _Memory = DAT_010b8b00;
  if (DAT_010b8b00 != (undefined4 *)0x0) {
    FUN_00a0a3b0(DAT_010b8b00);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_010b8b00 = (undefined4 *)0x0;
  DAT_010b8b04 = 1;
  return;
}


//// FUNCTION FUN_00a0a9b0 @ 00a0a9b0 ////

void __thiscall FUN_00a0a9b0(void *this,undefined4 param_1)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)((int)this + 0x4c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x4c))(1);
    *(undefined4 *)((int)this + 0x4c) = unaff_retaddr;
    return;
  }
  *(undefined4 *)((int)this + 0x4c) = param_1;
  return;
}


//// FUNCTION FUN_00a0aa90 @ 00a0aa90 ////

int __fastcall FUN_00a0aa90(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x50;
}


//// FUNCTION FUN_00a0ac50 @ 00a0ac50 ////

void __cdecl FUN_00a0ac50(int param_1)

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


//// FUNCTION FUN_00a0ac70 @ 00a0ac70 ////

void __cdecl FUN_00a0ac70(int *param_1)

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


//// FUNCTION FUN_00a0aca0 @ 00a0aca0 ////

void __fastcall FUN_00a0aca0(int *param_1)

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


//// FUNCTION FUN_00a0ad00 @ 00a0ad00 ////

void __fastcall FUN_00a0ad00(int *param_1)

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


//// FUNCTION FUN_00a0adf0 @ 00a0adf0 ////

void __fastcall FUN_00a0adf0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00a0ae70 @ 00a0ae70 ////

undefined4 * __thiscall FUN_00a0ae70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00a0af00 @ 00a0af00 ////

void __fastcall FUN_00a0af00(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  if (0x14 < *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00a0af40 @ 00a0af40 ////

void __thiscall FUN_00a0af40(void *this,int param_1)

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


//// FUNCTION FUN_00a0afa0 @ 00a0afa0 ////

void __thiscall FUN_00a0afa0(void *this,int *param_1)

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


//// FUNCTION FUN_00a0b000 @ 00a0b000 ////

int * __fastcall FUN_00a0b000(int *param_1)

{
  FUN_00a0ad00(param_1);
  return param_1;
}


//// FUNCTION FUN_00a0b010 @ 00a0b010 ////

int * __fastcall FUN_00a0b010(int *param_1)

{
  FUN_00a0aca0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a0b050 @ 00a0b050 ////

undefined4 * __thiscall FUN_00a0b050(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00a0b0b0 @ 00a0b0b0 ////

void __fastcall FUN_00a0b0b0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00a0b0d0 @ 00a0b0d0 ////

void * __thiscall FUN_00a0b0d0(void *this,byte param_1)

{
  FUN_00a0af00((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0b0f0 @ 00a0b0f0 ////

undefined4 * __fastcall FUN_00a0b0f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char *local_54;
  undefined4 local_50;
  uint local_4c;
  char local_48 [20];
  undefined4 local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf935b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009d3b00(param_1 + 1);
  param_1[0x13] = 0;
  *param_1 = 0;
  local_54 = local_48;
  local_4 = 0;
  DAT_010b8b08 = param_1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  local_48[0] = '\0';
  local_50 = 0;
  local_4c = 0x20;
  local_54 = _malloc(0x20);
  _strncpy(local_54,"c:\\movies\\dev\\build\\errors.sav",0x1e);
  local_50 = 0x1e;
  local_54[0x1e] = '\0';
  local_4._0_1_ = 1;
  FUN_009d3b30(local_34,&local_54);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  bVar2 = FUN_009d3c80(local_34,0);
  puVar1 = param_1 + 0xc;
  if (bVar2) {
    FUN_009d3500(local_34,puVar1,0x18);
  }
  else {
    *puVar1 = 1;
    param_1[0xe] = 0;
    param_1[0x10] = 300;
    param_1[0xd] = 0;
    param_1[0xf] = 500;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  *puVar1 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_009d3750(local_34);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00a0b210 @ 00a0b210 ////

void FUN_00a0b210(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf937b;
  local_c = ExceptionList;
  if (DAT_010b8b08 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x50);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      DAT_010b8b08 = (undefined4 *)0x0;
    }
    else {
      DAT_010b8b08 = FUN_00a0b0f0(puVar1);
    }
  }
  if (DAT_010b9314 != '\0') {
    DAT_010b9314 = '\0';
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0b2c0 @ 00a0b2c0 ////

int * __fastcall FUN_00a0b2c0(int *param_1)

{
  FUN_00a0ad00(param_1);
  return param_1;
}


//// FUNCTION FUN_00a0b2d0 @ 00a0b2d0 ////

int * __fastcall FUN_00a0b2d0(int *param_1)

{
  FUN_00a0aca0(param_1);
  return param_1;
}


//// FUNCTION FUN_00a0b330 @ 00a0b330 ////

undefined4 * __thiscall
FUN_00a0b330(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00a0b390 @ 00a0b390 ////

void * __thiscall FUN_00a0b390(void *this,byte param_1)

{
  FUN_00a0b0b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0b3c0 @ 00a0b3c0 ////

void __fastcall FUN_00a0b3c0(int param_1)

{
  undefined4 *this;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *local_74;
  size_t local_70;
  uint local_6c;
  char local_68 [20];
  char local_54 [32];
  undefined4 local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf93b3;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    this = (undefined4 *)(param_1 + 4);
    ExceptionList = &pvStack_c;
    bVar2 = FUN_009d3c80(this,1);
    if (bVar2) {
      local_74 = local_68;
      local_68[0] = '\0';
      local_70 = 0;
      local_6c = 0x14;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004073f0(&local_74,"\r\n",2);
      __strdate(local_54);
      pcVar3 = local_54;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_74,local_54,(int)pcVar3 - (int)(local_54 + 1));
      FUN_004073f0(&local_74,", ",2);
      __strtime(local_54);
      pcVar3 = local_54;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004073f0(&local_74,local_54,(int)pcVar3 - (int)(local_54 + 1));
      FUN_004073f0(&local_74," - end\r\n",8);
      FUN_009d3530(this,local_74,local_70);
      FUN_009d34d0(this);
      if (0x14 < local_6c) {
                    /* WARNING: Subroutine does not return */
        _free(local_74);
      }
    }
  }
  local_74 = local_68;
  local_68[0] = '\0';
  local_70 = 0;
  local_6c = 0x14;
  _strncpy(local_74,"errors.sav",10);
  local_70 = 10;
  local_74[10] = '\0';
  local_4._0_1_ = 2;
  FUN_009d3b30(local_34,&local_74);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (local_6c < 0x15) {
    bVar2 = FUN_009d3c80(local_34,2);
    if (bVar2) {
      FUN_009d3530(local_34,(void *)(param_1 + 0x30),0x18);
    }
    if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x4c))(1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    local_4 = local_4 & 0xffffff00;
    FUN_009d3750(local_34);
    local_4 = 0xffffffff;
    FUN_009d3750((undefined4 *)(param_1 + 4));
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_74);
}


//// FUNCTION FUN_00a0b5b0 @ 00a0b5b0 ////

void __fastcall FUN_00a0b5b0(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 *this;
  char *local_4c;
  size_t local_48;
  uint local_44;
  char local_40 [20];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf93d0;
  local_c = ExceptionList;
  local_4c = local_40;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"errors.log",10);
  local_48 = 10;
  local_4c[10] = '\0';
  this = (undefined4 *)(param_1 + 4);
  local_4 = 0;
  FUN_009d3b70(this,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  bVar2 = FUN_009d3c80(this,2);
  if (bVar2) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    local_4 = 1;
    FUN_004073f0(&local_4c,
                 "\r\n\r\n================================================================================\r\n"
                 ,0x56);
    __strdate(local_2c);
    pcVar3 = local_2c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,local_2c,(int)pcVar3 - (int)(local_2c + 1));
    FUN_004073f0(&local_4c,", ",2);
    __strtime(local_2c);
    pcVar3 = local_2c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004073f0(&local_4c,local_2c,(int)pcVar3 - (int)(local_2c + 1));
    FUN_004073f0(&local_4c," - begin\r\n\r\n",0xc);
    FUN_009d3530(this,local_4c,local_48);
    FUN_009d34d0(this);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  else {
    s___AVCInputManager_MV___00e689f4[0x17] = '\0';
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0b750 @ 00a0b750 ////

void __thiscall
FUN_00a0b750(void *this,char *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *this_00;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  size_t sVar4;
  void *this_01;
  CHAR *local_6c;
  size_t local_68;
  uint local_64;
  CHAR local_60 [20];
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf93e8;
  local_c = ExceptionList;
  if ((DAT_010b9324 == '\0') && (s___AVCInputManager_MV___00e689f4[0x17] != '\0')) {
    local_6c = local_60;
    DAT_010b9324 = 1;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    local_4 = 0;
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_004073f0(&local_6c,param_1,(int)pcVar3 - (int)(param_1 + 1));
    FUN_004073f0(&local_6c,"(",1);
    sVar4 = _sprintf(local_4c,(char *)&param_2_00d1b93c,param_2);
    FUN_004073f0(&local_6c,local_4c,sVar4);
    FUN_004073f0(&local_6c,"): ",3);
    if (*(int *)this != 0) {
      FUN_004073f0(&local_6c,"[",1);
      this_01 = FUN_006d9b00(&local_6c,*(undefined4 *)this);
      FUN_004073f0(this_01,"] ",2);
    }
    if (param_4 < 2) {
      pcVar3 = "  ";
    }
    else {
      pcVar3 = "! ";
    }
    FUN_004073f0(&local_6c,pcVar3,2);
    FUN_004073f0(&local_6c,(char *)*param_3,param_3[1]);
    if ((*(char *)((int)this + 0x2c) != '\0') && (0 < param_4)) {
      this_00 = (undefined4 *)((int)this + 4);
      bVar2 = FUN_009d3c80(this_00,1);
      if (bVar2) {
        FUN_009d3530(this_00,local_6c,local_68);
        FUN_009d3530(this_00,&lpOutputString_00d208ec,2);
        FUN_009d34d0(this_00);
      }
    }
    if (*(int *)((int)this + 0x30) <= param_4) {
      OutputDebugStringA(local_6c);
      OutputDebugStringA("\r\n");
    }
    DAT_010b9324 = '\0';
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0b950 @ 00a0b950 ////

void * __thiscall FUN_00a0b950(void *this,byte param_1)

{
  FUN_00a0b3c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0b970 @ 00a0b970 ////

undefined4 * __thiscall FUN_00a0b970(void *this,undefined4 *param_1)

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
LAB_00a0b9b4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00a0b9b9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00a0b9b4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00a0b9b9:
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


//// FUNCTION FUN_00a0b9f0 @ 00a0b9f0 ////

void FUN_00a0b9f0(void)

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


//// FUNCTION FUN_00a0ba30 @ 00a0ba30 ////

void * FUN_00a0ba30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00a0b330(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00a0bae0 @ 00a0bae0 ////

void __fastcall FUN_00a0bae0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a0b9f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00a0bbb0 @ 00a0bbb0 ////

int __fastcall FUN_00a0bbb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a0b9f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a0bbe0 @ 00a0bbe0 ////

void FUN_00a0bbe0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00a0bbe0(*(void **)((int)param_1 + 8));
    FUN_00a0b0b0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00a0bc50 @ 00a0bc50 ////

void __fastcall FUN_00a0bc50(int param_1)

{
  FUN_00a0bbe0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00a0bc80 @ 00a0bc80 ////

void FUN_00a0bc80(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x50) {
    FUN_00a0af00(param_1);
  }
  return;
}


//// FUNCTION FUN_00a0bcf0 @ 00a0bcf0 ////

void __fastcall FUN_00a0bcf0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_00a0af00(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a0bd40 @ 00a0bd40 ////

void __thiscall
FUN_00a0bd40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf9408;
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
  piVar3 = FUN_00a0ba30(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00a0be3b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00a0af40(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00a0afa0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00a0be3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00a0afa0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00a0af40(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00a0bef0 @ 00a0bef0 ////

void __thiscall FUN_00a0bef0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf9428;
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
  FUN_00a0ad00((int *)&param_2);
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
      goto LAB_00a0c061;
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
      piVar2 = (int *)FUN_00a0ac70(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00a0ac50((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00a0c061:
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
            FUN_00a0af40(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00a0afa0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00a0af40(this,(int)piVar5);
              break;
            }
LAB_00a0c124:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00a0afa0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00a0c124;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00a0af40(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00a0afa0(this,piVar5);
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


//// FUNCTION FUN_00a0c1d0 @ 00a0c1d0 ////

void __thiscall FUN_00a0c1d0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00a0c234:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00a0c239;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00a0c234;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00a0c239:
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
      puVar5 = (undefined4 *)FUN_00a0bd40(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00a0aca0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00a0bd40(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00a0c2f0 @ 00a0c2f0 ////

void __thiscall FUN_00a0c2f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00a0bbe0((void *)piVar6[1]);
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
    FUN_00a0bef0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00a0c3b0 @ 00a0c3b0 ////

void __fastcall FUN_00a0c3b0(int param_1)

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
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_00a0af00(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00a0c3c0 @ 00a0c3c0 ////

undefined4 * __thiscall FUN_00a0c3c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00a0bd40(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00a0bd40(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00a0bd40(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a0aca0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_00a0bd40(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00a0bd40(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00a0ad00((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00a0c542;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_00a0bd40(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00a0bd40(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00a0c542:
  puVar4 = (undefined4 *)FUN_00a0c1d0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00a0c5a0 @ 00a0c5a0 ////

int * __thiscall FUN_00a0c5a0(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00cf9448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00a0b970(this,param_1);
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
  piVar2 = FUN_00a0c3c0(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_00a0c6a0 @ 00a0c6a0 ////

void __fastcall FUN_00a0c6a0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00a0c2f0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00a0c6d0 @ 00a0c6d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00a0c6d0(void *this,char *param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  byte *pbVar9;
  undefined1 uVar10;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  undefined4 *local_128;
  undefined4 *local_124;
  byte *local_120;
  size_t local_11c;
  uint local_118;
  byte local_114 [20];
  CHAR *local_100;
  undefined4 local_fc;
  uint local_f8;
  CHAR local_f4 [52];
  char *local_c0;
  uint local_bc;
  uint local_b8;
  char local_b4 [20];
  undefined1 local_a0 [4];
  int iStack_9c;
  int iStack_98;
  char acStack_8c [64];
  char acStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf948c;
  local_c = ExceptionList;
  local_120 = local_114;
  local_114[0] = 0;
  local_11c = 0;
  local_118 = 0x14;
  local_4 = 0;
  pcVar4 = param_1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  ExceptionList = &local_c;
  local_128 = this;
  FUN_004073f0(&local_120,param_1,(int)pcVar4 - (int)(param_1 + 1));
  FUN_004073f0(&local_120,"(",1);
  sVar5 = _sprintf((char *)&local_100,(char *)&param_2_00d1b93c,param_2);
  FUN_004073f0(&local_120,(char *)&local_100,sVar5);
  FUN_004073f0(&local_120,")",1);
  local_c0 = local_b4;
  local_b4[0] = '\0';
  local_bc = 0;
  local_b8 = 0x14;
  local_4._0_1_ = 1;
  FUN_004073f0(&local_c0,"Location:\t",10);
  FUN_004073f0(&local_c0,(char *)local_120,local_11c);
  FUN_004073f0(&local_c0,": ",2);
  local_124 = FUN_00a0b970(&DAT_010b9318,&local_120);
  if (local_124 != DAT_010b931c) {
    pbVar11 = (byte *)local_124[3];
    pbVar9 = local_120;
    do {
      bVar2 = *pbVar9;
      bVar13 = bVar2 < *pbVar11;
      if (bVar2 != *pbVar11) {
LAB_00a0c834:
        iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_00a0c839;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar9[1];
      bVar13 = bVar2 < pbVar11[1];
      if (bVar2 != pbVar11[1]) goto LAB_00a0c834;
      pbVar9 = pbVar9 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00a0c839:
    this = local_128;
    if (-1 < iVar6) {
      ppuVar7 = &local_124;
      goto LAB_00a0c84f;
    }
  }
  local_128 = DAT_010b931c;
  ppuVar7 = &local_128;
LAB_00a0c84f:
  if ((((param_4 == '\0') && (*ppuVar7 != DAT_010b931c)) && ((*ppuVar7)[0xb] == 1)) ||
     (_DAT_010b9310 != 0.0)) {
    if (*(char *)((int)this + 0x2d) != '\0') {
      FUN_00a0b750(this,param_1,param_2,param_3,2);
    }
    uVar10 = 0;
  }
  else {
    FUN_00a0b750(this,param_1,param_2,param_3,2);
    if (DAT_0105be92 != '\0') {
      ShowWindow(DAT_0105beb0,7);
    }
    local_100 = local_f4;
    iVar6 = 0;
    local_f4[0] = '\0';
    local_fc = 0;
    local_f8 = 0x14;
    FUN_004015d0(&local_100,local_c0,local_bc);
    local_4._0_1_ = 2;
    FUN_004073f0(&local_100,"\n\n",2);
    FUN_004073f0(&local_100,(char *)*param_3,param_3[1]);
    if (*(int *)((int)this + 0x4c) != 0) {
      FUN_00a0e880((int)local_a0);
      local_4 = CONCAT31(local_4._1_3_,3);
      cVar3 = (**(code **)(**(int **)((int)this + 0x4c) + 0xc))(local_a0,3,0x10,1);
      if (cVar3 != '\0') {
        FUN_004073f0(&local_100,
                     "\n\n--------------------------------------------------------------------------------\n\nCallStack:\n"
                     ,0x5f);
        for (uVar12 = 0; (iStack_9c != 0 && (uVar12 < (uint)((iStack_98 - iStack_9c) / 0x50)));
            uVar12 = uVar12 + 1) {
          iVar1 = iStack_9c + iVar6;
          FUN_004073f0(&local_100,"\n\t",2);
          sVar5 = _sprintf(acStack_8c,(char *)&param_2_00d1b93c,uVar12);
          FUN_004073f0(&local_100,acStack_8c,sVar5);
          FUN_004073f0(&local_100," ",1);
          FUN_004073f0(&local_100,*(char **)(iVar1 + 8),*(size_t *)(iVar1 + 0xc));
          FUN_004073f0(&local_100," : ",3);
          FUN_004073f0(&local_100,*(char **)(iVar1 + 0x28),*(size_t *)(iVar1 + 0x2c));
          FUN_004073f0(&local_100,"(",1);
          sVar5 = _sprintf(acStack_4c,(char *)&param_2_00d1b93c,*(undefined4 *)(iVar1 + 0x48));
          FUN_004073f0(&local_100,acStack_4c,sVar5);
          FUN_004073f0(&local_100,")",1);
          iVar6 = iVar6 + 0x50;
        }
        FUN_004073f0(&local_100,"\n",1);
      }
      local_4._0_1_ = 2;
      FUN_00a0bcf0((int)local_a0);
    }
    iVar6 = MessageBoxA((HWND)0x0,local_100,"Error",
                        (-(uint)(param_4 != '\0') & 0xfffffefe) + 0x10112);
    switch(iVar6) {
    default:
      uVar10 = 1;
      break;
    case 5:
      piVar8 = FUN_00a0c5a0(&DAT_010b9318,&local_120);
      *piVar8 = 1;
    case 4:
      uVar10 = 0;
    }
    if (0x14 < local_f8) {
                    /* WARNING: Subroutine does not return */
      _free(local_100);
    }
  }
  if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  if (0x14 < local_118) {
                    /* WARNING: Subroutine does not return */
    _free(local_120);
  }
  ExceptionList = local_c;
  return uVar10;
}


//// FUNCTION FUN_00a0cb60 @ 00a0cb60 ////

int __fastcall FUN_00a0cb60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a0b9f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00a0cb90 @ 00a0cb90 ////

void __fastcall FUN_00a0cb90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d74a24;
  return;
}


//// FUNCTION FUN_00a0cc30 @ 00a0cc30 ////

undefined4 FUN_00a0cc30(void)

{
  int unaff_EBP;
  
  return *(undefined4 *)(unaff_EBP + 4);
}


//// FUNCTION FUN_00a0cc40 @ 00a0cc40 ////

int __fastcall FUN_00a0cc40(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
}


//// FUNCTION FUN_00a0ce70 @ 00a0ce70 ////

undefined4 FUN_00a0ce70(void)

{
  HMODULE pHVar1;
  
  if (DAT_010b9330 != (HMODULE)0x0) {
    DAT_010b932c = DAT_010b932c + 1;
    pHVar1 = DAT_010b9330;
LAB_00a0ce7f:
    return CONCAT31((int3)((uint)pHVar1 >> 8),1);
  }
  DAT_010b9330 = LoadLibraryA("imagehlp.dll");
  pHVar1 = (HMODULE)0x0;
  if (DAT_010b9330 != (HMODULE)0x0) {
    DAT_010b932c = DAT_010b932c + 1;
    DAT_010b9334 = GetProcAddress(DAT_010b9330,"SymInitialize");
    DAT_010b9338 = GetProcAddress(DAT_010b9330,"SymSetOptions");
    DAT_010b9340 = GetProcAddress(DAT_010b9330,"SymGetModuleBase64");
    DAT_010b9344 = GetProcAddress(DAT_010b9330,"SymFromAddr");
    DAT_010b9348 = GetProcAddress(DAT_010b9330,"StackWalk64");
    pHVar1 = (HMODULE)GetProcAddress(DAT_010b9330,"SymGetLineFromAddr64");
    DAT_010b934c = pHVar1;
    if ((((DAT_010b9334 != (FARPROC)0x0) && (DAT_010b9338 != (FARPROC)0x0)) &&
        (DAT_010b9340 != (FARPROC)0x0)) &&
       (((DAT_010b9344 != (FARPROC)0x0 && (DAT_010b9348 != (FARPROC)0x0)) &&
        (pHVar1 != (HMODULE)0x0)))) goto LAB_00a0ce7f;
    DAT_010b932c = DAT_010b932c + -1;
    if (DAT_010b932c == 0) {
      DAT_010b9330 = (HMODULE)0x0;
      DAT_010b9334 = (FARPROC)0x0;
      DAT_010b9338 = (FARPROC)0x0;
      pHVar1 = (HMODULE)FreeLibrary((HMODULE)0x0);
    }
  }
  return (uint)pHVar1 & 0xffffff00;
}


//// FUNCTION FUN_00a0cf90 @ 00a0cf90 ////

void __fastcall FUN_00a0cf90(undefined4 *param_1)

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


//// FUNCTION FUN_00a0d070 @ 00a0d070 ////

undefined4 * __thiscall FUN_00a0d070(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),(char *)param_1[2],param_1[3]);
  *(undefined4 *)((int)this + 0x28) = (undefined1 *)((int)this + 0x34);
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x28),(char *)param_1[10],param_1[0xb]);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return this;
}


//// FUNCTION FUN_00a0d0e0 @ 00a0d0e0 ////

undefined4 * __thiscall FUN_00a0d0e0(void *this,undefined4 *param_1)

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
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return this;
}


//// FUNCTION FUN_00a0d1c0 @ 00a0d1c0 ////

undefined4 * __thiscall FUN_00a0d1c0(void *this,byte param_1)

{
  FUN_00a0cf90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0d250 @ 00a0d250 ////

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00a0d250(void *this,int param_1,int param_2,void *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  DWORD dwMessageId;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  DWORD dwLanguageId;
  CHAR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  CHAR aCStack_7ec [4];
  undefined1 local_7e8 [8];
  undefined1 local_7e0 [3];
  undefined1 auStack_7dd [77];
  undefined4 local_790;
  char acStack_78c [1928];
  
  puVar6 = (undefined4 *)((int)local_7e0 + 1);
  for (iVar5 = 500; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  _local_7e0 = 4;
  local_790 = 1999;
  if (param_1 != 0 || param_2 != 0) {
    iVar5 = (*DAT_010b9344)(*(undefined4 *)((int)this + 0x18),param_1,param_2,local_7e8,local_7e0);
    if (iVar5 != 0) {
      pcVar2 = acStack_78c;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = FUN_004015d0(param_3,acStack_78c,(int)pcVar2 - (int)(acStack_78c + 1));
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = aCStack_7ec;
    dwLanguageId = 0;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  }
  uVar4 = FUN_004015d0(param_3,"",0);
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00a0d310 @ 00a0d310 ////

undefined4 __thiscall
FUN_00a0d310(void *this,int param_1,int param_2,void *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  DWORD dwMessageId;
  uint uVar4;
  DWORD dwLanguageId;
  CHAR *lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  CHAR aCStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_1;
  local_14 = 0;
  local_10 = 0;
  local_c = (char *)0x0;
  local_8 = 0;
  local_4 = 0;
  local_18 = 0x18;
  if (param_1 != 0 || param_2 != 0) {
    param_1 = 0;
    iVar2 = (*DAT_010b934c)(*(undefined4 *)((int)this + 0x18),iVar2,param_2,&param_1,&local_18);
    if (iVar2 != 0) {
      pcVar3 = local_c;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004015d0(param_3,local_c,(int)pcVar3 - (int)(local_c + 1));
      *param_4 = local_10;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = aCStack_1c;
    dwLanguageId = 0;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  }
  uVar4 = FUN_004015d0(param_3,"",0);
  *param_4 = 0;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00a0d490 @ 00a0d490 ////

void __cdecl FUN_00a0d490(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 0xb;
    puVar6 = param_3 + 4;
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      pcVar1 = (char *)puVar5[-9];
      uVar2 = puVar5[-8];
      if (*puVar6 <= uVar2) {
        if (0x14 < *puVar6) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-2]);
        }
        uVar3 = uVar2 + 0x20 & 0xffffffe0;
        *puVar6 = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar6[-2] = (uint)pvVar4;
      }
      _strncpy((char *)puVar6[-2],pcVar1,uVar2);
      puVar6[-1] = uVar2;
      *(undefined1 *)(uVar2 + puVar6[-2]) = 0;
      uVar2 = *puVar5;
      pcVar1 = (char *)puVar5[-1];
      if (puVar6[8] <= uVar2) {
        if (0x14 < puVar6[8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[6]);
        }
        uVar3 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[8] = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar6[6] = (uint)pvVar4;
      }
      _strncpy((char *)puVar6[6],pcVar1,uVar2);
      puVar6[7] = uVar2;
      *(undefined1 *)(uVar2 + puVar6[6]) = 0;
      param_3 = param_3 + 0x14;
      puVar6[0xe] = puVar5[7];
      param_1 = param_1 + 0x14;
      puVar6 = puVar6 + 0x14;
      puVar5 = puVar5 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a0d5a0 @ 00a0d5a0 ////

void __cdecl FUN_00a0d5a0(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != param_2) {
    puVar6 = param_3 + 4;
    puVar8 = (uint *)(param_2 + 0x2c);
    do {
      iVar5 = param_2 + -0x50;
      param_3[-0x14] = *(undefined4 *)(param_2 + -0x50);
      param_3[-0x13] = *(undefined4 *)(param_2 + -0x4c);
      uVar1 = puVar8[-0x1c];
      pcVar2 = (char *)puVar8[-0x1d];
      puVar7 = puVar6 + -0x14;
      if (*puVar7 <= uVar1) {
        if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-0x16]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        *puVar7 = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar6[-0x16] = (uint)pvVar4;
      }
      _strncpy((char *)puVar6[-0x16],pcVar2,uVar1);
      puVar6[-0x15] = uVar1;
      *(undefined1 *)(uVar1 + puVar6[-0x16]) = 0;
      uVar1 = puVar8[-0x14];
      pcVar2 = (char *)puVar8[-0x15];
      if (puVar6[-0xc] <= uVar1) {
        if (0x14 < puVar6[-0xc]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar6[-0xe]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        puVar6[-0xc] = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar6[-0xe] = (uint)pvVar4;
      }
      _strncpy((char *)puVar6[-0xe],pcVar2,uVar1);
      puVar6[-0xd] = uVar1;
      *(undefined1 *)(uVar1 + puVar6[-0xe]) = 0;
      puVar6[-6] = puVar8[-0xd];
      param_3 = param_3 + -0x14;
      param_2 = iVar5;
      puVar6 = puVar7;
      puVar8 = puVar8 + -0x14;
    } while (iVar5 != param_1);
  }
  return;
}


//// FUNCTION FUN_00a0d6a0 @ 00a0d6a0 ////

int * __cdecl FUN_00a0d6a0(int param_1,int param_2,int *param_3)

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
  puVar6 = (uint *)(param_3 + 10);
  do {
    pcVar1 = *(char **)(param_2 + -0x48);
    uVar2 = *(uint *)(param_2 + -0x44);
    iVar8 = param_2 + -0x48;
    puVar7 = puVar6 + -0x12;
    param_3 = param_3 + -0x12;
    if (puVar6[-0x1a] <= uVar2) {
      if (0x14 < puVar6[-0x1a]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-0x1a] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-0x1b] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    uVar2 = *(uint *)(param_2 + -0x24);
    pcVar1 = *(char **)(param_2 + -0x28);
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
    puVar6[-0xc] = *(uint *)(param_2 + -8);
    puVar6[-0xb] = *(uint *)(param_2 + -4);
    puVar6 = puVar7;
    param_2 = iVar8;
  } while (iVar8 != param_1);
  return param_3;
}


//// FUNCTION FUN_00a0d810 @ 00a0d810 ////

void __cdecl FUN_00a0d810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 4;
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      uVar1 = param_3[3];
      pcVar2 = (char *)param_3[2];
      if (*puVar5 <= uVar1) {
        if (0x14 < *puVar5) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[-2]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        *puVar5 = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar5[-2] = (uint)pvVar4;
      }
      _strncpy((char *)puVar5[-2],pcVar2,uVar1);
      puVar5[-1] = uVar1;
      *(undefined1 *)(uVar1 + puVar5[-2]) = 0;
      uVar1 = param_3[0xb];
      pcVar2 = (char *)param_3[10];
      if (puVar5[8] <= uVar1) {
        if (0x14 < puVar5[8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)puVar5[6]);
        }
        uVar3 = uVar1 + 0x20 & 0xffffffe0;
        puVar5[8] = uVar3;
        pvVar4 = _malloc(uVar3);
        puVar5[6] = (uint)pvVar4;
      }
      _strncpy((char *)puVar5[6],pcVar2,uVar1);
      puVar5[7] = uVar1;
      *(undefined1 *)(uVar1 + puVar5[6]) = 0;
      puVar5[0xe] = param_3[0x12];
      param_1 = param_1 + 0x14;
      puVar5 = puVar5 + 0x14;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a0d930 @ 00a0d930 ////

void __cdecl FUN_00a0d930(int *param_1,int *param_2,undefined4 *param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      pcVar1 = (char *)*param_3;
      uVar2 = param_3[1];
      if (puVar6[-8] <= uVar2) {
        if (0x14 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[-8] = uVar4;
        pvVar5 = _malloc(uVar4);
        *param_1 = (int)pvVar5;
      }
      _strncpy((char *)*param_1,pcVar1,uVar2);
      iVar3 = *param_1;
      puVar6[-9] = uVar2;
      *(undefined1 *)(uVar2 + iVar3) = 0;
      uVar2 = param_3[9];
      pcVar1 = (char *)param_3[8];
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
      puVar6[6] = param_3[0x10];
      puVar6[7] = param_3[0x11];
      param_1 = param_1 + 0x12;
      puVar6 = puVar6 + 0x12;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00a0da50 @ 00a0da50 ////

void * __cdecl FUN_00a0da50(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00a0d070(param_3,param_1);
    }
    param_1 = param_1 + 0x14;
    param_3 = (void *)((int)param_3 + 0x50);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00a0da90 @ 00a0da90 ////

void * __cdecl FUN_00a0da90(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00a0d0e0(param_3,param_1);
    }
    param_1 = param_1 + 0x12;
    param_3 = (void *)((int)param_3 + 0x48);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00a0dbf0 @ 00a0dbf0 ////

void __cdecl FUN_00a0dbf0(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_00a0d070(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x50);
  }
  return;
}


//// FUNCTION FUN_00a0dc20 @ 00a0dc20 ////

void __cdecl FUN_00a0dc20(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_00a0d0e0(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0x48);
  }
  return;
}


//// FUNCTION FUN_00a0ddb0 @ 00a0ddb0 ////

void * FUN_00a0ddb0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a0dbf0(param_1,param_2,param_3);
  return (void *)(param_2 * 0x50 + (int)param_1);
}


//// FUNCTION FUN_00a0dde0 @ 00a0dde0 ////

void * FUN_00a0dde0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00a0dc20(param_1,param_2,param_3);
  return (void *)((int)param_1 + param_2 * 0x48);
}


//// FUNCTION FUN_00a0de10 @ 00a0de10 ////

void FUN_00a0de10(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x12) {
    FUN_00a0cf90(param_1);
  }
  return;
}


//// FUNCTION FUN_00a0de40 @ 00a0de40 ////

void __thiscall FUN_00a0de40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00a0d490(param_2 + 0x14,*(undefined4 **)((int)this + 8),param_2);
  iVar1 = *(int *)((int)this + 8);
  for (iVar2 = iVar1 + -0x50; iVar2 != iVar1; iVar2 = iVar2 + 0x50) {
    FUN_00a0af00(iVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x50;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00a0dea0 @ 00a0dea0 ////

void FUN_00a0dea0(void)

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
  puStack_8 = &LAB_00cf94c8;
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


//// FUNCTION FUN_00a0df10 @ 00a0df10 ////

void FUN_00a0df10(void)

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
  puStack_8 = &LAB_00cf94e8;
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


//// FUNCTION FUN_00a0df80 @ 00a0df80 ////

undefined4 __thiscall FUN_00a0df80(void *this,int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar5;
  int iVar3;
  uint uVar4;
  int iVar6;
  uint local_10;
  undefined4 auStack_c [2];
  uint local_4;
  
  uVar5 = (undefined3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar5,*(char *)((int)this + 0x10));
  if (*(char *)((int)this + 0x10) != '\0') {
    return CONCAT31(uVar5,1);
  }
  iVar6 = 0;
  local_10 = 0;
  while (iVar3 = *(int *)((int)this + 4), iVar3 != 0) {
    uVar4 = (*(int *)((int)this + 8) - iVar3) / 0x50;
    if (uVar4 <= local_10) break;
    iVar1 = *(int *)(iVar6 + iVar3);
    uVar4 = *(uint *)(iVar6 + 4 + iVar3);
    if (iVar1 != 0 || uVar4 != 0) {
      local_4 = uVar4;
      cVar2 = (**(code **)(*param_1 + 0x10))(iVar1,uVar4,iVar6 + 8 + iVar3);
      if (cVar2 != '\0') {
        iVar3 = *(int *)((int)this + 4) + iVar6;
        uVar4 = (**(code **)(*param_1 + 0x14))(iVar1,local_4,iVar3 + 0x28,iVar3 + 0x48);
        if ((char)uVar4 != '\0') goto LAB_00a0e027;
      }
      uVar4 = FUN_00a0de40(this,auStack_c,(undefined4 *)(*(int *)((int)this + 4) + iVar6));
      local_10 = local_10 - 1;
      iVar6 = iVar6 + -0x50;
    }
LAB_00a0e027:
    local_10 = local_10 + 1;
    iVar6 = iVar6 + 0x50;
  }
  *(undefined1 *)((int)this + 0x10) = 1;
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_00a0e0a0 @ 00a0e0a0 ////

void __thiscall FUN_00a0e0a0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_6c [2];
  void *local_64;
  uint local_5c;
  void *local_44;
  uint local_3c;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf9508;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff88;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00a0d070(local_6c,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0x50;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x50;
    }
    if (0x3333333U - iVar2 < param_2) {
      FUN_00a0dea0();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x50;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x3333333 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x50;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_00a0aa90((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x50);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00a0da50(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_00a0dbf0(pvVar5,param_2,local_6c);
      FUN_00a0da50(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x50));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x50;
      }
      if (*(int *)((int)this + 4) != 0) {
        FUN_00a0bc80(*(int *)((int)this + 4),*(int *)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0x50 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0x50 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar1 - (int)param_1) / 0x50) < param_2) {
        FUN_00a0da50(param_1,puVar1,param_1 + param_2 * 0x14);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00a0ddb0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x50,local_6c);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x50;
        *(int *)((int)this + 8) = iVar3;
        FUN_00a0d810(param_1,(undefined4 *)(iVar3 + param_2 * -0x50),local_6c);
      }
      else {
        pvVar4 = FUN_00a0da50(puVar1 + param_2 * -0x14,puVar1,puVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_00a0d5a0((int)param_1,(int)(puVar1 + param_2 * -0x14),puVar1);
        FUN_00a0d810(param_1,param_1 + param_2 * 0x14,local_6c);
      }
    }
  }
  if (0x14 < local_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  if (0x14 < local_5c) {
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a0e3b0 @ 00a0e3b0 ////

void __thiscall FUN_00a0e3b0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  void *local_44;
  uint local_3c;
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf9528;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff90;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00a0d0e0(local_64,param_3);
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
      FUN_00a0df10();
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
        iVar3 = FUN_00a0cc40((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0x48);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00a0da90(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_00a0dc20(pvVar5,param_2,local_64);
      FUN_00a0da90(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0x48));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x48;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00a0de10(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_00a0da90(param_1,piVar1,param_1 + param_2 * 0x12);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00a0dde0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0x48,local_64);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x48;
        *(int *)((int)this + 8) = iVar3;
        FUN_00a0d930(param_1,(int *)(iVar3 + param_2 * -0x48),local_64);
      }
      else {
        pvVar4 = FUN_00a0da90(piVar1 + param_2 * -0x12,piVar1,piVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_00a0d6a0((int)param_1,(int)(piVar1 + param_2 * -0x12),piVar1);
        FUN_00a0d930(param_1,param_1 + param_2 * 0x12,local_64);
      }
    }
  }
  if (0x14 < local_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  if (0x14 < local_5c) {
                    /* WARNING: Subroutine does not return */
    _free(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00a0e6c0 @ 00a0e6c0 ////

void __fastcall FUN_00a0e6c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d74ab4;
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    DAT_010b932c = DAT_010b932c + -1;
    if (DAT_010b932c == 0) {
      DAT_010b9330 = 0;
      DAT_010b9334 = 0;
      DAT_010b9338 = 0;
      FreeLibrary((HMODULE)0x0);
    }
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[3],(undefined4 *)param_1[4]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_LAB_00d74a24;
  return;
}


//// FUNCTION FUN_00a0e740 @ 00a0e740 ////

void __thiscall FUN_00a0e740(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x50 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x50;
      goto LAB_00a0e785;
    }
  }
  iVar1 = 0;
LAB_00a0e785:
  FUN_00a0e0a0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x50 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00a0e7b0 @ 00a0e7b0 ////

void __thiscall FUN_00a0e7b0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x48 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x48;
      goto LAB_00a0e7f5;
    }
  }
  iVar1 = 0;
LAB_00a0e7f5:
  FUN_00a0e3b0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x48;
  return;
}


//// FUNCTION FUN_00a0e820 @ 00a0e820 ////

void __fastcall FUN_00a0e820(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_00d74ab4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00a0e860 @ 00a0e860 ////

undefined4 * __thiscall FUN_00a0e860(void *this,byte param_1)

{
  FUN_00a0e6c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a0e880 @ 00a0e880 ////

void __fastcall FUN_00a0e880(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


//// FUNCTION FUN_00a0e8a0 @ 00a0e8a0 ////

void __thiscall FUN_00a0e8a0(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x50) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x50))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00a0dbf0(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x50;
    return;
  }
  FUN_00a0e740(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a0e930 @ 00a0e930 ////

void __thiscall FUN_00a0e930(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x48) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x48))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00a0dc20(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0x48;
    return;
  }
  FUN_00a0e7b0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00a0e9d0 @ 00a0e9d0 ////

undefined4 * FUN_00a0e9d0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9573;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00d74ab4;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00a0ea30 @ 00a0ea30 ////

void __fastcall FUN_00a0ea30(int param_1)

{
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9590;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0048f010(&stack0x00000004,&local_2c);
  local_4 = 0;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,local_2c,local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0043a2d0((void *)(param_1 + 8),&local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0eae0 @ 00a0eae0 ////

bool FUN_00a0eae0(void *param_1,undefined4 param_2)

{
  char cVar1;
  HANDLE hObject;
  char *pcVar2;
  uint _Count;
  uint _Count_00;
  int iVar3;
  undefined4 *puVar4;
  char *local_288;
  uint local_284;
  uint local_280;
  char local_27c [20];
  char *local_268;
  uint local_264;
  uint local_260;
  char local_25c [20];
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c [4];
  undefined4 local_22c;
  undefined4 local_228;
  char local_220 [256];
  char local_120 [268];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cf95ab;
  local_14 = ExceptionList;
  local_240 = 0x224;
  puVar4 = local_23c;
  for (iVar3 = 0x88; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_288 = local_27c;
  local_268 = local_25c;
  local_27c[0] = '\0';
  local_284 = 0;
  local_280 = 0x14;
  local_25c[0] = '\0';
  local_264 = 0;
  local_260 = 0x14;
  local_c = 0;
  ExceptionList = &local_14;
  hObject = (HANDLE)CreateToolhelp32Snapshot(8,param_2);
  if (hObject != (HANDLE)0xffffffff) {
    iVar3 = Module32First(hObject,&local_240);
    while (iVar3 != 0) {
      pcVar2 = local_120;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Count = (int)pcVar2 - (int)(local_120 + 1);
      if (local_280 <= _Count) {
        if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
          _free(local_288);
        }
        local_280 = _Count + 0x20 & 0xffffffe0;
        local_288 = _malloc(local_280);
      }
      _strncpy(local_288,local_120,_Count);
      pcVar2 = local_220;
      local_288[_Count] = '\0';
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      _Count_00 = (int)pcVar2 - (int)(local_220 + 1);
      local_284 = _Count;
      if (local_260 <= _Count_00) {
        if (0x14 < local_260) {
                    /* WARNING: Subroutine does not return */
          _free(local_268);
        }
        local_260 = _Count_00 + 0x20 & 0xffffffe0;
        local_268 = _malloc(local_260);
      }
      _strncpy(local_268,local_220,_Count_00);
      local_268[_Count_00] = '\0';
      local_244 = local_228;
      local_248 = local_22c;
      local_264 = _Count_00;
      FUN_00a0e930(param_1,&local_288);
      iVar3 = Module32Next(hObject,&local_240);
    }
  }
  CloseHandle(hObject);
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4)) / 0x48;
  }
  if (0x14 < local_260) {
                    /* WARNING: Subroutine does not return */
    _free(local_268);
  }
  if (0x14 < local_280) {
                    /* WARNING: Subroutine does not return */
    _free(local_288);
  }
  ExceptionList = local_14;
  return iVar3 != 0;
}


//// FUNCTION FUN_00a0ed10 @ 00a0ed10 ////

undefined4 __thiscall FUN_00a0ed10(void *this,void *param_1,uint param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  WINBOOL WVar3;
  int iVar4;
  undefined4 extraout_EDX;
  DWORD *pDVar5;
  CONTEXT *pCVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  DWORD DStack_440;
  undefined4 uStack_43c;
  undefined1 *puStack_438;
  undefined4 uStack_434;
  uint uStack_430;
  undefined1 auStack_42c [20];
  undefined1 *puStack_418;
  undefined4 uStack_414;
  uint uStack_410;
  undefined1 auStack_40c [20];
  undefined4 uStack_3f8;
  DWORD local_3f0 [5];
  int iStack_3dc;
  undefined1 *local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c4;
  CONTEXT local_2e8;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cf95cb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  uVar1 = FUN_00a0bcf0((int)param_1);
  uVar7 = CONCAT31((int3)((uint)uVar1 >> 8),*(char *)((int)this + 4));
  if (*(char *)((int)this + 4) != '\0') {
    pDVar5 = local_3f0;
    for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pDVar5 = 0;
      pDVar5 = pDVar5 + 1;
    }
    local_3c4 = 3;
    local_3f0[3] = 3;
    if (*(char *)((int)this + 0x1c) == '\0') {
      local_3f0[0] = FUN_00a0cc30();
      local_3f0[3] = extraout_EDX;
      local_3d0 = &stack0xfffffffc;
      local_3c4 = extraout_EDX;
    }
    else {
      pvVar2 = GetCurrentThread();
      pCVar6 = &local_2e8;
      for (iVar4 = 0xb3; iVar4 != 0; iVar4 = iVar4 + -1) {
        pCVar6->ContextFlags = 0;
        pCVar6 = (CONTEXT *)&pCVar6->Dr0;
      }
      local_2e8.ContextFlags = 0x10007;
      WVar3 = GetThreadContext(pvVar2,&local_2e8);
      uVar7 = 0;
      if (WVar3 == 0) goto LAB_00a0ef69;
      local_3f0[0] = local_2e8.Eip;
      local_3d0 = (undefined1 *)local_2e8.Ebp;
    }
    uVar7 = 0;
    local_3f0[1] = 0;
    local_3cc = 0;
    if (param_2 + param_3 != 0) {
      do {
        uVar10 = 0;
        uVar8 = 0;
        pCVar6 = &local_2e8;
        pDVar5 = local_3f0;
        uVar1 = DAT_010b933c;
        uVar9 = DAT_010b9340;
        pvVar2 = GetCurrentThread();
        iVar4 = (*DAT_010b9348)(0x14c,*(undefined4 *)((int)this + 0x18),pvVar2,pDVar5,pCVar6,uVar8,
                                uVar1,uVar9,uVar10);
        if (iVar4 == 0) break;
        if (param_2 <= uVar7) {
          puStack_438 = auStack_42c;
          puStack_418 = auStack_40c;
          auStack_42c[0] = 0;
          uStack_434 = 0;
          uStack_430 = 0x14;
          auStack_40c[0] = 0;
          uStack_414 = 0;
          uStack_410 = 0x14;
          uStack_3f8 = 0;
          uStack_c = 0;
          DStack_440 = local_3f0[0];
          uStack_43c = local_3f0[1];
          FUN_00a0e8a0(param_1,&DStack_440);
          uStack_c = 0xffffffff;
          if (local_3f0[4] == 0 && iStack_3dc == 0) {
            if (0x14 < uStack_410) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_418);
            }
            if (0x14 < uStack_430) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_438);
            }
            break;
          }
          if (0x14 < uStack_410) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_418);
          }
          if (0x14 < uStack_430) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_438);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_2 + param_3);
    }
    uVar7 = 0;
    if ((*(int *)((int)param_1 + 4) != 0) &&
       (iVar4 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4), uVar7 = iVar4 * 0x66666667,
       iVar4 / 0x50 != 0)) {
      if (param_4 != '\0') {
        uVar7 = FUN_00a0df80(param_1,this);
      }
      ExceptionList = local_14;
      return CONCAT31((int3)(uVar7 >> 8),1);
    }
  }
LAB_00a0ef69:
  ExceptionList = local_14;
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_00a0ef90 @ 00a0ef90 ////

void FUN_00a0ef90(void)

{
  undefined1 local_54 [8];
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
  puStack_8 = &LAB_00cf9600;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x40;
  ExceptionList = &local_c;
  local_4c = _malloc(0x40);
  _strncpy(local_4c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_48 = 0x27;
  local_4c[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_54,&local_4c,0);
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
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"Game running:",0xd);
  local_48 = 0xd;
  local_4c[0xd] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a061a0(local_54,&local_4c,&local_2c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0f0e0 @ 00a0f0e0 ////

void __cdecl FUN_00a0f0e0(char param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_54 [8];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf9630;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x40;
  ExceptionList = &local_c;
  local_4c = _malloc(0x40);
  _strncpy(local_4c,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_48 = 0x27;
  local_4c[0x27] = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_54,&local_4c,0);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  pcVar3 = "Yes";
  if (param_1 == '\0') {
    pcVar3 = "";
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"OpenDx",6);
  local_48 = 6;
  local_4c[6] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00a061a0(local_54,&local_4c,&local_2c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_00a05fe0((int)local_54);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00a0f240 @ 00a0f240 ////

uint FUN_00a0f240(void)

{
  WCHAR *_Memory;
  undefined1 uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  LPCWSTR local_158;
  undefined4 local_154;
  uint local_150;
  undefined2 local_14c;
  WCHAR *local_138;
  undefined4 local_134;
  uint local_130;
  WCHAR local_12c [10];
  WCHAR *local_118;
  undefined4 local_114;
  uint local_110;
  WCHAR local_10c [10];
  undefined1 local_f8 [8];
  undefined2 *local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined2 local_e4 [10];
  void *local_d0;
  int local_cc;
  uint local_c8;
  long local_b0;
  long local_ac;
  WCHAR *local_a8;
  undefined4 local_a4;
  uint local_a0;
  WCHAR local_9c [10];
  int local_88;
  WCHAR *local_84;
  undefined4 local_80;
  uint local_7c;
  WCHAR local_78 [10];
  ULARGE_INTEGER local_64;
  void *local_5c;
  int local_58;
  uint local_54;
  wchar_t *local_3c;
  uint local_38;
  uint local_34;
  ULARGE_INTEGER local_1c;
  ULARGE_INTEGER local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf978f;
  local_c = ExceptionList;
  local_118 = local_10c;
  local_10c[0] = local_10c[0] & 0xff00;
  local_114 = 0;
  local_110 = 0x40;
  ExceptionList = &local_c;
  local_118 = _malloc(0x40);
  _strncpy((char *)local_118,"Software\\Lionhead Studios Ltd\\TheMovies",0x27);
  local_114 = 0x27;
  *(char *)((int)local_118 + 0x27) = '\0';
  local_4 = 0;
  FUN_00a05ff0(local_f8,&local_118,0);
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  local_158 = &local_14c;
  local_14c._0_1_ = '\0';
  local_154 = 0;
  local_150 = 0x14;
  _strncpy((char *)local_158,"",0);
  local_154 = 0;
  *(char *)local_158 = '\0';
  local_118 = local_10c;
  local_10c[0] = local_10c[0] & 0xff00;
  local_114 = 0;
  local_110 = 0x14;
  _strncpy((char *)local_118,"Game running:",0xd);
  local_114 = 0xd;
  *(char *)((int)local_118 + 0xd) = '\0';
  local_4._0_1_ = 4;
  FUN_00a06260(local_f8,&local_5c,&local_118,&local_158);
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  local_a8 = local_9c;
  local_9c[0] = L'\0';
  local_a4 = 0;
  local_a0 = 10;
  local_158 = &local_14c;
  local_14c._0_1_ = '\0';
  local_154 = 0;
  local_150 = 0x14;
  _strncpy((char *)local_158,"THE_MOVIES_TM",0xd);
  local_154 = 0xd;
  *(char *)((int)local_158 + 0xd) = '\0';
  local_4._0_1_ = 9;
  puVar2 = FUN_009b5030(&local_d0,&local_158);
  FUN_004036d0(&local_a8,(wchar_t *)*puVar2,puVar2[1]);
  if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
    _free(local_d0);
  }
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  local_118 = local_10c;
  local_10c[0] = local_10c[0] & 0xff00;
  local_114 = 0;
  local_110 = 0x14;
  _strncpy((char *)local_118,"",0);
  local_114 = 0;
  *(char *)local_118 = '\0';
  local_158 = &local_14c;
  local_14c._0_1_ = '\0';
  local_154 = 0;
  local_150 = 0x14;
  _strncpy((char *)local_158,"OpenDx",6);
  local_154 = 6;
  *(char *)(local_158 + 3) = '\0';
  local_4._0_1_ = 0xb;
  FUN_00a06260(local_f8,&local_d0,&local_158,&local_118);
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158);
  }
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  if (local_cc != 0) {
    local_138 = local_12c;
    local_12c[0] = L'\0';
    local_134 = 0;
    local_130 = 10;
    local_f0 = local_e4;
    local_e4[0] = 0;
    local_ec = 0;
    local_e8 = 10;
    local_158 = &local_14c;
    local_14c._0_1_ = '\0';
    local_154 = 0;
    local_150 = 0x20;
    local_158 = _malloc(0x20);
    _strncpy((char *)local_158,"SM_D3D_OPEN_FAILED_MESSAGE",0x1a);
    local_154 = 0x1a;
    *(char *)(local_158 + 0xd) = '\0';
    local_4._0_1_ = 0x11;
    puVar2 = FUN_009b5030(&local_118,&local_158);
    FUN_004036d0(&local_138,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_110) {
                    /* WARNING: Subroutine does not return */
      _free(local_118);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    MessageBoxW((HWND)0x0,local_138,local_a8,0);
    if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
      _free(local_f0);
    }
    if (10 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
  }
  local_4._0_1_ = 8;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 8;
  if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
    _free(local_d0);
  }
  if (local_58 == 0) {
LAB_00a0fc21:
    local_4._0_1_ = uVar1;
    local_158 = &local_14c;
    local_14c = (ushort)local_14c._1_1_ << 8;
    local_154 = 0;
    local_150 = 0x14;
    _strncpy((char *)local_158,"Yes",3);
    local_154 = 3;
    *(char *)((int)local_158 + 3) = '\0';
    local_138 = local_12c;
    local_12c[0] = local_12c[0] & 0xff00;
    local_134 = 0;
    local_130 = 0x14;
    _strncpy((char *)local_138,"Game running:",0xd);
    local_134 = 0xd;
    *(char *)((int)local_138 + 0xd) = '\0';
    local_4._0_1_ = 0x1f;
    FUN_00a061a0(local_f8,&local_138,&local_158);
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    local_84 = local_78;
    local_78[0] = L'\0';
    local_80 = 0;
    local_7c = 10;
    uVar5 = FUN_00ace02d((short *)&DAT_00d74ae8);
    FUN_004036d0(&local_84,L"C:\\",uVar5);
    local_4 = CONCAT31(local_4._1_3_,0x20);
    FUN_009b91e0();
    if (local_38 != 0) {
      if (local_3c[local_38 - 1] == L'\\') {
        FUN_004036d0(&local_84,local_3c,local_38);
      }
      else {
        local_f0 = local_e4;
        local_e4[0] = 0;
        local_ec = 0;
        local_e8 = 10;
        uVar5 = FUN_00ace02d((short *)&DAT_00d2e120);
        FUN_004036d0(&local_f0,L"\\",uVar5);
        puVar2 = FUN_00443250(&local_d0,&local_3c,&local_f0);
        FUN_004036d0(&local_84,(wchar_t *)*puVar2,puVar2[1]);
        if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_d0);
        }
        if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
          _free(local_f0);
        }
      }
    }
    GetDiskFreeSpaceExW(local_84,&local_64,&local_1c,&local_14);
    if ((local_64.field0.HighPart != 0) || (0x13fffff < local_64.field0.LowPart)) {
      if (10 < local_34) {
                    /* WARNING: Subroutine does not return */
        _free(local_3c);
      }
      if (10 < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free(local_84);
      }
      if (10 < local_a0) {
                    /* WARNING: Subroutine does not return */
        _free(local_a8);
      }
      if (local_54 < 0x15) {
        local_4 = 0xffffffff;
        uVar6 = FUN_00a05fe0((int)local_f8);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_5c);
    }
    local_158 = &local_14c;
    local_14c = L'\0';
    local_154 = 0;
    local_150 = 10;
    local_138 = local_12c;
    local_12c[0] = local_12c[0] & 0xff00;
    local_134 = 0;
    local_130 = 0x20;
    local_138 = _malloc(0x20);
    _strncpy((char *)local_138,"FRONTEND_ERROR_NODISKSPACE",0x1a);
    local_134 = 0x1a;
    *(char *)(local_138 + 0xd) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x23);
    puVar2 = FUN_009b5030(&local_d0,&local_138);
    FUN_004036d0(&local_158,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
    MessageBoxW((HWND)0x0,local_158,(LPCWSTR)&lpCaption_00d16918,0);
    if (10 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    _Memory = local_84;
    uVar5 = local_7c;
    if (10 < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_3c);
    }
  }
  else {
    local_b0 = 0;
    local_ac = 0;
    FUN_0099cff0(&local_88,&local_b0,&local_ac);
    lVar3 = FUN_0099ccd0();
    if ((((lVar3 != 0) || (local_b0 != 800)) || (local_ac != 600)) || (local_88 != 0)) {
      local_118 = local_10c;
      local_10c[0] = L'\0';
      local_114 = 0;
      local_110 = 10;
      local_f0 = local_e4;
      local_e4[0] = 0;
      local_ec = 0;
      local_e8 = 10;
      local_138 = local_12c;
      local_12c[0] = local_12c[0] & 0xff00;
      local_134 = 0;
      local_130 = 0x40;
      local_138 = _malloc(0x40);
      _strncpy((char *)local_138,"SM_ENGINE_NOT_START_LAST_TIME_YES_NO_CANCEL",0x2b);
      local_134 = 0x2b;
      *(char *)((int)local_138 + 0x2b) = '\0';
      local_4._0_1_ = 0x1a;
      puVar2 = FUN_009b5030(&local_d0,&local_138);
      FUN_004036d0(&local_118,(wchar_t *)*puVar2,puVar2[1]);
      if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      local_4._0_1_ = 0x19;
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
      iVar4 = MessageBoxW((HWND)0x0,local_118,local_a8,0x103);
      if (iVar4 == 6) {
        ShellExecuteA((HWND)0x0,(LPCSTR)&lpOperation_00d31dc8,"Docs/readme.txt",(LPCSTR)0x0,
                      (LPCSTR)0x0,1);
        local_138 = local_12c;
        local_12c[0] = local_12c[0] & 0xff00;
        local_134 = 0;
        local_130 = 0x14;
        _strncpy((char *)local_138,"SM_BACK_TO_GAME",0xf);
        local_134 = 0xf;
        *(char *)((int)local_138 + 0xf) = '\0';
        local_4._0_1_ = 0x1b;
        puVar2 = FUN_009b5030(&local_d0,&local_138);
        FUN_004036d0(&local_118,(wchar_t *)*puVar2,puVar2[1]);
        if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
          _free(local_d0);
        }
        if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
          _free(local_138);
        }
        iVar4 = MessageBoxW((HWND)0x0,local_118,local_a8,1);
        if (iVar4 != 1) {
          local_158 = &local_14c;
          local_14c = (ushort)local_14c._1_1_ << 8;
          local_154 = 0;
          local_150 = 0x14;
          _strncpy((char *)local_158,"",0);
          local_154 = 0;
          *(char *)local_158 = '\0';
          local_138 = local_12c;
          local_12c[0] = local_12c[0] & 0xff00;
          local_134 = 0;
          local_130 = 0x14;
          _strncpy((char *)local_138,"Game running:",0xd);
          local_134 = 0xd;
          *(char *)((int)local_138 + 0xd) = '\0';
          local_4 = CONCAT31(local_4._1_3_,0x1d);
          FUN_00a061a0(local_f8,&local_138,&local_158);
          if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
            _free(local_138);
          }
          if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
            _free(local_158);
          }
          if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
            _free(local_f0);
          }
          if (10 < local_110) {
                    /* WARNING: Subroutine does not return */
            _free(local_118);
          }
          if (10 < local_a0) {
                    /* WARNING: Subroutine does not return */
            _free(local_a8);
          }
          goto joined_r0x00a0ff5e;
        }
      }
      else if (iVar4 == 2) {
        DAT_0105be05 = 1;
        FUN_0099d450(0);
        FUN_0099d5c0(0,800,600);
        FUN_0099c750(&DAT_0105be08,0);
      }
      if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
        _free(local_f0);
      }
joined_r0x00a0f90d:
      uVar1 = (undefined1)local_4;
      if (10 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      goto LAB_00a0fc21;
    }
    local_118 = local_10c;
    local_10c[0] = L'\0';
    local_114 = 0;
    local_110 = 10;
    local_f0 = local_e4;
    local_e4[0] = 0;
    local_ec = 0;
    local_e8 = 10;
    local_158 = &local_14c;
    local_14c._0_1_ = '\0';
    local_154 = 0;
    local_150 = 0x40;
    local_158 = _malloc(0x40);
    _strncpy((char *)local_158,"SM_ENGINE_NOT_START_LAST_TIME_YES_NO",0x24);
    local_154 = 0x24;
    *(char *)(local_158 + 0x12) = '\0';
    local_4._0_1_ = 0x14;
    puVar2 = FUN_009b5030(&local_d0,&local_158);
    FUN_004036d0(&local_118,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    iVar4 = MessageBoxW((HWND)0x0,local_118,local_a8,0x104);
    if (iVar4 != 6) {
LAB_00a0f8f3:
      if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
        _free(local_f0);
      }
      goto joined_r0x00a0f90d;
    }
    ShellExecuteA((HWND)0x0,(LPCSTR)&lpOperation_00d31dc8,"Docs/readme.txt",(LPCSTR)0x0,(LPCSTR)0x0,
                  1);
    local_158 = &local_14c;
    local_14c._0_1_ = '\0';
    local_154 = 0;
    local_150 = 0x14;
    _strncpy((char *)local_158,"SM_BACK_TO_GAME",0xf);
    local_154 = 0xf;
    *(char *)((int)local_158 + 0xf) = '\0';
    local_4._0_1_ = 0x15;
    puVar2 = FUN_009b5030(&local_d0,&local_158);
    FUN_004036d0(&local_118,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_c8) {
                    /* WARNING: Subroutine does not return */
      _free(local_d0);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    iVar4 = MessageBoxW((HWND)0x0,local_118,local_a8,1);
    if (iVar4 == 1) goto LAB_00a0f8f3;
    local_138 = local_12c;
    local_12c[0] = local_12c[0] & 0xff00;
    local_134 = 0;
    local_130 = 0x14;
    _strncpy((char *)local_138,"",0);
    local_134 = 0;
    *(char *)local_138 = '\0';
    local_158 = &local_14c;
    local_14c = (ushort)local_14c._1_1_ << 8;
    local_154 = 0;
    local_150 = 0x14;
    _strncpy((char *)local_158,"Game running:",0xd);
    local_154 = 0xd;
    *(char *)((int)local_158 + 0xd) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x17);
    FUN_00a061a0(local_f8,&local_158,&local_138);
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
    _Memory = local_118;
    uVar5 = local_110;
    if (10 < local_e8) {
                    /* WARNING: Subroutine does not return */
      _free(local_f0);
    }
  }
  if (10 < uVar5) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (10 < local_a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_a8);
  }
joined_r0x00a0ff5e:
  if (local_54 < 0x15) {
    local_4 = 0xffffffff;
    uVar5 = FUN_00a05fe0((int)local_f8);
    ExceptionList = local_c;
    return uVar5 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_5c);
}


//// FUNCTION FUN_00a10020 @ 00a10020 ////

void FUN_00a10020(void)

{
  return;
}


//// FUNCTION FUN_00a10030 @ 00a10030 ////

bool __cdecl FUN_00a10030(LPCSTR param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ad30d4(param_1);
  return iVar1 == 0;
}


//// FUNCTION FUN_00a10060 @ 00a10060 ////

FILE * __cdecl FUN_00a10060(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
  if ((param_2 == (char *)0x0) || (param_1 == (char *)0x0)) {
    return (FILE *)0x0;
  }
  if (*param_2 == 'w') {
    param_2 = (char *)0x622b77;
    pFVar1 = _fopen(param_1,(char *)&param_2);
    return pFVar1;
  }
  if (*param_2 == 'a') {
    param_2 = "\x03";
    pFVar1 = _fopen(param_1,(char *)&param_2);
    return pFVar1;
  }
  param_2 = (char *)CONCAT13(param_2._3_1_,0x6272);
  pFVar1 = _fopen(param_1,(char *)&param_2);
  return pFVar1;
}


//// FUNCTION FUN_00a100d0 @ 00a100d0 ////

int __cdecl FUN_00a100d0(FILE *param_1)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = _fclose(param_1);
    return iVar1;
  }
  return -1;
}


//// FUNCTION FUN_00a100f0 @ 00a100f0 ////

size_t __cdecl FUN_00a100f0(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  if (param_4 != (FILE *)0x0) {
    sVar1 = _fread(param_1,param_2,param_3,param_4);
    return sVar1;
  }
  return 0;
}


//// FUNCTION FUN_00a10110 @ 00a10110 ////

size_t __cdecl FUN_00a10110(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
  if (param_4 != (FILE *)0x0) {
    sVar1 = _fwrite(param_1,param_2,param_3,param_4);
    return sVar1;
  }
  return 0;
}


//// FUNCTION FUN_00a10150 @ 00a10150 ////

int __cdecl FUN_00a10150(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != (FILE *)0x0) {
    iVar1 = _fseek(param_1,param_2,param_3);
    return iVar1;
  }
  return 1;
}


//// FUNCTION FUN_00a10170 @ 00a10170 ////

long __cdecl FUN_00a10170(FILE *param_1)

{
  long _Offset;
  long lVar1;
  
  if (param_1 == (FILE *)0x0) {
    return 0;
  }
  _Offset = _ftell(param_1);
  _fseek(param_1,0,2);
  lVar1 = _ftell(param_1);
  _fseek(param_1,_Offset,0);
  return lVar1;
}


//// FUNCTION FUN_00a101b0 @ 00a101b0 ////

uint __cdecl FUN_00a101b0(uchar *param_1)

{
  int iVar1;
  int local_24 [5];
  uint local_10;
  
  iVar1 = __stat(param_1,local_24);
  return ~-(uint)(iVar1 != 0) & local_10;
}


//// FUNCTION FUN_00a10220 @ 00a10220 ////

undefined4 __cdecl FUN_00a10220(LPCSTR param_1)

{
  HANDLE hFindFile;
  _WIN32_FIND_DATAA local_140;
  
  hFindFile = FindFirstFileA(param_1,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    GetLastError();
    return 0;
  }
  FindClose(hFindFile);
  return 1;
}


//// FUNCTION FUN_00a10260 @ 00a10260 ////

undefined4 __cdecl FUN_00a10260(LPCWSTR param_1)

{
  int iVar1;
  uint uVar2;
  LPCSTR local_20 [2];
  uint local_18;
  
  iVar1 = FUN_00ad3daf(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_009ad040(local_20,param_1);
    iVar1 = FUN_00ad30d4(local_20[0]);
    if (iVar1 != 0) {
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
      return local_18 & 0xffffff00;
    }
    uVar2 = local_18;
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00a102d0 @ 00a102d0 ////

FILE * __cdecl FUN_00a102d0(wchar_t *param_1,char *param_2)

{
  FILE *pFVar1;
  wchar_t *_Source;
  wchar_t local_28 [4];
  char *local_20 [2];
  uint local_18;
  
  if ((param_2 != (char *)0x0) && (param_1 != (wchar_t *)0x0)) {
    if (*param_2 == 'w') {
      _Source = L"w+b";
    }
    else if (*param_2 == 'a') {
      _Source = L"a+b";
    }
    else {
      _Source = L"rb";
    }
    _wcscpy(local_28,_Source);
    pFVar1 = (FILE *)FUN_00ad33aa(param_1,local_28);
    if (pFVar1 == (FILE *)0x0) {
      FUN_009ad040(local_20,param_1);
      pFVar1 = FUN_00a10060(local_20[0],param_2);
      if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20[0]);
      }
    }
    return pFVar1;
  }
  return (FILE *)0x0;
}


//// FUNCTION FUN_00a10380 @ 00a10380 ////

uint __cdecl FUN_00a10380(wchar_t *param_1)

{
  int iVar1;
  uchar *local_68 [2];
  uint local_60;
  int local_48 [5];
  uint local_34;
  int local_24 [5];
  uint local_10;
  
  iVar1 = __wstat(param_1,local_48);
  if (iVar1 == 0) {
    return local_34;
  }
  FUN_009ad040(local_68,param_1);
  iVar1 = __stat(local_68[0],local_24);
  if (0x14 < local_60) {
                    /* WARNING: Subroutine does not return */
    _free(local_68[0]);
  }
  return ~-(uint)(iVar1 != 0) & local_10;
}


//// FUNCTION FUN_00a103f0 @ 00a103f0 ////

bool __cdecl FUN_00a103f0(LPCWSTR param_1)

{
  HANDLE pvVar1;
  LPCSTR local_3b0 [2];
  uint local_3a8;
  _WIN32_FIND_DATAA local_390;
  _WIN32_FIND_DATAW local_250;
  
  pvVar1 = FindFirstFileW(param_1,&local_250);
  if (pvVar1 != (HANDLE)0xffffffff) {
    FindClose(pvVar1);
    return true;
  }
  FUN_009ad040(local_3b0,param_1);
  pvVar1 = FindFirstFileA(local_3b0[0],&local_390);
  if (pvVar1 != (HANDLE)0xffffffff) {
    FindClose(pvVar1);
  }
  else {
    GetLastError();
  }
  if (0x14 < local_3a8) {
                    /* WARNING: Subroutine does not return */
    _free(local_3b0[0]);
  }
  return pvVar1 != (HANDLE)0xffffffff;
}


//// FUNCTION FUN_00a10480 @ 00a10480 ////

undefined4 FUN_00a10480(void)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (DAT_010b9350 != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  FUN_00a99520();
  FUN_00a9af50();
  if (DAT_010b9358 == 0) {
    uVar1 = FUN_00a990d0();
    return uVar1 & 0xffffff00;
  }
  DAT_010b9350 = 1;
  DAT_010b9351 = 1;
  return CONCAT31((int3)((uint)DAT_010b9358 >> 8),1);
}


//// FUNCTION FUN_00a104c0 @ 00a104c0 ////

void * __thiscall FUN_00a104c0(void *this,byte param_1)

{
  FUN_00a9b2f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00a104e0 @ 00a104e0 ////

void __cdecl FUN_00a104e0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = _strncmp(param_1,"./",2);
  if (iVar2 == 0) {
    pcVar3 = param_1 + 2;
    iVar2 = (int)param_2 - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar2] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar2 = (int)param_2 - (int)param_1;
    do {
      cVar1 = *param_1;
      param_1[iVar2] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = 0;
  if (0 < (int)pcVar3 - (int)(param_2 + 1)) {
    do {
      if (param_2[iVar2] == '/') {
        param_2[iVar2] = '\\';
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)pcVar3 - (int)(param_2 + 1));
  }
  return;
}


//// FUNCTION FUN_00a10550 @ 00a10550 ////

uint * __cdecl FUN_00a10550(char *param_1)

{
  uint *puVar1;
  int iVar2;
  uint local_10c [2];
  char local_104 [260];
  
  FUN_00a104e0(param_1,local_104);
  FUN_00a9c980((int *)local_10c,local_104);
  iVar2 = 0;
  if (0 < DAT_010b9358) {
    do {
      puVar1 = FUN_00a9b5a0(*(void **)(DAT_010b9354 + iVar2 * 4),local_10c);
      if (puVar1 != (uint *)0x0) {
        return puVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_010b9358);
  }
  return (uint *)0x0;
}


//// FUNCTION FUN_00a105b0 @ 00a105b0 ////

uint * __cdecl FUN_00a105b0(char *param_1)

{
  int iVar1;
  uint *puVar2;
  uint local_10c [2];
  char local_104 [260];
  
  if (DAT_010b9358 < 1) {
    return (uint *)0x0;
  }
  FUN_00a104e0(param_1,local_104);
  FUN_00a9c980((int *)local_10c,local_104);
  iVar1 = DAT_010b9358;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return (uint *)0x0;
    }
    puVar2 = FUN_00a9b5a0(*(void **)(DAT_010b9354 + iVar1 * 4),local_10c);
  } while (puVar2 == (uint *)0x0);
  return puVar2;
}


//// FUNCTION FUN_00a10630 @ 00a10630 ////

void __cdecl FUN_00a10630(char *param_1,char *param_2,void *param_3,char param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_010b9358) {
    do {
      FUN_00a9c6f0(*(void **)(DAT_010b9354 + iVar1 * 4),param_1,param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_010b9358);
  }
  return;
}


//// FUNCTION FUN_00a10680 @ 00a10680 ////

void __cdecl FUN_00a10680(char *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_010b9358) {
    do {
      FUN_00a9c3b0(*(void **)(DAT_010b9354 + iVar1 * 4),param_1,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_010b9358);
  }
  return;
}


//// FUNCTION FUN_00a106c0 @ 00a106c0 ////

int __cdecl FUN_00a106c0(int param_1)

{
  uint uVar1;
  
  if (((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x14) >> 0xf & 0xfff, uVar1 != 0xfff)) &&
     ((int)uVar1 < DAT_010b9360)) {
    return uVar1 * 0x2c + DAT_010b935c;
  }
  return 0;
}


//// FUNCTION FUN_00a10740 @ 00a10740 ////

void __fastcall FUN_00a10740(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf97ab;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(FILE **)(param_1 + 0x28) != (FILE *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_00a100d0(*(FILE **)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_009d3580((undefined4 *)(param_1 + 4));
  }
  if (0x14 < *(uint *)(param_1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 4));
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00a10810 @ 00a10810 ////

uint __cdecl FUN_00a10810(char *param_1)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf97c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_00a10550(param_1);
  if (puVar2 == (uint *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  if ((puVar2[5] & 0x7ff8000) == 0x7ff8000) {
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
    uVar4 = FUN_009d3720(&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return uVar4;
  }
  ExceptionList = local_c;
  return puVar2[4];
}


//// FUNCTION FUN_00a108f0 @ 00a108f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00a108f0(char *param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *_Memory;
  int iVar6;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf97f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = FUN_00a10550(param_1);
  if (puVar2 == (uint *)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  local_24 = puVar2[5] >> 0xf & 0xfff;
  if (local_24 == 0xfff) {
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
    uVar4 = FUN_009d3720(&local_2c);
    local_4 = 0xffffffff;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (uVar4 != 0) {
      puVar5 = operator_new(uVar4);
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
      local_4 = 1;
      FUN_009d3ca0(&local_2c,puVar5,uVar4,(undefined1 *)0x0);
      if (local_24 < 0x15) {
        *param_2 = puVar5;
        *param_3 = uVar4;
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)param_2 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  else if ((int)local_24 < DAT_010b9360) {
    FUN_009d9820();
    iVar6 = (puVar2[5] >> 0xf & 0xfff) * 0x2c;
    pcVar3 = (char *)(iVar6 + DAT_010b935c);
    if (*(char *)(iVar6 + DAT_010b935c) != '\0') {
      FUN_009d9820();
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        Sleep(1);
        cVar1 = *pcVar3;
      }
      FUN_009d9820();
    }
    *pcVar3 = '\x01';
    _DAT_010b9364 = puVar2;
    _Memory = operator_new(puVar2[3]);
    FUN_00a10150(*(FILE **)(pcVar3 + 0x28),puVar2[2],0);
    FUN_00a100f0(_Memory,puVar2[3],1,*(FILE **)(pcVar3 + 0x28));
    FUN_00afb9d0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return local_24 & 0xffffff00;
}


//// FUNCTION FUN_00a10b50 @ 00a10b50 ////

undefined1 * __fastcall FUN_00a10b50(undefined1 *param_1)

{
  *(undefined1 **)(param_1 + 4) = param_1 + 0x10;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x14;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_004015d0(param_1 + 4,"",0);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}


//// FUNCTION FUN_00a10b90 @ 00a10b90 ////

void FUN_00a10b90(void)

{
  void *pvVar1;
  int iVar2;
  
  if (DAT_010b9350 == '\0') {
    return;
  }
  FUN_00a990d0();
  if (DAT_010b935c != (void *)0x0) {
    pvVar1 = (void *)((int)DAT_010b935c + -4);
    _eh_vector_destructor_iterator_(DAT_010b935c,0x2c,*(int *)((int)DAT_010b935c + -4),FUN_00a10740)
    ;
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  DAT_010b935c = (void *)0x0;
  if (0 < DAT_010b9358) {
    iVar2 = 0;
    do {
      pvVar1 = *(void **)((int)DAT_010b9354 + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_00a9b2f0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
        _free(pvVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_010b9358);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_010b9354);
}


//// FUNCTION FUN_00a10c30 @ 00a10c30 ////

undefined4 __cdecl FUN_00a10c30(char *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint local_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  local_8 = 0;
  uVar1 = FUN_00a108f0(param_1,&local_4,&local_8);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  uVar3 = local_8;
  if ((int)param_3 < (int)local_8) {
    uVar3 = param_3;
  }
  puVar4 = local_4;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4);
}


//// FUNCTION FUN_00a10cd0 @ 00a10cd0 ////

void __thiscall FUN_00a10cd0(void *this,int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = param_1 < 0;
  *(int *)this = (int)this + 0x20;
  if (bVar2) {
    param_1 = -param_1;
  }
  *(undefined1 **)this = (undefined1 *)((int)this + 0x1f);
  *(undefined1 *)((int)this + 0x1f) = 0;
  do {
    iVar1 = *(int *)this;
    *(char **)this = (char *)(iVar1 + -1);
    *(char *)(iVar1 + -1) = (char)(param_1 % 10) + '0';
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  if (bVar2) {
    iVar1 = *(int *)this;
    *(undefined1 **)this = (undefined1 *)(iVar1 + -1);
    *(undefined1 *)(iVar1 + -1) = 0x2d;
  }
  *(int *)((int)this + 4) = (int)this + (0x1f - *(int *)this);
  return;
}


//// FUNCTION FUN_00a10d40 @ 00a10d40 ////

void __thiscall FUN_00a10d40(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  iVar1 = uVar2 + 1 + param_2;
  *(int *)((int)this + 4) = iVar1;
  if (*(int *)((int)this + 8) < iVar1) {
    FUN_00a10e50(this,uVar2);
  }
  iVar1 = *(int *)this;
  puVar4 = (undefined4 *)(iVar1 + uVar2);
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(undefined1 *)((int)(iVar1 + uVar2) + param_2) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return;
}


//// FUNCTION FUN_00a10d90 @ 00a10d90 ////

void __thiscall FUN_00a10d90(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  uVar2 = *(uint *)((int)this + 4);
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  *(uint *)((int)this + 4) = uVar3 + uVar2;
  if (*(int *)((int)this + 8) < (int)(uVar3 + uVar2)) {
    FUN_00a10e50(this,uVar2);
  }
  pcVar5 = (char *)(*(int *)this + uVar2);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return;
}


//// FUNCTION FUN_00a10df0 @ 00a10df0 ////

void __thiscall FUN_00a10df0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = *(uint *)((int)this + 4);
  iVar1 = param_1[1] + 1 + uVar2;
  *(int *)((int)this + 4) = iVar1;
  if (*(int *)((int)this + 8) < iVar1) {
    FUN_00a10e50(this,uVar2);
  }
  iVar1 = *(int *)this;
  uVar4 = param_1[1];
  puVar5 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)(iVar1 + uVar2);
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
  *(undefined1 *)(param_1[1] + (int)(iVar1 + uVar2)) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return;
}


//// FUNCTION FUN_00a10e50 @ 00a10e50 ////

void __thiscall FUN_00a10e50(void *this,uint param_1)

{
  undefined4 *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  
  _Memory = *(undefined4 **)this;
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 8) = iVar1;
  if (_Memory != (undefined4 *)&DAT_010b9370) {
    uVar2 = (iVar1 * 3 + 0x5a) / 2;
    *(uint *)((int)this + 8) = uVar2;
    puVar3 = operator_new(uVar2);
    *(undefined4 **)this = puVar3;
    puVar5 = _Memory;
    for (uVar2 = param_1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (iVar1 < 0x1000) {
    *(int *)((int)this + 8) = iVar1 + 1;
  }
  pvVar4 = operator_new(*(uint *)((int)this + 8));
  *(void **)this = pvVar4;
  return;
}


//// FUNCTION FUN_00a10ec0 @ 00a10ec0 ////

void * __thiscall FUN_00a10ec0(void *this,int param_1)

{
  undefined4 local_20 [8];
  
  FUN_00a10cd0(local_20,param_1);
  FUN_00a10df0(this,local_20);
  return this;
}


//// FUNCTION FUN_00a10ef0 @ 00a10ef0 ////

void __fastcall FUN_00a10ef0(int param_1)

{
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
  }
  return;
}


//// FUNCTION FUN_00a10f00 @ 00a10f00 ////

void __thiscall FUN_00a10f00(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    if (*(int *)((int)this + 8) == 0) {
      puVar2 = operator_new(0x114);
      if (puVar2 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00a111a0(puVar2);
      }
      *(undefined4 *)((int)this + 8) = uVar3;
    }
    *(int *)((int)this + 4) = param_1[1];
    FUN_00a11260(*(void **)((int)this + 8),param_1[2]);
  }
  return;
}


//// FUNCTION FUN_00a10f50 @ 00a10f50 ////

uint * __thiscall FUN_00a10f50(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
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
  if (*(int *)this == 0) {
    iVar1 = *(int *)((int)this + 8);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(int *)(iVar1 + 4) = iVar1;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
  }
  uVar5 = *param_1 >> 0x1c & 0xf;
  if (*(int *)this <= (int)uVar5) {
    *(uint *)this = uVar5;
    *(uint *)((int)this + 4) = (uint)*(byte *)((int)param_1 + 2);
  }
  iVar1 = *(int *)((int)this + 8);
  if (*(int *)(iVar1 + 8) == 8) {
    *(undefined4 *)(iVar1 + 8) = 7;
  }
  iVar2 = *(int *)(iVar1 + 8);
  *(int *)(iVar1 + 0xc + iVar2 * 8) = *param_1;
  *(int *)(iVar1 + 0x10 + iVar2 * 8) = param_1[1];
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  *(int *)(iVar1 + 100) = param_1[1];
  return this;
}


//// FUNCTION FUN_00a10fe0 @ 00a10fe0 ////

int __thiscall FUN_00a10fe0(void *this,undefined4 *param_1)

{
  FUN_00a11310(*(void **)((int)this + 8),param_1);
  return (int)this;
}


//// FUNCTION FUN_00a11000 @ 00a11000 ////

int __thiscall FUN_00a11000(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *local_8;
  int local_4;
  
  uVar2 = 0xffffffff;
  local_8 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_4 = ~uVar2 - 1;
  FUN_00a11310(*(void **)((int)this + 8),&local_8);
  return (int)this;
}


//// FUNCTION FUN_00a11060 @ 00a11060 ////

int __thiscall FUN_00a11060(void *this,int param_1)

{
  undefined4 local_20 [8];
  
  FUN_00a10cd0(local_20,param_1);
  FUN_00a11310(*(void **)((int)this + 8),local_20);
  return (int)this;
}


//// FUNCTION FUN_00a110b0 @ 00a110b0 ////

void __thiscall FUN_00a110b0(void *this,undefined **param_1,uint param_2)

{
  char cVar1;
  undefined **this_00;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined *local_10;
  undefined4 local_c;
  char *local_8;
  int local_4;
  
  this_00 = param_1;
  if (*(int *)this != 0) {
    if (*(int *)this != 1) {
      param_1[1] = (undefined *)0x0;
    }
    param_1 = (undefined **)0x0;
    if ((param_2 & 4) == 0) {
      param_1 = &local_10;
      local_10 = &DAT_00e68a84;
      local_c = 4;
    }
    iVar4 = *(int *)(*(int *)((int)this + 8) + 8);
    if (0 < iVar4) {
      do {
        iVar4 = iVar4 + -1;
        if ((param_2 & 1) != 0) {
          FUN_00a10d40(this_00,(undefined4 *)&DAT_00e68a80,1);
        }
        if ((param_1 == (undefined **)0x0) ||
           (ppcVar2 = (char **)FUN_00a12c30(*(void **)(*(int *)((int)this + 8) + 4),param_1,iVar4),
           ppcVar2 == (char **)0x0)) {
          uVar3 = 0xffffffff;
          local_8 = *(char **)(*(int *)((int)this + 8) + 0x10 + iVar4 * 8);
          pcVar5 = local_8;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          local_4 = ~uVar3 - 1;
          ppcVar2 = &local_8;
        }
        FUN_00a9cdc0(this_00,ppcVar2,*(int **)(*(int *)((int)this + 8) + 4));
        if ((iVar4 != 0) || ((param_2 & 2) != 0)) {
          FUN_00a10d40(this_00,(undefined4 *)&DAT_00e68a7c,1);
        }
      } while (0 < iVar4);
    }
  }
  return;
}


