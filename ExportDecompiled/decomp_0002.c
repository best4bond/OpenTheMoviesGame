//// FUNCTION FUN_00418260 @ 00418260 ////

void __fastcall FUN_00418260(int param_1)

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


//// FUNCTION FUN_00418320 @ 00418320 ////

undefined4 * __thiscall FUN_00418320(void *this,byte param_1)

{
  FUN_004180e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00418340 @ 00418340 ////

int __fastcall FUN_00418340(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  
  puVar3 = (undefined4 *)0x16;
  do {
    uVar1 = FUN_005540f0((int)puVar3);
    if ((char)uVar1 != '\0') {
      if (puVar3 == (undefined4 *)0x1c) {
        puVar5 = &LAB_004127c0;
        puVar4 = (undefined4 *)0x1d;
      }
      else {
        puVar5 = (undefined *)0x0;
        puVar4 = puVar3;
      }
      iVar2 = FUN_00417ee0(param_1,puVar4,puVar5);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    if (puVar3 == (undefined4 *)0x20) {
      return 0;
    }
  } while( true );
}


//// FUNCTION FUN_00418390 @ 00418390 ////

undefined4 * FUN_00418390(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00417b30(param_1,param_2,param_3);
  return param_1 + param_2 * 2;
}


//// FUNCTION FUN_004183d0 @ 004183d0 ////

void __cdecl FUN_004183d0(undefined4 *param_1,char param_2)

{
  int *_Dst;
  
  _Dst = DAT_00f87ac4;
  if (DAT_00f87ac4 != DAT_00f87ac8) {
    while ((undefined4 *)*_Dst != param_1) {
      _Dst = _Dst + 1;
      if (_Dst == DAT_00f87ac8) {
        return;
      }
    }
    if ((param_2 != '\0') && (param_1[0xb] != 0)) {
      FUN_0071b2a0();
      FUN_0071b530(0,(int *)param_1[0xb]);
      (**(code **)(param_1[6] + 4))();
      param_1[0xb] = 0;
      (**(code **)param_1[6])();
    }
    if (param_1 != (undefined4 *)0x0) {
      FUN_004180e0(param_1);
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    _memmove(_Dst,_Dst + 1,((int)DAT_00f87ac8 - (int)(_Dst + 1) >> 2) << 2);
    DAT_00f87ac8 = DAT_00f87ac8 + -1;
  }
  return;
}


//// FUNCTION FUN_00418480 @ 00418480 ////

void __cdecl FUN_00418480(char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  while ((DAT_00f87ac4 != (undefined4 *)0x0 && (DAT_00f87ac8 - (int)DAT_00f87ac4 >> 2 != 0))) {
    FUN_004183d0((undefined4 *)*DAT_00f87ac4,param_1);
  }
  for (; (DAT_00f87ad4 != (int *)0x0 && (DAT_00f87ad8 - (int)DAT_00f87ad4 >> 2 != 0));
      DAT_00f87ad8 = DAT_00f87ad8 + -4) {
    puVar2 = (undefined4 *)*DAT_00f87ad4;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      *DAT_00f87ad4 = 0;
    }
    _memmove(DAT_00f87ad4,DAT_00f87ad4 + 1,(DAT_00f87ad8 - (int)(DAT_00f87ad4 + 1) >> 2) << 2);
  }
  return;
}


//// FUNCTION FUN_00418520 @ 00418520 ////

void __fastcall FUN_00418520(int param_1)

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


//// FUNCTION FUN_00418550 @ 00418550 ////

void __fastcall FUN_00418550(int param_1)

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


//// FUNCTION FUN_00418580 @ 00418580 ////

void __fastcall FUN_00418580(int param_1)

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


//// FUNCTION FUN_004185b0 @ 004185b0 ////

void __fastcall FUN_004185b0(undefined4 *param_1)

{
  if ((void *)param_1[0x20] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1b] = param_1[0x1a];
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1b];
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
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


//// FUNCTION FUN_00418650 @ 00418650 ////

void __fastcall FUN_00418650(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d172e8;
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


//// FUNCTION FUN_004186a0 @ 004186a0 ////

undefined4 * __thiscall FUN_004186a0(void *this,byte param_1)

{
  FUN_00418650(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004186c0 @ 004186c0 ////

void FUN_004186c0(void)

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
  puStack_8 = &LAB_00c9d5e8;
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


//// FUNCTION FUN_00418730 @ 00418730 ////

void FUN_00418730(void)

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
  puStack_8 = &LAB_00c9d608;
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


//// FUNCTION FUN_004187a0 @ 004187a0 ////

void FUN_004187a0(void)

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
  puStack_8 = &LAB_00c9d628;
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


//// FUNCTION FUN_00418810 @ 00418810 ////

undefined4 * __thiscall FUN_00418810(void *this,byte param_1)

{
  FUN_004185b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00418830 @ 00418830 ////

void __thiscall FUN_00418830(void *this,int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  int *piVar2;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)this + 0xa4);
  if ((local_8 != (int)this + 0xb0) && (local_8 != (int)this + 0xb0)) {
    do {
      iVar1 = *(int *)(local_8 + 8);
      if (*(int *)(iVar1 + 0x14) == param_1) {
        if (*(void **)(iVar1 + 0x80) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar1 + 0x80));
        }
        *(undefined4 *)(iVar1 + 0x80) = 0;
        *(undefined4 *)(iVar1 + 0x84) = 0;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        _Memory = *(undefined4 **)(local_8 + 8);
        piVar2 = (int *)FUN_00416ef0(this,&local_4,&local_8);
        local_8 = *piVar2;
        if (_Memory != (undefined4 *)0x0) {
          FUN_004185b0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      else {
        local_8 = *(int *)(local_8 + 4);
      }
    } while (local_8 != (int)this + 0xb0);
  }
  return;
}


//// FUNCTION FUN_004188e0 @ 004188e0 ////

void __thiscall FUN_004188e0(void *this,int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)this + 0xa4);
  if ((local_8 != (int)this + 0xb0) && (local_8 != (int)this + 0xb0)) {
    do {
      iVar1 = *(int *)(local_8 + 8);
      if (*(int *)(iVar1 + 0x18) == param_1) {
        if (*(void **)(iVar1 + 0x80) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar1 + 0x80));
        }
        *(undefined4 *)(iVar1 + 0x80) = 0;
        *(undefined4 *)(iVar1 + 0x84) = 0;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        _Memory = *(undefined4 **)(local_8 + 8);
        puVar2 = (undefined4 *)FUN_00416ef0(this,&local_4,&local_8);
        if (_Memory != (undefined4 *)0x0) {
          FUN_004185b0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        local_8 = *(int *)*puVar2;
      }
      local_8 = *(int *)(local_8 + 4);
    } while (local_8 != (int)this + 0xb0);
  }
  return;
}


//// FUNCTION FUN_00418990 @ 00418990 ////

void __fastcall FUN_00418990(void *param_1)

{
  int iVar1;
  undefined4 *_Memory;
  undefined4 *puVar2;
  int local_8;
  int local_4;
  
  local_8 = *(int *)((int)param_1 + 0xa4);
  if ((local_8 != (int)param_1 + 0xb0) && (local_8 != (int)param_1 + 0xb0)) {
    do {
      iVar1 = *(int *)(local_8 + 8);
      if (*(int *)(iVar1 + 0x18) != 0x462) {
        if (*(void **)(iVar1 + 0x80) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)(iVar1 + 0x80));
        }
        *(undefined4 *)(iVar1 + 0x80) = 0;
        *(undefined4 *)(iVar1 + 0x84) = 0;
        *(undefined4 *)(iVar1 + 0x88) = 0;
        _Memory = *(undefined4 **)(local_8 + 8);
        puVar2 = (undefined4 *)FUN_00416ef0(param_1,&local_4,&local_8);
        if (_Memory != (undefined4 *)0x0) {
          FUN_004185b0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        local_8 = *(int *)*puVar2;
      }
      local_8 = *(int *)(local_8 + 4);
    } while (local_8 != (int)param_1 + 0xb0);
  }
  return;
}


//// FUNCTION FUN_00418a40 @ 00418a40 ////

void __thiscall FUN_00418a40(void *this,char param_1)

{
  if (param_1 == '\0') {
    *(int *)((int)this + 0x2e0) = *(int *)((int)this + 0x2e0) + -1;
  }
  else {
    *(int *)((int)this + 0x2e0) = *(int *)((int)this + 0x2e0) + 1;
    if (*(int *)(*(int *)(*(int *)((int)this + 0xa4) + 8) + 0x18) == 0x4b2) {
      FUN_004188e0(this,0x4b2);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00418b70 @ 00418b70 ////

void __thiscall FUN_00418b70(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00c9d640;
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
      uVar2 = FUN_004186c0();
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
      puVar5 = (undefined4 *)FUN_00415be0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00417b30(puVar5,param_2,&local_20);
      FUN_00415be0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_00415be0(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_00418390(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_004138f0(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00415be0(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00415b80((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_004138f0(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00418dc0 @ 00418dc0 ////

void __fastcall FUN_00418dc0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9d6a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1730c;
  param_1[0x19] = &PTR_LAB_00d172f4;
  local_4 = 4;
  FUN_00418480('\0');
  piVar2 = DAT_00f87aa4;
  if (DAT_00f87aa4 != (int *)0x0) {
    iVar1 = DAT_00f87aa4[1];
    DAT_00f87aa4[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(piVar2);
                    /* WARNING: Subroutine does not return */
      _free(piVar2);
    }
    DAT_00f87aa4 = (int *)0x0;
  }
  if ((void *)param_1[0x96] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x96]);
  }
  if ((undefined4 *)param_1[0x23] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x23])(1);
  }
  param_1[0x23] = 0;
  if ((undefined4 *)param_1[0x29] != param_1 + 0x2c) {
    do {
      piVar2 = (int *)param_1[0x29];
      _Memory = (undefined4 *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (_Memory != (undefined4 *)0x0) {
        FUN_004185b0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    } while ((undefined4 *)param_1[0x29] != param_1 + 0x2c);
  }
  param_1[0x90] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0x92] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x92] = param_1[0x91];
  }
  if (param_1[0x91] != 0) {
    *(undefined4 *)(param_1[0x91] + 4) = param_1[0x92];
  }
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  if ((undefined4 *)param_1[0x92] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x92] = param_1[0x91];
  }
  if (param_1[0x91] != 0) {
    *(undefined4 *)(param_1[0x91] + 4) = param_1[0x92];
  }
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_00418650(param_1 + 0x27);
  local_4._0_1_ = 1;
  FUN_009abe50((char *)(param_1 + 0x22));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0053cbd0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00418fe0 @ 00418fe0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00418fe0(void *param_1)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  void *this;
  bool bVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  cVar7 = '\0';
  DAT_00f87ab5 = 0;
  bVar4 = false;
  if (DAT_0104ccd8 == 0) {
    cVar5 = FUN_009aba70((undefined1 *)((int)param_1 + 0x88));
    if (((((cVar5 == '\0') && (bVar6 = FUN_009abb40(), !bVar6)) &&
         (cVar5 = FUN_00553f60(), cVar5 != '\0')) && ((DAT_00e4e41c != '\0' && (DAT_0104ccd4 == 0)))
        ) && (((DAT_0104cce0 < 0.0 != (DAT_0104cce0 == 0.0) ||
               (((float)DAT_00e67b84 < DAT_0104cce0 != ((float)DAT_00e67b84 == DAT_0104cce0) ||
                (DAT_0104cce4 < 0.0 != (DAT_0104cce4 == 0.0))))) ||
              ((float)DAT_00e67b88 < DAT_0104cce4 != ((float)DAT_00e67b88 == DAT_0104cce4))))) {
      DAT_00f87ab5 = 1;
      iVar12 = 6;
      if ((float)(DAT_00e67b84 / 3) <= DAT_0104cce0) {
        iVar12 = 2;
        iVar13 = 2;
      }
      else {
        iVar13 = -1;
      }
      if ((float)DAT_00e67b84 * 0.66 < DAT_0104cce0) {
        iVar13 = 1;
      }
      local_14 = (float)(DAT_00e67b88 / 3);
      if ((float)(int)local_14 <= DAT_0104cce4) {
        iVar8 = 0;
      }
      else {
        iVar8 = -iVar13;
      }
      if (DAT_0104cce4 <= (float)DAT_00e67b88 * 0.66) {
        iVar13 = 0;
      }
      FUN_009abd50(iVar13 + 4 + iVar12 + iVar8);
      if (_DAT_00e4e414 < _DAT_0104cce8 * _DAT_0104cce8 + _DAT_0104ccec * _DAT_0104ccec) {
        *(undefined1 *)((int)param_1 + 0x228) = 1;
      }
      cVar7 = *(char *)((int)param_1 + 0x228);
      if (cVar7 != '\0') {
        local_14 = DAT_0104cce0 - DAT_0105c400 * 0.5;
        local_10 = -(DAT_0104cce4 - DAT_0105c404 * 0.5);
        FUN_00412c90(&local_14);
        fVar2 = DAT_00f87a90 * *(float *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x5c);
        pfVar1 = (float *)((int)param_1 + 0x2a8);
        local_10 = fVar2 * local_10;
        *pfVar1 = local_14 * fVar2 + *pfVar1;
        *(float *)((int)param_1 + 0x2ac) = local_10 + *(float *)((int)param_1 + 0x2ac);
        if (*(float *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x60) <
            SQRT(*(float *)((int)param_1 + 0x2ac) * *(float *)((int)param_1 + 0x2ac) +
                 *pfVar1 * *pfVar1)) {
          FUN_00412c90(pfVar1);
          fVar2 = *(float *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x60);
          *pfVar1 = fVar2 * *pfVar1;
          *(float *)((int)param_1 + 0x2ac) = fVar2 * *(float *)((int)param_1 + 0x2ac);
        }
        bVar4 = true;
      }
    }
  }
  else {
    *(float *)((int)param_1 + 0x2a0) = *(float *)((int)param_1 + 0x2a0) - _DAT_0104ccf8 * 0.25;
    *(float *)((int)param_1 + 0x2a4) = _DAT_0104ccfc * 0.25 + *(float *)((int)param_1 + 0x2a4);
  }
  *(char *)((int)param_1 + 0x228) = cVar7;
  if (!bVar4) {
    fVar14 = (float10)FUN_00ace9b0();
    *(float *)((int)param_1 + 0x2a8) = (float)(fVar14 * (float10)*(float *)((int)param_1 + 0x2a8));
    *(float *)((int)param_1 + 0x2ac) = (float)(fVar14 * (float10)*(float *)((int)param_1 + 0x2ac));
  }
  cVar7 = FUN_00553f70(0x75);
  if (cVar7 == '\0') {
    *(float *)((int)param_1 + 0x278) = DAT_0104cce0;
    *(float *)((int)param_1 + 0x27c) = DAT_0104cce4;
    FUN_009abb70((void *)((int)param_1 + 0x88),'\0');
    uVar11 = FUN_00553fa0(0x74);
    if ((char)uVar11 != '\0') {
      *(undefined1 *)((int)param_1 + 0x2dd) = 1;
    }
    *(undefined1 *)((int)param_1 + 0x229) = 0;
    (**(code **)(*(int *)((int)param_1 + 0x240) + 4))();
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    (*(code *)**(undefined4 **)((int)param_1 + 0x240))();
  }
  else {
    iVar12 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
    iVar13 = *(int *)(iVar12 + 0x18);
    if (((iVar13 == 0x4da) || (iVar13 == 0x4b2)) &&
       ((piVar3 = *(int **)(iVar12 + 0x14), piVar3 == (int *)0x0 ||
        (iVar12 = FUN_00ace790(piVar3,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0), iVar12 == 0)))) {
      FUN_004188e0(param_1,0x4da);
      FUN_004188e0(param_1,0x4b2);
      (*(code *)DAT_00f885f8[1])();
      DAT_00f8860c = 0;
      (*(code *)*DAT_00f885f8)();
    }
    if (*(char *)((int)param_1 + 0x229) == '\0') {
      iVar12 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
      iVar13 = *(int *)(iVar12 + 0x18);
      if ((iVar13 == 0x462) || (iVar13 == 0x4b2)) {
        piVar3 = (int *)((int)param_1 + 0x240);
        if (iVar13 == 0x4b2) {
          (**(code **)(*piVar3 + 4))();
          *(undefined4 *)((int)param_1 + 0x254) = *(undefined4 *)(iVar12 + 0x14);
        }
        else {
          (**(code **)(*piVar3 + 4))();
          *(undefined4 *)((int)param_1 + 0x254) = DAT_00f885f4;
        }
        (**(code **)*piVar3)();
        puVar9 = (undefined4 *)FUN_00415260(param_1,&fStack_c);
        *(undefined4 *)((int)param_1 + 0x22c) = *puVar9;
        *(undefined4 *)((int)param_1 + 0x230) = puVar9[1];
        *(undefined4 *)((int)param_1 + 0x234) = puVar9[2];
        *(float *)((int)param_1 + 0x238) = *(float *)((int)param_1 + 0x278);
        *(undefined4 *)((int)param_1 + 0x23c) = *(undefined4 *)((int)param_1 + 0x27c);
        uVar10 = FUN_0053c9f0();
        if ((char)uVar10 != '\0') {
          (**(code **)(*piVar3 + 4))();
          *(undefined4 *)((int)param_1 + 0x254) = 0;
          (**(code **)*piVar3)();
        }
        if (*(int **)((int)param_1 + 0x254) != (int *)0x0) {
          (**(code **)(**(int **)((int)param_1 + 0x254) + 0x38))(&fStack_c);
          FUN_00413840((void *)((int)param_1 + 0xf4),&fStack_c);
          fVar14 = FUN_00415210((int)param_1);
          local_14 = *(float *)((int)param_1 + 0xd0) - fStack_c;
          fVar15 = (float10)*(float *)((int)param_1 + 0xd4) - (float10)fStack_8;
          if ((fVar14 * fVar14 < (float10)local_14 * (float10)local_14 + fVar15 * fVar15) ||
             (this = *(void **)(*(int *)((int)param_1 + 0x254) + 0x11c), this == (void *)0x0)) {
LAB_004194c2:
            FUN_00413290(piVar3,0);
          }
          else {
            iVar12 = FUN_0097e350(this,0);
            FUN_009840b0(&local_14,(undefined4 *)(iVar12 + 0xd4));
            if (25.0 < local_14 * local_14 + local_10 * local_10) goto LAB_004194c2;
          }
          if (*(int *)((int)param_1 + 0x254) != 0) {
            uStack_4 = 0;
            FUN_009a1b30(&DAT_0105c2e8,&fStack_c,(float *)((int)param_1 + 0x238));
          }
        }
        *(undefined1 *)((int)param_1 + 0x229) = 1;
      }
    }
    uVar10 = FUN_0053c9f0();
    if ((char)uVar10 != '\0') {
      (**(code **)(*(int *)((int)param_1 + 0x240) + 4))();
      *(undefined4 *)((int)param_1 + 0x254) = 0;
      (*(code *)**(undefined4 **)((int)param_1 + 0x240))();
    }
    local_14 = ((*(float *)((int)param_1 + 0x278) - DAT_0104cce0) - _DAT_0104cce8) /
               (DAT_0105c400 * 0.1);
    local_10 = ((*(float *)((int)param_1 + 0x27c) - DAT_0104cce4) - _DAT_0104ccec) /
               (DAT_0105c404 * 0.1);
    FUN_00554d30((undefined4 *)((int)param_1 + 0x278));
    FUN_009abb70((void *)((int)param_1 + 0x88),'\x01');
    *(undefined4 *)((int)param_1 + 0x2ac) = 0;
    *(undefined4 *)((int)param_1 + 0x2a8) = 0;
    *(float *)((int)param_1 + 0x2d4) = local_14 * 0.5 + *(float *)((int)param_1 + 0x2d4);
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18) == 0x52a) {
      *(float *)((int)param_1 + 0x28c) = local_10 + *(float *)((int)param_1 + 0x28c);
    }
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18) == 0x66a) {
      *(float *)((int)param_1 + 0x28c) = local_10 + *(float *)((int)param_1 + 0x28c);
      *(float *)((int)param_1 + 0x288) = local_14 * 0.5 + *(float *)((int)param_1 + 0x288);
    }
  }
  local_14 = _DAT_00f87aac * *(float *)((int)param_1 + 0x224);
  if (_DAT_00f87aac <= 0.0) {
    if ((_DAT_00f87aac < 0.0) && (_DAT_00f87ab0 + local_14 < _DAT_00f87aac)) goto LAB_004196ae;
  }
  else if (_DAT_00f87aac < _DAT_00f87ab0 + local_14) {
LAB_004196ae:
    local_14 = _DAT_00f87aac - _DAT_00f87ab0;
  }
  _DAT_00f87ab0 = _DAT_00f87ab0 + local_14;
  if (local_14 != 0.0) {
    iVar12 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
    iVar13 = *(int *)(iVar12 + 0x18);
    if (((iVar13 == 0x4da) || (iVar13 == 0x4b2)) &&
       ((piVar3 = *(int **)(iVar12 + 0x14), piVar3 == (int *)0x0 ||
        (iVar12 = FUN_00ace790(piVar3,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0), iVar12 == 0)))) {
      FUN_004188e0(param_1,0x4da);
      FUN_004188e0(param_1,0x4b2);
      (*(code *)DAT_00f885f8[1])();
      DAT_00f8860c = 0;
      (*(code *)*DAT_00f885f8)();
    }
  }
  iVar12 = *(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18);
  if (iVar12 != 0x48a) {
    if (iVar12 == 0x66a) {
      fVar2 = (local_14 / _DAT_00e4e410) * 0.1 + *(float *)((int)param_1 + 0x2c8);
      *(float *)((int)param_1 + 0x2c8) = fVar2;
      *(float *)((int)param_1 + 0x2c8) =
           fVar2 * *(float *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x50);
      return;
    }
    cVar7 = FUN_00553f70(0x3a);
    if ((cVar7 == '\0') && (cVar7 = FUN_00553f70(0x3b), cVar7 == '\0')) {
      if (local_14 != 0.0) {
        fVar2 = (local_14 / _DAT_00e4e410) * 0.1 + *(float *)((int)param_1 + 0x2c8);
        *(float *)((int)param_1 + 0x2c8) = fVar2;
        *(float *)((int)param_1 + 0x2c8) =
             fVar2 * *(float *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x50);
      }
      if (1.0 <= *(float *)((int)param_1 + 0xec)) goto LAB_00419768;
      fVar2 = *(float *)((int)param_1 + 0xec) + 0.5;
    }
    else {
      if (local_14 == 0.0) {
        return;
      }
      fVar2 = *(float *)((int)param_1 + 0xec) - local_14 * 0.0005;
      *(float *)((int)param_1 + 0xec) = fVar2;
      if (fVar2 <= 0.05) {
        fVar2 = 0.05;
      }
    }
    *(float *)((int)param_1 + 0xec) = fVar2;
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    *(float *)((int)param_1 + 0xec) = fVar2;
    return;
  }
LAB_00419768:
  *(undefined4 *)((int)param_1 + 0xec) = 0x3f800000;
  return;
}


//// FUNCTION FUN_004198a0 @ 004198a0 ////

void __fastcall FUN_004198a0(void *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  ulonglong uVar9;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_2c = *(float *)((int)param_1 + 0x2a0);
  local_28 = *(float *)((int)param_1 + 0x2a4);
  fVar2 = *(float *)((int)param_1 + 0x2a8);
  local_30 = *(float *)((int)param_1 + 0x2ac);
  cVar5 = FUN_00553f70(0x3a);
  if (((cVar5 != '\0') || (cVar5 = FUN_00553f70(0x3b), cVar5 != '\0')) &&
     (*(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18) != 0x66a)) {
    local_2c = local_2c * 3.0;
    local_28 = local_28 * 3.0;
    fVar2 = fVar2 * 3.0;
    local_30 = local_30 * 3.0;
    *(float *)((int)param_1 + 0x2c0) = *(float *)((int)param_1 + 0x2c0) * 3.0;
    *(float *)((int)param_1 + 0x2c4) = *(float *)((int)param_1 + 0x2c4) * 3.0;
    *(float *)((int)param_1 + 0x2c8) = *(float *)((int)param_1 + 0x2c8) * 3.0;
    *(float *)((int)param_1 + 0x2d0) = *(float *)((int)param_1 + 0x2d0) * 3.0;
    *(float *)((int)param_1 + 0x2d4) = *(float *)((int)param_1 + 0x2d4) * 3.0;
  }
  local_28 = (local_30 + local_28) * DAT_00f87a90;
  local_2c = DAT_00f87a90 * (fVar2 + local_2c) * *(float *)((int)param_1 + 0xec);
  *(float *)((int)param_1 + 0x2b8) = local_2c;
  local_28 = local_28 * *(float *)((int)param_1 + 0xec);
  *(float *)((int)param_1 + 700) = local_28;
  *(float *)((int)param_1 + 0x2cc) =
       DAT_00f87a90 * *(float *)((int)param_1 + 0x2c0) + *(float *)((int)param_1 + 0x2c8) +
       *(float *)((int)param_1 + 0x2c4);
  *(float *)((int)param_1 + 0x2d8) =
       (DAT_00f87a90 * *(float *)((int)param_1 + 0x2d0) + *(float *)((int)param_1 + 0x2d4)) *
       *(float *)((int)param_1 + 0xec);
  iVar8 = *(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18);
  if (((iVar8 == 0x4da) || (iVar8 == 0x4b2)) &&
     ((((cVar5 = FUN_00553f70(0x39), cVar5 == '\0' && (cVar5 = FUN_00553f70(0x38), cVar5 == '\0'))
       && ((((uVar6 = FUN_00554090(2), (char)uVar6 != '\0' ||
             (uVar6 = FUN_00554090(3), (char)uVar6 != '\0')) ||
            (uVar6 = FUN_00554090(4), (char)uVar6 != '\0')) ||
           (uVar6 = FUN_00554090(5), (char)uVar6 != '\0')))) ||
      (uVar6 = FUN_0053c9f0(), (char)uVar6 != '\0')))) {
    FUN_004188e0(param_1,0x4da);
    FUN_004188e0(param_1,0x4b2);
    (*(code *)DAT_00f885f8[1])();
    DAT_00f8860c = 0;
    (*(code *)*DAT_00f885f8)();
  }
  iVar8 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
  if ((*(int *)(iVar8 + 0x18) == 0x5ca) && (*(int *)((int)param_1 + 600) != 0)) {
    if (*(char *)((int)param_1 + 0x260) == '\0') {
      iVar8 = -1;
      uVar6 = FUN_00554090(2);
      if ((char)uVar6 != '\0') {
        uVar9 = FUN_00acd42c();
        iVar8 = *(int *)((int)param_1 + 0x264) - (int)uVar9;
      }
      uVar6 = FUN_00554090(3);
      if ((char)uVar6 != '\0') {
        uVar9 = FUN_00acd42c();
        iVar8 = *(int *)((int)param_1 + 0x264) - (int)uVar9;
      }
      if ((-1 < iVar8) && (iVar8 < *(int *)((int)param_1 + 0x268))) {
        *(int *)((int)param_1 + 0x264) = iVar8;
      }
    }
    else {
      uVar9 = FUN_00990ae0(*(int *)((int)param_1 + 0xa4),iVar8);
      *(int *)((int)param_1 + 0x264) = (int)uVar9 - *(int *)((int)param_1 + 0x25c);
      uVar6 = FUN_00554090(2);
      if (((char)uVar6 != '\0') || (uVar6 = FUN_00554090(3), (char)uVar6 != '\0')) {
        *(undefined1 *)((int)param_1 + 0x260) = 0;
      }
    }
    fStack_20 = 0.0;
    uStack_1c = 0;
    uStack_18 = 0;
    fStack_14 = 0.0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_8 = 0;
    uStack_4 = 0;
    FUN_009acc20(*(void **)((int)param_1 + 600),&fStack_20,*(int *)((int)param_1 + 0x264),'\x01');
    if ((((*(char *)((int)param_1 + 0x260) == '\0') ||
         (*(uint *)((int)param_1 + 0x264) <= *(uint *)((int)param_1 + 0x268))) &&
        (cVar5 = FUN_00553f70(0x73), cVar5 == '\0')) &&
       ((cVar5 = FUN_00553f70(0x74), cVar5 == '\0' && (uVar6 = FUN_005541d0(6), (char)uVar6 == '\0')
        ))) {
      iVar8 = *(int *)((int)param_1 + 0xa4);
      iVar3 = *(int *)(*(int *)(iVar8 + 8) + 0x14);
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_1 + 0x260) = 0;
        return;
      }
      FUN_0040b490((void *)(*(int *)(iVar3 + 0x11c) + 0x18),&fStack_20);
      FUN_0040b490((void *)(*(int *)(*(int *)(*(int *)(iVar8 + 8) + 0x14) + 0x11c) + 0x18),
                   &fStack_14);
      *(float *)((int)param_1 + 0xd0) = fStack_20;
      *(undefined4 *)((int)param_1 + 0xd4) = uStack_1c;
      *(undefined4 *)((int)param_1 + 0xd8) = uStack_18;
      *(float *)((int)param_1 + 0xdc) = fStack_14;
      *(undefined4 *)((int)param_1 + 0xe0) = uStack_10;
      *(undefined4 *)((int)param_1 + 0xe8) = uStack_8;
      *(undefined4 *)((int)param_1 + 0xe4) = uStack_c;
      return;
    }
    if (*(void **)((int)param_1 + 600) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)param_1 + 600));
    }
    piVar4 = *(int **)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x14);
    FUN_00418990(param_1);
    iVar8 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
    pfVar7 = (float *)(**(code **)(*piVar4 + 0x38))(&local_2c);
    *(float *)((int)param_1 + 0xdc) = *pfVar7;
    *(float *)((int)param_1 + 0xe0) = pfVar7[1];
    *(float *)((int)param_1 + 0xe4) = pfVar7[2];
    fVar2 = *(float *)(iVar8 + 0x24);
    fVar1 = *(float *)(iVar8 + 0x28);
    *(float *)((int)param_1 + 0xd0) = *(float *)((int)param_1 + 0xdc) - *(float *)(iVar8 + 0x20);
    *(float *)((int)param_1 + 0xd4) = *(float *)((int)param_1 + 0xe0) - fVar2;
    *(float *)((int)param_1 + 0xd8) = *(float *)((int)param_1 + 0xe4) - fVar1;
    *(undefined4 *)((int)param_1 + 0xe8) = *(undefined4 *)(iVar8 + 0x40);
    *(undefined4 *)((int)param_1 + 0xf0) = 0x41700000;
  }
  return;
}


//// FUNCTION FUN_00419e30 @ 00419e30 ////

undefined4 * __thiscall FUN_00419e30(void *this,byte param_1)

{
  FUN_00418dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00419e50 @ 00419e50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00419e50(void *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  int *_Src;
  int *_Dst;
  void *this;
  undefined4 *puVar10;
  float10 fVar11;
  float local_28;
  float fStack_24;
  float fStack_20;
  int local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  *(float *)((int)param_1 + 0x220) = *(float *)((int)param_1 + 0x220) + 1.0;
  if ((0.0 < _DAT_00f87a98) && (*(char *)((int)param_1 + 0x2e8) != '\0')) {
    iVar5 = 0x73;
    if (_DAT_00f87a98 != 1.0) {
      iVar5 = 0x74;
    }
    cVar4 = FUN_00553f70(iVar5);
    if ((cVar4 == '\0') || (cVar4 = FUN_00553f60(), cVar4 == '\0')) {
      *(undefined1 *)((int)param_1 + 0x2e8) = 0;
    }
  }
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  *(undefined4 *)((int)param_1 + 0x280) = 0;
  *(undefined4 *)((int)param_1 + 0x28c) = 0;
  *(undefined4 *)((int)param_1 + 0x288) = 0;
  *(undefined4 *)((int)param_1 + 0x298) = 0;
  fVar11 = FUN_00990aa0();
  fVar2 = (float)fVar11;
  fVar3 = fVar2;
  if ((float10)0.05 < ABS(fVar11 - (float10)DAT_00f87a90)) {
    if (fVar11 - (float10)DAT_00f87a90 <= (float10)0.0) {
      fVar3 = DAT_00f87a90 - 0.05;
    }
    else {
      fVar3 = DAT_00f87a90 + 0.05;
    }
  }
  DAT_00f87a90 = fVar3;
  pfVar8 = (float *)((int)param_1 + 0xf4);
  local_1c = 3;
  pfVar7 = pfVar8;
  local_28 = fVar2;
  do {
    FUN_004137b0(pfVar7,fVar2);
    pfVar7 = pfVar7 + 0xc;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  this = (void *)((int)param_1 + 0x184);
  local_1c = 3;
  do {
    FUN_004137b0(this,fVar2);
    this = (void *)((int)this + 0x30);
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  uVar6 = FUN_004233e0(DAT_00f87b04);
  if ((char)uVar6 != '\0') {
    FUN_00414060((int)param_1);
    FUN_00418fe0(param_1);
    FUN_00414260(param_1,(int)param_1 + 0x2a0);
    FUN_004198a0(param_1);
  }
  iVar5 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
  puVar10 = *(undefined4 **)(iVar5 + 0x80);
  if (puVar10 != *(undefined4 **)(iVar5 + 0x84)) {
    do {
      cVar4 = (*(code *)*puVar10)(DAT_00f87aa0,puVar10[1]);
      if (cVar4 == '\0') break;
      puVar10 = puVar10 + 2;
    } while (puVar10 != *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x84));
  }
  iVar5 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
  fVar2 = *(float *)(iVar5 + 0x48);
  *(float *)((int)param_1 + 0x288) = fVar2 * *(float *)((int)param_1 + 0x288);
  *(float *)((int)param_1 + 0x28c) = fVar2 * *(float *)((int)param_1 + 0x28c);
  fVar2 = *(float *)(iVar5 + 0x4c) * *(float *)((int)param_1 + 0x298);
  *(float *)((int)param_1 + 0x298) = fVar2;
  fVar2 = fVar2 + *(float *)((int)param_1 + 0x21c);
  *(float *)((int)param_1 + 0x21c) = fVar2;
  if (*(float *)((int)param_1 + 0x29c) < fVar2) {
    *(undefined4 *)((int)param_1 + 0x21c) = *(undefined4 *)((int)param_1 + 0x29c);
  }
  if (*(float *)((int)param_1 + 0x21c) < 0.0) {
    *(undefined4 *)((int)param_1 + 0x21c) = 0;
  }
  if ((*(float *)((int)param_1 + 0x298) != 0.0) && (*(float *)((int)param_1 + 0x21c) < 0.5)) {
    *(undefined4 *)((int)param_1 + 0x214) = *(undefined4 *)((int)param_1 + 0x21c);
  }
  *(undefined4 *)((int)param_1 + 700) = 0;
  *(undefined4 *)((int)param_1 + 0x2b8) = 0;
  *(undefined4 *)((int)param_1 + 0x2c0) = 0;
  *(undefined4 *)((int)param_1 + 0x2c4) = 0;
  *(undefined4 *)((int)param_1 + 0x2c8) = 0;
  *(undefined4 *)((int)param_1 + 0x2cc) = 0;
  *(undefined4 *)((int)param_1 + 0x2d0) = 0;
  *(undefined4 *)((int)param_1 + 0x2d4) = 0;
  *(undefined4 *)((int)param_1 + 0x2d8) = 0;
  local_1c = iVar5;
  if (*(code **)(iVar5 + 0x90) != (code *)0x0) {
    (**(code **)(iVar5 + 0x90))(param_1);
  }
  if (*(code **)(iVar5 + 0x8c) != (code *)0x0) {
    (**(code **)(iVar5 + 0x8c))(param_1);
  }
  if (*(code **)(iVar5 + 0x94) != (code *)0x0) {
    (**(code **)(iVar5 + 0x94))(param_1);
  }
  if ((*(char *)((int)param_1 + 0x2e8) != '\0') &&
     (uVar6 = FUN_004233e0(DAT_00f87b04), (char)uVar6 != '\0')) {
    FUN_009a1a20(&DAT_0105c2e8,(float *)&DAT_0104cce0,&fStack_18,0.0);
    local_28 = fStack_18 - DAT_0105c3a8;
    fStack_20 = fStack_10 - DAT_0105c3b0;
    if (fStack_20 < 0.0) {
      fVar2 = -(DAT_0105c3b0 / fStack_20);
      local_28 = local_28 * fVar2 + DAT_0105c3a8;
      fStack_24 = (fStack_14 - DAT_0105c3ac) * fVar2 + DAT_0105c3ac;
      fStack_20 = fVar2 * fStack_20 + DAT_0105c3b0;
      fStack_c = *(float *)((int)param_1 + 0x2ec) - local_28;
      fStack_8 = *(float *)((int)param_1 + 0x2f0) - fStack_24;
      fStack_4 = *(float *)((int)param_1 + 0x2f4) - fStack_20;
      fStack_18 = local_28;
      fStack_14 = fStack_24;
      fStack_10 = fStack_20;
      FUN_009840b0(&local_28,&fStack_c);
      *(float *)((int)param_1 + 0xdc) = local_28 + *(float *)((int)param_1 + 0xdc);
      *(float *)((int)param_1 + 0xe0) = fStack_24 + *(float *)((int)param_1 + 0xe0);
      *(float *)((int)param_1 + 0xd0) = local_28 + *(float *)((int)param_1 + 0xd0);
      *(float *)((int)param_1 + 0xd4) = fStack_24 + *(float *)((int)param_1 + 0xd4);
    }
  }
  if (*(char *)((int)param_1 + 0x229) != '\0') {
    FUN_00414f90((int)param_1);
    if (*(int **)((int)param_1 + 0x254) == (int *)0x0) {
      pfVar8 = (float *)FUN_00415260(param_1,&fStack_c);
      fStack_18 = *(float *)((int)param_1 + 0x22c) - *pfVar8;
      fStack_14 = *(float *)((int)param_1 + 0x230) - pfVar8[1];
      fStack_20 = *(float *)((int)param_1 + 0x234) - pfVar8[2];
    }
    else {
      pfVar7 = (float *)(**(code **)(**(int **)((int)param_1 + 0x254) + 0x38))();
      FUN_00415910(pfVar8,*pfVar7,0.0,0.2);
      FUN_00415910((void *)((int)param_1 + 0x124),pfVar7[1],0.0,0.2);
      FUN_00415910((void *)((int)param_1 + 0x154),pfVar7[2],0.0,0.2);
      fStack_18 = *pfVar8;
      fStack_14 = *(float *)((int)param_1 + 0x124);
      fStack_10 = *(float *)((int)param_1 + 0x154);
      pfVar8 = (float *)FUN_00538ef0(&fStack_c,(float *)((int)param_1 + 0x238),0.0);
      fStack_18 = fStack_18 - *pfVar8;
      fStack_14 = fStack_14 - pfVar8[1];
      fStack_20 = fStack_10 - pfVar8[2];
      iVar5 = local_1c;
    }
    *(undefined4 *)((int)param_1 + 0xe4) = *(undefined4 *)((int)param_1 + 0xe4);
    *(float *)((int)param_1 + 0xdc) = fStack_18 + *(float *)((int)param_1 + 0xdc);
    *(float *)((int)param_1 + 0xe0) = fStack_14 + *(float *)((int)param_1 + 0xe0);
    *(undefined4 *)((int)param_1 + 0xd8) = *(undefined4 *)((int)param_1 + 0xd8);
    *(float *)((int)param_1 + 0xd0) = fStack_18 + *(float *)((int)param_1 + 0xd0);
    *(float *)((int)param_1 + 0xd4) = fStack_14 + *(float *)((int)param_1 + 0xd4);
    local_28 = fStack_18;
    fStack_24 = fStack_14;
  }
  fStack_18 = *(float *)((int)param_1 + 0xdc) - *(float *)((int)param_1 + 0xd0);
  fStack_14 = *(float *)((int)param_1 + 0xe0) - *(float *)((int)param_1 + 0xd4);
  fStack_10 = *(float *)((int)param_1 + 0xe4) - *(float *)((int)param_1 + 0xd8);
  *(float *)((int)param_1 + 0x90) = fStack_18;
  *(float *)((int)param_1 + 0x94) = fStack_14;
  *(float *)((int)param_1 + 0x98) = fStack_10;
  pcVar9 = DAT_00f87aa8;
  if ((DAT_00f87aa8 != (code *)0x0) || (pcVar9 = *(code **)(iVar5 + 0x98), pcVar9 != (code *)0x0)) {
    (*pcVar9)(param_1);
  }
  if ((*(int *)(*(int *)(*(int *)((int)param_1 + 0xa4) + 8) + 0x18) == 0x48a) &&
     (FUN_00417e10(), DAT_00f87ac4 != DAT_00f87ac8)) {
    _Src = DAT_00f87ac4 + 1;
    _Dst = DAT_00f87ac4;
    do {
      iVar5 = *_Dst;
      if (*(char *)(iVar5 + 0x30) == '\0') {
        puVar10 = *(undefined4 **)(iVar5 + 0x2c);
        if (puVar10 != (undefined4 *)0x0) {
          piVar1 = puVar10 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar10)(1);
          }
          (**(code **)(*(int *)(iVar5 + 0x18) + 4))();
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          (*(code *)**(undefined4 **)(iVar5 + 0x18))();
        }
        _memmove(_Dst,_Src,((int)DAT_00f87ac8 - (int)_Src >> 2) << 2);
        DAT_00f87ac8 = DAT_00f87ac8 + -1;
      }
      else {
        _Dst = _Dst + 1;
        _Src = _Src + 1;
      }
    } while (_Dst != DAT_00f87ac8);
  }
  FUN_00414f90((int)param_1);
  return;
}


//// FUNCTION FUN_0041a4d0 @ 0041a4d0 ////

undefined4 * __fastcall FUN_0041a4d0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d6de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d172b0;
  param_1[5] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_4 = 2;
  param_1[0x1c] = param_1;
  FUN_00acdb9e(0xe4e5b0);
  iVar1 = FUN_0097dda0();
  param_1[0x1d] = iVar1;
  if (s___AVTMCharacter_TM___00e4e598[0x15] != '\0') {
    iVar1 = 0x68;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe4e5b0);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVTMCharacter_TM___00e4e598[0x15] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0041a5a0 @ 0041a5a0 ////

void __thiscall FUN_0041a5a0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00417b30(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_00418b70(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION Camera_StateMachine_Transition @ 0041a610 ////

undefined4 __thiscall Camera_StateMachine_Transition(void *this,int *param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *_Memory;
  float *pfVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  undefined4 extraout_ECX;
  int iVar11;
  undefined4 extraout_EDX;
  float10 fVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  code **ppcVar15;
  undefined4 uVar16;
  char *pcVar17;
  code *local_1b4;
  undefined *puStack_1b0;
  void *local_1a8;
  char *pcStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  char acStack_198 [20];
  undefined1 *puStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined1 auStack_178 [20];
  uint *apuStack_164 [2];
  uint uStack_15c;
  void *apvStack_144 [2];
  uint uStack_13c;
  void *apvStack_124 [2];
  uint uStack_11c;
  void *apvStack_104 [2];
  uint uStack_fc;
  void *apvStack_e4 [2];
  uint uStack_dc;
  void *apvStack_c4 [2];
  uint uStack_bc;
  void *apvStack_a4 [2];
  uint uStack_9c;
  void *apvStack_84 [2];
  uint uStack_7c;
  void *apvStack_64 [2];
  uint uStack_5c;
  void *apvStack_44 [2];
  uint uStack_3c;
  undefined1 auStack_24 [16];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Camera mode state machine. Cases 0x52a (MT_CAMERA_CASE_DEBUG) and 0x66a
                       (MT_CAMERA_CASE_FREECAM) are fully implemented — real callback wiring, same
                       depth as the normal gameplay camera modes — but unreachable in retail since
                       the cvar system that would trigger them (cam_allowfreecam, registered in
                       Camera_RegisterDebugStates / 0x0041c240) is stubbed out via
                       CVarSystem_Register_STUBBED (0x005434a0). */
  local_c = 0xffffffff;
  puStack_10 = &LAB_00c9d79e;
  local_14 = ExceptionList;
  local_1a8 = (void *)0x0;
  ExceptionList = &local_14;
  uVar4 = FUN_00418480('\x01');
  if (param_1 == (int *)0x0) goto LAB_0041b28f;
  iVar10 = *(int *)((int)this + 0xa4);
  iVar11 = 0;
  if (iVar10 != (int)this + 0xb0) {
    do {
      iVar10 = *(int *)(iVar10 + 4);
      iVar11 = iVar11 + 1;
    } while (iVar10 != (int)this + 0xb0);
    if ((iVar11 != 0) &&
       (uVar4 = *(uint *)(*(int *)((int)this + 0xa4) + 8), *(int *)(uVar4 + 0x18) == 0x5ca))
    goto LAB_0041b28f;
  }
  *(undefined4 *)((int)this + 0x29c) = 0x3f4ccccd;
  if ((*(int *)((int)this + 0xa4) != (int)this + 0xb0) &&
     (((uVar4 = *(uint *)(*(int *)((int)this + 0xa4) + 8), *(char *)(uVar4 + 0x58) != '\0' ||
       (DAT_00f87a94 != '\0')) ||
      ((param_2 != 0x4b2 &&
       (uVar4 = FUN_00416e40(this,(int)param_1,(int *)&param_2), (char)uVar4 != '\0'))))))
  goto LAB_0041b4bd;
  FUN_004188e0(this,0x48a);
  local_1b4 = operator_new(0x9c);
  local_c = 0;
  if (local_1b4 == (code *)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = FUN_0041a4d0((undefined4 *)local_1b4);
  }
  local_c = 0xffffffff;
  (**(code **)(*_Memory + 4))();
  _Memory[5] = (int)param_1;
  (**(code **)*_Memory)();
  _Memory[6] = param_2;
                    /* MT_CAMERA_CASE_DEBUG and MT_CAMERA_CASE_FREECAM — fully implemented but
                       unreachable in retail since the cvar system that would trigger them is
                       stubbed out. */
  if (0x52a < param_2) {
    if (0x5f2 < param_2) {
      if (param_2 == 0x642) goto switchD_0041a75c_caseD_462;
      if (param_2 != 0x66a) goto switchD_0041a75c_caseD_463;
      FUN_00401de0(apvStack_44,"freecam",0xffffffff);
      local_c = 10;
      uVar6 = FUN_00417010(this,(int)_Memory,apvStack_44);
      local_c = 0xffffffff;
      if (0x14 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_44[0]);
      }
      if ((char)uVar6 == '\0') goto LAB_0041b27f;
      puStack_1b0 = (undefined *)((int)this + 0x2a0);
      local_1b4 = (code *)&LAB_00414440;
      FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
      _Memory[0x23] = 0;
      _Memory[0x24] = 0;
      _Memory[0x25] = 0;
      goto LAB_0041b378;
    }
    if (param_2 == 0x5f2) {
      FUN_00401de0(apvStack_84,"normal",0xffffffff);
      local_c = 0xd;
      uVar6 = FUN_00417010(this,(int)_Memory,apvStack_84);
      cVar3 = (char)uVar6;
    }
    else {
      if (param_2 != 0x552) {
        if (param_2 != 0x5ca) goto switchD_0041a75c_caseD_463;
        local_1b4 = (code *)FUN_00ace790(param_1,0,&TM::TMInWorld::RTTI_Type_Descriptor,
                                         &TM::CSet::RTTI_Type_Descriptor,0);
        if (local_1b4 == (code *)0x0) {
LAB_0041afe9:
          bVar2 = true;
        }
        else {
          FUN_00401de0(apvStack_124,"normal",0xffffffff);
          local_c = 1;
          local_1a8 = (void *)0x1;
          uVar6 = FUN_00417010(this,(int)_Memory,apvStack_124);
          bVar2 = false;
          if ((char)uVar6 == '\0') goto LAB_0041afe9;
        }
        local_c = 0xffffffff;
        if ((((uint)local_1a8 & 1) != 0) && (0x14 < uStack_11c)) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_124[0]);
        }
        if (bVar2) goto LAB_0041b27f;
        FUN_0078ba40();
        FUN_004129e0((int)this);
        uVar4 = 1;
        pvVar7 = (void *)FUN_004f3b20();
        FUN_004f9510(pvVar7,uVar4);
        _Memory[0x23] = 0;
        _Memory[0x24] = 0;
        _Memory[0x25] = 0;
        _Memory[0x26] = 0;
        _Memory[7] = 0;
        *(undefined1 *)((int)_Memory + 0x59) = 1;
        _Memory[0x15] = 0;
        if (*(void **)((int)this + 600) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 600));
        }
        puVar8 = (undefined4 *)FUN_00528470((int)local_1b4);
        FUN_00403de0(apuStack_164,puVar8);
        local_c = 2;
        puVar9 = FUN_00acecd0(apuStack_164[0],'.');
        if (puVar9 != (uint *)0x0) {
          *(undefined1 *)puVar9 = 0;
        }
        puStack_184 = auStack_178;
        auStack_178[0] = 0;
        uStack_180 = 0;
        uStack_17c = 0x14;
        pcVar17 = ".cam";
        local_c = CONCAT31(local_c._1_3_,3);
        pvVar7 = FUN_00407630(&puStack_184,(char *)apuStack_164[0]);
        FUN_00407630(pvVar7,pcVar17);
        iVar10 = FUN_009aca20((int)puStack_184);
        *(int *)((int)this + 600) = iVar10;
        if (iVar10 == 0) {
          if (0x14 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_184);
          }
          uVar4 = uStack_17c;
          if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
            _free(apuStack_164[0]);
          }
LAB_0041b28f:
          ExceptionList = local_14;
          return uVar4 & 0xffffff00;
        }
        uVar13 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        *(int *)((int)this + 0x25c) = (int)uVar13;
        *(undefined1 *)((int)this + 0x260) = 1;
        *(undefined4 *)((int)this + 0x264) = 0;
        local_1b4 = (code *)(*(int *)(*(int *)((int)this + 600) + 8) + -1);
        uVar13 = FUN_00acd42c();
        iVar10 = 0;
        uVar16 = 0;
        uVar14 = 0x3eb;
        *(int *)((int)this + 0x268) = (int)uVar13;
        uVar6 = FUN_006a36e0();
        FUN_00470a70(DAT_0104917c,uVar6,uVar14,uVar16,iVar10);
        *(undefined4 *)((int)this + 0xf0) = 0x3f800000;
        if (0x14 < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_184);
        }
        if (0x14 < uStack_15c) {
                    /* WARNING: Subroutine does not return */
          _free(apuStack_164[0]);
        }
        goto switchD_0041a75c_caseD_463;
      }
      FUN_00401de0(apvStack_c4,"normal",0xffffffff);
      local_c = 0xc;
      uVar6 = FUN_00417010(this,(int)_Memory,apvStack_c4);
      cVar3 = (char)uVar6;
      apvStack_84[0] = apvStack_c4[0];
      uStack_7c = uStack_bc;
    }
    if (0x14 < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_84[0]);
    }
    if (cVar3 == '\0') {
LAB_0041b27f:
      FUN_004185b0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory[0x23] = 0;
    _Memory[0x24] = 0;
    _Memory[0x25] = 0;
    _Memory[0x26] = 0;
    _Memory[7] = 0;
    *(undefined1 *)((int)_Memory + 0x59) = 1;
    goto switchD_0041a75c_caseD_463;
  }
  if (param_2 == 0x52a) {
    pcStack_1a4 = acStack_198;
    acStack_198[0] = '\0';
    uStack_1a0 = 0;
    uStack_19c = 0x14;
    _strncpy(pcStack_1a4,"debug",5);
    uStack_1a0 = 5;
    pcStack_1a4[5] = '\0';
    local_c = 9;
    uVar6 = FUN_00417010(this,(int)_Memory,&pcStack_1a4);
    local_c = 0xffffffff;
    if (0x14 < uStack_19c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1a4);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    local_1b4 = (code *)&LAB_004129d0;
    puStack_1b0 = &DAT_00d170f8;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2c4);
    local_1b4 = (code *)&LAB_004128e0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2d4);
    local_1b4 = (code *)&LAB_00414bf0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2b8);
    local_1b4 = FUN_004149f0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2c0);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2c8);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    _Memory[0x23] = (int)&LAB_00412750;
    _Memory[0x24] = (int)&LAB_00413d50;
    _Memory[0x25] = (int)FUN_004165c0;
LAB_0041b378:
    _Memory[0x26] = 0;
    _Memory[7] = 0x57a;
    *(undefined1 *)((int)_Memory + 0x59) = 1;
    goto switchD_0041a75c_caseD_463;
  }
  switch(param_2) {
  case 0x462:
switchD_0041a75c_caseD_462:
    FUN_00401de0(apvStack_e4,"normal",0xffffffff);
    local_c = 4;
    uVar6 = FUN_00417010(this,(int)_Memory,apvStack_e4);
    local_c = 0xffffffff;
    if (0x14 < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_e4[0]);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    puStack_1b0 = (undefined *)((int)this + 0x2b8);
    local_1b4 = FUN_004149f0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2cc);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2d8);
    local_1b4 = (code *)&LAB_00414bf0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2dc);
    local_1b4 = FUN_00414c90;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    _Memory[0x23] = (int)&LAB_00412750;
    _Memory[0x24] = (int)&DAT_004127a0;
    _Memory[0x25] = (int)FUN_004162c0;
    _Memory[0x26] = (int)&LAB_004167b0;
    _Memory[7] = 0x52a;
    goto LAB_0041b4a0;
  case 0x48a:
    FUN_00401de0(apvStack_144,"plan",0xffffffff);
    local_c = 5;
    uVar6 = FUN_00417010(this,(int)_Memory,apvStack_144);
    local_c = 0xffffffff;
    if (0x14 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_144[0]);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    FUN_004129e0((int)this);
    *(undefined4 *)((int)this + 0xd8) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    puStack_1b0 = (undefined *)((int)this + 0x2b8);
    *(undefined4 *)((int)this + 0xe4) = 0;
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(undefined4 *)((int)this + 0xdc) = 0;
    local_1b4 = FUN_004149f0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2cc);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2d8);
    local_1b4 = (code *)&LAB_00414bf0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2dc);
    local_1b4 = FUN_00414c90;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    _Memory[0x23] = 0;
    _Memory[0x24] = 0;
    _Memory[0x25] = 0;
    _Memory[0x26] = (int)&LAB_004167b0;
    _Memory[7] = 0;
    *(undefined1 *)((int)_Memory + 0x59) = 1;
    if (DAT_00f87aa4 == (int *)0x0) {
      local_1b4 = operator_new(0x7c);
      local_c = 6;
      if (local_1b4 == (code *)0x0) {
        DAT_00f87aa4 = (int *)0x0;
      }
      else {
        local_1a8 = (void *)0xff000000;
        DAT_00f87aa4 = FUN_009a8a00(local_1b4,"Lithograph Bold",0xb,0,-0x1000000);
      }
    }
    break;
  case 0x4b2:
    FUN_00401de0(apvStack_104,"follow",0xffffffff);
    local_c = 7;
    uVar6 = FUN_00417010(this,(int)_Memory,apvStack_104);
    local_c = 0xffffffff;
    if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_104[0]);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    iVar10 = *(int *)(*(int *)((int)this + 0xa4) + 8);
    if ((*(int *)(iVar10 + 0x18) == 0x4b2) && (piVar1 = *(int **)(iVar10 + 0x14), piVar1 == param_1)
       ) {
      fVar12 = (float10)0.5;
      if (piVar1 != (int *)0x0) {
        fVar12 = (float10)(**(code **)(*piVar1 + 0x44))();
      }
      if ((fVar12 + (float10)*(float *)((int)this + 0x214)) * (float10)0.5 <=
          (float10)*(float *)((int)this + 0x21c)) {
        *(undefined4 *)((int)this + 0x21c) = *(undefined4 *)((int)this + 0x214);
      }
      else {
        *(float *)((int)this + 0x21c) = (float)fVar12;
      }
    }
    puStack_1b0 = (undefined *)((int)this + 0x2dc);
    *(undefined4 *)((int)this + 0x2ac) = 0;
    *(undefined4 *)((int)this + 0x2a8) = 0;
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2dd);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2a8);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2ac);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2d8);
    local_1b4 = (code *)&LAB_00414bf0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    local_1b4 = (code *)&LAB_00416a10;
    puStack_1b0 = &DAT_00d170f8;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    goto LAB_0041acce;
  case 0x4da:
    FUN_00401de0(apvStack_64,"follow",0xffffffff);
    local_c = 8;
    uVar6 = FUN_00417010(this,(int)_Memory,apvStack_64);
    local_c = 0xffffffff;
    if (0x14 < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_64[0]);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    iVar10 = FUN_0097e350((void *)param_1[0x47],0);
    if (iVar10 == 0) {
      *(undefined4 *)((int)this + 0x29c) = 0x3f4ccccd;
    }
    else {
      iVar10 = FUN_0097e350((void *)param_1[0x47],0);
      pfVar5 = (float *)(iVar10 + 200);
      ppcVar15 = &local_1b4;
      pvVar7 = (void *)(**(code **)(*param_1 + 0x38))(auStack_24);
      FUN_00411ca0(pvVar7,(float *)ppcVar15,pfVar5);
      local_1a8 = (void *)param_1[0x47];
      fVar12 = FUN_00412f20((float *)&local_1b4);
      local_1b4 = (code *)(float)ABS(fVar12 * (float10)0.5);
      iVar10 = FUN_0097e350(local_1a8,0);
      local_1b4 = (code *)(*(float *)(iVar10 + 0xe0) + *(float *)(iVar10 + 0xe0) + (float)local_1b4)
      ;
      fVar12 = FUN_00412f20((float *)(_Memory + 8));
      fVar12 = (float10)1.0 - (float10)(float)local_1b4 / fVar12;
      *(float *)((int)this + 0x29c) = (float)fVar12;
      if ((float10)0.8 <= fVar12) {
        fVar12 = (float10)0.8;
      }
      *(float *)((int)this + 0x29c) = (float)fVar12;
    }
    *(undefined4 *)((int)this + 0x2ac) = 0;
    *(undefined4 *)((int)this + 0x2a8) = 0;
    local_1b4 = (code *)&LAB_00414d70;
    puStack_1b0 = &DAT_00d170f8;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2dc);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2dd);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2a8);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2ac);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2a0);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2a4);
    local_1b4 = (code *)&LAB_00419d60;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2d8);
    local_1b4 = (code *)&LAB_00414bf0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
LAB_0041acce:
    puStack_1b0 = (undefined *)((int)this + 0x2cc);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    _Memory[0x23] = 0;
    _Memory[0x24] = (int)&DAT_004127a0;
    _Memory[0x25] = (int)FUN_004162c0;
    _Memory[0x26] = (int)&LAB_004167b0;
    _Memory[7] = 0;
    FUN_00415130(this,(int)_Memory);
LAB_0041b4a0:
    *(undefined1 *)((int)_Memory + 0x59) = 0;
    break;
  case 0x502:
    FUN_00401de0(apvStack_a4,"plan",0xffffffff);
    local_c = 0xb;
    uVar6 = FUN_00417010(this,(int)_Memory,apvStack_a4);
    local_c = 0xffffffff;
    if (0x14 < uStack_9c) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_a4[0]);
    }
    if ((char)uVar6 == '\0') goto LAB_0041b27f;
    puStack_1b0 = (undefined *)((int)this + 0x2a0);
    local_1b4 = FUN_004149f0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2a8);
    local_1b4 = FUN_004149f0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    puStack_1b0 = (undefined *)((int)this + 0x2cc);
    local_1b4 = (code *)&LAB_004128a0;
    FUN_0041a5a0(_Memory + 0x1f,&local_1b4);
    _Memory[0x23] = (int)&LAB_00412750;
    _Memory[0x24] = (int)&DAT_004127a0;
    _Memory[0x25] = (int)FUN_004162c0;
    _Memory[0x26] = (int)&LAB_004167b0;
    _Memory[7] = 0;
    *(undefined1 *)((int)_Memory + 0x59) = 1;
  }
switchD_0041a75c_caseD_463:
  FUN_00415340(this,(int)_Memory);
  uVar4 = FUN_00413840((void *)((int)this + 0x184),(undefined4 *)((int)this + 0xdc));
LAB_0041b4bd:
  ExceptionList = local_14;
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION FUN_0041b5a0 @ 0041b5a0 ////

void __thiscall FUN_0041b5a0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char local_19 [25];
  
  if (*(int *)(*(int *)(*(int *)((int)this + 0xa4) + 8) + 0x18) == 0x48a) {
    FUN_00418990(this);
    Camera_StateMachine_Transition(this,this,0x462);
    local_19[0] = '\x01';
    FUN_00414c90((int)this,local_19);
  }
  fVar3 = (*(float *)((int)this + 0xe4) - param_1[2]) * (-1.0 / *(float *)((int)this + 0x98));
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  *(float *)((int)this + 0xdc) = *param_1 - fVar3 * *(float *)((int)this + 0x90);
  *(float *)((int)this + 0xe0) = fVar1 - fVar3 * *(float *)((int)this + 0x94);
  *(float *)((int)this + 0xe4) = fVar2 - fVar3 * *(float *)((int)this + 0x98);
  *(float *)((int)this + 0xd0) = *(float *)((int)this + 0xdc) - *(float *)((int)this + 0x90);
  *(float *)((int)this + 0xd4) = *(float *)((int)this + 0xe0) - *(float *)((int)this + 0x94);
  *(float *)((int)this + 0xd8) = *(float *)((int)this + 0xe4) - *(float *)((int)this + 0x98);
  return;
}


//// FUNCTION FUN_0041b6a0 @ 0041b6a0 ////

void __fastcall FUN_0041b6a0(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 0xa4) + 8);
  uVar2 = *(uint *)(iVar1 + 0x1c);
  if (uVar2 != 0) {
    if (uVar2 == 0x57a) {
      FUN_004188e0(param_1,*(int *)(iVar1 + 0x18));
      return;
    }
    Camera_StateMachine_Transition(param_1,*(int **)(iVar1 + 0x14),uVar2);
  }
  return;
}


//// FUNCTION FUN_0041b6d0 @ 0041b6d0 ////

void __fastcall FUN_0041b6d0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d172e8;
  return;
}


//// FUNCTION FUN_0041b730 @ 0041b730 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0041b730(undefined4 *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *this;
  undefined4 *puVar7;
  float10 fVar8;
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [6];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d877;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0053cac0(param_1 + 0x19);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d1730c;
  param_1[0x19] = &PTR_LAB_00d172f4;
  FUN_009aba60((undefined1 *)(param_1 + 0x22));
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  puVar7 = param_1 + 0x2c;
  param_1[0x2e] = 0;
  *puVar7 = 0;
  param_1[0x2d] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x27] = &PTR_LAB_00d172e8;
  param_1[0x29] = puVar7;
  *puVar7 = param_1 + 0x28;
  FUN_00416240(param_1 + 0x3d);
  FUN_00416240(param_1 + 0x61);
  param_1[0x85] = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((int)param_1 + 0x229) = 0;
  param_1[0x89] = 0x3f800000;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x93] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = param_1 + 0x90;
  param_1[0x90] = &PTR_FUN_00d172b0;
  param_1[0x95] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  local_4._0_1_ = 6;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0x3f800000;
  local_50 = -1.0;
  local_4c = 0.0;
  local_44[1] = 1.0;
  local_44[3] = 1.0;
  local_48 = 0.0;
  local_44[0] = 0.0;
  local_44[2] = 0.0;
  local_44[4] = 0.0;
  local_44[5] = 0.0;
  FUN_009a3f80(param_1 + 0xc9,local_44 + 3,local_44,&local_50);
  param_1[0xcd] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  this = operator_new(0xd8);
  if (this == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"ui/camera",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4 = CONCAT31(local_4._1_3_,8);
    puVar7 = FUN_0055c540(this,&local_2c);
  }
  param_1[0x23] = puVar7;
  local_4 = 6;
  if ((this != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"wheelscale",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 10;
  fVar8 = FUN_00558610((void *)param_1[0x23],&local_2c,0.0);
  _DAT_00e4e410 = (float)((float10)1000.0 / fVar8);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"pushdistance",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4._0_1_ = 0xb;
  fVar8 = FUN_00558610((void *)param_1[0x23],&local_2c,0.0);
  _DAT_00e4e414 = (float)fVar8;
  local_4._0_1_ = 6;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  _DAT_00e4e414 = _DAT_00e4e414 * _DAT_00e4e414;
  Camera_StateMachine_Transition(param_1,param_1,0x462);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4._0_1_ = 0xc;
  FUN_00558a50((void *)param_1[0x23],&local_2c,(undefined4 *)0x1);
  local_4._0_1_ = 6;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar5 = param_1[0x29];
  iVar6 = *(int *)(iVar5 + 8);
  pfVar1 = (float *)(param_1 + 0x37);
  *pfVar1 = *(float *)(iVar6 + 0x2c);
  param_1[0x38] = *(undefined4 *)(iVar6 + 0x30);
  param_1[0x39] = *(undefined4 *)(iVar6 + 0x34);
  iVar6 = *(int *)(iVar5 + 8);
  fVar3 = *(float *)(iVar6 + 0x28);
  pfVar2 = (float *)(param_1 + 0x34);
  fVar4 = *(float *)(iVar6 + 0x24);
  *pfVar2 = *pfVar1 - *(float *)(iVar6 + 0x20);
  param_1[0x35] = (float)param_1[0x38] - fVar4;
  param_1[0x36] = (float)param_1[0x39] - fVar3;
  param_1[0x3a] = *(undefined4 *)(*(int *)(iVar5 + 8) + 0x40);
  param_1[0x3b] = 0x3f800000;
  local_48 = (float)param_1[0x39] - (float)param_1[0x36];
  local_4c = (float)param_1[0x38] - (float)param_1[0x35];
  local_50 = *pfVar1 - *pfVar2;
  param_1[0x24] = local_50;
  param_1[0x25] = local_4c;
  param_1[0x26] = local_48;
  fVar8 = FUN_004012c0((float)param_1[0x3a]);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar8);
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = *(undefined4 *)(*(int *)(param_1[0x29] + 8) + 0x78);
  param_1[0xa7] = 0x3f4ccccd;
  param_1[0x96] = 0;
  if (DAT_00f87ac4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(DAT_00f87ac4);
  }
  DAT_00f87ac4 = (void *)0x0;
  DAT_00f87ac8 = 0;
  _DAT_00f87acc = 0;
  param_1[0x3c] = 0x41700000;
  FUN_00415550((int)param_1);
  local_2c = local_20;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0x3f800000;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"cam_store",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4._0_1_ = 0xd;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"cam_recall",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 0xe;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"cam_reload",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 0xf;
  FUN_005434b0();
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  fVar8 = FUN_004012c0((float)param_1[0x3b] * (float)param_1[0x3a]);
  FUN_009a1950(&DAT_0105c2e8,(float)fVar8);
  FUN_009a6070(&DAT_0105c2e8,(float)param_1[0x3c]);
  DAT_0105c3e4 = DAT_00e4e418;
  FUN_009a5390(0x105c2e8);
  FUN_009a2830(&DAT_0105c2e8,pfVar2,pfVar1,0.0);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0041c080 @ 0041c080 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_0041c080(void *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined1 local_1;
  
  local_1 = 0;
  cVar1 = FUN_00553f60();
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_005540f0(7);
  if ((((char)uVar2 != '\0') && (iVar3 = FUN_00423320(DAT_00f87b04), iVar3 == 0)) &&
     (cVar1 = FUN_00553f70(0x75), cVar1 == '\0')) {
    iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0xa4) + 8) + 0x18);
    if (iVar3 == 0x5ca) {
      local_1 = 1;
    }
    else {
      if (iVar3 == 0x48a) {
        FUN_00418990(this);
        Camera_StateMachine_Transition(this,this,0x462);
        goto LAB_0041c14a;
      }
      if (DAT_0104c6c8 != 0) {
        (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 0xc))();
        FUN_00413130(&DAT_0104c6b4,0);
      }
      FUN_00418990(this);
      Camera_StateMachine_Transition(this,this,0x48a);
      local_1 = 0;
    }
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
LAB_0041c14a:
  iVar3 = FUN_00423320(DAT_00f87b04);
  if (iVar3 == 0) {
    uVar2 = FUN_005540f0(6);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_005540f0(0x15);
      if ((char)uVar2 == '\0') {
        ppuVar5 = (undefined **)FUN_00418340((void *)((int)this + 0x334));
      }
      else {
        fVar4 = (float)GlobalStatRegistry_Get();
        ppuVar5 = FUN_008c6c70(fVar4);
      }
      if (ppuVar5 != (undefined **)0x0) {
        FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x4b2,ppuVar5,0);
      }
    }
    else {
      FUN_004188e0(this,0x48a);
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
  }
  if (((_DAT_00f87a9c != 0.0) && (uVar6 = FUN_00553fa0(0x40), (char)uVar6 != '\0')) &&
     ((cVar1 = FUN_00553f70(0x38), cVar1 != '\0' || (cVar1 = FUN_00553f70(0x39), cVar1 != '\0')))) {
    DAT_00e4e418 = 0x447a0000;
    FUN_0041b6a0(this);
    return 1;
  }
  return local_1;
}


//// FUNCTION Camera_RegisterDebugStates @ 0041c240 ////

/* WARNING: Removing unreachable block (ram,0x0041c409) */
/* WARNING: Removing unreachable block (ram,0x0041c3a7) */

void __cdecl Camera_RegisterDebugStates(char param_1)

{
  undefined4 *puVar1;
  char local_20 [11];
  undefined1 local_15;
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers the MT_CAMERA_CASE_* state-name table plus the cam_allowfreecam /
                       cam_fisting cvars, gated behind param_1. Called true from the main game-init
                       sequence (FUN_004244a0), false from a reload/restart path (FUN_004b3550).
                       Registration itself is inert — see CVarSystem_Register_STUBBED
                       (0x005434a0). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d8db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x33c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_00f87aa0 = (undefined4 *)0x0;
  }
  else {
    DAT_00f87aa0 = FUN_0041b730(puVar1);
  }
  local_4 = 0xffffffff;
  if (param_1 != '\0') {
    FUN_00471840("MT_CAMERA_CASE_NORMAL",0x462);
    FUN_00471840("MT_CAMERA_CASE_MAP",0x48a);
    FUN_00471840("MT_CAMERA_CASE_FOLLOW",0x4b2);
    FUN_00471840("MT_CAMERA_CASE_FOLLOWBUILDING",0x4da);
    FUN_00471840("MT_CAMERA_CASE_MOVEASSET",0x502);
    FUN_00471840("MT_CAMERA_CASE_DEBUG",0x52a);
    FUN_00471840("MT_CAMERA_CASE_STATIC",0x552);
    FUN_00471840("MT_CAMERA_CASE_DELETE",0x57a);
    FUN_00471840("MT_CAMERA_CASE_DELETE_ALL",0x5a2);
    FUN_00471840("MT_CAMERA_CASE_RESETPOSITION",0x61a);
    FUN_00471840("MT_CAMERA_CASE_MOVIEMAKER",0x642);
    FUN_00471840("MT_CAMERA_CASE_FREECAM",0x66a);
    local_20[0] = '\0';
    _strncpy(local_20,"cam_fisting",0xb);
    local_15 = 0;
    local_4 = 1;
    CVarSystem_Register_STUBBED();
    local_20[0] = '\0';
    _strncpy(local_20,"cam_allowfreecam",0x10);
    local_10 = 0;
    local_4 = 2;
    CVarSystem_Register_STUBBED();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0041c4b0 @ 0041c4b0 ////

void __fastcall FUN_0041c4b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x28;
  return;
}


//// FUNCTION FUN_0041c4e0 @ 0041c4e0 ////

int * __thiscall FUN_0041c4e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0041c550 @ 0041c550 ////

void __cdecl FUN_0041c550(int *param_1)

{
  void *pvVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  undefined4 uStack_8;
  
  (**(code **)(*param_1 + 0x34))(&local_c);
  uStack_8 = 0x3e800000;
  fVar4 = 0.0;
  iVar2 = 0x24;
  do {
    pvVar1 = (void *)FUN_009af7b0(DAT_0105cbec,&fStack_10,(int *)&lpType_0000000a,0xf,
                                  (undefined *)0x0);
    if (pvVar1 != (void *)0x0) {
      fcos((float10)fVar4);
      fsin((float10)fVar4);
      FUN_00412e20((float *)&stack0xffffffd8);
      FUN_009ae120(pvVar1,(undefined4 *)&stack0xffffffd8);
      *(undefined4 *)((int)pvVar1 + 0x58) = 0x3cb851ec;
      fVar4 = fVar4 + 0.17453294;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0xc;
  do {
    fStack_1c = fStack_10;
    fStack_18 = local_c;
    fStack_14 = (float)uStack_8;
    fVar3 = FUN_00990e30(-0.25,0.25);
    fStack_1c = (float)(fVar3 + (float10)fStack_1c);
    fVar3 = FUN_00990e30(-0.25,0.25);
    fStack_18 = (float)(fVar3 + (float10)fStack_18);
    fVar3 = FUN_00990e30(-0.5,1.0);
    fStack_14 = (float)fVar3;
    pvVar1 = (void *)FUN_009af7b0(DAT_0105cbec,&fStack_1c,(int *)&lpType_0000000a,0xf,
                                  (undefined *)0x0);
    if (pvVar1 != (void *)0x0) {
      FUN_00412e20((float *)&stack0xffffffd8);
      FUN_009ae120(pvVar1,(undefined4 *)&stack0xffffffd8);
      *(undefined4 *)((int)pvVar1 + 0x58) = 0x3cb851ec;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_0041c700 @ 0041c700 ////

void __cdecl FUN_0041c700(int *param_1,int param_2)

{
  void *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d8fb;
  local_c = ExceptionList;
  if (0 < DAT_0105be08) {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0x34))();
    uVar2 = 0xd;
    if (param_2 == 2) {
      uVar2 = 0xd;
    }
    else if (param_2 == 3) {
      uVar2 = 0xe;
    }
    else if (param_2 == 4) {
      uVar2 = 0xf;
    }
    this = operator_new(0x48);
    uStack_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_009afba0(this,0x11,uVar2,local_18,uStack_14,uStack_10,0x42200000);
    }
    *(undefined1 *)(puVar1 + 0xc) = 1;
    puVar1[0xd] = 0x40400000;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0041c7c0 @ 0041c7c0 ////

void __cdecl FUN_0041c7c0(float *param_1)

{
  uint uVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d91b;
  local_c = ExceptionList;
  if (0 < DAT_0105be08) {
    ExceptionList = &local_c;
    uVar1 = FUN_009a20f0(&DAT_0105c2e8,param_1,2.0);
    if ((char)uVar1 != '\0') {
      this = operator_new(0x48);
      local_4 = 0;
      if (this == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = FUN_009afba0(this,6,7,*param_1,param_1[1],param_1[2],0x41f00000);
      }
      *(undefined1 *)(puVar2 + 0xc) = 1;
      puVar2[0xd] = 0x3e800000;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0041c860 @ 0041c860 ////

void __fastcall FUN_0041c860(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24 [3];
  undefined4 local_18 [3];
  undefined4 local_c [3];
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  uVar1 = FUN_00566c70();
  if (uVar1 <= *(uint *)(param_1 + 0x20)) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x11c) == 0) {
    return;
  }
  iVar2 = FUN_00990d30(0,3);
  if (iVar2 == 0) {
    pfVar3 = (float *)FUN_0097fad0(*(void **)(*(int *)(param_1 + 0x14) + 0x11c),local_c);
  }
  else if (iVar2 == 1) {
    pfVar3 = (float *)FUN_0097fb40(*(void **)(*(int *)(param_1 + 0x14) + 0x11c),local_18);
  }
  else {
    if (iVar2 != 2) goto LAB_0041c8f8;
    pfVar3 = (float *)FUN_0097fbb0(*(void **)(*(int *)(param_1 + 0x14) + 0x11c),local_24);
  }
  local_30 = *pfVar3;
  local_2c = pfVar3[1];
  local_28 = pfVar3[2];
LAB_0041c8f8:
  fVar5 = FUN_00990e30(0.0,6.2831855);
  fVar6 = FUN_00990e30(0.2,0.4);
  fVar7 = (float10)fcos((float10)(float)fVar5);
  local_30 = (float)(fVar7 * fVar6 + (float10)local_30);
  fVar5 = (float10)fsin((float10)(float)fVar5);
  local_2c = (float)(fVar5 * fVar6 + (float10)local_2c);
  fVar5 = FUN_00990e30(-0.25,0.25);
  local_28 = (float)(fVar5 + (float10)local_28);
  iVar2 = FUN_005773c0(*(int *)(param_1 + 0x14));
  iVar4 = GetPlayerStudio();
  if (iVar2 == iVar4) {
    iVar2 = 8;
  }
  else {
    iVar2 = 9;
  }
  FUN_009af7b0(DAT_0105cbec,&local_30,(int *)&lpType_0000000a,iVar2,(undefined *)0x0);
  iVar2 = FUN_00566c70();
  *(int *)(param_1 + 0x20) = iVar2 + *(int *)(param_1 + 0x24);
  return;
}


//// FUNCTION FUN_0041c9c0 @ 0041c9c0 ////

undefined4 * __thiscall FUN_0041c9c0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  uVar1 = FUN_009b01a0(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  return this;
}


//// FUNCTION FUN_0041ca00 @ 0041ca00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041ca00(int param_1)

{
  float fVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  ulonglong uVar7;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (0 < *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
    iStack_4 = param_1;
    cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))();
    if (cVar2 == '\0') {
      FUN_00585ff0(*(void **)(param_1 + 0x14),(undefined4 *)&stack0xfffffff0);
      puVar3 = (undefined4 *)FUN_00587900(&iStack_4);
      iVar4 = _wcscmp((wchar_t *)*puVar3,L"U");
      if (iVar4 != 0) {
        pfVar5 = (float *)FUN_00585ff0(*(void **)(param_1 + 0x14),&iStack_4);
        fVar1 = (_DAT_00e4e5d0 - _DAT_00e4e5cc) * *pfVar5 + _DAT_00e4e5cc;
        if (0 < *(int *)(param_1 + 0x1c)) {
          fVar1 = fVar1 * 1.25;
        }
        if (0.0 < fVar1) {
          uVar7 = FUN_00acd42c();
          uVar6 = (uint)uVar7;
          *(uint *)(param_1 + 0x24) = uVar6;
          if (uVar6 < 2) {
            uVar6 = 1;
          }
          *(uint *)(param_1 + 0x24) = uVar6;
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_0041cc30 @ 0041cc30 ////

undefined4 * __thiscall FUN_0041cc30(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9d938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  FUN_004073c0((int)this);
  *(undefined4 *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x18) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0041ccc0 @ 0041ccc0 ////

undefined4 * FUN_0041ccc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d95b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x504);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00847f00(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041cd20 @ 0041cd20 ////

undefined4 * FUN_0041cd20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d97b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x520);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00849180(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041cd80 @ 0041cd80 ////

undefined4 * __fastcall FUN_0041cd80(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d1758c;
  param_1[0x1e] = &PTR_LAB_00d1756c;
  param_1[0x28] = &PTR_LAB_00d17554;
  return param_1;
}


//// FUNCTION FUN_0041cdb0 @ 0041cdb0 ////

char * __fastcall FUN_0041cdb0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    return pcVar1 + 1;
  }
  return param_1;
}


//// FUNCTION FUN_0041cde0 @ 0041cde0 ////

undefined4 * __fastcall FUN_0041cde0(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d17794;
  param_1[0x1e] = &PTR_LAB_00d17774;
  param_1[0x28] = &PTR_LAB_00d1775c;
  return param_1;
}


//// FUNCTION FUN_0041ce10 @ 0041ce10 ////

undefined4 * FUN_0041ce10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d99b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x7c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004936a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ce70 @ 0041ce70 ////

undefined4 * FUN_0041ce70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d9bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xdc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00493560(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041cef0 @ 0041cef0 ////

void FUN_0041cef0(void)

{
  FUN_009abd80(-1);
  return;
}


//// FUNCTION FUN_0041cf00 @ 0041cf00 ////

undefined4 * FUN_0041cf00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d9db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x52c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00849a40(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041cf60 @ 0041cf60 ////

undefined4 * FUN_0041cf60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9d9fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x534);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00848d30(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041cfc0 @ 0041cfc0 ////

undefined4 * FUN_0041cfc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9da1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xfc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005ad130(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d020 @ 0041d020 ////

undefined4 * FUN_0041d020(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9da3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x98);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00442520(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d080 @ 0041d080 ////

undefined4 * FUN_0041d080(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9da5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00445c70(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d0e0 @ 0041d0e0 ////

undefined4 * FUN_0041d0e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9da7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x180);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0084f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d140 @ 0041d140 ////

int * FUN_0041d140(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9da9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xa24);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00580fb0(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041d1a0 @ 0041d1a0 ////

int * FUN_0041d1a0(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dabb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xaa4);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = CWannabe_Constructor(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041d200 @ 0041d200 ////

undefined4 * FUN_0041d200(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dadb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(200);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00489d30(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d260 @ 0041d260 ////

undefined4 * FUN_0041d260(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dafb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00489ca0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d2c0 @ 0041d2c0 ////

undefined4 * FUN_0041d2c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9db1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xaf4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004fa710(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d340 @ 0041d340 ////

void __fastcall FUN_0041d340(undefined1 *param_1)

{
  DAT_0105cc5c = *param_1;
  return;
}


//// FUNCTION FUN_0041d350 @ 0041d350 ////

undefined4 * FUN_0041d350(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9db3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0042e7e0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d3b0 @ 0041d3b0 ////

undefined4 * FUN_0041d3b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9db5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x134);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0042e410(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d410 @ 0041d410 ////

undefined4 * FUN_0041d410(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9db7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x160);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0042ee00(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d470 @ 0041d470 ////

undefined4 * FUN_0041d470(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9db9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x25c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0093a0b0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d4d0 @ 0041d4d0 ////

undefined4 * FUN_0041d4d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dbbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = TMRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d530 @ 0041d530 ////

undefined4 * FUN_0041d530(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dbdb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CActivateRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d590 @ 0041d590 ////

undefined4 * FUN_0041d590(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dbfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CAdvanceRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d5f0 @ 0041d5f0 ////

undefined4 * FUN_0041d5f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dc1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x278);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CArchiveRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d650 @ 0041d650 ////

undefined4 * FUN_0041d650(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dc3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2f4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CAutoWardrobeRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d6b0 @ 0041d6b0 ////

undefined4 * FUN_0041d6b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dc5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CCastRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d710 @ 0041d710 ////

undefined4 * FUN_0041d710(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dc7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CCostumeRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d770 @ 0041d770 ////

undefined4 * FUN_0041d770(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dc9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CCrewRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d7d0 @ 0041d7d0 ////

undefined4 * FUN_0041d7d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dcbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x28c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CCustomScriptRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d830 @ 0041d830 ////

undefined4 * FUN_0041d830(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dcdb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x288);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CDetoxRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d890 @ 0041d890 ////

undefined4 * FUN_0041d890(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dcfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CDirectorRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION CFinanceRoom_Constructor @ 0041d8f0 ////

undefined4 * __fastcall CFinanceRoom_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d17984;
  param_1[0x19] = &PTR_LAB_00d17964;
  return param_1;
}


//// FUNCTION TMRoom_NoOpDefault @ 0041d910 ////

void TMRoom_NoOpDefault(void)

{
  return;
}


//// FUNCTION FUN_0041d940 @ 0041d940 ////

undefined4 * FUN_0041d940(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dd1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x278);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = RoomObject_CreateCancelProjectAction(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041d9a0 @ 0041d9a0 ////

undefined4 * FUN_0041d9a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dd3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x288);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00923a50(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041da00 @ 0041da00 ////

undefined4 * FUN_0041da00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dd5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x25c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00924200(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041da60 @ 0041da60 ////

undefined4 * FUN_0041da60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dd7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CLeadsRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dac0 @ 0041dac0 ////

undefined4 * FUN_0041dac0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dd9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x25c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CMarketingRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041db20 @ 0041db20 ////

undefined4 * FUN_0041db20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ddbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = MovieViewerRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041db80 @ 0041db80 ////

undefined4 * FUN_0041db80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dddb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x25c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CPostProdRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dbe0 @ 0041dbe0 ////

undefined4 * FUN_0041dbe0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ddfb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x29c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CPRRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dc40 @ 0041dc40 ////

undefined4 * FUN_0041dc40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9de1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x90);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0092e4e0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dca0 @ 0041dca0 ////

undefined4 * FUN_0041dca0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9de3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2b0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CRehearseRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dd00 @ 0041dd00 ////

undefined4 * FUN_0041dd00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9de5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x220);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CRoomPlaceObject_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dd60 @ 0041dd60 ////

undefined4 * FUN_0041dd60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9de7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x238);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00947cb0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ddc0 @ 0041ddc0 ////

undefined4 * FUN_0041ddc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9de9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x274);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CReleaseRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041de20 @ 0041de20 ////

undefined4 * FUN_0041de20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9debb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2a8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_009308c0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041de80 @ 0041de80 ////

undefined4 * FUN_0041de80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dedb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x27c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CReviewsRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041dee0 @ 0041dee0 ////

undefined4 * FUN_0041dee0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9defb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2ac);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = GenreWritingStation_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041df40 @ 0041df40 ////

undefined4 * FUN_0041df40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9df1b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x278);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CSellRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION CStarMakerRoom_Constructor @ 0041dfa0 ////

undefined4 * __fastcall CStarMakerRoom_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d17a44;
  param_1[0x19] = &PTR_LAB_00d17a20;
  return param_1;
}


//// FUNCTION FUN_0041dfc0 @ 0041dfc0 ////

undefined4 * FUN_0041dfc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9df3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x274);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CTrailerStarRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e020 @ 0041e020 ////

undefined4 * FUN_0041e020(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9df5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x288);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = TMRoomCB_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e080 @ 0041e080 ////

undefined4 * FUN_0041e080(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9df7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x17c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004a5660(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e100 @ 0041e100 ////

undefined4 * FUN_0041e100(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9df9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00460bc0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e160 @ 0041e160 ////

undefined4 * FUN_0041e160(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dfbb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00460e20(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e1c0 @ 0041e1c0 ////

undefined4 * FUN_0041e1c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dfdb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x43c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00448680(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x50] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e230 @ 0041e230 ////

undefined4 * FUN_0041e230(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9dffb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x1b8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00463110(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e290 @ 0041e290 ////

undefined4 * FUN_0041e290(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e01b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x230);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004db260(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e2f0 @ 0041e2f0 ////

undefined4 * FUN_0041e2f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e03b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x118);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a9bc0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e350 @ 0041e350 ////

undefined4 * FUN_0041e350(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e05b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a8e30(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e3b0 @ 0041e3b0 ////

undefined4 * FUN_0041e3b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e07b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x74);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a9070(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e410 @ 0041e410 ////

undefined4 * FUN_0041e410(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e09b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x168);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = StudioFinance_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e470 @ 0041e470 ////

undefined4 * FUN_0041e470(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e0bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x1f0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = ScriptDefinition_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e4d0 @ 0041e4d0 ////

undefined4 * FUN_0041e4d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e0db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x110);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004c5700(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e560 @ 0041e560 ////

undefined4 * FUN_0041e560(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e0fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xbc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004c5890(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e610 @ 0041e610 ////

undefined4 * FUN_0041e610(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e11b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x484);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0048bc00(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e670 @ 0041e670 ////

undefined4 * FUN_0041e670(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e13b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x4cc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004fb7a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e6d0 @ 0041e6d0 ////

undefined4 * FUN_0041e6d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e15b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x100);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004feb80(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e730 @ 0041e730 ////

undefined4 * FUN_0041e730(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e17b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xc4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0048e370(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e7d0 @ 0041e7d0 ////

undefined4 * FUN_0041e7d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e19b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0043ab40(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e840 @ 0041e840 ////

undefined4 * FUN_0041e840(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e1bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004a5cf0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e8a0 @ 0041e8a0 ////

undefined4 * FUN_0041e8a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e1db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xbc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004aad90(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041e900 @ 0041e900 ////

int * FUN_0041e900(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e1fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xd8);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00410910(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041e960 @ 0041e960 ////

int * FUN_0041e960(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e21b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x160);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00482250(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041e9c0 @ 0041e9c0 ////

int * FUN_0041e9c0(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e23b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x130);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_004ff9d0(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041ea20 @ 0041ea20 ////

int * FUN_0041ea20(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e25b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x120);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_0051e490(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041ea80 @ 0041ea80 ////

undefined4 * FUN_0041ea80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e27b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00430b40(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041eae0 @ 0041eae0 ////

undefined4 * FUN_0041eae0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e29b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x120);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005d6dc0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041eb40 @ 0041eb40 ////

int * FUN_0041eb40(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e2bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xd74);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00594760(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041eba0 @ 0041eba0 ////

undefined4 * FUN_0041eba0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e2db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xc0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0056eda0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ec00 @ 0041ec00 ////

int * FUN_0041ec00(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e2fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x790);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00574460(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041ec60 @ 0041ec60 ////

undefined4 * FUN_0041ec60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e31b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x134);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004d62a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ece0 @ 0041ece0 ////

undefined4 * FUN_0041ece0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e33b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x160);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CResearchPack_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ed40 @ 0041ed40 ////

undefined4 * FUN_0041ed40(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e35b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x70);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0040a0f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041eda0 @ 0041eda0 ////

undefined4 * FUN_0041eda0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e37b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x70);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a2450(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ee00 @ 0041ee00 ////

undefined4 * FUN_0041ee00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e39b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x13c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00858820(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ee60 @ 0041ee60 ////

undefined4 * FUN_0041ee60(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e3bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x8c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0085b9f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041eec0 @ 0041eec0 ////

undefined4 * FUN_0041eec0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e3db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00853820(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ef20 @ 0041ef20 ////

undefined4 * FUN_0041ef20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e3fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0044e4a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ef80 @ 0041ef80 ////

undefined4 * FUN_0041ef80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e41b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005cc9c0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041efe0 @ 0041efe0 ////

undefined4 * FUN_0041efe0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e43b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x60);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0043dd60(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f040 @ 0041f040 ////

undefined4 * FUN_0041f040(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e45b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x108);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005d0b50(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f0f0 @ 0041f0f0 ////

undefined4 * FUN_0041f0f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e47b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x4e4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00468e60(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f150 @ 0041f150 ////

undefined4 * __fastcall FUN_0041f150(undefined4 *param_1)

{
  FUN_004af1d0(param_1);
  *param_1 = &PTR_FUN_00d17b04;
  param_1[0xe] = &PTR_LAB_00d17ae0;
  return param_1;
}


//// FUNCTION FUN_0041f170 @ 0041f170 ////

undefined4 * FUN_0041f170(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e49b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x428);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CProject_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION CGenre_CreateInstance @ 0041f1d0 ////

undefined4 * CGenre_CreateInstance(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e4bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x10c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CGenre_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f230 @ 0041f230 ////

undefined4 * FUN_0041f230(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e4db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x550);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CFacilityScriptOffice_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f290 @ 0041f290 ////

undefined4 * FUN_0041f290(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e4fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x56c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0084c9a0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f2f0 @ 0041f2f0 ////

undefined4 * FUN_0041f2f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e51b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x624);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004d1cf0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f350 @ 0041f350 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_0041f350(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined1 *)(param_1 + 2) = 0xff;
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  *(undefined1 *)((int)param_1 + 10) = 0xff;
  *(undefined1 *)((int)param_1 + 0xb) = 0xff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  puVar3 = param_1;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  fVar1 = (float)_DAT_0105c40c;
  param_1[4] = (float)_DAT_0105c408;
  param_1[6] = 0;
  param_1[5] = fVar1;
  fVar1 = (float)DAT_0105c3fc;
  param_1[7] = (float)DAT_0105c3f8 + (float)param_1[4];
  param_1[2] = 0xffffffff;
  param_1[8] = fVar1 + (float)param_1[5];
  param_1[9] = 0;
  param_1[0xd] = 0x3f800000;
  param_1[0xc] = 0x3f800000;
  return param_1;
}


//// FUNCTION FUN_0041f3f0 @ 0041f3f0 ////

undefined4 * FUN_0041f3f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e53b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3a0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004eb0b0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f450 @ 0041f450 ////

undefined4 * FUN_0041f450(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e55b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004aa420(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f4b0 @ 0041f4b0 ////

undefined4 * __fastcall FUN_0041f4b0(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d17bac;
  param_1[0x1e] = &PTR_LAB_00d17b88;
  param_1[0x28] = &PTR_LAB_00d17b70;
  return param_1;
}


//// FUNCTION CStudioAI_CreateGlobalInstance @ 0041f4e0 ////

undefined4 * CStudioAI_CreateGlobalInstance(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e57b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2f8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CStudioAI_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f540 @ 0041f540 ////

undefined4 * FUN_0041f540(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e59b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2b8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0051c080(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f5a0 @ 0041f5a0 ////

undefined4 * FUN_0041f5a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e5bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x8c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00464cd0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f600 @ 0041f600 ////

undefined4 * FUN_0041f600(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e5db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x2a4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005d3ba0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f660 @ 0041f660 ////

undefined4 * FUN_0041f660(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e5fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x198);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005a5d60(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f6c0 @ 0041f6c0 ////

int * FUN_0041f6c0(void)

{
  int *piVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e61b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0xacc);
  piVar2 = (int *)0x0;
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = FUN_00570a70(piVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(piVar2[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return piVar2;
}


//// FUNCTION FUN_0041f720 @ 0041f720 ////

undefined4 * FUN_0041f720(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e63b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0045cb70(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f780 @ 0041f780 ////

undefined4 * FUN_0041f780(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e65b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0045cf20(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f7e0 @ 0041f7e0 ////

undefined4 * FUN_0041f7e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e67b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005cbbd0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f840 @ 0041f840 ////

undefined4 * FUN_0041f840(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e69b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = AwardBonusSystem_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f8a0 @ 0041f8a0 ////

undefined4 * FUN_0041f8a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e6bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005aaa20(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f900 @ 0041f900 ////

undefined4 * FUN_0041f900(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e6db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005aadf0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f960 @ 0041f960 ////

undefined4 * FUN_0041f960(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e6fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xe0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005af730(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041f9c0 @ 0041f9c0 ////

undefined4 * FUN_0041f9c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e71b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xc0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005b07f0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041fa20 @ 0041fa20 ////

undefined4 * FUN_0041fa20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e73b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xb4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_005b0ca0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x14] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041fa80 @ 0041fa80 ////

undefined4 * FUN_0041fa80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e75b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xc0);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0054dc10(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041faf0 @ 0041faf0 ////

undefined4 * __fastcall FUN_0041faf0(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d17db4;
  param_1[0x1e] = &PTR_LAB_00d17d94;
  param_1[0x28] = &PTR_LAB_00d17d7c;
  return param_1;
}


//// FUNCTION FUN_0041fb20 @ 0041fb20 ////

undefined4 * FUN_0041fb20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e77b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x28c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = CHospitalRoom_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041fb80 @ 0041fb80 ////

void __fastcall FUN_0041fb80(int param_1)

{
  void *this;
  int iVar1;
  byte bVar2;
  
  DAT_0104a982 = 0;
  if (*(char *)(param_1 + 0x86) != '\0') {
    bVar2 = 1;
    iVar1 = 2;
    *(undefined1 *)(param_1 + 0x86) = 0;
    this = (void *)FUN_004f3b20();
    FUN_004f9b70(this,iVar1,param_1,bVar2);
    FUN_00843f10();
    FUN_008b8750();
    FUN_0045e9a0();
    FUN_004bf210();
    FUN_0042aa80();
    FUN_0043feb0();
    FUN_0045d3d0();
    thunk_FUN_005ceaa0();
    FUN_005208f0();
    FUN_0085c3f0();
    FUN_00853910();
    FUN_004a2fa0();
    FUN_004467e0();
    thunk_FUN_009cbd00();
    FUN_004685f0();
    FUN_00453450();
    FUN_0044e030();
    FUN_0045f150();
    FUN_00858e30();
    FUN_0054b0e0();
    FUN_005732b0();
    FUN_008bbc30();
    FUN_00442ca0();
    FUN_004639d0();
    FUN_004a6b00();
    FUN_00954600();
    FUN_004ec7b0();
    FUN_006425d0();
    FUN_00513890();
    FUN_0051ff60();
    FUN_005416c0();
    FUN_0057b310();
    FUN_005b3cb0();
    FUN_00797400();
    FUN_004aaf20();
    return;
  }
  return;
}


//// FUNCTION FUN_0041fc70 @ 0041fc70 ////

void * __thiscall FUN_0041fc70(void *this,byte param_1)

{
  FUN_005e5ef0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0041fc90 @ 0041fc90 ////

void FUN_0041fc90(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  FUN_005550b0();
  uVar1 = FUN_00544030((int)DAT_0104c8f4);
  if ((char)uVar1 != '\0') {
    FUN_00554680();
  }
  (**(code **)(*DAT_0104c8f4 + 4))();
  FUN_009abae0(&DAT_0104cce0);
  DAT_0105c430 = DAT_0104cce0;
  DAT_0105c434 = DAT_0104cce4;
  FUN_00566c00(DAT_0104cdf4);
  uVar2 = FUN_00acd42c();
  FUN_00972090((int)uVar2);
  FUN_0053d560();
  FUN_00746770();
  (**(code **)(*DAT_0105cbec + 8))();
                    /* WARNING: Could not recover jumptable at 0x0041fd15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0105cc64 + 8))();
  return;
}


//// FUNCTION FUN_0041fd40 @ 0041fd40 ////

void __thiscall FUN_0041fd40(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0xc6) = param_1;
  return;
}


//// FUNCTION FUN_0041fd50 @ 0041fd50 ////

undefined1 __fastcall FUN_0041fd50(int param_1)

{
  return *(undefined1 *)(param_1 + 0xc6);
}


//// FUNCTION FUN_0041fd60 @ 0041fd60 ////

void __thiscall FUN_0041fd60(void *this,float param_1)

{
  float fVar1;
  
  DAT_00f87b0c = DAT_00f87b0c + DAT_0105becc;
  if (DAT_00f87b0c < 0x3e9) {
    DAT_00f87b0c = 0;
    FUN_009a56b0(0,'\x01');
    FUN_009a4f10();
    BuildAndDrawPrimitive(*(int *)((int)this + 0xc0));
    fVar1 = DAT_00f87b08;
    if ((param_1 < 0.0 == (param_1 == 0.0)) && (fVar1 = param_1, DAT_0104a981 != '\0')) {
      fVar1 = param_1 * 0.5;
    }
    FUN_005e5cd0(*(void **)((int)this + 0xbc),fVar1,'\x01');
    FUN_009a4fb0();
    thunk_FUN_009a6360();
    DAT_00f87b08 = DAT_00f87b08 + 0.021;
  }
  return;
}


//// FUNCTION FUN_0041fe20 @ 0041fe20 ////

undefined4 * FUN_0041fe20(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e79b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00839c70(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0041ff20 @ 0041ff20 ////

void __fastcall FUN_0041ff20(int param_1)

{
  undefined4 extraout_ECX;
  
  if (*(char *)(param_1 + 0x86) != '\0') {
    FUN_0041fb80(param_1);
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  FUN_0086e150();
  FUN_007505d0();
  FUN_008b2cf0();
  FUN_00490a30();
  FUN_005f0620();
  FUN_004fcf60();
  FUN_005e0170();
  FUN_00507590();
  FUN_005061e0();
  FUN_005eba80();
  FUN_004af530();
  FUN_0045d550();
  FUN_0078a880();
  FUN_00493960();
  FUN_00598b70();
  FUN_0059ee10();
  FUN_0048c7f0();
  FUN_004639d0();
  FUN_00432a80();
  FUN_004b2710();
  FUN_00989660();
  FUN_0084b100();
  FUN_004efa20();
  FUN_0063d4d0();
  FUN_004a6b00();
  FUN_0040bcd0();
  FUN_00479270();
  FUN_004fedb0();
  FUN_0051c320();
  FUN_0094f880();
  FUN_00471c00();
  FUN_00587b80();
  FUN_004499a0();
  FUN_004eeb50();
  FUN_00543500();
  FUN_00525d90();
  FUN_006a35b0();
  FUN_00415520();
  FUN_005b3d10();
  thunk_FUN_00a0a980();
  FUN_009ae900();
  FUN_009b3f70();
  FUN_004467e0();
  FUN_004b4a70();
  FUN_005554c0();
  FUN_0044afc0(extraout_ECX);
  FUN_008b8f40();
  thunk_FUN_005c4fe0();
  FUN_00566c30();
  FUN_004f3ab0();
  FUN_008382d0();
  FUN_0095f880();
  FUN_00960300();
  FUN_0095e0b0();
  FUN_0095eeb0();
  FUN_0095cf40();
  FUN_0095d860();
  FUN_00959830();
  FUN_0043feb0();
  thunk_FUN_006dd0a0();
  FUN_00528660();
  FUN_0053c3e0();
  FUN_0091d2f0();
  FUN_008d3c70();
  FUN_0046fd20();
  FUN_0043bb60();
  FUN_0045e9a0();
  FUN_0042aa80();
  FUN_008ba1c0();
  FUN_0085dc70();
  FUN_004effa0();
  FUN_0045f150();
  FUN_00858e30();
  FUN_005732b0();
  FUN_005561e0();
  FUN_005effa0();
  FUN_0048f5b0();
  FUN_005ef9e0();
  FUN_0053df80();
  FUN_007973a0();
  FUN_009897a0();
  *(undefined1 *)(param_1 + 0xc4) = 0;
  return;
}


//// FUNCTION Game_TickState0_Transition @ 00420170 ////

void __thiscall Game_TickState0_Transition(void *this,uint param_1)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  
  if (((char)param_1 != *(char *)((int)this + 9)) && (*(char *)((int)this + 10) == '\0')) {
    uVar2 = 0;
    iVar1 = 2;
    *(char *)((int)this + 9) = (char)param_1;
    this_00 = (void *)FUN_004f3b20();
    FUN_004f9190(this_00,iVar1,param_1,uVar2);
  }
  return;
}


//// FUNCTION FUN_004201a0 @ 004201a0 ////

void __thiscall FUN_004201a0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 199) = param_1;
  return;
}


//// FUNCTION FUN_004201b0 @ 004201b0 ////

undefined1 __fastcall FUN_004201b0(int param_1)

{
  return *(undefined1 *)(param_1 + 199);
}


//// FUNCTION FUN_00420230 @ 00420230 ////

void __fastcall FUN_00420230(int param_1)

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


//// FUNCTION FUN_004202b0 @ 004202b0 ////

undefined4 * __thiscall FUN_004202b0(void *this,int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  if (param_2 < (uint)param_1[1]) {
    uVar1 = param_1[1] - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    FUN_004036d0(this,(wchar_t *)(*param_1 + param_2 * 2),param_3);
  }
  return this;
}


//// FUNCTION FUN_00420300 @ 00420300 ////

int __thiscall FUN_00420300(void *this,short *param_1,uint param_2,int param_3)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  
  if ((param_3 != 0) && (uVar1 = *(uint *)((int)this + 4), uVar1 != 0)) {
    psVar2 = *(short **)this;
    if (param_2 < uVar1) {
      psVar3 = psVar2 + param_2;
    }
    else {
      psVar3 = psVar2 + (uVar1 - 1);
    }
    while( true ) {
      psVar4 = param_1;
      iVar5 = param_3;
      do {
        if (*psVar4 == *psVar3) {
          return (int)psVar3 - (int)psVar2 >> 1;
        }
        psVar4 = psVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (psVar3 == psVar2) break;
      psVar3 = psVar3 + -1;
    }
  }
  return -1;
}


//// FUNCTION FUN_00420390 @ 00420390 ////

int __fastcall FUN_00420390(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc;
}


//// FUNCTION FUN_00420560 @ 00420560 ////

void __thiscall FUN_00420560(void *this,int param_1)

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


//// FUNCTION FUN_004205c0 @ 004205c0 ////

void __cdecl FUN_004205c0(int param_1)

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


//// FUNCTION FUN_004205e0 @ 004205e0 ////

void __cdecl FUN_004205e0(int *param_1)

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


//// FUNCTION FUN_00420600 @ 00420600 ////

void __thiscall FUN_00420600(void *this,int *param_1)

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


//// FUNCTION FUN_00420690 @ 00420690 ////

void __fastcall FUN_00420690(int *param_1)

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


//// FUNCTION FUN_00420700 @ 00420700 ////

void __cdecl FUN_00420700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


//// FUNCTION FUN_004207c0 @ 004207c0 ////

void __fastcall FUN_004207c0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_004207e0 @ 004207e0 ////

void __cdecl FUN_004207e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004208c0 @ 004208c0 ////

undefined4 * FUN_004208c0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e7bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d1758c;
    puVar1[0x1e] = &PTR_LAB_00d1756c;
    puVar1[0x28] = &PTR_LAB_00d17554;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420940 @ 00420940 ////

int * __thiscall FUN_00420940(void *this,byte param_1)

{
  thunk_FUN_008469b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420970 @ 00420970 ////

undefined4 * FUN_00420970(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e7db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17794;
    puVar1[0x1e] = &PTR_LAB_00d17774;
    puVar1[0x28] = &PTR_LAB_00d1775c;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_004209f0 @ 004209f0 ////

int * __thiscall FUN_004209f0(void *this,byte param_1)

{
  thunk_FUN_008469b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420a20 @ 00420a20 ////

undefined4 * FUN_00420a20(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e7fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    TMRoom_Constructor(puVar1);
    *puVar1 = &PTR_FUN_00d17984;
    puVar1[0x19] = &PTR_LAB_00d17964;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420aa0 @ 00420aa0 ////

undefined4 * __thiscall FUN_00420aa0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420ad0 @ 00420ad0 ////

undefined4 * FUN_00420ad0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e81b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(600);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    TMRoom_Constructor(puVar1);
    *puVar1 = &PTR_FUN_00d17a44;
    puVar1[0x19] = &PTR_LAB_00d17a20;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420b50 @ 00420b50 ////

undefined4 * __thiscall FUN_00420b50(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420b80 @ 00420b80 ////

undefined4 * __fastcall FUN_00420b80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d17fa8;
  param_1[0x19] = &PTR_LAB_00d17f88;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00420c30 @ 00420c30 ////

undefined4 * __thiscall FUN_00420c30(void *this,byte param_1)

{
  FUN_00420c50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420c50 @ 00420c50 ////

void __fastcall FUN_00420c50(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9e858;
  pvStack_c = ExceptionList;
  puVar1 = (undefined4 *)0x0;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x19;
  }
  ExceptionList = &pvStack_c;
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00420cb0 @ 00420cb0 ////

undefined4 * FUN_00420cb0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e87b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xd0);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_004af1d0(puVar1);
    *puVar1 = &PTR_FUN_00d17b04;
    puVar1[0xe] = &PTR_LAB_00d17ae0;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420d30 @ 00420d30 ////

undefined4 * __thiscall FUN_00420d30(void *this,byte param_1)

{
  thunk_FUN_004af230(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420d80 @ 00420d80 ////

undefined4 * FUN_00420d80(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e89b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17bac;
    puVar1[0x1e] = &PTR_LAB_00d17b88;
    puVar1[0x28] = &PTR_LAB_00d17b70;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420e00 @ 00420e00 ////

int * __thiscall FUN_00420e00(void *this,byte param_1)

{
  thunk_FUN_008469b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420e30 @ 00420e30 ////

undefined4 * FUN_00420e30(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e8bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x504);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d17db4;
    puVar1[0x1e] = &PTR_LAB_00d17d94;
    puVar1[0x28] = &PTR_LAB_00d17d7c;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00420eb0 @ 00420eb0 ////

int * __thiscall FUN_00420eb0(void *this,byte param_1)

{
  thunk_FUN_008469b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00420ee0 @ 00420ee0 ////

/* WARNING: Removing unreachable block (ram,0x00420f0f) */

void __thiscall FUN_00420ee0(void *this,undefined4 *param_1,float *param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  void *this_00;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e8e6;
  local_c = ExceptionList;
  fVar2 = *param_2;
  fVar3 = *param_2;
  ExceptionList = &local_c;
  pvVar5 = operator_new(0x70);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    pfVar6 = (float *)0x0;
  }
  else {
    pfVar6 = FUN_005e6b20(pvVar5,fVar2 - 256.0,fVar3 + 256.0,param_2[1]);
  }
  *(float **)((int)this + 0xbc) = pfVar6;
  local_4 = 0xffffffff;
  pvVar5 = FUN_0099bb50((char *)*param_1,0,0,0,'\0');
  puVar7 = operator_new(0x3c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = FUN_0041f350(puVar7);
  }
  *(undefined4 **)((int)this + 0xc0) = puVar7;
  puVar7 = operator_new(0x24);
  local_4 = 1;
  if (puVar7 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_009910f0(puVar7);
  }
  *(undefined4 *)(*(int *)((int)this + 0xc0) + 4) = uVar8;
  this_00 = *(void **)(*(int *)((int)this + 0xc0) + 4);
  local_4 = 0xffffffff;
  if (*(void **)((int)this_00 + 0x18) != pvVar5) {
    Engine_SetResourceReference(this_00,(int)pvVar5);
  }
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0xc0) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xc0) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  iVar4 = *(int *)(*(int *)((int)this + 0xc0) + 4);
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0x7fffffff;
  *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x10) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x14) = 0;
  *(float *)(*(int *)((int)this + 0xc0) + 0x1c) = (float)DAT_00e67b84;
  *(float *)(*(int *)((int)this + 0xc0) + 0x20) = (float)DAT_00e67b88;
  *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x18) = 0x3f800000;
  *(undefined4 *)(*(int *)((int)this + 0xc0) + 0x24) = 0x3f800000;
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00421090 @ 00421090 ////

void __fastcall FUN_00421090(int param_1)

{
  void *_Memory;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    return;
  }
  _Memory = *(void **)(*(int *)(param_1 + 0xc0) + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0xc0));
}


//// FUNCTION FUN_00421110 @ 00421110 ////

void __fastcall FUN_00421110(int param_1)

{
  int iVar1;
  int *_Memory;
  
  FUN_0041ff20(param_1);
  _Memory = DAT_00f885c0;
  if (DAT_00f885c0 != (int *)0x0) {
    iVar1 = DAT_00f885c0[1];
    DAT_00f885c0[1] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_009a7db0(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    DAT_00f885c0 = (int *)0x0;
  }
  thunk_FUN_009d10f0();
  FUN_008741d0();
  thunk_FUN_00552d40();
  FUN_00447d20();
  return;
}


//// FUNCTION FUN_004211a0 @ 004211a0 ////

void * __thiscall FUN_004211a0(void *this,undefined4 *param_1)

{
  FUN_004073f0(this,(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_004211c0 @ 004211c0 ////

undefined4 * __thiscall FUN_004211c0(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 10;
  if (param_2 < *(uint *)((int)this + 4)) {
    uVar1 = *(uint *)((int)this + 4) - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    FUN_004036d0(param_1,(wchar_t *)(*(int *)this + param_2 * 2),param_3);
  }
  return param_1;
}


//// FUNCTION FUN_00421210 @ 00421210 ////

void __thiscall FUN_00421210(void *this,short *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00ace02d(param_1);
  FUN_00420300(this,param_1,param_2,iVar1);
  return;
}


//// FUNCTION FUN_00421240 @ 00421240 ////

undefined4 * __thiscall FUN_00421240(void *this,wchar_t *param_1,uint param_2)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  if (param_2 == 0xffffffff) {
    param_2 = FUN_00ace02d(param_1);
  }
  FUN_004036d0(this,param_1,param_2);
  return this;
}


//// FUNCTION FUN_00421290 @ 00421290 ////

undefined4 * __thiscall FUN_00421290(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_004212f0 @ 004212f0 ////

void __fastcall FUN_004212f0(int param_1)

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


//// FUNCTION FUN_00421320 @ 00421320 ////

void __fastcall FUN_00421320(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d17fc8;
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


//// FUNCTION FUN_00421510 @ 00421510 ////

int * __fastcall FUN_00421510(int *param_1)

{
  FUN_00420690(param_1);
  return param_1;
}


//// FUNCTION FUN_00421540 @ 00421540 ////

void __fastcall FUN_00421540(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00421590 @ 00421590 ////

void __cdecl FUN_00421590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00421610 @ 00421610 ////

undefined4 * __fastcall FUN_00421610(undefined4 *param_1)

{
  FUN_00847f00(param_1);
  *param_1 = &PTR_FUN_00d1801c;
  param_1[0x1e] = &PTR_LAB_00d17ffc;
  param_1[0x28] = &PTR_LAB_00d17fe4;
  param_1[0x144] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = param_1 + 0x141;
  param_1[0x141] = &PTR_FUN_00d17fc8;
  param_1[0x146] = 0;
  return param_1;
}


//// FUNCTION FUN_00421650 @ 00421650 ////

int * __thiscall FUN_00421650(void *this,byte param_1)

{
  FUN_00848590(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004216a0 @ 004216a0 ////

undefined4 * FUN_004216a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e8fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00420b80(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x19] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_00421700 @ 00421700 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00421700(void)

{
  uint uVar1;
  wchar_t local_200 [256];
  
  if ((DAT_00f87b30 & 1) == 0) {
    DAT_00f87b30 = DAT_00f87b30 | 1;
    DAT_00f87b10 = &DAT_00f87b1c;
    _DAT_00f87b1c = 0;
    DAT_00f87b14 = 0;
    DAT_00f87b18 = 10;
    _atexit(FUN_00d10be0);
  }
  if (DAT_00f87b14 == 0) {
    _swprintf(local_200,0xd181e8,DAT_00e52b04,L"12:25:19",L"Apr 27 2006");
    uVar1 = FUN_00ace02d(local_200);
    FUN_004036d0(&DAT_00f87b10,local_200,uVar1);
  }
  return &DAT_00f87b10;
}


//// FUNCTION FUN_004217b0 @ 004217b0 ////

undefined4 * __thiscall FUN_004217b0(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x234),*(uint *)((int)this + 0x238));
  return param_1;
}


//// FUNCTION FUN_00421a70 @ 00421a70 ////

void __thiscall FUN_00421a70(void *this,byte *param_1)

{
  byte bVar1;
  char cVar2;
  char *_Dest;
  byte *pbVar3;
  uint _Count;
  uint local_7c;
  char local_78 [20];
  byte local_64 [100];
  
  cVar2 = FUN_00567860(param_1,(byte *)"reenter",local_64,100);
  if (cVar2 != '\0') {
    *(undefined1 *)((int)this + 0x84) = 1;
  }
  cVar2 = FUN_00567860(param_1,(byte *)"editor",local_64,100);
  if (cVar2 != '\0') {
    *(undefined1 *)((int)this + 0x85) = 1;
  }
  cVar2 = FUN_00567860(param_1,(byte *)0xd18220,local_64,100);
  if (cVar2 != '\0') {
    *(undefined1 *)((int)this + 200) = 1;
    _Dest = local_78;
    pbVar3 = local_64;
    local_78[0] = '\0';
    local_7c = 0x14;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    _Count = (int)pbVar3 - (int)(local_64 + 1);
    if (0x13 < _Count) {
      local_7c = _Count + 0x20 & 0xffffffe0;
      _Dest = _malloc(local_7c);
    }
    _strncpy(_Dest,(char *)local_64,_Count);
    _Dest[_Count] = '\0';
    FUN_004015d0(&PTR_DAT_00e57b40,_Dest,_Count);
    if (0x14 < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free(_Dest);
    }
  }
  return;
}


//// FUNCTION FUN_00421b80 @ 00421b80 ////

undefined4 * __cdecl FUN_00421b80(undefined4 *param_1)

{
  int *piVar1;
  void *this;
  undefined **ppuVar2;
  undefined4 *puVar3;
  int iVar4;
  TypeDescriptor *pTVar5;
  TypeDescriptor *pTVar6;
  int iVar7;
  wchar_t *local_6c;
  uint local_68;
  uint local_64;
  wchar_t local_60 [10];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9e940;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = L'\0';
  local_68 = 0;
  local_64 = 10;
  iVar7 = 0;
  pTVar6 = &TM::CStudioPlayer::RTTI_Type_Descriptor;
  pTVar5 = &TM::CStudio::RTTI_Type_Descriptor;
  iVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  piVar1 = (int *)GetPlayerStudio();
  this = (void *)FUN_00ace790(piVar1,iVar4,pTVar5,pTVar6,iVar7);
  if (DAT_0104dd1c == 0) {
    if (DAT_0104dcf8 != '\0') {
      FUN_004036d0(&local_6c,(wchar_t *)PTR_DAT_00e57d4c,DAT_00e57d50);
      goto LAB_00421cea;
    }
    if (this != (void *)0x0) {
      puVar3 = FUN_004217b0(this,local_2c);
      FUN_004036d0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
      if (local_24 < 0xb) goto LAB_00421cea;
      goto LAB_00421ce2;
    }
  }
  ppuVar2 = FUN_009bfc90();
  FUN_004036d0(&local_6c,(wchar_t *)*ppuVar2,(uint)ppuVar2[1]);
  if (local_68 == 0) {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x40;
    local_4c = _malloc(0x40);
    _strncpy(local_4c,"PROFILESCREEN_DIALOGUE_DEFAULTFIRSTNAME",0x27);
    local_48 = 0x27;
    local_4c[0x27] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = FUN_009b5030(local_2c,&local_4c);
    FUN_004036d0(&local_6c,(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_2c[0] = local_4c;
    if (0x14 < local_44) {
LAB_00421ce2:
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
LAB_00421cea:
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_6c,local_68);
  if (local_64 < 0xb) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_6c);
}


//// FUNCTION FUN_00421d40 @ 00421d40 ////

undefined4 * __cdecl FUN_00421d40(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  wchar_t *local_40;
  uint local_3c;
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  FUN_00421b80(&local_40);
  iVar1 = FUN_00ace02d((short *)&PTR_LAB_00d18274);
  iVar1 = FUN_00420300(&local_40,(short *)&PTR_LAB_00d18274,0xffffffff,iVar1);
  if (iVar1 != -1) {
    puVar2 = FUN_004211c0(&local_40,local_20,iVar1 + 1,0xffffffff);
    FUN_004036d0(&local_40,(wchar_t *)*puVar2,puVar2[1]);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
  }
  if (local_3c == 0) {
    uVar3 = FUN_00ace02d(L"default");
    FUN_004036d0(&local_40,L"default",uVar3);
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,local_40,local_3c);
  if (10 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  return param_1;
}


//// FUNCTION FUN_004220b0 @ 004220b0 ////

void FUN_004220b0(void)

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


//// FUNCTION FUN_00422100 @ 00422100 ////

int * __fastcall FUN_00422100(int *param_1)

{
  FUN_00420690(param_1);
  return param_1;
}


//// FUNCTION FUN_00422110 @ 00422110 ////

void * __thiscall FUN_00422110(void *this,byte param_1)

{
  FUN_00421540((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00422140 @ 00422140 ////

void __cdecl FUN_00422140(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004221b0 @ 004221b0 ////

undefined4 * FUN_004221b0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e98b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x51c);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00847f00(puVar1);
    *puVar1 = &PTR_FUN_00d1801c;
    puVar1[0x1e] = &PTR_LAB_00d17ffc;
    puVar1[0x28] = &PTR_LAB_00d17fe4;
    puVar1[0x144] = 0;
    puVar1[0x142] = 0;
    puVar1[0x143] = 0;
    puVar1[0x144] = puVar1 + 0x141;
    puVar1[0x141] = &PTR_FUN_00d17fc8;
    puVar1[0x146] = 0;
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar1[0x1e] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00422250 @ 00422250 ////

void __fastcall FUN_00422250(int param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  HANDLE pvVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  wchar_t *_Format;
  LPCWSTR local_2a8 [2];
  uint local_2a0;
  wchar_t local_288 [16];
  void *local_268 [2];
  uint local_260;
  void *local_248 [2];
  uint local_240;
  uint local_228 [2];
  wchar_t awStack_220 [6];
  short local_214 [260];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e9ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_00421d40(local_248);
  FUN_004036d0(&PTR_DAT_00e544d4,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_240) {
                    /* WARNING: Subroutine does not return */
    _free(local_248[0]);
  }
  _Format = (wchar_t *)0x0;
  FUN_00754790(local_2a8);
  local_4 = 0;
  FUN_0040cae0(local_2a8,(wchar_t *)PTR_DAT_00e544d4,DAT_00e544d8);
  sVar2 = FUN_00ace02d((short *)&DAT_00d18358);
  FUN_0040cae0(local_2a8,L"*",sVar2);
  pvVar3 = __wfindfirst(local_2a8[0],local_228);
  if (pvVar3 != (HANDLE)0xffffffff) {
    uVar4 = FUN_00ace02d(local_214);
    if (6 < uVar4) {
      iVar5 = FUN_00ace02d(local_214);
      lVar6 = __wtol(awStack_220 + iVar5);
      if (0 < (int)(lVar6 + 1)) {
        _Format = (wchar_t *)(lVar6 + 1);
      }
    }
    iVar5 = __wfindnext(pvVar3,local_228);
    while (iVar5 == 0) {
      uVar4 = FUN_00ace02d(local_214);
      if (6 < uVar4) {
        iVar5 = FUN_00ace02d(local_214);
        lVar6 = __wtol(awStack_220 + iVar5);
        if ((int)_Format < (int)(lVar6 + 1)) {
          _Format = (wchar_t *)(lVar6 + 1);
        }
      }
      iVar5 = __wfindnext(pvVar3,local_228);
    }
    FUN_00acee8d(pvVar3);
  }
  _swprintf(local_288,0xd1834c,_Format);
  sVar2 = FUN_00ace02d(local_288);
  FUN_0040cae0(&PTR_DAT_00e544d4,local_288,sVar2);
  puVar1 = FUN_00754790(local_268);
  FUN_004036d0(local_2a8,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_260) {
                    /* WARNING: Subroutine does not return */
    _free(local_268[0]);
  }
  FUN_0040cae0(local_2a8,(wchar_t *)PTR_DAT_00e544d4,DAT_00e544d8);
  sVar2 = FUN_00ace02d(L"/test");
  FUN_0040cae0(local_2a8,L"/test",sVar2);
  FUN_00418990(DAT_00f87aa0);
  *(undefined1 *)(param_1 + 0xc5) = 1;
  if (10 < local_2a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_2a8[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004224b0 @ 004224b0 ////

void __fastcall FUN_004224b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004220b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00422580 @ 00422580 ////

undefined4 * FUN_00422580(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *_Str;
  char *local_a0;
  uint local_9c;
  uint local_98;
  char local_94 [20];
  char *local_80;
  size_t local_7c;
  uint local_78;
  char local_74 [20];
  undefined4 local_60 [18];
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9e9e7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009c89a0(local_60);
  local_4 = 1;
  FUN_009ca9d0(local_60,"*.dds","data\\textures\\ui\\loadingscreens\\",(undefined1 *)0x1);
  if ((local_18 == 0) || (iVar2 = local_14 - local_18 >> 2, iVar2 == 0)) {
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,"",0);
  }
  else {
    iVar2 = FUN_00990d30(0,iVar2);
    local_a0 = local_94;
    local_94[0] = '\0';
    local_9c = 0;
    local_98 = 0x14;
    _strncpy(local_a0,"ui\\loadingscreens",0x11);
    local_9c = 0x11;
    local_a0[0x11] = '\0';
    _Str = *(char **)(local_18 + iVar2 * 4);
    pcVar3 = _strrchr(_Str,0x5c);
    if (pcVar3 != (char *)0x0) {
      _Str = pcVar3 + 1;
    }
    local_80 = local_74;
    local_74[0] = '\0';
    local_7c = 0;
    local_78 = 0x14;
    pcVar3 = _Str;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_80,_Str,(int)pcVar3 - (int)(_Str + 1));
    FUN_004073f0(&local_a0,"\\",1);
    FUN_004073f0(&local_a0,local_80,local_7c);
    *param_1 = param_1 + 3;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_a0,local_9c);
    if (0x14 < local_78) {
                    /* WARNING: Subroutine does not return */
      _free(local_80);
    }
    if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
      _free(local_a0);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_009c8560(local_60);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00422750 @ 00422750 ////

void __thiscall FUN_00422750(void *this,undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  void *pvVar4;
  void *this_00;
  DWORD DVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ea18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00566c30();
  FUN_00566ce0();
  *(undefined4 *)this = 0;
  bVar10 = 1;
  iVar8 = 2;
  iVar9 = DAT_00f87b04;
  pvVar4 = (void *)FUN_004f3b20();
  FUN_004f98f0(pvVar4,iVar8,iVar9,bVar10);
  bVar10 = 0;
  iVar9 = 1;
  pvVar4 = this;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f98f0(this_00,iVar9,(int)pvVar4,bVar10);
  *(undefined1 *)(DAT_00f87b04 + 5) = 0;
  uVar3 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = 0;
  FUN_009abd80(1);
  local_4._0_1_ = 1;
  if (*(char *)((int)this + 0x86) != '\0') {
    FUN_0041fb80((int)this);
  }
  DVar5 = timeGetTime();
  FUN_00990b90(DVar5);
  puVar6 = FUN_00422580(&local_2c);
  FUN_004015d0((undefined4 *)((int)this + 0x8c),(char *)*puVar6,puVar6[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  pcVar2 = *(char **)((int)this + 0x8c);
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar7 = pcVar2;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_2c,pcVar2,(int)pcVar7 - (int)(pcVar2 + 1));
  local_4._0_1_ = 2;
  FUN_00420ee0(this,&local_2c,(float *)&DAT_00e551dc);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (DAT_0104a981 == '\0') {
    FUN_005e6af0(*(float **)((int)this + 0xbc));
  }
  FUN_0041fd60(this,0.1);
  FUN_00467d50();
  FUN_0041fd60(this,0.05);
  FUN_0053df90();
  FUN_00520230();
  FUN_004ade40();
  FUN_00957870();
  FinanceUI_Constructor();
  FUN_008bbb40(extraout_ECX);
  FUN_00461180();
  FUN_0044e5d0();
  FUN_0041fd60(this,0.15);
  GroundSystem_Constructor();
  FUN_0041fd60(this,0.2);
  FUN_00469c50();
  FUN_00543420();
  FUN_0041fd60(this,0.25);
  LitterScatter_Constructor();
  CLot_LoadPerimeterAssets(DAT_00f890c0);
  FUN_0041fd60(this,0.3);
  FUN_00519690();
  FUN_0041fd60(this,0.35);
  FUN_00446880();
  FUN_008568a0();
  FUN_0041fd60(this,0.4);
  ResearchSystem_Constructor();
  FUN_0041fd60(this,0.45);
  FUN_0085f160();
  AudienceTaste_Constructor();
  FUN_005ce440();
  FUN_0041fd60(this,0.5);
  GameSession_InitEconomySystems();
  FUN_0041fd60(this,0.55);
  FUN_004404b0();
  FUN_0041fd60(this,0.6);
  FUN_0042d8d0();
  FUN_0041fd60(this,0.65);
  FUN_00859da0();
  FUN_0054dd00();
  FUN_00575150();
  FUN_0041fd60(this,0.7);
  FUN_004c99a0();
  FUN_0045ea70();
  FUN_0041fd60(this,0.75);
  FUN_004aa500();
  FUN_0041fd60(this,0.8);
  FUN_008b86a0();
  FUN_005a1b90();
  FUN_0041fd60(this,0.85);
  FUN_009cbdf0();
  iVar9 = GlobalStatRegistry_Get();
  FUN_008d23b0(iVar9);
  FUN_0041fd60(this,0.9);
  thunk_FUN_007bd250();
  FUN_008443f0();
  FUN_006a7f20();
  FUN_0064b230();
  FUN_004ec0b0();
  FUN_0041fd60(this,0.94);
  if (param_1[1] != 0) {
    FUN_0046a780(param_1);
  }
  FUN_005434e0();
  FUN_005434e0();
  *(undefined1 *)((int)this + 0x86) = 1;
  FUN_0041fd60(this,0.98);
  if (DAT_0104dcf0 != 0) {
    *(undefined1 *)(DAT_0104dcf0 + 0x424) = 0;
  }
  *(undefined1 *)((int)this + 199) = 0;
  FUN_00566c20(DAT_0104cdf4,0x3f800000);
  FUN_00414d50(DAT_00f87aa0);
  DAT_0104a982 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_009abd80(-1);
  DAT_0105cc5c = uVar3;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Game_TickActiveGameplay @ 00422b00 ////

void __fastcall Game_TickActiveGameplay(int gameState)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_EDX;
  
  *(undefined1 *)(gameState + 7) = 0;
  FUN_009a1570();
  iVar2 = FUN_0071b2a0();
  FUN_0053c820(iVar2 + 0x50);
  FUN_0053c820(DAT_00f87aa0 + 100);
  FUN_0043b8c0((float *)&DAT_00e4fa4c);
  Campaign_AdvanceYearIfDecadeElapsed();
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_00554680();
  }
  SimObjectQueue_TickPending();
  piVar4 = (int *)FUN_005ef380();
  (**(code **)(*piVar4 + 0xc))();
  FUN_00746710();
  if ((*(byte *)(gameState + 0x88) & 1) == 0) {
    iVar2 = GlobalStatRegistry_Get();
    FUN_008c88a0(iVar2);
    FUN_00525df0();
    if (*(int *)(gameState + 0xb0) != 0) {
      if (((*(int *)(gameState + 0xb4) - *(int *)(gameState + 0xb0)) / 0xc != 0) &&
         (pcVar1 = *(code **)(*(int *)(gameState + 0xb4) + -8), pcVar1 != (code *)0x0)) {
        (*pcVar1)();
      }
    }
    piVar4 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar4 + 0x28))();
    if (*(char *)(gameState + 0xc5) != '\0') {
      FUN_006a44f0();
      *(undefined1 *)(gameState + 0xc5) = 0;
    }
    if ((*(byte *)(gameState + 0x88) & 1) == 0) {
      if (DAT_00f885f4 != 0) {
        FUN_0053c820(DAT_00f885f4 + 0xa0);
      }
      uVar3 = FUN_00544030(DAT_0104c8f4);
      if ((char)uVar3 == '\0') {
        FUN_0053cc60();
      }
      FUN_00566bf0(DAT_0104cdf4);
      FUN_005474e0(0x104a994,extraout_EDX);
      FUN_004b3ae0();
      return;
    }
  }
  return;
}


//// FUNCTION Game_TickPaused @ 00422c30 ////

void __fastcall Game_TickPaused(int gameState)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
                    /* Named "Paused" by inference, not proof: this is structurally near-identical
                       to Game_TickActiveGameplay except it never calls
                       Campaign_AdvanceYearIfDecadeElapsed. Reached via Game_TickOneFrame's switch
                       case 3 specifically; the other 4 non-default cases (0,1,2,4,5) route to other
                       still-unnamed tick variants not yet traced. */
  *(undefined1 *)(gameState + 7) = 0;
  FUN_009a1570();
  iVar2 = FUN_0071b2a0();
  FUN_0053c820(iVar2 + 0x50);
  FUN_0043b8c0((float *)&DAT_00e4fa4c);
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_00554680();
  }
  SimObjectQueue_TickPending();
  FUN_00746710();
  piVar4 = (int *)FUN_005ef380();
  (**(code **)(*piVar4 + 0xc))();
  if ((*(byte *)(gameState + 0x88) & 1) == 0) {
    FUN_00525df0();
    if (*(int *)(gameState + 0xb0) != 0) {
      if (((*(int *)(gameState + 0xb4) - *(int *)(gameState + 0xb0)) / 0xc != 0) &&
         (pcVar1 = *(code **)(*(int *)(gameState + 0xb4) + -8), pcVar1 != (code *)0x0)) {
        (*pcVar1)();
      }
    }
    piVar4 = (int *)FUN_0071b2a0();
    (**(code **)(*piVar4 + 0x28))();
    if ((*(byte *)(gameState + 0x88) & 1) == 0) {
      if (DAT_00f885f4 != 0) {
        FUN_0053c820(DAT_00f885f4 + 0xa0);
      }
      uVar3 = FUN_00544030(DAT_0104c8f4);
      if ((char)uVar3 == '\0') {
        FUN_0053cc60();
      }
      FUN_00566bf0(DAT_0104cdf4);
      FUN_004b3ae0();
      return;
    }
  }
  return;
}


//// FUNCTION Game_TickState1 @ 00422d20 ////

void __fastcall Game_TickState1(int gameState)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = FUN_0071b2a0();
  FUN_0053c820(iVar2 + 0x50);
  FUN_0053c820(DAT_00f87aa0 + 100);
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_00554680();
  }
  FUN_0053c5b0();
  (**(code **)(*DAT_0104d82c + 0xc))();
  piVar4 = (int *)FUN_005ef380();
  (**(code **)(*piVar4 + 0xc))();
  FUN_00746710();
  FUN_00525df0();
  if ((((*(int *)(gameState + 0xb0) != 0) &&
       ((*(int *)(gameState + 0xb4) - *(int *)(gameState + 0xb0)) / 0xc != 0)) &&
      (pcVar1 = *(code **)(*(int *)(gameState + 0xb4) + -8), pcVar1 != (code *)0x0)) &&
     ((*pcVar1)(), (*(byte *)(gameState + 0x88) & 1) != 0)) {
    return;
  }
  piVar4 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar4 + 0x28))();
  if ((*(byte *)(gameState + 0x88) & 1) != 0) {
    return;
  }
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_0053cc60();
  }
  FUN_004b3ae0();
  return;
}


//// FUNCTION Game_TickState4 @ 00422e00 ////

void __fastcall Game_TickState4(int gameState)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_EDX;
  
  Game_TickState1(gameState);
  iVar2 = GlobalStatRegistry_Get();
  cVar1 = FUN_008c39b0(iVar2);
  if (cVar1 != '\0') {
    iVar2 = GlobalStatRegistry_Get();
    FUN_008c88a0(iVar2);
  }
  piVar3 = (int *)FUN_00450120();
  (**(code **)(*piVar3 + 0xc))();
  FUN_005474a0((float *)&DAT_0104a994,extraout_EDX);
  FUN_004b3ae0();
  return;
}


//// FUNCTION Game_TickState2 @ 00422e40 ////

void __fastcall Game_TickState2(int gameState,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_005474a0((float *)&DAT_0104a994,param_2);
  iVar3 = FUN_0071b2a0();
  FUN_0053c820(iVar3 + 0x50);
  uVar4 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar4 == '\0') {
    FUN_00554680();
  }
  FUN_00746710();
  FUN_00525df0();
  (**(code **)(*DAT_0104d82c + 0xc))();
  if ((((*(int *)(gameState + 0xb0) != 0) &&
       ((*(int *)(gameState + 0xb4) - *(int *)(gameState + 0xb0)) / 0xc != 0)) &&
      (pcVar1 = *(code **)(*(int *)(gameState + 0xb4) + -8), pcVar1 != (code *)0x0)) &&
     ((*pcVar1)(), (*(byte *)(gameState + 0x88) & 1) != 0)) {
    return;
  }
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0x28))();
  if (*(char *)(gameState + 0xc5) != '\0') {
    FUN_006a44f0();
    *(undefined1 *)(gameState + 0xc5) = 0;
  }
  if ((*(byte *)(gameState + 0x88) & 1) != 0) {
    return;
  }
  uVar4 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar4 == '\0') {
    FUN_0053cc60();
  }
  puVar2 = DAT_0104dafc;
  uVar6 = FUN_0068f280((int)DAT_0104dafc);
  if (((char)uVar6 != '\0') && (puVar2 != (undefined4 *)0x0)) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_004b3ae0();
  return;
}


//// FUNCTION Game_TickState5 @ 00422f40 ////

void __fastcall Game_TickState5(int gameState,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_005474a0((float *)&DAT_0104a994,param_2);
  iVar3 = FUN_0071b2a0();
  FUN_0053c820(iVar3 + 0x50);
  uVar4 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar4 == '\0') {
    FUN_00554680();
  }
  FUN_00746710();
  FUN_00525df0();
  (**(code **)(*DAT_0104d82c + 0xc))();
  if ((((*(int *)(gameState + 0xb0) != 0) &&
       ((*(int *)(gameState + 0xb4) - *(int *)(gameState + 0xb0)) / 0xc != 0)) &&
      (pcVar1 = *(code **)(*(int *)(gameState + 0xb4) + -8), pcVar1 != (code *)0x0)) &&
     ((*pcVar1)(), (*(byte *)(gameState + 0x88) & 1) != 0)) {
    return;
  }
  piVar5 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar5 + 0x28))();
  if (*(char *)(gameState + 0xc5) != '\0') {
    FUN_006a44f0();
    *(undefined1 *)(gameState + 0xc5) = 0;
  }
  if ((*(byte *)(gameState + 0x88) & 1) != 0) {
    return;
  }
  uVar4 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar4 == '\0') {
    FUN_0053cc60();
  }
  puVar2 = DAT_0104dcf0;
  uVar6 = FUN_006d7690((int)DAT_0104dcf0);
  if (((char)uVar6 != '\0') && (puVar2 != (undefined4 *)0x0)) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_004b3ae0();
  return;
}


//// FUNCTION FUN_00423040 @ 00423040 ////

void __fastcall FUN_00423040(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_0053ce80();
  }
  FUN_0041fc90();
  FUN_0043e9c0('\x01');
  thunk_FUN_00543440();
  FUN_009cc380();
  FUN_0053de00();
  (**(code **)(*DAT_0105cbec + 4))();
  FUN_0046bd60();
  if (*(int *)(param_1 + 0xb0) != 0) {
    if (((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0xb4) + -4), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
  }
  piVar4 = FUN_009cc3f0();
  if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
    (*(code *)DAT_00f885e0[1])();
    DAT_00f885f4 = 0;
    (*(code *)*DAT_00f885e0)();
    DAT_00f885c4 = false;
  }
  else {
    iVar2 = piVar4[1];
    (*(code *)DAT_00f885e0[1])();
    DAT_00f885f4 = iVar2;
    (*(code *)*DAT_00f885e0)();
    DAT_00f885c4 = DAT_0105d278 == 1;
  }
  thunk_FUN_009a1460();
  DAT_00e67b9e = 0;
  thunk_FUN_009a6360();
  return;
}


//// FUNCTION FUN_00423150 @ 00423150 ////

void __fastcall FUN_00423150(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar3 == '\0') {
    FUN_0053ce80();
  }
  FUN_0041fc90();
  FUN_0043e9c0('\x01');
  FUN_00723600();
  thunk_FUN_00543440();
  FUN_009cc380();
  (**(code **)(*DAT_0105cbec + 4))();
  FUN_0046bd60();
  if (*(int *)(param_1 + 0xb0) != 0) {
    if (((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0xb4) + -4), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
    }
  }
  thunk_FUN_009a1460();
  DAT_00e67b9e = 0;
  piVar4 = FUN_009cc3f0();
  if ((piVar4 != (int *)0x0) && (*piVar4 == 2)) {
    iVar2 = piVar4[1];
    (*(code *)DAT_00f885e0[1])();
    DAT_00f885f4 = iVar2;
    (*(code *)*DAT_00f885e0)();
    DAT_00f885c4 = DAT_0105d278 == 1;
    thunk_FUN_009a6360();
    return;
  }
  (*(code *)DAT_00f885e0[1])();
  DAT_00f885f4 = 0;
  (*(code *)*DAT_00f885e0)();
  DAT_00f885c4 = 0;
  thunk_FUN_009a6360();
  return;
}


//// FUNCTION FUN_00423260 @ 00423260 ////

void __fastcall FUN_00423260(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00544030(DAT_0104c8f4);
  if ((char)uVar2 == '\0') {
    FUN_0053ce80();
  }
  FUN_0041fc90();
  FUN_0043e9c0(DAT_0104e478 == 0);
  FUN_009cc380();
  if (((*(int *)(param_1 + 0xb0) != 0) &&
      ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc != 0)) &&
     (pcVar1 = *(code **)(*(int *)(param_1 + 0xb4) + -4), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  thunk_FUN_009a1460();
  DAT_00e67b9e = 0;
  FUN_009cc3f0();
  (*(code *)DAT_00f885e0[1])();
  DAT_00f885f4 = 0;
  (*(code *)*DAT_00f885e0)();
  DAT_00f885c4 = 0;
  thunk_FUN_009a6360();
  return;
}


//// FUNCTION FUN_00423320 @ 00423320 ////

undefined4 __fastcall FUN_00423320(int param_1)

{
  if (*(int *)(param_1 + 0xb0) != 0) {
    if ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc != 0) {
      return *(undefined4 *)(*(int *)(param_1 + 0xb4) + -0xc);
    }
  }
  return 6;
}


//// FUNCTION FUN_00423370 @ 00423370 ////

undefined4 __fastcall FUN_00423370(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  iVar1 = 0;
  if ((*(int *)(param_1 + 0xb0) != 0) &&
     (iVar1 = (*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc, iVar1 != 0)) {
    switch(*(undefined4 *)(*(int *)(param_1 + 0xb4) + -0xc)) {
    case 0:
    case 4:
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    case 1:
    case 2:
    case 3:
    case 5:
      uVar2 = 0;
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}


//// FUNCTION FUN_004233e0 @ 004233e0 ////

undefined4 __fastcall FUN_004233e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00423370(param_1);
  if ((((char)uVar1 != '\0') || ((DAT_0104d8d0 != '\0' && (DAT_0104daa0 == 0)))) &&
     (*(char *)(param_1 + 0xc6) == '\0')) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00423420 @ 00423420 ////

int __fastcall FUN_00423420(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004220b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00423460 @ 00423460 ////

void __fastcall FUN_00423460(int param_1)

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


//// FUNCTION FUN_00423490 @ 00423490 ////

undefined4 * FUN_00423490(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00422140(param_1,param_2,param_3);
  return param_1 + param_2 * 3;
}


//// FUNCTION FUN_004234d0 @ 004234d0 ////

undefined4 FUN_004234d0(void)

{
  if (*(int *)(DAT_00f87b04 + 0xb0) != 0) {
    if ((((*(int *)(DAT_00f87b04 + 0xb4) - *(int *)(DAT_00f87b04 + 0xb0)) / 0xc != 0) &&
        (*(int *)(*(int *)(DAT_00f87b04 + 0xb4) + -0xc) == 0)) &&
       (*(char *)(DAT_00f87b04 + 199) == '\0')) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION Game_TickOneFrame @ 00423530 ////

void __fastcall Game_TickOneFrame(int *gameState)

{
  void *pvVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
                    /* Top-level per-tick game-state dispatcher, called once per simulation tick
                       from Game_MainLoop (which may call this multiple times per rendered frame via
                       a fixed-timestep accumulator). Switches on *(param_1[0x2d]-0xc), a
                       game-state/mode value.
                       
                       CORRECTED 2026-10-01 (debugger DLL, hooks on Game_TickActiveGameplay/
                       Game_TickPaused/SimObjectQueue_TickPending): case 0 is NOT mutually exclusive
                       with the trailing Game_TickActiveGameplay call the way cases 1-5 are. Cases
                       1/2/3/4/5 all end in an explicit `return` inside their case body. Case 0 only
                       returns early if the flag byte at param_1+199 is set (chaining into
                       Game_TickState4 instead); when that flag is clear - the overwhelmingly common
                       case during ordinary play (7175/7910 = ~91% of ticks in one real session) -
                       case 0 just `break`s out of the switch and falls through into the trailing
                       Game_TickActiveGameplay(...) call after the switch block. So state 0 calls
                       BOTH Game_TickState0_Transition (lightweight per-tick bookkeeping/
                       notification) AND Game_TickActiveGameplay on the same tick. This DISPROVES
                       the
                       previous claim below that "none of states 0/1/2/4/5 call
                       Campaign_AdvanceYearIfDecadeElapsed or SimObjectQueue_TickPending" - state 0
                       very much does, via this fallthrough, for the large majority of real
                       gameplay ticks. State 0 is therefore effectively "normal gameplay in
                       progress", not a distinct non-gameplay/transition screen - confirmed via
                       hooked call counts, not just runtime inference this time
                       (SimObjectQueue_TickPending's
                       total call count across one session matched Game_TickActiveGameplay +
                       Game_TickPaused's combined count exactly: 7175 + 223 = 7398).
                       
                       case 1 -> Game_TickState1 (reduced tick, no calendar/sim-queue advance), case
                       2 -> Game_TickState2, case 3 -> Game_TickPaused (now hook-confirmed: its call
                       count in one session, 223, lined up exactly with the single ~22s dwell
                       logged at state 3 that session - roughly a 10Hz reduced tick rate while
                       paused), case 4 -> Game_TickState4 (wraps State1 plus extra stat-registry
                       checks), case 5 -> Game_TickState5 (near-twin of State2), default (any value
                       NOT 0-5) -> Game_TickActiveGameplay directly (same call as case 0's
                       fallthrough).
                       
                       Which literal screen each of states 1/2/4/5 corresponds to is still not
                       proven by code - named by structural role only. Runtime correlation so far
                       (see project_the_movies_re.md, 2026-10-01 entries) tentatively suggests state
                       2 = a loading screen (one-off ~13s dwell right after startup, before the
                       first entry into state 0) and state 5 = a brief notification/toast rather
                       than a modal pause (now that Paused is confidently state 3, a different
                       earlier guess that 5 was "paused/modal" is superseded). State 1 appears in
                       short, repeated bursts alternating with state 0, not yet confidently mapped
                       to a specific screen. */
  gameState[0x22] = gameState[0x22] & 0xfffffffe;
  FUN_0053d440();
  FUN_0053c8c0();
  FUN_009a1560(0);
  FUN_006a0020();
  switch(*(undefined4 *)(gameState[0x2d] + -0xc)) {
  case 0:
    Game_TickState0_Transition(gameState,(uint)*(byte *)((int)gameState + 199));
    FUN_009a1560(*(undefined1 *)((int)gameState + 199));
    if (*(char *)((int)gameState + 199) != '\0') {
      Game_TickState4((int)gameState);
      pvVar1 = (void *)FUN_004f3b20();
      FUN_004fb1c0(pvVar1);
      *gameState = *gameState + 1;
      return;
    }
    break;
  case 1:
    Game_TickState1((int)gameState);
    pvVar1 = (void *)FUN_004f3b20();
    FUN_004fb1c0(pvVar1);
    *gameState = *gameState + 1;
    return;
  case 2:
    Game_TickState2((int)gameState,extraout_EDX);
    pvVar1 = (void *)FUN_004f3b20();
    FUN_004fb1c0(pvVar1);
    *gameState = *gameState + 1;
    return;
  case 3:
    Game_TickPaused((int)gameState);
    pvVar1 = (void *)FUN_004f3b20();
    FUN_004fb1c0(pvVar1);
    *gameState = *gameState + 1;
    return;
  case 4:
    FUN_009a1560(1);
    Game_TickState4((int)gameState);
    pvVar1 = (void *)FUN_004f3b20();
    FUN_004fb1c0(pvVar1);
    *gameState = *gameState + 1;
    return;
  case 5:
    FUN_009a1560(1);
    Game_TickState5((int)gameState,extraout_EDX_00);
    pvVar1 = (void *)FUN_004f3b20();
    FUN_004fb1c0(pvVar1);
    *gameState = *gameState + 1;
    return;
  }
  Game_TickActiveGameplay((int)gameState);
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004fb1c0(pvVar1);
  *gameState = *gameState + 1;
  return;
}


//// FUNCTION FUN_00423670 @ 00423670 ////

void __fastcall FUN_00423670(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xb4) + -0xc);
  if (0 < iVar1) {
    if (iVar1 < 3) {
      FUN_00423260(param_1);
      return;
    }
    if (iVar1 == 3) {
      FUN_00423150(param_1);
      return;
    }
  }
  FUN_00423040(param_1);
  return;
}


//// FUNCTION FUN_004236b0 @ 004236b0 ////

void __fastcall FUN_004236b0(int param_1)

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


//// FUNCTION FUN_00423710 @ 00423710 ////

void FUN_00423710(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00423710(*(void **)((int)param_1 + 8));
    FUN_00421540((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00423750 @ 00423750 ////

void __fastcall FUN_00423750(int param_1)

{
  void *this;
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9ea4c;
  pvStack_c = ExceptionList;
  bVar3 = 1;
  iVar1 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  iVar2 = param_1;
  this = (void *)FUN_004f3b20();
  FUN_004f9b70(this,iVar1,iVar2,bVar3);
  FUN_00421110(param_1);
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xb0));
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (0x14 < *(uint *)(param_1 + 0x94)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x8c));
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004237f0 @ 004237f0 ////

void __fastcall FUN_004237f0(int param_1)

{
  FUN_0053d440();
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  if (*(int *)(param_1 + 0xb0) != 0) {
    if ((*(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0)) / 0xc != 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -0xc;
    }
  }
  FUN_009a1560(*(int *)(*(int *)(param_1 + 0xb4) + -0xc) == 4);
  return;
}


//// FUNCTION FUN_00423860 @ 00423860 ////

void FUN_00423860(void)

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
  puStack_8 = &LAB_00c9ea68;
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


//// FUNCTION FUN_004238d0 @ 004238d0 ////

void __thiscall FUN_004238d0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00c9ea88;
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
  FUN_00420690((int *)&param_2);
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
      goto LAB_00423a41;
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
      piVar2 = (int *)FUN_004205e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_004205c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00423a41:
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
            FUN_00420560(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00420600(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00420560(this,(int)piVar5);
              break;
            }
LAB_00423b04:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_00420600(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00423b04;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00420560(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00420600(this,piVar5);
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


//// FUNCTION FUN_00423ba0 @ 00423ba0 ////

void __fastcall FUN_00423ba0(int param_1)

{
  FUN_00423710(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00423c20 @ 00423c20 ////

void __thiscall FUN_00423c20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00423710((void *)piVar6[1]);
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
    FUN_004238d0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00423ce0 @ 00423ce0 ////

void __thiscall FUN_00423ce0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00c9eaa0;
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
      FUN_00423860();
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
        iVar3 = FUN_00420390((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0xc);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00421590(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00422140(puVar5,param_2,&local_20);
      FUN_00421590(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 3);
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
      FUN_00421590(param_1,puVar4,param_1 + param_2 * 3);
      local_8 = 2;
      FUN_00423490(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0xc,&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0xc;
      *(int *)((int)this + 8) = iVar3;
      FUN_00420700(param_1,(undefined4 *)(iVar3 + param_2 * -0xc),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00421590(puVar4 + param_2 * -3,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_004207e0(param_1,puVar4 + param_2 * -3,puVar4);
    FUN_00420700(param_1,param_1 + param_2 * 3,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00423fe0 @ 00423fe0 ////

void __thiscall FUN_00423fe0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc;
      goto LAB_00424023;
    }
  }
  iVar1 = 0;
LAB_00424023:
  FUN_00423ce0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0xc;
  return;
}


//// FUNCTION FUN_00424080 @ 00424080 ////

void __thiscall FUN_00424080(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00422140(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 3;
    return;
  }
  FUN_00423fe0(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00424100 @ 00424100 ////

void __fastcall FUN_00424100(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00423c20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00424130 @ 00424130 ////

void __thiscall FUN_00424130(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_005e16d0();
  local_c = param_1;
  local_8 = param_2;
  local_4 = param_3;
  FUN_0053d440();
  *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 1;
  FUN_00424080((void *)((int)this + 0xac),&local_c);
  DAT_0104e7a0 = 0;
  DAT_0104e7a1 = 0;
  DAT_0104e7a2 = 0;
  FUN_009a1560(param_1 == 4);
  return;
}


//// FUNCTION FUN_004241a0 @ 004241a0 ////

int __fastcall FUN_004241a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004220b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004241d0 @ 004241d0 ////

undefined4 * __fastcall FUN_004241d0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ead9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  param_1[0xe] = &PTR_LAB_00d183d0;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_00d183c8;
  iVar1 = FUN_004220b0();
  param_1[0x19] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x19] + 4) = param_1[0x19];
  *(undefined4 *)param_1[0x19] = param_1[0x19];
  *(undefined4 *)(param_1[0x19] + 8) = param_1[0x19];
  param_1[0x1a] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_004220b0();
  param_1[0x1c] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1c];
  *(undefined4 *)param_1[0x1c] = param_1[0x1c];
  *(undefined4 *)(param_1[0x1c] + 8) = param_1[0x1c];
  param_1[0x1d] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = FUN_004220b0();
  param_1[0x1f] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1f] + 4) = param_1[0x1f];
  *(undefined4 *)param_1[0x1f] = param_1[0x1f];
  *(undefined4 *)(param_1[0x1f] + 8) = param_1[0x1f];
  param_1[0x20] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004242b0 @ 004242b0 ////

undefined4 * __thiscall FUN_004242b0(void *this,byte param_1)

{
  FUN_0064a7f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION TMLandscape_Constructor @ 004242e0 ////

undefined4 * __fastcall TMLandscape_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9eb03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_00d18410;
  param_1[0xe] = &PTR_LAB_00d183f0;
  FUN_00989400(param_1 + 0x18);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00424360 @ 00424360 ////

undefined4 * __thiscall FUN_00424360(void *this,byte param_1)

{
  FUN_00424380(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00424380 @ 00424380 ////

void __fastcall FUN_00424380(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9eb3f;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_00989410(param_1 + 0x18);
  puVar1 = (undefined4 *)0x0;
  local_4 = local_4 & 0xffffff00;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004243e0 @ 004243e0 ////

undefined4 * FUN_004243e0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9eb5b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x84);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_004241d0(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_00424440 @ 00424440 ////

undefined4 * FUN_00424440(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9eb7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x6c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = TMLandscape_Constructor(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0xe] + 0x14))();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION Game_Bootstrap @ 004244a0 ////

void Game_Bootstrap(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* The main engine/game bootstrap routine (identified by a background agent,
                       spot-checked: caller FUN_004289e0 confirmed, cited constructors
                       SplashScreen_Constructor/AwardSystem_Init confirmed to exist at expected
                       addresses). Two linear phases, ~208 steps total, no branching/dispatch: (1)
                       ~126 calls registering name->factory-function-pointer pairs (via
                       FUN_0098fa50, e.g. FUN_0041ccc0 does operator_new+construct+vtable-init) -- a
                       class/screen factory registry. (2) ~82 calls to already-named subsystem
                       constructors/inits, each followed by a loading-progress tick
                       (FUN_0041fd60(DAT_00f87b04, 0.0)): AwardSystem_Init,
                       AwardsScreen_Constructor, CreditsScreen_Constructor,
                       StarRatingUI_Constructor, AwardBonuses_LoadBonusesIni, Paparazzi_Constructor,
                       AutosaveSystem_Constructor, GameCalendar_Constructor,
                       InputConfig_Constructor, MovieProjectSystem_Constructor,
                       Reviews_LoadMovieReviewCsv, SplashScreen_Constructor, StarHiring_Constructor,
                       Camera_RegisterDebugStates, Debug_RegisterMoneyCheat, and others. This is
                       effectively a manifest of the game's major subsystems in load order -- a
                       valuable reference for future work. One lone LoadLibraryA("Secur32.DLL") near
                       the top, likely unrelated inlined static-init. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9ef80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  LoadLibraryA("Secur32.DLL");
  pcVar2 = (char *)FUN_00acdb9e(0xe4f580);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0;
  FUN_0098fa50(FUN_0041d350,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0042a5e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f568);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 1;
  FUN_0098fa50(FUN_0041ee00,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8572a0);
  FUN_00858590();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f548);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 2;
  FUN_0098fa50(FUN_0041ee60,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0085c360();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f520);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 3;
  FUN_0098fa50(FUN_0041f840,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x858f00);
  FUN_00858e00();
  FUN_0085f330();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f500);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 4;
  FUN_0098fa50(FUN_0041fa80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x54b1e0);
  FUN_0054b0c0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e644);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 5;
  FUN_0098fa50(FUN_0041ccc0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00847040();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e7fc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 6;
  FUN_0098fa50(FUN_004221b0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00848390();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f4d8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 7;
  FUN_0098fa50(FUN_0041f230,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00849f70();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f4b4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 8;
  FUN_0098fa50(FUN_0041f290,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_0084b080();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e75c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 9;
  FUN_0098fa50(FUN_00420d80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_0084ac90();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e660);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 10;
  FUN_0098fa50(FUN_004208c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00849df0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f490);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0xb;
  FUN_0098fa50(FUN_0041cd20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00848fe0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e688);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0xc;
  FUN_0098fa50(FUN_00420970,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00849390();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e784);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0xd;
  FUN_0098fa50(FUN_00420e30,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x84aea0);
  FUN_0084af30();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f470);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0xe;
  FUN_0098fa50(FUN_0041d470,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00937ea0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e6a8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0xf;
  FUN_0098fa50(FUN_0041d4d0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0093b0d0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f454);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x10;
  FUN_0098fa50(FUN_0041e020,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00943720();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f434);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x11;
  FUN_0098fa50(FUN_0041d530,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00914bf0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f414);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x12;
  FUN_0098fa50(FUN_0041d590,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00915550();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f3f4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x13;
  FUN_0098fa50(FUN_0041d5f0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00915b60();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f3d0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x14;
  FUN_0098fa50(FUN_0041d650,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00916560();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f3b4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x15;
  FUN_0098fa50(FUN_0041d6b0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00917460();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f394);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x16;
  FUN_0098fa50(FUN_0041d710,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00917ca0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f378);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x17;
  FUN_0098fa50(FUN_0041d770,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00918050();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f354);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x18;
  FUN_0098fa50(FUN_0041d7d0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00918640();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f338);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x19;
  FUN_0098fa50(FUN_0041d830,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00919440();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f318);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1a;
  FUN_0098fa50(FUN_0041d890,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0091a810();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e6c0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1b;
  FUN_0098fa50(FUN_00420a20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0091b0f0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f2fc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1c;
  FUN_0098fa50(FUN_0041d940,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0091b2b0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f2dc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1d;
  FUN_0098fa50(FUN_0041d9a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_009228b0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f2c0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1e;
  FUN_0098fa50(FUN_0041da00,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_009241f0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f2a4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x1f;
  FUN_0098fa50(FUN_0041da60,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00927080();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f284);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x20;
  FUN_0098fa50(FUN_0041dac0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_009281e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f260);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x21;
  FUN_0098fa50(FUN_0041db20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00928900();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f240);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x22;
  FUN_0098fa50(FUN_0041db80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00928bd0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f224);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x23;
  FUN_0098fa50(FUN_0041dbe0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00929110();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f204);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x24;
  FUN_0098fa50(FUN_0041dca0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0092a920();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f1e0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x25;
  FUN_0098fa50(FUN_0041dc40,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0092a8e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f1c0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x26;
  FUN_0098fa50(FUN_0041ddc0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0092eb70();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f1a0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x27;
  FUN_0098fa50(FUN_0041de20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0092f410();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f178);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x28;
  FUN_0098fa50(FUN_0041e080,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004a4ef0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f158);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x29;
  FUN_0098fa50(FUN_0041de80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00930ed0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f138);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2a;
  FUN_0098fa50(FUN_0041dee0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_009343d0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f11c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2b;
  FUN_0098fa50(FUN_0041df40,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00936b00();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e6e0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2c;
  FUN_0098fa50(FUN_00420ad0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00937c90();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f0f8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2d;
  FUN_0098fa50(FUN_0041dfc0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00946470();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f0d4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2e;
  FUN_0098fa50(FUN_0041dd00,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_009474d0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f0b0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x2f;
  FUN_0098fa50(FUN_0041dd60,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00947510();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e858);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x30;
  FUN_0098fa50(FUN_004243e0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_006420a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f094);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x31;
  FUN_0098fa50(FUN_0041ce70,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00491130();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f074);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x32;
  FUN_0098fa50(FUN_0041e160,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x45f280);
  FUN_0045f110();
  FUN_0098f9e0(0x50ceb0);
  FUN_0050f9f0();
  FUN_0098f9e0(0x541790);
  FUN_0053df60();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f054);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x33;
  FUN_0098fa50(FUN_0041ece0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x541790);
  FUN_004a1310();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f030);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x34;
  FUN_0098fa50(FUN_0041eec0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x852d20);
  FUN_00853730();
  FUN_0098f9e0(0x4a2fe0);
  FUN_004a2b30();
  pcVar2 = (char *)FUN_00acdb9e(0xe4f014);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x35;
  FUN_0098fa50(FUN_0041d1a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x57b310);
  FUN_005a0730();
  pcVar2 = (char *)FUN_00acdb9e(0xe4efec);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x36;
  FUN_0098fa50(FUN_0041e670,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004fb300();
  pcVar2 = (char *)FUN_00acdb9e(0xe4efd4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x37;
  FUN_0098fa50(FUN_0041d140,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x57b310);
  FUN_00584200();
  pcVar2 = (char *)FUN_00acdb9e(0xe4efbc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x38;
  FUN_0098fa50(FUN_0041eb40,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x57b310);
  FUN_005853e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e87c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x39;
  FUN_0098fa50(FUN_00424440,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00539e00();
  pcVar2 = (char *)FUN_00acdb9e(0xe4efa0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3a;
  FUN_0098fa50(FUN_0041fe20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00839550();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ef88);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3b;
  FUN_0098fa50(FUN_0041e1c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00448160();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ef70);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3c;
  FUN_0098fa50(FUN_0041e350,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005a60d0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ef54);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3d;
  FUN_0098fa50(FUN_0041e840,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004a5930();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e330);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3e;
  FUN_0098fa50(FUN_0041e960,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00479260();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e350);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x3f;
  FUN_0098fa50(FUN_0041e900,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0040bc80();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e30c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x40;
  FUN_0098fa50(FUN_0041e8a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004aa5b0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ef34);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x41;
  FUN_0098fa50(FUN_0041e9c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004feda0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e370);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x42;
  FUN_0098fa50(FUN_0041ea20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0051c310();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ef18);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x43;
  FUN_0098fa50(FUN_0041e7d0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00439530();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eef8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x44;
  FUN_0098fa50(FUN_0041d0e0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0084f540();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eed8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x45;
  FUN_0098fa50(FUN_0041eba0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x56e1d0);
  FUN_0056eb10();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eec0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x46;
  FUN_0098fa50(FUN_0041f0f0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x468550);
  FUN_00465510();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eea4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x47;
  FUN_0098fa50(FUN_0041e610,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0048c570();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ee88);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x48;
  FUN_0098fa50(FUN_0041f170,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x5b3cb0);
  FUN_005c0e90();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e4c0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x49;
  FUN_0098fa50(FUN_0041f2f0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x4ca9c0);
  FUN_004d2c40();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ee6c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4a;
  FUN_0098fa50(CStudioAI_CreateGlobalInstance,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x513880);
  FUN_00513b20();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ee44);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4b;
  FUN_0098fa50(FUN_0041eda0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005a1e40();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e838);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4c;
  FUN_0098fa50(FUN_0041f540,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x519750);
  FUN_00517fa0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ee2c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4d;
  FUN_0098fa50(FUN_0041f3f0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004dee40();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ee04);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4e;
  FUN_0098fa50(FUN_0041cf00,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00849510();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eddc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x4f;
  FUN_0098fa50(FUN_0041cfc0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005aaf60();
  pcVar2 = (char *)FUN_00acdb9e(0xe4edb8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x50;
  FUN_0098fa50(FUN_0041cf60,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x8446c0);
  FUN_00848750();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed94);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x51;
  FUN_0098fa50(FUN_0041d080,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004455a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e73c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x52;
  FUN_0098fa50(FUN_00420cb0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004fcfa0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed78);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x53;
  FUN_0098fa50(FUN_0041e6d0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004fd700();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed5c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x54;
  FUN_0098fa50(FUN_0041e2f0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005a9370();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed3c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x55;
  FUN_0098fa50(FUN_0041ec00,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00572c70();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed24);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x56;
  FUN_0098fa50(FUN_0041e3b0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005a6110();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ed04);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x57;
  FUN_0098fa50(FUN_0041d410,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0042b080();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ece4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x58;
  FUN_0098fa50(FUN_0041d3b0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0042a680();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ecc4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x59;
  FUN_0098fa50(FUN_0041e230,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x4636b0);
  FUN_004642c0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eca8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5a;
  FUN_0098fa50(FUN_0041e470,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x4bf170);
  FUN_004c3a50();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ec90);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5b;
  FUN_0098fa50(FUN_0041e290,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004d65e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ec70);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5c;
  FUN_0098fa50(FUN_0041f8a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005aa7e0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ec48);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5d;
  FUN_0098fa50(FUN_0041f900,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005aab70();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ec28);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5e;
  FUN_0098fa50(FUN_0041f960,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005ae2a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ec08);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x5f;
  FUN_0098fa50(FUN_0041f9c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005af9a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ebe8);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x60;
  FUN_0098fa50(FUN_0041fa20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005b0920();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ebd0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x61;
  FUN_0098fa50(FUN_0041e730,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0048c700();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ebb4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x62;
  FUN_0098fa50(FUN_0041e410,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x442c50);
  FUN_00442a20();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eb98);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 99;
  FUN_0098fa50(FUN_0041ea80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0042fce0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eb80);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 100;
  FUN_0098fa50(CGenre_CreateInstance,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00449b20();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eb5c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x65;
  FUN_0098fa50(FUN_0041e4d0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004bcf50();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eb38);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x66;
  FUN_0098fa50(FUN_0041e560,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004bcf90();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eb20);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x67;
  FUN_0098fa50(FUN_0041f5a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00464730();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eafc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x68;
  FUN_0098fa50(FUN_0041e100,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0045edc0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eadc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x69;
  FUN_0098fa50(FUN_0041ce10,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004910c0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eac0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6a;
  FUN_0098fa50(FUN_0041f660,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005a55f0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4eaa0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6b;
  FUN_0098fa50(FUN_0041f600,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005d0ea0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ea84);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6c;
  FUN_0098fa50(FUN_0041d200,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00488eb0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ea68);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6d;
  FUN_0098fa50(FUN_0041d260,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00488ef0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e128);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6e;
  FUN_0098fa50(FUN_0041ed40,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00408610();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e7ac);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x6f;
  FUN_0098fa50(FUN_004216a0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005863a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ea48);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x70;
  FUN_0098fa50(FUN_0041d020,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0043fe90();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ea30);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x71;
  FUN_0098fa50(FUN_0041f6c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x57b310);
  FUN_0056f4b0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4ea0c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x72;
  FUN_0098fa50(FUN_0041ef20,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0044d3b0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e9f0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x73;
  FUN_0098fa50(FUN_0041f720,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0045b790();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e9d4);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x74;
  FUN_0098fa50(FUN_0041f780,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0045b7e0();
  FUN_0098f9e0(0x44d920);
  FUN_0044d8f0();
  FUN_0098f9e0(0x989790);
  FUN_00866670();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e9b0);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x75;
  FUN_0098fa50(FUN_0041f450,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x4a6ac0);
  FUN_004a6aa0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e984);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x76;
  FUN_0098fa50(FUN_0041eae0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005d5220();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e95c);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x77;
  FUN_0098fa50(FUN_0041f7e0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005cb9d0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e938);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x78;
  FUN_0098fa50(FUN_0041ef80,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_005cc090();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e918);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x79;
  FUN_0098fa50(FUN_0041efe0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_0043d250();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e900);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x7a;
  FUN_0098fa50(FUN_0041d2c0,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004f3a50();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e8dc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x7b;
  FUN_0098fa50(FUN_0041ec60,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x989790);
  FUN_004d5210();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e8bc);
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_4c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_4 = 0x7c;
  FUN_0098fa50(FUN_0041f040,&local_4c);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0098f9e0(0x5ceb20);
  FUN_005d09a0();
  pcVar2 = (char *)FUN_00acdb9e(0xe4e89c);
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
  local_4 = 0x7d;
  FUN_0098fa50(FUN_0041fb20,&local_2c);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0098f9e0(0x989790);
  FUN_00924990();
  FUN_0098f9e0(0x5200f0);
  FUN_005200b0();
  FUN_008770e0();
  ContentUnlock_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  SplashScreen_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  Debug_RegisterMoneyCheat();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00490e80();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_008b9f70();
  FUN_0041fd60(DAT_00f87b04,0.0);
  GameCalendar_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00471a80();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_008d5380();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0053c3a0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00922770();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00939bd0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005301d0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00989650();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_008386b0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  SoundSoakTest_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00566ce0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00960eb0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_008b9550();
  FUN_0041fd60(DAT_00f87b04,0.0);
  thunk_FUN_005cadc0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0044b470();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005554b0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004b6430();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_009909a0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  InputConfig_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  MovieProjectSystem_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  Camera_RegisterDebugStates('\x01');
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_006a4050();
  FUN_0041fd60(DAT_00f87b04,0.0);
  StarHiring_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00525d00();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00547400();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004eeab0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00449890();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_009af090();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_009b41b0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00471fb0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0040bc90();
  FUN_0041fd60(DAT_00f87b04,0.0);
  Reviews_LoadMovieReviewCsv();
  FUN_0041fd60(DAT_00f87b04,0.0);
  thunk_FUN_00504e80();
  FUN_0041fd60(DAT_00f87b04,0.0);
  thunk_FUN_0051f100();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0094f450();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0063d970();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004efb90();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0084bde0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  AutosaveSystem_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0042fec0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0095d630();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0095e860();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00960dd0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0095ff70();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0095f1f0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_009596f0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0095da00();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0048c7d0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  CharacterDebugToggles_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0053a130();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0059f310();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00494f10();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0078b2a0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0045de50();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004afe20();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005069f0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00508470();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005e0160();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004fcb60();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005eba70();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005f0470();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00597f70();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_004f0670();
  FUN_0041fd60(DAT_00f87b04,0.0);
  AwardSystem_Init();
  FUN_0041fd60(DAT_00f87b04,0.0);
  AwardsScreen_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  CreditsScreen_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005ea6a0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  StarRatingUI_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  AwardBonuses_LoadBonusesIni();
  FUN_0041fd60(DAT_00f87b04,0.0);
  Paparazzi_Constructor();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005efcd0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005ef760();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_0048ffa0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  thunk_FUN_006e1060();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_00750550();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_007970e0();
  FUN_0041fd60(DAT_00f87b04,0.0);
  FUN_005979e0();
  FUN_008770e0();
  FUN_0086e090();
  FUN_00871070();
  PTR_LAB_00e67dec = &LAB_00420150;
  PTR_LAB_00e68018 = &LAB_00420150;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004289e0 @ 004289e0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004289e0(void *param_1)

{
  int iVar1;
  undefined1 uVar2;
  size_t sVar3;
  undefined4 *puVar4;
  void *this;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9f011;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)((int)param_1 + 199) = 0;
  uVar2 = DAT_0105cc5c;
  DAT_0105cc5c = 0;
  local_4 = 0;
  FUN_009abd80(1);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"prt_hide2",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4._0_1_ = 2;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"prt_hide3",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4._0_1_ = 3;
  CVarSystem_Register_STUBBED();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  if ((DAT_00f87b4c & 1) == 0) {
    DAT_00f87b4c = DAT_00f87b4c | 1;
    _DAT_00f87b44 = 0x44000000;
    _DAT_00f87b48 = 0x44160000;
  }
  if ((DAT_00f87b4c & 2) == 0) {
    DAT_00f87b4c = DAT_00f87b4c | 2;
    DAT_00f87b3c = 0x43310000;
    DAT_00f87b40 = 0x44264000;
  }
  if ((DAT_00f87b4c & 4) == 0) {
    DAT_00f87b4c = DAT_00f87b4c | 4;
    DAT_00f87b34 = 0x4453c000;
    DAT_00f87b38 = 0x44400000;
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"ui/startup.dds",0xe);
  local_48 = 0xe;
  local_4c[0xe] = '\0';
  local_4._0_1_ = 5;
  FUN_00420ee0(param_1,&local_4c,(float *)&DAT_00f87b44);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  sVar3 = FUN_00ace02d(L"<p align=center><font color=#ffffff>");
  FUN_0040cae0(&local_6c,L"<p align=center><font color=#ffffff>",sVar3);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"FRONTEND_LEGAL_LINE1",0x14);
  local_48 = 0x14;
  local_4c[0x14] = '\0';
  local_4._0_1_ = 6;
  puVar4 = FUN_009b5030(local_2c,&local_4c);
  FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  sVar3 = FUN_00ace02d((short *)&DAT_00d184c4);
  FUN_0040cae0(&local_6c,L" ",sVar3);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"FRONTEND_LEGAL_LINE2",0x14);
  local_48 = 0x14;
  local_4c[0x14] = '\0';
  local_4._0_1_ = 7;
  puVar4 = FUN_009b5030(local_2c,&local_4c);
  FUN_0040cae0(&local_6c,(wchar_t *)*puVar4,puVar4[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4._0_1_ = 4;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  sVar3 = FUN_00ace02d(L"</font></p>");
  FUN_0040cae0(&local_6c,L"</font></p>",sVar3);
  iVar1 = *(int *)((int)param_1 + 0xbc);
  *(undefined4 *)(iVar1 + 4) = DAT_00f87b3c;
  *(undefined4 *)(iVar1 + 8) = DAT_00f87b40;
  *(undefined4 *)(iVar1 + 0xc) = DAT_00f87b34;
  *(undefined4 *)(iVar1 + 0x10) = DAT_00f87b38;
  if (1024.0 <= DAT_0105c400) {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x14) = 0xc;
  }
  else {
    *(undefined4 *)(*(int *)((int)param_1 + 0xbc) + 0x14) = 10;
  }
  *(undefined1 *)(*(int *)((int)param_1 + 0xbc) + 0x18) = 0;
  FUN_005e6d10(*(void **)((int)param_1 + 0xbc),&local_6c);
  FUN_0041fd60(param_1,0.0);
  FUN_00551d40();
  puVar6 = &stack0xffffff54;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff48,"About to enter encryption block",0x1f);
  FUN_00567d40(puVar6,uVar7,uVar8);
  puVar6 = &stack0xffffff54;
  uVar7 = 0;
  uVar8 = 0x14;
  FUN_004015d0(&stack0xffffff48,"within encrypted block...",0x19);
  FUN_00567d40(puVar6,uVar7,uVar8);
  FUN_00447d90();
  DAT_0105bea4 = &LAB_0041fc60;
  Game_Bootstrap();
  local_4c = local_40;
  DAT_00e67468 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"deb_reload",10);
  local_48 = 10;
  local_4c[10] = '\0';
  local_4._0_1_ = 8;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"version",7);
  local_48 = 7;
  local_4c[7] = '\0';
  local_4._0_1_ = 9;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"quit",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4._0_1_ = 10;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"save",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4._0_1_ = 0xb;
  FUN_005434b0();
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"load",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_4._0_1_ = 0xc;
  FUN_005434b0();
  local_4._0_1_ = 4;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  this = operator_new(0x7c);
  local_4._0_1_ = 0xd;
  if (this == (void *)0x0) {
    DAT_00f885c0 = (int *)0x0;
  }
  else {
    DAT_00f885c0 = FUN_009a8a00(this,"default",0xe,0,0);
  }
  local_4._0_1_ = 4;
  FUN_009cc650((int)param_1 + 0xc);
  FUN_005e16d0();
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  FUN_0053d440();
  *(uint *)((int)param_1 + 0x88) = *(uint *)((int)param_1 + 0x88) | 1;
  FUN_00424080((void *)((int)param_1 + 0xac),&uStack_78);
  DAT_0104e7a0 = 0;
  DAT_0104e7a1 = 0;
  DAT_0104e7a2 = 0;
  FUN_009a1560(0);
  *(undefined1 *)((int)param_1 + 7) = 1;
  *(undefined1 *)((int)param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 10) = 0;
  if (DAT_00e4e604 == 0) {
    bVar5 = *(char *)((int)param_1 + 200) != '\0';
    if (bVar5) {
      DAT_0104dae0 = 1;
    }
    FUN_00695da0((uint)bVar5);
    if (*(char *)((int)param_1 + 0x85) != '\0') {
      FUN_007843b0(0,0,0,0);
    }
    if (*(char *)((int)param_1 + 200) != '\0') {
      FUN_0068f550(DAT_0104dafc);
    }
  }
  else {
    puVar4 = FUN_00568790(local_2c,&PTR_DAT_00e4e600);
    local_4._0_1_ = 0xe;
    Savegame_LoadAndRestoreGame(puVar4,'\x01');
    local_4._0_1_ = 4;
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  FUN_00421090((int)param_1);
  uVar8 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&PTR_DAT_00e551bc,(wchar_t *)&lpCaption_00d16918,uVar8);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_009abd80(-1);
  DAT_0105cc5c = uVar2;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004291c0 @ 004291c0 ////

undefined4 * __thiscall FUN_004291c0(void *this,byte *param_1)

{
  DWORD DVar1;
  void *this_00;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  byte bVar5;
  undefined1 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f03c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_009cc890((int)this + 0xc);
  *(undefined4 *)((int)this + 0x8c) = (undefined1 *)((int)this + 0x98);
  *(undefined1 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0x14;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined1 *)((int)this + 7) = 1;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined1 *)((int)this + 0xc5) = 0;
  *(undefined1 *)((int)this + 0x86) = 0;
  *(undefined1 *)((int)this + 0x85) = 0;
  *(undefined1 *)((int)this + 0xc6) = 0;
  *(undefined1 *)((int)this + 0xb) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  local_4 = 1;
  DAT_00f87b04 = this;
  *(uint *)((int)this + 0x88) = *(uint *)((int)this + 0x88) | 1;
  *(undefined1 *)((int)this + 200) = 0;
  if (param_1 != (byte *)0x0) {
    FUN_00421a70(this,param_1);
  }
  DVar1 = timeGetTime();
  FUN_00990b90(DVar1);
  local_30 = local_30 & 0xfffffffe | 2;
  local_34 = 0;
  local_3c = &LAB_00421810;
  local_38 = 0x10;
  FUN_009a14d0((int *)&local_3c);
  FUN_004289e0(this);
  bVar5 = 1;
  iVar3 = 0;
  pvVar4 = this;
  this_00 = (void *)FUN_004f3b20();
  FUN_004f98f0(this_00,iVar3,(int)pvVar4,bVar5);
  *(undefined4 *)this = 0;
  puVar2 = FUN_00422580(local_2c);
  FUN_004015d0((undefined4 *)((int)this + 0x8c),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004293a0 @ 004293a0 ////

int * __thiscall FUN_004293a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004293c0 @ 004293c0 ////

int * __thiscall FUN_004293c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00429400 @ 00429400 ////

float * __cdecl FUN_00429400(float *param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  undefined4 local_4;
  
  local_4 = param_3;
  if (3.1415927 <= ABS(param_2 - param_3)) {
    if (param_3 <= param_2) {
      param_2 = param_2 - 6.2831855;
    }
    else {
      local_4 = param_3 - 6.2831855;
    }
  }
  fVar1 = FUN_004012c0(local_4 * param_4 + (1.0 - param_4) * param_2);
  *param_1 = (float)fVar1;
  return param_1;
}


//// FUNCTION FUN_004294b0 @ 004294b0 ////

float10 __thiscall FUN_004294b0(float *param_1,float *param_2)

{
  return SQRT(((float10)*param_1 - (float10)*param_2) * ((float10)*param_1 - (float10)*param_2) +
              ((float10)param_1[1] - (float10)param_2[1]) *
              ((float10)param_1[1] - (float10)param_2[1]));
}


//// FUNCTION FUN_004294e0 @ 004294e0 ////

undefined4 __thiscall FUN_004294e0(void *this,float *param_1)

{
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == param_1[2])) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00429520 @ 00429520 ////

void FUN_00429520(void)

{
  return;
}


//// FUNCTION FUN_00429570 @ 00429570 ////

uint __fastcall FUN_00429570(int param_1)

{
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    return (int)((*(uint *)(param_1 + 0x30) & 0xffff) - 1) / 3 + 1;
  }
  return *(uint *)(param_1 + 0x30) & 0xffff;
}


//// FUNCTION FUN_004295c0 @ 004295c0 ////

void __fastcall FUN_004295c0(int param_1)

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


//// FUNCTION FUN_004295f0 @ 004295f0 ////

undefined4 __thiscall FUN_004295f0(void *this,float *param_1)

{
  if (((*(float *)this == *param_1) && (*(float *)((int)this + 4) == param_1[1])) &&
     (*(float *)((int)this + 8) == 0.0)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00429890 @ 00429890 ////

undefined4 __thiscall FUN_00429890(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x30) + 0x158))();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x30) + 0x158))();
    uVar3 = (**(code **)*puVar2)(param_1,param_2);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_004298d0 @ 004298d0 ////

void __thiscall FUN_004298d0(void *this,float param_1)

{
  undefined4 *puVar1;
  float unaff_retaddr;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x30) + 0x34))(local_c);
  FUN_009840b0(&fStack_18,puVar1);
  FUN_005990f0(*(void **)((int)this + 0x30),0);
  if ((SQRT((unaff_retaddr - fStack_18) * (unaff_retaddr - fStack_18) +
            (param_1 - fStack_14) * (param_1 - fStack_14)) < 6.0) &&
     (*(char *)((int)*(void **)((int)this + 0x30) + 0x724) != '\0')) {
    FUN_005990f0(*(void **)((int)this + 0x30),1);
    return;
  }
  FUN_005990f0(*(void **)((int)this + 0x30),0);
  return;
}


//// FUNCTION FUN_00429960 @ 00429960 ////

char __fastcall FUN_00429960(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  char cVar9;
  float unaff_EBP;
  float10 fVar10;
  float fVar11;
  undefined4 auStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_1[0xe] == '\0') {
    puVar5 = (undefined4 *)param_1[6];
    if (puVar5[0x97] == 0) {
      TMCharacter_CancelAction((void *)param_1[0xc],puVar5);
      if (param_1[6] != 0) {
        pvVar1 = *(void **)(param_1[6] + 0x144);
        if (pvVar1 != (void *)0x0) {
          FUN_00497f40(pvVar1,param_1[0xc]);
        }
        iVar3 = param_1[6];
        (**(code **)(*(int *)(iVar3 + 0x130) + 4))();
        *(undefined4 *)(iVar3 + 0x144) = 0;
        (*(code *)**(undefined4 **)(iVar3 + 0x130))();
      }
      return '\0';
    }
    iVar3 = (**(code **)(puVar5[0x14] + 0x10))();
    puVar5 = (undefined4 *)param_1[6];
    if (iVar3 != 0) {
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      if (*(char *)(puVar5 + 0xa4) == '\0') {
        fVar11 = 6.116481e-39;
        pfVar4 = (float *)CQueue_GetOrCreateEntryPointPosition
                                    ((void *)puVar5[0x51],auStack_30,(int *)param_1[0xc]);
        fStack_18 = *pfVar4;
        fStack_14 = pfVar4[1];
        fStack_10 = pfVar4[2];
        fStack_c = pfVar4[3];
        fStack_8 = pfVar4[4];
        fStack_4 = pfVar4[5];
      }
      else {
        fVar11 = 6.116448e-39;
        (**(code **)(*(int *)puVar5[0x97] + 0xd8))();
      }
      piVar7 = (int *)param_1[0xc];
      if (((char)piVar7[0x11c] != '\0') && (*(char *)(DAT_00f87b04 + 4) != '\0')) {
        FUN_004012c0(fStack_c);
        fVar11 = 6.116627e-39;
        (**(code **)(*piVar7 + 0xa8))();
        *(undefined1 *)(param_1[0xc] + 0x470) = 0;
      }
      pfVar4 = (float *)(**(code **)(*(int *)param_1[0xc] + 0x34))();
      if ((fStack_1c - *pfVar4) * (fStack_1c - *pfVar4) +
          (fStack_18 - pfVar4[1]) * (fStack_18 - pfVar4[1]) +
          (fStack_14 - pfVar4[2]) * (fStack_14 - pfVar4[2]) < 9.0) {
        (**(code **)(**(int **)(param_1[6] + 0x25c) + 0xa4))();
      }
      FUN_009840b0(&stack0xffffffa4,&fStack_1c);
      FUN_004298d0(param_1,fVar11);
      cVar9 = '\x01';
      puVar5 = (undefined4 *)(**(code **)(*(int *)param_1[0xc] + 0x34))();
      pfVar4 = (float *)FUN_009840b0(&stack0xffffffbc,puVar5);
      uVar6 = FUN_004295f0(auStack_20,pfVar4);
      if ((char)uVar6 == '\0') {
        FUN_00598f00((void *)param_1[0xc],0);
        FUN_004012c0(fStack_14);
        cVar9 = (**(code **)(*param_1 + 0x14))(auStack_20);
      }
      else {
        FUN_00598f00((void *)param_1[0xc],1);
        iVar3 = param_1[0xc];
        if (((*(int *)(iVar3 + 0x4e8) != 3) && (*(int *)(iVar3 + 0x4e8) != 5)) ||
           (*(float *)(iVar3 + 0x478) != fStack_14)) {
          fVar10 = FUN_004012c0(fStack_14);
          unaff_EBP = (float)fVar10;
          *(float *)(iVar3 + 0x478) = unaff_EBP;
          *(undefined4 *)(param_1[0xc] + 0x47c) = *(undefined4 *)(param_1[0xc] + 0xc4);
          *(undefined4 *)(param_1[0xc] + 0x200) = 0;
          *(undefined4 *)(param_1[0xc] + 0x1fc) = 0;
          fVar10 = FUN_004012c0(*(float *)(param_1[0xc] + 0x478) - *(float *)(param_1[0xc] + 0xc4));
          if (ABS(fVar10 * (float10)57.295776) < (float10)5.0) {
            fVar10 = FUN_004012c0(fStack_14);
            unaff_EBP = (float)fVar10;
            *(float *)(param_1[0xc] + 0xc4) = unaff_EBP;
          }
        }
        pvVar1 = (void *)param_1[0xc];
        if (*(float *)((int)pvVar1 + 0xc4) == fStack_14) {
          uVar6 = FUN_00496b40(*(void **)(param_1[6] + 0x144),(int)pvVar1);
          if ((char)uVar6 != '\0') {
            uVar6 = FUN_00496360(*(int *)(param_1[6] + 0x144));
            cVar9 = '\x01' - ((char)uVar6 != '\0');
          }
          piVar7 = (int *)FUN_00401c30(param_1[6]);
          pfVar4 = (float *)(**(code **)(*piVar7 + 0x24))();
          FUN_00407070(&stack0xffffffb8,1.0 - *pfVar4);
          *(float *)(param_1[0xc] + 0x480) = unaff_EBP;
          if (*(int *)(param_1[0xc] + 0x5d8) != 0) {
            *(undefined4 *)(*(int *)(param_1[0xc] + 0x5d8) + 4) = 0;
          }
          if (cVar9 == '\0') {
            FUN_00497f40(*(void **)(param_1[6] + 0x144),param_1[0xc]);
            *(undefined4 *)(param_1[6] + 0x240) = 2;
          }
        }
        else {
          FUN_00598db0(pvVar1,3);
          iVar2 = param_1[0xc];
          iVar3 = *(int *)(iVar2 + 0x1fc);
          uVar8 = FUN_00429570(*(int *)(iVar2 + 0x210));
          fVar11 = (float)iVar3 / (float)(int)(uVar8 * 100);
          pfVar4 = FUN_00429400((float *)&stack0xffffffbc,*(float *)(iVar2 + 0x47c),
                                *(float *)(iVar2 + 0x478),fVar11);
          *(float *)(iVar2 + 0xc4) = *pfVar4;
          if (1.0 <= fVar11) {
            *(undefined4 *)(param_1[0xc] + 0xc4) = *(undefined4 *)(param_1[0xc] + 0x478);
          }
        }
        if (*(int *)(param_1[0xc] + 0x5d8) != 0) {
          FUN_004ab300(*(int *)(param_1[0xc] + 0x5d8));
          return cVar9;
        }
      }
      return cVar9;
    }
    TMCharacter_CancelAction((void *)param_1[0xc],puVar5);
  }
  return '\0';
}


//// FUNCTION FUN_00429d90 @ 00429d90 ////

int __fastcall FUN_00429d90(int *param_1)

{
  undefined4 uVar1;
  uint3 uVar2;
  uint3 extraout_var;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  if (*(int *)(param_1[0xc] + 0x5d8) != 0) {
    uVar1 = FUN_004ab300(*(int *)(param_1[0xc] + 0x5d8));
  }
  uVar2 = (uint3)((uint)uVar1 >> 8);
  if (*(char *)(param_1[0xc] + 0x15c) == '\0') {
    FUN_00598db0((void *)param_1[0xc],4);
    uVar2 = extraout_var;
  }
  else {
    param_1[0xd] = 4;
    if ((char)param_1[0xe] == '\0') {
      if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
        return CONCAT31(uVar2,1);
      }
      return (uint)uVar2 << 8;
    }
  }
  return (uint)uVar2 << 8;
}


//// FUNCTION FUN_00429fe0 @ 00429fe0 ////

void __fastcall FUN_00429fe0(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char local_1c [12];
  undefined4 uStack_10;
  
  FUN_00598bf0(*(void **)(param_1 + 0x30));
  pcVar1 = local_1c;
  local_1c[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffd8,"StateReadyAndPuppet::BeginPuppet",0x20);
  FUN_0054de30((void *)(*(int *)(param_1 + 0x30) + 0x214),pcVar1,uVar2,uVar3);
  uStack_10 = 0x42a02f;
  FUN_0053a170(*(void **)(param_1 + 0x30),1);
  return;
}


//// FUNCTION FUN_0042a060 @ 0042a060 ////

void __fastcall FUN_0042a060(int param_1)

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


//// FUNCTION FUN_0042a090 @ 0042a090 ////

void __fastcall FUN_0042a090(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d185e4;
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


//// FUNCTION FUN_0042a0e0 @ 0042a0e0 ////

undefined4 * __fastcall FUN_0042a0e0(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9f066;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d185f4;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_1 + 1;
  param_1[1] = &PTR_FUN_00d185e4;
  param_1[6] = 0;
  piVar1 = param_1 + 7;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ac;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  param_1[0xc] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0xe) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0042a170 @ 0042a170 ////

void __fastcall FUN_0042a170(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d185f4;
  param_1[7] = &PTR_FUN_00d165ac;
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
  param_1[1] = &PTR_FUN_00d185e4;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[3] = param_1[2];
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 4) = param_1[3];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


//// FUNCTION FUN_0042a210 @ 0042a210 ////

undefined4 * __thiscall FUN_0042a210(void *this,int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042a0e0(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d1860c;
  if (param_1 != 0) {
    (**(code **)(*(int *)((int)this + 4) + 4))();
    *(int *)((int)this + 0x18) = param_1;
    (*(code *)**(undefined4 **)((int)this + 4))();
    (**(code **)(*(int *)((int)this + 0x1c) + 4))();
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 300);
    (*(code *)**(undefined4 **)((int)this + 0x1c))();
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0042a290 @ 0042a290 ////

void __fastcall FUN_0042a290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1860c;
  FUN_0042a170(param_1);
  return;
}


//// FUNCTION FUN_0042a2a0 @ 0042a2a0 ////

undefined4 * __thiscall FUN_0042a2a0(void *this,int param_1)

{
  FUN_0042a210(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d18628;
  *(undefined4 *)((int)this + 0x34) = 3;
  return this;
}


//// FUNCTION FUN_0042a2c0 @ 0042a2c0 ////

void __fastcall FUN_0042a2c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1860c;
  FUN_0042a170(param_1);
  return;
}


//// FUNCTION FUN_0042a2d0 @ 0042a2d0 ////

undefined4 * __thiscall FUN_0042a2d0(void *this,int param_1)

{
  void *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f0a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0042a210(this,param_1);
  *(undefined ***)this = &PTR_FUN_00d18644;
  *(undefined1 **)((int)this + 0x3c) = (undefined1 *)((int)this + 0x48);
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0x14;
  local_4 = 1;
  if (*(int *)((int)this + 0x18) != 0) {
    piVar2 = *(int **)((int)this + 0x30);
    puVar1 = local_24;
    this_00 = (void *)(**(code **)(*(int *)(*(int *)((int)this + 0x18) + 0x50) + 0x10))();
    CQueue_GetOrCreateEntryPointPosition(this_00,puVar1,piVar2);
  }
  *(undefined4 *)((int)this + 0x34) = 2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0042a360 @ 0042a360 ////

void __fastcall FUN_0042a360(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18644;
  if (0x14 < (uint)param_1[0x11]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  *param_1 = &PTR_FUN_00d1860c;
  FUN_0042a170(param_1);
  return;
}


//// FUNCTION FUN_0042a390 @ 0042a390 ////

undefined4 * __thiscall FUN_0042a390(void *this,int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f0b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0042a0e0(this);
  *(undefined ***)this = &PTR_FUN_00d18660;
  local_4 = 0;
  (**(code **)(*(int *)((int)this + 4) + 4))();
  *(int *)((int)this + 0x18) = param_1;
  (*(code *)**(undefined4 **)((int)this + 4))();
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 300);
  (*(code *)**(undefined4 **)((int)this + 0x1c))();
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x34) = 4;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0042a420 @ 0042a420 ////

void __fastcall FUN_0042a420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d18660;
  FUN_0042a170(param_1);
  return;
}


//// FUNCTION FUN_0042a430 @ 0042a430 ////

undefined4 * __thiscall FUN_0042a430(void *this,byte param_1)

{
  FUN_0042a290(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a450 @ 0042a450 ////

undefined4 * __thiscall FUN_0042a450(void *this,int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f0d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0042a0e0(this);
  *(undefined ***)this = &PTR_FUN_00d18678;
  local_4 = 0;
  (**(code **)(*(int *)((int)this + 0x1c) + 4))();
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 300);
  (*(code *)**(undefined4 **)((int)this + 0x1c))();
  (**(code **)(*(int *)((int)this + 4) + 4))();
  *(int *)((int)this + 0x18) = param_1;
  (*(code *)**(undefined4 **)((int)this + 4))();
  *(undefined4 *)((int)this + 0x34) = 1;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_0042a4d0 @ 0042a4d0 ////

undefined4 * __thiscall FUN_0042a4d0(void *this,byte param_1)

{
  FUN_0042a170(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a4f0 @ 0042a4f0 ////

undefined4 * __thiscall FUN_0042a4f0(void *this,byte param_1)

{
  FUN_0042a2c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a510 @ 0042a510 ////

undefined4 * __thiscall FUN_0042a510(void *this,byte param_1)

{
  FUN_0042a360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a530 @ 0042a530 ////

undefined4 * __thiscall FUN_0042a530(void *this,byte param_1)

{
  FUN_0042a420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a550 @ 0042a550 ////

undefined4 * __thiscall FUN_0042a550(void *this,byte param_1)

{
  thunk_FUN_0042a170(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042a5b0 @ 0042a5b0 ////

void __fastcall FUN_0042a5b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0042a5e0 @ 0042a5e0 ////

void FUN_0042a5e0(void)

{
  return;
}


//// FUNCTION FUN_0042a620 @ 0042a620 ////

undefined4 * __fastcall FUN_0042a620(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d18694;
  return param_1;
}


//// FUNCTION FUN_0042a650 @ 0042a650 ////

void __fastcall FUN_0042a650(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0042a680 @ 0042a680 ////

void FUN_0042a680(void)

{
  return;
}


//// FUNCTION FUN_0042a6c0 @ 0042a6c0 ////

void __fastcall FUN_0042a6c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0042a6f0 @ 0042a6f0 ////

bool __cdecl FUN_0042a6f0(char param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != DAT_00f87be4;
  DAT_00f87be4 = param_1;
  return bVar1;
}


//// FUNCTION FUN_0042a720 @ 0042a720 ////

bool __fastcall FUN_0042a720(int param_1)

{
  return 0x1e < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x15c));
}


//// FUNCTION FUN_0042a7c0 @ 0042a7c0 ////

int * __thiscall FUN_0042a7c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0042a800 @ 0042a800 ////

int * __thiscall FUN_0042a800(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0042aa00 @ 0042aa00 ////

float10 __thiscall FUN_0042aa00(float *param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)*param_1 - (float10)param_2;
  if (fVar1 < (float10)0.0) {
    return (float10)0.0;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  return fVar1;
}


//// FUNCTION FUN_0042aa50 @ 0042aa50 ////

undefined4 * __thiscall FUN_0042aa50(void *this,byte param_1)

{
  thunk_FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042aa80 @ 0042aa80 ////

void FUN_0042aa80(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87bfc;
  if (DAT_00f87bfc != (undefined4 *)0x0) {
    iVar1 = DAT_00f87bfc[0x12];
    DAT_00f87bfc[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f87be8[1])();
    DAT_00f87bfc = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0042aac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_00f87be8)();
    return;
  }
  return;
}


//// FUNCTION FUN_0042aad0 @ 0042aad0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __fastcall FUN_0042aad0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [16];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x270))();
  uVar7 = 0;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x270))();
    uVar7 = 0;
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0xb8) + 0x270))();
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0xd0) + 0x270))();
      pfVar5 = (float *)(**(code **)(*piVar3 + 0x34))(auStack_18);
      pfVar6 = (float *)(**(code **)(*piVar4 + 0x34))(auStack_10);
      fVar1 = SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
                   (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
                   (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2]));
      uVar7 = CONCAT22((short)((uint)pfVar6 >> 0x10),
                       (ushort)(fVar1 < _DAT_00f87be0) << 8 |
                       (ushort)(NAN(fVar1) || NAN(_DAT_00f87be0)) << 10 |
                       (ushort)(fVar1 == _DAT_00f87be0) << 0xe);
      if (fVar1 < _DAT_00f87be0) {
        return CONCAT31((int3)(uVar7 >> 8),1);
      }
    }
  }
  return uVar7;
}


//// FUNCTION FUN_0042abd0 @ 0042abd0 ////

void __fastcall FUN_0042abd0(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float unaff_EDI;
  undefined1 local_8 [8];
  
  piVar2 = *(int **)(param_1 + 0xb8);
  (**(code **)(**(int **)(param_1 + 0xd0) + 0x238))(local_8);
  pfVar3 = (float *)(**(code **)(*piVar2 + 0x238))(local_8);
  fVar1 = *pfVar3 - unaff_EDI;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (0.0 < fVar1) {
    fVar1 = *(float *)(&DAT_00f87b58 + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 2;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042ac90 @ 0042ac90 ////

void __fastcall FUN_0042ac90(int param_1)

{
  float fVar1;
  
  if (0.0 < *(float *)(*(int *)(param_1 + 0xb8) + 0xb18) -
            *(float *)(*(int *)(param_1 + 0xd0) + 0xb18)) {
    fVar1 = *(float *)(&DAT_00f87b5c + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 3;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042acf0 @ 0042acf0 ////

void __fastcall FUN_0042acf0(int param_1)

{
  float fVar1;
  int *piVar2;
  float10 fVar3;
  float10 fVar4;
  
  piVar2 = *(int **)(param_1 + 0xd0);
  fVar3 = FUN_005911a0(*(int **)(param_1 + 0xb8));
  fVar4 = FUN_005911a0(piVar2);
  if ((float10)0.0 < (float10)(float)fVar3 - fVar4) {
    fVar1 = *(float *)(&DAT_00f87b68 + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 6;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042ad60 @ 0042ad60 ////

void __fastcall FUN_0042ad60(int param_1)

{
  float fVar1;
  float *pfVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = (float *)FUN_00585ff0(*(void **)(param_1 + 0xd0),&local_8);
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_00585ff0(*(void **)(param_1 + 0xb8),&local_4);
  fVar1 = *pfVar2 - fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (10.0 < fVar1) {
    fVar1 = *(float *)(&DAT_00f87b64 + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 5;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042ae10 @ 0042ae10 ////

void __fastcall FUN_0042ae10(int param_1)

{
  float fVar1;
  float *pfVar2;
  float local_8;
  float local_4;
  
  pfVar2 = (float *)FUN_00587100(*(void **)(param_1 + 0xd0),&local_8);
  fVar1 = *pfVar2;
  pfVar2 = (float *)FUN_00587100(*(void **)(param_1 + 0xb8),&local_4);
  fVar1 = *pfVar2 - fVar1;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  if (0.0 < fVar1) {
    fVar1 = *(float *)(&DAT_00f87b60 + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 4;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042aec0 @ 0042aec0 ////

void __fastcall FUN_0042aec0(int param_1)

{
  float fVar1;
  
  if (*(int *)(*(int *)(param_1 + 0xd0) + 0x4a0) != *(int *)(*(int *)(param_1 + 0xb8) + 0x4a0)) {
    fVar1 = *(float *)(&DAT_00f87b50 + *(int *)(param_1 + 0x108) * 0x2c);
    if (*(float *)(param_1 + 0x130) < fVar1) {
      *(float *)(param_1 + 0x130) = fVar1;
      *(undefined4 *)(param_1 + 300) = 0;
    }
    *(float *)(param_1 + 0x9c) = fVar1 + *(float *)(param_1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042af20 @ 0042af20 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042af20(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  void *this;
  float *pfVar6;
  float unaff_ESI;
  float10 fVar7;
  float *pfVar8;
  undefined1 local_10 [4];
  float local_c;
  float afStack_8 [2];
  
  piVar2 = *(int **)(param_1 + 0xd0);
  local_c = 0.0;
  uVar5 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x1e0))(local_10);
  pfVar6 = &local_c;
  pfVar8 = afStack_8;
  this = (void *)(**(code **)(*piVar2 + 0x1e0))(pfVar8,pfVar6,uVar5);
  pfVar6 = (float *)FUN_0043b620(this,pfVar8,pfVar6);
  fVar7 = FUN_0043b710(pfVar6);
  fVar1 = (float)fVar7;
  iVar3 = *(int *)(param_1 + 0x108);
  if (((((iVar3 != 2) || (fVar4 = _DAT_00f87bac, ABS(fVar1) < 5.0 == (ABS(fVar1) == 5.0))) &&
       ((iVar3 != 0 || ((fVar1 <= 1.0 || (fVar4 = _DAT_00f87b54, 10.0 <= fVar1)))))) &&
      (fVar4 = unaff_ESI, iVar3 == 1)) && ((fVar1 < -3.0 && (-10.0 < fVar1)))) {
    fVar4 = _DAT_00f87b80;
  }
  if (*(float *)(param_1 + 0x130) < fVar4) {
    *(float *)(param_1 + 0x130) = fVar4;
    *(undefined4 *)(param_1 + 300) = 1;
  }
  *(float *)(param_1 + 0x9c) = fVar4 + *(float *)(param_1 + 0x9c);
  return;
}


//// FUNCTION FUN_0042b030 @ 0042b030 ////

void __thiscall FUN_0042b030(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0xa0) + *(float *)((int)this + 0x9c);
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


//// FUNCTION FUN_0042b080 @ 0042b080 ////

void FUN_0042b080(void)

{
  FUN_0098fd30("Suspended",&DAT_00f87be4,2);
  return;
}


//// FUNCTION FUN_0042b0d0 @ 0042b0d0 ////

void __thiscall FUN_0042b0d0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x158);
  return;
}


//// FUNCTION FUN_0042b0f0 @ 0042b0f0 ////

undefined4 __fastcall FUN_0042b0f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x13c);
}


//// FUNCTION FUN_0042b170 @ 0042b170 ////

void __fastcall FUN_0042b170(int param_1)

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


//// FUNCTION FUN_0042b2b0 @ 0042b2b0 ////

void __fastcall FUN_0042b2b0(int *param_1)

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
  puStack_8 = &LAB_00c9f0f8;
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


//// FUNCTION FUN_0042b380 @ 0042b380 ////

void __fastcall FUN_0042b380(int param_1)

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
  puStack_8 = &LAB_00c9f138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x25;
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
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x26;
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
  uVar3 = FUN_0098b490("Value");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x27;
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
  uVar3 = FUN_0098b490("Degrade");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x28;
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
  uVar3 = FUN_0098b490("GenderType");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x58),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("Name");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x5c));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042b800 @ 0042b800 ////

undefined4 * __thiscall FUN_0042b800(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x94),*(uint *)((int)this + 0x98));
  return param_1;
}


//// FUNCTION FUN_0042b840 @ 0042b840 ////

void __fastcall FUN_0042b840(int *param_1)

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
  puStack_8 = &LAB_00c9f158;
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


//// FUNCTION FUN_0042b910 @ 0042b910 ////

void __fastcall FUN_0042b910(int param_1)

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
  puStack_8 = &LAB_00c9f190;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xb9;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x58));
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
    FUN_00990970((int *)(param_1 + 0x58));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xba;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x40));
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
  uVar3 = FUN_0098b490("PStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x40));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xbb;
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
  uVar3 = FUN_0098b490("BaseChemistry");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x38),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ChemistryManager.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0xbc;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x70));
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
  uVar3 = FUN_0098b490("Modifiers");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x70);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042bcd0 @ 0042bcd0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042bcd0(void)

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
  puStack_8 = &LAB_00c9f379;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"relationships",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_104,'\0');
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MF",2);
  local_100 = 2;
  local_104[2] = '\0';
  local_4._0_1_ = 2;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENDERDIFF",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 3;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b50 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"AGEDIFF",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4._0_1_ = 4;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b54 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"ATTRACTDIFF",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 5;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b58 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PERSONALITYDIFF",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 6;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b5c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PHYSIQUEDIFF",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b60 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STARRATINGDIFF",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 8;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b64 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"IMAGEDIFF",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 9;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b68 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PROMOTINGSAMEFILM",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b6c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"RIVALS",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4._0_1_ = 0xb;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b70 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOWERRANKINGTRAILER",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0xc;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b74 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SIMILARSTARSTATUS",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0xd;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b78 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"FM",2);
  local_100 = 2;
  local_104[2] = '\0';
  local_4._0_1_ = 0xe;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENDERDIFF",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 0xf;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b7c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"AGEDIFF",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4._0_1_ = 0x10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b80 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"ATTRACTDIFF",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 0x11;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b84 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PERSONALITYDIFF",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x12;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b88 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PHYSIQUEDIFF",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 0x13;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b8c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STARRATINGDIFF",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x14;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b90 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"IMAGEDIFF",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 0x15;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b94 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PROMOTINGSAMEFILM",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x16;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b98 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"RIVALS",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4._0_1_ = 0x17;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87b9c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOWERRANKINGTRAILER",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x18;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ba0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SIMILARSTARSTATUS",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x19;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ba4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SS",2);
  local_100 = 2;
  local_104[2] = '\0';
  local_4._0_1_ = 0x1a;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENDERDIFF",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 0x1b;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87ba8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"AGEDIFF",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4._0_1_ = 0x1c;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bac = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"ATTRACTDIFF",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 0x1d;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bb0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PERSONALITYDIFF",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x1e;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bb4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PHYSIQUEDIFF",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 0x1f;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bb8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STARRATINGDIFF",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x20;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bbc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"IMAGEDIFF",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4._0_1_ = 0x21;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bc0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"PROMOTINGSAMEFILM",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x22;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bc4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"RIVALS",6);
  local_100 = 6;
  local_104[6] = '\0';
  local_4._0_1_ = 0x23;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bc8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LOWERRANKINGTRAILER",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x24;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bcc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SIMILARSTARSTATUS",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x25;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bd0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"General",7);
  local_100 = 7;
  local_104[7] = '\0';
  local_4._0_1_ = 0x26;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"CloseTrailerRange",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x27;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87be0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"LoversChemLimit",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x28;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00f87bd4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"NegativeRelationshipEffect",0x1a);
  local_100 = 0x1a;
  local_104[0x1a] = '\0';
  local_4._0_1_ = 0x29;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00f87bd8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"NegativeRelationshipDegrade",0x1b);
  local_100 = 0x1b;
  local_104[0x1b] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x2a);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00f87bdc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042ce40 @ 0042ce40 ////

void __fastcall FUN_0042ce40(int param_1)

{
  int extraout_ECX;
  int extraout_ECX_00;
  
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(*(int *)(param_1 + 0xd0) + 0x4a0) == 0) {
    *(uint *)(param_1 + 0x108) = -(uint)(*(int *)(*(int *)(param_1 + 0xb8) + 0x4a0) != 1) & 2;
  }
  else {
    *(uint *)(param_1 + 0x108) = (*(int *)(*(int *)(param_1 + 0xb8) + 0x4a0) == 1) + 1;
  }
  FUN_0042ac90(param_1);
  FUN_0042acf0(extraout_ECX);
  FUN_0042abd0(param_1);
  FUN_0042ae10(param_1);
  FUN_0042aec0(param_1);
  FUN_0042af20(extraout_ECX_00);
  FUN_0042ad60(param_1);
  return;
}


//// FUNCTION FUN_0042ced0 @ 0042ced0 ////

void __fastcall FUN_0042ced0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  float *pfVar8;
  uint uVar9;
  float unaff_EDI;
  byte *pbVar10;
  bool bVar11;
  void **ppvVar12;
  undefined1 auStack_54 [8];
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f398;
  pvStack_c = ExceptionList;
  iVar2 = *(int *)(param_1 + 0xdc);
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  for (; iVar2 != param_1 + 0xe8; iVar2 = *(int *)(iVar2 + 4)) {
    *(float *)(param_1 + 0xa0) = *(float *)(*(int *)(iVar2 + 8) + 0x88) + *(float *)(param_1 + 0xa0)
    ;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x1ec))();
  if (iVar2 != 0) {
    piVar5 = *(int **)(param_1 + 0xd0);
    iVar2 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x1ec))();
    iVar3 = (**(code **)(*piVar5 + 0x1ec))();
    if (iVar2 == iVar3) {
      *(float *)(param_1 + 0xa0) =
           *(float *)(&DAT_00f87b6c + *(int *)(param_1 + 0x108) * 0x2c) + *(float *)(param_1 + 0xa0)
      ;
    }
  }
  ppvVar12 = apvStack_2c;
  pvVar4 = (void *)FUN_00577370(*(int *)(param_1 + 0xd0));
  piVar5 = FUN_00441210(pvVar4,(int *)ppvVar12);
  ppvVar12 = apvStack_4c;
  uStack_4 = 0;
  pvVar4 = (void *)FUN_00577370(*(int *)(param_1 + 0xb8));
  piVar6 = FUN_00441210(pvVar4,(int *)ppvVar12);
  pbVar10 = (byte *)*piVar5;
  pbVar7 = (byte *)*piVar6;
  do {
    bVar1 = *pbVar7;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0042cfe8:
      iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0042cfed;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0042cfe8;
    pbVar7 = pbVar7 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_0042cfed:
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  uStack_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (iVar2 == 0) {
    *(float *)(param_1 + 0xa0) =
         *(float *)(&DAT_00f87b70 + *(int *)(param_1 + 0x108) * 0x2c) + *(float *)(param_1 + 0xa0);
  }
  piVar5 = *(int **)(param_1 + 0xd0);
  (**(code **)(**(int **)(param_1 + 0xb8) + 0x268))(auStack_54);
  pfVar8 = (float *)(**(code **)(*piVar5 + 0x268))(auStack_54);
  if (*pfVar8 < unaff_EDI) {
    *(float *)(param_1 + 0xa0) =
         *(float *)(&DAT_00f87b74 + *(int *)(param_1 + 0x108) * 0x2c) + *(float *)(param_1 + 0xa0);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xd0) + 0x298))();
  if ((iVar2 != 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0xb8) + 0x298))(), iVar2 != 0)) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xd0) + 0x298))();
    iVar2 = (**(code **)(*piVar5 + 0x28))();
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xb8) + 0x298))();
    iVar3 = (**(code **)(*piVar5 + 0x28))();
    uVar9 = iVar2 - iVar3 >> 0x1f;
    if ((int)((iVar2 - iVar3 ^ uVar9) - uVar9) < 6) {
      *(float *)(param_1 + 0xa0) =
           *(float *)(&DAT_00f87b78 + *(int *)(param_1 + 0x108) * 0x2c) + *(float *)(param_1 + 0xa0)
      ;
    }
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_0042d130 @ 0042d130 ////

void __fastcall FUN_0042d130(int *param_1)

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
  puStack_8 = &LAB_00c9f3b8;
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


//// FUNCTION FUN_0042d400 @ 0042d400 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d400(void)

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
  puStack_8 = &LAB_00c9f427;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"relationships",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_104,'\0');
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"Bonds",5);
  local_100 = 5;
  local_104[5] = '\0';
  local_4._0_1_ = 2;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"FormThreshold",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 3;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e4f844 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"BreakThreshold",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4 = CONCAT31(local_4._1_3_,4);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  _DAT_00e4f848 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042d680 @ 0042d680 ////

void __fastcall FUN_0042d680(int param_1)

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


//// FUNCTION FUN_0042d6a0 @ 0042d6a0 ////

void __fastcall FUN_0042d6a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1888c;
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


//// FUNCTION FUN_0042d720 @ 0042d720 ////

void __thiscall FUN_0042d720(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1889c;
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


//// FUNCTION FUN_0042d770 @ 0042d770 ////

void __fastcall FUN_0042d770(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1889c;
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


//// FUNCTION FUN_0042d7c0 @ 0042d7c0 ////

void __fastcall FUN_0042d7c0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9f448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d188cc;
  param_1[0xe] = &PTR_LAB_00d188ac;
  local_4 = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (10 < (uint)param_1[0x27]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x25]);
  }
  param_1[0x1c] = &PTR_FUN_00d1888c;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  if ((undefined4 *)param_1[0x1e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1e] = param_1[0x1d];
  }
  if (param_1[0x1d] != 0) {
    *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1e];
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x19] = param_1[0x18];
  }
  if (param_1[0x18] != 0) {
    *(undefined4 *)(param_1[0x18] + 4) = param_1[0x19];
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042d8d0 @ 0042d8d0 ////

void FUN_0042d8d0(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f46b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0053c420(puVar1);
    *puVar1 = &PTR_FUN_00d18694;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87be8[1])();
  DAT_00f87bfc = puVar1;
  (*(code *)*DAT_00f87be8)();
  FUN_0042d400();
  FUN_0042bcd0();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0042d960 @ 0042d960 ////

void __thiscall FUN_0042d960(void *this,undefined4 param_1,undefined4 param_2)

{
  (**(code **)(*(int *)((int)this + 0xa4) + 4))();
  *(undefined4 *)((int)this + 0xb8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xa4))();
  (**(code **)(*(int *)((int)this + 0xbc) + 4))();
  *(undefined4 *)((int)this + 0xd0) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0xbc))();
  FUN_0042ce40((int)this);
  return;
}


//// FUNCTION FUN_0042d9b0 @ 0042d9b0 ////

void __fastcall FUN_0042d9b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (((int *)param_1[0x2e] == (int *)0x0) ||
     (cVar3 = (**(code **)(*(int *)param_1[0x2e] + 0x13c))(), cVar3 == '\0')) {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
      return;
    }
  }
  else {
    uVar4 = FUN_0043b490(param_1 + 0x47);
    if ((char)uVar4 != '\0') {
      for (puVar5 = (undefined4 *)param_1[0x37]; puVar5 != param_1 + 0x3a;
          puVar5 = (undefined4 *)puVar5[1]) {
        iVar2 = puVar5[2];
        *(float *)(iVar2 + 0x88) = *(float *)(iVar2 + 0x8c) * *(float *)(iVar2 + 0x88);
      }
    }
    uVar4 = FUN_0043b490(param_1 + 0x43);
    if ((char)uVar4 != '\0') {
      FUN_0042ced0((int)param_1);
    }
    puVar5 = (undefined4 *)param_1[0x37];
    if (puVar5 != param_1 + 0x3a) {
      while (0.0008 <= ABS((float)((undefined4 *)puVar5[2])[0x22])) {
        puVar5 = (undefined4 *)puVar5[1];
        if (puVar5 == param_1 + 0x3a) {
          return;
        }
      }
      (*(code *)**(undefined4 **)puVar5[2])(1);
    }
  }
  return;
}


//// FUNCTION FUN_0042da70 @ 0042da70 ////

undefined4 * __thiscall FUN_0042da70(void *this,byte param_1)

{
  FUN_0042d7c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042da90 @ 0042da90 ////

void __fastcall FUN_0042da90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d188d8;
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


//// FUNCTION FUN_0042dae0 @ 0042dae0 ////

void __fastcall FUN_0042dae0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d188e4;
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


//// FUNCTION FUN_0042db30 @ 0042db30 ////

void __fastcall FUN_0042db30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d188f0;
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


//// FUNCTION FUN_0042db80 @ 0042db80 ////

undefined4 * __thiscall FUN_0042db80(void *this,byte param_1)

{
  FUN_0042da90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042dba0 @ 0042dba0 ////

undefined4 * __thiscall FUN_0042dba0(void *this,byte param_1)

{
  FUN_0042dae0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042dbc0 @ 0042dbc0 ////

undefined4 * __thiscall FUN_0042dbc0(void *this,byte param_1)

{
  FUN_0042db30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042dbe0 @ 0042dbe0 ////

void __fastcall FUN_0042dbe0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9f4e7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1891c;
  param_1[0x19] = &PTR_LAB_00d188fc;
  local_4 = 5;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((undefined4 *)param_1[0x37] != param_1 + 0x3a) {
    do {
      if (*(undefined4 **)(param_1[0x37] + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1[0x37] + 8))(1);
      }
    } while ((undefined4 *)param_1[0x37] != param_1 + 0x3a);
  }
  FUN_0042da90(param_1 + 0x35);
  param_1[0x2f] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x31] = param_1[0x30];
  }
  if (param_1[0x30] != 0) {
    *(undefined4 *)(param_1[0x30] + 4) = param_1[0x31];
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  if ((undefined4 *)param_1[0x31] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x31] = param_1[0x30];
  }
  if (param_1[0x30] != 0) {
    *(undefined4 *)(param_1[0x30] + 4) = param_1[0x31];
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x29] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2b] = param_1[0x2a];
  }
  if (param_1[0x2a] != 0) {
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2b];
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  if ((undefined4 *)param_1[0x2b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2b] = param_1[0x2a];
  }
  if (param_1[0x2a] != 0) {
    *(undefined4 *)(param_1[0x2a] + 4) = param_1[0x2b];
  }
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
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


//// FUNCTION FUN_0042ddd0 @ 0042ddd0 ////

void __fastcall FUN_0042ddd0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9f591;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1895c;
  param_1[0x19] = &PTR_LAB_00d1893c;
  local_4 = 8;
  if ((param_1[0x4f] != 0) && (iVar3 = FUN_005873c0(param_1[0x4f]), iVar3 != 0)) {
    iVar3 = FUN_005873c0(param_1[0x4f]);
    (**(code **)(*(int *)(iVar3 + 0x128) + 4))();
    *(undefined4 *)(iVar3 + 0x13c) = 0;
    (*(code *)**(undefined4 **)(iVar3 + 0x128))();
  }
  if ((undefined4 *)param_1[0x33] != param_1 + 0x36) {
    do {
      piVar1 = (int *)param_1[0x33];
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
    } while ((undefined4 *)param_1[0x33] != param_1 + 0x36);
  }
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x50] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x55] = 0;
  if ((undefined4 *)param_1[0x52] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x52] = param_1[0x51];
  }
  if (param_1[0x51] != 0) {
    *(undefined4 *)(param_1[0x51] + 4) = param_1[0x52];
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4c] = param_1[0x4b];
  }
  if (param_1[0x4b] != 0) {
    *(undefined4 *)(param_1[0x4b] + 4) = param_1[0x4c];
  }
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x44] = &PTR_FUN_00d16954;
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
  param_1[0x3e] = &PTR_FUN_00d16954;
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
  FUN_0042db30(param_1 + 0x31);
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x23] = &PTR_FUN_00d16954;
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
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0042e170 @ 0042e170 ////

undefined4 * __thiscall FUN_0042e170(void *this,byte param_1)

{
  FUN_0042dbe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042e190 @ 0042e190 ////

undefined4 * __thiscall FUN_0042e190(void *this,byte param_1)

{
  FUN_0042ddd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042e1b0 @ 0042e1b0 ////

void __fastcall FUN_0042e1b0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d188d8;
  return;
}


//// FUNCTION FUN_0042e210 @ 0042e210 ////

void __fastcall FUN_0042e210(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d188e4;
  return;
}


//// FUNCTION FUN_0042e270 @ 0042e270 ////

void __fastcall FUN_0042e270(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d188f0;
  return;
}


//// FUNCTION FUN_0042e2d0 @ 0042e2d0 ////

undefined4 * __thiscall
FUN_0042e2d0(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f637;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x38));
  *(undefined ***)this = &PTR_FUN_00d188cc;
  *(undefined4 *)((int)this + 0x38) = &PTR_LAB_00d188ac;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  piVar1 = (int *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int **)((int)this + 0x7c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1888c;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x94) = (undefined2 *)((int)this + 0xa0);
  *(undefined2 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 10;
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*piVar1 + 4))();
  *(int *)((int)this + 0x84) = param_3;
  (**(code **)*piVar1)();
  *(void **)((int)this + 0x68) = this;
  FUN_00acdb9e(0xe4f7dc);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x6c) = iVar3;
  if (s___AV__InList_VCRelationship_TM___00e4f7b4[0x26] != '\0') {
    iVar3 = 0x60;
    pcVar5 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe4f7dc);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    s___AV__InList_VCRelationship_TM___00e4f7b4[0x26] = '\0';
  }
  uVar2 = *(undefined4 *)(param_3 + 0x108);
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(undefined4 *)((int)this + 0x90) = uVar2;
  *(undefined4 *)((int)this + 0x88) = param_1;
  FUN_004036d0((undefined4 *)((int)this + 0x94),(wchar_t *)*param_4,param_4[1]);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0042e410 @ 0042e410 ////

undefined4 * __fastcall FUN_0042e410(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f6b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1891c;
  param_1[0x19] = &PTR_LAB_00d188fc;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1 + 0x29;
  param_1[0x29] = &PTR_FUN_00d16954;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_1 + 0x2f;
  param_1[0x2f] = &PTR_FUN_00d16954;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar1 = param_1 + 0x3a;
  param_1[0x3c] = 0;
  *puVar1 = 0;
  param_1[0x3b] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x35] = &PTR_LAB_00d188d8;
  param_1[0x37] = puVar1;
  *puVar1 = param_1 + 0x36;
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_0043b460(param_1 + 0x43);
  FUN_0043b460(param_1 + 0x47);
  param_1[0x25] = param_1;
  FUN_00acdb9e(0xe4f800);
  iVar2 = FUN_0097dda0();
  param_1[0x26] = iVar2;
  if (s__PAVChemistryModifier_TM___00e4f7e4[0x1b] != '\0') {
    iVar2 = 0x8c;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe4f800);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s__PAVChemistryModifier_TM___00e4f7e4[0x1b] = '\0';
  }
  iVar2 = FUN_00990d30(0x19,0x23);
  param_1[0x43] = iVar2;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0xffffffff;
  param_1[0x47] = 10;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0042e5b0 @ 0042e5b0 ////

undefined4 * __cdecl FUN_0042e5b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f6cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x134);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0042e410(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x29] + 4))();
  puVar2[0x2e] = param_1;
  (**(code **)puVar2[0x29])();
  (**(code **)(puVar2[0x2f] + 4))();
  puVar2[0x34] = param_2;
  (**(code **)puVar2[0x2f])();
  FUN_0042ce40((int)puVar2);
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_0042e650 @ 0042e650 ////

void __thiscall FUN_0042e650(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f6eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xb4);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0042e2d0(this_00,param_1,param_2,(int)this,param_3);
  }
  piVar1 = (int *)((int)this + 0xe8);
  piVar3 = puVar2 + 0x18;
  puVar2[0x19] = piVar1;
  *piVar3 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar3;
  *piVar1 = (int)piVar3;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0042e6d0 @ 0042e6d0 ////

void __thiscall FUN_0042e6d0(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  (**(code **)(*(int *)((int)this + 0x110) + 4))();
  *(undefined4 *)((int)this + 0x124) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x110))();
  if ((int **)DAT_00f87c08 != &DAT_00f87c14) {
    piVar1 = (int *)((int)this + 0xd8);
    puVar4 = DAT_00f87c08;
    do {
      puVar2 = FUN_0042e5b0(*(undefined4 *)(puVar4[2] + 0x124),*(undefined4 *)((int)this + 0x124));
      piVar3 = puVar2 + 0x23;
      puVar2[0x24] = piVar1;
      *piVar3 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar3;
      *piVar1 = (int)piVar3;
      puVar4 = (undefined4 *)puVar4[1];
    } while ((int **)puVar4 != &DAT_00f87c14);
  }
  piVar1 = (int *)((int)this + 0xb4);
  *(int ***)((int)this + 0xb8) = &DAT_00f87c14;
  *piVar1 = (int)DAT_00f87c14;
  *(int **)((int)DAT_00f87c14 + 4) = piVar1;
  DAT_00f87c14 = piVar1;
  return;
}


//// FUNCTION FUN_0042e770 @ 0042e770 ////

void __thiscall FUN_0042e770(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = *(int *)((int)this + 0xcc);
  while( true ) {
    if (iVar3 == (int)this + 0xd8) {
      puVar4 = FUN_0042e5b0(param_1,*(undefined4 *)((int)this + 0x124));
      piVar1 = (int *)((int)this + 0xd8);
      piVar2 = puVar4 + 0x23;
      puVar4[0x24] = piVar1;
      *piVar2 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar2;
      *piVar1 = (int)piVar2;
      return;
    }
    if (*(int *)(*(int *)(iVar3 + 8) + 0xb8) == param_1) break;
    iVar3 = *(int *)(iVar3 + 4);
  }
  return;
}


//// FUNCTION FUN_0042e7e0 @ 0042e7e0 ////

undefined4 * __fastcall FUN_0042e7e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f737;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d188cc;
  param_1[0xe] = &PTR_LAB_00d188ac;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  piVar1 = param_1 + 0x1c;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1888c;
  param_1[0x21] = 0;
  param_1[0x25] = param_1 + 0x28;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 10;
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*piVar1 + 4))();
  param_1[0x21] = 0;
  (**(code **)*piVar1)();
  param_1[0x1a] = param_1;
  FUN_00acdb9e(0xe4f7dc);
  iVar2 = FUN_0097dda0();
  param_1[0x1b] = iVar2;
  if (s__PAVCRelationship_TM___00e4f808[0x17] != '\0') {
    iVar2 = 0x60;
    pcVar5 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe4f7dc);
    FUN_0097df60(pcVar3,pcVar5,iVar2);
    s__PAVCRelationship_TM___00e4f808[0x17] = '\0';
  }
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x25,(wchar_t *)&lpCaption_00d16918,uVar4);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0042e910 @ 0042e910 ////

float * __thiscall FUN_0042e910(void *this,float *param_1,int param_2)

{
  void *this_00;
  float *extraout_EDX;
  
  if ((param_2 != *(int *)((int)this + 0x124)) && (DAT_00f87be4 == '\0')) {
    this_00 = (void *)FUN_0042e770(this,param_2);
    if (this_00 != (void *)0x0) {
      FUN_0042b030(this_00,param_1);
      return extraout_EDX;
    }
    FUN_00407070(param_1,0.5);
    return param_1;
  }
  *param_1 = 0.5;
  return param_1;
}


//// FUNCTION FUN_0042e970 @ 0042e970 ////

void __thiscall FUN_0042e970(void *this,int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_0042e770(this,param_1);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x9c) = param_2 + *(float *)(iVar1 + 0x9c);
  }
  return;
}


//// FUNCTION FUN_0042e9a0 @ 0042e9a0 ////

undefined4 * __cdecl FUN_0042e9a0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  int **ppiVar6;
  int *piVar7;
  int *piVar8;
  float fStack_4;
  
  piVar8 = param_2;
  cVar2 = (**(code **)(*param_2 + 0x13c))();
  piVar1 = param_3;
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_3 + 0x13c))();
    if (cVar2 != '\0') {
      iVar3 = FUN_005873c0((int)piVar8);
      if (iVar3 != 0) {
        iVar3 = FUN_005873c0((int)piVar1);
        if (iVar3 != 0) {
          ppiVar6 = &param_2;
          piVar7 = piVar1;
          pvVar4 = (void *)FUN_005873c0((int)piVar8);
          pfVar5 = FUN_0042e910(pvVar4,(float *)ppiVar6,(int)piVar7);
          param_2 = (int *)*pfVar5;
          pfVar5 = &fStack_4;
          pvVar4 = (void *)FUN_005873c0((int)piVar1);
          pfVar5 = FUN_0042e910(pvVar4,pfVar5,(int)piVar8);
          FUN_00407070(param_1,((float)param_2 + *pfVar5) * 0.5);
          return param_1;
        }
      }
      FUN_00407070(param_1,0.5);
      return param_1;
    }
  }
  *param_1 = 0x3f000000;
  return param_1;
}


//// FUNCTION FUN_0042ea60 @ 0042ea60 ////

void __fastcall FUN_0042ea60(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  void *this;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar7 = 0;
    local_8 = 0.0;
    local_4 = 0.0;
    if ((*(int *)(param_1 + 0xcc) != param_1 + 0xd8) &&
       (puVar6 = DAT_0104d05c, DAT_0104d05c != &DAT_0104d068)) {
      do {
        piVar2 = (int *)puVar6[2];
        if ((piVar2 != *(int **)(param_1 + 0x124)) &&
           (((cVar3 = (**(code **)(*piVar2 + 0x13c))(), cVar3 != '\0' &&
             (iVar4 = FUN_005773c0((int)piVar2), iVar4 != 0)) &&
            (iVar4 = FUN_005873c0((int)piVar2),
            0x1e < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(iVar4 + 0x15c)))))) {
          iVar4 = *(int *)(param_1 + 0x124);
          pfVar5 = &local_4;
          this = (void *)FUN_005873c0((int)piVar2);
          pfVar5 = FUN_0042e910(this,pfVar5,iVar4);
          local_8 = local_8 + *pfVar5;
          iVar7 = iVar7 + 1;
        }
        puVar1 = puVar6 + 1;
        puVar6 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != &DAT_0104d068);
      if (iVar7 != 0) {
        local_8 = local_8 / (float)iVar7;
      }
      if (local_8 < 0.0) {
        *(undefined4 *)(param_1 + 0x158) = 0;
        return;
      }
      if (1.0 < local_8) {
        *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
        return;
      }
    }
    *(float *)(param_1 + 0x158) = local_8;
  }
  return;
}


//// FUNCTION FUN_0042ebb0 @ 0042ebb0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042ebb0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  float fStack_8;
  float local_4;
  
  piVar8 = (int *)0x0;
  if (*(int **)(param_1 + 0x13c) != (int *)0x0) {
    pfVar5 = (float *)FUN_0042e9a0(&local_4,*(int **)(param_1 + 0x124),*(int **)(param_1 + 0x13c));
    if ((((_DAT_00e4f848 <= *pfVar5) &&
         (iVar6 = FUN_005773c0(*(int *)(param_1 + 0x13c)), iVar6 != 0)) &&
        (bVar3 = FUN_00599190(*(int *)(param_1 + 0x13c)), !bVar3)) &&
       (cVar4 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x13c))(), cVar4 != '\0')) {
      return;
    }
    iVar6 = FUN_005873c0(*(int *)(param_1 + 0x13c));
    (**(code **)(*(int *)(iVar6 + 0x128) + 4))();
    *(undefined4 *)(iVar6 + 0x13c) = 0;
    (*(code *)**(undefined4 **)(iVar6 + 0x128))();
    (**(code **)(*(int *)(param_1 + 0x128) + 4))();
    *(undefined4 *)(param_1 + 0x13c) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x128))();
  }
  if (((*(int *)(param_1 + 0xcc) != param_1 + 0xd8) &&
      (iVar6 = FUN_005773c0(*(int *)(param_1 + 0x124)), iVar6 != 0)) &&
     (FUN_00407070(&local_4,0.0), puVar7 = DAT_0104d05c, DAT_0104d05c != &DAT_0104d068)) {
    do {
      piVar1 = (int *)puVar7[2];
      if (((piVar1 != *(int **)(param_1 + 0x124)) &&
          (cVar4 = (**(code **)(*piVar1 + 0x13c))(), cVar4 != '\0')) &&
         (((iVar6 = FUN_005773c0((int)piVar1), iVar6 != 0 &&
           (((FUN_0042e9a0(&fStack_8,*(int **)(param_1 + 0x124),piVar1), _DAT_00e4f844 < fStack_8 &&
             (local_4 < fStack_8)) &&
            (iVar6 = FUN_005873c0((int)piVar1), *(int *)(iVar6 + 0x13c) == 0)))) &&
          (bVar3 = FUN_00599190((int)piVar1), !bVar3)))) {
        local_4 = fStack_8;
        piVar8 = piVar1;
      }
      puVar7 = (undefined4 *)puVar7[1];
    } while (puVar7 != &DAT_0104d068);
    if (piVar8 != (int *)0x0) {
      (**(code **)(*(int *)(param_1 + 0x128) + 4))();
      *(int **)(param_1 + 0x13c) = piVar8;
      (*(code *)**(undefined4 **)(param_1 + 0x128))();
      uVar2 = *(undefined4 *)(param_1 + 0x124);
      iVar6 = FUN_005873c0((int)piVar8);
      (**(code **)(*(int *)(iVar6 + 0x128) + 4))();
      *(undefined4 *)(iVar6 + 0x13c) = uVar2;
      (*(code *)**(undefined4 **)(iVar6 + 0x128))();
    }
  }
  return;
}


//// FUNCTION FUN_0042ed90 @ 0042ed90 ////

void __fastcall FUN_0042ed90(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xa4));
  if ((char)uVar1 != '\0') {
    FUN_0042ea60(param_1);
    FUN_0042ebb0(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_0042edc0 @ 0042edc0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_0042edc0(int *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  
  piVar2 = param_2;
  pfVar3 = (float *)FUN_0042e9a0(&param_2,param_1,param_2);
  if (param_1[0x128] != piVar2[0x128]) {
    fVar1 = *pfVar3;
    pfVar3 = (float *)CONCAT22((short)((uint)pfVar3 >> 0x10),
                               (ushort)(fVar1 < _DAT_00f87bd4) << 8 |
                               (ushort)(NAN(fVar1) || NAN(_DAT_00f87bd4)) << 10 |
                               (ushort)(fVar1 == _DAT_00f87bd4) << 0xe);
    if (fVar1 >= _DAT_00f87bd4 && (fVar1 == _DAT_00f87bd4) == 0) {
      return CONCAT31((int3)((uint)pfVar3 >> 8),1);
    }
  }
  return (uint)pfVar3 & 0xffffff00;
}


//// FUNCTION FUN_0042ee00 @ 0042ee00 ////

undefined4 * __fastcall FUN_0042ee00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f7db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d1893c;
  piVar1 = param_1 + 0x23;
  *param_1 = &PTR_FUN_00d1895c;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  param_1[0x28] = 0;
  local_4._0_1_ = 2;
  FUN_0043b460(param_1 + 0x29);
  param_1[0x2f] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar2 = param_1 + 0x36;
  param_1[0x38] = 0;
  *puVar2 = 0;
  param_1[0x37] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x31] = &PTR_LAB_00d188f0;
  param_1[0x33] = puVar2;
  *puVar2 = param_1 + 0x32;
  piVar3 = param_1 + 0x3e;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = piVar3;
  *piVar3 = (int)&PTR_FUN_00d16954;
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = param_1 + 0x44;
  param_1[0x44] = &PTR_FUN_00d16954;
  param_1[0x49] = 0;
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = param_1 + 0x4a;
  param_1[0x4a] = &PTR_FUN_00d16954;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = param_1 + 0x50;
  param_1[0x50] = &PTR_FUN_00d16954;
  param_1[0x55] = 0;
  local_4 = CONCAT31(local_4._1_3_,10);
  param_1[0x56] = 0;
  param_1[0x2f] = param_1;
  FUN_00acdb9e(0xe4f824);
  iVar4 = FUN_0097dda0();
  param_1[0x30] = iVar4;
  if (DAT_00e4f820 != '\0') {
    iVar4 = 0xb4;
    pcVar6 = "ManagerLink";
    pcVar5 = (char *)FUN_00acdb9e(0xe4f824);
    FUN_0097df60(pcVar5,pcVar6,iVar4);
    DAT_00e4f820 = '\0';
  }
  (**(code **)(param_1[0x44] + 4))();
  param_1[0x49] = 0;
  (**(code **)param_1[0x44])();
  (**(code **)(*piVar3 + 4))();
  param_1[0x43] = 0;
  (**(code **)*piVar3)();
  (**(code **)(param_1[0x50] + 4))();
  param_1[0x55] = 0;
  (**(code **)param_1[0x50])();
  (**(code **)(*piVar1 + 4))();
  param_1[0x28] = 0;
  (**(code **)*piVar1)();
  param_1[0x56] = 0;
  param_1[0x57] = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  param_1[0x29] = 0xe;
  FUN_0042ea60((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0042f040 @ 0042f040 ////

undefined4 * __cdecl FUN_0042f040(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f7fb;
  local_c = ExceptionList;
  puVar6 = DAT_00f87c08;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (DAT_00f87c08 != &DAT_00f87c14) {
    do {
      iVar2 = puVar6[2];
      puVar4 = FUN_0042e5b0(param_1,*(undefined4 *)(iVar2 + 0x124));
      piVar5 = puVar4 + 0x23;
      piVar1 = (int *)(iVar2 + 0xd8);
      puVar4[0x24] = piVar1;
      *piVar5 = *piVar1;
      *(int **)(*piVar1 + 4) = piVar5;
      *piVar1 = (int)piVar5;
      puVar4 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar4;
      ppvVar3 = ExceptionList;
    } while ((undefined4 *)*puVar4 != &DAT_00f87c14);
  }
  ExceptionList = ppvVar3;
  puVar6 = operator_new(0x160);
  puVar4 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar4 = FUN_0042ee00(puVar6);
  }
  local_4 = 0xffffffff;
  FUN_0042e6d0(puVar4,param_1);
  ExceptionList = local_c;
  return puVar4;
}


//// FUNCTION FUN_0042f110 @ 0042f110 ////

int * __thiscall FUN_0042f110(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0042f150 @ 0042f150 ////

int * __thiscall FUN_0042f150(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0042f1d0 @ 0042f1d0 ////

void __fastcall FUN_0042f1d0(int param_1)

{
  bool bVar1;
  
  if (DAT_00f87aa0 != 0) {
    bVar1 = FUN_00413cc0(DAT_00f87aa0);
    if (bVar1) {
      if ((*(void **)(param_1 + 0x90) != (void *)0x0) && (*(int *)(param_1 + 0xa8) != 0)) {
        FUN_004031d0(*(void **)(param_1 + 0x90),0);
        FUN_004031d0(*(void **)(param_1 + 0xa8),0);
      }
      DAT_00e682b4 = 0 < DAT_0105be08;
      return;
    }
  }
  if ((*(void **)(param_1 + 0x90) != (void *)0x0) && (*(int *)(param_1 + 0xa8) != 0)) {
    FUN_004031d0(*(void **)(param_1 + 0x90),1);
    FUN_004031d0(*(void **)(param_1 + 0xa8),1);
  }
  DAT_00e682b4 = 1;
  return;
}


//// FUNCTION FUN_0042f250 @ 0042f250 ////

void FUN_0042f250(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87c48;
  if (DAT_00f87c48 != (undefined4 *)0x0) {
    iVar1 = DAT_00f87c48[0x12];
    DAT_00f87c48[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_00f87c34[1])();
    DAT_00f87c48 = (undefined4 *)0x0;
    (*(code *)*DAT_00f87c34)();
  }
  FUN_0048ea60();
  return;
}


//// FUNCTION FUN_0042f2a0 @ 0042f2a0 ////

uint FUN_0042f2a0(uint param_1)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined3 uVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x4d);
  uVar5 = 0;
  if (*pbVar1 != 0) {
    piVar6 = *(int **)(param_1 + 0x5c);
    do {
      param_1 = 0;
      if ((((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x40), param_1 = 0, iVar2 != 0)) &&
          (param_1 = *(uint *)(iVar2 + 0xb0), (int)param_1 <= DAT_0105bec0)) &&
         (param_1 != 0xffffffff)) {
        bVar3 = DAT_0105bec0 + -1 <= (int)param_1;
        uVar4 = (undefined3)(param_1 >> 8);
        param_1 = CONCAT31(uVar4,bVar3);
        if (bVar3) {
          return CONCAT31(uVar4,1);
        }
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < *pbVar1);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_0042f2ad @ 0042f2ad ////

uint FUN_0042f2ad(void)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  uint in_EAX;
  undefined3 uVar4;
  uint uVar5;
  int *piVar6;
  
  pbVar1 = (byte *)(in_EAX + 0x4d);
  uVar5 = 0;
  if (*pbVar1 != 0) {
    piVar6 = *(int **)(in_EAX + 0x5c);
    do {
      in_EAX = 0;
      if ((((*piVar6 != 0) && (iVar2 = *(int *)(*piVar6 + 0x40), in_EAX = 0, iVar2 != 0)) &&
          (in_EAX = *(uint *)(iVar2 + 0xb0), (int)in_EAX <= DAT_0105bec0)) && (in_EAX != 0xffffffff)
         ) {
        bVar3 = DAT_0105bec0 + -1 <= (int)in_EAX;
        uVar4 = (undefined3)(in_EAX >> 8);
        in_EAX = CONCAT31(uVar4,bVar3);
        if (bVar3) {
          return CONCAT31(uVar4,1);
        }
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < *pbVar1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0042f370 @ 0042f370 ////

void __thiscall FUN_0042f370(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  char *_Dest;
  uint uVar11;
  char acStack_40 [8];
  undefined4 uStack_38;
  undefined4 *puVar12;
  float afStack_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar12 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f81b;
  pvStack_c = ExceptionList;
  iVar6 = (int)param_1 * 3 + 0x12;
  piVar2 = *(int **)((int)this + iVar6 * 8);
  piVar1 = (int *)((int)this + iVar6 * 8);
  iVar6 = 0;
  ExceptionList = &pvStack_c;
  if (piVar2 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*piVar2 + 4))();
    puVar4 = (undefined4 *)*piVar1;
    if (puVar4 != (undefined4 *)0x0) {
      piVar2 = puVar4 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar4)();
      }
      puVar4 = (undefined4 *)((int)this + (int)param_1 * 0x18 + 0x7c);
      (**(code **)(*(int *)((int)this + (int)param_1 * 0x18 + 0x7c) + 4))();
      puVar4[5] = 0;
      (**(code **)*puVar4)();
    }
  }
  pvVar3 = operator_new(0x2e0);
  uStack_4 = 0;
  if (pvVar3 == (void *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    uStack_38 = 0x42f403;
    fVar7 = FUN_004012c0(0.0);
    afStack_18[0] = 0.0;
    afStack_18[1] = 0.0;
    afStack_18[2] = 0.0;
    uStack_38 = 0x42f42f;
    param_1 = FUN_00445f60(pvVar3,afStack_18,(float)fVar7);
  }
  puVar4 = (undefined4 *)((int)this + (int)puVar12 * 0x18 + 0x7c);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)((int)this + (int)puVar12 * 0x18 + 0x7c) + 4))();
  puVar4[5] = param_1;
  (**(code **)*puVar4)();
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 0xb0))();
    (**(code **)(*(int *)*piVar1 + 0xb4))();
    pvVar3 = (void *)*piVar1;
    pbVar8 = &stack0xffffffbc;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xffffffb0,"outside",7);
    puVar4 = FUN_008bb950(pbVar8,uVar10,uVar11);
    FUN_008ba340(puVar4,pvVar3);
    iVar5 = *piVar1;
    pbVar8 = &stack0xffffffb8;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xffffffac,"outside",7);
    puVar4 = FUN_008bb950(pbVar8,uVar10,uVar11);
    uStack_38 = 0x42f4ef;
    FUN_008ba250(puVar4,(int)puVar12,iVar5);
    pvVar3 = *(void **)(*piVar1 + 0x214);
    iVar5 = FUN_00975c50(pvVar3,0);
    if (0 < iVar5) {
      do {
        _Dest = acStack_40;
        acStack_40[0] = '\0';
        uVar11 = 0x14;
        _strncpy(_Dest,"costume_plain",0xd);
        uVar10 = 0xd;
        iVar9 = iVar6;
        _Dest[0xd] = '\0';
        FUN_00404050((void *)*piVar1,0,iVar9,_Dest,uVar10,uVar11);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    FUN_00977c80(pvVar3);
  }
  FUN_00403130(*piVar1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0042f590 @ 0042f590 ////

void __fastcall FUN_0042f590(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d18998;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0042f5e0 @ 0042f5e0 ////

void __fastcall FUN_0042f5e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d18998;
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


//// FUNCTION FUN_0042f630 @ 0042f630 ////

void __fastcall FUN_0042f630(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d189a8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0042f680 @ 0042f680 ////

void __fastcall FUN_0042f680(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d189a8;
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


//// FUNCTION FUN_0042f6d0 @ 0042f6d0 ////

/* WARNING: Removing unreachable block (ram,0x0042f7e1) */
/* WARNING: Removing unreachable block (ram,0x0042f840) */
/* WARNING: Removing unreachable block (ram,0x0042f775) */
/* WARNING: Removing unreachable block (ram,0x0042f7d4) */
/* WARNING: Removing unreachable block (ram,0x0042f84d) */

void __fastcall FUN_0042f6d0(int param_1)

{
  undefined4 uVar1;
  char *_Dest;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = DAT_00e4fa4c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f848;
  pvStack_c = ExceptionList;
  if (DAT_0105be08 != 0) {
    DAT_01050b64 = &LAB_00494dc0;
    ExceptionList = &pvStack_c;
    _Dest = _malloc(0x20);
    _strncpy(_Dest,"ai_outside_cars_a.flm",0x15);
    _Dest[0x15] = '\0';
    uStack_4 = 0;
    FUN_0042f370((void *)param_1,(undefined4 *)0x0);
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  return;
}


//// FUNCTION FUN_0042f6f2 @ 0042f6f2 ////

void __thiscall FUN_0042f6f2(void *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *unaff_EBX;
  bool in_ZF;
  undefined4 uStack00000004;
  char *pcStack00000008;
  uint uStack00000010;
  char cStack00000014;
  void *in_stack_00000028;
  
  uVar1 = DAT_00e4fa4c;
  if (in_ZF) {
    *(undefined4 **)((int)this + 0x78) = unaff_EBX;
    *(undefined4 *)((int)this + 0xf8) = uVar1;
    ExceptionList = in_stack_00000028;
    return;
  }
  pcStack00000008 = &stack0x00000014;
  uStack00000004 = DAT_01050b64;
  DAT_01050b64 = &LAB_00494dc0;
  cVar2 = (char)unaff_EBX;
  uStack00000010 = 0x20;
  cStack00000014 = cVar2;
  pcStack00000008 = _malloc(0x20);
  _strncpy(pcStack00000008,"ai_outside_cars_a.flm",0x15);
  pcStack00000008[0x15] = cVar2;
  FUN_0042f370(this,unaff_EBX);
  if (0x14 < uStack00000010) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack00000008);
  }
  pcStack00000008 = &stack0x00000014;
  uStack00000010 = 0x20;
  cStack00000014 = cVar2;
  pcStack00000008 = _malloc(0x20);
  _strncpy(pcStack00000008,"ai_outside_cars_b.flm",0x15);
  pcStack00000008[0x15] = cVar2;
  FUN_0042f370(this,(undefined4 *)0x1);
  if (0x14 < uStack00000010) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack00000008);
  }
  pcStack00000008 = &stack0x00000014;
  uStack00000010 = 0x20;
  cStack00000014 = cVar2;
  pcStack00000008 = _malloc(0x20);
  _strncpy(pcStack00000008,"ai_outside_cars_t_lights.flm",0x1c);
  pcStack00000008[0x1c] = cVar2;
  FUN_0042f370(this,(undefined4 *)0x2);
  uVar1 = DAT_00e4fa4c;
  if (0x14 < uStack00000010) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack00000008);
  }
  DAT_01050b64 = (undefined1 *)uStack00000004;
  *(undefined4 **)((int)this + 0x78) = unaff_EBX;
  *(undefined4 *)((int)this + 0xf8) = uVar1;
  ExceptionList = in_stack_00000028;
  return;
}


//// FUNCTION FUN_0042f8a0 @ 0042f8a0 ////

void __fastcall FUN_0042f8a0(int param_1)

{
  int iVar1;
  float *pfVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  float local_8;
  float local_4;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    pfVar6 = (float *)&DAT_00e4fa4c;
    pfVar2 = (float *)FUN_0043b520(&local_8,5.0);
    pvVar3 = (void *)FUN_0043b600((void *)(param_1 + 0xf8),&local_4,pfVar2);
    uVar4 = FUN_0043b6c0(pvVar3,pfVar6);
    if ((char)uVar4 != '\0') {
      *(undefined4 *)(param_1 + 0x78) = 0x14;
    }
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (0 < iVar1) {
    if (iVar1 != 1) {
      *(int *)(param_1 + 0x78) = iVar1 + -1;
      return;
    }
    if (((*(int *)(param_1 + 0x90) != 0) && (iVar1 = *(int *)(param_1 + 0xa8), iVar1 != 0)) &&
       ((uVar5 = FUN_0042f2a0(*(uint *)(*(int *)(param_1 + 0x90) + 0x214)), (char)uVar5 != '\0' ||
        (uVar5 = FUN_0042f2a0(*(uint *)(iVar1 + 0x214)), (char)uVar5 != '\0')))) {
      pfVar6 = (float *)&DAT_00e4fa4c;
      pfVar2 = (float *)FUN_0043b520(&local_4,15.0);
      pvVar3 = (void *)FUN_0043b600((void *)(param_1 + 0xf8),&local_8,pfVar2);
      uVar4 = FUN_0043b6c0(pvVar3,pfVar6);
      if ((char)uVar4 == '\0') {
        return;
      }
    }
    FUN_0042f6d0(param_1);
  }
  return;
}


//// FUNCTION FUN_0042f970 @ 0042f970 ////

void __fastcall FUN_0042f970(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9f88c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d18a08;
  local_4 = 2;
  piVar4 = param_1 + 0x1f;
  iVar3 = 3;
  do {
    puVar1 = (undefined4 *)piVar4[5];
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = puVar1 + 0x12;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
      (**(code **)(*piVar4 + 4))();
      piVar4[5] = 0;
      (**(code **)*piVar4)();
    }
    piVar4 = piVar4 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar2 = (int *)param_1[0x33];
  piVar4 = param_1 + 0x36;
  param_1[0x31] = &PTR_LAB_00d167a0;
  while (piVar2 != piVar4) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  param_1[0x33] = 0;
  *piVar4 = 0;
  if ((void *)param_1[0x3b] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3b]);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((int *)param_1[0x37] != (int *)0x0) {
    *(int *)param_1[0x37] = *piVar4;
  }
  if (*piVar4 != 0) {
    *(undefined4 *)(*piVar4 + 4) = param_1[0x37];
  }
  *piVar4 = 0;
  param_1[0x37] = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x1f,0x18,3,FUN_0042f680);
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0042fab0 @ 0042fab0 ////

undefined4 * __thiscall FUN_0042fab0(void *this,byte param_1)

{
  FUN_0042f970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0042fad0 @ 0042fad0 ////

undefined4 * __fastcall FUN_0042fad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f8e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d18a08;
  _eh_vector_constructor_iterator_(param_1 + 0x1f,0x18,3,FUN_0042f630,FUN_0042f680);
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = param_1 + 0x36;
  param_1[0x38] = 0;
  *puVar1 = 0;
  param_1[0x37] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x31] = &PTR_LAB_00d167a0;
  param_1[0x33] = puVar1;
  *puVar1 = param_1 + 0x32;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0043b510(param_1 + 0x3e);
  param_1[0x1e] = 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CityTraffic_Constructor @ 0042fb90 ////

/* WARNING: Removing unreachable block (ram,0x0042fc5a) */

void CityTraffic_Constructor(void)

{
  undefined4 *puVar1;
  char acStack_20 [14];
  undefined1 uStack_12;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f903;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0048e4d0();
  puVar1 = operator_new(0xfc);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_0042fad0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_00f87c34[1])();
  DAT_00f87c48 = puVar1;
  (*(code *)*DAT_00f87c34)();
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"cit_reloadcars",0xe);
  uStack_12 = 0;
  local_4 = 1;
  FUN_005434b0();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0042fcb0 @ 0042fcb0 ////

void __fastcall FUN_0042fcb0(int *param_1)

{
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x14));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0042fce0 @ 0042fce0 ////

void FUN_0042fce0(void)

{
  return;
}


//// FUNCTION FUN_0042fd50 @ 0042fd50 ////

undefined1 __fastcall FUN_0042fd50(int param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  float10 fVar3;
  
  uVar2 = 1;
  fVar3 = FUN_0043b710((float *)(param_1 + 0x9c));
  if ((float10)0.0 < fVar3) {
    uVar1 = FUN_0043b680((float *)(param_1 + 0x9c),(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      uVar2 = 0;
    }
  }
  fVar3 = FUN_0043b710((float *)(param_1 + 0xa0));
  if ((float10)0.0 < fVar3) {
    uVar1 = FUN_0043b6c0((float *)(param_1 + 0xa0),(float *)&DAT_00e4fa4c);
    if ((char)uVar1 != '\0') {
      return 0;
    }
  }
  return uVar2;
}


//// FUNCTION FUN_0042fdc0 @ 0042fdc0 ////

undefined4 __thiscall FUN_0042fdc0(void *this,int param_1)

{
  char cVar1;
  uint in_EAX;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  float *this_00;
  float *this_01;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 == 0) goto LAB_0042fea0;
  cVar1 = FUN_0042fd50(param_1);
  in_EAX = CONCAT31(extraout_var,cVar1);
  if (cVar1 == '\0') {
    in_EAX = FUN_0043b6e0((void *)((int)this + 0x9c),(float *)&DAT_00e4fa4c);
    if ((char)in_EAX != '\0') {
      in_EAX = FUN_0043b6e0((void *)(param_1 + 0x9c),(float *)&DAT_00e4fa4c);
      if ((char)in_EAX == '\0') {
LAB_0042fea0:
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
      this_01 = (float *)((int)this + 0xa0);
      fVar3 = FUN_0043b710(this_01);
      if ((float10)0.0 != fVar3) {
        uVar2 = FUN_0043b6a0(this_01,(float *)&DAT_00e4fa4c);
        if ((char)uVar2 == '\0') {
          this_00 = (float *)(param_1 + 0xa0);
          fVar3 = FUN_0043b710(this_00);
          fVar4 = (float10)0.0;
          in_EAX = CONCAT22(extraout_var_00,
                            (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10
                            | (ushort)(fVar4 == fVar3) << 0xe);
          if (fVar4 != fVar3) {
            in_EAX = FUN_0043b6a0(this_00,(float *)&DAT_00e4fa4c);
            if ((char)in_EAX == '\0') {
              uVar2 = FUN_0043b6c0(this_00,this_01);
              return uVar2;
            }
          }
          goto LAB_0042fea7;
        }
      }
      fVar3 = FUN_0043b710((float *)(param_1 + 0xa0));
      fVar4 = (float10)0.0;
      in_EAX = CONCAT22(extraout_var_01,
                        (ushort)(fVar4 < fVar3) << 8 | (ushort)(NAN(fVar4) || NAN(fVar3)) << 10 |
                        (ushort)(fVar4 == fVar3) << 0xe);
      if (fVar4 != fVar3) {
        in_EAX = FUN_0043b6a0((float *)(param_1 + 0xa0),(float *)&DAT_00e4fa4c);
        if ((char)in_EAX == '\0') goto LAB_0042fea0;
      }
    }
  }
LAB_0042fea7:
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0042feb0 @ 0042feb0 ////

undefined4 __fastcall FUN_0042feb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}


//// FUNCTION FUN_0042fec0 @ 0042fec0 ////

void FUN_0042fec0(void)

{
  DAT_01050b68 = &LAB_0042fcf0;
  FUN_0095bdd0();
  return;
}


//// FUNCTION FUN_0042fed0 @ 0042fed0 ////

void __cdecl FUN_0042fed0(char *param_1)

{
  bool bVar1;
  
  bVar1 = param_1 != (char *)0x0;
  param_1 = s_m_stu_cgi_cos_00e4f8bc;
  if (bVar1) {
    param_1 = s_f_stu_cgi_cos_00e4f8cc;
  }
  FUN_009cfaa0(param_1);
  return;
}


//// FUNCTION FUN_0042fef0 @ 0042fef0 ////

float10 __fastcall FUN_0042fef0(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc0);
}


//// FUNCTION FUN_0042ff00 @ 0042ff00 ////

float10 __fastcall FUN_0042ff00(int param_1)

{
  return (float10)*(float *)(param_1 + 0xc4);
}


//// FUNCTION FUN_0042ff10 @ 0042ff10 ////

void __thiscall FUN_0042ff10(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return;
}


//// FUNCTION FUN_0042ff20 @ 0042ff20 ////

void __thiscall FUN_0042ff20(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc4) = param_1;
  return;
}


//// FUNCTION FUN_0042ff50 @ 0042ff50 ////

int * __thiscall FUN_0042ff50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0042ffc0 @ 0042ffc0 ////

int __fastcall FUN_0042ffc0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_00430110 @ 00430110 ////

void __fastcall FUN_00430110(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00430120 @ 00430120 ////

undefined4 __cdecl FUN_00430120(undefined4 *param_1)

{
  switch(*(undefined1 *)*param_1) {
  case 0x46:
  case 0x66:
    return 1;
  case 0x47:
  case 0x4d:
  case 0x67:
  case 0x6d:
    return 0;
  default:
    return 2;
  }
}


//// FUNCTION FUN_00430190 @ 00430190 ////

void __thiscall FUN_00430190(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_00430270 @ 00430270 ////

undefined4 * __thiscall FUN_00430270(void *this,int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  if (param_2 < (uint)param_1[1]) {
    uVar1 = param_1[1] - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    FUN_004015d0(this,(char *)(*param_1 + param_2),param_3);
  }
  return this;
}


//// FUNCTION FUN_004302c0 @ 004302c0 ////

int __thiscall FUN_004302c0(void *this,void *param_1,uint param_2,size_t param_3)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  char *pcVar4;
  
  if ((param_3 != 0) && (uVar2 = *(uint *)((int)this + 4), uVar2 != 0)) {
    if (param_2 < uVar2) {
      pcVar4 = (char *)(*(int *)this + param_2);
    }
    else {
      pcVar4 = (char *)((uVar2 - 1) + *(int *)this);
    }
    pvVar3 = _memchr(param_1,(int)*pcVar4,param_3);
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        return (int)pcVar4 - *(int *)this;
      }
      if (pcVar4 == *(char **)this) break;
      pcVar1 = pcVar4 + -1;
      pcVar4 = pcVar4 + -1;
      pvVar3 = _memchr(param_1,(int)*pcVar1,param_3);
    }
  }
  return -1;
}


//// FUNCTION FUN_00430410 @ 00430410 ////

undefined4 * __thiscall FUN_00430410(void *this,byte param_1)

{
  FUN_00430110(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00430430 @ 00430430 ////

undefined4 * __thiscall FUN_00430430(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x48),*(uint *)((int)this + 0x4c));
  return param_1;
}


//// FUNCTION FUN_00430470 @ 00430470 ////

undefined4 * __thiscall FUN_00430470(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x68),*(uint *)((int)this + 0x6c));
  return param_1;
}


//// FUNCTION FUN_004304b0 @ 004304b0 ////

void __fastcall FUN_004304b0(int *param_1)

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
  puStack_8 = &LAB_00c9f918;
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


//// FUNCTION FUN_00430600 @ 00430600 ////

undefined4 __fastcall FUN_00430600(int param_1)

{
  undefined4 uVar1;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f938;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  FUN_004015d0(&local_2c,*(char **)(param_1 + 0x78),*(uint *)(param_1 + 0x7c));
  local_4 = 0;
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar1 = FUN_00959a40(&local_2c);
    (**(code **)(*(int *)(param_1 + 200) + 4))();
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    (*(code *)**(undefined4 **)(param_1 + 200))();
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return *(undefined4 *)(param_1 + 0xdc);
}


//// FUNCTION FUN_004306b0 @ 004306b0 ////

void __thiscall FUN_004306b0(void *this,void *param_1,undefined4 *param_2)

{
  void *pvVar1;
  void *this_00;
  
  if (param_1 != (void *)0x0) {
    *(int *)((int)param_1 + 0xa0) = *(int *)((int)param_1 + 0xa0) + 1;
  }
  pvVar1 = *(void **)((int)this + 0xa8);
  this_00 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    this_00 = *(void **)((int)pvVar1 + 0xc0);
    FUN_009cfb00(pvVar1);
    *(undefined4 *)((int)this + 0xa8) = 0;
  }
  *(void **)((int)this + 0xa8) = param_1;
  if (this_00 != (void *)0x0) {
    FUN_009d2c50(this_00,param_1,'\x01',*(float *)((int)this + 0xc4),*(float *)((int)this + 0xc0));
  }
  FUN_004015d0((void *)((int)this + 0x78),(char *)*param_2,param_2[1]);
  (**(code **)(*(int *)((int)this + 200) + 4))();
  *(undefined4 *)((int)this + 0xdc) = 0;
  (*(code *)**(undefined4 **)((int)this + 200))();
  return;
}


//// FUNCTION FUN_00430740 @ 00430740 ////

undefined4 __cdecl FUN_00430740(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00430120(param_1);
  if (((iVar1 != param_2) && (iVar1 != 2)) && (param_2 != 2)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00430770 @ 00430770 ////

undefined4 * __thiscall FUN_00430770(void *this,undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 3;
  param_1[2] = 0x14;
  if (param_2 < *(uint *)((int)this + 4)) {
    uVar1 = *(uint *)((int)this + 4) - param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    FUN_004015d0(param_1,(char *)(*(int *)this + param_2),param_3);
  }
  return param_1;
}


//// FUNCTION FUN_004307c0 @ 004307c0 ////

void __thiscall FUN_004307c0(void *this,char *param_1,uint param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004302c0(this,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_00430830 @ 00430830 ////

void __fastcall FUN_00430830(int *param_1)

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


//// FUNCTION FUN_004308c0 @ 004308c0 ////

void __fastcall FUN_004308c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d18a44;
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


//// FUNCTION FUN_00430910 @ 00430910 ////

undefined4 * __thiscall FUN_00430910(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00430950 @ 00430950 ////

bool __cdecl FUN_00430950(undefined4 *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte *local_20;
  undefined4 local_1c;
  uint local_18;
  byte local_14 [20];
  
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
  pbVar4 = (byte *)*param_1;
  pbVar6 = local_20;
  do {
    bVar2 = *pbVar4;
    bVar7 = bVar2 < *pbVar6;
    if (bVar2 != *pbVar6) {
LAB_004309c4:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_004309c9;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar7 = bVar2 < pbVar6[1];
    if (bVar2 != pbVar6[1]) goto LAB_004309c4;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_004309c9:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return iVar5 != 0;
}


//// FUNCTION FUN_00430a20 @ 00430a20 ////

void * __thiscall FUN_00430a20(void *this,char *param_1)

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


//// FUNCTION FUN_00430a50 @ 00430a50 ////

bool __cdecl FUN_00430a50(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = _wcscmp((wchar_t *)*param_1,(wchar_t *)*param_2);
  return (bool)('\x01' - (iVar1 != 0));
}


//// FUNCTION FUN_00430a70 @ 00430a70 ////

int * __cdecl FUN_00430a70(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00430b40 @ 00430b40 ////

undefined4 * __fastcall FUN_00430b40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9f96e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x14);
  *param_1 = &PTR_FUN_00d18a74;
  param_1[0x14] = &PTR_LAB_00d18a54;
  param_1[0x1e] = param_1 + 0x21;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x14;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0043b510(param_1 + 0x27);
  FUN_0043b510(param_1 + 0x28);
  FUN_00989400(param_1 + 0x2b);
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x32] = &PTR_LAB_00d18a44;
  param_1[0x35] = param_1 + 0x32;
  param_1[0x29] = param_1[0x29] & 0xfffffffe;
  param_1[0x30] = 0xbf800000;
  param_1[0x31] = 0xbf800000;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xbd) = 0;
  param_1[0x26] = 2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00430c50 @ 00430c50 ////

void __fastcall FUN_00430c50(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9f9d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d18a74;
  param_1[0x14] = &PTR_LAB_00d18a54;
  local_4 = 4;
  if ((void *)param_1[0x2a] != (void *)0x0) {
    FUN_009cfb00((void *)param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  param_1[0x32] = &PTR_LAB_00d18a44;
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
  local_4._0_1_ = 2;
  FUN_00989410(param_1 + 0x2b);
  if (0x14 < (uint)param_1[0x20]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1e]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0098a1c0(param_1 + 0x14);
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00430d70 @ 00430d70 ////

undefined4 __thiscall FUN_00430d70(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar2 = *(byte **)(param_1 + 0x78);
  pbVar4 = *(byte **)((int)this + 0x78);
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


//// FUNCTION FUN_00430dd0 @ 00430dd0 ////

undefined4 __thiscall FUN_00430dd0(void *this,void *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (param_1 != (void *)0x0) {
    uVar1 = in_EAX;
    if (param_1 == this) goto LAB_00430e2d;
    in_EAX = FUN_00430d70(this,(int)param_1);
    if ((char)in_EAX != '\0') {
      if (*(void **)((int)this + 0xa8) == (void *)0x0) {
        in_EAX = *(uint *)((int)param_1 + 0xa8);
        uVar1 = 0;
        if (in_EAX == 0) goto LAB_00430e2d;
      }
      else {
        in_EAX = 0;
        if ((((*(int *)((int)param_1 + 0xa8) != 0) &&
             (in_EAX = FUN_009cd020(*(void **)((int)this + 0xa8),*(int *)((int)param_1 + 0xa8)),
             (char)in_EAX != '\0')) && (in_EAX = 0, *(int *)((int)this + 0xb8) != 3)) &&
           (uVar1 = in_EAX, *(int *)((int)param_1 + 0xb8) != 3)) {
LAB_00430e2d:
          return CONCAT31((int3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00430e40 @ 00430e40 ////

char __fastcall FUN_00430e40(int param_1)

{
  undefined4 *this;
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 *puVar9;
  byte **ppbVar10;
  char local_109;
  byte *local_108;
  undefined4 local_104;
  uint local_100;
  byte local_fc [20];
  undefined4 local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fa0d;
  local_c = ExceptionList;
  local_e8 = 0;
  local_109 = '\0';
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_108 = local_fc;
  local_4 = 0;
  local_fc[0] = 0;
  local_104 = 0;
  local_100 = 0x14;
  _strncpy((char *)local_108,"costume/costume_cgi",0x13);
  local_104 = 0x13;
  local_108[0x13] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_e8 = 1;
  cVar2 = FUN_0055be10(local_e4,&local_108,'\0');
  if (cVar2 != '\0') {
    FUN_00558120(local_e4,0);
  }
  local_4 = 0;
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  this = (undefined4 *)(param_1 + 0x78);
  do {
    FUN_00558de0(local_e4,&local_108);
    pbVar7 = (byte *)*this;
    pbVar3 = local_108;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_00430f3c:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00430f41;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_00430f3c;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00430f41:
    if (iVar4 == 0) {
      local_109 = '\x01';
    }
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108);
    }
    uVar5 = FUN_00558120(local_e4,2);
  } while ((char)uVar5 != '\0');
  if (local_109 != '\0') goto LAB_00431016;
  local_108 = local_fc;
  local_fc[0] = 0;
  local_104 = 0;
  local_100 = 0x14;
  _strncpy((char *)local_108,"m_hor_undead_1",0xe);
  ppbVar10 = &local_108;
  local_104 = 0xe;
  puVar9 = this;
  local_108[0xe] = 0;
  uVar5 = FUN_00401ec0(puVar9,ppbVar10);
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  if ((char)uVar5 == '\0') {
    uVar6 = FUN_00413450(this,(char *)&PTR_LAB_00696760_3_00d18aa4,0,3);
    if (uVar6 == 0xffffffff) goto LAB_00431016;
    bVar8 = FUN_00430950(this,"f_stu_cgi");
    if (!bVar8) goto LAB_00431016;
    bVar8 = FUN_00430950(this,"m_stu_cgi");
    if (!bVar8) goto LAB_00431016;
  }
  local_109 = '\x01';
LAB_00431016:
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return local_109;
}


//// FUNCTION FUN_00431050 @ 00431050 ////

undefined4 * __cdecl FUN_00431050(undefined4 *param_1,undefined4 param_2)

{
  uint _Count;
  char *_Source;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9fa30;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"data/costume",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4._0_1_ = 1;
  DAT_00f87c4c = FUN_00556700(&local_2c,DAT_00f87c4c,&local_4c,'\0');
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (DAT_00f87c4c == 0) {
    local_48 = 0;
    *local_4c = '\0';
  }
  iVar2 = FUN_004302c0(&local_4c,&DAT_00d18ad8,0xffffffff,4);
  if (iVar2 != -1) {
    puVar3 = FUN_00430770(&local_4c,&local_2c,0,iVar2 - 3);
    FUN_004015d0(&local_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) goto LAB_00431155;
  }
  do {
    if (((local_48 == 0) || (iVar2 = __strnicmp(local_4c,"category_",9), iVar2 == 0)) &&
       ((iVar2 = FUN_00959a40(&local_4c), iVar2 == 0 || (cVar1 = FUN_00960f30(iVar2), cVar1 == '\0')
        ))) {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      FUN_004015d0(param_1,local_4c,local_48);
      if (local_44 < 0x15) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    puVar3 = FUN_00431050(&local_2c,param_2);
    _Count = puVar3[1];
    _Source = (char *)*puVar3;
    if (local_44 <= _Count) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = _Count + 0x20 & 0xffffffe0;
      local_4c = _malloc(local_44);
    }
    _strncpy(local_4c,_Source,_Count);
    local_4c[_Count] = '\0';
    local_48 = _Count;
  } while (local_24 < 0x15);
LAB_00431155:
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00431270 @ 00431270 ////

bool __cdecl FUN_00431270(undefined4 *param_1,wchar_t *param_2)

{
  uint uVar1;
  int iVar2;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  uVar1 = FUN_00ace02d(param_2);
  FUN_004036d0(&local_20,param_2,uVar1);
  iVar2 = _wcscmp((wchar_t *)*param_1,local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return iVar2 != 0;
}


//// FUNCTION FUN_004312e0 @ 004312e0 ////

undefined4 * __cdecl FUN_004312e0(undefined4 *param_1,undefined4 *param_2,char *param_3)

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
  FUN_004015d0(&local_20,(char *)*param_2,param_2[1]);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004073f0(&local_20,param_3,(int)pcVar2 - (int)(param_3 + 1));
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


//// FUNCTION FUN_00431380 @ 00431380 ////

void __cdecl FUN_00431380(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00431450 @ 00431450 ////

int * __cdecl FUN_00431450(undefined4 *param_1,undefined4 *param_2,int *param_3)

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


//// FUNCTION FUN_004314e0 @ 004314e0 ////

undefined4 * __thiscall FUN_004314e0(void *this,byte param_1)

{
  FUN_00430c50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00431500 @ 00431500 ////

undefined4 __cdecl FUN_00431500(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fa69;
  local_c = ExceptionList;
  if (0x20 < *param_1) {
    return CONCAT31((int3)((uint)ExceptionList >> 8),1);
  }
  switch(*(undefined1 *)*param_2) {
  case 0x46:
  case 0x47:
  case 0x4d:
  case 0x66:
  case 0x67:
  case 0x6d:
    ExceptionList = &local_c;
    uVar5 = FUN_00401ec0(param_2,param_3);
    ExceptionList = local_c;
    return uVar5;
  }
  ExceptionList = &local_c;
  puVar2 = FUN_0040d6b0(&local_2c,"costume/",param_2);
  local_4 = 0;
  puVar2 = FUN_0055c3c0(puVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_24 = FUN_00558490(puVar2,param_3);
  local_20[0] = (char)local_24;
  if (local_20[0] != '\0') {
LAB_004316c4:
    ExceptionList = local_c;
    return CONCAT31((int3)(local_24 >> 8),1);
  }
  local_2c = local_20;
  *param_1 = *param_1 + 1;
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"fallback",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  uVar3 = FUN_00558a50(puVar2,&local_2c,(undefined4 *)0x0);
  if (((char)uVar3 == '\0') || (uVar3 = FUN_00558120(puVar2,0), (char)uVar3 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar1) {
    do {
      puVar4 = FUN_00558de0(puVar2,&local_2c);
      local_4 = 2;
      uVar5 = FUN_00431500(param_1,puVar4,param_3);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if ((char)uVar5 != '\0') goto LAB_004316c4;
      uVar3 = FUN_00558120(puVar2,2);
    } while ((char)uVar3 != '\0');
  }
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00431740 @ 00431740 ////

undefined4 * __fastcall FUN_00431740(int param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fa88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"thumbs/Costumes/",(undefined4 *)(param_1 + 0x78));
  local_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_004317b0 @ 004317b0 ////

undefined4 * __thiscall FUN_004317b0(void *this,undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  bool bVar6;
  void **ppvVar7;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9faa8;
  local_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_00430600((int)this);
  if (iVar3 != 0) {
    ppvVar7 = local_4c;
    pvVar4 = (void *)FUN_00430600((int)this);
    puVar5 = FUN_00430430(pvVar4,ppvVar7);
    bVar6 = true;
    bVar2 = FUN_00431270(puVar5,(wchar_t *)&lpCaption_00d16918);
    bVar1 = true;
    if (bVar2) goto LAB_0043180e;
  }
  bVar1 = false;
LAB_0043180e:
  if ((bVar6) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (bVar1) {
    puVar5 = param_1;
    pvVar4 = (void *)FUN_00430600((int)this);
    FUN_00430430(pvVar4,puVar5);
    ExceptionList = local_c;
    return param_1;
  }
  puVar5 = FUN_0040d6b0(local_2c,"cosname_",(undefined4 *)((int)this + 0x78));
  local_4 = 0;
  FUN_009b5030(param_1,puVar5);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004318b0 @ 004318b0 ////

undefined4 * __thiscall FUN_004318b0(void *this,undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  bool bVar6;
  void **ppvVar7;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fac8;
  local_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_00430600((int)this);
  if (iVar3 != 0) {
    ppvVar7 = local_4c;
    pvVar4 = (void *)FUN_00430600((int)this);
    puVar5 = FUN_00430470(pvVar4,ppvVar7);
    bVar6 = true;
    bVar2 = FUN_00431270(puVar5,(wchar_t *)&lpCaption_00d16918);
    bVar1 = true;
    if (bVar2) goto LAB_0043190e;
  }
  bVar1 = false;
LAB_0043190e:
  if ((bVar6) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (bVar1) {
    puVar5 = param_1;
    pvVar4 = (void *)FUN_00430600((int)this);
    FUN_00430470(pvVar4,puVar5);
    ExceptionList = local_c;
    return param_1;
  }
  puVar5 = FUN_0040d6b0(local_2c,"cos_desc_",(undefined4 *)((int)this + 0x78));
  local_4 = 0;
  FUN_009b5030(param_1,puVar5);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004319b0 @ 004319b0 ////

undefined4 __fastcall FUN_004319b0(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9faf8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xa8) == 0) {
    ExceptionList = &local_c;
    FUN_004312e0(&local_6c,(undefined4 *)(param_1 + 0x78),".cos");
    local_4 = 0;
    puVar3 = FUN_0040d6b0(local_2c,"data/costume/datas/",&local_6c);
    pcVar2 = (char *)*puVar3;
    local_4c = local_40;
    local_48 = 0;
    local_40[0] = 0;
    local_44 = 0x14;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_4c,pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    local_4._0_1_ = 2;
    uVar5 = FUN_009d3720(&local_4c);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    if (uVar5 == 0) {
      if (*local_6c == 'm') {
        if (local_64 < 0xb) {
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          local_64 = 0x20;
          local_6c = _malloc(0x20);
        }
        _strncpy(local_6c,"m_none.cos",10);
        local_6c[10] = '\0';
      }
      else {
        if (local_64 < 0xb) {
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          local_64 = 0x20;
          local_6c = _malloc(0x20);
        }
        _strncpy(local_6c,"f_none.cos",10);
        local_6c[10] = '\0';
      }
      local_68 = 10;
    }
    puVar3 = FUN_009cfaa0(local_6c);
    *(undefined4 **)(param_1 + 0xa8) = puVar3;
    if ((*(byte *)(param_1 + 0xa4) & 1) != 0) {
      FUN_009ceae0(puVar3);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 0xa8);
}


//// FUNCTION FUN_00431b90 @ 00431b90 ////

undefined4 * __cdecl FUN_00431b90(undefined4 *param_1,undefined4 param_2)

{
  uint _Count;
  char *_Source;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00c9fb20;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_2c = local_20;
  local_4 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"data/costume",0xc);
  local_28 = 0xc;
  local_2c[0xc] = '\0';
  local_4._0_1_ = 1;
  DAT_00f87c4c = FUN_00556700(&local_2c,0,&local_4c,'\0');
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (DAT_00f87c4c == 0) {
    local_48 = 0;
    *local_4c = '\0';
  }
  iVar2 = FUN_004302c0(&local_4c,&DAT_00d18ad8,0xffffffff,4);
  if (iVar2 != -1) {
    puVar3 = FUN_00430770(&local_4c,&local_2c,0,iVar2 - 3);
    FUN_004015d0(&local_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < local_24) goto LAB_00431c8f;
  }
  do {
    if (((local_48 == 0) || (iVar2 = __strnicmp(local_4c,"category_",9), iVar2 == 0)) &&
       ((iVar2 = FUN_00959a40(&local_4c), iVar2 == 0 || (cVar1 = FUN_00960f30(iVar2), cVar1 == '\0')
        ))) {
      *param_1 = param_1 + 3;
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      FUN_004015d0(param_1,local_4c,local_48);
      if (local_44 < 0x15) {
        ExceptionList = local_c;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    puVar3 = FUN_00431050(&local_2c,param_2);
    _Count = puVar3[1];
    _Source = (char *)*puVar3;
    if (local_44 <= _Count) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = _Count + 0x20 & 0xffffffe0;
      local_4c = _malloc(local_44);
    }
    _strncpy(local_4c,_Source,_Count);
    local_4c[_Count] = '\0';
    local_48 = _Count;
  } while (local_24 < 0x15);
LAB_00431c8f:
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_00431da0 @ 00431da0 ////

/* WARNING: Removing unreachable block (ram,0x00431fb1) */

undefined4 * __thiscall FUN_00431da0(void *this,undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  byte *local_168;
  undefined4 local_164;
  uint local_160;
  byte local_15c [20];
  byte *local_148;
  uint local_144;
  uint local_140;
  byte local_13c [20];
  undefined4 local_128;
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
  
  puStack_8 = &LAB_00c9fb7b;
  local_c = ExceptionList;
  local_128 = 0;
  local_148 = local_13c;
  local_13c[0] = 0;
  local_144 = 0;
  local_140 = 0x14;
  local_124 = local_118;
  local_4 = 1;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_124,"costumemetalink",0xf);
  local_120 = 0xf;
  local_124[0xf] = '\0';
  local_4._0_1_ = 2;
  FUN_0055c540(local_e4,&local_124);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  local_168 = local_15c;
  local_15c[0] = 0;
  local_164 = 0;
  local_160 = 0x14;
  _strncpy((char *)local_168,"metacostumelink",0xf);
  local_164 = 0xf;
  local_168[0xf] = 0;
  local_4._0_1_ = 5;
  FUN_00558a50(local_e4,&local_168,(undefined4 *)0x1);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
    _free(local_168);
  }
  puVar2 = FUN_005584e0(local_e4,local_104,(undefined4 *)((int)this + 0x78));
  puVar2 = FUN_0040d6b0(&local_168,"costume_",puVar2);
  FUN_004015d0(&local_148,(char *)*puVar2,puVar2[1]);
  if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
    _free(local_168);
  }
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  local_168 = local_15c;
  local_15c[0] = 0;
  local_164 = 0;
  local_160 = 0x14;
  _strncpy((char *)local_168,"costume_",8);
  local_164 = 8;
  local_168[8] = 0;
  pbVar4 = local_148;
  pbVar5 = local_168;
  do {
    bVar1 = *pbVar4;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00431f7a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00431f7f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00431f7a;
    pbVar4 = pbVar4 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00431f7f:
  if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
    _free(local_168);
  }
  if (iVar3 == 0) {
    if (local_140 == 0) {
      local_140 = 0x20;
      local_148 = _malloc(0x20);
    }
    _strncpy((char *)local_148,"",0);
    local_144 = 0;
    *local_148 = 0;
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,(char *)local_148,local_144);
  local_128 = 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00558920(local_e4);
  if (local_140 < 0x15) {
    ExceptionList = local_c;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_148);
}


//// FUNCTION FUN_00432060 @ 00432060 ////

void __cdecl FUN_00432060(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00432150 @ 00432150 ////

undefined4 * __thiscall FUN_00432150(void *this,int param_1)

{
  int iVar1;
  uint *_Memory;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fbca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x50));
  *(undefined4 *)((int)this + 0x50) = &PTR_LAB_00d18a54;
  *(undefined ***)this = &PTR_FUN_00d18a74;
  *(undefined4 *)((int)this + 0x78) = (undefined1 *)((int)this + 0x84);
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x78),*(char **)(param_1 + 0x78),*(uint *)(param_1 + 0x7c)
              );
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(uint *)((int)this + 0xa4) =
       *(uint *)((int)this + 0xa4) ^ (*(uint *)(param_1 + 0xa4) ^ *(uint *)((int)this + 0xa4)) & 1;
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0xa8) = 0;
  FUN_00989400((undefined4 *)((int)this + 0xac));
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined1 *)((int)this + 0xbc) = *(undefined1 *)(param_1 + 0xbc);
  *(undefined1 *)((int)this + 0xbd) = *(undefined1 *)(param_1 + 0xbd);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0xd4) = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 200) = &PTR_LAB_00d18a44;
  *(undefined4 *)((int)this + 0xdc) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = FUN_004319b0(param_1);
    _Memory = FUN_009ce790(iVar1);
    puVar2 = FUN_009d03c0((int)_Memory);
    *(undefined4 **)((int)this + 0xa8) = puVar2;
    if (_Memory != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00432550 @ 00432550 ////

int * FUN_00432550(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_00432060(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_00432580 @ 00432580 ////

void FUN_00432580(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_00430110(param_1);
  }
  return;
}


//// FUNCTION FUN_004325b0 @ 004325b0 ////

void __fastcall FUN_004325b0(int param_1)

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
    FUN_00430110(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00432600 @ 00432600 ////

void FUN_00432600(void)

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
  puStack_8 = &LAB_00c9fc08;
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


//// FUNCTION FUN_004326e0 @ 004326e0 ////

void __thiscall FUN_004326e0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00c9fc28;
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
      FUN_00432600();
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
        iVar2 = FUN_0042ffc0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_00431450(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_00432060(piVar4,param_2,&local_40);
      FUN_00431450(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00432580(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_00431450(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00432550(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_00431380(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_00431450(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_00430a70((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_00431380(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_00432a00 @ 00432a00 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432a00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00f87c5c;
  if (DAT_00f87c5c != DAT_00f87c60) {
    do {
      if ((undefined4 *)puVar2[8] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar2[8])(1);
      }
      puVar2[8] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 != DAT_00f87c60);
  }
  puVar1 = DAT_00f87c60;
  puVar2 = DAT_00f87c5c;
  if (DAT_00f87c5c == (undefined4 *)0x0) {
    DAT_00f87c5c = (undefined4 *)0x0;
    DAT_00f87c60 = (undefined4 *)0x0;
    _DAT_00f87c64 = 0;
    return;
  }
  for (; puVar2 != puVar1; puVar2 = puVar2 + 9) {
    FUN_00430110(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_00f87c5c);
}


//// FUNCTION FUN_00432a80 @ 00432a80 ////

void FUN_00432a80(void)

{
  FUN_0095a3f0();
  FUN_00432a00();
  return;
}


//// FUNCTION FUN_00432aa0 @ 00432aa0 ////

void __thiscall FUN_00432aa0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_00432ae5;
    }
  }
  iVar1 = 0;
LAB_00432ae5:
  FUN_004326e0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_00432b10 @ 00432b10 ////

void __thiscall FUN_00432b10(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00432060(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_00432aa0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00432ba0 @ 00432ba0 ////

undefined4 * __cdecl FUN_00432ba0(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint _Count;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  bool bVar6;
  char *local_30;
  uint local_2c;
  uint local_28;
  char local_24 [20];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00c9fc5b;
  local_c = ExceptionList;
  local_4 = 0;
  puVar4 = DAT_00f87c5c;
  do {
    if (puVar4 == DAT_00f87c60) {
      ExceptionList = &local_c;
      puVar4 = operator_new(0xd8);
      local_4._0_1_ = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00559fb0(puVar4);
      }
      local_4._0_1_ = 0;
      FUN_0055be10(puVar4,&param_1,'\0');
      _Count = param_2;
      pbVar2 = param_1;
      local_2c = 0;
      local_30 = local_24;
      local_24[0] = '\0';
      local_28 = 0x14;
      local_4 = CONCAT31(local_4._1_3_,2);
      local_10 = puVar4;
      if (0x13 < param_2) {
        local_28 = param_2 + 0x20 & 0xffffffe0;
        local_30 = _malloc(local_28);
      }
      _strncpy(local_30,(char *)pbVar2,_Count);
      local_2c = _Count;
      local_30[_Count] = '\0';
      FUN_00432b10(&DAT_00f87c58,&local_30);
      DAT_00f87c54 = DAT_00f87c54 + 1;
      if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
        _free(local_30);
      }
      if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      ExceptionList = local_c;
      return puVar4;
    }
    pbVar2 = (byte *)*puVar4;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00432c04:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00432c09;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00432c04;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00432c09:
    if (iVar3 == 0) {
      DAT_00f87c50 = DAT_00f87c50 + 1;
      if (0x14 < param_3) {
        ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
        _free(param_1);
      }
      return (undefined4 *)puVar4[8];
    }
    puVar4 = puVar4 + 9;
  } while( true );
}


//// FUNCTION FUN_00432d50 @ 00432d50 ////

void __thiscall FUN_00432d50(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  byte *in_stack_fffffec8;
  uint in_stack_fffffecc;
  uint in_stack_fffffed0;
  char *pcStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  char acStack_fc [20];
  undefined1 *puStack_e8;
  undefined4 auStack_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fcb2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00430120(param_1);
  *(undefined4 *)((int)this + 0x98) = uVar1;
  puVar2 = (undefined4 *)((int)this + 0x78);
  FUN_004015d0(puVar2,(char *)*param_1,param_1[1]);
  (**(code **)(*(int *)((int)this + 200) + 4))();
  *(undefined4 *)((int)this + 0xdc) = 0;
  (*(code *)**(undefined4 **)((int)this + 200))();
  if ((*(char *)((int)this + 0xbc) == '\0') && (*(char *)((int)this + 0xbd) == '\0')) {
    puStack_e8 = &stack0xfffffec8;
    FUN_0040d6b0((undefined4 *)&stack0xfffffec8,"costume/",puVar2);
    puVar2 = FUN_00432ba0(in_stack_fffffec8,in_stack_fffffecc,in_stack_fffffed0);
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"start",5);
    uStack_104 = 5;
    pcStack_108[5] = '\0';
    uStack_4 = 0;
    fVar3 = FUN_00558610(puVar2,&pcStack_108,0.0);
    FUN_0043b700((void *)((int)this + 0x9c),(float)fVar3);
    if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_108);
    }
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"end",3);
    uStack_104 = 3;
    pcStack_108[3] = '\0';
    uStack_4 = 1;
    fVar3 = FUN_00558610(puVar2,&pcStack_108,0.0);
    FUN_0043b700((void *)((int)this + 0xa0),(float)fVar3);
    if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_108);
    }
  }
  else {
    puVar2 = FUN_0040d6b0(&pcStack_108,"costume/",puVar2);
    uStack_4 = 2;
    FUN_0055c870(auStack_e4,'\x01',puVar2,0);
    if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_108);
    }
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"start",5);
    uStack_104 = 5;
    pcStack_108[5] = '\0';
    uStack_4._0_1_ = 5;
    fVar3 = FUN_00558610(auStack_e4,&pcStack_108,0.0);
    FUN_0043b700((void *)((int)this + 0x9c),(float)fVar3);
    if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_108);
    }
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"end",3);
    uStack_104 = 3;
    pcStack_108[3] = '\0';
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    fVar3 = FUN_00558610(auStack_e4,&pcStack_108,0.0);
    FUN_0043b700((void *)((int)this + 0xa0),(float)fVar3);
    if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_108);
    }
    uStack_4 = 0xffffffff;
    FUN_00558920(auStack_e4);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00433030 @ 00433030 ////

undefined4 __fastcall FUN_00433030(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fcc8;
  local_c = ExceptionList;
  puVar1 = (undefined4 *)(param_1 + 0x28);
  ExceptionList = &local_c;
  FUN_0095acf0(local_2c,puVar1);
  local_4 = 0;
  uVar2 = FUN_0095c560(puVar1);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x6d) = 1;
  }
  uVar2 = FUN_0095c7a0(puVar1);
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x6c) = 1;
    *(undefined1 *)(param_1 + 0x6d) = 0;
  }
  uVar3 = FUN_00432d50((void *)(param_1 + -0x50),puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_004330c0 @ 004330c0 ////

undefined4 * __thiscall
FUN_004330c0(void *this,undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fd1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 0x50));
  *(undefined ***)this = &PTR_FUN_00d18a74;
  *(undefined4 *)((int)this + 0x50) = &PTR_LAB_00d18a54;
  *(undefined1 **)((int)this + 0x78) = (undefined1 *)((int)this + 0x84);
  *(undefined1 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0x14;
  local_4._0_1_ = 2;
  FUN_0043b510((undefined4 *)((int)this + 0x9c));
  FUN_0043b510((undefined4 *)((int)this + 0xa0));
  FUN_00989400((undefined4 *)((int)this + 0xac));
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 **)((int)this + 0xd4) = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 200) = &PTR_LAB_00d18a44;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(uint *)((int)this + 0xa4) = *(uint *)((int)this + 0xa4) & 0xfffffffe;
  *(undefined4 *)((int)this + 0xc0) = 0xbf800000;
  *(undefined4 *)((int)this + 0xc4) = 0xbf800000;
  *(undefined1 *)((int)this + 0xbd) = param_3;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 0x98) = 2;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xbc) = param_2;
  FUN_00432d50(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004331d0 @ 004331d0 ////

undefined4 * __cdecl FUN_004331d0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint _Count;
  char *_Source;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  void *this;
  int iVar9;
  undefined4 *puVar10;
  char *local_4c;
  uint local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  undefined4 *local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fd85;
  local_c = ExceptionList;
  puVar10 = (undefined4 *)0x0;
  bVar3 = false;
  ExceptionList = &local_c;
  puVar5 = FUN_0040d6b0(&local_2c,"costume/",param_1);
  local_4 = 0;
  puVar5 = FUN_0055c3c0(puVar5);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (puVar5 == (undefined4 *)0x0) {
LAB_00433296:
    bVar2 = false;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"",0);
    local_48 = 0;
    *local_4c = '\0';
    local_4 = 1;
    bVar3 = true;
    uVar6 = FUN_00558a50(puVar5,&local_4c,(undefined4 *)0x1);
    if (((char)uVar6 == '\0') || (uVar6 = FUN_00558120(puVar5,0), (char)uVar6 == '\0'))
    goto LAB_00433296;
    bVar2 = true;
  }
  local_4 = 0xffffffff;
  if ((bVar3) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  bVar3 = false;
  if (!bVar2) {
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar9 = 0;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  local_4 = 2;
  do {
    puVar7 = FUN_00558de0(puVar5,&local_2c);
    _Count = puVar7[1];
    _Source = (char *)*puVar7;
    if (local_44 <= _Count) {
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      local_44 = _Count + 0x20 & 0xffffffe0;
      local_4c = _malloc(local_44);
    }
    _strncpy(local_4c,_Source,_Count);
    local_4c[_Count] = '\0';
    local_48 = _Count;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if ((_Count != 0) &&
       ((iVar8 = FUN_00959a40(&local_4c), param_3 != 1 ||
        ((iVar8 != 0 && (cVar4 = FUN_00960f30(iVar8), cVar4 != '\0')))))) {
      if (param_2 == 0) {
        cVar4 = *local_4c;
        if (cVar4 == 'g') {
LAB_00433403:
          this = operator_new(0xe0);
          local_4._0_1_ = 3;
          if (this == (void *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = FUN_004330c0(this,&local_4c,0,0);
          }
          local_4 = CONCAT31(local_4._1_3_,2);
          cVar4 = FUN_0042fd50((int)puVar7);
          if (cVar4 == '\0') {
            uVar6 = FUN_0042fdc0(puVar7,(int)puVar10);
            if ((char)uVar6 != '\0') {
              if (puVar10 != (undefined4 *)0x0) {
                piVar1 = puVar10 + 0x12;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*puVar10)(1);
                }
              }
              goto LAB_00433485;
            }
          }
          else {
            iVar9 = iVar9 + 1;
            iVar8 = FUN_00990d30(0,iVar9);
            if (iVar8 == 0) {
              if (puVar10 != (undefined4 *)0x0) {
                piVar1 = puVar10 + 0x12;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*puVar10)(1);
                }
              }
LAB_00433485:
              puVar7[0x12] = puVar7[0x12] + 1;
              puVar10 = puVar7;
            }
          }
          if (puVar7 != (undefined4 *)0x0) {
            piVar1 = puVar7 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar7)(1);
            }
          }
        }
        else if (((cVar4 == 'G') || (cVar4 == 'm')) || (cVar4 == 'M')) goto LAB_004333e7;
      }
      else if ((param_2 == 1) && ((cVar4 = *local_4c, cVar4 == 'f' || (cVar4 == 'F')))) {
LAB_004333e7:
        if ((((cVar4 == 'g') || (cVar4 == 'G')) ||
            ((cVar4 == 'm' || ((cVar4 == 'M' || (cVar4 == 'f')))))) || (cVar4 == 'F'))
        goto LAB_00433403;
      }
    }
    uVar6 = FUN_00558120(puVar5,2);
  } while ((char)uVar6 != '\0');
  if (puVar10 == (undefined4 *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_24 = 0x14;
    local_28 = puVar10;
    _strncpy(local_2c,"fallback",8);
    local_28 = (undefined4 *)0x8;
    local_2c[8] = '\0';
    bVar3 = true;
    local_4 = CONCAT31(local_4._1_3_,4);
    uVar6 = FUN_00558a50(puVar5,&local_2c,(undefined4 *)0x0);
    if (((char)uVar6 != '\0') && (uVar6 = FUN_00558120(puVar5,0), (char)uVar6 != '\0')) {
      bVar2 = true;
      goto LAB_0043352c;
    }
  }
  bVar2 = false;
LAB_0043352c:
  local_4 = 2;
  if ((bVar3) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (bVar2) {
    do {
      puVar10 = FUN_00558de0(puVar5,&local_2c);
      local_4._0_1_ = 5;
      puVar10 = FUN_004331d0(puVar10,param_2,param_3);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    } while ((puVar10 == (undefined4 *)0x0) && (uVar6 = FUN_00558120(puVar5,2), (char)uVar6 != '\0')
            );
  }
  if (local_44 < 0x15) {
    if (puVar10 != (undefined4 *)0x0) {
      if (param_3 != 4) {
        puVar10[0x29] = puVar10[0x29] | 1;
      }
      puVar10[0x2e] = param_3;
    }
    ExceptionList = local_c;
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_004335f0 @ 004335f0 ////

int * __cdecl
FUN_004335f0(int *param_1,undefined4 *param_2,int param_3,int param_4,undefined1 param_5,
            undefined1 param_6)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00c9fdbc;
  pvStack_c = ExceptionList;
  local_4 = 1;
  switch(*(undefined1 *)*param_2) {
  case 0x46:
  case 0x47:
  case 0x4d:
  case 0x66:
  case 0x67:
  case 0x6d:
    ExceptionList = &pvStack_c;
    this = operator_new(0xe0);
    local_4._0_1_ = 2;
    if (this == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
      local_4 = CONCAT31(local_4._1_3_,1);
    }
    else {
      puVar2 = FUN_004330c0(this,param_2,param_5,param_6);
      local_4 = CONCAT31(local_4._1_3_,1);
    }
    break;
  default:
    ExceptionList = &pvStack_c;
    puVar2 = FUN_004331d0(param_2,param_3,param_4);
  }
  puVar3 = (undefined4 *)0x0;
  if ((puVar2 != (undefined4 *)0x0) && (puVar3 = puVar2, puVar2 != (undefined4 *)0x0)) {
    puVar2[0x2e] = param_4;
    *(undefined1 *)(puVar2 + 0x15) = 1;
  }
  *param_1 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x12] = puVar3[0x12] + 1;
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  *param_1 = (int)puVar3;
  local_4 = local_4 & 0xffffff00;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00433790 @ 00433790 ////

undefined1 * __thiscall FUN_00433790(void *this,byte param_1)

{
  DAT_0105cc5c = *(undefined1 *)this;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004337b0 @ 004337b0 ////

float10 FUN_004337b0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  if ((float10)0.0 <= fVar1) {
    if ((float10)1.0 < fVar1) {
      fVar1 = (float10)1.0;
    }
  }
  else {
    fVar1 = (float10)0.0;
  }
  fVar1 = (float10)fsin(fVar1 * (float10)3.1415927 - (float10)1.5707964);
  return ((float10)param_2 - (float10)param_1) * (fVar1 + (float10)1.0) * (float10)0.5 +
         (float10)param_1;
}


//// FUNCTION FUN_004338b0 @ 004338b0 ////

bool __fastcall FUN_004338b0(int param_1)

{
  return *(int *)(param_1 + 0x34c) == 0;
}


//// FUNCTION FUN_004338c0 @ 004338c0 ////

void __fastcall FUN_004338c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x26c) = 0x40b81ef7;
  *(undefined4 *)(param_1 + 0x270) = 0x3ee9615f;
  *(undefined4 *)(param_1 + 0x274) = 0x3fa7d567;
  *(undefined4 *)(param_1 + 0x278) = 0xbfe38866;
  *(undefined4 *)(param_1 + 0x27c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x290) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x294) = 0x3ed70a3d;
  *(undefined4 *)(param_1 + 0x298) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3ed70a3d;
  *(undefined4 *)(param_1 + 0x2a4) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x288) = DAT_00e4f90c;
  *(undefined4 *)(param_1 + 0x2b4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x2b8) = 0x3fca3d71;
  *(undefined4 *)(param_1 + 700) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3fe38866;
  *(undefined4 *)(param_1 + 0x280) = 0x3f67ef9e;
  uVar1 = DAT_00e4f90c;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3fca3d71;
  *(undefined4 *)(param_1 + 0x264) = uVar1;
  *(undefined4 *)(param_1 + 0x2c8) = 0x3fd9999a;
  uVar1 = DAT_00e4f90c;
  pfVar5 = (float *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x268) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x28c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x2b0) = 0x41f00000;
  *pfVar5 = 0.5235988;
  *(undefined4 *)(param_1 + 0x284) = 0x3e860a92;
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3e860a92;
  pfVar3 = pfVar5;
  pfVar6 = (float *)(param_1 + 0x2cc);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x284);
  puVar7 = (undefined4 *)(param_1 + 0x2f0);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar3 = (float *)(param_1 + 0x23c);
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  FUN_009a2d40((float *)(param_1 + 0x23c));
  return;
}


//// FUNCTION FUN_00433ab0 @ 00433ab0 ////

undefined4 __fastcall FUN_00433ab0(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc4);
}


//// FUNCTION FUN_00433ad0 @ 00433ad0 ////

undefined1 __fastcall FUN_00433ad0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x358);
}


//// FUNCTION FUN_00433ae0 @ 00433ae0 ////

void __thiscall FUN_00433ae0(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x359) = param_1;
  return;
}


//// FUNCTION FUN_00433af0 @ 00433af0 ////

undefined1 __fastcall FUN_00433af0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x35d);
}


//// FUNCTION FUN_00433b00 @ 00433b00 ////

undefined4 __fastcall FUN_00433b00(int param_1)

{
  if ((*(int *)(param_1 + 0x34c) == 2) && (*(int *)(param_1 + 0x348) < 3)) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00433b20 @ 00433b20 ////

void __fastcall FUN_00433b20(int param_1)

{
  if (*(int *)(param_1 + 0x208) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x208) + 0xd8) = 1;
  }
  return;
}


//// FUNCTION FUN_00433b50 @ 00433b50 ////

int * __thiscall FUN_00433b50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433ba0 @ 00433ba0 ////

int * __thiscall FUN_00433ba0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433c10 @ 00433c10 ////

ulonglong FUN_00433c10(void)

{
  ulonglong uVar1;
  
  if (DAT_0105bea4 != (code *)0x0) {
    (*DAT_0105bea4)();
  }
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_00433c50 @ 00433c50 ////

int * __thiscall FUN_00433c50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433c90 @ 00433c90 ////

void __fastcall FUN_00433c90(int param_1)

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


//// FUNCTION FUN_00433cc0 @ 00433cc0 ////

int * __thiscall FUN_00433cc0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433d00 @ 00433d00 ////

void __fastcall FUN_00433d00(int param_1)

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


//// FUNCTION FUN_00433d40 @ 00433d40 ////

int * __thiscall FUN_00433d40(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433d80 @ 00433d80 ////

void __fastcall FUN_00433d80(int param_1)

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


//// FUNCTION FUN_00433da0 @ 00433da0 ////

void __fastcall FUN_00433da0(int param_1)

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


//// FUNCTION FUN_00433dd0 @ 00433dd0 ////

int * __thiscall FUN_00433dd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00433e10 @ 00433e10 ////

void __fastcall FUN_00433e10(int param_1)

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


//// FUNCTION FUN_00433eb0 @ 00433eb0 ////

undefined4 * FUN_00433eb0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00c9fddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x110);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = MeshInstance_Constructor(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00433f30 @ 00433f30 ////

undefined1 * __fastcall FUN_00433f30(undefined1 *param_1)

{
  FUN_009a2210((undefined4 *)(param_1 + 0x24));
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}


