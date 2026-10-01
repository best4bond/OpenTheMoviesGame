//// FUNCTION FUN_007f53c0 @ 007f53c0 ////

undefined4 FUN_007f53c0(void)

{
  return DAT_0104eaac;
}


//// FUNCTION FUN_007f53d0 @ 007f53d0 ////

float10 __fastcall FUN_007f53d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
  }
  fVar2 = (float10)*(int *)(param_1 + 0x344);
  if (*(int *)(param_1 + 0x344) < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  return (float10)DAT_00e5bd34 * (float10)0.4 * fVar2 - fVar3 * (float10)10.0;
}


//// FUNCTION FUN_007f5600 @ 007f5600 ////

void __cdecl FUN_007f5600(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_007f5630 @ 007f5630 ////

void __cdecl FUN_007f5630(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007f56c0 @ 007f56c0 ////

void __cdecl FUN_007f56c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_007f56f0 @ 007f56f0 ////

void __fastcall FUN_007f56f0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d5a438;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007f5740 @ 007f5740 ////

void __fastcall FUN_007f5740(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5a438;
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


//// FUNCTION FUN_007f5830 @ 007f5830 ////

void __cdecl FUN_007f5830(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_007f58f0 @ 007f58f0 ////

undefined4 * __thiscall FUN_007f58f0(void *this,byte param_1)

{
  FUN_007f4130(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f5910 @ 007f5910 ////

void __thiscall FUN_007f5910(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x390) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007f59f0 @ 007f59f0 ////

void __fastcall FUN_007f59f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007f5ac0 @ 007f5ac0 ////

uint __fastcall FUN_007f5ac0(int *param_1)

{
  float fVar1;
  undefined2 extraout_var;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = FUN_007f53d0((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  fVar4 = (float10)0.0;
  if (fVar5 < fVar4 != (fVar5 == fVar4)) {
    param_1[0xe4] = 0;
    return CONCAT22(extraout_var,
                    (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                    (ushort)(fVar5 == fVar4) << 0xe);
  }
  uVar2 = 0;
  if (param_1[0xd7] != 0) {
    iVar3 = param_1[0xd8] - param_1[0xd7];
    uVar2 = iVar3 * 0x2aaaaaab;
    if (iVar3 / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      uVar2 = iVar3 + 1;
      fVar1 = (float)(int)uVar2;
      if ((int)uVar2 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xe4] = (int)((float)fVar5 / fVar1 + 2.0);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_007f5c10 @ 007f5c10 ////

void __fastcall FUN_007f5c10(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007f5910(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007f5c70 @ 007f5c70 ////

undefined4 * FUN_007f5c70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_007f5830(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_007f5cc0 @ 007f5cc0 ////

void __cdecl FUN_007f5cc0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5a084;
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


//// FUNCTION FUN_007f5d30 @ 007f5d30 ////

void __fastcall FUN_007f5d30(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xe0));
  if ((char)uVar1 != '\0') {
    FUN_007f59f0((int)param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007f5d60 @ 007f5d60 ////

void __fastcall FUN_007f5d60(int param_1)

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


//// FUNCTION FUN_007f5dc0 @ 007f5dc0 ////

void __cdecl FUN_007f5dc0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5a084;
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


//// FUNCTION FUN_007f5e60 @ 007f5e60 ////

void __fastcall FUN_007f5e60(int param_1)

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


//// FUNCTION FUN_007f5e90 @ 007f5e90 ////

void __fastcall FUN_007f5e90(int param_1)

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


//// FUNCTION FUN_007f5f40 @ 007f5f40 ////

void FUN_007f5f40(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007f4130(param_1);
  }
  return;
}


//// FUNCTION FUN_007f5f70 @ 007f5f70 ////

void __fastcall FUN_007f5f70(int param_1)

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
    FUN_007f4130(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f5fc0 @ 007f5fc0 ////

undefined4 * FUN_007f5fc0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007f5dc0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007f5ff0 @ 007f5ff0 ////

void FUN_007f5ff0(void)

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
  puStack_8 = &LAB_00ce21c8;
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


//// FUNCTION FUN_007f6060 @ 007f6060 ////

void FUN_007f6060(void)

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
  puStack_8 = &LAB_00ce21e8;
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


//// FUNCTION FUN_007f60d0 @ 007f60d0 ////

void __fastcall FUN_007f60d0(int param_1)

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
    FUN_007f4130(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f61d0 @ 007f61d0 ////

void __thiscall FUN_007f61d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce2200;
  local_10 = ExceptionList;
  iVar6 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar6 >> 2;
  }
  uVar7 = CONCAT44(iVar6,iVar1);
  if (param_2 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar6 < param_2) {
      ExceptionList = &local_10;
      uVar7 = FUN_007f5ff0();
    }
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar6 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar6 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
        }
        uVar2 = iVar6 + param_2;
      }
      puVar3 = operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_007f56c0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_007f5830(puVar4,param_2,&param_3);
      FUN_007f56c0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar2;
      *(undefined4 **)((int)this + 8) = puVar3 + param_2 + iVar6;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar3 - (int)param_1 >> 2) < param_2) {
      FUN_007f56c0(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_007f5c70(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_007f5280(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_007f56c0(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_007f5600((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_007f5280(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_007f6410 @ 007f6410 ////

void __thiscall FUN_007f6410(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ce2218;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5a084;
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
      FUN_007f6060();
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
        iVar3 = FUN_007f5040((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007f5cc0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007f5dc0(puVar5,param_2,(int)&local_34);
      FUN_007f5cc0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007f5f40(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007f5cc0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007f5fc0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007f5630(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007f5cc0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007f5350((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007f5630(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007f6740 @ 007f6740 ////

void __fastcall FUN_007f6740(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2262;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a464;
  param_1[0x14] = &PTR_FUN_00d5a448;
  local_4 = 3;
  if ((void *)param_1[0xd3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd3]);
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  while( true ) {
    if ((param_1[0xd7] == 0) || ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d5a084;
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
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d5a084;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_007f5f70((int)(param_1 + 0xd6));
  if ((void *)param_1[0xd3] == (void *)0x0) {
    param_1[0xd3] = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    local_4 = 0xffffffff;
    FUN_00742900(param_1);
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xd3]);
}


//// FUNCTION FUN_007f6ad0 @ 007f6ad0 ////

void __thiscall FUN_007f6ad0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007f6b15;
    }
  }
  iVar1 = 0;
LAB_007f6b15:
  FUN_007f6410(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007f6b40 @ 007f6b40 ////

undefined4 * __thiscall FUN_007f6b40(void *this,byte param_1)

{
  FUN_007f6740(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f6b60 @ 007f6b60 ////

void __thiscall FUN_007f6b60(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007f5830(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_007f61d0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_007f6bd0 @ 007f6bd0 ////

void __thiscall FUN_007f6bd0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007f5dc0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007f6ad0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007f6c60 @ 007f6c60 ////

void __fastcall FUN_007f6c60(int *param_1)

{
  int *this;
  void *pvVar1;
  int *piVar2;
  int iVar3;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce22cf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x508);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else if (param_1[0xd7] == 0) {
    piVar2 = FUN_007f46b0(pvVar1,1,0);
  }
  else {
    piVar2 = FUN_007f46b0(pvVar1,1,(param_1[0xd8] - param_1[0xd7]) / 0x18);
  }
  local_4 = 0xffffffff;
  FUN_007e7dc0(piVar2);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d5a084;
  if (piVar2 != (int *)0x0) {
    local_1c = piVar2 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  this = param_1 + 0xd6;
  local_4 = 1;
  local_10 = piVar2;
  FUN_007f6bd0(this,(int)&local_24);
  local_4 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  FUN_007f5910(param_1,iVar3 + -1);
  pvVar1 = operator_new(0x508);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else if (param_1[0xd7] == 0) {
    piVar2 = FUN_007f46b0(pvVar1,2,0);
  }
  else {
    piVar2 = FUN_007f46b0(pvVar1,2,(param_1[0xd8] - param_1[0xd7]) / 0x18);
  }
  local_4 = 0xffffffff;
  FUN_007e7dc0(piVar2);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d5a084;
  if (piVar2 != (int *)0x0) {
    local_1c = piVar2 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 3;
  local_10 = piVar2;
  FUN_007f6bd0(this,(int)&local_24);
  local_4 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  FUN_007f5910(param_1,iVar3 + -1);
  pvVar1 = operator_new(0x508);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else if (param_1[0xd7] == 0) {
    piVar2 = FUN_007f46b0(pvVar1,3,0);
  }
  else {
    piVar2 = FUN_007f46b0(pvVar1,3,(param_1[0xd8] - param_1[0xd7]) / 0x18);
  }
  local_4 = 0xffffffff;
  FUN_007e7dc0(piVar2);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d5a084;
  if (piVar2 != (int *)0x0) {
    local_1c = piVar2 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 5;
  local_10 = piVar2;
  FUN_007f6bd0(this,(int)&local_24);
  local_4 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  FUN_007f5910(param_1,iVar3 + -1);
  pvVar1 = operator_new(0x508);
  local_4 = 6;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else if (param_1[0xd7] == 0) {
    piVar2 = FUN_007f46b0(pvVar1,0,0);
  }
  else {
    piVar2 = FUN_007f46b0(pvVar1,0,(param_1[0xd8] - param_1[0xd7]) / 0x18);
  }
  local_4 = 0xffffffff;
  FUN_007e7dc0(piVar2);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d5a084;
  if (piVar2 != (int *)0x0) {
    local_1c = piVar2 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 7;
  local_10 = piVar2;
  FUN_007f6bd0(this,(int)&local_24);
  local_4 = 0xffffffff;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  FUN_007f5910(param_1,iVar3 + -1);
  pvVar1 = operator_new(0x508);
  local_4 = 8;
  if (pvVar1 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else if (param_1[0xd7] == 0) {
    piVar2 = FUN_007f46b0(pvVar1,4,0);
  }
  else {
    piVar2 = FUN_007f46b0(pvVar1,4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
  }
  local_4 = 0xffffffff;
  FUN_007e7dc0(piVar2);
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d5a084;
  if (piVar2 != (int *)0x0) {
    local_1c = piVar2 + 6;
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 9;
  local_10 = piVar2;
  FUN_007f6bd0(this,(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_LAB_00d5a084;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = (int *)0x0;
  local_20 = 0;
  local_1c = (int *)0x0;
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  FUN_007f5910(param_1,iVar3 + -1);
  FUN_007f5ac0(param_1);
  FUN_007f5c10(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f71d0 @ 007f71d0 ////

void __fastcall FUN_007f71d0(int *param_1)

{
  int *this;
  int *local_4;
  
  this = param_1 + 0xd2;
  param_1[0xd1] = 0;
  if ((void *)param_1[0xd3] != (void *)0x0) {
    local_4 = param_1;
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd3]);
  }
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd1] = 5;
  local_4 = (int *)0x1;
  FUN_007f6b60(this,&local_4);
  local_4 = (int *)0x2;
  FUN_007f6b60(this,&local_4);
  local_4 = (int *)0x3;
  FUN_007f6b60(this,&local_4);
  local_4 = (int *)0x0;
  FUN_007f6b60(this,&local_4);
  local_4 = (int *)0x4;
  FUN_007f6b60(this,&local_4);
  FUN_007f5ac0(param_1);
  FUN_007f6c60(param_1);
  return;
}


//// FUNCTION FUN_007f7280 @ 007f7280 ////

int * __fastcall FUN_007f7280(int *param_1)

{
  int *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2312;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d5a464;
  param_1[0x14] = (int)&PTR_FUN_00d5a448;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = (int)(param_1 + 0xda);
  param_1[0xda] = (int)&PTR_LAB_00d5a084;
  param_1[0xdf] = 0;
  this = param_1 + 0xe0;
  local_4 = 3;
  FUN_0043b460(this);
  param_1[0xe4] = 0;
  puVar2 = DAT_0104eaac;
  if (DAT_0104eaac != (undefined4 *)0x0) {
    iVar1 = DAT_0104eaac[0x12];
    DAT_0104eaac[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_0104ea98[1])();
    DAT_0104eaac = (undefined4 *)0x0;
    (*(code *)*DAT_0104ea98)();
  }
  (*(code *)DAT_0104ea98[1])();
  DAT_0104eaac = param_1;
  (*(code *)*DAT_0104ea98)();
  param_1[0x45] = param_1[0x45] & 0xfffffff5;
  piVar3 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(param_1,DAT_00e5bd38);
  FUN_0043b4d0(this,1);
  *this = 10;
  FUN_007f71d0(param_1);
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_007f73e0 @ 007f73e0 ////

undefined4 __fastcall FUN_007f73e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007f7450 @ 007f7450 ////

void __fastcall FUN_007f7450(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007f7480 @ 007f7480 ////

void __fastcall FUN_007f7480(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x13f];
  if (iVar3 < 1) {
    param_1[0x13f] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x7f74a3;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x7f74d8;
  piVar2 = (int *)FUN_007f8640();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_007f8640();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_007f751c;
  }
  iVar3 = FUN_007f8640();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_007f751c:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_007f7570 @ 007f7570 ////

void __fastcall FUN_007f7570(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2328;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_007f7640 @ 007f7640 ////

void __fastcall FUN_007f7640(int param_1)

{
  int iVar1;
  int *piVar2;
  uint unaff_ESI;
  void *_Memory;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2350;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    piVar2 = (int *)FUN_00401c30(iVar1);
    iVar1 = FUN_00ace790(piVar2,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                         &TM::DesireResearch::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      local_2c = local_20;
      local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy((char *)local_2c,"ui/activity_busy.dds",0x14);
      *(char *)(local_2c + 5) = '\0';
      local_4 = 0;
      goto LAB_007f7724;
    }
  }
  local_2c = local_20;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy((char *)local_2c,"ui/activity_idle.dds",0x14);
  *(char *)(local_2c + 5) = '\0';
  local_4 = 1;
LAB_007f7724:
  local_28 = 0x14;
  _Memory = (void *)0x3f800000;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_2c);
  uStack_18 = 0xffffffff;
  if (0x14 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_007f77a0 @ 007f77a0 ////

void __fastcall FUN_007f77a0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  uint **local_60;
  uint local_5c;
  undefined1 *puStack_58;
  uint *puStack_54;
  undefined4 uStack_50;
  void **ppvStack_4c;
  uint uStack_48;
  uint uStack_44;
  void *apvStack_40 [2];
  uint uStack_38;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined1 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce23f7;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_5c = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy((char *)local_2c,"iconpanel2",10);
  local_28 = 10;
  *(char *)((int)local_2c + 10) = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  local_60 = (uint **)&stack0xffffff70;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10c] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10a] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10d] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10b] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10e] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  local_60 = (uint **)&stack0xffffff70;
  param_1[0x10f] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x110] = iVar2;
  local_60 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (local_60 == (uint **)0x0) {
    local_60 = (uint **)0x0;
  }
  else {
    local_60 = (uint **)FUN_007ac880(local_60,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_60;
  (**(code **)param_1[0x139])();
  if (param_1[0x13e] != 0) {
    puStack_54 = (uint *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    ppvStack_4c = (void **)0x14;
    _strncpy((char *)puStack_54,"Research",8);
    uStack_50 = 8;
    *(char *)(puStack_54 + 2) = '\0';
    ppuVar7 = &puStack_54;
    puVar6 = (undefined4 *)&stack0xffffff98;
    pvStack_c._0_1_ = 9;
    pvVar1 = (void *)FUN_00577370(param_1[0x132]);
    FUN_00441750(pvVar1,puVar6,ppuVar7);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((void **)0x14 < ppvStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    local_60 = (uint **)&stack0xffffff80;
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    ppvStack_4c = apvStack_40;
    apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy((char *)ppvStack_4c,"star_mood",9);
    uStack_48 = 9;
    *(char *)((int)ppvStack_4c + 9) = '\0';
    local_4._0_1_ = 10;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&ppvStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_4c);
    }
    puStack_58 = &stack0xffffff70;
    puVar3 = &stack0xffffff7c;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff70,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  FUN_007e7e10(param_1);
  FUN_007f7570((int)param_1);
  pvVar1 = operator_new(0x360);
  puStack_58 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    local_60 = (uint **)0x0;
  }
  else {
    ppvStack_4c = apvStack_40;
    apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
    uStack_48 = 0;
    uStack_44 = 0x20;
    ppvStack_4c = _malloc(0x20);
    _strncpy((char *)ppvStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    *(char *)(ppvStack_4c + 6) = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_5c = 1;
    local_60 = (uint **)&stack0xffffff80;
    local_60 = (uint **)FUN_0069d820(pvVar1,&ppvStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_60;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if (((local_5c & 1) != 0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(ppvStack_4c);
  }
  ppvStack_4c = apvStack_40;
  apvStack_40[0] = (void *)((uint)apvStack_40[0] & 0xffffff00);
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy((char *)ppvStack_4c,"",0);
  uStack_48 = 0;
  *(char *)ppvStack_4c = '\0';
  puStack_58 = &stack0xffffff80;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  (**(code **)(*(int *)param_1[0x138] + 0x100))();
  uStack_18 = 0;
  if (&DAT_00000014 < puStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  FUN_0069ce60((void *)param_1[0x138],0xffffff);
  local_60 = &puStack_54;
  puStack_54 = (uint *)((uint)puStack_54 & 0xffffff00);
  local_5c = 0;
  puStack_58 = (undefined1 *)0x14;
  _strncpy((char *)local_60,"star_job",8);
  local_5c = 8;
  *(char *)(local_60 + 2) = '\0';
  uStack_18 = 0x10;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&local_60,1,0,
               (undefined1 *)0x0);
  if (0x14 < puStack_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  if (0x14 < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_40[0]);
  }
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_007f7e30 @ 007f7e30 ////

int * __thiscall FUN_007f7e30(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2442;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d5a58c;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5a570;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  FUN_007f77a0(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007f7f40 @ 007f7f40 ////

void __fastcall FUN_007f7f40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2482;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a58c;
  param_1[0x14] = &PTR_LAB_00d5a570;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f8150 @ 007f8150 ////

void __fastcall FUN_007f8150(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = param_1[0x132];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x814) != 0xf)) {
    piVar3 = param_1;
    this = (void *)FUN_007f8640();
    FUN_007f98b0(this,piVar3);
  }
  else {
    FUN_007e7ec0(param_1,iVar2);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if ((char)param_1[0xc9] != '\0') {
      *(undefined1 *)(param_1[0x132] + 0x726) = 1;
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_007f7570((int)param_1);
      FUN_007f7640((int)param_1);
    }
    if ((DAT_0104d524 != param_1[0x132]) && (DAT_00f8860c != param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        iVar2 = FUN_008819d0((void *)param_1[0xd6],"star_card");
        if (*(int *)(iVar2 + 0x260) != param_1[0x10f]) goto LAB_007f8259;
      }
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x445) == '\0') {
      *(undefined1 *)((int)param_1 + 0x445) = 1;
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
      WHudIcon_Tick(param_1);
      return;
    }
  }
LAB_007f8259:
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_007f8270 @ 007f8270 ////

undefined4 * __thiscall FUN_007f8270(void *this,byte param_1)

{
  FUN_007f7f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f83a0 @ 007f83a0 ////

int * __thiscall FUN_007f83a0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007f83e0 @ 007f83e0 ////

int __fastcall FUN_007f83e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_007f8590 @ 007f8590 ////

int * __thiscall FUN_007f8590(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007f85c0 @ 007f85c0 ////

int * __cdecl FUN_007f85c0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_007f8600 @ 007f8600 ////

undefined4 * __cdecl FUN_007f8600(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007f8640 @ 007f8640 ////

undefined4 FUN_007f8640(void)

{
  return DAT_0104eac4;
}


//// FUNCTION FUN_007f87e0 @ 007f87e0 ////

void __cdecl FUN_007f87e0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007f8840 @ 007f8840 ////

void __fastcall FUN_007f8840(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d5a6c8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_007f8890 @ 007f8890 ////

void __fastcall FUN_007f8890(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5a6c8;
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


//// FUNCTION FUN_007f8970 @ 007f8970 ////

void __fastcall FUN_007f8970(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5a6d8;
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


//// FUNCTION FUN_007f8a50 @ 007f8a50 ////

undefined4 * __thiscall FUN_007f8a50(void *this,byte param_1)

{
  FUN_007f8970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f8a70 @ 007f8a70 ////

void __fastcall FUN_007f8a70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007f8ae0 @ 007f8ae0 ////

void __thiscall FUN_007f8ae0(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x378) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_007f8bc0 @ 007f8bc0 ////

undefined1 __thiscall FUN_007f8bc0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007f73e0(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007f73e0(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007f8c40 @ 007f8c40 ////

void __fastcall FUN_007f8c40(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_007f8cc0 @ 007f8cc0 ////

int __thiscall FUN_007f8cc0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007f73e0(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007f73e0(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007f8d60 @ 007f8d60 ////

void __fastcall FUN_007f8d60(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  fVar1 = (float)param_1[0xd1];
  if (param_1[0xd1] < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = DAT_00e5bd34 * 0.4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar4 = (float10)(fVar2 * fVar1 - fVar1 * 10.0) - fVar4;
  if (fVar4 < (float10)0.0 != (fVar4 == (float10)0.0)) {
    param_1[0xde] = 0;
    return;
  }
  if (param_1[0xd7] != 0) {
    if ((param_1[0xd8] - param_1[0xd7]) / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      fVar1 = (float)(iVar3 + 1);
      if (iVar3 + 1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xde] = (int)((float)fVar4 / fVar1 + 2.0);
    }
  }
  return;
}


//// FUNCTION FUN_007f8e70 @ 007f8e70 ////

void __fastcall FUN_007f8e70(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_007f8ae0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_007f8ee0 @ 007f8ee0 ////

void __cdecl FUN_007f8ee0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5a6d8;
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


//// FUNCTION FUN_007f8f80 @ 007f8f80 ////

void __cdecl FUN_007f8f80(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5a6d8;
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


//// FUNCTION FUN_007f90a0 @ 007f90a0 ////

void FUN_007f90a0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007f8970(param_1);
  }
  return;
}


//// FUNCTION FUN_007f90d0 @ 007f90d0 ////

void __fastcall FUN_007f90d0(int param_1)

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
    FUN_007f8970(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f9120 @ 007f9120 ////

undefined4 * FUN_007f9120(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007f8f80(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_007f9150 @ 007f9150 ////

void FUN_007f9150(void)

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
  puStack_8 = &LAB_00ce2498;
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


//// FUNCTION FUN_007f91c0 @ 007f91c0 ////

void __fastcall FUN_007f91c0(int param_1)

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
    FUN_007f8970(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_007f9220 @ 007f9220 ////

void __thiscall FUN_007f9220(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007f85c0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007f8970(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_007f92c0 @ 007f92c0 ////

void __thiscall FUN_007f92c0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ce24b8;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5a6d8;
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
      FUN_007f9150();
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
        iVar3 = FUN_007f83e0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007f8ee0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007f8f80(puVar5,param_2,(int)&local_34);
      FUN_007f8ee0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_007f90a0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007f8ee0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_007f9120(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007f87e0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007f8ee0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007f8600((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007f87e0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_007f95f0 @ 007f95f0 ////

void __fastcall FUN_007f95f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce24f4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a704;
  param_1[0x14] = &PTR_FUN_00d5a6e8;
  local_4 = 2;
  FUN_004d9e90((int)(param_1 + 0xd2));
  while ((param_1[0xd7] != 0 && ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d5a6d8;
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
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  FUN_007f90d0((int)(param_1 + 0xd6));
  FUN_004d9e90((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007f9760 @ 007f9760 ////

void __thiscall FUN_007f9760(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_005ba670((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_007f97c1:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_007f73e0((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_007f73e0((int)puVar7), iVar6 != iVar8)) goto LAB_007f97da;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_007f8970(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_007f9846:
    FUN_007f8d60(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_007f8ae0(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_007f97da:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_007f9846;
  goto LAB_007f97c1;
}


//// FUNCTION FUN_007f98b0 @ 007f98b0 ////

void __thiscall FUN_007f98b0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_007f9220((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    FUN_007f8d60(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_007f8ae0(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_007f9970 @ 007f9970 ////

void __fastcall FUN_007f9970(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9e90(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007f8970(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_007f9a50 @ 007f9a50 ////

void __thiscall FUN_007f9a50(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_007f9a95;
    }
  }
  iVar1 = 0;
LAB_007f9a95:
  FUN_007f92c0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_007f9ac0 @ 007f9ac0 ////

undefined4 * __thiscall FUN_007f9ac0(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2524;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d5a704;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5a6e8;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  this_00 = (undefined4 *)((int)this + 0x368);
  local_4 = 2;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x378) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104eac4;
  if (param_1 != '\0') {
    if (DAT_0104eac4 != (undefined4 *)0x0) {
      iVar1 = DAT_0104eac4[0x12];
      DAT_0104eac4[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104eab0[1])();
      DAT_0104eac4 = (undefined4 *)0x0;
      (*(code *)*DAT_0104eab0)();
    }
    (*(code *)DAT_0104eab0[1])();
    DAT_0104eac4 = this;
    (*(code *)*DAT_0104eab0)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_007f9c00 @ 007f9c00 ////

undefined4 * __thiscall FUN_007f9c00(void *this,byte param_1)

{
  FUN_007f95f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007f9c20 @ 007f9c20 ////

void __thiscall FUN_007f9c20(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007f8f80(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_007f9a50(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_007f9cb0 @ 007f9cb0 ////

void __fastcall FUN_007f9cb0(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2543;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_007f8bc0(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x500);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_007f7e30(this,iVar4,0);
        }
        else {
          piVar3 = FUN_007f7e30(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d5a6d8;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_007f9c20(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d5a6d8;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007f8ae0(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007f8d60(param_1);
      FUN_007f8e70(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f9e80 @ 007f9e80 ////

void __thiscall FUN_007f9e80(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2558;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db640((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c4c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_007f9cb0(this);
  FUN_007f8d60(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007f9f60 @ 007f9f60 ////

void __fastcall FUN_007f9f60(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2578;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9e90((int)(param_1 + 0xd2));
  puVar7 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar7[2];
      if (piVar2 != (int *)0x0) {
        iVar3 = piVar2[0x205];
        cVar4 = (**(code **)(*piVar2 + 0x204))();
        if (cVar4 != '\0') {
          iVar5 = FUN_005773c0((int)piVar2);
          iVar6 = GetPlayerStudio();
          if ((iVar5 == iVar6) && (iVar3 == 0xf)) {
            pppuStack_18 = &ppuStack_24;
            piStack_1c = piVar2 + 6;
            param_1[0xd1] = param_1[0xd1] + 1;
            ppuStack_24 = &PTR_FUN_00d18c4c;
            iStack_20 = *piStack_1c;
            *(int **)(*piStack_1c + 4) = &iStack_20;
            *piStack_1c = (int)&iStack_20;
            uStack_4 = 0;
            piStack_10 = piVar2;
            FUN_004db640(param_1 + 0xd2,(int)&ppuStack_24);
            uStack_4 = 0xffffffff;
            FUN_00435ec0(&ppuStack_24);
          }
        }
      }
      puVar1 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  FUN_007ddaf0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007f8290);
  FUN_007f8d60(param_1);
  FUN_007f9cb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fa0b0 @ 007fa0b0 ////

void __fastcall FUN_007fa0b0(int *param_1)

{
  FUN_007f9f60(param_1);
  FUN_007f8c40((int)param_1);
  FUN_007f8e70(param_1);
  return;
}


//// FUNCTION FUN_007fa0d0 @ 007fa0d0 ////

void __fastcall FUN_007fa0d0(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xda));
  if ((char)uVar1 != '\0') {
    FUN_007f9f60(param_1);
    FUN_007f8c40((int)param_1);
    FUN_007f8e70(param_1);
    FUN_007f9f60(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_007fa140 @ 007fa140 ////

int * __thiscall FUN_007fa140(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007fa1b0 @ 007fa1b0 ////

void __thiscall FUN_007fa1b0(void *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)((int)this + 0x348);
  param_1[1] = *(undefined4 *)((int)this + 0x34c);
  param_1[2] = *(undefined4 *)((int)this + 0x350);
  return;
}


//// FUNCTION FUN_007fa1e0 @ 007fa1e0 ////

void __fastcall FUN_007fa1e0(int param_1)

{
  void *this;
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c8) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x11c);
    this = (void *)FUN_0073caf0(*(int *)(param_1 + 0x510));
    FUN_00982950(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_007fa210 @ 007fa210 ////

void __thiscall FUN_007fa210(void *this,undefined4 param_1,undefined1 param_2)

{
  *(undefined4 *)((int)this + 0x514) = param_1;
  FUN_0073b810(*(void **)((int)this + 0x510),1);
  *(undefined1 *)((int)this + 0x51c) = param_2;
  return;
}


//// FUNCTION FUN_007fa240 @ 007fa240 ////

void __fastcall FUN_007fa240(int param_1)

{
  void *this;
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  
  if (((*(int *)(param_1 + 0x510) != 0) && (*(int *)(param_1 + 0x4c8) != 0)) &&
     (this = (void *)FUN_0073cb40(*(int *)(param_1 + 0x510)), this != (void *)0x0)) {
    uVar2 = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x27c))();
    iVar1 = FUN_004725b0(iVar1);
    FUN_00566e40(iVar1);
    FUN_009757a0(this,(byte *)0xd5a80c,(float)extraout_ST0,uVar2);
  }
  return;
}


//// FUNCTION FUN_007fa2a0 @ 007fa2a0 ////

undefined4 __fastcall FUN_007fa2a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_007fa2c0 @ 007fa2c0 ////

void __fastcall FUN_007fa2c0(int param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  iVar1 = *(int *)(param_1 + 0x4c8);
  if ((iVar1 == 0) || ((*(int *)(iVar1 + 0xb50) != 3 && (*(int *)(iVar1 + 0x814) != 3)))) {
    if (*(char *)(param_1 + 0x518) == '\0') {
      if (*(char *)(param_1 + 0x51d) == '\0') {
        return;
      }
      if (0 < *(int *)(param_1 + 0x514)) {
        return;
      }
    }
    local_c = 0;
    local_8 = 0;
    local_4 = &DAT_3fd33333;
    local_18 = 0;
    local_14 = 0xbf333333;
    local_10 = &DAT_3fd33333;
    FUN_0073cb00(*(void **)(param_1 + 0x510),&local_18,&local_c,0x3f060a92);
    *(undefined1 *)(param_1 + 0x518) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x518) != '\0') {
      if (*(char *)(param_1 + 0x51d) != '\0') {
        return;
      }
      if (0 < *(int *)(param_1 + 0x514)) {
        return;
      }
    }
    local_18 = 0;
    local_14 = 0xbd4ccccd;
    local_10 = &DAT_3fd33333;
    local_c = 0xbf333333;
    local_8 = 0;
    local_4 = &DAT_3fd33333;
    FUN_0073cb00(*(void **)(param_1 + 0x510),&local_c,&local_18,0x3f060a92);
    *(undefined1 *)(param_1 + 0x518) = 1;
  }
  *(undefined4 *)(param_1 + 0x514) = 10;
  FUN_0073b810(*(void **)(param_1 + 0x510),1);
  *(undefined1 *)(param_1 + 0x51c) = 1;
  return;
}


//// FUNCTION FUN_007fa430 @ 007fa430 ////

undefined4 __fastcall FUN_007fa430(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x4c8) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x298))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c8) + 0x298))();
                    /* WARNING: Could not recover jumptable at 0x007fa461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*piVar2 + 0x28))();
      return uVar3;
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_007fa540 @ 007fa540 ////

void __fastcall FUN_007fa540(int param_1)

{
  int iVar1;
  void *this;
  
  if (*(int **)(param_1 + 0x4c8) != (int *)0x0) {
    iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
    if (iVar1 != 0) {
      iVar1 = 3;
      this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
      FUN_009021d0(this,iVar1);
    }
  }
  return;
}


//// FUNCTION FUN_007fa570 @ 007fa570 ////

void __fastcall FUN_007fa570(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  local_1c = 0.0;
  local_24 = 0xffffffff;
  if (param_1[0x144] != 0) {
    iVar1 = FUN_0073caf0(param_1[0x144]);
    if (iVar1 != 0) {
      iVar1 = FUN_0073caf0(param_1[0x144]);
      local_1c = *(float *)(iVar1 + 200);
      iVar1 = FUN_0073caf0(param_1[0x144]);
      *(float *)(iVar1 + 200) = *(float *)(iVar1 + 200) + *(float *)(iVar1 + 200);
      if (DAT_0104d8e8 != 0) {
        iVar1 = FUN_0073caf0(param_1[0x144]);
        local_24 = CONCAT13(0xff,CONCAT12(*(undefined1 *)(iVar1 + 0xba),0xffff));
        iVar1 = FUN_0073caf0(param_1[0x144]);
        local_24._0_2_ = CONCAT11(*(undefined1 *)(iVar1 + 0xb9),0xff);
        iVar1 = FUN_0073caf0(param_1[0x144]);
        local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)(iVar1 + 0xb8));
        iVar1 = FUN_0073caf0(param_1[0x144]);
        *(undefined4 *)(iVar1 + 0xb8) = 0xff788d9f;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x519) != '\0') {
    if (DAT_0104d8e8 != 0) {
      iVar1 = param_1[0x132];
      iVar2 = FUN_005f5dc0(DAT_0104d8e8);
      if (iVar2 == iVar1) goto LAB_007fa6c1;
    }
    *(undefined1 *)((int)param_1 + 0x519) = 0;
    local_18 = 0;
    local_14 = 0xbd4ccccd;
    local_10 = &DAT_3fd33333;
    local_c = 0xbf333333;
    local_8 = 0;
    local_4 = &DAT_3fd33333;
    FUN_0073cb00((void *)param_1[0x144],&local_c,&local_18,0x3f060a92);
  }
LAB_007fa6c1:
  FUN_007e7aa0(param_1);
  if (param_1[0x144] != 0) {
    iVar1 = FUN_0073caf0(param_1[0x144]);
    if ((iVar1 != 0) && (local_1c != 0.0)) {
      iVar1 = FUN_0073caf0(param_1[0x144]);
      *(float *)(iVar1 + 200) = local_1c;
      if (DAT_0104d8e8 != 0) {
        iVar1 = FUN_0073caf0(param_1[0x144]);
        *(undefined4 *)(iVar1 + 0xb8) = local_24;
      }
    }
  }
  return;
}


//// FUNCTION FUN_007fa770 @ 007fa770 ////

undefined4 * __fastcall FUN_007fa770(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int **)(param_1 + 0x510) != (int *)0x0) {
    puVar1 = FUN_0073c910(*(int **)(param_1 + 0x510));
    return puVar1;
  }
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_007fa790 @ 007fa790 ////

void __thiscall FUN_007fa790(void *this,int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_78;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  uint local_5c [10];
  uint local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce25a0;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return;
  }
  if (param_1 < param_2) {
    ExceptionList = &local_c;
    if (*(char *)((int)this + 0x460) == '\0') {
      piVar3 = &local_78;
      local_78 = (uint)local_78._1_3_ << 8;
      uVar4 = 0;
      uVar5 = 0x14;
      ExceptionList = &local_c;
      FUN_004015d0(&stack0xffffff7c,"showstars",9);
      local_4 = 0xffffffff;
      pvVar1 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"star_info");
      iVar2 = FUN_0088a2b0(pvVar1,piVar3,uVar4,uVar5);
      FUN_00881b40(*(void **)((int)this + 0x358),"star_info",iVar2 + 1);
      *(undefined1 *)((int)this + 0x460) = 1;
    }
    if (DAT_0104a974 == 0) {
      ExceptionList = local_c;
      return;
    }
    if (*(float *)(DAT_0104a974 + 0x78) == 0.0) {
      ExceptionList = local_c;
      return;
    }
    if (param_2 != *(int *)((int)this + 0x410) + -1) {
      FUN_0041c9c0(local_5c,"HUD_STARRATINGUP");
      local_5c[0] = local_5c[0] & 0xfffffffe;
      puVar6 = local_5c;
      goto LAB_007fa982;
    }
    pcVar8 = "HUD_STARRATINGMAX";
  }
  else {
    if (param_1 <= param_2) {
      return;
    }
    ExceptionList = &local_c;
    if (*(char *)((int)this + 0x460) == '\0') {
      piVar3 = &local_78;
      local_78 = (uint)local_78._1_3_ << 8;
      uVar4 = 0;
      uVar5 = 0x14;
      ExceptionList = &local_c;
      FUN_004015d0(&stack0xffffff7c,"showstars",9);
      local_4 = 0xffffffff;
      pvVar1 = (void *)FUN_008819d0(*(void **)((int)this + 0x358),"star_info");
      iVar2 = FUN_0088a2b0(pvVar1,piVar3,uVar4,uVar5);
      FUN_00881b40(*(void **)((int)this + 0x358),"star_info",iVar2 + 1);
      *(undefined1 *)((int)this + 0x460) = 1;
    }
    if (DAT_0104a974 == 0) {
      ExceptionList = local_c;
      return;
    }
    if (*(float *)(DAT_0104a974 + 0x78) == 0.0) {
      ExceptionList = local_c;
      return;
    }
    if ((param_2 != 1) && (param_2 != 0)) {
      FUN_0041c9c0(local_34,"HUD_STARRATINGDOWN");
      local_34[0] = local_34[0] & 0xfffffffe;
      puVar6 = local_34;
      goto LAB_007fa982;
    }
    pcVar8 = "HUD_STARRATINGMIN";
  }
  FUN_0041c9c0(local_5c,pcVar8);
  puVar6 = local_5c;
  local_5c[0] = local_5c[0] & 0xfffffffe;
LAB_007fa982:
  puVar9 = &DAT_00d17518;
  iVar7 = 0;
  iVar2 = 2;
  local_78 = 0x7fa989;
  pvVar1 = (void *)FUN_004f3b20();
  local_78 = 0x7fa990;
  FUN_004f3270(pvVar1,iVar2,(byte *)puVar6,iVar7,puVar9);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007fa9b0 @ 007fa9b0 ////

void __thiscall FUN_007fa9b0(void *this,int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  void *pvVar4;
  float10 fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float fStack_d4;
  float fStack_d0;
  char acStack_cc [4];
  undefined1 auStack_c8 [3];
  undefined1 uStack_c5;
  undefined2 *local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined2 local_a0 [10];
  wchar_t local_8c [52];
  int iStack_24;
  undefined1 uStack_20;
  undefined1 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce25c6;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x3a8) == 0) {
    return;
  }
  if (param_1 < 1) {
    return;
  }
  local_ac = local_a0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_a4 = 10;
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_ac,(wchar_t *)&lpCaption_00d16918,uVar2);
  local_4 = 0;
  sVar3 = _swprintf(local_8c,0xd18f7c,(wchar_t *)param_1);
  FUN_0040cae0(&local_ac,local_8c,sVar3);
  iVar1 = **(int **)((int)this + 0x3a8);
  fVar5 = (float10)(**(code **)(iVar1 + 0x14))();
  pvVar4 = (void *)(float)((float10)*(float *)((int)this + 0x474) - fVar5 * (float10)0.5);
  (**(code **)(iVar1 + 100))();
  acStack_cc[0] = '\0';
  fStack_d4 = 0.0;
  fStack_d0 = 2.8026e-44;
  _strncpy(acStack_cc,"default",7);
  fStack_d4 = 9.80909e-45;
  uStack_c5 = 0;
  uStack_10 = 1;
  (**(code **)(**(int **)((int)this + 0x3a8) + 0xfc))(&stack0xffffff28,8,0);
  uStack_20 = 0;
  if (&DAT_00000014 < &stack0xffffff0c) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar4);
  }
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x54))(auStack_c8);
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x8c))(0);
  (**(code **)(**(int **)((int)this + 0x3a8) + 0x88))(0);
  if (iStack_24 < 10) {
    if (*(float *)((int)*(void **)((int)this + 0x48c) + 0xb4) != 0.0) goto LAB_007fab74;
    uVar6 = 0xc0400000;
    *(float *)((int)this + 0x470) = *(float *)((int)this + 0x470) + 3.0;
  }
  else {
    uVar6 = 0;
  }
  FUN_005eb3b0(*(void **)((int)this + 0x48c),uVar6);
LAB_007fab74:
  iVar1 = **(int **)((int)this + 0x3a8);
  fVar5 = (float10)(**(code **)(iVar1 + 0x10))();
  (**(code **)(iVar1 + 0x5c))
            (1,this,(float)((float10)*(float *)((int)this + 0x470) - fVar5 * (float10)0.5));
  fStack_d4 = -1.7014118e+38;
  *(undefined4 *)(*(int *)((int)this + 0x3a8) + 0x350) = 0xff000000;
  if ((param_2 == '\0') && (param_1 < *(int *)((int)this + 0x45c))) {
    if (DAT_00e5b97c != '\0') {
      fStack_d4 = *(float *)((int)this + 0xc0) + 5.0;
      fStack_d0 = *(float *)((int)this + 0x9c) + 5.0;
      FUN_00747290(*(void **)((int)this + 0x2d4),&fStack_d4);
      pfVar7 = &fStack_d4;
      pvVar4 = (void *)(**(code **)(*(int *)this + 0x114))();
      FUN_005efab0(pvVar4,pfVar7);
    }
    FUN_007e8100((int)this);
  }
  if (local_a4 < 0xb) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_ac);
}


//// FUNCTION FUN_007fac60 @ 007fac60 ////

bool __fastcall FUN_007fac60(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = -1;
  if ((*(int **)((int)param_1 + 0x4c8) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)((int)param_1 + 0x4c8) + 0x298))(), iVar1 != 0)) {
    piVar2 = (int *)(**(code **)(**(int **)((int)param_1 + 0x4c8) + 0x298))();
    iVar3 = (**(code **)(*piVar2 + 0x28))();
  }
  iVar1 = *(int *)((int)param_1 + 0x45c);
  FUN_007fa9b0(param_1,iVar3,'\0');
  *(int *)((int)param_1 + 0x45c) = iVar3;
  return iVar3 != iVar1;
}


//// FUNCTION FUN_007fad10 @ 007fad10 ////

void __fastcall FUN_007fad10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5a868;
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


//// FUNCTION FUN_007fad60 @ 007fad60 ////

void __fastcall FUN_007fad60(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce261e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5a894;
  param_1[0x14] = &PTR_LAB_00d5a878;
  puVar2 = (undefined4 *)param_1[0x144];
  local_4 = 5;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x13f] + 4))();
    param_1[0x144] = 0;
    (**(code **)param_1[0x13f])();
  }
  puVar2 = (undefined4 *)param_1[0x138];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x148] = &PTR_FUN_00d18c5c;
  if ((undefined4 *)param_1[0x14a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14a] = param_1[0x149];
  }
  if (param_1[0x149] != 0) {
    *(undefined4 *)(param_1[0x149] + 4) = param_1[0x14a];
  }
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14d] = 0;
  if ((undefined4 *)param_1[0x14a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14a] = param_1[0x149];
  }
  if (param_1[0x149] != 0) {
    *(undefined4 *)(param_1[0x149] + 4) = param_1[0x14a];
  }
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x13f] = &PTR_LAB_00d2dc14;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x144] = 0;
  if ((undefined4 *)param_1[0x141] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x141] = param_1[0x140];
  }
  if (param_1[0x140] != 0) {
    *(undefined4 *)(param_1[0x140] + 4) = param_1[0x141];
  }
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x139] = &PTR_LAB_00d5a868;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fb080 @ 007fb080 ////

/* WARNING: Removing unreachable block (ram,0x007fbdbb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007fb080(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  size_t sVar6;
  uint unaff_EBX;
  uint unaff_EBP;
  void *unaff_ESI;
  void *unaff_EDI;
  float10 fVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *local_10c;
  char *pcStack_108;
  undefined4 uStack_104;
  uint uStack_100;
  char acStack_fc [20];
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  undefined1 *puStack_e0;
  uint local_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined1 *puStack_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_c0 [20];
  undefined2 *puStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined2 auStack_a0 [10];
  wchar_t awStack_8c [54];
  void *pvStack_20;
  undefined1 uStack_18;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce277d;
  pvStack_c = ExceptionList;
  local_cc = local_c0;
  local_dc = 0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_c4 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_cc,"iconpanel2",10);
  local_c8 = 10;
  local_cc[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_cc,1,0,'\x01');
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x10c] = iVar2;
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x10a] = iVar2;
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x10d] = iVar2;
  param_1[0x10b] = 0xe;
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x10e] = iVar2;
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x10f] = iVar2;
  puVar9 = &stack0xfffffed0;
  uVar10 = 0;
  uVar11 = 0x14;
  FUN_004015d0(&stack0xfffffec4,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
  param_1[0x110] = iVar2;
  pvVar1 = operator_new(0x4b8);
  local_4._0_1_ = 7;
  if (pvVar1 == (void *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_007ac740(pvVar1,0,1);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_10c;
  (**(code **)param_1[0x139])();
  puVar3 = operator_new(0x7c);
  local_4._0_1_ = 8;
  if (puVar3 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_005efb20(puVar3);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x124] + 4))();
  param_1[0x129] = (int)local_10c;
  (**(code **)param_1[0x124])();
  if (param_1[0x13e] != 0) {
    puStack_e8 = (undefined1 *)0x0;
    uStack_e4 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_e8);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    unaff_EBP = param_1[0x132];
    iVar2 = param_1[0x13e];
    (**(code **)(*(int *)(iVar2 + 0x4a0) + 4))();
    *(uint *)(iVar2 + 0x4b4) = unaff_EBP;
    (*(code *)**(undefined4 **)(iVar2 + 0x4a0))();
    pcVar8 = &stack0xfffffec8;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xfffffebc,"star_mood",9);
    FUN_00882830((void *)param_1[0xd6],pcVar8,uVar10,uVar11);
    puVar9 = &stack0xfffffed0;
    uVar10 = 0;
    uVar11 = 0x14;
    FUN_004015d0(&stack0xfffffec4,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
    if (_DAT_00e5b978 == 0.0) {
      puVar9 = &stack0xfffffed0;
      uVar10 = 0;
      uVar11 = 0x14;
      FUN_004015d0(&stack0xfffffec4,"showstars",9);
      local_4._0_1_ = 0;
      pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
      iVar2 = FUN_0088a2b0(pvVar1,puVar9,uVar10,uVar11);
    }
    FUN_00881b40((void *)param_1[0xd6],"star_info",iVar2 + 1);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\x01');
  puVar3 = operator_new(900);
  local_4._0_1_ = 0xb;
  if (puVar3 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_00737730(puVar3);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0xe5] + 4))();
  param_1[0xea] = (int)local_10c;
  (**(code **)param_1[0xe5])();
  puVar3 = operator_new(0x344);
  local_4._0_1_ = 0xc;
  if (puVar3 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_007432f0(puVar3);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0xeb] + 4))();
  param_1[0xf0] = (int)local_10c;
  (**(code **)param_1[0xeb])();
  *(uint *)(param_1[0xea] + 0x114) = *(uint *)(param_1[0xea] + 0x114) & 0xfffffffd;
  pvVar1 = operator_new(0xf8);
  local_4._0_1_ = 0xd;
  if (pvVar1 == (void *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_005eb780(pvVar1,param_1[0xf0],param_1[0xea]);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x11e] + 4))();
  param_1[0x123] = (int)local_10c;
  (**(code **)param_1[0x11e])();
  pcStack_108 = acStack_fc;
  acStack_fc[0] = '\0';
  uStack_104 = 0;
  uStack_100 = 0x14;
  _strncpy(pcStack_108,"number_dummy",0xc);
  uStack_104 = 0xc;
  pcStack_108[0xc] = '\0';
  local_4._0_1_ = 0xe;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0xf0],&pcStack_108,1,0,
               (undefined1 *)0x0);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_108);
  }
  FUN_00748590(*(void **)(param_1[0xea] + 0x2d4),param_1[0x123]);
  puStack_e8 = (undefined1 *)0x41300000;
  param_1[0x11c] = 0x41300000;
  uStack_e4 = 0x41400000;
  iVar2 = -1;
  param_1[0x11d] = 0x41400000;
  if (((int *)param_1[0x132] != (int *)0x0) &&
     (iVar4 = (**(code **)(*(int *)param_1[0x132] + 0x298))(), iVar4 != 0)) {
    piVar5 = (int *)(**(code **)(*(int *)param_1[0x132] + 0x298))();
    iVar2 = (**(code **)(*piVar5 + 0x28))();
  }
  param_1[0x117] = iVar2;
  if ((param_1[0xea] != 0) && (0 < iVar2)) {
    puStack_ac = auStack_a0;
    auStack_a0[0] = 0;
    uStack_a8 = 0;
    uStack_a4 = 10;
    uVar11 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_ac,(wchar_t *)&lpCaption_00d16918,uVar11);
    sVar6 = _swprintf(awStack_8c,0xd18f7c,(wchar_t *)param_1[0x117]);
    FUN_0040cae0(&puStack_ac,awStack_8c,sVar6);
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"default",7);
    uStack_104 = 7;
    pcStack_108[7] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x10);
    (**(code **)(*(int *)param_1[0xea] + 0xfc))();
    uStack_14 = 0xf;
    if (0x14 < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_ESI);
    }
    (**(code **)(*(int *)param_1[0xea] + 0x54))();
    (**(code **)(*(int *)param_1[0xea] + 0x8c))();
    (**(code **)(*(int *)param_1[0xea] + 0x88))();
    if ((param_1[0x117] < 10) && (*(float *)(param_1[0x123] + 0xb4) == 0.0)) {
      param_1[0x11c] = (int)((float)param_1[0x11c] + 3.0);
      FUN_005eb3b0((void *)param_1[0x123],0xc0400000);
    }
    *(undefined4 *)(param_1[0xea] + 0x350) = 0xff000000;
    piVar5 = (int *)FUN_007fd5d0();
    (**(code **)(*piVar5 + 0xc))();
    iVar2 = *(int *)param_1[0xea];
    (**(code **)(iVar2 + 0x10))();
    (**(code **)(iVar2 + 0x5c))(1,param_1);
    iVar2 = *(int *)param_1[0xea];
    fVar7 = (float10)(**(code **)(iVar2 + 0x14))();
    (**(code **)(iVar2 + 100))
              (1,param_1,(float)((float10)(float)param_1[0x11d] - fVar7 * (float10)0.5));
    local_4 = local_4 & 0xffffff00;
    if (10 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_ac);
    }
  }
  (**(code **)(*(int *)param_1[0x13e] + 0x110))();
  FUN_007e7ef0(param_1);
  puVar3 = operator_new(0x3e4);
  local_4._0_1_ = 0x11;
  if (puVar3 == (undefined4 *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    local_10c = FUN_0073d300(puVar3);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x13f] + 4))();
  param_1[0x144] = (int)local_10c;
  (**(code **)param_1[0x13f])();
  pcStack_108 = acStack_fc;
  acStack_fc[0] = '\0';
  uStack_104 = 0;
  uStack_100 = 0x14;
  _strncpy(pcStack_108,"ai_staricon.flm",0xf);
  uStack_104 = 0xf;
  pcStack_108[0xf] = '\0';
  local_4._0_1_ = 0x12;
  FUN_0073dda0((void *)param_1[0x144],&pcStack_108);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0x14 < uStack_100) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_108);
  }
  iVar2 = param_1[0x132];
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x814) == 3) {
      puStack_e8 = (undefined1 *)0x0;
      uStack_e4 = 0xbd4ccccd;
      puStack_e0 = &DAT_3fd33333;
      uStack_d8 = 0xbf333333;
      uStack_d4 = 0;
      puStack_d0 = &DAT_3fd33333;
      FUN_0073cb00((void *)param_1[0x144],&uStack_d8,&puStack_e8,0x3f060a92);
      *(undefined1 *)(param_1 + 0x146) = 1;
    }
    else if (iVar2 != 0) {
      uStack_d8 = 0;
      uStack_d4 = 0;
      puStack_d0 = &DAT_3fd33333;
      puStack_e8 = (undefined1 *)0x0;
      uStack_e4 = 0xbf333333;
      puStack_e0 = &DAT_3fd33333;
      FUN_0073cb00((void *)param_1[0x144],&puStack_e8,&uStack_d8,0x3f060a92);
      *(undefined1 *)(param_1 + 0x146) = 0;
    }
  }
  if ((int *)param_1[0x132] != (int *)0x0) {
    FUN_0073cff0((void *)param_1[0x144],(int *)param_1[0x132]);
  }
  if ((DAT_0104d8e8 == 0) || (param_1[0x132] == 0)) {
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"star_head",9);
    uStack_104 = 9;
    pcStack_108[9] = '\0';
    local_4._0_1_ = 0x15;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x144],&pcStack_108,1,0,
                 (undefined1 *)0x0);
  }
  else {
    pvVar1 = operator_new(0x360);
    local_4._0_1_ = 0x13;
    if (pvVar1 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00730500(pvVar1,param_1[0x132]);
    }
    local_4._0_1_ = 0;
    (**(code **)(*piVar5 + 0xc))();
    (**(code **)(*(int *)param_1[0x144] + 0x70))();
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x14;
    _strncpy(pcStack_108,"star_head",9);
    uStack_104 = 9;
    pcStack_108[9] = '\0';
    local_4._0_1_ = 0x14;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),piVar5,&pcStack_108,1,0,(undefined1 *)0x0);
  }
  if (0x14 < uStack_100) {
    local_4._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
    _free(pcStack_108);
  }
  local_4._0_1_ = 0;
  pvVar1 = operator_new(0x360);
  if (pvVar1 == (void *)0x0) {
    local_10c = (undefined4 *)0x0;
  }
  else {
    pcStack_108 = acStack_fc;
    acStack_fc[0] = '\0';
    uStack_104 = 0;
    uStack_100 = 0x20;
    pcStack_108 = _malloc(0x20);
    _strncpy(pcStack_108,"ui/ppod_statbar_director.dds",0x1c);
    uStack_104 = 0x1c;
    pcStack_108[0x1c] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0x17);
    local_dc = 1;
    puStack_e8 = &stack0xfffffed4;
    local_10c = FUN_0069d820(pvVar1,&pcStack_108,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0x18;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_10c;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if (((local_dc & 1) != 0) && (0x14 < uStack_100)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_108);
  }
  pcStack_108 = acStack_fc;
  acStack_fc[0] = '\0';
  uStack_104 = 0;
  uStack_100 = 0x14;
  _strncpy(pcStack_108,"",0);
  uStack_104 = 0;
  *pcStack_108 = '\0';
  puStack_e8 = &stack0xfffffed4;
  local_4 = CONCAT31(local_4._1_3_,0x19);
  (**(code **)(*(int *)param_1[0x138] + 0x100))();
  uStack_18 = 0;
  if (0x14 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  FUN_0069ce60((void *)param_1[0x138],0xffffff);
  _strncpy(&stack0xfffffef0,"star_job",8);
                    /* WARNING: Ignoring partial resolution of indirect */
  pcStack_108._0_1_ = 0;
  uStack_18 = 0x1a;
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],
               (undefined4 *)&stack0xfffffee4,1,0,(undefined1 *)0x0);
  if (uStack_d8 < 0x15) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_e0);
}


//// FUNCTION FUN_007fbe00 @ 007fbe00 ////

int * __thiscall FUN_007fbe00(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce27de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d5a894;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5a878;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d16954;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_LAB_00d5a868;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 **)((int)this + 0x508) = (undefined4 *)((int)this + 0x4fc);
  *(undefined4 *)((int)this + 0x4fc) = &PTR_LAB_00d2dc14;
  *(undefined4 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x514) = 0x32;
  *(undefined1 *)((int)this + 0x519) = 0;
  *(undefined1 *)((int)this + 0x51a) = 0;
  *(undefined1 *)((int)this + 0x51b) = 0;
  *(undefined1 *)((int)this + 0x51c) = 0;
  *(undefined1 *)((int)this + 0x51d) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0;
  *(undefined4 *)((int)this + 0x524) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 **)((int)this + 0x52c) = (undefined4 *)((int)this + 0x520);
  *(undefined4 *)((int)this + 0x520) = &PTR_FUN_00d18c5c;
  *(undefined4 *)((int)this + 0x534) = 0;
  local_4 = 5;
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  iVar3 = FUN_00990d30(0x1e,0x46);
  *(int *)((int)this + 0x514) = iVar3;
  FUN_007fb080(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007fbf50 @ 007fbf50 ////

undefined4 * __thiscall FUN_007fbf50(void *this,byte param_1)

{
  FUN_007fad60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007fbf70 @ 007fbf70 ////

void __fastcall FUN_007fbf70(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  undefined4 local_b4;
  uint *local_ac;
  int *local_a8;
  int *local_a4;
  uint local_a0 [5];
  uint *local_8c [2];
  uint uStack_84;
  uint *local_6c [2];
  uint uStack_64;
  uint *local_4c [2];
  uint uStack_44;
  uint *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce284a;
  local_c = ExceptionList;
  if ((DAT_0104d8e8 == 0) || (*(int *)(param_1 + 0x4c8) == 0)) {
    if (*(int **)(param_1 + 0x4c8) == (int *)0x0) {
      return;
    }
    ExceptionList = &local_c;
    cVar3 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1c4))();
    if ((cVar3 != '\0') &&
       (cVar3 = (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1d0))(), cVar3 == '\0')) {
      local_ac = local_a0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_a8 = (int *)0x0;
      local_a4 = (int *)0x20;
      local_ac = _malloc(0x20);
      _strncpy((char *)local_ac,"ui/activity_busyfilm.dds",0x18);
      local_a8 = (int *)0x18;
      *(char *)(local_ac + 6) = '\0';
      local_4 = 6;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
      local_4 = 0xffffffff;
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      local_b4 = (char *)0xffffffff;
      pvVar5 = *(void **)(param_1 + 0x4e0);
      goto LAB_007fc75b;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x814);
    iVar7 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    bVar1 = false;
    if (iVar7 != 0) {
      local_ac = local_a0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_a8 = (int *)0x0;
      local_a4 = (int *)0x20;
      local_ac = _malloc(0x20);
      _strncpy((char *)local_ac,"THOUGHT_HEADINGTOSET",0x14);
      local_a8 = (int *)0x14;
      *(char *)(local_ac + 5) = '\0';
      uVar6 = FUN_00401ec0((undefined4 *)(iVar7 + 0x160),&local_ac);
      if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac);
      }
      if ((char)uVar6 != '\0') {
        bVar1 = true;
      }
    }
    local_b4 = "ui/activity_idle.dds";
    if ((iVar4 == 2) || (iVar4 == 3)) {
      if (bVar1) {
        local_b4 = "ui/activity_gofilm.dds";
      }
      else {
        piVar8 = (int *)FUN_0053ae00(*(int *)(param_1 + 0x4c8));
        if (piVar8 == (int *)0x0) {
LAB_007fc5ee:
          iVar4 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
          if (iVar4 != 0) {
            iVar13 = 0;
            pTVar12 = &TM::DesireStuntTrain::RTTI_Type_Descriptor;
            pTVar11 = &TM::TMBaseDesire::RTTI_Type_Descriptor;
            iVar7 = 0;
            iVar4 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
            piVar8 = (int *)FUN_00401c30(iVar4);
            iVar4 = FUN_00ace790(piVar8,iVar7,pTVar11,pTVar12,iVar13);
            if (iVar4 != 0) {
              local_b4 = "ui/activity_busy.dds";
              goto LAB_007fc6b3;
            }
          }
          local_a8 = (int *)0x0;
          local_a4 = (int *)0x0;
          local_a0[0] = 0;
          local_4 = 7;
          (**(code **)(**(int **)(param_1 + 0x4c8) + 0x1f8))();
          if (((local_a8 != (int *)0x0) && ((int)local_a4 - (int)local_a8 >> 2 != 0)) &&
             (piVar8 = local_a8, local_a8 != local_a4)) {
            do {
              if (*piVar8 != 0) {
                piVar9 = (int *)FUN_005b22a0(*piVar8);
                iVar4 = (**(code **)(*piVar9 + 0x24))();
                if (iVar4 == 5) {
                  local_b4 = "ui/activity_idlefilm.dds";
                }
              }
              piVar8 = piVar8 + 1;
            } while (piVar8 != local_a4);
          }
          FUN_0057e300((int)&local_ac);
        }
        else {
          iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                               &TM::CLeadsRoom::RTTI_Type_Descriptor,0);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                    &TM::CCastRoom::RTTI_Type_Descriptor,0), iVar4 == 0)) &&
             (iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                   &TM::CDirectorRoom::RTTI_Type_Descriptor,0), iVar4 == 0)) {
            iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                 &TM::CRehearseRoom::RTTI_Type_Descriptor,0);
            if ((((iVar4 == 0) &&
                 (iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                       &TM::CAutoWardrobeRoom::RTTI_Type_Descriptor,0), iVar4 == 0))
                && ((iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                          &TM::CDetoxRoom::RTTI_Type_Descriptor,0), iVar4 == 0 &&
                    ((iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                           &TM::CHealthRoom::RTTI_Type_Descriptor,0), iVar4 == 0 &&
                     (iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                           &TM::CPRRoom::RTTI_Type_Descriptor,0), iVar4 == 0))))))
               && (iVar4 = FUN_00ace790(piVar8,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                        &TM::CHospitalRoom::RTTI_Type_Descriptor,0), iVar4 == 0))
            goto LAB_007fc5ee;
            local_b4 = "ui/activity_busy.dds";
          }
          else {
            local_b4 = "ui/activity_busyfilm.dds";
          }
        }
      }
    }
    else {
      local_b4 = "ui/activity_busytemp.dds";
      if (((iVar4 == 0xe) || (iVar4 == 0xf)) &&
         ((iVar4 = FUN_0053ae00(*(int *)(param_1 + 0x4c8)), iVar4 == 0 &&
          ((iVar4 = FUN_00ace790((int *)0x0,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                 &TM::CScriptRoom::RTTI_Type_Descriptor,0), iVar4 == 0 ||
           (iVar4 = FUN_00ace790((int *)0x0,0,&TM::TMRoom::RTTI_Type_Descriptor,
                                 &TM::CResearchRoom::RTTI_Type_Descriptor,0), iVar4 == 0)))))) {
        (**(code **)(**(int **)(param_1 + 0x4c8) + 0x224))();
      }
    }
LAB_007fc6b3:
    local_ac = local_a0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    local_a8 = (int *)0x0;
    local_a4 = (int *)0x14;
    pcVar10 = local_b4;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    FUN_004015d0(&local_ac,local_b4,(int)pcVar10 - (int)(local_b4 + 1));
    local_4 = 8;
    (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
    local_4 = 0xffffffff;
    if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    pvVar5 = *(void **)(param_1 + 0x4e0);
    uVar2 = 0xff;
  }
  else {
    ExceptionList = &local_c;
    iVar4 = FUN_005f5ba0(DAT_0104d8e8);
    if (((iVar4 == 0) || (pvVar5 = (void *)FUN_005b2220(iVar4), pvVar5 == (void *)0x0)) ||
       (iVar4 = FUN_005a7640(pvVar5,*(int *)(param_1 + 0x4c8),0), iVar4 == 0)) {
      local_ac = local_a0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_a8 = (int *)0x0;
      local_a4 = (int *)0x14;
      _strncpy((char *)local_ac,"ui/empty.dds",0xc);
      local_a8 = (int *)0xc;
      *(char *)(local_ac + 3) = '\0';
      local_4 = 5;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
      if (local_a4 < 0x15) {
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_ac);
    }
    uVar6 = FUN_005a6130(iVar4);
    switch(uVar6) {
    case 0:
      FUN_00401de0(local_6c,"ui/button_dummyoff.dds",0xffffffff);
      local_4 = 3;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_6c);
      break;
    case 1:
      FUN_00401de0(&local_ac,"ui/button_dummy_red.dds",0xffffffff);
      local_4 = 0;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_ac);
      local_6c[0] = local_ac;
      uStack_64 = (uint)local_a4;
      break;
    case 2:
      FUN_00401de0(local_4c,"ui/button_dummy_green.dds",0xffffffff);
      local_4 = 1;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_4c);
      local_6c[0] = local_4c[0];
      uStack_64 = uStack_44;
      break;
    case 3:
      FUN_00401de0(local_8c,"ui/button_dummy_blue.dds",0xffffffff);
      local_4 = 2;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_8c);
      local_6c[0] = local_8c[0];
      uStack_64 = uStack_84;
      break;
    default:
      FUN_00401de0(local_2c,"ui/empty.dds",0xffffffff);
      local_4 = 4;
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(local_2c);
      local_6c[0] = local_2c[0];
      uStack_64 = uStack_24;
    }
    if (0x14 < uStack_64) {
      local_4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    local_4 = 0xffffffff;
    iVar7 = *(int *)(param_1 + 0x4c8);
    iVar4 = FUN_005a64e0(iVar4);
    pvVar5 = *(void **)(param_1 + 0x4e0);
    if (iVar4 != iVar7) {
      local_b4 = (char *)0xffffffff;
      goto LAB_007fc75b;
    }
    uVar2 = 0xa0;
  }
  local_b4 = (char *)CONCAT13(uVar2,CONCAT12(uVar2,CONCAT11(uVar2,uVar2)));
LAB_007fc75b:
  FUN_0069ce60(pvVar5,local_b4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007fd0f0 @ 007fd0f0 ////

int * __thiscall FUN_007fd0f0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007fd130 @ 007fd130 ////

void __fastcall FUN_007fd130(int param_1)

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


//// FUNCTION FUN_007fd150 @ 007fd150 ////

void __fastcall FUN_007fd150(int param_1)

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


//// FUNCTION FUN_007fd3c0 @ 007fd3c0 ////

int * __thiscall FUN_007fd3c0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_007fd3f0 @ 007fd3f0 ////

int * __cdecl FUN_007fd3f0(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_007fd430 @ 007fd430 ////

undefined4 * __cdecl FUN_007fd430(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_007fd5d0 @ 007fd5d0 ////

undefined4 FUN_007fd5d0(void)

{
  if (DAT_0104d8e8 != 0) {
    return *(undefined4 *)(DAT_0104d8e8 + 0x5ec);
  }
  return DAT_0104eae0;
}


//// FUNCTION FUN_007fd5f0 @ 007fd5f0 ////

undefined4 FUN_007fd5f0(void)

{
  return DAT_0104eae0;
}


//// FUNCTION FUN_007fd600 @ 007fd600 ////

float10 __fastcall FUN_007fd600(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
  }
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return ((float10)*(int *)(param_1 + 0x3c4) * (float10)DAT_00e5bd34 +
         (float10)DAT_00e5bd34 * (float10)0.4 * (float10)*(int *)(param_1 + 0x3c8)) -
         fVar2 * (float10)10.0;
}


//// FUNCTION FUN_007fd680 @ 007fd680 ////

ulonglong __fastcall FUN_007fd680(int *param_1)

{
  ulonglong uVar1;
  
  (**(code **)(*param_1 + 0x14))();
  FUN_007fd600((int)param_1);
  uVar1 = FUN_00acd42c();
  return uVar1;
}


//// FUNCTION FUN_007fd6c0 @ 007fd6c0 ////

ulonglong __fastcall FUN_007fd6c0(int *param_1)

{
  undefined2 unaff_SI;
  float10 fVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  fVar1 = FUN_007fd600((int)param_1);
  fVar2 = (float10)(**(code **)(*param_1 + 0x14))();
  FUN_00ad1180((double)(((float10)(float)fVar1 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),
               unaff_SI);
  uVar3 = FUN_00acd42c();
  return uVar3;
}


//// FUNCTION FUN_007fd700 @ 007fd700 ////

void __fastcall FUN_007fd700(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x3d4) = 1;
  iVar3 = FUN_007ef840();
  if (iVar3 != 0) {
    iVar3 = FUN_007ef840();
    *(undefined4 *)(iVar3 + 0x39c) = 1;
  }
  piVar2 = *(int **)(param_1 + 0x388);
  piVar1 = (int *)(param_1 + 0x394);
  while (piVar2 != piVar1) {
    *piVar2 = 0;
    piVar2 = (int *)piVar2[1];
    *(undefined4 *)(*piVar2 + 4) = 0;
  }
  *(int **)(param_1 + 0x388) = piVar1;
  *piVar1 = param_1 + 900;
  return;
}


//// FUNCTION FUN_007fd830 @ 007fd830 ////

undefined4 FUN_007fd830(int param_1,int param_2,undefined *param_3)

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


//// FUNCTION FUN_007fd920 @ 007fd920 ////

void __cdecl FUN_007fd920(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_007fdad0 @ 007fdad0 ////

void FUN_007fdad0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  float local_34;
  float local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce28b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x394);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0089ea20(puVar2);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 1;
  FUN_0089e070(puVar2,&local_2c,0,1,'\x01');
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_34 = 0.0;
  local_30 = 0.0;
  FUN_00882710((void *)puVar2[0xd6],&local_34);
  piVar1 = puVar2 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar2)(1);
  }
  ExceptionList = local_c;
  DAT_00e5bd34 = local_30 * 0.6;
  DAT_00e5bd38 = local_34 * 0.6;
  return;
}


//// FUNCTION FUN_007fdc50 @ 007fdc50 ////

void __fastcall FUN_007fdc50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d5aa00;
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


//// FUNCTION FUN_007fdce0 @ 007fdce0 ////

void FUN_007fdce0(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_007fd830((int)param_1,(int)param_2,param_3);
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


//// FUNCTION FUN_007fde70 @ 007fde70 ////

undefined4 * __thiscall FUN_007fde70(void *this,byte param_1)

{
  FUN_007fdc50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007fde90 @ 007fde90 ////

void __cdecl FUN_007fde90(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce28c8;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d16954;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fdf60 @ 007fdf60 ////

void __cdecl FUN_007fdf60(int *param_1,int *param_2)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce28e8;
  pvStack_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_10 = param_1[5];
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d5aa00;
  ExceptionList = &pvStack_c;
  if (local_10 != 0) {
    local_1c = (int *)(local_10 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &pvStack_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  (**(code **)(*param_1 + 4))();
  param_1[5] = param_2[5];
  (**(code **)*param_1)();
  (**(code **)(*param_2 + 4))();
  param_2[5] = local_10;
  (**(code **)*param_2)();
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fe030 @ 007fe030 ////

void __cdecl
FUN_007fe030(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2908;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fe100 @ 007fe100 ////

void __cdecl FUN_007fe100(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2928;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d16954;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007fe2e0 @ 007fe2e0 ////

void __cdecl
FUN_007fe2e0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined *param_10)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2948;
  local_4 = 0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while (param_3 < param_2) {
    iVar4 = (param_2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    cVar3 = (*(code *)param_10)(*(undefined4 *)(iVar1 + 0x14),param_9);
    if (cVar3 == '\0') break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
    (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
    puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
    (**(code **)*puVar2)();
    param_2 = iVar4;
  }
  puVar2 = (undefined4 *)(param_1 + param_2 * 0x18);
  (**(code **)(*(int *)(param_1 + param_2 * 0x18) + 4))();
  puVar2[5] = param_9;
  (**(code **)*puVar2)();
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fe3b0 @ 007fe3b0 ////

void __cdecl FUN_007fe3b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2968;
  local_c = ExceptionList;
  iVar1 = (param_3 - param_1) / 0x18;
  iVar2 = (param_2 - param_1) / 0x18;
  iVar5 = iVar2;
  local_38 = iVar1;
  while (iVar3 = iVar5, iVar3 != 0) {
    iVar5 = local_38 % iVar3;
    local_38 = iVar3;
  }
  if ((local_38 < iVar1) && (0 < local_38)) {
    piVar8 = (int *)(param_1 + local_38 * 0x18);
    param_2 = iVar2 * 0x18;
    ExceptionList = &local_c;
    do {
      local_18 = &local_24;
      iVar1 = param_2 + (int)piVar8;
      local_20 = 0;
      local_1c = (int *)0x0;
      local_24 = &PTR_FUN_00d5aa00;
      local_10 = *(int *)(iVar2 * -0x18 + 0x14 + iVar1);
      if (local_10 != 0) {
        local_1c = (int *)(local_10 + 0x18);
        local_20 = *local_1c;
        *(int **)(*local_1c + 4) = &local_20;
        *local_1c = (int)&local_20;
      }
      local_4 = 0;
      if (iVar1 == param_3) {
        piVar7 = &param_1;
      }
      else {
        iStack_30 = iVar1;
        piVar7 = &iStack_30;
      }
      piVar6 = (int *)*piVar7;
      piVar7 = piVar8;
      while (piVar4 = piVar6, piVar4 != piVar8) {
        (**(code **)(*piVar7 + 4))();
        piVar7[5] = piVar4[5];
        (**(code **)*piVar7)();
        iVar1 = (param_3 - (int)piVar4) / 0x18;
        if (iVar2 < iVar1) {
          iStack_2c = param_2 + (int)piVar4;
          piVar7 = &iStack_2c;
        }
        else {
          iStack_28 = param_1 + (iVar2 - iVar1) * 0x18;
          piVar7 = &iStack_28;
        }
        piVar6 = (int *)*piVar7;
        piVar7 = piVar4;
      }
      (**(code **)(*piVar7 + 4))();
      piVar7[5] = local_10;
      (**(code **)*piVar7)();
      if (local_1c != (int *)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != 0) {
        *(int **)(local_20 + 4) = local_1c;
      }
      piVar8 = piVar8 + -6;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007fe590 @ 007fe590 ////

int * __thiscall FUN_007fe590(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2993;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d5aa00;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  local_4 = 1;
  *(void **)((int)this + 0x24) = this;
  FUN_00acdb9e(0xe5bd64);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x28) = iVar2;
  if (s___AV__CP_VWStarIcon_TM___TM___00e5bd44[0x1e] != '\0') {
    iVar2 = 0x1c;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe5bd64);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__CP_VWStarIcon_TM___TM___00e5bd44[0x1e] = '\0';
  }
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  piVar1 = (int *)(*(int *)((int)this + 0x14) + 0x48);
  *piVar1 = *piVar1 + 1;
  *(int *)((int)this + 0x18) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_007fe670 @ 007fe670 ////

/* WARNING: Removing unreachable block (ram,0x007fe6df) */

void __fastcall FUN_007fe670(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce29b3;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[5];
  local_4 = 1;
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
  if ((int *)param_1[8] != (int *)0x0) {
    *(int *)param_1[8] = param_1[7];
  }
  if (param_1[7] != 0) {
    *(int *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  if (param_1[7] != 0) {
    *(int *)(param_1[7] + 4) = param_1[8];
  }
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (int)&PTR_FUN_00d5aa00;
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


//// FUNCTION FUN_007fe750 @ 007fe750 ////

int * __thiscall FUN_007fe750(void *this,byte param_1)

{
  FUN_007fe670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_007fe770 @ 007fe770 ////

void __fastcall FUN_007fe770(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_007fe7e0 @ 007fe7e0 ////

undefined1 __thiscall FUN_007fe7e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_007fa2a0(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_007fa2a0(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_007fe860 @ 007fe860 ////

void __thiscall FUN_007fe860(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 != 0) && (iVar3 = *(int *)((int)this + 0x35c), iVar3 != *(int *)((int)this + 0x360)))
  {
    do {
      piVar1 = *(int **)(iVar3 + 0x14);
      iVar2 = FUN_007fa2a0((int)piVar1);
      if ((iVar2 != 0) && (iVar2 = FUN_007fa2a0((int)piVar1), iVar2 == param_1)) {
        (**(code **)(*piVar1 + 0x108))();
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return;
}


//// FUNCTION FUN_007fe8c0 @ 007fe8c0 ////

void __thiscall FUN_007fe8c0(void *this,int param_1)

{
  int *this_00;
  char cVar1;
  int iVar2;
  
  if ((0 < param_1) && (iVar2 = *(int *)((int)this + 0x35c), iVar2 != *(int *)((int)this + 0x360)))
  {
    do {
      this_00 = *(int **)(iVar2 + 0x14);
      cVar1 = FUN_007e7910((int)this_00);
      if ((cVar1 != '\0') && (1 < *(int *)((int)this + 0x3c4))) {
        FUN_007e7e10(this_00);
        *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + -1;
        *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + 1;
        cVar1 = (**(code **)(*this_00 + 0x100))();
        if (cVar1 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x360));
  }
  return;
}


//// FUNCTION FUN_007fe950 @ 007fe950 ////

void __thiscall FUN_007fe950(void *this,int param_1)

{
  int *this_00;
  char cVar1;
  int iVar2;
  
  if ((0 < param_1) && (iVar2 = *(int *)((int)this + 0x35c), iVar2 != *(int *)((int)this + 0x360)))
  {
    do {
      this_00 = *(int **)(iVar2 + 0x14);
      cVar1 = FUN_007e7910((int)this_00);
      if (cVar1 == '\0') {
        FUN_007e7dc0(this_00);
        *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + -1;
        *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + 1;
        cVar1 = (**(code **)(*this_00 + 0x100))();
        if (cVar1 == '\0') {
          FUN_0089e5f0(this_00,'\x01');
        }
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          return;
        }
      }
      iVar2 = iVar2 + 0x18;
    } while (iVar2 != *(int *)((int)this + 0x360));
  }
  return;
}


//// FUNCTION FUN_007fe9d0 @ 007fe9d0 ////

void __thiscall FUN_007fe9d0(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      piVar1 = *(int **)(iVar3 + 0x14);
      cVar2 = FUN_007e7910((int)piVar1);
      if ((cVar2 != '\0') && (piVar1 != param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return;
      }
    }
    FUN_007e7e10(piVar1);
    *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + -1;
    *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + 1;
  }
  return;
}


//// FUNCTION FUN_007fea40 @ 007fea40 ////

int __thiscall FUN_007fea40(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_007fa2a0(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_007fa2a0(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_007feae0 @ 007feae0 ////

int __fastcall FUN_007feae0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x35c);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x360)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x360));
  }
  return iVar2;
}


//// FUNCTION FUN_007feb20 @ 007feb20 ////

int __fastcall FUN_007feb20(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x35c);
  iVar2 = 0;
  if (iVar3 != *(int *)(param_1 + 0x360)) {
    do {
      cVar1 = FUN_007e7910(*(int *)(iVar3 + 0x14));
      if (cVar1 == '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)(param_1 + 0x360));
  }
  return iVar2;
}


//// FUNCTION FUN_007feb60 @ 007feb60 ////

void __fastcall FUN_007feb60(int param_1)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  void *this;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce29cb;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x388) == param_1 + 0x394) {
    iVar7 = *(int *)(param_1 + 0x35c);
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if (iVar7 != *(int *)(param_1 + 0x360)) {
      do {
        piVar5 = *(int **)(iVar7 + 0x14);
        if (piVar5 != (int *)0x0) {
          iVar2 = (**(code **)(*piVar5 + 0x10c))();
          iVar3 = FUN_007fa430((int)piVar5);
          if (iVar2 != iVar3) {
            this = operator_new(0x2c);
            piVar4 = (int *)0x0;
            uStack_4 = 0;
            if (this != (void *)0x0) {
              iVar2 = FUN_007fa430((int)piVar5);
              piVar4 = FUN_007fe590(this,(int)piVar5,iVar2);
            }
            piVar5 = piVar4 + 7;
            piVar6 = (int *)(param_1 + 0x394);
            piVar4[8] = (int)piVar6;
            *piVar5 = *piVar6;
            *(int **)(*piVar6 + 4) = piVar5;
            uStack_4 = 0xffffffff;
            *piVar6 = (int)piVar5;
          }
        }
        iVar7 = iVar7 + 0x18;
        ppvVar1 = ExceptionList;
      } while (iVar7 != *(int *)(param_1 + 0x360));
    }
    ExceptionList = ppvVar1;
    FUN_007fdce0(*(int **)(param_1 + 0x388),(int *)(param_1 + 0x394),&LAB_007fd0c0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_007fec60 @ 007fec60 ////

void __thiscall FUN_007fec60(void *this,int param_1,int *param_2)

{
  void *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)((int)this + 0x35c);
  if (iVar2 != *(int *)((int)this + 0x360)) {
    while ((*(int **)(iVar2 + 0x14) == param_2 ||
           (iVar1 = (**(code **)(**(int **)(iVar2 + 0x14) + 0x10c))(), iVar1 != param_1))) {
      iVar2 = iVar2 + 0x18;
      if (iVar2 == *(int *)((int)this + 0x360)) {
        return;
      }
    }
    iVar2 = *(int *)((int)this + 0x35c);
    if (iVar2 != *(int *)((int)this + 0x360)) {
      do {
        this_00 = *(void **)(iVar2 + 0x14);
        if (this_00 != (void *)0x0) {
          cVar3 = '\x01';
          iVar1 = FUN_007fa430((int)this_00);
          FUN_007fa9b0(this_00,iVar1,cVar3);
        }
        iVar2 = iVar2 + 0x18;
      } while (iVar2 != *(int *)((int)this + 0x360));
    }
  }
  return;
}


//// FUNCTION FUN_007fed40 @ 007fed40 ////

void __cdecl FUN_007fed40(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007fde90(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_007fde90(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007fde90(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_007fedb0 @ 007fedb0 ////

void __cdecl
FUN_007fedb0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce29e8;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x7fee03;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_007fe030(param_1,iVar4,param_2,&PTR_FUN_00d16954,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007fef10 @ 007fef10 ////

void __cdecl FUN_007fef10(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  char cVar1;
  
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007fdf60(param_2,param_1);
  }
  cVar1 = (*(code *)param_4)(param_3[5],param_2[5]);
  if (cVar1 != '\0') {
    FUN_007fdf60(param_3,param_2);
  }
  cVar1 = (*(code *)param_4)(param_2[5],param_1[5]);
  if (cVar1 != '\0') {
    FUN_007fdf60(param_2,param_1);
  }
  return;
}


//// FUNCTION FUN_007fef80 @ 007fef80 ////

void __cdecl
FUN_007fef80(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_stack_ffffffd4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2a08;
  local_4 = 0;
  iVar4 = param_2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    in_stack_ffffffd4 = 0x7fefd3;
    cVar2 = (*(code *)param_10)();
    if (cVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    piVar5 = (int *)(param_1 + iVar4 * 0x18);
    (**(code **)(*piVar5 + 4))();
    piVar5[5] = *(int *)(param_1 + iVar3 * 0x18 + 0x14);
    (**(code **)*piVar5)();
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0x18);
    (**(code **)(*(int *)(param_1 + iVar4 * 0x18) + 4))();
    puVar1[5] = *(undefined4 *)(param_1 + param_3 * 0x18 + -4);
    (**(code **)*puVar1)();
    iVar4 = param_3 + -1;
  }
  iVar3 = 0;
  piVar5 = (int *)0x0;
  if (param_9 != 0) {
    piVar5 = (int *)(param_9 + 0x18);
    iVar3 = *piVar5;
    *(undefined1 **)(*piVar5 + 4) = &stack0xffffffc8;
    *piVar5 = (int)&stack0xffffffc8;
  }
  FUN_007fe2e0(param_1,iVar4,param_2,&PTR_FUN_00d5aa00,iVar3,piVar5,&stack0xffffffc4,
               in_stack_ffffffd4,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ff0e0 @ 007ff0e0 ////

void __cdecl
FUN_007ff0e0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2a28;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_007fedb0(param_1,0,(param_2 - param_1) / 0x18,&PTR_FUN_00d16954,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ff1c0 @ 007ff1c0 ////

void __cdecl
FUN_007ff1c0(int param_1,int param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,int param_9,undefined *param_10)

{
  int iVar1;
  int *piVar2;
  undefined4 in_stack_ffffffe0;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2a48;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_3 + 4))();
  param_3[5] = *(int *)(param_1 + 0x14);
  (**(code **)*param_3)();
  iVar1 = 0;
  piVar2 = (int *)0x0;
  if (param_9 != 0) {
    piVar2 = (int *)(param_9 + 0x18);
    iVar1 = *piVar2;
    *(undefined1 **)(*piVar2 + 4) = &stack0xffffffd4;
    *piVar2 = (int)&stack0xffffffd4;
  }
  FUN_007fef80(param_1,0,(param_2 - param_1) / 0x18,&PTR_FUN_00d5aa00,iVar1,piVar2,&stack0xffffffd0,
               in_stack_ffffffe0,param_9,param_10);
  if (param_6 != (int *)0x0) {
    *param_6 = param_5;
  }
  if (param_5 != 0) {
    *(int **)(param_5 + 4) = param_6;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_007ff2a0 @ 007ff2a0 ////

void __thiscall FUN_007ff2a0(void *this,int param_1,char param_2)

{
  char cVar1;
  int *this_00;
  float10 fVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    if (cVar1 == '\0') {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34 * 0.4);
      uVar4 = (undefined2)uVar5;
    }
    else {
      uVar5 = DAT_00e5bd38;
      (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,DAT_00e5bd34);
      uVar4 = (undefined2)uVar5;
    }
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    if (param_2 == '\0') {
      fVar6 = *(float *)((int)this + 0x3cc) + 10.0;
    }
    else {
      fVar6 = 10.0;
    }
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),fVar6);
    (**(code **)(*this_00 + 0x5c))(1,this,0);
    cVar1 = FUN_007e7910((int)this_00);
    fVar6 = DAT_00e5bd34;
    if (cVar1 == '\0') {
      fVar6 = DAT_00e5bd34 * 0.4;
    }
    uVar5 = DAT_00e5bd38;
    (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar6);
    uVar4 = (undefined2)uVar5;
  }
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00);
  }
  (**(code **)(*(int *)this + 0x14))();
  FUN_007fd600((int)this);
  uVar3 = FUN_00acd42c();
  FUN_007fe950(this,(int)uVar3);
  fVar2 = FUN_007fd600((int)this);
  fVar6 = (float)fVar2;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x14))();
  FUN_00ad1180((double)(((float10)fVar6 - fVar2) / ((float10)DAT_00e5bd34 * (float10)0.6)),uVar4);
  uVar3 = FUN_00acd42c();
  FUN_007fe8c0(this,(int)uVar3);
  return;
}


//// FUNCTION FUN_007ff450 @ 007ff450 ////

void __fastcall FUN_007ff450(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DI;
  float10 fVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  iVar1 = param_1[0xf1];
  iVar2 = param_1[0xf2];
  iVar3 = FUN_007feae0((int)param_1);
  param_1[0xf1] = iVar3;
  iVar3 = FUN_007feb20((int)param_1);
  param_1[0xf2] = iVar3;
  fVar4 = FUN_007fd600((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  if ((fVar5 < (float10)0.0 == (fVar5 == (float10)0.0)) &&
     ((param_1[0xf1] == iVar1 || (param_1[0xf2] == iVar2)))) {
    param_1[0xf3] = (int)((float)fVar5 / (float)(iVar2 + 1) + 2.0);
    fVar4 = FUN_007fd600((int)param_1);
    fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
    FUN_00ad1180((double)(((float10)(float)fVar4 - fVar5) / ((float10)DAT_00e5bd34 * (float10)0.6)),
                 unaff_DI);
    uVar6 = FUN_00acd42c();
    FUN_007fe8c0(param_1,(int)uVar6);
    return;
  }
  param_1[0xf3] = 0;
  (**(code **)(*param_1 + 0x14))();
  FUN_007fd600((int)param_1);
  uVar6 = FUN_00acd42c();
  FUN_007fe950(param_1,(int)uVar6);
  return;
}


//// FUNCTION FUN_007ff570 @ 007ff570 ////

void __cdecl FUN_007ff570(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d5aa00;
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


//// FUNCTION FUN_007ff5e0 @ 007ff5e0 ////

void __cdecl FUN_007ff5e0(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007fed40(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_007fed40(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_007fed40(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_007fed40(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_007fed40(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007ff690 @ 007ff690 ////

void __cdecl FUN_007ff690(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_007fedb0(param_1,iVar3,iVar2,&PTR_FUN_00d16954,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_007ff760 @ 007ff760 ////

void __cdecl FUN_007ff760(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x18;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_007fef10(param_1,param_1 + iVar1 * 6,param_1 + iVar1 * 0xc,param_4);
    FUN_007fef10(param_2 + iVar1 * -6,param_2,param_2 + iVar1 * 6,param_4);
    FUN_007fef10(param_3 + iVar1 * -0xc,param_3 + iVar1 * -6,param_3,param_4);
    FUN_007fef10(param_1 + iVar1 * 6,param_2,param_3 + iVar1 * -6,param_4);
    return;
  }
  FUN_007fef10(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_007ff810 @ 007ff810 ////

void __cdecl FUN_007ff810(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_stack_ffffffe4;
  
  iVar2 = (param_2 - param_1) / 0x18;
  iVar3 = iVar2 / 2;
  if (0 < iVar3) {
    piVar4 = (int *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      iVar5 = 0;
      piVar6 = (int *)0x0;
      piVar4 = piVar4 + -6;
      iVar1 = *piVar4;
      iVar3 = iVar3 + -1;
      if (iVar1 != 0) {
        piVar6 = (int *)(iVar1 + 0x18);
        iVar5 = *piVar6;
        *(undefined1 **)(*piVar6 + 4) = &stack0xffffffd8;
        *piVar6 = (int)&stack0xffffffd8;
      }
      FUN_007fef80(param_1,iVar3,iVar2,&PTR_FUN_00d5aa00,iVar5,piVar6,&stack0xffffffd4,
                   in_stack_ffffffe4,iVar1,param_3);
    } while (0 < iVar3);
  }
  return;
}


//// FUNCTION FUN_007ff8e0 @ 007ff8e0 ////

void __cdecl FUN_007ff8e0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_007ff0e0(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_FUN_00d16954,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_007ff950 @ 007ff950 ////

void __cdecl FUN_007ff950(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_stack_ffffffec;
  
  iVar2 = 0;
  piVar3 = (int *)0x0;
  iVar1 = *(int *)(param_2 + -4);
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + 0x18);
    iVar2 = *piVar3;
    *(undefined1 **)(*piVar3 + 4) = &stack0xffffffe0;
    *piVar3 = (int)&stack0xffffffe0;
  }
  FUN_007ff1c0(param_1,param_2 + -0x18,(int *)(param_2 + -0x18),&PTR_FUN_00d5aa00,iVar2,piVar3,
               &stack0xffffffdc,in_stack_ffffffec,iVar1,param_3);
  return;
}


//// FUNCTION FUN_007ff9f0 @ 007ff9f0 ////

void __cdecl FUN_007ff9f0(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d5aa00;
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


//// FUNCTION FUN_007ffa90 @ 007ffa90 ////

void __cdecl FUN_007ffa90(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_007ff5e0(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x007ffb4a:
  do {
    if (param_3 <= piVar1) {
LAB_007ffb94:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_007fde90(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_007fde90(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_007fde90(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_007fde90(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_007fde90(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_007fde90(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x007ffb4a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_007ffb94;
      local_4 = piVar4 + 6;
      FUN_007fde90(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_007ffce0 @ 007ffce0 ////

void __cdecl FUN_007ffce0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007fe100(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007fe100(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_007ffd90 @ 007ffd90 ////

void __cdecl FUN_007ffd90(undefined4 *param_1,int *param_2,int *param_3,undefined *param_4)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piStack_8;
  int *local_4;
  
  piVar4 = param_2 + (((int)param_3 - (int)param_2) / 0x30) * 6;
  FUN_007ff760(param_2,piVar4,param_3 + -6,param_4);
  piStack_8 = piVar4;
  while (((param_2 < piStack_8 &&
          (cVar2 = (*(code *)param_4)(piStack_8[-1],piStack_8[5]), cVar2 == '\0')) &&
         (cVar2 = (*(code *)param_4)(piStack_8[5],piStack_8[-1]), cVar2 == '\0'))) {
    piStack_8 = piStack_8 + -6;
  }
  do {
    piVar4 = piVar4 + 6;
    piVar1 = piVar4;
    local_4 = piVar4;
    piVar5 = piStack_8;
    if ((param_3 <= piVar4) || (cVar2 = (*(code *)param_4)(piVar4[5],piStack_8[5]), cVar2 != '\0'))
    break;
    cVar2 = (*(code *)param_4)(piStack_8[5],piVar4[5]);
  } while (cVar2 == '\0');
joined_r0x007ffe4a:
  do {
    if (param_3 <= piVar1) {
LAB_007ffe94:
      if (param_2 < piStack_8) {
        piVar3 = piStack_8 + -1;
        do {
          cVar2 = (*(code *)param_4)(*piVar3,piVar5[5]);
          piVar4 = local_4;
          if (cVar2 == '\0') {
            cVar2 = (*(code *)param_4)(piVar5[5],*piVar3);
            if (cVar2 != '\0') break;
            piVar5 = piVar5 + -6;
            FUN_007fdf60(piVar5,piVar3 + -5);
          }
          piStack_8 = piStack_8 + -6;
          piVar3 = piVar3 + -6;
        } while (param_2 < piStack_8);
      }
      if (piStack_8 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar4;
          return;
        }
        if (piVar4 != piVar1) {
          FUN_007fdf60(piVar5,piVar4);
        }
        piVar4 = piVar4 + 6;
        FUN_007fdf60(piVar5,piVar1);
        piVar1 = piVar1 + 6;
        local_4 = piVar4;
        piVar5 = piVar5 + 6;
      }
      else {
        piStack_8 = piStack_8 + -6;
        if (piVar1 == param_3) {
          piVar5 = piVar5 + -6;
          if (piStack_8 != piVar5) {
            FUN_007fdf60(piStack_8,piVar5);
          }
          piVar4 = piVar4 + -6;
          FUN_007fdf60(piVar5,piVar4);
          local_4 = piVar4;
        }
        else {
          FUN_007fdf60(piVar1,piStack_8);
          piVar1 = piVar1 + 6;
        }
      }
      goto joined_r0x007ffe4a;
    }
    cVar2 = (*(code *)param_4)(piVar5[5],piVar1[5]);
    local_4 = piVar4;
    if (cVar2 == '\0') {
      cVar2 = (*(code *)param_4)(piVar1[5],piVar5[5]);
      if (cVar2 != '\0') goto LAB_007ffe94;
      local_4 = piVar4 + 6;
      FUN_007fdf60(piVar4,piVar1);
    }
    piVar4 = local_4;
    piVar1 = piVar1 + 6;
  } while( true );
}


//// FUNCTION FUN_007fffe0 @ 007fffe0 ////

void __cdecl FUN_007fffe0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  
  iVar2 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar2, iVar2 = iVar3 + 0x18, iVar2 != param_2) {
      cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(param_1 + 0x14));
      if (cVar4 == '\0') {
        cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar3 + 0x14));
        iVar1 = iVar2;
        if (cVar4 != '\0') {
          do {
            iVar5 = iVar1 + -0x18;
            cVar4 = (*(code *)param_3)(*(undefined4 *)(iVar3 + 0x2c),*(undefined4 *)(iVar1 + -0x1c))
            ;
            iVar1 = iVar5;
          } while (cVar4 != '\0');
          if ((iVar5 != iVar2) && (iVar2 != iVar3 + 0x30)) {
            FUN_007fe3b0(iVar5,iVar2,iVar3 + 0x30);
          }
        }
      }
      else if ((param_1 != iVar2) && (iVar2 != iVar3 + 0x30)) {
        FUN_007fe3b0(param_1,iVar2,iVar3 + 0x30);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00800190 @ 00800190 ////

void __cdecl FUN_00800190(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_007ff8e0(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_008001f0 @ 008001f0 ////

void __cdecl FUN_008001f0(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (1 < iVar1 / 0x18) {
    FUN_007ff950(param_1,param_2,param_3);
    param_2 = param_2 + -0x18;
    iVar1 = param_2 - param_1;
  }
  return;
}


//// FUNCTION FUN_00800250 @ 00800250 ////

void __fastcall FUN_00800250(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d5aa10;
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


//// FUNCTION FUN_008002a0 @ 008002a0 ////

undefined4 * __thiscall FUN_008002a0(void *this,byte param_1)

{
  FUN_00800250(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008002c0 @ 008002c0 ////

void FUN_008002c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_007fdc50(param_1);
  }
  return;
}


//// FUNCTION FUN_008002f0 @ 008002f0 ////

void __fastcall FUN_008002f0(int param_1)

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
    FUN_007fdc50(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00800340 @ 00800340 ////

undefined4 * FUN_00800340(undefined4 *param_1,int param_2,int param_3)

{
  FUN_007ff9f0(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00800370 @ 00800370 ////

void FUN_00800370(void)

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
  puStack_8 = &LAB_00ce2a68;
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


//// FUNCTION FUN_008003e0 @ 008003e0 ////

void __cdecl FUN_008003e0(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_008004c0:
      if (1 < iVar2) {
        FUN_007ffce0((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_007ff690((int)param_1,(int)param_2,param_4);
        }
        FUN_00800190((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_008004c0;
    }
    FUN_007ffa90(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_008003e0(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_008003e0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00800530 @ 00800530 ////

void __cdecl FUN_00800530(int *param_1,int *param_2,int param_3,undefined *param_4)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 / 0x18;
    if (iVar2 < 0x21) {
LAB_00800610:
      if (1 < iVar2) {
        FUN_007fffe0((int)param_1,(int)param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < ((int)param_2 - (int)param_1) / 0x18) {
          FUN_007ff810((int)param_1,(int)param_2,param_4);
        }
        FUN_008001f0((int)param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_00800610;
    }
    FUN_007ffd90(&local_8,param_1,param_2,param_4);
    piVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)local_8 - (int)param_1) / 0x18 < ((int)param_2 - (int)local_4) / 0x18) {
      FUN_00800530(param_1,local_8,param_3,param_4);
      param_1 = piVar1;
    }
    else {
      FUN_00800530(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_00800680 @ 00800680 ////

void __thiscall FUN_00800680(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_004d6a50((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_004076b0(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008006d0 @ 008006d0 ////

void __fastcall FUN_008006d0(int param_1)

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
    FUN_007fdc50(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00800730 @ 00800730 ////

void __thiscall FUN_00800730(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_007fd3f0((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_007fdc50(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_008007d0 @ 008007d0 ////

void __thiscall FUN_008007d0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ce2a88;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d5aa00;
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
      FUN_00800370();
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
        iVar3 = FUN_007e50c0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_007ff570(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_007ff9f0(puVar5,param_2,(int)&local_34);
      FUN_007ff570((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_008002c0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_007ff570((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00800340(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_007fd920(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_007ff570((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_007fd430((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_007fd920(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00800b80 @ 00800b80 ////

void __fastcall FUN_00800b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2ae0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5aa34;
  param_1[0x14] = &PTR_FUN_00d5aa1c;
  local_4 = 4;
  FUN_004d9f40((int)(param_1 + 0xd2));
  while ((param_1[0xd7] != 0 && ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 != 0))) {
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_FUN_00d5aa00;
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
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  if ((undefined4 *)param_1[0xe2] != param_1 + 0xe5) {
    do {
      piVar3 = (int *)param_1[0xe5];
      _Memory = (int *)piVar3[2];
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      if (*piVar3 != 0) {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      if (_Memory != (int *)0x0) {
        FUN_007fe670(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    } while ((undefined4 *)param_1[0xe2] != param_1 + 0xe5);
  }
  FUN_00800250(param_1 + 0xe0);
  param_1[0xda] = &PTR_FUN_00d5aa00;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_008002f0((int)(param_1 + 0xd6));
  FUN_004d9f40((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00800dd0 @ 00800dd0 ////

void __fastcall FUN_00800dd0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_4;
  
  piVar6 = *(int **)(param_1 + 0x35c);
  local_4 = param_1;
  if (piVar6 != *(int **)(param_1 + 0x360)) {
    while( true ) {
      puVar1 = (undefined4 *)piVar6[5];
      piVar3 = (int *)FUN_007fa2a0((int)puVar1);
      if (piVar3 != (int *)0x0) break;
LAB_00800e2f:
      piVar6 = piVar6 + 6;
      if (piVar6 == *(int **)(param_1 + 0x360)) {
        return;
      }
    }
    cVar2 = (**(code **)(*piVar3 + 0x204))();
    if (cVar2 != '\0') {
      iVar4 = FUN_005773c0((int)piVar3);
      iVar5 = GetPlayerStudio();
      param_1 = local_4;
      if ((iVar4 == iVar5) && (cVar2 = FUN_005855f0((int)piVar3), param_1 = local_4, cVar2 == '\0'))
      goto LAB_00800e2f;
    }
    FUN_00800730((void *)(param_1 + 0x358),&local_4,piVar6);
    if (puVar1 != (undefined4 *)0x0) {
      piVar6 = puVar1 + 0x12;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00800e70 @ 00800e70 ////

void __fastcall FUN_00800e70(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00800530((int *)param_1[0xd7],(int *)param_1[0xd8],(param_1[0xd8] - param_1[0xd7]) / 0x18,
               &LAB_007fcff0);
  if (param_1[0xd7] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar4 = 0;
  cVar1 = '\0';
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      FUN_007ff2a0(param_1,iVar4,cVar1);
      cVar1 = FUN_007e7910(*(int *)(param_1[0xd7] + 0x14 + iVar3));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < iVar2);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_00800f30 @ 00800f30 ////

void __thiscall FUN_00800f30(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  float10 fVar5;
  ulonglong uVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar4 = *(int **)((int)this + 0x35c);
    if (piVar4 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar4[5];
        if (puVar2 == param_1) {
          cVar3 = FUN_007e7910((int)puVar2);
          if (cVar3 == '\0') {
            *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + -1;
          }
          else {
            *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + -1;
          }
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_00800730((void *)((int)this + 0x358),&param_1,piVar4);
          break;
        }
        piVar4 = piVar4 + 6;
      } while (piVar4 != *(int **)((int)this + 0x360));
    }
    FUN_007ff450(this);
    if (*(int *)((int)this + 0x3c4) == 0) {
      FUN_007fe950(this,1);
      FUN_00800e70(this);
      return;
    }
    fVar5 = (float10)(**(code **)(*(int *)this + 0x14))();
    param_1 = (undefined4 *)(float)fVar5;
    FUN_007fd600((int)this);
    uVar6 = FUN_00acd42c();
    FUN_007fe950(this,(int)uVar6);
    FUN_00800e70(this);
  }
  return;
}


//// FUNCTION FUN_00801020 @ 00801020 ////

void __fastcall FUN_00801020(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9f40(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_007fdc50(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_008010f0 @ 008010f0 ////

void __fastcall FUN_008010f0(int *param_1)

{
  int *_Memory;
  int iVar1;
  int iVar2;
  void *this;
  uint *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint auStack_28 [10];
  
  if ((int *)param_1[0xe2] == param_1 + 0xe5) {
    return;
  }
  _Memory = (int *)((int *)param_1[0xe2])[2];
  iVar1 = FUN_007fa430(_Memory[5]);
  iVar2 = (**(code **)(*(int *)_Memory[5] + 0x10c))();
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) != 0.0)) {
    if (iVar2 < iVar1) {
      FUN_0041c9c0(auStack_28,"HUD_LEAGUEPOSITION_ACTORDOWN");
    }
    else {
      if (iVar2 <= iVar1) goto LAB_008011a1;
      FUN_0041c9c0(auStack_28,"HUD_LEAGUEPOSITION_ACTORUP");
    }
    auStack_28[0] = auStack_28[0] & 0xfffffffe;
    puVar3 = auStack_28;
    puVar4 = &DAT_00d17518;
    iVar2 = 0;
    iVar1 = 2;
    this = (void *)FUN_004f3b20();
    FUN_004f3270(this,iVar1,(byte *)puVar3,iVar2,puVar4);
  }
LAB_008011a1:
  (**(code **)(*(int *)_Memory[5] + 0x108))();
  piVar5 = (int *)_Memory[5];
  iVar1 = (**(code **)(*piVar5 + 0x10c))();
  FUN_007fec60(param_1,iVar1,piVar5);
  FUN_00800e70(param_1);
  piVar5 = (int *)param_1[0xe2];
  if ((int *)piVar5[1] != (int *)0x0) {
    *(int *)piVar5[1] = *piVar5;
  }
  if (*piVar5 != 0) {
    *(int *)(*piVar5 + 4) = piVar5[1];
  }
  *piVar5 = 0;
  piVar5[1] = 0;
  FUN_007fe670(_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00801220 @ 00801220 ////

void __thiscall FUN_00801220(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00801265;
    }
  }
  iVar1 = 0;
LAB_00801265:
  FUN_008007d0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00801290 @ 00801290 ////

undefined4 * __thiscall FUN_00801290(void *this,byte param_1)

{
  FUN_00800b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008012b0 @ 008012b0 ////

void __thiscall FUN_008012b0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_007ff9f0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00801220(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00801340 @ 00801340 ////

void __fastcall FUN_00801340(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *this;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2b03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00800dd0((int)param_1);
  iVar6 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  if (iVar6 != param_1[0xd4]) {
    do {
      iVar5 = *(int *)(iVar6 + 0x14);
      if (((iVar5 != 0) && (cVar2 = FUN_007fe7e0(param_1,iVar5), cVar2 == '\0')) &&
         (iVar3 = FUN_0097e350(*(void **)(iVar5 + 0x11c),0), iVar3 != 0)) {
        this = operator_new(0x548);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar4 = FUN_007fbe00(this,iVar5,0);
        }
        else {
          piVar4 = FUN_007fbe00(this,iVar5,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar4);
        local_18 = &local_24;
        param_1[0xf1] = param_1[0xf1] + 1;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_FUN_00d5aa00;
        if (piVar4 != (int *)0x0) {
          local_1c = piVar4 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar4;
        FUN_008012b0(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        FUN_007fdc50(&local_24);
        if (param_1[0xd7] == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_007ff2a0(param_1,iVar5 + -1,'\0');
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_007ff450(param_1);
      FUN_00800e70(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00801510 @ 00801510 ////

void __thiscall FUN_00801510(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2b18;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d16954;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db6d0((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d16954;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_00801340(this);
  FUN_007ff450(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008015f0 @ 008015f0 ////

void __fastcall FUN_008015f0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d5aa10;
  return;
}


//// FUNCTION StarUpdate_Constructor @ 00801650 ////

/* WARNING: Removing unreachable block (ram,0x00801835) */

undefined4 * __thiscall StarUpdate_Constructor(void *this,char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char acStack_20 [11];
  undefined1 uStack_15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2bae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d5aa34;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5aa1c;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 **)((int)this + 0x374) = (undefined4 *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x368) = &PTR_FUN_00d5aa00;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x38c) = 0;
  *(undefined4 *)((int)this + 900) = 0;
  *(undefined4 *)((int)this + 0x388) = 0;
  puVar1 = (undefined4 *)((int)this + 0x394);
  *(undefined4 *)((int)this + 0x39c) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined ***)((int)this + 0x380) = &PTR_LAB_00d5aa10;
  *(undefined4 **)((int)this + 0x388) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 900);
  puVar1 = (undefined4 *)((int)this + 0x3b4);
  local_4 = 6;
  FUN_0043b460(puVar1);
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3cc) = 0;
  *(undefined4 *)((int)this + 0x3d4) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar3 = DAT_0104eae0;
  if (param_1 != '\0') {
    if (DAT_0104eae0 != (undefined4 *)0x0) {
      iVar2 = DAT_0104eae0[0x12];
      DAT_0104eae0[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar3)(1);
      }
      (*(code *)DAT_0104eacc[1])();
      DAT_0104eae0 = (undefined4 *)0x0;
      (*(code *)*DAT_0104eacc)();
    }
    (*(code *)DAT_0104eacc[1])();
    DAT_0104eae0 = this;
    (*(code *)*DAT_0104eacc)();
  }
  piVar4 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar4 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(puVar1,1);
  *puVar1 = 5;
  acStack_20[0] = '\0';
  _strncpy(acStack_20,"star_update",0xb);
  uStack_15 = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_005434b0();
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00801860 @ 00801860 ////

void __fastcall FUN_00801860(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2bc8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9f40((int)(param_1 + 0xd2));
  puVar6 = DAT_0104d05c;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      piVar2 = (int *)puVar6[2];
      if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x204))(), cVar3 != '\0')) {
        iVar4 = FUN_005773c0((int)piVar2);
        iVar5 = GetPlayerStudio();
        if ((iVar4 == iVar5) && (cVar3 = FUN_005855f0((int)piVar2), cVar3 == '\0')) {
          param_1[0xd1] = param_1[0xd1] + 1;
          piStack_1c = piVar2 + 6;
          pppuStack_18 = &ppuStack_24;
          ppuStack_24 = &PTR_FUN_00d16954;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 0;
          piStack_10 = piVar2;
          FUN_004db6d0(param_1 + 0xd2,(int)&ppuStack_24);
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
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104d068);
  }
  FUN_008003e0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_007fced0);
  FUN_007ff450(param_1);
  FUN_00801340(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008019e0 @ 008019e0 ////

void __thiscall FUN_008019e0(void *this,float param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  
  fVar4 = param_1;
  if (param_1 != 0.0) {
    piVar6 = *(int **)((int)this + 0x34c);
    if (piVar6 != *(int **)((int)this + 0x350)) {
      do {
        if ((float)piVar6[5] == param_1) {
          FUN_00800680((void *)((int)this + 0x348),&param_1,piVar6);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar6 = piVar6 + 6;
      } while (piVar6 != *(int **)((int)this + 0x350));
    }
    piVar6 = *(int **)((int)this + 0x35c);
    if (piVar6 != *(int **)((int)this + 0x360)) {
LAB_00801a41:
      puVar9 = (undefined4 *)piVar6[5];
      iVar7 = FUN_007fa2a0((int)puVar9);
      if ((iVar7 == 0) || (fVar8 = (float)FUN_007fa2a0((int)puVar9), fVar8 != fVar4))
      goto LAB_00801a5a;
      cVar5 = FUN_007e7910((int)puVar9);
      if (cVar5 == '\0') {
        *(int *)((int)this + 0x3c8) = *(int *)((int)this + 0x3c8) + -1;
      }
      else {
        *(int *)((int)this + 0x3c4) = *(int *)((int)this + 0x3c4) + -1;
      }
      if (puVar9 != (undefined4 *)0x0) {
        piVar1 = puVar9 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar6 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar6 + 4))();
        piVar6[5] = piVar6[0xb];
        (**(code **)*piVar6)();
        piVar1 = piVar6 + 0xc;
        piVar6 = piVar6 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar9 = puVar3 + -6; puVar9 != puVar3; puVar9 = puVar9 + 6) {
        FUN_007fdc50(puVar9);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_00801ae6:
    FUN_007ff450(this);
    if (DAT_0104bce4 != 0) {
      FUN_00801860(this);
    }
    if (*(int *)((int)this + 0x3c4) == 0) {
      FUN_007fe950(this,1);
      FUN_00800e70(this);
      return;
    }
    param_1 = DAT_00e5bd34 * 0.6;
    (**(code **)(*(int *)this + 0x14))();
    uVar10 = FUN_00acd42c();
    FUN_007fe950(this,(int)uVar10);
    FUN_00800e70(this);
  }
  return;
LAB_00801a5a:
  piVar6 = piVar6 + 6;
  if (piVar6 == *(int **)((int)this + 0x360)) goto LAB_00801ae6;
  goto LAB_00801a41;
}


//// FUNCTION FUN_00801bc0 @ 00801bc0 ////

void __fastcall FUN_00801bc0(int *param_1)

{
  int iVar1;
  int *this;
  char cVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((param_1[0xd1] != 0) && (iVar4 = param_1[0xd7], iVar4 != param_1[0xd8])) {
    while( true ) {
      this = *(int **)(iVar4 + 0x14);
      iVar1 = iVar4 + 0x18;
      cVar2 = '\0';
      if (iVar1 != param_1[0xd8]) {
        local_8 = 0;
        cVar2 = (**(code **)(**(int **)(iVar4 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
      }
      uStack_4 = 0;
      cVar3 = (**(code **)(*this + 0x34))(&DAT_0104cce0,&uStack_4);
      if ((((cVar3 != '\0') && (cVar2 == '\0')) && (0 < param_1[0xf1])) &&
         (cVar2 = FUN_007e7910((int)this), cVar2 == '\0')) break;
      iVar4 = iVar1;
      if (iVar1 == param_1[0xd8]) {
        return;
      }
    }
    FUN_007e7dc0(this);
    param_1[0xf1] = param_1[0xf1] + 1;
    param_1[0xf2] = param_1[0xf2] + -1;
    cVar2 = (**(code **)(*this + 0x100))();
    if (cVar2 == '\0') {
      FUN_0089e5f0(this,'\x01');
    }
    uVar5 = FUN_007fd6c0(param_1);
    if (0 < (int)uVar5) {
      FUN_007fe9d0(param_1,this);
    }
    FUN_00801860(param_1);
    do {
      cVar2 = (**(code **)(*param_1 + 0x50))(1);
    } while (cVar2 != '\0');
  }
  return;
}


//// FUNCTION FUN_00801ce0 @ 00801ce0 ////

void __fastcall FUN_00801ce0(int *param_1)

{
  FUN_00801860(param_1);
  FUN_00801bc0(param_1);
  FUN_00800e70(param_1);
  return;
}


//// FUNCTION FUN_00801d00 @ 00801d00 ////

void __fastcall FUN_00801d00(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[0xf1];
  iVar2 = FUN_007feae0((int)param_1);
  iVar3 = FUN_00423320(DAT_00f87b04);
  if (iVar3 != 4) {
    puVar1 = (uint *)(param_1 + 0xed);
    uVar4 = FUN_0043b490(puVar1);
    if ((char)uVar4 != '\0') {
      if (*puVar1 < 0x14) {
        *puVar1 = 0x14;
      }
      FUN_00801860(param_1);
      FUN_00801bc0(param_1);
      FUN_00800e70(param_1);
      if ((int *)param_1[0xe2] != param_1 + 0xe5) {
        if (param_1[0xf5] == 3) {
          *(undefined1 *)(DAT_0104e094 + 0x3d5) = 1;
          param_1[0xf5] = 0;
        }
        FUN_008010f0(param_1);
        WWindow_Tick(param_1);
        return;
      }
      iVar5 = param_1[0xf5];
      if (iVar5 == 2) {
        iVar5 = FUN_007ef840();
        if (iVar5 != 0) {
          iVar5 = FUN_007ef840();
          FUN_007f06f0(iVar5);
          iVar5 = FUN_007ef840();
          *(undefined4 *)(iVar5 + 0x39c) = 0;
          param_1[0xf5] = 3;
          FUN_007feb60((int)param_1);
          WWindow_Tick(param_1);
          return;
        }
      }
      else {
        if (iVar5 == 1) {
          param_1[0xf5] = 2;
          FUN_007feb60((int)param_1);
          WWindow_Tick(param_1);
          return;
        }
        if (iVar5 == 3) {
          *(undefined1 *)(DAT_0104e094 + 0x3d5) = 1;
          param_1[0xf5] = 0;
        }
      }
      FUN_007feb60((int)param_1);
      WWindow_Tick(param_1);
      return;
    }
    if (iVar5 != iVar2) {
      FUN_00801860(param_1);
    }
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00801e70 @ 00801e70 ////

undefined4 __fastcall FUN_00801e70(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_00801ee0 @ 00801ee0 ////

void __fastcall FUN_00801ee0(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(*(int **)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = 3;
    this = (void *)FUN_00539330(*(int **)(param_1 + 0x4c8));
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_00801f10 @ 00801f10 ////

void __fastcall FUN_00801f10(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puStack_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar3 = param_1[0x13f];
  if (iVar3 < 1) {
    param_1[0x13f] = iVar3 + 1;
  }
  else if (iVar3 == 1) {
    puStack_1c = (undefined4 *)0x801f33;
    FUN_007e7e10(param_1);
  }
  local_10 = param_1[0x30];
  local_c = param_1[0x27];
  local_8 = param_1[0x42];
  local_4 = param_1[0x39];
  local_14 = 0;
  puStack_1c = (undefined4 *)0x801f68;
  piVar2 = (int *)FUN_00803080();
  puStack_1c = &local_14;
  cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10);
  if (cVar1 != '\0') {
    puStack_1c = (undefined4 *)0x0;
    piVar2 = (int *)FUN_00803080();
    cVar1 = (**(code **)(*piVar2 + 0x34))(&local_10,&puStack_1c);
    if (cVar1 != '\0') goto LAB_00801fac;
  }
  iVar3 = FUN_00803080();
  if (param_1[0x46] != iVar3) {
    return;
  }
LAB_00801fac:
  FUN_007e7aa0(param_1);
  return;
}


//// FUNCTION FUN_00802000 @ 00802000 ////

void __fastcall FUN_00802000(int param_1)

{
  void *this;
  undefined4 *puVar1;
  char **ppcVar2;
  undefined4 local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [12];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2be8;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"Writing",7);
  local_28 = 7;
  local_2c[7] = '\0';
  ppcVar2 = &local_2c;
  puVar1 = &local_34;
  local_4 = 0;
  this = (void *)FUN_00577370(*(int *)(param_1 + 0x4c8));
  FUN_00441750(this,puVar1,ppcVar2);
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_30 = &stack0xffffffbc;
  (**(code **)(**(int **)(param_1 + 0x4f8) + 0x10c))();
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_008020d0 @ 008020d0 ////

void __fastcall FUN_008020d0(int param_1)

{
  int iVar1;
  int *piVar2;
  uint unaff_ESI;
  void *_Memory;
  void **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20 [2];
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2c10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
  if (iVar1 != 0) {
    iVar1 = FUN_005998e0(*(int *)(param_1 + 0x4c8));
    piVar2 = (int *)FUN_00401c30(iVar1);
    FUN_00ace790(piVar2,0,&TM::TMBaseDesire::RTTI_Type_Descriptor,
                 &TM::DesireWriteScript::RTTI_Type_Descriptor,0);
  }
  piVar2 = (int *)FUN_0053ae00(*(int *)(param_1 + 0x4c8));
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_00ace790(piVar2,0,&TM::TMRoom::RTTI_Type_Descriptor,
                         &TM::CScriptRoom::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      local_2c = local_20;
      local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
      local_28 = 0;
      local_24 = 0x20;
      local_2c = _malloc(0x20);
      _strncpy((char *)local_2c,"ui/activity_busy.dds",0x14);
      *(char *)(local_2c + 5) = '\0';
      local_4 = 0;
      goto LAB_008021d8;
    }
  }
  local_2c = local_20;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy((char *)local_2c,"ui/activity_idle.dds",0x14);
  *(char *)(local_2c + 5) = '\0';
  local_4 = 1;
LAB_008021d8:
  local_28 = 0x14;
  _Memory = (void *)0x3f800000;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x100))(&local_2c);
  uStack_18 = 0xffffffff;
  if (0x14 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  FUN_0069ce60(*(void **)(param_1 + 0x4e0),0xffffffff);
  ExceptionList = local_20[0];
  return;
}


//// FUNCTION FUN_00802250 @ 00802250 ////

void __fastcall FUN_00802250(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint **ppuVar7;
  undefined4 *local_60;
  uint *puStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  uint uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2cb7;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"iconpanel2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  FUN_0089e070(param_1,&local_2c,1,0,'\x01');
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Opening",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10c] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Open",4);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10a] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closing",7);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10d] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Closed",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10b] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"Pickup",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"hud_star");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10e] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"highlight",9);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x10f] = iVar2;
  puVar3 = &stack0xffffff7c;
  uVar4 = 0;
  uVar5 = 0x14;
  FUN_004015d0(&stack0xffffff70,"normal",6);
  local_4 = local_4 & 0xffffff00;
  pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_card");
  iVar2 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
  param_1[0x110] = iVar2;
  pvVar1 = operator_new(0x4dc);
  local_4._0_1_ = 8;
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    local_60 = FUN_007ac880(pvVar1,1,0,0,0);
  }
  local_4._0_1_ = 0;
  (**(code **)(param_1[0x139] + 4))();
  param_1[0x13e] = (int)local_60;
  (**(code **)param_1[0x139])();
  if (param_1[0x13e] != 0) {
    puStack_54 = (uint *)0x0;
    uStack_50 = 0;
    FUN_00882710(*(void **)(param_1[0x13e] + 0x358),(float *)&puStack_54);
    (**(code **)(*(int *)param_1[0x13e] + 0x74))();
    FUN_0089e5f0((void *)param_1[0x13e],'\x01');
    puStack_54 = &uStack_48;
    uStack_48 = uStack_48 & 0xffffff00;
    uStack_50 = 0;
    pcStack_4c = (char *)0x14;
    _strncpy((char *)puStack_54,"Writing",7);
    uStack_50 = 7;
    *(char *)((int)puStack_54 + 7) = '\0';
    ppuVar7 = &puStack_54;
    puVar6 = (undefined4 *)&stack0xffffff98;
    pvStack_c._0_1_ = 9;
    pvVar1 = (void *)FUN_00577370(param_1[0x132]);
    FUN_00441750(pvVar1,puVar6,ppuVar7);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    if ((char *)0x14 < pcStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_54);
    }
    (**(code **)(*(int *)param_1[0x13e] + 0x10c))();
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"star_mood",9);
    uStack_48 = 9;
    pcStack_4c[9] = '\0';
    local_4._0_1_ = 10;
    FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x13e],&pcStack_4c,1,0,
                 (undefined1 *)0x0);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    puVar3 = &stack0xffffff7c;
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffff70,"showmood",8);
    local_4._0_1_ = 0;
    pvVar1 = (void *)FUN_008819d0((void *)param_1[0xd6],"star_info");
    uVar5 = FUN_0088a2b0(pvVar1,puVar3,uVar4,uVar5);
    FUN_00881b40((void *)param_1[0xd6],"star_info",uVar5);
  }
  FUN_007e8be0((int)param_1);
  FUN_007e9550(param_1,'\0');
  FUN_007e7e10(param_1);
  FUN_00802000((int)param_1);
  pvVar1 = operator_new(0x360);
  if (pvVar1 == (void *)0x0) {
    local_60 = (undefined4 *)0x0;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x20;
    pcStack_4c = _malloc(0x20);
    _strncpy(pcStack_4c,"ui/activity_busyfilm.dds",0x18);
    uStack_48 = 0x18;
    pcStack_4c[0x18] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xd);
    local_60 = FUN_0069d820(pvVar1,&pcStack_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xe;
  (**(code **)(param_1[0x133] + 4))();
  param_1[0x138] = (int)local_60;
  (**(code **)param_1[0x133])();
  local_4 = 0;
  if ((pvVar1 != (void *)0x0) && (0x14 < uStack_44)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (*(int *)(param_1[0x132] + 0x814) != 3) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    uStack_48 = 0;
    *pcStack_4c = '\0';
    local_4._0_1_ = 0xf;
    (**(code **)(*(int *)param_1[0x138] + 0x100))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    FUN_0069ce60((void *)param_1[0x138],0xffffff);
  }
  pcStack_4c = acStack_40;
  acStack_40[0] = '\0';
  uStack_48 = 0;
  uStack_44 = 0x14;
  _strncpy(pcStack_4c,"star_job",8);
  uStack_48 = 8;
  pcStack_4c[8] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x10);
  FUN_0087ecc0(*(void **)(param_1[0xd6] + 0x178),(int *)param_1[0x138],&pcStack_4c,1,0,
               (undefined1 *)0x0);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008028f0 @ 008028f0 ////

int * __thiscall FUN_008028f0(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2d02;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  MoodHUDCard_Constructor(this,param_2);
  *(undefined ***)this = &PTR_FUN_00d5aba4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d5ab88;
  piVar1 = (int *)((int)this + 0x4b8);
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d18c4c;
  *(int *)((int)this + 0x4c8) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x4bc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4d0) = 0;
  *(undefined4 *)((int)this + 0x4d4) = 0;
  *(undefined4 **)((int)this + 0x4d8) = (undefined4 *)((int)this + 0x4cc);
  *(undefined4 *)((int)this + 0x4cc) = &PTR_FUN_00d2d110;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 **)((int)this + 0x4f0) = (undefined4 *)((int)this + 0x4e4);
  *(undefined4 *)((int)this + 0x4e4) = &PTR_FUN_00d2d100;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  local_4 = 3;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  FUN_00802250(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00802a00 @ 00802a00 ////

void __fastcall FUN_00802a00(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2d42;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5aba4;
  param_1[0x14] = &PTR_LAB_00d5ab88;
  puVar2 = (undefined4 *)param_1[0x138];
  local_4 = 3;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x133] + 4))();
    param_1[0x138] = 0;
    (**(code **)param_1[0x133])();
  }
  puVar2 = (undefined4 *)param_1[0x13e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x139] + 4))();
    param_1[0x13e] = 0;
    (**(code **)param_1[0x139])();
  }
  param_1[0x139] = &PTR_FUN_00d2d100;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  if ((undefined4 *)param_1[0x13b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13b] = param_1[0x13a];
  }
  if (param_1[0x13a] != 0) {
    *(undefined4 *)(param_1[0x13a] + 4) = param_1[0x13b];
  }
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x133] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x138] = 0;
  if ((undefined4 *)param_1[0x135] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x135] = param_1[0x134];
  }
  if (param_1[0x134] != 0) {
    *(undefined4 *)(param_1[0x134] + 4) = param_1[0x135];
  }
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x12d] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x132] = 0;
  if ((undefined4 *)param_1[0x12f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x12f] = param_1[0x12e];
  }
  if (param_1[0x12e] != 0) {
    *(undefined4 *)(param_1[0x12e] + 4) = param_1[0x12f];
  }
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  local_4 = 0xffffffff;
  FUN_007e90c0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00802c10 @ 00802c10 ////

void __fastcall FUN_00802c10(int *param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  iVar2 = param_1[0x132];
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x814) != 0xe)) {
    piVar3 = param_1;
    this = (void *)FUN_00803080();
    FUN_008043d0(this,piVar3);
  }
  else {
    FUN_007e7ec0(param_1,iVar2);
    FUN_007e7b00(param_1,(int *)param_1[0x132]);
    if ((char)param_1[0xc9] != '\0') {
      *(undefined1 *)(param_1[0x132] + 0x726) = 1;
    }
    uVar1 = FUN_0043b490((uint *)(param_1 + 0x106));
    if ((char)uVar1 != '\0') {
      FUN_00802000((int)param_1);
      FUN_008020d0((int)param_1);
    }
    if ((DAT_0104d524 != param_1[0x132]) && (DAT_00f8860c != param_1[0x132])) {
      if (*(char *)((int)param_1 + 0x445) == '\0') {
        iVar2 = FUN_008819d0((void *)param_1[0xd6],"star_card");
        if (*(int *)(iVar2 + 0x260) != param_1[0x10f]) goto LAB_00802d19;
      }
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x110]);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      WHudIcon_Tick(param_1);
      return;
    }
    if (*(char *)((int)param_1 + 0x445) == '\0') {
      *(undefined1 *)((int)param_1 + 0x445) = 1;
      FUN_00881c00((void *)param_1[0xd6],"star_card",param_1[0x10f]);
      WHudIcon_Tick(param_1);
      return;
    }
  }
LAB_00802d19:
  WHudIcon_Tick(param_1);
  return;
}


//// FUNCTION FUN_00802d30 @ 00802d30 ////

undefined4 * __thiscall FUN_00802d30(void *this,byte param_1)

{
  FUN_00802a00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00802de0 @ 00802de0 ////

int * __thiscall FUN_00802de0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00802e20 @ 00802e20 ////

int __fastcall FUN_00802e20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00802fd0 @ 00802fd0 ////

int * __thiscall FUN_00802fd0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00803000 @ 00803000 ////

int * __cdecl FUN_00803000(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00803040 @ 00803040 ////

undefined4 * __cdecl FUN_00803040(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00803080 @ 00803080 ////

undefined4 FUN_00803080(void)

{
  return DAT_0104eaf8;
}


//// FUNCTION FUN_00803090 @ 00803090 ////

float10 __fastcall FUN_00803090(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
  }
  fVar2 = (float10)*(int *)(param_1 + 0x344);
  if (*(int *)(param_1 + 0x344) < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)4.2949673e+09;
  }
  return (float10)DAT_00e5bd34 * (float10)0.4 * fVar2 - fVar3 * (float10)10.0;
}


//// FUNCTION FUN_008032b0 @ 008032b0 ////

void __cdecl FUN_008032b0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00803310 @ 00803310 ////

void __fastcall FUN_00803310(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d5ace0;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00803360 @ 00803360 ////

void __fastcall FUN_00803360(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5ace0;
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


//// FUNCTION FUN_00803440 @ 00803440 ////

void __fastcall FUN_00803440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5acf0;
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


//// FUNCTION FUN_00803520 @ 00803520 ////

undefined4 * __thiscall FUN_00803520(void *this,byte param_1)

{
  FUN_00803440(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00803540 @ 00803540 ////

void __fastcall FUN_00803540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0.0 <= *(float *)(param_1 + 0xc0)) {
    iVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x35c) != 0) {
        iVar1 = (*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18;
      }
      if (iVar1 <= iVar2) break;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x35c) + iVar3 + 0x14) + 0x2c))();
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    }
  }
  return;
}


//// FUNCTION FUN_008035b0 @ 008035b0 ////

void __thiscall FUN_008035b0(void *this,int param_1)

{
  char cVar1;
  int *this_00;
  float fVar2;
  
  if (param_1 == 0) {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14);
    (**(code **)(*this_00 + 100))(1,this,0xc1200000);
  }
  else {
    this_00 = *(int **)(*(int *)((int)this + 0x35c) + 0x14 + param_1 * 0x18);
    (**(code **)(*this_00 + 100))
              (2,*(undefined4 *)(*(int *)((int)this + 0x35c) + param_1 * 0x18 + -4),
               *(float *)((int)this + 0x390) + 10.0);
  }
  (**(code **)(*this_00 + 0x5c))(1,this,0);
  cVar1 = FUN_007e7910((int)this_00);
  fVar2 = DAT_00e5bd34;
  if (cVar1 == '\0') {
    fVar2 = DAT_00e5bd34 * 0.4;
  }
  (**(code **)(*this_00 + 0x74))(DAT_00e5bd38,fVar2);
  cVar1 = (**(code **)(*this_00 + 0x100))();
  if (cVar1 == '\0') {
    FUN_0089e5f0(this_00,'\x01');
  }
  if ((this_00[0x58] == 0) && (this_00[0x54] == 0)) {
    (**(code **)(*(int *)this + 0xc))(this_00,1);
  }
  return;
}


//// FUNCTION FUN_00803690 @ 00803690 ////

undefined1 __thiscall FUN_00803690(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1;
  
  local_1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    while( true ) {
      iVar2 = *(int *)(iVar3 + 0x14);
      iVar1 = FUN_00801e70(iVar2);
      if ((iVar1 != 0) && (iVar2 = FUN_00801e70(iVar2), iVar2 == param_1)) break;
      iVar3 = iVar3 + 0x18;
      if (iVar3 == *(int *)((int)this + 0x360)) {
        return 0;
      }
    }
    local_1 = 1;
  }
  return local_1;
}


//// FUNCTION FUN_00803710 @ 00803710 ////

void __fastcall FUN_00803710(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x344) != 0) {
    iVar3 = *(int *)(param_1 + 0x35c);
    iVar4 = *(int *)(param_1 + 0x360);
    if (iVar3 != iVar4) {
      do {
        piVar2 = *(int **)(iVar3 + 0x14);
        iVar1 = iVar3 + 0x18;
        if (iVar1 != iVar4) {
          local_8 = 0;
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0x34))(&DAT_0104cce0,&local_8);
        }
        uStack_4 = 0;
        (**(code **)(*piVar2 + 0x34))(&DAT_0104cce0,&uStack_4);
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar1;
      } while (iVar1 != iVar4);
    }
  }
  return;
}


//// FUNCTION FUN_00803790 @ 00803790 ////

int __thiscall FUN_00803790(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x35c);
  if (iVar3 != *(int *)((int)this + 0x360)) {
    do {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar2 = FUN_00801e70(iVar1);
      if (iVar2 != 0) {
        iVar2 = FUN_00801e70(iVar1);
        if (iVar2 == param_1) {
          return iVar1;
        }
      }
      iVar3 = iVar3 + 0x18;
    } while (iVar3 != *(int *)((int)this + 0x360));
  }
  return 0;
}


//// FUNCTION FUN_00803830 @ 00803830 ////

uint __fastcall FUN_00803830(int *param_1)

{
  float fVar1;
  undefined2 extraout_var;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = FUN_00803090((int)param_1);
  fVar5 = (float10)(**(code **)(*param_1 + 0x14))();
  fVar5 = (float10)(float)fVar4 - fVar5;
  fVar4 = (float10)0.0;
  if (fVar5 < fVar4 != (fVar5 == fVar4)) {
    param_1[0xe4] = 0;
    return CONCAT22(extraout_var,
                    (ushort)(fVar5 < fVar4) << 8 | (ushort)(NAN(fVar5) || NAN(fVar4)) << 10 |
                    (ushort)(fVar5 == fVar4) << 0xe);
  }
  uVar2 = 0;
  if (param_1[0xd7] != 0) {
    iVar3 = param_1[0xd8] - param_1[0xd7];
    uVar2 = iVar3 * 0x2aaaaaab;
    if (iVar3 / 0x18 != 0) {
      iVar3 = 0;
      if (param_1[0xd7] != 0) {
        iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
      }
      uVar2 = iVar3 + 1;
      fVar1 = (float)(int)uVar2;
      if ((int)uVar2 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0xe4] = (int)((float)fVar5 / fVar1 + 2.0);
    }
  }
  return uVar2;
}


//// FUNCTION FUN_00803910 @ 00803910 ////

void __fastcall FUN_00803910(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[0xd7] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      FUN_008035b0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_00803980 @ 00803980 ////

void __cdecl FUN_00803980(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d5acf0;
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


//// FUNCTION FUN_00803a20 @ 00803a20 ////

void __cdecl FUN_00803a20(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d5acf0;
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


//// FUNCTION FUN_00803b40 @ 00803b40 ////

void FUN_00803b40(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00803440(param_1);
  }
  return;
}


//// FUNCTION FUN_00803b70 @ 00803b70 ////

void __fastcall FUN_00803b70(int param_1)

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
    FUN_00803440(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00803bc0 @ 00803bc0 ////

undefined4 * FUN_00803bc0(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00803a20(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00803bf0 @ 00803bf0 ////

void FUN_00803bf0(void)

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
  puStack_8 = &LAB_00ce2d58;
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


//// FUNCTION FUN_00803c60 @ 00803c60 ////

void __fastcall FUN_00803c60(int param_1)

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
    FUN_00803440(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00803cc0 @ 00803cc0 ////

void __thiscall FUN_00803cc0(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_00803000((int)(param_2 + 6),*(int *)((int)this + 8),param_2);
  puVar1 = *(undefined4 **)((int)this + 8);
  for (puVar2 = puVar1 + -6; puVar2 != puVar1; puVar2 = puVar2 + 6) {
    FUN_00803440(puVar2);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -0x18;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00803d60 @ 00803d60 ////

void __thiscall FUN_00803d60(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ce2d78;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d5acf0;
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
      FUN_00803bf0();
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
        iVar3 = FUN_00802e20((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_00803980(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00803a20(puVar5,param_2,(int)&local_34);
      FUN_00803980((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00803b40(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_00803980((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00803bc0(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_008032b0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_00803980((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00803040((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_008032b0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00804090 @ 00804090 ////

void __fastcall FUN_00804090(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2dc2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5ad1c;
  param_1[0x14] = &PTR_FUN_00d5ad00;
  local_4 = 3;
  FUN_004d9e90((int)(param_1 + 0xd2));
  while( true ) {
    if ((param_1[0xd7] == 0) || ((int)(param_1[0xd8] - param_1[0xd7]) / 0x18 == 0)) break;
    puVar1 = *(undefined4 **)(param_1[0xd8] + -4);
    if ((param_1[0xd7] != 0) &&
       (puVar2 = (undefined4 *)param_1[0xd8], ((int)puVar2 - param_1[0xd7]) / 0x18 != 0)) {
      puVar4 = puVar2 + -6;
      if (puVar4 != puVar2) {
        piVar3 = puVar2 + -4;
        do {
          *puVar4 = &PTR_LAB_00d5acf0;
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
          puVar4 = puVar4 + 6;
          piVar3 = piVar3 + 6;
        } while (puVar4 != puVar2);
      }
      param_1[0xd8] = param_1[0xd8] + -0x18;
    }
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  param_1[0xda] = &PTR_LAB_00d5acf0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdc] = param_1[0xdb];
  }
  if (param_1[0xdb] != 0) {
    *(undefined4 *)(param_1[0xdb] + 4) = param_1[0xdc];
  }
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  FUN_00803b70((int)(param_1 + 0xd6));
  FUN_004d9e90((int)(param_1 + 0xd2));
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00804280 @ 00804280 ////

void __thiscall FUN_00804280(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar8 = param_1;
  if (param_1 != 0) {
    piVar5 = *(int **)((int)this + 0x34c);
    if (piVar5 != *(int **)((int)this + 0x350)) {
      do {
        if (piVar5[5] == param_1) {
          FUN_005ba670((void *)((int)this + 0x348),&param_1,piVar5);
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x350));
    }
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
LAB_008042e1:
      puVar7 = (undefined4 *)piVar5[5];
      iVar6 = FUN_00801e70((int)puVar7);
      if ((iVar6 == 0) || (iVar6 = FUN_00801e70((int)puVar7), iVar6 != iVar8)) goto LAB_008042fa;
      if (puVar7 != (undefined4 *)0x0) {
        piVar1 = puVar7 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(1);
        }
      }
      piVar2 = *(int **)((int)this + 0x360);
      piVar1 = piVar5 + 6;
      while (piVar1 != piVar2) {
        (**(code **)(*piVar5 + 4))();
        piVar5[5] = piVar5[0xb];
        (**(code **)*piVar5)();
        piVar1 = piVar5 + 0xc;
        piVar5 = piVar5 + 6;
      }
      puVar3 = *(undefined4 **)((int)this + 0x360);
      for (puVar7 = puVar3 + -6; puVar7 != puVar3; puVar7 = puVar7 + 6) {
        FUN_00803440(puVar7);
      }
      *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + -0x18;
    }
LAB_00804366:
    FUN_00803830(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    if (0 < iVar8) {
      iVar6 = 0;
      do {
        FUN_008035b0(this,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar8);
    }
    do {
      cVar4 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar4 != '\0');
  }
  return;
LAB_008042fa:
  piVar5 = piVar5 + 6;
  if (piVar5 == *(int **)((int)this + 0x360)) goto LAB_00804366;
  goto LAB_008042e1;
}


//// FUNCTION FUN_008043d0 @ 008043d0 ////

void __thiscall FUN_008043d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1 != (undefined4 *)0x0) {
    piVar5 = *(int **)((int)this + 0x35c);
    if (piVar5 != *(int **)((int)this + 0x360)) {
      do {
        puVar2 = (undefined4 *)piVar5[5];
        if (puVar2 == param_1) {
          *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + -1;
          if (puVar2 != (undefined4 *)0x0) {
            piVar1 = puVar2 + 0x12;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar2)(1);
            }
          }
          FUN_00803cc0((void *)((int)this + 0x358),&param_1,piVar5);
          break;
        }
        piVar5 = piVar5 + 6;
      } while (piVar5 != *(int **)((int)this + 0x360));
    }
    FUN_00803830(this);
    if (*(int *)((int)this + 0x35c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (*(int *)((int)this + 0x360) - *(int *)((int)this + 0x35c)) / 0x18;
    }
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        FUN_008035b0(this,iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    do {
      cVar3 = (**(code **)(*(int *)this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  return;
}


//// FUNCTION FUN_00804490 @ 00804490 ////

void __fastcall FUN_00804490(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_004d9e90(param_1 + 0x348);
  if (*(int *)(param_1 + 0x344) != 0) {
    while ((*(int *)(param_1 + 0x35c) != 0 &&
           ((*(int *)(param_1 + 0x360) - *(int *)(param_1 + 0x35c)) / 0x18 != 0))) {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x360) + -4);
      if ((*(int *)(param_1 + 0x35c) != 0) &&
         (puVar3 = *(undefined4 **)(param_1 + 0x360),
         ((int)puVar3 - *(int *)(param_1 + 0x35c)) / 0x18 != 0)) {
        for (puVar4 = puVar3 + -6; puVar4 != puVar3; puVar4 = puVar4 + 6) {
          FUN_00803440(puVar4);
        }
        *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + -0x18;
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00804570 @ 00804570 ////

void __thiscall FUN_00804570(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_008045b5;
    }
  }
  iVar1 = 0;
LAB_008045b5:
  FUN_00803d60(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_008045e0 @ 008045e0 ////

undefined4 * __thiscall FUN_008045e0(void *this,char param_1)

{
  undefined4 *this_00;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2e02;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(this);
  *(undefined ***)this = &PTR_FUN_00d5ad1c;
  *(undefined ***)((int)this + 0x50) = &PTR_FUN_00d5ad00;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(undefined4 *)((int)this + 0x350) = 0;
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined4 *)((int)this + 0x364) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x36c) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 **)((int)this + 0x374) = (undefined4 *)((int)this + 0x368);
  *(undefined4 *)((int)this + 0x368) = &PTR_LAB_00d5acf0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  this_00 = (undefined4 *)((int)this + 0x380);
  local_4 = 3;
  FUN_0043b460(this_00);
  *(undefined4 *)((int)this + 0x390) = 0;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffff5;
  puVar2 = DAT_0104eaf8;
  if (param_1 != '\0') {
    if (DAT_0104eaf8 != (undefined4 *)0x0) {
      iVar1 = DAT_0104eaf8[0x12];
      DAT_0104eaf8[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (*(code *)DAT_0104eae4[1])();
      DAT_0104eaf8 = (undefined4 *)0x0;
      (*(code *)*DAT_0104eae4)();
    }
    (*(code *)DAT_0104eae4[1])();
    DAT_0104eaf8 = this;
    (*(code *)*DAT_0104eae4)();
  }
  piVar3 = (int *)FUN_0071b2a0();
  (**(code **)(*piVar3 + 0x14))();
  FUN_0073e4e0(this,DAT_00e5bd38);
  FUN_0043b4d0(this_00,1);
  *this_00 = 10;
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00804740 @ 00804740 ////

undefined4 * __thiscall FUN_00804740(void *this,byte param_1)

{
  FUN_00804090(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00804760 @ 00804760 ////

void __thiscall FUN_00804760(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00803a20(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00804570(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_008047f0 @ 008047f0 ////

void __fastcall FUN_008047f0(int *param_1)

{
  bool bVar1;
  char cVar2;
  void *this;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2e23;
  local_c = ExceptionList;
  iVar5 = param_1[0xd3];
  bVar1 = false;
  local_2c = 0;
  ExceptionList = &local_c;
  if (iVar5 != param_1[0xd4]) {
    do {
      iVar4 = *(int *)(iVar5 + 0x14);
      if ((iVar4 != 0) && (cVar2 = FUN_00803690(param_1,iVar4), cVar2 == '\0')) {
        this = operator_new(0x500);
        local_4 = 0;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else if (param_1[0xd7] == 0) {
          piVar3 = FUN_008028f0(this,iVar4,0);
        }
        else {
          piVar3 = FUN_008028f0(this,iVar4,(param_1[0xd8] - param_1[0xd7]) / 0x18);
        }
        local_4 = 0xffffffff;
        FUN_007e7dc0(piVar3);
        local_18 = &local_24;
        local_20 = 0;
        local_1c = (int *)0x0;
        local_24 = &PTR_LAB_00d5acf0;
        if (piVar3 != (int *)0x0) {
          local_1c = piVar3 + 6;
          local_20 = *local_1c;
          *(int **)(*local_1c + 4) = &local_20;
          *local_1c = (int)&local_20;
        }
        local_4 = 1;
        local_10 = piVar3;
        FUN_00804760(param_1 + 0xd6,(int)&local_24);
        local_4 = 0xffffffff;
        local_24 = &PTR_LAB_00d5acf0;
        if (local_1c != (int *)0x0) {
          *local_1c = local_20;
        }
        if (local_20 != 0) {
          *(int **)(local_20 + 4) = local_1c;
        }
        local_10 = (int *)0x0;
        local_20 = 0;
        local_1c = (int *)0x0;
        if (param_1[0xd7] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (param_1[0xd8] - param_1[0xd7]) / 0x18;
        }
        FUN_008035b0(param_1,iVar4 + -1);
        local_2c = local_2c + 1;
        bVar1 = true;
      }
      iVar5 = iVar5 + 0x18;
    } while (iVar5 != param_1[0xd4]);
    if ((bVar1) && (local_2c == 1)) {
      FUN_00803830(param_1);
      FUN_00803910(param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008049c0 @ 008049c0 ////

void __thiscall FUN_008049c0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2e38;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  ExceptionList = &local_c;
  *(int *)((int)this + 0x344) = *(int *)((int)this + 0x344) + 1;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d18c4c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004db640((void *)((int)this + 0x348),(int)&local_24);
  local_4 = 0xffffffff;
  local_24 = &PTR_FUN_00d18c4c;
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  local_10 = 0;
  local_20 = 0;
  local_1c = (int *)0x0;
  FUN_008047f0(this);
  FUN_00803830(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00804aa0 @ 00804aa0 ////

void __fastcall FUN_00804aa0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuStack_24;
  int iStack_20;
  int *piStack_1c;
  undefined ***pppuStack_18;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2e58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd1] = 0;
  FUN_004d9e90((int)(param_1 + 0xd2));
  puVar6 = DAT_0104cfc8;
  if (DAT_0104cfc8 != &DAT_0104cfd4) {
    do {
      piVar2 = (int *)puVar6[2];
      if ((piVar2 != (int *)0x0) && (cVar3 = (**(code **)(*piVar2 + 0x204))(), cVar3 != '\0')) {
        iVar4 = FUN_005773c0((int)piVar2);
        iVar5 = GetPlayerStudio();
        if ((iVar4 == iVar5) && (piVar2[0x205] == 0xe)) {
          param_1[0xd1] = param_1[0xd1] + 1;
          piStack_1c = piVar2 + 6;
          pppuStack_18 = &ppuStack_24;
          ppuStack_24 = &PTR_FUN_00d18c4c;
          iStack_20 = *piStack_1c;
          *(int **)(*piStack_1c + 4) = &iStack_20;
          *piStack_1c = (int)&iStack_20;
          uStack_4 = 0;
          piStack_10 = piVar2;
          FUN_004db640(param_1 + 0xd2,(int)&ppuStack_24);
          uStack_4 = 0xffffffff;
          FUN_00435ec0(&ppuStack_24);
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_0104cfd4);
  }
  FUN_007ddaf0((int *)param_1[0xd3],(int *)param_1[0xd4],(param_1[0xd4] - param_1[0xd3]) / 0x18,
               &LAB_00802d50);
  FUN_00803830(param_1);
  FUN_008047f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00804be0 @ 00804be0 ////

void __fastcall FUN_00804be0(int *param_1)

{
  FUN_00804aa0(param_1);
  FUN_00803710((int)param_1);
  FUN_00803910(param_1);
  return;
}


//// FUNCTION FUN_00804c00 @ 00804c00 ////

void __fastcall FUN_00804c00(int *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0043b490((uint *)(param_1 + 0xe0));
  if ((char)uVar1 != '\0') {
    FUN_00804aa0(param_1);
    FUN_00803710((int)param_1);
    FUN_00803910(param_1);
    FUN_00804aa0(param_1);
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00804c70 @ 00804c70 ////

void __thiscall FUN_00804c70(void *this,float param_1)

{
  *(float *)((int)this + 0x4c) = param_1 * 0.5;
  return;
}


//// FUNCTION FUN_00804c90 @ 00804c90 ////

void FUN_00804c90(void)

{
  return;
}


//// FUNCTION FUN_00804d10 @ 00804d10 ////

void FUN_00804d10(float *param_1,float *param_2)

{
  float local_8;
  float local_4;
  
  local_8 = param_2[1];
  local_4 = -*param_2;
  FUN_00412c90(&local_8);
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_00804d90 @ 00804d90 ////

undefined * FUN_00804d90(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2e7e;
  local_c = ExceptionList;
  if ((DAT_0104eb24 & 1) == 0) {
    DAT_0104eb24 = DAT_0104eb24 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_009910f0((undefined4 *)&DAT_0104eb00);
    _atexit(FUN_00d13360);
  }
  if (DAT_0104eafc == '\0') {
    DAT_0104eb10 = DAT_0104eb10 & 0x3cffffff | 0x2000000;
    DAT_0104eb0c = 6;
    DAT_0104eafc = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104eb00;
}


//// FUNCTION FUN_00804e50 @ 00804e50 ////

void __thiscall FUN_00804e50(void *this,float *param_1,float *param_2,float *param_3)

{
  *(float *)this = *param_1;
  *(float *)((int)this + 4) = param_1[1];
  *(float *)((int)this + 8) = *param_2;
  *(float *)((int)this + 0xc) = param_2[1];
  *(float *)((int)this + 0x10) = *param_3;
  *(float *)((int)this + 0x14) = param_3[1];
  *(float *)((int)this + 0x18) = *(float *)((int)this + 8) - *(float *)this;
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0xc) - *(float *)((int)this + 4);
  *(float *)((int)this + 0x20) = *(float *)((int)this + 0x10) - *(float *)((int)this + 8);
  *(float *)((int)this + 0x24) = *(float *)((int)this + 0x14) - *(float *)((int)this + 0xc);
  return;
}


//// FUNCTION FUN_00804ee0 @ 00804ee0 ////

void __cdecl FUN_00804ee0(float *param_1,float *param_2)

{
  float local_8;
  float local_4;
  
  local_8 = param_2[1];
  local_4 = -*param_2;
  FUN_00412c90(&local_8);
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_00804f50 @ 00804f50 ////

float10 __cdecl
FUN_00804f50(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)param_3 - (float10)param_1;
  return (((float10)param_1 * (float10)param_4 +
          fVar1 * (float10)param_6 + ((float10)param_2 - (float10)param_4) * (float10)param_5) -
         (float10)param_3 * (float10)param_2) /
         SQRT(((float10)param_4 - (float10)param_2) * ((float10)param_4 - (float10)param_2) +
              fVar1 * fVar1);
}


//// FUNCTION FUN_00805020 @ 00805020 ////

void __thiscall FUN_00805020(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x24);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[4] = uVar1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


//// FUNCTION FUN_00805090 @ 00805090 ////

void __thiscall FUN_00805090(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00805020(this,&local_1c,param_2,param_3);
  *param_1 = local_1c;
  param_1[1] = local_18;
  param_1[2] = local_14;
  local_c = local_c & 0xffffff;
  param_1[3] = local_10;
  param_1[4] = local_c;
  param_1[5] = local_8;
  param_1[6] = local_4;
  return;
}


//// FUNCTION FUN_00805130 @ 00805130 ////

void __thiscall FUN_00805130(void *this,float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *(float *)((int)this + 0x1c);
  local_14 = -*(float *)((int)this + 0x18);
  FUN_00412c90(&local_18);
  local_10 = local_18;
  local_c = local_14;
  local_8 = local_18 * param_2 + *(float *)this;
  local_4 = local_14 * param_2 + *(float *)((int)this + 4);
  local_14 = -*(float *)((int)this + 0x20);
  local_18 = *(float *)((int)this + 0x24);
  FUN_00412c90(&local_18);
  fVar2 = local_18 * param_2 + *(float *)((int)this + 8);
  fVar3 = local_14 * param_2 + *(float *)((int)this + 0xc);
  fVar4 = ((fVar3 - local_4) * *(float *)((int)this + 0x18) -
          (fVar2 - local_8) * *(float *)((int)this + 0x1c)) /
          (*(float *)((int)this + 0x20) * *(float *)((int)this + 0x1c) -
          *(float *)((int)this + 0x24) * *(float *)((int)this + 0x18));
  fVar1 = *(float *)((int)this + 0x24);
  *param_1 = fVar4 * *(float *)((int)this + 0x20) + fVar2;
  param_1[1] = fVar4 * fVar1 + fVar3;
  return;
}


//// FUNCTION FUN_00805220 @ 00805220 ////

void __cdecl FUN_00805220(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
    }
    param_3 = param_3 + 7;
  }
  return;
}


//// FUNCTION FUN_008052d0 @ 008052d0 ////

void __cdecl FUN_008052d0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00805300 @ 00805300 ////

void __fastcall FUN_00805300(int param_1)

{
  FUN_00704120(param_1);
                    /* WARNING: Could not recover jumptable at 0x0080530f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0x28))();
  return;
}


//// FUNCTION FUN_00805390 @ 00805390 ////

void __fastcall FUN_00805390(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


//// FUNCTION FUN_008053d0 @ 008053d0 ////

void __thiscall FUN_008053d0(void *this,uint param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce2e90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x7fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_00703f20();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 1;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 2);
    local_8 = 0;
    FUN_008052d0(*(undefined2 **)((int)this + 4),*(undefined2 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined2 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined2 **)((int)this + 8) = puVar2;
    *(undefined2 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008054a0 @ 008054a0 ////

void __thiscall FUN_008054a0(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce2ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x9249249 < param_1) {
    ExceptionList = &local_10;
    FUN_00703f90();
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x1c;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 0x1c);
    local_8 = 0;
    FUN_00805220(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(int *)((int)this + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1 * 7;
    *(undefined4 **)((int)this + 8) = puVar2 + iVar3 * 7;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00805590 @ 00805590 ////

int __thiscall FUN_00805590(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c [7];
  
  puVar1 = (undefined4 *)FUN_00805020(this,local_1c,param_1,param_2);
  FUN_007be370((void *)((int)this + 0x14),puVar1);
  if (*(int *)((int)this + 0x18) == 0) {
    return -1;
  }
  return (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x1c + -1;
}


//// FUNCTION FUN_008055f0 @ 008055f0 ////

int __thiscall FUN_008055f0(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c [7];
  
  puVar1 = (undefined4 *)FUN_00805090(this,local_1c,param_1,param_2);
  FUN_007be370((void *)((int)this + 0x14),puVar1);
  if (*(int *)((int)this + 0x18) == 0) {
    return -1;
  }
  return (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x1c + -1;
}


//// FUNCTION FUN_00805650 @ 00805650 ////

void __thiscall FUN_00805650(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  undefined2 *puVar2;
  
  this_00 = (void *)((int)this + 4);
  iVar1 = *(int *)((int)this + 8);
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x10) - iVar1 >> 1) <=
      (uint)(*(int *)((int)this + 0xc) - iVar1 >> 1))) {
    FUN_007be030(this_00,*(undefined2 **)((int)this + 0xc),1,(ushort *)&param_1);
  }
  else {
    puVar2 = *(undefined2 **)((int)this + 0xc);
    *puVar2 = (short)param_1;
    *(undefined2 **)((int)this + 0xc) = puVar2 + 1;
  }
  iVar1 = *(int *)((int)this + 8);
  param_1 = param_2;
  if ((iVar1 == 0) ||
     ((uint)(*(int *)((int)this + 0x10) - iVar1 >> 1) <=
      (uint)(*(int *)((int)this + 0xc) - iVar1 >> 1))) {
    FUN_007be030(this_00,*(undefined2 **)((int)this + 0xc),1,(ushort *)&param_1);
  }
  else {
    puVar2 = *(undefined2 **)((int)this + 0xc);
    *puVar2 = (short)param_2;
    *(undefined2 **)((int)this + 0xc) = puVar2 + 1;
  }
  iVar1 = *(int *)((int)this + 8);
  param_1 = param_3;
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 1) <
      (uint)(*(int *)((int)this + 0x10) - iVar1 >> 1))) {
    puVar2 = *(undefined2 **)((int)this + 0xc);
    *puVar2 = (short)param_3;
    *(undefined2 **)((int)this + 0xc) = puVar2 + 1;
    return;
  }
  FUN_007be030(this_00,*(undefined2 **)((int)this + 0xc),1,(ushort *)&param_1);
  return;
}


//// FUNCTION FUN_00805740 @ 00805740 ////

void __thiscall
FUN_00805740(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00805650(this,param_1,param_2,param_3);
  FUN_00805650(this,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_00805770 @ 00805770 ////

void __thiscall FUN_00805770(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x3c) + param_2;
  iVar1 = iVar3 + -2;
  iVar2 = param_1 + 1;
  FUN_00805650(this,iVar3 + -1,iVar1,iVar2);
  FUN_00805650(this,iVar1,iVar2,param_1 + 2);
  iVar1 = *(int *)((int)this + 0x3c) + -2 + param_2;
  FUN_00805650(this,param_2,param_1,iVar1);
  FUN_00805650(this,param_1,iVar1,iVar2);
  return;
}


//// FUNCTION FUN_008057e0 @ 008057e0 ////

void __thiscall FUN_008057e0(void *this,float param_1,float param_2,float param_3,float param_4)

{
  void *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  int local_b4;
  int local_b0;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_1c [4];
  uint local_c;
  
  this_00 = (void *)((int)this + 0x14);
  if (*(int *)((int)this + 0x18) == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x1c;
  }
  puVar4 = (undefined4 *)FUN_00805020(this,local_1c,param_1,param_2);
  FUN_007be370(this_00,puVar4);
  local_b4 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_6c = 0;
  local_64 = 0;
  local_60 = 0;
  do {
    local_84 = *(undefined4 *)((int)this + 0x24);
    local_4c = 0;
    fVar6 = (float10)fcos((float10)local_b4 * (float10)-0.19634955);
    fVar7 = (float10)fsin((float10)local_b4 * (float10)-0.19634955);
    fVar1 = (float)((float10)param_3 * fVar6 - (float10)param_4 * fVar7);
    fVar2 = (float)((float10)param_3 * fVar7 + (float10)param_4 * fVar6);
    local_94 = param_1 + fVar1 * *(float *)((int)this + 0x38);
    local_90 = param_2 + fVar2 * *(float *)((int)this + 0x38);
    local_8c = 0;
    local_54 = local_94;
    local_50 = local_90;
    FUN_007be370(this_00,&local_94);
    fVar3 = *(float *)((int)this + 0x38) + 1.0;
    local_30 = 0;
    local_58 = fVar2 * fVar3;
    local_78 = fVar1 * fVar3 + param_1;
    local_74 = local_58 + param_2;
    local_c = *(uint *)((int)this + 0x24) & 0xffffff;
    local_70 = 0;
    local_68 = local_c;
    local_38 = local_78;
    local_34 = local_74;
    FUN_007be370(this_00,&local_78);
    local_b4 = local_b4 + 1;
  } while (local_b4 < 9);
  iVar5 = local_b0 + 3;
  local_b4 = 8;
  do {
    FUN_00805650(this,local_b0,iVar5 + -2,iVar5);
    FUN_00805650(this,iVar5 + -2,iVar5 + -1,iVar5);
    FUN_00805650(this,iVar5 + -1,iVar5,iVar5 + 1);
    iVar5 = iVar5 + 2;
    local_b4 = local_b4 + -1;
  } while (local_b4 != 0);
  return;
}


//// FUNCTION FUN_00805a40 @ 00805a40 ////

void __thiscall FUN_00805a40(void *this,void *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float *local_14;
  float local_10;
  float local_c;
  
  FUN_004ac900(param_1,0x4d);
  local_14 = (float *)0x0;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    local_10 = (*(float *)((int)this + 0x80) * 0.5 - *(float *)((int)this + 0x90)) *
               *(float *)((int)&DAT_00d5ae20 + (int)local_14) * 0.0023201855 +
               *(float *)((int)this + 0x90) + *(float *)((int)this + 0x78);
    local_c = (1.0 - *(float *)((int)&DAT_00d5ae24 + (int)local_14) * 0.055555556) * param_2 +
              *(float *)((int)this + 0x7c) + *(float *)((int)this + 0x90);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
      FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_10);
    }
    else {
      puVar2 = *(undefined4 **)((int)param_1 + 8);
      FUN_0046deb0(puVar2,1,&local_10);
      *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
    }
    local_14 = (float *)((int)local_14 + 8);
  } while (local_14 < 0x98);
  local_14 = (float *)&DAT_00d5aeb4;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    fVar4 = *(float *)((int)this + 0x80) * 0.5;
    local_10 = (fVar4 - *(float *)((int)this + 0x90)) * (1.0 - local_14[-1] * 0.0023201855) + fVar4
               + *(float *)((int)this + 0x78);
    local_c = (1.0 - *local_14 * 0.055555556) * param_2 + *(float *)((int)this + 0x7c) +
              *(float *)((int)this + 0x90);
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
      FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_10);
    }
    else {
      puVar2 = *(undefined4 **)((int)param_1 + 8);
      FUN_0046deb0(puVar2,1,&local_10);
      *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
    }
    local_14 = local_14 + -2;
  } while (0xd5ae23 < (int)local_14);
  local_14 = (float *)0x0;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    fVar4 = *(float *)((int)this + 0x80) * 0.5;
    local_10 = (fVar4 - *(float *)((int)this + 0x90)) *
               (1.0 - *(float *)((int)&DAT_00d5ae20 + (int)local_14) * 0.0023201855) + fVar4 +
               *(float *)((int)this + 0x78);
    local_c = ((*(float *)((int)this + 0x7c) + *(float *)((int)this + 0x84)) -
              *(float *)((int)this + 0x90)) -
              (1.0 - *(float *)((int)&DAT_00d5ae24 + (int)local_14) * 0.055555556) * param_2;
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
      FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_10);
    }
    else {
      puVar2 = *(undefined4 **)((int)param_1 + 8);
      FUN_0046deb0(puVar2,1,&local_10);
      *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
    }
    local_14 = (float *)((int)local_14 + 8);
  } while (local_14 < 0x98);
  local_14 = (float *)&DAT_00d5aeb4;
  do {
    iVar1 = *(int *)((int)param_1 + 4);
    local_10 = (*(float *)((int)this + 0x80) * 0.5 - *(float *)((int)this + 0x90)) * local_14[-1] *
               0.0023201855 + *(float *)((int)this + 0x90) + *(float *)((int)this + 0x78);
    local_c = ((*(float *)((int)this + 0x7c) + *(float *)((int)this + 0x84)) -
              *(float *)((int)this + 0x90)) - (1.0 - *local_14 * 0.055555556) * param_2;
    if ((iVar1 == 0) ||
       ((uint)(*(int *)((int)param_1 + 0xc) - iVar1 >> 3) <=
        (uint)(*(int *)((int)param_1 + 8) - iVar1 >> 3))) {
      FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,&local_10);
    }
    else {
      puVar2 = *(undefined4 **)((int)param_1 + 8);
      FUN_0046deb0(puVar2,1,&local_10);
      *(undefined4 **)((int)param_1 + 8) = puVar2 + 2;
    }
    local_14 = local_14 + -2;
  } while (0xd5ae23 < (int)local_14);
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  if ((puVar2 != (undefined4 *)0x0) &&
     ((uint)(*(int *)((int)param_1 + 8) - (int)puVar2 >> 3) <
      (uint)(*(int *)((int)param_1 + 0xc) - (int)puVar2 >> 3))) {
    puVar3 = *(undefined4 **)((int)param_1 + 8);
    FUN_0046deb0(puVar3,1,puVar2);
    *(undefined4 **)((int)param_1 + 8) = puVar3 + 2;
    return;
  }
  FUN_0046e9b0(param_1,*(undefined4 **)((int)param_1 + 8),1,puVar2);
  return;
}


//// FUNCTION FUN_00805de0 @ 00805de0 ////

void __thiscall FUN_00805de0(void *this,float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *extraout_ECX;
  float10 fVar6;
  float10 fVar7;
  int iVar8;
  int iVar9;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  char local_89;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [24];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_98 = *(float *)((int)this + 0x4c) + 1.0;
  if (*(uint *)((int)this + 0x28) == 1) {
    local_a0 = param_1[1] - *(float *)((int)this + 0x30);
    local_9c = -(*param_1 - *(float *)((int)this + 0x2c));
    local_90 = local_a0;
    local_68 = local_9c;
    FUN_00412c90(&local_a0);
    local_88 = local_a0;
    local_a0 = local_a0 * *(float *)((int)this + 0x4c);
    local_84 = local_9c;
    local_40 = local_90;
    local_3c = local_68;
    local_9c = local_9c * *(float *)((int)this + 0x4c);
    FUN_00412c90(&local_40);
    local_88 = local_40;
    local_84 = local_3c;
    local_78 = FUN_008055f0(this,local_40 * local_98 + *(float *)((int)this + 0x2c),
                            local_3c * local_98 + *(float *)((int)this + 0x30));
    local_74 = FUN_00805590(this,local_a0 + *(float *)((int)this + 0x2c),
                            local_9c + *(float *)((int)this + 0x30));
    local_70 = FUN_00805590(this,*(float *)((int)this + 0x2c) - local_a0,
                            *(float *)((int)this + 0x30) - local_9c);
    local_9c = local_68;
    local_a0 = local_90;
    FUN_00412c90(&local_a0);
    local_88 = local_a0;
    local_84 = local_9c;
    local_6c = FUN_008055f0(this,*(float *)((int)this + 0x2c) - local_a0 * local_98,
                            *(float *)((int)this + 0x30) - local_9c * local_98);
    goto LAB_00806743;
  }
  if (*(uint *)((int)this + 0x28) < 2) goto LAB_00806743;
  pfVar1 = (float *)((int)this + 0x2c);
  pfVar2 = (float *)((int)this + 0x34);
  FUN_00804e50(local_30,pfVar2,pfVar1,param_1);
  local_38 = *(float *)((int)this + 0x30) - *(float *)((int)this + 0x38);
  local_94 = *pfVar1 - *pfVar2;
  local_68 = param_1[1] - *(float *)((int)this + 0x30);
  local_88 = *param_1 - *pfVar1;
  local_64 = -local_88;
  local_34 = local_68;
  FUN_00412c90(&local_68);
  local_a0 = local_68;
  local_9c = local_64;
  local_89 = '\0';
  FUN_00401380(&local_60,8,4,&LAB_00403300);
  pfVar3 = param_1;
  if (ABS(local_10 * local_14 - local_c * local_18) <= 1e-05) {
LAB_0080635d:
    local_94 = *pfVar3 - *pfVar1;
    local_90 = pfVar3[1] - *(float *)((int)this + 0x30);
    FUN_00804d10(&local_a0,&local_94);
    local_80 = local_a0 * local_98;
    local_60 = local_80 + *pfVar1;
    local_5c = local_9c * local_98 + *(float *)((int)this + 0x30);
    local_58 = local_a0 * *(float *)((int)this + 0x4c) + *pfVar1;
    local_54 = local_9c * *(float *)((int)this + 0x4c) + *(float *)((int)this + 0x30);
    local_7c = local_9c * *(float *)((int)this + 0x4c);
    local_50 = *pfVar1 - local_a0 * *(float *)((int)this + 0x4c);
    local_4c = *(float *)((int)this + 0x30) - local_7c;
    local_94 = *pfVar1 - local_80;
    local_90 = *(float *)((int)this + 0x30) - local_9c * local_98;
    local_48 = local_94;
    local_44 = local_90;
    local_78 = FUN_008055f0(this,local_60,local_5c);
    local_74 = FUN_00805590(this,local_58,local_54);
    local_70 = FUN_00805590(this,local_50,local_4c);
    local_6c = FUN_008055f0(this,local_48,local_44);
    if (local_89 == '\0') {
      FUN_00805740(this,local_78,local_74,*(undefined4 *)((int)this + 0x3c),
                   *(undefined4 *)((int)this + 0x40));
      FUN_00805740(this,local_74,local_70,*(undefined4 *)((int)this + 0x40),
                   *(undefined4 *)((int)this + 0x44));
      iVar9 = *(int *)((int)this + 0x48);
      iVar4 = local_70;
      iVar5 = local_6c;
    }
    else {
      FUN_00805740(this,local_6c,local_70,*(undefined4 *)((int)this + 0x3c),
                   *(undefined4 *)((int)this + 0x40));
      FUN_00805740(this,local_70,local_74,*(undefined4 *)((int)this + 0x40),
                   *(undefined4 *)((int)this + 0x44));
      iVar9 = *(int *)((int)this + 0x48);
      iVar4 = local_74;
      iVar5 = local_78;
    }
    iVar8 = *(int *)((int)this + 0x44);
  }
  else {
    fVar6 = (float10)fpatan((float10)local_34,(float10)local_88);
    fVar7 = (float10)fpatan((float10)local_38,(float10)local_94);
    local_68 = (float)(fVar7 - fVar6);
    fVar6 = FUN_004012c0(local_68);
    local_68 = local_9c * local_98;
    local_80 = local_a0 * local_98;
    local_40 = local_80;
    if (fVar6 <= (float10)0.0) {
      fVar6 = FUN_00804f50(*pfVar2,*(float *)((int)this + 0x38),*pfVar1,*(float *)((int)this + 0x30)
                           ,*param_1 - local_80,param_1[1] - local_68);
      if ((ABS(fVar6) < (float10)local_98 != (ABS(fVar6) == (float10)local_98)) &&
         (local_88 * local_94 + local_34 * local_38 < 0.0)) {
        local_89 = '\x01';
        goto LAB_0080635d;
      }
      local_60 = local_40 + *pfVar1;
      local_64 = local_68 + *(float *)((int)this + 0x30);
      local_7c = local_9c * *(float *)((int)this + 0x4c);
      local_94 = local_a0 * *(float *)((int)this + 0x4c) + *pfVar1;
      local_90 = local_7c + *(float *)((int)this + 0x30);
      local_68 = local_60;
      local_5c = local_64;
      local_58 = local_94;
      local_54 = local_90;
      pfVar3 = (float *)FUN_00805130(local_30,&local_80,-*(float *)((int)this + 0x4c));
      local_50 = *pfVar3;
      local_4c = pfVar3[1];
      pfVar3 = (float *)FUN_00805130(local_30,&local_80,-local_98);
      local_48 = *pfVar3;
      local_44 = pfVar3[1];
      local_78 = FUN_008055f0(this,local_68,local_64);
      local_74 = FUN_00805590(this,local_58,local_54);
      local_70 = FUN_00805590(this,local_50,local_4c);
      local_6c = FUN_008055f0(this,local_48,local_44);
      local_94 = *pfVar1 - *pfVar2;
      local_90 = *(float *)((int)this + 0x30) - *(float *)((int)this + 0x38);
      FUN_00804d10(&local_88,&local_94);
      local_80 = local_88 * *(float *)((int)this + 0x4c);
      iVar4 = FUN_00805590(this,local_80 + *pfVar1,
                           *(float *)((int)this + 0x4c) * local_84 + *(float *)((int)this + 0x30));
      iVar5 = FUN_008055f0(this,local_88 * local_98 + *pfVar1,
                           local_84 * local_98 + *(float *)((int)this + 0x30));
      FUN_00805740(this,iVar5,iVar4,*(undefined4 *)((int)this + 0x3c),
                   *(undefined4 *)((int)this + 0x40));
      FUN_00805740(this,iVar4,local_70,*(undefined4 *)((int)this + 0x40),
                   *(undefined4 *)((int)this + 0x44));
      FUN_00805740(this,local_70,local_6c,*(undefined4 *)((int)this + 0x44),
                   *(undefined4 *)((int)this + 0x48));
      FUN_00805650(this,local_74,local_70,iVar4);
      iVar8 = local_74;
      iVar9 = local_78;
    }
    else {
      fVar6 = FUN_00804f50(*pfVar2,*(float *)((int)this + 0x38),*pfVar1,*(float *)((int)this + 0x30)
                           ,local_80 + *param_1,local_68 + param_1[1]);
      if ((ABS(fVar6) < (float10)local_98 != (ABS(fVar6) == (float10)local_98)) &&
         (local_88 * local_94 + local_34 * local_38 < 0.0)) {
        local_89 = '\x01';
        pfVar3 = extraout_ECX;
        goto LAB_0080635d;
      }
      pfVar3 = (float *)FUN_00805130(local_30,&local_80,local_98);
      local_60 = *pfVar3;
      local_5c = pfVar3[1];
      pfVar3 = (float *)FUN_00805130(local_30,&local_80,*(float *)((int)this + 0x4c));
      local_58 = *pfVar3;
      local_54 = pfVar3[1];
      local_7c = local_9c * *(float *)((int)this + 0x4c);
      local_50 = *pfVar1 - local_a0 * *(float *)((int)this + 0x4c);
      local_4c = *(float *)((int)this + 0x30) - local_7c;
      local_88 = *pfVar1 - local_40;
      local_84 = *(float *)((int)this + 0x30) - local_68;
      local_48 = local_88;
      local_44 = local_84;
      local_78 = FUN_008055f0(this,local_60,local_5c);
      local_74 = FUN_00805590(this,local_58,local_54);
      local_70 = FUN_00805590(this,local_50,local_4c);
      local_6c = FUN_008055f0(this,local_48,local_44);
      local_94 = *pfVar1 - *pfVar2;
      local_90 = *(float *)((int)this + 0x30) - *(float *)((int)this + 0x38);
      FUN_00804d10(&local_a0,&local_94);
      local_80 = local_a0 * *(float *)((int)this + 0x4c);
      iVar4 = FUN_00805590(this,*pfVar1 - local_80,
                           *(float *)((int)this + 0x30) - *(float *)((int)this + 0x4c) * local_9c);
      iVar5 = FUN_008055f0(this,*pfVar1 - local_a0 * local_98,
                           *(float *)((int)this + 0x30) - local_9c * local_98);
      FUN_00805740(this,local_78,local_74,*(undefined4 *)((int)this + 0x3c),
                   *(undefined4 *)((int)this + 0x40));
      FUN_00805740(this,local_74,iVar4,*(undefined4 *)((int)this + 0x40),
                   *(undefined4 *)((int)this + 0x44));
      FUN_00805740(this,iVar4,iVar5,*(undefined4 *)((int)this + 0x44),
                   *(undefined4 *)((int)this + 0x48));
      FUN_00805650(this,local_74,local_70,iVar4);
      iVar8 = local_70;
      iVar9 = local_6c;
    }
  }
  FUN_00805740(this,iVar4,iVar5,iVar8,iVar9);
LAB_00806743:
  _memmove((void *)((int)this + 0x3c),&local_78,0x10);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x30);
  *(float *)((int)this + 0x2c) = *param_1;
  *(float *)((int)this + 0x30) = param_1[1];
  *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  return;
}


//// FUNCTION FUN_00806780 @ 00806780 ////

void __fastcall FUN_00806780(void *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  int local_10;
  int local_4;
  
  local_30 = *(float *)((int)param_1 + 0x30) - *(float *)((int)param_1 + 0x38);
  fVar3 = -(*(float *)((int)param_1 + 0x2c) - *(float *)((int)param_1 + 0x34));
  local_2c = fVar3;
  local_14 = local_30;
  FUN_00412c90(&local_30);
  local_30 = local_30 * *(float *)((int)param_1 + 0x4c);
  local_28 = local_14;
  local_2c = local_2c * *(float *)((int)param_1 + 0x4c);
  fVar4 = *(float *)((int)param_1 + 0x4c) + 1.0;
  local_24 = fVar3;
  FUN_00412c90(&local_28);
  local_20 = local_28;
  local_1c = local_24;
  local_10 = FUN_008055f0(param_1,local_28 * fVar4 + *(float *)((int)param_1 + 0x2c),
                          local_24 * fVar4 + *(float *)((int)param_1 + 0x30));
  iVar5 = FUN_00805590(param_1,local_30 + *(float *)((int)param_1 + 0x2c),
                       local_2c + *(float *)((int)param_1 + 0x30));
  iVar6 = FUN_00805590(param_1,*(float *)((int)param_1 + 0x2c) - local_30,
                       *(float *)((int)param_1 + 0x30) - local_2c);
  local_28 = local_14;
  local_24 = fVar3;
  FUN_00412c90(&local_28);
  local_20 = local_28;
  local_1c = local_24;
  local_4 = FUN_008055f0(param_1,*(float *)((int)param_1 + 0x2c) - local_28 * fVar4,
                         *(float *)((int)param_1 + 0x30) - local_24 * fVar4);
  if (1 < *(uint *)((int)param_1 + 0x28)) {
    uVar1 = *(undefined4 *)((int)param_1 + 0x3c);
    uVar2 = *(undefined4 *)((int)param_1 + 0x40);
    FUN_00805650(param_1,local_10,iVar5,uVar1);
    FUN_00805650(param_1,iVar5,uVar1,uVar2);
    uVar1 = *(undefined4 *)((int)param_1 + 0x40);
    uVar2 = *(undefined4 *)((int)param_1 + 0x44);
    FUN_00805650(param_1,iVar5,iVar6,uVar1);
    FUN_00805650(param_1,iVar6,uVar1,uVar2);
    uVar1 = *(undefined4 *)((int)param_1 + 0x44);
    uVar2 = *(undefined4 *)((int)param_1 + 0x48);
    FUN_00805650(param_1,iVar6,local_4,uVar1);
    FUN_00805650(param_1,local_4,uVar1,uVar2);
  }
  return;
}


//// FUNCTION FUN_00806960 @ 00806960 ////

void __fastcall FUN_00806960(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(void **)((int)param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 8));
  }
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  FUN_008057e0(param_1,*(float *)((int)param_1 + 0x38) + *(float *)((int)param_1 + 0x28),
               *(float *)((int)param_1 + 0x2c) + *(float *)((int)param_1 + 0x38),0.0,-1.0);
  if (*(int *)((int)param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x1c;
  }
  FUN_008057e0(param_1,*(float *)((int)param_1 + 0x38) + *(float *)((int)param_1 + 0x28),
               (*(float *)((int)param_1 + 0x34) + *(float *)((int)param_1 + 0x2c)) -
               *(float *)((int)param_1 + 0x38),-1.0,0.0);
  if (*(int *)((int)param_1 + 0x18) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x1c;
  }
  FUN_008057e0(param_1,(*(float *)((int)param_1 + 0x30) + *(float *)((int)param_1 + 0x28)) -
                       *(float *)((int)param_1 + 0x38),
               (*(float *)((int)param_1 + 0x34) + *(float *)((int)param_1 + 0x2c)) -
               *(float *)((int)param_1 + 0x38),0.0,1.0);
  if (*(int *)((int)param_1 + 0x18) != 0) {
    iVar3 = (*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x1c;
  }
  FUN_008057e0(param_1,(*(float *)((int)param_1 + 0x30) + *(float *)((int)param_1 + 0x28)) -
                       *(float *)((int)param_1 + 0x38),
               *(float *)((int)param_1 + 0x2c) + *(float *)((int)param_1 + 0x38),1.0,0.0);
  *(int *)((int)param_1 + 0x3c) = iVar1;
  FUN_00805770(param_1,iVar1,0);
  FUN_00805770(param_1,iVar2,iVar1);
  FUN_00805770(param_1,iVar3,iVar2);
  FUN_00805770(param_1,0,iVar3);
  FUN_00805650(param_1,0,iVar1,iVar3);
  FUN_00805650(param_1,iVar1,iVar3,iVar2);
  return;
}


//// FUNCTION FUN_00806b00 @ 00806b00 ////

void __fastcall FUN_00806b00(void *param_1)

{
  undefined4 *_Memory;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined1 local_54 [4];
  undefined4 *local_50;
  int local_4c;
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
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2eb8;
  pvStack_c = ExceptionList;
  if (*(void **)((int)param_1 + 8) != (void *)0x0) {
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 8));
  }
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x30));
  }
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x40));
  }
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  *(undefined4 *)((int)param_1 + 0x50) = 0;
  local_50 = (undefined4 *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_4 = 0;
  FUN_00805a40(param_1,local_54,18.0);
  iVar1 = local_4c;
  _Memory = local_50;
  if (local_50 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = local_4c - (int)local_50 >> 3;
  }
  FUN_008054a0((void *)((int)param_1 + 0x14),iVar2 * 5);
  if (_Memory == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 - (int)_Memory >> 3;
  }
  FUN_008053d0((void *)((int)param_1 + 4),iVar2 * 0x15 - 6);
  *(undefined4 *)((int)param_1 + 0x24) = *(undefined4 *)((int)param_1 + 0x88);
  FUN_00805590(param_1,*_Memory,_Memory[1]);
  FUN_00805590(param_1,_Memory[2],_Memory[3]);
  uVar3 = iVar1 - (int)_Memory >> 3;
  puVar5 = _Memory + 4;
  for (uVar4 = 2; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    local_44 = *puVar5;
    local_40 = puVar5[1];
    local_34 = *(undefined4 *)((int)param_1 + 0x24);
    local_20 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = local_44;
    local_24 = local_40;
    FUN_007be370((void *)((int)param_1 + 0x14),&local_44);
    FUN_00805650(param_1,0,uVar4 - 1,uVar4);
    puVar5 = puVar5 + 2;
  }
  *(undefined4 *)((int)param_1 + 0x4c) = *(undefined4 *)((int)param_1 + 0x8c);
  *(float *)((int)param_1 + 0x74) =
       (*(float *)((int)param_1 + 0x90) + *(float *)((int)param_1 + 0x90)) * 0.5;
  pfVar6 = (float *)(_Memory + -2);
  for (uVar4 = 0; uVar4 < uVar3; uVar4 = uVar4 + 1) {
    if ((uVar4 == 0) ||
       (0.5 < (pfVar6[2] - *pfVar6) * (pfVar6[2] - *pfVar6) +
              (pfVar6[3] - pfVar6[1]) * (pfVar6[3] - pfVar6[1]))) {
      FUN_00805de0((void *)((int)param_1 + 0x28),pfVar6 + 2);
    }
    pfVar6 = pfVar6 + 2;
  }
  FUN_00806780((void *)((int)param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00806eb0 @ 00806eb0 ////

void __cdecl FUN_00806eb0(int *param_1)

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


//// FUNCTION FUN_00806ee0 @ 00806ee0 ////

void __cdecl FUN_00806ee0(int param_1)

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


//// FUNCTION FUN_00806fd0 @ 00806fd0 ////

void __thiscall FUN_00806fd0(void *this,int param_1)

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


//// FUNCTION FUN_00807030 @ 00807030 ////

void __thiscall FUN_00807030(void *this,int *param_1)

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


//// FUNCTION FUN_008070a0 @ 008070a0 ////

void __fastcall FUN_008070a0(int *param_1)

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


//// FUNCTION FUN_00807120 @ 00807120 ////

void __fastcall FUN_00807120(int *param_1)

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


//// FUNCTION FUN_008071e0 @ 008071e0 ////

int * __fastcall FUN_008071e0(int *param_1)

{
  FUN_008070a0(param_1);
  return param_1;
}


//// FUNCTION FUN_008071f0 @ 008071f0 ////

int * __fastcall FUN_008071f0(int *param_1)

{
  FUN_00807120(param_1);
  return param_1;
}


//// FUNCTION FUN_00807210 @ 00807210 ////

undefined4 * __thiscall FUN_00807210(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2ed8;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d16954;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 8) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00471b10((longlong *)((int)this + 0x18));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008072c0 @ 008072c0 ////

void __fastcall FUN_008072c0(undefined4 *param_1)

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


//// FUNCTION FUN_00807310 @ 00807310 ////

undefined4 * __thiscall FUN_00807310(void *this,int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce2ef8;
  local_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d16954;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 8) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  local_4 = 0;
  *(undefined4 *)((int)this + 0x18) = *param_2;
  *(undefined4 *)((int)this + 0x1c) = param_2[1];
  FUN_00471b10((longlong *)((int)this + 0x18));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008073a0 @ 008073a0 ////

int * __fastcall FUN_008073a0(int *param_1)

{
  FUN_008070a0(param_1);
  return param_1;
}


//// FUNCTION FUN_008073b0 @ 008073b0 ////

int * __fastcall FUN_008073b0(int *param_1)

{
  FUN_00807120(param_1);
  return param_1;
}


//// FUNCTION FUN_008073d0 @ 008073d0 ////

void FUN_008073d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x38);
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


//// FUNCTION FUN_00807470 @ 00807470 ////

void __fastcall FUN_00807470(int param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_00d16954;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


//// FUNCTION FUN_008074c0 @ 008074c0 ////

void FUN_008074c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iStack_18;
  int iStack_14;
  int *local_4;
  
  DAT_0104eb28 = 0;
  local_4 = (int *)*DAT_0104eb30;
  piVar3 = DAT_0104eb30;
  if (local_4 != DAT_0104eb30) {
    do {
      piVar2 = local_4;
      piVar1 = (int *)local_4[9];
      if (piVar1 != (int *)0x0) {
        iStack_14 = 0x8074f1;
        piVar3 = (int *)(**(code **)(*piVar1 + 0x1d4))();
        iStack_18 = piVar2[10];
        iStack_14 = piVar2[0xb];
        FUN_00471b10((longlong *)&iStack_18);
        (**(code **)(*piVar3 + 4))();
        pvVar4 = (void *)(**(code **)(*piVar1 + 0x27c))();
        iStack_14 = 0x807520;
        FUN_004767d0(pvVar4);
        piVar3 = DAT_0104eb30;
      }
      iStack_14 = 0x80752f;
      FUN_008070a0((int *)&local_4);
    } while (local_4 != piVar3);
  }
  return;
}


//// FUNCTION FUN_00807540 @ 00807540 ////

void __fastcall FUN_00807540(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008073d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00807570 @ 00807570 ////

undefined4 *
FUN_00807570(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined1 param_5
            )

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce2f21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x38);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00807210(puVar1 + 4,param_4);
    *(undefined1 *)(puVar1 + 0xc) = param_5;
    *(undefined1 *)((int)puVar1 + 0x31) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_00807610 @ 00807610 ////

void * __thiscall FUN_00807610(void *this,byte param_1)

{
  FUN_00807470((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00807630 @ 00807630 ////

int __fastcall FUN_00807630(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008073d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00807680 @ 00807680 ////

void FUN_00807680(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00807680(*(void **)((int)param_1 + 8));
    FUN_00807470((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_008076c0 @ 008076c0 ////

void __thiscall
FUN_008076c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int param_4)

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
  puStack_8 = &LAB_00ce2f38;
  local_c = ExceptionList;
  if (0x7fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00807570(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_008077bb:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00806fd0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_00807030(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_008077bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_00807030(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00806fd0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00807870 @ 00807870 ////

void __thiscall FUN_00807870(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *_Memory;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
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
  puStack_8 = &LAB_00ce2f58;
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
  FUN_008070a0((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x31) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x31) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x31) == '\0') {
          piVar5[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar5;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar4 = (int *)_Memory[1];
        if ((int *)*piVar4 == _Memory) {
          *piVar4 = (int)param_2;
        }
        else {
          piVar4[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[0xc];
      *(char *)(param_2 + 0xc) = (char)_Memory[0xc];
      *(char *)(_Memory + 0xc) = (char)iVar1;
      goto LAB_008079db;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x31) == '\0') {
    piVar5[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar5;
  }
  else if ((int *)*piVar6 == _Memory) {
    *piVar6 = (int)piVar5;
  }
  else {
    piVar6[2] = (int)piVar5;
  }
  piVar4 = *(int **)((int)this + 4);
  if ((int *)*piVar4 == _Memory) {
    piVar2 = piVar6;
    if (*(char *)((int)piVar5 + 0x31) == '\0') {
      piVar2 = (int *)FUN_00806eb0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x31) == '\0') {
      uVar3 = FUN_00806ee0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_008079db:
  if ((char)_Memory[0xc] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[0xc] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar6 + 0xc) = 0;
            FUN_00806fd0(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_00807030(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar6[0xc];
              *(undefined1 *)(piVar6 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00806fd0(this,(int)piVar6);
              break;
            }
LAB_00807aa8:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar6 + 0xc) = 0;
            FUN_00807030(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00807aa8;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00806fd0(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar6[0xc];
            *(undefined1 *)(piVar6 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_00807030(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0xc) = 1;
  }
  _Memory[4] = (int)&PTR_FUN_00d16954;
  if ((int *)_Memory[6] != (int *)0x0) {
    *(int *)_Memory[6] = _Memory[5];
  }
  if (_Memory[5] != 0) {
    *(int *)(_Memory[5] + 4) = _Memory[6];
  }
  _Memory[5] = 0;
  _Memory[6] = 0;
  _Memory[9] = 0;
  if ((int *)_Memory[6] != (int *)0x0) {
    *(int *)_Memory[6] = _Memory[5];
  }
  if (_Memory[5] != 0) {
    *(int *)(_Memory[5] + 4) = _Memory[6];
  }
  _Memory[5] = 0;
  _Memory[6] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00807b80 @ 00807b80 ////

void __thiscall FUN_00807b80(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool local_4;
  
  puVar2 = param_2;
  puVar4 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar4[1] + 0x31) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      local_4 = (uint)param_2[5] < (uint)puVar4[9];
      if (local_4) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x31) == '\0');
  }
  param_2 = puVar4;
  if (local_4) {
    if (puVar4 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_008076c0(this,&param_2,'\x01',puVar4,(int)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00807120((int *)&param_2);
  }
  if ((uint)param_2[9] < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)FUN_008076c0(this,&param_2,local_4,puVar4,(int)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00807c40 @ 00807c40 ////

void __fastcall FUN_00807c40(int param_1)

{
  FUN_00807680(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00807c70 @ 00807c70 ////

void __thiscall FUN_00807c70(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00807680((void *)piVar6[1]);
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
    FUN_00807870(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00807d30 @ 00807d30 ////

void FUN_00807d30(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined **local_50;
  int local_4c;
  int *local_48;
  undefined ***local_44;
  int local_3c;
  undefined **ppuStack_38;
  int iStack_34;
  int *piStack_30;
  undefined4 uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ce2f80;
  local_14 = ExceptionList;
  DAT_0104eb28 = 1;
  puVar5 = DAT_0104d05c;
  ExceptionList = &local_14;
  if (DAT_0104d05c != &DAT_0104d068) {
    do {
      iVar1 = FUN_005773c0(puVar5[2]);
      iVar2 = GetPlayerStudio();
      if (iVar1 == iVar2) {
        local_3c = puVar5[2];
        local_44 = &local_50;
        local_4c = 0;
        local_48 = (int *)0x0;
        local_50 = &PTR_FUN_00d16954;
        if (local_3c != 0) {
          local_48 = (int *)(local_3c + 0x18);
          local_4c = *local_48;
          *(int **)(*local_48 + 4) = &local_4c;
          *local_48 = (int)&local_4c;
        }
        local_c = 0;
        piVar3 = (int *)(**(code **)(*(int *)puVar5[2] + 0x1d4))();
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(auStack_60);
        puVar4 = FUN_00807310(&ppuStack_38,(int)&local_50,puVar4);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00807b80(&DAT_0104eb2c,auStack_58,puVar4);
        ppuStack_38 = &PTR_FUN_00d16954;
        if (piStack_30 != (int *)0x0) {
          *piStack_30 = iStack_34;
        }
        if (iStack_34 != 0) {
          *(int **)(iStack_34 + 4) = piStack_30;
        }
        uStack_24 = 0;
        iStack_34 = 0;
        piStack_30 = (int *)0x0;
        local_c = 0xffffffff;
        local_50 = &PTR_FUN_00d16954;
        if (local_48 != (int *)0x0) {
          *local_48 = local_4c;
        }
        if (local_4c != 0) {
          *(int **)(local_4c + 4) = local_48;
        }
        local_3c = 0;
        local_4c = 0;
        local_48 = (int *)0x0;
      }
      puVar4 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar4;
    } while ((undefined4 *)*puVar4 != &DAT_0104d068);
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_00807e90 @ 00807e90 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00807e90(void)

{
  DAT_0104eb28 = 0;
  FUN_00807680(*(void **)(DAT_0104eb30 + 4));
  *(int *)(DAT_0104eb30 + 4) = DAT_0104eb30;
  _DAT_0104eb34 = 0;
  *(int *)DAT_0104eb30 = DAT_0104eb30;
  *(int *)(DAT_0104eb30 + 8) = DAT_0104eb30;
  return;
}


//// FUNCTION FUN_00807f30 @ 00807f30 ////

void __fastcall FUN_00807f30(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00807c70(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00807f60 @ 00807f60 ////

int __fastcall FUN_00807f60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_008073d0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_008080b0 @ 008080b0 ////

void FUN_008080b0(void)

{
  DAT_00e5bf89 = DAT_00e5bf88;
  DAT_00e5bf99 = DAT_00e5bf98;
  DAT_00e5bfa9 = DAT_00e5bfa8;
  DAT_00e5bfb9 = DAT_00e5bfb8;
  DAT_00e5bfc9 = DAT_00e5bfc8;
  return;
}


//// FUNCTION FUN_008080f0 @ 008080f0 ////

void FUN_008080f0(void)

{
  DAT_00e5bf88 = DAT_00e5bf89;
  DAT_00e5bf98 = DAT_00e5bf99;
  DAT_00e5bfa8 = DAT_00e5bfa9;
  DAT_00e5bfb8 = DAT_00e5bfb9;
  DAT_00e5bfc8 = DAT_00e5bfc9;
  return;
}


//// FUNCTION FUN_00808130 @ 00808130 ////

undefined1 FUN_00808130(void)

{
  char *pcVar1;
  
  pcVar1 = &DAT_00e5bf88;
  do {
    if (*pcVar1 != '\0') {
      return 0;
    }
    pcVar1 = pcVar1 + 0x10;
  } while ((int)pcVar1 < 0xe5bfd8);
  return 1;
}


//// FUNCTION FUN_00808150 @ 00808150 ////

void FUN_00808150(undefined1 param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_00e5bf88;
  do {
    *puVar1 = param_1;
    puVar1 = puVar1 + 0x10;
  } while ((int)puVar1 < 0xe5bfd8);
  return;
}


//// FUNCTION FUN_008081b0 @ 008081b0 ////

void * __cdecl FUN_008081b0(void *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0043b560();
  FUN_0043b520(param_1,(float)(((int)uVar1 / 10) * 10));
  return param_1;
}


//// FUNCTION FUN_00808210 @ 00808210 ////

int * __thiscall FUN_00808210(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00808270 @ 00808270 ////

int * __thiscall FUN_00808270(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008082b0 @ 008082b0 ////

int * __thiscall FUN_008082b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00808720 @ 00808720 ////

void __cdecl FUN_00808720(int *param_1)

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


//// FUNCTION FUN_00808750 @ 00808750 ////

void __cdecl FUN_00808750(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x71);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x71);
  }
  return;
}


//// FUNCTION FUN_00808830 @ 00808830 ////

void __cdecl FUN_00808830(int param_1)

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


//// FUNCTION FUN_00808860 @ 00808860 ////

void __cdecl FUN_00808860(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x71);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x71);
  }
  return;
}


//// FUNCTION FUN_00808880 @ 00808880 ////

void __fastcall FUN_00808880(int *param_1)

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


//// FUNCTION FUN_00808960 @ 00808960 ////

void __cdecl FUN_00808960(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}


//// FUNCTION FUN_008089c0 @ 008089c0 ////

void __cdecl FUN_008089c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00808b00 @ 00808b00 ////

void __cdecl FUN_00808b00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00808be0 @ 00808be0 ////

undefined4 * __fastcall FUN_00808be0(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d5b084;
  param_1[0x14] = &PTR_FUN_00d5b06c;
  *(undefined1 *)(param_1 + 0xd1) = 0xff;
  *(undefined1 *)((int)param_1 + 0x345) = 0xff;
  *(undefined1 *)((int)param_1 + 0x346) = 0xff;
  *(undefined1 *)((int)param_1 + 0x347) = 0xff;
  param_1[0xd1] = 0xffffffff;
  return param_1;
}


//// FUNCTION FUN_00808c20 @ 00808c20 ////

undefined4 * __thiscall FUN_00808c20(void *this,byte param_1)

{
  thunk_FUN_00742900(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00808ca0 @ 00808ca0 ////

void FUN_00808ca0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (float)param_2[0x30];
  fVar3 = (float10)(**(code **)(*param_2 + 0x14))();
  fVar2 = (float)param_2[0x27];
  *param_1 = fVar1 + 5.0;
  param_1[1] = (float)(fVar3 * (float10)0.5 + (float10)fVar2);
  return;
}


//// FUNCTION FUN_00808d50 @ 00808d50 ////

void __fastcall FUN_00808d50(int param_1)

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


//// FUNCTION FUN_00809170 @ 00809170 ////

void __thiscall FUN_00809170(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x71) == '\0') {
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


//// FUNCTION FUN_008091d0 @ 008091d0 ////

void __thiscall FUN_008091d0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x71) == '\0') {
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


//// FUNCTION FUN_008092d0 @ 008092d0 ////

void __fastcall FUN_008092d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x71) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x71);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x71);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x71);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x71);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00809380 @ 00809380 ////

void __fastcall FUN_00809380(int *param_1)

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


//// FUNCTION FUN_00809460 @ 00809460 ////

void __thiscall FUN_00809460(void *this,int param_1)

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


//// FUNCTION FUN_008094c0 @ 008094c0 ////

void __thiscall FUN_008094c0(void *this,int *param_1)

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


//// FUNCTION FUN_00809550 @ 00809550 ////

void __fastcall FUN_00809550(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x71) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x71) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x71);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x71);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x71) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x71) == '\0');
    if (*(char *)((int)piVar4 + 0x71) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_008095b0 @ 008095b0 ////

int * __fastcall FUN_008095b0(int *param_1)

{
  FUN_00808880(param_1);
  return param_1;
}


//// FUNCTION FUN_00809690 @ 00809690 ////

void __cdecl FUN_00809690(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_00809740 @ 00809740 ////

void __cdecl FUN_00809740(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3 + 2;
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *param_1;
        param_3[1] = param_1[1];
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
      }
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00809790 @ 00809790 ////

void __cdecl FUN_00809790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_008097c0 @ 008097c0 ////

void __cdecl FUN_008097c0(float *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *unaff_ESI;
  float10 fVar3;
  undefined2 *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined2 local_40 [8];
  void *pvStack_30;
  undefined4 local_2c;
  uint uStack_28;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2fa0;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  ExceptionList = &pvStack_c;
  param_2[0xd5] = 0x47c35000;
  *(undefined1 *)(param_2 + 0xd6) = 1;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  uVar1 = FUN_00ace02d((short *)&DAT_00d5b180);
  FUN_004036d0(&local_4c,L"g1",uVar1);
  local_4 = 0;
  puVar2 = FUN_00831570(&local_2c,&local_4c,param_1);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(*param_2 + 0x54))(puVar2);
  if (10 < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_30);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  (**(code **)(*param_2 + 0x84))(0);
  fVar3 = (float10)(**(code **)(*param_2 + 0x10))();
  if ((float10)*param_1 < fVar3) {
    fVar3 = (float10)(**(code **)(*param_2 + 0x10))();
    *param_1 = (float)fVar3;
  }
  ExceptionList = pvStack_14;
  return;
}


//// FUNCTION FUN_008098c0 @ 008098c0 ////

void __fastcall FUN_008098c0(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float10 fVar5;
  ulonglong uVar6;
  float local_10;
  undefined4 local_c;
  float local_8;
  undefined1 local_4 [4];
  
  FUN_0043b510(&local_10);
  FUN_0043b510(&local_c);
  if (DAT_0104eb38 == 0) {
    uVar6 = FUN_0043b560();
    local_8 = (float)uVar6;
    pfVar3 = (float *)FUN_0043b520(local_4,(float)(int)local_8);
    local_10 = *pfVar3;
    pfVar3 = (float *)FUN_0043b520(local_4,1.0);
    puVar4 = (undefined4 *)FUN_0043b600(&local_10,&local_8,pfVar3);
    local_c = *puVar4;
  }
  else if (DAT_0104eb38 == 1) {
    pfVar3 = FUN_008081b0(local_4);
    local_10 = *pfVar3;
    pfVar3 = (float *)FUN_0043b520(local_4,10.1);
    puVar4 = (undefined4 *)FUN_0043b600(&local_10,&local_8,pfVar3);
    local_c = *puVar4;
  }
  else {
    if (DAT_0104a974 == 0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = *(float *)(DAT_0104a974 + 0x60);
    }
    FUN_0043b700(&local_10,fVar1 * 10.0 + 1900.0);
    local_c = DAT_00e4fa4c;
  }
  iVar2 = **(int **)(param_1 + 0x388);
  fVar5 = FUN_0043b710(&local_10);
  (**(code **)(iVar2 + 0x100))((float)fVar5);
  iVar2 = **(int **)(param_1 + 0x388);
  fVar5 = FUN_0043b710(&local_10);
  (**(code **)(iVar2 + 0x104))((float)fVar5);
  return;
}


//// FUNCTION FUN_008099f0 @ 008099f0 ////

void __thiscall FUN_008099f0(void *this,float param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  iVar2 = FUN_005b2cb0((int)param_1);
  iVar3 = FUN_005cc0d0(iVar2);
  if ((*(int *)(iVar3 + 4) != 0) && (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2 != 0)) {
    iVar3 = FUN_005cc0d0(iVar2);
    if (*(int *)(iVar3 + 4) == 0) {
      local_4 = 0;
    }
    else {
      local_4 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
    }
    local_c = *(int *)(iVar2 + 0x80);
    local_4 = local_4 + -1;
    fVar1 = (float)local_4;
    if (local_4 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    pfVar4 = (float *)FUN_0043b520(&local_10,fVar1 * 0.083333336);
    FUN_0043b620(&local_c,&param_1,pfVar4);
    local_8 = *(undefined4 *)(iVar2 + 0x80);
    iVar3 = **(int **)((int)this + 0x388);
    uVar6 = FUN_0043b560();
    local_c = (int)uVar6;
    pfVar4 = (float *)FUN_0043b520(&local_4,(float)local_c);
    fVar5 = FUN_0043b710(pfVar4);
    (**(code **)(iVar3 + 0x100))((float)fVar5);
    iVar3 = **(int **)((int)this + 0x388);
    uVar6 = FUN_0043b560();
    local_10 = (int)uVar6;
    pfVar4 = (float *)FUN_0043b520(&local_8,(float)local_10 + 1.1);
    fVar5 = FUN_0043b710(pfVar4);
    (**(code **)(iVar3 + 0x104))((float)fVar5);
    iVar3 = FUN_005cc0d0(iVar2);
    iVar2 = FUN_005cc0e0(iVar2);
    if (DAT_00e5bf28 != '\0') {
      pfVar4 = *(float **)(iVar3 + 4);
      local_c = DAT_00e5bf2c;
      fVar1 = 0.0;
      if (pfVar4 != *(float **)(iVar3 + 8)) {
        do {
          fVar8 = *pfVar4;
          fVar1 = fVar8 - fVar1;
          iVar10 = **(int **)((int)this + 900);
          fVar7 = fVar1;
          iVar9 = local_c;
          fVar5 = FUN_0043b710((float *)&stack0xffffffe0);
          (**(code **)(iVar10 + 0x108))((float)fVar5,fVar7,iVar9);
          if (fVar1 <= *(float *)((int)this + 0x4c4)) {
            fVar1 = *(float *)((int)this + 0x4c4);
          }
          *(float *)((int)this + 0x4c4) = fVar1;
          pfVar4 = pfVar4 + 1;
          fVar1 = fVar8;
        } while (pfVar4 != *(float **)(iVar3 + 8));
      }
    }
    if (DAT_00e5bf38 != '\0') {
      pfVar4 = *(float **)(iVar3 + 4);
      local_c = DAT_00e5bf3c;
      if (pfVar4 != *(float **)(iVar3 + 8)) {
        do {
          fVar1 = *pfVar4;
          iVar10 = **(int **)((int)this + 900);
          fVar8 = fVar1;
          iVar9 = local_c;
          fVar5 = FUN_0043b710((float *)&stack0xffffffdc);
          (**(code **)(iVar10 + 0x108))((float)fVar5,fVar8,iVar9);
          if (fVar1 <= *(float *)((int)this + 0x4c4)) {
            fVar1 = *(float *)((int)this + 0x4c4);
          }
          *(float *)((int)this + 0x4c4) = fVar1;
          pfVar4 = pfVar4 + 1;
        } while (pfVar4 != *(float **)(iVar3 + 8));
      }
    }
    if (DAT_00e5bf48 != '\0') {
      local_c = DAT_00e5bf4c;
      pfVar4 = *(float **)(iVar2 + 4);
      if (pfVar4 != *(float **)(iVar2 + 8)) {
        do {
          fVar1 = *pfVar4;
          iVar3 = **(int **)((int)this + 900);
          fVar8 = fVar1;
          iVar10 = local_c;
          fVar5 = FUN_0043b710((float *)&stack0xffffffe0);
          (**(code **)(iVar3 + 0x108))((float)fVar5,fVar8,iVar10);
          if (fVar1 <= *(float *)((int)this + 0x4c4)) {
            fVar1 = *(float *)((int)this + 0x4c4);
          }
          *(float *)((int)this + 0x4c4) = fVar1;
          pfVar4 = pfVar4 + 1;
        } while (pfVar4 != *(float **)(iVar2 + 8));
      }
    }
  }
  return;
}


//// FUNCTION FUN_00809d10 @ 00809d10 ////

void __fastcall FUN_00809d10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *unaff_ESI;
  float10 fVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce2fd1;
  pvStack_c = ExceptionList;
  iVar1 = **(int **)(param_1 + 0x388);
  ExceptionList = &pvStack_c;
  FUN_0043b710((float *)&stack0x00000004);
  (**(code **)(iVar1 + 0x120))();
  FUN_00813680(*(int *)(param_1 + 900));
  puVar3 = operator_new(0x344);
  piVar8 = (int *)0x0;
  puStack_8 = (undefined1 *)0x0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_007432f0(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  puVar3 = operator_new(0x50);
  puStack_8 = (undefined1 *)0x1;
  if (puVar3 != (undefined4 *)0x0) {
    piVar8 = FUN_005e4870(puVar3);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  (**(code **)(*piVar8 + 0xc))();
  (**(code **)(*piVar4 + 0xa0))();
  piVar8 = (int *)FUN_00813680(*(int *)(param_1 + 900));
  iVar1 = *piVar4;
  (**(code **)(*piVar8 + 0x14))();
  (**(code **)(iVar1 + 0x74))();
  iVar1 = *piVar4;
  iVar2 = *(int *)(param_1 + 900);
  (**(code **)(iVar1 + 0x10))();
  FUN_00813680(iVar2);
  (**(code **)(iVar1 + 0x5c))();
  iVar1 = *piVar4;
  fVar5 = (float)FUN_00813680(*(int *)(param_1 + 900));
  (**(code **)(iVar1 + 0x68))();
  piVar8 = (int *)FUN_00813680(*(int *)(param_1 + 900));
  (**(code **)(*piVar8 + 0xc))();
  pvVar6 = operator_new(0x360);
  if (pvVar6 == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_0069d820(pvVar6,unaff_ESI,0,0,0x3f800000,0x3f800000);
  }
  (**(code **)(*piVar8 + 0x74))();
  iVar1 = *piVar8;
  iVar2 = *(int *)(param_1 + 900);
  fVar9 = (float10)(**(code **)(iVar1 + 0x10))();
  pvVar6 = (void *)(float)((float10)fVar5 - fVar9 * (float10)0.5);
  FUN_00813680(iVar2);
  (**(code **)(iVar1 + 0x5c))(1);
  iVar1 = *piVar8;
  uVar10 = 0;
  uVar7 = FUN_00813680(*(int *)(param_1 + 900));
  (**(code **)(iVar1 + 100))(1,uVar7,uVar10);
  piVar4 = (int *)FUN_00813680(*(int *)(param_1 + 900));
  (**(code **)(*piVar4 + 0xc))(piVar8,1);
  (**(code **)(*piVar8 + 0x90))(fVar5);
  ExceptionList = pvVar6;
  return;
}


//// FUNCTION FUN_00809f50 @ 00809f50 ////

void __fastcall FUN_00809f50(int *param_1)

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


//// FUNCTION FUN_00809fa0 @ 00809fa0 ////

void __fastcall FUN_00809fa0(int *param_1)

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


//// FUNCTION FUN_0080a0b0 @ 0080a0b0 ////

void __fastcall FUN_0080a0b0(int *param_1)

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


//// FUNCTION FUN_0080a100 @ 0080a100 ////

void __fastcall FUN_0080a100(int *param_1)

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


//// FUNCTION FUN_0080a150 @ 0080a150 ////

void __fastcall FUN_0080a150(int *param_1)

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


//// FUNCTION FUN_0080a1f0 @ 0080a1f0 ////

void __fastcall FUN_0080a1f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5b19c;
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


//// FUNCTION FUN_0080a290 @ 0080a290 ////

void __fastcall FUN_0080a290(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5b1ac;
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


//// FUNCTION FUN_0080a350 @ 0080a350 ////

void __fastcall FUN_0080a350(int *param_1)

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


//// FUNCTION FUN_0080a380 @ 0080a380 ////

void __fastcall FUN_0080a380(int *param_1)

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


//// FUNCTION FUN_0080a460 @ 0080a460 ////

void FUN_0080a460(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)pvVar1 = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  return;
}


//// FUNCTION FUN_0080a480 @ 0080a480 ////

int * __fastcall FUN_0080a480(int *param_1)

{
  FUN_008092d0(param_1);
  return param_1;
}


//// FUNCTION FUN_0080a490 @ 0080a490 ////

int * __fastcall FUN_0080a490(int *param_1)

{
  FUN_00809380(param_1);
  return param_1;
}


//// FUNCTION FUN_0080a4f0 @ 0080a4f0 ////

int * __fastcall FUN_0080a4f0(int *param_1)

{
  FUN_00809550(param_1);
  return param_1;
}


//// FUNCTION FUN_0080a500 @ 0080a500 ////

int * __fastcall FUN_0080a500(int *param_1)

{
  FUN_00808880(param_1);
  return param_1;
}


//// FUNCTION FUN_0080a510 @ 0080a510 ////

void FUN_0080a510(void)

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


//// FUNCTION FUN_0080a560 @ 0080a560 ////

void FUN_0080a560(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x1c) = 1;
  *(undefined1 *)((int)puVar1 + 0x71) = 0;
  return;
}


//// FUNCTION FUN_0080a600 @ 0080a600 ////

void __fastcall FUN_0080a600(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_0080a620 @ 0080a620 ////

void __cdecl FUN_0080a620(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = param_1 + 2;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        *puVar1 = param_3[2];
        puVar1[1] = param_3[3];
      }
      param_1 = param_1 + 4;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0080a660 @ 0080a660 ////

void __cdecl FUN_0080a660(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0080a710 @ 0080a710 ////

float10 FUN_0080a710(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3003;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x3fc);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_00833290(puVar2);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_1YEAR");
  FUN_004036d0(&local_2c,L"GRAPHS_DURATION_1YEAR",uVar4);
  local_4 = 1;
  FUN_008097c0((float *)&local_2c,piVar3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_10YEARS");
  FUN_004036d0(&local_2c,L"GRAPHS_DURATION_10YEARS",uVar4);
  local_4 = 2;
  FUN_008097c0((float *)&local_2c,piVar3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_LIFETIME");
  FUN_004036d0(&local_2c,L"GRAPHS_DURATION_LIFETIME",uVar4);
  local_4 = 3;
  FUN_008097c0((float *)&local_2c,piVar3);
  local_4 = 0xffffffff;
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  piVar1 = piVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar3)(1);
  }
  ExceptionList = local_c;
  return (float10)0.0;
}


//// FUNCTION FUN_0080a8b0 @ 0080a8b0 ////

void __fastcall FUN_0080a8b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  DAT_00e5bf08 = 0;
  DAT_00e5bf18 = 0;
  if (DAT_0104eb50 != 0) {
    piVar1 = *(int **)(param_1 + 0x34c);
    piVar2 = *(int **)(param_1 + 0x348);
    piVar3 = piVar2;
    if (piVar2 != piVar1) {
      do {
        if (*piVar3 == DAT_0104eb50) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != piVar1);
      if (piVar3 != piVar1) {
        uVar4 = (int)piVar3 - (int)piVar2 >> 2;
        *(uint *)(param_1 + 0x358) = uVar4 >> 1;
        if ((uVar4 & 1) == 0) {
          DAT_00e5bf08 = 1;
          return;
        }
        DAT_00e5bf18 = 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0080a920 @ 0080a920 ////

undefined1 __fastcall FUN_0080a920(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 0x34c);
  piVar2 = *(int **)(param_1 + 0x348);
  uVar3 = 0;
  piVar5 = piVar2;
  if (piVar2 != piVar1) {
    do {
      if (*piVar5 == DAT_0104eb50) break;
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar1);
    if (piVar5 != piVar1) {
      iVar6 = (int)piVar5 - (int)piVar2 >> 2;
      iVar4 = *(int *)(param_1 + 0x358) * 2;
      if ((iVar6 == iVar4) || (iVar6 == iVar4 + 1)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


//// FUNCTION FUN_0080a9e0 @ 0080a9e0 ////

void __fastcall FUN_0080a9e0(undefined4 *param_1)

{
  param_1[0x12] = &PTR_LAB_00d5b18c;
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14] = param_1[0x13];
  }
  if (param_1[0x13] != 0) {
    *(undefined4 *)(param_1[0x13] + 4) = param_1[0x14];
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x14] = param_1[0x13];
  }
  if (param_1[0x13] != 0) {
    *(undefined4 *)(param_1[0x13] + 4) = param_1[0x14];
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xc] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xe] = param_1[0xd];
  }
  if (param_1[0xd] != 0) {
    *(undefined4 *)(param_1[0xd] + 4) = param_1[0xe];
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = &PTR_FUN_00d195f8;
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


//// FUNCTION FUN_0080ab10 @ 0080ab10 ////

void __fastcall FUN_0080ab10(int param_1)

{
  FUN_0080a9e0((undefined4 *)(param_1 + 4));
  return;
}


//// FUNCTION FUN_0080ab20 @ 0080ab20 ////

void __thiscall FUN_0080ab20(void *this,int param_1)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  bVar3 = (&DAT_00e5bee8)[param_1 * 0x10] == '\0';
  (&DAT_00e5bee8)[param_1 * 0x10] = bVar3;
  switch(param_1) {
  case 0:
    if (bVar3) {
      DAT_00e5bef8 = 0;
    }
    break;
  case 1:
    if (bVar3) {
      DAT_00e5bee8 = 0;
    }
    break;
  case 2:
    if (bVar3) {
      DAT_00e5bf18 = '\0';
    }
    break;
  case 3:
    if (bVar3) {
      DAT_00e5bf08 = '\0';
      goto LAB_0080ab9b;
    }
    break;
  case 9:
    if (bVar3) {
      FUN_008080f0();
      cVar2 = FUN_00808130();
      if (cVar2 != '\0') {
        FUN_00808150(1);
      }
    }
    else {
      FUN_008080b0();
      FUN_00808150(0);
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (bVar3) {
      DAT_00e5bf78 = 1;
    }
    else {
      cVar2 = FUN_00808130();
      if (cVar2 != '\0') {
        FUN_008080b0();
        DAT_00e5bf78 = 0;
      }
    }
  }
  if (DAT_00e5bf08 != '\0') {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x348) + *(int *)((int)this + 0x358) * 8);
    (*(code *)DAT_0104eb3c[1])();
    DAT_0104eb50 = uVar1;
    (*(code *)*DAT_0104eb3c)();
    return;
  }
LAB_0080ab9b:
  if (DAT_00e5bf18 != '\0') {
    uVar1 = *(undefined4 *)(*(int *)((int)this + 0x348) + 4 + *(int *)((int)this + 0x358) * 8);
    (*(code *)DAT_0104eb3c[1])();
    DAT_0104eb50 = uVar1;
    (*(code *)*DAT_0104eb3c)();
    return;
  }
  (*(code *)DAT_0104eb3c[1])();
  DAT_0104eb50 = 0;
  (*(code *)*DAT_0104eb3c)();
  return;
}


//// FUNCTION FUN_0080acd0 @ 0080acd0 ////

void __thiscall FUN_0080acd0(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_8;
  float fStack_4;
  
  if ((1 < *(uint *)((int)this + 0x4c0)) &&
     (piVar4 = (int *)**(int **)((int)this + 0x4bc), piVar4 != *(int **)((int)this + 0x4bc))) {
    do {
      puVar3 = *(undefined4 **)(param_1 + 4);
      local_8 = 0.0;
      if (puVar3 != *(undefined4 **)(param_1 + 8)) {
        do {
          fVar5 = (float10)(*(code *)*puVar3)();
          puVar3 = puVar3 + 1;
          local_8 = (float)(fVar5 + (float10)local_8);
        } while (puVar3 != *(undefined4 **)(param_1 + 8));
      }
      fVar2 = local_8;
      if (local_8 <= *(float *)((int)this + 0x4c4)) {
        fVar2 = *(float *)((int)this + 0x4c4);
      }
      *(float *)((int)this + 0x4c4) = fVar2;
      fStack_4 = (float)piVar4[2];
      iVar1 = **(int **)((int)this + 900);
      uVar6 = param_2;
      fVar5 = FUN_0043b710(&fStack_4);
      (**(code **)(iVar1 + 0x108))((float)fVar5,local_8,uVar6);
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x4bc));
  }
  return;
}


//// FUNCTION FUN_0080ada0 @ 0080ada0 ////

/* WARNING: Removing unreachable block (ram,0x0080ae1a) */

void __fastcall FUN_0080ada0(int param_1)

{
  char local_20 [14];
  undefined1 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3018;
  local_c = ExceptionList;
  local_20[0] = '\0';
  ExceptionList = &local_c;
  _strncpy(local_20,"ui/filmcan.dds",0xe);
  local_12 = 0;
  local_4 = 0;
  FUN_00809d10(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0080ae40 @ 0080ae40 ////

void __thiscall FUN_0080ae40(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_0080aeb0 @ 0080aeb0 ////

int * __fastcall FUN_0080aeb0(int *param_1)

{
  FUN_008092d0(param_1);
  return param_1;
}


//// FUNCTION FUN_0080aec0 @ 0080aec0 ////

int * __fastcall FUN_0080aec0(int *param_1)

{
  FUN_00809380(param_1);
  return param_1;
}


//// FUNCTION FUN_0080aed0 @ 0080aed0 ////

void __thiscall FUN_0080aed0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d18c2c;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 8) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x24) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 **)((int)this + 0x24) = (undefined4 *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x18) = &PTR_FUN_00d195f8;
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)((int)this + 0x2c) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x20) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 **)((int)this + 0x3c) = (undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x30) = &PTR_FUN_00d195f8;
  iVar2 = *(int *)(param_1 + 0x44);
  *(int *)((int)this + 0x44) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x38) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  piVar1 = (int *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x54) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x54) = (undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x48) = &PTR_LAB_00d5b18c;
  iVar2 = *(int *)(param_1 + 0x5c);
  *(int *)((int)this + 0x5c) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x50) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_0080afb0 @ 0080afb0 ////

void __fastcall FUN_0080afb0(int param_1)

{
  FUN_0044e1b0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0080afe0 @ 0080afe0 ////

int * __fastcall FUN_0080afe0(int *param_1)

{
  FUN_00809550(param_1);
  return param_1;
}


//// FUNCTION FUN_0080aff0 @ 0080aff0 ////

void __fastcall FUN_0080aff0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0080b030 @ 0080b030 ////

void __fastcall FUN_0080b030(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a560();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0080b0d0 @ 0080b0d0 ////

undefined4 * __thiscall
FUN_0080b0d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar2 = *param_4;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
    puVar3 = *(undefined4 **)((int)this + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  *(int *)((int)this + 0xc) = iVar2;
  *(int *)((int)this + 0x10) = param_4[1];
  *(undefined1 *)((int)this + 0x14) = param_5;
  *(undefined1 *)((int)this + 0x15) = 0;
  return this;
}


//// FUNCTION FUN_0080b1f0 @ 0080b1f0 ////

void * __thiscall FUN_0080b1f0(void *this,byte param_1)

{
  FUN_0080a600((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0080b210 @ 0080b210 ////

void __fastcall FUN_0080b210(int param_1)

{
  FUN_0080a9e0((undefined4 *)(param_1 + 0x10));
  return;
}


//// FUNCTION FUN_0080b220 @ 0080b220 ////

void __fastcall FUN_0080b220(int *param_1)

{
  float fVar1;
  float fVar2;
  ushort *puVar3;
  void **ppvVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  void *_Memory;
  void *unaff_EBX;
  int iVar12;
  float10 fVar13;
  ulonglong uVar14;
  wchar_t *pwStack_288;
  uint local_284;
  uint uStack_280;
  wchar_t awStack_27c [14];
  ushort *local_260;
  undefined4 local_25c;
  uint uStack_258;
  ushort auStack_254 [10];
  void *pvStack_240;
  char *pcStack_23c;
  uint uStack_238;
  undefined4 uStack_234;
  char acStack_230 [16];
  void *pvStack_220;
  char *pcStack_21c;
  uint uStack_218;
  undefined4 uStack_214;
  char acStack_210 [16];
  void *pvStack_200;
  char *pcStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  char acStack_1f0 [8];
  void *pvStack_1e8;
  uint uStack_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined4 auStack_1d4 [9];
  void *pvStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  void *pvStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  void *apvStack_174 [2];
  uint uStack_16c;
  void *pvStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  void *pvStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  wchar_t awStack_114 [64];
  wchar_t awStack_94 [54];
  void *pvStack_28;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce30b4;
  pvStack_c = ExceptionList;
  local_260 = *(ushort **)param_1[0xde];
  local_284 = 0;
  ExceptionList = &pvStack_c;
  ppvVar4 = &pvStack_c;
  if (local_260 != (ushort *)param_1[0xde]) {
    do {
      ExceptionList = ppvVar4;
      puVar3 = local_260;
      uVar10 = local_284 + param_1[0xd6] * 2;
      if (param_1[0xd2] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_1[0xd3] - param_1[0xd2] >> 2;
      }
      local_25c = CONCAT31(local_25c._1_3_,uVar10 < uVar6);
      (**(code **)(**(int **)(local_260 + 0x12) + 0x20))(local_25c);
      if ((char)local_25c != '\0') {
        iVar12 = uVar10 * 4;
        puVar7 = FUN_0045f620(*(void **)(param_1[0xd2] + iVar12),&uStack_1ac);
        uStack_4 = 0;
        (**(code **)(**(int **)(puVar3 + 0x1e) + 0x54))(puVar7);
        puStack_8 = (undefined1 *)0xffffffff;
        if (10 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_1b0);
        }
        (**(code **)(**(int **)(puVar3 + 0x1e) + 0x84))(0);
        puVar7 = (undefined4 *)FUN_005b27d0(*(void **)(param_1[0xd2] + iVar12),&fStack_1dc);
        pvStack_240 = (void *)*puVar7;
        FUN_00737130(*(int *)(puVar3 + 0x36));
        cVar5 = FUN_005b20d0(*(int *)(param_1[0xd2] + iVar12));
        if (cVar5 == '\0') {
          uVar8 = FUN_005b3c00(*(int *)(param_1[0xd2] + iVar12));
          if ((char)uVar8 != '\0') {
            pcStack_23c = acStack_230;
            acStack_230[0] = '\0';
            uStack_238 = 0;
            uStack_234 = 0x14;
            _strncpy(pcStack_23c,"GRAPHS_ARCHIVED",0xf);
            uStack_238 = 0xf;
            pcStack_23c[0xf] = '\0';
            pvStack_c = (void *)0x3;
            puVar7 = FUN_009b5030(&uStack_154,&pcStack_23c);
            pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,4);
            (**(code **)(**(int **)(puVar3 + 0x2a) + 0x54))(puVar7);
            _Memory = pvStack_240;
            uVar10 = uStack_238;
            if (10 < uStack_150) {
                    /* WARNING: Subroutine does not return */
              _free(pvStack_158);
            }
            goto joined_r0x0080b59a;
          }
          iVar9 = FUN_005b2bc0(*(int *)(param_1[0xd2] + iVar12));
          if (iVar9 != 0) {
            iVar9 = FUN_005b2bc0(*(int *)(param_1[0xd2] + iVar12));
            uVar8 = FUN_005ccce0(iVar9);
            if ((char)uVar8 != '\0') {
              pcStack_21c = acStack_210;
              acStack_210[0] = '\0';
              uStack_218 = 0;
              uStack_214 = 0x20;
              pcStack_21c = _malloc(0x20);
              _strncpy(pcStack_21c,"GRAPHS_READYTOARCHIVE",0x15);
              uStack_218 = 0x15;
              pcStack_21c[0x15] = '\0';
              pvStack_c = (void *)0x5;
              puVar7 = FUN_009b5030(&uStack_194,&pcStack_21c);
              pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,6);
              (**(code **)(**(int **)(puVar3 + 0x2a) + 0x54))(puVar7);
              _Memory = pvStack_220;
              uVar10 = uStack_218;
              if (10 < uStack_190) {
                    /* WARNING: Subroutine does not return */
                _free(pvStack_198);
              }
              goto joined_r0x0080b59a;
            }
          }
          pwStack_288 = awStack_27c;
          awStack_27c[0] = L'\0';
          local_284 = 0;
          uStack_280 = 10;
          local_260 = auStack_254;
          pvStack_c = (void *)0x7;
          auStack_254[0] = auStack_254[0] & 0xff00;
          local_25c = 0;
          uStack_258 = 0x14;
          _strncpy((char *)local_260,"GRAPHS_RELEASED",0xf);
          local_25c = 0xf;
          *(char *)((int)local_260 + 0xf) = '\0';
          pvStack_c._0_1_ = 8;
          puVar7 = FUN_009b5030(apvStack_174,&local_260);
          sVar11 = FUN_00ace02d(L"<phrasebook>");
          FUN_0040cae0(&pwStack_288,L"<phrasebook>",sVar11);
          FUN_0040cae0(&pwStack_288,(wchar_t *)*puVar7,puVar7[1]);
          sVar11 = FUN_00ace02d(L"<phrase key=YEAR>");
          FUN_0040cae0(&pwStack_288,L"<phrase key=YEAR>",sVar11);
          if (10 < uStack_16c) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_174[0]);
          }
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
          if (0x14 < uStack_258) {
                    /* WARNING: Subroutine does not return */
            _free(local_260);
          }
          FUN_005b0ea0(*(void **)(param_1[0xd2] + iVar12),&uStack_1d8);
          uVar14 = FUN_0043b560();
          sVar11 = _swprintf(awStack_114,0xd18f7c,(wchar_t *)uVar14);
          FUN_0040cae0(&pwStack_288,awStack_114,sVar11);
          sVar11 = FUN_00ace02d(L"</phrase></phrasebook>");
          FUN_0040cae0(&pwStack_288,L"</phrase></phrasebook>",sVar11);
          (**(code **)(**(int **)(puVar3 + 0x2a) + 0x54))(&pwStack_288);
          _Memory = unaff_EBX;
          if (10 < local_284) goto LAB_0080b72a;
        }
        else {
          pcStack_1fc = acStack_1f0;
          acStack_1f0[0] = '\0';
          uStack_1f8 = 0;
          uStack_1f4 = 0x14;
          _strncpy(pcStack_1fc,"GRAPHS_UNRELEASED",0x11);
          uStack_1f8 = 0x11;
          pcStack_1fc[0x11] = '\0';
          pvStack_c = (void *)0x1;
          puVar7 = FUN_009b5030(&uStack_134,&pcStack_1fc);
          pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,2);
          (**(code **)(**(int **)(puVar3 + 0x2a) + 0x54))(puVar7);
          _Memory = pvStack_200;
          uVar10 = uStack_1f8;
          if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
            _free(pvStack_138);
          }
joined_r0x0080b59a:
          if (0x14 < uVar10) {
LAB_0080b72a:
            uStack_10 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
        }
        uStack_10 = 0xffffffff;
        (**(code **)(**(int **)(puVar3 + 0x2a) + 0x84))(0);
      }
      local_284 = local_284 + 1;
      FUN_008092d0((int *)&local_260);
      ppvVar4 = ExceptionList;
    } while (local_260 != (ushort *)param_1[0xde]);
  }
  (**(code **)(*(int *)param_1[0x12d] + 0xc0))
            (CONCAT31((int3)((uint)param_1[0xd6] >> 8),0 < param_1[0xd6]));
  (**(code **)(*(int *)param_1[0x127] + 0xc0))
            (CONCAT31((int3)((uint)(param_1[0xd5] + -1) >> 8),param_1[0xd6] < param_1[0xd5] + -1));
  do {
    cVar5 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar5 != '\0');
  pwStack_288 = awStack_27c;
  awStack_27c[0] = L'\0';
  local_284 = 0;
  uStack_280 = 10;
  uVar10 = FUN_00ace02d((short *)&DAT_00d5b180);
  if (uStack_280 <= uVar10) {
    if (10 < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_288);
    }
    uVar6 = uVar10 + 0x20 >> 5;
    uStack_280 = uVar6 << 5;
    pwStack_288 = _malloc(uVar6 * 0x40);
  }
  _wcsncpy(pwStack_288,L"g1",uVar10);
  pwStack_288[uVar10] = L'\0';
  local_260 = auStack_254;
  auStack_254[0] = 0;
  local_25c = 0;
  uStack_258 = 10;
  pvStack_c._0_1_ = 10;
  pvStack_c._1_3_ = 0;
  local_284 = uVar10;
  sVar11 = _swprintf(awStack_114,0xd18f7c,(wchar_t *)(param_1[0xd6] + 1));
  FUN_0040cae0(&local_260,awStack_114,sVar11);
  sVar11 = FUN_00ace02d((short *)&DAT_00d564e8);
  FUN_0040cae0(&local_260,L" / ",sVar11);
  sVar11 = _swprintf(awStack_94,0xd18f7c,(wchar_t *)param_1[0xd5]);
  FUN_0040cae0(&local_260,awStack_94,sVar11);
  FUN_008319b0(auStack_1d4,&pwStack_288,&local_260);
  if (10 < uStack_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_260);
  }
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,0xc);
  if (10 < uStack_280) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_288);
  }
  (**(code **)(*(int *)param_1[0x10f] + 0x54))(auStack_1d4);
  (**(code **)(*(int *)param_1[0x10f] + 0x84))(0);
  iVar12 = param_1[0x12d];
  fVar1 = *(float *)(param_1[0x127] + 0xc0);
  fVar2 = *(float *)(iVar12 + 0x108);
  fVar13 = (float10)(**(code **)(*(int *)param_1[0x10f] + 0x10))();
  (**(code **)(*(int *)param_1[0x10f] + 0x5c))
            (1,param_1,
             (float)(((float10)(fVar1 - fVar2) - fVar13) * (float10)0.5 +
                    (float10)*(float *)(iVar12 + 0x108)));
  if (10 < uStack_1e0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_1e8);
  }
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_0080b9c0 @ 0080b9c0 ////

void __thiscall FUN_0080b9c0(void *this,float *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_4;
  
  iVar3 = param_3;
  fVar1 = (float)param_2[0x42];
  puVar2 = *(undefined4 **)((int)this + 0x360);
  param_2 = (undefined4 *)*puVar2;
  local_4 = 0.0;
  do {
    if (param_2 == puVar2) {
LAB_0080ba2b:
      *param_1 = fVar1 - 5.0;
      param_1[1] = local_4;
      return;
    }
    if (param_2[4] == iVar3) {
      iVar3 = param_2[3];
      if (iVar3 != 0) {
        local_4 = (*(float *)(iVar3 + 0xe4) + *(float *)(iVar3 + 0x9c)) * 0.5;
      }
      goto LAB_0080ba2b;
    }
    FUN_00809380((int *)&param_2);
  } while( true );
}


//// FUNCTION FUN_0080ba50 @ 0080ba50 ////

void __fastcall FUN_0080ba50(int param_1)

{
  int *piVar1;
  int iStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)FUN_00813680(*(int *)(param_1 + 900));
  (**(code **)(*piVar1 + 0xa8))();
  PlayerMovies_Begin(&iStack_8);
  piVar1 = (int *)PlayerMovies_End(&uStack_4);
  if (iStack_8 != *piVar1) {
    do {
      FUN_0080ada0(param_1);
      iStack_8 = *(int *)(iStack_8 + 4);
      piVar1 = (int *)PlayerMovies_End(&uStack_4);
    } while (iStack_8 != *piVar1);
  }
  return;
}


//// FUNCTION FUN_0080bad0 @ 0080bad0 ////

void __thiscall FUN_0080bad0(void *this,int param_1)

{
  bool bVar1;
  size_t sVar2;
  void *pvVar3;
  float *pfVar4;
  float *this_00;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_174 [4];
  undefined2 *local_170;
  undefined4 local_16c;
  uint local_168;
  undefined2 local_164 [10];
  char *local_150;
  undefined4 local_14c;
  uint local_148;
  char local_144 [20];
  float local_130;
  undefined **local_12c;
  int local_128;
  int *local_124;
  undefined4 local_118;
  undefined1 local_104 [4];
  undefined **local_100;
  int local_fc;
  int *local_f8;
  undefined4 local_ec;
  undefined1 local_d8 [4];
  undefined **local_d4;
  int local_d0;
  int *local_cc;
  undefined4 local_c0;
  void *local_ac [2];
  uint local_a4;
  wchar_t local_8c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce30f7;
  local_c = ExceptionList;
  local_170 = local_164;
  local_164[0] = 0;
  local_16c = 0;
  local_168 = 10;
  local_4 = 0;
  ExceptionList = &local_c;
  sVar2 = FUN_00ace02d(L"<b><phrasebook><translate>GRAPHS_AWARDS</translate><phrase key=DATE>");
  FUN_0040cae0(&local_170,L"<b><phrasebook><translate>GRAPHS_AWARDS</translate><phrase key=DATE>",
               sVar2);
  sVar2 = _swprintf(local_8c,0xd18f7c,(wchar_t *)param_1);
  FUN_0040cae0(&local_170,local_8c,sVar2);
  sVar2 = FUN_00ace02d(L"</phrase></phrasebook></b><br>");
  FUN_0040cae0(&local_170,L"</phrase></phrasebook></b><br>",sVar2);
  pvVar3 = FUN_00857d80(local_104);
  local_4._0_1_ = 1;
  pfVar4 = (float *)FUN_0043b520(local_174,(float)param_1);
  this_00 = FUN_00857b90(pvVar3,0.0);
  pfVar4 = FUN_00857b60(this_00,pfVar4);
  FUN_00500630(&local_130,pfVar4);
  local_4._0_1_ = 3;
  local_100 = &PTR_FUN_00d1aed0;
  if (local_f8 != (int *)0x0) {
    *local_f8 = local_fc;
  }
  if (local_fc != 0) {
    *(int **)(local_fc + 4) = local_f8;
  }
  local_ec = 0;
  local_fc = 0;
  local_f8 = (int *)0x0;
  do {
    pvVar3 = FUN_00857bd0(local_d8);
    local_4._0_1_ = 4;
    bVar1 = FUN_00856dd0(&local_130,(int)pvVar3);
    local_4._0_1_ = 3;
    local_d4 = &PTR_FUN_00d1aed0;
    if (local_cc != (int *)0x0) {
      *local_cc = local_d0;
    }
    if (local_d0 != 0) {
      *(int **)(local_d0 + 4) = local_cc;
    }
    local_c0 = 0;
    local_d0 = 0;
    local_cc = (int *)0x0;
    if (!bVar1) {
      local_12c = &PTR_FUN_00d1aed0;
      if (local_124 != (int *)0x0) {
        *local_124 = local_128;
      }
      if (local_128 != 0) {
        *(int **)(local_128 + 4) = local_124;
      }
      local_150 = local_144;
      local_118 = 0;
      local_128 = 0;
      local_124 = (int *)0x0;
      local_144[0] = '\0';
      local_14c = 0;
      local_148 = 0x20;
      local_150 = _malloc(0x20);
      _strncpy(local_150,"ui/timeline_award2.dds",0x16);
      local_14c = 0x16;
      local_150[0x16] = '\0';
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_0043b520(local_174,(float)param_1);
      FUN_00809d10((int)this);
      if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      if (10 < local_168) {
                    /* WARNING: Subroutine does not return */
        _free(local_170);
      }
      ExceptionList = local_c;
      return;
    }
    iVar5 = FUN_00856da0((int)&local_130);
    iVar5 = *(int *)(iVar5 + 0xb8);
    iVar6 = GetPlayerStudio();
    if (iVar5 == iVar6) {
      iVar5 = FUN_00856da0((int)&local_130);
      puVar7 = FUN_00861de0(&local_150,*(int *)(iVar5 + 0x60));
      FUN_0040cae0(&local_170,(wchar_t *)*puVar7,puVar7[1]);
      sVar2 = FUN_00ace02d((short *)&DAT_00d42108);
      FUN_0040cae0(&local_170,L" - ",sVar2);
      if (10 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      FUN_00856da0((int)&local_130);
      iVar5 = Award_GetBonusIndex();
      puVar7 = FUN_0085a000(local_ac,iVar5);
      FUN_0040cae0(&local_170,(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_ac[0]);
      }
      sVar2 = FUN_00ace02d(L"<br>");
      FUN_0040cae0(&local_170,L"<br>",sVar2);
    }
    FUN_00857260(&local_130);
  } while( true );
}


//// FUNCTION FUN_0080be70 @ 0080be70 ////

int __fastcall FUN_0080be70(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0080a460();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0080be90 @ 0080be90 ////

void __fastcall FUN_0080be90(int param_1)

{
  FUN_0044e1b0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0080bed0 @ 0080bed0 ////

int __fastcall FUN_0080bed0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0080bf00 @ 0080bf00 ////

int __fastcall FUN_0080bf00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a560();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0080bf30 @ 0080bf30 ////

undefined4 * FUN_0080bf30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0080a620(param_1,param_2,param_3);
  return param_1 + param_2 * 4;
}


//// FUNCTION FUN_0080bf60 @ 0080bf60 ////

undefined4 * FUN_0080bf60(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0080a660(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_0080bfb0 @ 0080bfb0 ////

void * FUN_0080bfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                   undefined1 param_5)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce3121;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x18);
  local_8 = 1;
  if (this != (void *)0x0) {
    FUN_0080b0d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_0080c090 @ 0080c090 ////

void * __thiscall FUN_0080c090(void *this,byte param_1)

{
  FUN_0080b210((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0080c0b0 @ 0080c0b0 ////

void __fastcall FUN_0080c0b0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SI;
  float10 fVar4;
  
  uVar1 = FUN_0085bb10();
  if ((char)uVar1 != '\0') {
    fVar4 = (float10)(**(code **)(**(int **)((int)param_1 + 0x388) + 0x108))();
    iVar2 = FUN_0085baf0();
    fVar4 = FUN_00acf400((double)((float)fVar4 / (float)iVar2),unaff_SI);
    iVar2 = FUN_0085baf0();
    for (iVar2 = iVar2 * (int)ROUND((float)fVar4);
        fVar4 = (float10)(**(code **)(**(int **)((int)param_1 + 0x388) + 0x10c))(),
        (float10)iVar2 < fVar4 + (float10)0.1; iVar2 = iVar2 + iVar3) {
      iVar3 = FUN_0085bb00();
      if (iVar3 <= iVar2) {
        FUN_0080bad0(param_1,iVar2);
      }
      iVar3 = FUN_0085baf0();
    }
  }
  return;
}


//// FUNCTION FUN_0080c160 @ 0080c160 ////

void __fastcall FUN_0080c160(int param_1)

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


//// FUNCTION FUN_0080c190 @ 0080c190 ////

void __fastcall FUN_0080c190(int param_1)

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


//// FUNCTION FUN_0080c1d0 @ 0080c1d0 ////

undefined4 *
FUN_0080c1d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_0080aed0(puVar1 + 4,(int)(param_4 + 1));
    *(undefined1 *)(puVar1 + 0x1c) = param_5;
    *(undefined1 *)((int)puVar1 + 0x71) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_0080c230 @ 0080c230 ////

void __fastcall FUN_0080c230(int param_1)

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


//// FUNCTION FUN_0080c260 @ 0080c260 ////

void __fastcall FUN_0080c260(int param_1)

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


//// FUNCTION FUN_0080c290 @ 0080c290 ////

void __fastcall FUN_0080c290(int param_1)

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


//// FUNCTION FUN_0080c2c0 @ 0080c2c0 ////

void FUN_0080c2c0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0080c2c0(*(void **)((int)param_1 + 8));
    FUN_0080a600((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0080c310 @ 0080c310 ////

void __fastcall FUN_0080c310(int param_1)

{
  if (*(void **)(param_1 + 0x348) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x348));
  }
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  return;
}


//// FUNCTION FUN_0080c350 @ 0080c350 ////

void __fastcall FUN_0080c350(int param_1)

{
  FUN_0080c2c0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0080c380 @ 0080c380 ////

void FUN_0080c380(void *param_1)

{
  if (*(char *)((int)param_1 + 0x71) == '\0') {
    FUN_0080c380(*(void **)((int)param_1 + 8));
    FUN_0080b210((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0080c3c0 @ 0080c3c0 ////

void __thiscall
FUN_0080c3c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ce3138;
  local_c = ExceptionList;
  if (0x28f5c26 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0080c1d0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x70);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x70) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x1c] == '\0') {
LAB_0080c4bb:
        *(undefined1 *)(*piVar4 + 0x70) = 1;
        *(undefined1 *)(piVar5 + 0x1c) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x70) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00809170(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x70) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x70) = 0;
        FUN_008091d0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x1c] == '\0') goto LAB_0080c4bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_008091d0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x70) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x70) = 0;
      FUN_00809170(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x70);
  } while( true );
}


//// FUNCTION FUN_0080c570 @ 0080c570 ////

void __thiscall
FUN_0080c570(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

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
  puStack_8 = &LAB_00ce3158;
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
  piVar3 = FUN_0080bfb0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0080c66b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00809460(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_008094c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0080c66b;
      if (piVar6 == (int *)*piVar2) {
        FUN_008094c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_00809460(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0080c720 @ 0080c720 ////

void FUN_0080c720(void)

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
  puStack_8 = &LAB_00ce3178;
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


//// FUNCTION FUN_0080c790 @ 0080c790 ////

void FUN_0080c790(void)

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
  puStack_8 = &LAB_00ce3198;
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


//// FUNCTION FUN_0080c800 @ 0080c800 ////

void __thiscall FUN_0080c800(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
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
  puStack_8 = &LAB_00ce31b8;
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
  FUN_00809380((int *)&param_2);
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(_Memory[2] + 0x15) == '\0') && (piVar7 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)_Memory[1];
        if ((int *)*piVar6 == _Memory) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar1 = param_2[5];
      *(char *)(param_2 + 5) = (char)_Memory[5];
      *(char *)(_Memory + 5) = (char)iVar1;
      goto LAB_0080c96f;
    }
  }
  else {
    piVar7 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == _Memory) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == _Memory) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar3 = (int *)FUN_00808720(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar4 = FUN_00808830((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_0080c96f:
  if ((char)_Memory[5] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[5] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_00809460(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_008094c0(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar6[5];
              *(undefined1 *)(piVar6 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_00809460(this,(int)piVar6);
              break;
            }
LAB_0080ca38:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar6 + 5) = 0;
            FUN_008094c0(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_0080ca38;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_00809460(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 5) = (char)piVar6[5];
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_008094c0(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  puVar2 = (undefined4 *)_Memory[3];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  _Memory[3] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0080cae0 @ 0080cae0 ////

void __thiscall FUN_0080cae0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ce31d8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x71) != '\0') {
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
  FUN_008092d0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x71) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x71) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x71) == '\0') {
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
      iVar1 = param_2[0x1c];
      *(char *)(param_2 + 0x1c) = (char)_Memory[0x1c];
      *(char *)(_Memory + 0x1c) = (char)iVar1;
      goto LAB_0080cc51;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x71) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x71) == '\0') {
      piVar2 = (int *)FUN_00808750(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x71) == '\0') {
      uVar3 = FUN_00808860((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0080cc51:
  if ((char)_Memory[0x1c] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x1c] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x1c] == '\0') {
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *(undefined1 *)(piVar5 + 0x1c) = 0;
            FUN_00809170(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x71) == '\0') {
            if ((*(char *)(*piVar4 + 0x70) != '\x01') || (*(char *)(piVar4[2] + 0x70) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x70) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x70) = 1;
                *(undefined1 *)(piVar4 + 0x1c) = 0;
                FUN_008091d0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x1c) = (char)piVar5[0x1c];
              *(undefined1 *)(piVar5 + 0x1c) = 1;
              *(undefined1 *)(piVar4[2] + 0x70) = 1;
              FUN_00809170(this,(int)piVar5);
              break;
            }
LAB_0080cd14:
            *(undefined1 *)(piVar4 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar4[0x1c] == '\0') {
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *(undefined1 *)(piVar5 + 0x1c) = 0;
            FUN_008091d0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x71) == '\0') {
            if ((*(char *)(piVar4[2] + 0x70) == '\x01') && (*(char *)(*piVar4 + 0x70) == '\x01'))
            goto LAB_0080cd14;
            if (*(char *)(*piVar4 + 0x70) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x70) = 1;
              *(undefined1 *)(piVar4 + 0x1c) = 0;
              FUN_00809170(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x1c) = (char)piVar5[0x1c];
            *(undefined1 *)(piVar5 + 0x1c) = 1;
            *(undefined1 *)(*piVar4 + 0x70) = 1;
            FUN_008091d0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x1c) = 1;
  }
  FUN_0080a9e0(_Memory + 4);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0080cdb0 @ 0080cdb0 ////

void __thiscall FUN_0080cdb0(void *this,undefined4 *param_1,int *param_2)

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
  if (*(char *)(piVar5[1] + 0x71) == '\0') {
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
    } while (*(char *)((int)piVar3 + 0x71) == '\0');
  }
  param_2 = piVar5;
  if (local_4) {
    if (piVar5 == (int *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0080c3c0(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00809550((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0080c3c0(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0080ce70 @ 0080ce70 ////

void __fastcall FUN_0080ce70(int param_1)

{
  FUN_0080c380(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0080cf40 @ 0080cf40 ////

void __thiscall FUN_0080cf40(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_0080c570(this,&param_2,'\x01',puVar5,(int *)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00808880((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0080c570(this,&param_2,local_4,puVar5,(int *)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0080d000 @ 0080d000 ////

void __thiscall FUN_0080d000(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0080c2c0((void *)piVar6[1]);
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
    FUN_0080c800(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0080d0c0 @ 0080d0c0 ////

void __thiscall FUN_0080d0c0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0080c380((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x71) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x71) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x71);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x71);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x71);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x71);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0080cae0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0080d180 @ 0080d180 ////

void __thiscall FUN_0080d180(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce31f0;
  local_10 = ExceptionList;
  local_20 = param_3[1];
  local_24 = *param_3;
  local_1c = param_3[2];
  iVar3 = *(int *)((int)this + 4);
  local_18 = param_3[3];
  local_14 = &stack0xffffffd0;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 0xc) - iVar3 >> 4;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffd0;
    if (0xfffffffU - iVar7 < param_2) {
      ExceptionList = &local_10;
      uVar2 = FUN_0080c720();
      iVar3 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar7 + param_2) {
      if (0xfffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar7 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar2 * 0x10);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00809740(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_0080a620(puVar5,param_2,&local_24);
      FUN_00809740(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 4);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)_Memory >> 4;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar2 * 4;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 4;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 4) < param_2) {
      FUN_00809740(param_1,puVar4,param_1 + param_2 * 4);
      local_8 = 2;
      FUN_0080bf30(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 4),&local_24);
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x10;
      *(int *)((int)this + 8) = iVar3;
      FUN_00808960(param_1,(undefined4 *)(iVar3 + param_2 * -0x10),&local_24);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00809740(puVar4 + param_2 * -4,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00808b00(param_1,puVar4 + param_2 * -4,puVar4);
    FUN_00808960(param_1,param_1 + param_2 * 4,&local_24);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0080d3f0 @ 0080d3f0 ////

void __thiscall FUN_0080d3f0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce3200;
  local_10 = ExceptionList;
  iVar6 = *(int *)((int)this + 4);
  param_3 = (undefined4 *)*param_3;
  if (iVar6 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - iVar6 >> 2;
  }
  uVar7 = CONCAT44(iVar6,iVar1);
  if (param_2 != 0) {
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar6 < param_2) {
      ExceptionList = &local_10;
      uVar7 = FUN_0080c790();
    }
    iVar6 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar6 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
    }
    if (uVar2 < iVar1 + param_2) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar6 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 8) - iVar6 >> 2;
      }
      if (uVar2 < iVar1 + param_2) {
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)((int)this + 8) - iVar6 >> 2;
        }
        uVar2 = iVar6 + param_2;
      }
      puVar3 = operator_new(uVar2 * 4);
      local_8 = 0;
      puVar4 = (undefined4 *)FUN_00809790(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_0080a660(puVar4,param_2,&param_3);
      FUN_00809790(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar2;
      *(undefined4 **)((int)this + 8) = puVar3 + param_2 + iVar6;
      *(undefined4 **)((int)this + 4) = puVar3;
      ExceptionList = local_10;
      return;
    }
    puVar3 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar3 - (int)param_1 >> 2) < param_2) {
      FUN_00809790(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_0080bf60(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_008089c0(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_00809790(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_00809690((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_008089c0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0080d650 @ 0080d650 ////

undefined4 * __thiscall FUN_0080d650(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  puVar3 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0080c570(this,param_1,'\x01',*(undefined4 **)((int)this + 4),(int *)param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0080c570(this,param_1,'\x01',param_2,(int *)param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0080c570(this,param_1,'\0',(undefined4 *)puVar1[2],(int *)param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    if (uVar2 < param_2[3]) {
      param_3 = param_2;
      FUN_00808880((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_0080c570(this,param_1,'\0',param_3,(int *)puVar3);
          return param_1;
        }
        FUN_0080c570(this,param_1,'\x01',param_2,(int *)puVar3);
        return param_1;
      }
    }
    if (param_2[3] < uVar2) {
      param_3 = param_2;
      FUN_00809380((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_0080c570(this,param_1,'\0',param_2,(int *)puVar3);
          return param_1;
        }
        FUN_0080c570(this,param_1,'\x01',param_3,(int *)puVar3);
        return param_1;
      }
    }
  }
  puVar4 = (undefined4 *)FUN_0080cf40(this,local_8,puVar3);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0080d8c0 @ 0080d8c0 ////

void __cdecl FUN_0080d8c0(float *param_1,float *param_2,undefined4 *param_3,float param_4)

{
  undefined **local_5c [2];
  void *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3220;
  local_c = ExceptionList;
  local_54 = (void *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0xffffffff;
  local_5c[0] = &PTR_FUN_00d45958;
  local_34 = 0;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_00804c90();
  FUN_00804c70(local_5c,param_4);
  local_38 = *param_3;
  FUN_00805de0(local_5c,param_1);
  FUN_00805de0(local_5c,param_2);
  FUN_00806780(local_5c);
  (*(code *)*local_5c[0])();
  if (local_44 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_44 = (void *)0x0;
  local_40 = 0;
  local_3c = 0;
  if (local_54 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0080da40 @ 0080da40 ////

undefined4 * __fastcall FUN_0080da40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3238;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d5b384;
  param_1[0x14] = &PTR_FUN_00d5b368;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0080daa0 @ 0080daa0 ////

undefined4 * __thiscall FUN_0080daa0(void *this,byte param_1)

{
  FUN_0080dac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0080dac0 @ 0080dac0 ////

void __fastcall FUN_0080dac0(undefined4 *param_1)

{
  if ((void *)param_1[0xd2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xd2]);
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_00742900(param_1);
  return;
}


//// FUNCTION FUN_0080db00 @ 0080db00 ////

void __fastcall FUN_0080db00(int param_1)

{
  void *this;
  float *pfVar1;
  float *pfVar2;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  float local_20 [3];
  float local_14;
  float local_10;
  float local_c;
  
  pfVar2 = *(float **)(param_1 + 0x348);
  if (pfVar2 != *(float **)(param_1 + 0x34c)) {
    local_21 = 0xff;
    local_22 = 0x70;
    local_23 = 0x8c;
    local_24 = 0x9a;
    pfVar1 = pfVar2 + 2;
    do {
      local_c = pfVar2[1];
      local_10 = *pfVar2;
      this = *(void **)(param_1 + 0x2d4);
      local_20[2] = *pfVar1;
      local_14 = pfVar1[1];
      local_20[0] = 10.0;
      local_20[1] = 0.0;
      FUN_00747290(this,&local_10);
      FUN_00747290(this,local_20 + 2);
      FUN_00747290(this,local_20);
      FUN_0080d8c0(&local_10,local_20 + 2,(undefined4 *)&local_24,local_20[0]);
      pfVar2 = pfVar2 + 4;
      pfVar1 = pfVar1 + 4;
    } while (pfVar2 != *(float **)(param_1 + 0x34c));
  }
  FUN_00740280(param_1);
  return;
}


//// FUNCTION FUN_0080dbd0 @ 0080dbd0 ////

uint * __thiscall FUN_0080dbd0(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3258;
  local_c = ExceptionList;
  puVar6 = *(uint **)((int)this + 4);
  if (*(char *)((int)puVar6[1] + 0x15) == '\0') {
    puVar3 = (uint *)puVar6[1];
    do {
      if (puVar3[3] < *param_1) {
        puVar4 = (uint *)puVar3[2];
      }
      else {
        puVar4 = (uint *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x15) == '\0');
  }
  if ((puVar6 != *(uint **)((int)this + 4)) && (puVar6[3] <= *param_1)) {
    return puVar6 + 4;
  }
  puVar1 = (undefined4 *)*param_1;
  ExceptionList = &local_c;
  if (puVar1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1[0x12] = puVar1[0x12] + 1;
  }
  local_10 = 0;
  local_4 = 0;
  local_14 = puVar1;
  piVar5 = FUN_0080d650(this,&param_1,puVar6,(uint *)&local_14);
  iVar2 = *piVar5;
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    piVar5 = puVar1 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  ExceptionList = local_c;
  return (uint *)(iVar2 + 0x10);
}


//// FUNCTION FUN_0080dd00 @ 0080dd00 ////

void __thiscall FUN_0080dd00(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 4) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 4))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0080a620(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 4;
    return;
  }
  FUN_0080d180(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0080dd70 @ 0080dd70 ////

void __thiscall FUN_0080dd70(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0080a660(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0080d3f0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0080dde0 @ 0080dde0 ////

void __thiscall FUN_0080dde0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *param_1;
  local_c = param_1[1];
  local_8 = *param_2;
  local_4 = param_2[1];
  FUN_0080dd00((void *)((int)this + 0x344),&local_10);
  return;
}


//// FUNCTION FUN_0080de20 @ 0080de20 ////

void __fastcall FUN_0080de20(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0080d000(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0080de50 @ 0080de50 ////

void __fastcall FUN_0080de50(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0080d0c0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0080de80 @ 0080de80 ////

void __fastcall FUN_0080de80(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce32f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5b49c;
  param_1[0x14] = &PTR_FUN_00d5b484;
  local_4 = 9;
  FUN_0044e1b0((int)(param_1 + 0x12e));
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x12f]);
}


//// FUNCTION FUN_0080e5b0 @ 0080e5b0 ////

void __fastcall FUN_0080e5b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4;
  
  if (DAT_0104d688 != &DAT_0104d694) {
    puVar3 = DAT_0104d688;
    do {
      iVar2 = *(int *)(param_1 + 0x348);
      local_4 = puVar3[2];
      if ((iVar2 == 0) ||
         ((uint)(*(int *)(param_1 + 0x350) - iVar2 >> 2) <=
          (uint)(*(int *)(param_1 + 0x34c) - iVar2 >> 2))) {
        FUN_00580bf0((void *)(param_1 + 0x344),*(undefined4 **)(param_1 + 0x34c),1,&local_4);
      }
      else {
        puVar1 = *(undefined4 **)(param_1 + 0x34c);
        *puVar1 = local_4;
        *(undefined4 **)(param_1 + 0x34c) = puVar1 + 1;
      }
      puVar3 = (undefined4 *)puVar3[1];
    } while (puVar3 != &DAT_0104d694);
  }
  if (*(int *)(param_1 + 0x348) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34c) - *(int *)(param_1 + 0x348) >> 2;
  }
  *(uint *)(param_1 + 0x354) = iVar2 + 1U >> 1;
  *(undefined4 *)(param_1 + 0x358) = 0;
  return;
}


//// FUNCTION FUN_0080e660 @ 0080e660 ////

void __fastcall FUN_0080e660(void *param_1)

{
  undefined1 *local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3308;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = &LAB_00807f90;
  ExceptionList = &local_c;
  FUN_0080dd70(local_1c,&local_20);
  FUN_0080acd0(param_1,(int)local_1c,DAT_00e5bf5c);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0080e6e0 @ 0080e6e0 ////

void __fastcall FUN_0080e6e0(void *param_1)

{
  undefined1 *local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3328;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  local_20 = &LAB_00807fa0;
  ExceptionList = &local_c;
  FUN_0080dd70(local_1c,&local_20);
  FUN_0080acd0(param_1,(int)local_1c,DAT_00e5bf6c);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0080e760 @ 0080e760 ////

void __fastcall FUN_0080e760(void *param_1)

{
  undefined1 *local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3348;
  local_c = ExceptionList;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_00e5bf88 != '\0') {
    local_20 = &LAB_00807fb0;
    ExceptionList = &local_c;
    FUN_0080dd70(local_1c,&local_20);
  }
  if (DAT_00e5bf98 != '\0') {
    local_20 = &LAB_00807fc0;
    FUN_0080dd70(local_1c,&local_20);
  }
  if (DAT_00e5bfa8 != '\0') {
    local_20 = &LAB_00807fd0;
    FUN_0080dd70(local_1c,&local_20);
  }
  if (DAT_00e5bfb8 != '\0') {
    local_20 = &LAB_00807ff0;
    FUN_0080dd70(local_1c,&local_20);
  }
  if (DAT_00e5bfc8 != '\0') {
    local_20 = &LAB_00807fe0;
    FUN_0080dd70(local_1c,&local_20);
  }
  FUN_0080acd0(param_1,(int)local_1c,DAT_00e5bf7c);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0080e860 @ 0080e860 ////

void __fastcall FUN_0080e860(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *this;
  float10 fVar4;
  int iVar5;
  float local_20;
  float fStack_1c;
  float local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  iVar5 = *(int *)((int)param_1 + 0x454);
  if (*(void **)(iVar5 + 0x348) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(iVar5 + 0x348));
  }
  *(undefined4 *)(iVar5 + 0x348) = 0;
  *(undefined4 *)(iVar5 + 0x34c) = 0;
  *(undefined4 *)(iVar5 + 0x350) = 0;
  if (DAT_00e5bee8 == '\0') {
    if (DAT_00e5bef8 != '\0') {
      puVar2 = *(undefined4 **)((int)param_1 + 0x3ac);
      iVar5 = *(int *)((int)param_1 + 0x454);
      puVar3 = (undefined4 *)FUN_00808ca0(local_18,*(int **)((int)param_1 + 0x3f4));
      puVar2 = (undefined4 *)FUN_0080b9c0(param_1,&local_20,puVar2,1);
      local_10 = *puVar2;
      local_c = puVar2[1];
      local_8 = (float)*puVar3;
      local_4 = (float)puVar3[1];
      FUN_0080dd00((void *)(iVar5 + 0x344),&local_10);
      if (DAT_00e5bf08 == '\0') {
        if (DAT_00e5bf18 == '\0') {
          return;
        }
        puVar2 = *(undefined4 **)((int)param_1 + 0x3f4);
        this = *(void **)((int)param_1 + 0x454);
        puVar3 = (undefined4 *)FUN_00808ca0(local_18,*(int **)((int)param_1 + 0x40c));
        iVar5 = 3;
      }
      else {
        puVar2 = *(undefined4 **)((int)param_1 + 0x3f4);
        this = *(void **)((int)param_1 + 0x454);
        puVar3 = (undefined4 *)FUN_00808ca0(local_18,*(int **)((int)param_1 + 0x40c));
        iVar5 = 2;
      }
      puVar2 = (undefined4 *)FUN_0080b9c0(param_1,&local_20,puVar2,iVar5);
      FUN_0080dde0(this,puVar2,puVar3);
    }
  }
  else {
    piVar1 = *(int **)((int)param_1 + 0x3c4);
    local_20 = (float)piVar1[0x30] + 5.0;
    fVar4 = (float10)(**(code **)(*piVar1 + 0x14))();
    fStack_1c = (float)(fVar4 * (float10)0.5 + (float10)(float)piVar1[0x27]);
    puVar2 = (undefined4 *)FUN_0080b9c0(param_1,local_18,*(undefined4 **)((int)param_1 + 0x3ac),0);
    local_10 = *puVar2;
    local_c = puVar2[1];
    local_4 = fStack_1c;
    local_8 = local_20;
    FUN_0080dd00((void *)(*(int *)((int)param_1 + 0x454) + 0x344),&local_10);
    if (DAT_00e5bf78 != '\0') {
      puVar2 = *(undefined4 **)((int)param_1 + 0x3c4);
      iVar5 = *(int *)((int)param_1 + 0x454);
      puVar3 = (undefined4 *)FUN_00808ca0(local_18,*(int **)((int)param_1 + 0x3dc));
      puVar2 = (undefined4 *)FUN_0080b9c0(param_1,&local_20,puVar2,9);
      local_10 = *puVar2;
      local_c = puVar2[1];
      local_8 = (float)*puVar3;
      local_4 = (float)puVar3[1];
      FUN_0080dd00((void *)(iVar5 + 0x344),&local_10);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0080ea70 @ 0080ea70 ////

int __fastcall FUN_0080ea70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a510();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0080eaa0 @ 0080eaa0 ////

int __fastcall FUN_0080eaa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0080a560();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0080ead0 @ 0080ead0 ////

undefined4 * __thiscall FUN_0080ead0(void *this,byte param_1)

{
  FUN_0080de80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0080eaf0 @ 0080eaf0 ////

void __fastcall FUN_0080eaf0(void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(**(int **)((int)param_1 + 900) + 0x104))();
  *(undefined4 *)((int)param_1 + 0x4c4) = 0;
  (**(code **)(**(int **)((int)param_1 + 0x38c) + 0x11c))(0x459c4000);
  (**(code **)(**(int **)((int)param_1 + 0x38c) + 0x11c))(0);
  if (DAT_00e5bee8 == '\0') {
    if (DAT_00e5bef8 != '\0') {
      if (DAT_00e5bf08 == '\0') {
        if (DAT_00e5bf18 == '\0') {
          FUN_008098c0((int)param_1);
        }
        else {
          FUN_008099f0(param_1,*(float *)(*(int *)((int)param_1 + 0x348) + 4 +
                                         *(int *)((int)param_1 + 0x358) * 8));
        }
      }
      else {
        FUN_008099f0(param_1,*(float *)(*(int *)((int)param_1 + 0x348) +
                                       *(int *)((int)param_1 + 0x358) * 8));
      }
    }
  }
  else {
    if (DAT_0104eb38 == 0) {
      FUN_0044f380((void *)((int)param_1 + 0x4b8));
    }
    else if (DAT_0104eb38 == 1) {
      FUN_0044f3d0((void *)((int)param_1 + 0x4b8));
    }
    else if (DAT_0104eb38 == 2) {
      FUN_0044f420((void *)((int)param_1 + 0x4b8));
    }
    FUN_008098c0((int)param_1);
    if (DAT_00e5bf58 != '\0') {
      FUN_0080e660(param_1);
    }
    if (DAT_00e5bf68 != '\0') {
      FUN_0080e6e0(param_1);
    }
    if (DAT_00e5bf78 != '\0') {
      FUN_0080e760(param_1);
    }
  }
  fVar2 = (float10)(**(code **)(**(int **)((int)param_1 + 0x38c) + 0x10c))();
  if ((float10)5000.0 < fVar2) {
    iVar1 = **(int **)((int)param_1 + 0x38c);
    fVar2 = (float10)(**(code **)(iVar1 + 0x10c))();
    (**(code **)(iVar1 + 0x11c))((float)(fVar2 * (float10)1.15));
  }
  if (*(float *)((int)param_1 + 0x4c4) <= 1e+09) {
    if (*(float *)((int)param_1 + 0x4c4) <= 1e+06) {
      *(undefined4 *)((int)param_1 + 0x4c8) = 0;
      FUN_0080ba50((int)param_1);
      FUN_0080c0b0(param_1);
      return;
    }
    *(undefined4 *)((int)param_1 + 0x4c8) = 1;
    FUN_0080ba50((int)param_1);
    FUN_0080c0b0(param_1);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x4c8) = 2;
  FUN_0080ba50((int)param_1);
  FUN_0080c0b0(param_1);
  return;
}


//// FUNCTION FUN_0080ecc0 @ 0080ecc0 ////

void __fastcall FUN_0080ecc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint unaff_EBX;
  char *pcVar6;
  void *unaff_ESI;
  char *pcVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  void *pvStack_b8;
  wchar_t *pwStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  uint uStack_a8;
  wchar_t *pwStack_94;
  uint uStack_90;
  uint uStack_8c;
  wchar_t awStack_88 [4];
  void *pvStack_80;
  uint uStack_78;
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 auStack_64 [8];
  undefined1 *puStack_54;
  void *pvStack_50;
  uint uStack_4c;
  uint uStack_48;
  void *pvStack_3c;
  undefined1 uStack_2c;
  undefined1 uStack_28;
  undefined4 uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce33a1;
  pvStack_c = ExceptionList;
  uStack_a8 = 0;
  pcStack_ac = (char *)0x80ecef;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)param_1[0xf1] + 0x20))();
  pcStack_ac = (char *)0x0;
  pcStack_b0 = (char *)0x80ecfb;
  (**(code **)(*(int *)param_1[0xf7] + 0x20))();
  pcStack_b0 = (char *)0x0;
  pwStack_b4 = L"躋Ф";
  (**(code **)(*(int *)param_1[0xfd] + 0x20))();
  pwStack_b4 = (wchar_t *)0x0;
  pvStack_b8 = (void *)0x80ed13;
  (**(code **)(*(int *)param_1[0x109] + 0x20))();
  pvStack_b8 = (void *)0x0;
  (**(code **)(*(int *)param_1[0x103] + 0x20))();
  if (DAT_00e5bee8 == '\0') {
    if (DAT_00e5bef8 != '\0') {
      (**(code **)(*(int *)param_1[0xfd] + 0x20))();
      (**(code **)(*(int *)param_1[0x109] + 0x20))();
      (**(code **)(*(int *)param_1[0x103] + 0x20))();
      FUN_0080b220(param_1);
    }
  }
  else {
    (**(code **)(*(int *)param_1[0xf1] + 0x20))();
    (**(code **)(*(int *)param_1[0xf7] + 0x20))();
  }
  (**(code **)(*(int *)param_1[0x11b] + 0x20))();
  (**(code **)(*(int *)param_1[0xe4] + 0x20))();
  (**(code **)(*(int *)param_1[0x121] + 0x20))();
  puStack_70 = auStack_64;
  auStack_64[0] = 0;
  uStack_6c = 0;
  uStack_68 = 10;
  uStack_24 = 0;
  if (DAT_0104eb38 == 0) {
    uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_1YEAR");
    pwVar8 = L"GRAPHS_DURATION_1YEAR";
LAB_0080ee40:
    FUN_004036d0(&puStack_70,pwVar8,uVar4);
  }
  else {
    if (DAT_0104eb38 == 1) {
      uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_10YEARS");
      pwVar8 = L"GRAPHS_DURATION_10YEARS";
      goto LAB_0080ee40;
    }
    if (DAT_0104eb38 == 2) {
      uVar4 = FUN_00ace02d(L"GRAPHS_DURATION_LIFETIME");
      pwVar8 = L"GRAPHS_DURATION_LIFETIME";
      goto LAB_0080ee40;
    }
  }
  pcStack_b0 = &stack0xffffff5c;
  pcStack_ac = (char *)0x0;
  uStack_a8 = 10;
  uVar4 = FUN_00ace02d((short *)&DAT_00d5b180);
  FUN_004036d0(&pcStack_b0,L"g1",uVar4);
  uStack_24._0_1_ = 1;
  FUN_00831790(&uStack_4c,&pcStack_b0,&puStack_70);
  uStack_24 = CONCAT31(uStack_24._1_3_,2);
  (**(code **)(*(int *)param_1[0xe4] + 0x54))();
  if (10 < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_50);
  }
  uStack_28 = 0;
  if (10 < pcStack_ac) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_b4);
  }
  do {
    cVar3 = (**(code **)(*param_1 + 0x50))();
  } while (cVar3 != '\0');
  pvStack_b8 = *(void **)param_1[0xd8];
  if (pvStack_b8 != (int *)param_1[0xd8]) {
    do {
      pcVar6 = "ui/button_toggleon.dds";
      if ((&DAT_00e5bee8)[*(int *)((int)pvStack_b8 + 0x10) * 0x10] == '\0') {
        pcVar6 = "ui/button_toggleoff.dds";
      }
      pwStack_b4 = (wchar_t *)&uStack_a8;
      uStack_a8 = uStack_a8 & 0xffffff00;
      pcStack_b0 = (char *)0x0;
      pcStack_ac = (char *)0x14;
      pcVar7 = pcVar6;
      do {
        cVar3 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar3 != '\0');
      pcVar7 = pcVar7 + -(int)(pcVar6 + 1);
      if ((char *)0x13 < pcVar7) {
        pcStack_ac = (char *)((uint)(pcVar7 + 0x20) & 0xffffffe0);
        pwStack_b4 = _malloc((size_t)pcStack_ac);
      }
      _strncpy((char *)pwStack_b4,pcVar6,(size_t)pcVar7);
      *(char *)((int)pwStack_b4 + (int)pcVar7) = '\0';
      puStack_54 = &stack0xffffff28;
      uStack_28 = 3;
      pcStack_b0 = pcVar7;
      FUN_0069f100(*(void **)((int)pvStack_b8 + 0xc),(int *)&pwStack_b4,0,0,0x3f800000,0x3f800000);
      uStack_28 = 0;
      if (0x14 < pcStack_ac) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_b4);
      }
      FUN_00809380((int *)&pvStack_b8);
    } while (pvStack_b8 != (void *)param_1[0xd8]);
  }
  FUN_0080eaf0(param_1);
  pwStack_94 = awStack_88;
  awStack_88[0] = L'\0';
  uStack_90 = 0;
  uStack_8c = 10;
  iVar1 = param_1[0x132];
  uStack_28 = 4;
  if (iVar1 == 0) {
    uVar4 = FUN_00ace02d(L"GRAPHS_THOUSAND");
    if (uStack_8c <= uVar4) {
      if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_94);
      }
      uVar5 = uVar4 + 0x20 >> 5;
      uStack_8c = uVar5 << 5;
      pwStack_94 = _malloc(uVar5 * 0x40);
    }
    _wcsncpy(pwStack_94,L"GRAPHS_THOUSAND",uVar4);
    pwStack_94[uVar4] = L'\0';
    uVar9 = 0x447a0000;
    uStack_90 = uVar4;
  }
  else if (iVar1 == 1) {
    uVar4 = FUN_00ace02d(L"GRAPHS_MILLION");
    if (uStack_8c <= uVar4) {
      if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_94);
      }
      uStack_8c = uVar4 + 0x20 & 0xffffffe0;
      pwStack_94 = _malloc(uStack_8c * 2);
    }
    _wcsncpy(pwStack_94,L"GRAPHS_MILLION",uVar4);
    pwStack_94[uVar4] = L'\0';
    uVar9 = 0x49742400;
    uStack_90 = uVar4;
  }
  else {
    if (iVar1 != 2) goto LAB_0080f174;
    uVar4 = FUN_00ace02d(L"GRAPHS_BILLION");
    if (uStack_8c <= uVar4) {
      if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_94);
      }
      uStack_8c = uVar4 + 0x20 & 0xffffffe0;
      pwStack_94 = _malloc(uStack_8c * 2);
    }
    _wcsncpy(pwStack_94,L"GRAPHS_BILLION",uVar4);
    pwStack_94[uVar4] = L'\0';
    uVar9 = 0x4e6e6b28;
    uStack_90 = uVar4;
  }
  FUN_00817790((void *)param_1[0xe3],uVar9);
LAB_0080f174:
  pwStack_b4 = (wchar_t *)&uStack_a8;
  uStack_a8 = uStack_a8 & 0xffff0000;
  pcStack_b0 = (char *)0x0;
  pcStack_ac = (char *)0xa;
  pcVar6 = (char *)FUN_00ace02d((short *)&DAT_00d5b180);
  if (pcStack_ac <= pcVar6) {
    if ((char *)0xa < pcStack_ac) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_b4);
    }
    pcStack_ac = (char *)((uint)(pcVar6 + 0x20) & 0xffffffe0);
    pwStack_b4 = _malloc((int)pcStack_ac * 2);
  }
  _wcsncpy(pwStack_b4,L"g1",(size_t)pcVar6);
  pwStack_b4[(int)pcVar6] = L'\0';
  uStack_28 = 5;
  pcStack_b0 = pcVar6;
  FUN_00831790(&pvStack_50,&pwStack_b4,&pwStack_94);
  uStack_28 = 6;
  (**(code **)(*(int *)param_1[0xe5] + 0x54))();
  if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_54);
  }
  uStack_2c = 4;
  if ((char *)0xa < pcStack_b0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_b8);
  }
  (**(code **)(*(int *)param_1[0x121] + 0xc0))();
  piVar2 = (int *)param_1[0x11b];
  FUN_0044e6e0(extraout_ECX,extraout_EDX);
  (**(code **)(*piVar2 + 0xc0))();
  FUN_0080e860(param_1);
  if (unaff_EBX < 0xb) {
    if (uStack_78 < 0xb) {
      ExceptionList = pvStack_3c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_80);
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_ESI);
}


//// FUNCTION FUN_0080f570 @ 0080f570 ////

int * FUN_0080f570(int param_1,int *param_2)

{
  char cVar1;
  wchar_t *pwVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  void *this;
  char *pcVar6;
  size_t sVar7;
  int *this_00;
  uint *puVar8;
  char *pcVar9;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void **local_4c;
  undefined4 local_48;
  uint local_44;
  void *local_40 [2];
  undefined4 uStack_38;
  uint uStack_30;
  int *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce33f5;
  pvStack_c = ExceptionList;
  bVar5 = false;
  bVar4 = false;
  ExceptionList = &pvStack_c;
  this = operator_new(0x420);
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    pcVar9 = "ui/button_toggleon.dds";
    if ((&DAT_00e5bee8)[param_1 * 0x10] == '\0') {
      pcVar9 = "ui/button_toggleoff.dds";
    }
    local_2c = (int *)local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    pcVar6 = pcVar9;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&local_2c,pcVar9,(int)pcVar6 - (int)(pcVar9 + 1));
    local_4c = local_40;
    local_40[0] = (void *)((uint)local_40[0] & 0xffff0000);
    local_48 = 0;
    local_44 = 10;
    bVar5 = true;
    bVar4 = true;
    local_4 = 2;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0x3f800000;
    uVar13 = 0x3f800000;
    sVar7 = FUN_00ace02d(L"<translate>GRAPHS_TOOLTIP_");
    FUN_0040cae0(&local_4c,L"<translate>GRAPHS_TOOLTIP_",sVar7);
    pwVar2 = (wchar_t *)(&PTR_u_STUDIO_00e5bee4)[param_1 * 4];
    sVar7 = FUN_00ace02d(pwVar2);
    FUN_0040cae0(&local_4c,pwVar2,sVar7);
    sVar7 = FUN_00ace02d(L"</translate>");
    FUN_0040cae0(&local_4c,L"</translate>",sVar7);
    this_00 = FUN_0069fb10(this,(int *)&local_2c,&local_4c,0x42000000,0x42000000,uVar10,uVar11,
                           uVar12,uVar13);
  }
  if ((bVar4) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((bVar5) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0073e5e0(this_00,param_2);
  (**(code **)(*this_00 + 0x5c))();
  (**(code **)(*this_00 + 0x18))(0,&LAB_0080f2e0,unaff_EBP);
  (**(code **)(*this_00 + 0x18))(5,&LAB_005f37f0,0,"GRAPHS_DETAILS");
  (**(code **)(*param_2 + 0xc))(this_00,1);
  this_00[0x12] = this_00[0x12] + 1;
  uStack_38 = 5;
  local_2c = this_00;
  puVar8 = FUN_0080dbd0((void *)(unaff_EBP + 0x35c),(uint *)&local_2c);
  *puVar8 = uStack_30;
  iVar3 = this_00[0x12];
  uStack_38 = 0xffffffff;
  this_00[0x12] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    (**(code **)*this_00)(1);
  }
  ExceptionList = local_40[0];
  return this_00;
}


//// FUNCTION FUN_0080f7a0 @ 0080f7a0 ////

int * FUN_0080f7a0(void)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  size_t sVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  wchar_t *pwVar9;
  float10 fVar10;
  int *piStack_100;
  int iStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  int *piVar11;
  wchar_t *local_bc;
  uint uStack_b8;
  uint local_b4;
  wchar_t awStack_b0 [10];
  wchar_t awStack_9c [46];
  void *pvStack_40;
  undefined4 uStack_38;
  uint uStack_30;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3440;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_bc = operator_new(0x344);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (local_bc == (wchar_t *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_007432f0((undefined4 *)local_bc);
  }
  piVar11 = (int *)0x41c80000;
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x74))();
  puVar4 = operator_new(0x50);
  pvStack_c = (void *)0x1;
  if (puVar4 != (undefined4 *)0x0) {
    piVar8 = FUN_005e4870(puVar4);
  }
  pvStack_c = (void *)0xffffffff;
  (**(code **)(*piVar8 + 0xc))();
  (**(code **)(*piVar3 + 0xa0))();
  pvVar2 = pvStack_c;
  iVar7 = (int)pvStack_c * 0x10;
  FUN_0080f570((int)pvStack_c,piVar3);
  pwVar9 = (wchar_t *)0xc;
  if ((pvStack_c == (void *)0x5) || (pvStack_c == (void *)0x6)) {
    pwVar9 = (wchar_t *)&lpType_0000000a;
  }
  local_bc = awStack_b0;
  awStack_b0[0] = L'\0';
  uStack_b8 = 0;
  local_b4 = 10;
  uStack_14 = 2;
  sVar5 = FUN_00ace02d(L"<font size=");
  FUN_0040cae0(&local_bc,L"<font size=",sVar5);
  piStack_f0 = (int *)0x80f935;
  sVar5 = _swprintf(awStack_9c,0xd18f7c,pwVar9);
  FUN_0040cae0(&local_bc,awStack_9c,sVar5);
  sVar5 = FUN_00ace02d(L" color=#000000><translate>GRAPHS_");
  FUN_0040cae0(&local_bc,L" color=#000000><translate>GRAPHS_",sVar5);
  pwVar9 = (wchar_t *)(&PTR_u_STUDIO_00e5bee4)[(int)pvVar2 * 4];
  sVar5 = FUN_00ace02d(pwVar9);
  FUN_0040cae0(&local_bc,pwVar9,sVar5);
  sVar5 = FUN_00ace02d(L"</translate></font>");
  FUN_0040cae0(&local_bc,L"</translate></font>",sVar5);
  piStack_100 = &uStack_f4;
  uStack_f4 = (undefined1 *)((uint)uStack_f4._2_2_ << 0x10);
  iStack_fc = 0;
  fStack_f8 = 1.4013e-44;
  FUN_004036d0(&piStack_100,local_bc,uStack_b8);
  piVar8 = FUN_00833750();
  uStack_14 = 0xffffffff;
  if (10 < local_b4) {
                    /* WARNING: Subroutine does not return */
    _free(local_bc);
  }
  FUN_0073e5e0(piVar8,piVar3);
  (**(code **)(*piVar8 + 0x5c))();
  uStack_f4 = &LAB_0080f450;
  fStack_f8 = 0.0;
  iStack_fc = 0x80fa27;
  piStack_f0 = piVar11;
  (**(code **)(*piVar8 + 0x18))();
  iStack_fc = 1;
  piStack_100 = piVar8;
  (**(code **)(*piVar3 + 0xc))();
  piVar8[0x12] = piVar8[0x12] + 1;
  uStack_38 = 3;
  piStack_f0 = piVar8;
  puVar6 = FUN_0080dbd0(piVar11 + 0xda,(uint *)&piStack_f0);
  *puVar6 = uStack_30;
  iVar1 = piVar8[0x12];
  uStack_38 = 0xffffffff;
  piVar8[0x12] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)*piVar8)(1);
  }
  if ((&DAT_00e5bee0)[iVar7] != '\0') {
    puVar4 = operator_new(0x348);
    uStack_38 = 4;
    if (puVar4 == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = FUN_00808be0(puVar4);
    }
    uStack_38 = 0xffffffff;
    (**(code **)(*piVar8 + 0x74))(0x42000000,0x41200000);
    iVar1 = *piVar8;
    fStack_f8 = *(float *)(uStack_f4 + 0xc0) - (float)piVar3[0x30];
    fVar10 = (float10)(**(code **)(iVar1 + 0x10))();
    (**(code **)(iVar1 + 0x5c))(1,piVar3,(float)(((float10)fStack_f8 - fVar10) * (float10)0.5));
    FUN_0073e5e0(piVar8,piStack_100);
    iVar7 = FUN_00814880(*(void **)(iStack_fc + 900),*(uint *)(&DAT_00e5beec + iVar7));
    piVar8[0xd1] = *(int *)(iVar7 + 0xc);
    (**(code **)(*piVar3 + 0xc))(piVar8,1);
  }
  ExceptionList = pvStack_40;
  return piVar3;
}


//// FUNCTION FUN_0080fb50 @ 0080fb50 ////

/* WARNING: Removing unreachable block (ram,0x0080fdfe) */

void __fastcall FUN_0080fb50(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  uint *puStack_e4;
  undefined4 uStack_e0;
  int *piStack_dc;
  uint uStack_d8;
  float fStack_d4;
  int *piStack_d0;
  undefined1 *puStack_cc;
  uint uVar8;
  undefined2 *puStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined2 auStack_78 [6];
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [2];
  undefined4 uStack_5c;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [52];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce34fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x420);
  bVar6 = pvVar2 == (void *)0x0;
  if (bVar6) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 10;
    uVar3 = FUN_00ace02d(L"<translate>GRAPHS_TOOLTIP_LONGER_TERM</translate>");
    FUN_004036d0(&local_6c,L"<translate>GRAPHS_TOOLTIP_LONGER_TERM</translate>",uVar3);
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"button_right.",0xd);
    local_48 = 0xd;
    local_4c[0xd] = '\0';
    local_4 = 2;
    puStack_cc = (undefined1 *)0x80fc42;
    puVar4 = FUN_0069fb10(pvVar2,(int *)&local_4c,&local_6c,0x42040000,0x42040000,0,0,0x3f800000,
                          0x3f800000);
  }
  local_4 = 4;
  (**(code **)(param_1[0x116] + 4))();
  param_1[0x11b] = (int)puVar4;
  (**(code **)param_1[0x116])();
  if ((!bVar6) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  if ((!bVar6) && (10 < local_64)) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  (**(code **)(*(int *)param_1[0x11b] + 0x18))();
  puStack_cc = (undefined1 *)0x80fcfb;
  (**(code **)(*(int *)param_1[0x11b] + 0x18))();
  puStack_cc = (undefined1 *)0x429a0000;
  fStack_d4 = 2.8026e-45;
  uStack_d8 = 0x80fd0e;
  piStack_d0 = param_1;
  (**(code **)(*(int *)param_1[0x11b] + 0x60))();
  uStack_d8 = 0x43240000;
  uStack_e0 = 2;
  puStack_e4 = (uint *)0x80fd21;
  piStack_dc = param_1;
  (**(code **)(*(int *)param_1[0x11b] + 0x68))();
  puStack_e4 = (uint *)0x1;
  (**(code **)(*param_1 + 0xc))();
  fVar7 = FUN_0080a710();
  fStack_d4 = (float)fVar7;
  puStack_cc = &stack0xffffff40;
  uVar8 = 10;
  uVar3 = FUN_00ace02d((short *)&DAT_00d28198);
  FUN_004036d0(&puStack_cc,L"A",uVar3);
  local_44 = 5;
  uVar3 = FUN_00ace02d((short *)&DAT_00d5b180);
  FUN_004036d0(&stack0xffffff54,L"g1",uVar3);
  piStack_d0 = (int *)&stack0xfffffef4;
  local_44 = CONCAT31(local_44._1_3_,6);
  FUN_008319b0((undefined4 *)&stack0xfffffef4,(undefined4 *)&stack0xffffff54,&puStack_cc);
  piVar5 = FUN_00833750();
  if (piVar5 != (int *)0x0) {
    piVar5[0x12] = piVar5[0x12] + 1;
  }
  puVar4 = (undefined4 *)param_1[0xe4];
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)();
    }
  }
  param_1[0xe4] = (int)piVar5;
  local_44 = 0xffffffff;
  if (uVar8 < 0xb) {
    *(float *)(param_1[0xe4] + 0x354) = fStack_d4;
    *(undefined1 *)(param_1[0xe4] + 0x358) = 1;
    (**(code **)(*(int *)param_1[0xe4] + 0x78))();
    uVar3 = 0;
    (**(code **)(*(int *)param_1[0xe4] + 0x60))();
    FUN_0073e5e0((void *)param_1[0xe4],(int *)param_1[0x11b]);
    (**(code **)(*param_1 + 0xc))();
    pvVar2 = operator_new(0x420);
    if (pvVar2 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puStack_84 = auStack_78;
      auStack_78[0] = 0;
      uStack_80 = 0;
      uStack_7c = 10;
      uVar8 = FUN_00ace02d(L"<translate>GRAPHS_TOOLTIP_SHORTER_TERM</translate>");
      FUN_004036d0(&puStack_84,L"<translate>GRAPHS_TOOLTIP_SHORTER_TERM</translate>",uVar8);
      puStack_e4 = &uStack_d8;
      uStack_d8 = uStack_d8 & 0xffffff00;
      uStack_e0 = 0;
      piStack_dc = (int *)&DAT_00000014;
      _strncpy((char *)puStack_e4,"button_left.",0xc);
      uStack_e0 = 0xc;
      *(char *)(puStack_e4 + 3) = '\0';
      uVar3 = uVar3 | 0xc;
      uStack_5c = 9;
      puVar4 = FUN_0069fb10(pvVar2,(int *)&puStack_e4,&puStack_84,0x42040000,0x42040000,0,0,
                            0x3f800000,0x3f800000);
    }
    uStack_5c = 0xb;
    (**(code **)(param_1[0x11c] + 4))();
    param_1[0x121] = (int)puVar4;
    (**(code **)param_1[0x11c])();
    if (((uVar3 & 8) != 0) && (uVar3 = uVar3 & 0xfffffff7, &DAT_00000014 < piStack_dc)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_e4);
    }
    uStack_5c = 0xffffffff;
    if (((uVar3 & 4) != 0) && (10 < uStack_7c)) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_84);
    }
    (**(code **)(*(int *)param_1[0x121] + 0x18))();
    (**(code **)(*(int *)param_1[0x121] + 0x18))(5,&LAB_005f37f0,0,"GRAPHS_SHORTER_TERM");
    (**(code **)(*(int *)param_1[0x121] + 0x60))(1,param_1[0xe4],0xc0800000);
    (**(code **)(*(int *)param_1[0x121] + 0x68))(2,param_1,0x43240000);
    (**(code **)(*param_1 + 0xc))(param_1[0x121],1);
    ExceptionList = &lpType_0000000a;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_cc);
}


//// FUNCTION FUN_00810080 @ 00810080 ////

/* WARNING: Removing unreachable block (ram,0x008101f2) */

void __fastcall FUN_00810080(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 auStack_a8 [4];
  undefined4 uStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce352b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar3 = operator_new(0x3ac);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_0063f620(puVar3);
  }
  local_4 = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    piVar4[0x12] = piVar4[0x12] + 1;
  }
  puVar3 = (undefined4 *)param_1[0xe0];
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar3)();
    }
  }
  param_1[0xe0] = (int)piVar4;
  (**(code **)(*piVar4 + 0x74))();
  FUN_0073e590((void *)param_1[0xe0],param_1);
  (**(code **)(*(int *)param_1[0xe0] + 100))();
  (**(code **)(*param_1 + 0xc))();
  puStack_48 = &uStack_3c;
  uStack_3c = (void *)((uint)uStack_3c._2_2_ << 0x10);
  uStack_44 = 0;
  uStack_40 = 10;
  uVar5 = FUN_00ace02d(L"SALARYADJUST_FINANCES");
  uStack_8c = 0x810177;
  FUN_004036d0(&puStack_48,L"SALARYADJUST_FINANCES",uVar5);
  uStack_20 = 1;
  uVar5 = FUN_00ace02d((short *)&DAT_00d3ae38);
  uStack_8c = 0x8101b0;
  FUN_004036d0(&stack0xffffff98,L"s3",uVar5);
  uStack_20 = CONCAT31(uStack_20._1_3_,2);
  FUN_008318a0(auStack_a8,(undefined4 *)&stack0xffffff98,&puStack_48);
  piVar4 = FUN_00833680();
  uStack_20 = 0xffffffff;
  if (uStack_40 < 0xb) {
    iVar2 = *piVar4;
    (**(code **)(iVar2 + 0x14))();
    uStack_8c = 1;
    uStack_90 = 0x81023b;
    (**(code **)(iVar2 + 100))();
    uStack_90 = 1;
    uStack_98 = 0x810245;
    piStack_94 = piVar4;
    (**(code **)(*param_1 + 0xc))();
    uStack_98 = 0x81024c;
    FUN_0080fb50(param_1);
    ExceptionList = uStack_3c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_48);
}


//// FUNCTION FUN_00810260 @ 00810260 ////

/* WARNING: Removing unreachable block (ram,0x008110c5) */

void __fastcall FUN_00810260(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 ***pppuVar6;
  int *piVar7;
  wchar_t *_Dest;
  void *pvVar8;
  undefined1 *puVar9;
  wchar_t *_Dest_00;
  uint _Count;
  uint uVar10;
  float10 fVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 *_Memory;
  undefined1 *puVar14;
  uint uStack_214;
  int iStack_210;
  int iStack_1e4;
  char cVar15;
  undefined1 *puStack_1cc;
  undefined **ppuStack_1c8;
  int iStack_1c4;
  int **_Dest_01;
  undefined ***pppuVar16;
  int *piStack_1b4;
  int *piVar17;
  undefined **ppuVar18;
  uint uStack_1ac;
  wchar_t *pwStack_1a8;
  undefined1 *puStack_1a4;
  undefined1 *puStack_1a0;
  undefined **_Dest_02;
  uint uVar19;
  undefined4 **ppuStack_188;
  undefined **local_184;
  undefined **ppuStack_180;
  undefined4 *local_17c;
  undefined4 **ppuStack_178;
  undefined ***pppuStack_174;
  undefined1 *puStack_16c;
  float fStack_164;
  int iStack_154;
  undefined4 ***pppuStack_148;
  undefined4 auStack_144 [4];
  void *pvStack_134;
  undefined2 *puStack_130;
  uint uStack_12c;
  undefined4 uStack_128;
  undefined2 auStack_124 [10];
  char acStack_110 [48];
  char *pcStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  char acStack_d4 [16];
  void *pvStack_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_3c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3690;
  pvStack_c = ExceptionList;
  local_184 = (undefined **)0x0;
  puStack_1a0 = (undefined1 *)0x810291;
  ExceptionList = &pvStack_c;
  local_17c = operator_new(0x40c);
  local_4 = 0;
  if (local_17c == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007042a0(local_17c);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0xf8] + 4))();
  param_1[0xfd] = (int)puVar2;
  (**(code **)param_1[0xf8])();
  iVar1 = param_1[0xfd];
  *(undefined4 *)(iVar1 + 0x34c) = 0xff708c9a;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  iVar1 = param_1[0xfd];
  ppuStack_188 = (undefined4 **)0xffd7e3f9;
  *(undefined4 *)(iVar1 + 0x348) = 0xffd7e3f9;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  puStack_1a0 = (undefined1 *)0x438e8000;
  puStack_1a4 = (undefined1 *)0x810340;
  (**(code **)(*(int *)param_1[0xfd] + 0x74))();
  pwStack_1a8 = (wchar_t *)param_1[0xf1];
  puStack_1a4 = (undefined1 *)0x0;
  uStack_1ac = 2;
  (**(code **)(*(int *)param_1[0xfd] + 0x5c))();
  piStack_1b4 = (int *)0x810367;
  FUN_0073e5e0((void *)param_1[0xfd],(int *)param_1[0xf7]);
  piStack_1b4 = (int *)param_1[0xfd];
  (**(code **)(*param_1 + 0xc))();
  puVar2 = operator_new(0x3fc);
  uStack_20 = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(puVar2);
  }
  uStack_20 = 0xffffffff;
  (**(code **)(param_1[0x104] + 4))();
  param_1[0x109] = (int)puVar2;
  (**(code **)param_1[0x104])();
  puStack_1a4 = (undefined1 *)0xff000000;
  FUN_00830550((void *)param_1[0x109],8,(char *)&puStack_1a4);
  puStack_1a4 = (undefined1 *)0xffffffff;
  FUN_00830550((void *)param_1[0x109],9,(char *)&puStack_1a4);
  FUN_00830550((void *)param_1[0x109],6,"default");
  acStack_110[0] = '\x16';
  acStack_110[1] = '\0';
  acStack_110[2] = '\0';
  acStack_110[3] = '\0';
  FUN_00830550((void *)param_1[0x109],7,acStack_110);
  iVar1 = param_1[0x109];
  fVar11 = (float10)(**(code **)(*(int *)param_1[0xfd] + 0x10))();
  *(float *)(iVar1 + 0x354) = (float)fVar11;
  *(undefined1 *)(param_1[0x109] + 0x358) = 1;
  puStack_130 = auStack_124;
  auStack_124[0] = 0;
  uStack_12c = 0;
  uStack_128 = 10;
  uVar3 = FUN_00ace02d(L"<translate>GRAPHS_TITLEMOVIES</translate>");
  FUN_004036d0(&puStack_130,L"<translate>GRAPHS_TITLEMOVIES</translate>",uVar3);
  uStack_20 = 2;
  (**(code **)(*(int *)param_1[0x109] + 0x54))();
  uStack_24 = 0xffffffff;
  if (10 < uStack_12c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_134);
  }
  pppuVar16 = (undefined ***)0x0;
  (**(code **)(*(int *)param_1[0x109] + 0x84))();
  iStack_1c4 = 0x810513;
  FUN_0073e590((void *)param_1[0x109],(int *)param_1[0xfd]);
  iVar1 = *(int *)param_1[0x109];
  puStack_1a0 = (undefined1 *)param_1[0xfd];
  (**(code **)(iVar1 + 0x14))();
  iStack_1c4 = (int)puStack_1a0;
  ppuStack_1c8 = (undefined **)0x1;
  (**(code **)(iVar1 + 100))();
  (**(code **)(*param_1 + 0xc))();
  fStack_164 = 27.0;
  iStack_154 = 2;
  do {
    puVar2 = operator_new(0x344);
    uStack_3c = 3;
    if (puVar2 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_007432f0(puVar2);
    }
    cVar15 = (char)((uint)param_1[0xfd] >> 0x18);
    uStack_3c = 0xffffffff;
    (**(code **)(*piVar4 + 0x5c))();
    iStack_1e4 = param_1[0xfd];
    (**(code **)(*piVar4 + 100))();
    iVar1 = *piVar4;
    (**(code **)(*(int *)param_1[0xfd] + 0x10))();
    (**(code **)(iVar1 + 0x78))();
    (**(code **)(*piVar4 + 0x7c))();
    puVar2 = operator_new(0x50);
    uStack_5c = 4;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_005e4870(puVar2);
    }
    uStack_5c = 0xffffffff;
    if (cVar15 == '\0') {
      ppuStack_188 = (undefined4 **)0xffd7e3f9;
      pppuVar6 = &ppuStack_188;
    }
    else {
      ppuStack_178 = (undefined4 **)0xffa8b8d9;
      pppuVar6 = &ppuStack_178;
    }
    (**(code **)(*piVar5 + 0xc))();
    (**(code **)(*piVar4 + 0xa0))();
    (**(code **)(*(int *)param_1[0xfd] + 0xc))();
    iStack_210 = 0x81069b;
    FUN_0080f570((int)local_184,piVar4);
    puVar2 = operator_new(0x3fc);
    uStack_6c = 5;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00833290(puVar2);
    }
    uStack_6c = 0xffffffff;
    FUN_00830550(piVar5,8,&stack0xfffffe74);
    FUN_00830550(piVar5,6,"default");
    iStack_1e4 = 10;
    FUN_00830550(piVar5,7,(char *)&iStack_1e4);
    fVar11 = (float10)(**(code **)(*(int *)param_1[0xfd] + 0x10))();
    piVar5[0xd5] = (int)(float)fVar11;
    _Dest = (wchar_t *)&uStack_1ac;
    *(undefined1 *)(piVar5 + 0xd6) = 1;
    uStack_1ac = uStack_1ac & 0xffff0000;
    piStack_1b4 = (int *)0x0;
    piVar17 = (int *)0xa;
    piVar7 = (int *)FUN_00ace02d((short *)&DAT_00d28198);
    if (piVar17 <= piVar7) {
      if ((int *)0xa < piVar17) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest);
      }
      _Dest = _malloc(((uint)(piVar7 + 8) >> 5) * 0x40);
    }
    iStack_210 = 0x8107ae;
    _wcsncpy(_Dest,L"A",(size_t)piVar7);
    _Dest[(int)piVar7] = L'\0';
    uStack_6c = 6;
    piStack_1b4 = piVar7;
    (**(code **)(*piVar5 + 0x54))();
    uStack_70 = 0xffffffff;
    if ((int *)0xa < piStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(pppuVar16);
    }
    (**(code **)(*piVar5 + 0x84))();
    iStack_210 = param_1[0xfd];
    uStack_214 = 1;
    (**(code **)(*piVar5 + 0x5c))();
    (**(code **)(*piVar5 + 100))();
    piVar7 = (int *)0x1;
    (**(code **)(*piVar4 + 0xc))();
    pvVar8 = operator_new(0x394);
    uStack_94 = 7;
    if (pvVar8 == (void *)0x0) {
      piVar17 = (int *)0x0;
    }
    else {
      piVar17 = FUN_00737010(pvVar8,0.5);
    }
    uStack_94 = 0xffffffff;
    FUN_00737130((int)piVar17);
    piVar13 = piVar5;
    (**(code **)(*piVar17 + 0x5c))(1,piVar5);
    uVar12 = 2;
    (**(code **)(*piVar7 + 100))(2,piVar5,0xc0c00000);
    (**(code **)(*piVar4 + 0xc))(piVar13,1);
    puVar2 = operator_new(0x3fc);
    uStack_b4 = 8;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = FUN_00833290(puVar2);
    }
    uStack_b4 = 0xffffffff;
    FUN_00830550(piVar5,8,&stack0xfffffe28);
    FUN_00830550(piVar5,6,"default");
    FUN_00830550(piVar5,7,&stack0xfffffdd4);
    fVar11 = (float10)(**(code **)(*(int *)param_1[0xfd] + 0x10))();
    piVar5[0xd5] = (int)(float)fVar11;
    _Dest_00 = (wchar_t *)&uStack_214;
    *(undefined1 *)(piVar5 + 0xd6) = 1;
    uStack_214 = uStack_214 & 0xffff0000;
    puVar14 = &lpType_0000000a;
    puVar9 = (undefined1 *)FUN_00ace02d((short *)&DAT_00d28198);
    if (puVar14 <= puVar9) {
      if (&lpType_0000000a < puVar14) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest_00);
      }
      _Dest_00 = _malloc(((uint)(puVar9 + 0x20) >> 5) * 0x40);
    }
    _wcsncpy(_Dest_00,L"A",(size_t)puVar9);
    _Dest_00[(int)puVar9] = L'\0';
    puVar14 = &stack0xfffffde0;
    uStack_b4 = 9;
    _Memory = puVar9;
    (**(code **)(*piVar5 + 0x54))(puVar14);
    uStack_b8 = 0xffffffff;
    if (&lpType_0000000a < puVar9) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    (**(code **)(*piVar5 + 0x84))(0);
    (**(code **)(*piVar5 + 0x5c))(2,uVar12,0xc1400000);
    puVar9 = (undefined1 *)0x0;
    (**(code **)(*piVar5 + 100))(1,puVar14,0);
    (**(code **)(*piVar4 + 0xc))(piVar5,1);
    pppuVar16 = &ppuStack_1c8;
    ppuVar18 = &PTR_FUN_00d195f8;
    _Dest_02 = &PTR_FUN_00d195f8;
    puStack_1a4 = &stack0xfffffe50;
    pppuStack_174 = &ppuStack_180;
    iStack_1c4 = 0;
    _Dest_01 = (int **)0x0;
    ppuStack_1c8 = &PTR_FUN_00d18c2c;
    piStack_1b4 = (int *)0x0;
    uStack_1ac = 0;
    pwStack_1a8 = (wchar_t *)0x0;
    uVar19 = 0;
    local_184 = (undefined **)0x0;
    local_17c = (undefined4 *)0x0;
    ppuStack_178 = (undefined4 **)0x0;
    ppuStack_180 = &PTR_LAB_00d5b18c;
    puStack_16c = (undefined1 *)0x0;
    uStack_dc = 10;
    FUN_004340f0((int)&ppuStack_1c8);
    piStack_1b4 = piVar4;
    (*(code *)*ppuStack_1c8)();
    (*(code *)ppuVar18[1])();
    (*(code *)*ppuVar18)();
    FUN_00442da0((int)&stack0xfffffe68);
    local_184 = (undefined **)piVar5;
    FUN_004431e0((int)&stack0xfffffe68);
    (*(code *)ppuStack_180[1])();
    puStack_16c = puVar9;
    (*(code *)*ppuStack_180)();
    pppuStack_148 = pppuVar6;
    FUN_0080aed0(auStack_144,(int)&ppuStack_1c8);
    uStack_dc._0_1_ = 0xb;
    FUN_0080cdb0(param_1 + 0xdd,(undefined4 *)&stack0xfffffe0c,(int *)&pppuStack_148);
    uStack_dc = CONCAT31(uStack_dc._1_3_,10);
    FUN_0080a9e0(auStack_144);
    fVar11 = (float10)(**(code **)(*piVar4 + 0x14))();
    fStack_164 = (float)(fVar11 + (float10)fStack_164);
    uVar3 = CONCAT13((char)((uint)_Dest >> 0x18) == '\0',(int3)_Dest);
    uStack_3c = 0xffffffff;
    FUN_0080a9e0(&uStack_128);
    iStack_154 = (int)pppuVar6 + 1;
  } while (iStack_154 < 4);
  ppuStack_188 = &local_17c;
  local_17c = (undefined4 *)((uint)local_17c & 0xffff0000);
  local_184 = (undefined **)0x0;
  ppuStack_180 = (undefined **)0xa;
  ppuVar18 = (undefined **)FUN_00ace02d(L"100 / 100");
  if (ppuStack_180 <= ppuVar18) {
    if ((undefined **)0xa < ppuStack_180) {
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_188);
    }
    ppuStack_180 = (undefined **)((uint)(ppuVar18 + 8) & 0xffffffe0);
    ppuStack_188 = _malloc((int)ppuStack_180 * 2);
  }
  _wcsncpy((wchar_t *)ppuStack_188,L"100 / 100",(size_t)ppuVar18);
  *(undefined2 *)((int)ppuStack_188 + (int)ppuVar18 * 2) = 0;
  pwStack_1a8 = (wchar_t *)&stack0xfffffe64;
  uStack_3c = 0xc;
  puStack_1a4 = (undefined1 *)0x0;
  puStack_1a0 = &lpType_0000000a;
  iStack_1e4 = 0x810ce7;
  local_184 = ppuVar18;
  puVar9 = (undefined1 *)FUN_00ace02d((short *)&DAT_00d5b180);
  if (puStack_1a0 <= puVar9) {
    if (&lpType_0000000a < puStack_1a0) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1a8);
    }
    puStack_1a0 = (undefined1 *)(((uint)(puVar9 + 0x20) >> 5) << 5);
    pwStack_1a8 = _malloc(((uint)(puVar9 + 0x20) >> 5) * 0x40);
  }
  _wcsncpy(pwStack_1a8,L"g1",(size_t)puVar9);
  pwStack_1a8[(int)puVar9] = L'\0';
  piStack_1b4 = (int *)&stack0xfffffe0c;
  uStack_3c = CONCAT31(uStack_3c._1_3_,0xd);
  puStack_1a4 = puVar9;
  FUN_008319b0((undefined4 *)&stack0xfffffe0c,&pwStack_1a8,&ppuStack_188);
  piVar4 = FUN_00833750();
  (**(code **)(param_1[0x10a] + 4))();
  param_1[0x10f] = (int)piVar4;
  (**(code **)param_1[0x10a])();
  if (&lpType_0000000a < puStack_1a0) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_1a8);
  }
  uStack_3c = 0xffffffff;
  if ((undefined **)0xa < ppuStack_180) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_188);
  }
  *(undefined4 *)(param_1[0x10f] + 0x354) = 0x43480000;
  *(undefined1 *)(param_1[0x10f] + 0x358) = 1;
  pppuVar16 = (undefined ***)0x0;
  (**(code **)(*(int *)param_1[0x10f] + 0x84))();
  FUN_0073e590((void *)param_1[0x10f],(int *)param_1[0xfd]);
  iStack_1e4 = 0x810e14;
  (**(code **)(*(int *)param_1[0x10f] + 0x68))();
  iStack_1e4 = 1;
  (**(code **)(*(int *)param_1[0xfd] + 0xc))();
  if ((param_1[0xd2] == 0) || ((uint)(param_1[0xd3] - param_1[0xd2] >> 2) < 3)) {
    (**(code **)(*(int *)param_1[0x10f] + 0x20))();
  }
  puStack_1cc = operator_new(0x420);
  if (puStack_1cc == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    _Dest_01 = &piStack_1b4;
    piStack_1b4 = (int *)((uint)piStack_1b4 & 0xffff0000);
    uVar3 = 10;
    _Count = FUN_00ace02d(L"<translate>GRAPHS_TOOLTIP_NEXTMOVIES</translate>");
    if (uVar3 <= _Count) {
      if (10 < uVar3) {
                    /* WARNING: Subroutine does not return */
        _free(_Dest_01);
      }
      uVar10 = _Count + 0x20 >> 5;
      uVar3 = uVar10 << 5;
      _Dest_01 = _malloc(uVar10 * 0x40);
    }
    _wcsncpy((wchar_t *)_Dest_01,L"<translate>GRAPHS_TOOLTIP_NEXTMOVIES</translate>",_Count);
    *(undefined2 *)((int)_Dest_01 + _Count * 2) = 0;
    pcStack_e0 = acStack_d4;
    acStack_d4[0] = '\0';
    uStack_dc = 0;
    uStack_d8 = 0x14;
    _strncpy(pcStack_e0,"button_right.",0xd);
    uStack_dc = 0xd;
    pcStack_e0[0xd] = '\0';
    puStack_16c = &stack0xfffffe08;
    uStack_54 = 0x10;
    pppuVar16 = (undefined ***)0x3;
    puVar2 = FUN_0069fb10(puStack_1cc,(int *)&pcStack_e0,(undefined4 *)&stack0xfffffe40,0x42040000,
                          0x42040000,0,0,0x3f800000,0x3f800000);
  }
  uStack_54 = 0x12;
  (**(code **)(param_1[0x122] + 4))();
  param_1[0x127] = (int)puVar2;
  (**(code **)param_1[0x122])();
  if ((((uint)pppuVar16 & 2) != 0) &&
     (pppuVar16 = (undefined ***)((uint)pppuVar16 & 0xfffffffd), 0x14 < uStack_d8)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_e0);
  }
  uStack_54 = 0xffffffff;
  if ((((uint)pppuVar16 & 1) != 0) &&
     (pppuVar16 = (undefined ***)((uint)pppuVar16 & 0xfffffffe), 10 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_01);
  }
  (**(code **)(*(int *)param_1[0x127] + 0x18))();
  uVar3 = 5;
  (**(code **)(*(int *)param_1[0x127] + 0x18))();
  iStack_210 = param_1[0xfd];
  uStack_214 = 2;
  (**(code **)(*(int *)param_1[0x127] + 0x60))();
  FUN_0073e5e0((void *)param_1[0x127],(int *)param_1[0x10f]);
  (**(code **)(*(int *)param_1[0xfd] + 0xc))();
  pvVar8 = operator_new(0x420);
  if (pvVar8 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pppuVar16 = &ppuStack_1c8;
    ppuStack_1c8 = (undefined **)((uint)ppuStack_1c8 & 0xffff0000);
    puStack_1cc = &lpType_0000000a;
    uVar19 = FUN_00ace02d(L"<translate>GRAPHS_TOOLTIP_PREVIOUSMOVIES</translate>");
    if (9 < uVar19) {
      puStack_1cc = (undefined1 *)(uVar19 + 0x20 & 0xffffffe0);
      pppuVar16 = _malloc((int)puStack_1cc * 2);
    }
    _wcsncpy((wchar_t *)pppuVar16,L"<translate>GRAPHS_TOOLTIP_PREVIOUSMOVIES</translate>",uVar19);
    *(undefined2 *)((int)pppuVar16 + uVar19 * 2) = 0;
    uVar3 = uVar3 | 4;
    _Dest_02 = (undefined **)&stack0xfffffe74;
    uVar19 = 0x14;
    _strncpy((char *)_Dest_02,"button_left.",0xc);
                    /* WARNING: Ignoring partial resolution of indirect */
    ppuStack_180._0_1_ = 0;
    puStack_1a0 = &stack0xfffffdd4;
    uVar3 = uVar3 | 8;
    uStack_88 = 0x15;
    puVar2 = FUN_0069fb10(pvVar8,(int *)&stack0xfffffe68,(undefined4 *)&stack0xfffffe2c,0x42040000,
                          0x42040000,0,0,0x3f800000,0x3f800000);
  }
  uStack_88 = 0x17;
  (**(code **)(param_1[0x128] + 4))();
  param_1[0x12d] = (int)puVar2;
  (**(code **)param_1[0x128])();
  if (((uVar3 & 8) != 0) && (uVar3 = uVar3 & 0xfffffff7, 0x14 < uVar19)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_02);
  }
  uStack_88 = 0xffffffff;
  if (((uVar3 & 4) != 0) && (&lpType_0000000a < puStack_1cc)) {
                    /* WARNING: Subroutine does not return */
    _free(pppuVar16);
  }
  (**(code **)(*(int *)param_1[0x12d] + 0x18))();
  (**(code **)(*(int *)param_1[0x12d] + 0x18))(5,&LAB_005f37f0,0,"GRAPHS_PREVIOUSPAGE");
  (**(code **)(*(int *)param_1[0x12d] + 0x5c))(1,param_1[0xfd],0x42960000);
  FUN_0073e5e0((void *)param_1[0x12d],(int *)param_1[0x10f]);
  (**(code **)(*(int *)param_1[0xfd] + 0xc))(param_1[0x12d],1);
  if (param_1[0xd5] < 2) {
    (**(code **)(*(int *)param_1[0x127] + 0x20))(0);
    (**(code **)(*(int *)param_1[0x12d] + 0x20))(0);
  }
  ExceptionList = pvStack_c4;
  return;
}


//// FUNCTION FUN_008112e0 @ 008112e0 ////

void __thiscall FUN_008112e0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 unaff_EDI;
  float10 fVar4;
  float local_c;
  
  iVar1 = param_3 + param_2;
  local_c = 25.0;
  do {
    if (iVar1 <= param_2) {
      (**(code **)(*param_1 + 0x7c))(local_c + 25.0);
      return;
    }
    if (param_2 == 0xd) {
      cVar3 = *(char *)((int)this + 0x4cc);
LAB_00811328:
      if (cVar3 != '\0') goto LAB_0081132c;
    }
    else {
      if (param_2 == 0xe) {
        cVar3 = *(char *)((int)this + 0x4cd);
        goto LAB_00811328;
      }
LAB_0081132c:
      piVar2 = FUN_0080f7a0();
      (**(code **)(*piVar2 + 0x5c))(1,param_1,0x40400000);
      (**(code **)(*piVar2 + 100))(1,param_1,unaff_EDI);
      (**(code **)(*param_1 + 0xc))(piVar2,1);
      fVar4 = (float10)(**(code **)(*piVar2 + 0x14))();
      local_c = (float)(fVar4 + (float10)local_c);
    }
    param_2 = param_2 + 1;
  } while( true );
}


//// FUNCTION FUN_008113b0 @ 008113b0 ////

void __fastcall FUN_008113b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce36cc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0080c2c0(*(void **)(param_1[0xd8] + 4));
  *(int *)(param_1[0xd8] + 4) = param_1[0xd8];
  puVar3 = (undefined4 *)0x0;
  param_1[0xd9] = 0;
  *(int *)param_1[0xd8] = param_1[0xd8];
  *(int *)(param_1[0xd8] + 8) = param_1[0xd8];
  FUN_0080c2c0(*(void **)(param_1[0xdb] + 4));
  *(int *)(param_1[0xdb] + 4) = param_1[0xdb];
  param_1[0xdc] = 0;
  *(int *)param_1[0xdb] = param_1[0xdb];
  *(int *)(param_1[0xdb] + 8) = param_1[0xdb];
  FUN_0080c380(*(void **)(param_1[0xde] + 4));
  *(int *)(param_1[0xde] + 4) = param_1[0xde];
  param_1[0xdf] = 0;
  *(int *)param_1[0xde] = param_1[0xde];
  *(int *)(param_1[0xde] + 8) = param_1[0xde];
  puVar2 = operator_new(0x40c);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = FUN_007042a0(puVar2);
  }
  local_4 = 0xffffffff;
  (**(code **)(param_1[0xe6] + 4))();
  param_1[0xeb] = (int)puVar3;
  (**(code **)param_1[0xe6])();
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0x34c) = 0xff708c9a;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  iVar1 = param_1[0xeb];
  *(undefined4 *)(iVar1 + 0x348) = 0xffd7e3f9;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  (**(code **)(*(int *)param_1[0xeb] + 0x78))(0x434e0000);
  (**(code **)(*(int *)param_1[0xeb] + 0x5c))(1,param_1,0x42580000);
  (**(code **)(*(int *)param_1[0xeb] + 0x7c))(0x42fa0000);
  (**(code **)(*(int *)param_1[0xeb] + 0x68))(2,param_1,0x42300000);
  (**(code **)(*param_1 + 0xc))(param_1[0xeb],1);
  FUN_008112e0(param_1,(int *)param_1[0xeb],0,2);
  puVar2 = operator_new(0x40c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007042a0(puVar2);
  }
  (**(code **)(param_1[0xec] + 4))();
  param_1[0xf1] = (int)puVar2;
  (**(code **)param_1[0xec])();
  iVar1 = param_1[0xf1];
  *(undefined4 *)(iVar1 + 0x34c) = 0xff708c9a;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  iVar1 = param_1[0xf1];
  *(undefined4 *)(iVar1 + 0x348) = 0xffd7e3f9;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  (**(code **)(*(int *)param_1[0xf1] + 0x78))(0x434e0000);
  (**(code **)(*(int *)param_1[0xf1] + 0x5c))(2,param_1[0xeb],0xc2200000);
  (**(code **)(*param_1 + 0xc))(param_1[0xf1],1);
  FUN_008112e0(param_1,(int *)param_1[0xf1],7,3);
  FUN_0073e5e0((void *)param_1[0xf1],(int *)param_1[0xeb]);
  (**(code **)(*(int *)param_1[0xf1] + 0x20))(0);
  puVar2 = operator_new(0x40c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007042a0(puVar2);
  }
  (**(code **)(param_1[0xf2] + 4))();
  param_1[0xf7] = (int)puVar2;
  (**(code **)param_1[0xf2])();
  iVar1 = param_1[0xf7];
  *(undefined4 *)(iVar1 + 0x34c) = 0xff708c9a;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  iVar1 = param_1[0xf7];
  *(undefined4 *)(iVar1 + 0x348) = 0xffd7e3f9;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  (**(code **)(*(int *)param_1[0xf7] + 0x78))(0x434e0000);
  (**(code **)(*(int *)param_1[0xf7] + 0x5c))(2,param_1[0xf1],0xc2200000);
  (**(code **)(*param_1 + 0xc))(param_1[0xf7],1);
  FUN_008112e0(param_1,(int *)param_1[0xf7],10,5);
  FUN_0073e5e0((void *)param_1[0xf7],(int *)param_1[0xeb]);
  (**(code **)(*(int *)param_1[0xf7] + 0x20))(0);
  FUN_00810260(param_1);
  puVar2 = operator_new(0x40c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_007042a0(puVar2);
  }
  (**(code **)(param_1[0xfe] + 4))();
  param_1[0x103] = (int)puVar2;
  (**(code **)param_1[0xfe])();
  iVar1 = param_1[0x103];
  *(undefined4 *)(iVar1 + 0x34c) = 0xff708c9a;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  iVar1 = param_1[0x103];
  *(undefined4 *)(iVar1 + 0x348) = 0xffd7e3f9;
  *(undefined1 *)(iVar1 + 0x374) = 1;
  (**(code **)(*(int *)param_1[0x103] + 0x78))(0x434e0000);
  pvVar4 = (void *)0xc2200000;
  (**(code **)(*(int *)param_1[0x103] + 0x5c))(2,param_1[0xfd]);
  (**(code **)(*param_1 + 0xc))(param_1[0x103],1);
  FUN_008112e0(param_1,(int *)param_1[0x103],4,3);
  FUN_0073e5e0((void *)param_1[0x103],(int *)param_1[0xeb]);
  (**(code **)(*(int *)param_1[0x103] + 0x20))(0);
  ExceptionList = pvVar4;
  return;
}


//// FUNCTION FUN_008118a0 @ 008118a0 ////

void __fastcall FUN_008118a0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 **ppuStack_c4;
  undefined4 uStack_c0;
  int **ppiStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  int **ppiStack_a4;
  int *piStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3727;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00810080(param_1);
  piStack_84 = (int *)0x8118cd;
  pvVar4 = operator_new(0x3b0);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piStack_9c = (int *)0x0;
  }
  else {
    piStack_84 = (int *)0x8118e6;
    piStack_9c = FUN_00638440(pvVar4,0);
  }
  uStack_88 = 1;
  local_4 = 0xffffffff;
  uStack_8c = 0x811902;
  piStack_84 = param_1;
  (**(code **)(*piStack_9c + 100))();
  uStack_8c = 0xc2200000;
  uStack_94 = 2;
  piStack_98 = (int *)0x811915;
  piStack_90 = param_1;
  (**(code **)(*piStack_9c + 0x60))();
  piStack_98 = (int *)0x1;
  (**(code **)(*param_1 + 0xc))();
  ppiStack_a4 = (int **)0x811929;
  piStack_84 = operator_new(0x3b8);
  if (piStack_84 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00815eb0(piStack_84);
  }
  if (piVar5 != (int *)0x0) {
    piVar5[0x12] = piVar5[0x12] + 1;
  }
  puVar6 = (undefined4 *)param_1[0xe1];
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ppiStack_a4 = (int **)0x81196d;
      (**(code **)*puVar6)();
    }
  }
  param_1[0xe1] = (int)piVar5;
  ppiStack_a4 = (int **)0x445a8000;
  uStack_a8 = 0x811984;
  (**(code **)(*piVar5 + 0x74))();
  uStack_a8 = 0x42dc0000;
  uStack_b0 = 1;
  uStack_b4 = 0x811997;
  piStack_ac = param_1;
  (**(code **)(*(int *)param_1[0xe1] + 100))();
  puStack_b8 = (undefined4 *)param_1[0xe1];
  uStack_b4 = 1;
  ppiStack_bc = (int **)0x8119ab;
  (**(code **)(*(int *)param_1[0xe0] + 0xc))();
  uStack_a8 = 0xffab8e19;
  piStack_90 = (int *)0xffab8e19;
  ppiStack_bc = &piStack_9c;
  piStack_9c = (int *)0x0;
  piStack_98 = (int *)0x0;
  uStack_94 = 2;
  uStack_8c = 0x40400000;
  uStack_c0 = 1;
  ppiStack_a4 = (int **)0xff000000;
  ppuStack_c4 = (undefined4 **)0x811a12;
  (**(code **)(*(int *)param_1[0xe1] + 0x10c))();
  piStack_98 = piStack_ac;
  ppuStack_c4 = &ppiStack_a4;
  ppiStack_a4 = (int **)0x0;
  piStack_9c = (int *)0x2;
  uStack_94 = 0x40400000;
  (**(code **)(*(int *)param_1[0xe1] + 0x10c))();
  piStack_ac = (int *)0x0;
  uStack_a8 = 0;
  ppiStack_a4 = (int **)0x2;
  piStack_9c = (int *)0x40400000;
  (**(code **)(*(int *)param_1[0xe1] + 0x10c))();
  puStack_b8 = operator_new(0x354);
  if (puStack_b8 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_0080da40(puStack_b8);
  }
  (**(code **)(param_1[0x110] + 4))();
  param_1[0x115] = (int)puVar6;
  (**(code **)param_1[0x110])();
  (**(code **)(*(int *)param_1[0x115] + 0x70))();
  (**(code **)(*param_1 + 0xc))();
  FUN_008113b0(param_1);
  puVar6 = operator_new(900);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00816f60(puVar6);
  }
  if (puVar6 != (undefined4 *)0x0) {
    puVar6[0x12] = puVar6[0x12] + 1;
  }
  puVar2 = (undefined4 *)param_1[0xe2];
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = puVar2 + 0x12;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*puVar2)();
    }
  }
  param_1[0xe2] = (int)puVar6;
  (**(code **)(*(int *)param_1[0xe1] + 0xfc))();
  pvVar4 = operator_new(0x3a4);
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_00817960(pvVar4,1);
  }
  if (piVar5 != (int *)0x0) {
    piVar5[0x12] = piVar5[0x12] + 1;
  }
  puVar6 = (undefined4 *)param_1[0xe3];
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar6)();
    }
  }
  param_1[0xe3] = (int)piVar5;
  (**(code **)(*piVar5 + 300))();
  (**(code **)(*(int *)param_1[0xe1] + 0xfc))();
  pvVar4 = (void *)param_1[0xe3];
  uVar7 = FUN_00813680(param_1[0xe1]);
  FUN_008178e0(pvVar4,uVar7);
  FUN_0073e590((void *)param_1[0xe1],param_1);
  ppiStack_a4 = &piStack_98;
  piStack_98 = (int *)((uint)piStack_98 & 0xffff0000);
  piStack_9c = (int *)0xa;
  uVar8 = FUN_00ace02d((short *)&PTR_DAT_00d5b954);
  uStack_100 = 0x811c14;
  FUN_004036d0(&ppiStack_a4,(wchar_t *)&PTR_DAT_00d5b954,uVar8);
  ppuStack_c4 = &puStack_b8;
  puStack_b8 = (undefined4 *)((uint)puStack_b8 & 0xffff0000);
  uStack_c0 = 0;
  ppiStack_bc = (int **)0xa;
  uVar8 = FUN_00ace02d((short *)&DAT_00d5b180);
  uStack_100 = 0x811c4d;
  FUN_004036d0(&ppuStack_c4,L"g1",uVar8);
  FUN_00831bd0(&uStack_118,&ppuStack_c4,&ppiStack_a4);
  piVar5 = FUN_00833750();
  if (piVar5 != (int *)0x0) {
    piVar5[0x12] = piVar5[0x12] + 1;
  }
  puVar6 = (undefined4 *)param_1[0xe5];
  if (puVar6 != (undefined4 *)0x0) {
    piVar1 = puVar6 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar6)();
    }
  }
  param_1[0xe5] = (int)piVar5;
  if (10 < ppiStack_bc) {
                    /* WARNING: Subroutine does not return */
    _free(ppuStack_c4);
  }
  if ((int *)0xa < piStack_9c) {
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_a4);
  }
  iVar3 = *(int *)param_1[0xe5];
  (**(code **)(iVar3 + 0x10))();
  uStack_100 = 2;
  uStack_104 = 0x811cf3;
  (**(code **)(iVar3 + 0x5c))();
  iStack_108 = param_1[0xe3];
  uStack_104 = 0xc0a00000;
  uStack_10c = 1;
  uStack_110 = 0x811d0c;
  (**(code **)(*(int *)param_1[0xe5] + 0x68))();
  iStack_114 = param_1[0xe5];
  uStack_110 = 1;
  uStack_118 = 0x811d1c;
  (**(code **)(*param_1 + 0xc))();
  uStack_118 = 0x811d23;
  FUN_0080ecc0(param_1);
  ExceptionList = ppiStack_a4;
  return;
}


//// FUNCTION FUN_00811d40 @ 00811d40 ////

int * __fastcall FUN_00811d40(int *param_1)

{
  int iVar1;
  void *pvVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce389a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d5b49c;
  param_1[0x14] = (int)&PTR_FUN_00d5b484;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar1 = FUN_0080a510();
  param_1[0xd8] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(param_1[0xd8] + 4) = param_1[0xd8];
  *(int *)param_1[0xd8] = param_1[0xd8];
  *(int *)(param_1[0xd8] + 8) = param_1[0xd8];
  param_1[0xd9] = 0;
  local_4._0_1_ = 2;
  iVar1 = FUN_0080a510();
  param_1[0xdb] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(param_1[0xdb] + 4) = param_1[0xdb];
  *(int *)param_1[0xdb] = param_1[0xdb];
  *(int *)(param_1[0xdb] + 8) = param_1[0xdb];
  param_1[0xdc] = 0;
  local_4._0_1_ = 3;
  iVar1 = FUN_0080a560();
  param_1[0xde] = iVar1;
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(param_1[0xde] + 4) = param_1[0xde];
  *(int *)param_1[0xde] = param_1[0xde];
  *(int *)(param_1[0xde] + 8) = param_1[0xde];
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe9] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = (int)(param_1 + 0xe6);
  param_1[0xe6] = (int)&PTR_LAB_00d5b19c;
  param_1[0xeb] = 0;
  param_1[0xef] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = (int)(param_1 + 0xec);
  param_1[0xec] = (int)&PTR_LAB_00d5b19c;
  param_1[0xf1] = 0;
  param_1[0xf5] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = (int)(param_1 + 0xf2);
  param_1[0xf2] = (int)&PTR_LAB_00d5b19c;
  param_1[0xf7] = 0;
  param_1[0xfb] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = (int)(param_1 + 0xf8);
  param_1[0xf8] = (int)&PTR_LAB_00d5b19c;
  param_1[0xfd] = 0;
  param_1[0x101] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = (int)(param_1 + 0xfe);
  param_1[0xfe] = (int)&PTR_LAB_00d5b19c;
  param_1[0x103] = 0;
  param_1[0x107] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = (int)(param_1 + 0x104);
  param_1[0x104] = (int)&PTR_FUN_00d195f8;
  param_1[0x109] = 0;
  param_1[0x10d] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = (int)(param_1 + 0x10a);
  param_1[0x10a] = (int)&PTR_FUN_00d195f8;
  param_1[0x10f] = 0;
  param_1[0x113] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = (int)(param_1 + 0x110);
  param_1[0x110] = (int)&PTR_LAB_00d5b1ac;
  param_1[0x115] = 0;
  param_1[0x119] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = (int)(param_1 + 0x116);
  param_1[0x116] = (int)&PTR_FUN_00d172a0;
  param_1[0x11b] = 0;
  param_1[0x11f] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = (int)(param_1 + 0x11c);
  param_1[0x11c] = (int)&PTR_FUN_00d172a0;
  param_1[0x121] = 0;
  param_1[0x125] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = (int)(param_1 + 0x122);
  param_1[0x122] = (int)&PTR_FUN_00d172a0;
  param_1[0x127] = 0;
  param_1[299] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = (int)(param_1 + 0x128);
  param_1[0x128] = (int)&PTR_FUN_00d172a0;
  param_1[0x12d] = 0;
  local_4._0_1_ = 0x16;
  iVar1 = FUN_0080a460();
  param_1[0x12f] = iVar1;
  param_1[0x130] = 0;
  pvVar2 = (void *)0x0;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  iVar1 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar1,pvVar2);
  FUN_0080e5b0((int)param_1);
  FUN_0080a8b0((int)param_1);
  if ((DAT_00e5bee8 == '\0') && (DAT_00e5bef8 == '\0')) {
    FUN_0080ab20(param_1,0);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"facility_publicity_office",0x19);
  local_28 = 0x19;
  local_2c[0x19] = '\0';
  local_4._0_1_ = 0x18;
  iVar1 = FUN_00845f70(&local_2c);
  *(bool *)(param_1 + 0x133) = iVar1 != 0;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x20;
  local_2c = _malloc(0x20);
  _strncpy(local_2c,"facility_customscript",0x15);
  local_28 = 0x15;
  local_2c[0x15] = '\0';
  local_4._0_1_ = 0x19;
  iVar1 = FUN_00845f70(&local_2c);
  *(bool *)((int)param_1 + 0x4cd) = iVar1 != 0;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_008118a0(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008120e0 @ 008120e0 ////

int * FUN_008120e0(void)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce38bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = operator_new(0x4d0);
  local_4 = 0;
  if (piVar1 != (int *)0x0) {
    piVar1 = FUN_00811d40(piVar1);
    ExceptionList = local_c;
    return piVar1;
  }
  ExceptionList = local_c;
  return (int *)0x0;
}


//// FUNCTION FUN_00812140 @ 00812140 ////

void __fastcall FUN_00812140(int *param_1)

{
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00812160 @ 00812160 ////

undefined4 * __fastcall FUN_00812160(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d5b978;
  return param_1;
}


//// FUNCTION FUN_008121e0 @ 008121e0 ////

int * __thiscall FUN_008121e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00812260 @ 00812260 ////

void __fastcall FUN_00812260(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce38db;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xa4);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_0046f7a0(puVar1);
  }
  local_4 = 0xffffffff;
  FUN_0046f5d0(this,0x433);
  (**(code **)(this[0xe] + 4))();
  this[0x13] = param_1;
  (**(code **)this[0xe])();
  FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00812370 @ 00812370 ////

void __thiscall FUN_00812370(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ce38fb;
  local_c = ExceptionList;
  if (param_1 == *(int *)((int)this + 0x38c)) {
    return;
  }
  puVar1 = *(undefined4 **)((int)this + 0x388);
  ExceptionList = &local_c;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = puVar1 + 0x12;
    ExceptionList = &local_c;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar1)(1);
    }
    (**(code **)(*(int *)((int)this + 0x374) + 4))();
    *(undefined4 *)((int)this + 0x388) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x374))();
  }
  if (param_1 == 2) {
    puVar1 = operator_new(0x3e4);
    uStack_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00826950(puVar1);
    }
    uStack_4 = 0xffffffff;
    (**(code **)(*(int *)((int)this + 0x374) + 4))();
    *(undefined4 **)((int)this + 0x388) = puVar1;
    (*(code *)**(undefined4 **)((int)this + 0x374))();
    (**(code **)(**(int **)((int)this + 0x358) + 0x20))(1);
    uVar3 = 0;
  }
  else {
    if (param_1 != 1) goto LAB_00812484;
    piVar2 = FUN_008120e0();
    (**(code **)(*(int *)((int)this + 0x374) + 4))();
    *(int **)((int)this + 0x388) = piVar2;
    (*(code *)**(undefined4 **)((int)this + 0x374))();
    (**(code **)(**(int **)((int)this + 0x358) + 0x20))(0);
    uVar3 = 1;
  }
  (**(code **)(**(int **)((int)this + 0x370) + 0x20))(uVar3);
  (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x388),2);
LAB_00812484:
  *(int *)((int)this + 0x38c) = param_1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008124a0 @ 008124a0 ////

void __cdecl FUN_008124a0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3926;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0104eb54 == '\0') {
    DAT_0104eb54 = '\x01';
    ExceptionList = &local_c;
    FUN_00471840("MT_FINANCE_OPENGRAPHSCREEN",0x3e3);
    FUN_00471840("MT_FINANCE_OPENSALARYSCREEN",0x40b);
    FUN_00471840("MT_FINANCE_CLOSESCREEN",0x433);
  }
  this = (undefined4 *)0x0;
  if (DAT_0104eb6c == (undefined4 *)0x0) {
    FUN_00807d30();
    puVar1 = operator_new(100);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      FUN_0053c420(puVar1);
      *puVar1 = &PTR_FUN_00d5b978;
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104eb58[1])();
    DAT_0104eb6c = puVar1;
    (*(code *)*DAT_0104eb58)();
    puVar1 = operator_new(0xa4);
    local_4 = 1;
    if (puVar1 != (undefined4 *)0x0) {
      this = FUN_0046f7a0(puVar1);
    }
    local_4 = 0xffffffff;
    FUN_0046f5d0(this,param_1);
    puVar1 = DAT_0104eb6c;
    (**(code **)(this[0xe] + 4))();
    this[0x13] = puVar1;
    (**(code **)this[0xe])();
    FUN_005e9280(DAT_0104d82c,extraout_EDX,this);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008125d0 @ 008125d0 ////

undefined4 * __thiscall FUN_008125d0(void *this,byte param_1)

{
  thunk_FUN_0053c500(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00812600 @ 00812600 ////

void FUN_00812600(void)

{
  FUN_008124a0(0x40b);
  return;
}


//// FUNCTION FUN_00812610 @ 00812610 ////

void FUN_00812610(void)

{
  FUN_008124a0(0x3e3);
  return;
}


//// FUNCTION FUN_008126b0 @ 008126b0 ////

void __fastcall FUN_008126b0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d5b9e8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00812700 @ 00812700 ////

void __fastcall FUN_00812700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5b9e8;
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


//// FUNCTION FUN_00812750 @ 00812750 ////

void __fastcall FUN_00812750(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *this;
  undefined4 extraout_EDX;
  int iVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3962;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d5ba14;
  param_1[0x14] = &PTR_FUN_00d5b9f8;
  uVar3 = 0;
  iVar2 = 2;
  local_4 = 3;
  this = (void *)FUN_004f3b20();
  FUN_004f9390(this,iVar2,uVar3);
  FUN_004237f0(DAT_00f87b04);
  FUN_0071bd00();
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  puVar1 = DAT_0104eb6c;
  if (DAT_0104eb6c != (undefined4 *)0x0) {
    iVar2 = DAT_0104eb6c[0x12];
    DAT_0104eb6c[0x12] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar1)(1);
    }
    (*(code *)DAT_0104eb58[1])();
    DAT_0104eb6c = (undefined4 *)0x0;
    (*(code *)*DAT_0104eb58)();
  }
  param_1[0xdd] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe2] = 0;
  if ((undefined4 *)param_1[0xdf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xdf] = param_1[0xde];
  }
  if (param_1[0xde] != 0) {
    *(undefined4 *)(param_1[0xde] + 4) = param_1[0xdf];
  }
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xd7] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdc] = 0;
  if ((undefined4 *)param_1[0xd9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd9] = param_1[0xd8];
  }
  if (param_1[0xd8] != 0) {
    *(undefined4 *)(param_1[0xd8] + 4) = param_1[0xd9];
  }
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd1] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd6] = 0;
  if ((undefined4 *)param_1[0xd3] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xd3] = param_1[0xd2];
  }
  if (param_1[0xd2] != 0) {
    *(undefined4 *)(param_1[0xd2] + 4) = param_1[0xd3];
  }
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  local_4 = 0xffffffff;
  FUN_00742900(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00812960 @ 00812960 ////

/* WARNING: Removing unreachable block (ram,0x00812cdc) */

int * FUN_00812960(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  void *_Memory;
  undefined1 *puVar11;
  undefined4 uStack_11c;
  uint *puStack_118;
  undefined4 uStack_114;
  uint uStack_10c;
  void *pvStack_e0;
  void *pvStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  wchar_t awStack_bc [48];
  void *pvStack_5c;
  undefined1 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_30;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce39df;
  pvStack_c = ExceptionList;
  uStack_10c = 0x812989;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x344);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_007432f0(puVar1);
  }
  local_4 = 0xffffffff;
  uStack_10c = 0x8129be;
  puVar1 = operator_new(0x360);
  local_4 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = FUN_0069ce90(puVar1);
  }
  uStack_10c = 0x42000000;
  local_4 = 0xffffffff;
  (**(code **)(*piVar3 + 0x74))();
  uStack_114 = 0x812a00;
  puVar4 = operator_new(0x3c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_0041f350(puVar4);
  }
  uStack_114 = 0x812a1b;
  puVar5 = operator_new(0x24);
  pvStack_c = (void *)0x2;
  if (puVar5 == (undefined4 *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_009910f0(puVar5);
  }
  puVar4[1] = iVar6;
  *(undefined1 *)(iVar6 + 0xc) = 6;
  pvStack_c = (void *)0xffffffff;
  *(uint *)(puVar4[1] + 0x10) = *(uint *)(puVar4[1] + 0x10) & 0xbfffffff;
  piVar7 = (int *)GetPlayerStudio();
  iVar6 = (**(code **)(*piVar7 + 0x54))();
  iVar6 = FUN_00464740(iVar6);
  if (*(int *)((int)puVar4[1] + 0x18) != iVar6) {
    uStack_114 = 0x812a7e;
    Engine_SetResourceReference((void *)puVar4[1],iVar6);
  }
  puVar4[10] = 0;
  puVar4[0xd] = 0x3f800000;
  puVar4[0xb] = 0;
  puVar4[2] = 0xffffffff;
  puVar4[0xc] = 0x3f800000;
  uStack_114 = 0x812ade;
  (**(code **)(*piVar3 + 0x104))();
  uStack_114 = 0;
  uStack_11c = 1;
  puStack_118 = (uint *)piVar2;
  (**(code **)(*piVar3 + 0x5c))();
  (**(code **)(*piVar3 + 100))(1,piVar2,0);
  (**(code **)(*piVar2 + 0xc))(piVar3,1);
  uStack_10c = uStack_10c & 0xffff0000;
  uStack_114 = 0;
  puStack_118 = &uStack_10c;
  uStack_30 = 3;
  puVar4 = FUN_0043c030(&uStack_d8);
  uStack_30 = CONCAT31(uStack_30._1_3_,4);
  piVar7 = (int *)GetPlayerStudio();
  puVar11 = &stack0xffffff08;
  puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x20))();
  uStack_34 = 5;
  FUN_0040cae0(&uStack_11c,(wchar_t *)*puVar5,puVar5[1]);
  sVar8 = FUN_00ace02d(L" - <translate>SALARYADJUST_FINANCES</translate> - ");
  FUN_0040cae0(&uStack_11c,L" - <translate>SALARYADJUST_FINANCES</translate> - ",sVar8);
  FUN_0040cae0(&uStack_11c,(wchar_t *)*puVar4,puVar4[1]);
  sVar8 = FUN_00ace02d((short *)&DAT_00d184c4);
  FUN_0040cae0(&uStack_11c,L" ",sVar8);
  uVar10 = FUN_0043b560();
  sVar8 = _swprintf(awStack_bc,0xd18f7c,(wchar_t *)uVar10);
  FUN_0040cae0(&uStack_11c,awStack_bc,sVar8);
  if (&lpType_0000000a < puVar1) {
                    /* WARNING: Subroutine does not return */
    _free((void *)0xffffffff);
  }
  uStack_34 = 3;
  if (10 < uStack_d4) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_dc);
  }
  puVar1 = operator_new(0x3fc);
  uStack_34 = 6;
  if (puVar1 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = FUN_00833290(puVar1);
  }
  uStack_34 = 3;
  piVar7[0xd5] = 0x44800000;
  *(undefined1 *)(piVar7 + 0xd6) = 1;
  FUN_00830550(piVar7,9,&DAT_00e5c188);
  uVar9 = FUN_00ace02d((short *)&DAT_00d5bb10);
  FUN_004036d0(&stack0xffffff04,L"s1",uVar9);
  uStack_34 = 7;
  puVar1 = FUN_008319b0(&pvStack_dc,(undefined4 *)&stack0xffffff04,&uStack_11c);
  uStack_34 = 8;
  (**(code **)(*piVar7 + 0x54))(puVar1);
  if (uStack_d8 < 0xb) {
    uStack_38 = 3;
    _Memory = (void *)0x0;
    (**(code **)(*piVar7 + 0x84))();
    (**(code **)(*piVar7 + 0x5c))(2,piVar3,0);
    FUN_0073e5e0(piVar7,piVar3);
    (**(code **)(*piVar2 + 0xc))(piVar7,1);
    (**(code **)(*piVar2 + 0x84))(0);
    if (puVar11 < (undefined1 *)0xb) {
      ExceptionList = pvStack_5c;
      return piVar2;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_e0);
}


//// FUNCTION FUN_00812d50 @ 00812d50 ////

void __fastcall FUN_00812d50(int *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  uint unaff_EBX;
  undefined1 **unaff_ESI;
  bool bVar6;
  undefined1 *puStack_d8;
  int *piStack_d4;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *local_98;
  void *local_94;
  char *local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  char acStack_84 [20];
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined2 auStack_64 [20];
  undefined4 uStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3b39;
  pvStack_c = ExceptionList;
  local_98 = (undefined1 *)0x0;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0x50);
  local_4 = 0;
  local_94 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    local_90 = &stack0xffffff38;
    pcVar8 = &stack0xffffff44;
    iVar7 = 0;
    uVar9 = 0x14;
    piStack_d4 = (int *)0x812db8;
    FUN_004015d0(&stack0xffffff38,"ui/costume_background.dds",0x19);
    FUN_005e4a50(pvVar2,pcVar8,iVar7,uVar9);
  }
  local_4 = 0xffffffff;
  (**(code **)(*param_1 + 0xa0))();
  pvVar2 = operator_new(0x420);
  local_94 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puStack_70 = auStack_64;
    auStack_64[0] = 0;
    uStack_6c = 0;
    uStack_68 = 10;
    uVar9 = FUN_00ace02d(L"<translate>FINANCE_TOOLTIP_GRAPHS</translate>");
    FUN_004036d0(&puStack_70,L"<translate>FINANCE_TOOLTIP_GRAPHS</translate>",uVar9);
    local_90 = acStack_84;
    acStack_84[0] = '\0';
    uStack_8c = 0;
    uStack_88 = 0x14;
    _strncpy(local_90,"button_left.",0xc);
    uStack_8c = 0xc;
    local_90[0xc] = '\0';
    local_98 = &stack0xffffff44;
    puStack_8 = (undefined1 *)0x3;
    unaff_EBX = 3;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&local_90,&puStack_70,0x42600000,0x42600000,0,0,0x3f800000,
                          0x3f800000);
  }
  puStack_8 = (undefined1 *)0x5;
  (**(code **)(param_1[0xd1] + 4))();
  param_1[0xd6] = (int)puVar3;
  (**(code **)param_1[0xd1])();
  if (((unaff_EBX & 2) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffd, 0x14 < uStack_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (((unaff_EBX & 1) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffe, 10 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_70);
  }
  uVar10 = 0;
  (**(code **)(*(int *)param_1[0xd6] + 0x18))();
  pcVar8 = (char *)0x0;
  (**(code **)(*(int *)param_1[0xd6] + 0x18))();
  uVar9 = 0x40c00000;
  puStack_d8 = (undefined1 *)0x1;
  piStack_d4 = param_1;
  (**(code **)(*(int *)param_1[0xd6] + 0x5c))();
  FUN_0073e5e0((void *)param_1[0xd6],param_1);
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    unaff_ESI = &local_98;
    local_98 = (undefined1 *)((uint)local_98 & 0xffff0000);
    unaff_EBX = 10;
    uVar10 = FUN_00ace02d(L"<translate>FINANCE_TOOLTIP_SALARIES</translate>");
    FUN_004036d0(&stack0xffffff5c,L"<translate>FINANCE_TOOLTIP_SALARIES</translate>",uVar10);
    pcVar8 = &stack0xffffff48;
    uVar10 = 0x14;
    _strncpy(pcVar8,"button_right.",0xd);
    pcVar8[0xd] = '\0';
    uVar9 = uVar9 | 0xc;
    uStack_3c = 8;
    puVar3 = FUN_0069fb10(pvVar2,(int *)&stack0xffffff3c,(undefined4 *)&stack0xffffff5c,0x42600000,
                          0x42600000,0,0,0x3f800000,0x3f800000);
  }
  uStack_3c = 10;
  (**(code **)(param_1[0xd7] + 4))();
  param_1[0xdc] = (int)puVar3;
  (**(code **)param_1[0xd7])();
  if (((uVar9 & 8) != 0) && (uVar9 = uVar9 & 0xfffffff7, 0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  uStack_3c = 0xffffffff;
  if (((uVar9 & 4) != 0) && (uVar9 = uVar9 & 0xfffffffb, 10 < unaff_EBX)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_ESI);
  }
  uVar10 = 0;
  (**(code **)(*(int *)param_1[0xdc] + 0x18))();
  pcVar8 = (char *)0x0;
  (**(code **)(*(int *)param_1[0xdc] + 0x18))();
  (**(code **)(*(int *)param_1[0xdc] + 0x60))();
  FUN_0073e5e0((void *)param_1[0xdc],param_1);
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  bVar6 = pvVar2 == (void *)0x0;
  if (bVar6) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_d8 = &stack0xffffff34;
    piStack_d4 = (int *)0x0;
    uVar9 = 10;
    uVar10 = FUN_00ace02d(L"<translate>FINANCE_TOOLTIP_CANCEL</translate>");
    FUN_004036d0(&puStack_d8,L"<translate>FINANCE_TOOLTIP_CANCEL</translate>",uVar10);
    pcVar8 = &stack0xffffff14;
    uVar10 = 0x14;
    _strncpy(pcVar8,"button_goback.",0xe);
    pcVar8[0xe] = '\0';
    puStack_70 = (undefined2 *)0xd;
    piVar4 = FUN_0069fb10(pvVar2,(int *)&stack0xffffff08,&puStack_d8,0x42600000,0x42600000,0,0,
                          0x3f800000,0x3f800000);
  }
  if ((!bVar6) && (0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  puStack_70 = (undefined2 *)0xffffffff;
  if ((!bVar6) && (10 < uVar9)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_d8);
  }
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x5c))();
  bVar5 = 0;
  (**(code **)(*piVar4 + 100))();
  (**(code **)(*param_1 + 0xc))();
  pvVar2 = operator_new(0x420);
  if (pvVar2 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puStack_d8 = &stack0xffffff34;
    piStack_d4 = (int *)0x0;
    uVar9 = 10;
    uVar10 = FUN_00ace02d(L"<translate>FINANCE_TOOLTIP_CONFIRM</translate>");
    FUN_004036d0(&puStack_d8,L"<translate>FINANCE_TOOLTIP_CONFIRM</translate>",uVar10);
    pcVar8 = &stack0xffffff14;
    uVar10 = 0x14;
    _strncpy(pcVar8,"button_tick.",0xc);
    pcVar8[0xc] = '\0';
    bVar5 = 0xc0;
    piVar4 = FUN_0069fb10(pvVar2,(int *)&stack0xffffff08,&puStack_d8,0x42600000,0x42600000,0,0,
                          0x3f800000,0x3f800000);
  }
  if (((char)bVar5 < '\0') && (bVar5 = bVar5 & 0x7f, 0x14 < uVar10)) {
                    /* WARNING: Subroutine does not return */
    _free(pcVar8);
  }
  if (((bVar5 & 0x40) != 0) && (10 < uVar9)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_d8);
  }
  (**(code **)(*piVar4 + 0x18))();
  (**(code **)(*piVar4 + 0x18))(5,&LAB_005f37f0,0,"FINANCE_CONFIRM");
  (**(code **)(*piVar4 + 0x60))(2,param_1,0x40c00000);
  (**(code **)(*piVar4 + 0x68))(2,param_1,0x40c00000);
  (**(code **)(*param_1 + 0xc))(piVar4,1);
  do {
    cVar1 = (**(code **)(*param_1 + 0x50))(1);
  } while (cVar1 != '\0');
  ExceptionList = pcVar8;
  return;
}


//// FUNCTION FUN_00813490 @ 00813490 ////

int * __fastcall FUN_00813490(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 extraout_EDX;
  void *unaff_ESI;
  int iVar3;
  uint uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3b82;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  *param_1 = (int)&PTR_FUN_00d5ba14;
  param_1[0x14] = (int)&PTR_FUN_00d5b9f8;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = (int)(param_1 + 0xd1);
  param_1[0xd1] = (int)&PTR_FUN_00d172a0;
  param_1[0xd6] = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = (int)(param_1 + 0xd7);
  param_1[0xd7] = (int)&PTR_FUN_00d172a0;
  param_1[0xdc] = 0;
  param_1[0xe0] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = (int)(param_1 + 0xdd);
  param_1[0xdd] = (int)&PTR_FUN_00d18c2c;
  param_1[0xe2] = 0;
  uVar4 = 1;
  iVar3 = 2;
  local_4 = 3;
  param_1[0xe3] = 0;
  pvVar1 = (void *)FUN_004f3b20();
  FUN_004f9390(pvVar1,iVar3,uVar4);
  FUN_0053ca50();
  FUN_0071c290();
  FUN_00424130(DAT_00f87b04,1,0,0);
  piVar2 = (int *)FUN_0071b2b0();
  (**(code **)(*piVar2 + 0xc))(param_1,1);
  pvVar1 = (void *)0x0;
  iVar3 = FUN_0071b2b0();
  FUN_00741d80(param_1,iVar3,pvVar1);
  FUN_00812d50(param_1);
  FUN_005e98d0(DAT_0104d82c,extraout_EDX);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_00813590 @ 00813590 ////

undefined4 * __thiscall FUN_00813590(void *this,byte param_1)

{
  FUN_00812750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00813680 @ 00813680 ////

undefined4 __fastcall FUN_00813680(int param_1)

{
  return *(undefined4 *)(param_1 + 0x344);
}


//// FUNCTION FUN_00813690 @ 00813690 ////

void __fastcall FUN_00813690(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_00806780(*(void **)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x008136a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)(param_1 + 0x10))();
    return;
  }
  return;
}


//// FUNCTION FUN_008136d0 @ 008136d0 ////

void __fastcall FUN_008136d0(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      FUN_00806780(*(void **)(pcVar1 + 0x10));
      (**(code **)**(undefined4 **)(pcVar1 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00813740 @ 00813740 ////

void __fastcall FUN_00813740(undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      FUN_00806780(*(void **)(pcVar1 + 0x10));
      (**(code **)**(undefined4 **)(pcVar1 + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00813780 @ 00813780 ////

int * __thiscall FUN_00813780(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_008137e0 @ 008137e0 ////

int __fastcall FUN_008137e0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x14;
}


//// FUNCTION FUN_008139b0 @ 008139b0 ////

void __cdecl FUN_008139b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
  }
  return;
}


//// FUNCTION FUN_00813a30 @ 00813a30 ////

void __cdecl FUN_00813a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3 = param_3 + 5;
  }
  return;
}


//// FUNCTION FUN_00813a80 @ 00813a80 ////

void __cdecl FUN_00813a80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_1 != param_2) {
    param_3[-5] = param_2[-5];
    param_3[-4] = param_2[-4];
    param_3[-3] = param_2[-3];
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -5;
    param_3 = param_3 + -5;
  }
  return;
}


//// FUNCTION FUN_00813b70 @ 00813b70 ////

void __thiscall FUN_00813b70(void *this,float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int unaff_EBX;
  float10 fVar6;
  float unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ce3bc6;
  local_c = ExceptionList;
  iVar2 = *(int *)(param_2 + 4);
  if (iVar2 == 1) {
    ExceptionList = &local_c;
    FUN_005e5420();
    FUN_005e5420();
    ExceptionList = local_c;
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
      ExceptionList = &local_c;
      pfVar4 = operator_new(0x70);
      local_4 = 1;
      if (pfVar4 == (float *)0x0) {
        pfVar4 = (float *)0x0;
      }
      else {
        FUN_00401380(pfVar4,0x1c,4,&LAB_007bd790);
      }
      local_4 = 0xffffffff;
      puVar5 = operator_new(0xc);
      fVar3 = *(float *)(param_2 + 0x10) * 0.5;
      fVar1 = param_1[1];
      *pfVar4 = *param_1;
      pfVar4[1] = fVar1 - fVar3;
      pfVar4[2] = 1.0;
      fVar1 = param_1[1];
      pfVar4[7] = *param_1 - fVar3;
      pfVar4[8] = fVar1;
      pfVar4[9] = 1.0;
      fVar1 = param_1[1];
      pfVar4[0xe] = *param_1;
      pfVar4[0xf] = fVar3 + fVar1;
      pfVar4[0x10] = 1.0;
      fVar1 = param_1[1];
      pfVar4[0x15] = fVar3 + *param_1;
      pfVar4[0x16] = fVar1;
      pfVar4[0x17] = 1.0;
      pfVar4[4] = *(float *)(param_2 + 0xc);
      pfVar4[0xb] = *(float *)(param_2 + 0xc);
      pfVar4[0x12] = *(float *)(param_2 + 0xc);
      pfVar4[0x19] = *(float *)(param_2 + 0xc);
      pfVar4[5] = 0.0;
      pfVar4[3] = 0.0;
      pfVar4[10] = 0.0;
      pfVar4[0x11] = 0.0;
      pfVar4[0x18] = 0.0;
      pfVar4[6] = 0.0;
      pfVar4[0xc] = 0.0;
      pfVar4[0xd] = 1.0;
      pfVar4[0x13] = 1.0;
      pfVar4[0x14] = 0.0;
      pfVar4[0x1a] = 1.0;
      pfVar4[0x1b] = 1.0;
      *(undefined2 *)puVar5 = 0;
      *(undefined2 *)((int)puVar5 + 2) = 1;
      *(undefined2 *)(puVar5 + 1) = 3;
      *(undefined2 *)((int)puVar5 + 6) = 3;
      *(undefined2 *)(puVar5 + 2) = 1;
      *(undefined2 *)((int)puVar5 + 10) = 2;
      FUN_00a24a80((int *)0x4,pfVar4,2,puVar5);
                    /* WARNING: Subroutine does not return */
      _free(pfVar4);
    }
    return;
  }
  ExceptionList = &local_c;
  pfVar4 = operator_new(0x70);
  local_4 = 0;
  if (pfVar4 == (float *)0x0) {
    pfVar4 = (float *)0x0;
  }
  else {
    FUN_00401380(pfVar4,0x1c,4,&LAB_007bd790);
  }
  local_4 = 0xffffffff;
  puVar5 = operator_new(0xc);
  fVar1 = param_1[1];
  *pfVar4 = *param_1 - *(float *)(param_2 + 0x10) * 0.5;
  pfVar4[1] = fVar1;
  pfVar4[2] = 1.0;
  fVar6 = (float10)(**(code **)(**(int **)((int)this + 0x374) + 0x120))(0);
  pfVar4[7] = *param_1 - (float)param_1;
  pfVar4[8] = (float)fVar6;
  pfVar4[9] = 1.0;
  fVar1 = param_1[1];
  pfVar4[0xe] = (float)param_1 + *param_1;
  pfVar4[0xf] = fVar1;
  pfVar4[0x10] = 1.0;
  fVar6 = (float10)(**(code **)(**(int **)(unaff_EBX + 0x374) + 0x120))(0);
  pfVar4[0x15] = unaff_retaddr + *param_1;
  pfVar4[0x16] = (float)fVar6;
  pfVar4[0x17] = 1.0;
  pfVar4[4] = *(float *)(param_2 + 0xc);
  pfVar4[0xb] = *(float *)(param_2 + 0xc);
  pfVar4[0x12] = *(float *)(param_2 + 0xc);
  pfVar4[0x19] = *(float *)(param_2 + 0xc);
  pfVar4[3] = 0.0;
  pfVar4[10] = 0.0;
  pfVar4[0x11] = 0.0;
  pfVar4[0x18] = 0.0;
  pfVar4[6] = 0.0;
  pfVar4[5] = 0.0;
  pfVar4[0xc] = 0.0;
  pfVar4[0xd] = 1.0;
  pfVar4[0x14] = 0.0;
  pfVar4[0x13] = 1.0;
  pfVar4[0x1a] = 1.0;
  pfVar4[0x1b] = 1.0;
  *(undefined2 *)puVar5 = 0;
  *(undefined2 *)(puVar5 + 2) = 0;
  *(undefined2 *)((int)puVar5 + 2) = 1;
  *(undefined2 *)(puVar5 + 1) = 3;
  *(undefined2 *)((int)puVar5 + 6) = 2;
  *(undefined2 *)((int)puVar5 + 10) = 3;
  FUN_00a24a80((int *)0x4,pfVar4,2,puVar5);
                    /* WARNING: Subroutine does not return */
  _free(pfVar4);
}


//// FUNCTION FUN_008140a0 @ 008140a0 ////

void __thiscall FUN_008140a0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float local_8;
  float local_4;
  
  if (*(char *)this == '\0') {
    local_8 = *(float *)((int)this + 8);
  }
  else {
    local_8 = *(float *)((int)this + 4);
  }
  fVar1 = *param_1 - *(float *)((int)this + 0x14);
  fVar2 = param_1[1] - *(float *)((int)this + 0x18);
  fVar1 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  if (*(char *)((int)this + 0x1c) == '\0') {
    if (fVar1 < 0.5) {
      return;
    }
    fVar2 = fVar1 + *(float *)((int)this + 0xc);
    if (local_8 <= fVar2) {
      fVar2 = local_8 - *(float *)((int)this + 0xc);
      local_8 = (*param_1 - *(float *)((int)this + 0x14)) * fVar2 * (1.0 / fVar1) +
                *(float *)((int)this + 0x14);
      local_4 = (1.0 / fVar1) * (param_1[1] - *(float *)((int)this + 0x18)) * fVar2 +
                *(float *)((int)this + 0x18);
      FUN_00805de0(*(void **)((int)this + 0x10),&local_8);
      if (*(char *)this == '\0') {
        *(undefined1 *)this = 1;
      }
      else {
        FUN_00806780(*(void **)((int)this + 0x10));
        (**(code **)**(undefined4 **)((int)this + 0x10))();
        FUN_00805390(*(int *)((int)this + 0x10));
        *(undefined1 *)this = 0;
      }
      *(float *)((int)this + 0x18) = local_4;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(float *)((int)this + 0x14) = local_8;
      FUN_008140a0(this,param_1);
      return;
    }
    *(float *)((int)this + 0xc) = fVar2;
  }
  else {
    *(undefined1 *)((int)this + 0x1c) = 0;
  }
  if (*(char *)this != '\0') {
    FUN_00805de0(*(void **)((int)this + 0x10),param_1);
  }
  *(float *)((int)this + 0x14) = *param_1;
  *(float *)((int)this + 0x18) = param_1[1];
  return;
}


//// FUNCTION FUN_00814220 @ 00814220 ////

void __thiscall FUN_00814220(void *this,float *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  if (*(int *)this == 0) {
    puVar2 = operator_new(0x20);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 4);
      *puVar2 = 1;
      *(undefined4 *)(puVar2 + 4) = 0x4e6e6b28;
      *(undefined4 *)(puVar2 + 8) = 0x41000000;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      *(undefined4 *)(puVar2 + 0x10) = uVar1;
      puVar2[0x1c] = 1;
    }
    *(undefined1 **)this = puVar2;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((int)this + 8);
  }
  FUN_008140a0(*(void **)this,param_1);
  return;
}


//// FUNCTION FUN_00814280 @ 00814280 ////

void __thiscall FUN_00814280(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)((int)this + 0x25) != '\0') {
    fVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = fVar1;
    return;
  }
  if ((*(float *)((int)this + 0xc) <= *(float *)((int)this + 0x1c)) ||
     (*param_2 < *(float *)((int)this + 0xc))) {
    if ((*(float *)((int)this + 0x1c) < *(float *)((int)this + 0x14) ==
         (*(float *)((int)this + 0x1c) == *(float *)((int)this + 0x14))) ||
       (*param_2 <= *(float *)((int)this + 0x14))) {
      fVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = fVar1;
      return;
    }
    fVar2 = *param_2 - *(float *)((int)this + 0x1c);
    fVar3 = param_2[1] - *(float *)((int)this + 0x20);
    fVar1 = *(float *)((int)this + 0x14);
  }
  else {
    fVar2 = *param_2 - *(float *)((int)this + 0x1c);
    fVar3 = param_2[1] - *(float *)((int)this + 0x20);
    fVar1 = *(float *)((int)this + 0xc);
  }
  fVar4 = (fVar1 - *(float *)((int)this + 0x1c)) / (*param_2 - *(float *)((int)this + 0x1c));
  fVar1 = *(float *)((int)this + 0x20);
  *param_1 = fVar2 * fVar4 + *(float *)((int)this + 0x1c);
  param_1[1] = fVar3 * fVar4 + fVar1;
  return;
}


//// FUNCTION FUN_00814560 @ 00814560 ////

void __cdecl FUN_00814560(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
    }
    param_3 = param_3 + 5;
  }
  return;
}


//// FUNCTION FUN_008145b0 @ 008145b0 ////

void __thiscall FUN_008145b0(void *this,float *param_1)

{
  char *pcVar1;
  float fVar2;
  float *pfVar3;
  undefined1 uVar4;
  float local_8 [2];
  
  if ((*param_1 < *(float *)((int)this + 0xc)) ||
     (*param_1 < *(float *)((int)this + 0x14) == (*param_1 == *(float *)((int)this + 0x14)))) {
    uVar4 = 0;
    if (*(char *)((int)this + 0x24) != '\0') {
      pfVar3 = (float *)FUN_00814280(this,local_8,param_1);
      FUN_00814220(this,pfVar3);
      pcVar1 = *(char **)this;
      if (pcVar1 != (char *)0x0) {
        if (*pcVar1 != '\0') {
          FUN_00806780(*(void **)(pcVar1 + 0x10));
          (**(code **)**(undefined4 **)(pcVar1 + 0x10))();
        }
                    /* WARNING: Subroutine does not return */
        _free(*(void **)this);
      }
    }
  }
  else {
    uVar4 = 1;
    if (*(char *)((int)this + 0x24) == '\0') {
      pfVar3 = (float *)FUN_00814280(this,local_8,param_1);
      FUN_00814220(this,pfVar3);
    }
    FUN_00814220(this,param_1);
  }
  *(float *)((int)this + 0x1c) = *param_1;
  fVar2 = param_1[1];
  *(undefined1 *)((int)this + 0x24) = uVar4;
  *(float *)((int)this + 0x20) = fVar2;
  *(undefined1 *)((int)this + 0x25) = 0;
  return;
}


//// FUNCTION FUN_008146c0 @ 008146c0 ////

void __fastcall FUN_008146c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d5bd14;
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


//// FUNCTION FUN_008147c0 @ 008147c0 ////

void __cdecl FUN_008147c0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
      param_1[4] = param_3[4];
    }
    param_1 = param_1 + 5;
  }
  return;
}


//// FUNCTION FUN_00814880 @ 00814880 ////

int __thiscall FUN_00814880(void *this,uint param_1)

{
  uint uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)((int)this + 0x3a4) == 0) ||
     ((uint)((*(int *)((int)this + 0x3a8) - *(int *)((int)this + 0x3a4)) / 0x14) <= param_1)) {
    if (*(int *)((int)this + 0x3a4) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (*(int *)((int)this + 0x3a8) - *(int *)((int)this + 0x3a4)) / 0x14;
      if (param_1 < uVar1) goto LAB_00814926;
    }
    do {
      local_14 = 0;
      local_10 = 0;
      local_c = 2;
      local_4 = 0x41000000;
      local_8 = (&DAT_00e5c1cc)[uVar1 % 6];
      (**(code **)(*(int *)this + 0x10c))(uVar1,&local_14);
      uVar1 = uVar1 + 1;
    } while (uVar1 <= param_1);
  }
LAB_00814926:
  return *(int *)((int)this + 0x3a4) + param_1 * 0x14;
}


//// FUNCTION FUN_00814ec0 @ 00814ec0 ////

undefined4 * FUN_00814ec0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_008147c0(param_1,param_2,param_3);
  return param_1 + param_2 * 5;
}


//// FUNCTION FUN_00814ef0 @ 00814ef0 ////

void __fastcall FUN_00814ef0(int param_1)

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


//// FUNCTION FUN_00814f60 @ 00814f60 ////

void * __thiscall FUN_00814f60(void *this,byte param_1)

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


//// FUNCTION FUN_00814fa0 @ 00814fa0 ////

void * __thiscall FUN_00814fa0(void *this,byte param_1)

{
  FUN_00703e70((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00814fc0 @ 00814fc0 ////

void __fastcall FUN_00814fc0(int param_1)

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


//// FUNCTION FUN_00815020 @ 00815020 ////

void FUN_00815020(void)

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
  puStack_8 = &LAB_00ce3c48;
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


//// FUNCTION FUN_00815090 @ 00815090 ////

void FUN_00815090(void)

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
  puStack_8 = &LAB_00ce3c68;
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


//// FUNCTION FUN_00815100 @ 00815100 ////

void FUN_00815100(int param_1)

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


//// FUNCTION FUN_008151d0 @ 008151d0 ////

void __thiscall FUN_008151d0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ce3c80;
  local_10 = ExceptionList;
  local_28 = *param_3;
  local_24 = param_3[1];
  iVar3 = *(int *)((int)this + 4);
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = &stack0xffffffcc;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x14;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffcc;
    if (0xcccccccU - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_00815090();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x14;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0xccccccc - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x14;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_008137e0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x14);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_00814560(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_008147c0(puVar5,param_2,&local_28);
      FUN_00814560(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 5);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 5;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 5;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x14) < param_2) {
      FUN_00814560(param_1,puVar4,param_1 + param_2 * 5);
      local_8 = 2;
      FUN_00814ec0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x14,&local_28)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x14;
      *(int *)((int)this + 8) = iVar3;
      FUN_008139b0(param_1,(undefined4 *)(iVar3 + param_2 * -0x14),&local_28);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00814560(puVar4 + param_2 * -5,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00813a80(param_1,puVar4 + param_2 * -5,puVar4);
    FUN_008139b0(param_1,param_1 + param_2 * 5,&local_28);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_008154a0 @ 008154a0 ////

void * __cdecl FUN_008154a0(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_004acae0(param_3,param_1);
    param_1 = (void *)((int)param_1 + 0x10);
    param_3 = (void *)((int)param_3 + 0x10);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_008154e0 @ 008154e0 ////

void __cdecl FUN_008154e0(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) break;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    param_1 = param_1 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00815520 @ 00815520 ////

void * __cdecl FUN_00815520(void *param_1,void *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = (void *)((int)param_2 + -0x10);
    param_3 = (void *)((int)param_3 + -0x10);
    FUN_004acae0(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_00815560 @ 00815560 ////

void __cdecl FUN_00815560(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ce3ca1;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_004aca10(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008155d0 @ 008155d0 ////

void __thiscall FUN_008155d0(void *this,uint param_1)

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
    uVar3 = (*(int *)((int)this + 8) - iVar4) / 0x14;
  }
  if (param_1 <= uVar3) {
    if (((iVar4 != 0) &&
        (puVar2 = *(undefined4 **)((int)this + 8), param_1 < (uint)(((int)puVar2 - iVar4) / 0x14)))
       && (puVar1 = (undefined4 *)(iVar4 + param_1 * 0x14), puVar1 != puVar2)) {
      uVar5 = FUN_00813a30(puVar2,puVar2,puVar1);
      *(undefined4 *)((int)this + 8) = uVar5;
    }
    return;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 8) - iVar4) / 0x14;
  }
  FUN_008151d0(this,*(undefined4 **)((int)this + 8),param_1 - iVar4,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_008156c0 @ 008156c0 ////

void __cdecl FUN_008156c0(void *param_1,void *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x10)) {
    FUN_004acae0(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_00815730 @ 00815730 ////

void * __cdecl FUN_00815730(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ce3cc1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004aca10(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}


//// FUNCTION FUN_008157c0 @ 008157c0 ////

void __cdecl
FUN_008157c0(void *param_1,float *param_2,undefined4 *param_3,undefined4 *param_4,float param_5)

{
  float local_18 [3];
  undefined4 local_c;
  float local_8;
  float local_4;
  
  local_8 = *param_2;
  local_4 = param_2[1];
  local_18[2] = (float)*param_3;
  local_c = param_3[1];
  local_18[0] = param_5;
  local_18[1] = 0.0;
  FUN_00747290(param_1,&local_8);
  FUN_00747290(param_1,local_18 + 2);
  FUN_00747290(param_1,local_18);
  FUN_0080d8c0(&local_8,local_18 + 2,param_4,local_18[0]);
  return;
}


//// FUNCTION FUN_00815840 @ 00815840 ////

void __fastcall FUN_00815840(int param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  undefined4 *puVar4;
  float fVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)(*(int *)(param_1 + 0x344) + 0xc0);
  pvVar3 = *(void **)(param_1 + 0x2d4);
  fVar2 = *(float *)(*(int *)(param_1 + 0x344) + 0xe4);
  fVar5 = 5.0;
  local_10 = fVar1;
  local_c = fVar2 + 16.0;
  local_8 = fVar1;
  local_4 = fVar2;
  puVar4 = (undefined4 *)FUN_00816c90();
  FUN_008157c0(pvVar3,&local_8,&local_10,puVar4,fVar5);
  local_8 = fVar1 - 16.0;
  pvVar3 = *(void **)(param_1 + 0x2d4);
  fVar5 = 5.0;
  local_10 = fVar1;
  local_c = fVar2;
  local_4 = fVar2;
  puVar4 = (undefined4 *)FUN_00816c90();
  FUN_008157c0(pvVar3,&local_10,&local_8,puVar4,fVar5);
  if ((*(int *)(param_1 + 0x38c) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0x38c) + 0x218) >> 4 & 1) != 0)) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x344) + 0x108);
    pvVar3 = *(void **)(param_1 + 0x2d4);
    fVar5 = 5.0;
    local_10 = fVar1;
    local_c = fVar2;
    local_8 = fVar1;
    local_4 = fVar2 + 16.0;
    puVar4 = (undefined4 *)FUN_00816c90();
    FUN_008157c0(pvVar3,&local_10,&local_8,puVar4,fVar5);
    local_8 = fVar1 + 16.0;
    pvVar3 = *(void **)(param_1 + 0x2d4);
    fVar5 = 5.0;
    local_10 = fVar1;
    local_c = fVar2;
    local_4 = fVar2;
    puVar4 = (undefined4 *)FUN_00816c90();
    FUN_008157c0(pvVar3,&local_10,&local_8,puVar4,fVar5);
  }
  return;
}


//// FUNCTION FUN_008159b0 @ 008159b0 ////

void __thiscall FUN_008159b0(void *this,uint param_1)

{
  FUN_008155d0(this,param_1);
  return;
}


//// FUNCTION FUN_00815a10 @ 00815a10 ////

void FUN_00815a10(int param_1,int param_2)

{
  FUN_008154e0(param_1,param_2);
  return;
}


