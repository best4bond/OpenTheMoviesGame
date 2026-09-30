//// FUNCTION FUN_00c056c0 @ 00c056c0 ////

void __fastcall FUN_00c056c0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c37210(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c056f0 @ 00c056f0 ////

void __fastcall FUN_00c056f0(int param_1,void *param_2)

{
  FUN_00c36df0(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c05700 @ 00c05700 ////

void __fastcall FUN_00c05700(int param_1,void *param_2)

{
  FUN_00c37030(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c05710 @ 00c05710 ////

void __fastcall FUN_00c05710(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c1cd00(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c05740 @ 00c05740 ////

undefined4 * __fastcall FUN_00c05740(undefined4 *param_1)

{
  FUN_00c01110(param_1);
  return param_1;
}


//// FUNCTION FUN_00c05750 @ 00c05750 ////

void __fastcall FUN_00c05750(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c36de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c05780 @ 00c05780 ////

void __fastcall FUN_00c05780(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)*param_1;
  if (_Memory != (void *)0x0) {
    FUN_00c37020((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c057b0 @ 00c057b0 ////

void __fastcall FUN_00c057b0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c37210(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c057e0 @ 00c057e0 ////

void __fastcall FUN_00c057e0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c1cd00(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c05810 @ 00c05810 ////

void __thiscall FUN_00c05810(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02a86;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c05980 @ 00c05980 ////

undefined4 * __fastcall FUN_00c05980(undefined4 *param_1)

{
  FUN_00c012b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00c05990 @ 00c05990 ////

undefined4 * __fastcall FUN_00c05990(undefined4 *param_1)

{
  FUN_00c00e80(param_1);
  return param_1;
}


//// FUNCTION FUN_00c059a0 @ 00c059a0 ////

int __fastcall FUN_00c059a0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02a9b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c05a70 @ 00c05a70 ////

int __fastcall FUN_00c05a70(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02abb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c05b40 @ 00c05b40 ////

int __fastcall FUN_00c05b40(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02adb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c05c10 @ 00c05c10 ////

int __fastcall FUN_00c05c10(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02afb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c05ce0 @ 00c05ce0 ////

int __fastcall FUN_00c05ce0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02b1b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c05db0 @ 00c05db0 ////

int __fastcall FUN_00c05db0(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02b3b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c05e80 @ 00c05e80 ////

uint __thiscall FUN_00c05e80(void *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    puVar3 = *(undefined4 **)this;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00c1cd00(puVar3);
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
    uVar2 = FUN_00be65a0(param_1);
    if ((char)uVar2 != '\0') {
      uVar2 = 0;
      if (param_1 != 0) {
        puVar3 = operator_new(0x20);
        local_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_00c1cce0(puVar3);
        }
        local_4 = 0xffffffff;
        FUN_00c05810(this,iVar4);
        uVar5 = FUN_00c05340(param_1,*(void **)this);
        ExceptionList = local_c;
        return uVar5;
      }
LAB_00c05f8c:
      ExceptionList = local_c;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  else {
    uVar2 = FUN_00be65a0(param_1);
    if ((char)uVar2 != '\0') {
      if (*(void **)this != (void *)0x0) {
        uVar5 = FUN_00c05340(param_1,*(void **)this);
        ExceptionList = local_c;
        return uVar5;
      }
      goto LAB_00c05f8c;
    }
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION LH_SerializeResourceHeaderArray @ 00c05fb0 ////

uint __thiscall LH_SerializeResourceHeaderArray(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02b83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    iVar2 = LH_Array_GetCount((int)this);
    if (iVar2 != 0) {
      LH_Assert(&local_16,"Count () == 0\n");
      DebugBreak();
    }
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      LH_Array_Reserve_00c01180(this,local_14);
      puVar4 = local_10;
      local_10 = (undefined4 *)0x0;
      while (local_14 != 0) {
        local_10 = puVar4;
        local_10 = operator_new(0x24);
        local_4 = 0;
        if (local_10 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_00c36db0(local_10);
        }
        local_4 = 1;
        local_10 = puVar4;
        pvVar5 = (void *)FUN_00c059a0((int *)&local_10);
        uVar3 = FUN_00c056f0(param_1,pvVar5);
        if ((char)uVar3 == '\0') {
          local_4 = 0xffffffff;
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00c36de0((int)puVar4);
                    /* WARNING: Subroutine does not return */
            _free(puVar4);
          }
          goto LAB_00c0600f;
        }
        iVar2 = FUN_00c05a70((int *)&local_10);
        puVar6 = (undefined4 *)FUN_00c02170(this,iVar2);
        puVar4 = local_10;
        local_14 = local_14 - 1;
        local_4 = 0xffffffff;
        if (local_10 != (undefined4 *)0x0) {
          FUN_00c36de0((int)local_10);
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
        puVar4 = (undefined4 *)0x0;
        local_10 = puVar6;
      }
LAB_00c0615a:
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  else {
    local_10 = (undefined4 *)LH_Array_GetCount((int)this);
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      puVar4 = (undefined4 *)0x0;
      if (local_10 != (undefined4 *)0x0) {
        do {
          pvVar5 = (void *)LH_Array_GetAt_00bd3830(this,(uint)puVar4);
          if (pvVar5 == (void *)0x0) {
            LH_Assert(&local_15,"object != NULL\n");
            DebugBreak();
          }
          uVar3 = FUN_00c056f0(param_1,pvVar5);
          if ((char)uVar3 == '\0') goto LAB_00c0600f;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while (puVar4 < local_10);
      }
      goto LAB_00c0615a;
    }
  }
LAB_00c0600f:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION LH_SerializeDriverArray @ 00c06180 ////

uint __thiscall LH_SerializeDriverArray(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  void *pvVar5;
  undefined2 *puVar6;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined2 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02ba3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    iVar2 = GetField_8_00bd3890((int)this);
    if (iVar2 != 0) {
      LH_Assert(&local_16,"Count () == 0\n");
      DebugBreak();
    }
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      LH_Array_Reserve_00c00d50(this,local_14);
      puVar4 = local_10;
      local_10 = (undefined2 *)0x0;
      while (local_14 != 0) {
        local_10 = puVar4;
        local_10 = operator_new(0x48);
        local_4 = 0;
        if (local_10 == (undefined2 *)0x0) {
          puVar4 = (undefined2 *)0x0;
        }
        else {
          puVar4 = FUN_00c36fc0(local_10);
        }
        local_4 = 1;
        local_10 = puVar4;
        pvVar5 = (void *)FUN_00c05b40((int *)&local_10);
        uVar3 = FUN_00c05700(param_1,pvVar5);
        if ((char)uVar3 == '\0') {
          local_4 = 0xffffffff;
          if (puVar4 != (undefined2 *)0x0) {
            FUN_00c37020((int)puVar4);
                    /* WARNING: Subroutine does not return */
            _free(puVar4);
          }
          goto LAB_00c061df;
        }
        iVar2 = FUN_00c05c10((int *)&local_10);
        puVar6 = (undefined2 *)FUN_00c021e0(this,iVar2);
        puVar4 = local_10;
        local_14 = local_14 - 1;
        local_4 = 0xffffffff;
        if (local_10 != (undefined2 *)0x0) {
          FUN_00c37020((int)local_10);
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
        puVar4 = (undefined2 *)0x0;
        local_10 = puVar6;
      }
LAB_00c0632a:
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  else {
    local_10 = (undefined2 *)GetField_8_00bd3890((int)this);
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      puVar4 = (undefined2 *)0x0;
      if (local_10 != (undefined2 *)0x0) {
        do {
          pvVar5 = (void *)LH_Array_GetAt_00bd3960(this,(uint)puVar4);
          if (pvVar5 == (void *)0x0) {
            LH_Assert(&local_15,"object != NULL\n");
            DebugBreak();
          }
          uVar3 = FUN_00c05700(param_1,pvVar5);
          if ((char)uVar3 == '\0') goto LAB_00c061df;
          puVar4 = (undefined2 *)((int)puVar4 + 1);
        } while (puVar4 < local_10);
      }
      goto LAB_00c0632a;
    }
  }
LAB_00c061df:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION LH_SerializeRLMParamArray @ 00c06350 ////

uint __thiscall LH_SerializeRLMParamArray(void *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02bc3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    iVar2 = GetField_8_00bd38a0((int)this);
    if (iVar2 != 0) {
      LH_Assert(&local_16,"Count () == 0\n");
      DebugBreak();
    }
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      LH_Array_Reserve_00c00fe0(this,local_14);
      puVar4 = local_10;
      local_10 = (undefined4 *)0x0;
      while (local_14 != 0) {
        local_10 = puVar4;
        local_10 = operator_new(0x10);
        local_4 = 0;
        if (local_10 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = FUN_00c371f0(local_10);
        }
        local_4 = 1;
        local_10 = puVar4;
        piVar5 = (int *)FUN_00c05ce0((int *)&local_10);
        uVar3 = FUN_00c37390(param_1,piVar5);
        if ((char)uVar3 == '\0') {
          local_4 = 0xffffffff;
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00c37210(puVar4);
                    /* WARNING: Subroutine does not return */
            _free(puVar4);
          }
          goto LAB_00c063af;
        }
        iVar2 = FUN_00c05db0((int *)&local_10);
        puVar6 = (undefined4 *)FUN_00c02250(this,iVar2);
        puVar4 = local_10;
        local_14 = local_14 - 1;
        local_4 = 0xffffffff;
        if (local_10 != (undefined4 *)0x0) {
          FUN_00c37210(local_10);
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
        puVar4 = (undefined4 *)0x0;
        local_10 = puVar6;
      }
LAB_00c064fa:
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  else {
    local_10 = (undefined4 *)GetField_8_00bd38a0((int)this);
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      puVar4 = (undefined4 *)0x0;
      if (local_10 != (undefined4 *)0x0) {
        do {
          piVar5 = (int *)LH_Array_GetAt_00bd39a0(this,(uint)puVar4);
          if (piVar5 == (int *)0x0) {
            LH_Assert(&local_15,"object != NULL\n");
            DebugBreak();
          }
          uVar3 = FUN_00c37390(param_1,piVar5);
          if ((char)uVar3 == '\0') goto LAB_00c063af;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while (puVar4 < local_10);
      }
      goto LAB_00c064fa;
    }
  }
LAB_00c063af:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00c06520 @ 00c06520 ////

void __thiscall FUN_00c06520(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = LH_Array_GetCount((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02190(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c06560 @ 00c06560 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c06560(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3890((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02200(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c065a0 @ 00c065a0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c065a0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd38a0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c02270(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00c06610 @ 00c06610 ////

undefined4 * __thiscall FUN_00c06610(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02bdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da2b8c;
  FUN_00c012b0((undefined4 *)((int)this + 4));
  local_4 = 0;
  FUN_00c06520(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c06670 @ 00c06670 ////

undefined4 * __thiscall FUN_00c06670(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da2b94;
  FUN_00c00e80((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00c06560(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c066d0 @ 00c066d0 ////

undefined4 * __thiscall FUN_00c066d0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da2b9c;
  FUN_00c01110((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00c065a0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c06730 @ 00c06730 ////

undefined4 * __fastcall FUN_00c06730(undefined4 *param_1)

{
  FUN_00be1e00(param_1);
  param_1[2] = 0;
  return param_1;
}


//// FUNCTION FUN_00c06760 @ 00c06760 ////

void __fastcall FUN_00c06760(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c06780 @ 00c06780 ////

void __fastcall FUN_00c06780(int param_1,void *param_2)

{
  FUN_00c37480(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c06790 @ 00c06790 ////

void __fastcall FUN_00c06790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}


//// FUNCTION FUN_00c067d0 @ 00c067d0 ////

undefined4 * __fastcall FUN_00c067d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00c06bd0(param_1 + 5);
  return param_1;
}


//// FUNCTION FUN_00c067f0 @ 00c067f0 ////

void __fastcall FUN_00c067f0(int param_1)

{
  undefined4 *_Memory;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c07170(local_1c,(void *)(param_1 + 0x14));
  local_4 = 0;
  _Memory = (undefined4 *)FUN_00c06bf0((int)local_1c);
  if (_Memory != (undefined4 *)0x0) {
    FUN_00be1f10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = 0xffffffff;
  FUN_00c06ed0(local_1c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c06870 @ 00c06870 ////

void __fastcall FUN_00c06870(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02d6d;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00c067f0(param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c06be0((undefined4 *)(param_1 + 0x14));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION LH_SerializeGlobalProperties @ 00c068c0 ////

undefined4 __thiscall LH_SerializeGlobalProperties(void *this,int param_1)

{
  char cVar1;
  
  cVar1 = LH_Archive_TransferU32(param_1);
  if ((cVar1 != '\0') && (*(int *)this == 4)) {
    cVar1 = LH_Archive_TransferU32(param_1);
    if (cVar1 != '\0') {
      cVar1 = LH_Archive_TransferU32(param_1);
      if (cVar1 != '\0') {
        cVar1 = LH_Archive_TransferU32(param_1);
        if (cVar1 != '\0') {
          cVar1 = LH_Archive_TransferU32(param_1);
          if (cVar1 != '\0') {
            cVar1 = FUN_00c071d0(param_1,(void *)((int)this + 0x14));
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00c06940 @ 00c06940 ////

void __fastcall FUN_00c06940(undefined4 *param_1)

{
  *param_1 = 4;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_00c067f0((int)param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c06960 @ 00c06960 ////

undefined4 * __thiscall ScalarDeletingDtor_00c06960(void *this,byte param_1)

{
  thunk_FUN_00be1f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_Array_SetFilledSize_00c06980 @ 00c06980 ////

void __thiscall LH_Array_SetFilledSize_00c06980(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c069b0 @ 00c069b0 ////

void __fastcall LH_Array_FreeBuffer_00c069b0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION LH_Array_SetAt_00c06a10 @ 00c06a10 ////

void __thiscall LH_Array_SetAt_00c06a10(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION FUN_00c06a50 @ 00c06a50 ////

void __fastcall FUN_00c06a50(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    thunk_FUN_00be1f10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION LH_Array_Reserve_00c06a80 @ 00c06a80 ////

void __thiscall LH_Array_Reserve_00c06a80(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION FUN_00c06b40 @ 00c06b40 ////

void __thiscall FUN_00c06b40(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00c06a80(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION FUN_00c06b80 @ 00c06b80 ////

void __thiscall FUN_00c06b80(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1[2] != 0) {
    FUN_00c06b40(this,param_1[2]);
    puVar3 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4);
    for (uVar1 = param_1[2] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1[2];
  }
  return;
}


//// FUNCTION FUN_00c06bd0 @ 00c06bd0 ////

undefined4 * __fastcall FUN_00c06bd0(undefined4 *param_1)

{
  FUN_00c06760(param_1);
  return param_1;
}


//// FUNCTION LH_Array_FreeBuffer_00c06be0 @ 00c06be0 ////

void __fastcall LH_Array_FreeBuffer_00c06be0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c06bf0 @ 00c06bf0 ////

int __fastcall FUN_00c06bf0(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bfb1b0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bfb1b0((int)this);
    iVar2 = LH_Array_GetAt_00bfb200(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00c06980(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bfb1b0((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00c06c40 @ 00c06c40 ////

void __fastcall FUN_00c06c40(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bfb1b0((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00bfb200(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00c06a10(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bfb1b0((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00c06980(this,uVar3);
  return;
}


//// FUNCTION FUN_00c06c90 @ 00c06c90 ////

void __fastcall FUN_00c06c90(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    thunk_FUN_00be1f10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c06cc0 @ 00c06cc0 ////

int __fastcall FUN_00c06cc0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02cbb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c06d90 @ 00c06d90 ////

int __fastcall FUN_00c06d90(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02cdb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c06e60 @ 00c06e60 ////

void __thiscall FUN_00c06e60(void *this,undefined4 param_1)

{
  FUN_00c06b40(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION FUN_00c06e80 @ 00c06e80 ////

void __thiscall FUN_00c06e80(void *this,undefined4 *param_1)

{
  if (param_1 != this) {
    if ((uint)param_1[1] < *(uint *)((int)this + 4)) {
      FUN_00c06790(this,param_1);
    }
    if (*(int *)((int)this + 8) != 0) {
      LH_Array_Reserve_00c06a80(param_1,param_1[2] + *(int *)((int)this + 8));
      FUN_00c06b80(param_1,this);
      *(undefined4 *)((int)this + 8) = 0;
    }
  }
  return;
}


//// FUNCTION FUN_00c06ed0 @ 00c06ed0 ////

void __fastcall FUN_00c06ed0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02cfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2dbc;
  local_4 = 0;
  FUN_00c06c40((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00c069b0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c06f20 @ 00c06f20 ////

undefined4 * __thiscall ScalarDeletingDtor_00c06f20(void *this,byte param_1)

{
  FUN_00c06ed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c06f50 @ 00c06f50 ////

uint __thiscall FUN_00c06f50(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02d23;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    iVar2 = GetField_8_00bfb1b0((int)this);
    if (iVar2 != 0) {
      LH_Assert(&local_16,"Count () == 0\n");
      DebugBreak();
    }
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      LH_Array_Reserve_00c06a80(this,local_14);
      puVar4 = local_10;
      local_10 = (undefined4 *)0x0;
      while (local_14 != 0) {
        local_10 = puVar4;
        puVar4 = operator_new(0x14);
        local_4 = 0;
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          local_10 = puVar4;
          FUN_00be1e00(puVar4);
          puVar4[2] = 0;
        }
        local_4 = 1;
        local_10 = puVar4;
        pvVar5 = (void *)FUN_00c06cc0((int *)&local_10);
        uVar3 = FUN_00c06780(param_1,pvVar5);
        if ((char)uVar3 == '\0') {
          local_4 = 0xffffffff;
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00be1f10(puVar4);
                    /* WARNING: Subroutine does not return */
            _free(puVar4);
          }
          goto LAB_00c06faf;
        }
        iVar2 = FUN_00c06d90((int *)&local_10);
        puVar6 = (undefined4 *)FUN_00c06e60(this,iVar2);
        puVar4 = local_10;
        local_14 = local_14 - 1;
        local_4 = 0xffffffff;
        if (local_10 != (undefined4 *)0x0) {
          FUN_00be1f10(local_10);
                    /* WARNING: Subroutine does not return */
          _free(puVar4);
        }
        puVar4 = (undefined4 *)0x0;
        local_10 = puVar6;
      }
LAB_00c070fa:
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
  }
  else {
    local_10 = (undefined4 *)GetField_8_00bfb1b0((int)this);
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      puVar4 = (undefined4 *)0x0;
      if (local_10 != (undefined4 *)0x0) {
        do {
          pvVar5 = (void *)LH_Array_GetAt_00bfb200(this,(uint)puVar4);
          if (pvVar5 == (void *)0x0) {
            LH_Assert(&local_15,"object != NULL\n");
            DebugBreak();
          }
          uVar3 = FUN_00c06780(param_1,pvVar5);
          if ((char)uVar3 == '\0') goto LAB_00c06faf;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        } while (puVar4 < local_10);
      }
      goto LAB_00c070fa;
    }
  }
LAB_00c06faf:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c07130 @ 00c07130 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c07130(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bfb1b0((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00c06e80(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00c07170 @ 00c07170 ////

undefined4 * __thiscall FUN_00c07170(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02d3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da2dbc;
  FUN_00c06760((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00c07130(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c071d0 @ 00c071d0 ////

void __fastcall FUN_00c071d0(int param_1,void *param_2)

{
  thunk_FUN_00c06f50(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c071e0 @ 00c071e0 ////

void __fastcall FUN_00c071e0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_00c07210 @ 00c07210 ////

undefined4 FUN_00c07210(int param_1)

{
  char cVar1;
  
  cVar1 = LH_Archive_TransferU32(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00be65e0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_00be65e0(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00be65e0(param_1);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}


//// FUNCTION LH_Array_Constructor @ 00c07270 ////

undefined4 * __fastcall LH_Array_Constructor(undefined4 *param_1)

{
  *param_1 = 1;
  LH_Array_Constructor_Inner(param_1 + 1);
  return param_1;
}


//// FUNCTION LH_Array_Destructor @ 00c07290 ////

void __fastcall LH_Array_Destructor(int param_1)

{
  void *_Memory;
  undefined4 local_1c [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d02e13;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00c077e0(local_1c,(undefined4 *)(param_1 + 4));
  local_4._0_1_ = 1;
  _Memory = (void *)FUN_00c07400((int)local_1c);
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c07570(local_1c);
  local_4 = 0xffffffff;
  LH_Array_Destructor_Inner((undefined4 *)(param_1 + 4));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c07320 @ 00c07320 ////

undefined4 __thiscall FUN_00c07320(void *this,int param_1)

{
  char cVar1;
  
  cVar1 = LH_Archive_TransferU32(param_1);
  if ((cVar1 != '\0') && (*(int *)this == 1)) {
    cVar1 = FUN_00c07840(param_1,(void *)((int)this + 4));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c07360 @ 00c07360 ////

void __fastcall FUN_00c07360(int param_1)

{
  FUN_00c07210(param_1);
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c07370 @ 00c07370 ////

void __thiscall LH_Array_SetFilledSize_00c07370(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION LH_Array_SetAt_00c073a0 @ 00c073a0 ////

void __thiscall LH_Array_SetAt_00c073a0(void *this,uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) <= param_1) {
    LH_Assert(&param_1,"Index < FilledSize\n");
    DebugBreak();
    *(undefined4 *)(*(int *)this + uVar1 * 4) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)this + param_1 * 4) = param_2;
  return;
}


//// FUNCTION LH_Array_Constructor_Inner @ 00c073e0 ////

undefined4 * __fastcall LH_Array_Constructor_Inner(undefined4 *param_1)

{
  LH_Array_ZeroHeader(param_1);
  return param_1;
}


//// FUNCTION LH_Array_Destructor_Inner @ 00c073f0 ////

void __fastcall LH_Array_Destructor_Inner(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c07400 @ 00c07400 ////

int __fastcall FUN_00c07400(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  
  this = (void *)(param_1 + 4);
  iVar1 = GetField_8_00bd3950((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = GetField_8_00bd3950((int)this);
    iVar2 = LH_Array_GetAt_00c01410(this,iVar1 - 1U);
    LH_Array_SetFilledSize_00c07370(this,iVar1 - 1U);
    if (iVar2 != 0) break;
    iVar1 = GetField_8_00bd3950((int)this);
  }
  return iVar2;
}


//// FUNCTION FUN_00c07450 @ 00c07450 ////

void __fastcall FUN_00c07450(int param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (void *)(param_1 + 4);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = GetField_8_00bd3950((int)this);
  if (iVar1 != 0) {
    do {
      iVar1 = LH_Array_GetAt_00c01410(this,uVar4);
      if (iVar1 != 0) {
        LH_Array_SetAt_00c073a0(this,uVar3,iVar1);
        uVar3 = uVar3 + 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = GetField_8_00bd3950((int)this);
    } while (uVar4 < uVar2);
  }
  LH_Array_SetFilledSize_00c07370(this,uVar3);
  return;
}


//// FUNCTION FUN_00c074a0 @ 00c074a0 ////

int __fastcall FUN_00c074a0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02d8b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c07570 @ 00c07570 ////

void __fastcall FUN_00c07570(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02dab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2dc0;
  local_4 = 0;
  FUN_00c07450((int)param_1);
  local_4 = 0xffffffff;
  LH_Array_FreeBuffer_00bd38e0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c075c0 @ 00c075c0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c075c0(void *this,byte param_1)

{
  FUN_00c07570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c075f0 @ 00c075f0 ////

uint __thiscall FUN_00c075f0(void *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = LH_Archive_IsLoading(param_1);
  if (bVar1) {
    iVar2 = GetField_8_00bd3950((int)this);
    if (iVar2 != 0) {
      LH_Assert(&local_16,"Count () == 0\n");
      DebugBreak();
    }
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      LH_Array_Reserve_00bd39e0(this,local_14);
      pvVar5 = (void *)0x0;
      if (local_14 != 0) {
        do {
          puVar4 = operator_new(0x10);
          if (puVar4 == (undefined4 *)0x0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar5 = (void *)FUN_00c071e0(puVar4);
          }
          local_4 = 0;
          local_10 = pvVar5;
          FUN_00c074a0((int *)&local_10);
          uVar3 = FUN_00c07360(param_1);
          if ((char)uVar3 == '\0') {
            if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              _free(pvVar5);
            }
            goto LAB_00c0764f;
          }
          iVar2 = FUN_00bd44f0((int *)&local_10);
          FUN_00bd4b30(this,iVar2);
          local_14 = local_14 - 1;
          local_4 = 0xffffffff;
          if (local_10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(local_10);
          }
        } while (local_14 != 0);
        pvVar5 = (void *)0x0;
      }
LAB_00c07771:
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)pvVar5 >> 8),1);
    }
  }
  else {
    local_10 = (void *)GetField_8_00bd3950((int)this);
    uVar3 = LH_Archive_TransferU32(param_1);
    if ((char)uVar3 != '\0') {
      pvVar6 = (void *)0x0;
      pvVar5 = local_10;
      if (local_10 != (void *)0x0) {
        do {
          iVar2 = LH_Array_GetAt_00c01410(this,(uint)pvVar6);
          if (iVar2 == 0) {
            LH_Assert(&local_15,"object != NULL\n");
            DebugBreak();
          }
          uVar3 = FUN_00c07360(param_1);
          if ((char)uVar3 == '\0') goto LAB_00c0764f;
          pvVar6 = (void *)((int)pvVar6 + 1);
          pvVar5 = local_10;
        } while (pvVar6 < local_10);
      }
      goto LAB_00c07771;
    }
  }
LAB_00c0764f:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION LH_Array_AdoptRequireEmpty_00c077a0 @ 00c077a0 ////

void __thiscall LH_Array_AdoptRequireEmpty_00c077a0(void *this,void *param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  uStack_4 = this;
  iVar1 = GetField_8_00bd3950((int)this + 4);
  if (iVar1 != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"Array.Count () == 0\n");
    DebugBreak();
  }
  thunk_FUN_00bd4b50(param_1,(undefined4 *)((int)this + 4));
  return;
}


//// FUNCTION FUN_00c077e0 @ 00c077e0 ////

undefined4 * __thiscall FUN_00c077e0(void *this,void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00da2dc0;
  LH_Array_ZeroHeader((undefined4 *)((int)this + 4));
  local_4 = 0;
  LH_Array_AdoptRequireEmpty_00c077a0(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00c07840 @ 00c07840 ////

void __fastcall FUN_00c07840(int param_1,void *param_2)

{
  thunk_FUN_00c075f0(param_2,param_1);
  return;
}


//// FUNCTION FUN_00c07880 @ 00c07880 ////

void __fastcall FUN_00c07880(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c07884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)*param_1)();
  return;
}


//// FUNCTION FUN_00c078b0 @ 00c078b0 ////

void __thiscall FUN_00c078b0(void *this,uint param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  void **ppvVar3;
  uint *puVar4;
  void *local_4;
  
  local_4 = this;
  uVar1 = *(uint *)((int)this + 4);
  puVar4 = (uint *)((int)this + 8);
  param_1 = (((uVar1 - 1) + param_1) / uVar1) * uVar1;
  if (param_1 < *puVar4) {
    puVar4 = &param_1;
  }
  local_4 = (void *)*puVar4;
  if (param_2 == 0) {
    param_2 = 1;
  }
  param_1 = (((uVar1 - 1) + param_2) / uVar1) * uVar1;
  ppvVar3 = (void **)&param_1;
  if (local_4 <= param_1) {
    ppvVar3 = &local_4;
  }
  pvVar2 = *ppvVar3;
  if ((local_4 != *(void **)((int)this + 0x94)) || (pvVar2 != *(void **)((int)this + 0x98))) {
    *(void **)((int)this + 0x94) = local_4;
    *(void **)((int)this + 0x98) = pvVar2;
  }
  return;
}


//// FUNCTION FUN_00c07930 @ 00c07930 ////

void __fastcall
FUN_00c07930(uint param_1,uint *param_2,int param_3,uint *param_4,int param_5,undefined4 *param_6)

{
  uint uVar1;
  LPCSTR pCVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_119;
  int local_118;
  uint local_114;
  undefined **local_110;
  char local_10c;
  char local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02edb;
  local_c = ExceptionList;
  local_118 = 0;
  local_114 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00c099a0(&local_118,param_4,param_2);
  local_10c = (char)uVar1;
  if (local_10c == '\0') {
    local_110 = &PTR_LAB_00d9db7c;
    local_4 = 0;
    local_d = local_10c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(9);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"No overlap in the copy");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar2);
    DebugBreak();
  }
  puVar4 = (undefined4 *)(param_3 + (local_118 - *param_4));
  uVar1 = ((local_118 - *param_2) + param_5) % param_1;
  if (param_1 < local_114 + uVar1) {
    uVar5 = param_1 - uVar1;
    puVar6 = (undefined4 *)((int)param_6 + uVar1);
    puVar7 = puVar4;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar1 = uVar5 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    local_114 = local_114 - uVar5;
    puVar4 = (undefined4 *)(uVar5 + (int)puVar4);
  }
  else {
    param_6 = (undefined4 *)((int)param_6 + uVar1);
  }
  for (uVar1 = local_114 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar4 = *param_6;
    param_6 = param_6 + 1;
    puVar4 = puVar4 + 1;
  }
  for (local_114 = local_114 & 3; local_114 != 0; local_114 = local_114 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_6;
    param_6 = (undefined4 *)((int)param_6 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c07a90 @ 00c07a90 ////

void __thiscall FUN_00c07a90(void *this,undefined1 param_1,undefined **param_2)

{
  char cVar1;
  LPCSTR pCVar2;
  undefined **local_114;
  undefined1 uStack_110;
  undefined1 uStack_11;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d02ef0;
  pvStack_c = ExceptionList;
  local_114 = param_2;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(param_2 + 7) = param_1;
  cVar1 = (**(code **)(*(int *)((int)this + 0x2c) + 4))(&local_114);
  if (cVar1 == '\0') {
    local_114 = &PTR_LAB_00d9db7c;
    uStack_110 = 0;
    uStack_11 = 0;
    puStack_8 = (undefined1 *)0x0;
    LH_LogErrorMessage(&local_114,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_114,"(");
    FUN_00bbe970(0x4c);
    LH_LogErrorMessage(&local_114,") : ");
    LH_LogErrorMessage(&local_114,"Error priming the callback mailbox");
    LH_LogErrorMessage(&local_114,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_114);
    LH_Assert(&stack0xfffffee7,pCVar2);
    DebugBreak();
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00c07b80 @ 00c07b80 ////

uint __thiscall FUN_00c07b80(void *this,uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  undefined1 local_119;
  uint local_118;
  uint local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02f05;
  local_c = ExceptionList;
  puVar2 = param_1;
  if (*param_1 <= *(uint *)((int)this + 0x14)) {
    puVar2 = (uint *)((int)this + 0x14);
  }
  local_114 = *(int *)((int)this + 0x18) + *(uint *)((int)this + 0x14);
  local_118 = param_1[1] + *param_1;
  puVar3 = &local_118;
  if (local_114 <= local_118) {
    puVar3 = &local_114;
  }
  if (*puVar2 < *puVar3) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x13f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Range request overlap should have been caught...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar4);
    DebugBreak();
  }
  uVar1 = param_1[1];
  uVar5 = *(uint *)((int)this + 8);
  if (uVar1 <= uVar5) {
    if (*(int *)((int)this + 0x18) == 0) {
      ExceptionList = local_c;
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    uVar5 = uVar5 - *(int *)((int)this + 0x18);
    if (uVar1 <= uVar5) {
      uVar5 = *(uint *)((int)this + 0x14);
      if ((*(int *)((int)this + 0x18) + uVar5 != *param_1) && (uVar5 != uVar1 + *param_1)) {
        ExceptionList = local_c;
        return 0;
      }
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00c07cd0 @ 00c07cd0 ////

void __thiscall FUN_00c07cd0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00d02f1a;
  local_c = ExceptionList;
  iVar5 = 0;
  iVar4 = 0;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00bcecf0((undefined4 *)((int)this + 0x24));
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_00bced20((undefined4 *)((int)this + 0x24));
    if (piVar2 == (int *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = piVar2;
      LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x156);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"NULL last range");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_111,pCVar3);
      DebugBreak();
    }
    iVar5 = *piVar1;
    iVar4 = (piVar2[1] - iVar5) + *piVar2;
  }
  *param_1 = iVar5;
  param_1[1] = iVar4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c07de0 @ 00c07de0 ////

void __thiscall FUN_00c07de0(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00d02f2f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null asyncrange");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  FUN_00bcff70((void *)((int)this + 0x24),(int *)((int)this + 0x20),(int)param_1);
  FUN_00c0a0e0((void *)((int)this + 0x5c),param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c07ee0 @ 00c07ee0 ////

undefined4 __thiscall FUN_00c07ee0(void *this,undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  LPCSTR pCVar3;
  undefined1 uStack_11d;
  undefined4 *local_11c;
  void *local_118;
  undefined4 *local_114;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d02f44;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_11c = (undefined4 *)
              FUN_00bceff0((void *)((int)this + 0x24),(void *)((int)this + 0x20),param_1);
  if (local_11c != (undefined4 *)0x0) {
    local_118 = (void *)((int)this + 0x24);
    do {
      bVar1 = false;
      do {
        cVar2 = (**(code **)(*(int *)((int)this + 0x2c) + 8))(&local_114,0);
        if (cVar2 == '\0') {
          ppuStack_110 = &PTR_LAB_00d9db7c;
          uStack_10c = 0;
          uStack_d = 0;
          uStack_4 = 0;
          LH_LogErrorMessage(&ppuStack_110,".\\PKDiskBufferingCReader.cpp");
          LH_LogErrorMessage(&ppuStack_110,"(");
          FUN_00bbe970(0x3c);
          LH_LogErrorMessage(&ppuStack_110,") : ");
          LH_LogErrorMessage(&ppuStack_110,"Mailbox error");
          LH_LogErrorMessage(&ppuStack_110,"\n");
          pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
          LH_Assert(&uStack_11d,pCVar3);
          uStack_4 = 0xffffffff;
          ppuStack_110 = &PTR_LAB_00d9d9b4;
          DebugBreak();
        }
        if (local_114 == local_11c) {
          bVar1 = true;
        }
        FUN_00c07de0(this,local_114);
      } while (!bVar1);
      local_11c = (undefined4 *)FUN_00bceff0(local_118,(void *)((int)this + 0x20),param_1);
    } while (local_11c != (undefined4 *)0x0);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)*(int *)((int)this + 0x1c) >> 8),*(int *)((int)this + 0x1c) != 0);
}


//// FUNCTION FUN_00c08060 @ 00c08060 ////

void __thiscall FUN_00c08060(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  LPCSTR pCVar3;
  uint uVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02f59;
  local_c = ExceptionList;
  uVar4 = *(uint *)((int)this + 4);
  uVar4 = (((uVar4 - 1) + param_1) / uVar4) * uVar4;
  if (uVar4 - *(int *)((int)this + 8) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_00c07ee0(this,(int)this + 0x14);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    else {
      *(undefined4 *)((int)this + 0x18) = 0;
      if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 0xc));
      }
      *(uint *)((int)this + 8) = uVar4;
      if (uVar4 != 0) {
        pvVar2 = operator_new(uVar4);
        *(void **)((int)this + 0xc) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          local_110 = &PTR_LAB_00d9db7c;
          local_10c = 0;
          local_d = 0;
          local_4 = 0;
          LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
          LH_LogErrorMessage(&local_110,"(");
          FUN_00bbe970(0x83);
          LH_LogErrorMessage(&local_110,") : ");
          LH_LogErrorMessage(&local_110,"EMEM");
          LH_LogErrorMessage(&local_110,"\n");
          pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
          LH_Assert(&local_111,pCVar3);
          DebugBreak();
        }
      }
      FUN_00c078b0(this,*(uint *)((int)this + 0x94),0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c081b0 @ 00c081b0 ////

void __fastcall FUN_00c081b0(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d02f9a;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  FUN_00c08060(param_1,0);
  *(undefined ***)((int)param_1 + 0x88) = &PTR_LAB_00d9da84;
  local_4._0_1_ = 4;
  FUN_00bcea80((LPCRITICAL_SECTION)((int)param_1 + 0x70));
  local_4._0_1_ = 1;
  FUN_00c0dc90((int)param_1 + 0x5c);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00c09d20((undefined4 *)((int)param_1 + 0x2c));
  local_4 = 0xffffffff;
  *(undefined ***)((int)param_1 + 0x20) = &PTR_LAB_00da2df8;
  FUN_00bcffc0((undefined4 *)((int)param_1 + 0x24));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c08240 @ 00c08240 ////

undefined4 __thiscall FUN_00c08240(void *this,int param_1,uint *param_2,uint *param_3)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02faf;
  local_c = ExceptionList;
  if ((*param_3 < *(uint *)((int)this + 0x14)) ||
     (ExceptionList = &local_c,
     *(int *)((int)this + 0x18) + *(uint *)((int)this + 0x14) < param_3[1] + *param_3)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xb8);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Invalid copy range");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  uVar2 = FUN_00c07ee0(this,param_3);
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_00c07930(*(uint *)((int)this + 8),param_3,param_1,param_2,
                         (*(int *)((int)this + 0x10) - *(int *)((int)this + 0x14)) + *param_3,
                         *(undefined4 **)((int)this + 0xc));
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00c08370 @ 00c08370 ////

undefined1 __thiscall FUN_00c08370(void *this,int param_1,uint *param_2,uint *param_3)

{
  void *this_00;
  uint uVar1;
  LPCSTR pCVar2;
  undefined1 uVar3;
  undefined1 local_159;
  int local_158;
  int local_154;
  int local_150 [11];
  int *local_124;
  void *local_120;
  undefined **local_11c;
  undefined1 *local_118;
  undefined1 **local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02fda;
  local_c = ExceptionList;
  uVar3 = 0;
  local_158 = 0;
  local_154 = 0;
  ExceptionList = &local_c;
  uVar1 = FUN_00c099a0(&local_158,param_2,param_3);
  if ((char)uVar1 == '\0') {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xc6);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"No overlap");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_159,pCVar2);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if ((uint)(local_154 + *(int *)((int)this + 4) * 2) <= param_3[1]) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(199);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Insanity test");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_159,pCVar2);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  this_00 = *(void **)this;
  FUN_00bbbfb0(local_150);
  local_124 = local_150;
  local_114 = (undefined1 **)&local_124;
  local_11c = &PTR_FUN_00d9db74;
  local_118 = &LAB_00bbcb40;
  local_4 = 2;
  local_120 = this_00;
  uVar1 = FUN_00bc0060(this_00,local_158,local_154,(local_158 - *param_2) + param_1,0,&local_11c);
  if ((char)uVar1 != '\0') {
    FUN_00bbcef0(local_150);
    uVar3 = (undefined1)local_158;
  }
  local_4 = 0xffffffff;
  local_11c = &PTR_LAB_00d9da84;
  FUN_00bbb7a0(local_150);
  ExceptionList = local_c;
  return uVar3;
}


//// FUNCTION FUN_00c085b0 @ 00c085b0 ////

uint __thiscall FUN_00c085b0(void *this,int *param_1,undefined4 param_2)

{
  int *piVar1;
  LPCSTR pCVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_00d02fef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00c09850((uint *)((int)this + 0x5c));
  if (piVar1 == (int *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = piVar1;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xd3);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    local_4 = (int *)0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  *piVar1 = *param_1;
  piVar1[1] = param_1[1];
  uVar3 = FUN_00bc0060(*(void **)this,*param_1,param_1[1],param_2,piVar1,(int)this + 0x88);
  if ((char)uVar3 == '\0') {
    uVar4 = FUN_00c0a0e0((uint *)((int)this + 0x5c),piVar1);
  }
  else {
    uVar4 = FUN_00bcfac0((void *)((int)this + 0x24),(int *)((int)this + 0x20),(int)piVar1);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar4 >> 8),(char)uVar3);
}


//// FUNCTION FUN_00c086f0 @ 00c086f0 ////

undefined4 __thiscall FUN_00c086f0(void *this,int *param_1,int param_2,uint param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_11d;
  void *local_11c;
  int local_118;
  uint local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03004;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_11c = this;
  if (param_3 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xe3);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null max read size");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_11d,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  iVar2 = *param_1;
  uVar4 = param_1[1];
  while( true ) {
    if (uVar4 == 0) {
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    uVar3 = uVar4;
    if (param_3 < uVar4) {
      uVar3 = param_3;
    }
    local_118 = iVar2;
    local_114 = uVar3;
    param_1 = (int *)FUN_00c085b0(local_11c,&local_118,param_2);
    if ((char)param_1 == '\0') break;
    uVar4 = uVar4 - uVar3;
    param_2 = param_2 + uVar3;
    iVar2 = iVar2 + uVar3;
  }
  ExceptionList = local_c;
  return (uint)param_1 & 0xffffff00;
}


//// FUNCTION FUN_00c08830 @ 00c08830 ////

undefined4 __thiscall FUN_00c08830(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  LPCSTR pCVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_119;
  uint local_118;
  uint local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03024;
  local_c = ExceptionList;
  if ((*param_1 < *(uint *)((int)this + 0x14)) ||
     (ExceptionList = &local_c,
     *(int *)((int)this + 0x18) + *(uint *)((int)this + 0x14) < param_1[1] + *param_1)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0xfb);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Range invalid");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar2);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  uVar3 = FUN_00c07ee0(this,param_1);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    if (*(uint *)((int)this + 0x1c) < uVar6 + uVar1) {
      uVar4 = (uVar6 - *(uint *)((int)this + 0x1c)) + uVar1;
      if (*(uint *)((int)this + 4) <= uVar4) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 1;
        LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x105);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Overrun on alignment");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_119,pCVar2);
        local_4 = 0xffffffff;
        DebugBreak();
      }
      uVar6 = uVar6 - uVar4;
    }
    uVar4 = ((*(int *)((int)this + 0x10) - *(int *)((int)this + 0x14)) + uVar1) %
            *(uint *)((int)this + 8);
    local_118 = uVar1;
    if (*(uint *)((int)this + 8) < uVar4 + uVar6) {
      iVar5 = *(int *)((int)this + 8) - uVar4;
      local_114 = iVar5;
      uVar3 = FUN_00c086f0(this,(int *)&local_118,*(int *)((int)this + 0xc) + uVar4,param_2);
      if ((char)uVar3 != '\0') {
        local_118 = iVar5 + uVar1;
        local_114 = uVar6 - iVar5;
        uVar3 = FUN_00c086f0(this,(int *)&local_118,*(int *)((int)this + 0xc),param_2);
        if ((char)uVar3 != '\0') {
          ExceptionList = local_c;
          return 1;
        }
      }
      uVar3 = 0;
    }
    else {
      local_114 = uVar6;
      uVar3 = FUN_00c086f0(this,(int *)&local_118,*(int *)((int)this + 0xc) + uVar4,param_2);
    }
  }
  ExceptionList = local_c;
  return uVar3;
}


//// FUNCTION FUN_00c08a90 @ 00c08a90 ////

uint __thiscall FUN_00c08a90(void *this,uint *param_1)

{
  LPCSTR pCVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_151;
  undefined4 local_150 [11];
  undefined4 *local_124;
  undefined4 local_120;
  undefined **local_11c;
  undefined1 *local_118;
  undefined4 **local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0304f;
  local_c = ExceptionList;
  if ((*param_1 < *(uint *)((int)this + 0x14)) ||
     (ExceptionList = &local_c,
     *(int *)((int)this + 0x18) + *(uint *)((int)this + 0x14) < param_1[1] + *param_1)) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x11d);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Range invalid");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_151,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  uVar2 = FUN_00c07ee0(this,param_1);
  if ((char)uVar2 != '\0') {
    uVar3 = *(undefined4 *)this;
    FUN_00bbbfb0(local_150);
    local_124 = local_150;
    local_114 = &local_124;
    local_11c = &PTR_FUN_00d9db74;
    local_118 = &LAB_00bbcb40;
    uVar2 = *param_1;
    uVar7 = param_1[1];
    local_4 = 1;
    local_120 = uVar3;
    if (*(uint *)((int)this + 0x1c) < uVar7 + uVar2) {
      uVar5 = (uVar7 - *(uint *)((int)this + 0x1c)) + uVar2;
      if (*(uint *)((int)this + 4) <= uVar5) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4._0_1_ = 2;
        local_4._1_3_ = 0;
        LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x127);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Overrun on alignment");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_151,pCVar1);
        local_4 = CONCAT31(local_4._1_3_,1);
        local_110 = &PTR_LAB_00d9d9b4;
        DebugBreak();
      }
      uVar7 = uVar7 - uVar5;
    }
    uVar5 = ((*(int *)((int)this + 0x10) - *(int *)((int)this + 0x14)) + uVar2) %
            *(uint *)((int)this + 8);
    if (*(uint *)((int)this + 8) < uVar5 + uVar7) {
      iVar6 = *(int *)((int)this + 8) - uVar5;
      uVar5 = FUN_00bbd200(local_150,uVar2,iVar6,*(int *)((int)this + 0xc) + uVar5);
      if (((char)uVar5 == '\0') ||
         (uVar2 = FUN_00bbd200(local_150,iVar6 + uVar2,uVar7 - iVar6,
                               *(undefined4 *)((int)this + 0xc)), (char)uVar2 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar2 = FUN_00bbd200(local_150,uVar2,uVar7,*(int *)((int)this + 0xc) + uVar5);
      uVar4 = (undefined1)uVar2;
    }
    local_11c = &PTR_LAB_00d9da84;
    local_4 = 0xffffffff;
    uVar3 = FUN_00bbb7a0(local_150);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar3 >> 8),uVar4);
  }
  ExceptionList = local_c;
  return uVar2;
}


//// FUNCTION FUN_00c08d20 @ 00c08d20 ////

undefined4 __thiscall FUN_00c08d20(void *this,uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  LPCSTR pCVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_11d;
  uint local_11c;
  uint local_118;
  uint local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03085;
  local_c = ExceptionList;
  puVar1 = (uint *)((int)this + 0x14);
  puVar2 = param_1;
  if (*param_1 <= *(uint *)((int)this + 0x14)) {
    puVar2 = puVar1;
  }
  local_11c = *(int *)((int)this + 0x18) + *(uint *)((int)this + 0x14);
  local_114 = param_1[1] + *param_1;
  puVar3 = &local_114;
  if (local_11c <= local_114) {
    puVar3 = &local_11c;
  }
  ExceptionList = &local_c;
  if (*puVar2 < *puVar3) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x15f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Range request overlap should have been caught");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_11d,pCVar4);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (*(uint *)((int)this + 8) < param_1[1]) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x160);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Range request is too big");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_11d,pCVar4);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (*(int *)((int)this + 0x18) + *puVar1 == *param_1) {
    uVar5 = *(int *)((int)this + 0x18) + param_1[1];
    *(uint *)((int)this + 0x18) = uVar5;
    if (*(uint *)((int)this + 8) < uVar5) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
      uVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 8);
      local_11c = *puVar1;
      local_118 = uVar6;
      uVar5 = FUN_00c07ee0(this,&local_11c);
      if ((char)uVar5 == '\0') goto LAB_00c090f1;
      if (uVar6 % *(uint *)((int)this + 4) != 0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 2;
        LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x176);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Difference not aligned");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_11d,pCVar4);
        DebugBreak();
      }
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 8);
      uVar5 = *(int *)((int)this + 0x10) + uVar6;
      *puVar1 = *puVar1 + uVar6;
      *(uint *)((int)this + 0x10) = uVar5;
    }
  }
  else if (param_1[1] + *param_1 == *puVar1) {
    uVar5 = *(uint *)((int)this + 8);
    *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1[1];
    *puVar1 = *param_1;
    *(uint *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (uVar5 - param_1[1]);
    if (uVar5 < *(uint *)((int)this + 0x18)) {
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 1;
      }
      local_11c = *puVar1 + *(int *)((int)this + 8);
      uVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 8);
      local_118 = uVar6;
      uVar5 = FUN_00c07ee0(this,&local_11c);
      if ((char)uVar5 == '\0') goto LAB_00c090f1;
      if (uVar6 % *(uint *)((int)this + 4) != 0) {
        local_110 = &PTR_LAB_00d9db7c;
        local_10c = 0;
        local_d = 0;
        local_4 = 3;
        LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
        LH_LogErrorMessage(&local_110,"(");
        FUN_00bbe970(0x18e);
        LH_LogErrorMessage(&local_110,") : ");
        LH_LogErrorMessage(&local_110,"Difference not aligned");
        LH_LogErrorMessage(&local_110,"\n");
        pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
        LH_Assert(&local_11d,pCVar4);
        DebugBreak();
      }
      uVar5 = *(uint *)((int)this + 8);
      *(uint *)((int)this + 0x18) = uVar5;
    }
  }
  else {
    if ((*(int *)((int)this + 0x18) != 0) && (param_2 != (undefined1 *)0x0)) {
      *param_2 = 1;
    }
    uVar5 = FUN_00c07ee0(this,puVar1);
    if ((char)uVar5 == '\0') {
LAB_00c090f1:
      ExceptionList = local_c;
      return uVar5 & 0xffffff00;
    }
    *puVar1 = *param_1;
    *(uint *)((int)this + 0x18) = param_1[1];
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar5 >> 8),1);
}


//// FUNCTION FUN_00c09120 @ 00c09120 ////

undefined4 __fastcall FUN_00c09120(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *unaff_EDI;
  void *local_4;
  
  local_4 = param_1;
  uVar2 = (**(code **)(*(int *)((int)param_1 + 0x2c) + 8))(&local_4,1);
  cVar1 = (char)uVar2;
  while (cVar1 != '\0') {
    FUN_00c07de0(param_1,unaff_EDI);
    uVar2 = (**(code **)(*(int *)((int)param_1 + 0x2c) + 8))(&stack0xfffffff4,1);
    cVar1 = (char)uVar2;
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00c09170 @ 00c09170 ////

undefined1 __thiscall FUN_00c09170(void *this,uint param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  char local_49;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10 [3];
  
  local_30 = param_1;
  local_2c = param_2;
  if (*(uint *)((int)this + 0x1c) < param_1 + param_2) {
    return 0;
  }
  if (*(int *)((int)this + 8) == 0) {
    uVar1 = FUN_00c08370(this,param_3,&local_30,&local_30);
    return uVar1;
  }
  local_44 = *(uint *)((int)this + 4);
  local_48 = (param_1 / local_44) * local_44;
  local_38 = 0;
  local_34 = 0;
  local_20 = 0;
  local_1c = 0;
  local_44 = (((local_44 - local_48) + param_1 + -1 + param_2) / local_44) * local_44;
  uVar3 = FUN_00c099a0(&local_20,(uint *)((int)this + 0x14),&local_48);
  if ((char)uVar3 != '\0') {
    local_38 = local_48;
    if (local_48 < local_20) {
      local_34 = local_20 - local_48;
    }
    else {
      local_34 = 0;
    }
    if (local_1c + local_20 < local_44 + local_48) {
      local_44 = local_44 + ((local_48 - local_1c) - local_20);
    }
    else {
      local_44 = 0;
    }
    local_48 = local_1c + local_20;
    uVar4 = FUN_00c08240(this,param_3,&local_30,&local_20);
    if ((char)uVar4 == '\0') goto LAB_00c09355;
  }
  if (local_44 != 0) {
    puVar6 = (uint *)((int)this + 8);
    if (local_44 < *(uint *)((int)this + 8)) {
      puVar6 = &local_44;
    }
    uVar3 = *puVar6;
    if (uVar3 != local_44) {
      local_14 = local_44 - uVar3;
      local_18 = local_48;
      cVar2 = FUN_00c08370(this,param_3,&local_30,&local_18);
      if (cVar2 == '\0') goto LAB_00c09355;
      local_48 = local_48 + (local_44 - uVar3);
      local_44 = uVar3;
    }
    uVar4 = FUN_00c08d20(this,&local_48,(undefined1 *)0x0);
    if ((((char)uVar4 == '\0') || (uVar3 = FUN_00c08a90(this,&local_48), (char)uVar3 == '\0')) ||
       (uVar4 = FUN_00c08240(this,param_3,&local_30,&local_48), (char)uVar4 == '\0'))
    goto LAB_00c09355;
  }
  if (local_34 != 0) {
    uVar3 = FUN_00c07b80(this,&local_38);
    if ((char)uVar3 == '\0') {
      cVar2 = FUN_00c08370(this,param_3,&local_30,&local_38);
    }
    else {
      uVar4 = FUN_00c08d20(this,&local_38,(undefined1 *)0x0);
      if (((char)uVar4 == '\0') || (uVar3 = FUN_00c08a90(this,&local_38), (char)uVar3 == '\0'))
      goto LAB_00c09355;
      uVar4 = FUN_00c08240(this,param_3,&local_30,&local_38);
      cVar2 = (char)uVar4;
    }
    if (cVar2 == '\0') goto LAB_00c09355;
  }
  if (*(int *)((int)this + 0x94) == 0) {
    return 1;
  }
  uVar4 = FUN_00c09120(this);
  if ((char)uVar4 == '\0') {
LAB_00c09355:
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 0;
  }
  uVar3 = *(uint *)((int)this + 4);
  local_40 = local_30;
  local_3c = local_2c;
  FUN_00c09750(&local_40,uVar3);
  local_40 = local_40 + local_3c;
  uVar5 = *(uint *)((int)this + 0x1c);
  if (uVar5 <= local_40) {
    return 1;
  }
  local_3c = *(uint *)((int)this + 0x94);
  if (uVar5 < *(uint *)((int)this + 0x94) + local_40) {
    local_3c = uVar5 - local_40;
    FUN_00c09750(&local_40,uVar3);
  }
  uVar3 = local_40;
  FUN_00c07cd0(this,(int *)&local_18);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if ((*(int *)((int)this + 0x18) == 0) ||
     (uVar5 = FUN_00c09a40((void *)((int)this + 0x14),&local_40,&local_30,local_10,&local_28),
     uVar3 = local_40, (char)uVar5 == '\0')) {
    if (local_14 != 0) {
      return 1;
    }
    local_2c = local_3c;
    local_24 = 0;
    local_30 = uVar3;
  }
  uVar3 = local_18;
  if (local_2c != 0) {
    uVar5 = *(uint *)((int)this + 8);
    if (local_14 != 0) {
      uVar5 = uVar5 + (-local_14 - local_18) + *(int *)((int)this + 0x14);
    }
    if (uVar5 < local_2c) {
      local_30 = local_30 + (local_2c - uVar5);
      local_2c = local_2c - (local_2c - uVar5);
    }
    if (local_2c != 0) {
      uVar4 = FUN_00c08d20(this,&local_30,&local_49);
      if (((char)uVar4 == '\0') ||
         (uVar4 = FUN_00c08830(this,&local_30,*(uint *)((int)this + 0x98)), (char)uVar4 == '\0'))
      goto LAB_00c09523;
      if (local_49 != '\0') {
        return 1;
      }
    }
  }
  if (local_24 == 0) {
    return 1;
  }
  uVar5 = *(uint *)((int)this + 8);
  if (local_14 != 0) {
    uVar5 = uVar5 + ((uVar3 - *(int *)((int)this + 0x18)) - *(int *)((int)this + 0x14));
  }
  if (uVar5 < local_24) {
    local_24 = uVar5;
  }
  if (local_24 == 0) {
    return 1;
  }
  uVar4 = FUN_00c08d20(this,&local_28,(undefined1 *)0x0);
  if (((char)uVar4 != '\0') &&
     (uVar4 = FUN_00c08830(this,&local_28,*(uint *)((int)this + 0x98)), (char)uVar4 != '\0')) {
    return 1;
  }
LAB_00c09523:
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 0;
}


//// FUNCTION FUN_00c09540 @ 00c09540 ////

undefined4 * __thiscall FUN_00c09540(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LPCSTR pCVar4;
  undefined1 local_119;
  void *local_118;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d030e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  puVar1 = (undefined4 *)((int)this + 0x1c);
  *puVar1 = 0;
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00da2df8;
  local_118 = this;
  FUN_00bcf170((int *)((int)this + 0x24));
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00da2efc;
  local_4 = 0;
  FUN_00c09c70((undefined4 *)((int)this + 0x2c));
  local_114 = (void *)((int)this + 0x5c);
  local_4._0_1_ = 1;
  FUN_00c0dc40(local_114,0x20,0x400);
  local_4._0_1_ = 2;
  FUN_00bcea70((LPCRITICAL_SECTION)((int)this + 0x70));
  *(undefined ***)((int)this + 0x88) = &PTR_FUN_00da2e34;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(void **)((int)this + 0x90) = this;
  *(code **)((int)this + 0x8c) = FUN_00c07a90;
  uVar3 = *(int *)((int)this + 4) + 7U & 0xfffffff8;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(uint *)((int)this + 4) = uVar3;
  if (uVar3 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff);
    local_4._0_1_ = 5;
    LH_LogErrorMessage(&local_110,".\\PKDiskBufferingCReader.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x97);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Zero min read bytesize...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_119,pCVar4);
    local_4 = CONCAT31(local_4._1_3_,4);
    DebugBreak();
  }
  uVar3 = (**(code **)(**(int **)this + 8))();
  *(uint *)((int)this + 4) = ((*(int *)((int)this + 4) + -1 + uVar3) / uVar3) * uVar3;
  cVar2 = (**(code **)**(undefined4 **)this)(puVar1);
  if (cVar2 == '\0') {
    *puVar1 = 0;
  }
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_00c09750 @ 00c09750 ////

void __thiscall FUN_00c09750(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  iVar2 = (uVar1 / param_1) * param_1;
  *(int *)this = iVar2;
  *(uint *)((int)this + 4) =
       (((uVar1 - iVar2) + param_1 + -1 + *(int *)((int)this + 4)) / param_1) * param_1;
  return;
}


//// FUNCTION FUN_00c097b0 @ 00c097b0 ////

undefined4 * __fastcall FUN_00c097b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00bcf160(param_1 + 2);
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}


//// FUNCTION FUN_00c097d0 @ 00c097d0 ////

int * __fastcall FUN_00c097d0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00da2dc4_00c097f0 @ 00c097f0 ////

void __fastcall SetVtable_00da2dc4_00c097f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2dc4;
  return;
}


//// FUNCTION FUN_00c09800 @ 00c09800 ////

void * __fastcall FUN_00c09800(void *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c0dc40(param_1,0x20,0x400);
  local_4 = 0;
  FUN_00bcea70((LPCRITICAL_SECTION)((int)param_1 + 0x14));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c09850 @ 00c09850 ////

int * __fastcall FUN_00c09850(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d02e51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcea90((LPCRITICAL_SECTION)(param_1 + 5));
  piVar1 = FUN_00c0df90(param_1);
  FUN_00bceaa0((LPCRITICAL_SECTION)(param_1 + 5));
  local_4 = 0;
  piVar2 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    FUN_00bcf160(piVar1 + 2);
    *(undefined1 *)(piVar1 + 7) = 1;
    piVar2 = piVar1;
  }
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION FUN_00c09910 @ 00c09910 ////

void __fastcall FUN_00c09910(int param_1)

{
  FUN_00bcf880((int *)(param_1 + 8));
  return;
}


//// FUNCTION FUN_00c09980 @ 00c09980 ////

void __fastcall FUN_00c09980(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c099a0 @ 00c099a0 ////

uint __thiscall FUN_00c099a0(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint **ppuVar6;
  
  puVar5 = param_1;
  if (*param_1 <= *param_2) {
    puVar5 = param_2;
  }
  puVar5 = (uint *)*puVar5;
  *(uint **)this = puVar5;
  puVar4 = param_2 + 1;
  uVar2 = *param_2;
  puVar1 = param_1 + 1;
  uVar3 = *param_1;
  param_2 = (uint *)(*puVar4 + uVar2);
  param_1 = (uint *)(*puVar1 + uVar3);
  ppuVar6 = &param_1;
  if ((uint *)(*puVar4 + uVar2) <= (uint *)(*puVar1 + uVar3)) {
    ppuVar6 = &param_2;
  }
  puVar4 = *ppuVar6;
  if (puVar4 <= puVar5) {
    return (uint)puVar4 & 0xffffff00;
  }
  *(int *)((int)this + 4) = (int)puVar4 - (int)puVar5;
  return CONCAT31((int3)((uint)((int)puVar4 - (int)puVar5) >> 8),1);
}


//// FUNCTION FUN_00c09a00 @ 00c09a00 ////

bool __thiscall FUN_00c09a00(void *this,uint *param_1)

{
  uint **ppuVar1;
  uint *puVar2;
  uint *local_4;
  
  puVar2 = this;
  if (*(uint *)this <= *param_1) {
    puVar2 = param_1;
  }
  local_4 = (uint *)(param_1[1] + *param_1);
  ppuVar1 = &param_1;
  if (local_4 <= (uint *)(*(int *)((int)this + 4) + *(uint *)this)) {
    ppuVar1 = &local_4;
  }
  return (uint *)*puVar2 < *ppuVar1;
}


//// FUNCTION FUN_00c09a40 @ 00c09a40 ////

uint __thiscall FUN_00c09a40(void *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint **ppuVar4;
  uint *local_4;
  
  puVar2 = this;
  if (*(uint *)this <= *param_1) {
    puVar2 = param_1;
  }
  puVar2 = (uint *)*puVar2;
  local_4 = (uint *)(param_1[1] + *param_1);
  ppuVar4 = &param_1;
  if (local_4 <= (uint *)(*(int *)((int)this + 4) + *(uint *)this)) {
    ppuVar4 = &local_4;
  }
  puVar1 = *ppuVar4;
  if (puVar1 < puVar2) {
    return (uint)puVar2 & 0xffffff00;
  }
  param_3[1] = (int)puVar1 - (int)puVar2;
  *param_3 = (uint)puVar2;
  *param_2 = *param_1;
  if (puVar2 < (uint *)*param_1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (int)puVar2 - (int)*param_1;
  }
  param_2[1] = uVar3;
  *param_4 = (uint)puVar1;
  if (puVar1 <= (uint *)(param_1[1] + *param_1)) {
    uVar3 = (param_1[1] - (int)puVar1) + *param_1;
    param_4[1] = uVar3;
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  param_4[1] = 0;
  return 1;
}


//// FUNCTION FUN_00c09ae0 @ 00c09ae0 ////

void __fastcall FUN_00c09ae0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02e68;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bcea80((LPCRITICAL_SECTION)(param_1 + 0x14));
  local_4 = 0xffffffff;
  FUN_00c0dc90(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION SetVtable_00d9da84_00c09b30 @ 00c09b30 ////

void __fastcall SetVtable_00d9da84_00c09b30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9da84;
  return;
}


//// FUNCTION FUN_00c09c20 @ 00c09c20 ////

void __fastcall FUN_00c09c20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2df8;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c09c70 @ 00c09c70 ////

undefined4 * __fastcall FUN_00c09c70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d02e93;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2e20;
  FUN_00bcea70((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bceaf0(param_1 + 7,0,1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c09ce0 @ 00c09ce0 ////

uint __thiscall FUN_00c09ce0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)this + 0x10))(param_1);
  if ((char)uVar1 == '\0') {
    if (param_1 != 0) {
      return param_1 & 0xffffff00;
    }
    do {
      FUN_00bcebd0((undefined4 *)((int)this + 0x1c));
      uVar1 = (**(code **)(*(int *)this + 0x10))(0);
    } while ((char)uVar1 == '\0');
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c09d20 @ 00c09d20 ////

void __fastcall FUN_00c09d20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d02ebe;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da2e20;
  local_4 = 2;
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_00bceac0(param_1 + 7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00bcea80((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_LAB_00da2dc4;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c09da0 @ 00c09da0 ////

bool __fastcall FUN_00c09da0(int param_1)

{
  int iVar1;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_00bc1490(local_8);
  return iVar1 == 0;
}


//// FUNCTION FUN_00c09dd0 @ 00c09dd0 ////

uint __thiscall FUN_00c09dd0(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  FUN_00bc1470(local_8,(LPCRITICAL_SECTION)((int)this + 4));
  if (*(int *)((int)this + 0x24) == 0) {
    uVar1 = FUN_00bc1490(local_8);
    return uVar1 & 0xffffff00;
  }
  *param_1 = *(undefined4 *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x2c) * 4);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + -1;
  *(uint *)((int)this + 0x2c) = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
  uVar2 = FUN_00bc1490(local_8);
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION ScalarDeletingDtor_00c09e60 @ 00c09e60 ////

undefined4 * __thiscall ScalarDeletingDtor_00c09e60(void *this,byte param_1)

{
  FUN_00c09d20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c09e80 @ 00c09e80 ////

void * __thiscall ScalarDeletingDtor_00c09e80(void *this,byte param_1)

{
  FUN_00c09910((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c09ea0 @ 00c09ea0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c09ea0(void *this,byte param_1)

{
  SetVtable_00d9da84_00c09b30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c09ec0 @ 00c09ec0 ////

undefined4 * __fastcall FUN_00c09ec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2df8;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c09ee0 @ 00c09ee0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c09ee0(void *this,byte param_1)

{
  FUN_00c09c20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c09f00 @ 00c09f00 ////

void __fastcall FUN_00c09f00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2df8;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c09f20 @ 00c09f20 ////

undefined4 __fastcall FUN_00c09f20(uint *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = FUN_00c09a00(param_1,param_2);
  if ((!bVar1) && (*param_1 < *param_2)) {
    return 0xffffffff;
  }
  bVar1 = FUN_00c09a00(param_2,param_1);
  if ((!bVar1) && (*param_2 < *param_1)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00c09f70 @ 00c09f70 ////

uint __thiscall FUN_00c09f70(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d030f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bc1470(local_14,(LPCRITICAL_SECTION)((int)this + 4));
  local_4 = 0;
  uVar1 = FUN_00c0a010((void *)((int)this + 0x20),param_1);
  if ((char)uVar1 == '\0') {
    local_4 = 0xffffffff;
    uVar2 = FUN_00bc1490(local_14);
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  FUN_00bcead0((undefined4 *)((int)this + 0x1c));
  local_4 = 0xffffffff;
  uVar1 = FUN_00bc1490(local_14);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c0a010 @ 00c0a010 ////

undefined4 __thiscall FUN_00c0a010(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == *(int *)((int)this + 4)) {
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = iVar1 * 2;
    }
    uVar3 = FUN_00c0a060(this,uVar2);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
  }
  iVar1 = *(int *)this;
  *(undefined4 *)
   (iVar1 + ((uint)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) % *(uint *)((int)this + 8))
            * 4) = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}


//// FUNCTION FUN_00c0a060 @ 00c0a060 ////

uint __thiscall FUN_00c0a060(void *this,uint param_1)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  
  if (param_1 != *(uint *)((int)this + 8)) {
    if (param_1 < *(uint *)((int)this + 4)) {
      return in_EAX & 0xffffff00;
    }
    pvVar3 = (void *)0x0;
    if (param_1 != 0) {
      pvVar3 = operator_new(param_1 * 4);
      uVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          uVar1 = *(int *)((int)this + 0xc) + uVar2;
          uVar2 = uVar2 + 1;
          *(undefined4 *)((int)pvVar3 + uVar2 * 4 + -4) =
               *(undefined4 *)(*(int *)this + (uVar1 % *(uint *)((int)this + 8)) * 4);
        } while (uVar2 < *(uint *)((int)this + 4));
      }
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(uint *)((int)this + 8) = param_1;
    if (*(void **)this != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    *(void **)this = pvVar3;
    in_EAX = 0;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


//// FUNCTION FUN_00c0a0e0 @ 00c0a0e0 ////

void __thiscall FUN_00c0a0e0(void *this,undefined4 *param_1)

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
  puStack_8 = &LAB_00d0311b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKAllocatorsLinkTime.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x28);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  FUN_00bcf880(param_1 + 2);
  FUN_00bcea90((LPCRITICAL_SECTION)((int)this + 0x14));
  FUN_00c0dd90(this,param_1);
  FUN_00bceaa0((LPCRITICAL_SECTION)((int)this + 0x14));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0a2e0 @ 00c0a2e0 ////

undefined4 * __fastcall FUN_00c0a2e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da2df8;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da2efc;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c0a300 @ 00c0a300 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0a300(void *this,byte param_1)

{
  FUN_00c09f00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION LH_VerifyLUGHeader @ 00c0a320 ////

uint __fastcall LH_VerifyLUGHeader(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 *puStack_14;
  undefined4 uStack_10;
  undefined1 local_c [12];
  
  puStack_14 = local_c;
  uStack_10 = 8;
  uVar1 = (**(code **)(*param_1 + 4))();
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  bVar5 = true;
  iVar2 = 9;
  local_c[0] = 0;
  ppuVar3 = &puStack_14;
  pcVar4 = "LiOnHeAd";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *(char *)ppuVar3 == *pcVar4;
    ppuVar3 = (undefined1 **)((int)ppuVar3 + 1);
    pcVar4 = pcVar4 + 1;
  } while (bVar5);
  return (uint)bVar5;
}


//// FUNCTION LH_GetFirstSegmentInfo @ 00c0a370 ////

uint __fastcall LH_GetFirstSegmentInfo(int *param_1,void *param_2)

{
  uint uVar1;
  char acStack_34 [4];
  undefined1 local_24 [24];
  int *piStack_c;
  
  acStack_34[0] = ' ';
  acStack_34[1] = '\0';
  acStack_34[2] = '\0';
  acStack_34[3] = '\0';
  uVar1 = (**(code **)(*param_1 + 4))();
  if ((char)uVar1 != '\0') {
    piStack_c = (int *)((uint)piStack_c & 0xffffff00);
    uVar1 = (**(code **)(*param_1 + 4))(&stack0xffffffd0,4);
    if ((char)uVar1 != '\0') {
      FUN_00bbfaa0(param_2,acStack_34);
      *piStack_c = (int)local_24;
      return CONCAT31((int3)((uint)local_24 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION CLHSegmentReader_Clear @ 00c0a3e0 ////

void __fastcall CLHSegmentReader_Clear(int *param_1)

{
  int *this;
  int *_Memory;
  
  this = param_1 + 1;
  _Memory = (int *)FUN_00bcecf0(this);
  while( true ) {
    if (_Memory == (int *)0x0) {
      return;
    }
    FUN_00bcff70(this,param_1,(int)_Memory);
    if (_Memory != (int *)0x0) break;
    _Memory = (int *)FUN_00bcecf0(this);
  }
  CLHSegmentEntry_Destructor(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION LH_DecodeSegmentStructure @ 00c0a430 ////

uint __thiscall LH_DecodeSegmentStructure(void *this,int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  LPCSTR pCVar6;
  int iVar7;
  undefined1 local_14d;
  int *local_14c;
  undefined4 local_148 [2];
  int local_140 [6];
  int local_128;
  undefined4 *local_124;
  undefined **local_120;
  undefined1 local_11c;
  undefined1 local_1d;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d0321f;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_14c = this;
  CLHSegmentReader_Clear(this);
  FUN_00bd9d00(local_140,param_1);
  local_c = 0;
  uVar2 = LH_VerifyLUGHeader(local_140);
  if ((char)uVar2 == '\0') {
    local_c = 0xffffffff;
    uVar2 = FUN_00bd9e50(local_140);
    ExceptionList = local_14;
    return uVar2 & 0xffffff00;
  }
  bVar1 = false;
  iVar3 = FUN_00bd9f00((int)local_140);
  if (iVar3 != 0) {
    do {
      FUN_00be1e00(local_148);
      local_c._0_1_ = 1;
      uVar2 = LH_GetFirstSegmentInfo(local_140,local_148);
      if ((char)uVar2 == '\0') {
LAB_00c0a624:
        bVar1 = true;
        FUN_00bd9fd0(local_140,0,1);
      }
      else {
        iVar3 = FUN_00bcef50((int *)((int)this + 4),this,local_148,local_148);
        if (iVar3 != 0) goto LAB_00c0a624;
        iVar3 = GetField_4_00bd9ef0((int)local_140);
        uVar4 = FUN_00bd9fd0(local_140,local_128,0);
        if ((char)uVar4 == '\0') goto LAB_00c0a624;
        local_124 = operator_new(0x28);
        local_c._0_1_ = 2;
        if (local_124 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = CLHSegmentEntry_Constructor(local_124);
        }
        local_c._0_1_ = 1;
        if (puVar5 == (undefined4 *)0x0) {
          local_120 = &PTR_LAB_00d9db7c;
          local_11c = 0;
          local_1d = 0;
          local_c._0_1_ = 3;
          LH_LogErrorMessage(&local_120,".\\CLHSegmentReader.cpp");
          LH_LogErrorMessage(&local_120,"(");
          FUN_00bbe970(100);
          LH_LogErrorMessage(&local_120,") : ");
          LH_LogErrorMessage(&local_120,"EMEM");
          LH_LogErrorMessage(&local_120,"\n");
          pCVar6 = (LPCSTR)FUN_00bbf3a0((int *)&local_120);
          LH_Assert(&local_14d,pCVar6);
          local_c._0_1_ = 1;
          local_120 = &PTR_LAB_00d9d9b4;
          DebugBreak();
        }
        puVar5[5] = iVar3;
        iVar7 = GetField_4_00bd9ef0((int)local_140);
        puVar5[6] = iVar7 - iVar3;
        FUN_00be2010(puVar5 + 7,(int)local_148);
        FUN_00bcfac0(local_14c + 1,local_14c,(int)puVar5);
        this = local_14c;
      }
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00be1f10(local_148);
      iVar3 = FUN_00bd9f00((int)local_140);
    } while (iVar3 != 0);
    if (bVar1) {
      CLHSegmentReader_Clear(this);
      local_c = 0xffffffff;
      uVar2 = FUN_00bd9e50(local_140);
      ExceptionList = local_14;
      return uVar2 & 0xffffff00;
    }
  }
  local_c = 0xffffffff;
  uVar4 = FUN_00bd9e50(local_140);
  ExceptionList = local_14;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


//// FUNCTION CLHSegmentReader_HasSegment @ 00c0a700 ////

bool __thiscall CLHSegmentReader_HasSegment(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bcef50((void *)((int)this + 4),this,param_1,param_1);
  return iVar1 != 0;
}


//// FUNCTION CLHSegmentReader_GetSegmentOffsetAndSize @ 00c0a720 ////

undefined4 __thiscall
CLHSegmentReader_GetSegmentOffsetAndSize(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00bcef50((void *)((int)this + 4),this,param_1,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(iVar2 + 0x14);
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  *param_3 = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION CLHSegmentReader_GetCachedSegmentStream @ 00c0a750 ////

int __thiscall CLHSegmentReader_GetCachedSegmentStream(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00bcef50((void *)((int)this + 4),this,param_1,param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    iVar1 = FUN_00c0ac90((int *)(iVar1 + 0x24));
    return iVar1;
  }
  return 0;
}


//// FUNCTION CLHSegmentReader_Destructor @ 00c0a780 ////

void __fastcall CLHSegmentReader_Destructor(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03231;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  CLHSegmentReader_Clear(param_1);
  local_4 = 0xffffffff;
  *param_1 = (int)&PTR_LAB_00da3034;
  FUN_00bcffc0(param_1 + 1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CLHSegmentReader_CacheSegment @ 00c0a7d0 ////

undefined4 __thiscall CLHSegmentReader_CacheSegment(void *this,int *param_1,undefined4 param_2)

{
  int *this_00;
  int iVar1;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uStack_115;
  void *pvStack_114;
  undefined **ppuStack_110;
  undefined1 uStack_10c;
  void *pvStack_18;
  undefined1 uStack_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d03254;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00bcef50((void *)((int)this + 4),this,param_2,param_2);
  if (iVar1 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  this_00 = (int *)(iVar1 + 0x24);
  if (*(int *)(iVar1 + 0x24) != 0) {
    puVar2 = (undefined4 *)FUN_00c0ad60(this_00);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  pvStack_114 = operator_new(0x10);
  uStack_4 = 0;
  if (pvStack_114 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00bc12f0(pvStack_114,*(uint *)(iVar1 + 0x18));
  }
  uStack_4 = 0xffffffff;
  FUN_00c0ae30(this_00,(int)puVar2);
  if (*this_00 == 0) {
    ppuStack_110 = &PTR_LAB_00d9db7c;
    uStack_10c = 0;
    uStack_d = 0;
    uStack_4 = 1;
    LH_LogErrorMessage(&ppuStack_110,".\\CLHSegmentReader.cpp");
    LH_LogErrorMessage(&ppuStack_110,"(");
    FUN_00bbe970(0x81);
    LH_LogErrorMessage(&ppuStack_110,") : ");
    LH_LogErrorMessage(&ppuStack_110,"EMEM");
    LH_LogErrorMessage(&ppuStack_110,"\n");
    pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_110);
    LH_Assert(&uStack_115,pCVar3);
    uStack_4 = 0xffffffff;
    ppuStack_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  if (*(int *)(*this_00 + 0xc) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00bbc590((void *)(*this_00 + 8),0);
  }
  uVar5 = (**(code **)(*param_1 + 4))
                    (iVar4,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18));
  if ((char)uVar5 == '\0') {
    puVar2 = (undefined4 *)FUN_00c0ad60(this_00);
    uVar6 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar6 = (**(code **)*puVar2)(1);
    }
    uVar6 = uVar6 & 0xffffff00;
  }
  else {
    uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  ExceptionList = pvStack_18;
  return uVar6;
}


//// FUNCTION CLHSegmentReader_Constructor @ 00c0a980 ////

undefined4 * __fastcall CLHSegmentReader_Constructor(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3034;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da3074;
  return param_1;
}


//// FUNCTION FUN_00c0a9d0 @ 00c0a9d0 ////

int * __fastcall FUN_00c0a9d0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION FUN_00c0a9f0 @ 00c0a9f0 ////

void __fastcall FUN_00c0a9f0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00c0aaa0 @ 00c0aaa0 ////

void __fastcall FUN_00c0aaa0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_00c0ab10 @ 00c0ab10 ////

void __fastcall FUN_00c0ab10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3034;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION CLHSegmentEntry_Constructor @ 00c0ab70 ////

undefined4 * __fastcall CLHSegmentEntry_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bcf160(param_1);
  local_4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00be1e00(param_1 + 7);
  param_1[9] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CLHSegmentEntry_Destructor @ 00c0abc0 ////

void __fastcall CLHSegmentEntry_Destructor(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03183;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (*(code *)**(undefined4 **)param_1[9])(1);
    param_1[9] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00be1f10(param_1 + 7);
  local_4 = 0xffffffff;
  FUN_00bcf880(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0ac30 @ 00c0ac30 ////

int * __thiscall ScalarDeletingDtor_00c0ac30(void *this,byte param_1)

{
  CLHSegmentEntry_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0ac50 @ 00c0ac50 ////

undefined4 * __fastcall FUN_00c0ac50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3034;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c0ac70 @ 00c0ac70 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0ac70(void *this,byte param_1)

{
  FUN_00c0ab10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0ac90 @ 00c0ac90 ////

int __fastcall FUN_00c0ac90(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0319b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c0ad60 @ 00c0ad60 ////

int __fastcall FUN_00c0ad60(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d031bb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c0ae30 @ 00c0ae30 ////

void __thiscall FUN_00c0ae30(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d031e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0afa0 @ 00c0afa0 ////

void __fastcall FUN_00c0afa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3034;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c0afe0 @ 00c0afe0 ////

uint FUN_00c0afe0(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)FUN_00bbf3a0(param_2);
  iVar2 = FUN_00bbf680(param_1,pbVar1);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)FUN_00bbf3a0(param_1);
  iVar2 = FUN_00bbf680(param_2,pbVar1);
  return (uint)(iVar2 < 0);
}


//// FUNCTION FUN_00c0b030 @ 00c0b030 ////

undefined4 * __fastcall FUN_00c0b030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3034;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da3074;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c0b050 @ 00c0b050 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0b050(void *this,byte param_1)

{
  FUN_00c0afa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0b080 @ 00c0b080 ////

undefined4 __fastcall FUN_00c0b080(void *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar1 = FUN_00be5a10(param_1,0,0x14,&local_14);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *param_2 = local_14;
  *param_3 = local_10;
  return CONCAT31((int3)((uint)local_10 >> 8),1);
}


//// FUNCTION FUN_00c0b0c0 @ 00c0b0c0 ////

undefined4 __thiscall FUN_00c0b0c0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = GetField_8_00be59d0(param_1);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = GetField_0xc_00be5a60(param_1);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c0b0f0 @ 00c0b0f0 ////

undefined4 __thiscall FUN_00c0b0f0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = GetField_8_00be59d0(param_1);
  *(undefined4 *)((int)this + 0x18) = uVar1;
  uVar1 = GetField_0xc_00be5a60(param_1);
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c0b120 @ 00c0b120 ////

void __fastcall FUN_00c0b120(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 local_8 [8];
  
  cVar1 = (**(code **)(*param_1 + 4))(local_8,8);
  if (cVar1 == '\0') {
    return;
  }
  *param_2 = unaff_EDI;
  FUN_00bd9f30(param_1,param_2 + 1,unaff_ESI + 1U & 0xfffffffe);
  return;
}


//// FUNCTION FUN_00c0b170 @ 00c0b170 ////

int __thiscall FUN_00c0b170(void *this,int *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = FUN_00bcecf0((undefined4 *)((int)this + 0x24));
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = (char *)FUN_00bbf3a0(param_1);
    iVar3 = FUN_00bbf6e0((void *)(iVar1 + 0xc),pcVar2);
    if (iVar3 == 0) break;
    iVar1 = FUN_00bcf3f0((void *)((int)this + 0x24),(int *)((int)this + 0x20),iVar1);
  }
  return iVar1;
}


//// FUNCTION FUN_00c0b1c0 @ 00c0b1c0 ////

void * FUN_00c0b1c0(void *param_1)

{
  undefined **local_30;
  undefined1 local_2c;
  undefined1 local_f;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03308;
  local_c = ExceptionList;
  local_30 = &PTR_LAB_00da30e8;
  local_2c = 0;
  local_f = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bbf290(&local_30);
  FUN_00bbf290(&local_30);
  FUN_00bbf290(&local_30);
  FUN_00bbf290(&local_30);
  FUN_00be1eb0(param_1,&local_30);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0b250 @ 00c0b250 ////

uint __fastcall FUN_00c0b250(int *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  LPCSTR pCVar3;
  int unaff_EBX;
  uint uStack_120;
  int local_11c;
  undefined **ppuStack_118;
  undefined1 uStack_114;
  undefined1 uStack_15;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00d0331d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = (**(code **)(*param_1 + 4))(&local_11c,0xc);
  if (((((char)uVar1 != '\0') && (unaff_EBX == 0x46464952)) && (local_11c == 0x45564157)) &&
     (uVar1 = uStack_120, 3 < uStack_120)) {
    uVar1 = uStack_120 - 4;
    iVar2 = FUN_00bd9f00((int)param_1);
    if (iVar2 == uStack_120 - 2) {
      ppuStack_118 = &PTR_LAB_00d9db7c;
      uStack_114 = 0;
      uStack_15 = 0;
      pvStack_c = (void *)0x0;
      LH_LogErrorMessage(&ppuStack_118,".\\RiffCInfo.cpp");
      LH_LogErrorMessage(&ppuStack_118,"(");
      FUN_00bbe970(0x1d8);
      LH_LogErrorMessage(&ppuStack_118,") : ");
      LH_LogErrorMessage(&ppuStack_118,"WARNING: Fudging the RIFF header because out by 2 bytes...")
      ;
      LH_LogErrorMessage(&ppuStack_118,"\n");
      pCVar3 = (LPCSTR)FUN_00bbf3a0((int *)&ppuStack_118);
      LH_Assert(&stack0xfffffedb,pCVar3);
      pvStack_c = (void *)0xffffffff;
      ppuStack_118 = &PTR_LAB_00d9d9b4;
      uVar1 = FUN_00bd9f00((int)param_1);
    }
    uVar1 = FUN_00bd9f30(param_1,param_2,uVar1);
    ExceptionList = pvStack_14;
    return uVar1;
  }
  ExceptionList = pvStack_14;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c0b3a0 @ 00c0b3a0 ////

void __fastcall FUN_00c0b3a0(void *param_1)

{
  FUN_00bbc590(param_1,0);
  return;
}


//// FUNCTION FUN_00c0b3b0 @ 00c0b3b0 ////

void __fastcall FUN_00c0b3b0(void *param_1)

{
  FUN_00bbc590(param_1,0);
  return;
}


//// FUNCTION FUN_00c0b3f0 @ 00c0b3f0 ////

uint __thiscall FUN_00c0b3f0(void *this,void *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = GetField_0xc_00be5a60((int)param_1);
  if (uVar1 < 0xe) {
    return uVar1 & 0xffffff00;
  }
  uVar7 = uVar1;
  if (uVar1 < 0x12) {
    uVar7 = 0x12;
  }
  uVar2 = GetField_8_00be59d0((int)param_1);
  *(undefined4 *)((int)this + 0x10) = uVar2;
  *(uint *)((int)this + 0x14) = uVar7;
  pvVar3 = operator_new(uVar7);
  FUN_00c0c7e0(this,(int)pvVar3,uVar7);
  iVar4 = FUN_00bbc590(this,0);
  uVar2 = FUN_00be5a10(param_1,0,uVar1,iVar4);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (uVar1 < uVar7) {
    puVar5 = (undefined4 *)FUN_00bbc590(this,uVar1);
    uVar2 = 0;
    for (uVar6 = uVar7 - uVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar1 = uVar7 - uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_00c0b490 @ 00c0b490 ////

undefined4 * __thiscall FUN_00c0b490(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  LPCSTR pCVar2;
  undefined1 local_115;
  void *local_114;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03340;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)
           FUN_00bcef50((void *)((int)this + 0x24),(int *)((int)this + 0x20),&param_1,&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_114 = operator_new(0x28);
    local_4 = 0;
    if (local_114 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)FUN_00c0c220((int)local_114);
    }
    local_4 = 0xffffffff;
    if (puVar1 == (undefined4 *)0x0) {
      local_110 = &PTR_LAB_00d9db7c;
      local_10c = 0;
      local_d = 0;
      local_4 = 1;
      LH_LogErrorMessage(&local_110,".\\RiffCInfo.cpp");
      LH_LogErrorMessage(&local_110,"(");
      FUN_00bbe970(0x54);
      LH_LogErrorMessage(&local_110,") : ");
      LH_LogErrorMessage(&local_110,"EMEM");
      LH_LogErrorMessage(&local_110,"\n");
      pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
      LH_Assert(&local_115,pCVar2);
      local_4 = 0xffffffff;
      local_110 = &PTR_LAB_00d9d9b4;
      DebugBreak();
    }
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[1] = 0;
    FUN_00bcfac0((void *)((int)this + 0x24),(int *)((int)this + 0x20),(int)puVar1);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_00c0b5e0 @ 00c0b5e0 ////

undefined4 __fastcall FUN_00c0b5e0(void *param_1,undefined4 param_2,void *param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *_Memory;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint uVar6;
  void *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03352;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00be5a10(param_1,0,4,param_2);
  if ((char)uVar1 == '\0') {
    ExceptionList = local_c;
    return uVar1;
  }
  iVar2 = GetField_0xc_00be5a60((int)param_1);
  uVar6 = iVar2 - 4;
  uVar1 = FUN_00bbfaa0(param_3,"");
  if (uVar6 != 0) {
    _Memory = operator_new(iVar2 - 3U);
    local_4 = 0;
    local_14 = _Memory;
    local_10 = iVar2 - 3U;
    iVar2 = FUN_00bbc590(&local_14,0);
    uVar3 = FUN_00be5a10(param_1,4,uVar6,iVar2);
    if ((char)uVar3 == '\0') {
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      ExceptionList = local_c;
      return uVar3 & 0xffffff00;
    }
    puVar4 = (undefined1 *)FUN_00bbc590(&local_14,uVar6);
    *puVar4 = 0;
    pcVar5 = (char *)FUN_00bbc590(&local_14,0);
    uVar1 = FUN_00bbfaa0(param_3,pcVar5);
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c0b6f0 @ 00c0b6f0 ////

undefined4 __thiscall FUN_00c0b6f0(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c [2];
  int local_44;
  undefined4 local_40 [4];
  int local_30 [7];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d03374;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00bd9bc0(local_30,param_1);
  local_c = 0;
  iVar2 = FUN_00bd9f00((int)local_30);
  while( true ) {
    if (iVar2 == 0) {
      local_c = 0xffffffff;
      uVar3 = FUN_00bd9e50(local_30);
      ExceptionList = local_14;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    FUN_00be59e0(local_40);
    local_c._0_1_ = 1;
    cVar1 = FUN_00c0b120(local_30,&local_44);
    if (cVar1 == '\0') break;
    if (local_44 == 0x6c62616c) {
      FUN_00be1e00(local_4c);
      local_c._0_1_ = 2;
      uVar3 = FUN_00c0b5e0(local_40,&local_50,local_4c);
      if ((char)uVar3 == '\0') {
        local_c._0_1_ = 1;
        FUN_00be1f10(local_4c);
        break;
      }
      puVar4 = FUN_00c0b490(this,local_50);
      FUN_00be2010(puVar4 + 3,(int)local_4c);
      local_c._0_1_ = 1;
      FUN_00be1f10(local_4c);
    }
    else if (local_44 == 0x7478746c) {
      uVar3 = FUN_00c0b080(local_40,&local_58,&local_54);
      if ((char)uVar3 == '\0') break;
      puVar4 = FUN_00c0b490(this,local_58);
      puVar4[2] = local_54;
    }
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00be6330(local_40);
    iVar2 = FUN_00bd9f00((int)local_30);
  }
  local_c = (uint)local_c._1_3_ << 8;
  FUN_00be6330(local_40);
  local_c = 0xffffffff;
  uVar5 = FUN_00bd9e50(local_30);
  ExceptionList = local_14;
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00c0b880 @ 00c0b880 ////

uint __fastcall FUN_00c0b880(void *param_1,void *param_2)

{
  uint uVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  void *local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03386;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bbfaa0(param_2,"");
  uVar1 = GetField_0xc_00be5a60((int)param_1);
  uVar6 = 0;
  if (uVar1 != 0) {
    _Memory = operator_new(uVar1 + 1);
    local_4 = 0;
    local_14 = _Memory;
    local_10 = uVar1 + 1;
    iVar2 = FUN_00bbc590(&local_14,0);
    uVar3 = FUN_00be5a10(param_1,0,uVar1,iVar2);
    if ((char)uVar3 == '\0') {
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      ExceptionList = local_c;
      return uVar3 & 0xffffff00;
    }
    puVar4 = (undefined1 *)FUN_00bbc590(&local_14,uVar1);
    *puVar4 = 0;
    pcVar5 = (char *)FUN_00bbc590(&local_14,0);
    uVar6 = FUN_00bbfaa0(param_2,pcVar5);
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


//// FUNCTION FUN_00c0b960 @ 00c0b960 ////

undefined4 __thiscall FUN_00c0b960(void *this,undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  uint local_38;
  undefined4 local_34 [4];
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d033a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd9bc0(local_24,param_1);
  local_4 = 0;
  iVar2 = FUN_00bd9f00((int)local_24);
  do {
    if (iVar2 == 0) {
      local_4 = 0xffffffff;
      uVar3 = FUN_00bd9e50(local_24);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    FUN_00be59e0(local_34);
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar1 = FUN_00c0b120(local_24,&local_38);
    if (cVar1 == '\0') goto LAB_00c0ba45;
    if (local_38 < 0x4d414e4a) {
      if (local_38 == 0x4d414e49) {
        pvVar5 = (void *)((int)this + 0x48);
      }
      else if (local_38 == 0x474e4549) {
        pvVar5 = (void *)((int)this + 0x40);
      }
      else {
        if (local_38 != 0x4a425349) goto LAB_00c0ba05;
        pvVar5 = (void *)((int)this + 0x50);
      }
LAB_00c0b9f8:
      uVar3 = FUN_00c0b880(local_34,pvVar5);
      if ((char)uVar3 == '\0') {
LAB_00c0ba45:
        local_4 = local_4 & 0xffffff00;
        FUN_00be6330(local_34);
        local_4 = 0xffffffff;
        uVar4 = FUN_00bd9e50(local_24);
        ExceptionList = local_c;
        return uVar4 & 0xffffff00;
      }
    }
    else if (local_38 == 0x544d4349) {
      pvVar5 = (void *)((int)this + 0x38);
      goto LAB_00c0b9f8;
    }
LAB_00c0ba05:
    local_4 = local_4 & 0xffffff00;
    FUN_00be6330(local_34);
    iVar2 = FUN_00bd9f00((int)local_24);
  } while( true );
}


//// FUNCTION FUN_00c0ba80 @ 00c0ba80 ////

uint __thiscall FUN_00c0ba80(void *this,undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_34 [4];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d033ba;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd9bc0(local_24,param_1);
  local_4 = 0;
  uVar1 = LH_ReadFileData(local_24,&param_1,4);
  if ((char)uVar1 != '\0') {
    FUN_00be59e0(local_34);
    local_4._0_1_ = 1;
    uVar2 = FUN_00bd9f10(local_24,local_34);
    if ((char)uVar2 != '\0') {
      if (param_1 != (undefined4 *)0x4f464e49) {
        if (param_1 == (undefined4 *)0x6c746461) {
          uVar2 = FUN_00c0b6f0(this,local_34);
          if ((char)uVar2 == '\0') {
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00be6330(local_34);
            local_4 = 0xffffffff;
            uVar1 = FUN_00bd9e50(local_24);
            ExceptionList = local_c;
            return uVar1 & 0xffffff00;
          }
        }
LAB_00c0bb84:
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00be6330(local_34);
        local_4 = 0xffffffff;
        uVar2 = FUN_00bd9e50(local_24);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      uVar2 = FUN_00c0b960(this,local_34);
      if ((char)uVar2 != '\0') goto LAB_00c0bb84;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00be6330(local_34);
  }
  local_4 = 0xffffffff;
  uVar1 = FUN_00bd9e50(local_24);
  ExceptionList = local_c;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00c0bbc0 @ 00c0bbc0 ////

uint FUN_00c0bbc0(undefined4 *param_1)

{
  uint uVar1;
  void *_Memory;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint local_44;
  void *local_40;
  int local_3c;
  void *local_38;
  uint local_34;
  undefined4 local_30 [7];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00d033d4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00bd9bc0(local_30,param_1);
  local_c = 0;
  uVar1 = LH_ReadFileData(local_30,&local_44,4);
  uVar3 = local_44;
  if ((char)uVar1 == '\0') {
LAB_00c0bc6b:
    local_c = 0xffffffff;
    uVar3 = FUN_00bd9e50(local_30);
    ExceptionList = local_14;
    return uVar3 & 0xffffff00;
  }
  if (local_44 != 0) {
    _Memory = operator_new(local_44 * 0x18);
    local_34 = uVar3;
    local_c = CONCAT31(local_c._1_3_,1);
    local_38 = _Memory;
    iVar2 = FUN_00c0cba0(&local_38,0);
    uVar3 = LH_ReadFileData(local_30,iVar2,local_44 * 0x18);
    if ((char)uVar3 == '\0') {
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_00c0bc6b;
    }
    uVar3 = 0;
    if (local_44 != 0) {
      do {
        puVar4 = (undefined4 *)FUN_00c0cba0(&local_38,uVar3);
        local_3c = FUN_00c0cba0(&local_38,uVar3);
        puVar4 = FUN_00c0b490(local_40,*puVar4);
        puVar4[1] = *(undefined4 *)(local_3c + 0x14);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_44);
    }
    if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  local_c = 0xffffffff;
  uVar5 = FUN_00bd9e50(local_30);
  ExceptionList = local_14;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00c0bd10 @ 00c0bd10 ////

void __fastcall FUN_00c0bd10(undefined4 *param_1)

{
  void *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00d03433;
  local_c = ExceptionList;
  local_4 = 6;
  ExceptionList = &local_c;
  LH_Array_SetFilledSize_00c0c490(param_1 + 0xb,0);
  _Memory = (void *)FUN_00bcecf0(param_1 + 9);
  if (_Memory != (void *)0x0) {
    do {
      FUN_00bcff70(param_1 + 9,param_1 + 8,(int)_Memory);
      if (_Memory != (void *)0x0) {
        local_4._0_1_ = 7;
        FUN_00bcf880((int *)((int)_Memory + 0x14));
        local_4 = CONCAT31(local_4._1_3_,6);
        FUN_00be1f10((undefined4 *)((int)_Memory + 0xc));
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = (void *)FUN_00bcecf0(param_1 + 9);
    } while (_Memory != (void *)0x0);
  }
  local_4._0_1_ = 5;
  FUN_00be1f10(param_1 + 0x14);
  local_4._0_1_ = 4;
  FUN_00be1f10(param_1 + 0x12);
  local_4._0_1_ = 3;
  FUN_00be1f10(param_1 + 0x10);
  local_4._0_1_ = 2;
  FUN_00be1f10(param_1 + 0xe);
  local_4._0_1_ = 1;
  LH_Array_FreeBuffer_00c0c4d0(param_1 + 0xb);
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[8] = &PTR_LAB_00da30c0;
  FUN_00bcffc0(param_1 + 9);
  if ((void *)*param_1 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*param_1);
}


//// FUNCTION FUN_00c0be20 @ 00c0be20 ////

undefined4 * __fastcall FUN_00c0be20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0347c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_4 = 0;
  param_1[8] = &PTR_LAB_00da30c0;
  FUN_00bcf170(param_1 + 9);
  param_1[8] = &PTR_LAB_00da3150;
  FUN_00c0c4c0(param_1 + 0xb);
  local_4._0_1_ = 2;
  FUN_00be1e00(param_1 + 0xe);
  local_4._0_1_ = 3;
  FUN_00be1e00(param_1 + 0x10);
  local_4._0_1_ = 4;
  FUN_00be1e00(param_1 + 0x12);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_00be1e00(param_1 + 0x14);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0bec0 @ 00c0bec0 ////

undefined4 __thiscall FUN_00c0bec0(void *this,int *param_1,byte param_2)

{
  undefined4 *this_00;
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  undefined4 local_60 [4];
  uint local_50;
  undefined4 local_4c [4];
  int local_3c [6];
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d034a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00bd9d00(local_24,param_1);
  local_4 = 0;
  FUN_00be59e0(local_60);
  local_4._0_1_ = 1;
  uVar2 = FUN_00c0b250(local_24,local_60);
  if ((char)uVar2 != '\0') {
    FUN_00bd9bc0(local_3c,local_60);
    bVar5 = (param_2 & 2) != 0;
    local_4 = CONCAT31(local_4._1_3_,2);
    if ((param_2 & 1) != 0) {
      bVar5 = bVar5 | 2;
    }
    bVar6 = (param_2 & 0x1c) != 0;
    iVar3 = FUN_00bd9f00((int)local_3c);
    while (iVar3 != 0) {
      FUN_00be59e0(local_4c);
      local_4 = CONCAT31(local_4._1_3_,3);
      cVar1 = FUN_00c0b120(local_3c,&local_50);
      if (cVar1 == '\0') {
LAB_00c0bfd2:
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00be6330(local_4c);
        goto LAB_00c0bfe0;
      }
      if (local_50 < 0x5453494d) {
        if (local_50 == 0x5453494c) {
          if (bVar6) {
            uVar4 = FUN_00c0ba80(this,local_4c);
            cVar1 = (char)uVar4;
joined_r0x00c0c035:
            if (cVar1 == '\0') goto LAB_00c0bfd2;
          }
        }
        else if (local_50 == 0x20657563) {
          if (bVar6) {
            uVar4 = FUN_00c0bbc0(local_4c);
            cVar1 = (char)uVar4;
            goto joined_r0x00c0c035;
          }
        }
        else if (local_50 == 0x20746d66) {
          if (((bVar5 & 2) != 0) && (uVar4 = FUN_00c0b3f0(this,local_4c), (char)uVar4 == '\0'))
          goto LAB_00c0bfd2;
          bVar5 = bVar5 & 0xfd;
        }
      }
      else if (local_50 == 0x61746164) {
        if (((bVar5 & 1) != 0) && (uVar4 = FUN_00c0b0c0(this,(int)local_4c), (char)uVar4 == '\0'))
        goto LAB_00c0bfd2;
        bVar5 = bVar5 & 0xfe;
      }
      else if ((local_50 == 0x6e6f696c) && (bVar6)) {
        uVar4 = FUN_00c0b0f0(this,(int)local_4c);
        cVar1 = (char)uVar4;
        goto joined_r0x00c0c035;
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00be6330(local_4c);
      iVar3 = FUN_00bd9f00((int)local_3c);
    }
    if (bVar5 == 0) {
      this_00 = (undefined4 *)((int)this + 0x2c);
      uVar2 = FUN_00bcf120((undefined4 *)((int)this + 0x24));
      LH_Array_Reserve_00c0c3d0(this_00,uVar2);
      iVar3 = FUN_00bcecf0((undefined4 *)((int)this + 0x24));
      if (iVar3 != 0) {
        do {
          FUN_00c0ccb0(this_00,iVar3);
          iVar3 = FUN_00bcf3f0((void *)((int)this + 0x24),(int *)((int)this + 0x20),iVar3);
        } while (iVar3 != 0);
      }
      FUN_00c0d670(this_00);
      local_4._0_1_ = 1;
      FUN_00bd9e50(local_3c);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00be6330(local_60);
      local_4 = 0xffffffff;
      uVar4 = FUN_00bd9e50(local_24);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar4 >> 8),1);
    }
LAB_00c0bfe0:
    local_4._0_1_ = 1;
    FUN_00bd9e50(local_3c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00be6330(local_60);
  local_4 = 0xffffffff;
  uVar2 = FUN_00bd9e50(local_24);
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00c0c140 @ 00c0c140 ////

int __fastcall FUN_00c0c140(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d034c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  local_10 = operator_new(0x58);
  local_4 = 0;
  if (local_10 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_00c0be20(local_10);
  }
  local_4 = 1;
  local_10 = piVar1;
  uVar2 = FUN_00c0bec0(piVar1,param_1,param_2);
  if ((char)uVar2 == '\0') {
    local_4 = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      FUN_00c0bd10(piVar1);
                    /* WARNING: Subroutine does not return */
      _free(piVar1);
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = FUN_00c0cab0((int *)&local_10);
  piVar1 = local_10;
  local_4 = 0xffffffff;
  if (local_10 != (int *)0x0) {
    FUN_00c0bd10(local_10);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  ExceptionList = local_c;
  return iVar3;
}


//// FUNCTION FUN_00c0c220 @ 00c0c220 ////

int __fastcall FUN_00c0c220(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0326b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00be1e00((undefined4 *)(param_1 + 0xc));
  local_4 = 0;
  FUN_00bcf160((undefined4 *)(param_1 + 0x14));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0c270 @ 00c0c270 ////

int __fastcall FUN_00c0c270(int param_1)

{
  FUN_00be59e0((undefined4 *)(param_1 + 4));
  return param_1;
}


//// FUNCTION FUN_00c0c280 @ 00c0c280 ////

void __fastcall FUN_00c0c280(int param_1)

{
  FUN_00be6330((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION FUN_00c0c290 @ 00c0c290 ////

void __fastcall FUN_00c0c290(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0328b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00bcf880((int *)(param_1 + 0x14));
  local_4 = 0xffffffff;
  FUN_00be1f10((undefined4 *)(param_1 + 0xc));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0c2e0 @ 00c0c2e0 ////

int * __fastcall FUN_00c0c2e0(int *param_1)

{
  FUN_00bcf170(param_1);
  return param_1;
}


//// FUNCTION SetVtable_00d9d9b4_00c0c300 @ 00c0c300 ////

void __fastcall SetVtable_00d9d9b4_00c0c300(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9d9b4;
  return;
}


//// FUNCTION FUN_00c0c340 @ 00c0c340 ////

void __fastcall FUN_00c0c340(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION LH_Array_Reserve_00c0c3d0 @ 00c0c3d0 ////

void __thiscall LH_Array_Reserve_00c0c3d0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 4) < param_1) {
    uStack_4 = this;
    puVar2 = operator_new(param_1 * 4);
    if (puVar2 == (undefined4 *)0x0) {
      LH_Assert((void *)((int)&uStack_4 + 3),"data != NULL\n");
      DebugBreak();
    }
    if (*(int *)((int)this + 4) != 0) {
      if (*(int *)this == 0) {
        LH_Assert((void *)((int)&uStack_4 + 3),"Data != NULL\n");
        DebugBreak();
      }
      iVar3 = *(int *)((int)this + 8);
      if (iVar3 != 0) {
        puVar4 = *(undefined4 **)this;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)this);
    }
    if (*(int *)this != 0) {
      LH_Assert(&param_1,"Data == NULL\n");
      DebugBreak();
    }
    *(undefined4 **)this = puVar2;
    *(uint *)((int)this + 4) = uVar1;
  }
  return;
}


//// FUNCTION LH_Array_SetFilledSize_00c0c490 @ 00c0c490 ////

void __thiscall LH_Array_SetFilledSize_00c0c490(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    LH_Assert(&param_1,"NewSize <= FilledSize\n");
    DebugBreak();
  }
  *(uint *)((int)this + 8) = uVar1;
  return;
}


//// FUNCTION FUN_00c0c4c0 @ 00c0c4c0 ////

void __fastcall FUN_00c0c4c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION LH_Array_FreeBuffer_00c0c4d0 @ 00c0c4d0 ////

void __fastcall LH_Array_FreeBuffer_00c0c4d0(undefined4 *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if (param_1[2] != 0) {
    LH_Assert((void *)((int)&uStack_4 + 3),"FilledSize == 0\n");
    DebugBreak();
  }
  return;
}


//// FUNCTION FUN_00c0c530 @ 00c0c530 ////

void __thiscall FUN_00c0c530(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  if (*(int *)((int)this + 4) - uVar1 < param_1) {
    uVar2 = (uVar1 - *(int *)((int)this + 4)) + param_1;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    LH_Array_Reserve_00c0c3d0(this,uVar1 + uVar2);
  }
  return;
}


//// FUNCTION LH_Array_PushHeap_00c0c630 @ 00c0c630 ////

void __fastcall LH_Array_PushHeap_00c0c630(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (param_3 < param_2) {
    do {
      iVar2 = (param_2 + -1) / 2;
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if ((iVar1 == 0) || (param_4 == 0)) {
        LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
    } while ((*(uint *)(iVar1 + 4) < *(uint *)(param_4 + 4)) &&
            (*(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4),
            param_2 = iVar2, param_3 < iVar2));
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}


//// FUNCTION FUN_00c0c6c0 @ 00c0c6c0 ////

void __fastcall FUN_00c0c6c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar3 = param_3;
  puVar6 = (undefined4 *)((int)param_3 - (int)param_1 >> 2);
  puVar5 = (undefined4 *)(param_2 - (int)param_1 >> 2);
  puVar7 = puVar5;
  param_3 = puVar6;
  while (puVar2 = puVar7, puVar2 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)((int)param_3 % (int)puVar2);
    param_3 = puVar2;
  }
  if (((int)param_3 < (int)puVar6) && (0 < (int)param_3)) {
    puVar7 = param_1 + (int)param_3;
    do {
      uVar1 = *puVar7;
      puVar6 = puVar7 + (int)puVar5;
      puVar2 = puVar7;
      if (puVar7 + (int)puVar5 == puVar3) {
        puVar6 = param_1;
      }
      while (puVar6 != puVar7) {
        *puVar2 = *puVar6;
        iVar4 = (int)puVar3 - (int)puVar6 >> 2;
        puVar2 = puVar6;
        if ((int)puVar5 < iVar4) {
          puVar6 = puVar6 + (int)puVar5;
        }
        else {
          puVar6 = param_1 + ((int)puVar5 - iVar4);
        }
      }
      *puVar2 = uVar1;
      puVar7 = puVar7 + -1;
      param_3 = (undefined4 *)((int)param_3 + -1);
    } while (param_3 != (undefined4 *)0x0);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0c7c0 @ 00c0c7c0 ////

void * __thiscall ScalarDeletingDtor_00c0c7c0(void *this,byte param_1)

{
  FUN_00c0c290((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0c7e0 @ 00c0c7e0 ////

void __thiscall FUN_00c0c7e0(void *this,int param_1,int param_2)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d032b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x71);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x72);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
    *(int *)((int)this + 4) = param_2;
  }
  else {
    *(int *)((int)this + 4) = param_2;
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0c9c0 @ 00c0c9c0 ////

void __fastcall FUN_00c0c9c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da30c0;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0ca90 @ 00c0ca90 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0ca90(void *this,byte param_1)

{
  SetVtable_00d9d9b4_00c0c300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0cab0 @ 00c0cab0 ////

int __fastcall FUN_00c0cab0(int *param_1)

{
  int iVar1;
  LPCSTR pCVar2;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d032cb;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x2f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Shouls have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  iVar1 = *param_1;
  *param_1 = 0;
  ExceptionList = local_c;
  return iVar1;
}


//// FUNCTION FUN_00c0cba0 @ 00c0cba0 ////

int __thiscall FUN_00c0cba0(void *this,uint param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d032eb;
  local_c = ExceptionList;
  if (*(uint *)((int)this + 4) <= param_1) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDeleteArray.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x5a);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Index ");
    LH_PrintResourceID(&local_110,param_1);
    LH_LogErrorMessage(&local_110," is out of range (");
    LH_PrintResourceID(&local_110,*(undefined4 *)((int)this + 4));
    LH_LogErrorMessage(&local_110,")");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *(int *)this + param_1 * 0x18;
}


//// FUNCTION FUN_00c0ccb0 @ 00c0ccb0 ////

void __thiscall FUN_00c0ccb0(void *this,undefined4 param_1)

{
  FUN_00c0c530(this,1);
  *(undefined4 *)(*(int *)this + *(int *)((int)this + 8) * 4) = param_1;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return;
}


//// FUNCTION LH_Array_MedianOfThree_00c0cce0 @ 00c0cce0 ////

void __fastcall LH_Array_MedianOfThree_00c0cce0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_4;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  uStack_4 = param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert((void *)((int)&uStack_4 + 3),"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  iVar2 = *param_1;
  if ((iVar1 == 0) || (iVar2 == 0)) {
    LH_Assert(&param_3,"( C1 != NULL ) && ( C2 != NULL )\n");
    DebugBreak();
  }
  if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
    iVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}


//// FUNCTION LH_Array_AdjustHeap_00c0cd90 @ 00c0cd90 ////

void __fastcall LH_Array_AdjustHeap_00c0cd90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_9;
  int local_8;
  int local_4;
  
  local_4 = param_2;
  while( true ) {
    iVar2 = param_2 * 2 + 2;
    if (param_3 <= iVar2) break;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    local_8 = *(int *)(param_1 + -4 + iVar2 * 4);
    if ((iVar1 == 0) || (local_8 == 0)) {
      LH_Assert(&local_9,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar1 + 4) < *(uint *)(local_8 + 4)) {
      iVar2 = param_2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  if (iVar2 == param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    param_2 = param_3 + -1;
  }
  LH_Array_PushHeap_00c0c630(param_1,param_2,local_4,param_4);
  return;
}


//// FUNCTION FUN_00c0ce80 @ 00c0ce80 ////

undefined4 * __fastcall FUN_00c0ce80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da30c0;
  FUN_00bcf170(param_1 + 1);
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c0cea0 @ 00c0cea0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0cea0(void *this,byte param_1)

{
  FUN_00c0c9c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0cec0 @ 00c0cec0 ////

void __fastcall FUN_00c0cec0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da30c0;
  FUN_00bcffc0(param_1 + 1);
  return;
}


//// FUNCTION FUN_00c0cf00 @ 00c0cf00 ////

void __fastcall FUN_00c0cf00(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    LH_Array_MedianOfThree_00c0cce0(param_1,param_1 + iVar1,param_1 + iVar1 * 2);
    LH_Array_MedianOfThree_00c0cce0(param_2 + -iVar1,param_2,param_2 + iVar1);
    LH_Array_MedianOfThree_00c0cce0(param_3 + iVar1 * -2,param_3 + -iVar1,param_3);
    LH_Array_MedianOfThree_00c0cce0(param_1 + iVar1,param_2,param_3 + -iVar1);
    return;
  }
  LH_Array_MedianOfThree_00c0cce0(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c0cfa0 @ 00c0cfa0 ////

void __fastcall FUN_00c0cfa0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 - param_1 >> 2;
  iVar3 = iVar2 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar3) {
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + -1;
    LH_Array_AdjustHeap_00c0cd90(param_1,iVar3,iVar2,*(int *)(param_1 + -4 + iVar1));
  }
  return;
}


//// FUNCTION FUN_00c0d030 @ 00c0d030 ////

undefined4 * __fastcall FUN_00c0d030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da30c0;
  FUN_00bcf170(param_1 + 1);
  *param_1 = &PTR_LAB_00da3150;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c0d050 @ 00c0d050 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0d050(void *this,byte param_1)

{
  FUN_00c0cec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c0d070 @ 00c0d070 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0d070(void *this,byte param_1)

{
  FUN_00c0bd10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0d090 @ 00c0d090 ////

void __fastcall FUN_00c0d090(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  piVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  local_8 = param_2;
  local_4 = param_1;
  FUN_00c0cf00(param_2,piVar6,param_3 + -1);
  piVar5 = piVar6 + 1;
  local_10 = piVar5;
  if (param_2 < piVar6) {
    while( true ) {
      iVar2 = piVar6[-1];
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
      iVar2 = *piVar6;
      iVar3 = piVar6[-1];
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) || (piVar6 = piVar6 + -1, piVar6 <= local_8)
         ) break;
    }
  }
  piVar4 = piVar5;
  piVar1 = local_10;
  local_c = piVar6;
  if (piVar5 < param_3) {
    while( true ) {
      iVar2 = *piVar5;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar5;
      piVar1 = piVar5;
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
      iVar2 = *piVar6;
      iVar3 = *piVar5;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      if ((*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) ||
         (piVar5 = piVar5 + 1, piVar4 = piVar5, piVar1 = piVar5, param_3 <= piVar5)) break;
    }
  }
joined_r0x00c0d1a4:
  do {
    local_10 = piVar1;
    if (param_3 <= piVar4) {
LAB_00c0d21a:
      if (local_8 < local_c) {
        do {
          iVar2 = local_c[-1];
          iVar3 = *piVar6;
          if ((iVar2 == 0) || (iVar3 == 0)) {
            LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          if (*(uint *)(iVar3 + 4) <= *(uint *)(iVar2 + 4)) {
            iVar2 = *piVar6;
            iVar3 = local_c[-1];
            if ((iVar2 == 0) || (iVar3 == 0)) {
              LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
              DebugBreak();
            }
            piVar5 = local_10;
            if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) break;
            iVar2 = piVar6[-1];
            piVar6 = piVar6 + -1;
            *piVar6 = local_c[-1];
            local_c[-1] = iVar2;
          }
          local_c = local_c + -1;
          piVar5 = local_10;
        } while (local_8 < local_c);
      }
      if (local_c == local_8) {
        if (piVar4 == param_3) {
          *local_4 = piVar6;
          local_4[1] = piVar5;
          return;
        }
        if (piVar5 != piVar4) {
          iVar2 = *piVar6;
          *piVar6 = *piVar5;
          *piVar5 = iVar2;
        }
        iVar2 = *piVar6;
        piVar5 = piVar5 + 1;
        *piVar6 = *piVar4;
        *piVar4 = iVar2;
        piVar4 = piVar4 + 1;
        piVar1 = piVar5;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar4 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar2 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar2;
          }
          piVar1 = piVar5 + -1;
          iVar2 = *piVar6;
          piVar5 = piVar5 + -1;
          *piVar6 = *piVar1;
          *piVar5 = iVar2;
          piVar1 = piVar5;
        }
        else {
          iVar2 = *piVar4;
          *piVar4 = *local_c;
          *local_c = iVar2;
          piVar4 = piVar4 + 1;
          piVar1 = local_10;
        }
      }
      goto joined_r0x00c0d1a4;
    }
    iVar2 = *piVar6;
    iVar3 = *piVar4;
    if ((iVar2 == 0) || (iVar3 == 0)) {
      LH_Assert(&param_4,"( C1 != NULL ) && ( C2 != NULL )\n");
      DebugBreak();
    }
    if (*(uint *)(iVar3 + 4) <= *(uint *)(iVar2 + 4)) {
      iVar2 = *piVar4;
      iVar3 = *piVar6;
      if ((iVar2 == 0) || (iVar3 == 0)) {
        LH_Assert(&local_13,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar5 = local_10;
      if (*(uint *)(iVar2 + 4) < *(uint *)(iVar3 + 4)) goto LAB_00c0d21a;
      iVar2 = *local_10;
      *local_10 = *piVar4;
      *piVar4 = iVar2;
      local_10 = local_10 + 1;
    }
    piVar5 = local_10;
    piVar4 = piVar4 + 1;
    piVar1 = local_10;
  } while( true );
}


//// FUNCTION FUN_00c0d370 @ 00c0d370 ////

void __fastcall FUN_00c0d370(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_12;
  undefined1 local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  int *local_4;
  
  if ((param_1 != param_2) && (piVar3 = param_1 + 1, piVar3 != param_2)) {
    local_10 = param_1 + 2;
    local_8 = param_1;
    local_4 = param_2;
    do {
      iVar1 = *piVar3;
      iVar2 = *param_1;
      if ((iVar1 == 0) || (iVar2 == 0)) {
        LH_Assert(&local_12,"( C1 != NULL ) && ( C2 != NULL )\n");
        DebugBreak();
      }
      piVar4 = piVar3;
      if (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4)) {
        if ((param_1 != piVar3) && (piVar3 != local_10)) {
          FUN_00c0c6c0(param_1,(int)piVar3,local_10);
        }
      }
      else {
        do {
          iVar1 = *piVar3;
          iVar2 = piVar4[-1];
          local_c = piVar4;
          if ((iVar1 == 0) || (iVar2 == 0)) {
            LH_Assert(&local_11,"( C1 != NULL ) && ( C2 != NULL )\n");
            DebugBreak();
          }
          piVar4 = piVar4 + -1;
        } while (*(uint *)(iVar1 + 4) < *(uint *)(iVar2 + 4));
        param_1 = local_8;
        if ((local_c != piVar3) && (piVar3 != local_10)) {
          FUN_00c0c6c0(local_c,(int)piVar3,local_10);
          param_1 = local_8;
        }
      }
      piVar3 = piVar3 + 1;
      local_10 = local_10 + 1;
    } while (piVar3 != local_4);
  }
  return;
}


//// FUNCTION FUN_00c0d4b0 @ 00c0d4b0 ////

void __fastcall FUN_00c0d4b0(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c0bd10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c0d4e0 @ 00c0d4e0 ////

void __fastcall FUN_00c0d4e0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    iVar1 = *(int *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    LH_Array_AdjustHeap_00c0cd90((int)param_1,0,iVar2 + -4 >> 2,iVar1);
  }
  return;
}


//// FUNCTION FUN_00c0d530 @ 00c0d530 ////

void __fastcall FUN_00c0d530(undefined4 *param_1)

{
  undefined4 *_Memory;
  
  _Memory = (undefined4 *)*param_1;
  if (_Memory != (undefined4 *)0x0) {
    FUN_00c0bd10(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00c0d560 @ 00c0d560 ////

void __fastcall FUN_00c0d560(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_00c0d5f3:
      if (1 < iVar2) {
        FUN_00c0d370(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_00c0cfa0((int)param_1,(int)param_2);
        }
        FUN_00c0d4e0(param_1,(int)param_2);
        return;
      }
      goto LAB_00c0d5f3;
    }
    FUN_00c0d090(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_00c0d560(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00c0d560(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00c0d670 @ 00c0d670 ////

void __fastcall FUN_00c0d670(undefined4 *param_1)

{
  int *piVar1;
  uint local_4;
  
  if (param_1[2] != 0) {
    piVar1 = (int *)*param_1;
    local_4 = (uint)param_1 & 0xffffff00;
    FUN_00c0d560(piVar1,piVar1 + param_1[2],(int)(piVar1 + param_1[2]) - (int)piVar1 >> 2,local_4);
  }
  return;
}


//// FUNCTION FUN_00c0d6c0 @ 00c0d6c0 ////

void __fastcall FUN_00c0d6c0(undefined4 *param_1)

{
  bool bVar1;
  
  FUN_00be87a0((int)param_1);
  bVar1 = FUN_00be8780((int)param_1);
  if ((bVar1) && (param_1 != (undefined4 *)0x0)) {
    (**(code **)*param_1)(1);
  }
  return;
}


//// FUNCTION FUN_00c0d6f0 @ 00c0d6f0 ////

void __fastcall FUN_00c0d6f0(int param_1)

{
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x30));
  }
  return;
}


//// FUNCTION FUN_00c0d710 @ 00c0d710 ////

void __thiscall FUN_00c0d710(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2c) = param_1;
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x30));
  }
  FUN_00bcfac0((void *)(*(int *)((int)this + 0x2c) + 0x54),
               (int *)(*(int *)((int)this + 0x2c) + 0x50),(int)this);
  return;
}


//// FUNCTION FUN_00c0d750 @ 00c0d750 ////

undefined4 * __fastcall FUN_00c0d750(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d034d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00be8750(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00da3178;
  FUN_00bcf160(param_1 + 6);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0d7b0 @ 00c0d7b0 ////

void __fastcall FUN_00c0d7b0(undefined4 *param_1)

{
  undefined1 local_11;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03500;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da3178;
  local_4 = 2;
  local_10 = param_1;
  if (param_1[0xb] == 0) {
    LH_Assert(&local_11,"CustomBank != NULL\n");
    DebugBreak();
  }
  FUN_00bc5c60(*(void **)(*(int *)(param_1[0xb] + 4) + 0x48),(int)param_1);
  FUN_00bcff70((void *)(param_1[0xb] + 0x54),(int *)(param_1[0xb] + 0x50),(int)param_1);
  if ((void *)param_1[0xc] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xc]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00bcf880(param_1 + 6);
  local_4 = 0xffffffff;
  SetVtable_00da14e0_00be87b0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0d860 @ 00c0d860 ////

void __thiscall FUN_00c0d860(void *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 0x30) == 0) {
    pvVar1 = operator_new(0x10);
    FUN_00c0da80((int *)((int)this + 0x30),(int)pvVar1);
    puVar2 = (undefined4 *)FUN_00c0d9b0((int *)((int)this + 0x30));
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
  }
  return;
}


//// FUNCTION FUN_00c0d900 @ 00c0d900 ////

void __fastcall FUN_00c0d900(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c0d950 @ 00c0d950 ////

void __fastcall FUN_00c0d950(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00c0d9b0 @ 00c0d9b0 ////

int __fastcall FUN_00c0d9b0(int *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d0351b;
  local_c = ExceptionList;
  if (*param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x25);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Should have checked first...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  ExceptionList = local_c;
  return *param_1;
}


//// FUNCTION FUN_00c0da80 @ 00c0da80 ////

void __thiscall FUN_00c0da80(void *this,int param_1)

{
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03546;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)this != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x36);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Leak!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    DebugBreak();
  }
  if (param_1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 1;
    LH_LogErrorMessage(&local_110,"d:\\rh\\audio\\ver06_movies2\\libpk\\PKCAutoDelete.h");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x37);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    DebugBreak();
  }
  *(int *)this = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0dbf0 @ 00c0dbf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0dbf0(void *this,byte param_1)

{
  FUN_00c0d7b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0dc20 @ 00c0dc20 ////

uint __fastcall FUN_00c0dc20(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  return uVar1 + 7 & 0xfffffff8;
}


//// FUNCTION FUN_00c0dc40 @ 00c0dc40 ////

uint * __thiscall FUN_00c0dc40(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint extraout_EDX;
  
  *(uint *)this = param_1;
  *(uint *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = FUN_00c0dc20(this);
  if (extraout_EDX < uVar1 + 4) {
    LH_Assert(&param_1,"PageByteSize >= ( 4 + GetObjectSize ())\n");
    DebugBreak();
  }
  return this;
}


//// FUNCTION FUN_00c0dc90 @ 00c0dc90 ////

void __fastcall FUN_00c0dc90(int param_1)

{
  undefined4 *_Memory;
  LPCSTR pCVar1;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0355b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    ExceptionList = &local_c;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPooledMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x10);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"There are still objects out there!!!");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar1);
    local_4 = 0xffffffff;
    local_110 = &PTR_LAB_00d9d9b4;
    DebugBreak();
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    _Memory = *(undefined4 **)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *_Memory;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0dd90 @ 00c0dd90 ////

void __thiscall FUN_00c0dd90(void *this,undefined4 *param_1)

{
  LPCSTR pCVar1;
  undefined1 local_112;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00d03570;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x10) == 0) {
    ExceptionList = &local_c;
    LH_Assert(&local_111,"DebugNumAllocations > 0\n");
    DebugBreak();
  }
  if (param_1 == (undefined4 *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = param_1;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPooledMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x3e);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"Null object");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar1 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_112,pCVar1);
    DebugBreak();
  }
  param_1[1] = *(undefined4 *)((int)this + 8);
  *param_1 = 1;
  *(undefined4 **)((int)this + 8) = param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0de90 @ 00c0de90 ////

void __fastcall FUN_00c0de90(uint *param_1)

{
  uint *puVar1;
  LPCSTR pCVar2;
  uint uVar3;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03585;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(param_1[1]);
  if (puVar1 == (uint *)0x0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = 0;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPooledMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x4f);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"EMEM");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar2 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar2);
    DebugBreak();
  }
  *puVar1 = param_1[3];
  param_1[3] = (uint)puVar1;
  puVar1[2] = param_1[2];
  param_1[2] = (uint)(puVar1 + 1);
  uVar3 = FUN_00c0dc20(param_1);
  puVar1[1] = (param_1[1] - 4) / uVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0df90 @ 00c0df90 ////

int * __fastcall FUN_00c0df90(uint *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  LPCSTR pCVar4;
  int *extraout_EDX;
  undefined1 local_111;
  undefined **local_110;
  undefined1 local_10c;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0359a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1[2] == 0) {
    ExceptionList = &local_c;
    FUN_00c0de90(param_1);
  }
  if ((uint *)param_1[2] == (uint *)0x0) {
    ExceptionList = local_c;
    return (int *)0x0;
  }
  param_1[4] = param_1[4] + 1;
  uVar1 = *(uint *)param_1[2];
  if (1 < uVar1) {
    uVar3 = FUN_00c0dc20(param_1);
    *extraout_EDX = uVar1 - 1;
    ExceptionList = local_c;
    return (int *)(uVar3 * (uVar1 - 1) + (int)extraout_EDX);
  }
  if (uVar1 == 0) {
    local_110 = &PTR_LAB_00d9db7c;
    local_10c = 0;
    local_d = 0;
    local_4 = uVar1;
    LH_LogErrorMessage(&local_110,".\\PKAllocatorsCPooledMemory.cpp");
    LH_LogErrorMessage(&local_110,"(");
    FUN_00bbe970(0x33);
    LH_LogErrorMessage(&local_110,") : ");
    LH_LogErrorMessage(&local_110,"No objects? This cannot be...");
    LH_LogErrorMessage(&local_110,"\n");
    pCVar4 = (LPCSTR)FUN_00bbf3a0((int *)&local_110);
    LH_Assert(&local_111,pCVar4);
    DebugBreak();
  }
  piVar2 = (int *)param_1[2];
  param_1[2] = piVar2[1];
  ExceptionList = local_c;
  return piVar2;
}


//// FUNCTION FUN_00c0e150 @ 00c0e150 ////

undefined4 * __thiscall FUN_00c0e150(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d035b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = param_1;
  local_4 = 0;
  *(undefined ***)this = &PTR_LAB_00da3248;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  FUN_00bcf160((undefined4 *)((int)this + 0x10));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c0e1b0 @ 00c0e1b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0e1b0(void *this,byte param_1)

{
  FUN_00c0e1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0e1d0 @ 00c0e1d0 ////

void __fastcall FUN_00c0e1d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d035d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da3248;
  local_4 = 0;
  FUN_00bcf880(param_1 + 4);
  *param_1 = &PTR_LAB_00d9f8a0;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0e220 @ 00c0e220 ////

void __fastcall FUN_00c0e220(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d035f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da325c;
  local_4 = 0;
  FUN_00c193a0((int)param_1);
  local_4 = 0xffffffff;
  FUN_00c37500(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0e270 @ 00c0e270 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0e270(void *this,byte param_1)

{
  FUN_00c0e220(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c0e2a0 @ 00c0e2a0 ////

void __fastcall FUN_00c0e2a0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da326c;
  local_4 = 0;
  FUN_00c37660((int)param_1);
  local_4 = 0xffffffff;
  FUN_00c0e220(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0e4c0 @ 00c0e4c0 ////

void FUN_00c0e4c0(void)

{
  return;
}


//// FUNCTION FUN_00c0e4e0 @ 00c0e4e0 ////

void FUN_00c0e4e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00ea7a30;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00c0e530 @ 00c0e530 ////

void FUN_00c0e530(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}


//// FUNCTION FUN_00c0e550 @ 00c0e550 ////

void FUN_00c0e550(undefined4 *param_1)

{
  FUN_00c1ca00(param_1);
  return;
}


//// FUNCTION FUN_00c0e570 @ 00c0e570 ////

void FUN_00c0e570(undefined4 *param_1)

{
  char *pcVar1;
  
  *param_1 = 2;
  param_1[1] = 0x1e;
  param_1[2] = 2;
  param_1[3] = "Release";
  pcVar1 = FUN_00c1ca30();
  param_1[4] = pcVar1;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00c0e5b0 @ 00c0e5b0 ////

uint FUN_00c0e5b0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c38c20(&DAT_010da230,param_1,param_2);
  return -(uint)((char)uVar1 != '\0') & 0x10da230;
}


//// FUNCTION FUN_00c0e5d0 @ 00c0e5d0 ////

void FUN_00c0e5d0(int *param_1)

{
  (**(code **)(*param_1 + 4))();
  return;
}


//// FUNCTION FUN_00c0e630 @ 00c0e630 ////

void FUN_00c0e630(undefined4 param_1)

{
  if ((DAT_00ea7aa4 & 0x20) == 0) {
    FUN_00c37ce0(&DAT_010da230,-8);
    *(undefined4 *)(DAT_010da234 + 0x1a4) = param_1;
    return;
  }
  *(undefined4 *)(DAT_010da234 + 0x1a4) = param_1;
  return;
}


//// FUNCTION FUN_00c0e6e0 @ 00c0e6e0 ////

void FUN_00c0e6e0(int param_1)

{
  FUN_00c37f60(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c0e750 @ 00c0e750 ////

void FUN_00c0e750(float param_1)

{
  FUN_00c38030(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c0e770 @ 00c0e770 ////

void FUN_00c0e770(void)

{
  FUN_00c380b0(0x10da230);
  return;
}


//// FUNCTION FUN_00c0e780 @ 00c0e780 ////

void FUN_00c0e780(void)

{
  FUN_00c380c0(0x10da230);
  return;
}


//// FUNCTION FUN_00c0e790 @ 00c0e790 ////

void __thiscall FUN_00c0e790(void *this,int param_1)

{
  int *piVar1;
  
  if (*(int **)((int)this + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x1d4) + 0x1c))(param_1);
  }
  if (*(int *)((int)this + 0x180) != 0) {
    piVar1 = *(int **)((int)this + 0x58);
    piVar1[7] = param_1;
    (**(code **)(*piVar1 + 4))();
  }
  return;
}


//// FUNCTION FUN_00c0e7d0 @ 00c0e7d0 ////

void FUN_00c0e7d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_010da234;
  if (*(int **)(DAT_010da234 + 0x1d4) != (int *)0x0) {
    (**(code **)(**(int **)(DAT_010da234 + 0x1d4) + 0x1c))(param_1);
  }
  if (*(int *)(iVar2 + 0x180) != 0) {
    piVar1 = *(int **)(iVar2 + 0x58);
    piVar1[7] = param_1;
    (**(code **)(*piVar1 + 4))();
  }
  return;
}


//// FUNCTION FUN_00c0e870 @ 00c0e870 ////

void FUN_00c0e870(void)

{
  FUN_00c38920(&DAT_010da230);
  return;
}


//// FUNCTION FUN_00c0e880 @ 00c0e880 ////

void FUN_00c0e880(undefined4 *param_1)

{
  FUN_00c382b0(&DAT_010da230,param_1);
  return;
}


//// FUNCTION FUN_00c0e920 @ 00c0e920 ////

void FUN_00c0e920(void *param_1,float *param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_00c390e0(param_1,&local_c);
  return;
}


//// FUNCTION FUN_00c0e950 @ 00c0e950 ////

void FUN_00c0e950(void *param_1,float *param_2)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_00c39130(param_1,&local_c);
  return;
}


//// FUNCTION FUN_00c0e980 @ 00c0e980 ////

void FUN_00c0e980(void *param_1,float *param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_3;
  local_14 = param_3[1];
  local_10 = param_3[2];
  local_c = *param_2;
  local_8 = param_2[1];
  local_4 = param_2[2];
  FUN_00c39180(param_1,&local_c,&local_18);
  return;
}


//// FUNCTION FUN_00c0e9d0 @ 00c0e9d0 ////

undefined4 * __fastcall FUN_00c0e9d0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03643;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c39520(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da3284;
  FUN_00c39cc0(param_1 + 0xd);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bcf160(param_1 + 0x16);
  param_1[0xe] = param_1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0ea30 @ 00c0ea30 ////

void __fastcall FUN_00c0ea30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03660;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da3284;
  local_4 = 1;
  FUN_00bcf880(param_1 + 0x16);
  local_4 = local_4 & 0xffffff00;
  SetVtable_00da6e68_00c39b30(param_1 + 0xd);
  local_4 = 0xffffffff;
  FUN_00c39400(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0ea90 @ 00c0ea90 ////

void __fastcall FUN_00c0ea90(int param_1)

{
  FUN_00c39b60(param_1 + 0x34);
  return;
}


//// FUNCTION FUN_00c0eaf0 @ 00c0eaf0 ////

void __thiscall FUN_00c0eaf0(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  FUN_00bcff70((void *)(*(int *)((int)this + 4) + 8),(int *)(*(int *)((int)this + 4) + 4),(int)this)
  ;
  FUN_00c399f0(this,param_3,param_1);
  FUN_00c39d10((void *)((int)this + 0x34),param_2,param_1);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x14),(int *)(*(int *)((int)this + 4) + 0x10),
               (int)this);
  return;
}


//// FUNCTION FUN_00c0eb40 @ 00c0eb40 ////

void __thiscall FUN_00c0eb40(void *this,undefined4 *param_1,int *param_2,int param_3)

{
  FUN_00bcff70((void *)(*(int *)((int)this + 4) + 8),(int *)(*(int *)((int)this + 4) + 4),(int)this)
  ;
  FUN_00c39970(this,param_3,param_1);
  FUN_00c39d10((void *)((int)this + 0x34),param_2,param_1);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x14),(int *)(*(int *)((int)this + 4) + 0x10),
               (int)this);
  return;
}


//// FUNCTION FUN_00c0eb90 @ 00c0eb90 ////

void __fastcall FUN_00c0eb90(int param_1)

{
  FUN_00bcff70((void *)(*(int *)(param_1 + 4) + 0x14),(int *)(*(int *)(param_1 + 4) + 0x10),param_1)
  ;
  FUN_00c39ce0(param_1 + 0x34);
  FUN_00c39890(param_1);
  FUN_00bcfac0((void *)(*(int *)(param_1 + 4) + 8),(int *)(*(int *)(param_1 + 4) + 4),param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0ebf0 @ 00c0ebf0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0ebf0(void *this,byte param_1)

{
  FUN_00c0ea30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0ec50 @ 00c0ec50 ////

bool FUN_00c0ec50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00be0e50(DAT_010da234,param_1);
  FUN_00c37ce0(&DAT_010da230,iVar1);
  return iVar1 != 0;
}


//// FUNCTION FUN_00c0ec80 @ 00c0ec80 ////

void FUN_00c0ec80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(DAT_010da234 + 0x1b8);
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = FUN_00be02c0();
    *param_2 = uVar1;
  }
  return;
}


//// FUNCTION FUN_00c0ece0 @ 00c0ece0 ////

undefined4 * __fastcall FUN_00c0ece0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03683;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c39520(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da32c0;
  FUN_00c3a540(param_1 + 0xd);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00bcf160(param_1 + 0x1a);
  param_1[0xe] = param_1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0ed40 @ 00c0ed40 ////

void __fastcall FUN_00c0ed40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d036a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_00da32c0;
  local_4 = 1;
  FUN_00bcf880(param_1 + 0x1a);
  local_4 = local_4 & 0xffffff00;
  FUN_00c3a590(param_1 + 0xd);
  local_4 = 0xffffffff;
  FUN_00c39400(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c0edf0 @ 00c0edf0 ////

void __thiscall FUN_00c0edf0(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  FUN_00bcff70((void *)(*(int *)((int)this + 4) + 0x20),(int *)(*(int *)((int)this + 4) + 0x1c),
               (int)this);
  FUN_00c399f0(this,param_3,param_1);
  FUN_00c3abc0((void *)((int)this + 0x34),param_2);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x2c),(int *)(*(int *)((int)this + 4) + 0x28),
               (int)this);
  return;
}


//// FUNCTION FUN_00c0ee40 @ 00c0ee40 ////

void __thiscall FUN_00c0ee40(void *this,undefined4 *param_1,int *param_2,int param_3)

{
  FUN_00bcff70((void *)(*(int *)((int)this + 4) + 0x20),(int *)(*(int *)((int)this + 4) + 0x1c),
               (int)this);
  FUN_00c39970(this,param_3,param_1);
  FUN_00c3abc0((void *)((int)this + 0x34),param_2);
  FUN_00bcfac0((void *)(*(int *)((int)this + 4) + 0x2c),(int *)(*(int *)((int)this + 4) + 0x28),
               (int)this);
  return;
}


//// FUNCTION FUN_00c0ee90 @ 00c0ee90 ////

void __fastcall FUN_00c0ee90(int param_1)

{
  FUN_00bcff70((void *)(*(int *)(param_1 + 4) + 0x2c),(int *)(*(int *)(param_1 + 4) + 0x28),param_1)
  ;
  FUN_00c3a5e0(param_1 + 0x34);
  FUN_00c39890(param_1);
  FUN_00bcfac0((void *)(*(int *)(param_1 + 4) + 0x20),(int *)(*(int *)(param_1 + 4) + 0x1c),param_1)
  ;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0eef0 @ 00c0eef0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0eef0(void *this,byte param_1)

{
  FUN_00c0ed40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00c0ef70 @ 00c0ef70 ////

void FUN_00c0ef70(void)

{
  DAT_010d6758 = 1;
  DAT_010d675c = &DAT_010dc000;
  DAT_010d6760 = &DAT_010dc000;
  return;
}


//// FUNCTION FUN_00c0ef90 @ 00c0ef90 ////

void __cdecl FUN_00c0ef90(undefined4 param_1)

{
  (*(code *)PTR_FUN_00ea7a18)(param_1);
  return;
}


//// FUNCTION FUN_00c0efa0 @ 00c0efa0 ////

void __cdecl FUN_00c0efa0(undefined4 param_1)

{
  (*(code *)PTR_FUN_00ea7a1c)(param_1);
  return;
}


//// FUNCTION FUN_00c0efb0 @ 00c0efb0 ////

void FUN_00c0efb0(size_t param_1)

{
  _malloc(param_1);
  return;
}


//// FUNCTION FUN_00c0efc0 @ 00c0efc0 ////

void FUN_00c0efc0(void *param_1)

{
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_00c0f000 @ 00c0f000 ////

void __fastcall FUN_00c0f000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da32fc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  return;
}


//// FUNCTION FUN_00c0f020 @ 00c0f020 ////

void __thiscall FUN_00c0f020(void *this,void *param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *this_00;
  
  pvVar1 = param_1;
  pvVar3 = (void *)0x0;
  this_00 = param_1;
  pvVar2 = (void *)(param_3 + -1);
  if ((void *)(param_3 + -1) == (void *)0x0) {
    *(void **)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = param_3;
    return;
  }
  do {
    param_1 = pvVar2;
    FUN_00c10170(this_00,(int)pvVar3,(int)this_00 + param_2);
    pvVar3 = this_00;
    this_00 = (void *)((int)this_00 + param_2);
    pvVar2 = (void *)((int)param_1 + -1);
  } while ((void *)((int)param_1 + -1) != (void *)0x0);
  *(void **)((int)this + 8) = pvVar1;
  *(int *)((int)this + 0xc) = param_3;
  return;
}


//// FUNCTION FUN_00c0f090 @ 00c0f090 ////

void __fastcall FUN_00c0f090(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) < 0) {
    iVar1 = *(int *)(param_1 + 4);
    while (iVar1 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = puVar2[2];
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      iVar1 = *(int *)(param_1 + 4);
    }
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  return;
}


//// FUNCTION FUN_00c0f0e0 @ 00c0f0e0 ////

undefined4 __fastcall FUN_00c0f0e0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0xc) < 0)) {
    return 0;
  }
  return 1;
}


//// FUNCTION GetField_8_00c0f100 @ 00c0f100 ////

undefined4 __fastcall GetField_8_00c0f100(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


//// FUNCTION FUN_00c0f110 @ 00c0f110 ////

void __thiscall FUN_00c0f110(void *this,void *param_1)

{
  FUN_00c10170(param_1,0,*(int *)((int)this + 4));
  *(void **)((int)this + 4) = param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return;
}


//// FUNCTION FUN_00c0f140 @ 00c0f140 ////

void __thiscall FUN_00c0f140(void *this,int param_1)

{
  if (param_1 == *(int *)((int)this + 4)) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(*(int *)((int)this + 4) + 8);
  }
  FUN_00c10190(param_1);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  return;
}


//// FUNCTION FUN_00c0f160 @ 00c0f160 ////

void __thiscall FUN_00c0f160(void *this,void *param_1)

{
  FUN_00c10170(param_1,0,*(int *)((int)this + 8));
  *(void **)((int)this + 8) = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return;
}


//// FUNCTION FUN_00c0f190 @ 00c0f190 ////

void __fastcall FUN_00c0f190(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
  FUN_00c10190(iVar1);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}


//// FUNCTION FUN_00c0f1b0 @ 00c0f1b0 ////

void __thiscall FUN_00c0f1b0(void *this,int param_1)

{
  if (*(int *)((int)this + 8) == param_1) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*(int *)((int)this + 8) + 8);
  }
  FUN_00c10190(param_1);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  return;
}


//// FUNCTION FUN_00c0f200 @ 00c0f200 ////

void __fastcall FUN_00c0f200(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d036b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da32fc;
  local_4 = 0;
  if ((param_1[4] != 0) || (-1 < (int)param_1[3])) {
    FUN_00c0f090((int)param_1);
  }
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c0f260 @ 00c0f260 ////

undefined4 * __thiscall ScalarDeletingDtor_00c0f260(void *this,byte param_1)

{
  FUN_00c0f200(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c0f2e0 @ 00c0f2e0 ////

undefined4 * __fastcall FUN_00c0f2e0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d036f9;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d9fbec;
  FUN_00c0f000(param_1 + 1);
  local_4._0_1_ = 1;
  FUN_00c0f000(param_1 + 6);
  local_4._0_1_ = 2;
  FUN_00c0f000(param_1 + 0xb);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_00c0f000(param_1 + 0x10);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c0f350 @ 00c0f350 ////

void __thiscall FUN_00c0f350(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  void *this_00;
  undefined4 *puStack_c;
  int *piStack_8;
  int *piStack_4;
  
  piVar1 = param_1;
  (**(code **)(*param_1 + 8))();
  cVar2 = (**(code **)(*param_1 + 0x18))();
  if (cVar2 == '\0') {
    param_1 = (int *)0x0;
    puStack_c = (undefined4 *)0x0;
    cVar2 = (**(code **)(*piVar1 + 0x10))();
    if (cVar2 == '\0') {
      piStack_4 = (int *)&DAT_00ea7ab8;
      piStack_8 = (int *)&DAT_00ea7ab4;
      cVar2 = (**(code **)(*piVar1 + 0x14))();
      if (cVar2 == '\0') {
        this_00 = (void *)((int)this + 4);
        piVar3 = &DAT_00ea7a30;
        if ((*(int *)((int)this + 0x1c) == *(int *)((int)this + 8)) &&
           (*(int *)((int)this + 0x20) == *(int *)((int)this + 0xc))) {
          puStack_c = &DAT_00ea7a48;
          param_1 = (int *)((int)this + 0x18);
        }
      }
      else {
        this_00 = (void *)((int)this + 0x18);
        piVar3 = &DAT_00ea7a48;
        if ((*(int *)((int)this + 0x1c) == *(int *)((int)this + 8)) &&
           (*(int *)((int)this + 0x20) == *(int *)((int)this + 0xc))) {
          puStack_c = &DAT_00ea7a30;
          param_1 = (int *)((int)this + 4);
        }
      }
    }
    else {
      piStack_4 = &DAT_00ea7ac0;
      piStack_8 = &DAT_00ea7abc;
      cVar2 = (**(code **)(*piVar1 + 0x14))();
      if (cVar2 == '\0') {
        this_00 = (void *)((int)this + 0x2c);
        piVar3 = &DAT_00ea7a60;
      }
      else {
        this_00 = (void *)((int)this + 0x40);
        piVar3 = &DAT_00ea7a78;
      }
    }
    if (*piVar3 < 1) {
      FUN_00c0f140(this_00,(int)piVar1);
      (**(code **)*piVar1)(1);
    }
    else {
      piVar3[1] = piVar3[1] + 1;
      if (0 < *piStack_8) {
        *piStack_4 = *piStack_4 + 1;
      }
      FUN_00c0f140(this_00,(int)piVar1);
      FUN_00c0f160(this_00,piVar1);
    }
    if (param_1 != (int *)0x0) {
      param_1[1] = *(int *)((int)this_00 + 4);
      param_1[2] = *(int *)((int)this_00 + 8);
      param_1[3] = *(int *)((int)this_00 + 0xc);
      param_1[4] = *(int *)((int)this_00 + 0x10);
    }
    if (puStack_c != (undefined4 *)0x0) {
      puStack_c[1] = piVar3[1];
    }
  }
  return;
}


//// FUNCTION FUN_00c0f4d0 @ 00c0f4d0 ////

void __fastcall FUN_00c0f4d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00c0f090(param_1 + 4);
  FUN_00c0f090(param_1 + 0x18);
  FUN_00c0f090(param_1 + 0x2c);
  FUN_00c0f090(param_1 + 0x40);
  puVar2 = &DAT_00da3ad0;
  puVar3 = &DAT_00ea7a30;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  DAT_010d5dc4 = 0;
  return;
}


//// FUNCTION FUN_00c0f520 @ 00c0f520 ////

int __thiscall
FUN_00c0f520(void *this,void *param_1,void *param_2,int *param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  
  if (*param_3 < 1) {
    switch(param_5) {
    case (undefined4 *)0x0:
      piVar1 = (int *)(**(code **)(*(int *)this + 0x10))();
      break;
    case (undefined4 *)0x1:
      piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
      break;
    case (undefined4 *)0x2:
      piVar1 = (int *)(**(code **)(*(int *)this + 0x18))();
      break;
    case (undefined4 *)0x3:
      piVar1 = (int *)(**(code **)(*(int *)this + 0x1c))();
      break;
    default:
      goto switchD_00c0f590_default;
    }
    if (piVar1 == (int *)0x0) {
switchD_00c0f590_default:
      *param_6 = 0;
      return -5;
    }
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f110(param_1,piVar1);
      *param_5 = piVar1;
      return 0;
    }
    (**(code **)*piVar1)(1);
  }
  else {
    piVar1 = (int *)GetField_8_00c0f100((int)param_2);
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f190((int)param_2);
      FUN_00c0f110(param_2,piVar1);
      *param_3 = *param_3 + -1;
      if (0 < *param_3) {
        *param_3 = *param_3 + -1;
        *param_5 = piVar1;
        return 0;
      }
      goto LAB_00c0f600;
    }
  }
  piVar1 = (int *)0x0;
LAB_00c0f600:
  *param_5 = piVar1;
  return iVar2;
}


//// FUNCTION FUN_00c0f620 @ 00c0f620 ////

uint __cdecl FUN_00c0f620(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0371b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)FUN_00c0ef90(0x1d8);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00bdfcd0(puVar2);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return 0xfffffffb;
  }
  DAT_010d5dc4 = puVar2;
  uVar3 = FUN_00be15b0(puVar2,param_1,param_2);
  if (uVar3 == 0) {
    *param_3 = puVar2;
    if ((int *)puVar2[0x75] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[0x75] + 0x1c))(1);
    }
    if (puVar2[0x60] != 0) {
      piVar1 = (int *)puVar2[0x16];
      piVar1[7] = 1;
      (**(code **)(*piVar1 + 4))();
      ExceptionList = local_c;
      return 0;
    }
  }
  else {
    puVar5 = &DAT_00da3ad0;
    puVar6 = &DAT_00ea7a30;
    for (iVar4 = 0x28; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  return uVar3;
}


//// FUNCTION FUN_00c0f720 @ 00c0f720 ////

void __thiscall FUN_00c0f720(void *this,void *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 8) == *(int *)((int)this + 0x1c)) &&
     (*(int *)((int)this + 0xc) == *(int *)((int)this + 0x20))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar2 = FUN_00c0f520(this,param_1,(void *)((int)this + 4),&DAT_00ea7a34,&DAT_00ea7ab8,
                       (undefined4 *)0x0,param_2);
  if ((iVar2 == 0) && (bVar1)) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x14);
    DAT_00ea7a4c = DAT_00ea7a34;
  }
  return;
}


//// FUNCTION FUN_00c0f790 @ 00c0f790 ////

void __thiscall FUN_00c0f790(void *this,void *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*(int *)((int)this + 8) == *(int *)((int)this + 0x1c)) &&
     (*(int *)((int)this + 0xc) == *(int *)((int)this + 0x20))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar2 = FUN_00c0f520(this,param_1,(void *)((int)this + 0x18),&DAT_00ea7a4c,&DAT_00ea7ab8,
                       (undefined4 *)0x1,param_2);
  if ((iVar2 == 0) && (bVar1)) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0x1c);
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 0x20);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x24);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x28);
    DAT_00ea7a34 = DAT_00ea7a4c;
  }
  return;
}


//// FUNCTION FUN_00c0f800 @ 00c0f800 ////

int __thiscall FUN_00c0f800(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  
  this_00 = (void *)((int)this + 0x2c);
  if (DAT_00ea7a64 < 1) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x18))();
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      return -5;
    }
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f110(this_00,piVar1);
      *param_1 = piVar1;
      return 0;
    }
    (**(code **)*piVar1)(1);
  }
  else {
    piVar1 = (int *)GetField_8_00c0f100((int)this_00);
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f190((int)this_00);
      FUN_00c0f110(this_00,piVar1);
      DAT_00ea7a64 = DAT_00ea7a64 + -1;
      if (0 < DAT_00ea7ac0) {
        DAT_00ea7ac0 = DAT_00ea7ac0 + -1;
        *param_1 = piVar1;
        return 0;
      }
      goto LAB_00c0f8b7;
    }
  }
  piVar1 = (int *)0x0;
LAB_00c0f8b7:
  *param_1 = piVar1;
  return iVar2;
}


//// FUNCTION FUN_00c0f8d0 @ 00c0f8d0 ////

int __thiscall FUN_00c0f8d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *this_00;
  int *piVar1;
  int iVar2;
  
  this_00 = (void *)((int)this + 0x40);
  if (DAT_00ea7a7c < 1) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x1c))();
    if (piVar1 == (int *)0x0) {
      *param_2 = 0;
      return -5;
    }
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f110(this_00,piVar1);
      *param_1 = piVar1;
      return 0;
    }
    (**(code **)*piVar1)(1);
  }
  else {
    piVar1 = (int *)GetField_8_00c0f100((int)this_00);
    iVar2 = (**(code **)(*piVar1 + 4))(param_1);
    if (iVar2 == 0) {
      FUN_00c0f190((int)this_00);
      FUN_00c0f110(this_00,piVar1);
      DAT_00ea7a7c = DAT_00ea7a7c + -1;
      if (0 < DAT_00ea7ac0) {
        DAT_00ea7ac0 = DAT_00ea7ac0 + -1;
        *param_1 = piVar1;
        return 0;
      }
      goto LAB_00c0f987;
    }
  }
  piVar1 = (int *)0x0;
LAB_00c0f987:
  *param_1 = piVar1;
  return iVar2;
}


//// FUNCTION FUN_00c0f9a0 @ 00c0f9a0 ////

undefined8 FUN_00c0f9a0(void)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  return uVar1;
}


//// FUNCTION CPU_IsCpuidSupported @ 00c0f9c0 ////

bool CPU_IsCpuidSupported(void)

{
  uint uVar1;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar2;
  
  uVar2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
          (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
          (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1) |
          (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
          (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  uVar1 = uVar2 ^ 0x200000;
  return ((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x800) != 0) * 0x800 |
          (uint)((uVar1 & 0x200) != 0) * 0x200 | (uint)((uVar1 & 0x100) != 0) * 0x100 |
          (uint)((uVar1 & 0x80) != 0) * 0x80 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
          (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 |
          (uint)((uVar1 & 1) != 0) | (uint)((uVar1 & 0x200000) != 0) * 0x200000 |
         (uint)((uVar1 & 0x40000) != 0) * 0x40000) != uVar2;
}


//// FUNCTION CPU_GetIntelBrandName @ 00c0f9f0 ////

char * __fastcall CPU_GetIntelBrandName(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 4:
    return "80486";
  case 5:
    return "Pentium";
  case 6:
    break;
  default:
    goto switchD_00c0fa06_caseD_7;
  case 0xf:
    if (*(int *)(param_1 + 8) == 2) {
      return "Pentium 4 (sample)";
    }
    return "Pentium 4";
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    return "Pentium Pro";
  }
  if (iVar1 != 3) {
    if (iVar1 == 5) {
      if (*(uint *)(param_1 + 0x30) != 0) {
        if (0x3ff < *(uint *)(param_1 + 0x30)) {
          return "Pentium II Xeon";
        }
        goto LAB_00c0fa46;
      }
    }
    else if (iVar1 != 6) {
      if (iVar1 == 7) {
        if (0x3ff < *(uint *)(param_1 + 0x30)) {
          return "Pentium III Xeon";
        }
      }
      else if (iVar1 == 8) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 1) goto LAB_00c0fa7c;
        if (iVar1 != 2) {
          if (iVar1 != 3) goto switchD_00c0fa06_caseD_7;
          goto LAB_00c0fa76;
        }
      }
      else {
        if (iVar1 == 10) {
LAB_00c0fa76:
          return "Pentium III Xeon";
        }
        if (iVar1 != 0xb) {
switchD_00c0fa06_caseD_7:
          return "<unknown>";
        }
      }
      return "Pentium III";
    }
LAB_00c0fa7c:
    return "Celeron";
  }
LAB_00c0fa46:
  return "Pentium II";
}


//// FUNCTION CPU_GetAMDBrandName @ 00c0fad0 ////

char * __fastcall CPU_GetAMDBrandName(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 4) {
    return "486 or 5x86";
  }
  if (iVar1 == 5) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 < 4) {
      return "K5";
    }
    if ((uVar2 == 6) || (uVar2 == 7)) {
      return "K6";
    }
    if (uVar2 == 8) {
      return "K6-2";
    }
    if (uVar2 == 9) {
      return "K6-III";
    }
  }
  else if (iVar1 == 6) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 1) {
      return "K7";
    }
    if ((iVar1 == 2) || (iVar1 == 4)) {
      return "Athlon";
    }
    if ((iVar1 == 3) || (iVar1 == 7)) {
      return "Duron";
    }
    if ((iVar1 == 6) || (iVar1 == 8)) {
      return "Athlon XP";
    }
  }
  return "<unknown>";
}


//// FUNCTION FUN_00c0fb60 @ 00c0fb60 ////

char * __fastcall FUN_00c0fb60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 4) {
    return "MediaGX";
  }
  if (iVar1 == 5) {
    if (*(int *)(param_1 + 0xc) == 2) {
      return "6x86";
    }
    if (*(int *)(param_1 + 0xc) == 4) {
      return "GXm";
    }
  }
  else if (iVar1 == 6) {
    if (*(int *)(param_1 + 0xc) == 0) {
      return "6x86MX";
    }
    if (*(int *)(param_1 + 0xc) == 5) {
      return "Cyrix III";
    }
  }
  return "<unknown>";
}


//// FUNCTION FUN_00c0fbb0 @ 00c0fbb0 ////

char * __fastcall FUN_00c0fbb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 5) {
    if (*(int *)(param_1 + 0xc) == 4) {
      return "WinChip C6";
    }
  }
  else if (*(int *)(param_1 + 4) == 6) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 6) {
      return "C3 Samuel";
    }
    if (iVar1 == 7) {
      if (*(uint *)(param_1 + 8) < 8) {
        return "C3 Samuel 2";
      }
      return "C3 Ezra";
    }
    if (iVar1 == 8) {
      return "C3 Ezra-T";
    }
  }
  return "<unknown>";
}


//// FUNCTION FUN_00c0fc00 @ 00c0fc00 ////

undefined8 FUN_00c0fc00(void)

{
  WINBOOL WVar1;
  longlong lVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  WVar1 = QueryPerformanceFrequency(&local_20);
  if (WVar1 != 0) {
    do {
      do {
        QueryPerformanceCounter(&local_30);
        uVar3 = rdtsc();
        local_14 = (uint)((ulonglong)uVar3 >> 0x20);
        local_18 = (uint)uVar3;
        Sleep(10);
        QueryPerformanceCounter(&local_28);
        uVar3 = rdtsc();
        local_c = (uint)((ulonglong)uVar3 >> 0x20);
        local_10 = (uint)uVar3;
      } while (local_c < local_14);
    } while ((((local_c <= local_14) && (local_10 < local_18)) ||
             (local_28.field0.HighPart < local_30.field0.HighPart)) ||
            ((local_28.field0.HighPart <= local_30.field0.HighPart &&
             (local_28.field0.LowPart < local_30.field0.LowPart))));
    lVar2 = __allmul(local_10 - local_18,(local_c - local_14) - (uint)(local_10 < local_18),
                     local_20.field0.LowPart,local_20.field0.HighPart);
    uVar3 = __aulldiv((uint)lVar2,(uint)((ulonglong)lVar2 >> 0x20),
                      local_28.field0.LowPart - local_30._0_4_,
                      (local_28.field0.HighPart - local_30._4_4_) -
                      (uint)(local_28.field0.LowPart < local_30.field0.LowPart));
    return uVar3;
  }
  return 0;
}


//// FUNCTION FUN_00c0fcc0 @ 00c0fcc0 ////

int __cdecl FUN_00c0fcc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1 / 100 + 1;
  iVar2 = (param_1 + 0x19) / 0x32;
  iVar3 = param_1 + iVar2 * -0x32;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  iVar2 = iVar2 * 0x32;
  if (iVar1 < iVar3) {
    iVar2 = (((param_1 * 3 + 0x30) / 100) * 100) / 3;
    iVar3 = param_1 - iVar2;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar1 < iVar3) {
      iVar2 = (param_1 + 0xc) / 0x19;
      iVar3 = param_1 + iVar2 * -0x19;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar2 = iVar2 * 0x19;
      if (iVar1 < iVar3) {
        iVar2 = param_1;
      }
    }
  }
  return iVar2;
}


//// FUNCTION CPU_InitCapabilities @ 00c0fd60 ////

/* WARNING: Removing unreachable block (ram,0x00c10015) */
/* WARNING: Removing unreachable block (ram,0x00c0ffbb) */
/* WARNING: Removing unreachable block (ram,0x00c0ff9d) */
/* WARNING: Removing unreachable block (ram,0x00c0ff7f) */
/* WARNING: Removing unreachable block (ram,0x00c0ff63) */
/* WARNING: Removing unreachable block (ram,0x00c0ff48) */
/* WARNING: Removing unreachable block (ram,0x00c0ff35) */
/* WARNING: Removing unreachable block (ram,0x00c0ff2b) */
/* WARNING: Removing unreachable block (ram,0x00c0fed6) */
/* WARNING: Removing unreachable block (ram,0x00c0fe7c) */
/* WARNING: Removing unreachable block (ram,0x00c0fdf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CPU_InitCapabilities(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  uint *puVar8;
  byte in_AF;
  bool bVar9;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar10;
  undefined8 uVar11;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined1 local_c;
  uint local_8;
  
  DAT_010d5dc8 = 0;
  _DAT_010d5df8 = "<unknown>";
  _DAT_010d5dfc = "<unknown>";
  DAT_010d5e00 = 0;
  _DAT_010d5e04 = 0;
  DAT_010d5e11 = 0;
  DAT_010d5e12 = 0;
  DAT_010d5e13 = 0;
  DAT_010d5e14 = 0;
  DAT_010d5e15 = 0;
  DAT_010d5e16 = 0;
  DAT_010d5e17 = 0;
  _DAT_010d5e08 = 0;
  uVar10 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | 0x40
           | (uint)(in_AF & 1) * 0x10 | 4 | (uint)(in_ID & 1) * 0x200000 |
           (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
           (uint)(in_AC & 1) * 0x40000;
  uVar5 = uVar10 ^ 0x200000;
  if (((uint)((uVar5 & 0x4000) != 0) * 0x4000 | (uint)((uVar5 & 0x200) != 0) * 0x200 |
       (uint)((uVar5 & 0x100) != 0) * 0x100 | (uint)((uVar5 & 0x40) != 0) * 0x40 |
       (uint)((uVar5 & 0x10) != 0) * 0x10 | (uint)((uVar5 & 4) != 0) * 4 |
       (uint)((uVar5 & 0x200000) != 0) * 0x200000 | (uint)((uVar5 & 0x40000) != 0) * 0x40000) !=
      uVar10) {
    puVar8 = &local_5c;
    for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    puVar8 = (uint *)cpuid_basic_info(0);
    local_8 = *puVar8;
    local_18 = puVar8[1];
    local_14 = puVar8[2];
    local_10 = puVar8[3];
    iVar7 = 0xd;
    bVar9 = true;
    local_c = 0;
    puVar8 = &local_18;
    pcVar6 = "GenuineIntel";
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar9 = (char)*puVar8 == *pcVar6;
      puVar8 = (uint *)((int)puVar8 + 1);
      pcVar6 = pcVar6 + 1;
    } while (bVar9);
    if (bVar9) {
      local_5c = 1;
    }
    else {
      iVar7 = 0xd;
      bVar9 = true;
      puVar8 = &local_18;
      pcVar6 = "AuthenticAMD";
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar9 = (char)*puVar8 == *pcVar6;
        puVar8 = (uint *)((int)puVar8 + 1);
        pcVar6 = pcVar6 + 1;
      } while (bVar9);
      if (bVar9) {
        local_5c = 2;
      }
      else {
        iVar7 = 0xd;
        bVar9 = true;
        puVar8 = &local_18;
        pcVar6 = "CyrixInstead";
        do {
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          bVar9 = (char)*puVar8 == *pcVar6;
          puVar8 = (uint *)((int)puVar8 + 1);
          pcVar6 = pcVar6 + 1;
        } while (bVar9);
        if (bVar9) {
          local_5c = 3;
        }
        else {
          bVar9 = true;
          iVar7 = 0xd;
          puVar8 = &local_18;
          pcVar6 = "CentaurHauls";
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar9 = (char)*puVar8 == *pcVar6;
            puVar8 = (uint *)((int)puVar8 + 1);
            pcVar6 = pcVar6 + 1;
          } while (bVar9);
          local_5c = !bVar9 - 1 & 4;
        }
      }
    }
    puVar8 = (uint *)cpuid_Version_info(1);
    uVar5 = *puVar8;
    local_44 = puVar8[2];
    local_54 = uVar5 & 0xf;
    local_4c = puVar8[1] & 0xff;
    local_3c = puVar8[1] >> 0x10 & 0xff;
    local_50 = uVar5 >> 4 & 0xf;
    local_58 = uVar5 >> 8 & 0xf;
    local_48 = uVar5 >> 0xc & 3;
    if (local_5c == 1) {
      if (1 < local_8) {
        puVar4 = (undefined4 *)cpuid_cache_tlb_info(2);
        local_28 = *puVar4;
        local_24 = puVar4[1];
        local_20 = puVar4[3];
        local_1c = puVar4[2];
        uVar5 = 1;
        do {
          bVar2 = *(byte *)((int)&local_28 + uVar5);
          if (bVar2 == 0x40) {
            local_2c = 0;
            break;
          }
          if (0x40 < bVar2) {
            local_2c = 0x80 << ((bVar2 & 0xf) - 1 & 0x1f);
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
      }
      if (2 < local_8) {
        puVar4 = (undefined4 *)cpuid_Version_info(1);
        local_38 = *puVar4;
        iVar7 = cpuid_serial_info(3);
        local_34 = *(undefined4 *)(iVar7 + 8);
        local_30 = *(undefined4 *)(iVar7 + 0xc);
      }
    }
    puVar8 = (uint *)cpuid(0x80000000);
    local_8 = *puVar8;
    if (0x80000000 < local_8) {
      iVar7 = cpuid(0x80000001);
      local_40 = *(undefined4 *)(iVar7 + 8);
    }
    if (0x80000003 < local_8) {
      puVar4 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
      _DAT_010d5e18 = *puVar4;
      _DAT_010d5e1c = puVar4[1];
      _DAT_010d5e24 = puVar4[2];
      _DAT_010d5e20 = puVar4[3];
      puVar4 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
      _DAT_010d5e28 = *puVar4;
      _DAT_010d5e2c = puVar4[1];
      _DAT_010d5e34 = puVar4[2];
      _DAT_010d5e30 = puVar4[3];
      puVar4 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
      _DAT_010d5e38 = *puVar4;
      _DAT_010d5e3c = puVar4[1];
      _DAT_010d5e44 = puVar4[2];
      _DAT_010d5e40 = puVar4[3];
      pcVar6 = &DAT_010d5e18;
      cVar3 = DAT_010d5e18;
      while (cVar3 == ' ') {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar3 = *pcVar1;
      }
      iVar7 = (int)&DAT_010d5dc8 - (int)pcVar6;
      do {
        cVar3 = *pcVar6;
        pcVar6[iVar7] = cVar3;
        pcVar6 = pcVar6 + 1;
      } while (cVar3 != '\0');
    }
    if ((local_5c == 2) && (0x80000005 < local_8)) {
      iVar7 = cpuid(0x80000006);
      local_2c = *(uint *)(iVar7 + 0xc) >> 0x10;
    }
    switch(local_5c) {
    case 1:
      _DAT_010d5df8 = "Intel";
      _DAT_010d5dfc = CPU_GetIntelBrandName((int)&local_5c);
      break;
    case 2:
      _DAT_010d5df8 = "AMD";
      _DAT_010d5dfc = CPU_GetAMDBrandName((int)&local_5c);
      break;
    case 3:
      if ((local_58 != 6) || (_DAT_010d5df8 = "Via", local_50 != 5)) {
        _DAT_010d5df8 = "Cyrix";
      }
      _DAT_010d5dfc = FUN_00c0fb60((int)&local_5c);
      break;
    case 4:
      _DAT_010d5df8 = "Via";
      if (local_58 < 6) {
        _DAT_010d5df8 = "IDT";
      }
      _DAT_010d5dfc = FUN_00c0fbb0((int)&local_5c);
    }
    DAT_010d5e00 = local_44;
    if ((local_44 & 0x10) != 0) {
      uVar11 = FUN_00c0fc00();
      uVar11 = __alldiv((uint)uVar11,(uint)((ulonglong)uVar11 >> 0x20),1000000,0);
      _DAT_010d5e04 = FUN_00c0fcc0((int)uVar11);
    }
    DAT_010d5e11 = (byte)(DAT_010d5e00 >> 0xf) & 1;
    DAT_010d5e12 = (byte)(DAT_010d5e00 >> 0x17) & 1;
    DAT_010d5e13 = DAT_010d5e00._3_1_ & 1;
    DAT_010d5e14 = DAT_010d5e00._3_1_ >> 1 & 1;
    DAT_010d5e15 = DAT_010d5e00._3_1_ >> 2 & 1;
    DAT_010d5e16 = (byte)DAT_010d5e00 & 1;
    DAT_010d5e17 = (byte)((uint)local_40 >> 0x1f);
    _DAT_010d5e08 = local_2c;
    _DAT_010d5e0c = local_3c;
    DAT_010d5e10 = 1;
  }
  return;
}


//// FUNCTION FUN_00c10170 @ 00c10170 ////

void __thiscall FUN_00c10170(void *this,int param_1,int param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 8) = this;
  }
  if (param_2 != 0) {
    *(void **)(param_2 + 4) = this;
  }
  *(int *)((int)this + 4) = param_1;
  *(int *)((int)this + 8) = param_2;
  return;
}


//// FUNCTION FUN_00c10190 @ 00c10190 ////

void __fastcall FUN_00c10190(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00c101c0 @ 00c101c0 ////

void __fastcall FUN_00c101c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da34a4;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


//// FUNCTION FUN_00c101e0 @ 00c101e0 ////

void __fastcall FUN_00c101e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da34a4;
  if (param_1[1] != 0) {
    *(undefined4 *)(param_1[1] + 8) = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c10220 @ 00c10220 ////

undefined4 * __thiscall ScalarDeletingDtor_00c10220(void *this,byte param_1)

{
  FUN_00c101e0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c10240 @ 00c10240 ////

uint __thiscall FUN_00c10240(void *this,undefined4 param_1,undefined4 param_2,char param_3)

{
  LPVOID *ppv;
  int *piVar1;
  uint uVar2;
  HRESULT HVar3;
  int iVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  undefined4 unaff_retaddr;
  
  uVar2 = CoInitializeEx((LPVOID)0x0,(param_3 != '\0') - 1 & 2);
  if ((uVar2 != 0) && (uVar2 != 1)) {
    return uVar2 & 0xffffff00;
  }
  ppv = (LPVOID *)((int)this + 8);
  HVar3 = CoCreateInstance((IID *)&rclsid_00d85b2c,(LPUNKNOWN)0x0,1,(IID *)&riid_00d85a8c,ppv);
  if (HVar3 == 0) {
    iVar4 = (**(code **)(*(int *)*ppv + 0x28))(*ppv,param_1);
    piVar1 = *ppv;
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*piVar1 + 0x18))(piVar1,unaff_retaddr,2);
      if (iVar4 < 0) {
        (**(code **)(*(int *)*ppv + 8))(*ppv);
        CoUninitialize();
        *ppv = (LPVOID)0x0;
        return extraout_EAX_00 & 0xffffff00;
      }
      uVar2 = (**(code **)(*(int *)this + 0xc))();
      return uVar2;
    }
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  CoUninitialize();
  *ppv = (LPVOID)0x0;
  return extraout_EAX & 0xffffff00;
}


//// FUNCTION FUN_00c102f0 @ 00c102f0 ////

void __fastcall FUN_00c102f0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    CoUninitialize();
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0x80000000;
  }
  return;
}


//// FUNCTION FUN_00c10420 @ 00c10420 ////

void __thiscall FUN_00c10420(void *this,float param_1)

{
  if (param_1 < 0.1) {
    *(undefined4 *)((int)this + 0x10) = 0x3dcccccd;
    *(uint *)this = *(uint *)this | 0x100;
    return;
  }
  if (20.0 < param_1) {
    *(undefined4 *)((int)this + 0x10) = 0x41a00000;
    *(uint *)this = *(uint *)this | 0x100;
    return;
  }
  *(float *)((int)this + 0x10) = param_1;
  *(uint *)this = *(uint *)this | 0x100;
  return;
}


//// FUNCTION FUN_00c10480 @ 00c10480 ////

void __thiscall FUN_00c10480(void *this,float param_1)

{
  if (param_1 < 0.1) {
    *(undefined4 *)((int)this + 0x14) = 0x3dcccccd;
    *(uint *)this = *(uint *)this | 0x200;
    return;
  }
  if (2.0 < param_1) {
    *(undefined4 *)((int)this + 0x14) = 0x40000000;
    *(uint *)this = *(uint *)this | 0x200;
    return;
  }
  *(float *)((int)this + 0x14) = param_1;
  *(uint *)this = *(uint *)this | 0x200;
  return;
}


//// FUNCTION FUN_00c104e0 @ 00c104e0 ////

void __thiscall FUN_00c104e0(void *this,float param_1)

{
  if (param_1 < 0.1) {
    *(undefined4 *)((int)this + 0x18) = 0x3dcccccd;
    *(uint *)this = *(uint *)this | 0x400;
    return;
  }
  if (2.0 < param_1) {
    *(undefined4 *)((int)this + 0x18) = 0x40000000;
    *(uint *)this = *(uint *)this | 0x400;
    return;
  }
  *(float *)((int)this + 0x18) = param_1;
  *(uint *)this = *(uint *)this | 0x400;
  return;
}


//// FUNCTION FUN_00c10540 @ 00c10540 ////

void __thiscall FUN_00c10540(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(uint *)this = *(uint *)this | 0x1000;
    return;
  }
  if (3.163 < param_1) {
    *(undefined4 *)((int)this + 0x24) = 0x404a6e98;
    *(uint *)this = *(uint *)this | 0x1000;
    return;
  }
  *(float *)((int)this + 0x24) = param_1;
  *(uint *)this = *(uint *)this | 0x1000;
  return;
}


//// FUNCTION FUN_00c105a0 @ 00c105a0 ////

void __thiscall FUN_00c105a0(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x28) = 0;
    *(uint *)this = *(uint *)this | 0x2000;
    return;
  }
  if (0.3 < param_1) {
    *(undefined4 *)((int)this + 0x28) = 0x3e99999a;
    *(uint *)this = *(uint *)this | 0x2000;
    return;
  }
  *(float *)((int)this + 0x28) = param_1;
  *(uint *)this = *(uint *)this | 0x2000;
  return;
}


//// FUNCTION FUN_00c10630 @ 00c10630 ////

void __thiscall FUN_00c10630(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(uint *)this = *(uint *)this | 0x8000;
    return;
  }
  if (10.0 < param_1) {
    *(undefined4 *)((int)this + 0x2c) = 0x41200000;
    *(uint *)this = *(uint *)this | 0x8000;
    return;
  }
  *(float *)((int)this + 0x2c) = param_1;
  *(uint *)this = *(uint *)this | 0x8000;
  return;
}


//// FUNCTION FUN_00c10690 @ 00c10690 ////

void __thiscall FUN_00c10690(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(uint *)this = *(uint *)this | 0x10000;
    return;
  }
  if (0.1 < param_1) {
    *(undefined4 *)((int)this + 0x30) = 0x3dcccccd;
    *(uint *)this = *(uint *)this | 0x10000;
    return;
  }
  *(float *)((int)this + 0x30) = param_1;
  *(uint *)this = *(uint *)this | 0x10000;
  return;
}


//// FUNCTION FUN_00c10720 @ 00c10720 ////

void __thiscall FUN_00c10720(void *this,float param_1)

{
  if (param_1 < 20.0) {
    *(undefined4 *)((int)this + 0x1c) = 0x41a00000;
    *(uint *)this = *(uint *)this | 8;
    return;
  }
  if (2000.0 < param_1) {
    *(undefined4 *)((int)this + 0x1c) = 0x44fa0000;
    *(uint *)this = *(uint *)this | 8;
    return;
  }
  *(float *)((int)this + 0x1c) = param_1;
  *(uint *)this = *(uint *)this | 8;
  return;
}


//// FUNCTION FUN_00c10780 @ 00c10780 ////

void __thiscall FUN_00c10780(void *this,float param_1)

{
  if (param_1 < 100.0) {
    *(undefined4 *)((int)this + 0x20) = 0x42c80000;
    *(uint *)this = *(uint *)this | 0x10;
    return;
  }
  if (20000.0 < param_1) {
    *(undefined4 *)((int)this + 0x20) = 0x469c4000;
    *(uint *)this = *(uint *)this | 0x10;
    return;
  }
  *(float *)((int)this + 0x20) = param_1;
  *(uint *)this = *(uint *)this | 0x10;
  return;
}


//// FUNCTION FUN_00c107e0 @ 00c107e0 ////

void __thiscall FUN_00c107e0(void *this,float param_1)

{
  if (param_1 < 0.075) {
    *(undefined4 *)((int)this + 0x3c) = 0x3d99999a;
    *(uint *)this = *(uint *)this | 0x20000;
    return;
  }
  if (0.25 < param_1) {
    *(undefined4 *)((int)this + 0x3c) = 0x3e800000;
    *(uint *)this = *(uint *)this | 0x20000;
    return;
  }
  *(float *)((int)this + 0x3c) = param_1;
  *(uint *)this = *(uint *)this | 0x20000;
  return;
}


//// FUNCTION FUN_00c10840 @ 00c10840 ////

void __thiscall FUN_00c10840(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x40) = 0;
    *(uint *)this = *(uint *)this | 0x40000;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0x40) = 0x3f800000;
    *(uint *)this = *(uint *)this | 0x40000;
    return;
  }
  *(float *)((int)this + 0x40) = param_1;
  *(uint *)this = *(uint *)this | 0x40000;
  return;
}


//// FUNCTION FUN_00c108a0 @ 00c108a0 ////

void __thiscall FUN_00c108a0(void *this,float param_1)

{
  if (param_1 < 0.04) {
    *(undefined4 *)((int)this + 0x44) = 0x3d23d70a;
    *(uint *)this = *(uint *)this | 0x80000;
    return;
  }
  if (5.0 < param_1) {
    *(undefined4 *)((int)this + 0x44) = 0x40a00000;
    *(uint *)this = *(uint *)this | 0x80000;
    return;
  }
  *(float *)((int)this + 0x44) = param_1;
  *(uint *)this = *(uint *)this | 0x80000;
  return;
}


//// FUNCTION FUN_00c10900 @ 00c10900 ////

void __thiscall FUN_00c10900(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    *(uint *)this = *(uint *)this | 0x100000;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0x48) = 0x3f800000;
    *(uint *)this = *(uint *)this | 0x100000;
    return;
  }
  *(float *)((int)this + 0x48) = param_1;
  *(uint *)this = *(uint *)this | 0x100000;
  return;
}


//// FUNCTION FUN_00c10960 @ 00c10960 ////

void __thiscall FUN_00c10960(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x38) = 0;
    *(uint *)this = *(uint *)this | 2;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0x38) = 0x3f800000;
    *(uint *)this = *(uint *)this | 2;
    return;
  }
  *(float *)((int)this + 0x38) = param_1;
  *(uint *)this = *(uint *)this | 2;
  return;
}


//// FUNCTION FUN_00c109c0 @ 00c109c0 ////

void __thiscall FUN_00c109c0(void *this,float param_1)

{
  if (param_1 < 0.0) {
    *(undefined4 *)((int)this + 0x34) = 0;
    *(uint *)this = *(uint *)this | 4;
    return;
  }
  if (1.0 < param_1) {
    *(undefined4 *)((int)this + 0x34) = 0x3f800000;
    *(uint *)this = *(uint *)this | 4;
    return;
  }
  *(float *)((int)this + 0x34) = param_1;
  *(uint *)this = *(uint *)this | 4;
  return;
}


//// FUNCTION FUN_00c10a20 @ 00c10a20 ////

void __thiscall FUN_00c10a20(void *this,float param_1)

{
  if (param_1 < 0.1) {
    *(undefined4 *)((int)this + 100) = 0x3dcccccd;
    *(uint *)this = *(uint *)this | 1;
    return;
  }
  if (100.0 < param_1) {
    *(undefined4 *)((int)this + 100) = 0x42c80000;
    *(uint *)this = *(uint *)this | 1;
    return;
  }
  *(float *)((int)this + 100) = param_1;
  *(uint *)this = *(uint *)this | 1;
  return;
}


//// FUNCTION SetVtable_00da34b0_00c10ab0 @ 00c10ab0 ////

void __fastcall SetVtable_00da34b0_00c10ab0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da34b0;
  return;
}


//// FUNCTION FUN_00c10af0 @ 00c10af0 ////

float10 __cdecl FUN_00c10af0(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fscale((float10)1,ROUND((float10)3.321928 * (float10)param_1));
  fVar2 = (float10)f2xm1((float10)3.321928 * (float10)param_1 -
                         (float10)(float)ROUND((float10)3.321928 * (float10)param_1));
  return (float10)(float)((fVar2 + (float10)1.0) * fVar1);
}


//// FUNCTION FUN_00c10b40 @ 00c10b40 ////

float10 __cdecl FUN_00c10b40(int param_1)

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


//// FUNCTION FUN_00c10d80 @ 00c10d80 ////

void __thiscall FUN_00c10d80(void *this,float *param_1)

{
  if (((*param_1 != *(float *)((int)this + 0x224)) || (param_1[1] != *(float *)((int)this + 0x228)))
     || (param_1[2] != *(float *)((int)this + 0x22c))) {
    *(float *)((int)this + 0x224) = *param_1;
    *(float *)((int)this + 0x228) = param_1[1];
    *(float *)((int)this + 0x22c) = param_1[2];
    *(float *)((int)this + 0x2dc) = *param_1;
    *(float *)((int)this + 0x2e0) = param_1[1];
    *(float *)((int)this + 0x2e4) = param_1[2];
    *(uint *)((int)this + 0x290) = *(uint *)((int)this + 0x290) | 0x800;
  }
  return;
}


//// FUNCTION FUN_00c10e70 @ 00c10e70 ////

void __thiscall FUN_00c10e70(void *this,float *param_1)

{
  if (((*param_1 != *(float *)((int)this + 0x230)) || (param_1[1] != *(float *)((int)this + 0x234)))
     || (param_1[2] != *(float *)((int)this + 0x238))) {
    *(float *)((int)this + 0x230) = *param_1;
    *(float *)((int)this + 0x234) = param_1[1];
    *(float *)((int)this + 0x238) = param_1[2];
    *(float *)((int)this + 0x2e8) = *param_1;
    *(float *)((int)this + 0x2ec) = param_1[1];
    *(float *)((int)this + 0x2f0) = param_1[2];
    *(uint *)((int)this + 0x290) = *(uint *)((int)this + 0x290) | 0x4000;
  }
  return;
}


//// FUNCTION FUN_00c110c0 @ 00c110c0 ////

undefined4 * __fastcall FUN_00c110c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c3c690(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00da34b4;
  FUN_00c3c8f0((int)(param_1 + 0xbe));
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c11140 @ 00c11140 ////

void __fastcall FUN_00c11140(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03758;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da34b4;
  local_4 = 0;
  FUN_00c3c7b0((int)(param_1 + 0xbe));
  local_4 = 0xffffffff;
  SetVtable_00d9fbe8_00c3c570(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c111a0 @ 00c111a0 ////

void __fastcall FUN_00c111a0(int param_1)

{
  FUN_00c3bd30(param_1 + 0x584);
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00c111c0 @ 00c111c0 ////

void __thiscall FUN_00c111c0(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  
  *(bool *)((int)this + 4) = -10000 < *(int *)(param_1 + 0x24);
  FUN_00c10d80(this,(float *)(param_1 + 0xc));
  FUN_00c10e70(this,(float *)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)((int)this + 0x23c) != iVar1) {
    *(int *)((int)this + 0x23c) = iVar1;
    *(int *)((int)this + 0x294) = iVar1;
    *(uint *)((int)this + 0x290) = *(uint *)((int)this + 0x290) | 0x20;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(int *)((int)this + 0x240) != iVar1) {
    *(int *)((int)this + 0x240) = iVar1;
    *(int *)((int)this + 0x29c) = iVar1;
    *(uint *)((int)this + 0x290) = *(uint *)((int)this + 0x290) | 0x80;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)((int)this + 0x244) != iVar1) {
    *(int *)((int)this + 0x244) = iVar1;
    *(int *)((int)this + 0x298) = iVar1;
    *(uint *)((int)this + 0x290) = *(uint *)((int)this + 0x290) | 0x40;
  }
  fVar2 = *(float *)(param_1 + 0x30);
  if (*(float *)((int)this + 0x248) != fVar2) {
    *(float *)((int)this + 0x248) = fVar2;
    FUN_00c10420((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x34);
  if (*(float *)((int)this + 0x24c) != fVar2) {
    *(float *)((int)this + 0x24c) = fVar2;
    FUN_00c104e0((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x38);
  if (*(float *)((int)this + 0x250) != fVar2) {
    *(float *)((int)this + 0x250) = fVar2;
    FUN_00c10480((void *)((int)this + 0x290),fVar2);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (*(int *)((int)this + 0x254) != iVar1) {
    *(int *)((int)this + 0x254) = iVar1;
    fVar3 = FUN_00c10b40(iVar1);
    FUN_00c10540((void *)((int)this + 0x290),(float)fVar3);
  }
  fVar2 = *(float *)(param_1 + 0x40);
  if (*(float *)((int)this + 600) != fVar2) {
    *(float *)((int)this + 600) = fVar2;
    FUN_00c105a0((void *)((int)this + 0x290),fVar2);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (*(int *)((int)this + 0x25c) != iVar1) {
    *(int *)((int)this + 0x25c) = iVar1;
    fVar3 = FUN_00c10b40(iVar1);
    FUN_00c10630((void *)((int)this + 0x290),(float)fVar3);
  }
  fVar2 = *(float *)(param_1 + 0x48);
  if (*(float *)((int)this + 0x260) != fVar2) {
    *(float *)((int)this + 0x260) = fVar2;
    FUN_00c10690((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x4c);
  if (*(float *)((int)this + 0x264) != fVar2) {
    *(float *)((int)this + 0x264) = fVar2;
    FUN_00c10a20((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x50);
  if (*(float *)((int)this + 0x268) != fVar2) {
    *(float *)((int)this + 0x268) = fVar2;
    FUN_00c109c0((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x54);
  if (*(float *)((int)this + 0x26c) != fVar2) {
    *(float *)((int)this + 0x26c) = fVar2;
    FUN_00c10960((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x58);
  if (*(float *)((int)this + 0x270) != fVar2) {
    *(float *)((int)this + 0x270) = fVar2;
    FUN_00c107e0((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x5c);
  if (*(float *)((int)this + 0x274) != fVar2) {
    *(float *)((int)this + 0x274) = fVar2;
    FUN_00c10840((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 0x60);
  if (*(float *)((int)this + 0x278) != fVar2) {
    *(float *)((int)this + 0x278) = fVar2;
    FUN_00c108a0((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = *(float *)(param_1 + 100);
  if (*(float *)((int)this + 0x27c) != fVar2) {
    *(float *)((int)this + 0x27c) = fVar2;
    FUN_00c10900((void *)((int)this + 0x290),fVar2);
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (*(int *)((int)this + 0x284) != iVar1) {
    fVar2 = (float)iVar1;
    *(int *)((int)this + 0x284) = iVar1;
    if (iVar1 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_00c10720((void *)((int)this + 0x290),fVar2);
  }
  fVar2 = (float)*(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x68) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  FUN_00c10780((uint *)((int)this + 0x290),fVar2);
  FUN_00c3c810((void *)((int)this + 0x2f8),(uint *)((int)this + 0x290),0);
  return;
}


//// FUNCTION FUN_00c11540 @ 00c11540 ////

undefined4 __fastcall FUN_00c11540(int param_1)

{
  uint *this;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined **local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03778;
  local_c = ExceptionList;
  local_28 = &PTR_LAB_00da34b0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = 0xac44;
  local_24 = 4;
  ExceptionList = &local_c;
  uVar1 = FUN_00c3c980((void *)(param_1 + 0x2f8),(float *)&local_28);
  if ((char)uVar1 == '\0') {
    ExceptionList = local_c;
    return uVar1;
  }
  puVar3 = &DAT_00da34e0;
  puVar4 = (undefined4 *)(param_1 + 0x224);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  this = (uint *)(param_1 + 0x290);
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *this = *this | 0x800;
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *this = *this | 0x4000;
  *(undefined4 *)(param_1 + 0x294) = 0xffffd8f0;
  *this = *this | 0x20;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *this = *this | 0x80;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *this = *this | 0x40;
  FUN_00c10420(this,1.0);
  FUN_00c104e0(this,0.5);
  FUN_00c10480(this,1.0);
  FUN_00c10540(this,0.0);
  FUN_00c105a0(this,0.02);
  FUN_00c10630(this,0.0);
  FUN_00c10690(this,0.04);
  FUN_00c10a20(this,7.5);
  FUN_00c109c0(this,1.0);
  FUN_00c10960(this,1.0);
  FUN_00c107e0(this,0.075);
  FUN_00c10840(this,0.0);
  FUN_00c108a0(this,0.04);
  FUN_00c10900(this,0.0);
  FUN_00c10720(this,200.0);
  FUN_00c10780(this,5000.0);
  uVar1 = FUN_00c3c810((void *)(param_1 + 0x2f8),this,1);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00c11710 @ 00c11710 ////

void __fastcall FUN_00c11710(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_820;
  undefined1 *local_81c;
  undefined1 *local_818;
  undefined1 *local_814;
  undefined4 local_810 [128];
  undefined1 local_610 [512];
  undefined1 local_410 [512];
  undefined1 local_210 [524];
  
  local_820 = local_810;
  local_814 = local_210;
  local_81c = local_610;
  local_818 = local_410;
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_00c3cf00(*(float **)(param_1 + 0x21c));
  }
  puVar3 = local_810;
  for (iVar2 = 0x200; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_00c3c880((void *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x21c),
                       (uint)*(byte *)(param_1 + 8),&local_820,0x80);
  if ((char)uVar1 != '\0') {
    FUN_00c15970(*(void **)(param_1 + 0x220),(int)local_810);
  }
  return;
}


//// FUNCTION ScalarDeletingDtor_00c117b0 @ 00c117b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c117b0(void *this,byte param_1)

{
  FUN_00c11140(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c11800 @ 00c11800 ////

void __thiscall FUN_00c11800(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0xc);
  iVar4 = param_1 - param_2;
  piVar1 = (int *)(param_2 + 4);
  param_1 = 0x20;
  do {
    *(int *)((int)this + 0x80) =
         (*(int *)((int)this + 0x80) * -0x14f +
          *(int *)((int)this + *(int *)((int)this + 0x88) * 4) * -0x102 >> 0xc) +
         *(int *)((int)this + 0x80);
    iVar3 = (*(int *)((int)this + 0x84) * -0x14f +
             *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) * -0x102 >> 0xc) +
            *(int *)((int)this + 0x84);
    *(int *)((int)this + 0x84) = iVar3;
    iVar3 = piVar2[-3] + iVar3;
    piVar2[-3] = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4) = iVar3;
    iVar3 = piVar1[-1] + *(int *)((int)this + 0x80);
    piVar1[-1] = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) = iVar3;
    iVar3 = *(int *)((int)this + 0x88) + 1;
    *(int *)((int)this + 0x88) = iVar3;
    if (iVar3 == 10) {
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    *(int *)((int)this + 0x80) =
         (*(int *)((int)this + 0x80) * -0x14f +
          *(int *)((int)this + *(int *)((int)this + 0x88) * 4) * -0x102 >> 0xc) +
         *(int *)((int)this + 0x80);
    iVar3 = (*(int *)((int)this + 0x84) * -0x14f +
             *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) * -0x102 >> 0xc) +
            *(int *)((int)this + 0x84);
    *(int *)((int)this + 0x84) = iVar3;
    iVar3 = *(int *)(iVar4 + (int)piVar1) + iVar3;
    *(int *)(iVar4 + (int)piVar1) = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4) = iVar3;
    iVar3 = *piVar1 + *(int *)((int)this + 0x80);
    *piVar1 = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) = iVar3;
    iVar3 = *(int *)((int)this + 0x88) + 1;
    *(int *)((int)this + 0x88) = iVar3;
    if (iVar3 == 10) {
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    *(int *)((int)this + 0x80) =
         (*(int *)((int)this + 0x80) * -0x14f +
          *(int *)((int)this + *(int *)((int)this + 0x88) * 4) * -0x102 >> 0xc) +
         *(int *)((int)this + 0x80);
    iVar3 = (*(int *)((int)this + 0x84) * -0x14f +
             *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) * -0x102 >> 0xc) +
            *(int *)((int)this + 0x84);
    *(int *)((int)this + 0x84) = iVar3;
    iVar3 = piVar2[-1] + iVar3;
    piVar2[-1] = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4) = iVar3;
    iVar3 = piVar1[1] + *(int *)((int)this + 0x80);
    piVar1[1] = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) = iVar3;
    iVar3 = *(int *)((int)this + 0x88) + 1;
    *(int *)((int)this + 0x88) = iVar3;
    if (iVar3 == 10) {
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    *(int *)((int)this + 0x80) =
         (*(int *)((int)this + 0x80) * -0x14f +
          *(int *)((int)this + *(int *)((int)this + 0x88) * 4) * -0x102 >> 0xc) +
         *(int *)((int)this + 0x80);
    iVar3 = (*(int *)((int)this + 0x84) * -0x14f +
             *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) * -0x102 >> 0xc) +
            *(int *)((int)this + 0x84);
    *(int *)((int)this + 0x84) = iVar3;
    iVar3 = *piVar2 + iVar3;
    *piVar2 = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4) = iVar3;
    iVar3 = piVar1[2] + *(int *)((int)this + 0x80);
    piVar1[2] = iVar3;
    *(int *)((int)this + *(int *)((int)this + 0x88) * 4 + 0x40) = iVar3;
    iVar3 = *(int *)((int)this + 0x88) + 1;
    *(int *)((int)this + 0x88) = iVar3;
    if (iVar3 == 10) {
      *(undefined4 *)((int)this + 0x88) = 0;
    }
    piVar1 = piVar1 + 4;
    piVar2 = piVar2 + 4;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


//// FUNCTION FUN_00c11ab0 @ 00c11ab0 ////

float10 __cdecl FUN_00c11ab0(float param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fscale((float10)1,ROUND((float10)3.321928 * (float10)param_1));
  fVar2 = (float10)f2xm1((float10)3.321928 * (float10)param_1 -
                         (float10)(float)ROUND((float10)3.321928 * (float10)param_1));
  return (float10)(float)((fVar2 + (float10)1.0) * fVar1);
}


//// FUNCTION FUN_00c11b10 @ 00c11b10 ////

float10 __cdecl FUN_00c11b10(int param_1)

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


//// FUNCTION FUN_00c11b90 @ 00c11b90 ////

uint __fastcall FUN_00c11b90(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  return -(uint)(cVar1 != '\0') & (uint)param_1;
}


//// FUNCTION FUN_00c11c50 @ 00c11c50 ////

void __fastcall FUN_00c11c50(int param_1)

{
  FUN_00c1a4d0(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00c11c80 @ 00c11c80 ////

void __fastcall FUN_00c11c80(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x220) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x220))(1);
    *(undefined4 *)(param_1 + 0x220) = 0;
  }
  FUN_00c176d0(param_1);
  return;
}


//// FUNCTION FUN_00c11cc0 @ 00c11cc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00c11cc0(void *this,int param_1,uint param_2)

{
  float fVar1;
  short sVar2;
  float10 fVar3;
  int iVar4;
  
  if ((param_2 & 0x10074) != 0) {
    FUN_00c179e0(this,*(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x20),param_1 + 0x14);
  }
  if ((*(uint *)((int)this + 0x28) >> 6 & 1) != 0) {
    FUN_00c1a4d0((int)this + 0xb4);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((char)(param_2 >> 8) < '\0') {
    FUN_00c16e20((float *)((int)this + 0x210),(float *)((int)this + 0x214),
                 (float *)(param_1 + 0x120));
  }
  if ((param_2 & 0x400000) != 0) {
    fVar1 = (float)*(int *)(param_1 + 0x144);
    if (*(int *)(param_1 + 0x144) < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    FUN_00c3d920((void *)((int)this + 0x224),*(int *)(param_1 + 0x140),fVar1);
  }
  if (*(int *)(DAT_010d5dc4 + 0x17c) != 0) {
    if (((DAT_010da248 == 0) || (*(int *)(DAT_010da248 + 0xe8) == 1)) ||
       ((*(uint *)(param_1 + 0xc) & 0x2000) == 0)) {
      iVar4 = *(int *)(param_1 + 0x148);
    }
    else {
      iVar4 = 0;
    }
    fVar3 = FUN_00c11b10(iVar4);
    sVar2 = (short)(int)ROUND((float)(fVar3 * (float10)*(float *)((int)this + 0x94) *
                                      (float10)*(float *)(param_1 + 0x18) *
                                      (float10)*(float *)((int)this + 0x30) * (float10)32767.0));
    if (sVar2 != *(short *)((int)this + 0x23e)) {
      *(short *)((int)this + 0x23e) = sVar2;
      *(undefined1 *)((int)this + 0x240) = 1;
    }
    if ((param_2 & 0x1000000) != 0) {
      fVar1 = (float)*(int *)(param_1 + 0x150);
      if (*(int *)(param_1 + 0x150) < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_00c3d920((void *)((int)this + 0x230),*(int *)(param_1 + 0x14c),fVar1);
    }
  }
  if (((param_2 & 0x800000) != 0) && ((*(uint *)((int)this + 0x2c) & 0x3c00) != 0x2000)) {
    FUN_00c3d790(*(float *)((int)this + 0x210),*(float *)((int)this + 0x214),
                 _DAT_010da2c0 * *(float *)(param_1 + 300),
                 _DAT_010da2cc * *(float *)(param_1 + 0x154),(float *)((int)this + 0x218));
  }
  fVar3 = FUN_00c11b10(*(int *)(param_1 + 0x13c));
  (**(code **)(**(int **)((int)this + 0x220) + 0x10))
            (*(undefined4 *)((int)this + 0x210),*(undefined4 *)((int)this + 0x214),
             _DAT_010da2c0 * *(float *)(param_1 + 300),
             (float)(fVar3 * (float10)*(float *)((int)this + 0x94) *
                     (float10)*(float *)(param_1 + 0x134) * (float10)*(float *)(param_1 + 0x130) *
                     (float10)*(float *)(param_1 + 0x18) * (float10)*(float *)((int)this + 0x30)),
             (int)this + 0x218,~*(byte *)((int)this + 0x28) & 1,0);
  if ((param_2 & 0x1d0) != 0) {
    fVar1 = *(float *)((int)this + 0xa0) * *(float *)((int)this + 0x7c);
    *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffe1ffff;
    if (*(int **)(param_1 + 0x24) == (int *)0x0) {
      FUN_00c3d050((undefined4 *)((int)this + 0xdc));
    }
    else {
      FUN_00c3d5b0((undefined4 *)((int)this + 0xdc),*(int **)(param_1 + 0x24),fVar1);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x20000;
    }
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      FUN_00c3d630((undefined4 *)((int)this + 0x100),*(int **)(param_1 + 0x28),fVar1);
      *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) | 0x100000;
      return;
    }
    FUN_00c3d050((undefined4 *)((int)this + 0x100));
  }
  return;
}


//// FUNCTION FUN_00c11f50 @ 00c11f50 ////

void __thiscall FUN_00c11f50(void *this,undefined8 *param_1)

{
  if (*(void **)(DAT_010d5dc4 + 0x17c) != (void *)0x0) {
    if (*(char *)((int)this + 0x240) != '\0') {
      *(undefined1 *)((int)this + 0x240) = 0;
      FUN_00c3c5b0(*(void **)(DAT_010d5dc4 + 0x17c),param_1,*(short *)((int)this + 0x23c));
      *(undefined2 *)((int)this + 0x23c) = *(undefined2 *)((int)this + 0x23e);
      return;
    }
    FUN_00c3c580(*(void **)(DAT_010d5dc4 + 0x17c),param_1,*(short *)((int)this + 0x23c));
  }
  return;
}


//// FUNCTION FUN_00c11fe0 @ 00c11fe0 ////

void __thiscall FUN_00c11fe0(void *this,void *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  short local_210 [128];
  undefined8 local_110 [33];
  
  puVar2 = (undefined4 *)
           (*(int *)((int)param_1 + 0x14) * *(int *)((int)param_1 + 0xc) +
           *(int *)((int)param_1 + 4));
  psVar3 = local_210;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)psVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    psVar3 = psVar3 + 2;
  }
  if (param_3 != '\0') {
    iVar1 = *(int *)(DAT_010d5dc4 + 0x17c);
    if (iVar1 == 0) {
      if ((DAT_010da248 == 0) || (*(int *)(DAT_010da248 + 0xe8) != 1)) goto LAB_00c1207b;
      FUN_00c3de50((void *)((int)this + 0x230),(undefined4 *)local_110,local_210);
    }
    else {
      FUN_00c3de50((void *)((int)this + 0x230),(undefined4 *)local_110,local_210);
      if (*(char *)(iVar1 + 4) == '\0') goto LAB_00c1207b;
    }
    FUN_00c11f50(this,local_110);
  }
LAB_00c1207b:
  FUN_00c3da10((void *)((int)this + 0x224),local_210);
  (**(code **)(**(int **)((int)this + 0x220) + 8))(local_210,*(int *)(DAT_010d5dc4 + 0x58) + 4);
  FUN_00c1a5b0(param_1,0x80);
  return;
}


//// FUNCTION FUN_00c120c0 @ 00c120c0 ////

void __fastcall FUN_00c120c0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x220) + 4))();
  FUN_00c3d050((undefined4 *)(param_1 + 0xdc));
  FUN_00c3d050((undefined4 *)(param_1 + 0x100));
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  return;
}


//// FUNCTION FUN_00c12100 @ 00c12100 ////

undefined4 * __fastcall FUN_00c12100(undefined4 *param_1)

{
  FUN_00c3e340(param_1);
  *param_1 = &PTR_FUN_00da354c;
  return param_1;
}


//// FUNCTION FUN_00c12120 @ 00c12120 ////

undefined4 * __fastcall FUN_00c12120(undefined4 *param_1)

{
  FUN_00c3f2c0(param_1);
  *param_1 = &PTR_FUN_00da3560;
  return param_1;
}


//// FUNCTION FUN_00c12140 @ 00c12140 ////

undefined4 * __fastcall FUN_00c12140(undefined4 *param_1)

{
  FUN_00c40010(param_1);
  *param_1 = &PTR_FUN_00da3574;
  return param_1;
}


//// FUNCTION FUN_00c12160 @ 00c12160 ////

undefined4 * __fastcall FUN_00c12160(undefined4 *param_1)

{
  FUN_00c3e340(param_1);
  *param_1 = &PTR_FUN_00da3588;
  return param_1;
}


//// FUNCTION FUN_00c12180 @ 00c12180 ////

undefined4 * __fastcall FUN_00c12180(undefined4 *param_1)

{
  FUN_00c3f2c0(param_1);
  *param_1 = &PTR_FUN_00da359c;
  return param_1;
}


//// FUNCTION FUN_00c121a0 @ 00c121a0 ////

undefined4 * __fastcall FUN_00c121a0(undefined4 *param_1)

{
  FUN_00c40010(param_1);
  *param_1 = &PTR_FUN_00da35b0;
  return param_1;
}


//// FUNCTION FUN_00c121c0 @ 00c121c0 ////

void __fastcall FUN_00c121c0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d037a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_00da35c8;
  local_4 = 1;
  if ((undefined4 *)param_1[0x88] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x88])(1);
  }
  param_1[0x7c] = &PTR_LAB_00d9fbe8;
  local_4 = 0xffffffff;
  FUN_00be0d20(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c12260 @ 00c12260 ////

uint __thiscall FUN_00c12260(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  
  (**(code **)(*param_1 + 4))();
  uVar1 = FUN_00c19200(this,(int)param_1,param_2);
  uVar1 = uVar1 | 0x1bf8000;
  if ((param_1[3] & 0x800000U) == 0) {
    *(undefined4 *)((int)this + 0x218) = 0x3f800000;
    *(undefined4 *)((int)this + 0x21c) = 0x3f800000;
    uVar1 = uVar1 & 0xff7fffff;
  }
  if (param_2[4] == 0) {
    if (param_2[5] != 0) {
      uVar1 = uVar1 | 0x100;
    }
  }
  else {
    uVar1 = uVar1 | 0x80;
  }
  (**(code **)(**(int **)((int)this + 0x220) + 4))();
  FUN_00c3d050((undefined4 *)((int)this + 0xdc));
  FUN_00c3d050((undefined4 *)((int)this + 0x100));
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  return uVar1;
}


//// FUNCTION FUN_00c12300 @ 00c12300 ////

undefined4 * FUN_00c12300(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03808;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_010d5e10 == '\0') {
    ExceptionList = &local_c;
    CPU_InitCapabilities();
  }
  if (DAT_010d5e15 == '\0') {
    if (param_1 == 0x100000) {
      puVar1 = (undefined4 *)FUN_00c0ef90(0x66c);
      local_4 = 4;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_00c41860(puVar1);
        ExceptionList = local_c;
        return puVar1;
      }
    }
    else if (param_1 == 0x200000) {
      puVar1 = (undefined4 *)FUN_00c0ef90(0x214);
      local_4 = 5;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00c3e340(puVar1);
        *puVar1 = &PTR_FUN_00da3588;
        ExceptionList = local_c;
        return puVar1;
      }
    }
    else if (param_1 == 0x400000) {
      puVar1 = (undefined4 *)FUN_00c0ef90(0x78);
      local_4 = 6;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_00c12180(puVar1);
        ExceptionList = local_c;
        return puVar1;
      }
    }
    else {
      puVar1 = (undefined4 *)FUN_00c0ef90(0x38);
      local_4 = 7;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = FUN_00c121a0(puVar1);
        ExceptionList = local_c;
        return puVar1;
      }
    }
  }
  else if (param_1 == 0x100000) {
    puVar1 = (undefined4 *)FUN_00c0ef90(0xc6c);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_00c42240(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  else if (param_1 == 0x200000) {
    puVar1 = (undefined4 *)FUN_00c0ef90(0x214);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00c3e340(puVar1);
      *puVar1 = &PTR_FUN_00da354c;
      ExceptionList = local_c;
      return puVar1;
    }
  }
  else if (param_1 == 0x400000) {
    puVar1 = (undefined4 *)FUN_00c0ef90(0x78);
    local_4 = 2;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_00c12120(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00c0ef90(0x38);
    local_4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_00c12140(puVar1);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION ScalarDeletingDtor_00c12550 @ 00c12550 ////

undefined4 * __thiscall ScalarDeletingDtor_00c12550(void *this,byte param_1)

{
  thunk_FUN_00c3e3e0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c12580 @ 00c12580 ////

undefined4 * __thiscall ScalarDeletingDtor_00c12580(void *this,byte param_1)

{
  thunk_FUN_00c3f320(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c125b0 @ 00c125b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c125b0(void *this,byte param_1)

{
  thunk_FUN_00c40030(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c125e0 @ 00c125e0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c125e0(void *this,byte param_1)

{
  thunk_FUN_00c3e3e0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c12610 @ 00c12610 ////

undefined4 * __thiscall ScalarDeletingDtor_00c12610(void *this,byte param_1)

{
  thunk_FUN_00c3f320(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION ScalarDeletingDtor_00c12640 @ 00c12640 ////

undefined4 * __thiscall ScalarDeletingDtor_00c12640(void *this,byte param_1)

{
  thunk_FUN_00c40030(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c12670 @ 00c12670 ////

undefined4 * __fastcall FUN_00c12670(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d03836;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00c186a0(param_1);
  local_4 = 0;
  *param_1 = &PTR_LAB_00da35c8;
  FUN_00c1a730(param_1 + 0x7c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00c3d910(param_1 + 0x89);
  FUN_00c3d910(param_1 + 0x8c);
  param_1[0x88] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c126f0 @ 00c126f0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c126f0(void *this,byte param_1)

{
  FUN_00c121c0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c12710 @ 00c12710 ////

undefined4 __thiscall FUN_00c12710(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = FUN_00c12300(param_1);
  *(int **)((int)this + 0x220) = piVar1;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  FUN_00c3ff10(piVar1);
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0x3f800000;
  *(undefined4 *)((int)this + 0x21c) = 0x3f800000;
  *(undefined1 *)((int)this + 0x240) = 0;
  *(undefined2 *)((int)this + 0x23c) = 0;
  *(undefined2 *)((int)this + 0x23e) = 0;
  return 0x3f800001;
}


//// FUNCTION SetVtable_00d9fbe8_00c12830 @ 00c12830 ////

void __fastcall SetVtable_00d9fbe8_00c12830(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c12860 @ 00c12860 ////

undefined4 * __thiscall ScalarDeletingDtor_00c12860(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00c12830(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c12920 @ 00c12920 ////

void __thiscall FUN_00c12920(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0xe8) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGetProcAddress");
    *(FARPROC *)((int)this + 0xe8) = pFVar1;
    if (*(char *)((int)this + 0x104) != '\0') {
      iVar2 = (*pFVar1)("alGetProcAddress");
      *(int *)((int)this + 0xe8) = iVar2;
    }
  }
  (**(code **)((int)this + 0xe8))(param_1);
  return;
}


//// FUNCTION FUN_00c12970 @ 00c12970 ////

void __thiscall
FUN_00c12970(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar1 = FUN_00c12920(this,"EAXSet");
    *(undefined4 *)((int)this + 0xf0) = uVar1;
  }
  (**(code **)((int)this + 0xf0))(param_1,param_2,param_3,param_4,param_5);
  return;
}


//// FUNCTION FUN_00c129c0 @ 00c129c0 ////

void __thiscall
FUN_00c129c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf4) == 0) {
    uVar1 = FUN_00c12920(this,"EAXGet");
    *(undefined4 *)((int)this + 0xf4) = uVar1;
  }
  (**(code **)((int)this + 0xf4))(param_1,param_2,param_3,param_4,param_5);
  return;
}


//// FUNCTION FUN_00c12a10 @ 00c12a10 ////

void __thiscall
FUN_00c12a10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf4) == 0) {
    uVar1 = FUN_00c12920(this,"EAXGet");
    *(undefined4 *)((int)this + 0xf4) = uVar1;
  }
  (**(code **)((int)this + 0xf4))(param_1,param_2,0,param_3,param_4);
  return;
}


//// FUNCTION FUN_00c12a50 @ 00c12a50 ////

void __fastcall FUN_00c12a50(int param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcSuspendContext");
    *(FARPROC *)(param_1 + 0x1c) = pFVar1;
  }
  (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  return;
}


//// FUNCTION FUN_00c12a90 @ 00c12a90 ////

void __fastcall FUN_00c12a90(int param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcProcessContext");
    *(FARPROC *)(param_1 + 0x20) = pFVar1;
  }
  (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  return;
}


//// FUNCTION FUN_00c12ad0 @ 00c12ad0 ////

undefined4 __fastcall FUN_00c12ad0(void *param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alcOpenDevice");
  if (pFVar1 == (FARPROC)0x0) {
    return 0;
  }
  iVar2 = FUN_00c12920(param_1,"alGenSources");
  *(bool *)((int)param_1 + 0x104) = iVar2 != 0;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00c12b10 @ 00c12b10 ////

void __fastcall FUN_00c12b10(int param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    (**(code **)(param_1 + 0x10))(0);
    if (*(int *)(param_1 + 0x18) == 0) {
      pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcDestroyContext");
      *(FARPROC *)(param_1 + 0x18) = pFVar1;
    }
    (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x100));
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  return;
}


//// FUNCTION FUN_00c12b60 @ 00c12b60 ////

bool __thiscall FUN_00c12b60(void *this,undefined4 param_1)

{
  char cVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0x24) == 0) {
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"alcIsExtensionPresent");
    *(FARPROC *)((int)this + 0x24) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      return false;
    }
  }
  cVar1 = (**(code **)((int)this + 0x24))(*(undefined4 *)((int)this + 0xfc),param_1);
  return (bool)('\x01' - (cVar1 != '\x01'));
}


//// FUNCTION FUN_00c12bb0 @ 00c12bb0 ////

void __thiscall FUN_00c12bb0(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x28) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alcGetString");
    *(FARPROC *)((int)this + 0x28) = pFVar1;
  }
  (**(code **)((int)this + 0x28))(*(undefined4 *)((int)this + 0xfc),param_1);
  return;
}


//// FUNCTION FUN_00c12bf0 @ 00c12bf0 ////

undefined4 __thiscall FUN_00c12bf0(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alcOpenDevice");
    *(FARPROC *)((int)this + 8) = pFVar1;
  }
  if (*(code **)((int)this + 8) == (code *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)((int)this + 8))(param_1);
  *(int *)((int)this + 0xfc) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x1ac) = param_1;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}


//// FUNCTION FUN_00c12c50 @ 00c12c50 ////

undefined4 __fastcall FUN_00c12c50(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcCreateContext");
    *(FARPROC *)(param_1 + 0xc) = pFVar1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcMakeContextCurrent");
    *(FARPROC *)(param_1 + 0x10) = pFVar1;
  }
  pcVar4 = *(code **)(param_1 + 0xc);
  if ((pcVar4 != (code *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    iVar2 = (*pcVar4)(*(undefined4 *)(param_1 + 0xfc),0);
    *(int *)(param_1 + 0x100) = iVar2;
    pcVar4 = (code *)0x0;
    if (iVar2 != 0) {
      uVar3 = (**(code **)(param_1 + 0x10))(iVar2);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return (uint)pcVar4 & 0xffffff00;
}


//// FUNCTION FUN_00c12cf0 @ 00c12cf0 ////

void __thiscall FUN_00c12cf0(void *this,char param_1)

{
  if ((param_1 != '\0') || (*(char *)((int)this + 0x104) != '\0')) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x9c) = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(undefined4 *)((int)this + 0xac) = 0;
    *(undefined4 *)((int)this + 0xb0) = 0;
    *(undefined4 *)((int)this + 0xb4) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
    *(undefined4 *)((int)this + 0xbc) = 0;
    *(undefined4 *)((int)this + 0xc0) = 0;
    *(undefined4 *)((int)this + 0xc4) = 0;
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
    *(undefined4 *)((int)this + 0xf0) = 0;
    *(undefined4 *)((int)this + 0xf4) = 0;
  }
  return;
}


//// FUNCTION FUN_00c12e00 @ 00c12e00 ////

void __fastcall FUN_00c12e00(void *param_1)

{
  FUN_00c12cf0(param_1,'\x01');
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  *(undefined4 *)((int)param_1 + 0x1ac) = 0;
  *(undefined1 *)((int)param_1 + 0x104) = 0;
  *(undefined1 *)((int)param_1 + 0x1b0) = 0;
  return;
}


//// FUNCTION FUN_00c12e50 @ 00c12e50 ////

undefined4 * __fastcall FUN_00c12e50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03848;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da373c;
  FUN_00c42b60(param_1 + 0x44);
  param_1[1] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  FUN_00c12cf0(param_1,'\x01');
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x3f] = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00c12f20 @ 00c12f20 ////

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00c12f20(char *param_1)

{
  char cVar1;
  FARPROC pFVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  tagWAVEOUTCAPSA local_48;
  int local_14;
  undefined1 local_10 [4];
  UINT_PTR local_c;
  char local_5;
  
  waveOutMessage((HWAVEOUT)0xffffffff,0x2015,(DWORD_PTR)&local_c,(DWORD_PTR)local_10);
  waveOutGetDevCapsA(local_c,&local_48,0x34);
  if (*(int *)(local_14 + 0x28) == 0) {
    pFVar2 = GetProcAddress(*(HMODULE *)(local_14 + 4),"alcGetString");
    *(FARPROC *)(local_14 + 0x28) = pFVar2;
  }
  pcVar3 = (char *)(**(code **)(local_14 + 0x28))(*(undefined4 *)(local_14 + 0xfc),0x1004);
  if (*(int *)(local_14 + 0x24) == 0) {
    pFVar2 = GetProcAddress(*(HMODULE *)(local_14 + 4),"alcIsExtensionPresent");
    *(FARPROC *)(local_14 + 0x24) = pFVar2;
    uVar7 = 0;
    if (pFVar2 != (FARPROC)0x0) goto LAB_00c12f9e;
  }
  else {
LAB_00c12f9e:
    uVar4 = (**(code **)(local_14 + 0x24))(*(undefined4 *)(local_14 + 0xfc),"ALC_ENUMERATION_EXT");
    local_5 = '\x01' - ((char)uVar4 != '\x01');
    uVar7 = CONCAT31((int3)((uint)uVar4 >> 8),local_5);
    if (local_5 != '\0') {
      while (pcVar3 != (char *)0x0) {
        iVar5 = _strncmp(pcVar3,local_48.szPname,0xff);
        if (iVar5 == 0) {
          if (pcVar3 == (char *)0x0) {
            return 0;
          }
          goto LAB_00c13030;
        }
        pcVar6 = pcVar3;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = (int)pcVar6 - (int)(pcVar3 + 1);
        pcVar3 = pcVar3 + uVar7;
        if (*pcVar3 == '\0') {
          uVar7 = CONCAT31((int3)(uVar7 >> 8),pcVar3[1]);
          if (pcVar3[1] == '\0') break;
          pcVar3 = pcVar3 + 1;
        }
      }
      goto LAB_00c12ffc;
    }
  }
  if ((pcVar3 != (char *)0x0) && (uVar7 = _strncmp(pcVar3,local_48.szPname,0xff), uVar7 == 0)) {
LAB_00c13030:
    pcVar3 = _strncpy(param_1,pcVar3,0x103);
    param_1[0x103] = '\0';
    return CONCAT31((int3)((uint)pcVar3 >> 8),1);
  }
LAB_00c12ffc:
  return uVar7 & 0xffffff00;
}


//// FUNCTION FUN_00c13060 @ 00c13060 ////

undefined4 * FUN_00c13060(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d0386b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x220);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00c42e20(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00c130c0 @ 00c130c0 ////

int __thiscall
FUN_00c130c0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)((int)this + 0xf4) == 0) {
    uVar1 = FUN_00c12920(this,"EAXGet");
    *(undefined4 *)((int)this + 0xf4) = uVar1;
  }
  iVar2 = (**(code **)((int)this + 0xf4))(param_1,param_2,0,param_3,param_4);
  if (iVar2 < 0xa004) {
    if (iVar2 == 0xa003) {
      return -3;
    }
    if (iVar2 == 0) {
      return 0;
    }
    bVar3 = iVar2 == 0xa001;
  }
  else {
    bVar3 = iVar2 == 0xa004;
  }
  if (bVar3) {
    return -3;
  }
  if (iVar2 == 0) {
    return 0;
  }
  return (uint)(iVar2 == 0xa005) * 4 + -9;
}


//// FUNCTION FUN_00c13140 @ 00c13140 ////

void __fastcall FUN_00c13140(int param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcSuspendContext");
    *(FARPROC *)(param_1 + 0x1c) = pFVar1;
  }
  (**(code **)(param_1 + 0x1c))(*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  return;
}


//// FUNCTION FUN_00c13180 @ 00c13180 ////

void __fastcall FUN_00c13180(int param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),"alcProcessContext");
    *(FARPROC *)(param_1 + 0x20) = pFVar1;
  }
  (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x100));
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}


//// FUNCTION FUN_00c131f0 @ 00c131f0 ////

void FUN_00c131f0(char *param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  pcVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_2;
  if (param_2 == 0) {
LAB_00c1321c:
    iVar1 = -0x7ff8ffa9;
  }
  else {
    do {
      if (*pcVar2 == '\0') {
        if (iVar4 == 0) goto LAB_00c1321c;
        iVar3 = param_2 - iVar4;
        goto LAB_00c1322b;
      }
      pcVar2 = pcVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar1 = -0x7ff8ffa9;
  }
LAB_00c1322b:
  if (-1 < iVar1) {
    _StringCopyWorkerA_12(param_1 + iVar3,param_2 - iVar3,param_3);
  }
  return;
}


//// FUNCTION FUN_00c13250 @ 00c13250 ////

void __thiscall
FUN_00c13250(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x98) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alListener3f");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alListener3f");
    }
    *(FARPROC *)((int)this + 0x98) = pFVar1;
  }
  (**(code **)((int)this + 0x98))(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00c132b0 @ 00c132b0 ////

void __thiscall FUN_00c132b0(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0xd4) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alDistanceModel");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alDistanceModel");
    }
    *(FARPROC *)((int)this + 0xd4) = pFVar1;
  }
  (**(code **)((int)this + 0xd4))(param_1);
  return;
}


//// FUNCTION FUN_00c13300 @ 00c13300 ////

void __thiscall FUN_00c13300(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0xd0) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGetString");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alGetString");
    }
    *(FARPROC *)((int)this + 0xd0) = pFVar1;
  }
  (**(code **)((int)this + 0xd0))(param_1);
  return;
}


//// FUNCTION FUN_00c13350 @ 00c13350 ////

bool __thiscall FUN_00c13350(void *this,undefined4 param_1)

{
  char cVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0xe4) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"alIsExtensionPresent");
    }
    else {
      pFVar2 = (FARPROC)FUN_00c12920(this,"alIsExtensionPresent");
    }
    *(FARPROC *)((int)this + 0xe4) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      return false;
    }
  }
  cVar1 = (**(code **)((int)this + 0xe4))(param_1);
  return (bool)('\x01' - (cVar1 != '\x01'));
}


//// FUNCTION FUN_00c133b0 @ 00c133b0 ////

void __thiscall
FUN_00c133b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar1 = FUN_00c12920(this,"EAXSet");
    *(undefined4 *)((int)this + 0xf0) = uVar1;
  }
  (**(code **)((int)this + 0xf0))(param_1,param_2,0,param_3,param_4);
  return;
}


//// FUNCTION FUN_00c133f0 @ 00c133f0 ////

void __fastcall FUN_00c133f0(void *param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)param_1 + 0xfc) != 0) {
    if (*(int *)((int)param_1 + 0x14) == 0) {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alcCloseDevice");
      *(FARPROC *)((int)param_1 + 0x14) = pFVar1;
    }
    (**(code **)((int)param_1 + 0x14))(*(undefined4 *)((int)param_1 + 0xfc));
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    *(undefined4 *)((int)param_1 + 0x1ac) = 0;
    FUN_00c12cf0(param_1,'\0');
  }
  return;
}


//// FUNCTION FUN_00c13450 @ 00c13450 ////

undefined4 __fastcall FUN_00c13450(void *param_1)

{
  bool bVar1;
  FARPROC pFVar2;
  char *_Str1;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0xd0) == 0) {
    if (*(char *)((int)param_1 + 0x104) == '\0') {
      pFVar2 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alGetString");
    }
    else {
      pFVar2 = (FARPROC)FUN_00c12920(param_1,"alGetString");
    }
    *(FARPROC *)((int)param_1 + 0xd0) = pFVar2;
  }
  _Str1 = (char *)(**(code **)((int)param_1 + 0xd0))(0xb001);
  if (_Str1 == (char *)0x0) {
    return 0;
  }
  bVar1 = FUN_00c13350(param_1,"EAX3.0");
  if (bVar1) {
    iVar3 = _strncmp(_Str1,"Creative",8);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_00c134d0 @ 00c134d0 ////

void __fastcall FUN_00c134d0(undefined4 *param_1)

{
  FARPROC pFVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00d03896;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00da373c;
  local_4 = 1;
  if (param_1[0x40] != 0) {
    (*(code *)param_1[4])(0);
    if (param_1[6] == 0) {
      pFVar1 = GetProcAddress((HMODULE)param_1[1],"alcDestroyContext");
      param_1[6] = pFVar1;
    }
    (*(code *)param_1[6])(param_1[0x40]);
    param_1[0x40] = 0;
  }
  FUN_00c133f0(param_1);
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00c42dd0(param_1 + 0x44);
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00c13580 @ 00c13580 ////

void __fastcall FUN_00c13580(void *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int)param_1 + 0x1b4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_00c12b10((int)param_1);
    FUN_00c133f0(param_1);
    if (*(HMODULE *)((int)param_1 + 4) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)((int)param_1 + 4));
    }
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(undefined1 *)((int)param_1 + 0x10c) = 0;
    FUN_00c12cf0(param_1,'\x01');
    *(undefined4 *)((int)param_1 + 8) = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0;
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    *(undefined4 *)((int)param_1 + 0x20) = 0;
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0xfc) = 0;
    *(undefined4 *)((int)param_1 + 0x1ac) = 0;
    *(undefined1 *)((int)param_1 + 0x104) = 0;
    *(undefined1 *)((int)param_1 + 0x1b0) = 0;
  }
  return;
}


//// FUNCTION FUN_00c135f0 @ 00c135f0 ////

void __fastcall FUN_00c135f0(void *param_1)

{
  FUN_00c42ce0((undefined4 *)((int)param_1 + 0x110));
  FUN_00c13580(param_1);
  return;
}


//// FUNCTION FUN_00c13620 @ 00c13620 ////

undefined4 * __fastcall FUN_00c13620(undefined4 *param_1)

{
  FUN_00c43d30(param_1);
  *param_1 = &PTR_FUN_00da37e8;
  return param_1;
}


//// FUNCTION FUN_00c13650 @ 00c13650 ////

int __thiscall
FUN_00c13650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar1 = FUN_00c12920(this,"EAXSet");
    *(undefined4 *)((int)this + 0xf0) = uVar1;
  }
  iVar2 = (**(code **)((int)this + 0xf0))(param_1,param_2,0,param_3,param_4);
  if (iVar2 < 0xa004) {
    if (iVar2 == 0xa003) {
      return -3;
    }
    if (iVar2 == 0) {
      return 0;
    }
    bVar3 = iVar2 == 0xa001;
  }
  else {
    bVar3 = iVar2 == 0xa004;
  }
  if (bVar3) {
    return -3;
  }
  if (iVar2 == 0) {
    return 0;
  }
  return (uint)(iVar2 == 0xa005) * 4 + -9;
}


//// FUNCTION FUN_00c136f0 @ 00c136f0 ////

void __thiscall FUN_00c136f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0xf0) == 0) {
    uVar1 = FUN_00c12920(this,"EAXSet");
    *(undefined4 *)((int)this + 0xf0) = uVar1;
  }
  (**(code **)((int)this + 0xf0))(&DAT_00dac9c8,param_1,0,param_2,param_3);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c13730 @ 00c13730 ////

undefined4 * __thiscall ScalarDeletingDtor_00c13730(void *this,byte param_1)

{
  FUN_00c134d0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c13750 @ 00c13750 ////

uint __thiscall FUN_00c13750(void *this,char param_1)

{
  uint in_EAX;
  DWORD DVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  UINT UVar4;
  HANDLE hFindFile;
  CHAR local_34c [264];
  char local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  if ((*(char *)((int)this + 0x10c) != '\0') && (param_1 == '\0')) {
    return in_EAX & 0xffffff00;
  }
  *(undefined1 *)((int)this + 0x10c) = 1;
  DVar1 = GetCurrentDirectoryA(0x105,local_34c);
  if (DVar1 != 0) {
    FUN_00c131f0(local_34c,0x104,"/OpenAL32.dll");
    pHVar2 = LoadLibraryA(local_34c);
    *(HMODULE *)((int)this + 4) = pHVar2;
    if (pHVar2 == (HMODULE)0x0) {
      DVar1 = GetCurrentDirectoryA(0x105,local_34c);
      if (DVar1 != 0) {
        FUN_00c131f0(local_34c,0x104,"/wrap_oal.dll");
        pHVar2 = LoadLibraryA(local_34c);
        *(HMODULE *)((int)this + 4) = pHVar2;
      }
    }
    if (*(int *)((int)this + 4) != 0) {
      uVar3 = FUN_00c12ad0(this);
      if ((char)uVar3 != '\0') {
        uVar3 = FUN_00c12bf0(this,"DirectSound3D");
        if ((char)uVar3 != '\0') {
          uVar3 = FUN_00c12c50((int)this);
          if ((char)uVar3 != '\0') {
            uVar3 = FUN_00c13450(this);
            if ((char)uVar3 != '\0') goto LAB_00c13832;
            FUN_00c12b10((int)this);
          }
          FUN_00c133f0(this);
        }
      }
      FreeLibrary(*(HMODULE *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    FUN_00c12e00(this);
  }
  UVar4 = GetSystemDirectoryA(local_34c,0x105);
  hFindFile = (HANDLE)0x0;
  if (UVar4 != 0) {
    FUN_00c131f0(local_34c,0x104,"/OpenAL32.dll");
    hFindFile = FindFirstFileA(local_34c,&local_140);
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
      pHVar2 = LoadLibraryA(local_34c);
      *(HMODULE *)((int)this + 4) = pHVar2;
      hFindFile = (HANDLE)0x0;
      if (pHVar2 != (HMODULE)0x0) {
        uVar3 = FUN_00c12ad0(this);
        if ((char)uVar3 != '\0') {
          uVar3 = FUN_00c12bf0(this,0);
          if ((char)uVar3 != '\0') {
            uVar3 = FUN_00c12f20(local_244);
            FUN_00c133f0(this);
            if ((char)uVar3 != '\0') {
              uVar3 = FUN_00c12bf0(this,local_244);
              if ((char)uVar3 != '\0') {
                uVar3 = FUN_00c12c50((int)this);
                if ((char)uVar3 != '\0') {
                  uVar3 = FUN_00c13450(this);
                  if ((char)uVar3 != '\0') {
LAB_00c13832:
                    return CONCAT31((int3)((uint)uVar3 >> 8),1);
                  }
                  FUN_00c12b10((int)this);
                }
                FUN_00c133f0(this);
              }
            }
          }
        }
        hFindFile = (HANDLE)FreeLibrary(*(HMODULE *)((int)this + 4));
        *(undefined4 *)((int)this + 4) = 0;
      }
    }
  }
  return (uint)hFindFile & 0xffffff00;
}


//// FUNCTION FUN_00c13950 @ 00c13950 ////

undefined4 * __fastcall FUN_00c13950(undefined4 *param_1)

{
  FUN_00c43d30(param_1);
  *param_1 = &PTR_FUN_00da3868;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c13970 @ 00c13970 ////

undefined4 * __thiscall ScalarDeletingDtor_00c13970(void *this,byte param_1)

{
  thunk_FUN_00be0c60(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c139a0 @ 00c139a0 ////

undefined4 * FUN_00c139a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d038ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x88);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00c43d30(puVar1);
    *puVar1 = &PTR_FUN_00da37e8;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION ScalarDeletingDtor_00c13a00 @ 00c13a00 ////

undefined4 * __thiscall ScalarDeletingDtor_00c13a00(void *this,byte param_1)

{
  thunk_FUN_00be0c60(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c13a30 @ 00c13a30 ////

void __fastcall FUN_00c13a30(void *param_1)

{
  FARPROC pFVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)((int)param_1 + 0xd4) == 0) {
    if (*(char *)((int)param_1 + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alDistanceModel");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(param_1,"alDistanceModel");
    }
    *(FARPROC *)((int)param_1 + 0xd4) = pFVar1;
  }
  (**(code **)((int)param_1 + 0xd4))(0);
  if (*(int *)((int)param_1 + 0x98) == 0) {
    if (*(char *)((int)param_1 + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alListener3f");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(param_1,"alListener3f");
    }
    *(FARPROC *)((int)param_1 + 0x98) = pFVar1;
  }
  (**(code **)((int)param_1 + 0x98))(0x1004,0,0,0);
  if (*(int *)((int)param_1 + 0x98) == 0) {
    if (*(char *)((int)param_1 + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alListener3f");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(param_1,"alListener3f");
    }
    *(FARPROC *)((int)param_1 + 0x98) = pFVar1;
  }
  (**(code **)((int)param_1 + 0x98))(0x1006,0,0,0);
  uStack_8 = 0xffffd8f0;
  if (*(int *)((int)param_1 + 0xf0) == 0) {
    uVar2 = FUN_00c12920(param_1,"EAXSet");
    *(undefined4 *)((int)param_1 + 0xf0) = uVar2;
  }
  (**(code **)((int)param_1 + 0xf0))(&DAT_00dac9c8,0x80000005,0,&uStack_8,4);
  uStack_4 = 0;
  if (*(int *)((int)param_1 + 0xf0) == 0) {
    uVar2 = FUN_00c12920(param_1,"EAXSet");
    *(undefined4 *)((int)param_1 + 0xf0) = uVar2;
  }
  (**(code **)((int)param_1 + 0xf0))(&DAT_00dac9c8,0x80000018,0,&uStack_4,4);
  return;
}


//// FUNCTION FUN_00c13df0 @ 00c13df0 ////

undefined4 * FUN_00c13df0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00d038cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00c0ef90(0x88);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00c43d30(puVar1);
    *puVar1 = &PTR_FUN_00da3868;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


//// FUNCTION FUN_00c13e60 @ 00c13e60 ////

undefined4 * __fastcall FUN_00c13e60(undefined4 *param_1)

{
  FUN_00c144d0(param_1);
  *param_1 = &PTR_FUN_00da38b8;
  return param_1;
}


//// FUNCTION FUN_00c13e90 @ 00c13e90 ////

void __fastcall FUN_00c13e90(int *param_1)

{
  *param_1 = (int)&PTR_FUN_00da38b8;
  FUN_00c14500(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c13fb0 @ 00c13fb0 ////

int * __thiscall ScalarDeletingDtor_00c13fb0(void *this,byte param_1)

{
  FUN_00c13e90(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00c13fd0 @ 00c13fd0 ////

void __fastcall SetVtable_00d9fbe8_00c13fd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION FUN_00c14030 @ 00c14030 ////

undefined2 * __thiscall FUN_00c14030(void *this,int param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  
  uVar1 = (int)((uint)param_2 * (uint)param_3 + ((int)((uint)param_2 * (uint)param_3) >> 0x1f & 7U))
          >> 3;
  *(short *)((int)this + 0xc) = (short)uVar1;
  *(undefined2 *)this = 0xfffe;
  *(ushort *)((int)this + 2) = param_2;
  *(int *)((int)this + 4) = param_1;
  *(ushort *)((int)this + 0xe) = param_3;
  *(undefined2 *)((int)this + 0x10) = 0x16;
  *(uint *)((int)this + 8) = (uVar1 & 0xffff) * param_1;
  *(ushort *)((int)this + 0x12) = param_3;
  if (param_2 == 2) {
    *(undefined4 *)((int)this + 0x14) = 3;
  }
  else if (param_2 == 4) {
    *(undefined4 *)((int)this + 0x14) = 0x33;
  }
  else if (param_2 == 6) {
    *(undefined4 *)((int)this + 0x14) = 0x3f;
  }
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = 0x100000;
  *(undefined4 *)((int)this + 0x20) = 0xaa000080;
  *(undefined4 *)((int)this + 0x24) = 0x719b3800;
  return this;
}


//// FUNCTION FUN_00c14180 @ 00c14180 ////

void __fastcall FUN_00c14180(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x18))();
  piVar1 = (int *)param_1[0x185];
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    CoUninitialize();
    param_1[0x185] = 0;
  }
  return;
}


//// FUNCTION FUN_00c141c0 @ 00c141c0 ////

void __fastcall FUN_00c141c0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  puVar3 = local_8;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x610) + 0x10))
                    (*(int **)(param_1 + 0x610),puVar3,local_4);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x60e) = 0;
    return;
  }
  puVar1 = *(undefined1 **)(param_1 + 0x618);
  if (puVar1 <= puVar3) {
    *(int *)(param_1 + 0x624) = (int)puVar3 - (int)puVar1;
    return;
  }
  *(undefined1 **)(param_1 + 0x624) = puVar3 + (*(int *)(param_1 + 0x61c) - (int)puVar1);
  return;
}


//// FUNCTION FUN_00c14220 @ 00c14220 ////

undefined4 __fastcall FUN_00c14220(int param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 0x620) <= *(uint *)(param_1 + 0x624)) {
    return CONCAT31((int3)(*(uint *)(param_1 + 0x624) >> 8),1);
  }
  FUN_00c141c0(param_1);
  uVar1 = *(uint *)(param_1 + 0x620);
  if (*(int *)(param_1 + 0x61c) - uVar1 <= *(uint *)(param_1 + 0x624)) {
    *(undefined1 *)(param_1 + 0x60c) = 1;
  }
  return CONCAT31((int3)(uVar1 >> 8),'\x01' - (*(uint *)(param_1 + 0x624) < uVar1));
}


//// FUNCTION FUN_00c14310 @ 00c14310 ////

uint __thiscall FUN_00c14310(void *this,uint param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined2 local_50;
  ushort local_4e;
  undefined4 local_4c;
  int local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined2 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 *puStack_24;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar4 = param_1 * param_2 * 2;
  *(int *)((int)this + 0x61c) = iVar4;
  *(uint *)((int)this + 0x620) = param_1 << 8;
  FUN_00c14030(&local_28,0xac44,(ushort)param_1,0x10);
  uVar2 = (int)((param_1 & 0xffff) * 0x10) >> 3;
  local_48 = (uVar2 & 0xffff) * 0xac44;
  local_44 = (undefined2)uVar2;
  local_50 = 1;
  local_4c = 0xac44;
  local_42 = 0x10;
  local_40 = 0;
  local_3c = 0x14;
  local_38 = 0x18000;
  if (param_3 == '\0') {
    if (param_1 < 3) {
      local_2c = (undefined4 *)&local_50;
    }
    else {
      local_2c = &local_28;
    }
  }
  else {
    local_2c = (undefined4 *)&local_50;
    local_38 = 0x18014;
  }
  puVar1 = (undefined4 *)((int)this + 0x610);
  local_30 = 0;
  local_4e = (ushort)param_1;
  local_34 = iVar4;
  uVar2 = (**(code **)(**(int **)((int)this + 0x614) + 0xc))
                    (*(int **)((int)this + 0x614),&local_3c,puVar1,0);
  if (-1 < (int)uVar2) {
    puVar6 = &stack0xffffff9c;
    uVar2 = (**(code **)(*(int *)*puVar1 + 0x2c))
                      ((int *)*puVar1,0,0,auStack_4,puVar6,auStack_8,auStack_c,2);
    if (-1 < (int)uVar2) {
      uVar2 = *(uint *)((int)this + 0x61c);
      puVar5 = puStack_24;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uVar2 = (**(code **)(*(int *)*puVar1 + 0x4c))
                        ((int *)*puVar1,puStack_24,puVar6,local_28,local_2c);
      if (-1 < (int)uVar2) {
        *(undefined4 *)((int)this + 0x618) = 0;
        *(undefined4 *)((int)this + 0x624) = 0;
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION ScalarDeletingDtor_00c144b0 @ 00c144b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c144b0(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00c13fd0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c144d0 @ 00c144d0 ////

void __fastcall FUN_00c144d0(undefined4 *param_1)

{
  param_1[0x181] = 0;
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  *param_1 = &PTR_FUN_00da3918;
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  param_1[0x187] = 0;
  return;
}


//// FUNCTION FUN_00c14500 @ 00c14500 ////

void __fastcall FUN_00c14500(int *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d038e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_00da3918;
  local_4 = 0;
  FUN_00c145b0(param_1);
  piVar1 = (int *)param_1[0x185];
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    CoUninitialize();
    param_1[0x185] = 0;
  }
  *param_1 = (int)&PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c145b0 @ 00c145b0 ////

void __fastcall FUN_00c145b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_1[0x184] != 0) {
    FUN_00c141c0((int)param_1);
    uVar1 = param_1[0x189];
    iVar2 = param_1[0x187];
    if ((uint)param_1[0x188] <= uVar1) {
      if (*(char *)((int)param_1 + 0x60e) == '\0') {
        piVar3 = param_1 + 1;
      }
      else {
        piVar3 = (int *)(**(code **)(*param_1 + 0x20))();
      }
      uVar5 = param_1[0x188];
      piVar6 = piVar3;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)piVar6 = 0;
        piVar6 = (int *)((int)piVar6 + 1);
      }
      if (*(char *)((int)param_1 + 0x60e) == '\0') {
        param_1[0x182] = param_1[0x182] + 1;
      }
      else {
        (**(code **)(*param_1 + 0x24))(piVar3);
      }
    }
    Sleep((((iVar2 - uVar1) / (uint)param_1[0x188] + 1) * 0x1f400) / 0xac44);
    (**(code **)(*(int *)param_1[0x184] + 0x48))((int *)param_1[0x184]);
    (**(code **)(*(int *)param_1[0x184] + 8))((int *)param_1[0x184]);
    param_1[0x184] = 0;
  }
  param_1[0x187] = 0;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c14680 @ 00c14680 ////

int * __thiscall ScalarDeletingDtor_00c14680(void *this,byte param_1)

{
  FUN_00c14500(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c146a0 @ 00c146a0 ////

undefined4 * __fastcall FUN_00c146a0(undefined4 *param_1)

{
  FUN_00c14bc0(param_1);
  *param_1 = &PTR_FUN_00da3940;
  return param_1;
}


//// FUNCTION FUN_00c146d0 @ 00c146d0 ////

void __fastcall FUN_00c146d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00da3940;
  FUN_00c14bf0(param_1);
  return;
}


//// FUNCTION ScalarDeletingDtor_00c14730 @ 00c14730 ////

undefined4 * __thiscall ScalarDeletingDtor_00c14730(void *this,byte param_1)

{
  FUN_00c146d0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c14780 @ 00c14780 ////

void __fastcall FUN_00c14780(int *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  return;
}


//// FUNCTION FUN_00c147b0 @ 00c147b0 ////

void __thiscall FUN_00c147b0(void *this,undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGenBuffers");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alGenBuffers");
    }
    *(FARPROC *)((int)this + 0x2c) = pFVar1;
  }
  (**(code **)((int)this + 0x2c))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c14800 @ 00c14800 ////

void __thiscall FUN_00c14800(void *this,undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x30) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alDeleteBuffers");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alDeleteBuffers");
    }
    *(FARPROC *)((int)this + 0x30) = pFVar1;
  }
  (**(code **)((int)this + 0x30))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c14850 @ 00c14850 ////

void __thiscall
FUN_00c14850(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x38) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alBufferData");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alBufferData");
    }
    *(FARPROC *)((int)this + 0x38) = pFVar1;
  }
  (**(code **)((int)this + 0x38))(param_1,param_2,param_3,param_4,param_5);
  return;
}


//// FUNCTION FUN_00c148a0 @ 00c148a0 ////

void __thiscall FUN_00c148a0(void *this,undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x44) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGenSources");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alGenSources");
    }
    *(FARPROC *)((int)this + 0x44) = pFVar1;
  }
  (**(code **)((int)this + 0x44))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c148f0 @ 00c148f0 ////

void __thiscall FUN_00c148f0(void *this,undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x48) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alDeleteSources");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alDeleteSources");
    }
    *(FARPROC *)((int)this + 0x48) = pFVar1;
  }
  (**(code **)((int)this + 0x48))(param_1,param_2);
  return;
}


//// FUNCTION FUN_00c14940 @ 00c14940 ////

void __thiscall FUN_00c14940(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x5c) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourcei");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourcei");
    }
    *(FARPROC *)((int)this + 0x5c) = pFVar1;
  }
  (**(code **)((int)this + 0x5c))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c14990 @ 00c14990 ////

void __thiscall FUN_00c14990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x68) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGetSourcei");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alGetSourcei");
    }
    *(FARPROC *)((int)this + 0x68) = pFVar1;
  }
  (**(code **)((int)this + 0x68))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c149e0 @ 00c149e0 ////

void __thiscall FUN_00c149e0(void *this,undefined4 param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0x6c) == 0) {
    if (*(char *)((int)this + 0x104) != '\0') {
      pcVar1 = (code *)FUN_00c12920(this,"alSourcePlay");
      *(code **)((int)this + 0x6c) = pcVar1;
      (*pcVar1)(param_1);
      return;
    }
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourcePlay");
    *(FARPROC *)((int)this + 0x6c) = pFVar2;
  }
  (**(code **)((int)this + 0x6c))(param_1);
  return;
}


//// FUNCTION FUN_00c14a30 @ 00c14a30 ////

void __thiscall FUN_00c14a30(void *this,undefined4 param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)this + 0x7c) == 0) {
    if (*(char *)((int)this + 0x104) != '\0') {
      pcVar1 = (code *)FUN_00c12920(this,"alSourceStop");
      *(code **)((int)this + 0x7c) = pcVar1;
      (*pcVar1)(param_1);
      return;
    }
    pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourceStop");
    *(FARPROC *)((int)this + 0x7c) = pFVar2;
  }
  (**(code **)((int)this + 0x7c))(param_1);
  return;
}


//// FUNCTION FUN_00c14a80 @ 00c14a80 ////

void __thiscall FUN_00c14a80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x8c) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourceQueueBuffers");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourceQueueBuffers");
    }
    *(FARPROC *)((int)this + 0x8c) = pFVar1;
  }
  (**(code **)((int)this + 0x8c))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c14ad0 @ 00c14ad0 ////

void __thiscall FUN_00c14ad0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0x90) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alSourceUnqueueBuffers");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alSourceUnqueueBuffers");
    }
    *(FARPROC *)((int)this + 0x90) = pFVar1;
  }
  (**(code **)((int)this + 0x90))(param_1,param_2,param_3);
  return;
}


//// FUNCTION FUN_00c14b20 @ 00c14b20 ////

void __fastcall FUN_00c14b20(void *param_1)

{
  code *pcVar1;
  FARPROC pFVar2;
  
  if (*(int *)((int)param_1 + 0xe0) == 0) {
    if (*(char *)((int)param_1 + 0x104) != '\0') {
      pcVar1 = (code *)FUN_00c12920(param_1,"alGetError");
      *(code **)((int)param_1 + 0xe0) = pcVar1;
      (*pcVar1)();
      return;
    }
    pFVar2 = GetProcAddress(*(HMODULE *)((int)param_1 + 4),"alGetError");
    *(FARPROC *)((int)param_1 + 0xe0) = pFVar2;
  }
  (**(code **)((int)param_1 + 0xe0))();
  return;
}


//// FUNCTION FUN_00c14b70 @ 00c14b70 ////

void __thiscall FUN_00c14b70(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  
  if (*(int *)((int)this + 0xec) == 0) {
    if (*(char *)((int)this + 0x104) == '\0') {
      pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),"alGetEnumValue");
    }
    else {
      pFVar1 = (FARPROC)FUN_00c12920(this,"alGetEnumValue");
    }
    *(FARPROC *)((int)this + 0xec) = pFVar1;
    if (pFVar1 == (FARPROC)0x0) {
      return;
    }
  }
  (**(code **)((int)this + 0xec))(param_1);
  return;
}


//// FUNCTION FUN_00c14bc0 @ 00c14bc0 ////

void __fastcall FUN_00c14bc0(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  *param_1 = &PTR_FUN_00da3a30;
  param_1[0x184] = 0;
  param_1[0x181] = 0;
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined1 *)((int)param_1 + 0x621) = 0;
  return;
}


//// FUNCTION FUN_00c14bf0 @ 00c14bf0 ////

void __fastcall FUN_00c14bf0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00d03908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00da3a30;
  local_4 = 0;
  FUN_00c14e00((int)param_1);
  *(undefined1 *)((int)param_1 + 0x60e) = 0;
  param_1[0x181] = 0;
  *param_1 = &PTR_LAB_00d9fbe8;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00c14e00 @ 00c14e00 ////

void __fastcall FUN_00c14e00(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x620) != '\0') {
    FUN_00c14a30(&DAT_010d5f50,*(undefined4 *)(param_1 + 0x614));
    uVar1 = *(undefined4 *)(param_1 + 0x614);
    if (DAT_010d5fac == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5fac = GetProcAddress(DAT_010d5f54,"alSourcei");
      }
      else {
        DAT_010d5fac = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourcei");
      }
    }
    (*DAT_010d5fac)(uVar1,0x1009,0);
    if (DAT_010d5f98 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5f98 = GetProcAddress(DAT_010d5f54,"alDeleteSources");
      }
      else {
        DAT_010d5f98 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alDeleteSources");
      }
    }
    (*DAT_010d5f98)(1,(undefined4 *)(param_1 + 0x614));
    *(undefined1 *)(param_1 + 0x620) = 0;
  }
  if (*(char *)(param_1 + 0x621) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x610);
    uVar2 = *(undefined4 *)(param_1 + 0x604);
    if (DAT_010d5f80 == (FARPROC)0x0) {
      if (DAT_010d6054 == '\0') {
        DAT_010d5f80 = GetProcAddress(DAT_010d5f54,"alDeleteBuffers");
      }
      else {
        DAT_010d5f80 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alDeleteBuffers");
      }
    }
    (*DAT_010d5f80)(uVar2,uVar1);
    *(undefined1 *)(param_1 + 0x621) = 0;
  }
  if (*(int *)(param_1 + 0x610) != 0) {
    FUN_00c0efa0(*(int *)(param_1 + 0x610));
    *(undefined4 *)(param_1 + 0x610) = 0;
  }
  return;
}


//// FUNCTION FUN_00c14fb0 @ 00c14fb0 ////

void __fastcall FUN_00c14fb0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
    }
  }
  (*DAT_010d6030)();
  uVar1 = *(undefined4 *)(param_1 + 0x61c);
  uVar2 = *(undefined4 *)(param_1 + 0x618);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x610) + *(int *)(param_1 + 0x624) * 4);
  if (DAT_010d5f88 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5f88 = GetProcAddress(DAT_010d5f54,"alBufferData");
    }
    else {
      DAT_010d5f88 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alBufferData");
    }
  }
  (*DAT_010d5f88)(uVar3,uVar2,param_1 + 4,uVar1,0xac44);
  iVar5 = *(int *)(param_1 + 0x610);
  iVar4 = *(int *)(param_1 + 0x624);
  uVar1 = *(undefined4 *)(param_1 + 0x614);
  if (DAT_010d5fdc == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5fdc = GetProcAddress(DAT_010d5f54,"alSourceQueueBuffers");
    }
    else {
      DAT_010d5fdc = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourceQueueBuffers");
    }
  }
  (*DAT_010d5fdc)(uVar1,1,iVar5 + iVar4 * 4);
  iVar5 = *(int *)(param_1 + 0x624) + 1;
  *(int *)(param_1 + 0x624) = iVar5;
  if (iVar5 == *(int *)(param_1 + 0x604)) {
    *(undefined4 *)(param_1 + 0x624) = 0;
  }
  *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + 1;
  return;
}


//// FUNCTION FUN_00c150e0 @ 00c150e0 ////

void __fastcall FUN_00c150e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_010d6030 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d6030 = GetProcAddress(DAT_010d5f54,"alGetError");
    }
    else {
      DAT_010d6030 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alGetError");
    }
  }
  (*DAT_010d6030)();
  iVar3 = *(int *)(param_1 + 0x628);
  iVar1 = *(int *)(param_1 + 0x610);
  uVar2 = *(undefined4 *)(param_1 + 0x614);
  if (DAT_010d5fe0 == (FARPROC)0x0) {
    if (DAT_010d6054 == '\0') {
      DAT_010d5fe0 = GetProcAddress(DAT_010d5f54,"alSourceUnqueueBuffers");
    }
    else {
      DAT_010d5fe0 = (FARPROC)FUN_00c12920(&DAT_010d5f50,"alSourceUnqueueBuffers");
    }
  }
  (*DAT_010d5fe0)(uVar2,1,iVar1 + iVar3 * 4);
  iVar3 = *(int *)(param_1 + 0x628) + 1;
  *(int *)(param_1 + 0x628) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x604)) {
    *(undefined4 *)(param_1 + 0x628) = 0;
  }
  *(int *)(param_1 + 0x608) = *(int *)(param_1 + 0x608) + -1;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c151b0 @ 00c151b0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c151b0(void *this,byte param_1)

{
  FUN_00c14bf0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00d9fbe8_00c15340 @ 00c15340 ////

void __fastcall SetVtable_00d9fbe8_00c15340(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d9fbe8;
  return;
}


//// FUNCTION FUN_00c15620 @ 00c15620 ////

void __thiscall FUN_00c15620(void *this,undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = this;
  if (*(int *)((int)this + 0x20) != 0) {
    do {
      (**(code **)(*(int *)this + 0xc))(param_1,puVar1[1],*(undefined2 *)(param_2 + uVar2 * 2));
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x20));
  }
  return;
}


//// FUNCTION FUN_00c15660 @ 00c15660 ////

void __thiscall FUN_00c15660(void *this,undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    iVar1 = param_3 - (int)param_2;
    puVar2 = this;
    do {
      puVar2 = puVar2 + 1;
      (**(code **)(*(int *)this + 0x24))
                (param_1,*puVar2,*param_2,(int)*(short *)(iVar1 + (int)param_2));
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < *(uint *)((int)this + 0x20));
  }
  return;
}


//// FUNCTION FUN_00c156c0 @ 00c156c0 ////

void __thiscall FUN_00c156c0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x18))(param_1,*(undefined4 *)((int)this + 4),0x3f000000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x200,*(undefined4 *)((int)this + 4),0x3f000000);
    return;
  }
  (**(code **)(*(int *)this + 0x20))(param_1,*(undefined4 *)((int)this + 4));
  (**(code **)(*(int *)this + 0x20))(param_1 + 0x200,*(undefined4 *)((int)this + 8));
  if (3 < *(uint *)((int)this + 0x20)) {
    (**(code **)(*(int *)this + 0x20))(param_1,*(undefined4 *)((int)this + 0xc));
    (**(code **)(*(int *)this + 0x20))(param_1 + 0x200,*(undefined4 *)((int)this + 0x10));
  }
  return;
}


//// FUNCTION FUN_00c15740 @ 00c15740 ////

void __thiscall FUN_00c15740(void *this,int param_1)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x10))(param_1,*(undefined4 *)((int)this + 4),0x4000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x200,*(undefined4 *)((int)this + 4),0x4000);
    return;
  }
  (**(code **)(*(int *)this + 0x14))(param_1,*(undefined4 *)((int)this + 4));
  (**(code **)(*(int *)this + 0x14))(param_1 + 0x200,*(undefined4 *)((int)this + 8));
  if (3 < *(uint *)((int)this + 0x20)) {
    (**(code **)(*(int *)this + 0x14))(param_1,*(undefined4 *)((int)this + 0xc));
    (**(code **)(*(int *)this + 0x14))(param_1 + 0x200,*(undefined4 *)((int)this + 0x10));
  }
  return;
}


//// FUNCTION FUN_00c157c0 @ 00c157c0 ////

void __thiscall FUN_00c157c0(void *this,int param_1,ushort *param_2)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2 >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 1);
    return;
  }
  (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2);
  (**(code **)(*(int *)this + 0xc))(param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1]);
  if (3 < *(uint *)((int)this + 0x20)) {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 0xc),param_2[2]);
    (**(code **)(*(int *)this + 0xc))(param_1 + 0x100,*(undefined4 *)((int)this + 0x10),param_2[3]);
  }
  return;
}


//// FUNCTION FUN_00c15870 @ 00c15870 ////

void __thiscall FUN_00c15870(void *this,int param_1,ushort *param_2,short *param_3)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 4),*param_2 >> 1,(int)*param_3 / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 1,(int)param_3[1] / 2);
    return;
  }
  (**(code **)(*(int *)this + 0x24))(param_1,*(undefined4 *)((int)this + 4),*param_2,*param_3);
  uVar1 = (uint)(ushort)param_3[1];
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1],uVar1);
  if (3 < *(uint *)((int)this + 0x20)) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 0xc),param_2[2],param_3[2]);
    (**(code **)(*(int *)this + 0x24))
              (uVar1,*(undefined4 *)((int)this + 0x10),param_2[3],param_3[3]);
  }
  return;
}


//// FUNCTION FUN_00c15970 @ 00c15970 ////

void __thiscall FUN_00c15970(void *this,int param_1)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x18))(param_1,*(undefined4 *)((int)this + 4),0x3e800000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x200,*(undefined4 *)((int)this + 4),0x3e800000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x400,*(undefined4 *)((int)this + 4),0x3e800000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x600,*(undefined4 *)((int)this + 4),0x3e800000);
    return;
  }
  if (*(int *)((int)this + 0x20) == 2) {
    (**(code **)(*(int *)this + 0x18))(param_1,*(undefined4 *)((int)this + 4),0x3f000000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x200,*(undefined4 *)((int)this + 8),0x3f000000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x400,*(undefined4 *)((int)this + 4),0x3f000000);
    (**(code **)(*(int *)this + 0x18))(param_1 + 0x600,*(undefined4 *)((int)this + 8),0x3f000000);
    return;
  }
  (**(code **)(*(int *)this + 0x20))(param_1,*(undefined4 *)((int)this + 4));
  (**(code **)(*(int *)this + 0x20))(param_1 + 0x200,*(undefined4 *)((int)this + 8));
  (**(code **)(*(int *)this + 0x20))(param_1 + 0x400,*(undefined4 *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0x20))(param_1 + 0x600,*(undefined4 *)((int)this + 0x10));
  return;
}


//// FUNCTION FUN_00c15a80 @ 00c15a80 ////

void __thiscall FUN_00c15a80(void *this,int param_1)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x10))(param_1,*(undefined4 *)((int)this + 4),0x2000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x200,*(undefined4 *)((int)this + 4),0x2000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x400,*(undefined4 *)((int)this + 4),0x2000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x600,*(undefined4 *)((int)this + 4),0x2000);
    return;
  }
  if (*(int *)((int)this + 0x20) == 2) {
    (**(code **)(*(int *)this + 0x10))(param_1,*(undefined4 *)((int)this + 4),0x4000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x200,*(undefined4 *)((int)this + 8),0x4000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x400,*(undefined4 *)((int)this + 4),0x4000);
    (**(code **)(*(int *)this + 0x10))(param_1 + 0x600,*(undefined4 *)((int)this + 8),0x4000);
    return;
  }
  (**(code **)(*(int *)this + 0x14))(param_1,*(undefined4 *)((int)this + 4));
  (**(code **)(*(int *)this + 0x14))(param_1 + 0x200,*(undefined4 *)((int)this + 8));
  (**(code **)(*(int *)this + 0x14))(param_1 + 0x400,*(undefined4 *)((int)this + 0xc));
  (**(code **)(*(int *)this + 0x14))(param_1 + 0x600,*(undefined4 *)((int)this + 0x10));
  return;
}


//// FUNCTION FUN_00c15b90 @ 00c15b90 ////

void __thiscall FUN_00c15b90(void *this,int param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2 >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[2] >> 2);
    uVar2 = *(undefined4 *)((int)this + 4);
    uVar1 = param_2[3] >> 2;
  }
  else if (*(int *)((int)this + 0x20) == 2) {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2 >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1] >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[2] >> 1);
    uVar2 = *(undefined4 *)((int)this + 8);
    uVar1 = param_2[3] >> 1;
  }
  else {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2);
    (**(code **)(*(int *)this + 0xc))(param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1]);
    (**(code **)(*(int *)this + 0xc))(param_1 + 0x200,*(undefined4 *)((int)this + 0xc),param_2[2]);
    uVar2 = *(undefined4 *)((int)this + 0x10);
    uVar1 = param_2[3];
  }
  (**(code **)(*(int *)this + 0xc))(param_1 + 0x300,uVar2,uVar1);
  return;
}


//// FUNCTION FUN_00c15cd0 @ 00c15cd0 ////

void __thiscall FUN_00c15cd0(void *this,int param_1,ushort *param_2,short *param_3)

{
  if (*(int *)((int)this + 0x20) == 1) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 4),*param_2 >> 2,
               (int)((int)*param_3 + ((int)*param_3 >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 2,
               (int)((int)param_3[1] + ((int)param_3[1] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[2] >> 2,
               (int)((int)param_3[2] + ((int)param_3[2] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x300,*(undefined4 *)((int)this + 4),param_2[3] >> 2,
               (int)((int)param_3[3] + ((int)param_3[3] >> 0x1f & 3U)) >> 2);
    return;
  }
  if (*(int *)((int)this + 0x20) == 2) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 4),*param_2 >> 1,(int)*param_3 / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1] >> 1,(int)param_3[1] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[2] >> 1,(int)param_3[2] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x300,*(undefined4 *)((int)this + 8),param_2[3] >> 1,(int)param_3[3] / 2);
    return;
  }
  (**(code **)(*(int *)this + 0x24))(param_1,*(undefined4 *)((int)this + 4),*param_2,*param_3);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1],param_3[1]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x200,*(undefined4 *)((int)this + 0xc),param_2[2],param_3[2]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x300,*(undefined4 *)((int)this + 0x10),param_2[3],param_3[3]);
  return;
}


//// FUNCTION FUN_00c15f00 @ 00c15f00 ////

void __thiscall FUN_00c15f00(void *this,int param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x20);
  if (iVar4 == 1) {
    (**(code **)(*(int *)this + 0xc))(param_1,*(undefined4 *)((int)this + 4),*param_2 >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[4] >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x400,*(undefined4 *)((int)this + 4),param_2[2] >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x500,*(undefined4 *)((int)this + 4),param_2[3] >> 2);
    return;
  }
  uVar3 = *(undefined4 *)((int)this + 4);
  iVar1 = *(int *)this;
  if (iVar4 == 2) {
    (**(code **)(iVar1 + 0xc))(param_1,uVar3,*param_2 >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1] >> 1);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[4] >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x200,*(undefined4 *)((int)this + 8),param_2[4] >> 2);
    (**(code **)(*(int *)this + 0xc))
              (param_1 + 0x400,*(undefined4 *)((int)this + 4),param_2[2] >> 1);
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar2 = param_2[3] >> 1;
  }
  else {
    if (iVar4 == 4) {
      (**(code **)(iVar1 + 0xc))(param_1,uVar3,*param_2);
      (**(code **)(*(int *)this + 0xc))(param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1]);
      iVar4 = param_1 + 0x200;
      (**(code **)(*(int *)this + 0xc))(iVar4,*(undefined4 *)((int)this + 4),param_2[4] >> 1);
      uVar3 = *(undefined4 *)((int)this + 8);
      uVar2 = param_2[4] >> 1;
    }
    else {
      (**(code **)(iVar1 + 0xc))(param_1,uVar3,*param_2);
      (**(code **)(*(int *)this + 0xc))(param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1]);
      (**(code **)(*(int *)this + 0xc))
                (param_1 + 0x200,*(undefined4 *)((int)this + 0x14),param_2[4]);
      uVar3 = *(undefined4 *)((int)this + 0x18);
      uVar2 = param_2[5];
      iVar4 = param_1 + 0x300;
    }
    (**(code **)(*(int *)this + 0xc))(iVar4,uVar3,uVar2);
    (**(code **)(*(int *)this + 0xc))(param_1 + 0x400,*(undefined4 *)((int)this + 0xc),param_2[2]);
    uVar3 = *(undefined4 *)((int)this + 0x10);
    uVar2 = param_2[3];
  }
  (**(code **)(*(int *)this + 0xc))(param_1 + 0x500,uVar3,uVar2);
  return;
}


//// FUNCTION FUN_00c16130 @ 00c16130 ////

void __thiscall FUN_00c16130(void *this,int param_1,ushort *param_2,short *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 1) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 4),*param_2 >> 2,
               (int)((int)*param_3 + ((int)*param_3 >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 4),param_2[1] >> 2,
               (int)((int)param_3[1] + ((int)param_3[1] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[4] >> 1,(int)param_3[4] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x400,*(undefined4 *)((int)this + 4),param_2[2] >> 2,
               (int)((int)param_3[2] + ((int)param_3[2] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x500,*(undefined4 *)((int)this + 4),param_2[3] >> 2,
               (int)((int)param_3[3] + ((int)param_3[3] >> 0x1f & 3U)) >> 2);
    return;
  }
  if (iVar1 == 2) {
    (**(code **)(*(int *)this + 0x24))
              (param_1,*(undefined4 *)((int)this + 4),*param_2 >> 1,(int)*param_3 / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1] >> 1,(int)param_3[1] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[4] >> 2,
               (int)((int)param_3[4] + ((int)param_3[4] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 8),param_2[4] >> 2,
               (int)((int)param_3[4] + ((int)param_3[4] >> 0x1f & 3U)) >> 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x400,*(undefined4 *)((int)this + 4),param_2[2] >> 1,(int)param_3[2] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x500,*(undefined4 *)((int)this + 8),param_2[3] >> 1,(int)param_3[3] / 2);
    return;
  }
  if (iVar1 == 4) {
    (**(code **)(*(int *)this + 0x24))(param_1,*(undefined4 *)((int)this + 4),*param_2,*param_3);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1],param_3[1]);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 4),param_2[4] >> 1,(int)param_3[4] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x200,*(undefined4 *)((int)this + 8),param_2[4] >> 1,(int)param_3[4] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x400,*(undefined4 *)((int)this + 0xc),param_2[2],(int)param_3[2] / 2);
    (**(code **)(*(int *)this + 0x24))
              (param_1 + 0x500,*(undefined4 *)((int)this + 0x10),param_2[3],(int)param_3[3] / 2);
    return;
  }
  (**(code **)(*(int *)this + 0x24))(param_1,*(undefined4 *)((int)this + 4),*param_2,*param_3);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x100,*(undefined4 *)((int)this + 8),param_2[1],param_3[1]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x200,*(undefined4 *)((int)this + 0x14),param_2[4],param_3[4]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x300,*(undefined4 *)((int)this + 0x18),param_2[5],param_3[5]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x400,*(undefined4 *)((int)this + 0xc),param_2[2],param_3[2]);
  (**(code **)(*(int *)this + 0x24))
            (param_1 + 0x500,*(undefined4 *)((int)this + 0x10),param_2[3],param_3[3]);
  return;
}


//// FUNCTION FUN_00c16640 @ 00c16640 ////

void __fastcall FUN_00c16640(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_00da3a94;
  param_1[7] = 1;
  param_1[8] = 0;
  uVar1 = (int)param_1 + 0x33U & 0xfffffff0;
  param_1[2] = uVar1 + 0x200;
  param_1[3] = uVar1 + 0x400;
  param_1[4] = uVar1 + 0x600;
  param_1[1] = uVar1;
  param_1[5] = uVar1 + 0x800;
  param_1[6] = uVar1 + 0xa00;
  return;
}


//// FUNCTION ScalarDeletingDtor_00c166a0 @ 00c166a0 ////

undefined4 * __thiscall ScalarDeletingDtor_00c166a0(void *this,byte param_1)

{
  SetVtable_00d9fbe8_00c15340(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION SetVtable_00da3ac0_00c16710 @ 00c16710 ////

void __fastcall SetVtable_00da3ac0_00c16710(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00da3ac0;
  return;
}


//// FUNCTION FUN_00c16720 @ 00c16720 ////

void __fastcall FUN_00c16720(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x58; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x59] = 0;
  param_1[0x5d] = 0;
  return;
}


//// FUNCTION FUN_00c16740 @ 00c16740 ////

void __fastcall FUN_00c16740(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x164) + -0x2c;
  if (iVar2 < 0) {
    iVar2 = *(int *)(param_1 + 0x164) + 0x2c;
  }
  iVar2 = *(int *)(param_1 + 4 + iVar2 * 4);
  if (iVar2 < 0) {
    iVar2 = -1 - iVar2;
  }
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if ((*(float *)(param_1 + 0x168) < fVar1) || (*(int *)(param_1 + 0x170) == 0x2c)) {
    *(float *)(param_1 + 0x168) = fVar1;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  else {
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 1;
  }
  if (*(float *)(param_1 + 0x168) < *(float *)(param_1 + 0x16c)) {
    fVar1 = *(float *)(param_1 + 0x16c) * 0.9999476;
    *(float *)(param_1 + 0x16c) = fVar1;
    if ((fVar1 < 32767.0 != (fVar1 == 32767.0)) && (*(int *)(param_1 + 0x174) == 2)) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    return;
  }
  *(float *)(param_1 + 0x16c) =
       (*(float *)(param_1 + 0x168) - *(float *)(param_1 + 0x16c)) * 0.0586 +
       *(float *)(param_1 + 0x16c) + 100.0;
  return;
}


//// FUNCTION FUN_00c16810 @ 00c16810 ////

void __thiscall FUN_00c16810(void *this,undefined2 *param_1,int param_2,int *param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  param_2 = 0x80;
  do {
    uVar2 = *param_3 >> (param_4 & 0x1f);
    param_3 = param_3 + 1;
    *(uint *)((int)this + *(int *)((int)this + 0x164) * 4 + 4) = uVar2;
    iVar3 = *(int *)((int)this + 0x164) + 1;
    *(int *)((int)this + 0x164) = iVar3;
    if (iVar3 == 0x58) {
      *(undefined4 *)((int)this + 0x164) = 0;
    }
    iVar3 = *(int *)((int)this + *(int *)((int)this + 0x164) * 4 + 4);
    if (*(int *)((int)this + 0x174) == 0) {
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
      }
      else {
        iVar3 = 0x7fff;
      }
      *param_1 = (short)iVar3;
      if ((int)uVar2 < 0) {
        uVar2 = -uVar2 - 1;
      }
      if (0x7fff < uVar2) {
        *(undefined4 *)((int)this + 0x174) = 1;
        *(undefined4 *)((int)this + 0x178) = 0;
        *(undefined4 *)((int)this + 0x168) = 0;
        *(undefined4 *)((int)this + 0x16c) = 0;
        *(undefined4 *)((int)this + 0x170) = 0;
      }
    }
    else if (*(int *)((int)this + 0x174) == 1) {
      FUN_00c16740((int)this);
      if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
      }
      else {
        iVar3 = 0x7fff;
      }
      *param_1 = (short)iVar3;
      uVar2 = *(int *)((int)this + 0x178) + 1;
      *(uint *)((int)this + 0x178) = uVar2;
      if (0x2c < uVar2) {
        *(undefined4 *)((int)this + 0x174) = 2;
      }
    }
    else {
      FUN_00c16740((int)this);
      if (*(float *)((int)this + 0x16c) < 32767.0 == (*(float *)((int)this + 0x16c) == 32767.0)) {
        iVar3 = (int)ROUND((32767.0 / *(float *)((int)this + 0x16c)) * (float)iVar3);
        if (iVar3 < 0x8000) {
          if (iVar3 < -0x8000) {
            iVar3 = -0x8000;
          }
        }
        else {
          iVar3 = 0x7fff;
        }
        *param_1 = (short)iVar3;
      }
      else if (iVar3 < 0x8000) {
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        *param_1 = (short)iVar3;
      }
      else {
        *param_1 = 0x7fff;
      }
    }
    param_1 = param_1 + iVar1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}


//// FUNCTION FUN_00c169c0 @ 00c169c0 ////

undefined4 * __fastcall FUN_00c169c0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_00da3ac0;
  puVar2 = param_1;
  for (iVar1 = 0x58; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_1[0x59] = 0;
  param_1[0x5d] = 0;
  return param_1;
}


//// FUNCTION FUN_00c16b00 @ 00c16b00 ////

undefined4 * __fastcall FUN_00c16b00(undefined4 *param_1)

{
  FUN_00c101c0(param_1);
  *param_1 = &PTR_FUN_00da3b70;
  return param_1;
}


//// FUNCTION ScalarDeletingDtor_00c16b20 @ 00c16b20 ////

undefined4 * __thiscall ScalarDeletingDtor_00c16b20(void *this,byte param_1)

{
  thunk_FUN_00c101e0(this);
  if ((param_1 & 1) != 0) {
    FUN_00c0efa0(this);
  }
  return this;
}


//// FUNCTION FUN_00c16b40 @ 00c16b40 ////

undefined4 __thiscall FUN_00c16b40(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0xf4);
    return 0;
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  return 0;
}


//// FUNCTION FUN_00c16b70 @ 00c16b70 ////

void __fastcall FUN_00c16b70(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}


//// FUNCTION FUN_00c16b80 @ 00c16b80 ////

undefined4 __thiscall FUN_00c16b80(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  (**(code **)(*(int *)this + 0x48))
            (*(undefined4 *)(param_1 + 0x78),*(uint *)(param_1 + 0x10) >> 8 & 0xffffff01);
  (**(code **)(*(int *)this + 0x38))(*(undefined4 *)(param_1 + 0xf0));
  (**(code **)(*(int *)this + 0x44))();
  return 2;
}


//// FUNCTION FUN_00c16c40 @ 00c16c40 ////

int __thiscall
FUN_00c16c40(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x10))();
  if (cVar1 != '\0') {
    iVar2 = FUN_00c48a50(param_2,param_3,param_4,*(int **)((int)this + 0x50));
    return iVar2;
  }
  return -9;
}


//// FUNCTION FUN_00c16c80 @ 00c16c80 ////

undefined4 __thiscall
FUN_00c16c80(void *this,undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x10))();
  if (cVar1 != '\0') {
    uVar2 = FUN_00c44ed0(param_2,param_3,param_4,*(int *)((int)this + 0x50));
    return uVar2;
  }
  return 0xfffffff7;
}


//// FUNCTION FUN_00c16cc0 @ 00c16cc0 ////

void __fastcall FUN_00c16cc0(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}


//// FUNCTION FUN_00c16ce0 @ 00c16ce0 ////

void __thiscall FUN_00c16ce0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc) = param_1;
  return;
}


//// FUNCTION FUN_00c16cf0 @ 00c16cf0 ////

void __thiscall FUN_00c16cf0(void *this,int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 0x28);
  uVar4 = uVar2 & 0x180;
  if (uVar4 == 0) {
    iVar3 = *(int *)((int)this + 0x48);
    *(int *)((int)this + 0x48) = iVar3 + -1;
    if (0 < iVar3) goto LAB_00c16d81;
    uVar4 = 0x80;
    *(int *)((int)this + 0x48) = *(int *)((int)this + 0x4c) / 2;
  }
  else if ((uVar4 != 0x80) && (uVar4 != 0x100)) {
    *(uint *)((int)this + 0x28) = uVar2;
    return;
  }
  if (*(float *)(param_1 + 8) != 0.0) {
    iVar3 = *(int *)((int)this + 0x48);
    *(int *)((int)this + 0x48) = iVar3 + -1;
    if (iVar3 < 1) {
      uVar4 = uVar4 ^ 0x180;
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x4c);
    }
    if (uVar4 == 0x80) {
      fVar1 = *(float *)((int)this + 0x40);
    }
    else {
      fVar1 = *(float *)((int)this + 0x44);
    }
    *(float *)((int)this + 0x3c) = fVar1 * *(float *)((int)this + 0x3c);
  }
LAB_00c16d81:
  *(uint *)((int)this + 0x28) = uVar2 & 0xfffffe7f | uVar4;
  return;
}


//// FUNCTION FUN_00c16dc0 @ 00c16dc0 ////

void __cdecl FUN_00c16dc0(float param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00be02a0(DAT_010d5dc4);
  if (iVar1 == 2) {
    param_1 = 0.0;
  }
  else if (0.0 < param_1) {
    *param_2 = 1.0 - param_1;
    *param_3 = 1.0;
    return;
  }
  *param_2 = 1.0;
  *param_3 = param_1 + 1.0;
  return;
}


//// FUNCTION FUN_00c16e20 @ 00c16e20 ////

void __cdecl FUN_00c16e20(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)param_3[1];
  if (param_3[1] < 0.0) {
    fVar2 = -fVar2;
  }
  fVar3 = SQRT((float10)param_3[2] * (float10)param_3[2] + (float10)*param_3 * (float10)*param_3);
  if (fVar3 <= fVar2) {
    fVar2 = (float10)fpatan(fVar3,fVar2);
    fVar2 = (float10)90.0 - fVar2 * (float10)57.295776;
  }
  else {
    fVar2 = (float10)fpatan(fVar2,fVar3);
    fVar2 = fVar2 * (float10)57.295776;
  }
  *param_2 = (float)fVar2;
  if (param_3[1] < 0.0) {
    *param_2 = -*param_2;
  }
  fVar2 = (float10)*param_3;
  if (*param_3 < 0.0) {
    fVar2 = -fVar2;
  }
  fVar3 = (float10)param_3[2];
  if (param_3[2] < 0.0) {
    fVar3 = -fVar3;
  }
  if (fVar3 <= fVar2) {
    if (fVar2 == (float10)0.0) {
      *param_1 = 0.0;
      goto LAB_00c16f02;
    }
    fVar2 = (float10)fpatan(fVar3,fVar2);
    fVar2 = (float10)90.0 - fVar2 * (float10)57.295776;
  }
  else {
    fVar2 = (float10)fpatan(fVar2,fVar3);
    fVar2 = fVar2 * (float10)57.295776;
  }
  *param_1 = (float)fVar2;
LAB_00c16f02:
  if (param_3[2] < 0.0) {
    *param_1 = 180.0 - *param_1;
  }
  if (*param_3 < 0.0) {
    *param_1 = -*param_1;
  }
  if (*param_1 < -180.0 != (*param_1 == -180.0)) {
    *param_1 = 180.0;
  }
  iVar1 = FUN_00be02a0(DAT_010d5dc4);
  if (iVar1 == 2) {
    *param_1 = 0.0;
  }
  return;
}


//// FUNCTION FUN_00c16f60 @ 00c16f60 ////

int __cdecl FUN_00c16f60(float param_1)

{
  float fVar1;
  float fVar2;
  LARGE_INTEGER *pLVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar4 = DAT_00ea7acc;
  pLVar3 = lpFrequency_00ea7ac8;
  if (DAT_00ea7abc == 0) {
    fVar2 = 128.0;
  }
  else {
    fVar2 = (float)DAT_00ea7a98;
    if (DAT_00ea7a98 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
  }
  lVar6 = __allmul((uint)lpFrequency_00ea7ac8,DAT_00ea7acc,0xac44,0);
  uVar7 = __alldiv((uint)lVar6,(uint)((ulonglong)lVar6 >> 0x20),(uint)pLVar3,uVar4);
  fVar1 = (float)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  iVar5 = (int)ROUND((fVar1 * param_1) / fVar2 - 0.5);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 1;
  }
  return iVar5;
}


//// FUNCTION FUN_00c17010 @ 00c17010 ////

undefined4 __fastcall FUN_00c17010(int *param_1)

{
  if (param_1[2] != 0) {
    return *(undefined4 *)(*param_1 + param_1[4] * 4);
  }
  return 0;
}


//// FUNCTION FUN_00c17030 @ 00c17030 ////

undefined4 * __fastcall FUN_00c17030(undefined4 *param_1)

{
  FUN_00c101c0(param_1);
  *param_1 = &PTR_FUN_00d9fc78;
  param_1[0xb] = 0x80000000;
  return param_1;
}


//// FUNCTION FUN_00c17050 @ 00c17050 ////

void __thiscall FUN_00c17050(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100) * 4);
  }
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar2 + iVar1 * 8);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar2 + 4 + iVar1 * 8);
  (**(code **)(*(int *)this + 0x48))(uVar3,*(uint *)(param_1 + 0x10) >> 8 & 0xffffff01);
  (**(code **)(*(int *)this + 0x38))(*(undefined4 *)(param_1 + 0xf0));
  return;
}


//// FUNCTION FUN_00c170b0 @ 00c170b0 ////

void __thiscall FUN_00c170b0(void *this,float *param_1)

{
  int iVar1;
  
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffffffa1;
  if (param_1 != (float *)0x0) {
    iVar1 = FUN_00c16f60(*param_1);
    *(int *)((int)this + 0x38) = iVar1;
    *(undefined4 *)((int)this + 0x30) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00c170f0 @ 00c170f0 ////

void __thiscall FUN_00c170f0(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = *(uint *)((int)this + 0x28) & 0xfffffe7f;
  *(uint *)((int)this + 0x28) = uVar2;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x48) = 0;
    *(uint *)((int)this + 0x28) = uVar2;
    *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
    return;
  }
  if (*(float *)(param_1 + 4) <= 0.0) {
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  else {
    iVar1 = FUN_00c16f60(0.5 / *(float *)(param_1 + 4));
    *(int *)((int)this + 0x4c) = iVar1;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    fVar3 = (float10)FUN_00ace9b0();
    *(float *)((int)this + 0x40) = (float)fVar3;
    fVar3 = (float10)FUN_00ace9b0();
    *(float *)((int)this + 0x44) = (float)fVar3;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
    return;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  *(undefined4 *)((int)this + 0x44) = 0x3f800000;
  *(undefined4 *)((int)this + 0x3c) = 0x3f800000;
  return;
}


//// FUNCTION FUN_00c171d0 @ 00c171d0 ////

float10 __cdecl FUN_00c171d0(float param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c16f60(param_3);
  if ((float10)iVar1 != (float10)0.0) {
    return ((float10)param_2 - (float10)param_1) / (float10)iVar1;
  }
  return (float10)param_2 - (float10)param_1;
}


//// FUNCTION FUN_00c17210 @ 00c17210 ////

float10 __cdecl FUN_00c17210(undefined4 param_1,float param_2)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = FUN_00c16f60(param_2);
  if ((float10)iVar1 != (float10)0.0) {
    fVar2 = (float10)log2((float10)32768.0);
    fVar3 = (float10)1.4426950408889634 *
            ((float10)-1.0 / (float10)iVar1) * (float10)0.6931471805599453 * fVar2;
    fVar2 = ROUND(fVar3);
    fVar3 = (float10)f2xm1(fVar3 - fVar2);
    fVar2 = (float10)fscale((float10)1 + fVar3,fVar2);
    return fVar2;
  }
  return (float10)0.0;
}


//// FUNCTION FUN_00c17270 @ 00c17270 ////

void __cdecl FUN_00c17270(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00c16f60(param_3);
  if (iVar1 != 0) {
    FUN_00ace9b0();
    return;
  }
  FUN_00ace9b0();
  return;
}


//// FUNCTION FUN_00c172b0 @ 00c172b0 ////

undefined1 __thiscall FUN_00c172b0(void *this,int param_1,char param_2)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar3 = 0;
  if (param_1 == 0) {
    if (param_2 == '\0') {
      return 0;
    }
    *(undefined4 *)((int)this + 0x30) = 0x3f800000;
    return 1;
  }
  uVar4 = *(uint *)((int)this + 0x28) & 0x5e;
  switch(uVar4) {
  case 0:
    iVar2 = *(int *)((int)this + 0x38);
    *(int *)((int)this + 0x38) = iVar2 + -1;
    if (0 < iVar2) goto switchD_00c172ef_caseD_6;
    fVar5 = FUN_00c171d0(0.0,1.0,*(float *)(param_1 + 4));
    *(float *)((int)this + 0x34) = (float)fVar5;
    uVar4 = 2;
  case 2:
    if (param_2 != '\0') {
      fVar5 = FUN_00c171d0(0.0,1.0,*(float *)(param_1 + 4));
      *(float *)((int)this + 0x34) = (float)fVar5;
    }
    fVar1 = *(float *)((int)this + 0x34) + *(float *)((int)this + 0x30);
    *(float *)((int)this + 0x30) = fVar1;
    if (1.0 <= fVar1) {
      *(undefined4 *)((int)this + 0x30) = 0x3f800000;
      iVar2 = FUN_00c16f60(*(float *)(param_1 + 8));
      *(int *)((int)this + 0x38) = iVar2;
      uVar4 = 4;
    }
    break;
  case 4:
    iVar2 = *(int *)((int)this + 0x38);
    *(int *)((int)this + 0x38) = iVar2 + -1;
    if (0 < iVar2) goto switchD_00c172ef_caseD_6;
    fVar5 = FUN_00c17210(0x3f800000,*(float *)(param_1 + 0xc));
    *(float *)((int)this + 0x34) = (float)fVar5;
    uVar4 = 8;
  case 8:
    if (param_2 != '\0') {
      fVar5 = FUN_00c17210(0x3f800000,*(float *)(param_1 + 0xc));
      *(float *)((int)this + 0x34) = (float)fVar5;
    }
    if (*(float *)(param_1 + 0x10) + 3.0517578e-05 <= *(float *)((int)this + 0x30)) {
      *(float *)((int)this + 0x30) = *(float *)((int)this + 0x34) * *(float *)((int)this + 0x30);
    }
    else {
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x10;
    }
    break;
  default:
    goto switchD_00c172ef_caseD_6;
  case 0x10:
    if ((param_2 == '\0') || (*(float *)((int)this + 0x30) == *(float *)(param_1 + 0x10)))
    goto switchD_00c172ef_caseD_6;
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x10);
  }
  uVar3 = 1;
switchD_00c172ef_caseD_6:
  *(uint *)((int)this + 0x28) = *(uint *)((int)this + 0x28) & 0xffffffa1 | uVar4;
  return uVar3;
}


//// FUNCTION FUN_00c17450 @ 00c17450 ////

void __thiscall FUN_00c17450(void *this,float *param_1)

{
  int iVar1;
  
  FUN_00c170f0(this,(int)param_1);
  if (param_1 != (float *)0x0) {
    iVar1 = FUN_00c16f60(*param_1);
    *(int *)((int)this + 0x48) = iVar1;
  }
  return;
}


//// FUNCTION FUN_00c174e0 @ 00c174e0 ////

uint __fastcall FUN_00c174e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  return ~-(uint)(cVar1 != '\0') & (uint)param_1;
}


//// FUNCTION FUN_00c176b0 @ 00c176b0 ////

void __thiscall FUN_00c176b0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x1e8) = 0x1000;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  FUN_00c16b40(this,param_1);
  return;
}


//// FUNCTION FUN_00c176d0 @ 00c176d0 ////

void __fastcall FUN_00c176d0(int param_1)

{
  FUN_00c1a4d0(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c16b70(param_1);
  return;
}


//// FUNCTION FUN_00c17780 @ 00c17780 ////

void __fastcall FUN_00c17780(int param_1)

{
  FUN_00c16cc0(param_1);
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  FUN_00c1a530(0x10d6128);
  FUN_00c1a530(0x10d6108);
  return;
}


//// FUNCTION FUN_00c178a0 @ 00c178a0 ////

void __thiscall FUN_00c178a0(void *this,char param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 0x6c);
  if ((uVar1 != 0) && (uVar3 = *(uint *)((int)this + 100), uVar1 < uVar3)) {
    if (param_1 == '\0') {
      if ((*(uint *)((int)this + 0x58) == 0) || (2 < *(uint *)((int)this + 0x58))) {
        iVar4 = (**(code **)(*(int *)this + 0x50))();
        uVar3 = (**(code **)(*(int *)this + 0x54))();
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)((int)this + 0x70) != *(int *)((int)this + 0xb8)) {
        if (*(int *)((int)this + 0x68) != 0) {
          FUN_00c1a4f0((void *)((int)this + 0xb4),uVar3 - *(int *)((int)this + 0x68),'\x01');
          return;
        }
        uVar3 = uVar3 - iVar4;
      }
      FUN_00c1a4f0((void *)((int)this + 0xb4),uVar3,'\x01');
      return;
    }
    uVar2 = *(int *)((int)this + 200) * *(int *)((int)this + 0xc0) + *(int *)((int)this + 0xb8);
    uVar3 = *(uint *)((int)this + 0x70);
    iVar4 = (((int)uVar2 >> 0x1f) - ((int)uVar3 >> 0x1f)) - (uint)(uVar2 < uVar3);
    if ((iVar4 < 1) && ((iVar4 < 0 || (uVar2 - uVar3 < uVar1)))) {
      FUN_00c1a4f0((void *)((int)this + 0xb4),uVar1,'\x01');
    }
  }
  return;
}


