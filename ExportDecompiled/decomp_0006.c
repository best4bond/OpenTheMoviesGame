//// FUNCTION FUN_0048ff70 @ 0048ff70 ////

void __fastcall FUN_0048ff70(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0048fbd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0048ffa0 @ 0048ffa0 ////

void FUN_0048ffa0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca520b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00853920(FUN_0048fdd0);
  puVar1 = operator_new(0xd8);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00559fb0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104a664[1])();
  DAT_0104a678 = puVar2;
  (*(code *)*DAT_0104a664)();
  FUN_0048f160();
  Campaign_LoadYearFromSave();
  DAT_0104a650 = 1;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00490060 @ 00490060 ////

void __fastcall FUN_00490060(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0048fbd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00490090 @ 00490090 ////

int __fastcall FUN_00490090(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0048f380();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004900f0 @ 004900f0 ////

void __thiscall FUN_004900f0(void *this,int param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 + *(float *)((int)this + param_1 * 4 + 0x18);
  if (fVar1 < 0.0) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x18) = 0;
    return;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  *(float *)((int)this + param_1 * 4 + 0x18) = fVar1;
  return;
}


//// FUNCTION FUN_00490200 @ 00490200 ////

void __fastcall FUN_00490200(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  uVar2 = 5;
  fVar1 = -1.0;
  if (-1.0 < ABS((float)param_1[1] - (float)param_1[6])) {
    uVar2 = 0;
    fVar1 = ABS((float)param_1[1] - (float)param_1[6]);
  }
  if (fVar1 < ABS((float)param_1[2] - (float)param_1[7])) {
    uVar2 = 1;
    fVar1 = ABS((float)param_1[2] - (float)param_1[7]);
  }
  if (fVar1 < ABS((float)param_1[3] - (float)param_1[8])) {
    uVar2 = 2;
    fVar1 = ABS((float)param_1[3] - (float)param_1[8]);
  }
  if (fVar1 < ABS((float)param_1[4] - (float)param_1[9])) {
    uVar2 = 3;
    fVar1 = ABS((float)param_1[4] - (float)param_1[9]);
  }
  if (fVar1 < ABS((float)param_1[5] - (float)param_1[10])) {
    *param_1 = 4;
    return;
  }
  *param_1 = uVar2;
  return;
}


//// FUNCTION FUN_004902b0 @ 004902b0 ////

undefined4 * __thiscall FUN_004902b0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  FUN_0043b460((undefined4 *)((int)this + 0x30));
  iVar2 = 5;
  do {
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)this = 5;
  FUN_00490200(this);
  *(undefined4 *)((int)this + 0x30) = DAT_00e50bb8;
  return this;
}


//// FUNCTION FUN_00490340 @ 00490340 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00490340(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  void *this;
  undefined4 *puVar4;
  uint uVar5;
  float10 extraout_ST0;
  float10 fVar6;
  char **ppcVar7;
  float *pfVar8;
  float afStack_34 [2];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [16];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5228;
  pvStack_c = ExceptionList;
  fVar1 = (float)param_1[6] - _DAT_00e50bb4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  ExceptionList = &pvStack_c;
  param_1[6] = fVar1;
  fVar1 = (float)param_1[7] - _DAT_00e50bb4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[7] = fVar1;
  fVar1 = (float)param_1[8] - _DAT_00e50bb4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[8] = fVar1;
  fVar1 = (float)param_1[9] - _DAT_00e50bb4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[9] = fVar1;
  fVar1 = (float)param_1[10] - _DAT_00e50bb4;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  param_1[10] = fVar1;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"play",4);
  local_28 = 4;
  local_2c[4] = '\0';
  ppcVar7 = &local_2c;
  local_4 = 0;
  iVar2 = FUN_00598b60(param_1[0xb]);
  piVar3 = FUN_00442050((void *)(iVar2 + 0x60),ppcVar7);
  param_1[2] = *piVar3;
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x27c))();
  if (iVar2 != 0) {
    pfVar8 = afStack_34;
    iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x27c))();
    this = (void *)FUN_004725b0(iVar2);
    FUN_00566e50(this,pfVar8);
    param_1[4] = afStack_34[0];
    iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x27c))();
    iVar2 = FUN_004725b0(iVar2);
    FUN_00566e40(iVar2);
    fVar6 = (float10)1.0 - extraout_ST0;
    if ((float10)0.0 <= fVar6) {
      if ((float10)1.0 < fVar6) {
        fVar6 = (float10)1.0;
      }
    }
    else {
      fVar6 = (float10)0.0;
    }
    afStack_34[0] = (float)fVar6;
    param_1[3] = afStack_34[0];
  }
  puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[0xb] + 0x230))(afStack_34);
  param_1[5] = *puVar4;
  puVar4 = (undefined4 *)FUN_00585ff0((void *)param_1[0xb],afStack_34);
  param_1[1] = *puVar4;
  uVar5 = FUN_0043b490(param_1 + 0xc);
  if ((char)uVar5 != '\0') {
    FUN_00490200(param_1);
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_004906c0 @ 004906c0 ////

void __cdecl FUN_004906c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00490870 @ 00490870 ////

void __cdecl FUN_00490870(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00490940 @ 00490940 ////

void * FUN_00490940(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00490970 @ 00490970 ////

void __fastcall FUN_00490970(int param_1)

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


//// FUNCTION FUN_004909a0 @ 004909a0 ////

undefined4 * FUN_004909a0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004909d0 @ 004909d0 ////

void __fastcall FUN_004909d0(int param_1)

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


//// FUNCTION FUN_00490a00 @ 00490a00 ////

void __fastcall FUN_00490a00(int param_1)

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


//// FUNCTION FUN_00490a30 @ 00490a30 ////

void FUN_00490a30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0104a680;
  if (DAT_0104a680 != DAT_0104a684) {
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_009de3b0((void *)*puVar1);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != DAT_0104a684);
  }
  if (DAT_0104a680 == (undefined4 *)0x0) {
    DAT_0104a680 = (undefined4 *)0x0;
    DAT_0104a684 = (undefined4 *)0x0;
    DAT_0104a688 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(DAT_0104a680);
}


//// FUNCTION FUN_00490a90 @ 00490a90 ////

void FUN_00490a90(void)

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
  puStack_8 = &LAB_00ca5248;
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


//// FUNCTION FUN_00490b50 @ 00490b50 ////

void __thiscall FUN_00490b50(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00490a90();
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
      _Dst = FUN_004909a0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00490940(param_1,iVar5,param_1 + param_2);
      FUN_004909a0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004906c0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00490940(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00490870(param_1,(int)pvVar3,iVar5);
    FUN_004906c0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00490de0 @ 00490de0 ////

void __cdecl FUN_00490de0(char *param_1,undefined4 param_2,uint param_3)

{
  byte *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5268;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = FUN_009de1d0(param_1,1);
  if ((DAT_0104a680 == 0) ||
     ((uint)(DAT_0104a688 - DAT_0104a680 >> 2) <= (uint)((int)DAT_0104a684 - DAT_0104a680 >> 2))) {
    FUN_00490b50(&DAT_0104a67c,DAT_0104a684,1,&local_10);
  }
  else {
    *DAT_0104a684 = local_10;
    DAT_0104a684 = DAT_0104a684 + 1;
  }
  if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00490e80 @ 00490e80 ////

void FUN_00490e80(void)

{
  char *_Source;
  uint _Count;
  undefined1 *puVar1;
  undefined4 *puVar2;
  char *_Dest;
  undefined4 uVar3;
  uint _Size;
  char local_130 [4];
  undefined4 uStack_12c;
  char *local_108;
  uint local_104;
  uint local_100;
  char local_fc [20];
  undefined1 *local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca52ac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_108 = local_fc;
  local_4 = 0;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  uStack_12c = 0x490ed9;
  _strncpy(local_108,"preload",7);
  local_104 = 7;
  local_108[7] = '\0';
  local_4._0_1_ = 1;
  FUN_0055be10(local_e4,&local_108,'\0');
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  local_108 = local_fc;
  local_fc[0] = '\0';
  local_104 = 0;
  local_100 = 0x14;
  uStack_12c = 0x490f37;
  _strncpy(local_108,"",0);
  local_104 = 0;
  *local_108 = '\0';
  local_4._0_1_ = 2;
  FUN_00558a50(local_e4,&local_108,(undefined4 *)0x1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_100 < 0x15) {
    puVar2 = FUN_00558de0(local_e4,&local_108);
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108);
    }
    if (puVar2[1] != 0) {
      do {
        FUN_00558de0(local_e4,&local_108);
        _Count = local_104;
        _Source = local_108;
        local_4._0_1_ = 3;
        if (local_104 != 0) {
          local_e8 = &stack0xfffffec4;
          _Dest = local_130;
          local_130[0] = '\0';
          _Size = 0x14;
          puVar1 = &stack0xfffffec4;
          if (0x13 < local_104) {
            _Size = local_104 + 0x20 & 0xffffffe0;
            _Dest = _malloc(_Size);
            puVar1 = local_e8;
          }
          local_e8 = puVar1;
          _strncpy(_Dest,_Source,_Count);
          _Dest[_Count] = '\0';
          FUN_00490de0(_Dest,_Count,_Size);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
          _free(local_108);
        }
        uVar3 = FUN_00558120(local_e4,2);
      } while ((char)uVar3 != '\0');
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_108);
}


//// FUNCTION FUN_00491090 @ 00491090 ////

void __fastcall FUN_00491090(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004910c0 @ 004910c0 ////

void FUN_004910c0(void)

{
  return;
}


//// FUNCTION FUN_00491100 @ 00491100 ////

void __fastcall FUN_00491100(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00491130 @ 00491130 ////

void FUN_00491130(void)

{
  return;
}


//// FUNCTION FUN_00491210 @ 00491210 ////

void __thiscall FUN_00491210(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x68) = param_1;
  switch(param_1) {
  case 0:
    FUN_00407070(&param_1,DAT_00e50bf0);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 1:
    FUN_00407070(&param_1,DAT_00e50bc4);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 2:
    FUN_00407070(&param_1,DAT_00e50bc8);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 3:
    FUN_00407070(&param_1,DAT_00e50bcc);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 4:
    FUN_00407070(&param_1,DAT_00e50bd0);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 5:
    FUN_00407070(&param_1,DAT_00e50bd4);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 6:
    FUN_00407070(&param_1,DAT_00e50bd8);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 7:
    FUN_00407070(&param_1,DAT_00e50bdc);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 8:
    FUN_00407070(&param_1,DAT_00e50be0);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 9:
    FUN_00407070(&param_1,DAT_00e50be4);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 10:
    FUN_00407070(&param_1,DAT_00e50be8);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  case 0xb:
    FUN_00407070(&param_1,DAT_00e50bec);
    *(undefined4 *)((int)this + 0x60) = param_1;
    return;
  }
  if (0.0 <= DAT_00e50bf0) {
    if (DAT_00e50bf0 <= 1.0) {
      *(float *)((int)this + 0x60) = DAT_00e50bf0;
      return;
    }
    *(undefined4 *)((int)this + 0x60) = 0x3f800000;
    return;
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  return;
}


//// FUNCTION FUN_00491450 @ 00491450 ////

int __fastcall FUN_00491450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_005998e0(*(int *)(param_1 + 0xd8));
  if (iVar1 != 0) {
    iVar1 = FUN_005998e0(*(int *)(param_1 + 0xd8));
    iVar3 = FUN_004031b0(*(int *)(iVar1 + 0x25c));
  }
  uVar2 = FUN_005856c0(*(int *)(param_1 + 0xd8));
  if (((char)uVar2 == '\0') || (iVar1 = 5, iVar3 != 0)) {
    iVar1 = iVar3;
  }
  return iVar1;
}


//// FUNCTION FUN_004914d0 @ 004914d0 ////

void __thiscall FUN_004914d0(void *this,float *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)((int)this + 0xc0);
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


//// FUNCTION FUN_004915b0 @ 004915b0 ////

void __fastcall FUN_004915b0(int *param_1)

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
  puStack_8 = &LAB_00ca52c8;
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


//// FUNCTION FUN_00491680 @ 00491680 ////

void __fastcall FUN_00491680(int param_1)

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
  puStack_8 = &LAB_00ca52f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Importance");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("ForgetRate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x2c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("(int&)(Type)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x30),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00491950 @ 00491950 ////

/* WARNING: Removing unreachable block (ram,0x004919a8) */

void __fastcall FUN_00491950(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1cd34;
  param_1[0xe] = &PTR_LAB_00d1cd14;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1c] = param_1[0x1b];
  }
  if (param_1[0x1b] != 0) {
    *(undefined4 *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  if (param_1[0x1b] != 0) {
    *(undefined4 *)(param_1[0x1b] + 4) = param_1[0x1c];
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00491a00 @ 00491a00 ////

void __fastcall FUN_00491a00(int *param_1)

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
  puStack_8 = &LAB_00ca5338;
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


//// FUNCTION FUN_00491ad0 @ 00491ad0 ////

void __fastcall FUN_00491ad0(int param_1)

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
  puStack_8 = &LAB_00ca5368;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x60));
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
  uVar3 = FUN_0098b490("PStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x60));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x28));
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
  uVar3 = FUN_0098b490("Events");
  if ((char)uVar3 != '\0') {
    FUN_009897b0(param_1 + 0x28);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\PressBar.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  uVar3 = FUN_0098b490("Value");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x5c),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00491f60 @ 00491f60 ////

/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00491f60(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  void **ppvVar7;
  char *local_48c;
  undefined4 local_488;
  uint local_484;
  char local_480 [20];
  void *local_46c [2];
  uint uStack_464;
  void *local_44c [2];
  uint uStack_444;
  void *local_42c [2];
  uint uStack_424;
  void *local_40c [2];
  uint uStack_404;
  void *local_3ec [2];
  uint uStack_3e4;
  void *local_3cc [2];
  uint uStack_3c4;
  void *local_3ac [2];
  uint uStack_3a4;
  void *local_38c [2];
  uint uStack_384;
  void *local_36c [2];
  uint uStack_364;
  void *local_34c [2];
  uint uStack_344;
  void *local_32c [2];
  uint uStack_324;
  void *local_30c [2];
  uint uStack_304;
  void *local_2ec [2];
  uint uStack_2e4;
  void *local_2cc [2];
  uint uStack_2c4;
  void *local_2ac [2];
  uint uStack_2a4;
  void *local_28c [2];
  uint uStack_284;
  void *local_26c [2];
  uint uStack_264;
  void *local_24c [2];
  uint uStack_244;
  void *local_22c [2];
  uint uStack_224;
  void *local_20c [2];
  uint uStack_204;
  void *local_1ec [2];
  uint uStack_1e4;
  void *local_1cc [2];
  uint uStack_1c4;
  void *local_1ac [2];
  uint uStack_1a4;
  void *local_18c [2];
  uint uStack_184;
  void *local_16c [2];
  uint uStack_164;
  void *local_14c [2];
  uint uStack_144;
  void *local_12c [2];
  uint uStack_124;
  void *local_10c [2];
  uint uStack_104;
  void *local_ec [2];
  uint uStack_e4;
  void *local_cc [2];
  uint uStack_c4;
  void *local_ac [2];
  uint uStack_a4;
  void *local_8c [2];
  uint uStack_84;
  void *local_6c [2];
  uint uStack_64;
  void *local_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca550e;
  local_c = ExceptionList;
  local_48c = local_480;
  local_480[0] = '\0';
  local_488 = 0;
  local_484 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_48c,"star",4);
  local_488 = 4;
  local_48c[4] = '\0';
  local_4 = 0;
  FUN_00558a50(DAT_00f88624,&local_48c,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_484) {
                    /* WARNING: Subroutine does not return */
    _free(local_48c);
  }
  switch(param_1) {
  case 0:
    FUN_00401de0(local_4c,"grudge_photo_irrelevant",0xffffffff);
    local_4 = 1;
    FUN_00401de0(local_24c,"forgivephotoirrelevant",0xffffffff);
    FUN_00401de0(&local_48c,"dislikephotoirrelevant",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_4c;
    local_4 = CONCAT31(local_4._1_3_,3);
    fVar4 = FUN_00558610(DAT_00f88624,local_24c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,&local_48c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < local_484) {
                    /* WARNING: Subroutine does not return */
      _free(local_48c);
    }
    local_2c[0] = local_4c[0];
    uStack_24 = uStack_44;
    if (0x14 < uStack_244) {
                    /* WARNING: Subroutine does not return */
      _free(local_24c[0]);
    }
    break;
  case 1:
    FUN_00401de0(local_3cc,"grudge_photo_sex",0xffffffff);
    local_4 = 4;
    FUN_00401de0(local_20c,"forgivephotosex",0xffffffff);
    FUN_00401de0(local_40c,"dislikephotosex",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_3cc;
    local_4 = CONCAT31(local_4._1_3_,6);
    fVar4 = FUN_00558610(DAT_00f88624,local_20c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_40c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_404) {
                    /* WARNING: Subroutine does not return */
      _free(local_40c[0]);
    }
    local_2c[0] = local_3cc[0];
    uStack_24 = uStack_3c4;
    if (0x14 < uStack_204) {
                    /* WARNING: Subroutine does not return */
      _free(local_20c[0]);
    }
    break;
  case 2:
    FUN_00401de0(local_1cc,"grudge_photo_detox",0xffffffff);
    local_4 = 7;
    FUN_00401de0(local_38c,"forgivephotodetox",0xffffffff);
    FUN_00401de0(local_10c,"dislikephotodetox",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_1cc;
    local_4 = CONCAT31(local_4._1_3_,9);
    fVar4 = FUN_00558610(DAT_00f88624,local_38c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_10c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    local_2c[0] = local_1cc[0];
    uStack_24 = uStack_1c4;
    if (0x14 < uStack_384) {
                    /* WARNING: Subroutine does not return */
      _free(local_38c[0]);
    }
    break;
  case 3:
    FUN_00401de0(local_30c,"grudge_photo_irrelevant",0xffffffff);
    local_4 = 10;
    FUN_00401de0(local_8c,"forgivephotocosmetic",0xffffffff);
    FUN_00401de0(local_34c,"dislikephotocosmetic",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_30c;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    fVar4 = FUN_00558610(DAT_00f88624,local_8c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_34c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_344) {
                    /* WARNING: Subroutine does not return */
      _free(local_34c[0]);
    }
    local_2c[0] = local_30c[0];
    uStack_24 = uStack_304;
    if (0x14 < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c[0]);
    }
    break;
  case 4:
    FUN_00401de0(local_cc,"grudge_photo_fighting",0xffffffff);
    local_4 = 0xd;
    FUN_00401de0(local_2cc,"forgivephotofighting",0xffffffff);
    FUN_00401de0(local_18c,"dislikephotofighting",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_cc;
    local_4 = CONCAT31(local_4._1_3_,0xf);
    fVar4 = FUN_00558610(DAT_00f88624,local_2cc,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_18c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_184) {
                    /* WARNING: Subroutine does not return */
      _free(local_18c[0]);
    }
    local_2c[0] = local_cc[0];
    uStack_24 = uStack_c4;
    if (0x14 < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_2cc[0]);
    }
    break;
  case 5:
    FUN_00401de0(local_46c,"grudge_photo_drunk",0xffffffff);
    local_4 = 0x10;
    FUN_00401de0(local_14c,"forgivephotodrunk",0xffffffff);
    FUN_00401de0(local_28c,"dislikephotodrunk",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_46c;
    local_4 = CONCAT31(local_4._1_3_,0x12);
    fVar4 = FUN_00558610(DAT_00f88624,local_14c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_28c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_284) {
                    /* WARNING: Subroutine does not return */
      _free(local_28c[0]);
    }
    local_2c[0] = local_46c[0];
    uStack_24 = uStack_464;
    if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_14c[0]);
    }
    break;
  case 6:
    FUN_00401de0(local_3ec,"grudge_photo_prnomovie",0xffffffff);
    local_4 = 0x13;
    FUN_00401de0(local_42c,"forgivephotoprnomovie",0xffffffff);
    FUN_00401de0(local_44c,"dislikephotoprnomovie",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_3ec;
    local_4 = CONCAT31(local_4._1_3_,0x15);
    fVar4 = FUN_00558610(DAT_00f88624,local_42c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_44c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_444) {
                    /* WARNING: Subroutine does not return */
      _free(local_44c[0]);
    }
    local_2c[0] = local_3ec[0];
    uStack_24 = uStack_3e4;
    if (0x14 < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(local_42c[0]);
    }
    break;
  case 7:
    FUN_00401de0(local_32c,"grudge_photo_irrelevant",0xffffffff);
    local_4 = 0x16;
    FUN_00401de0(local_36c,"forgivephotodining",0xffffffff);
    FUN_00401de0(local_3ac,"dislikephotodining",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_32c;
    local_4 = CONCAT31(local_4._1_3_,0x18);
    fVar4 = FUN_00558610(DAT_00f88624,local_36c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_3ac,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_3a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_3ac[0]);
    }
    local_2c[0] = local_32c[0];
    uStack_24 = uStack_324;
    if (0x14 < uStack_364) {
                    /* WARNING: Subroutine does not return */
      _free(local_36c[0]);
    }
    break;
  case 8:
    FUN_00401de0(local_26c,"grudge_photo_prmovie",0xffffffff);
    local_4 = 0x19;
    FUN_00401de0(local_2ac,"forgivephotoprmovie",0xffffffff);
    FUN_00401de0(local_2ec,"dislikephotoprmovie",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_26c;
    local_4 = CONCAT31(local_4._1_3_,0x1b);
    fVar4 = FUN_00558610(DAT_00f88624,local_2ac,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_2ec,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_2e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_2ec[0]);
    }
    local_2c[0] = local_26c[0];
    uStack_24 = uStack_264;
    if (0x14 < uStack_2a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_2ac[0]);
    }
    break;
  case 9:
    FUN_00401de0(local_1ac,"grudge_photo_wardrobe",0xffffffff);
    local_4 = 0x1c;
    FUN_00401de0(local_1ec,"forgivephotowardrobe",0xffffffff);
    FUN_00401de0(local_22c,"dislikephotowardrobe",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_1ac;
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    fVar4 = FUN_00558610(DAT_00f88624,local_1ec,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_22c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_224) {
                    /* WARNING: Subroutine does not return */
      _free(local_22c[0]);
    }
    local_2c[0] = local_1ac[0];
    uStack_24 = uStack_1a4;
    if (0x14 < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1ec[0]);
    }
    break;
  case 10:
    FUN_00401de0(local_ec,"grudge_photo_drinking",0xffffffff);
    local_4 = 0x1f;
    FUN_00401de0(local_12c,"forgivephotodrinking",0xffffffff);
    FUN_00401de0(local_16c,"dislikephotodrinking",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_ec;
    local_4 = CONCAT31(local_4._1_3_,0x21);
    fVar4 = FUN_00558610(DAT_00f88624,local_12c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_16c,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c[0]);
    }
    local_2c[0] = local_ec[0];
    uStack_24 = uStack_e4;
    if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c[0]);
    }
    break;
  case 0xb:
    FUN_00401de0(local_2c,"grudge_photo_chatting",0xffffffff);
    local_4 = 0x22;
    FUN_00401de0(local_6c,"forgivephotochatting",0xffffffff);
    FUN_00401de0(local_ac,"dislikephotochatting",0xffffffff);
    pvVar3 = DAT_00f88624;
    piVar1 = *(int **)((int)this + 0xd8);
    ppvVar7 = local_2c;
    local_4 = CONCAT31(local_4._1_3_,0x24);
    fVar4 = FUN_00558610(DAT_00f88624,local_6c,0.0);
    fVar6 = (float)fVar4;
    fVar4 = FUN_00558610(pvVar3,local_ac,0.0);
    fVar5 = (float)fVar4;
    iVar2 = (**(code **)(*piVar1 + 0x27c))();
    pvVar3 = (void *)FUN_00472a30(iVar2);
    CGrudges_AddOrRefreshGrudge(pvVar3,fVar5,fVar6,ppvVar7);
    if (0x14 < uStack_a4) {
                    /* WARNING: Subroutine does not return */
      _free(local_ac[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    break;
  default:
    goto switchD_00492004_default;
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
switchD_00492004_default:
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00492b60 @ 00492b60 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00492b60(void)

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
  puStack_8 = &LAB_00ca55db;
  local_c = ExceptionList;
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"paparazzi",9);
  local_100 = 9;
  local_104[9] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_104);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"press bar statics",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 3;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"dropoffpertick",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 4;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bbc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increaseaward",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 5;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_00e50bc0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasesex",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 6;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bc4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasedetox",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bc8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"increasecosmeticsurgery",0x17);
  local_100 = 0x17;
  local_104[0x17] = '\0';
  local_4._0_1_ = 8;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bcc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasefighting",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 9;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bd0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasedrunk",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bd4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"increaseprroomnomovie",0x15);
  local_100 = 0x15;
  local_104[0x15] = '\0';
  local_4._0_1_ = 0xb;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bd8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"increasediningoppsex",0x14);
  local_100 = 0x14;
  local_104[0x14] = '\0';
  local_4._0_1_ = 0xc;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bdc = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increaseprroommovie",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0xd;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50be0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasewardrobe",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0xe;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50be4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"increasedrinkingoppsex",0x16);
  local_100 = 0x16;
  local_104[0x16] = '\0';
  local_4._0_1_ = 0xf;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50be8 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increasechat",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 0x10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bec = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"increaseidling",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x11);
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  DAT_00e50bf0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00493230 @ 00493230 ////

undefined4 * __thiscall FUN_00493230(void *this,byte param_1)

{
  FUN_00491950(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00493250 @ 00493250 ////

void __fastcall FUN_00493250(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1d168;
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


//// FUNCTION FUN_004932a0 @ 004932a0 ////

undefined4 * __thiscall FUN_004932a0(void *this,byte param_1)

{
  FUN_00493250(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004932c0 @ 004932c0 ////

void __fastcall FUN_004932c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00ca563b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d194;
  param_1[0x19] = &PTR_LAB_00d1d174;
  local_4 = 3;
  if ((undefined4 *)param_1[0x25] != param_1 + 0x28) {
    do {
      piVar1 = (int *)param_1[0x25];
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
    } while ((undefined4 *)param_1[0x25] != param_1 + 0x28);
  }
  param_1[0x31] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x33] = param_1[0x32];
  }
  if (param_1[0x32] != 0) {
    *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
  }
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  FUN_00493250(param_1 + 0x23);
  local_4 = local_4 & 0xffffff00;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00493400 @ 00493400 ////

undefined4 * __thiscall FUN_00493400(void *this,byte param_1)

{
  FUN_004932c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00493420 @ 00493420 ////

void __fastcall FUN_00493420(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1d168;
  return;
}


//// FUNCTION FUN_00493480 @ 00493480 ////

undefined4 * __thiscall FUN_00493480(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca56b5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  FUN_0098a100((undefined4 *)((int)this + 100));
  *(undefined ***)this = &PTR_FUN_00d1d194;
  *(undefined4 *)((int)this + 100) = &PTR_LAB_00d1d174;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  puVar1 = (undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined ***)((int)this + 0x8c) = &PTR_LAB_00d1d168;
  *(undefined4 **)((int)this + 0x94) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x90);
  piVar2 = (int *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(int **)((int)this + 0xd0) = piVar2;
  *piVar2 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0xd8) = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  (**(code **)(*piVar2 + 4))();
  *(undefined4 *)((int)this + 0xd8) = param_1;
  (**(code **)*piVar2)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00493560 @ 00493560 ////

undefined4 * __fastcall FUN_00493560(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca56e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  *param_1 = &PTR_FUN_00d1d194;
  param_1[0x19] = &PTR_LAB_00d1d174;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  puVar1 = param_1 + 0x28;
  param_1[0x2a] = 0;
  *puVar1 = 0;
  param_1[0x29] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x25] = puVar1;
  *puVar1 = param_1 + 0x24;
  param_1[0x23] = &PTR_LAB_00d1d168;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x34] = param_1 + 0x31;
  param_1[0x31] = &PTR_FUN_00d16954;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00493620 @ 00493620 ////

undefined4 * __cdecl FUN_00493620(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca570b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0xdc);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_00493560(puVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(puVar2[0x31] + 4))();
  puVar2[0x36] = param_1;
  (**(code **)puVar2[0x31])();
  ExceptionList = pvStack_c;
  return puVar2;
}


//// FUNCTION FUN_004936a0 @ 004936a0 ////

undefined4 * __fastcall FUN_004936a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca573e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  uVar1 = DAT_00e50bbc;
  *param_1 = &PTR_FUN_00d1cd34;
  param_1[0xe] = &PTR_LAB_00d1cd14;
  param_1[0x18] = 0;
  param_1[0x19] = uVar1;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  param_1[0x1d] = param_1;
  FUN_00acdb9e(0xe50c24);
  iVar2 = FUN_0097dda0();
  param_1[0x1e] = iVar2;
  if (s___AV__InList_VCPressBarEvent_TM__00e50bfc[0x27] != '\0') {
    iVar2 = 0x6c;
    pcVar4 = "BarLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe50c24);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VCPressBarEvent_TM__00e50bfc[0x27] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00493770 @ 00493770 ////

undefined4 * __cdecl FUN_00493770(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca575b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x7c);
  this = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    this = FUN_004936a0(puVar1);
  }
  FUN_00491210(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004937d0 @ 004937d0 ////

void __thiscall FUN_004937d0(void *this,int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *this_00;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5778;
  local_c = ExceptionList;
  iVar2 = *(int *)((int)this + 0x94);
  this_00 = (void *)0x0;
  if (iVar2 != (int)this + 0xa0) {
    do {
      if (*(int *)((int)*(void **)(iVar2 + 8) + 0x68) == param_1) {
        this_00 = *(void **)(iVar2 + 8);
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != (int)this + 0xa0);
    if (this_00 != (void *)0x0) {
      if (param_2 == '\0') {
        return;
      }
      if ((param_1 != 6) && (param_1 != 8)) {
        return;
      }
      ExceptionList = &local_c;
      FUN_00491210(this_00,param_1);
      *(float *)((int)this + 0xc0) = *(float *)((int)this_00 + 0x60) + *(float *)((int)this + 0xc0);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = &local_c;
  puVar3 = FUN_00493770(param_1);
  piVar4 = puVar3 + 0x1b;
  piVar1 = (int *)((int)this + 0xa0);
  *(float *)((int)this + 0xc0) = (float)puVar3[0x18] + *(float *)((int)this + 0xc0);
  puVar3[0x1c] = piVar1;
  *piVar4 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar4;
  *piVar1 = (int)piVar4;
  FUN_00491f60(this,param_1);
  if (*(int *)((int)this + 0xd8) != 0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"PIP_PRESSEVENT_OR_PR_UP",0x17);
    local_28 = 0x17;
    local_2c[0x17] = '\0';
    local_4 = 0;
    FUN_00590dc0(*(void **)((int)this + 0xd8),4,&local_2c,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00493920 @ 00493920 ////

void __thiscall FUN_00493920(void *this,int param_1)

{
  if (param_1 != 0xc) {
    FUN_004937d0(this,param_1,'\0');
    if (param_1 != 0) {
      FUN_00795b90(*(int *)((int)this + 0xd8),param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00493960 @ 00493960 ////

void FUN_00493960(void)

{
  return;
}


//// FUNCTION FUN_00493970 @ 00493970 ////

void __fastcall FUN_00493970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d1d8;
  if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00493990 @ 00493990 ////

undefined4 * __thiscall FUN_00493990(void *this,byte param_1)

{
  FUN_00493970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004939b0 @ 004939b0 ////

void __fastcall FUN_004939b0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x13]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  *param_1 = &PTR_FUN_00d1d1d8;
  if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00493a00 @ 00493a00 ////

void __fastcall FUN_00493a00(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x13]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x11]);
  }
  if (0x14 < (uint)param_1[0xb]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[9]);
  }
  *param_1 = &PTR_FUN_00d1d1d8;
  if (0x14 < (uint)param_1[3]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[1]);
  }
  return;
}


//// FUNCTION FUN_00493a50 @ 00493a50 ////

undefined4 * __thiscall FUN_00493a50(void *this,undefined4 *param_1)

{
  *(undefined ***)this = &PTR_FUN_00d1d1d8;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_1,param_1[1]);
  return this;
}


//// FUNCTION FUN_00493a90 @ 00493a90 ////

undefined4 * __thiscall FUN_00493a90(void *this,undefined4 *param_1,undefined1 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca57ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d1d1d8;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_1,param_1[1]);
  *(undefined ***)this = &PTR_FUN_00d1d1f0;
  *(undefined1 **)((int)this + 0x24) = (undefined1 *)((int)this + 0x30);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x14;
  *(undefined1 **)((int)this + 0x44) = (undefined1 *)((int)this + 0x50);
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x14;
  local_4 = 2;
  FUN_0043b520((void *)((int)this + 100),0.0);
  FUN_0043b520((void *)((int)this + 0x68),0.0);
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x70) = param_2;
  *(undefined1 *)((int)this + 0x71) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00493b60 @ 00493b60 ////

void __thiscall FUN_00493b60(void *this,undefined4 *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  float unaff_retaddr;
  
  puVar2 = param_1;
  if ((*(char *)((int)this + 0x71) == '\0') &&
     (piVar4 = (int *)thunk_FUN_009623a0(param_1), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x1c))(&param_1);
    if ((*(int *)((int)this + 0x28) == 0) &&
       ((*(int *)((int)this + 0x48) == 0 ||
        (uVar5 = FUN_0043b6c0(&stack0x00000000,(float *)((int)this + 0x68)), (char)uVar5 != '\0'))))
    {
      FUN_004015d0((void *)((int)this + 0x44),(char *)*puVar2,puVar2[1]);
      *(float *)((int)this + 0x68) = unaff_retaddr;
    }
    if ((*(char *)((int)this + 0x70) == '\0') || (cVar3 = FUN_00960f30(piVar4), cVar3 != '\0')) {
      FUN_004015d0((void *)((int)this + 0x44),(char *)*puVar2,puVar2[1]);
      pfVar1 = (float *)((int)this + 100);
      uVar5 = FUN_0043b640(&stack0x00000000,pfVar1);
      if ((char)uVar5 == '\0') {
        uVar5 = FUN_0043b680(&stack0x00000000,pfVar1);
        if ((char)uVar5 != '\0') {
          *pfVar1 = unaff_retaddr;
          FUN_00401e30((void *)((int)this + 0x24),puVar2);
          *(undefined4 *)((int)this + 0x6c) = 0;
        }
      }
      else {
        iVar6 = *(int *)((int)this + 0x6c) + 1;
        *(int *)((int)this + 0x6c) = iVar6;
        iVar6 = FUN_00990d30(0,iVar6);
        if (iVar6 == 0) {
          FUN_00401e30((void *)((int)this + 0x24),puVar2);
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00493ca0 @ 00493ca0 ////

undefined4 * __thiscall FUN_00493ca0(void *this,byte param_1)

{
  FUN_004939b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00493cc0 @ 00493cc0 ////

undefined4 * __thiscall FUN_00493cc0(void *this,undefined4 *param_1,float param_2)

{
  float *pfVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca57de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d1d1d8;
  *(undefined4 *)((int)this + 4) = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 4),(char *)*param_1,param_1[1]);
  *(undefined ***)this = &PTR_FUN_00d1d208;
  *(undefined1 **)((int)this + 0x24) = (undefined1 *)((int)this + 0x30);
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x14;
  *(undefined1 **)((int)this + 0x44) = (undefined1 *)((int)this + 0x50);
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x14;
  local_4 = 2;
  pfVar1 = (float *)FUN_0043b520(&param_1,param_2);
  FUN_0043b620(&DAT_00e4fa4c,(float *)((int)this + 100),pfVar1);
  FUN_0043b520((void *)((int)this + 0x68),0.0);
  *(undefined4 *)((int)this + 0x6c) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00493db0 @ 00493db0 ////

void __thiscall FUN_00493db0(void *this,undefined4 *param_1)

{
  float *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float unaff_retaddr;
  
  puVar1 = param_1;
  piVar2 = (int *)thunk_FUN_009623a0(param_1);
  if (piVar2 != (int *)0x0) {
    if (*(int *)((int)this + 0x48) == 0) {
      FUN_004015d0((void *)((int)this + 0x44),(char *)*puVar1,puVar1[1]);
    }
    (**(code **)(*piVar2 + 0x1c))(&param_1);
    uVar3 = FUN_0043b6e0(&stack0x00000000,(float *)&DAT_00e4fa4c);
    if ((char)uVar3 != '\0') {
      this_00 = (float *)((int)this + 0x68);
      uVar3 = FUN_0043b680(this_00,(float *)((int)this + 100));
      if ((char)uVar3 == '\0') {
        uVar3 = FUN_0043b680(&stack0x00000000,this_00);
        if ((char)uVar3 == '\0') {
          return;
        }
      }
      else {
        iVar4 = *(int *)((int)this + 0x6c) + 1;
        *(int *)((int)this + 0x6c) = iVar4;
        iVar4 = FUN_00990d30(0,iVar4);
        if (iVar4 != 0) {
          return;
        }
      }
      FUN_004015d0((void *)((int)this + 0x24),(char *)*puVar1,puVar1[1]);
      *this_00 = unaff_retaddr;
    }
  }
  return;
}


//// FUNCTION FUN_00493e60 @ 00493e60 ////

undefined4 * __thiscall FUN_00493e60(void *this,byte param_1)

{
  FUN_00493a00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00493e80 @ 00493e80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __fastcall FUN_00493e80(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_0104a6ac & 1) == 0) {
    DAT_0104a6ac = DAT_0104a6ac | 1;
    DAT_0104a68c = &DAT_0104a698;
    DAT_0104a698 = 0;
    _DAT_0104a690 = 0;
    DAT_0104a694 = 0x14;
    _atexit(FUN_00d11390);
  }
  iVar1 = (**(code **)(*param_1 + 4))();
  if (*(int *)(iVar1 + 4) == 0) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))();
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
  }
  FUN_004015d0(&DAT_0104a68c,(char *)*puVar2,puVar2[1]);
  FUN_004073f0(&DAT_0104a68c,".msh",4);
  return DAT_0104a68c;
}


//// FUNCTION FUN_00493f20 @ 00493f20 ////

void __fastcall FUN_00493f20(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint _Count;
  char *_Source;
  char *local_1e0;
  uint local_1dc;
  uint local_1d8;
  char local_1d4 [20];
  int iStack_1c0;
  char *local_1bc;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  char acStack_1b0 [20];
  int *local_19c;
  char *pcStack_198;
  undefined4 uStack_194;
  uint uStack_190;
  char acStack_18c [20];
  char *apcStack_178 [2];
  uint uStack_170;
  void *local_158 [2];
  uint local_150;
  undefined4 auStack_138 [18];
  int iStack_f0;
  int iStack_ec;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5869;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_19c = param_1;
  puVar2 = FUN_0040d6b0(local_158,"props/",param_1 + 1);
  local_4 = 0;
  FUN_0055c540(local_e4,puVar2);
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158[0]);
  }
  local_1e0 = local_1d4;
  local_1d4[0] = '\0';
  local_1dc = 0;
  local_1d8 = 0x14;
  _strncpy(local_1e0,"default",7);
  local_1dc = 7;
  local_1e0[7] = '\0';
  local_4._0_1_ = 3;
  uVar3 = FUN_00558a50(local_e4,&local_1e0,(undefined4 *)0x0);
  local_4._0_1_ = 2;
  if (0x14 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    _free(local_1e0);
  }
  if ((char)uVar3 != '\0') {
    puVar2 = FUN_00558de0(local_e4,&local_1bc);
    local_4._0_1_ = 4;
    (**(code **)(*param_1 + 0x10))(puVar2);
    if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1bc);
    }
    local_1e0 = local_1d4;
    local_1d4[0] = '\0';
    local_1dc = 0;
    local_1d8 = 0x14;
    _strncpy(local_1e0,"",0);
    local_1dc = 0;
    *local_1e0 = '\0';
    local_4._0_1_ = 5;
    FUN_00558a50(local_e4,&local_1e0,(undefined4 *)0x1);
    local_4._0_1_ = 2;
    if (0x14 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e0);
    }
  }
  local_4._0_1_ = 2;
  uVar3 = FUN_00558120(local_e4,0);
  cVar1 = (char)uVar3;
  while (cVar1 != '\0') {
    puVar2 = FUN_00558de0(local_e4,&local_1bc);
    local_4._0_1_ = 6;
    (**(code **)(*param_1 + 0xc))(puVar2);
    local_4._0_1_ = 2;
    if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1bc);
    }
    uVar3 = FUN_00558120(local_e4,2);
    cVar1 = (char)uVar3;
  }
  FUN_009c89a0(auStack_138);
  FUN_0040d6b0(apcStack_178,"data\\props\\ExtraMetacategories\\",param_1 + 1);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_009ca9d0(auStack_138,"*.ini",apcStack_178[0],(undefined1 *)0x1);
  iStack_1c0 = 0;
  while( true ) {
    if (iStack_f0 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iStack_ec - iStack_f0 >> 2;
    }
    if (iVar4 <= iStack_1c0) {
      if (0x14 < uStack_170) {
                    /* WARNING: Subroutine does not return */
        _free(apcStack_178[0]);
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_009c8560(auStack_138);
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = pvStack_c;
      return;
    }
    pcVar6 = *(char **)(iStack_f0 + iStack_1c0 * 4);
    pcVar5 = _strrchr(pcVar6,0x5c);
    _Source = pcVar5 + 1;
    if (pcVar5 == (char *)0x0) {
      _Source = pcVar6;
    }
    local_1e0 = local_1d4;
    local_1d4[0] = '\0';
    local_1dc = 0;
    local_1d8 = 0x14;
    pcVar6 = _Source;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _Count = (int)pcVar6 - (int)(_Source + 1);
    if (0x13 < _Count) {
      local_1d8 = _Count + 0x20 & 0xffffffe0;
      local_1e0 = _malloc(local_1d8);
    }
    _strncpy(local_1e0,_Source,_Count);
    local_1e0[_Count] = '\0';
    local_1bc = acStack_1b0;
    acStack_1b0[0] = '\0';
    uStack_1b8 = 0;
    uStack_1b4 = 0x14;
    local_1dc = _Count;
    _strncpy(local_1bc,"",0);
    uStack_1b8 = 0;
    *local_1bc = '\0';
    pcStack_198 = acStack_18c;
    acStack_18c[0] = '\0';
    uStack_194 = 0;
    uStack_190 = 0x14;
    _strncpy(pcStack_198,".ini",4);
    uStack_194 = 4;
    pcStack_198[4] = '\0';
    local_4._0_1_ = 0xb;
    FUN_00569860((int *)&local_1e0,&pcStack_198,&local_1bc);
    if (0x14 < uStack_190) break;
    local_4 = CONCAT31(local_4._1_3_,9);
    if (0x14 < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
      _free(local_1bc);
    }
    (**(code **)(*local_19c + 0xc))(&local_1e0);
    if (0x14 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      _free(local_1e0);
    }
    iStack_1c0 = iStack_1c0 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(pcStack_198);
}


//// FUNCTION FUN_00494350 @ 00494350 ////

undefined * __cdecl FUN_00494350(char *param_1,undefined1 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [20];
  undefined **local_80;
  void *local_7c;
  uint local_74;
  void *local_5c;
  uint local_54;
  void *local_3c;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5893;
  local_c = ExceptionList;
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_a0,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_00493a90(&local_80,&local_a0,param_2);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  FUN_00493f20((int *)&local_80);
  puVar3 = FUN_00493e80((int *)&local_80);
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_80 = &PTR_FUN_00d1d1d8;
  if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_00494460 @ 00494460 ////

undefined * __cdecl FUN_00494460(char *param_1,float param_2)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [20];
  undefined **local_80;
  void *local_7c;
  uint local_74;
  void *local_5c;
  uint local_54;
  void *local_3c;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca58b3;
  local_c = ExceptionList;
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_a0,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_00493cc0(&local_80,&local_a0,param_2);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  FUN_00493f20((int *)&local_80);
  puVar3 = FUN_00493e80((int *)&local_80);
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_80 = &PTR_FUN_00d1d1d8;
  if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  ExceptionList = local_c;
  return puVar3;
}


//// FUNCTION FUN_00494570 @ 00494570 ////

undefined4 __cdecl FUN_00494570(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  char *_Source;
  bool bVar12;
  byte *local_1f8;
  uint local_1f4;
  uint local_1f0;
  byte local_1ec [20];
  char *local_1d8;
  undefined4 local_1d4;
  uint local_1d0;
  char local_1cc [20];
  char *local_1b8;
  undefined4 local_1b4;
  uint local_1b0;
  char local_1ac [20];
  char *local_198;
  uint local_194;
  uint local_190;
  char local_18c [20];
  char *local_178;
  undefined4 local_174;
  uint local_170;
  char local_16c [20];
  void *local_158 [2];
  uint local_150;
  undefined4 local_138 [18];
  int local_f0;
  int local_ec;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca590d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = FUN_0040d6b0(local_158,"props/",param_1);
  local_4 = 0;
  FUN_0055c540(local_e4,puVar3);
  local_4._0_1_ = 2;
  if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
    _free(local_158[0]);
  }
  do {
    puVar3 = FUN_00558de0(local_e4,&local_1b8);
    pbVar11 = (byte *)*param_2;
    pbVar4 = (byte *)*puVar3;
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_00494634:
        iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00494639;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_00494634;
      pbVar4 = pbVar4 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00494639:
    if (0x14 < local_1b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1b8);
    }
    if (iVar5 == 0) {
      local_4 = 0xffffffff;
      uVar6 = FUN_00558920(local_e4);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    uVar6 = FUN_00558120(local_e4,2);
  } while ((char)uVar6 != '\0');
  FUN_009c89a0(local_138);
  local_1d8 = local_1cc;
  local_1cc[0] = '\0';
  local_1d4 = 0;
  local_1d0 = 0x20;
  local_1d8 = _malloc(0x20);
  _strncpy(local_1d8,"data\\props\\ExtraMetacategories\\",0x1f);
  local_1d4 = 0x1f;
  local_1d8[0x1f] = '\0';
  FUN_004073f0(&local_1d8,(char *)*param_1,param_1[1]);
  local_1f8 = local_1ec;
  local_1ec[0] = 0;
  local_1f4 = 0;
  local_1f0 = 0x14;
  _strncpy((char *)local_1f8,"",0);
  local_1f4 = 0;
  *local_1f8 = 0;
  local_4._0_1_ = 5;
  FUN_009ca9d0(local_138,"*.ini",local_1d8,(undefined1 *)0x1);
  iVar5 = 0;
  do {
    if (local_f0 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = local_ec - local_f0 >> 2;
    }
    if (iVar7 <= iVar5) {
      if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      if (local_1d0 < 0x15) {
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_009c8560(local_138);
        local_4 = 0xffffffff;
        uVar10 = FUN_00558920(local_e4);
        ExceptionList = local_c;
        return uVar10 & 0xffffff00;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1d8);
    }
    pcVar9 = *(char **)(local_f0 + iVar5 * 4);
    pcVar8 = _strrchr(pcVar9,0x5c);
    _Source = pcVar8 + 1;
    if (pcVar8 == (char *)0x0) {
      _Source = pcVar9;
    }
    local_198 = local_18c;
    local_18c[0] = '\0';
    local_194 = 0;
    local_190 = 0x14;
    pcVar9 = _Source;
    do {
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar10 = (int)pcVar9 - (int)(_Source + 1);
    if (0x13 < uVar10) {
      local_190 = uVar10 + 0x20 & 0xffffffe0;
      local_198 = _malloc(local_190);
    }
    _strncpy(local_198,_Source,uVar10);
    pcVar9 = local_198;
    local_198[uVar10] = '\0';
    local_194 = uVar10;
    if (local_1f0 <= uVar10) {
      if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      local_1f0 = uVar10 + 0x20 & 0xffffffe0;
      local_1f8 = _malloc(local_1f0);
    }
    _strncpy((char *)local_1f8,pcVar9,uVar10);
    local_1f8[uVar10] = 0;
    local_1f4 = uVar10;
    if (0x14 < local_190) {
                    /* WARNING: Subroutine does not return */
      _free(local_198);
    }
    local_1b8 = local_1ac;
    local_1ac[0] = '\0';
    local_1b4 = 0;
    local_1b0 = 0x14;
    _strncpy(local_1b8,"",0);
    local_1b4 = 0;
    *local_1b8 = '\0';
    local_178 = local_16c;
    local_16c[0] = '\0';
    local_174 = 0;
    local_170 = 0x14;
    _strncpy(local_178,".ini",4);
    local_174 = 4;
    local_178[4] = '\0';
    local_4._0_1_ = 7;
    FUN_00569860((int *)&local_1f8,&local_178,&local_1b8);
    if (0x14 < local_170) {
                    /* WARNING: Subroutine does not return */
      _free(local_178);
    }
    if (0x14 < local_1b0) {
                    /* WARNING: Subroutine does not return */
      _free(local_1b8);
    }
    pbVar11 = (byte *)*param_2;
    pbVar4 = local_1f8;
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_0049495c:
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_00494961;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_0049495c;
      pbVar4 = pbVar4 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00494961:
    if (iVar7 == 0) {
      if (0x14 < local_1f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_1f8);
      }
      if (local_1d0 < 0x15) {
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_009c8560(local_138);
        local_4 = 0xffffffff;
        uVar6 = FUN_00558920(local_e4);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_1d8);
    }
    iVar5 = iVar5 + 1;
  } while( true );
}


//// FUNCTION FUN_00494df0 @ 00494df0 ////

void __cdecl FUN_00494df0(char *param_1)

{
  FUN_00494350(param_1,1);
  return;
}


//// FUNCTION FUN_00494e00 @ 00494e00 ////

bool __cdecl FUN_00494e00(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 *local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_94 [20];
  undefined **local_80;
  void *local_7c;
  uint local_74;
  void *local_5c;
  int local_58;
  uint local_54;
  void *local_3c;
  uint local_34;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5983;
  local_c = ExceptionList;
  local_a0 = local_94;
  local_94[0] = 0;
  local_9c = 0;
  local_98 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_a0,param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_00493a90(&local_80,&local_a0,1);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
    _free(local_a0);
  }
  FUN_00493f20((int *)&local_80);
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  local_80 = &PTR_FUN_00d1d1d8;
  if (0x14 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  ExceptionList = local_c;
  return local_58 != 0;
}


//// FUNCTION FUN_00494f10 @ 00494f10 ////

void FUN_00494f10(void)

{
  DAT_01050b64 = FUN_00494df0;
  FUN_009caf20(&LAB_00494dc0);
  FUN_009caf30(&LAB_00494de0);
  return;
}


//// FUNCTION FUN_00494f40 @ 00494f40 ////

void __thiscall FUN_00494f40(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return;
}


//// FUNCTION FUN_00494f80 @ 00494f80 ////

void __fastcall FUN_00494f80(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)log2((float10)2.0);
  fVar2 = FUN_0043b710((float *)&stack0x00000004);
  *(float *)(param_1 + 8) = (float)((float10)(float)((float10)0.6931471805599453 * fVar1) / fVar2);
  return;
}


//// FUNCTION FUN_00494fb0 @ 00494fb0 ////

void __thiscall FUN_00494fb0(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = param_2;
  return;
}


//// FUNCTION FUN_00494fc0 @ 00494fc0 ////

float10 __fastcall FUN_00494fc0(float *param_1)

{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float local_4;
  
  fVar1 = param_1[1];
  if (fVar1 != 0.0) {
    pfVar2 = (float *)FUN_0043b620(&stack0x00000004,&local_4,param_1);
    fVar3 = FUN_0043b710(pfVar2);
    fVar4 = (float10)1.4426950408889634 * -(fVar3 * (float10)param_1[2]);
    fVar3 = ROUND(fVar4);
    fVar4 = (float10)f2xm1(fVar4 - fVar3);
    fVar3 = (float10)fscale((float10)1 + fVar4,fVar3);
    return fVar3 * (float10)fVar1;
  }
  return (float10)fVar1;
}


//// FUNCTION FUN_00495030 @ 00495030 ////

void __cdecl FUN_00495030(undefined4 *param_1)

{
  FUN_0098a430(param_1,4);
  FUN_0098a430(param_1 + 1,4);
  FUN_0098a430(param_1 + 2,4);
  return;
}


//// FUNCTION FUN_00495060 @ 00495060 ////

float * __thiscall FUN_00495060(void *this,float param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  *(float *)((int)this + 4) = param_1;
  fVar1 = (float10)log2((float10)2.0);
  *(float *)this = param_3;
  param_3 = param_2;
  fVar2 = FUN_0043b710(&param_3);
  *(float *)((int)this + 8) = (float)((float10)(float)((float10)0.6931471805599453 * fVar1) / fVar2)
  ;
  return this;
}


//// FUNCTION FUN_004950a0 @ 004950a0 ////

void __thiscall FUN_004950a0(void *this,float param_1,float param_2)

{
  float10 fVar1;
  
  fVar1 = FUN_00494fc0(this);
  *(float *)this = param_2;
  *(float *)((int)this + 4) = (float)(fVar1 + (float10)param_1);
  return;
}


//// FUNCTION FUN_004950c0 @ 004950c0 ////

void __thiscall FUN_004950c0(void *this,float *param_1)

{
  float10 fVar1;
  
  fVar1 = FUN_00494fc0(this);
  if (fVar1 < (float10)0.0) {
    *param_1 = 0.0;
    return;
  }
  if ((float10)1.0 < fVar1) {
    fVar1 = (float10)1.0;
  }
  *param_1 = (float)fVar1;
  return;
}


//// FUNCTION FUN_00495160 @ 00495160 ////

void __cdecl FUN_00495160(undefined1 param_1)

{
  DAT_0104a6d5 = param_1;
  return;
}


//// FUNCTION FUN_00495170 @ 00495170 ////

undefined1 FUN_00495170(void)

{
  return DAT_0104a6d5;
}


//// FUNCTION FUN_00495180 @ 00495180 ////

undefined * FUN_00495180(void)

{
  return &DAT_0104a6d8;
}


//// FUNCTION FUN_004951b0 @ 004951b0 ////

int * __thiscall FUN_004951b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004951f0 @ 004951f0 ////

int __fastcall FUN_004951f0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x24;
}


//// FUNCTION FUN_00495210 @ 00495210 ////

int * __thiscall FUN_00495210(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00495230 @ 00495230 ////

int * __thiscall FUN_00495230(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00495290 @ 00495290 ////

int * __thiscall FUN_00495290(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00495560 @ 00495560 ////

void __cdecl FUN_00495560(int param_1)

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


//// FUNCTION FUN_00495580 @ 00495580 ////

void __cdecl FUN_00495580(int *param_1)

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


//// FUNCTION FUN_00495670 @ 00495670 ////

void __thiscall FUN_00495670(void *this,int param_1)

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


//// FUNCTION FUN_004956d0 @ 004956d0 ////

void __thiscall FUN_004956d0(void *this,int *param_1)

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


//// FUNCTION FUN_004957b0 @ 004957b0 ////

void __fastcall FUN_004957b0(int *param_1)

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


//// FUNCTION FUN_00495810 @ 00495810 ////

void __fastcall FUN_00495810(int *param_1)

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


//// FUNCTION FUN_00495a00 @ 00495a00 ////

void __fastcall FUN_00495a00(int param_1)

{
  int *this;
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  int unaff_retaddr;
  undefined1 uVar3;
  float local_18 [3];
  undefined1 local_c [12];
  
  this = *(int **)(*(int *)(param_1 + 0xa8) + 0x9c);
  FUN_00598db0(this,0);
  iVar1 = FUN_005998e0((int)this);
  if (iVar1 != 0) {
    uVar3 = 1;
    this_00 = (void *)FUN_005998e0((int)this);
    FUN_00401050(this_00,uVar3);
  }
  local_18[0] = 0.5;
  puVar2 = (undefined4 *)(**(code **)(*this + 0x34))(local_c);
  FUN_009840b0(local_18,puVar2);
  FUN_0046d8f0(local_18,&stack0xffffffe4,0,0x20,0);
  *(undefined1 *)(param_1 + 0x150) = 0;
  (**(code **)(*(int *)(unaff_retaddr + 0xb8) + 4))();
  *(undefined4 *)(unaff_retaddr + 0xcc) = 0;
  (*(code *)**(undefined4 **)(unaff_retaddr + 0xb8))();
  (**(code **)(*(int *)(param_1 + 0x94) + 4))();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x94))();
  (**(code **)(*(int *)(param_1 + 0xac) + 4))();
  *(undefined4 *)(param_1 + 0xc0) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0xac))();
  return;
}


//// FUNCTION FUN_00495ad0 @ 00495ad0 ////

void __fastcall FUN_00495ad0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00495ae0 @ 00495ae0 ////

void __thiscall FUN_00495ae0(void *this,int param_1)

{
  (**(code **)(*(int *)((int)this + 0xac) + 4))();
  *(int *)((int)this + 0xc0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0xac))();
  (**(code **)(*(int *)(param_1 + 0xa0) + 4))();
  *(void **)(param_1 + 0xb4) = this;
  (*(code *)**(undefined4 **)(param_1 + 0xa0))();
  return;
}


//// FUNCTION FUN_00495bf0 @ 00495bf0 ////

undefined4 __fastcall FUN_00495bf0(int param_1)

{
  float fVar1;
  undefined4 in_EAX;
  float *pfVar2;
  int local_4;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    local_4 = param_1;
    pfVar2 = (float *)(**(code **)(**(int **)(param_1 + 0x164) + 0xf0))(&local_4);
    fVar1 = *pfVar2;
    in_EAX = CONCAT22((short)((uint)pfVar2 >> 0x10),
                      (ushort)(fVar1 < 1.0) << 8 | (ushort)NAN(fVar1) << 10 |
                      (ushort)(fVar1 == 1.0) << 0xe);
    if (fVar1 < 1.0) {
      return in_EAX;
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


//// FUNCTION FUN_00495c20 @ 00495c20 ////

int __fastcall FUN_00495c20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0xbc); iVar1 != param_1 + 200; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = iVar2 + 1;
  }
  return *(int *)(param_1 + 0x130) + iVar2;
}


//// FUNCTION FUN_00495c50 @ 00495c50 ////

void __thiscall FUN_00495c50(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1 + 0x58);
  piVar2 = (int *)((int)this + 0xfc);
  *(int **)(param_1 + 0x5c) = piVar2;
  *piVar1 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar1;
  *piVar2 = (int)piVar1;
  return;
}


//// FUNCTION FUN_00495c70 @ 00495c70 ////

void __cdecl FUN_00495c70(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)fcos((float10)param_4);
  fVar7 = (float10)fsin((float10)param_4);
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_2[1];
  *param_1 = (float)(((float10)fVar1 - (float10)fVar2) * fVar6 -
                    ((float10)fVar3 - (float10)fVar4) * fVar7) + *param_2;
  param_1[1] = (float)(((float10)fVar3 - (float10)fVar4) * fVar6 +
                       ((float10)fVar1 - (float10)fVar2) * fVar7 + (float10)fVar5);
  return;
}


//// FUNCTION FUN_00495ed0 @ 00495ed0 ////

void __fastcall FUN_00495ed0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00495fa0 @ 00495fa0 ////

undefined4 * __thiscall FUN_00495fa0(void *this,undefined4 *param_1)

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
LAB_00495fe4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00495fe9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00495fe4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00495fe9:
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


//// FUNCTION FUN_00496080 @ 00496080 ////

int * __fastcall FUN_00496080(int *param_1)

{
  FUN_00495810(param_1);
  return param_1;
}


//// FUNCTION FUN_00496090 @ 00496090 ////

int * __fastcall FUN_00496090(int *param_1)

{
  FUN_004957b0(param_1);
  return param_1;
}


//// FUNCTION FUN_004960f0 @ 004960f0 ////

void __fastcall FUN_004960f0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00496110 @ 00496110 ////

undefined4 * __thiscall FUN_00496110(void *this,byte param_1)

{
  FUN_00495ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00496130 @ 00496130 ////

undefined4 * __thiscall FUN_00496130(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xec),*(uint *)((int)this + 0xf0));
  return param_1;
}


//// FUNCTION FUN_00496190 @ 00496190 ////

void __fastcall FUN_00496190(int param_1)

{
  int iVar1;
  int iVar2;
  void *this;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  while (iVar1 != param_1 + 200) {
    iVar2 = *(int *)(iVar1 + 8);
    iVar3 = *(int *)(iVar2 + 0x9c);
    iVar1 = *(int *)(iVar1 + 4);
    if ((iVar3 != 0) && (iVar3 = FUN_005998e0(iVar3), iVar3 != 0)) {
      this = *(void **)(iVar2 + 0x9c);
      puVar4 = (undefined4 *)FUN_005998e0((int)this);
      TMCharacter_CancelAction(this,puVar4);
    }
  }
  return;
}


//// FUNCTION FUN_004961e0 @ 004961e0 ////

void __thiscall FUN_004961e0(void *this,char *param_1,uint param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 in_stack_0000001c;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_40 [4];
  undefined *puStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  void *local_4;
  
  puStack_8 = &LAB_00ca59a3;
  pvStack_c = ExceptionList;
  local_4 = (void *)0x0;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x1e0);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    pcVar3 = local_40;
    local_40[0] = '\0';
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffffb4,param_1,param_2);
    puVar2 = FUN_008c2470(pvVar1,this,pcVar3,uVar4,uVar5);
  }
  local_4 = (void *)((uint)local_4._1_3_ << 8);
  (**(code **)(*(int *)((int)this + 0x138) + 4))();
  *(undefined4 **)((int)this + 0x14c) = puVar2;
  (*(code *)**(undefined4 **)((int)this + 0x138))();
  pvVar1 = *(void **)(*(int *)(*(int *)((int)this + 0x6c) + 8) + 0x7c);
  (**(code **)(**(int **)((int)this + 0x14c) + 0x40))();
  (**(code **)(*(int *)((int)this + 0x150) + 4))();
  *(undefined4 *)((int)this + 0x164) = in_stack_0000001c;
  (*(code *)**(undefined4 **)((int)this + 0x150))();
  if (&DAT_00000014 < param_1) {
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_004962d9;
    _free(local_4);
  }
  ExceptionList = pvVar1;
  return;
}


//// FUNCTION FUN_004962f0 @ 004962f0 ////

void __fastcall FUN_004962f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x134) = 0;
  if (*(int *)(param_1 + 0xbc) != param_1 + 200) {
    do {
      piVar1 = *(int **)(param_1 + 0xbc);
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
    } while (*(int *)(param_1 + 0xbc) != param_1 + 200);
  }
  return;
}


//// FUNCTION FUN_00496360 @ 00496360 ////

uint __fastcall FUN_00496360(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x124);
  if (uVar2 == 1) {
    for (iVar1 = *(int *)(param_1 + 0xf0); iVar1 != param_1 + 0xfc; iVar1 = *(int *)(iVar1 + 4)) {
      uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x18))();
      if ((char)uVar2 != '\0') goto LAB_004963c3;
    }
  }
  else if (uVar2 == 0) {
    uVar2 = 0;
    for (iVar1 = *(int *)(param_1 + 0xf0); iVar1 != param_1 + 0xfc; iVar1 = *(int *)(iVar1 + 4)) {
      uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 0x18))();
      if ((char)uVar2 == '\0') goto LAB_00496393;
    }
LAB_004963c3:
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
LAB_00496393:
  return uVar2 & 0xffffff00;
}


//// FUNCTION CQueue_AssignNearestEntryPoint @ 00496400 ////

void __thiscall CQueue_AssignNearestEntryPoint(void *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined1 local_c [12];
  
  fVar5 = param_1;
  if (*(int *)((int)param_1 + 0xa8) == 0) {
    iVar7 = *(int *)((int)this + 0xbc);
    iVar8 = 0;
    param_1 = 3.4028235e+38;
    if (iVar7 != (int)this + 200) {
      do {
        iVar1 = *(int *)(iVar7 + 8);
        if ((*(int **)(iVar1 + 0x9c) != (int *)0x0) &&
           ((*(int *)(iVar1 + 0xb4) == 0 ||
            (*(int *)((int)fVar5 + 0x90) <= *(int *)(*(int *)(iVar1 + 0xb4) + 0x90))))) {
          pfVar6 = (float *)(**(code **)(**(int **)(iVar1 + 0x9c) + 0x34))(local_c);
          fVar2 = *pfVar6 - *(float *)((int)fVar5 + 0x78);
          fVar4 = pfVar6[1] - *(float *)((int)fVar5 + 0x7c);
          fVar3 = pfVar6[2] - *(float *)((int)fVar5 + 0x80);
          fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
          if (fVar2 < param_1) {
            iVar8 = iVar1;
            param_1 = fVar2;
          }
        }
        iVar7 = *(int *)(iVar7 + 4);
      } while (iVar7 != (int)this + 200);
      if ((iVar8 != 0) &&
         (*(undefined4 *)((int)this + 0x98) = 0x14, *(float *)(iVar8 + 0xb4) != fVar5)) {
        iVar7 = *(int *)((int)fVar5 + 0xc0);
        if (iVar7 != 0) {
          (**(code **)(*(int *)(iVar7 + 0xa0) + 4))();
          *(undefined4 *)(iVar7 + 0xb4) = 0;
          (*(code *)**(undefined4 **)(iVar7 + 0xa0))();
          (**(code **)(*(int *)((int)fVar5 + 0xac) + 4))();
          *(undefined4 *)((int)fVar5 + 0xc0) = 0;
          (*(code *)**(undefined4 **)((int)fVar5 + 0xac))();
        }
        iVar7 = *(int *)(iVar8 + 0xb4);
        if (iVar7 != 0) {
          (**(code **)(*(int *)(iVar7 + 0xac) + 4))();
          *(undefined4 *)(iVar7 + 0xc0) = 0;
          (*(code *)**(undefined4 **)(iVar7 + 0xac))();
        }
        (**(code **)(*(int *)((int)fVar5 + 0xac) + 4))();
        *(int *)((int)fVar5 + 0xc0) = iVar8;
        (*(code *)**(undefined4 **)((int)fVar5 + 0xac))();
        (**(code **)(*(int *)(iVar8 + 0xa0) + 4))();
        *(float *)(iVar8 + 0xb4) = fVar5;
        (*(code *)**(undefined4 **)(iVar8 + 0xa0))();
      }
    }
  }
  return;
}


//// FUNCTION FUN_00496590 @ 00496590 ////

ulonglong __fastcall FUN_00496590(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iStack00000004;
  
  uVar3 = FUN_00acd42c();
  uVar4 = FUN_00acd42c();
  iVar1 = (int)uVar4;
  iVar2 = *(int *)(param_1 + 0x6c);
  iStack00000004 = param_1 + 0x78;
  if (iVar2 != iStack00000004) {
    do {
      uVar5 = FUN_00acd42c();
      uVar4 = FUN_00acd42c();
      if (((int)uVar3 == (int)uVar5) && (iVar1 == (int)uVar4)) {
        return uVar4 & 0xffffffffffffff00;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != iStack00000004);
  }
  return CONCAT44((int)(uVar4 >> 0x20),CONCAT31((int3)(uVar4 >> 8),1));
}


//// FUNCTION FUN_00496620 @ 00496620 ////

void __thiscall FUN_00496620(void *this,float *param_1,float *param_2,float param_3,char *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  fVar8 = (float10)fcos((float10)param_3);
  fVar2 = *(float *)((int)this + 0x9c);
  fVar3 = *(float *)((int)this + 0xa0);
  fVar9 = (float10)fsin((float10)param_3);
  if (0.0 <= fVar2 * (float)fVar8 - fVar3 * (float)fVar9) {
    uVar10 = FUN_00acd42c();
    iVar4 = (int)uVar10;
  }
  else {
    uVar10 = FUN_00acd42c();
    iVar4 = (int)uVar10;
  }
  fVar1 = *param_2;
  if (0.0 <= fVar2 * (float)fVar9 + fVar3 * (float)fVar8) {
    uVar10 = FUN_00acd42c();
    iVar5 = (int)uVar10;
  }
  else {
    uVar10 = FUN_00acd42c();
    iVar5 = (int)uVar10;
  }
  fVar2 = param_2[1];
  uVar10 = FUN_00496590((int)this);
  iVar6 = FUN_0046d990();
  iVar7 = FUN_0046d990();
  if (((iVar6 < iVar7) && ((char)uVar10 != '\0')) || ((*param_4 == '\0' && ((char)uVar10 != '\0'))))
  {
    *param_1 = (float)iVar4 + fVar1;
    param_1[1] = (float)iVar5 + fVar2;
    *param_4 = '\x01';
  }
  return;
}


//// FUNCTION FUN_00496790 @ 00496790 ////

void __thiscall FUN_00496790(void *this,float *param_1,float *param_2)

{
  char cVar1;
  char local_9;
  float local_8;
  float local_4;
  
  local_8 = *(float *)((int)this + 0x9c) + *param_2;
  local_4 = *(float *)((int)this + 0xa0) + param_2[1];
  local_9 = '\0';
  FUN_00496620(this,&local_8,param_2,0.0,&local_9);
  FUN_00496620(this,&local_8,param_2,0.7853982,&local_9);
  FUN_00496620(this,&local_8,param_2,-0.7853982,&local_9);
  FUN_00496620(this,&local_8,param_2,1.5707964,&local_9);
  FUN_00496620(this,&local_8,param_2,-1.5707964,&local_9);
  cVar1 = FUN_0046d260(&local_8,1);
  if ((cVar1 == '\0') || (local_9 == '\0')) {
    FUN_00496620(this,&local_8,param_2,3.1415927,&local_9);
    FUN_00496620(this,&local_8,param_2,2.3561945,&local_9);
    FUN_00496620(this,&local_8,param_2,-2.3561945,&local_9);
    FUN_0046d260(&local_8,1);
  }
  *param_1 = local_8;
  param_1[1] = local_4;
  return;
}


//// FUNCTION FUN_004968c0 @ 004968c0 ////

void __thiscall FUN_004968c0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)((int)this + 0x6c);
  uVar3 = 0;
  if (iVar1 != (int)this + 0x78) {
    do {
      iVar1 = *(int *)(iVar1 + 4);
      uVar3 = uVar3 + 1;
    } while (iVar1 != (int)this + 0x78);
    if (1 < uVar3) {
      puVar2 = (undefined4 *)FUN_00496790(this,&local_2c,(float *)((int)this + 0xa4));
      local_18 = *puVar2;
      local_14 = puVar2[1];
      local_10 = 0;
      FUN_009840b0(&local_24,&local_18);
      local_2c = local_24;
      local_24 = local_24 - *(float *)((int)this + 0xa4);
      local_28 = local_20;
      local_20 = local_20 - *(float *)((int)this + 0xa8);
      *(float *)((int)this + 0x9c) = local_24;
      *(float *)((int)this + 0xa0) = local_20;
      FUN_00412c90((float *)((int)this + 0x9c));
      goto LAB_0049697e;
    }
  }
  local_2c = *(float *)((int)this + 0xa4);
  local_28 = *(float *)((int)this + 0xa8);
LAB_0049697e:
  pfVar4 = (float *)((int)this + 0xa4);
  local_20 = local_28;
  *(float *)(param_1 + 0x78) = local_2c;
  *(float *)(param_1 + 0x7c) = local_28;
  local_24 = local_2c;
  local_1c = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = local_c;
  *(undefined4 *)(param_1 + 0x88) = local_8;
  *(undefined4 *)(param_1 + 0x8c) = local_4;
  *(float *)((int)this + 0xac) = *pfVar4;
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa8);
  *pfVar4 = local_2c;
  *(float *)((int)this + 0xa8) = local_28;
  fVar5 = FUN_00990e30(-0.25,0.25);
  *pfVar4 = (float)(fVar5 + (float10)*pfVar4);
  fVar5 = FUN_00990e30(-0.25,0.25);
  *(float *)((int)this + 0xa8) = (float)(fVar5 + (float10)*(float *)((int)this + 0xa8));
  fVar5 = FUN_004012c0(3.1415927);
  fVar6 = (float10)fpatan((float10)*(float *)((int)this + 0xa0),
                          (float10)*(float *)((int)this + 0x9c));
  fVar6 = FUN_004012c0((float)fVar6);
  fVar5 = FUN_004012c0((float)(fVar6 + (float10)(float)fVar5));
  *(float *)(param_1 + 0x84) = (float)fVar5;
  return;
}


//// FUNCTION CQueue_FindEntryPointFor @ 00496a70 ////

int __thiscall CQueue_FindEntryPointFor(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xbc);
  while( true ) {
    if (iVar1 == (int)this + 200) {
      return 0;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x9c) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return *(int *)(iVar1 + 8);
}


//// FUNCTION FUN_00496aa0 @ 00496aa0 ////

float10 __thiscall FUN_00496aa0(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  undefined1 local_c [12];
  
  iVar1 = *(int *)(param_1 + 0xbc);
  while( true ) {
    if (iVar1 == param_1 + 200) {
      return (float10)9999.9;
    }
    if (*(int **)(*(int *)(iVar1 + 8) + 0x9c) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0xb4);
  fVar2 = *(float *)(iVar1 + 0x78);
  fVar3 = *(float *)(iVar1 + 0x7c);
  pfVar4 = (float *)(**(code **)(*param_2 + 0x34))(local_c);
  fVar5 = (float10)pfVar4[1] - (float10)fVar2;
  fVar6 = (float10)pfVar4[2] - (float10)fVar3;
  return SQRT(((float10)*pfVar4 - (float10)unaff_ESI) * ((float10)*pfVar4 - (float10)unaff_ESI) +
              fVar5 * fVar5 + fVar6 * fVar6);
}


//// FUNCTION FUN_00496b40 @ 00496b40 ////

undefined4 __thiscall FUN_00496b40(void *this,int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_18 [12];
  undefined1 local_c [12];
  
  if (*(char *)((int)this + 300) != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar2 = *(uint *)((int)this + 0xbc);
  do {
    if (uVar2 == (int)this + 200U) {
LAB_00496b82:
      return uVar2 & 0xffffff00;
    }
    iVar1 = *(int *)(uVar2 + 8);
    if (*(int *)(iVar1 + 0x9c) == param_1) {
      uVar2 = *(uint *)((int)this + 0x6c);
      if (*(int *)(iVar1 + 0xcc) == *(int *)(uVar2 + 8)) {
        puVar3 = (undefined4 *)(**(code **)(**(int **)(iVar1 + 0x9c) + 0x34))(local_c);
        FUN_009840b0(&stack0xffffffe0,puVar3);
        uVar4 = FUN_009840b0(auStack_18,
                             (undefined4 *)(*(int *)(*(int *)((int)this + 0x6c) + 8) + 0x78));
        return CONCAT31((int3)((uint)uVar4 >> 8),1);
      }
      goto LAB_00496b82;
    }
    uVar2 = *(uint *)(uVar2 + 4);
  } while( true );
}


//// FUNCTION FUN_00496be0 @ 00496be0 ////

undefined4 __thiscall FUN_00496be0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xbc);
  while( true ) {
    if (iVar1 == (int)this + 200) {
      return 0xffffffff;
    }
    if (*(int *)(*(int *)(iVar1 + 8) + 0x9c) == param_1) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 8) + 0xb4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x90);
}


//// FUNCTION FUN_00496ca0 @ 00496ca0 ////

void __fastcall FUN_00496ca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1d26c;
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


//// FUNCTION FUN_00496d60 @ 00496d60 ////

void __fastcall FUN_00496d60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1d27c;
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


//// FUNCTION FUN_00496e30 @ 00496e30 ////

void __fastcall FUN_00496e30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1d28c;
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


//// FUNCTION FUN_00496ed0 @ 00496ed0 ////

undefined4 * __thiscall FUN_00496ed0(void *this,undefined4 *param_1,undefined1 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00496f10 @ 00496f10 ////

int * __fastcall FUN_00496f10(int *param_1)

{
  FUN_00495810(param_1);
  return param_1;
}


//// FUNCTION FUN_00496f40 @ 00496f40 ////

int * __fastcall FUN_00496f40(int *param_1)

{
  FUN_004957b0(param_1);
  return param_1;
}


//// FUNCTION FUN_00496f50 @ 00496f50 ////

undefined4 * __thiscall FUN_00496f50(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00496f90 @ 00496f90 ////

void FUN_00496f90(void)

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


//// FUNCTION FUN_00496fe0 @ 00496fe0 ////

undefined4 * __thiscall FUN_00496fe0(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 8);
  return this;
}


//// FUNCTION FUN_00497050 @ 00497050 ////

void * __thiscall FUN_00497050(void *this,byte param_1)

{
  FUN_004960f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00497070 @ 00497070 ////

int * __cdecl FUN_00497070(int param_1,int param_2,int *param_3)

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


//// FUNCTION FUN_00497140 @ 00497140 ////

/* WARNING: Removing unreachable block (ram,0x004972af) */

undefined4 * __thiscall FUN_00497140(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  char *pcVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d1d29c;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 **)((int)this + 0xa0) = (undefined4 *)((int)this + 0x94);
  *(undefined4 *)((int)this + 0x94) = &PTR_LAB_00d1d26c;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 **)((int)this + 0xb8) = (undefined4 *)((int)this + 0xac);
  *(undefined4 *)((int)this + 0xac) = &PTR_LAB_00d1d26c;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  puVar6 = (undefined4 *)((int)this + 0xd4);
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(puVar6,0x20,3,FUN_00401dc0,FUN_00401490);
  piVar1 = (int *)((int)this + 0x138);
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(int **)((int)this + 0x144) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d165ec;
  *(undefined4 *)((int)this + 0x14c) = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_0043b460((undefined4 *)((int)this + 0x154));
  *(void **)((int)this + 0xcc) = this;
  FUN_00acdb9e(0xe50d9c);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0xd0) = iVar3;
  if (s___AVQueueSlot_TM___00e50d88[0x13] != '\0') {
    iVar3 = 0xc4;
    pcVar7 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe50d9c);
    FUN_0097df60(pcVar4,pcVar7,iVar3);
    s___AVQueueSlot_TM___00e50d88[0x13] = '\0';
  }
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x14c) = param_2;
  (**(code **)*piVar1)();
  *(undefined1 *)((int)this + 0x150) = 0;
  iVar3 = 3;
  do {
    if (puVar6[2] == 0) {
      puVar6[2] = 0x20;
      pvVar5 = _malloc(0x20);
      *puVar6 = pvVar5;
    }
    _strncpy((char *)*puVar6,"",0);
    puVar2 = (undefined1 *)*puVar6;
    puVar6[1] = 0;
    puVar6 = puVar6 + 8;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x154) = 7;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00497310 @ 00497310 ////

void __fastcall FUN_00497310(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5a52;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d29c;
  param_1[0x4e] = &PTR_FUN_00d165ec;
  local_4 = 3;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  _eh_vector_destructor_iterator_(param_1 + 0x35,0x20,3,FUN_00401490);
  if ((undefined4 *)param_1[0x32] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x32] = param_1[0x31];
  }
  if (param_1[0x31] != 0) {
    *(undefined4 *)(param_1[0x31] + 4) = param_1[0x32];
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2b] = &PTR_LAB_00d1d26c;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2d] = param_1[0x2c];
  }
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1[0x2c] + 4) = param_1[0x2d];
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x25] = &PTR_LAB_00d1d26c;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x27] = param_1[0x26];
  }
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1[0x26] + 4) = param_1[0x27];
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x27] = param_1[0x26];
  }
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1[0x26] + 4) = param_1[0x27];
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  local_4 = 0xffffffff;
  FUN_0053ddb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION Queuee_Constructor @ 00497500 ////

undefined4 * __thiscall Queuee_Constructor(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5a9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d1d2c4;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  piVar1 = (int *)((int)this + 0x8c);
  *(undefined4 *)((int)this + 0x94) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 **)((int)this + 0x94) = (undefined4 *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x88) = &PTR_FUN_00d165ac;
  *(int *)((int)this + 0x9c) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x90) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 **)((int)this + 0xac) = (undefined4 *)((int)this + 0xa0);
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_00d1d27c;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 **)((int)this + 0xc4) = (undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xb8) = &PTR_LAB_00d1d27c;
  *(undefined4 *)((int)this + 0xcc) = 0;
  local_4 = 4;
  *(void **)((int)this + 0x80) = this;
  FUN_00acdb9e(0xe50dd4);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x84) = iVar3;
  if (DAT_00e50dd0 != '\0') {
    iVar3 = 0x78;
    pcVar5 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe50dd4);
    FUN_0097df60(pcVar4,pcVar5,iVar3);
    DAT_00e50dd0 = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00497630 @ 00497630 ////

void __fastcall FUN_00497630(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d2c4;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f] = param_1[0x1e];
  }
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1f];
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x2e] = &PTR_LAB_00d1d27c;
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
  param_1[0x28] = &PTR_LAB_00d1d27c;
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
  param_1[0x22] = &PTR_FUN_00d165ac;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  if ((undefined4 *)param_1[0x24] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x24] = param_1[0x23];
  }
  if (param_1[0x23] != 0) {
    *(undefined4 *)(param_1[0x23] + 4) = param_1[0x24];
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1f] = param_1[0x1e];
  }
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1[0x1e] + 4) = param_1[0x1f];
  }
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_0053ddb0(param_1);
  return;
}


//// FUNCTION FUN_004977e0 @ 004977e0 ////

void __fastcall FUN_004977e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xbc) != param_1 + 200) {
    do {
      piVar1 = *(int **)(param_1 + 0xbc);
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
    } while (*(int *)(param_1 + 0xbc) != param_1 + 200);
  }
  if (*(int *)(param_1 + 0x6c) != param_1 + 0x78) {
    do {
      piVar1 = *(int **)(param_1 + 0x6c);
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
    } while (*(int *)(param_1 + 0x6c) != param_1 + 0x78);
  }
  *(undefined4 *)(param_1 + 0xac) = 0xc479c000;
  *(undefined4 *)(param_1 + 0xb0) = 0xc479c000;
  return;
}


//// FUNCTION FUN_004978b0 @ 004978b0 ////

undefined4 * __fastcall FUN_004978b0(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *this;
  undefined4 *puVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5abb;
  local_c = ExceptionList;
  iVar5 = 0;
  for (iVar3 = *(int *)((int)param_1 + 0x6c); iVar3 != (int)param_1 + 0x78;
      iVar3 = *(int *)(iVar3 + 4)) {
    iVar5 = iVar5 + 1;
  }
  ExceptionList = &local_c;
  this = operator_new(0x164);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00497140(this,iVar5,param_1);
  }
  piVar2 = puVar4 + 0x31;
  piVar1 = (int *)((int)param_1 + 0x78);
  puVar4[0x32] = piVar1;
  *piVar2 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar2;
  *piVar1 = (int)piVar2;
  local_4 = 0xffffffff;
  FUN_004968c0(param_1,(int)puVar4);
  ExceptionList = local_c;
  return puVar4;
}


//// FUNCTION FUN_004979f0 @ 004979f0 ////

void __fastcall FUN_004979f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00496f90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00497a30 @ 00497a30 ////

undefined4 * __thiscall
FUN_00497a30(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_4 + 8);
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_00497a90 @ 00497a90 ////

void __cdecl FUN_00497a90(int *param_1,int *param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00497b70 @ 00497b70 ////

int * __cdecl FUN_00497b70(undefined4 *param_1,undefined4 *param_2,int *param_3)

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


//// FUNCTION FUN_00497c00 @ 00497c00 ////

undefined4 * __thiscall FUN_00497c00(void *this,byte param_1)

{
  FUN_00497310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00497c20 @ 00497c20 ////

undefined4 * __thiscall FUN_00497c20(void *this,byte param_1)

{
  FUN_00497630(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CQueue_GrowQueue @ 00497c40 ////

void __fastcall CQueue_GrowQueue(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  for (iVar2 = *(int *)((int)param_1 + 0x6c); iVar2 != (int)param_1 + 0x78;
      iVar2 = *(int *)(iVar2 + 4)) {
    CQueue_AssignNearestEntryPoint(param_1,*(float *)(iVar2 + 8));
  }
  iVar2 = *(int *)((int)param_1 + 0xbc);
  if (iVar2 != (int)param_1 + 200) {
    do {
      iVar1 = *(int *)(iVar2 + 8);
      if ((*(int *)(iVar1 + 0x9c) != 0) && (*(int *)(iVar1 + 0xb4) == 0)) {
        *(undefined4 *)((int)param_1 + 0x98) = 0x14;
        puVar3 = FUN_004978b0(param_1);
        (**(code **)(puVar3[0x2b] + 4))();
        puVar3[0x30] = iVar1;
        (**(code **)puVar3[0x2b])();
        (**(code **)(*(int *)(iVar1 + 0xa0) + 4))();
        *(undefined4 **)(iVar1 + 0xb4) = puVar3;
        (*(code *)**(undefined4 **)(iVar1 + 0xa0))();
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != (int)param_1 + 200);
  }
  return;
}


//// FUNCTION FUN_00497d00 @ 00497d00 ////

int __fastcall FUN_00497d00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00496f90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00497d30 @ 00497d30 ////

void * FUN_00497d30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00497a30(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00497d80 @ 00497d80 ////

void __cdecl FUN_00497d80(int *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00497e70 @ 00497e70 ////

void __fastcall FUN_00497e70(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x98) < 1) {
    CQueue_GrowQueue(param_1);
  }
  else {
    *(int *)((int)param_1 + 0x98) = *(int *)((int)param_1 + 0x98) + -1;
  }
  if ((0 < *(int *)((int)param_1 + 0x130)) &&
     (iVar1 = *(int *)((int)param_1 + 0x134) + -1, *(int *)((int)param_1 + 0x134) = iVar1, iVar1 < 1
     )) {
    *(int *)((int)param_1 + 0x130) = *(int *)((int)param_1 + 0x130) + -1;
  }
  return;
}


//// FUNCTION CQueue_RegisterEntryPoint @ 00497ec0 ////

void __thiscall CQueue_RegisterEntryPoint(void *this,int param_1)

{
  int *piVar1;
  void *this_00;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5adb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0xd0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = Queuee_Constructor(this_00,param_1);
  }
  piVar3 = puVar2 + 0x1e;
  piVar1 = (int *)((int)this + 200);
  puVar2[0x1f] = piVar1;
  *piVar3 = *piVar1;
  *(int **)(*piVar1 + 4) = piVar3;
  *piVar1 = (int)piVar3;
  local_4 = 0xffffffff;
  CQueue_GrowQueue(this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00497f40 @ 00497f40 ////

void __thiscall FUN_00497f40(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    piVar3 = *(int **)((int)this + 0xbc);
    if (piVar3 != (int *)((int)this + 200)) {
      while (puVar1 = (undefined4 *)piVar3[2], puVar1[0x27] != param_1) {
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)((int)this + 200)) {
          return;
        }
      }
      iVar2 = puVar1[0x2d];
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0xac) + 4))();
        *(undefined4 *)(iVar2 + 0xc0) = 0;
        (*(code *)**(undefined4 **)(iVar2 + 0xac))();
      }
      if (puVar1[0x33] != 0) {
        FUN_00495a00(puVar1[0x33]);
      }
      if ((int *)piVar3[1] != (int *)0x0) {
        *(int *)piVar3[1] = *piVar3;
      }
      if (*piVar3 != 0) {
        *(int *)(*piVar3 + 4) = piVar3[1];
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3 = puVar1 + 0x12;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
      CQueue_GrowQueue(this);
      *(int *)((int)this + 0x130) = *(int *)((int)this + 0x130) + 1;
      *(undefined4 *)((int)this + 0x134) = 5;
    }
  }
  return;
}


//// FUNCTION CQueue_GetOrCreateEntryPointPosition @ 00498010 ////

void __thiscall CQueue_GetOrCreateEntryPointPosition(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_retaddr;
  undefined1 local_c [12];
  
  if (*(char *)((int)this + 300) != '\0') {
    iVar5 = *(int *)(*(int *)((int)this + 0x6c) + 8);
    uVar1 = *(undefined4 *)(iVar5 + 0x78);
    uVar2 = *(undefined4 *)(iVar5 + 0x7c);
    uVar3 = *(undefined4 *)(iVar5 + 0x80);
    param_1[3] = *(undefined4 *)(iVar5 + 0x84);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    return;
  }
  if (param_2[0x13a] == 5) {
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x34))(local_c);
    uVar1 = puVar4[2];
    uVar2 = *puVar4;
    uVar3 = puVar4[1];
    unaff_retaddr[3] = param_2[0x31];
    *unaff_retaddr = uVar2;
    unaff_retaddr[1] = uVar3;
    unaff_retaddr[2] = uVar1;
    return;
  }
  iVar5 = CQueue_FindEntryPointFor(this,(int)param_2);
  if (iVar5 == 0) {
    CQueue_RegisterEntryPoint(this,(int)param_2);
    iVar5 = CQueue_FindEntryPointFor(this,(int)param_2);
  }
  iVar5 = *(int *)(iVar5 + 0xb4);
  *param_1 = *(undefined4 *)(iVar5 + 0x78);
  param_1[1] = *(undefined4 *)(iVar5 + 0x7c);
  param_1[2] = *(undefined4 *)(iVar5 + 0x80);
  param_1[3] = *(undefined4 *)(iVar5 + 0x84);
  return;
}


//// FUNCTION FUN_004980e0 @ 004980e0 ////

void FUN_004980e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_004980e0(*(void **)((int)param_1 + 8));
    FUN_004960f0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION CQueue_RefreshEntryPointPosition @ 004981a0 ////

void __thiscall CQueue_RefreshEntryPointPosition(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  float10 fVar3;
  void *local_4;
  
  iVar1 = *(int *)((int)this + 0x6c);
  local_4 = this;
  fVar3 = FUN_004012c0(*(float *)(*(int *)(iVar1 + 8) + 0x84));
  local_4 = (void *)(float)fVar3;
  (**(code **)(*param_1 + 0x28))(*(int *)(iVar1 + 8) + 0x78,&local_4);
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x6c) + 8) + 0xa8);
  if ((iVar1 != 0) && (this_00 = *(void **)(iVar1 + 0x9c), this_00 != (void *)0x0)) {
    puVar2 = (undefined4 *)FUN_005998e0((int)this_00);
    TMCharacter_CancelAction(this_00,puVar2);
  }
  CQueue_RegisterEntryPoint(this,(int)param_1);
  return;
}


//// FUNCTION FUN_00498210 @ 00498210 ////

int * FUN_00498210(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_00497d80(param_1,param_2,param_3);
  return param_1 + param_2 * 9;
}


//// FUNCTION FUN_00498240 @ 00498240 ////

void FUN_00498240(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    FUN_00495ad0(param_1);
  }
  return;
}


//// FUNCTION FUN_00498270 @ 00498270 ////

void __fastcall FUN_00498270(int param_1)

{
  FUN_004980e0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004982a0 @ 004982a0 ////

undefined4 * __thiscall FUN_004982a0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca5af0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_00497d30(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 0xc));
    if (*(char *)((int)local_18 + 0x31) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004982a0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_004982a0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_00498350 @ 00498350 ////

void __fastcall FUN_00498350(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1d2ec;
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


//// FUNCTION FUN_004983a0 @ 004983a0 ////

void __fastcall FUN_004983a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1d2f8;
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


//// FUNCTION FUN_004983f0 @ 004983f0 ////

void __fastcall FUN_004983f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1d304;
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


//// FUNCTION FUN_00498440 @ 00498440 ////

undefined4 * __thiscall FUN_00498440(void *this,byte param_1)

{
  FUN_00498350(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00498460 @ 00498460 ////

undefined4 * __thiscall FUN_00498460(void *this,byte param_1)

{
  FUN_004983a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00498480 @ 00498480 ////

undefined4 * __thiscall FUN_00498480(void *this,byte param_1)

{
  FUN_004983f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004984a0 @ 004984a0 ////

void __fastcall FUN_004984a0(int param_1)

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
    FUN_00495ad0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004984f0 @ 004984f0 ////

void __thiscall FUN_004984f0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_004982a0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x31) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x31);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x31);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x31);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x31);
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


//// FUNCTION FUN_00498580 @ 00498580 ////

void FUN_00498580(void)

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
  puStack_8 = &LAB_00ca5b08;
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


//// FUNCTION FUN_004985f0 @ 004985f0 ////

void __thiscall FUN_004985f0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca5b28;
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
  FUN_00495810((int *)&param_2);
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
      goto LAB_00498761;
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
      piVar2 = (int *)FUN_00495580(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00495560((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00498761:
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
            FUN_00495670(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_004956d0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_00495670(this,(int)piVar5);
              break;
            }
LAB_00498824:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_004956d0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00498824;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_00495670(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_004956d0(this,piVar5);
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


//// FUNCTION FUN_004988c0 @ 004988c0 ////

void __thiscall
FUN_004988c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca5b48;
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
  piVar3 = FUN_00497d30(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_004989bb:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00495670(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_004956d0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_004989bb;
      if (piVar6 == (int *)*piVar2) {
        FUN_004956d0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_00495670(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00498a70 @ 00498a70 ////

void __fastcall FUN_00498a70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5bb9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d310;
  local_4 = 6;
  if ((undefined4 *)param_1[0x2f] != param_1 + 0x32) {
    do {
      piVar1 = (int *)param_1[0x2f];
      puVar2 = (undefined4 *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      if (puVar2[0x33] != 0) {
        FUN_00495a00(puVar2[0x33]);
      }
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    } while ((undefined4 *)param_1[0x2f] != param_1 + 0x32);
  }
  if ((undefined4 *)param_1[0x1b] != param_1 + 0x1e) {
    do {
      piVar1 = (int *)param_1[0x1b];
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
    } while ((undefined4 *)param_1[0x1b] != param_1 + 0x1e);
  }
  puVar2 = (undefined4 *)param_1[0x53];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x4e] + 4))();
    param_1[0x53] = 0;
    (**(code **)param_1[0x4e])();
  }
  param_1[0x54] = &PTR_FUN_00d16bec;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x56] = param_1[0x55];
  }
  if (param_1[0x55] != 0) {
    *(undefined4 *)(param_1[0x55] + 4) = param_1[0x56];
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  if ((undefined4 *)param_1[0x56] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x56] = param_1[0x55];
  }
  if (param_1[0x55] != 0) {
    *(undefined4 *)(param_1[0x55] + 4) = param_1[0x56];
  }
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x4e] = &PTR_LAB_00d1d28c;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x53] = 0;
  if ((undefined4 *)param_1[0x50] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x50] = param_1[0x4f];
  }
  if (param_1[0x4f] != 0) {
    *(undefined4 *)(param_1[0x4f] + 4) = param_1[0x50];
  }
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_005422a0(param_1 + 0x47);
  FUN_004983f0(param_1 + 0x3a);
  FUN_004983a0(param_1 + 0x2d);
  FUN_00498350(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00498d20 @ 00498d20 ////

void __thiscall FUN_00498d20(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_004980e0((void *)piVar6[1]);
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
    FUN_004985f0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00498e10 @ 00498e10 ////

void __thiscall FUN_00498e10(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ca5bd8;
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
      FUN_00498580();
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
        iVar2 = FUN_004951f0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x24);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_00497b70(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_00497d80(piVar4,param_2,&local_40);
      FUN_00497b70(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 9);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x24;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00498240(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
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
        FUN_00497b70(param_1,piVar3,param_1 + param_2 * 9);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00498210(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x24,&local_40);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x24;
        *(int *)((int)this + 8) = iVar2;
        FUN_00497a90(param_1,(int *)(iVar2 + param_2 * -0x24),&local_40);
      }
      else {
        piVar4 = FUN_00497b70(piVar3 + param_2 * -9,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_00497070((int)param_1,(int)(piVar3 + param_2 * -9),piVar3);
        FUN_00497a90(param_1,param_1 + param_2 * 9,&local_40);
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


//// FUNCTION FUN_00499130 @ 00499130 ////

void __thiscall FUN_00499130(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00499194:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00499199;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00499194;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00499199:
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
      puVar5 = (undefined4 *)FUN_004988c0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_004957b0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_004988c0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00499250 @ 00499250 ////

undefined4 * __thiscall FUN_00499250(void *this,byte param_1)

{
  FUN_00498a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004992e0 @ 004992e0 ////

void __thiscall FUN_004992e0(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x24 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x24;
      goto LAB_00499325;
    }
  }
  iVar1 = 0;
LAB_00499325:
  FUN_00498e10(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x24;
  return;
}


//// FUNCTION FUN_00499350 @ 00499350 ////

undefined4 * __thiscall FUN_00499350(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_004988c0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_004988c0(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_004988c0(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_004957b0((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x31) != '\0') {
          FUN_004988c0(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_004988c0(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00495810((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_004994d2;
      }
      if (*(char *)(param_2[2] + 0x31) != '\0') {
        FUN_004988c0(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_004988c0(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_004994d2:
  puVar4 = (undefined4 *)FUN_00499130(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00499500 @ 00499500 ////

void __fastcall FUN_00499500(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00498d20(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00499560 @ 00499560 ////

void __thiscall FUN_00499560(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x24) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x24))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00497d80(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 9;
    return;
  }
  FUN_004992e0(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004995f0 @ 004995f0 ////

int __fastcall FUN_004995f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00496f90();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00499620 @ 00499620 ////

int * __thiscall FUN_00499620(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined1 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5bf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00495fa0(this,param_1);
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
  piVar2 = FUN_00499350(this,&param_1,piVar2,(int *)&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return (int *)(*piVar2 + 0x2c);
}


//// FUNCTION FUN_004996f0 @ 004996f0 ////

void FUN_004996f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_134;
  char *local_130;
  uint local_12c;
  uint local_128;
  char local_124 [20];
  float local_110;
  float local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  uint local_100;
  undefined1 local_fc [20];
  float local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5c68;
  local_c = ExceptionList;
  if (((DAT_0104a6e8 == 0) ||
      (local_110 = (float)((DAT_0104a6ec - DAT_0104a6e8) / 0x24), local_110 == 0.0)) &&
     (DAT_0104a6d4 == '\0')) {
    ExceptionList = &local_c;
    FUN_00559fb0(local_e4);
    local_130 = local_124;
    local_4 = 0;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"queueanims",10);
    local_12c = 10;
    local_130[10] = '\0';
    local_4._0_1_ = 1;
    FUN_0055be10(local_e4,&local_130,'\0');
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"stars",5);
    local_12c = 5;
    local_130[5] = '\0';
    local_4._0_1_ = 2;
    FUN_00558a50(local_e4,&local_130,(undefined4 *)0x1);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_10c = 0.0;
    puVar1 = FUN_00558de0(local_e4,&local_130);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    if (puVar1[1] != 0) {
      do {
        FUN_00558de0(local_e4,&local_130);
        local_4._0_1_ = 3;
        if (local_12c != 0) {
          fVar5 = FUN_00558610(local_e4,&local_130,0.0);
          local_108 = local_fc;
          local_fc[0] = 0;
          local_104 = 0;
          local_100 = 0x14;
          local_4._0_1_ = 4;
          FUN_004015d0(&local_108,local_130,local_12c);
          local_e8 = (float)fVar5;
          FUN_00499560(&DAT_0104a6e4,&local_108);
          local_10c = (float)fVar5 + local_10c;
          if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
            _free(local_108);
          }
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
          _free(local_130);
        }
        uVar2 = FUN_00558120(local_e4,2);
      } while ((char)uVar2 != '\0');
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"staff",5);
    local_12c = 5;
    local_130[5] = '\0';
    local_4._0_1_ = 5;
    FUN_00558a50(local_e4,&local_130,(undefined4 *)0x1);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_134 = 0.0;
    puVar1 = FUN_00558de0(local_e4,&local_130);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    if (puVar1[1] != 0) {
      do {
        FUN_00558de0(local_e4,&local_130);
        local_4._0_1_ = 6;
        if (local_12c != 0) {
          fVar5 = FUN_00558610(local_e4,&local_130,0.0);
          local_110 = (float)fVar5;
          local_108 = local_fc;
          local_fc[0] = 0;
          local_104 = 0;
          local_100 = 0x14;
          local_4._0_1_ = 7;
          FUN_004015d0(&local_108,local_130,local_12c);
          local_e8 = local_110;
          FUN_00499560(&DAT_0104a6f4,&local_108);
          local_134 = local_110 + local_134;
          if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
            _free(local_108);
          }
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
          _free(local_130);
        }
        uVar2 = FUN_00558120(local_e4,2);
      } while ((char)uVar2 != '\0');
    }
    if (DAT_0104a6e8 != DAT_0104a6ec) {
      iVar4 = DAT_0104a6e8;
      do {
        iVar3 = iVar4 + 0x24;
        *(float *)(iVar4 + 0x20) = (1.0 / local_10c) * *(float *)(iVar4 + 0x20);
        iVar4 = iVar3;
      } while (iVar3 != DAT_0104a6ec);
    }
    if (DAT_0104a6e8 != DAT_0104a6ec) {
      iVar4 = DAT_0104a6e8;
      do {
        iVar3 = iVar4 + 0x24;
        *(float *)(iVar4 + 0x20) = (1.0 / local_134) * *(float *)(iVar4 + 0x20);
        iVar4 = iVar3;
      } while (iVar3 != DAT_0104a6ec);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00499b30 @ 00499b30 ////

int * FUN_00499b30(int *param_1)

{
  int *_Dest;
  uint uVar1;
  char *pcVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float10 fVar8;
  
  FUN_004996f0();
  fVar8 = FUN_00990e30(0.0,1.0);
  fVar3 = 0.0;
  puVar4 = DAT_0104a6f8;
  if (DAT_0104a6f8 == DAT_0104a6fc) {
    _Dest = param_1 + 3;
    *param_1 = (int)_Dest;
    *(char *)_Dest = '\0';
    param_1[1] = 0;
    param_1[2] = 0x14;
    _strncpy((char *)_Dest,"",0);
    param_1[1] = 0;
    *(undefined1 *)*param_1 = 0;
    return param_1;
  }
  do {
    puVar7 = puVar4;
    fVar3 = fVar3 + (float)puVar7[8];
    if ((float)fVar8 < fVar3) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      uVar1 = puVar7[1];
      pcVar2 = (char *)*puVar7;
      if (0x13 < uVar1) {
        uVar5 = uVar1 + 0x20 & 0xffffffe0;
        param_1[2] = uVar5;
        pvVar6 = _malloc(uVar5);
        *param_1 = (int)pvVar6;
      }
      _strncpy((char *)*param_1,pcVar2,uVar1);
      param_1[1] = uVar1;
      *(undefined1 *)(uVar1 + *param_1) = 0;
      return param_1;
    }
    puVar4 = puVar7 + 9;
  } while (puVar7 + 9 != DAT_0104a6fc);
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  uVar1 = puVar7[1];
  pcVar2 = (char *)*puVar7;
  if (0x13 < uVar1) {
    uVar5 = uVar1 + 0x20 & 0xffffffe0;
    param_1[2] = uVar5;
    pvVar6 = _malloc(uVar5);
    *param_1 = (int)pvVar6;
  }
  _strncpy((char *)*param_1,pcVar2,uVar1);
  param_1[1] = uVar1;
  *(undefined1 *)(uVar1 + *param_1) = 0;
  return param_1;
}


//// FUNCTION FUN_00499c70 @ 00499c70 ////

undefined4 __cdecl FUN_00499c70(undefined4 *param_1)

{
  int *piVar1;
  
  if (DAT_0104a6d5 == '\0') {
    piVar1 = FUN_00499620(&DAT_0104a6d8,param_1);
    if ((char)*piVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}


//// FUNCTION FUN_00499ca0 @ 00499ca0 ////

void __cdecl FUN_00499ca0(undefined4 *param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  undefined4 *local_8;
  undefined4 *local_4;
  
  local_8 = FUN_00495fa0(&DAT_0104a6d8,param_1);
  puVar1 = DAT_0104a6dc;
  if (local_8 != DAT_0104a6dc) {
    uVar2 = FUN_00441060(param_1,local_8 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &local_8;
      goto LAB_00499ce3;
    }
  }
  local_4 = puVar1;
  ppuVar3 = &local_4;
LAB_00499ce3:
  if (*ppuVar3 == puVar1) {
    piVar4 = FUN_00499620(&DAT_0104a6d8,param_1);
    *(undefined1 *)piVar4 = param_2;
    return;
  }
  *(undefined1 *)(*ppuVar3 + 0xb) = param_2;
  return;
}


//// FUNCTION FUN_00499d10 @ 00499d10 ////

void __cdecl FUN_00499d10(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  if (param_1 != &DAT_0104a6d8) {
    FUN_00498d20(&DAT_0104a6d8,&param_1,(int *)*DAT_0104a6dc,DAT_0104a6dc);
    FUN_004984f0(&DAT_0104a6d8,(int)puVar1);
  }
  return;
}


//// FUNCTION FUN_00499d50 @ 00499d50 ////

void __fastcall FUN_00499d50(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1d2ec;
  return;
}


//// FUNCTION FUN_00499db0 @ 00499db0 ////

void __fastcall FUN_00499db0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1d2f8;
  return;
}


//// FUNCTION FUN_00499e10 @ 00499e10 ////

void __fastcall FUN_00499e10(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1d304;
  return;
}


//// FUNCTION FUN_00499e70 @ 00499e70 ////

int * FUN_00499e70(int *param_1)

{
  int *_Dest;
  uint uVar1;
  char *pcVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  float10 fVar8;
  
  FUN_004996f0();
  fVar8 = FUN_00990e30(0.0,1.0);
  fVar3 = 0.0;
  puVar4 = DAT_0104a6e8;
  if (DAT_0104a6e8 == DAT_0104a6ec) {
    _Dest = param_1 + 3;
    *param_1 = (int)_Dest;
    *(char *)_Dest = '\0';
    param_1[1] = 0;
    param_1[2] = 0x14;
    _strncpy((char *)_Dest,"",0);
    param_1[1] = 0;
    *(undefined1 *)*param_1 = 0;
    return param_1;
  }
  do {
    puVar7 = puVar4;
    fVar3 = fVar3 + (float)puVar7[8];
    if (fVar3 < (float)fVar8) {
      *param_1 = (int)(param_1 + 3);
      *(undefined1 *)(param_1 + 3) = 0;
      param_1[1] = 0;
      param_1[2] = 0x14;
      uVar1 = puVar7[1];
      pcVar2 = (char *)*puVar7;
      if (0x13 < uVar1) {
        uVar5 = uVar1 + 0x20 & 0xffffffe0;
        param_1[2] = uVar5;
        pvVar6 = _malloc(uVar5);
        *param_1 = (int)pvVar6;
      }
      _strncpy((char *)*param_1,pcVar2,uVar1);
      param_1[1] = uVar1;
      *(undefined1 *)(uVar1 + *param_1) = 0;
      return param_1;
    }
    puVar4 = puVar7 + 9;
  } while (puVar7 + 9 != DAT_0104a6ec);
  *param_1 = (int)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  uVar1 = puVar7[1];
  pcVar2 = (char *)*puVar7;
  if (0x13 < uVar1) {
    uVar5 = uVar1 + 0x20 & 0xffffffe0;
    param_1[2] = uVar5;
    pvVar6 = _malloc(uVar5);
    *param_1 = (int)pvVar6;
  }
  _strncpy((char *)*param_1,pcVar2,uVar1);
  param_1[1] = uVar1;
  *(undefined1 *)(uVar1 + *param_1) = 0;
  return param_1;
}


//// FUNCTION FUN_00499fb0 @ 00499fb0 ////

int * FUN_00499fb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  void **ppvVar5;
  char *local_6c;
  uint local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5cf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_005773c0(param_2);
  iVar2 = GetPlayerStudio();
  if (iVar1 == iVar2) {
    FUN_00499e70(param_1);
  }
  else {
    ppvVar5 = local_4c;
    pvVar3 = (void *)FUN_00577370(param_2);
    piVar4 = FUN_00441210(pvVar3,(int *)ppvVar5);
    local_4 = 0;
    pvVar3 = (void *)GenreKey_ToEnum(piVar4);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    FUN_00496130(pvVar3,&local_6c);
    local_4 = 1;
    if (local_68 == 0) {
      piVar4 = FUN_00499b30((int *)local_2c);
      FUN_004015d0(&local_6c,(char *)*piVar4,piVar4[1]);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    *param_1 = (int)(param_1 + 3);
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 0x14;
    FUN_004015d0(param_1,local_6c,local_68);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CQueue_Constructor @ 0049a0e0 ////

undefined4 * __thiscall CQueue_Constructor(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5d9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d1d310;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x80) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d1d2ec;
  *(undefined4 **)((int)this + 0x6c) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  puVar1 = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined ***)((int)this + 0xb4) = &PTR_LAB_00d1d2f8;
  *(undefined4 **)((int)this + 0xbc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  puVar1 = (undefined4 *)((int)this + 0xfc);
  *(undefined4 *)((int)this + 0x104) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined ***)((int)this + 0xe8) = &PTR_LAB_00d1d304;
  *(undefined4 **)((int)this + 0xf0) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0xec);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 **)((int)this + 0x144) = (undefined4 *)((int)this + 0x138);
  *(undefined4 *)((int)this + 0x138) = &PTR_LAB_00d1d28c;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 **)((int)this + 0x15c) = (undefined4 *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x150) = &PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x164) = 0;
  local_4 = 0xc;
  *(undefined4 *)((int)this + 0x128) = 999;
  *(undefined4 *)((int)this + 0xa8) = 0x41200000;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0x41200000;
  *(undefined4 *)((int)this + 0xa0) = 0xbf800000;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x124) = 1;
  piVar3 = (int *)(param_1 + 0x58);
  piVar2 = (int *)((int)this + 0xfc);
  *(int **)(param_1 + 0x5c) = piVar2;
  *piVar3 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar3;
  *piVar2 = (int)piVar3;
  FUN_004978b0(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0049a2c0 @ 0049a2c0 ////

undefined4 * __thiscall FUN_0049a2c0(void *this)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5e4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  *(undefined ***)this = &PTR_FUN_00d1d310;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  puVar1 = (undefined4 *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x80) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d1d2ec;
  *(undefined4 **)((int)this + 0x6c) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  puVar1 = (undefined4 *)((int)this + 200);
  *(undefined4 *)((int)this + 0xd0) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined ***)((int)this + 0xb4) = &PTR_LAB_00d1d2f8;
  *(undefined4 **)((int)this + 0xbc) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0xb8);
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  puVar1 = (undefined4 *)((int)this + 0xfc);
  *(undefined4 *)((int)this + 0x104) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined ***)((int)this + 0xe8) = &PTR_LAB_00d1d304;
  *(undefined4 **)((int)this + 0xf0) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0xec);
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 **)((int)this + 0x144) = (undefined4 *)((int)this + 0x138);
  *(undefined4 *)((int)this + 0x138) = &PTR_LAB_00d1d28c;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 **)((int)this + 0x15c) = (undefined4 *)((int)this + 0x150);
  *(undefined4 *)((int)this + 0x150) = &PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x164) = 0;
  local_4 = 0xc;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x128) = 999;
  FUN_009840b0(&local_14,(undefined4 *)&stack0x00000004);
  *(undefined4 *)((int)this + 0x9c) = in_stack_00000010;
  *(undefined4 *)((int)this + 0xa4) = local_14;
  *(undefined4 *)((int)this + 0xa8) = local_10;
  *(undefined4 *)((int)this + 0xa0) = in_stack_00000014;
  *(undefined4 *)((int)this + 0xb0) = 0;
  piVar3 = (int *)(in_stack_00000018 + 0x58);
  piVar2 = (int *)((int)this + 0xfc);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(int **)(in_stack_00000018 + 0x5c) = piVar2;
  *piVar3 = *piVar2;
  *(int **)(*piVar2 + 4) = piVar3;
  *piVar2 = (int)piVar3;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  *(undefined4 *)((int)this + 0x124) = 1;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  FUN_004978b0(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0049a4a0 @ 0049a4a0 ////

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0049a4a0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  char *pcVar14;
  uint uVar15;
  char local_b4 [4];
  undefined4 uStack_b0;
  int local_90;
  byte *local_8c;
  uint local_88;
  uint local_84;
  byte local_80 [20];
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5e6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
  pvVar9 = *(void **)(*(int *)(param_1 + 0xa8) + 0x9c);
  iVar10 = 0;
  *(undefined4 *)((int)pvVar9 + 0x1fc) = 0;
  *(undefined4 *)((int)pvVar9 + 0x200) = 0;
  local_8c = local_80;
  local_80[0] = 0;
  local_88 = 0;
  local_84 = 0x14;
  local_4 = 0;
  uVar3 = FUN_00598ee0((int)pvVar9);
  if ((char)uVar3 == '\0') {
    piVar5 = FUN_00499b30((int *)local_6c);
    FUN_004015d0(&local_8c,(char *)*piVar5,piVar5[1]);
    local_4c[0] = local_6c[0];
    local_44 = local_64;
  }
  else {
    iVar4 = FUN_00990d30(0,4);
    if (iVar4 == 0) {
      piVar5 = FUN_00499e70((int *)local_6c);
      FUN_004015d0(&local_8c,(char *)*piVar5,piVar5[1]);
      local_4c[0] = local_6c[0];
      local_44 = local_64;
    }
    else if (iVar4 == 1) {
      piVar5 = FUN_00499fb0((int *)local_2c,(int)pvVar9);
      FUN_004015d0(&local_8c,(char *)*piVar5,piVar5[1]);
      local_4c[0] = local_2c[0];
      local_44 = local_24;
    }
    else {
      piVar5 = FUN_00499b30((int *)local_4c);
      FUN_004015d0(&local_8c,(char *)*piVar5,piVar5[1]);
    }
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  pcVar14 = local_b4;
  local_b4[0] = '\0';
  uVar3 = 0;
  uVar15 = 0x14;
  FUN_004015d0(&stack0xffffff40,(char *)local_8c,local_88);
  pbVar6 = FUN_00446820(pcVar14,uVar3,uVar15);
  FUN_00526890(pvVar9,pbVar6);
  if (pbVar6 != (byte *)0x0) {
    FUN_00985de0(pbVar6);
  }
  if (*(int *)(param_1 + 0x134) < 0xc) {
    puVar12 = (undefined4 *)(param_1 + 0xd4);
    do {
      pbVar6 = (byte *)*puVar12;
      pbVar7 = local_8c;
      do {
        bVar2 = *pbVar7;
        bVar13 = bVar2 < *pbVar6;
        if (bVar2 != *pbVar6) {
LAB_0049a65a:
          iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
          goto LAB_0049a65f;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar13 = bVar2 < pbVar6[1];
        if (bVar2 != pbVar6[1]) goto LAB_0049a65a;
        pbVar7 = pbVar7 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_0049a65f:
      if (iVar4 == 0) {
        FUN_0049a4a0(param_1);
        break;
      }
      iVar10 = iVar10 + 1;
      puVar12 = puVar12 + 8;
    } while (iVar10 < 3);
  }
  puVar11 = (uint *)(param_1 + 0x11c);
  local_90 = 2;
  do {
    uVar15 = puVar11[-9];
    pcVar14 = (char *)puVar11[-10];
    if (*puVar11 <= uVar15) {
      if (0x14 < *puVar11) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar11[-2]);
      }
      uVar8 = uVar15 + 0x20 & 0xffffffe0;
      *puVar11 = uVar8;
      pvVar9 = _malloc(uVar8);
      puVar11[-2] = (uint)pvVar9;
    }
    uStack_b0 = 0x49a6c2;
    _strncpy((char *)puVar11[-2],pcVar14,uVar15);
    uVar8 = local_88;
    pbVar6 = local_8c;
    puVar1 = puVar11 + -2;
    puVar11[-1] = uVar15;
    puVar11 = puVar11 + -8;
    local_90 = local_90 + -1;
    *(undefined1 *)(uVar15 + *puVar1) = 0;
  } while (local_90 != 0);
  if (*(uint *)(param_1 + 0xdc) <= local_88) {
    if (0x14 < *(uint *)(param_1 + 0xdc)) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0xd4));
    }
    uVar15 = local_88 + 0x20 & 0xffffffe0;
    *(uint *)(param_1 + 0xdc) = uVar15;
    pvVar9 = _malloc(uVar15);
    *(void **)(param_1 + 0xd4) = pvVar9;
  }
  uStack_b0 = 0x49a72f;
  _strncpy(*(char **)(param_1 + 0xd4),(char *)pbVar6,uVar8);
  *(uint *)(param_1 + 0xd8) = uVar8;
  *(undefined1 *)(uVar8 + *(int *)(param_1 + 0xd4)) = 0;
  if (local_84 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_8c);
}


//// FUNCTION FUN_0049a780 @ 0049a780 ////

void __thiscall FUN_0049a780(void *this,undefined4 param_1)

{
  int *this_00;
  int iVar1;
  void *this_01;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_c [12];
  
  (**(code **)(*(int *)((int)this + 0x94) + 4))();
  *(undefined4 *)((int)this + 0xa8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x94))();
  this_00 = *(int **)(*(int *)((int)this + 0xa8) + 0x9c);
  iVar1 = FUN_005998e0((int)this_00);
  if (iVar1 != 0) {
    uVar3 = 1;
    this_01 = (void *)FUN_005998e0((int)this_00);
    FUN_00401050(this_01,uVar3);
  }
  FUN_00598db0(this_00,5);
  *(undefined4 *)((int)this + 0x134) = 0;
  FUN_0049a4a0((int)this);
  puVar2 = (undefined4 *)(**(code **)(*this_00 + 0x34))(auStack_c);
  FUN_009840b0(&stack0xffffffe8,puVar2);
  FUN_0046d8f0((float *)&stack0xffffffe8,&stack0x00000000,0,0x20,1);
  *(undefined1 *)((int)this + 0x150) = 1;
  return;
}


//// FUNCTION FUN_0049a830 @ 0049a830 ////

void __fastcall FUN_0049a830(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  float fStack_10;
  float local_c [3];
  
  if ((int *)param_1[0x27] == (int *)0x0) {
    piVar1 = param_1 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*param_1)(1);
      return;
    }
  }
  else if (param_1[0x33] == 0) {
    (**(code **)(*(int *)param_1[0x27] + 0x34))(local_c);
    iVar2 = param_1[0x2d];
    local_c[1] = 0.0;
    if ((((*(float *)(iVar2 + 0x78) == fStack_10) && (*(float *)(iVar2 + 0x7c) == local_c[0])) &&
        (*(float *)(iVar2 + 0x80) == 0.0)) &&
       (*(float *)(param_1[0x27] + 0xc4) == *(float *)(iVar2 + 0x84))) {
      FUN_00495230(param_1 + 0x2e,(int)(param_1 + 0x28));
      FUN_0049a780((void *)param_1[0x33],param_1);
    }
  }
  return;
}


//// FUNCTION FUN_0049a9b0 @ 0049a9b0 ////

void __fastcall FUN_0049a9b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5e88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d1d34c;
  local_4 = 0;
  FUN_0043d050();
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0049aa00 @ 0049aa00 ////

void FUN_0049aa00(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_0043d300();
  if ((char)uVar2 == '\0') {
    bVar1 = FUN_0043d2b0();
    if (!bVar1) {
      FUN_0043dbe0();
    }
    uVar3 = FUN_0043d2d0();
    if ((char)uVar3 != '\0') {
      thunk_FUN_0043dbe0();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0049aa30 @ 0049aa30 ////

void __thiscall FUN_0049aa30(void *this,int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)((int)this + 0x38) = param_1;
  FUN_00487220(param_1);
  FUN_00487420(0,*(int *)((int)this + 0x38),param_2);
  iVar2 = FUN_0043d290(*(int *)((int)this + 0x38));
  cVar1 = (char)iVar2;
  while ((cVar1 == '\0' && (uVar3 = FUN_0043d300(), (char)uVar3 == '\0'))) {
    thunk_FUN_0043dbe0();
    iVar2 = FUN_0043d290(*(int *)((int)this + 0x38));
    cVar1 = (char)iVar2;
  }
  return;
}


//// FUNCTION FUN_0049aa90 @ 0049aa90 ////

undefined4 __thiscall FUN_0049aa90(void *this,char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0043d290(*(int *)((int)this + 0x38));
  if ((char)iVar1 != '\0') {
    uVar2 = FUN_0043d980(param_1);
    return uVar2;
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0049aad0 @ 0049aad0 ////

void FUN_0049aad0(void)

{
  FUN_0043d930();
  FUN_004872d0();
  return;
}


//// FUNCTION FUN_0049aae0 @ 0049aae0 ////

int * __thiscall FUN_0049aae0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0049ab10 @ 0049ab10 ////

undefined4 * __thiscall FUN_0049ab10(void *this,byte param_1)

{
  FUN_0049a9b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049ab30 @ 0049ab30 ////

void FUN_0049ab30(void)

{
  if (DAT_0104a718 != (undefined4 *)0x0) {
    (**(code **)*DAT_0104a718)(1);
  }
  (*(code *)DAT_0104a704[1])();
  DAT_0104a718 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0049ab62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104a704)();
  return;
}


//// FUNCTION FUN_0049ab70 @ 0049ab70 ////

undefined4 FUN_0049ab70(void)

{
  return DAT_0104a718;
}


//// FUNCTION FUN_0049ab80 @ 0049ab80 ////

void __thiscall FUN_0049ab80(void *this,int *param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  uVar1 = FUN_00485fb0();
  if ((char)uVar1 != '\0') {
    FUN_00487420(0,*(int *)((int)this + 0x38),param_2);
  }
  iVar2 = FUN_00487530(DAT_00e50e8c,'\x01');
  (**(code **)(*param_1 + 4))();
  param_1[5] = iVar2;
  (**(code **)*param_1)();
  return;
}


//// FUNCTION FUN_0049ac30 @ 0049ac30 ////

undefined4 * __thiscall FUN_0049ac30(void *this,undefined4 *param_1)

{
  int iVar1;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5ea8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"",0);
  local_28 = 0;
  *local_2c = '\0';
  local_4 = 0;
  iVar1 = FUN_0043d290(*(int *)((int)this + 0x38));
  if ((char)iVar1 != '\0') {
    FUN_0043d530(&local_2c);
  }
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0049ad00 @ 0049ad00 ////

void __thiscall FUN_0049ad00(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1d354;
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


//// FUNCTION FUN_0049ad50 @ 0049ad50 ////

void __fastcall FUN_0049ad50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1d354;
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


//// FUNCTION FUN_0049ada0 @ 0049ada0 ////

undefined4 * __fastcall FUN_0049ada0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5ec8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d1d34c;
  param_1[0xe] = 0;
  FUN_0043d8e0();
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0049adf0 @ 0049adf0 ////

void FUN_0049adf0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5eeb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(0x3c);
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = FUN_0049ada0(puVar1);
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0104a704[1])();
  DAT_0104a718 = puVar2;
  (*(code *)*DAT_0104a704)();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0049af60 @ 0049af60 ////

void __cdecl FUN_0049af60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0049b110 @ 0049b110 ////

void __cdecl FUN_0049b110(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0049b1e0 @ 0049b1e0 ////

void * FUN_0049b1e0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0049b210 @ 0049b210 ////

undefined4 * __fastcall FUN_0049b210(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5f2c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d1d364;
  param_1[0x14] = param_1 + 0x17;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 10;
  param_1[0x1c] = param_1 + 0x1f;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 10;
  piVar1 = param_1 + 0x24;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172b0;
  param_1[0x29] = 0;
  local_4 = 3;
  (**(code **)(*piVar1 + 4))();
  param_1[0x29] = 0;
  (**(code **)*piVar1)();
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x14,(wchar_t *)&lpCaption_00d16918,uVar2);
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(param_1 + 0x1c,(wchar_t *)&lpCaption_00d16918,uVar2);
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0049b2f0 @ 0049b2f0 ////

undefined4 * __thiscall FUN_0049b2f0(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5f6c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d1d364;
  *(undefined4 *)((int)this + 0x50) = (undefined2 *)((int)this + 0x5c);
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 10;
  *(undefined4 *)((int)this + 0x70) = (undefined2 *)((int)this + 0x7c);
  *(undefined2 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 10;
  piVar1 = (int *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(int **)((int)this + 0x9c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  local_4 = 3;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0xa4) = 0;
  (**(code **)*piVar1)();
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((undefined4 *)((int)this + 0x50),(wchar_t *)&lpCaption_00d16918,uVar2);
  FUN_004036d0((undefined4 *)((int)this + 0x70),(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0xa8) = param_2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0049b3d0 @ 0049b3d0 ////

void __fastcall FUN_0049b3d0(int param_1)

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


//// FUNCTION FUN_0049b400 @ 0049b400 ////

undefined4 * FUN_0049b400(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0049b430 @ 0049b430 ////

undefined4 * __thiscall FUN_0049b430(void *this,byte param_1)

{
  FUN_0049b450(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049b450 @ 0049b450 ////

void __fastcall FUN_0049b450(undefined4 *param_1)

{
  param_1[0x24] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  if ((undefined4 *)param_1[0x26] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x26] = param_1[0x25];
  }
  if (param_1[0x25] != 0) {
    *(undefined4 *)(param_1[0x25] + 4) = param_1[0x26];
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  if (10 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (10 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049b500 @ 0049b500 ////

void __fastcall FUN_0049b500(int param_1)

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


//// FUNCTION FUN_0049b530 @ 0049b530 ////

void __fastcall FUN_0049b530(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca5f93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d374;
  piVar3 = (int *)param_1[0xf];
  local_4 = 1;
  if (piVar3 != (int *)param_1[0x10]) {
    do {
      puVar2 = (undefined4 *)*piVar3;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)param_1[0x10]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xf]);
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0049b5d0 @ 0049b5d0 ////

undefined4 * __thiscall FUN_0049b5d0(void *this,byte param_1)

{
  FUN_0049b530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049b5f0 @ 0049b5f0 ////

void FUN_0049b5f0(void)

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
  puStack_8 = &LAB_00ca5fa8;
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


//// FUNCTION FUN_0049b6b0 @ 0049b6b0 ////

void __thiscall FUN_0049b6b0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0049b5f0();
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
      _Dst = FUN_0049b400((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0049b1e0(param_1,iVar5,param_1 + param_2);
      FUN_0049b400(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0049af60(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0049b1e0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0049b110(param_1,(int)pvVar3,iVar5);
    FUN_0049af60(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0049b940 @ 0049b940 ////

void __thiscall FUN_0049b940(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 0x3c);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x40) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x44) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x40);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0x40) = puVar2 + 1;
    return;
  }
  FUN_0049b6b0((void *)((int)this + 0x38),*(undefined4 **)((int)this + 0x40),1,&param_1);
  return;
}


//// FUNCTION FUN_0049b990 @ 0049b990 ////

undefined4 * __fastcall FUN_0049b990(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca5fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d1d374;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0049ba00 @ 0049ba00 ////

void __fastcall FUN_0049ba00(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}


//// FUNCTION FUN_0049ba10 @ 0049ba10 ////

undefined ** __fastcall FUN_0049ba10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 6)) {
    return &PTR_DAT_00e50f08 + iVar1 * 8;
  }
  return &PTR_DAT_00e51088;
}


//// FUNCTION FUN_0049ba30 @ 0049ba30 ////

undefined ** __fastcall FUN_0049ba30(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 6)) {
    return &PTR_DAT_00e50fc8 + iVar1 * 8;
  }
  return &PTR_DAT_00e51088;
}


//// FUNCTION FUN_0049ba50 @ 0049ba50 ////

bool __thiscall FUN_0049ba50(void *this,int *param_1)

{
  return (bool)('\x01' - (*(int *)this != *param_1));
}


//// FUNCTION FUN_0049ba60 @ 0049ba60 ////

undefined4 __thiscall FUN_0049ba60(void *this,int *param_1)

{
  return CONCAT31((int3)((uint)*(int *)this >> 8),*(int *)this < *param_1);
}


//// FUNCTION FUN_0049bb60 @ 0049bb60 ////

void __cdecl FUN_0049bb60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0049bc30 @ 0049bc30 ////

void __cdecl FUN_0049bc30(undefined4 *param_1)

{
  FUN_0098a430(param_1,4);
  return;
}


//// FUNCTION FUN_0049bce0 @ 0049bce0 ////

void __cdecl FUN_0049bce0(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION ResearchCategory_MatchName @ 0049bd70 ////

int __cdecl ResearchCategory_MatchName(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 5;
  puVar2 = (undefined4 *)(param_2 + 0xa0);
  do {
    iVar1 = __stricmp((char *)*param_1,(char *)*puVar2);
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -8;
  } while (-1 < iVar3);
  return -2;
}


//// FUNCTION RoomName_ToResearchCategoryEnum @ 0049bde0 ////

int * __cdecl RoomName_ToResearchCategoryEnum(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = ResearchCategory_MatchName(param_2,0xe50fc8);
  *param_1 = iVar1;
  return param_1;
}


//// FUNCTION ResearchCategory_NameToEnum @ 0049be00 ////

int * __cdecl ResearchCategory_NameToEnum(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = ResearchCategory_MatchName(param_2,0xe50f08);
  *param_1 = iVar1;
  return param_1;
}


//// FUNCTION RoomName_IsResearchCategory @ 0049be20 ////

bool __cdecl RoomName_IsResearchCategory(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = ResearchCategory_MatchName(param_1,0xe50fc8);
  return -1 < iVar1;
}


//// FUNCTION FUN_0049be90 @ 0049be90 ////

void __cdecl FUN_0049be90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0049bec0 @ 0049bec0 ////

void __cdecl FUN_0049bec0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_0049bf30 @ 0049bf30 ////

void __cdecl FUN_0049bf30(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_0049bfa0 @ 0049bfa0 ////

void __fastcall FUN_0049bfa0(int param_1)

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


//// FUNCTION FUN_0049c040 @ 0049c040 ////

void __fastcall FUN_0049c040(int param_1)

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


//// FUNCTION FUN_0049c070 @ 0049c070 ////

undefined4 * FUN_0049c070(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_0049bf30(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_0049c0a0 @ 0049c0a0 ////

void FUN_0049c0a0(void)

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
  puStack_8 = &LAB_00ca5fe8;
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


//// FUNCTION FUN_0049c110 @ 0049c110 ////

void __thiscall FUN_0049c110(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00ca6000;
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
      uVar7 = FUN_0049c0a0();
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
      puVar4 = (undefined4 *)FUN_0049bec0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_0049bf30(puVar4,param_2,&param_3);
      FUN_0049bec0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_0049bec0(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_0049c070(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_0049bb60(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_0049bec0(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_0049bce0((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_0049bb60(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0049c350 @ 0049c350 ////

void __thiscall FUN_0049c350(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca6010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_0049c0a0();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 4);
    local_8 = 0;
    FUN_0049be90(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0049c4d0 @ 0049c4d0 ////

void __thiscall FUN_0049c4d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 2) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 2))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0049bf30(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  FUN_0049c110(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0049c540 @ 0049c540 ////

undefined * FUN_0049c540(void)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca602e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0104a730 & 1) == 0) {
    DAT_0104a730 = DAT_0104a730 | 1;
    DAT_0104a724 = 0;
    DAT_0104a728 = (undefined4 *)0x0;
    DAT_0104a72c = 0;
    ExceptionList = &local_c;
    _atexit(FUN_00d11470);
  }
  local_4 = 0xffffffff;
  if (DAT_0104a71c == '\0') {
    FUN_0049c350(&DAT_0104a720,6);
    iVar2 = 0;
    do {
      puVar1 = DAT_0104a728;
      local_10 = iVar2;
      if ((DAT_0104a724 == 0) ||
         ((uint)(DAT_0104a72c - DAT_0104a724 >> 2) <= (uint)((int)DAT_0104a728 - DAT_0104a724 >> 2))
         ) {
        FUN_0049c110(&DAT_0104a720,DAT_0104a728,1,&local_10);
      }
      else {
        FUN_0049bf30(DAT_0104a728,1,&local_10);
        DAT_0104a728 = puVar1 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    DAT_0104a71c = '\x01';
  }
  ExceptionList = local_c;
  return &DAT_0104a720;
}


//// FUNCTION FUN_0049c660 @ 0049c660 ////

void __fastcall FUN_0049c660(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0049c690 @ 0049c690 ////

void FUN_0049c690(void)

{
  DAT_0104a734 = 0;
  return;
}


//// FUNCTION FUN_0049c6b0 @ 0049c6b0 ////

void __thiscall FUN_0049c6b0(void *this,float param_1)

{
  char cVar1;
  float *pfVar2;
  void *pvStack_4;
  
  pvStack_4 = this;
  cVar1 = (**(code **)(*(int *)((int)this + 0x38) + 0x20))();
  if ((cVar1 == '\0') && (0.0 < *(float *)((int)this + 0x110))) {
    pfVar2 = (float *)FUN_0043b620((void *)((int)this + 0xa4),(float *)&pvStack_4,
                                   (float *)((int)this + 0x138));
    *(float *)((int)this + 0x134) =
         *(float *)((int)this + 0x134) - (param_1 / *(float *)((int)this + 0x110)) * *pfVar2;
  }
  return;
}


//// FUNCTION FUN_0049c710 @ 0049c710 ////

void __fastcall FUN_0049c710(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0043b680(&DAT_00e4fa4c,(float *)(param_1 + 0x6c));
  if ((char)uVar1 != '\0') {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0xd0) = 1;
    FUN_0053fdd0();
    return;
  }
  *(undefined4 *)(param_1 + 0xfc) = DAT_00e4fa4c;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_0053fdd0();
  return;
}


//// FUNCTION FUN_0049c760 @ 0049c760 ////

bool __fastcall FUN_0049c760(int param_1)

{
  return *(char *)(param_1 + 0x10b) == '\0';
}


//// FUNCTION FUN_0049c780 @ 0049c780 ////

int * __thiscall FUN_0049c780(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0049c810 @ 0049c810 ////

int __fastcall FUN_0049c810(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x28;
}


//// FUNCTION FUN_0049c8b0 @ 0049c8b0 ////

int __fastcall FUN_0049c8b0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x44;
}


//// FUNCTION FUN_0049c900 @ 0049c900 ////

int __fastcall FUN_0049c900(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_0049cb70 @ 0049cb70 ////

void __cdecl FUN_0049cb70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0049cc70 @ 0049cc70 ////

undefined4 * __cdecl FUN_0049cc70(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0049cd50 @ 0049cd50 ////

void __fastcall FUN_0049cd50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049cde0 @ 0049cde0 ////

undefined4 * __thiscall FUN_0049cde0(void *this,byte param_1)

{
  FUN_0049cd50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049ce30 @ 0049ce30 ////

void __fastcall FUN_0049ce30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049ceb0 @ 0049ceb0 ////

void __fastcall FUN_0049ceb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049cfd0 @ 0049cfd0 ////

void FUN_0049cfd0(void)

{
  DAT_0104a734 = 1;
  if ((DAT_0104a974 != 0) &&
     ((*(float *)(DAT_0104a974 + 0x78) == 1.0 || (*(float *)(DAT_0104a974 + 0x78) == 3.0)))) {
    DAT_0104a735 = 0;
    return;
  }
  DAT_0104a735 = 1;
  return;
}


//// FUNCTION FUN_0049d040 @ 0049d040 ////

void __fastcall FUN_0049d040(undefined4 *param_1)

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


//// FUNCTION FUN_0049d070 @ 0049d070 ////

void __fastcall FUN_0049d070(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0049d1b0 @ 0049d1b0 ////

void __thiscall FUN_0049d1b0(void *this,undefined4 param_1)

{
  if (*(char *)((int)this + 0x13c) == '\0') {
    *(undefined4 *)((int)this + 0x138) = DAT_00e4fa4c;
    *(undefined1 *)((int)this + 0x13c) = 1;
  }
  (**(code **)(*(int *)((int)this + 0x140) + 4))();
  *(undefined4 *)((int)this + 0x154) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x140))();
  return;
}


//// FUNCTION FUN_0049d1f0 @ 0049d1f0 ////

void __thiscall FUN_0049d1f0(void *this,float *param_1)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  float local_8;
  float local_4;
  
  fVar2 = (float10)0.0;
  if (*(char *)((int)this + 0x13c) != '\0') {
    pfVar1 = (float *)FUN_0043b620((void *)((int)this + 0x134),&local_8,(float *)&DAT_00e4fa4c);
    fVar2 = FUN_0043b710(pfVar1);
    pfVar1 = (float *)FUN_0043b620((void *)((int)this + 0xa4),&local_4,(float *)((int)this + 0x138))
    ;
    fVar3 = FUN_0043b710(pfVar1);
    fVar2 = (float10)1.0 - (float10)(float)fVar2 / fVar3;
    if (fVar2 < (float10)0.0) {
      *param_1 = 0.0;
      return;
    }
    if ((float10)1.0 < fVar2) {
      fVar2 = (float10)1.0;
    }
  }
  *param_1 = (float)fVar2;
  return;
}


//// FUNCTION FUN_0049d5e0 @ 0049d5e0 ////

void __cdecl FUN_0049d5e0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0049d610 @ 0049d610 ////

void __cdecl FUN_0049d610(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_0049d6c0 @ 0049d6c0 ////

undefined4 * __thiscall FUN_0049d6c0(void *this,byte param_1)

{
  FUN_0049d070(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d6e0 @ 0049d6e0 ////

undefined4 * __thiscall FUN_0049d6e0(void *this,byte param_1)

{
  FUN_0049d040(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d700 @ 0049d700 ////

undefined4 * __thiscall FUN_0049d700(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x80),*(uint *)((int)this + 0x84));
  return param_1;
}


//// FUNCTION FUN_0049d740 @ 0049d740 ////

undefined4 * __thiscall FUN_0049d740(void *this,byte param_1)

{
  FUN_0049ce30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d760 @ 0049d760 ////

undefined4 * __thiscall FUN_0049d760(void *this,byte param_1)

{
  FUN_0049ceb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d780 @ 0049d780 ////

undefined4 * __thiscall FUN_0049d780(void *this,byte param_1)

{
  FUN_0049d7a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d7a0 @ 0049d7a0 ////

void __fastcall FUN_0049d7a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049d7e0 @ 0049d7e0 ////

undefined4 * __thiscall FUN_0049d7e0(void *this,byte param_1)

{
  FUN_0049d800(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d800 @ 0049d800 ////

void __fastcall FUN_0049d800(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049d840 @ 0049d840 ////

undefined4 * __thiscall FUN_0049d840(void *this,byte param_1)

{
  FUN_0049d860(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d860 @ 0049d860 ////

void __fastcall FUN_0049d860(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049d8a0 @ 0049d8a0 ////

undefined4 * __thiscall FUN_0049d8a0(void *this,byte param_1)

{
  FUN_0049d8c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049d8c0 @ 0049d8c0 ////

void __fastcall FUN_0049d8c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d1d3d0;
  if (0x14 < (uint)param_1[0x1e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1c]);
  }
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0049d900 @ 0049d900 ////

void __fastcall FUN_0049d900(int *param_1)

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
  puStack_8 = &LAB_00ca6048;
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


//// FUNCTION FUN_0049d9d0 @ 0049d9d0 ////

void __cdecl FUN_0049d9d0(undefined4 *param_1)

{
  *param_1 = DAT_0104a740;
  return;
}


//// FUNCTION FUN_0049d9e0 @ 0049d9e0 ////

void __cdecl FUN_0049d9e0(undefined4 *param_1)

{
  *param_1 = &DAT_0104a74c;
  return;
}


//// FUNCTION FUN_0049da10 @ 0049da10 ////

uint __fastcall FUN_0049da10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x118);
  puVar2 = *(undefined4 **)(param_1 + 0x11c);
  if (puVar3 != puVar2) {
    do {
      iVar1 = FUN_00ace790((int *)*puVar3,0,&TM::TMBlueprint::RTTI_Type_Descriptor,
                           &TM::CCostumeBlueprint::RTTI_Type_Descriptor,0);
      if (iVar1 != 0) {
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      puVar2 = *(undefined4 **)(param_1 + 0x11c);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2);
  }
  return (uint)puVar2 & 0xffffff00;
}


//// FUNCTION FUN_0049da60 @ 0049da60 ////

void __fastcall FUN_0049da60(int param_1)

{
  int iVar1;
  char **ppcVar2;
  int iVar3;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6068;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x158) == '\0') {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    ExceptionList = &local_c;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"TANNOY_RESEARCH_PACK",0x14);
    local_28 = 0x14;
    local_2c[0x14] = '\0';
    iVar3 = 3;
    ppcVar2 = &local_2c;
    iVar1 = 2;
    local_4 = 0;
    FUN_004f3b20();
    FUN_004f8a00(iVar1,ppcVar2,iVar3);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0049db10 @ 0049db10 ////

void __fastcall FUN_0049db10(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x118);
  if (puVar1 != *(uint **)(param_1 + 0x11c)) {
    do {
      FUN_00541740(param_1 + 0x38,*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(uint **)(param_1 + 0x11c));
  }
  return;
}


//// FUNCTION FUN_0049db50 @ 0049db50 ////

void __fastcall FUN_0049db50(int param_1)

{
  ulonglong uVar1;
  
  FUN_004015d0((void *)(param_1 + 0x80),"Neutered",8);
  FUN_0043b700((void *)(param_1 + 0xa4),9999.0);
  FUN_0043b700((void *)(param_1 + 0xa8),9999.0);
  uVar1 = FUN_00acd42c();
  *(ulonglong *)(param_1 + 0xb0) = uVar1;
  FUN_00471b10((longlong *)(param_1 + 0xb0));
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 1;
  *(undefined1 *)(param_1 + 0x10a) = 1;
  FUN_0043b700((void *)(param_1 + 0x134),9999.0);
  FUN_0043b700((void *)(param_1 + 0x138),9999.0);
  *(undefined1 *)(param_1 + 0x13c) = 0;
  FUN_0043b700((void *)(param_1 + 0x10c),0.0);
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


//// FUNCTION FUN_0049dc70 @ 0049dc70 ////

void __fastcall FUN_0049dc70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1d5b0;
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


//// FUNCTION FUN_0049dd60 @ 0049dd60 ////

undefined4 * __thiscall FUN_0049dd60(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


//// FUNCTION FUN_0049dda0 @ 0049dda0 ////

undefined4 * __thiscall FUN_0049dda0(void *this,undefined4 *param_1)

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
  return this;
}


//// FUNCTION FUN_0049de20 @ 0049de20 ////

void * FUN_0049de20(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0049dec0 @ 0049dec0 ////

int * __cdecl FUN_0049dec0(int param_1,int param_2,int *param_3)

{
  char *_Source;
  uint _Count;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar2 = (int *)(param_2 + 0x20);
  do {
    _Source = *(char **)(param_2 + -0x28);
    _Count = piVar2[-0x11];
    param_2 = param_2 + -0x28;
    piVar3 = param_3 + -10;
    if ((uint)param_3[-8] <= _Count) {
      if (0x14 < (uint)param_3[-8]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*piVar3);
      }
      _Size = _Count + 0x20 & 0xffffffe0;
      param_3[-8] = _Size;
      pvVar1 = _malloc(_Size);
      *piVar3 = (int)pvVar1;
    }
    _strncpy((char *)*piVar3,_Source,_Count);
    param_3[-9] = _Count;
    *(undefined1 *)(_Count + *piVar3) = 0;
    param_3[-2] = piVar2[-10];
    param_3[-1] = piVar2[-9];
    piVar2 = piVar2 + -10;
    param_3 = piVar3;
  } while (param_2 != param_1);
  return piVar3;
}


//// FUNCTION FUN_0049df60 @ 0049df60 ////

int * __cdecl FUN_0049df60(int param_1,int param_2,int *param_3)

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
    pcVar1 = *(char **)(param_2 + -0x44);
    uVar2 = *(uint *)(param_2 + -0x40);
    iVar8 = param_2 + -0x44;
    puVar7 = puVar6 + -0x11;
    param_3 = param_3 + -0x11;
    if (puVar6[-0x19] <= uVar2) {
      if (0x14 < puVar6[-0x19]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      puVar6[-0x19] = uVar4;
      pvVar5 = _malloc(uVar4);
      *param_3 = (int)pvVar5;
    }
    _strncpy((char *)*param_3,pcVar1,uVar2);
    iVar3 = *param_3;
    puVar6[-0x1a] = uVar2;
    *(undefined1 *)(uVar2 + iVar3) = 0;
    uVar2 = *(uint *)(param_2 + -0x20);
    pcVar1 = *(char **)(param_2 + -0x24);
    if (*puVar7 <= uVar2) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-0x13]);
      }
      uVar4 = uVar2 + 0x20 & 0xffffffe0;
      *puVar7 = uVar4;
      pvVar5 = _malloc(uVar4);
      puVar6[-0x13] = (uint)pvVar5;
    }
    _strncpy((char *)puVar6[-0x13],pcVar1,uVar2);
    puVar6[-0x12] = uVar2;
    *(undefined1 *)(uVar2 + puVar6[-0x13]) = 0;
    puVar6[-0xb] = *(uint *)(param_2 + -4);
    puVar6 = puVar7;
    param_2 = iVar8;
  } while (iVar8 != param_1);
  return param_3;
}


//// FUNCTION FUN_0049e140 @ 0049e140 ////

undefined4 * __thiscall FUN_0049e140(void *this,byte param_1)

{
  FUN_00408e00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049e160 @ 0049e160 ////

void __fastcall FUN_0049e160(int param_1)

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
  puStack_8 = &LAB_00ca60d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Name");
  if ((char)uVar3 != '\0') {
    FUN_0098c550((undefined4 *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x21;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("IsAvailableToPlayer");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd0),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x22;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
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
  uVar3 = FUN_0098b490("IsAvailableToAll");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xd1),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x23;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("PlayerUnlockDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xfc),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x24;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("ResearchStartDate");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x100),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 5;
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
  uVar3 = FUN_0098b490("ResearchStarted");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x104),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 6;
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
  uVar3 = FUN_0098b490("TannoyAnnounced");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x120),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 7;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x108));
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
  uVar3 = FUN_0098b490("LastResearchRoom");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x108));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 8;
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
  uVar3 = FUN_0098b490("DateCanStartResearch");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x70),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPack.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
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
    local_4 = 9;
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
  uVar3 = FUN_0098b490("DateAvailableToAll");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x6c),4);
  }
  thunk_FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0049ea50 @ 0049ea50 ////

undefined4 * __cdecl FUN_0049ea50(undefined4 *param_1,char *param_2,uint param_3,uint param_4)

{
  char *_Memory;
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  float10 fVar4;
  uint uVar5;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 auStack_70 [4];
  undefined1 *local_6c;
  int local_68;
  uint local_64;
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca60f8;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 0x14;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_00413450(&param_2,",",0,1);
  _Memory = param_2;
  if (uVar1 == 0xffffffff) {
    FUN_004015d0(&local_4c,param_2,param_3);
  }
  else {
    uVar1 = FUN_00413450(&param_2,",",0,1);
    puVar2 = FUN_00430770(&param_2,local_2c,0,uVar1);
    FUN_004015d0(&local_4c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar5 = 0xffffffff;
    uVar1 = FUN_00413450(&param_2,",",0,1);
    puVar2 = FUN_00430770(&param_2,local_2c,uVar1 + 1,uVar5);
    FUN_004015d0(&local_6c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  fVar4 = FUN_00567d60(&local_4c);
  FUN_0043b520(&uStack_78,(float)fVar4);
  if (local_68 == 0) {
    iStack_74 = FUN_00990d30(0,0x5a);
    pfVar3 = (float *)FUN_0043b540(auStack_70,0.0,(float)iStack_74);
  }
  else {
    fVar4 = FUN_00567d60(&local_6c);
    pfVar3 = (float *)FUN_0043b520(&iStack_74,(float)((fVar4 - (float10)1.0) * (float10)0.083333336)
                                  );
  }
  FUN_0043b5e0(&uStack_78,pfVar3);
  *param_1 = uStack_78;
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (0x14 < param_4) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0049ec40 @ 0049ec40 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_0049ec40(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_0104a88c & 1) == 0) {
    DAT_0104a88c = DAT_0104a88c | 1;
    DAT_0104a86c = &DAT_0104a878;
    DAT_0104a878 = 0;
    _DAT_0104a870 = 0;
    DAT_0104a874 = 0x14;
    _strncpy(&DAT_0104a878,"ui/mov_settrack.dds",0x13);
    _DAT_0104a870 = 0x13;
    DAT_0104a86c[0x13] = 0;
    _atexit(FUN_00d115b0);
  }
  if ((DAT_0104a88c & 2) == 0) {
    DAT_0104a88c = DAT_0104a88c | 2;
    DAT_0104a84c = &DAT_0104a858;
    DAT_0104a858 = 0;
    _DAT_0104a850 = 0;
    DAT_0104a854 = 0x14;
    _strncpy(&DAT_0104a858,"ui/button_backd.dds",0x13);
    _DAT_0104a850 = 0x13;
    DAT_0104a84c[0x13] = 0;
    _atexit(FUN_00d11590);
  }
  if ((DAT_0104a88c & 4) == 0) {
    DAT_0104a88c = DAT_0104a88c | 4;
    DAT_0104a82c = &DAT_0104a838;
    DAT_0104a838 = 0;
    _DAT_0104a830 = 0;
    DAT_0104a834 = 0x14;
    _strncpy(&DAT_0104a838,"ui/button_fac.dds",0x11);
    _DAT_0104a830 = 0x11;
    DAT_0104a82c[0x11] = 0;
    _atexit(FUN_00d11570);
  }
  if ((DAT_0104a88c & 8) == 0) {
    DAT_0104a88c = DAT_0104a88c | 8;
    DAT_0104a80c = &DAT_0104a818;
    DAT_0104a818 = 0;
    _DAT_0104a810 = 0;
    DAT_0104a814 = 0x14;
    _strncpy(&DAT_0104a818,"ui/button_props.dds",0x13);
    _DAT_0104a810 = 0x13;
    DAT_0104a80c[0x13] = 0;
    _atexit(FUN_00d11550);
  }
  if ((DAT_0104a88c & 0x10) == 0) {
    DAT_0104a88c = DAT_0104a88c | 0x10;
    DAT_0104a7ec = &DAT_0104a7f8;
    DAT_0104a7f8 = 0;
    _DAT_0104a7f0 = 0;
    DAT_0104a7f4 = 0x20;
    DAT_0104a7ec = _malloc(0x20);
    _strncpy(DAT_0104a7ec,"ui/button_costume.dds",0x15);
    _DAT_0104a7f0 = 0x15;
    DAT_0104a7ec[0x15] = '\0';
    _atexit(FUN_00d11530);
  }
  if ((DAT_0104a88c & 0x20) == 0) {
    DAT_0104a88c = DAT_0104a88c | 0x20;
    DAT_0104a7cc = &DAT_0104a7d8;
    DAT_0104a7d8 = 0;
    _DAT_0104a7d0 = 0;
    DAT_0104a7d4 = 0x20;
    DAT_0104a7cc = _malloc(0x20);
    _strncpy(DAT_0104a7cc,"ui/mov_scenetrack.dds",0x15);
    _DAT_0104a7d0 = 0x15;
    DAT_0104a7cc[0x15] = '\0';
    _atexit(FUN_00d11510);
  }
  if ((DAT_0104a88c & 0x40) == 0) {
    DAT_0104a88c = DAT_0104a88c | 0x40;
    DAT_0104a7ac = &DAT_0104a7b8;
    DAT_0104a7b8 = 0;
    _DAT_0104a7b0 = 0;
    DAT_0104a7b4 = 0x20;
    DAT_0104a7ac = _malloc(0x20);
    _strncpy(DAT_0104a7ac,"ui/button_techno.dds",0x14);
    _DAT_0104a7b0 = 0x14;
    DAT_0104a7ac[0x14] = '\0';
    _atexit(FUN_00d114f0);
  }
  if ((DAT_0104a88c & 0x80) == 0) {
    DAT_0104a88c = DAT_0104a88c | 0x80;
    DAT_0104a78c = &DAT_0104a798;
    DAT_0104a798 = 0;
    _DAT_0104a790 = 0;
    DAT_0104a794 = 0x20;
    DAT_0104a78c = _malloc(0x20);
    _strncpy(DAT_0104a78c,"ui/button_unlock.dds",0x14);
    _DAT_0104a790 = 0x14;
    DAT_0104a78c[0x14] = '\0';
    _atexit(FUN_00d114d0);
  }
  if ((DAT_0104a88c & 0x100) == 0) {
    DAT_0104a88c = DAT_0104a88c | 0x100;
    DAT_0104a76c = &DAT_0104a778;
    DAT_0104a778 = 0;
    _DAT_0104a770 = 0;
    DAT_0104a774 = 0x14;
    _atexit(FUN_00d114b0);
  }
  uVar1 = FUN_00413450(param_1,"BACKDROP",0,8);
  if (uVar1 != 0xffffffff) {
    return &DAT_0104a84c;
  }
  uVar1 = FUN_00413450(param_1,"SET",0,3);
  if (uVar1 != 0xffffffff) {
    return &DAT_0104a86c;
  }
  uVar1 = FUN_00413450(param_1,"FACILITY",0,8);
  if (uVar1 != 0xffffffff) {
    return &DAT_0104a82c;
  }
  uVar1 = FUN_00413450(param_1,"COSTUME",0,7);
  if (uVar1 != 0xffffffff) {
    return &DAT_0104a7ec;
  }
  iVar2 = FUN_004155b0(param_1,"PROP",0);
  if ((iVar2 != -1) || (iVar2 = FUN_004155b0(param_1,(char *)&PTR_LAB_00d1d6b8,0), iVar2 != -1)) {
    return &DAT_0104a80c;
  }
  iVar2 = FUN_004155b0(param_1,"SCENE",0);
  if (iVar2 != -1) {
    return &DAT_0104a7cc;
  }
  iVar2 = FUN_004155b0(param_1,"TECH",0);
  if (iVar2 == -1) {
    iVar2 = FUN_004155b0(param_1,"ROOM",0);
    if (iVar2 == -1) {
      return &DAT_0104a76c;
    }
    return &DAT_0104a78c;
  }
  return &DAT_0104a7ac;
}


//// FUNCTION FUN_0049f0f0 @ 0049f0f0 ////

undefined4 * __thiscall FUN_0049f0f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
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
  puStack_8 = &LAB_00ca6118;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"RESEARCHPACK_",0xd);
  local_48 = 0xd;
  local_4c[0xd] = '\0';
  local_4 = 0;
  puVar1 = FUN_0049d700(this,local_2c);
  FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_009b5030(param_1,&local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0049f1c0 @ 0049f1c0 ////

undefined4 * __thiscall FUN_0049f1c0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
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
  puStack_8 = &LAB_00ca6138;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"RESEARCHPACK_",0xd);
  local_48 = 0xd;
  local_4c[0xd] = '\0';
  local_4 = 0;
  puVar1 = FUN_0049d700(this,local_2c);
  FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  FUN_004073f0(&local_4c,"_DESCRIPTION",0xc);
  FUN_009b5030(param_1,&local_4c);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0049f2a0 @ 0049f2a0 ////

void __fastcall FUN_0049f2a0(int param_1)

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


//// FUNCTION FUN_0049f2d0 @ 0049f2d0 ////

undefined4 * FUN_0049f2d0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0049f300 @ 0049f300 ////

void __cdecl FUN_0049f300(int *param_1,int *param_2,undefined4 *param_3)

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
    param_1[9] = param_3[9];
    param_1 = param_1 + 10;
  } while( true );
}


//// FUNCTION FUN_0049f3a0 @ 0049f3a0 ////

void __cdecl FUN_0049f3a0(int *param_1,int *param_2,undefined4 *param_3)

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
      param_1 = param_1 + 0x11;
      puVar6 = puVar6 + 0x11;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0049f530 @ 0049f530 ////

int * __cdecl FUN_0049f530(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint _Count;
  char *_Source;
  uint _Size;
  void *pvVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 8;
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(param_3 + 3);
        *(undefined1 *)(param_3 + 3) = 0;
        param_3[1] = 0;
        param_3[2] = 0x14;
        _Count = piVar2[-7];
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
        param_3[8] = *piVar2;
        param_3[9] = piVar2[1];
      }
      param_1 = param_1 + 10;
      param_3 = param_3 + 10;
      piVar2 = piVar2 + 10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0049f5e0 @ 0049f5e0 ////

int * __cdecl FUN_0049f5e0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_3 + 10);
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(puVar6 + -7);
        *(undefined1 *)(puVar6 + -7) = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0x14;
        uVar1 = param_1[1];
        pcVar2 = (char *)*param_1;
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          puVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4);
          *param_3 = (int)pvVar5;
        }
        _strncpy((char *)*param_3,pcVar2,uVar1);
        iVar3 = *param_3;
        puVar6[-9] = uVar1;
        *(undefined1 *)(uVar1 + iVar3) = 0;
        puVar6[-2] = (uint)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x14;
        uVar1 = param_1[9];
        pcVar2 = (char *)param_1[8];
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          *puVar6 = uVar4;
          pvVar5 = _malloc(uVar4);
          puVar6[-2] = (uint)pvVar5;
        }
        _strncpy((char *)puVar6[-2],pcVar2,uVar1);
        puVar6[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar6[-2]) = 0;
        puVar6[6] = param_1[0x10];
      }
      param_1 = param_1 + 0x11;
      param_3 = param_3 + 0x11;
      puVar6 = puVar6 + 0x11;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_0049f6f0 @ 0049f6f0 ////

void __fastcall FUN_0049f6f0(int param_1)

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


//// FUNCTION FUN_0049f720 @ 0049f720 ////

void __cdecl FUN_0049f720(int *param_1,int param_2,undefined4 *param_3)

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
      param_1[9] = param_3[9];
    }
    param_1 = param_1 + 10;
  }
  return;
}


//// FUNCTION FUN_0049f7c0 @ 0049f7c0 ////

void __cdecl FUN_0049f7c0(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_2 != 0) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(puVar6 + -7);
        *(undefined1 *)(puVar6 + -7) = 0;
        puVar6[-9] = 0;
        puVar6[-8] = 0x14;
        uVar1 = param_3[1];
        pcVar2 = (char *)*param_3;
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          puVar6[-8] = uVar4;
          pvVar5 = _malloc(uVar4);
          *param_1 = (int)pvVar5;
        }
        _strncpy((char *)*param_1,pcVar2,uVar1);
        iVar3 = *param_1;
        puVar6[-9] = uVar1;
        *(undefined1 *)(uVar1 + iVar3) = 0;
        puVar6[-2] = (uint)(puVar6 + 1);
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x14;
        uVar1 = param_3[9];
        pcVar2 = (char *)param_3[8];
        if (0x13 < uVar1) {
          uVar4 = uVar1 + 0x20 & 0xffffffe0;
          *puVar6 = uVar4;
          pvVar5 = _malloc(uVar4);
          puVar6[-2] = (uint)pvVar5;
        }
        _strncpy((char *)puVar6[-2],pcVar2,uVar1);
        puVar6[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar6[-2]) = 0;
        puVar6[6] = param_3[0x10];
      }
      param_1 = param_1 + 0x11;
      puVar6 = puVar6 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0049f990 @ 0049f990 ////

void __cdecl FUN_0049f990(int param_1,int param_2,undefined4 *param_3)

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
      }
      param_1 = param_1 + 0x18;
      param_3 = param_3 + 6;
      puVar3 = puVar3 + 6;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_0049fb00 @ 0049fb00 ////

void __cdecl FUN_0049fb00(undefined4 *param_1,int param_2,int param_3)

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
      }
      param_1 = param_1 + 6;
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_0049fbd0 @ 0049fbd0 ////

int * FUN_0049fbd0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0049f720(param_1,param_2,param_3);
  return param_1 + param_2 * 10;
}


//// FUNCTION FUN_0049fc00 @ 0049fc00 ////

int * FUN_0049fc00(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_0049f7c0(param_1,param_2,param_3);
  return param_1 + param_2 * 0x11;
}


//// FUNCTION FUN_0049fc30 @ 0049fc30 ////

void FUN_0049fc30(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 10) {
    FUN_0049d070(param_1);
  }
  return;
}


//// FUNCTION FUN_0049fc60 @ 0049fc60 ////

void FUN_0049fc60(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x11) {
    FUN_0049d040(param_1);
  }
  return;
}


//// FUNCTION FUN_0049fd10 @ 0049fd10 ////

void __fastcall FUN_0049fd10(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d1d7bc;
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


//// FUNCTION FUN_0049fd60 @ 0049fd60 ////

undefined4 * __thiscall FUN_0049fd60(void *this,byte param_1)

{
  FUN_0049fd10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0049fd80 @ 0049fd80 ////

void __fastcall FUN_0049fd80(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 10) {
    FUN_0049d070(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0049fdd0 @ 0049fdd0 ////

void __fastcall FUN_0049fdd0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x11) {
    FUN_0049d040(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0049fe20 @ 0049fe20 ////

undefined4 * FUN_0049fe20(undefined4 *param_1,int param_2,int param_3)

{
  FUN_0049fb00(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_0049fe50 @ 0049fe50 ////

void FUN_0049fe50(void)

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
  puStack_8 = &LAB_00ca6158;
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


//// FUNCTION FUN_0049fec0 @ 0049fec0 ////

void FUN_0049fec0(void)

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
  puStack_8 = &LAB_00ca6178;
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


//// FUNCTION FUN_0049ff30 @ 0049ff30 ////

void FUN_0049ff30(void)

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
  puStack_8 = &LAB_00ca6198;
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


//// FUNCTION FUN_0049ffa0 @ 0049ffa0 ////

void FUN_0049ffa0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_00408e00(param_1);
  }
  return;
}


//// FUNCTION FUN_0049ffd0 @ 0049ffd0 ////

void FUN_0049ffd0(void)

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
  puStack_8 = &LAB_00ca61b8;
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


//// FUNCTION FUN_004a0040 @ 004a0040 ////

void __fastcall FUN_004a0040(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 10) {
    FUN_0049d070(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004a0050 @ 004a0050 ////

void __fastcall FUN_004a0050(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x11) {
    FUN_0049d040(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_004a0150 @ 004a0150 ////

void __thiscall FUN_004a0150(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined1 *local_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca61d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_44 = local_38;
  local_38[0] = 0;
  local_40 = 0;
  local_3c = 0x14;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_004015d0(&local_44,(char *)*param_3,param_3[1]);
  local_24 = param_3[8];
  local_20 = param_3[9];
  iVar2 = *(int *)((int)this + 4);
  local_8 = 0;
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
    }
    if (0x6666666U - iVar1 < param_2) {
      FUN_0049fe50();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x6666666 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x28;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_0049c810((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x28);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_0049f530(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_0049f720(piVar4,param_2,&local_44);
      FUN_0049f530(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 10);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0049fc30(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 10;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 10;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x28) < param_2) {
        FUN_0049f530(param_1,piVar3,param_1 + param_2 * 10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0049fbd0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x28,&local_44);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x28;
        *(int *)((int)this + 8) = iVar2;
        FUN_0049f300(param_1,(int *)(iVar2 + param_2 * -0x28),&local_44);
      }
      else {
        piVar4 = FUN_0049f530(piVar3 + param_2 * -10,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_0049dec0((int)param_1,(int)(piVar3 + param_2 * -10),piVar3);
        FUN_0049f300(param_1,param_1 + param_2 * 10,&local_44);
      }
    }
  }
  if (0x14 < local_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004a0470 @ 004a0470 ////

void __thiscall FUN_004a0470(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0049fec0();
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
      _Dst = FUN_0049f2d0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0049de20(param_1,iVar5,param_1 + param_2);
      FUN_0049f2d0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0049cb70(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0049de20(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0049d5e0(param_1,(int)pvVar3,iVar5);
    FUN_0049cb70(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004a0650 @ 004a0650 ////

void __thiscall FUN_004a0650(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_ECX;
  void *local_60 [2];
  uint local_58;
  void *local_40;
  uint local_38;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca61f8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff94;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0049dda0(local_60,param_3);
  iVar2 = *(int *)((int)this + 4);
  uVar5 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar5 = (*(int *)((int)this + 0xc) - iVar2) / 0x44;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x44;
    }
    if (0x3c3c3c3U - iVar1 < param_2) {
      FUN_0049ff30();
      uVar5 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*(int *)((int)this + 8) - iVar2) / 0x44;
    }
    if (uVar5 < iVar1 + param_2) {
      if (0x3c3c3c3 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x44;
      }
      if (uVar5 < iVar2 + param_2) {
        iVar2 = FUN_0049c8b0((int)this);
        uVar5 = iVar2 + param_2;
      }
      piVar3 = operator_new(uVar5 * 0x44);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar3;
      piVar4 = FUN_0049f5e0(*(undefined4 **)((int)this + 4),param_1,piVar3);
      FUN_0049f7c0(piVar4,param_2,local_60);
      FUN_0049f5e0(param_1,*(undefined4 **)((int)this + 8),piVar4 + param_2 * 0x11);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x44;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_0049fc60(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar3 + uVar5 * 0x11;
      *(int **)((int)this + 8) = piVar3 + (param_2 + iVar2) * 0x11;
      *(int **)((int)this + 4) = piVar3;
    }
    else {
      piVar3 = *(int **)((int)this + 8);
      if ((uint)(((int)piVar3 - (int)param_1) / 0x44) < param_2) {
        FUN_0049f5e0(param_1,piVar3,param_1 + param_2 * 0x11);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0049fc00(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1) / 0x44,local_60);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x44;
        *(int *)((int)this + 8) = iVar2;
        FUN_0049f3a0(param_1,(int *)(iVar2 + param_2 * -0x44),local_60);
      }
      else {
        piVar4 = FUN_0049f5e0(piVar3 + param_2 * -0x11,piVar3,piVar3);
        *(int **)((int)this + 8) = piVar4;
        FUN_0049df60((int)param_1,(int)(piVar3 + param_2 * -0x11),piVar3);
        FUN_0049f3a0(param_1,param_1 + param_2 * 0x11,local_60);
      }
    }
  }
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_60[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004a0950 @ 004a0950 ////

void __thiscall FUN_004a0950(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00ca6218;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_FUN_00d16aac;
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
      FUN_0049ffd0();
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
        iVar3 = FUN_0049c900((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_0049f990(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_0049fb00(puVar5,param_2,(int)&local_34);
      FUN_0049f990((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_0049ffa0(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_0049f990((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_0049fe20(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_0049d610(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_0049f990((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_0049cc70((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_0049d610(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION CResearchPack_Destructor @ 004a0c80 ////

void __fastcall CResearchPack_Destructor(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6238;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d7f4;
  param_1[0xe] = &PTR_LAB_00d1d7c8;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d] = param_1[0x1c];
  }
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1d];
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x50] = &PTR_LAB_00d1d5b0;
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
  FUN_0049fdd0((int)(param_1 + 0x49));
  if ((void *)param_1[0x46] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x46]);
  }
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  FUN_0049fd80((int)(param_1 + 0x3e));
  if (0x14 < (uint)param_1[0x38]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x36]);
  }
  if (0x14 < (uint)param_1[0x30]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2e]);
  }
  if (0x14 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if ((undefined4 *)param_1[0x1d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1d] = param_1[0x1c];
  }
  if (param_1[0x1c] != 0) {
    *(undefined4 *)(param_1[0x1c] + 4) = param_1[0x1d];
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_0053f150(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004a0e60 @ 004a0e60 ////

void __thiscall FUN_004a0e60(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_004a0ea5;
    }
  }
  iVar1 = 0;
LAB_004a0ea5:
  FUN_004a0150(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_004a0f20 @ 004a0f20 ////

void __thiscall FUN_004a0f20(void *this,int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x44 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x44;
      goto LAB_004a0f65;
    }
  }
  iVar1 = 0;
LAB_004a0f65:
  FUN_004a0650(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x44 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_004a0f90 @ 004a0f90 ////

void __thiscall FUN_004a0f90(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_004a0fd5;
    }
  }
  iVar1 = 0;
LAB_004a0fd5:
  FUN_004a0950(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_004a1000 @ 004a1000 ////

undefined4 * __thiscall FUN_004a1000(void *this,byte param_1)

{
  CResearchPack_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a1020 @ 004a1020 ////

void __thiscall FUN_004a1020(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0049f720(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 10;
    return;
  }
  FUN_004a0e60(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004a1100 @ 004a1100 ////

void __thiscall FUN_004a1100(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x44) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x44))) {
    piVar2 = *(int **)((int)this + 8);
    FUN_0049f7c0(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x11;
    return;
  }
  FUN_004a0f20(this,(int *)&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004a1190 @ 004a1190 ////

void __thiscall FUN_004a1190(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_0049fb00(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_004a0f90(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_004a1270 @ 004a1270 ////

void FUN_004a1270(int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6258;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_FUN_00d16aac;
  local_10 = param_1;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    ExceptionList = &local_c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_004a1190(&DAT_0104e7f0,(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a1310 @ 004a1310 ////

void FUN_004a1310(void)

{
  undefined *local_4;
  
  local_4 = &DAT_0104a738;
  if ((DAT_010584c8 == 0) ||
     ((uint)(DAT_010584d0 - DAT_010584c8 >> 2) <= (uint)((int)DAT_010584cc - DAT_010584c8 >> 2))) {
    FUN_00463ff0(&DAT_010584c4,DAT_010584cc,1,&local_4);
  }
  else {
    *DAT_010584cc = &DAT_0104a738;
    DAT_010584cc = DAT_010584cc + 1;
  }
  FUN_0098fd30("ScriptCreationDisabled",&DAT_0104a735,2);
  return;
}


//// FUNCTION FUN_004a1380 @ 004a1380 ////

void __thiscall FUN_004a1380(void *this,void *param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *local_118;
  uint local_114;
  uint local_110;
  char local_10c [20];
  char *local_f8;
  uint local_f4;
  uint local_f0;
  char local_ec [20];
  undefined4 local_d8;
  void *local_d4;
  char *local_d0;
  uint local_cc;
  uint local_c8;
  char local_c4 [20];
  char *local_b0;
  uint local_ac;
  uint local_a8;
  char local_a4 [20];
  undefined4 local_90;
  char *local_8c;
  uint local_88;
  uint local_84;
  char *local_6c;
  uint local_68;
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca62af;
  local_c = ExceptionList;
  local_118 = local_10c;
  local_10c[0] = '\0';
  local_114 = 0;
  local_110 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_118,"tagline",7);
  local_114 = 7;
  local_118[7] = '\0';
  local_4 = 0;
  uVar3 = FUN_00558a50(param_1,&local_118,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
    _free(local_118);
  }
  if (((char)uVar3 != '\0') && (uVar3 = FUN_00558120(param_1,0), (char)uVar3 != '\0')) {
    local_d4 = (void *)((int)this + 0x124);
    do {
      FUN_00558de0(param_1,&local_6c);
      local_4 = 1;
      FUN_00558590(param_1,&local_8c,4);
      local_f8 = local_ec;
      local_ec[0] = '\0';
      local_f4 = 0;
      local_f0 = 0x14;
      local_118 = local_10c;
      local_10c[0] = '\0';
      local_114 = 0;
      local_110 = 0x14;
      local_4 = CONCAT31(local_4._1_3_,4);
      uVar4 = FUN_00413450(&local_8c,",",0,1);
      uVar1 = local_88;
      pcVar2 = local_8c;
      if (uVar4 == 0xffffffff) {
        if (local_110 <= local_88) {
          if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
            _free(local_118);
          }
          local_110 = local_88 + 0x20 & 0xffffffe0;
          local_118 = _malloc(local_110);
        }
        _strncpy(local_118,pcVar2,uVar1);
        local_114 = uVar1;
        local_118[uVar1] = '\0';
      }
      else {
        uVar4 = FUN_00413450(&local_8c,",",0,1);
        puVar5 = FUN_00430770(&local_8c,local_2c,0,uVar4);
        uVar1 = puVar5[1];
        pcVar2 = (char *)*puVar5;
        if (local_110 <= uVar1) {
          if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
            _free(local_118);
          }
          local_110 = uVar1 + 0x20 & 0xffffffe0;
          local_118 = _malloc(local_110);
        }
        _strncpy(local_118,pcVar2,uVar1);
        local_118[uVar1] = '\0';
        local_114 = uVar1;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        puVar5 = FUN_00430770(&local_8c,local_4c,uVar4 + 1,0xffffffff);
        uVar1 = puVar5[1];
        pcVar2 = (char *)*puVar5;
        if (local_f0 <= uVar1) {
          if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
            _free(local_f8);
          }
          local_f0 = uVar1 + 0x20 & 0xffffffe0;
          local_f8 = _malloc(local_f0);
        }
        _strncpy(local_f8,pcVar2,uVar1);
        local_f8[uVar1] = '\0';
        local_f4 = uVar1;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
      }
      if (local_f4 == 0) {
        puVar5 = FUN_0049ec40(&local_6c);
        uVar1 = puVar5[1];
        pcVar2 = (char *)*puVar5;
        if (local_f0 <= uVar1) {
          if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
            _free(local_f8);
          }
          local_f0 = uVar1 + 0x20 & 0xffffffe0;
          local_f8 = _malloc(local_f0);
        }
        _strncpy(local_f8,pcVar2,uVar1);
        local_f8[uVar1] = '\0';
        local_f4 = uVar1;
      }
      local_d8 = 0;
      if (local_114 != 0) {
        local_d8 = FUN_009623a0(&local_118);
      }
      uVar1 = local_68;
      pcVar2 = local_6c;
      local_d0 = local_c4;
      local_c4[0] = '\0';
      local_cc = 0;
      local_c8 = 0x14;
      if (0x13 < local_68) {
        local_c8 = local_68 + 0x20 & 0xffffffe0;
        local_d0 = _malloc(local_c8);
      }
      _strncpy(local_d0,pcVar2,uVar1);
      uVar4 = local_f4;
      pcVar2 = local_f8;
      local_cc = uVar1;
      local_d0[uVar1] = '\0';
      local_b0 = local_a4;
      local_a4[0] = '\0';
      local_ac = 0;
      local_a8 = 0x14;
      if (0x13 < local_f4) {
        local_a8 = local_f4 + 0x20 & 0xffffffe0;
        local_b0 = _malloc(local_a8);
      }
      _strncpy(local_b0,pcVar2,uVar4);
      local_ac = uVar4;
      local_b0[uVar4] = '\0';
      local_90 = local_d8;
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_004a1100(local_d4,&local_d0);
      if (0x14 < local_a8) {
                    /* WARNING: Subroutine does not return */
        _free(local_b0);
      }
      if (0x14 < local_c8) {
                    /* WARNING: Subroutine does not return */
        _free(local_d0);
      }
      if (0x14 < local_110) {
                    /* WARNING: Subroutine does not return */
        _free(local_118);
      }
      if (0x14 < local_f0) {
                    /* WARNING: Subroutine does not return */
        _free(local_f8);
      }
      if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
        _free(local_8c);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      uVar3 = FUN_00558120(param_1,2);
    } while ((char)uVar3 != '\0');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a1870 @ 004a1870 ////

void __thiscall FUN_004a1870(void *this,void *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  float10 fVar6;
  char *local_c0;
  uint local_bc;
  uint local_b8;
  char local_b4 [20];
  char *local_a0;
  uint local_9c;
  uint local_98;
  char local_94 [20];
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  void *local_6c [2];
  uint local_64;
  void *apvStack_4c [2];
  uint uStack_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca62e9;
  local_c = ExceptionList;
  local_c0 = local_b4;
  local_b4[0] = '\0';
  local_bc = 0;
  local_b8 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_c0,"scripts_to_create",0x11);
  local_bc = 0x11;
  local_c0[0x11] = '\0';
  local_4 = 0;
  uVar2 = FUN_00558a50(param_1,&local_c0,(undefined4 *)0x1);
  local_4 = 0xffffffff;
  if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
    _free(local_c0);
  }
  if (((char)uVar2 != '\0') && (uVar2 = FUN_00558120(param_1,0), (char)uVar2 != '\0')) {
    local_70 = (void *)((int)this + 0xf8);
    do {
      FUN_00558590(param_1,&local_c0,4);
      local_a0 = local_94;
      local_94[0] = '\0';
      local_9c = 0;
      local_98 = 0x14;
      local_4 = 2;
      uVar3 = FUN_00413450(&local_c0,",",0,1);
      uVar5 = local_bc;
      pcVar1 = local_c0;
      if (uVar3 == 0xffffffff) {
        if (local_98 <= local_bc) {
          if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
            _free(local_a0);
          }
          local_98 = local_bc + 0x20 & 0xffffffe0;
          local_a0 = _malloc(local_98);
        }
        _strncpy(local_a0,pcVar1,uVar5);
        local_78 = 0;
        local_74 = 0;
        local_9c = uVar5;
        local_a0[uVar5] = '\0';
        local_80 = 0.0;
        local_7c = 0.0;
      }
      else {
        puVar4 = FUN_00430770(&local_c0,local_6c,0,uVar3);
        uVar5 = puVar4[1];
        pcVar1 = (char *)*puVar4;
        if (local_98 <= uVar5) {
          if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
            _free(local_a0);
          }
          local_98 = uVar5 + 0x20 & 0xffffffe0;
          local_a0 = _malloc(local_98);
        }
        _strncpy(local_a0,pcVar1,uVar5);
        local_a0[uVar5] = '\0';
        local_9c = uVar5;
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c[0]);
        }
        puVar4 = FUN_00430770(&local_c0,local_2c,uVar3 + 1,0xffffffff);
        uVar5 = puVar4[1];
        pcVar1 = (char *)*puVar4;
        if (local_b8 <= uVar5) {
          if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
            _free(local_c0);
          }
          local_b8 = uVar5 + 0x20 & 0xffffffe0;
          local_c0 = _malloc(local_b8);
        }
        _strncpy(local_c0,pcVar1,uVar5);
        local_c0[uVar5] = '\0';
        local_bc = uVar5;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        fVar6 = FUN_00567d60(&local_c0);
        local_80 = (float)fVar6;
        uVar5 = FUN_00413450(&local_c0,",",0,1);
        if (uVar5 == 0xffffffff) {
          local_7c = 0.0;
        }
        else {
          puVar4 = FUN_00430770(&local_c0,apvStack_4c,uVar5 + 1,0xffffffff);
          local_4._0_1_ = 3;
          fVar6 = FUN_00567d60(puVar4);
          local_7c = (float)fVar6;
          local_4 = CONCAT31(local_4._1_3_,2);
          if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_4c[0]);
          }
        }
      }
      FUN_004a1020(local_70,&local_a0);
      if (0x14 < local_98) {
                    /* WARNING: Subroutine does not return */
        _free(local_a0);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_b8) {
                    /* WARNING: Subroutine does not return */
        _free(local_c0);
      }
      uVar2 = FUN_00558120(param_1,2);
    } while ((char)uVar2 != '\0');
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION ResearchPack_LoadFromIni @ 004a1c00 ////

void __thiscall ResearchPack_LoadFromIni(void *this,void *param_1)

{
  void *this_00;
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  ulonglong uVar7;
  uint local_50;
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
  puStack_8 = &LAB_00ca6358;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"category",8);
  local_48 = 8;
  local_4c[8] = '\0';
  this_00 = param_1;
  local_4 = 0;
  puVar2 = FUN_005584e0(param_1,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = ResearchCategory_NameToEnum((int *)&local_50,puVar2);
  *(int *)((int)this + 0xa0) = *piVar3;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"daily_rate",10);
  local_48 = 10;
  local_4c[10] = '\0';
  local_4 = 2;
  FUN_00558610(this_00,&local_4c,0.0);
  uVar7 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0xb0) = uVar7;
  FUN_00471b10((longlong *)((int)this + 0xb0));
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"invisible_to_player",0x13);
  local_48 = 0x13;
  local_4c[0x13] = '\0';
  local_4 = 3;
  iVar4 = FUN_00558750(this_00,&local_4c,0);
  *(bool *)((int)this + 0x10a) = iVar4 != 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"total_man_months_needed",0x17);
  local_48 = 0x17;
  local_4c[0x17] = '\0';
  local_4 = 4;
  fVar6 = FUN_00558610(this_00,&local_4c,0.0);
  *(float *)((int)this + 0x110) = (float)fVar6;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"unlock_on_build",0xf);
  local_48 = 0xf;
  local_4c[0xf] = '\0';
  local_4 = 5;
  puVar2 = FUN_005584e0(this_00,local_2c,&local_4c);
  FUN_004015d0((void *)((int)this + 0xb8),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"unlock_on_place",0xf);
  local_48 = 0xf;
  local_4c[0xf] = '\0';
  local_4 = 6;
  puVar2 = FUN_005584e0(this_00,local_2c,&local_4c);
  FUN_004015d0((void *)((int)this + 0xd8),(char *)*puVar2,puVar2[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"non_researchable",0x10);
  local_48 = 0x10;
  local_4c[0x10] = '\0';
  local_4 = 7;
  iVar4 = FUN_00558750(this_00,&local_4c,0);
  *(bool *)((int)this + 0x10b) = iVar4 != 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x20;
  local_4c = _malloc(0x20);
  _strncpy(local_4c,"unlock_post_stunt_trainer",0x19);
  local_48 = 0x19;
  local_4c[0x19] = '\0';
  local_4 = 8;
  fVar6 = FUN_00558610(this_00,&local_4c,0.0);
  FUN_0043b700((void *)((int)this + 0x10c),(float)fVar6);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  fVar6 = FUN_0043b710((float *)((int)this + 0x10c));
  if (((float10)0.0 < fVar6) || (*(char *)((int)this + 0x10a) != '\0')) {
    *(undefined1 *)((int)this + 0x10b) = 1;
  }
  FUN_004a1870(this,this_00);
  FUN_004a1380(this,this_00);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"contents",8);
  local_48 = 8;
  local_4c[8] = '\0';
  local_4 = 9;
  uVar5 = FUN_00558a50(this_00,&local_4c,(undefined4 *)0x1);
  param_1 = (void *)CONCAT31(param_1._1_3_,(char)uVar5);
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((char)uVar5 != '\0') {
    uVar5 = FUN_00558120(this_00,0);
    cVar1 = (char)uVar5;
    while (cVar1 != '\0') {
      puVar2 = FUN_00558de0(this_00,local_2c);
      local_4 = 10;
      param_1 = (void *)FUN_009623a0(puVar2);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (param_1 != (void *)0x0) {
        iVar4 = *(int *)((int)this + 0x118);
        if (iVar4 == 0) {
          local_50 = 0;
        }
        else {
          local_50 = *(int *)((int)this + 0x11c) - iVar4 >> 2;
          if (local_50 < (uint)(*(int *)((int)this + 0x120) - iVar4 >> 2)) {
            piVar3 = *(int **)((int)this + 0x11c);
            *piVar3 = (int)param_1;
            *(int **)((int)this + 0x11c) = piVar3 + 1;
            goto LAB_004a215d;
          }
        }
        FUN_004a0470((void *)((int)this + 0x114),*(undefined4 **)((int)this + 0x11c),1,&param_1);
      }
LAB_004a215d:
      uVar5 = FUN_00558120(this_00,2);
      cVar1 = (char)uVar5;
    }
    FUN_00558bb0(this_00,5);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a2190 @ 004a2190 ////

void __thiscall FUN_004a2190(void *this,char param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  char *pcStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  char acStack_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6391;
  local_c = ExceptionList;
  bVar2 = false;
  if (*(char *)((int)this + 0x108) != '\0') {
    return;
  }
  ExceptionList = &local_c;
  (**(code **)(*(int *)((int)this + 0x38) + 0x24))();
  if ((param_1 == '\0') && (*(char *)((int)this + 0x10a) == '\0')) {
    pvVar7 = this;
    FUN_007955a0();
    FUN_004a1270((int)pvVar7);
  }
  if ((((DAT_0104a735 == '\0') && (*(int *)((int)this + 0xfc) != 0)) &&
      ((*(int *)((int)this + 0x100) - *(int *)((int)this + 0xfc)) / 0x28 != 0)) &&
     (puVar5 = *(undefined4 **)((int)this + 0xfc), puVar5 != *(undefined4 **)((int)this + 0x100))) {
    do {
      FUN_005c43c0(puVar5);
      puVar5 = puVar5 + 10;
    } while (puVar5 != *(undefined4 **)((int)this + 0x100));
  }
  if ((param_1 == '\0') && (*(char *)((int)this + 0x10a) != '\0')) {
    pcStack_2c = acStack_20;
    acStack_20[0] = param_1;
    uStack_28 = 0;
    uStack_24 = 0x14;
    _strncpy(pcStack_2c,"facility_research",0x11);
    uStack_28 = 0x11;
    pcStack_2c[0x11] = '\0';
    uStack_4 = 0;
    bVar2 = true;
    iVar3 = FUN_00845f70(&pcStack_2c);
    if ((iVar3 != 0) && (*(char *)((int)this + 0x10b) == '\0')) {
      bVar1 = true;
      goto LAB_004a22c4;
    }
  }
  bVar1 = false;
LAB_004a22c4:
  uStack_4 = 0xffffffff;
  if ((bVar2) && (0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_2c);
  }
  if (bVar1) {
    ppuVar4 = FUN_0049ba10((int *)((int)this + 0xa0));
    puVar5 = FUN_0040d6b0(&pcStack_2c,"TANNOY_NEW_PACKRESEARCHED_",ppuVar4);
    iVar6 = 4;
    iVar3 = 2;
    uStack_4 = 1;
    FUN_004f3b20();
    FUN_004f8a00(iVar3,puVar5,iVar6);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a2350 @ 004a2350 ////

void __fastcall FUN_004a2350(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d1d7bc;
  return;
}


//// FUNCTION FUN_004a23b0 @ 004a23b0 ////

void __thiscall FUN_004a23b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char *in_stack_fffffea4;
  uint in_stack_fffffea8;
  uint in_stack_fffffeac;
  char *pcStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  char acStack_120 [20];
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 auStack_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00ca63ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004015d0((undefined4 *)((int)this + 0x80),(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0x108) = 0;
  *(undefined1 *)((int)this + 0x109) = 0;
  (**(code **)(*(int *)((int)this + 0x140) + 4))();
  *(undefined4 *)((int)this + 0x154) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x140))();
  *(undefined1 *)((int)this + 0x13c) = 0;
  FUN_0043b700((void *)((int)this + 0x138),0.0);
  puVar1 = FUN_0040d6b0(apvStack_104,"ResearchPacks/",(undefined4 *)((int)this + 0x80));
  uStack_4 = 0;
  FUN_0055c540(auStack_e4,puVar1);
  if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_104[0]);
  }
  pcStack_12c = acStack_120;
  acStack_120[0] = '\0';
  uStack_128 = 0;
  uStack_124 = 0x20;
  pcStack_12c = _malloc(0x20);
  _strncpy(pcStack_12c,"year_can_start_research",0x17);
  uStack_128 = 0x17;
  pcStack_12c[0x17] = '\0';
  puStack_10c = &stack0xfffffea4;
  uStack_4._0_1_ = 3;
  FUN_005584e0(auStack_e4,(undefined4 *)&stack0xfffffea4,&pcStack_12c);
  puVar1 = FUN_0049ea50(&puStack_108,in_stack_fffffea4,in_stack_fffffea8,in_stack_fffffeac);
  *(undefined4 *)((int)this + 0xa8) = *puVar1;
  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_12c);
  }
  pcStack_12c = acStack_120;
  acStack_120[0] = '\0';
  uStack_128 = 0;
  uStack_124 = 0x20;
  pcStack_12c = _malloc(0x20);
  _strncpy(pcStack_12c,"year_available_to_all",0x15);
  uStack_128 = 0x15;
  pcStack_12c[0x15] = '\0';
  puStack_108 = &stack0xfffffea4;
  uStack_4._0_1_ = 4;
  FUN_005584e0(auStack_e4,(undefined4 *)&stack0xfffffea4,&pcStack_12c);
  puVar1 = FUN_0049ea50(&puStack_10c,in_stack_fffffea4,in_stack_fffffea8,in_stack_fffffeac);
  *(undefined4 *)((int)this + 0xa4) = *puVar1;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_12c);
  }
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)((int)this + 0xa4);
  ResearchPack_LoadFromIni(this,auStack_e4);
  FUN_0049db10((int)this);
  uStack_4 = 0xffffffff;
  FUN_00558920(auStack_e4);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004a25d0 @ 004a25d0 ////

undefined4 __fastcall FUN_004a25d0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6416;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d6b0(local_104,"ResearchPacks/",(undefined4 *)(param_1 + 0x48));
  local_4 = 0;
  uVar1 = FUN_00556140(local_104);
  if ((char)uVar1 == '\0') {
    uVar2 = FUN_0049db50(param_1 + -0x38);
  }
  else {
    FUN_0055c540(local_e4,local_104);
    local_4._0_1_ = 1;
    ResearchPack_LoadFromIni((void *)(param_1 + -0x38),local_e4);
    FUN_0049db10(param_1 + -0x38);
    local_4 = (uint)local_4._1_3_ << 8;
    uVar2 = FUN_00558920(local_e4);
  }
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104[0]);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


//// FUNCTION FUN_004a2690 @ 004a2690 ////

void __thiscall FUN_004a2690(void *this,char param_1)

{
  float *pfVar1;
  short sVar2;
  undefined4 uVar3;
  float *pfVar4;
  float10 fVar5;
  float local_8;
  undefined4 local_4;
  
  if (*(char *)((int)this + 0x108) == '\0') {
    fVar5 = FUN_0043b710((float *)((int)this + 0x10c));
    if ((float10)0.0 < fVar5) {
      FUN_0043b510(&local_4);
      sVar2 = FUN_0051ff90(&local_4);
      if ((char)sVar2 != '\0') {
        FUN_0043b600(&local_4,&local_8,(float *)((int)this + 0x10c));
        pfVar1 = (float *)((int)this + 0xa4);
        uVar3 = FUN_0043b6c0(&local_8,pfVar1);
        pfVar4 = &local_8;
        if ((char)uVar3 == '\0') {
          pfVar4 = pfVar1;
        }
        *pfVar1 = *pfVar4;
        pfVar1 = (float *)((int)this + 0x134);
        uVar3 = FUN_0043b6c0(&local_8,pfVar1);
        pfVar4 = &local_8;
        if ((char)uVar3 == '\0') {
          pfVar4 = pfVar1;
        }
        *pfVar1 = *pfVar4;
      }
    }
    uVar3 = FUN_0043b6a0(&DAT_00e4fa4c,(float *)((int)this + 0x134));
    if ((char)uVar3 != '\0') {
      FUN_004a2190(this,param_1);
    }
  }
  if (*(char *)((int)this + 0x109) == '\0') {
    uVar3 = FUN_0043b6a0(&DAT_00e4fa4c,(float *)((int)this + 0xa4));
    if ((char)uVar3 != '\0') {
      *(undefined1 *)((int)this + 0x109) = 1;
    }
  }
  return;
}


//// FUNCTION CResearchPack_Constructor @ 004a2780 ////

undefined4 * __fastcall CResearchPack_Constructor(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  int *piVar5;
  char *pcVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca64cc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0053f080(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1d7f4;
  param_1[0xe] = &PTR_LAB_00d1d7c8;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = param_1 + 0x23;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x14;
  local_4._0_1_ = 3;
  FUN_0049ba00(param_1 + 0x28);
  FUN_0043b510(param_1 + 0x29);
  FUN_0043b510(param_1 + 0x2a);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = param_1 + 0x31;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x14;
  param_1[0x36] = param_1 + 0x39;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x14;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)((int)param_1 + 0x10b) = 0;
  FUN_0043b520(param_1 + 0x43,0.0);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  local_4._0_1_ = 8;
  FUN_0043b510(param_1 + 0x4d);
  FUN_0043b510(param_1 + 0x4e);
  param_1[0x53] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = param_1 + 0x50;
  param_1[0x50] = &PTR_LAB_00d1d5b0;
  param_1[0x55] = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x1e] = param_1;
  FUN_00acdb9e(0xe51268);
  iVar2 = FUN_0097dda0();
  param_1[0x1f] = iVar2;
  if (s___AVCUnlockablePack_TM___00e5124c[0x19] != '\0') {
    iVar2 = 0x70;
    pcVar6 = "GlobalResearchPackLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe51268);
    FUN_0097df60(pcVar3,pcVar6,iVar2);
    s___AVCUnlockablePack_TM___00e5124c[0x19] = '\0';
  }
  pcVar3 = "pack_progress";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar4,pcVar3);
  if (!bVar1) {
    piVar5 = operator_new(0x90);
    local_4._0_1_ = 10;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1d4bc;
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  pcVar3 = "pack_description";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar4,pcVar3);
  if (!bVar1) {
    piVar5 = operator_new(0x90);
    local_4._0_1_ = 0xb;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1d470;
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  pcVar3 = "pack_contents";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar4,pcVar3);
  if (!bVar1) {
    piVar5 = operator_new(0x90);
    local_4._0_1_ = 0xc;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1d504;
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  pcVar3 = "pack_method";
  pvVar4 = (void *)GlobalStatRegistry_Get();
  bVar1 = FUN_008c9950(pvVar4,pcVar3);
  if (!bVar1) {
    piVar5 = operator_new(0x90);
    local_4._0_1_ = 0xd;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_009042a0(piVar5);
      *piVar5 = (int)&PTR_FUN_00d1d548;
    }
    local_4 = CONCAT31(local_4._1_3_,9);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    FUN_008cfdc0(pvVar4,piVar5);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004a2af0 @ 004a2af0 ////

void __fastcall FUN_004a2af0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004a2b30 @ 004a2b30 ////

void FUN_004a2b30(void)

{
  return;
}


//// FUNCTION FUN_004a2b80 @ 004a2b80 ////

undefined4 * __fastcall FUN_004a2b80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca64e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0x19);
  param_1[0x19] = &PTR_LAB_00d1d958;
  *param_1 = &PTR_FUN_00d1d938;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004a2be0 @ 004a2be0 ////

void __fastcall FUN_004a2be0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6508;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d1d938;
  param_1[0x19] = &PTR_LAB_00d1d958;
  local_4 = 0;
  FUN_0098a1c0(param_1 + 0x19);
  local_4 = 0xffffffff;
  FUN_0053c500(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_004a2d60 @ 004a2d60 ////

void __cdecl FUN_004a2d60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_004a2f10 @ 004a2f10 ////

void FUN_004a2f10(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)FUN_0049d9e0(&local_c);
  piVar2 = (int *)FUN_0049d9d0(&local_8);
  if (*piVar2 != *piVar1) {
    do {
      piVar1 = (int *)FUN_0049d9d0(&local_4);
      if (*(undefined4 **)(*piVar1 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(*piVar1 + 8))(1);
      }
      piVar1 = (int *)FUN_0049d9e0(&local_c);
      piVar2 = (int *)FUN_0049d9d0(&local_8);
    } while (*piVar2 != *piVar1);
  }
  return;
}


//// FUNCTION FUN_004a2f80 @ 004a2f80 ////

undefined4 * __thiscall FUN_004a2f80(void *this,byte param_1)

{
  FUN_004a2be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a2fa0 @ 004a2fa0 ////

void FUN_004a2fa0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004a2f10();
  puVar2 = DAT_0104a890;
  if (DAT_0104a890 != (undefined4 *)0x0) {
    iVar1 = DAT_0104a890[0x12];
    DAT_0104a890[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    DAT_0104a890 = (undefined4 *)0x0;
  }
  FUN_0049c690();
  FUN_00792670();
  return;
}


//// FUNCTION FUN_004a3060 @ 004a3060 ////

int FUN_004a3060(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  piVar2 = (int *)FUN_0049d9d0(&local_4);
  iVar3 = *piVar2;
  piVar2 = (int *)FUN_0049d9e0(&local_8);
  if (iVar3 != *piVar2) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(iVar3 + 8) + 0x38) + 0x20))();
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
      iVar3 = *(int *)(iVar3 + 4);
      piVar2 = (int *)FUN_0049d9e0(&local_8);
    } while (iVar3 != *piVar2);
  }
  return iVar4;
}


//// FUNCTION FUN_004a30c0 @ 004a30c0 ////

int __cdecl FUN_004a30c0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int local_18;
  float local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  iVar5 = 0;
  FUN_0043b510(&local_14);
  FUN_0049d9d0(&local_18);
  piVar3 = (int *)FUN_0049d9e0(&local_4);
  if (local_18 != *piVar3) {
    do {
      local_10 = *(undefined4 *)(*(int *)(local_18 + 8) + 0xa0);
      bVar1 = FUN_0049ba50(&local_10,param_1);
      if (((bVar1) &&
          (cVar2 = (**(code **)(*(int *)(*(int *)(local_18 + 8) + 0x38) + 0x20))(), cVar2 == '\0'))
         && (bVar1 = FUN_0049c760(*(int *)(local_18 + 8)), bVar1)) {
        uStack_c = *(undefined4 *)(*(int *)(local_18 + 8) + 0xa8);
        uVar4 = FUN_0043b6e0(&uStack_c,(float *)&DAT_00e4fa4c);
        if ((char)uVar4 != '\0') {
          if (iVar5 != 0) {
            uStack_8 = *(undefined4 *)(*(int *)(local_18 + 8) + 0xa8);
            uVar4 = FUN_0043b6c0(&uStack_8,&local_14);
            if ((char)uVar4 == '\0') goto LAB_004a319a;
          }
          iVar5 = *(int *)(local_18 + 8);
          local_14 = *(float *)(iVar5 + 0xa8);
        }
      }
LAB_004a319a:
      local_18 = *(int *)(local_18 + 4);
      piVar3 = (int *)FUN_0049d9e0(&local_4);
    } while (local_18 != *piVar3);
  }
  return iVar5;
}


//// FUNCTION FUN_004a3290 @ 004a3290 ////

void __cdecl FUN_004a3290(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_004a3380 @ 004a3380 ////

void __cdecl
FUN_004a3380(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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


//// FUNCTION FUN_004a33e0 @ 004a33e0 ////

void __cdecl FUN_004a33e0(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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


//// FUNCTION FUN_004a3440 @ 004a3440 ////

void __cdecl FUN_004a3440(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004a3500 @ 004a3500 ////

void __fastcall FUN_004a3500(int *param_1)

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
  puStack_8 = &LAB_00ca6528;
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


//// FUNCTION FUN_004a35d0 @ 004a35d0 ////

undefined4 __cdecl FUN_004a35d0(char *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int local_34;
  undefined4 local_30;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6548;
  local_c = ExceptionList;
  uVar4 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0049d9d0(&local_34);
  piVar1 = (int *)FUN_0049d9e0(&local_30);
  if (local_34 != *piVar1) {
    do {
      puVar2 = FUN_0049d700(*(void **)(local_34 + 8),local_2c);
      iVar3 = __stricmp((char *)*puVar2,param_1);
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (iVar3 == 0) {
        uVar4 = *(undefined4 *)(local_34 + 8);
        break;
      }
      local_34 = *(int *)(local_34 + 4);
      piVar1 = (int *)FUN_0049d9e0(&local_30);
    } while (local_34 != *piVar1);
  }
  if (param_3 < 0x15) {
    ExceptionList = local_c;
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  _free(param_1);
}


//// FUNCTION FUN_004a36a0 @ 004a36a0 ////

void FUN_004a36a0(void)

{
  undefined4 *puVar1;
  char *_Source;
  uint _Count;
  char cVar2;
  char *_Dest;
  int iVar3;
  undefined4 *puVar4;
  uint _Size;
  char local_14c [4];
  undefined4 uStack_148;
  char *local_124;
  undefined4 local_120;
  uint local_11c;
  char local_118 [20];
  char *local_104;
  uint local_100;
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca658f;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  uStack_148 = 0x4a36e9;
  ExceptionList = &local_c;
  _strncpy(local_124,"ResearchPacks",0xd);
  local_120 = 0xd;
  local_124[0xd] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  cVar2 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar2 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    FUN_005562f0(local_e4,&local_104,1);
    _Count = local_100;
    _Source = local_104;
    _Dest = local_14c;
    local_14c[0] = '\0';
    _Size = 0x14;
    local_4._0_1_ = 3;
    if (0x13 < local_100) {
      _Size = local_100 + 0x20 & 0xffffffe0;
      _Dest = _malloc(_Size);
    }
    _strncpy(_Dest,_Source,_Count);
    _Dest[_Count] = '\0';
    iVar3 = FUN_004a35d0(_Dest,_Count,_Size);
    if (iVar3 == 0) {
      puVar4 = operator_new(0x160);
      local_4._0_1_ = 4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = CResearchPack_Constructor(puVar4);
      }
      puVar1 = puVar4 + 0x1c;
      *puVar1 = &DAT_0104a73c;
      puVar4[0x1d] = DAT_0104a740;
      *DAT_0104a740 = puVar1;
      local_4._0_1_ = 3;
      DAT_0104a740 = puVar1;
      FUN_004a23b0(puVar4,&local_104);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_fc) break;
    cVar2 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_104);
}


//// FUNCTION FUN_004a3870 @ 004a3870 ////

int FUN_004a3870(void)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca65a8;
  local_c = ExceptionList;
  local_2c = local_20;
  iVar4 = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"moviemaking",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  ResearchCategory_NameToEnum(&local_38,&local_2c);
  local_4 = 0xffffffff;
  if (local_24 < 0x15) {
    FUN_0049d9d0(&local_3c);
    piVar3 = (int *)FUN_0049d9e0(&local_30);
    if (local_3c != *piVar3) {
      do {
        local_34 = *(undefined4 *)(*(int *)(local_3c + 8) + 0xa0);
        bVar1 = FUN_0049ba50(&local_34,&local_38);
        if ((bVar1) &&
           (cVar2 = (**(code **)(*(int *)(*(int *)(local_3c + 8) + 0x38) + 0x20))(), cVar2 != '\0'))
        {
          iVar4 = iVar4 + 1;
        }
        local_3c = *(int *)(local_3c + 4);
        piVar3 = (int *)FUN_0049d9e0(&local_30);
      } while (local_3c != *piVar3);
    }
    ExceptionList = local_c;
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_004a3990 @ 004a3990 ////

undefined4 FUN_004a3990(void)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_44;
  float local_40;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca65c8;
  local_c = ExceptionList;
  uVar5 = 0;
  ExceptionList = &local_c;
  FUN_0043b520(&local_40,0.0);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"moviemaking",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 0;
  ResearchCategory_NameToEnum(&local_3c,&local_2c);
  local_4 = 0xffffffff;
  if (local_24 < 0x15) {
    FUN_0049d9d0(&local_44);
    piVar3 = (int *)FUN_0049d9e0(&local_30);
    if (local_44 != *piVar3) {
      do {
        cVar1 = (**(code **)(*(int *)(*(int *)(local_44 + 8) + 0x38) + 0x20))();
        if (cVar1 != '\0') {
          uStack_38 = *(undefined4 *)(*(int *)(local_44 + 8) + 0xa0);
          bVar2 = FUN_0049ba50(&uStack_38,&local_3c);
          if (bVar2) {
            uStack_34 = *(undefined4 *)(*(int *)(local_44 + 8) + 0xa8);
            uVar4 = FUN_0043b680(&uStack_34,&local_40);
            if ((char)uVar4 != '\0') {
              local_40 = *(float *)(*(int *)(local_44 + 8) + 0xa8);
              uVar5 = *(undefined4 *)(local_44 + 8);
            }
          }
        }
        local_44 = *(int *)(local_44 + 4);
        piVar3 = (int *)FUN_0049d9e0(&local_30);
      } while (local_44 != *piVar3);
    }
    ExceptionList = local_c;
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c);
}


//// FUNCTION FUN_004a3af0 @ 004a3af0 ////

void __cdecl FUN_004a3af0(undefined4 *param_1)

{
  char cVar1;
  void *this;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_1c [12];
  undefined4 uStack_10;
  
  pcVar2 = local_1c;
  local_1c[0] = '\0';
  uVar3 = 0;
  uVar4 = 0x14;
  FUN_004015d0(&stack0xffffffd8,(char *)*param_1,param_1[1]);
  this = (void *)FUN_004a35d0(pcVar2,uVar3,uVar4);
  if (this != (void *)0x0) {
    cVar1 = (**(code **)(*(int *)((int)this + 0x38) + 0x20))();
    if (cVar1 == '\0') {
      uStack_10 = 0x4a3b45;
      FUN_004a2190(this,'\x01');
    }
  }
  return;
}


//// FUNCTION FUN_004a3b50 @ 004a3b50 ////

void __cdecl FUN_004a3b50(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  FUN_0049d9d0(&local_8);
  piVar2 = (int *)FUN_0049d9e0(&local_4);
  if (local_8 != *piVar2) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(local_8 + 8) + 0x38) + 0x20))();
      if (((cVar1 == '\0') && (*(int *)(*(int *)(local_8 + 8) + 0xbc) != 0)) &&
         (iVar3 = __stricmp(*(char **)(*(int *)(local_8 + 8) + 0xb8),(char *)*param_1), iVar3 == 0))
      {
        FUN_004a2190(*(void **)(local_8 + 8),'\0');
      }
      local_8 = *(int *)(local_8 + 4);
      piVar2 = (int *)FUN_0049d9e0(&local_4);
    } while (local_8 != *piVar2);
  }
  return;
}


//// FUNCTION FUN_004a3bf0 @ 004a3bf0 ////

void __cdecl FUN_004a3bf0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  FUN_0049d9d0(&local_8);
  piVar2 = (int *)FUN_0049d9e0(&local_4);
  if (local_8 != *piVar2) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(local_8 + 8) + 0x38) + 0x20))();
      if (((cVar1 == '\0') && (*(int *)(*(int *)(local_8 + 8) + 0xdc) != 0)) &&
         (iVar3 = __stricmp(*(char **)(*(int *)(local_8 + 8) + 0xd8),(char *)*param_1), iVar3 == 0))
      {
        FUN_004a2190(*(void **)(local_8 + 8),'\0');
      }
      local_8 = *(int *)(local_8 + 4);
      piVar2 = (int *)FUN_0049d9e0(&local_4);
    } while (local_8 != *piVar2);
  }
  return;
}


//// FUNCTION FUN_004a3cc0 @ 004a3cc0 ////

void __fastcall FUN_004a3cc0(int param_1)

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


//// FUNCTION FUN_004a3d10 @ 004a3d10 ////

void * FUN_004a3d10(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_004a3d60 @ 004a3d60 ////

void __cdecl
FUN_004a3d60(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004a3380(param_1,param_1 + iVar1,param_1 + iVar1 * 2,param_4);
    FUN_004a3380(param_2 + -iVar1,param_2,param_2 + iVar1,param_4);
    FUN_004a3380(param_3 + iVar1 * -2,param_3 + -iVar1,param_3,param_4);
    FUN_004a3380(param_1 + iVar1,param_2,param_3 + -iVar1,param_4);
    return;
  }
  FUN_004a3380(param_1,param_2,param_3,param_4);
  return;
}


//// FUNCTION FUN_004a3e10 @ 004a3e10 ////

void __cdecl FUN_004a3e10(int param_1,int param_2,int param_3,undefined4 param_4,undefined *param_5)

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
  FUN_004a33e0(param_1,iVar2,param_2,param_4,param_5);
  return;
}


//// FUNCTION FUN_004a4130 @ 004a4130 ////

void __fastcall FUN_004a4130(int param_1)

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


//// FUNCTION FUN_004a4160 @ 004a4160 ////

undefined4 * FUN_004a4160(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_004a4190 @ 004a4190 ////

void __cdecl
FUN_004a4190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined *param_4)

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
  FUN_004a3d60(param_2,puVar5,param_3 + -1,param_4);
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
joined_r0x004a4228:
  do {
    puVar4 = puStack_4;
    if (param_3 <= puVar2) {
joined_r0x004a426e:
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
      goto joined_r0x004a4228;
    }
    cVar3 = (*(code *)param_4)(*puVar6,*puVar2);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)param_4)(*puVar2,*puVar6);
      if (cVar3 != '\0') goto joined_r0x004a426e;
      uVar1 = *puVar5;
      *puVar5 = *puVar2;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
    }
    puVar2 = puVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_004a4350 @ 004a4350 ////

void __cdecl FUN_004a4350(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_004a4380 @ 004a4380 ////

void __cdecl FUN_004a4380(int param_1,int param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1 >> 2;
  iVar2 = iVar3 - (param_2 - param_1 >> 0x1f) >> 1;
  while (0 < iVar2) {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    FUN_004a3e10(param_1,iVar2,iVar3,*(undefined4 *)(param_1 + -4 + iVar1),param_3);
  }
  return;
}


//// FUNCTION FUN_004a4480 @ 004a4480 ////

void __cdecl FUN_004a4480(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

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
            FUN_004a3440((int)puVar4,(int)puVar2,puVar2 + 1);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_004a3440((int)param_1,(int)puVar2,puVar2 + 1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_004a4590 @ 004a4590 ////

void __cdecl FUN_004a4590(undefined4 *param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = param_2 - (int)param_1; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)param_1 + iVar2 + -4);
    *(undefined4 *)((int)param_1 + iVar2 + -4) = *param_1;
    FUN_004a3e10((int)param_1,0,iVar2 + -4 >> 2,uVar1,param_3);
  }
  return;
}


//// FUNCTION FUN_004a45e0 @ 004a45e0 ////

void __cdecl FUN_004a45e0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *local_8;
  undefined4 *local_4;
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_004a4677:
      if (1 < iVar2) {
        FUN_004a4480(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_004a4380((int)param_1,(int)param_2,param_4);
        }
        FUN_004a4590(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_004a4677;
    }
    FUN_004a4190(&local_8,param_1,param_2,param_4);
    puVar1 = local_4;
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)local_8 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)local_4 & 0xfffffffcU)) {
      FUN_004a45e0(param_1,local_8,param_3,param_4);
      param_1 = puVar1;
    }
    else {
      FUN_004a45e0(local_4,param_2,param_3,param_4);
      param_2 = local_8;
    }
    iVar2 = (int)param_2 - (int)param_1;
  } while( true );
}


//// FUNCTION FUN_004a46d0 @ 004a46d0 ////

void FUN_004a46d0(void)

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
  puStack_8 = &LAB_00ca6628;
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


//// FUNCTION FUN_004a4740 @ 004a4740 ////

void __thiscall FUN_004a4740(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_004a46d0();
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
      _Dst = FUN_004a4160((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_004a3d10(param_1,iVar5,param_1 + param_2);
      FUN_004a4160(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_004a2d60(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_004a3d10(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_004a3290(param_1,(int)pvVar3,iVar5);
    FUN_004a2d60(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_004a4940 @ 004a4940 ////

void __thiscall FUN_004a4940(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ca6640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0x3fffffff < param_1) {
    ExceptionList = &local_10;
    FUN_004a46d0();
    param_1 = extraout_EDX;
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar1 < param_1) {
    puVar2 = operator_new(param_1 * 4);
    local_8 = 0;
    FUN_004a4350(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),puVar2);
    if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(undefined4 **)((int)this + 0xc) = puVar2 + param_1;
    *(undefined4 **)((int)this + 8) = puVar2;
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_004a4b10 @ 004a4b10 ////

void __cdecl FUN_004a4b10(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  int *piVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  this = param_1;
  FUN_004a4940(param_1,0x40);
  FUN_0049d9d0(&param_1);
  piVar3 = (int *)FUN_0049d9e0(&local_4);
  if (param_1 != (void *)*piVar3) {
    do {
      local_8 = *(undefined4 *)((int)param_1 + 8);
      iVar1 = *(int *)((int)this + 4);
      if ((iVar1 == 0) ||
         ((uint)(*(int *)((int)this + 0xc) - iVar1 >> 2) <=
          (uint)(*(int *)((int)this + 8) - iVar1 >> 2))) {
        FUN_004a4740(this,*(undefined4 **)((int)this + 8),1,&local_8);
      }
      else {
        puVar2 = *(undefined4 **)((int)this + 8);
        *puVar2 = local_8;
        *(undefined4 **)((int)this + 8) = puVar2 + 1;
      }
      param_1 = *(void **)((int)param_1 + 4);
      piVar3 = (int *)FUN_0049d9e0(&local_4);
    } while (param_1 != (void *)*piVar3);
  }
  FUN_004a45e0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8),
               (int)*(undefined4 **)((int)this + 8) - (int)*(undefined4 **)((int)this + 4) >> 2,
               &LAB_004a2b50);
  return;
}


//// FUNCTION FUN_004a4be0 @ 004a4be0 ////

void FUN_004a4be0(void)

{
  undefined4 *_Memory;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6658;
  local_c = ExceptionList;
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004a4b10(local_1c);
  puVar1 = local_14;
  _Memory = local_18;
  for (puVar2 = local_18; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_004a2690((void *)*puVar2,'\x01');
  }
  if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a4c60 @ 004a4c60 ////

void FUN_004a4c60(void)

{
  int *_Memory;
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6678;
  pvStack_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004a4b10(local_1c);
  piVar1 = local_14;
  _Memory = local_18;
  for (piVar3 = local_18; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    cVar2 = (**(code **)(*(int *)(*piVar3 + 0x38) + 0x20))();
    if (cVar2 == '\0') {
      FUN_004a2190((void *)*piVar3,'\x01');
    }
  }
  if (_Memory != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION ResearchSystem_Constructor @ 004a4cf0 ////

void ResearchSystem_Constructor(void)

{
  undefined4 *puVar1;
  undefined4 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca66b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049cfd0();
  local_30 = operator_new(0x8c);
  local_4 = 0;
  if (local_30 == (undefined4 *)0x0) {
    DAT_0104a890 = (undefined4 *)0x0;
  }
  else {
    DAT_0104a890 = FUN_004a2b80(local_30);
  }
  local_4 = 0xffffffff;
  FUN_004a36a0();
  puVar1 = (undefined4 *)FUN_0049d9e0(&local_30);
  DAT_0104a894 = *puVar1;
  FUN_00793a70();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"research",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  FUN_005434b0();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"researchone",0xb);
  local_28 = 0xb;
  local_2c[0xb] = '\0';
  local_4 = 2;
  FUN_005434b0();
  local_4 = 0xffffffff;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_004a4be0();
  if ((DAT_0104a974 != 0) && (*(float *)(DAT_0104a974 + 0x78) == 2.0)) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"sandbox",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 3;
    FUN_004a3af0(&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a4ec0 @ 004a4ec0 ////

void __fastcall FUN_004a4ec0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x1e));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004a4ef0 @ 004a4ef0 ////

void FUN_004a4ef0(void)

{
  return;
}


//// FUNCTION FUN_004a4f10 @ 004a4f10 ////

undefined4 * __fastcall FUN_004a4f10(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca66cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xa8);
  local_4 = 0;
  if (this != (void *)0x0) {
    puVar1 = FUN_00902530(this,param_1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_004a4f70 @ 004a4f70 ////

void __fastcall FUN_004a4f70(int *param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_00539330(param_1);
  if (iVar1 != 0) {
    iVar1 = 2;
    this = (void *)FUN_00539330(param_1);
    FUN_009021d0(this,iVar1);
  }
  return;
}


//// FUNCTION FUN_004a5010 @ 004a5010 ////

void __fastcall FUN_004a5010(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_4c [11];
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puStack_1c = (undefined4 *)0x4a5023;
  iVar1 = FUN_00930460((void *)param_1[0x5e]);
  local_c = *(undefined4 *)(iVar1 + 0x24);
  local_8 = *(undefined4 *)(iVar1 + 0x28);
  local_4 = *(undefined4 *)(iVar1 + 0x2c);
  puStack_1c = &local_c;
  uStack_20 = 0x4a5046;
  (**(code **)(*param_1 + 0x2c))();
  uStack_20 = 0x4a5051;
  puVar2 = (undefined4 *)FUN_00930460((void *)param_1[0x5e]);
  puVar3 = auStack_4c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*(int *)param_1[0x47] + 0x24))();
  return;
}


//// FUNCTION FUN_004a5080 @ 004a5080 ////

void __fastcall FUN_004a5080(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  
  puVar2 = FUN_00433eb0();
  *(undefined4 **)(param_1 + 0x11c) = puVar2;
  puVar2[0x27] = puVar2[0x27] | 0x80;
  puVar1 = (uint *)(*(int *)(param_1 + 0x11c) + 0x9c);
  *puVar1 = *puVar1 | 0x100;
  *(uint *)(*(int *)(param_1 + 0x11c) + 0x9c) = *(uint *)(*(int *)(param_1 + 0x11c) + 0x9c) | 0x20;
  pbVar3 = FUN_009de1d0("p_crate_bp.msh",1);
  (**(code **)(**(int **)(param_1 + 0x11c) + 0x18))(pbVar3);
  if (pbVar3 != (byte *)0x0) {
    FUN_009de3b0(pbVar3);
    return;
  }
  return;
}


//// FUNCTION FUN_004a50f0 @ 004a50f0 ////

undefined4 __fastcall FUN_004a50f0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00538fc0(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_004a5010((int *)(param_1 + -0x78));
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_004a5120 @ 004a5120 ////

void __thiscall FUN_004a5120(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x148) + 4))();
  *(undefined4 *)((int)this + 0x15c) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x148))();
  return;
}


//// FUNCTION FUN_004a5150 @ 004a5150 ////

void __fastcall FUN_004a5150(int *param_1)

{
  FUN_00539af0(param_1);
  if (param_1[0x57] != 0) {
    FUN_0049da60(param_1[0x57]);
    return;
  }
  return;
}


//// FUNCTION FUN_004a5170 @ 004a5170 ////

void __fastcall FUN_004a5170(int param_1)

{
  int iVar1;
  void *this;
  
  FUN_005386c0(param_1);
  if (*(int *)(*(int *)(*(int *)((int)*(void **)(param_1 + 0x178) + 0xc0) + 0x24c) + 0x2b8) != 0) {
    iVar1 = FUN_0093c970(*(void **)(param_1 + 0x178));
    if (iVar1 != 0) {
      iVar1 = 0;
      this = (void *)FUN_0093c970(*(void **)(param_1 + 0x178));
      iVar1 = FUN_00944e20(this,iVar1);
      if (iVar1 != 0) {
        return;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x11c) + 0x10))(0,1);
  }
  return;
}


//// FUNCTION FUN_004a51f0 @ 004a51f0 ////

undefined4 __fastcall FUN_004a51f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x178);
}


//// FUNCTION FUN_004a5200 @ 004a5200 ////

void __fastcall FUN_004a5200(int *param_1)

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
  puStack_8 = &LAB_00ca66e8;
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


//// FUNCTION FUN_004a5370 @ 004a5370 ////

void __fastcall FUN_004a5370(int param_1)

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
  puStack_8 = &LAB_00ca6718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPackObject.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x11;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xd0));
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
  uVar3 = FUN_0098b490("PPack");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xd0));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPackObject.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x12;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Unlocked");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0xe8),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\ResearchPackObject.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x13;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 2;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0xec));
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
  uVar3 = FUN_0098b490("PRoom");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0xec));
  }
  FUN_00539430(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a5660 @ 004a5660 ////

undefined4 * __fastcall FUN_004a5660(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6754;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(param_1);
  *param_1 = &PTR_FUN_00d1daa4;
  param_1[0x1e] = &PTR_LAB_00d1da84;
  param_1[0x28] = &PTR_FUN_00d1da6c;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = param_1 + 0x52;
  param_1[0x52] = &PTR_FUN_00d16aac;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x5c] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = param_1 + 0x59;
  param_1[0x59] = &PTR_LAB_00d1d5b0;
  param_1[0x5e] = 0;
  local_4 = 2;
  FUN_004a5080((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004a5710 @ 004a5710 ////

int * __thiscall FUN_004a5710(void *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca6784;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00539710(this);
  *(undefined ***)this = &PTR_FUN_00d1daa4;
  *(undefined ***)((int)this + 0x78) = &PTR_LAB_00d1da84;
  *(undefined ***)((int)this + 0xa0) = &PTR_FUN_00d1da6c;
  piVar1 = (int *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x154) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 **)((int)this + 0x154) = (undefined4 *)((int)this + 0x148);
  *(undefined4 *)((int)this + 0x148) = &PTR_FUN_00d16aac;
  *(int *)((int)this + 0x15c) = param_2;
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x18);
    *(int **)((int)this + 0x150) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x160) = 0;
  piVar1 = (int *)((int)this + 0x168);
  *(undefined4 *)((int)this + 0x170) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 **)((int)this + 0x170) = (undefined4 *)((int)this + 0x164);
  *(undefined4 *)((int)this + 0x164) = &PTR_LAB_00d1d5b0;
  *(int *)((int)this + 0x178) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x16c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 2;
  FUN_004a5080((int)this);
  FUN_004a5010(this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_004a57f0 @ 004a57f0 ////

undefined4 * __thiscall FUN_004a57f0(void *this,byte param_1)

{
  FUN_004a5810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a5810 @ 004a5810 ////

void __fastcall FUN_004a5810(undefined4 *param_1)

{
  param_1[0x59] = &PTR_LAB_00d1d5b0;
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5b] = param_1[0x5a];
  }
  if (param_1[0x5a] != 0) {
    *(undefined4 *)(param_1[0x5a] + 4) = param_1[0x5b];
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  if ((undefined4 *)param_1[0x5b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5b] = param_1[0x5a];
  }
  if (param_1[0x5a] != 0) {
    *(undefined4 *)(param_1[0x5a] + 4) = param_1[0x5b];
  }
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x52] = &PTR_FUN_00d16aac;
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
  FUN_00539940(param_1);
  return;
}


//// FUNCTION FUN_004a5900 @ 004a5900 ////

void __fastcall FUN_004a5900(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004a5930 @ 004a5930 ////

void FUN_004a5930(void)

{
  return;
}


//// FUNCTION FUN_004a5950 @ 004a5950 ////

void __fastcall FUN_004a5950(int *param_1)

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
  puStack_8 = &LAB_00ca6798;
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


//// FUNCTION FUN_004a5a20 @ 004a5a20 ////

void __fastcall FUN_004a5a20(int param_1)

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
  puStack_8 = &LAB_00ca67c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Review.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("Publication");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Review.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Review");
  if ((char)uVar3 != '\0') {
    FUN_0098c580((undefined4 *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Review.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x18;
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
  uVar3 = FUN_0098b490("Score");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x68));
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a5cf0 @ 004a5cf0 ////

undefined4 * __fastcall FUN_004a5cf0(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00ca681a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  local_4 = 0;
  FUN_0098a100(param_1 + 0xe);
  *param_1 = &PTR_FUN_00d1dba8;
  param_1[0xe] = &PTR_LAB_00d1db88;
  param_1[0x18] = param_1 + 0x1b;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 10;
  param_1[0x20] = param_1 + 0x23;
  *(undefined2 *)(param_1 + 0x23) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 10;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  param_1[0x2b] = param_1;
  FUN_00acdb9e(0xe512b0);
  iVar1 = FUN_0097dda0();
  param_1[0x2c] = iVar1;
  if (s___AVCResearchPackManager_TM___00e51290[0x1e] != '\0') {
    iVar1 = 0xa4;
    pcVar3 = "ReviewLink";
    pcVar2 = (char *)FUN_00acdb9e(0xe512b0);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AVCResearchPackManager_TM___00e51290[0x1e] = '\0';
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_004a5e10 @ 004a5e10 ////

undefined4 * __thiscall FUN_004a5e10(void *this,byte param_1)

{
  FUN_004a5e30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a5e30 @ 004a5e30 ////

void __fastcall FUN_004a5e30(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00ca6838;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((undefined4 *)param_1[0x2a] != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *(undefined4 *)param_1[0x2a] = param_1[0x29];
  }
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1[0x29] + 4) = param_1[0x2a];
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (10 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if (10 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 0xe;
  }
  FUN_0098a1c0(puVar1);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_004a5f00 @ 004a5f00 ////

void __fastcall FUN_004a5f00(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_004a5f30 @ 004a5f30 ////

int * __thiscall FUN_004a5f30(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004a5ff0 @ 004a5ff0 ////

int * __thiscall FUN_004a5ff0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004a6050 @ 004a6050 ////

int * __thiscall FUN_004a6050(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004a60b0 @ 004a60b0 ////

int * __thiscall FUN_004a60b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_004a6140 @ 004a6140 ////

void __cdecl FUN_004a6140(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x29);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a6160 @ 004a6160 ////

void __cdecl FUN_004a6160(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a61a0 @ 004a61a0 ////

void __thiscall FUN_004a61a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
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


//// FUNCTION FUN_004a6280 @ 004a6280 ////

void __cdecl FUN_004a6280(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x29);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a62a0 @ 004a62a0 ////

void __cdecl FUN_004a62a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a62e0 @ 004a62e0 ////

void __thiscall FUN_004a62e0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
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


//// FUNCTION FUN_004a63c0 @ 004a63c0 ////

void __cdecl FUN_004a63c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x29);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a63e0 @ 004a63e0 ////

void __cdecl FUN_004a63e0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return;
}


//// FUNCTION FUN_004a6420 @ 004a6420 ////

void __thiscall FUN_004a6420(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x29) == '\0') {
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


//// FUNCTION FUN_004a6580 @ 004a6580 ////

void __fastcall FUN_004a6580(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_004a6600 @ 004a6600 ////

void __fastcall FUN_004a6600(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_004a6680 @ 004a6680 ////

void __fastcall FUN_004a6680(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_004a67d0 @ 004a67d0 ////

void __fastcall FUN_004a67d0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x29) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x29);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x29);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x29) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x29) == '\0');
    if (*(char *)((int)piVar4 + 0x29) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_004a6830 @ 004a6830 ////

void __fastcall FUN_004a6830(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x29) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x29);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x29);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x29) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x29) == '\0');
    if (*(char *)((int)piVar4 + 0x29) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_004a6890 @ 004a6890 ////

void __fastcall FUN_004a6890(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x29) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x29);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x29);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x29) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x29) == '\0');
    if (*(char *)((int)piVar4 + 0x29) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_004a6aa0 @ 004a6aa0 ////

void FUN_004a6aa0(void)

{
  FUN_0098fdd0("PReviewGenerator",&DAT_0104a898);
  return;
}


//// FUNCTION FUN_004a6b00 @ 004a6b00 ////

void FUN_004a6b00(void)

{
  if (DAT_0104a8ac != (undefined4 *)0x0) {
    (**(code **)*DAT_0104a8ac)(1);
  }
  (*(code *)DAT_0104a898[1])();
  DAT_0104a8ac = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x004a6b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*DAT_0104a898)();
  return;
}


//// FUNCTION FUN_004a6c90 @ 004a6c90 ////

void __thiscall FUN_004a6c90(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x29) == '\0') {
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


//// FUNCTION FUN_004a6d00 @ 004a6d00 ////

void __thiscall FUN_004a6d00(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x29) == '\0') {
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


//// FUNCTION FUN_004a6d70 @ 004a6d70 ////

void __thiscall FUN_004a6d70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x29) == '\0') {
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


//// FUNCTION FUN_004a6df0 @ 004a6df0 ////

int * __fastcall FUN_004a6df0(int *param_1)

{
  FUN_004a6580(param_1);
  return param_1;
}


//// FUNCTION FUN_004a6e20 @ 004a6e20 ////

int * __fastcall FUN_004a6e20(int *param_1)

{
  FUN_004a6600(param_1);
  return param_1;
}


//// FUNCTION FUN_004a6e50 @ 004a6e50 ////

int * __fastcall FUN_004a6e50(int *param_1)

{
  FUN_004a6680(param_1);
  return param_1;
}


//// FUNCTION FUN_004a6f80 @ 004a6f80 ////

int * __fastcall FUN_004a6f80(int *param_1)

{
  FUN_004a67d0(param_1);
  return param_1;
}


//// FUNCTION FUN_004a6f90 @ 004a6f90 ////

int * __fastcall FUN_004a6f90(int *param_1)

{
  FUN_004a6830(param_1);
  return param_1;
}


//// FUNCTION FUN_004a6fa0 @ 004a6fa0 ////

int * __fastcall FUN_004a6fa0(int *param_1)

{
  FUN_004a6890(param_1);
  return param_1;
}


//// FUNCTION FUN_004a70a0 @ 004a70a0 ////

void __fastcall FUN_004a70a0(int *param_1)

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
  puStack_8 = &LAB_00ca6858;
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


//// FUNCTION FUN_004a7170 @ 004a7170 ////

void __thiscall FUN_004a7170(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d1dbc4;
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


//// FUNCTION FUN_004a71c0 @ 004a71c0 ////

void __fastcall FUN_004a71c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1dbc4;
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


//// FUNCTION FUN_004a7280 @ 004a7280 ////

int * __fastcall FUN_004a7280(int *param_1)

{
  FUN_004a6580(param_1);
  return param_1;
}


//// FUNCTION FUN_004a72a0 @ 004a72a0 ////

int * __fastcall FUN_004a72a0(int *param_1)

{
  FUN_004a6600(param_1);
  return param_1;
}


//// FUNCTION FUN_004a72c0 @ 004a72c0 ////

int * __fastcall FUN_004a72c0(int *param_1)

{
  FUN_004a6680(param_1);
  return param_1;
}


//// FUNCTION FUN_004a73c0 @ 004a73c0 ////

void __fastcall FUN_004a73c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1dbd4;
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


//// FUNCTION FUN_004a7440 @ 004a7440 ////

void __fastcall FUN_004a7440(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1dbe4;
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


//// FUNCTION FUN_004a74c0 @ 004a74c0 ////

void __fastcall FUN_004a74c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d1dbf4;
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


//// FUNCTION FUN_004a7510 @ 004a7510 ////

int * __fastcall FUN_004a7510(int *param_1)

{
  FUN_004a67d0(param_1);
  return param_1;
}


//// FUNCTION FUN_004a7560 @ 004a7560 ////

int * __fastcall FUN_004a7560(int *param_1)

{
  FUN_004a6830(param_1);
  return param_1;
}


//// FUNCTION FUN_004a75b0 @ 004a75b0 ////

int * __fastcall FUN_004a75b0(int *param_1)

{
  FUN_004a6890(param_1);
  return param_1;
}


//// FUNCTION FUN_004a7600 @ 004a7600 ////

void FUN_004a7600(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a7650 @ 004a7650 ////

void FUN_004a7650(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a76a0 @ 004a76a0 ////

void FUN_004a76a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a7840 @ 004a7840 ////

void __thiscall FUN_004a7840(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_004a78b0 @ 004a78b0 ////

void __thiscall FUN_004a78b0(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_004a7920 @ 004a7920 ////

void __thiscall FUN_004a7920(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_004a7990 @ 004a7990 ////

void __fastcall FUN_004a7990(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d1dbd4;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004a79e0 @ 004a79e0 ////

void __fastcall FUN_004a79e0(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d1dbe4;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004a7a30 @ 004a7a30 ////

void __fastcall FUN_004a7a30(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d1dbf4;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_004a7a80 @ 004a7a80 ////

void __thiscall FUN_004a7a80(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d1dbd4;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004a7ae0 @ 004a7ae0 ////

void __thiscall FUN_004a7ae0(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d1dbe4;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004a7b40 @ 004a7b40 ////

void __thiscall FUN_004a7b40(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d1dbf4;
  iVar3 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0xc) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_004a7ba0 @ 004a7ba0 ////

void __fastcall FUN_004a7ba0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004a7be0 @ 004a7be0 ////

void __fastcall FUN_004a7be0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004a7c20 @ 004a7c20 ////

void __fastcall FUN_004a7c20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_004a7c60 @ 004a7c60 ////

void __thiscall
FUN_004a7c60(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d1dbd4;
  iVar3 = param_4[6];
  *(int *)((int)this + 0x24) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x18) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x28) = param_5;
  *(undefined1 *)((int)this + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a7cd0 @ 004a7cd0 ////

void __thiscall
FUN_004a7cd0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d1dbe4;
  iVar3 = param_4[6];
  *(int *)((int)this + 0x24) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x18) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x28) = param_5;
  *(undefined1 *)((int)this + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a7d40 @ 004a7d40 ////

void __thiscall
FUN_004a7d40(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = *param_4;
  piVar1 = (int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d1dbf4;
  iVar3 = param_4[6];
  *(int *)((int)this + 0x24) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)((int)this + 0x18) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x28) = param_5;
  *(undefined1 *)((int)this + 0x29) = 0;
  return;
}


//// FUNCTION FUN_004a7db0 @ 004a7db0 ////

void __fastcall FUN_004a7db0(int param_1)

{
  FUN_004a7990(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_004a7dc0 @ 004a7dc0 ////

void __fastcall FUN_004a7dc0(int param_1)

{
  FUN_004a79e0(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_004a7dd0 @ 004a7dd0 ////

void __fastcall FUN_004a7dd0(int param_1)

{
  FUN_004a7a30(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_004a7de0 @ 004a7de0 ////

int __fastcall FUN_004a7de0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004a7e10 @ 004a7e10 ////

int __fastcall FUN_004a7e10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a7650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004a7e40 @ 004a7e40 ////

int __fastcall FUN_004a7e40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_004a7e70 @ 004a7e70 ////

void * FUN_004a7e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_004a7c60(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004a7eb0 @ 004a7eb0 ////

void * FUN_004a7eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_004a7cd0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004a7ef0 @ 004a7ef0 ////

void * FUN_004a7ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_004a7d40(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_004a7f30 @ 004a7f30 ////

void * __thiscall FUN_004a7f30(void *this,byte param_1)

{
  FUN_004a7db0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a7f50 @ 004a7f50 ////

void * __thiscall FUN_004a7f50(void *this,byte param_1)

{
  FUN_004a7dc0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a7f70 @ 004a7f70 ////

void * __thiscall FUN_004a7f70(void *this,byte param_1)

{
  FUN_004a7dd0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_004a7ff0 @ 004a7ff0 ////

void __thiscall FUN_004a7ff0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca6878;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
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
  FUN_004a6580((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x29) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
      iVar1 = param_2[10];
      *(char *)(param_2 + 10) = (char)_Memory[10];
      *(char *)(_Memory + 10) = (char)iVar1;
      goto LAB_004a815b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      piVar2 = (int *)FUN_004a6160(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_004a6140((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_004a815b:
  if ((char)_Memory[10] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[10] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a6c90(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_004a61a0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_004a6c90(this,(int)piVar6);
              break;
            }
LAB_004a8228:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a61a0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_004a8228;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_004a6c90(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_004a61a0(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 10) = 1;
  }
  _Memory[4] = (int)&PTR_LAB_00d1dbd4;
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


//// FUNCTION FUN_004a8300 @ 004a8300 ////

void __thiscall FUN_004a8300(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca6898;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
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
  FUN_004a6600((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x29) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
      iVar1 = param_2[10];
      *(char *)(param_2 + 10) = (char)_Memory[10];
      *(char *)(_Memory + 10) = (char)iVar1;
      goto LAB_004a846b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      piVar2 = (int *)FUN_004a62a0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_004a6280((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_004a846b:
  if ((char)_Memory[10] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[10] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a6d00(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_004a62e0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_004a6d00(this,(int)piVar6);
              break;
            }
LAB_004a8538:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a62e0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_004a8538;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_004a6d00(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_004a62e0(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 10) = 1;
  }
  _Memory[4] = (int)&PTR_LAB_00d1dbe4;
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


//// FUNCTION FUN_004a8610 @ 004a8610 ////

void __thiscall FUN_004a8610(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00ca68b8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x29) != '\0') {
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
  FUN_004a6680((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x29) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
      iVar1 = param_2[10];
      *(char *)(param_2 + 10) = (char)_Memory[10];
      *(char *)(_Memory + 10) = (char)iVar1;
      goto LAB_004a877b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      piVar2 = (int *)FUN_004a63e0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_004a63c0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_004a877b:
  if ((char)_Memory[10] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[10] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a6d70(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_004a6420(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_004a6d70(this,(int)piVar6);
              break;
            }
LAB_004a8848:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_004a6420(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_004a8848;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_004a6d70(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_004a6420(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 10) = 1;
  }
  _Memory[4] = (int)&PTR_LAB_00d1dbf4;
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


//// FUNCTION FUN_004a8920 @ 004a8920 ////

void FUN_004a8920(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004a8920(*(void **)((int)param_1 + 8));
    FUN_004a7db0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004a8960 @ 004a8960 ////

void FUN_004a8960(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004a8960(*(void **)((int)param_1 + 8));
    FUN_004a7dc0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004a89a0 @ 004a89a0 ////

void FUN_004a89a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_004a89a0(*(void **)((int)param_1 + 8));
    FUN_004a7dd0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_004a89e0 @ 004a89e0 ////

void __thiscall
FUN_004a89e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca68d8;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004a7e70(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x28);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x28) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[10] == '\0') {
LAB_004a8adb:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004a6c90(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_004a61a0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_004a8adb;
      if (piVar6 == (int *)*piVar2) {
        FUN_004a61a0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_004a6c90(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_004a8b90 @ 004a8b90 ////

void __thiscall
FUN_004a8b90(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca68f8;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004a7eb0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x28);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x28) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[10] == '\0') {
LAB_004a8c8b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004a6d00(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_004a62e0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_004a8c8b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004a62e0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_004a6d00(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_004a8d40 @ 004a8d40 ////

void __thiscall
FUN_004a8d40(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00ca6918;
  local_c = ExceptionList;
  if (0x9249247 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_004a7ef0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x28);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x28) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[10] == '\0') {
LAB_004a8e3b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_004a6d70(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_004a6420(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_004a8e3b;
      if (piVar6 == (int *)*piVar2) {
        FUN_004a6420(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_004a6d70(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_004a8ef0 @ 004a8ef0 ////

void __fastcall FUN_004a8ef0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iStack_4;
  
  iStack_4 = param_1;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      puVar1 = *(undefined4 **)(**(int **)(param_1 + 100) + 0x24);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = **(int **)(param_1 + 100);
      (**(code **)(*(int *)(iVar2 + 0x10) + 4))();
      *(undefined4 *)(iVar2 + 0x24) = 0;
      (*(code *)**(undefined4 **)(iVar2 + 0x10))();
      FUN_004a7ff0((void *)(param_1 + 0x60),&iStack_4,(int *)**(undefined4 **)(param_1 + 100));
    } while (*(int *)(param_1 + 0x68) != 0);
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    do {
      puVar1 = *(undefined4 **)(**(int **)(param_1 + 0x70) + 0x24);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = **(int **)(param_1 + 0x70);
      (**(code **)(*(int *)(iVar2 + 0x10) + 4))();
      *(undefined4 *)(iVar2 + 0x24) = 0;
      (*(code *)**(undefined4 **)(iVar2 + 0x10))();
      FUN_004a8300((void *)(param_1 + 0x6c),&iStack_4,(int *)**(undefined4 **)(param_1 + 0x70));
    } while (*(int *)(param_1 + 0x74) != 0);
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      puVar1 = *(undefined4 **)(**(int **)(param_1 + 0x7c) + 0x24);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar2 = **(int **)(param_1 + 0x7c);
      (**(code **)(*(int *)(iVar2 + 0x10) + 4))();
      *(undefined4 *)(iVar2 + 0x24) = 0;
      (*(code *)**(undefined4 **)(iVar2 + 0x10))();
      FUN_004a8610((void *)(param_1 + 0x78),&iStack_4,(int *)**(undefined4 **)(param_1 + 0x7c));
    } while (*(int *)(param_1 + 0x80) != 0);
  }
  return;
}


//// FUNCTION FUN_004a9000 @ 004a9000 ////

void __fastcall FUN_004a9000(int param_1)

{
  FUN_004a8920(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004a9030 @ 004a9030 ////

void __fastcall FUN_004a9030(int param_1)

{
  FUN_004a8960(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004a9060 @ 004a9060 ////

void __fastcall FUN_004a9060(int param_1)

{
  FUN_004a89a0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_004a9090 @ 004a9090 ////

void __thiscall FUN_004a9090(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x29) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_004a89e0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_004a67d0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_004a89e0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


