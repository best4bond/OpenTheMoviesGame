//// FUNCTION FUN_0094a460 @ 0094a460 ////

undefined4 * __thiscall FUN_0094a460(void *this,byte param_1)

{
  FUN_00949f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094a570 @ 0094a570 ////

void __thiscall FUN_0094a570(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
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
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf34b0;
  local_10 = ExceptionList;
  iVar3 = *(int *)((int)this + 4);
  local_3c = *param_3;
  local_38 = param_3[1];
  local_34 = param_3[2];
  local_30 = param_3[3];
  local_2c = param_3[4];
  local_28 = param_3[5];
  local_24 = param_3[6];
  local_20 = param_3[7];
  local_1c = param_3[8];
  local_18 = param_3[9];
  local_14 = &stack0xffffffb8;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*(int *)((int)this + 0xc) - iVar3) / 0x28;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    ExceptionList = &local_10;
    puVar1 = &stack0xffffffb8;
    if (0x6666666U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_0094a2f0();
      uVar7 = extraout_ECX;
      puVar1 = local_14;
    }
    local_14 = puVar1;
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0x28;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x6666666 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0x28;
      }
      if (uVar7 < iVar3 + param_2) {
        iVar3 = FUN_00948030((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x28);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_009492c0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00949700(puVar5,param_2,&local_3c);
      FUN_009492c0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 10);
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x28;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7 * 10;
      *(undefined4 **)((int)this + 8) = puVar4 + (param_2 + iVar3) * 10;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)(((int)puVar4 - (int)param_1) / 0x28) < param_2) {
      FUN_009492c0(param_1,puVar4,param_1 + param_2 * 10);
      local_8 = 2;
      FUN_00949cf0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x28,&local_3c)
      ;
      iVar3 = *(int *)((int)this + 8) + param_2 * 0x28;
      *(int *)((int)this + 8) = iVar3;
      FUN_00948390(param_1,(undefined4 *)(iVar3 + param_2 * -0x28),&local_3c);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_009492c0(puVar4 + param_2 * -10,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00948cf0(param_1,puVar4 + param_2 * -10,puVar4);
    FUN_00948390(param_1,param_1 + param_2 * 10,&local_3c);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0094a860 @ 0094a860 ////

void __thiscall FUN_0094a860(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_0094a360();
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
      _Dst = FUN_00949660((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_009491d0(param_1,iVar5,param_1 + param_2);
      FUN_00949660(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009483e0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_009491d0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00948d60(param_1,(int)pvVar3,iVar5);
    FUN_009483e0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_0094aa40 @ 0094aa40 ////

void __thiscall FUN_0094aa40(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf34c0;
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
      uVar2 = FUN_0094a3d0();
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
      puVar5 = (undefined4 *)FUN_00948e80(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_00949230(puVar5,param_2,&local_20);
      FUN_00948e80(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2 * 2);
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
      FUN_00948e80(param_1,puVar4,param_1 + param_2 * 2);
      local_8 = 2;
      FUN_00949ac0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 3),&local_20);
      iVar3 = *(int *)((int)this + 8) + param_2 * 8;
      *(int *)((int)this + 8) = iVar3;
      FUN_00948420(param_1,(undefined4 *)(iVar3 + param_2 * -8),&local_20);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_00948e80(puVar4 + param_2 * -2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_00948dc0((int)param_1,(int)(puVar4 + param_2 * -2),puVar4);
    FUN_00948420(param_1,param_1 + param_2 * 2,&local_20);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_0094acc0 @ 0094acc0 ////

void __thiscall FUN_0094acc0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)((int)this + 8) - iVar2) / 0x28;
  }
  if (param_1 <= uVar1) {
    if ((iVar2 != 0) && (param_1 < (uint)(((int)*(undefined4 **)((int)this + 8) - iVar2) / 0x28))) {
      FUN_00949af0(this,&param_1,(undefined4 *)(iVar2 + param_1 * 0x28),
                   *(undefined4 **)((int)this + 8));
    }
    return;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 8) - iVar2) / 0x28;
  }
  FUN_0094a570(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008);
  return;
}


//// FUNCTION FUN_0094ad60 @ 0094ad60 ////

void __thiscall FUN_0094ad60(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x28 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x28;
      goto LAB_0094ada5;
    }
  }
  iVar1 = 0;
LAB_0094ada5:
  FUN_0094a570(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x28;
  return;
}


//// FUNCTION FUN_0094add0 @ 0094add0 ////

void __thiscall FUN_0094add0(void *this,uint param_1)

{
  void *_Dst;
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    FUN_0094a860(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if (((iVar2 != 0) &&
      (pvVar3 = *(void **)((int)this + 8), param_1 < (uint)((int)pvVar3 - iVar2 >> 2))) &&
     (_Dst = (void *)(iVar2 + param_1 * 4), _Dst != pvVar3)) {
    pvVar3 = _memmove(_Dst,pvVar3,0);
    *(void **)((int)this + 8) = pvVar3;
  }
  return;
}


//// FUNCTION FUN_0094ae60 @ 0094ae60 ////

void __thiscall FUN_0094ae60(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 3;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 3;
    }
    FUN_0094aa40(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 3))) {
    FUN_00949d50(this,&param_1,(undefined4 *)(iVar2 + param_1 * 8),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_0094af60 @ 0094af60 ////

void __thiscall FUN_0094af60(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x28) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x28))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00949700(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 10;
    return;
  }
  FUN_0094ad60(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0094b030 @ 0094b030 ////

void __thiscall FUN_0094b030(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 3) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 3))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00949230(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 2;
    return;
  }
  FUN_0094aa40(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_0094b0a0 @ 0094b0a0 ////

void FUN_0094b0a0(void)

{
  float *pfVar1;
  undefined4 *puVar2;
  float10 fVar3;
  float10 fVar4;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0046ec60(&DAT_01050620,8);
  local_c = 0;
  do {
    fVar3 = (float10)local_c;
    pfVar1 = (float *)(DAT_01050624 + local_c * 2);
    local_c = local_c + 1;
    fVar4 = (float10)fsin(fVar3 * (float10)0.7853982);
    fVar3 = (float10)fcos(fVar3 * (float10)0.7853982);
    *pfVar1 = (float)fVar4;
    pfVar1[1] = (float)fVar3;
    puVar2 = DAT_01050628;
  } while (local_c < 8);
  local_8 = *DAT_01050624;
  local_4 = DAT_01050624[1];
  if ((uint)((int)DAT_01050628 - (int)DAT_01050624 >> 3) <
      (uint)(DAT_0105062c - (int)DAT_01050624 >> 3)) {
    FUN_0046deb0(DAT_01050628,1,&local_8);
    DAT_01050628 = puVar2 + 2;
    return;
  }
  FUN_0046e9b0(&DAT_01050620,DAT_01050628,1,&local_8);
  return;
}


//// FUNCTION FUN_0094b170 @ 0094b170 ////

void __fastcall FUN_0094b170(int param_1)

{
  void *this;
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [8];
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(local_40);
  pfVar8 = (float *)(**(code **)(*piVar1 + 0x10))(&fStack_50);
  fVar2 = *pfVar8 - *pfVar7;
  fVar5 = pfVar8[1] - pfVar7[1];
  fVar4 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + (pfVar8[2] - pfVar7[2]) * (pfVar8[2] - pfVar7[2]));
  fVar3 = 1.0 / fVar4;
  pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(&fStack_48);
  fStack_34 = *pfVar7;
  fStack_30 = pfVar7[1];
  fStack_2c = pfVar7[2];
  this = (void *)(param_1 + 0x114);
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  FUN_0094af60(this,&fStack_34);
  uVar14 = FUN_00acd42c();
  iVar9 = 0;
  if (0 < (int)uVar14) {
    do {
      iVar9 = iVar9 + 1;
      fVar6 = (float)iVar9;
      pfVar7 = (float *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))(local_40);
      fStack_34 = fVar4 * fVar6 + *pfVar7;
      uStack_18 = 0;
      uStack_14 = 0;
      fStack_30 = fVar3 * fVar2 * 10.0 * fVar6 + pfVar7[1];
      uStack_10 = 0;
      fStack_50 = fVar5 * fVar3 * 10.0 * fVar6 + pfVar7[2];
      fStack_2c = fStack_50;
      fVar11 = FUN_00990e30(4.0,12.0);
      fStack_28 = (float)fVar11;
      fVar11 = FUN_00990e30(0.001,1.0);
      fVar12 = FUN_00990e30(-1.0,1.0);
      fVar13 = FUN_00990e30(-1.0,1.0);
      fStack_4c = (float)fVar13;
      fStack_48 = (float)fVar12;
      fStack_44 = (float)fVar11;
      fStack_24 = fStack_4c;
      fStack_20 = (float)fVar12;
      fStack_1c = (float)fVar11;
      FUN_00412e20(&fStack_24);
      FUN_0094af60(this,&fStack_34);
    } while (iVar9 < (int)uVar14);
  }
  puVar10 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x10))(local_40);
  uStack_38 = *puVar10;
  fStack_34 = (float)puVar10[1];
  fStack_30 = (float)puVar10[2];
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_0094af60(this,&uStack_38);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  FUN_0040f4c0((void *)(param_1 + 0xf8),iVar9 - 1);
  if (*(int *)(param_1 + 0x118) != 0) {
    *(int *)(param_1 + 0xf4) =
         ((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28) * 5 + -5;
    return;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0xfffffffb;
  return;
}


//// FUNCTION FUN_0094b4a0 @ 0094b4a0 ////

void __fastcall FUN_0094b4a0(int param_1)

{
  float *pfVar1;
  void *this;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int local_78;
  int local_74;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [10];
  
  pfVar11 = *(float **)(param_1 + 0x118);
  pfVar1 = (float *)(param_1 + 0x90);
  *pfVar11 = *pfVar1;
  pfVar11[1] = *(float *)(param_1 + 0x94);
  pfVar11[2] = *(float *)(param_1 + 0x98);
  iVar9 = *(int *)(param_1 + 0x11c);
  *(float *)(iVar9 + -0x28) = *(float *)(param_1 + 0x9c);
  *(undefined4 *)(iVar9 + -0x24) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(iVar9 + -0x20) = *(undefined4 *)(param_1 + 0xa4);
  fVar4 = *(float *)(param_1 + 0x9c) - *pfVar1;
  fVar3 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar2 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  fVar5 = 1.0 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = fVar5 * fVar4 * 10.0;
  fVar4 = fVar3 * fVar5 * 10.0;
  fVar5 = fVar2 * fVar5 * 10.0;
  uVar15 = FUN_00acd42c();
  local_74 = (int)uVar15;
  this = (void *)(param_1 + 0x114);
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  iVar9 = iVar9 + -2;
  if (local_74 < iVar9) {
    FUN_00948920(&local_50,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0x28));
    FUN_0094acc0(this,local_74 + 1);
    puVar16 = &local_50;
  }
  else {
    if (local_74 <= iVar9) goto LAB_0094b728;
    FUN_00948920(local_28,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0x28));
    if ((*(int *)(param_1 + 0x118) != 0) &&
       ((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28 != 0)) {
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + -0x28;
    }
    local_74 = local_74 - iVar9;
    if (0 < local_74) {
      do {
        local_50 = 0;
        local_4c = 0;
        local_48 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        fVar12 = FUN_00990e30(4.0,12.0);
        local_44 = (float)fVar12;
        fVar12 = FUN_00990e30(0.001,1.0);
        fVar13 = FUN_00990e30(-1.0,1.0);
        fVar14 = FUN_00990e30(-1.0,1.0);
        local_40 = (float)fVar14;
        local_3c = (float)fVar13;
        local_38 = (float)fVar12;
        FUN_00412e20(&local_40);
        FUN_0094af60(this,&local_50);
        local_74 = local_74 + -1;
      } while (local_74 != 0);
    }
    puVar16 = local_28;
  }
  FUN_0094af60(this,puVar16);
LAB_0094b728:
  iVar9 = 0;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar9 = (*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28;
  }
  local_78 = 1;
  if (3 < iVar9 + -2) {
    local_74 = 3;
    iVar10 = 0x28;
    do {
      fVar7 = (float)local_78;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
      fVar7 = (float)(local_74 + -1);
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + 0x28 + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      fVar8 = (float)local_74;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + 0x50 + iVar10);
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar8 + *pfVar1;
      pfVar11[1] = fVar4 * fVar8 + fVar2;
      pfVar11[2] = fVar5 * fVar8 + fVar3;
      fVar7 = (float)(local_74 + 1);
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10 + 0x78);
      local_78 = local_78 + 4;
      local_74 = local_74 + 4;
      iVar10 = iVar10 + 0xa0;
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
    } while (local_78 < iVar9 + -4);
  }
  if (local_78 < iVar9 + -1) {
    iVar10 = local_78 * 0x28;
    do {
      fVar7 = (float)local_78;
      pfVar11 = (float *)(*(int *)(param_1 + 0x118) + iVar10);
      local_78 = local_78 + 1;
      iVar10 = iVar10 + 0x28;
      fVar2 = *(float *)(param_1 + 0x94);
      fVar3 = *(float *)(param_1 + 0x98);
      *pfVar11 = fVar6 * fVar7 + *pfVar1;
      pfVar11[1] = fVar4 * fVar7 + fVar2;
      pfVar11[2] = fVar5 * fVar7 + fVar3;
    } while (local_78 < iVar9 + -1);
  }
  return;
}


//// FUNCTION CameraPath_GenerateSplineWithShake @ 0094b990 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall CameraPath_GenerateSplineWithShake(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  short sVar10;
  undefined4 *puVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 extraout_ST0;
  ulonglong uVar21;
  float local_21c;
  float local_218;
  float local_214;
  void *local_210;
  int local_20c;
  float *local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  int *local_1d8;
  float local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined4 local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined1 local_18c [4];
  void *local_188;
  float *local_184;
  int local_180;
  undefined1 local_17c [4];
  void *local_178;
  float *local_174;
  int local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined1 local_148 [4];
  void *local_144;
  int local_140;
  undefined4 local_13c;
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
  float local_104;
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
  float local_ac;
  float local_a8;
  float local_a4;
  int local_a0;
  float local_9c;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_64;
  float local_58;
  float local_4c;
  float local_40;
  float local_34;
  float local_30;
  float local_24;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Moderate confidence: generates a camera path between waypoints
                       (this+0x118/+0x11c array) using cubic-ish blending plus sinusoidal
                       shake/wobble (amplitude terms multiplied by sin() at multiple frequencies),
                       computing per-segment arc length and appending each point via the
                       already-named SpawnPointList_Append. Likely a cinematic camera
                       dolly/flythrough path generator. Not fully traced -- name is content-based,
                       not RTTI-verified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf34f1;
  local_c = ExceptionList;
  fVar3 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
  fVar6 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar4 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  local_1b4 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
  if (ABS(local_1b4 - *(float *)(param_1 + 0xe0)) <= 1.0) {
    ExceptionList = &local_c;
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) * 0.9;
  }
  else {
    fVar3 = _DAT_01050630 + *(float *)(param_1 + 0xe8);
    ExceptionList = &local_c;
    *(float *)(param_1 + 0xe8) = fVar3;
    if (0.0 < fVar3) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
  }
  fVar3 = (float)DAT_0105beb8 * _DAT_00e66074 + *(float *)(param_1 + 0x108);
  *(float *)(param_1 + 0x108) = fVar3;
  local_160 = _DAT_01050614 * fVar3;
  local_154 = _DAT_0105061c * fVar3 + *(float *)(param_1 + 0xe8);
  local_150 = _DAT_01050618 * fVar3 + *(float *)(param_1 + 0xe8);
  local_f0 = local_160 + *(float *)(param_1 + 0xe8);
  local_14c = fVar3 * _DAT_00e6608c + *(float *)(param_1 + 0xe8);
  if (*(int *)(param_1 + 0x118) == 0) {
    local_208 = (float *)0x0;
  }
  else {
    local_208 = (float *)((*(int *)(param_1 + 0x11c) - *(int *)(param_1 + 0x118)) / 0x28);
  }
  local_210 = (void *)((int)local_208 >> 1);
  local_218 = 0.0;
  if (0 < (int)local_208) {
    iVar17 = 0;
    local_204 = (float)-(int)local_210;
    local_200 = 1.0 / (float)((int)local_210 + 1);
    local_21c = 0.0;
    local_1d8 = (int *)(1.0 / (1.0 / (float)(int)local_210));
    do {
      local_214 = (float)(int)local_218;
      fVar3 = (float)(int)local_218 * 10.0;
      local_160 = _DAT_01050614 * fVar3;
      local_1c4 = _DAT_0105061c * fVar3 + local_154;
      fVar18 = (float10)fsin((float10)(_DAT_01050618 * fVar3) + (float10)local_150);
      fVar19 = (float10)fsin((float10)local_160 + (float10)local_f0);
      fVar20 = (float10)fsin((float10)local_1c4);
      local_210 = (void *)(float)fVar20;
      local_12c = (float)fVar19;
      local_128 = (float)fVar18;
      local_124 = (float)local_210;
      FUN_00412e20(&local_12c);
      fVar18 = (float10)fsin((float10)local_214 * (float10)_DAT_00e6608c * (float10)10.0 +
                             (float10)local_14c);
      if (-3 < (int)local_21c) {
        fVar19 = ABS((float10)(int)local_21c) * (float10)0.5 + (float10)0.1;
        if ((float10)0.0 <= fVar19) {
          if ((float10)1.0 < fVar19) {
            fVar19 = (float10)1.0;
          }
        }
        else {
          fVar19 = (float10)0.0;
        }
        fVar18 = fVar19 * fVar18;
      }
      local_1d4 = 1.0;
      if (local_218 == (float)((int)local_208 + -2)) {
        iVar15 = *(int *)(param_1 + 0x118);
        fVar3 = *(float *)(iVar15 + 8 + iVar17) - *(float *)(param_1 + 0xa4);
        fVar6 = *(float *)(iVar15 + 4 + iVar17) - *(float *)(param_1 + 0xa0);
        fVar4 = *(float *)(iVar15 + iVar17) - *(float *)(param_1 + 0x9c);
        local_1d4 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4) * 0.1;
      }
      iVar15 = *(int *)(param_1 + 0x118);
      local_cc = local_12c + *(float *)(iVar15 + 0x10 + iVar17);
      local_90 = local_cc * 0.5;
      local_214 = (1.0 - ABS((float)(int)local_204) * local_200) * (float)local_1d8;
      if (1.0 < local_214) {
        local_214 = 1.0;
      }
      local_214 = local_214 * local_214;
      if ((-1 < (int)local_21c) || (local_218 == (float)((int)local_208 + -1))) {
        local_214 = 0.0;
      }
      local_214 = local_214 * 5.0;
      pfVar13 = (float *)(iVar15 + 0x1c + iVar17);
      local_1f0 = 0.0;
      local_1ec = 0.0;
      local_1e8 = 0.0;
      local_20c = 0;
      fVar18 = (float10)local_1d4 * (float10)*(float *)(iVar15 + 0xc + iVar17) * fVar18;
      local_210 = (void *)(float)((float10)((local_124 + *(float *)(iVar15 + 0x18 + iVar17)) * 0.5)
                                 * fVar18);
      local_1c4 = (float)((float10)((local_128 + *(float *)(iVar15 + 0x14 + iVar17)) * 0.5) * fVar18
                         );
      local_84 = (float)((float10)local_90 * fVar18);
      local_10c = (float)local_210 + *(float *)(iVar15 + 8 + iVar17);
      local_110 = local_1c4 + *(float *)(iVar15 + 4 + iVar17);
      local_114 = local_84 + *(float *)(iVar15 + iVar17);
      *pfVar13 = local_114;
      pfVar13[1] = local_110;
      pfVar13[2] = local_10c;
      pfVar13 = (float *)(*(int *)(param_1 + 0x118) + 0x24 + iVar17);
      *pfVar13 = local_214 * local_1d4 + *pfVar13;
      pfVar13 = (float *)(*(int *)(param_1 + 0x118) + 0x1c + iVar17);
      local_16c = *pfVar13;
      local_168 = pfVar13[1];
      local_164 = pfVar13[2];
      pvVar9 = FUN_00459e40(DAT_00f88720,&local_16c,50.0);
      if (*(int *)((int)pvVar9 + 4) == 0) {
        local_214 = 0.0;
      }
      else {
        local_214 = (float)(*(int *)((int)pvVar9 + 8) - *(int *)((int)pvVar9 + 4) >> 2);
      }
      iVar15 = 0;
      if (0 < (int)local_214) {
        do {
          (**(code **)(**(int **)(*(int *)((int)pvVar9 + 4) + iVar15 * 4) + 0x34))(&local_198);
          fVar3 = *(float *)(param_1 + 0xa4) - local_190;
          fVar6 = *(float *)(param_1 + 0xa0) - local_194;
          fVar4 = *(float *)(param_1 + 0x9c) - local_198;
          if (900.0 < fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6) {
            fStack_1a8 = local_164 - local_190;
            fStack_1ac = local_168 - local_194;
            local_1b0 = local_16c - local_198;
            local_138 = local_1b0;
            local_134 = fStack_1ac;
            local_130 = fStack_1a8;
            if (1e-30 < ABS(fStack_1a8 + fStack_1ac + local_1b0)) {
              fVar3 = *(float *)(param_1 + 0x90) - local_198;
              fVar6 = *(float *)(param_1 + 0x94) - local_194;
              fVar4 = *(float *)(param_1 + 0x98) - local_190;
              fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
              if (20.0 < fVar3) {
                fVar3 = 20.0;
              }
              fVar4 = SQRT(local_1b0 * local_1b0 + fStack_1ac * fStack_1ac + fStack_1a8 * fStack_1a8
                          );
              if (fVar4 < fVar3) {
                fVar4 = 1.0 / fVar4;
                local_20c = local_20c + 1;
                local_1e4 = local_1b0 * fVar4 * fVar3;
                local_1e0 = fVar4 * fStack_1ac * fVar3 - fStack_1ac;
                local_1dc = fVar3 * fVar4 * fStack_1a8 - fStack_1a8;
                local_1f0 = (local_1e4 - local_1b0) + local_1f0;
                local_1ec = local_1e0 + local_1ec;
                local_1e8 = local_1dc + local_1e8;
              }
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_214);
      }
      local_210 = FUN_0045a060(DAT_00f88720,&local_16c,50.0);
      if (*(int *)((int)local_210 + 4) == 0) {
        local_214 = 0.0;
      }
      else {
        local_214 = (float)(*(int *)((int)local_210 + 8) - *(int *)((int)local_210 + 4) >> 2);
      }
      iVar15 = 0;
      if (0 < (int)local_214) {
        do {
          (**(code **)(**(int **)(*(int *)((int)local_210 + 4) + iVar15 * 4) + 0x34))(&local_1a4);
          fVar3 = *(float *)(param_1 + 0xa4) - local_19c;
          fVar4 = *(float *)(param_1 + 0xa0) - local_1a0;
          fVar6 = *(float *)(param_1 + 0x9c) - local_1a4;
          if (900.0 < fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4) {
            local_1f4 = local_164 - local_19c;
            local_1f8 = local_168 - local_1a0;
            local_1fc = local_16c - local_1a4;
            local_e4 = local_1fc;
            local_e0 = local_1f8;
            local_dc = local_1f4;
            if (1e-30 < ABS(local_1f4 + local_1f8 + local_1fc)) {
              fVar3 = *(float *)(param_1 + 0x90) - local_1a4;
              fVar6 = *(float *)(param_1 + 0x94) - local_1a0;
              fVar4 = *(float *)(param_1 + 0x98) - local_19c;
              fVar3 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar4 * fVar4);
              if (20.0 < fVar3) {
                fVar3 = 20.0;
              }
              fVar4 = SQRT(local_1fc * local_1fc + local_1f8 * local_1f8 + local_1f4 * local_1f4);
              if (fVar4 < fVar3) {
                fVar4 = 1.0 / fVar4;
                local_20c = local_20c + 1;
                local_1d0 = local_1fc * fVar4 * fVar3;
                local_1cc = fVar4 * local_1f8 * fVar3 - local_1f8;
                local_1c8 = fVar3 * fVar4 * local_1f4 - local_1f4;
                local_1f0 = (local_1d0 - local_1fc) + local_1f0;
                local_1ec = local_1cc + local_1ec;
                local_1e8 = local_1c8 + local_1e8;
              }
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)local_214);
      }
      if (0 < local_20c) {
        iVar15 = *(int *)(param_1 + 0x118);
        fVar3 = 1.0 / (float)local_20c;
        local_1ec = fVar3 * local_1ec;
        local_1e8 = fVar3 * local_1e8;
        *(float *)(iVar15 + 0x1c + iVar17) = local_1f0 * fVar3 + *(float *)(iVar15 + 0x1c + iVar17);
        *(float *)(iVar15 + 0x20 + iVar17) = local_1ec + *(float *)(iVar15 + 0x20 + iVar17);
        pfVar13 = (float *)(iVar15 + 0x24 + iVar17);
        *pfVar13 = local_1e8 + *pfVar13;
      }
      local_218 = (float)((int)local_218 + 1);
      local_21c = (float)((int)local_21c + -1);
      local_204 = (float)((int)local_204 + 1);
      iVar17 = iVar17 + 0x28;
    } while ((int)local_218 < (int)local_208);
  }
  pfVar13 = local_208;
  FUN_0040f4c0((void *)(param_1 + 0xf8),(int)local_208 - 1);
  iVar17 = 0;
  local_1d4 = (float)((int)pfVar13 + -1);
  if (0 < (int)local_1d4) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xfc) + iVar17 * 4) = 5;
      iVar17 = iVar17 + 1;
    } while (iVar17 < (int)local_1d4);
  }
  pvVar9 = (void *)0x0;
  iVar17 = 0;
  local_21c = 0.0;
  local_144 = (void *)0x0;
  local_140 = 0;
  local_13c = 0;
  pfVar13 = (float *)0x0;
  local_188 = (void *)0x0;
  local_184 = (float *)0x0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_174 = (float *)0x0;
  local_170 = 0;
  local_4 = 2;
  local_20c = 0;
  if (0 < (int)local_1d4) {
    iVar17 = 0;
    do {
      iVar15 = local_20c;
      local_1d8 = (int *)(*(int *)(param_1 + 0xfc) + local_20c * 4);
      local_200 = 1.0 / (float)*(int *)(*(int *)(param_1 + 0xfc) + local_20c * 4);
      pfVar13 = local_184;
      if (local_20c == (int)local_1d4 + -1) {
        iVar2 = *(int *)(param_1 + 0x118) + local_20c * 0x28;
        local_1a4 = *(float *)(iVar2 + 0x1c);
        local_1a0 = *(float *)(iVar2 + 0x20);
        local_19c = *(float *)(iVar2 + 0x24);
        local_e4 = *(float *)(iVar2 + 0x44);
        local_e0 = *(float *)(iVar2 + 0x48);
        local_dc = *(float *)(iVar2 + 0x4c);
        local_204 = 0.0;
        if (0 < *local_1d8) {
          local_114 = local_e4 - local_1a4;
          local_110 = local_e0 - local_1a0;
          local_10c = local_dc - local_19c;
          do {
            local_218 = 0.0;
            fVar3 = (float)(int)local_204 * local_200;
            local_80 = fVar3 * local_110;
            local_7c = fVar3 * local_10c;
            local_138 = local_114 * fVar3 + local_1a4;
            local_134 = local_80 + local_1a0;
            local_130 = local_7c + local_19c;
            if ((pvVar9 != (void *)0x0) &&
               (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
              local_16c = *(float *)(iVar17 + -0xc);
              local_168 = *(float *)(iVar17 + -8);
              local_164 = *(float *)(iVar17 + -4);
              local_218 = SQRT((local_134 - local_168) * (local_134 - local_168) +
                               (local_138 - local_16c) * (local_138 - local_16c) +
                               (local_130 - local_164) * (local_130 - local_164));
            }
            local_21c = local_218 + local_21c;
            if ((local_188 == (void *)0x0) ||
               ((uint)(local_180 - (int)local_188 >> 2) <=
                (uint)((int)pfVar13 - (int)local_188 >> 2))) {
              FUN_00481520(local_18c,pfVar13,1,&local_218);
            }
            else {
              *pfVar13 = local_218;
              local_184 = pfVar13 + 1;
            }
            pfVar13 = local_184;
            if ((local_178 == (void *)0x0) ||
               ((uint)(local_170 - (int)local_178 >> 2) <=
                (uint)((int)local_174 - (int)local_178 >> 2))) {
              FUN_00481520(local_17c,local_174,1,&local_21c);
            }
            else {
              *local_174 = local_21c;
              local_174 = local_174 + 1;
            }
            SpawnPointList_Append(local_148,&local_138);
            local_204 = (float)((int)local_204 + 1);
            pvVar9 = local_144;
            iVar17 = local_140;
          } while ((int)local_204 < *(int *)(*(int *)(param_1 + 0xfc) + iVar15 * 4));
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x118);
        if (local_20c == 0) {
          local_10 = *(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x24);
          local_1fc = *(float *)(iVar2 + 0x1c) -
                      (*(float *)(iVar2 + 0x44) - *(float *)(iVar2 + 0x1c));
          local_1f8 = *(float *)(iVar2 + 0x20) -
                      (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x20));
          local_1f4 = *(float *)(iVar2 + 0x24) - local_10;
          local_1d0 = local_1fc;
          local_1cc = local_1f8;
          local_1c8 = local_1f4;
        }
        else {
          iVar1 = iVar2 + -0x28 + local_20c * 0x28;
          local_1fc = *(float *)(iVar1 + 0x1c);
          local_1f8 = *(float *)(iVar1 + 0x20);
          local_1f4 = *(float *)(iVar1 + 0x24);
        }
        local_b8 = local_1fc * -0.5;
        iVar1 = iVar2 + local_20c * 0x28;
        local_1e4 = *(float *)(iVar1 + 0x1c);
        local_b4 = local_1f8 * -0.5;
        local_1e0 = *(float *)(iVar1 + 0x20);
        local_1dc = *(float *)(iVar1 + 0x24);
        local_1f0 = *(float *)(iVar1 + 0x44);
        local_1ec = *(float *)(iVar1 + 0x48);
        local_1e8 = *(float *)(iVar1 + 0x4c);
        iVar2 = iVar2 + (local_20c * 5 + 10) * 8;
        local_ac = *(float *)(iVar2 + 0x1c);
        local_198 = local_ac * 0.5;
        local_a8 = *(float *)(iVar2 + 0x20);
        local_a4 = *(float *)(iVar2 + 0x24);
        local_194 = local_a8 * 0.5;
        local_214 = 0.0;
        local_190 = local_a4 * 0.5;
        if (0 < *local_1d8) {
          local_34 = local_1e8 * 0.5;
          local_d8 = local_1f0 * 0.5 + local_b8;
          local_d4 = local_1ec * 0.5 + local_b4;
          local_d0 = local_34 + local_1f4 * -0.5;
          local_40 = local_1e8 + local_1e8;
          local_58 = local_1dc * 2.5;
          local_90 = local_1fc - local_1e4 * 2.5;
          local_88 = local_1f4 - local_58;
          local_30 = local_90 + local_1f0 + local_1f0;
          local_108 = local_30 - local_198;
          local_104 = ((local_1f8 - local_1e0 * 2.5) + local_1ec + local_1ec) - local_194;
          local_100 = (local_88 + local_40) - local_190;
          local_4c = local_1e8 * 1.5;
          local_64 = local_1dc * 1.5;
          local_cc = local_1e4 * 1.5 + local_b8;
          local_c4 = local_64 + local_1f4 * -0.5;
          local_24 = local_cc - local_1f0 * 1.5;
          local_fc = local_24 + local_198;
          local_f8 = ((local_1e0 * 1.5 + local_b4) - local_1ec * 1.5) + local_194;
          local_f4 = (local_c4 - local_4c) + local_190;
          do {
            local_208 = (float *)0x0;
            local_118 = (float)(int)local_214 * local_200;
            fVar3 = local_118 * local_118;
            local_204 = fVar3 * local_118;
            local_120 = local_118 * local_d8;
            local_11c = local_d4 * local_118;
            local_118 = local_d0 * local_118;
            local_f0 = local_108 * fVar3;
            local_ec = local_104 * fVar3;
            local_70 = local_f4 * local_204;
            local_160 = local_204 * local_fc + local_f0;
            local_158 = local_70 + local_100 * fVar3;
            local_9c = local_160 + local_120;
            local_12c = local_9c + local_1e4;
            local_128 = local_f8 * local_204 + local_ec + local_11c + local_1e0;
            local_124 = local_158 + local_118 + local_1dc;
            if ((pvVar9 != (void *)0x0) &&
               (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
              local_1c0 = *(float *)(iVar17 + -0xc);
              local_1bc = *(float *)(iVar17 + -8);
              local_1b8 = *(float *)(iVar17 + -4);
              local_208 = (float *)SQRT((local_128 - local_1bc) * (local_128 - local_1bc) +
                                        (local_12c - local_1c0) * (local_12c - local_1c0) +
                                        (local_124 - local_1b8) * (local_124 - local_1b8));
            }
            local_21c = (float)local_208 + local_21c;
            if ((local_188 == (void *)0x0) ||
               ((uint)(local_180 - (int)local_188 >> 2) <=
                (uint)((int)pfVar13 - (int)local_188 >> 2))) {
              FUN_00481520(local_18c,pfVar13,1,&local_208);
            }
            else {
              *pfVar13 = (float)local_208;
              local_184 = pfVar13 + 1;
            }
            pfVar13 = local_184;
            if ((local_178 == (void *)0x0) ||
               ((uint)(local_170 - (int)local_178 >> 2) <=
                (uint)((int)local_174 - (int)local_178 >> 2))) {
              FUN_00481520(local_17c,local_174,1,&local_21c);
            }
            else {
              *local_174 = local_21c;
              local_174 = local_174 + 1;
            }
            SpawnPointList_Append(local_148,&local_12c);
            local_214 = (float)((int)local_214 + 1);
            pvVar9 = local_144;
            iVar17 = local_140;
          } while ((int)local_214 < *(int *)(*(int *)(param_1 + 0xfc) + iVar15 * 4));
        }
      }
      local_20c = iVar15 + 1;
    } while (local_20c < (int)local_1d4);
  }
  local_218 = 0.0;
  if ((pvVar9 != (void *)0x0) &&
     (local_1b0 = (float)((iVar17 - (int)pvVar9) / 0xc), local_1b0 != 0.0)) {
    local_1b8 = *(float *)(iVar17 + -4);
    local_1c0 = *(float *)(iVar17 + -0xc);
    local_1bc = *(float *)(iVar17 + -8);
    iVar17 = *(int *)(param_1 + 0x11c);
    fVar3 = *(float *)(iVar17 + -0xc) - local_1c0;
    fVar4 = *(float *)(iVar17 + -8) - local_1bc;
    fVar6 = *(float *)(iVar17 + -4) - local_1b8;
    local_218 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6);
  }
  local_21c = local_218 + local_21c;
  if ((local_188 == (void *)0x0) ||
     ((uint)(local_180 - (int)local_188 >> 2) <= (uint)((int)pfVar13 - (int)local_188 >> 2))) {
    FUN_00481520(local_18c,pfVar13,1,&local_218);
  }
  else {
    *pfVar13 = local_218;
    local_184 = pfVar13 + 1;
  }
  if ((local_178 == (void *)0x0) ||
     ((uint)(local_170 - (int)local_178 >> 2) <= (uint)((int)local_174 - (int)local_178 >> 2))) {
    FUN_00481520(local_17c,local_174,1,&local_21c);
  }
  else {
    *local_174 = local_21c;
    local_174 = local_174 + 1;
  }
  SpawnPointList_Append(local_148,(undefined4 *)(*(int *)(param_1 + 0x11c) + -0xc));
  if (local_144 == (void *)0x0) {
    iVar17 = 0;
  }
  else {
    iVar17 = (local_140 - (int)local_144) / 0xc;
  }
  local_20c = iVar17;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    iVar15 = 0;
    if (-1 < *(int *)(param_1 + 0x144)) {
      do {
        iVar2 = iVar15 * 8;
        iVar1 = iVar15 * 8;
        iVar15 = iVar15 + 1;
        *(float *)(*(int *)(param_1 + 0x150) + iVar1) =
             *(float *)(*(int *)(param_1 + 0x150) + iVar2) + *(float *)(param_1 + 0x148);
      } while (iVar15 <= *(int *)(param_1 + 0x144));
    }
    local_200 = 0.0;
    if (-1 < *(int *)(param_1 + 0x144)) {
      do {
        local_1d8 = (int *)((int)local_200 * 8);
        puVar11 = (undefined4 *)((int)local_1d8 + *(int *)(param_1 + 0x150));
        if (*(float *)((int)local_1d8 + *(int *)(param_1 + 0x150)) <= local_21c) {
          local_200 = (float)((int)local_200 + 1);
        }
        else {
          pvVar9 = (void *)puVar11[1];
          uVar5 = *puVar11;
          FUN_009afab0(pvVar9,0);
          iVar17 = *(int *)(param_1 + 0x150);
          iVar15 = *(int *)(param_1 + 0x144);
          *(undefined4 *)((int)local_1d8 + iVar17) = *(undefined4 *)(iVar17 + iVar15 * 8);
          *(undefined4 *)((int)local_1d8 + iVar17 + 4) = *(undefined4 *)(iVar17 + iVar15 * 8 + 4);
          puVar11 = (undefined4 *)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x144) * 8);
          *puVar11 = uVar5;
          puVar11[1] = pvVar9;
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
          iVar17 = local_20c;
        }
      } while ((int)local_200 <= *(int *)(param_1 + 0x144));
    }
    pfVar13 = *(float **)(param_1 + 0x150);
    FUN_00949e40(pfVar13,pfVar13 + *(int *)(param_1 + 0x144) * 2 + 2,
                 (int)(pfVar13 + *(int *)(param_1 + 0x144) * 2 + 2) - (int)pfVar13 >> 3);
    iVar15 = *(int *)(param_1 + 0x144);
    local_200 = (float)(iVar17 + -2);
    if (-1 < (int)local_200) {
      pfVar13 = (float *)((int)local_144 + (int)local_200 * 0xc + 0x14);
      do {
        if (iVar15 < 0) break;
        local_218 = *(float *)((int)local_178 + (int)local_200 * 4);
        local_1d8 = (int *)((int)local_200 * 4);
        iVar2 = iVar15 * 8;
        fVar3 = *(float *)(*(int *)(param_1 + 0x150) + iVar2);
        while (local_218 <= fVar3) {
          iVar17 = *(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4);
          fVar6 = (*(float *)(*(int *)(param_1 + 0x150) + iVar2) - local_218) /
                  (*(float *)((int)(local_1d8 + 1) + (int)local_178) - local_218);
          fVar7 = 1.0 - fVar6;
          local_160 = fVar7 * pfVar13[-5];
          local_15c = fVar7 * pfVar13[-4];
          fVar3 = pfVar13[-3];
          fVar4 = pfVar13[-1];
          local_94 = fVar6 * *pfVar13;
          local_1c0 = fVar6 * pfVar13[-2] + local_160;
          *(float *)(iVar17 + 0x10) = local_1c0;
          local_1bc = fVar6 * fVar4 + local_15c;
          *(float *)(iVar17 + 0x14) = local_1bc;
          local_1b8 = local_94 + fVar7 * fVar3;
          *(float *)(iVar17 + 0x18) = local_1b8;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4) + 0x20) =
               *(undefined4 *)(param_1 + 0xac);
          fVar3 = *(float *)(param_1 + 0xb0);
          if (0.0 <= fVar3) {
            if (1.0 < fVar3) {
              fVar3 = 1.0;
            }
          }
          else {
            fVar3 = 0.0;
          }
          iVar15 = iVar15 + -1;
          *(float *)(*(int *)(*(int *)(param_1 + 0x150) + iVar2 + 4) + 0x1c) = fVar3 * 1.5;
          iVar17 = local_20c;
          if (iVar15 < 0) break;
          iVar2 = iVar15 * 8;
          fVar3 = *(float *)(*(int *)(param_1 + 0x150) + iVar2);
        }
        local_200 = (float)((int)local_200 + -1);
        pfVar13 = pfVar13 + -3;
      } while (-1 < (int)local_200);
    }
  }
  local_1b0 = (float)(iVar17 * 9 - *(int *)((int)*(void **)(param_1 + 0x110) + 0x18));
  FUN_009e6720(*(void **)(param_1 + 0x110),iVar17 * 9,iVar17 * 0x10 + -0x10);
  uVar21 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  local_c0 = (float)uVar21;
  uVar21 = FUN_00acd42c();
  iVar15 = (int)uVar21;
  if (iVar17 + 10 < (int)uVar21) {
    iVar15 = iVar17 + 10;
  }
  local_200 = local_21c * 0.05;
  local_14c = local_21c - local_200;
  local_210 = (void *)(local_21c * 0.1);
  local_154 = local_21c - (float)local_210;
  fVar3 = local_1b4 - *(float *)(param_1 + 0xe0);
  if (fVar3 <= 1.0) {
    if (-1.0 <= fVar3) {
      *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) * 0.9;
    }
    else {
      fVar3 = *(float *)(param_1 + 0xe4) + 0.3;
      *(float *)(param_1 + 0xe4) = fVar3;
      if (0.0 < fVar3) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0xe4) - 0.3;
    *(float *)(param_1 + 0xe4) = fVar3;
    if (fVar3 < -0.45) {
      *(undefined4 *)(param_1 + 0xe4) = 0xbee66666;
    }
  }
  local_204 = 1.0;
  if ((*(byte *)(param_1 + 0xa8) & 1) == 0) {
    local_1d8 = *(int **)(param_1 + 0x128);
    if ((int)local_1d8 < 1) goto LAB_0094d22e;
    fVar18 = (float10)(int)local_1d8 * (float10)0.001;
  }
  else {
    fVar18 = (extraout_ST0 - (float10)*(float *)(param_1 + 0xc0)) /
             (float10)*(float *)(param_1 + 0xbc);
  }
  fVar18 = (float10)1.0 - fVar18;
  if ((float10)0.0 <= fVar18) {
    if ((float10)1.0 < fVar18) {
      fVar18 = (float10)1.0;
    }
  }
  else {
    fVar18 = (float10)0.0;
  }
  local_204 = (float)fVar18;
LAB_0094d22e:
  pfVar13 = *(float **)(*(int *)(param_1 + 0x110) + 0x28);
  local_21c = 0.0;
  local_218 = 0.0;
  local_1c4 = local_200;
  local_150 = (float)local_210;
  if (0 < iVar17) {
    local_208 = (float *)((int)local_144 + 0x14);
    local_1d8 = (int *)(iVar15 + -10);
    local_a0 = 10 - iVar15;
    do {
      fVar3 = local_218;
      local_21c = local_21c + *(float *)((int)local_188 + (int)local_218 * 4);
      if ((int)local_1d8 <= (int)local_218) {
        local_1b4 = (float)(local_a0 + (int)local_218);
      }
      uVar21 = FUN_00acd42c();
      local_1b4 = (float)uVar21;
      iVar17 = *(int *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 0xd4) * 4);
      if ((iVar17 == 0) || ((*(byte *)(iVar17 + 0x54) & 8) == 0)) {
        local_1b4 = 0.0;
      }
      local_1fc = 0.0;
      local_1f8 = 0.0;
      local_1f4 = 0.0;
      if ((int)fVar3 < local_20c + -1) {
        local_1fc = local_208[-2] - local_208[-5];
        local_1f8 = local_208[-1] - local_208[-4];
        local_1f4 = *local_208 - local_208[-3];
        local_1c0 = local_1fc;
        local_1bc = local_1f8;
        local_1b8 = local_1f4;
      }
      if (0 < (int)fVar3) {
        local_94 = local_208[-3] - local_208[-6];
        local_1fc = (local_208[-5] - local_208[-8]) + local_1fc;
        local_1f8 = (local_208[-4] - local_208[-7]) + local_1f8;
        local_1f4 = local_94 + local_1f4;
      }
      FUN_00412e20(&local_1fc);
      FUN_00948980(&local_d8,&local_1fc);
      FUN_00412fd0(&local_160,&local_d8,&local_1fc);
      local_214 = 0.0;
      local_1d4 = 0.0;
      if (local_21c < local_150 == (local_21c == local_150)) {
        if (local_154 <= local_21c) {
          local_214 = (local_21c - local_154) / (float)local_210;
          if (0.0 <= local_214) {
            if (1.0 < local_214) {
              local_214 = 1.0;
            }
          }
          else {
            local_214 = 0.0;
          }
          local_214 = local_214 * local_214;
          if (0.0 <= local_214) {
            if (1.0 < local_214) {
              local_214 = 1.0;
            }
          }
          else {
            local_214 = 0.0;
          }
          local_1d4 = local_214 * *(float *)(param_1 + 0xf0);
        }
      }
      else {
        local_214 = 1.0 - local_21c / local_150;
        if (0.0 <= local_214) {
          if (1.0 < local_214) {
            local_214 = 1.0;
          }
        }
        else {
          local_214 = 0.0;
        }
        local_214 = local_214 * local_214;
        if (0.0 <= local_214) {
          if (1.0 < local_214) {
            local_214 = 1.0;
          }
          local_1d4 = local_214 * *(float *)(param_1 + 0xec);
        }
        else {
          local_214 = 0.0;
          local_1d4 = *(float *)(param_1 + 0xec) * 0.0;
        }
      }
      local_fc = local_208[-5];
      local_f8 = local_208[-4];
      local_f4 = local_208[-3];
      local_bc = (1.0 - local_214) * *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xe4);
      local_214 = 0.0;
      local_c0 = local_21c * 0.5;
      pfVar12 = pfVar13 + 4;
      do {
        pfVar14 = pfVar13;
        fVar4 = local_214;
        local_1e0 = *(float *)(DAT_01050624 + 4 + (int)local_214 * 8);
        local_1e4 = *(float *)(DAT_01050624 + (int)local_214 * 8);
        local_70 = local_d0 * local_1e0;
        local_ec = local_15c * local_1e4;
        local_e8 = local_158 * local_1e4;
        local_120 = local_160 * local_1e4 + local_d8 * local_1e0;
        local_11c = local_ec + local_d4 * local_1e0;
        local_118 = local_e8 + local_70;
        pfVar13 = (float *)FUN_0040a530(&local_1d0,(int)local_1b4,(uint)*(byte *)(param_1 + 0x126),
                                        (uint)*(byte *)(param_1 + 0x125),
                                        (uint)*(byte *)(param_1 + 0x124));
        pfVar12[-1] = *pfVar13;
        fVar3 = local_bc + local_1d4 + *(float *)(param_1 + 0xb0);
        local_c8 = local_11c * fVar3;
        local_c4 = local_118 * fVar3;
        local_108 = local_fc + local_120 * fVar3;
        *pfVar14 = local_108;
        local_104 = local_f8 + local_c8;
        pfVar14[1] = local_104;
        local_100 = local_f4 + local_c4;
        pfVar14[2] = local_100;
        local_1f0 = local_c0 - *(float *)(param_1 + 0xc4);
        local_1ec = (float)(int)local_214 * 0.125 * 4.0 + *(float *)(param_1 + 0xcc);
        *pfVar12 = local_1f0;
        local_214 = (float)((int)fVar4 + 1);
        pfVar12[1] = local_1ec;
        pfVar13 = pfVar14 + 6;
        pfVar12 = pfVar12 + 6;
      } while ((int)local_214 < 8);
      pfVar14[6] = pfVar14[-0x2a];
      pfVar14[7] = pfVar14[-0x29];
      pfVar14[8] = pfVar14[-0x28];
      pfVar14[9] = pfVar14[-0x27];
      pfVar14[10] = pfVar14[-0x26];
      pfVar14[0xb] = pfVar14[-0x25];
      pfVar13 = pfVar14 + 0xc;
      pfVar14[0xb] = *(float *)(param_1 + 0xcc) + 4.0;
      local_218 = (float)((int)local_218 + 1);
      local_208 = local_208 + 3;
    } while ((int)local_218 < local_20c);
  }
  if (0 < (int)local_1b0) {
    pfVar13 = *(float **)(*(int *)(param_1 + 0x110) + 0x2c);
    if (0 < local_20c + -1) {
      sVar16 = 9;
      local_210 = (void *)(local_20c + -1);
      do {
        iVar17 = 0;
        pfVar12 = pfVar13;
        sVar10 = sVar16;
        do {
          sVar8 = (short)iVar17;
          local_1d0 = (float)CONCAT22(sVar16 + -9 + sVar8,sVar10 + -8);
          *pfVar12 = local_1d0;
          *(short *)(pfVar12 + 1) = sVar10;
          local_1b0 = (float)CONCAT22(sVar10,sVar10 + -8);
          pfVar13 = pfVar12 + 3;
          iVar17 = iVar17 + 1;
          *(float *)((int)pfVar12 + 6) = local_1b0;
          sVar10 = sVar10 + 1;
          *(short *)((int)pfVar12 + 10) = sVar16 + 1 + sVar8;
          pfVar12 = pfVar13;
        } while (iVar17 < 8);
        sVar16 = sVar16 + 9;
        local_210 = (void *)((int)local_210 + -1);
      } while (local_210 != (void *)0x0);
    }
  }
  if (local_178 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_178);
  }
  if (local_188 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_188);
  }
  if (local_144 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_144);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094d8f0 @ 0094d8f0 ////

void __fastcall FUN_0094d8f0(int param_1)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf350b;
  local_c = ExceptionList;
  if (0 < DAT_0105be08) {
    ExceptionList = &local_c;
    FUN_0094ae60((void *)(param_1 + 0x14c),0x14);
    iVar2 = 0;
    do {
      this = operator_new(0x48);
      local_4 = 0;
      if (this == (void *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_009afba0(this,DAT_00e6607c,DAT_00e66078,0,0,0,0x41200000);
      }
      *(undefined4 **)(*(int *)(param_1 + 0x150) + iVar2 + 4) = puVar1;
      local_4 = 0xffffffff;
      FUN_009afab0(*(void **)(*(int *)(param_1 + 0x150) + 4 + iVar2),0);
      iVar2 = iVar2 + 8;
    } while (iVar2 < 0xa0);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094d9c0 @ 0094d9c0 ////

void __fastcall FUN_0094d9c0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6f36c;
  return;
}


//// FUNCTION GuidingStreamEffect_Constructor @ 0094da20 ////

undefined4 * __thiscall GuidingStreamEffect_Constructor(void *this,int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar8;
  ulonglong uVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  char *pcVar13;
  byte abStack_3c [4];
  undefined4 uStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  uint auStack_28 [5];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00cf35dd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d6f344;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar5 = *(undefined4 **)((int)this + 0x88);
    if (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)();
      }
    }
  }
  *(int *)((int)this + 0x88) = param_1;
  local_4._0_1_ = 2;
  *(undefined4 *)((int)this + 0x8c) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
    puVar5 = *(undefined4 **)((int)this + 0x8c);
    if (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)();
      }
    }
  }
  *(int *)((int)this + 0x8c) = param_2;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffffc | 4;
  *(undefined4 *)((int)this + 0xac) = 0x3f800000;
  *(undefined4 *)((int)this + 0xb0) = 0x3f000000;
  *(undefined4 *)((int)this + 0xb4) = 0x447a0000;
  *(undefined4 *)((int)this + 0xbc) = 0x447a0000;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0x3ac49ba6;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0x3a03126f;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = DAT_00e66080;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0xbe800000;
  *(undefined4 *)((int)this + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = DAT_00e660bc;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x140) = DAT_00e66084;
  *(undefined4 *)((int)this + 0x144) = 0xffffffff;
  *(undefined4 *)((int)this + 0x148) = DAT_00e66088;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x80) = this;
  FUN_00acdb9e(0xe66130);
  iVar3 = FUN_0097dda0();
  *(int *)((int)this + 0x84) = iVar3;
  if (s___AV__InList_VCGuidingStream_TM__00e66108[0x27] != '\0') {
    iVar3 = 0x78;
    pcVar13 = "Link";
    pcVar4 = (char *)FUN_00acdb9e(0xe66130);
    FUN_0097df60(pcVar4,pcVar13,iVar3);
    s___AV__InList_VCGuidingStream_TM__00e66108[0x27] = '\0';
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_wiggle_speed_factor",0x16);
  uStack_30 = 0x16;
  *(char *)((int)puStack_34 + 0x16) = '\0';
  local_4._0_1_ = 8;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_animation_frame_ms",0x15);
  uStack_30 = 0x15;
  *(char *)((int)puStack_34 + 0x15) = '\0';
  local_4._0_1_ = 9;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x20;
  puStack_34 = _malloc(0x20);
  _strncpy((char *)puStack_34,"gs_particle_interval_ms",0x17);
  uStack_30 = 0x17;
  *(char *)((int)puStack_34 + 0x17) = '\0';
  local_4._0_1_ = 10;
  CVarSystem_Register_STUBBED();
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puStack_34 = auStack_28;
  auStack_28[0] = auStack_28[0] & 0xffffff00;
  uStack_30 = 0;
  uStack_2c = 0x14;
  _strncpy((char *)puStack_34,"gs_particle_speed",0x11);
  uStack_30 = 0x11;
  *(char *)((int)puStack_34 + 0x11) = '\0';
  local_4._0_1_ = 0xb;
  CVarSystem_Register_STUBBED();
  local_4 = (undefined4 *)CONCAT31(local_4._1_3_,7);
  if (0x14 < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_34);
  }
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x88) + 0x10))();
  *(undefined4 *)((int)this + 0x90) = *puVar5;
  *(undefined4 *)((int)this + 0x94) = puVar5[1];
  *(undefined4 *)((int)this + 0x98) = puVar5[2];
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x8c) + 0x10))();
  *(undefined4 *)((int)this + 0x9c) = *puVar5;
  *(undefined4 *)((int)this + 0xa0) = puVar5[1];
  *(undefined4 *)((int)this + 0xa4) = puVar5[2];
  (**(code **)(**(int **)((int)this + 0x88) + 0x18))();
  (**(code **)(**(int **)((int)this + 0x8c) + 0x18))();
  uVar9 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  local_4 = (undefined4 *)(float)(int)uVar9;
  if ((int)uVar9 < 0) {
    local_4 = (undefined4 *)((float)local_4 + 4.2949673e+09);
  }
  *(undefined4 **)((int)this + 0xb8) = local_4;
  *(undefined4 **)((int)this + 0xd8) = local_4;
  fVar8 = FUN_00990e30(0.0,*(float *)((int)this + 0x140));
  *(float *)((int)this + 0x13c) = (float)((float10)(float)local_4 - fVar8);
  puVar5 = operator_new(0x1c);
  pvStack_c._0_1_ = 0xc;
  local_4 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    FUN_00999750(puVar5);
    *puVar5 = &PTR_FUN_00d6f328;
    puVar5[6] = this;
  }
  pvStack_c._0_1_ = 7;
  *(undefined4 **)((int)this + 0x10c) = puVar5;
  puVar5 = FUN_00452010();
  *(undefined4 **)((int)this + 0x110) = puVar5;
  local_4 = operator_new(0x24);
  pvStack_c._0_1_ = 0xd;
  if (local_4 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_009910f0(local_4);
  }
  *(undefined4 *)(*(int *)((int)this + 0x110) + 0x40) = uVar6;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0xc) = 7;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xbfffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0x7fffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x2000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xfeffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0x110) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x8000000;
  iVar3 = *(int *)(*(int *)((int)this + 0x110) + 0x40);
  pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,7);
  *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x10000000;
  FUN_0094add0((void *)((int)this + 300),1);
  puVar5 = *(undefined4 **)((int)this + 0x130);
  pvVar7 = FUN_0099bb50(PTR_DAT_00e6609c,0,0,0,'\0');
  *puVar5 = pvVar7;
  pvVar7 = *(void **)(*(int *)((int)this + 0x110) + 0x40);
  if (*(int *)((int)pvVar7 + 0x18) != **(int **)((int)this + 0x130)) {
    Engine_SetResourceReference(pvVar7,**(int **)((int)this + 0x130));
  }
  FUN_0094d8f0((int)this);
  FUN_0094b170((int)this);
  if ((*(byte *)((int)this + 0xa8) & 4) != 0) {
    CameraPath_GenerateSplineWithShake((int)this);
  }
  abStack_3c[0] = 0;
  abStack_3c[1] = 0;
  abStack_3c[2] = 0;
  abStack_3c[3] = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  auStack_28[0] = 0;
  auStack_28[1] = 0;
  auStack_28[2] = 0;
  auStack_28[3] = 0;
  auStack_28[4] = 0;
  puStack_34 = (uint *)0xffffffff;
  uStack_38 = FUN_009b01a0("UI_GUIDING_STREAM_APPEAR_SOUND");
  puVar12 = &DAT_00d17518;
  iVar11 = 0;
  pbVar10 = abStack_3c;
  iVar3 = 2;
  pvVar7 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar7,iVar3,pbVar10,iVar11,puVar12);
  ExceptionList = pvStack_14;
  return this;
}


//// FUNCTION FUN_0094e040 @ 0094e040 ////

void __fastcall FUN_0094e040(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar10;
  ulonglong uVar11;
  undefined1 uStack_24;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf35fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(**(int **)(param_1 + 0x88) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x20))();
  uVar11 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  fVar1 = (float)(int)uVar11;
  if ((int)uVar11 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  if (*(float *)(param_1 + 0xdc) < fVar1 - *(float *)(param_1 + 0xd8)) {
    *(float *)(param_1 + 0xd8) = fVar1;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    pvVar9 = *(void **)(*(int *)(param_1 + 0x110) + 0x40);
    if (*(int *)((int)pvVar9 + 0x18) != **(int **)(param_1 + 0x130)) {
      Engine_SetResourceReference(pvVar9,**(int **)(param_1 + 0x130));
    }
  }
  *(float *)(param_1 + 0xc4) =
       (float)DAT_0105beb8 * *(float *)(param_1 + 200) + *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0xcc) =
       (float)DAT_0105beb8 * *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
  *(float *)(param_1 + 0xe0) = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  cVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0xc))();
  if (cVar5 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x88) + 0x10))();
    *(undefined4 *)(param_1 + 0x90) = *puVar6;
    *(undefined4 *)(param_1 + 0x94) = puVar6[1];
    *(undefined4 *)(param_1 + 0x98) = puVar6[2];
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x8c) + 0xc))();
  if (cVar5 != '\0') {
    puVar6 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x8c) + 0x10))();
    *(undefined4 *)(param_1 + 0x9c) = *puVar6;
    *(undefined4 *)(param_1 + 0xa0) = puVar6[1];
    *(undefined4 *)(param_1 + 0xa4) = puVar6[2];
  }
  cVar5 = (**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
  if (cVar5 != '\0') {
    cVar5 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x14))();
    if (cVar5 != '\0') {
      uVar7 = *(int *)(param_1 + 0x128) - DAT_0105beb8;
      uVar7 = uVar7 & ((int)uVar7 < 0) - 1;
      goto LAB_0094e205;
    }
  }
  uVar7 = DAT_0105beb8 + *(int *)(param_1 + 0x128);
  if (1000 < (int)uVar7) {
    uVar7 = 1000;
  }
LAB_0094e205:
  *(uint *)(param_1 + 0x128) = uVar7;
  if ((0 < DAT_0105be08) && (*(float *)(param_1 + 0x140) < fVar1 - *(float *)(param_1 + 0x13c))) {
    iVar10 = *(int *)(param_1 + 0x144) + 1;
    *(float *)(param_1 + 0x13c) = fVar1;
    *(int *)(param_1 + 0x144) = iVar10;
    if (((*(uint *)(param_1 + 0xa8) >> 2 & 1) == 0) ||
       (uStack_24 = 1, 0 < *(int *)(param_1 + 0x128))) {
      uStack_24 = 0;
    }
    if (*(int *)(param_1 + 0x150) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x154) - *(int *)(param_1 + 0x150) >> 3;
    }
    if (iVar10 < iVar8) {
      *(undefined4 *)(*(int *)(param_1 + 0x150) + iVar10 * 8) = 0;
      FUN_009afab0(*(void **)(*(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x144) * 8 + 4),
                   uStack_24);
    }
    else {
      uStack_18 = 0;
      pvVar9 = operator_new(0x48);
      uStack_4 = 0;
      if (pvVar9 == (void *)0x0) {
        puStack_14 = (undefined4 *)0x0;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x118);
        puStack_14 = FUN_009afba0(pvVar9,DAT_00e6607c,DAT_00e66078,*puVar6,puVar6[1],puVar6[2],
                                  0x40800000);
      }
      uStack_4 = 0xffffffff;
      FUN_009afab0(puStack_14,uStack_24);
      FUN_0094b030((void *)(param_1 + 0x14c),&uStack_18);
    }
  }
  FUN_0094b4a0(param_1);
  CameraPath_GenerateSplineWithShake(param_1);
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    uVar11 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
    fVar1 = (float)(int)uVar11;
    if ((int)uVar11 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0xbc) < fVar1 - *(float *)(param_1 + 0xc0)) {
      *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0094e410 @ 0094e410 ////

void __fastcall FUN_0094e410(int param_1)

{
  void *this;
  
  this = (void *)FUN_00ace790(*(int **)(param_1 + 100),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                              &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
  if (this != (void *)0x0) {
    FUN_005311a0(this,param_1);
  }
  return;
}


//// FUNCTION FUN_0094e440 @ 0094e440 ////

void __fastcall FUN_0094e440(int param_1)

{
  void *this;
  
  this = (void *)FUN_00ace790(*(int **)(param_1 + 100),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                              &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
  if (this != (void *)0x0) {
    FUN_00534d30(this,param_1,'\0');
  }
  return;
}


//// FUNCTION FUN_0094e470 @ 0094e470 ////

undefined4 * __thiscall FUN_0094e470(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d6f418;
  piVar1 = (int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 **)((int)this + 0x5c) = (undefined4 *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x50) = &PTR_FUN_00d172b0;
  *(int *)((int)this + 100) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x58) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return this;
}


//// FUNCTION FUN_0094e4d0 @ 0094e4d0 ////

void __fastcall FUN_0094e4d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f418;
  param_1[0x14] = &PTR_FUN_00d172b0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  if ((undefined4 *)param_1[0x16] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16] = param_1[0x15];
  }
  if (param_1[0x15] != 0) {
    *(undefined4 *)(param_1[0x15] + 4) = param_1[0x16];
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_00d6b268;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_0094e530 @ 0094e530 ////

undefined4 * __thiscall FUN_0094e530(void *this,byte param_1)

{
  FUN_0094e4d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094e550 @ 0094e550 ////

undefined4 * __thiscall FUN_0094e550(void *this,undefined4 param_1)

{
  FUN_00999750(this);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6f45c;
  return this;
}


//// FUNCTION FUN_0094e570 @ 0094e570 ////

void __fastcall FUN_0094e570(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f45c;
  FUN_00999aa0(param_1);
  return;
}


//// FUNCTION FUN_0094e590 @ 0094e590 ////

void __fastcall FUN_0094e590(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x90) & 1) == 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 1;
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xa0) = fVar1;
  }
  return;
}


//// FUNCTION FUN_0094e610 @ 0094e610 ////

void __cdecl FUN_0094e610(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3 = param_3 + 3;
  }
  return;
}


//// FUNCTION FUN_0094e650 @ 0094e650 ////

undefined4 * __thiscall FUN_0094e650(void *this,byte param_1)

{
  FUN_0094e570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094e670 @ 0094e670 ////

void __thiscall FUN_0094e670(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = 1.0;
  if ((*(byte *)((int)this + 0x90) & 1) != 0) {
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = 1.0 - (fVar1 - *(float *)((int)this + 0xa0)) / *(float *)((int)this + 0x9c);
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  fVar1 = fVar1 * *(float *)((int)this + 0x8c);
  if (fVar1 < 0.0) {
LAB_0094e716:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_0094e716;
    if (fVar1 <= 1.0) goto LAB_0094e73e;
  }
  fVar1 = 1.0;
LAB_0094e73e:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_0094e750 @ 0094e750 ////

int __fastcall FUN_0094e750(int param_1)

{
  float10 fVar1;
  int local_4;
  
  local_4 = 0;
  do {
    fVar1 = (float10)fcos(((float10)6.2831855 / (float10)local_4) * (float10)0.5);
    if ((float10)*(float *)(param_1 + 0xac) - fVar1 * (float10)*(float *)(param_1 + 0xac) <
        (float10)0.2) {
      return local_4;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 100);
  return local_4;
}


//// FUNCTION FUN_0094e810 @ 0094e810 ////

void __fastcall FUN_0094e810(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar4 = (**(code **)(**(int **)((int)param_1 + 0x78) + 0xc))();
  if (cVar4 != '\0') {
    puVar5 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x78) + 0x10))(&fStack_c);
    *(undefined4 *)((int)param_1 + 0x7c) = *puVar5;
    *(undefined4 *)((int)param_1 + 0x80) = puVar5[1];
    *(undefined4 *)((int)param_1 + 0x84) = puVar5[2];
  }
  fVar1 = *(float *)((int)param_1 + 0xa8) + *(float *)((int)param_1 + 0xa4);
  *(float *)((int)param_1 + 0xa4) = fVar1;
  if (1.0 <= fVar1) {
    *(float *)((int)param_1 + 0xa4) = fVar1 - 1.0;
  }
  iVar10 = 0;
  if (*(int *)((int)param_1 + 0xbc) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (*(int *)((int)param_1 + 0xc0) - *(int *)((int)param_1 + 0xbc)) / 0xc;
  }
  fVar1 = *(float *)((int)param_1 + 0xac);
  fVar2 = *(float *)((int)param_1 + 0xb0);
  iStack_40 = 0;
  if (0 < iVar8) {
    uStack_48 = 0xffffff;
    uStack_44 = 0xffffff;
    iVar9 = 0;
    do {
      iVar6 = *(int *)((int)param_1 + 0xbc) + iVar9;
      fStack_18 = *(float *)(*(int *)((int)param_1 + 0xbc) + iVar9) +
                  *(float *)((int)param_1 + 0x7c);
      fStack_14 = *(float *)(iVar6 + 4) + *(float *)((int)param_1 + 0x80);
      fStack_10 = *(float *)(iVar6 + 8) + *(float *)((int)param_1 + 0x84);
      pfVar7 = (float *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + iVar10);
      *pfVar7 = fStack_18;
      pfVar7[1] = fStack_14;
      pfVar7[2] = fStack_10;
      FUN_0094e670(param_1,&fStack_30);
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      uStack_48 = CONCAT13((char)iVar6,(undefined3)uStack_48);
      fVar3 = (float)iStack_40 * ((fVar1 * fVar1 * 3.1415927) / (float)(iVar8 + -1));
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0xc + iVar10) = uStack_48;
      uStack_24 = *(undefined4 *)((int)param_1 + 0xa4);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x10 + iVar10) = fVar3;
      *(undefined4 *)(iVar6 + 0x14 + iVar10) = uStack_24;
      iVar6 = *(int *)((int)param_1 + 0xbc) + iVar9;
      fStack_c = *(float *)(*(int *)((int)param_1 + 0xbc) + iVar9) + *(float *)((int)param_1 + 0x7c)
      ;
      fStack_8 = *(float *)(iVar6 + 4) + *(float *)((int)param_1 + 0x80);
      fStack_4 = *(float *)(iVar6 + 8) + *(float *)((int)param_1 + 0x84);
      pfVar7 = (float *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0x18 + iVar10);
      *pfVar7 = fStack_c;
      pfVar7[1] = fStack_8;
      pfVar7[2] = fStack_4;
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x20 + iVar10) =
           *(float *)((int)param_1 + 0xb0) + *(float *)(iVar6 + 0x20 + iVar10);
      fStack_28 = fVar3;
      FUN_0094e670(param_1,&fStack_2c);
      uVar11 = FUN_00acd42c();
      iVar6 = (int)uVar11;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xff < iVar6) {
        iVar6 = 0xff;
      }
      uStack_44 = CONCAT13((char)iVar6,(undefined3)uStack_44);
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0xb4) + 0x28) + 0x24 + iVar10) = uStack_44;
      fStack_1c = fVar2 + *(float *)((int)param_1 + 0xa4);
      iVar6 = *(int *)(*(int *)((int)param_1 + 0xb4) + 0x28);
      *(float *)(iVar6 + 0x28 + iVar10) = fVar3;
      *(float *)(iVar6 + 0x2c + iVar10) = fStack_1c;
      iStack_40 = iStack_40 + 1;
      iVar10 = iVar10 + 0x30;
      iVar9 = iVar9 + 0xc;
      fStack_20 = fVar3;
    } while (iStack_40 < iVar8);
  }
  FUN_009a1480(&DAT_0105c2e8,(undefined4 *)&DAT_00e67be8,'\x01');
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  FUN_009e6680(*(int **)((int)param_1 + 0xb4));
  return;
}


//// FUNCTION FUN_0094eb40 @ 0094eb40 ////

void __fastcall FUN_0094eb40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined1 uVar3;
  LONG LVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf363f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6f470;
  local_4 = 3;
  (**(code **)(*(int *)param_1[0x1e] + 0x1c))();
  puVar2 = (undefined4 *)param_1[0x1e];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x1e] = 0;
  puVar2 = (undefined4 *)param_1[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 4);
    uVar3 = DAT_0105b588;
    if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_0105b588 = uVar3;
    param_1[0x22] = 0;
  }
  _Memory = *(void **)(param_1[0x2d] + 0x40);
  if (_Memory == (void *)0x0) {
    *(undefined4 *)(param_1[0x2d] + 0x40) = 0;
    puVar2 = (undefined4 *)param_1[0x2d];
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 4);
      uVar3 = DAT_0105b588;
      if ((LVar4 == 0) && (DAT_0105b588 = 1, puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      DAT_0105b588 = uVar3;
      param_1[0x2d] = 0;
    }
    if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[0x33] = param_1[0x32];
    }
    if (param_1[0x32] != 0) {
      *(undefined4 *)(param_1[0x32] + 4) = param_1[0x33];
    }
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    if ((void *)param_1[0x2f] == (void *)0x0) {
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      puVar2 = (undefined4 *)param_1[0x1e];
      local_4 = local_4 & 0xffffff00;
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      param_1[0x1e] = 0;
      local_4 = 0xffffffff;
      FUN_0053ddb0(param_1);
      ExceptionList = pvStack_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2f]);
  }
  FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0094ecd0 @ 0094ecd0 ////

undefined4 * __thiscall FUN_0094ecd0(void *this,byte param_1)

{
  FUN_0094eb40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094ecf0 @ 0094ecf0 ////

void __fastcall FUN_0094ecf0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6f498;
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


//// FUNCTION FUN_0094ed40 @ 0094ed40 ////

undefined4 * __thiscall FUN_0094ed40(void *this,byte param_1)

{
  FUN_0094ecf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094ed60 @ 0094ed60 ////

void __fastcall FUN_0094ed60(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_1c;
  undefined4 local_14;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  iVar3 = FUN_0094e750(param_1);
  FUN_009e6720(*(void **)(param_1 + 0xb4),iVar3 * 2 + 2,iVar3 * 2);
  if (*(undefined4 **)(param_1 + 0xbc) != *(undefined4 **)(param_1 + 0xc0)) {
    uVar4 = FUN_0094e610(*(undefined4 **)(param_1 + 0xc0),*(undefined4 **)(param_1 + 0xc0),
                         *(undefined4 **)(param_1 + 0xbc));
    *(undefined4 *)(param_1 + 0xc0) = uVar4;
  }
  local_1c = 0;
  if (0 < iVar3) {
    local_4 = 0;
    do {
      fVar6 = (float10)local_1c * (float10)(6.2831855 / (float)iVar3);
      fVar7 = (float10)fsin(fVar6);
      local_c = (float)(fVar7 * (float10)*(float *)(param_1 + 0xac));
      fVar6 = (float10)fcos(fVar6);
      local_8 = (float)(fVar6 * (float10)*(float *)(param_1 + 0xac));
      SpawnPointList_Append((void *)(param_1 + 0xb8),&local_c);
      local_1c = local_1c + 1;
    } while (local_1c < iVar3);
  }
  SpawnPointList_Append((void *)(param_1 + 0xb8),*(undefined4 **)(param_1 + 0xbc));
  if (0 < iVar3) {
    sVar2 = 0;
    puVar5 = *(undefined4 **)(*(int *)(param_1 + 0xb4) + 0x2c);
    do {
      local_14 = CONCAT22(sVar2 + 1,sVar2);
      *puVar5 = local_14;
      sVar1 = sVar2 + 2;
      *(short *)(puVar5 + 1) = sVar1;
      local_1c = CONCAT22(sVar2 + 3,sVar2 + 1);
      *(int *)((int)puVar5 + 6) = local_1c;
      sVar2 = sVar2 + 2;
      iVar3 = iVar3 + -1;
      *(short *)((int)puVar5 + 10) = sVar1;
      puVar5 = puVar5 + 3;
    } while (iVar3 != 0);
  }
  return;
}


//// FUNCTION FUN_0094eea0 @ 0094eea0 ////

void __fastcall FUN_0094eea0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6f498;
  return;
}


//// FUNCTION FUN_0094ef00 @ 0094ef00 ////

undefined4 * __thiscall FUN_0094ef00(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *pvVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  byte abStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36b5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0053dcd0(this);
  *(undefined ***)this = &PTR_FUN_00d6f470;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    puVar6 = *(undefined4 **)((int)this + 0x78);
    if (puVar6 != (undefined4 *)0x0) {
      piVar1 = puVar6 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar6)();
      }
    }
  }
  *(int *)((int)this + 0x78) = param_1;
  *(undefined4 *)((int)this + 0x8c) = 0x3f800000;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffffc | 4;
  *(undefined4 *)((int)this + 0x94) = 0x447a0000;
  *(undefined4 *)((int)this + 0x9c) = 0x447a0000;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xbd23d70a;
  *(undefined4 *)((int)this + 0xac) = param_2;
  *(undefined4 *)((int)this + 0xb0) = 0x40800000;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0xd0) = this;
  FUN_00acdb9e(0xe661cc);
  iVar4 = FUN_0097dda0();
  *(int *)((int)this + 0xd4) = iVar4;
  if (s___AV__InList_VCGuidingStreamIcon_00e661a0[0x2b] != '\0') {
    iVar4 = 200;
    pcVar12 = "Link";
    pcVar5 = (char *)FUN_00acdb9e(0xe661cc);
    FUN_0097df60(pcVar5,pcVar12,iVar4);
    s___AV__InList_VCGuidingStreamIcon_00e661a0[0x2b] = '\0';
  }
  puVar6 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x78) + 0x10))();
  *(undefined4 *)((int)this + 0x7c) = *puVar6;
  *(undefined4 *)((int)this + 0x80) = puVar6[1];
  *(undefined4 *)((int)this + 0x84) = puVar6[2];
  (**(code **)(**(int **)((int)this + 0x78) + 0x18))();
  iVar4 = FUN_00566c70();
  fVar3 = (float)iVar4;
  if (iVar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x98) = fVar3;
  puVar6 = operator_new(0x1c);
  puStack_8._0_1_ = 4;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_00999750(puVar6);
    *puVar6 = &PTR_FUN_00d6f45c;
    puVar6[6] = this;
  }
  puStack_8._0_1_ = 3;
  *(undefined4 **)((int)this + 0x88) = puVar6;
  puVar6 = FUN_00452010();
  *(undefined4 **)((int)this + 0xb4) = puVar6;
  puVar6 = operator_new(0x24);
  puStack_8._0_1_ = 5;
  if (puVar6 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_009910f0(puVar6);
  }
  *(undefined4 *)(*(int *)((int)this + 0xb4) + 0x40) = uVar7;
  *(undefined1 *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0xc) = 7;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xbfffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x80000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x2000000;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 & 0xfeffffff;
  puVar2 = (uint *)(*(int *)(*(int *)((int)this + 0xb4) + 0x40) + 0x10);
  *puVar2 = *puVar2 | 0x8000000;
  iVar4 = *(int *)(*(int *)((int)this + 0xb4) + 0x40);
  *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) | 0x10000000;
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,3);
  pvVar8 = FUN_0099bb50(PTR_DAT_00e661f0,0,0,0,'\0');
  pvVar9 = *(void **)(*(int *)((int)this + 0xb4) + 0x40);
  if (*(void **)((int)pvVar9 + 0x18) != pvVar8) {
    Engine_SetResourceReference(pvVar9,(int)pvVar8);
  }
  if (pvVar8 != (void *)0x0) {
    FUN_0099b400(pvVar8);
  }
  abStack_38[0] = 0;
  abStack_38[1] = 0;
  abStack_38[2] = 0;
  abStack_38[3] = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_30 = 0xffffffff;
  uStack_34 = FUN_009b01a0("UI_GUIDING_STREAM_APPEAR_SOUND");
  puVar13 = &DAT_00d17518;
  iVar11 = 0;
  pbVar10 = abStack_38;
  iVar4 = 2;
  pvVar9 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar9,iVar4,pbVar10,iVar11,puVar13);
  FUN_0094ed60((int)this);
  ExceptionList = pvStack_10;
  return this;
}


//// FUNCTION FUN_0094f250 @ 0094f250 ////

undefined4 * __fastcall FUN_0094f250(undefined4 *param_1)

{
  FUN_0053c420(param_1);
  *param_1 = &PTR_FUN_00d6f4a4;
  return param_1;
}


//// FUNCTION FUN_0094f270 @ 0094f270 ////

void __fastcall FUN_0094f270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f4a4;
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_0094f280 @ 0094f280 ////

void FUN_0094f280(int param_1)

{
  FUN_0094fc20(param_1);
  return;
}


//// FUNCTION FUN_0094f290 @ 0094f290 ////

void __fastcall FUN_0094f290(undefined4 param_1,undefined4 param_2,int param_3)

{
  FUN_0094a1c0(param_3,param_2);
  return;
}


//// FUNCTION FUN_0094f2a0 @ 0094f2a0 ////

void FUN_0094f2a0(int param_1)

{
  FUN_0094e590(param_1);
  return;
}


//// FUNCTION FUN_0094f2e0 @ 0094f2e0 ////

int * __thiscall FUN_0094f2e0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0094f430 @ 0094f430 ////

undefined4 * __thiscall FUN_0094f430(void *this,byte param_1)

{
  FUN_0094f270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094f450 @ 0094f450 ////

void FUN_0094f450(void)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = operator_new(100);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_0053c420(puVar1);
    *puVar1 = &PTR_FUN_00d6f4a4;
  }
  local_4 = 0xffffffff;
  (*(code *)DAT_0105069c[1])();
  DAT_010506b0 = puVar1;
  (*(code *)*DAT_0105069c)();
  FUN_0094b0a0();
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0094f4e0 @ 0094f4e0 ////

undefined ****** FUN_0094f4e0(float param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined ******ppppppuVar2;
  char cVar3;
  undefined ******ppppppuVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf36eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xc4);
  ppppppuVar2 = (undefined ******)0x0;
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    ppppppuVar2 = (undefined ******)FUN_0094fd90(pvVar1,param_1,param_2,param_3);
  }
  ppppppuVar4 = ppppppuVar2 + 0x2d;
  ppppppuVar2[0x2e] = (undefined *****)&DAT_010506c8;
  *ppppppuVar4 = (undefined *****)DAT_010506c8;
  DAT_010506c8[1] = (undefined *****)ppppppuVar4;
  cVar3 = '\x01';
  local_4 = 0xffffffff;
  DAT_010506c8 = ppppppuVar4;
  ppppppuVar4 = ppppppuVar2;
  pvVar1 = (void *)FUN_00642110();
  FUN_0064c610(pvVar1,cVar3,ppppppuVar4);
  ExceptionList = local_c;
  return ppppppuVar2;
}


//// FUNCTION FUN_0094f580 @ 0094f580 ////

void FUN_0094f580(int param_1,int param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf370b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x15c);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = GuidingStreamEffect_Constructor(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0x1e;
  puVar2[0x1f] = &DAT_01050648;
  *piVar1 = (int)DAT_01050648;
  *(int **)((int)DAT_01050648 + 4) = piVar1;
  DAT_01050648 = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094f600 @ 0094f600 ////

void FUN_0094f600(int param_1,undefined4 param_2)

{
  int *piVar1;
  void *this;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf372b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0xd8);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_0094ef00(this,param_1,param_2);
  }
  piVar1 = puVar2 + 0x32;
  puVar2[0x33] = &DAT_0105067c;
  *piVar1 = (int)DAT_0105067c;
  *(int **)((int)DAT_0105067c + 4) = piVar1;
  DAT_0105067c = piVar1;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0094f880 @ 0094f880 ////

void FUN_0094f880(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_00947fc0();
  puVar3 = DAT_010506b0;
  if (DAT_010506b0 != (undefined4 *)0x0) {
    iVar2 = DAT_010506b0[0x12];
    DAT_010506b0[0x12] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)*puVar3)(1);
    }
    (*(code *)DAT_0105069c[1])();
    DAT_010506b0 = (undefined4 *)0x0;
    (*(code *)*DAT_0105069c)();
  }
  if ((int **)DAT_0105063c != &DAT_01050648) {
    do {
      piVar4 = DAT_01050648;
      puVar3 = (undefined4 *)DAT_01050648[2];
      piVar1 = DAT_01050648 + 1;
      if ((int *)DAT_01050648[1] != (int *)0x0) {
        *(int *)DAT_01050648[1] = *DAT_01050648;
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    } while ((int **)DAT_0105063c != &DAT_01050648);
  }
  DAT_0105063c = &DAT_01050648;
  DAT_01050648 = (int *)&DAT_01050638;
  if ((int **)DAT_010506bc != &DAT_010506c8) {
    do {
      piVar4 = DAT_010506c8;
      puVar3 = (undefined4 *)DAT_010506c8[2];
      piVar1 = DAT_010506c8 + 1;
      if ((int *)DAT_010506c8[1] != (int *)0x0) {
        *(int *)DAT_010506c8[1] = *DAT_010506c8;
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
    } while ((int **)DAT_010506bc != &DAT_010506c8);
  }
  DAT_010506bc = &DAT_010506c8;
  DAT_010506c8 = (int *)&DAT_010506b8;
  if ((int **)DAT_01050670 == &DAT_0105067c) {
    DAT_01050670 = &DAT_0105067c;
    DAT_0105067c = (int *)&DAT_0105066c;
    return;
  }
  do {
    piVar4 = DAT_0105067c;
    puVar3 = (undefined4 *)DAT_0105067c[2];
    piVar1 = DAT_0105067c + 1;
    if ((int *)DAT_0105067c[1] != (int *)0x0) {
      *(int *)DAT_0105067c[1] = *DAT_0105067c;
    }
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *piVar1;
    }
    *piVar4 = 0;
    *piVar1 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  } while ((int **)DAT_01050670 != &DAT_0105067c);
  DAT_01050670 = &DAT_0105067c;
  DAT_0105067c = (int *)&DAT_0105066c;
  return;
}


//// FUNCTION FUN_0094fb80 @ 0094fb80 ////

void __thiscall FUN_0094fb80(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_LAB_00d6f4c4;
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


//// FUNCTION FUN_0094fbd0 @ 0094fbd0 ////

void __fastcall FUN_0094fbd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6f4c4;
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


//// FUNCTION FUN_0094fc20 @ 0094fc20 ////

void __fastcall FUN_0094fc20(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0xa8) & 1) == 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)(param_1 + 0xb0) = fVar1;
  }
  return;
}


//// FUNCTION FUN_0094fcb0 @ 0094fcb0 ////

void __thiscall FUN_0094fcb0(void *this,float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = 1.0;
  if ((*(byte *)((int)this + 0xa8) & 1) != 0) {
    iVar2 = FUN_00566c70();
    fVar1 = (float)iVar2;
    if (iVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = 1.0 - (fVar1 - *(float *)((int)this + 0xb0)) / *(float *)((int)this + 0xac);
    if (0.0 <= fVar1) {
      if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
  }
  fVar1 = fVar1 * *(float *)((int)this + 100);
  if (fVar1 < 0.0) {
LAB_0094fd53:
    *param_1 = 0.0;
    return;
  }
  if (fVar1 <= 1.0) {
    if (fVar1 < 0.0) goto LAB_0094fd53;
    if (fVar1 <= 1.0) goto LAB_0094fd7b;
  }
  fVar1 = 1.0;
LAB_0094fd7b:
  *param_1 = fVar1;
  return;
}


//// FUNCTION FUN_0094fd90 @ 0094fd90 ////

undefined4 * __thiscall
FUN_0094fd90(void *this,float param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf376f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(this);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d6f4d4;
  if (0.0 <= param_1) {
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  *(float *)((int)this + 100) = param_1;
  *(undefined4 *)((int)this + 0x68) = (undefined1 *)((int)this + 0x74);
  *(undefined1 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x68),(char *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x88) = (undefined1 *)((int)this + 0x94);
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x88),(char *)*param_3,param_3[1]);
  uVar1 = DAT_00e6626c;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffffc;
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  *(void **)((int)this + 0xbc) = this;
  FUN_00acdb9e(0xe66294);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0xc0) = iVar2;
  if (s___AVCGuidingStreamUI_TM___00e66278[0x1a] != '\0') {
    iVar2 = 0xb4;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe66294);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCGuidingStreamUI_TM___00e66278[0x1a] = '\0';
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0094ff00 @ 0094ff00 ////

void __fastcall FUN_0094ff00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f4d4;
  if ((undefined4 *)param_1[0x2e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x2e] = param_1[0x2d];
  }
  if (param_1[0x2d] != 0) {
    *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x2e];
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (0x14 < (uint)param_1[0x24]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x22]);
  }
  if (0x14 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  FUN_0053c500(param_1);
  return;
}


//// FUNCTION FUN_0094ff70 @ 0094ff70 ////

undefined4 * __thiscall FUN_0094ff70(void *this,byte param_1)

{
  FUN_0094ff00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0094ff90 @ 0094ff90 ////

void __fastcall FUN_0094ff90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6f4f4;
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


//// FUNCTION FUN_0094ffe0 @ 0094ffe0 ////

undefined4 * __thiscall FUN_0094ffe0(void *this,byte param_1)

{
  FUN_0094ff90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00950000 @ 00950000 ////

void __fastcall FUN_00950000(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6f4f4;
  return;
}


//// FUNCTION FUN_00950060 @ 00950060 ////

uint __fastcall FUN_00950060(int param_1)

{
  float fVar1;
  int *piVar2;
  uint in_EAX;
  int iVar3;
  void *pvVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float local_8;
  undefined4 uStack_4;
  
  piVar2 = *(int **)(param_1 + 0x84);
  if (piVar2 != (int *)0x0) {
    pfVar5 = &local_8;
    iVar3 = (**(code **)(*piVar2 + 0x27c))();
    pvVar4 = (void *)FUN_004725b0(iVar3);
    FUN_00566e50(pvVar4,pfVar5);
    puVar6 = &uStack_4;
    pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
    pfVar5 = (float *)CProjectCastEffect_GetEffectiveLowerMoodThreshold(pvVar4,puVar6);
    if (local_8 < *pfVar5) {
      *(int *)(param_1 + 0xf4) = param_1 + 0xb0;
      *(undefined4 *)(param_1 + 0x114) = 2;
      return CONCAT31((int3)((uint)(param_1 + 0xb0) >> 8),1);
    }
    puVar6 = &uStack_4;
    pvVar4 = (void *)(**(code **)(*piVar2 + 0x27c))();
    pfVar5 = (float *)CProjectCastEffect_GetEffectiveUpperMoodThreshold(pvVar4,puVar6);
    fVar1 = *pfVar5;
    in_EAX = CONCAT22((short)((uint)pfVar5 >> 0x10),
                      (ushort)(local_8 < fVar1) << 8 | (ushort)(NAN(local_8) || NAN(fVar1)) << 10 |
                      (ushort)(local_8 == fVar1) << 0xe);
    if (local_8 >= fVar1 && (local_8 == fVar1) == 0) {
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(int *)(param_1 + 0xf4) = param_1 + 0x90;
      return 1;
    }
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00950370 @ 00950370 ////

void __fastcall FUN_00950370(undefined4 *param_1)

{
  param_1[0x57] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x59] = param_1[0x58];
  }
  if (param_1[0x58] != 0) {
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x59] = param_1[0x58];
  }
  if (param_1[0x58] != 0) {
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_00952ac0(param_1);
  return;
}


//// FUNCTION ChemistryPip_Constructor @ 009503f0 ////

undefined4 * __thiscall
ChemistryPip_Constructor(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6f538;
  piVar1 = (int *)((int)this + 0x178);
  *(undefined4 *)((int)this + 0x180) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 **)((int)this + 0x180) = (undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x174) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x188) = param_3;
  if (param_3 != 0) {
    piVar2 = (int *)(param_3 + 0x18);
    *(int **)((int)this + 0x17c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_PLACESTARCAST_POORCHEM",0x1a);
  FUN_004015d0((void *)((int)this + 0x90),"PIP_PLACESTARCAST_GOODCHEM",0x1a);
  return this;
}


//// FUNCTION GenreFitPip_Constructor @ 009504a0 ////

undefined4 * __thiscall
GenreFitPip_Constructor(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  void *this_00;
  void *this_01;
  int iVar3;
  undefined4 *puVar4;
  char *local_2c;
  size_t local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf37d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6f58c;
  piVar1 = (int *)((int)this + 0x178);
  *(undefined4 *)((int)this + 0x180) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 **)((int)this + 0x180) = (undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x174) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x188) = param_3;
  if (param_3 != 0) {
    piVar2 = (int *)(param_3 + 0x18);
    *(int **)((int)this + 0x17c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4 = 1;
  if (*(int *)((int)this + 0x188) != 0) {
    this_00 = (void *)((int)this + 0xb0);
    FUN_004015d0(this_00,"PIP_PLACESTARCAST_GENREFIT_BAD",0x1e);
    this_01 = (void *)((int)this + 0x90);
    FUN_004015d0(this_01,"PIP_PLACESTARCAST_GENREFIT_GOOD",0x1f);
    iVar3 = FUN_005b6b90(*(int *)((int)this + 0x188));
    puVar4 = (undefined4 *)FUN_00449b40(iVar3);
    local_20[0] = '\0';
    local_28 = 0;
    local_2c = local_20;
    local_24 = 0x14;
    FUN_004015d0(&local_2c,(char *)*puVar4,puVar4[1]);
    FUN_004073f0(this_00,"_",1);
    FUN_004073f0(this_00,local_2c,local_28);
    FUN_004073f0(this_01,"_",1);
    FUN_004073f0(this_01,local_2c,local_28);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION ExperiencePip_Constructor @ 00950600 ////

undefined4 * __thiscall
ExperiencePip_Constructor(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6f5d4;
  piVar1 = (int *)((int)this + 0x178);
  *(undefined4 *)((int)this + 0x180) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 **)((int)this + 0x180) = (undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x174) = &PTR_FUN_00d18c3c;
  *(int *)((int)this + 0x188) = param_3;
  if (param_3 != 0) {
    piVar2 = (int *)(param_3 + 0x18);
    *(int **)((int)this + 0x17c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_PLACESTARCAST_LOWEXP",0x18);
  FUN_004015d0((void *)((int)this + 0x90),"PIP_PLACESTARCAST_HIEXP",0x17);
  return this;
}


//// FUNCTION ShootMoodPip_Constructor @ 00950690 ////

undefined4 * __thiscall ShootMoodPip_Constructor(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6f5fc;
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_SHOOT_MOOD_BAD",0x12);
  FUN_004015d0((void *)((int)this + 0x90),"PIP_SHOOT_MOOD_GOOD",0x13);
  return this;
}


//// FUNCTION FUN_009506e0 @ 009506e0 ////

undefined4 * __thiscall FUN_009506e0(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00950710 @ 00950710 ////

undefined4 * __thiscall FUN_00950710(void *this,byte param_1)

{
  FUN_00950730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00950730 @ 00950730 ////

void __fastcall FUN_00950730(undefined4 *param_1)

{
  param_1[0x5d] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_00950370(param_1);
  return;
}


//// FUNCTION FUN_009507b0 @ 009507b0 ////

undefined4 * __thiscall FUN_009507b0(void *this,byte param_1)

{
  FUN_009507d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009507d0 @ 009507d0 ////

void __fastcall FUN_009507d0(undefined4 *param_1)

{
  param_1[0x5d] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_00950370(param_1);
  return;
}


//// FUNCTION FUN_00950850 @ 00950850 ////

undefined4 * __thiscall FUN_00950850(void *this,byte param_1)

{
  FUN_00950870(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00950870 @ 00950870 ////

void __fastcall FUN_00950870(undefined4 *param_1)

{
  param_1[0x5d] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x62] = 0;
  if ((undefined4 *)param_1[0x5f] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5f] = param_1[0x5e];
  }
  if (param_1[0x5e] != 0) {
    *(undefined4 *)(param_1[0x5e] + 4) = param_1[0x5f];
  }
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_00950370(param_1);
  return;
}


//// FUNCTION FUN_00950970 @ 00950970 ////

int __fastcall FUN_00950970(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x5d) == '\0') {
    iVar1 = iVar1 << 2;
  }
  return iVar1;
}


//// FUNCTION FUN_009509b0 @ 009509b0 ////

void __fastcall FUN_009509b0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x104) = 1;
  *(int *)(param_1 + 0x108) = iVar1;
  uVar2 = FUN_00acd42c();
  *(int *)(param_1 + 0x110) = (int)uVar2;
  *(char *)(param_1 + 0x105) = *(char *)(param_1 + 0xf8);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(uint *)(param_1 + 0x114) = (*(char *)(param_1 + 0xf0) == '\0') + 1;
    return;
  }
  if (iVar1 == param_1 + 0x90) {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x114) = 1;
    return;
  }
  if (iVar1 == param_1 + 0xb0) {
    *(undefined4 *)(param_1 + 0x114) = 2;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}


//// FUNCTION FUN_00950a70 @ 00950a70 ////

void __thiscall FUN_00950a70(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x118) = *param_1;
  *(undefined4 *)((int)this + 0x11c) = param_1[1];
  *(undefined4 *)((int)this + 0x120) = param_1[2];
  return;
}


//// FUNCTION FUN_00950a90 @ 00950a90 ////

bool __fastcall FUN_00950a90(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return *(int *)(param_1 + 0x60) < (int)uVar1;
}


//// FUNCTION FUN_00950ac0 @ 00950ac0 ////

bool __fastcall FUN_00950ac0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00acd42c();
  return (int)uVar1 < *(int *)(param_1 + 0x60);
}


//// FUNCTION FUN_00950af0 @ 00950af0 ////

undefined4 __fastcall FUN_00950af0(int param_1)

{
  if (((*(char *)(param_1 + 0xf9) == '\0') && (-1 < *(int *)(param_1 + 0x60))) &&
     (0.0 <= *(float *)(param_1 + 100))) {
    return 1;
  }
  return 0;
}


//// FUNCTION FUN_00950b20 @ 00950b20 ////

void __fastcall FUN_00950b20(int param_1)

{
  ulonglong uVar1;
  
  if ((*(char *)(param_1 + 0xf9) != '\0') && (0.0 < *(float *)(param_1 + 100))) {
    uVar1 = FUN_00acd42c();
    *(int *)(param_1 + 0x60) = (int)uVar1;
    *(undefined1 *)(param_1 + 0xf9) = 0;
  }
  return;
}


//// FUNCTION FUN_00950b70 @ 00950b70 ////

undefined4 __fastcall FUN_00950b70(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((char)param_1[0x3e] != '\0') {
    uVar1 = FUN_009509b0((int)param_1);
    *(undefined1 *)(param_1 + 0x3e) = 0;
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  uVar2 = (**(code **)(*param_1 + 8))();
  if ((char)uVar2 != '\0') {
    uVar1 = FUN_009509b0((int)param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00950bb0 @ 00950bb0 ////

undefined4 __fastcall FUN_00950bb0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x138);
  bVar2 = false;
  if (iVar1 == 0) goto LAB_00950bdf;
  if (*(char *)(iVar1 + 0x3f3) == '\0') {
LAB_00950bd4:
    if (*(int *)(param_1 + 0x114) != 2) goto LAB_00950bdf;
  }
  else if (*(int *)(param_1 + 0x114) != 1) {
    if (*(char *)(iVar1 + 0x3f3) != '\0') goto LAB_00950bdf;
    goto LAB_00950bd4;
  }
  bVar2 = true;
LAB_00950bdf:
  if (((*(char *)(param_1 + 0xfb) != '\0') && (iVar1 != 0)) && (bVar2)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00950c00 @ 00950c00 ////

bool __fastcall FUN_00950c00(int param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 0x8c) == 1) {
    uVar1 = FUN_00acd42c();
    return *(int *)(param_1 + 0x60) < (int)uVar1;
  }
  if (*(int *)(param_1 + 0x8c) == 2) {
    uVar1 = FUN_00acd42c();
    return (int)uVar1 < *(int *)(param_1 + 0x60);
  }
  uVar1 = FUN_00acd42c();
  return (int)uVar1 != *(int *)(param_1 + 0x60);
}


//// FUNCTION FUN_00950c90 @ 00950c90 ////

undefined4 __fastcall FUN_00950c90(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  void *this;
  uint3 extraout_var;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x15c) == 0x10) {
    *(int *)(param_1 + 0xf4) = param_1 + 0x90;
    return CONCAT31((int3)((uint)(param_1 + 0x90) >> 8),1);
  }
  switch(*(int *)(param_1 + 0x15c)) {
  default:
    iVar3 = 0;
    break;
  case 1:
    iVar3 = 5;
    break;
  case 2:
    iVar3 = 2;
    break;
  case 3:
    iVar3 = 3;
    break;
  case 4:
    iVar3 = 7;
    break;
  case 5:
    iVar3 = 10;
    break;
  case 6:
    iVar3 = 9;
    break;
  case 7:
    iVar3 = 1;
    break;
  case 8:
    iVar3 = 0xb;
    break;
  case 9:
    iVar3 = 0xd;
    break;
  case 10:
    iVar3 = 8;
    break;
  case 0xb:
    iVar3 = 6;
    break;
  case 0xc:
    iVar3 = 4;
    break;
  case 0xd:
    iVar3 = 0xe;
    break;
  case 0xe:
    iVar3 = 0xf;
    break;
  case 0xf:
    iVar3 = 0x10;
  }
  this = (void *)AwardBonusManager_Get();
  cVar2 = AwardBonusManager_IsBonusActive(this,iVar3);
  uVar4 = CONCAT31(extraout_var,cVar2);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xf4) = 0;
    return (uint)extraout_var << 8;
  }
  if (*(int *)(param_1 + 0x15c) == 1) {
    uVar1 = *(uint *)(param_1 + 0x84);
    iVar3 = AwardBonusManager_Get();
    uVar4 = FUN_00858eb0(iVar3);
    if (uVar4 != uVar1) goto LAB_00950d56;
  }
  if (*(int *)(param_1 + 0x15c) == 2) {
    uVar1 = *(uint *)(param_1 + 0x84);
    iVar3 = AwardBonusManager_Get();
    uVar4 = FUN_00858ef0(iVar3);
    if (uVar4 != uVar1) {
LAB_00950d56:
      *(undefined4 *)(param_1 + 0xf4) = 0;
      return uVar4 & 0xffffff00;
    }
  }
  *(int *)(param_1 + 0xf4) = param_1 + 0x90;
  return CONCAT31((int3)(uVar4 >> 8),1);
}


//// FUNCTION PipSystem_LoadTuningConfig @ 00950df0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PipSystem_LoadTuningConfig(void)

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
  
                    /* Loads global tuning constants for the on-screen PIP notification system:
                       display/fade timing (item_time_on_screen, item_fade_time,
                       item_time_on_screen_stunt), mood/quality/genre-fit/genre-xp thresholds,
                       boredom/set-repair thresholds, and per-category "pip chunk" weightings for
                       stars (awards/ent/image/performance/press/relationships/salary/trailer),
                       studios (prestige/star/money/movies/awards/lot-division), and movies
                       (boxoffice/quality/awards), plus "update tick" pacing constants
                       (UT_STAR_*/UT_STUDIO_*/UT_MOVIE_*). Ties into the PIP/LMPA award-bonus system
                       documented earlier this project. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3a06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00559fb0(local_e4);
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"pipitems",8);
  local_100 = 8;
  local_104[8] = '\0';
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
  _strncpy(local_104,"general",7);
  local_100 = 7;
  local_104[7] = '\0';
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
  _strncpy(local_104,"item_time_on_screen",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 3;
  DAT_00e57be0 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"item_fade_time",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 4;
  DAT_00e57bdc = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"item_time_on_screen_stunt",0x19);
  local_100 = 0x19;
  local_104[0x19] = '\0';
  local_4._0_1_ = 5;
  DAT_00e57be4 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"thresholds",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 6;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOOD_LOWER",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 7;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050780 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOOD_UPPER",10);
  local_100 = 10;
  local_104[10] = '\0';
  local_4._0_1_ = 8;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050784 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIEQUALITY_LOWER",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 9;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050788 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIEQUALITY_UPPER",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_0105078c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENREFIT_LOWER",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0xb;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050790 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENREFIT_UPPER",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0xc;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050794 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENRE_XP_LOWER",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0xd;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_01050798 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"GENRE_XP_UPPER",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0xe;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_0105079c = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"BOREDOM_THRESHOLD",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0xf;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_010507a0 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"SETREPAIR_THRESHOLD",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x10;
  fVar1 = FUN_00558610(local_e4,&local_104,0.0);
  _DAT_010507a4 = (float)fVar1;
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"starpipchunks",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 0x11;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_AWARDS",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x12;
  DAT_01050760 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_ENT",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 0x13;
  DAT_01050764 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_IMAGE",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 0x14;
  DAT_01050768 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_PERFORMANCE",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x15;
  DAT_0105076c = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_PRESS",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 0x16;
  DAT_01050770 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_REL",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 0x17;
  DAT_01050774 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_SALARY",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x18;
  DAT_01050778 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STAR_PC_TRAILER",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x19;
  DAT_0105077c = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"studiopipchunks",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
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
  _strncpy(local_104,"STUDIO_PC_PRESTIGE",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 0x1b;
  DAT_01050730 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STUDIO_PC_STAR",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x1c;
  DAT_0105074c = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STUDIO_PC_MONEY",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x1d;
  DAT_01050750 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STUDIO_PC_MOVIES",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0x1e;
  _DAT_01050754 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STUDIO_PC_AWARDS",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0x1f;
  DAT_01050758 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  _DAT_01050748 = DAT_01050730;
  _DAT_01050744 = DAT_01050730;
  _DAT_01050740 = DAT_01050730;
  _DAT_0105073c = DAT_01050730;
  _DAT_01050738 = DAT_01050730;
  _DAT_01050734 = DAT_01050730;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"STUDIO_LOT_DIV",0xe);
  local_100 = 0xe;
  local_104[0xe] = '\0';
  local_4._0_1_ = 0x20;
  _DAT_010507a8 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"moviespipchunks",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x21;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_PC_BOXOFFICE",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x22;
  _DAT_01050718 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_PC_QUALITY",0x11);
  local_100 = 0x11;
  local_104[0x11] = '\0';
  local_4._0_1_ = 0x23;
  _DAT_0105071c = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"MOVIES_PC_AWARDS",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0x24;
  _DAT_01050720 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"updateticks",0xb);
  local_100 = 0xb;
  local_104[0xb] = '\0';
  local_4._0_1_ = 0x25;
  FUN_00558a50(local_e4,&local_104,(undefined4 *)0x1);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STAR_STARRATING",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 0x26;
  _DAT_010506e8 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STAR_MOOD",0xc);
  local_100 = 0xc;
  local_104[0xc] = '\0';
  local_4._0_1_ = 0x27;
  DAT_010506ec = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STUDIO_PRESTIGE",0x12);
  local_100 = 0x12;
  local_104[0x12] = '\0';
  local_4._0_1_ = 0x28;
  DAT_010506f8 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"UT_STUDIO_PRETTINESS",0x14);
  local_100 = 0x14;
  local_104[0x14] = '\0';
  local_4._0_1_ = 0x29;
  _DAT_010506f4 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STUDIO_LOT",0xd);
  local_100 = 0xd;
  local_104[0xd] = '\0';
  local_4._0_1_ = 0x2a;
  DAT_010506fc = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STUDIO_AWARDS",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0x2b;
  _DAT_01050700 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STUDIO_MOVIES",0x10);
  local_100 = 0x10;
  local_104[0x10] = '\0';
  local_4._0_1_ = 0x2c;
  DAT_01050704 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_STUDIO_MONEY",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x2d;
  DAT_01050708 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_MOVIE_STARRATING",0x13);
  local_100 = 0x13;
  local_104[0x13] = '\0';
  local_4._0_1_ = 0x2e;
  _DAT_0105070c = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  _strncpy(local_104,"UT_MOVIE_AWARDS",0xf);
  local_100 = 0xf;
  local_104[0xf] = '\0';
  local_4._0_1_ = 0x2f;
  _DAT_01050710 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"UT_MOVIE_DIR_QUALITY",0x14);
  local_100 = 0x14;
  local_104[0x14] = '\0';
  local_4._0_1_ = 0x30;
  _DAT_01050714 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_104 = local_f8;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x20;
  local_104 = _malloc(0x20);
  _strncpy(local_104,"UT_STAR_RELATIONSHIPS",0x15);
  local_100 = 0x15;
  local_104[0x15] = '\0';
  local_4 = CONCAT31(local_4._1_3_,0x31);
  _DAT_010506f0 = FUN_00558750(local_e4,&local_104,0);
  if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
    _free(local_104);
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009521b0 @ 009521b0 ////

void __thiscall FUN_009521b0(void *this,undefined4 *param_1,int param_2)

{
  FUN_004015d0((void *)((int)this + 0xd0),(char *)*param_1,param_1[1]);
  *(uint *)((int)this + 0xf4) = -(uint)(param_1[1] != 0) & (uint)((int)this + 0xd0);
  if (param_2 != *(int *)((int)this + 0x88)) {
    if (*(undefined4 **)((int)this + 0x4c) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x48);
    }
    if (*(int *)((int)this + 0x48) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x48) + 4) = *(undefined4 *)((int)this + 0x4c);
    }
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  *(int *)((int)this + 0x88) = param_2;
  return;
}


//// FUNCTION FUN_00952220 @ 00952220 ////

void __thiscall FUN_00952220(void *this,undefined4 *param_1,undefined1 param_2)

{
  FUN_004015d0((void *)((int)this + 0xd0),(char *)*param_1,param_1[1]);
  *(undefined1 *)((int)this + 0xf0) = param_2;
  if (param_1[1] != 0) {
    *(void **)((int)this + 0xf4) = (void *)((int)this + 0xd0);
    *(undefined1 *)((int)this + 0xf8) = 1;
    return;
  }
  *(undefined4 *)((int)this + 0xf4) = 0;
  return;
}


//// FUNCTION FUN_00952280 @ 00952280 ////

int * __fastcall FUN_00952280(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int *this;
  int iVar5;
  int iVar6;
  void *this_00;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  float10 fVar10;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  int *local_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 *local_7c;
  undefined4 local_78;
  uint local_74;
  undefined2 local_70 [10];
  void *local_5c [2];
  uint local_54;
  undefined4 auStack_3c [3];
  undefined4 auStack_30 [3];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf3a26;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x104) == '\0') {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x108);
  }
  local_7c = local_70;
  local_70[0] = 0;
  local_78 = 0;
  local_74 = 10;
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined1 *)(param_1 + 0x105) = 0;
    return (int *)0x0;
  }
  if (*(char *)(param_1 + 0x5f) == '\0') {
    ExceptionList = &local_c;
    puVar4 = FUN_00568790(local_5c,puVar4);
    FUN_004036d0(&local_7c,(wchar_t *)*puVar4,puVar4[1]);
  }
  else {
    ExceptionList = &local_c;
    puVar4 = FUN_009b5030(local_5c,puVar4);
    FUN_004036d0(&local_7c,(wchar_t *)*puVar4,puVar4[1]);
  }
  if (10 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c[0]);
  }
  bVar1 = true;
  bVar2 = false;
  local_a4 = operator_new(0x448);
  local_4._0_1_ = 1;
  if (local_a4 == (void *)0x0) {
    this = (int *)0x0;
  }
  else {
    this = FUN_006db8c0(local_a4,(int *)&local_7c);
  }
  this[0x10c] = *(int *)(param_1 + 0x88);
  *(undefined1 *)((int)this + 0x3f7) = *(undefined1 *)(param_1 + 0x5c);
  local_4 = (uint)local_4._1_3_ << 8;
  local_a4 = this;
  (**(code **)(*(int *)(param_1 + 0x124) + 4))();
  *(int **)(param_1 + 0x138) = this;
  (*(code *)**(undefined4 **)(param_1 + 0x124))();
  if ((*(int *)(param_1 + 0x58) == 0) || (*(char *)(param_1 + 0x105) != '\0')) {
LAB_009523ea:
    FUN_006dcb60(this,'\0',0,0,0,'\0');
    if (*(char *)(param_1 + 0xfd) != '\0') {
      FUN_006d94a0(this,1,*(undefined4 *)(param_1 + 0x100));
      FUN_006dc3e0(this,'\0');
    }
  }
  else {
    if (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x110)) goto LAB_009523ea;
    FUN_006dcb60(this,'\x01',*(int *)(param_1 + 0x58),*(int *)(param_1 + 0x10c),
                 *(int *)(param_1 + 0x110),'\0');
  }
  if (*(char *)(param_1 + 0xfa) == '\0') {
    if (*(int *)(param_1 + 0x140) != 0) {
      FUN_006d9800(this,(undefined4 *)(param_1 + 0x13c));
    }
  }
  else {
    fStack_b0 = (float)((uint)fStack_b0 & 0xffffff00);
    iVar5 = FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    if (iVar5 != 0) {
      fStack_b0 = (float)CONCAT31(fStack_b0._1_3_,1);
    }
    FUN_006d9ca0(this,*(char *)(param_1 + 0xfa),SUB41(fStack_b0,0));
  }
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 0:
    iVar5 = FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    if (iVar5 == 0) break;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    FUN_00956e20(this,(float *)0x1,(int)&uStack_88,'\x01');
    bVar2 = true;
    uVar8 = FUN_00598ee0(iVar5);
    if ((char)uVar8 == '\0') break;
    iVar5 = FUN_005773c0(iVar5);
    iVar6 = GetPlayerStudio();
    if (iVar5 == iVar6) break;
LAB_009526ab:
    bVar1 = false;
    break;
  case 1:
  case 0xc:
    piVar9 = (int *)0x0;
    this_00 = (void *)FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                                   &TM::CStaff::RTTI_Type_Descriptor,0);
    if (this_00 == (void *)0x0) {
      piVar9 = (int *)FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                                   &TM::CProjectObject::RTTI_Type_Descriptor,0);
      if (piVar9 != (int *)0x0) {
        pfVar7 = (float *)(**(code **)(*piVar9 + 0x34))(auStack_18);
        fStack_c4 = *pfVar7;
        fStack_c0 = pfVar7[1];
        fStack_bc = pfVar7[2];
        fStack_b0 = fStack_bc;
        goto LAB_0095273f;
      }
      iVar5 = FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                           &TM::TMFixedAsset::RTTI_Type_Descriptor,0);
      if (iVar5 == 0) {
        piVar9 = (int *)FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor
                                     ,&TM::TMInWorld::RTTI_Type_Descriptor,0);
        pfVar7 = (float *)(**(code **)(*piVar9 + 0x34))(auStack_24);
        fStack_c4 = *pfVar7;
        fStack_c0 = pfVar7[1];
        fStack_bc = pfVar7[2];
        fStack_94 = 0.0;
        uStack_90 = 0;
        uStack_8c = 0;
        pfVar7 = &fStack_94;
      }
      else {
        fStack_a0 = 0.0;
        uStack_9c = 0;
        uStack_98 = 0;
        pfVar7 = &fStack_a0;
      }
    }
    else {
      pfVar7 = (float *)FUN_00598e50(this_00,auStack_30);
      fStack_c4 = *pfVar7;
      fStack_c0 = pfVar7[1];
      fStack_bc = pfVar7[2];
      puVar4 = FUN_00598e50(this_00,auStack_3c);
      fStack_b0 = (float)puVar4[2];
LAB_0095273f:
      uVar8 = FUN_009a1b30(&DAT_0105c2e8,&fStack_c4,&fStack_b8);
      if ((char)uVar8 == '\0') goto LAB_009526ab;
      fVar10 = (float10)(**(code **)(*this + 0x10))();
      fStack_b8 = (float)((float10)fStack_b8 - fVar10 * (float10)0.5);
      fVar10 = (float10)(**(code **)(*this + 0x14))();
      fStack_b4 = (float)((float10)fStack_b4 - fVar10);
      FUN_00412ec0(DAT_00f87aa0,&fStack_b8,&fStack_c4);
      fStack_bc = fStack_b0;
      if ((*(int *)(param_1 + 0x88) == 0xc) ||
         ((*(int *)(param_1 + 0x88) == 1 && (piVar9 != (int *)0x0)))) {
        FUN_00ace790(*(int **)(param_1 + 0x84),0,&TM::TMObject::RTTI_Type_Descriptor,
                     &TM::TMInWorld::RTTI_Type_Descriptor,0);
      }
      pfVar7 = &fStack_c4;
    }
    FUN_00956e20(this,(float *)0x1,(int)pfVar7,'\x01');
    bVar2 = true;
    break;
  case 4:
    fStack_b8 = DAT_0104cce0;
    fStack_b4 = DAT_0104cce4;
    fVar10 = (float10)(**(code **)(*this + 0x10))();
    fStack_b8 = (float)((float10)fStack_b8 - fVar10 * (float10)0.5);
    fVar10 = (float10)(**(code **)(*this + 0x14))();
    fStack_b4 = (float)((float10)fStack_b4 - fVar10);
    FUN_00412ec0(DAT_00f87aa0,&fStack_b8,&fStack_c4);
    FUN_00956e20(this,(float *)0x1,(int)&fStack_c4,'\x01');
    bVar2 = true;
    break;
  case 5:
  case 6:
    iVar5 = FUN_007955a0();
    fStack_c0 = *(float *)(iVar5 + 0xe4) * 0.5;
    fStack_c4 = *(float *)(DAT_0104e094 + 0xc0);
    FUN_009840b0(&fStack_b0,&fStack_c4);
    iVar5 = FUN_0071b2b0();
    FUN_00747290(*(void **)(iVar5 + 0x2d4),&fStack_b0);
    fStack_c4 = fStack_b0;
    fStack_c0 = fStack_ac;
    fStack_bc = 0.0;
    piVar9 = (int *)FUN_0071b2a0();
    fVar10 = (float10)(**(code **)(*piVar9 + 0x10))();
    fStack_c4 = (float)((fVar10 - (float10)fStack_c4) + (fVar10 - (float10)fStack_c4));
    *(undefined1 *)((int)this + 0x3eb) = 1;
    *(undefined1 *)((int)this + 0x3ed) = 1;
    FUN_00956e20(this,(float *)0x0,(int)&fStack_c4,'\x01');
    bVar2 = true;
    break;
  case 7:
    *(undefined1 *)(this + 0xfb) = 1;
    fStack_c4 = *(float *)(param_1 + 0x118);
    fStack_c0 = *(float *)(param_1 + 0x11c);
    fStack_bc = *(float *)(param_1 + 0x120);
    FUN_00956e20(this,(float *)0x1,(int)&fStack_c4,'\0');
    break;
  case 8:
    fStack_c4 = *(float *)(param_1 + 0x118);
    fStack_c0 = *(float *)(param_1 + 0x11c);
    fStack_bc = *(float *)(param_1 + 0x120);
    FUN_00956e20(this,(float *)0x1,(int)&fStack_c4,'\x01');
    bVar2 = true;
    break;
  case 9:
  case 10:
  case 0xb:
    fStack_b0 = 0.0;
    fStack_c4 = 0.0;
    fStack_ac = 0.0;
    uStack_a8 = 0;
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    *(undefined1 *)((int)this + 0x3eb) = 1;
    *(undefined1 *)((int)this + 0x3ed) = 0;
    FUN_00956e20(this,(float *)0x0,(int)&fStack_c4,'\x01');
    bVar2 = true;
  }
  if (*(int *)(param_1 + 0x114) == 1) {
    if (*(char *)(param_1 + 0xfa) == '\0') {
      FUN_006d9a10(this,7);
      *(undefined1 *)((int)this + 0x3f3) = 1;
    }
    else {
      FUN_006d9a10(this,8);
      *(undefined1 *)((int)this + 0x3f3) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x114) == 2) {
    FUN_006d9a10(this,6);
    *(undefined1 *)((int)this + 0x3f3) = 0;
  }
  if (bVar1) {
    if (!bVar2) {
      if (*(int *)(param_1 + 0x88) == 7) {
        piVar9 = (int *)FUN_0071b2a0();
      }
      else {
        piVar9 = (int *)FUN_0071b2b0();
      }
      (**(code **)(*piVar9 + 0xc))(this,1);
    }
    FUN_006d9500(this,&fStack_c4);
    do {
      cVar3 = (**(code **)(*this + 0x50))(1);
    } while (cVar3 != '\0');
  }
  else {
    piVar9 = this + 0x12;
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      (**(code **)*this)(1);
    }
    local_a4 = (int *)0x0;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  if (10 < local_74) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  ExceptionList = local_c;
  return local_a4;
}


//// FUNCTION FUN_00952ac0 @ 00952ac0 ////

void __fastcall FUN_00952ac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6f964;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13] = param_1[0x12];
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1[0x12] + 4) = param_1[0x13];
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (0x14 < (uint)param_1[0x51]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4f]);
  }
  param_1[0x49] = &PTR_FUN_00d35aac;
  if ((undefined4 *)param_1[0x4b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4b] = param_1[0x4a];
  }
  if (param_1[0x4a] != 0) {
    *(undefined4 *)(param_1[0x4a] + 4) = param_1[0x4b];
  }
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  if ((undefined4 *)param_1[0x4b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x4b] = param_1[0x4a];
  }
  if (param_1[0x4a] != 0) {
    *(undefined4 *)(param_1[0x4a] + 4) = param_1[0x4b];
  }
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  if (0x14 < (uint)param_1[0x36]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x34]);
  }
  if (0x14 < (uint)param_1[0x2e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2c]);
  }
  if (0x14 < (uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x24]);
  }
  param_1[0x1c] = &PTR_FUN_00d1aed0;
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
  if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x13] = param_1[0x12];
  }
  if (param_1[0x12] != 0) {
    *(undefined4 *)(param_1[0x12] + 4) = param_1[0x13];
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((undefined4 *)param_1[0xf] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf] = param_1[0xe];
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1[0xe] + 4) = param_1[0xf];
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00952c90 @ 00952c90 ////

void __fastcall FUN_00952c90(undefined4 *param_1)

{
  param_1[0x58] = &PTR_FUN_00d29d20;
  if ((undefined4 *)param_1[0x5a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5a] = param_1[0x59];
  }
  if (param_1[0x59] != 0) {
    *(undefined4 *)(param_1[0x59] + 4) = param_1[0x5a];
  }
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  if ((undefined4 *)param_1[0x5a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x5a] = param_1[0x59];
  }
  if (param_1[0x59] != 0) {
    *(undefined4 *)(param_1[0x59] + 4) = param_1[0x5a];
  }
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_00952ac0(param_1);
  return;
}


//// FUNCTION FUN_00952d10 @ 00952d10 ////

undefined4 * __thiscall FUN_00952d10(void *this,byte param_1)

{
  FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00952d30 @ 00952d30 ////

undefined4 * __thiscall FUN_00952d30(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3a9f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d6f964;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  piVar1 = (int *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x5d) = 0;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  *(undefined4 *)((int)this + 100) = 0xbf800000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x5f) = 1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(int **)((int)this + 0x7c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d1aed0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined1 **)((int)this + 0x90) = (undefined1 *)((int)this + 0x9c);
  *(undefined1 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0x14;
  *(undefined1 **)((int)this + 0xb0) = (undefined1 *)((int)this + 0xbc);
  *(undefined1 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0x14;
  *(undefined1 **)((int)this + 0xd0) = (undefined1 *)((int)this + 0xdc);
  *(undefined1 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0x14;
  *(undefined1 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0xf9) = 1;
  *(undefined1 *)((int)this + 0xfa) = 0;
  *(undefined1 *)((int)this + 0xfb) = 0;
  *(undefined1 *)((int)this + 0xfc) = 1;
  *(undefined1 *)((int)this + 0xfd) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 0;
  *(undefined1 *)((int)this + 0x105) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x110) = 0xffffffff;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 **)((int)this + 0x130) = (undefined4 *)((int)this + 0x124);
  *(undefined4 *)((int)this + 0x124) = &PTR_FUN_00d35aac;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined1 **)((int)this + 0x13c) = (undefined1 *)((int)this + 0x148);
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0x14;
  local_4 = 8;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x84) = param_2;
  (**(code **)*piVar1)();
  *(undefined4 *)((int)this + 0x88) = param_1;
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
  *(void **)((int)this + 0x40) = this;
  FUN_00acdb9e(0xe663c4);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x44) = iVar2;
  if (s___AVCCastingMoodItem_TM___00e663a8[0x1b] != '\0') {
    iVar2 = 0x38;
    pcVar4 = "PipLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe663c4);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCCastingMoodItem_TM___00e663a8[0x1b] = '\0';
  }
  *(void **)((int)this + 0x50) = this;
  FUN_00acdb9e(0xe663c4);
  iVar2 = FUN_0097dda0();
  *(int *)((int)this + 0x54) = iVar2;
  if (s___AVCCastingMoodItem_TM___00e663a8[0x1a] != '\0') {
    iVar2 = 0x48;
    pcVar4 = "DisplayLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe663c4);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCCastingMoodItem_TM___00e663a8[0x1a] = '\0';
  }
  *(undefined4 *)((int)this + 0x8c) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00952fa0 @ 00952fa0 ////

undefined4 * __thiscall FUN_00952fa0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3ac6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00952d30(this,param_1,param_2);
  piVar1 = (int *)((int)this + 0x15c);
  *(undefined ***)this = &PTR_FUN_00d6f98c;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(int **)((int)this + 0x168) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x170) = 0;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x170) = param_2;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00953020 @ 00953020 ////

undefined4 * __thiscall FUN_00953020(void *this,byte param_1)

{
  FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00953040 @ 00953040 ////

undefined4 * __thiscall
FUN_00953040(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00952d30(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6f9a0;
  *(undefined4 *)((int)this + 0x15c) = param_3;
  return this;
}


//// FUNCTION FUN_00953070 @ 00953070 ////

undefined4 * __thiscall FUN_00953070(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009530a0 @ 009530a0 ////

undefined4 * __thiscall
FUN_009530a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3ae6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00952d30(this,param_1,param_2);
  piVar1 = (int *)((int)this + 0x160);
  *(undefined ***)this = &PTR_FUN_00d6f9b4;
  *(undefined4 *)((int)this + 0x15c) = param_3;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(int **)((int)this + 0x16c) = piVar1;
  *piVar1 = (int)&PTR_FUN_00d29d20;
  *(undefined4 *)((int)this + 0x174) = 0;
  local_4 = 1;
  (**(code **)(*piVar1 + 4))();
  *(undefined4 *)((int)this + 0x174) = param_2;
  (**(code **)*piVar1)();
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00953130 @ 00953130 ////

undefined4 * __thiscall FUN_00953130(void *this,byte param_1)

{
  FUN_00952c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CastingPerkPip_Constructor @ 00953150 ////

undefined4 * __thiscall
CastingPerkPip_Constructor(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00952d30(this,param_3,param_2);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d6fad8;
  *(undefined4 *)((int)this + 0x15c) = param_1;
  *(undefined1 *)((int)this + 0xfa) = 1;
  switch(param_1) {
  case 0:
    pcVar4 = "PIP_ONRADAR";
    break;
  case 1:
    pcVar4 = "PIP_SUPERSTAR";
    break;
  case 2:
    pcVar4 = "PIP_MIDASTOUCH";
    break;
  case 3:
    pcVar4 = "PIP_BRAINWASHER";
    break;
  case 4:
    pcVar4 = "PIP_PERFECTFIT";
    break;
  case 5:
    this_00 = (void *)((int)this + 0x90);
    FUN_00403e20(this_00,"PIP_TRENDSETTER");
    if (param_2 == (int *)0x0) {
      ExceptionList = local_c;
      return this;
    }
    iVar1 = FUN_00ace790(param_2,0,&TM::TMObject::RTTI_Type_Descriptor,
                         &TM::CStaff::RTTI_Type_Descriptor,0);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return this;
    }
    iVar1 = FUN_00577d80(iVar1);
    if (iVar1 == 0) {
      ExceptionList = local_c;
      return this;
    }
    FUN_00407630(this_00,"_");
    iVar1 = FUN_005b6b90(iVar1);
    puVar2 = (undefined4 *)FUN_00449b40(iVar1);
    FUN_00403de0(local_4c,puVar2);
    uVar3 = 0xffffffff;
    iVar1 = FUN_004155b0(local_4c,"_",0);
    puVar2 = FUN_00430770(local_4c,local_2c,iVar1 + 1,uVar3);
    FUN_00401e30(local_4c,puVar2);
    if (local_24 < 0x15) {
      FUN_004211a0(this_00,local_4c);
      if (local_44 < 0x15) {
        ExceptionList = local_c;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  case 6:
    pcVar4 = "PIP_FREELOVE";
    break;
  case 7:
    pcVar4 = "PIP_QUICKLEARNER";
    break;
  case 8:
    pcVar4 = "PIP_AGEOFDISCOVERY";
    break;
  case 9:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_HALFSTARSALARY");
    *(undefined4 *)((int)this + 0x68) = 0xffffffff;
    ExceptionList = local_c;
    return this;
  case 10:
    pcVar4 = "PIP_PARTYON";
    break;
  case 0xb:
    pcVar4 = "PIP_FEEDINGFRENZY";
    break;
  case 0xc:
    pcVar4 = "PIP_NOWORRIEs";
    break;
  case 0xd:
    pcVar4 = "PIP_LUCKYCHARM";
    break;
  case 0xe:
    pcVar4 = "PIP_NATURALTALENT";
    break;
  case 0xf:
    pcVar4 = "PIP_THICKSKIN";
    break;
  case 0x10:
    pcVar4 = "PIP_BONUSESACTIVATED";
    break;
  default:
    goto switchD_009531a8_default;
  }
  FUN_00403e20((void *)((int)this + 0x90),pcVar4);
switchD_009531a8_default:
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00953380 @ 00953380 ////

undefined4 * __thiscall FUN_00953380(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009533b0 @ 009533b0 ////

undefined4 * __thiscall FUN_009533b0(void *this,undefined4 param_1,undefined1 param_2,float param_3)

{
  FUN_009530a0(this,1,param_1,4);
  *(undefined1 *)((int)this + 0x178) = param_2;
  *(undefined ***)this = &PTR_FUN_00d6fb00;
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_STUNT_FAILURE_B",0x13);
  FUN_004015d0((void *)((int)this + 0x90),"PIP_STUNT_SUCCESS_B",0x13);
  *(undefined1 *)((int)this + 0xfd) = 1;
  *(undefined1 *)((int)this + 0x5c) = 1;
  if (param_3 < 0.0) {
    *(undefined4 *)((int)this + 0x100) = 0;
    return this;
  }
  if (1.0 < param_3) {
    *(undefined4 *)((int)this + 0x100) = 0x3f800000;
    return this;
  }
  *(float *)((int)this + 0x100) = param_3;
  return this;
}


//// FUNCTION FUN_00953470 @ 00953470 ////

undefined4 * __thiscall FUN_00953470(void *this,byte param_1)

{
  thunk_FUN_00952c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009535e0 @ 009535e0 ////

void __thiscall FUN_009535e0(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == (int)this + 0x14) {
    *param_1 = iVar1;
    return;
  }
  do {
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  } while (iVar1 != (int)this + 0x14);
  *param_1 = iVar1;
  return;
}


//// FUNCTION FUN_00953610 @ 00953610 ////

void __fastcall FUN_00953610(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (0x14 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x84))) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar4 = 0;
    if (iVar2 != param_1 + 100) {
      do {
        iVar2 = *(int *)(iVar2 + 4);
        iVar4 = iVar4 + 1;
      } while (iVar2 != param_1 + 100);
      if (iVar4 != 0) {
        piVar3 = *(int **)(param_1 + 0x58);
        piVar1 = (int *)piVar3[2];
        if ((int *)piVar3[1] != (int *)0x0) {
          *(int *)piVar3[1] = *piVar3;
        }
        if (*piVar3 != 0) {
          *(int *)(*piVar3 + 4) = piVar3[1];
        }
        *piVar3 = 0;
        piVar3[1] = 0;
        if (piVar1 != (int *)0x0) {
          if ((piVar1[0x22] != 4) && (*(int *)(param_1 + 0x4c) != 0)) {
            piVar3 = piVar1 + 0x12;
            *piVar3 = param_1 + 0x54;
            piVar1[0x13] = *(int *)(param_1 + 0x58);
            **(int **)(param_1 + 0x58) = (int)piVar3;
            *(int **)(param_1 + 0x58) = piVar3;
            *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
            return;
          }
          iVar2 = (**(code **)(*piVar1 + 4))();
          if (iVar2 != 0) {
            piVar3 = FUN_00952280((int)piVar1);
            FUN_0066a9a0((void *)(param_1 + 0x38),(int)piVar3);
          }
          if (piVar1[0x1a] == 0) {
            (**(code **)*piVar1)(1);
          }
        }
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00953700 @ 00953700 ////

void __thiscall FUN_00953700(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = param_1;
  if (((param_1 != 0) && (uVar4 = FUN_00950bb0(param_1), (char)uVar4 != '\0')) &&
     (FUN_009535e0((void *)((int)this + 0x50),&param_1,iVar3), param_1 == (int)this + 100)) {
    piVar1 = (int *)(iVar3 + 0x48);
    piVar2 = (int *)((int)this + 100);
    *(int **)(iVar3 + 0x4c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00953750 @ 00953750 ////

void __fastcall FUN_00953750(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x58) != param_1 + 100) {
    do {
      piVar1 = *(int **)(param_1 + 0x58);
      piVar2 = (int *)piVar1[2];
      if ((int *)piVar1[1] != (int *)0x0) {
        *(int *)piVar1[1] = *piVar1;
      }
      if (*piVar1 != 0) {
        *(int *)(*piVar1 + 4) = piVar1[1];
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      uVar3 = FUN_00950b70(piVar2);
      if ((char)uVar3 != '\0') {
        FUN_00952280((int)piVar2);
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)*piVar2)(1);
      }
    } while (*(int *)(param_1 + 0x58) != param_1 + 100);
  }
  return;
}


//// FUNCTION FUN_009537c0 @ 009537c0 ////

void __fastcall FUN_009537c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6fb28;
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


//// FUNCTION FUN_00953810 @ 00953810 ////

undefined4 * __thiscall FUN_00953810(void *this,byte param_1)

{
  FUN_009537c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00953830 @ 00953830 ////

void __fastcall FUN_00953830(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3b2e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6fb34;
  local_4 = 2;
  if ((undefined4 *)param_1[0x16] != param_1 + 0x19) {
    do {
      if (*(undefined4 **)(param_1[0x16] + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1[0x16] + 8))(1);
      }
    } while ((undefined4 *)param_1[0x16] != param_1 + 0x19);
  }
  FUN_009537c0(param_1 + 0x14);
  param_1[0xe] = &PTR_FUN_00d35aac;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  if ((undefined4 *)param_1[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1[0xf] + 4) = param_1[0x10];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00953900 @ 00953900 ////

undefined4 * __thiscall FUN_00953900(void *this,byte param_1)

{
  FUN_00953830(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00953920 @ 00953920 ////

void __fastcall FUN_00953920(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6fb28;
  return;
}


//// FUNCTION FUN_00953980 @ 00953980 ////

undefined4 * __fastcall FUN_00953980(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3b89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d6fb34;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_1 + 0xe;
  param_1[0xe] = &PTR_FUN_00d35aac;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar1 = param_1 + 0x19;
  param_1[0x1b] = 0;
  *puVar1 = 0;
  param_1[0x1a] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x16] = puVar1;
  param_1[0x14] = &PTR_LAB_00d6fb28;
  *puVar1 = param_1 + 0x15;
  param_1[0x21] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00953a60 @ 00953a60 ////

int * __thiscall FUN_00953a60(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00953aa0 @ 00953aa0 ////

int * __thiscall FUN_00953aa0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00953bc0 @ 00953bc0 ////

void __cdecl FUN_00953bc0(int param_1)

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


//// FUNCTION FUN_00953be0 @ 00953be0 ////

void __cdecl FUN_00953be0(int *param_1)

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


//// FUNCTION FUN_00953c20 @ 00953c20 ////

void __thiscall FUN_00953c20(void *this,int *param_1)

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


//// FUNCTION FUN_00953e40 @ 00953e40 ////

void __fastcall FUN_00953e40(int *param_1)

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


//// FUNCTION FUN_00953f60 @ 00953f60 ////

void __fastcall FUN_00953f60(int *param_1)

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


//// FUNCTION FUN_00954060 @ 00954060 ////

void __thiscall FUN_00954060(void *this,int param_1)

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


//// FUNCTION FUN_009540c0 @ 009540c0 ////

void __cdecl FUN_009540c0(int param_1)

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


//// FUNCTION FUN_009540e0 @ 009540e0 ////

void __cdecl FUN_009540e0(int *param_1)

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


//// FUNCTION FUN_00954100 @ 00954100 ////

void __thiscall FUN_00954100(void *this,int *param_1)

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


//// FUNCTION FUN_00954170 @ 00954170 ////

void __thiscall FUN_00954170(void *this,int param_1)

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


//// FUNCTION FUN_009541d0 @ 009541d0 ////

void __cdecl FUN_009541d0(int param_1)

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


//// FUNCTION FUN_009541f0 @ 009541f0 ////

void __cdecl FUN_009541f0(int *param_1)

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


//// FUNCTION FUN_00954210 @ 00954210 ////

void __thiscall FUN_00954210(void *this,int *param_1)

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


//// FUNCTION FUN_009542e0 @ 009542e0 ////

void __fastcall FUN_009542e0(int *param_1)

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


//// FUNCTION FUN_00954340 @ 00954340 ////

void __fastcall FUN_00954340(int *param_1)

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


//// FUNCTION FUN_009543a0 @ 009543a0 ////

void __cdecl FUN_009543a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00954600 @ 00954600 ////

void FUN_00954600(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_010507c0;
  if (DAT_010507c0 != (undefined4 *)0x0) {
    iVar1 = DAT_010507c0[0x12];
    DAT_010507c0[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_010507ac[1])();
    DAT_010507c0 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00954640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_010507ac)();
    return;
  }
  return;
}


//// FUNCTION FUN_00954730 @ 00954730 ////

void __thiscall FUN_00954730(void *this,int param_1)

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


//// FUNCTION FUN_009547b0 @ 009547b0 ////

int * __fastcall FUN_009547b0(int *param_1)

{
  FUN_00953e40(param_1);
  return param_1;
}


//// FUNCTION FUN_00954870 @ 00954870 ////

int * __fastcall FUN_00954870(int *param_1)

{
  FUN_00953f60(param_1);
  return param_1;
}


//// FUNCTION FUN_009549c0 @ 009549c0 ////

int * __fastcall FUN_009549c0(int *param_1)

{
  FUN_009542e0(param_1);
  return param_1;
}


//// FUNCTION FUN_009549d0 @ 009549d0 ////

int * __fastcall FUN_009549d0(int *param_1)

{
  FUN_00954340(param_1);
  return param_1;
}


//// FUNCTION FUN_00954a20 @ 00954a20 ////

void __cdecl FUN_00954a20(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_00954ae0 @ 00954ae0 ////

void __fastcall FUN_00954ae0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d6fb3c;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00954b30 @ 00954b30 ////

void __fastcall FUN_00954b30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6fb3c;
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


//// FUNCTION FUN_00954be0 @ 00954be0 ////

int * __fastcall FUN_00954be0(int *param_1)

{
  FUN_00953e40(param_1);
  return param_1;
}


//// FUNCTION FUN_00954c40 @ 00954c40 ////

void __fastcall FUN_00954c40(int param_1)

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


//// FUNCTION FUN_00954cb0 @ 00954cb0 ////

int * __fastcall FUN_00954cb0(int *param_1)

{
  FUN_00953f60(param_1);
  return param_1;
}


//// FUNCTION FUN_00954d00 @ 00954d00 ////

void FUN_00954d00(void)

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


//// FUNCTION FUN_00954d50 @ 00954d50 ////

void FUN_00954d50(void)

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


//// FUNCTION FUN_00954da0 @ 00954da0 ////

void FUN_00954da0(void)

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


//// FUNCTION FUN_00954e60 @ 00954e60 ////

int * __fastcall FUN_00954e60(int *param_1)

{
  FUN_009542e0(param_1);
  return param_1;
}


//// FUNCTION FUN_00954e70 @ 00954e70 ////

int * __fastcall FUN_00954e70(int *param_1)

{
  FUN_00954340(param_1);
  return param_1;
}


//// FUNCTION FUN_00954ea0 @ 00954ea0 ////

void * FUN_00954ea0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_00954ed0 @ 00954ed0 ////

void __fastcall FUN_00954ed0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3ba8;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)param_1[6];
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[6] = 0;
  *param_1 = &PTR_FUN_00d35aac;
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
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00954f70 @ 00954f70 ////

void __fastcall FUN_00954f70(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d41350;
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


//// FUNCTION FUN_00954fe0 @ 00954fe0 ////

uint __fastcall FUN_00954fe0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar3 = param_1[5];
  if ((uVar3 != 0) && (*(char *)(uVar3 + 0x3f2) != '\0')) {
    if (param_1[6] != 0) {
      *(undefined1 *)(uVar3 + 0x3f5) = 0;
      uVar6 = 0;
      FUN_008d5670(param_1[6]);
      uVar5 = 0;
      FUN_008d5650(param_1[6]);
      uVar3 = (**(code **)(*(int *)param_1[6] + 0xc))(0x3f000000,uVar5,uVar6);
      puVar2 = (undefined4 *)param_1[6];
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          uVar3 = (**(code **)*puVar2)(1);
        }
      }
      param_1[6] = 0;
    }
    uVar4 = (undefined3)(uVar3 >> 8);
    if (((char)param_1[7] == '\0') &&
       (puVar2 = (undefined4 *)param_1[5], puVar2 != (undefined4 *)0x0)) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(*param_1 + 4))();
      param_1[5] = 0;
      (**(code **)*param_1)();
      uVar4 = extraout_var;
    }
    return CONCAT31(uVar4,1);
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00955080 @ 00955080 ////

void __fastcall FUN_00955080(int param_1)

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


//// FUNCTION FUN_009550e0 @ 009550e0 ////

void __thiscall FUN_009550e0(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_00955150 @ 00955150 ////

void __thiscall FUN_00955150(void *this,undefined4 *param_1,int param_2)

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
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d41350;
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


//// FUNCTION FUN_009551b0 @ 009551b0 ////

undefined4 * FUN_009551b0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_009551e0 @ 009551e0 ////

void __fastcall FUN_009551e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00955220 @ 00955220 ////

void __fastcall FUN_00955220(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00955260 @ 00955260 ////

void __fastcall FUN_00955260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_009552a0 @ 009552a0 ////

void __thiscall
FUN_009552a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined4 *)((int)this + 0x10) = &PTR_FUN_00d41350;
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


//// FUNCTION FUN_00955350 @ 00955350 ////

void __fastcall FUN_00955350(int param_1)

{
  FUN_00954f70(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_00955360 @ 00955360 ////

void __fastcall FUN_00955360(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d172b0;
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


//// FUNCTION FUN_009553b0 @ 009553b0 ////

void __fastcall FUN_009553b0(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d68ea8;
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


//// FUNCTION FUN_00955400 @ 00955400 ////

undefined4 * __thiscall FUN_00955400(void *this,byte param_1)

{
  FUN_00954ed0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00955420 @ 00955420 ////

void FUN_00955420(void)

{
  int *_Memory;
  uint uVar1;
  undefined4 *_Dst;
  undefined4 *_Src;
  
  _Dst = DAT_010507c8;
  _Src = DAT_010507c8;
  if (DAT_010507c8 != DAT_010507cc) {
    do {
      _Src = _Src + 1;
      _Memory = (int *)*_Dst;
      if (_Memory == (int *)0x0) {
        _memmove(_Dst,_Src,((int)DAT_010507cc - (int)_Src >> 2) << 2);
        DAT_010507cc = DAT_010507cc + -1;
      }
      else {
        uVar1 = FUN_00954fe0(_Memory);
        if ((char)uVar1 != '\0') {
          FUN_00954ed0(_Memory);
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
      }
      _Dst = _Dst + 1;
    } while (_Dst != DAT_010507cc);
  }
  return;
}


//// FUNCTION FUN_009554c0 @ 009554c0 ////

int __fastcall FUN_009554c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009554f0 @ 009554f0 ////

int __fastcall FUN_009554f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00955520 @ 00955520 ////

int __fastcall FUN_00955520(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00955550 @ 00955550 ////

void * FUN_00955550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_009552a0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00955590 @ 00955590 ////

void * __thiscall FUN_00955590(void *this,byte param_1)

{
  FUN_00955350((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009555b0 @ 009555b0 ////

void __fastcall FUN_009555b0(int param_1)

{
  FUN_00955360(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_009555c0 @ 009555c0 ////

void __fastcall FUN_009555c0(int param_1)

{
  FUN_009553b0(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_009555e0 @ 009555e0 ////

void * __thiscall FUN_009555e0(void *this,byte param_1)

{
  FUN_009555b0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00955600 @ 00955600 ////

void * __thiscall FUN_00955600(void *this,byte param_1)

{
  FUN_009555c0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00955630 @ 00955630 ////

void FUN_00955630(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_00955630(*(void **)((int)param_1 + 8));
    FUN_00955350((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00955690 @ 00955690 ////

void __thiscall FUN_00955690(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf3bc8;
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
  FUN_00953e40((int *)&param_2);
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
      goto LAB_009557fb;
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
      piVar2 = (int *)FUN_00953be0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_00953bc0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_009557fb:
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
            FUN_00954730(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_00953c20(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_00954730(this,(int)piVar6);
              break;
            }
LAB_009558c8:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_00953c20(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_009558c8;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_00954730(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_00953c20(this,piVar6);
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
  _Memory[4] = (int)&PTR_FUN_00d41350;
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


//// FUNCTION FUN_009559a0 @ 009559a0 ////

void __thiscall
FUN_009559a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf3be8;
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
  piVar3 = FUN_00955550(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00955a9b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00954730(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_00953c20(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_00955a9b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00953c20(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_00954730(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_00955b50 @ 00955b50 ////

void FUN_00955b50(void)

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
  puStack_8 = &LAB_00cf3c08;
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


//// FUNCTION FUN_00955bc0 @ 00955bc0 ////

void __fastcall FUN_00955bc0(int param_1)

{
  FUN_00955630(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00955c10 @ 00955c10 ////

undefined4 __thiscall FUN_00955c10(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piStack_4;
  
  piStack_4 = this;
  param_1 = (int *)(**(code **)(*param_1 + 0x80))();
  uVar2 = FUN_009550e0((void *)((int)this + 100),&piStack_4,(uint *)&param_1);
  piVar1 = piStack_4;
  if (piStack_4 != *(int **)((int)this + 0x68)) {
    if ((undefined4 *)piStack_4[9] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piStack_4[9])(1);
    }
    (**(code **)(piVar1[4] + 4))();
    piVar1[9] = 0;
    (**(code **)piVar1[4])();
    uVar3 = FUN_00955690((void *)((int)this + 100),&param_1,piVar1);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00955c90 @ 00955c90 ////

void __thiscall FUN_00955c90(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_009559a0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00953f60((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_009559a0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00955da0 @ 00955da0 ////

void __thiscall FUN_00955da0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00955b50();
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
      _Dst = FUN_009551b0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00954ea0(param_1,iVar5,param_1 + param_2);
      FUN_009551b0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_009543a0(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00954ea0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00954a20(param_1,(int)pvVar3,iVar5);
    FUN_009543a0(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00955f80 @ 00955f80 ////

void __thiscall FUN_00955f80(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00955630((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x29) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x29);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x29);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x29);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x29);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00955690(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00956040 @ 00956040 ////

void __thiscall FUN_00956040(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf3c28;
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
  FUN_009542e0((int *)&param_2);
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
      goto LAB_009561ab;
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
      piVar2 = (int *)FUN_009540e0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_009540c0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_009561ab:
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
            FUN_00954060(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_00954100(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_00954060(this,(int)piVar6);
              break;
            }
LAB_00956278:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_00954100(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_00956278;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_00954060(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_00954100(this,piVar6);
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
  _Memory[4] = (int)&PTR_FUN_00d172b0;
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


//// FUNCTION FUN_00956350 @ 00956350 ////

void __thiscall FUN_00956350(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf3c48;
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
  FUN_00954340((int *)&param_2);
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
      goto LAB_009564bb;
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
      piVar2 = (int *)FUN_009541f0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_009541d0((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_009564bb:
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
            FUN_00954170(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_00954210(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_00954170(this,(int)piVar6);
              break;
            }
LAB_00956588:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_00954210(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_00956588;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_00954170(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_00954210(this,piVar6);
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
  _Memory[4] = (int)&PTR_LAB_00d68ea8;
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


//// FUNCTION FUN_00956660 @ 00956660 ////

void FUN_00956660(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_00956660(*(void **)((int)param_1 + 8));
    FUN_009555b0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009566a0 @ 009566a0 ////

void FUN_009566a0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_009566a0(*(void **)((int)param_1 + 8));
    FUN_009555c0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_009566e0 @ 009566e0 ////

undefined4 * __thiscall FUN_009566e0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int aiStack_48 [2];
  undefined **ppuStack_40;
  int iStack_3c;
  int *piStack_38;
  undefined ***pppuStack_34;
  undefined4 *puStack_2c;
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3c7b;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  ExceptionList = &local_c;
  param_1 = (int *)(**(code **)(*param_1 + 0x80))();
  FUN_009550e0((void *)((int)this + 100),aiStack_48,(uint *)&param_1);
  if (aiStack_48[0] == *(int *)((int)this + 0x68)) {
    param_1 = operator_new(0x88);
    uStack_4 = 0;
    if (param_1 == (int *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_00953980(param_1);
    }
    pppuStack_34 = &ppuStack_40;
    iStack_3c = 0;
    piStack_38 = (int *)0x0;
    ppuStack_40 = &PTR_FUN_00d41350;
    if (puVar2 != (undefined4 *)0x0) {
      piStack_38 = puVar2 + 6;
      iStack_3c = *piStack_38;
      *(int **)(*piStack_38 + 4) = &iStack_3c;
      *piStack_38 = (int)&iStack_3c;
    }
    uStack_4 = 1;
    puStack_2c = puVar2;
    param_1 = (int *)(**(code **)(*piVar1 + 0x80))();
    puVar3 = (uint *)FUN_00955150(auStack_28,&param_1,(int)&ppuStack_40);
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    FUN_00955c90((void *)((int)this + 100),aiStack_48,puVar3);
    FUN_00954f70((int)auStack_28);
    FUN_006da010(&ppuStack_40);
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return *(undefined4 **)(aiStack_48[0] + 0x24);
}


//// FUNCTION FUN_00956840 @ 00956840 ////

uint __thiscall FUN_00956840(void *this,int *param_1)

{
  int *piVar1;
  uint in_EAX;
  int *piVar2;
  undefined4 *this_00;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  switch(param_1[0x22]) {
  case 0:
  case 1:
    piVar2 = (int *)(**(code **)(*param_1 + 4))();
    this_00 = FUN_009566e0(this,piVar2);
    break;
  default:
    goto switchD_00956866_caseD_2;
  case 4:
  case 8:
    this_00 = *(undefined4 **)((int)this + 0xb4);
    break;
  case 5:
  case 6:
    this_00 = *(undefined4 **)((int)this + 0xe4);
    break;
  case 9:
  case 10:
  case 0xb:
    this_00 = *(undefined4 **)((int)this + 0xcc);
    break;
  case 0xc:
    this_00 = *(undefined4 **)((int)this + 0x9c);
  }
  if (this_00 != (undefined4 *)0x0) {
    bVar5 = param_1[0x1a] == 0;
    if (!bVar5) goto LAB_009568c9;
    uVar3 = FUN_00950b70(param_1);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_00953700(this_00,(int)param_1);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
switchD_00956866_caseD_2:
  bVar5 = param_1[0x1a] == 0;
LAB_009568c9:
  if (!bVar5) {
    piVar2 = param_1 + 0xe;
    piVar1 = (int *)((int)this + 0x114);
    param_1[0xf] = (int)piVar1;
    *piVar2 = *piVar1;
    *(int **)(*piVar1 + 4) = piVar2;
    *piVar1 = (int)piVar2;
    return CONCAT31((int3)((uint)piVar2 >> 8),1);
  }
  if (param_1[0x22] == 7) {
    uVar3 = FUN_00953700(*(void **)((int)this + 0xfc),(int)param_1);
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  uVar4 = (**(code **)*param_1)(1);
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_009569d0 @ 009569d0 ////

void __fastcall FUN_009569d0(int param_1)

{
  FUN_00956660(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00956a00 @ 00956a00 ////

void __fastcall FUN_00956a00(int param_1)

{
  FUN_009566a0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00956c70 @ 00956c70 ////

void __thiscall FUN_00956c70(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00956660((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x29) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x29);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x29);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x29);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x29);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00956040(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00956d30 @ 00956d30 ////

void __thiscall FUN_00956d30(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_009566a0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x29) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x29);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x29);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x29);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x29);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00956350(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00956df0 @ 00956df0 ////

void __fastcall FUN_00956df0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00955f80(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00956e20 @ 00956e20 ////

void __cdecl FUN_00956e20(int *param_1,float *param_2,int param_3,char param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_4;
  
  piVar3 = operator_new(0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[3] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = (int)piVar3;
    *piVar3 = (int)&PTR_FUN_00d35aac;
    piVar3[5] = 0;
    piVar3[6] = 0;
  }
  local_4 = piVar3;
  (**(code **)(*piVar3 + 4))();
  piVar3[5] = (int)param_1;
  (**(code **)*piVar3)();
  *(undefined1 *)(piVar3 + 7) = 0;
  if (param_4 == '\0') {
    puVar2 = (undefined4 *)piVar3[6];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    piVar3[6] = 0;
  }
  else {
    *(undefined1 *)(piVar3 + 7) = 1;
    puVar4 = FUN_006da130(param_1,param_2,param_3);
    puVar2 = (undefined4 *)piVar3[6];
    if (puVar2 != puVar4) {
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      piVar3[6] = (int)puVar4;
    }
  }
  if ((DAT_010507c8 != 0) &&
     ((uint)((int)DAT_010507cc - DAT_010507c8 >> 2) < (uint)(DAT_010507d0 - DAT_010507c8 >> 2))) {
    *DAT_010507cc = piVar3;
    DAT_010507cc = DAT_010507cc + 1;
    return;
  }
  FUN_00955da0(&DAT_010507c4,DAT_010507cc,1,&local_4);
  return;
}


//// FUNCTION FUN_00956f10 @ 00956f10 ////

int __fastcall FUN_00956f10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00957000 @ 00957000 ////

void __fastcall FUN_00957000(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00956c70(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00957030 @ 00957030 ////

void __fastcall FUN_00957030(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00956d30(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00957060 @ 00957060 ////

void __fastcall FUN_00957060(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3d0d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6fb4c;
  local_4 = 9;
  if (param_1[0x1b] != 0) {
    do {
      if (*(undefined4 **)(*(int *)param_1[0x1a] + 0x24) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(*(int *)param_1[0x1a] + 0x24))(1);
      }
      iVar1 = *(int *)param_1[0x1a];
      (**(code **)(*(int *)(iVar1 + 0x10) + 4))();
      *(undefined4 *)(iVar1 + 0x24) = 0;
      (*(code *)**(undefined4 **)(iVar1 + 0x10))();
      FUN_00955690(param_1 + 0x19,&uStack_10,*(int **)param_1[0x1a]);
    } while (param_1[0x1b] != 0);
  }
  if ((undefined4 *)param_1[0x42] != param_1 + 0x45) {
    do {
      piVar2 = (int *)param_1[0x42];
      puVar3 = (undefined4 *)piVar2[2];
      if ((int *)piVar2[1] != (int *)0x0) {
        *(int *)piVar2[1] = *piVar2;
      }
      if (*piVar2 != 0) {
        *(int *)(*piVar2 + 4) = piVar2[1];
      }
      *piVar2 = 0;
      piVar2[1] = 0;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    } while ((undefined4 *)param_1[0x42] != param_1 + 0x45);
  }
  while ((DAT_010507c8 != (undefined4 *)0x0 && (DAT_010507cc - (int)DAT_010507c8 >> 2 != 0))) {
    puVar3 = (undefined4 *)*DAT_010507c8;
    _memmove(DAT_010507c8,DAT_010507c8 + 1,(DAT_010507cc - (int)(DAT_010507c8 + 1) >> 2) << 2);
    DAT_010507cc = DAT_010507cc + -4;
    if (puVar3 != (undefined4 *)0x0) {
      FUN_00954ed0(puVar3);
                    /* WARNING: Subroutine does not return */
      _free(puVar3);
    }
  }
  if ((undefined4 *)param_1[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x39])(1);
  }
  (**(code **)(param_1[0x34] + 4))();
  param_1[0x39] = 0;
  (**(code **)param_1[0x34])();
  if ((undefined4 *)param_1[0x2d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x2d])(1);
  }
  (**(code **)(param_1[0x28] + 4))();
  param_1[0x2d] = 0;
  (**(code **)param_1[0x28])();
  if ((undefined4 *)param_1[0x33] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x33])(1);
  }
  (**(code **)(param_1[0x2e] + 4))();
  param_1[0x33] = 0;
  (**(code **)param_1[0x2e])();
  if ((undefined4 *)param_1[0x3f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3f])(1);
  }
  (**(code **)(param_1[0x3a] + 4))();
  param_1[0x3f] = 0;
  (**(code **)param_1[0x3a])();
  if ((undefined4 *)param_1[0x27] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x27])(1);
  }
  (**(code **)(param_1[0x22] + 4))();
  param_1[0x27] = 0;
  (**(code **)param_1[0x22])();
  FUN_009537c0(param_1 + 0x40);
  param_1[0x3a] = &PTR_FUN_00d41350;
  if ((undefined4 *)param_1[0x3c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3c] = param_1[0x3b];
  }
  if (param_1[0x3b] != 0) {
    *(undefined4 *)(param_1[0x3b] + 4) = param_1[0x3c];
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = 0;
  if ((undefined4 *)param_1[0x3c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3c] = param_1[0x3b];
  }
  if (param_1[0x3b] != 0) {
    *(undefined4 *)(param_1[0x3b] + 4) = param_1[0x3c];
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x34] = &PTR_FUN_00d41350;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  if ((undefined4 *)param_1[0x36] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x36] = param_1[0x35];
  }
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1[0x35] + 4) = param_1[0x36];
  }
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x2e] = &PTR_FUN_00d41350;
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
  param_1[0x28] = &PTR_FUN_00d41350;
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
  param_1[0x22] = &PTR_FUN_00d41350;
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
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00956d30(param_1 + 0x1f,&uStack_10,*(int **)param_1[0x20],(int *)param_1[0x20]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x20]);
}


//// FUNCTION FUN_00957500 @ 00957500 ////

int __fastcall FUN_00957500(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954d50();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00957530 @ 00957530 ////

int __fastcall FUN_00957530(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00954da0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00957560 @ 00957560 ////

undefined4 * __fastcall FUN_00957560(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3dea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  puVar5 = (undefined4 *)0x0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6fb4c;
  iVar3 = FUN_00954d00();
  param_1[0x1a] = iVar3;
  *(undefined1 *)(iVar3 + 0x29) = 1;
  *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1a];
  *(undefined4 *)param_1[0x1a] = param_1[0x1a];
  *(undefined4 *)(param_1[0x1a] + 8) = param_1[0x1a];
  param_1[0x1b] = 0;
  local_4._0_1_ = 1;
  iVar3 = FUN_00954d50();
  param_1[0x1d] = iVar3;
  *(undefined1 *)(iVar3 + 0x29) = 1;
  *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1d];
  *(undefined4 *)param_1[0x1d] = param_1[0x1d];
  *(undefined4 *)(param_1[0x1d] + 8) = param_1[0x1d];
  param_1[0x1e] = 0;
  local_4._0_1_ = 2;
  iVar3 = FUN_00954da0();
  param_1[0x20] = iVar3;
  *(undefined1 *)(iVar3 + 0x29) = 1;
  *(undefined4 *)(param_1[0x20] + 4) = param_1[0x20];
  *(undefined4 *)param_1[0x20] = param_1[0x20];
  *(undefined4 *)(param_1[0x20] + 8) = param_1[0x20];
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_1 + 0x22;
  param_1[0x22] = &PTR_FUN_00d41350;
  param_1[0x27] = 0;
  piVar1 = param_1 + 0x28;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d41350;
  param_1[0x2d] = 0;
  piVar2 = param_1 + 0x2e;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d41350;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = param_1 + 0x34;
  param_1[0x34] = &PTR_FUN_00d41350;
  param_1[0x39] = 0;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = param_1 + 0x3a;
  param_1[0x3a] = &PTR_FUN_00d41350;
  param_1[0x3f] = 0;
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  puVar4 = param_1 + 0x45;
  param_1[0x47] = 0;
  *puVar4 = 0;
  param_1[0x46] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x40] = &PTR_LAB_00d6fb28;
  param_1[0x42] = puVar4;
  *puVar4 = param_1 + 0x41;
  local_4._0_1_ = 0xb;
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar4 = operator_new(0x88);
  local_4._0_1_ = 0xc;
  if (puVar4 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = FUN_00953980(puVar4);
  }
  local_4._0_1_ = 0xb;
  (**(code **)(*piVar1 + 4))();
  param_1[0x2d] = local_14;
  (**(code **)*piVar1)();
  puVar4 = operator_new(0x88);
  local_4._0_1_ = 0xd;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00953980(puVar4);
  }
  local_4._0_1_ = 0xb;
  (**(code **)(*piVar2 + 4))();
  param_1[0x33] = puVar4;
  (**(code **)*piVar2)();
  puVar4 = operator_new(0x88);
  local_4._0_1_ = 0xe;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00953980(puVar4);
  }
  local_4._0_1_ = 0xb;
  (**(code **)(param_1[0x34] + 4))();
  param_1[0x39] = puVar4;
  (**(code **)param_1[0x34])();
  puVar4 = operator_new(0x88);
  local_4._0_1_ = 0xf;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00953980(puVar4);
  }
  local_4._0_1_ = 0xb;
  (**(code **)(param_1[0x3a] + 4))();
  param_1[0x3f] = puVar4;
  (**(code **)param_1[0x3a])();
  puVar4 = operator_new(0x88);
  local_4._0_1_ = 0x10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = FUN_00953980(puVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,0xb);
  (**(code **)(param_1[0x22] + 4))();
  param_1[0x27] = puVar5;
  (**(code **)param_1[0x22])();
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00957850 @ 00957850 ////

undefined4 * __thiscall FUN_00957850(void *this,byte param_1)

{
  FUN_00957060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00957870 @ 00957870 ////

void FUN_00957870(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3e0b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_010507c0 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x134);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_00957560(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_010507ac[1])();
    DAT_010507c0 = puVar2;
    (*(code *)*DAT_010507ac)();
    PipSystem_LoadTuningConfig();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009579d0 @ 009579d0 ////

uint __fastcall FUN_009579d0(int *param_1)

{
  bool bVar1;
  char extraout_AL;
  undefined4 uVar2;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 uVar4;
  uint uVar3;
  
  (**(code **)(*param_1 + 0xc))();
  uVar2 = FUN_00950af0((int)param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_00950c00((int)param_1);
    if (bVar1) {
      bVar1 = FUN_00950ac0((int)param_1);
      if (bVar1) {
        param_1[0x3d] = (int)(param_1 + 0x2c);
      }
      else {
        param_1[0x3d] = (int)(param_1 + 0x24);
      }
      uVar4 = extraout_var;
      if ((param_1[0x5d] == 7) && ((int *)param_1[0x5c] != (int *)0x0)) {
        (**(code **)(*(int *)param_1[0x5c] + 0x1c4))();
        uVar4 = extraout_var_00;
        if (extraout_AL != '\0') {
          param_1[0x3d] = 0;
          return (uint)extraout_var_00 << 8;
        }
      }
      return CONCAT31(uVar4,1);
    }
  }
  uVar3 = FUN_00950b20((int)param_1);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00957a50 @ 00957a50 ////

void __fastcall FUN_00957a50(int param_1)

{
  int *piVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xf9) == '\0') {
    FUN_00950970(param_1);
    uVar3 = FUN_00acd42c();
    *(int *)(param_1 + 0x60) = (int)uVar3;
  }
  piVar1 = *(int **)(param_1 + 0x170);
  if (piVar1 != (int *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x174)) {
    case 0:
      fVar2 = FUN_00590e40(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 1:
      fVar2 = FUN_005891c0(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 2:
      fVar2 = FUN_00590df0(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 3:
      fVar2 = FUN_00586490((float)piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 4:
      fVar2 = FUN_005891f0((float)piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 5:
      fVar2 = FUN_005903e0(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 6:
      fVar2 = FUN_00589220(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
      return;
    case 7:
      fVar2 = FUN_00589250(piVar1);
      *(float *)(param_1 + 100) = (float)fVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00957b90 @ 00957b90 ////

undefined4 * __thiscall FUN_00957b90(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3e28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6fbe0;
  *(int *)((int)this + 0x174) = param_3;
  *(undefined4 *)((int)this + 0x68) = DAT_010506ec;
  *(undefined4 *)((int)this + 0x58) = (&DAT_01050760)[param_3];
  local_4 = 0;
  *(undefined1 *)((int)this + 0xf9) = 0;
  FUN_00957a50((int)this);
  switch(param_3) {
  case 1:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_ASSIGN_ENTOURAGE_STAR_INCREASED");
    pcVar1 = "PIP_ASSIGN_ENTOURAGE_STAR_DECREASED";
    break;
  case 2:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_STAR_IMAGE_UP");
    pcVar1 = "PIP_STAR_IMAGE_DOWN";
    break;
  default:
    goto switchD_00957c01_caseD_3;
  case 4:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_PRESSEVENT_OR_PR_UP");
    pcVar1 = "PIP_PRESSEVENT_OR_PR_DOWN";
    break;
  case 5:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_RELATIONSHIP_INTERACTION_UP");
    pcVar1 = "PIP_RELATIONSHIP_INTERACTION_DOWN";
    break;
  case 7:
    FUN_00403e20((void *)((int)this + 0x90),"PIP_STAR_TRAILER_INCREASED");
    pcVar1 = "PIP_STAR_TRAILER_DECREASED";
  }
  FUN_00403e20((void *)((int)this + 0xb0),pcVar1);
switchD_00957c01_caseD_3:
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00957cc0 @ 00957cc0 ////

void __cdecl FUN_00957cc0(void *param_1)

{
  void *this;
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3e97;
  local_c = ExceptionList;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    this = operator_new(0x178);
    local_4 = 0;
    if (this == (void *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = FUN_00957b90(this,0,param_1,1);
    }
    local_4 = 0xffffffff;
    FUN_005945f0(param_1,piVar1);
    piVar1 = operator_new(0x178);
    local_4 = 1;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00952fa0(piVar1,0,param_1);
      *piVar1 = (int)&PTR_FUN_00d6fbe0;
      piVar1[0x5d] = 2;
      local_4 = CONCAT31(local_4._1_3_,2);
      piVar1[0x1a] = DAT_010506ec;
      piVar1[0x16] = DAT_01050768;
      *(undefined1 *)((int)piVar1 + 0xf9) = 0;
      FUN_00957a50((int)piVar1);
      FUN_00403e20(piVar1 + 0x24,"PIP_STAR_IMAGE_UP");
      FUN_00403e20(piVar1 + 0x2c,"PIP_STAR_IMAGE_DOWN");
    }
    local_4 = 0xffffffff;
    FUN_005945f0(param_1,piVar1);
    piVar1 = operator_new(0x178);
    local_4 = 3;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00952fa0(piVar1,0,param_1);
      *piVar1 = (int)&PTR_FUN_00d6fbe0;
      piVar1[0x5d] = 4;
      local_4 = CONCAT31(local_4._1_3_,4);
      piVar1[0x1a] = DAT_010506ec;
      piVar1[0x16] = DAT_01050770;
      *(undefined1 *)((int)piVar1 + 0xf9) = 0;
      FUN_00957a50((int)piVar1);
      FUN_00403e20(piVar1 + 0x24,"PIP_PRESSEVENT_OR_PR_UP");
      FUN_00403e20(piVar1 + 0x2c,"PIP_PRESSEVENT_OR_PR_DOWN");
    }
    local_4 = 0xffffffff;
    FUN_005945f0(param_1,piVar1);
    piVar1 = operator_new(0x178);
    local_4 = 5;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00952fa0(piVar1,0,param_1);
      *piVar1 = (int)&PTR_FUN_00d6fbe0;
      piVar1[0x5d] = 5;
      piVar1[0x1a] = DAT_010506ec;
      local_4 = CONCAT31(local_4._1_3_,6);
      piVar1[0x16] = DAT_01050774;
      *(undefined1 *)((int)piVar1 + 0xf9) = 0;
      FUN_00957a50((int)piVar1);
      FUN_00403e20(piVar1 + 0x24,"PIP_RELATIONSHIP_INTERACTION_UP");
      FUN_00403e20(piVar1 + 0x2c,"PIP_RELATIONSHIP_INTERACTION_DOWN");
    }
    local_4 = 0xffffffff;
    FUN_005945f0(param_1,piVar1);
    piVar1 = operator_new(0x178);
    local_4 = 7;
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_00952fa0(piVar1,0,param_1);
      *piVar1 = (int)&PTR_FUN_00d6fbe0;
      piVar1[0x5d] = 7;
      piVar1[0x1a] = DAT_010506ec;
      piVar1[0x16] = DAT_0105077c;
      local_4 = CONCAT31(local_4._1_3_,8);
      *(undefined1 *)((int)piVar1 + 0xf9) = 0;
      FUN_00957a50((int)piVar1);
      FUN_00403e20(piVar1 + 0x24,"PIP_STAR_TRAILER_INCREASED");
      FUN_00403e20(piVar1 + 0x2c,"PIP_STAR_TRAILER_DECREASED");
    }
    local_4 = 0xffffffff;
    FUN_005945f0(param_1,piVar1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00957f60 @ 00957f60 ////

undefined4 * __thiscall FUN_00957f60(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_00952fa0(this,param_1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6fbf4;
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_MINOR_ROLE",0xe);
  return this;
}


//// FUNCTION FUN_00957fd0 @ 00957fd0 ////

undefined4 * __thiscall FUN_00957fd0(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00957ff0 @ 00957ff0 ////

undefined4 * __thiscall FUN_00957ff0(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958080 @ 00958080 ////

undefined4 * __thiscall FUN_00958080(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958110 @ 00958110 ////

undefined4 * __thiscall FUN_00958110(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958140 @ 00958140 ////

undefined4 * __thiscall FUN_00958140(void *this,byte param_1)

{
  thunk_FUN_00950370(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009581f0 @ 009581f0 ////

undefined4 __fastcall FUN_009581f0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  (**(code **)(*param_1 + 0xc))();
  uVar1 = FUN_00950af0((int)param_1);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_00acd42c();
    uVar4 = FUN_00acd42c();
    if ((int)uVar3 < (int)uVar4) {
      param_1[0x3d] = (int)(param_1 + 0x24);
      return CONCAT31((int3)(uVar4 >> 8),1);
    }
  }
  uVar2 = FUN_00950b20((int)param_1);
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_00958250 @ 00958250 ////

undefined4 __fastcall FUN_00958250(int *param_1)

{
  undefined4 uVar1;
  undefined3 uVar3;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  
  (**(code **)(*param_1 + 0xc))();
  uVar1 = FUN_00950af0((int)param_1);
  if ((char)uVar1 != '\0') {
    uVar4 = FUN_00acd42c();
    uVar5 = FUN_00acd42c();
    uVar3 = (undefined3)(uVar5 >> 8);
    if ((int)uVar5 < (int)uVar4) {
      param_1[0x3d] = (int)(param_1 + 0x24);
      return CONCAT31(uVar3,1);
    }
    if ((int)uVar4 < (int)uVar5) {
      param_1[0x3d] = (int)(param_1 + 0x2c);
      return CONCAT31(uVar3,1);
    }
  }
  uVar2 = FUN_00950b20((int)param_1);
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009582c0 @ 009582c0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009582c0(undefined4 *param_1)

{
  _DAT_010507d8 = *param_1;
  _DAT_010507dc = param_1[1];
  _DAT_010507e0 = param_1[2];
  DAT_010507d4 = 1;
  return;
}


//// FUNCTION FUN_009582f0 @ 009582f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_009582f0(undefined4 *param_1)

{
  _DAT_010507e4 = *param_1;
  _DAT_010507e8 = param_1[1];
  _DAT_010507ec = param_1[2];
  DAT_010507d5 = 1;
  return;
}


//// FUNCTION FUN_00958320 @ 00958320 ////

undefined1 __fastcall FUN_00958320(int *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_1 + 0xc))();
  uVar1 = FUN_00950af0((int)param_1);
  if ((char)uVar1 == '\0') {
    FUN_00950b20((int)param_1);
    return 0;
  }
  uVar2 = FUN_00acd42c();
  uVar3 = FUN_00acd42c();
  if ((int)uVar3 < (int)uVar2) {
    param_1[0x3d] = (int)(param_1 + 0x24);
  }
  else {
    if (param_1[0x57] != 2) {
      return 0;
    }
    if ((int)uVar3 <= (int)uVar2) {
      return 0;
    }
    param_1[0x3d] = (int)(param_1 + 0x2c);
  }
  if (param_1[0x57] == 2) {
    if (DAT_010507d4 == '\0') {
      return 0;
    }
    FUN_00950a70(param_1,(undefined4 *)&DAT_010507d8);
    DAT_010507d4 = 0;
    return 1;
  }
  if (param_1[0x57] == 3) {
    if (DAT_010507d5 == '\0') {
      return 0;
    }
    FUN_00950a70(param_1,(undefined4 *)&DAT_010507e4);
    DAT_010507d5 = '\0';
  }
  return 1;
}


//// FUNCTION FUN_009583f0 @ 009583f0 ////

undefined4 __fastcall FUN_009583f0(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  (**(code **)(*param_1 + 0xc))();
  uVar2 = FUN_00950af0((int)param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_00950a90((int)param_1);
    if (bVar1) {
      param_1[0x3d] = (int)(param_1 + 0x24);
      return CONCAT31(extraout_var,1);
    }
  }
  uVar3 = FUN_00950b20((int)param_1);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00958430 @ 00958430 ////

undefined4 __fastcall FUN_00958430(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  (**(code **)(*param_1 + 0xc))();
  uVar2 = FUN_00950af0((int)param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_00950a90((int)param_1);
    if (bVar1) {
      param_1[0x3d] = (int)(param_1 + 0x24);
      return CONCAT31(extraout_var,1);
    }
  }
  uVar3 = FUN_00950b20((int)param_1);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00958470 @ 00958470 ////

void __fastcall FUN_00958470(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6fc8c;
  FUN_00952ac0(param_1);
  return;
}


//// FUNCTION FUN_00958480 @ 00958480 ////

uint __fastcall FUN_00958480(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 0xc))();
  uVar2 = FUN_00950af0((int)param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = FUN_00950a90((int)param_1);
    if (bVar1) {
      param_1[0x45] = 1;
      return 1;
    }
  }
  uVar3 = FUN_00950b20((int)param_1);
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009584c0 @ 009584c0 ////

uint __fastcall FUN_009584c0(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  uint uVar5;
  
  (**(code **)(*param_1 + 0xc))();
  uVar4 = FUN_00950af0((int)param_1);
  if ((char)uVar4 != '\0') {
    bVar3 = FUN_00950ac0((int)param_1);
    if (bVar3) {
      fVar1 = (float)param_1[0x58];
      fVar2 = (float)param_1[0x59];
      if (fVar2 != fVar1) {
        param_1[0x3d] = (int)(param_1 + 0x2c);
        return CONCAT31((int3)(CONCAT22(extraout_var,
                                        (ushort)(fVar2 < fVar1) << 8 |
                                        (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                                        (ushort)(fVar2 == fVar1) << 0xe) >> 8),1);
      }
    }
  }
  uVar5 = FUN_00950b20((int)param_1);
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_00958580 @ 00958580 ////

undefined4 * __thiscall FUN_00958580(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009587f0 @ 009587f0 ////

undefined4 * __thiscall FUN_009587f0(void *this,byte param_1)

{
  FUN_00958470(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958810 @ 00958810 ////

undefined4 __fastcall FUN_00958810(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00950af0(param_1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_00acd42c();
    if ((int)uVar2 < *(int *)(param_1 + 0x60)) {
      uVar1 = FUN_00461dd0();
    }
    else {
      uVar1 = DAT_00f89024;
      if ((int)uVar2 <= *(int *)(param_1 + 0x60)) goto LAB_00958858;
    }
    (**(code **)(*(int *)(param_1 + 0x70) + 4))();
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    (*(code *)**(undefined4 **)(param_1 + 0x70))();
  }
LAB_00958858:
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = FUN_00461dd0();
    (**(code **)(*(int *)(param_1 + 0x70) + 4))();
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    (*(code *)**(undefined4 **)(param_1 + 0x70))();
    uVar1 = DAT_00f89024;
    if (*(int *)(param_1 + 0x84) == 0) {
      (**(code **)(*(int *)(param_1 + 0x70) + 4))();
      *(undefined4 *)(param_1 + 0x84) = uVar1;
      (*(code *)**(undefined4 **)(param_1 + 0x70))();
    }
  }
  return *(undefined4 *)(param_1 + 0x84);
}


//// FUNCTION FUN_009588b0 @ 009588b0 ////

void __fastcall FUN_009588b0(int *param_1)

{
  uint uVar1;
  float10 fVar2;
  ulonglong uVar3;
  
  if (*(char *)((int)param_1 + 0xf9) == '\0') {
    uVar3 = FUN_00acd42c();
    uVar1 = (int)(uint)uVar3 >> 0x1f;
    param_1[0x18] = ((uint)uVar3 ^ uVar1) - uVar1;
  }
  if (param_1[0x21] != 0) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
    param_1[0x19] = (int)(float)fVar2;
  }
  return;
}


//// FUNCTION FUN_009588f0 @ 009588f0 ////

undefined4 __fastcall FUN_009588f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  (**(code **)(*param_1 + 0xc))();
  uVar1 = FUN_00950af0((int)param_1);
  if ((char)uVar1 != '\0') {
    uVar4 = FUN_00acd42c();
    iVar2 = DAT_00f89024;
    uVar1 = (uint)uVar4;
    if ((int)uVar1 < param_1[0x18]) {
      iVar2 = FUN_00461dd0();
      (**(code **)(param_1[0x1c] + 4))();
      param_1[0x21] = iVar2;
      uVar3 = (**(code **)param_1[0x1c])();
      param_1[0x3d] = (int)(param_1 + 0x2c);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
    if (param_1[0x18] < (int)uVar1) {
      (**(code **)(param_1[0x1c] + 4))();
      param_1[0x21] = iVar2;
      uVar3 = (**(code **)param_1[0x1c])();
      param_1[0x3d] = (int)(param_1 + 0x24);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_009589c0 @ 009589c0 ////

undefined4 * __thiscall FUN_009589c0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 7;
  uVar1 = GetPlayerStudio();
  FUN_00953040(this,param_1,uVar1,uVar2);
  *(undefined ***)this = &PTR_FUN_00d6fcbc;
  *(undefined4 *)((int)this + 0x58) = DAT_01050730;
  *(undefined4 *)((int)this + 0x68) = DAT_010506fc;
  *(undefined1 *)((int)this + 0xfb) = 1;
  return this;
}


//// FUNCTION FUN_00958a00 @ 00958a00 ////

undefined4 * __thiscall FUN_00958a00(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958b30 @ 00958b30 ////

undefined4 * __thiscall FUN_00958b30(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958b60 @ 00958b60 ////

undefined4 * __thiscall FUN_00958b60(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3eb8;
  local_c = ExceptionList;
  uVar4 = 1;
  ExceptionList = &local_c;
  uVar1 = GetPlayerStudio();
  FUN_00953040(this,param_1,uVar1,uVar4);
  *(undefined ***)this = &PTR_FUN_00d6fd20;
  *(undefined4 *)((int)this + 0x68) = DAT_010506f8;
  local_4 = 0;
  FUN_004015d0((void *)((int)this + 0x90),"PIP_PLACING_APPEARANCE_UP",0x19);
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_PLACING_APPEARANCE_DOWN",0x1b);
  if (*(char *)((int)this + 0xf9) == '\0') {
    uVar3 = FUN_00acd42c();
    *(int *)((int)this + 0x60) = (int)uVar3;
    *(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 100);
  }
  puVar2 = (undefined4 *)FUN_00452af0(DAT_00f88720,&param_1);
  *(undefined4 *)((int)this + 100) = *puVar2;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00958c20 @ 00958c20 ////

undefined4 * __thiscall FUN_00958c20(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958ca0 @ 00958ca0 ////

undefined4 * __thiscall FUN_00958ca0(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958d20 @ 00958d20 ////

undefined4 * __thiscall FUN_00958d20(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958d50 @ 00958d50 ////

undefined4 * __fastcall FUN_00958d50(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3ed8;
  pvStack_c = ExceptionList;
  uVar3 = 6;
  ExceptionList = &pvStack_c;
  uVar1 = GetPlayerStudio();
  FUN_00953040(param_1,0xc,uVar1,uVar3);
  *param_1 = &PTR_FUN_00d6fc8c;
  local_4 = 0;
  param_1[0x1a] = DAT_01050704;
  FUN_004015d0(param_1 + 0x24,"PIP_LITTER_TIDIED",0x11);
  FUN_004015d0(param_1 + 0x2c,"PIP_LITTER_INCREASE",0x13);
  *(undefined1 *)((int)param_1 + 0xfb) = 1;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  uVar1 = FUN_00461dd0();
  (**(code **)(param_1[0x1c] + 4))();
  param_1[0x21] = uVar1;
  (**(code **)param_1[0x1c])();
  puVar2 = (undefined4 *)FUN_00466290(&fStack_10);
  param_1[0x19] = *puVar2;
  *(undefined1 *)((int)param_1 + 0xf9) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_00958e20 @ 00958e20 ////

undefined4 * __thiscall FUN_00958e20(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 9;
  uVar1 = GetPlayerStudio();
  FUN_00953040(this,param_1,uVar1,uVar2);
  *(undefined ***)this = &PTR_FUN_00d6fdcc;
  *(undefined4 *)((int)this + 0x58) = DAT_01050750;
  *(undefined4 *)((int)this + 0x68) = DAT_01050708;
  FUN_004015d0((void *)((int)this + 0x90),"PIP_INCOME",10);
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_EXPENDITURE",0xf);
  return this;
}


//// FUNCTION FUN_00958e80 @ 00958e80 ////

undefined4 * __thiscall FUN_00958e80(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958f10 @ 00958f10 ////

undefined4 * __thiscall FUN_00958f10(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00958f40 @ 00958f40 ////

undefined4 * __thiscall FUN_00958f40(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  uVar1 = GetPlayerStudio();
  FUN_00953040(this,param_1,uVar1,param_2);
  *(undefined ***)this = &PTR_FUN_00d6fe74;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x68) = DAT_010506fc;
  *(undefined1 *)((int)this + 0xfb) = 1;
  switch(*(undefined4 *)((int)this + 0x15c)) {
  case 2:
    pcVar2 = "PIP_PLACING_PATH";
    break;
  case 3:
    pcVar2 = "PIP_PLACING_ORNAMENT";
    break;
  case 4:
    pcVar2 = "PIP_PLACING_CATERING";
    break;
  case 5:
    pcVar2 = "PIP_PLACING_TOILETS";
    break;
  default:
    goto switchD_00958f8a_default;
  }
  FUN_00403e20((void *)((int)this + 0x90),pcVar2);
switchD_00958f8a_default:
  FUN_004015d0((void *)((int)this + 0xb0),*(char **)((int)this + 0x90),*(uint *)((int)this + 0x94));
  FUN_004073f0((void *)((int)this + 0xb0),"_DOWN",5);
  FUN_004073f0((void *)((int)this + 0x90),"_UP",3);
  return this;
}


//// FUNCTION FUN_00959010 @ 00959010 ////

undefined4 * __thiscall FUN_00959010(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00959040 @ 00959040 ////

undefined4 * __thiscall FUN_00959040(void *this,undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  void *this_00;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3ef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = GetPlayerStudio();
  FUN_00952d30(this,7,uVar1);
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_00d6fe8c;
  *(int *)((int)this + 0x15c) = param_2;
  *(undefined1 *)((int)this + 0x5f) = 0;
  if (param_2 < 0) {
    this_00 = (void *)((int)this + 0xb0);
    FUN_004015d0(this_00,"$",1);
    uVar3 = (int)*(uint *)((int)this + 0x15c) >> 0x1f;
    sVar2 = _sprintf(local_4c,(char *)&param_2_00d1b93c,
                     (*(uint *)((int)this + 0x15c) ^ uVar3) - uVar3);
  }
  else {
    this_00 = (void *)((int)this + 0x90);
    FUN_004015d0(this_00,"$",1);
    uVar3 = (int)*(uint *)((int)this + 0x15c) >> 0x1f;
    sVar2 = _sprintf(local_4c,(char *)&param_2_00d1b93c,
                     (*(uint *)((int)this + 0x15c) ^ uVar3) - uVar3);
  }
  FUN_004073f0(this_00,local_4c,sVar2);
  FUN_00950a70(this,param_1);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00959120 @ 00959120 ////

undefined4 * __thiscall FUN_00959120(void *this,byte param_1)

{
  thunk_FUN_00952ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00959150 @ 00959150 ////

undefined4 * __thiscall FUN_00959150(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00952d30(this,1,param_1);
  *(undefined ***)this = &PTR_FUN_00d6feb4;
  piVar1 = (int *)((int)this + 0x160);
  *(undefined4 *)((int)this + 0x168) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 **)((int)this + 0x168) = (undefined4 *)((int)this + 0x15c);
  *(undefined4 *)((int)this + 0x15c) = &PTR_LAB_00d1e3c4;
  *(int *)((int)this + 0x170) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x164) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  FUN_004015d0((void *)((int)this + 0xb0),"PIP_LOWSETREPAIR",0x10);
  return this;
}


//// FUNCTION FUN_009591c0 @ 009591c0 ////

undefined4 * __thiscall FUN_009591c0(void *this,byte param_1)

{
  FUN_009591e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009591e0 @ 009591e0 ////

void __fastcall FUN_009591e0(undefined4 *param_1)

{
  param_1[0x57] = &PTR_LAB_00d1e3c4;
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x59] = param_1[0x58];
  }
  if (param_1[0x58] != 0) {
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x59] = param_1[0x58];
  }
  if (param_1[0x58] != 0) {
    *(undefined4 *)(param_1[0x58] + 4) = param_1[0x59];
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  FUN_00952ac0(param_1);
  return;
}


//// FUNCTION FUN_009592d0 @ 009592d0 ////

undefined4 * __fastcall FUN_009592d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3f26;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  piVar1 = param_1 + 0x34;
  *param_1 = &PTR_FUN_00d6fec8;
  param_1[0x36] = 0;
  *piVar1 = 0;
  param_1[0x35] = 0;
  local_4 = 1;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe66798);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x37] = iVar2;
  if (DAT_00e66794 != '\0') {
    iVar2 = 0xd0;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe66798);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e66794 = '\0';
  }
  param_1[0x35] = &DAT_01050804;
  *piVar1 = (int)DAT_01050804;
  *(int **)((int)DAT_01050804 + 4) = piVar1;
  DAT_01050804 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009593d0 @ 009593d0 ////

/* WARNING: Removing unreachable block (ram,0x00959410) */

void __fastcall FUN_009593d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6fec8;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_00959440 @ 00959440 ////

int __cdecl FUN_00959440(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3f38;
  local_c = ExceptionList;
  pcVar2 = (char *)*param_1;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 0x14;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  FUN_004015d0(&local_2c,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  iVar8 = 0;
  pTVar7 = &TM::CBackdropBlueprint::RTTI_Type_Descriptor;
  pTVar6 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar5 = 0;
  local_4 = 0;
  piVar4 = (int *)FUN_009623a0(&local_2c);
  iVar5 = FUN_00ace790(piVar4,iVar5,pTVar6,pTVar7,iVar8);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return iVar5;
}


//// FUNCTION FUN_009594f0 @ 009594f0 ////

undefined4 * FUN_009594f0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3f5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xe0);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_009592d0(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00959600 @ 00959600 ////

undefined4 * __thiscall FUN_00959600(void *this,byte param_1)

{
  FUN_009593d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00959620 @ 00959620 ////

undefined4 * __thiscall FUN_00959620(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  local_20 = local_14;
  local_14[0] = L'\0';
  local_1c = 0;
  local_18 = 10;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar1);
  iVar2 = _wcscmp(*(wchar_t **)((int)this + 0x48),local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))();
    FUN_009b5030(param_1,puVar3);
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x48),*(uint *)((int)this + 0x4c));
  return param_1;
}


//// FUNCTION FUN_009596f0 @ 009596f0 ////

void FUN_009596f0(void)

{
  char *_Source;
  int iVar1;
  void **ppvVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *local_4c;
  uint local_48;
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf3fa3;
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  iVar1 = DAT_010b6ff4;
  do {
    ExceptionList = ppvVar2;
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      DAT_010b6ffc = &LAB_00959560;
      ExceptionList = local_c;
      return;
    }
    local_4 = 0xffffffff;
    FUN_009f4910(&local_4c,iVar1);
    local_4 = 0;
    uVar3 = FUN_00413450(&local_4c,".",0,1);
    if (uVar3 != 0xffffffff) {
      puVar4 = FUN_00430770(&local_4c,local_2c,0,uVar3);
      uVar3 = puVar4[1];
      _Source = (char *)*puVar4;
      if (local_44 <= uVar3) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = uVar3 + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy(local_4c,_Source,uVar3);
      local_4c[uVar3] = '\0';
      local_48 = uVar3;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
    }
    puVar4 = operator_new(0xe0);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_009592d0(puVar4);
    }
    local_4 = 0xffffffff;
    ppvVar2 = ExceptionList;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  } while( true );
}


//// FUNCTION FUN_00959830 @ 00959830 ////

void FUN_00959830(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_010507f8 != &DAT_01050804) {
    do {
      piVar4 = DAT_010507f8;
      puVar2 = (undefined4 *)DAT_010507f8[2];
      piVar1 = DAT_010507f8 + 1;
      if ((int *)DAT_010507f8[1] != (int *)0x0) {
        *(int *)DAT_010507f8[1] = *DAT_010507f8;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_010507f8 != &DAT_01050804);
  }
  return;
}


//// FUNCTION FUN_00959890 @ 00959890 ////

undefined4 * __fastcall FUN_00959890(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf3fb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_2c,(char *)&PTR_LAB_00d6fef8,puVar1);
  uStack_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_00959900 @ 00959900 ////

undefined4 * __thiscall FUN_00959900(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  pcVar2 = ".dds";
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 8))();
  FUN_004312e0(&pcStack_20,puVar1,pcVar2);
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,pcStack_20,uStack_1c);
  if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_20);
  }
  return param_1;
}


//// FUNCTION FUN_00959970 @ 00959970 ////

void __fastcall FUN_00959970(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6ff00;
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


//// FUNCTION FUN_009599c0 @ 009599c0 ////

undefined4 * __thiscall FUN_009599c0(void *this,byte param_1)

{
  FUN_00959970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009599e0 @ 009599e0 ////

void __fastcall FUN_009599e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6ff00;
  return;
}


//// FUNCTION FUN_00959a40 @ 00959a40 ////

void __cdecl FUN_00959a40(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &TM::CCostumeBlueprint::RTTI_Type_Descriptor;
  pTVar3 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar1 = (int *)FUN_009623a0(param_1);
  FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
  return;
}


//// FUNCTION FUN_00959ba0 @ 00959ba0 ////

void __thiscall FUN_00959ba0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x61) == '\0') {
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


//// FUNCTION FUN_00959c30 @ 00959c30 ////

void __cdecl FUN_00959c30(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x61);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x61);
  }
  return;
}


//// FUNCTION FUN_00959c50 @ 00959c50 ////

void __cdecl FUN_00959c50(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x61);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x61);
  }
  return;
}


//// FUNCTION FUN_00959c80 @ 00959c80 ////

void __fastcall FUN_00959c80(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x61) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x61) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x61);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x61);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x61) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x61) == '\0');
    if (*(char *)((int)piVar4 + 0x61) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_00959ce0 @ 00959ce0 ////

void __fastcall FUN_00959ce0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x61) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x61) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x61);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x61);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x61);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x61);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_00959e70 @ 00959e70 ////

void __thiscall FUN_00959e70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x61) == '\0') {
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


//// FUNCTION FUN_00959ed0 @ 00959ed0 ////

int * __fastcall FUN_00959ed0(int *param_1)

{
  FUN_00959ce0(param_1);
  return param_1;
}


//// FUNCTION FUN_00959ee0 @ 00959ee0 ////

int * __fastcall FUN_00959ee0(int *param_1)

{
  FUN_00959c80(param_1);
  return param_1;
}


//// FUNCTION FUN_00959f90 @ 00959f90 ////

undefined4 * __thiscall FUN_00959f90(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x61) == '\0') {
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
LAB_00959fd4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00959fd9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00959fd4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_00959fd9:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x61) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_0095a000 @ 0095a000 ////

int * __fastcall FUN_0095a000(int *param_1)

{
  FUN_00959ce0(param_1);
  return param_1;
}


//// FUNCTION FUN_0095a010 @ 0095a010 ////

int * __fastcall FUN_0095a010(int *param_1)

{
  FUN_00959c80(param_1);
  return param_1;
}


//// FUNCTION FUN_0095a070 @ 0095a070 ////

undefined4 * __fastcall FUN_0095a070(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4022;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6ff18;
  FUN_0043b510(param_1 + 0x34);
  FUN_0043b510(param_1 + 0x35);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  piVar1 = param_1 + 0x3d;
  param_1[0x3f] = 0;
  *piVar1 = 0;
  param_1[0x3e] = 0;
  param_1[0x43] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  param_1[0x3f] = param_1;
  FUN_00acdb9e(0xe667f4);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x40] = iVar2;
  if (DAT_00e667f0 != '\0') {
    iVar2 = 0xf4;
    puStack00000004 = &stack0xffffffd4;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe667f4);
    puStack00000004 = &stack0xffffffd0;
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e667f0 = '\0';
  }
  param_1[0x43] = param_1;
  FUN_00acdb9e(0xe667f4);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x44] = iVar2;
  if (s___AV__InList_VCBackdropBlueprint_00e667c4[0x2b] != '\0') {
    iVar2 = 0x104;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "PathLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe667f4);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AV__InList_VCBackdropBlueprint_00e667c4[0x2b] = '\0';
  }
  param_1[0x3e] = &DAT_01050844;
  *piVar1 = (int)DAT_01050844;
  *(int **)((int)DAT_01050844 + 4) = piVar1;
  DAT_01050844 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095a200 @ 0095a200 ////

/* WARNING: Removing unreachable block (ram,0x0095a292) */

void __fastcall FUN_0095a200(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4038;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6ff18;
  local_4 = 0;
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3e] = param_1[0x3d];
  }
  if (param_1[0x3d] != 0) {
    *(undefined4 *)(param_1[0x3d] + 4) = param_1[0x3e];
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  if ((undefined4 *)param_1[0x42] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x42] = param_1[0x41];
  }
  if (param_1[0x41] != 0) {
    *(undefined4 *)(param_1[0x41] + 4) = param_1[0x42];
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  if (param_1[0x41] != 0) {
    *(undefined4 *)(param_1[0x41] + 4) = param_1[0x42];
  }
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3e] = param_1[0x3d];
  }
  if (param_1[0x3d] != 0) {
    *(undefined4 *)(param_1[0x3d] + 4) = param_1[0x3e];
  }
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  puVar2 = (undefined4 *)param_1[0x3c];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x3c] = 0;
  local_4 = 0xffffffff;
  FUN_00963220(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0095a330 @ 0095a330 ////

int __fastcall FUN_0095a330(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4058;
  local_c = ExceptionList;
  piVar1 = param_1 + 0x3c;
  if (param_1[0x3c] == 0) {
    uVar7 = 0;
    uVar6 = 0;
    iVar5 = 0;
    iVar4 = 2;
    ExceptionList = &local_c;
    piStack_10 = param_1;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))();
    piVar3 = FUN_004335f0((int *)&piStack_10,puVar2,iVar4,iVar5,uVar6,uVar7);
    uStack_4 = 0;
    if (piVar1 != piVar3) {
      iVar4 = *piVar3;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + 1;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        piVar3 = puVar2 + 0x12;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar1 = iVar4;
    }
    uStack_4 = 0xffffffff;
    if ((piStack_10 != (int *)0x0) &&
       (iVar4 = piStack_10[0x12], piStack_10[0x12] = iVar4 + -1, iVar4 + -1 == 0)) {
      (**(code **)*piStack_10)(1);
    }
    ExceptionList = local_c;
    return *piVar1;
  }
  return *piVar1;
}


//// FUNCTION FUN_0095a3f0 @ 0095a3f0 ////

void FUN_0095a3f0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_01050838 != &DAT_01050844) {
    do {
      piVar4 = DAT_01050838;
      puVar2 = (undefined4 *)DAT_01050838[2];
      piVar1 = DAT_01050838 + 1;
      if ((int *)DAT_01050838[1] != (int *)0x0) {
        *(int *)DAT_01050838[1] = *DAT_01050838;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_01050838 != &DAT_01050844);
  }
  return;
}


//// FUNCTION FUN_0095a480 @ 0095a480 ////

void FUN_0095a480(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(100);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x18) = 1;
  *(undefined1 *)((int)puVar1 + 0x61) = 0;
  return;
}


//// FUNCTION FUN_0095a4c0 @ 0095a4c0 ////

undefined4 * __thiscall FUN_0095a4c0(void *this,byte param_1)

{
  FUN_0095a200(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095a4e0 @ 0095a4e0 ////

undefined4 * __fastcall FUN_0095a4e0(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_2c,"thumbs/Costumes/",puVar1);
  uStack_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_0095a550 @ 0095a550 ////

undefined4 * __thiscall FUN_0095a550(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  bVar1 = FUN_00431270((undefined4 *)((int)this + 0x48),(wchar_t *)&lpCaption_00d16918);
  if (bVar1) {
    FUN_00961800(this,param_1);
    ExceptionList = local_c;
    return param_1;
  }
  puVar2 = (undefined4 *)(**(code **)(*(int *)this + 8))();
  puVar2 = FUN_0040d6b0(apvStack_2c,"cosname_",puVar2);
  uStack_4 = 0;
  FUN_009b5030(param_1,puVar2);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095a600 @ 0095a600 ////

int * __cdecl FUN_0095a600(undefined4 *param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  uint uVar9;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  undefined4 *local_10c;
  int *local_108;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4158;
  local_c = ExceptionList;
  iVar8 = 0;
  pTVar7 = &TM::CCostumeBlueprint::RTTI_Type_Descriptor;
  pTVar6 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar5 = 0;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_009623a0(param_1);
  iVar5 = FUN_00ace790(piVar1,iVar5,pTVar6,pTVar7,iVar8);
  if (iVar5 == 0) {
    local_108 = (int *)0x0;
    puVar2 = FUN_0040d6b0(local_104,"costume/",param_1);
    local_4 = 0;
    FUN_0055c870(local_e4,param_2,puVar2,0);
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    local_12c = local_120;
    local_120[0] = '\0';
    local_128 = 0;
    local_124 = 0x14;
    _strncpy(local_12c,"blueprint",9);
    local_128 = 9;
    local_12c[9] = '\0';
    local_4._0_1_ = 3;
    uVar3 = FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x0);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
    if ((char)uVar3 != '\0') {
      iVar5 = FUN_00448220(param_1,&DAT_00d1e524,0,1);
      if (iVar5 != -1) {
        uVar9 = 0xffffffff;
        iVar5 = FUN_00448220(param_1,&DAT_00d1e524,0,1);
        FUN_00430770(param_1,&local_12c,iVar5 + 1,uVar9);
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
      }
      local_10c = operator_new(0x118);
      local_4._0_1_ = 4;
      if (local_10c == (undefined4 *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        local_108 = (int *)&stack0xfffffebc;
        piVar1 = FUN_0095a070(local_10c);
      }
      local_4._0_1_ = 2;
      local_108 = piVar1;
      (**(code **)(*piVar1 + 4))();
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"fashionable",0xb);
      local_128 = 0xb;
      local_12c[0xb] = '\0';
      local_4._0_1_ = 5;
      uVar3 = FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x0);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      if ((char)uVar3 != '\0') {
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,"start",5);
        local_128 = 5;
        local_12c[5] = '\0';
        local_4._0_1_ = 6;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        FUN_0043b700(piVar1 + 0x34,(float)fVar4);
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,"end",3);
        local_128 = 3;
        local_12c[3] = '\0';
        local_4._0_1_ = 7;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        FUN_0043b700(piVar1 + 0x35,(float)fVar4);
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,"peak",4);
        local_128 = 4;
        local_12c[4] = '\0';
        local_4._0_1_ = 8;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        piVar1[0x36] = (int)(float)fVar4;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"age",3);
      local_128 = 3;
      local_12c[3] = '\0';
      local_4._0_1_ = 9;
      uVar3 = FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x0);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      if ((char)uVar3 != '\0') {
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,(char *)&PTR_LAB_00d6ff6c,3);
        local_128 = 3;
        local_12c[3] = '\0';
        local_4._0_1_ = 10;
        iVar5 = FUN_00558750(local_e4,&local_12c,0);
        piVar1[0x37] = iVar5;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,(char *)&PTR_LAB_0078616b_2_00d6ff68,3);
        local_128 = 3;
        local_12c[3] = '\0';
        local_4._0_1_ = 0xb;
        iVar5 = FUN_00558750(local_e4,&local_12c,0);
        piVar1[0x38] = iVar5;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"physique",8);
      local_128 = 8;
      local_12c[8] = '\0';
      local_4._0_1_ = 0xc;
      uVar3 = FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x0);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      if ((char)uVar3 != '\0') {
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,"thin",4);
        local_128 = 4;
        local_12c[4] = '\0';
        local_4._0_1_ = 0xd;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        FUN_00407070(&local_10c,(float)fVar4);
        piVar1[0x39] = (int)local_10c;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,"normal",6);
        local_128 = 6;
        local_12c[6] = '\0';
        local_4._0_1_ = 0xe;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        FUN_00407070(&local_10c,(float)fVar4);
        piVar1[0x3a] = (int)local_10c;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
        local_12c = local_120;
        local_120[0] = '\0';
        local_128 = 0;
        local_124 = 0x14;
        _strncpy(local_12c,(char *)&PTR_LAB_00d6ff5c,3);
        local_128 = 3;
        local_12c[3] = '\0';
        local_4._0_1_ = 0xf;
        fVar4 = FUN_00558610(local_e4,&local_12c,0.0);
        FUN_00407070(&local_10c,(float)fVar4);
        piVar1[0x3b] = (int)local_10c;
        if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
          _free(local_12c);
        }
      }
      puVar2 = FUN_0040d6b0(&local_12c,"data/costume/",param_1);
      puVar2 = FUN_004312e0(local_104,puVar2,".ini");
      FUN_004015d0(piVar1 + 0x23,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
        _free(local_104[0]);
      }
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  else {
    local_108 = (int *)0x0;
  }
  ExceptionList = local_c;
  return local_108;
}


//// FUNCTION FUN_0095acf0 @ 0095acf0 ////

undefined4 * __cdecl FUN_0095acf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_6c;
  uint local_68;
  uint local_64;
  char local_60 [20];
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
  puStack_8 = &LAB_00cf4190;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_6c,"",0);
  local_68 = 0;
  *local_6c = '\0';
  local_4 = 0;
  puVar2 = FUN_0040d6b0(&local_4c,"costume/",param_2);
  local_4._0_1_ = 1;
  puVar2 = FUN_0055c3c0(puVar2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"blueprint",9);
  local_48 = 9;
  local_4c[9] = '\0';
  local_4._0_1_ = 2;
  uVar3 = FUN_00558a50(puVar2,&local_4c,(undefined4 *)0x0);
  local_4._0_1_ = 0;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 0;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if ((char)uVar3 != '\0') {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"path",4);
    local_48 = 4;
    local_4c[4] = '\0';
    local_4._0_1_ = 3;
    puVar2 = FUN_005584e0(puVar2,local_2c,&local_4c);
    FUN_004015d0(&local_6c,(char *)*puVar2,puVar2[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    uVar1 = (undefined1)local_4;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  local_4._0_1_ = uVar1;
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_6c,local_68);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095af30 @ 0095af30 ////

void __fastcall FUN_0095af30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0095a480();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x61) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0095af60 @ 0095af60 ////

int __fastcall FUN_0095af60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0095a480();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x61) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0095af90 @ 0095af90 ////

void __fastcall FUN_0095af90(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6ff88;
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


//// FUNCTION FUN_0095afe0 @ 0095afe0 ////

undefined4 * __thiscall FUN_0095afe0(void *this,byte param_1)

{
  FUN_0095af90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095b000 @ 0095b000 ////

void __fastcall FUN_0095b000(undefined4 *param_1)

{
  FUN_0095af90(param_1 + 8);
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0095b020 @ 0095b020 ////

void __fastcall FUN_0095b020(int param_1)

{
  FUN_0095af90((undefined4 *)(param_1 + 0x2c));
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0095b040 @ 0095b040 ////

void * __thiscall FUN_0095b040(void *this,byte param_1)

{
  FUN_0095b020((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095b070 @ 0095b070 ////

void __fastcall FUN_0095b070(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6ff88;
  return;
}


//// FUNCTION FUN_0095b0e0 @ 0095b0e0 ////

undefined4 * __thiscall FUN_0095b0e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf41de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  puVar1 = (undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x28) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x24);
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00d6ff88;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0095b170 @ 0095b170 ////

void __fastcall FUN_0095b170(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d6ff88;
  return;
}


//// FUNCTION FUN_0095b1d0 @ 0095b1d0 ////

undefined4 * __thiscall FUN_0095b1d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf422e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  puVar1 = (undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 **)((int)this + 0x28) = puVar1;
  *puVar1 = (undefined4 *)((int)this + 0x24);
  *(undefined ***)((int)this + 0x20) = &PTR_LAB_00d6ff88;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0095b260 @ 0095b260 ////

void __thiscall FUN_0095b260(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf4248;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x61) != '\0') {
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
  FUN_00959ce0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x61) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x61) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x61) == '\0') {
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
      iVar1 = param_2[0x18];
      *(char *)(param_2 + 0x18) = (char)_Memory[0x18];
      *(char *)(_Memory + 0x18) = (char)iVar1;
      goto LAB_0095b3cf;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x61) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x61) == '\0') {
      piVar2 = (int *)FUN_00959c50(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x61) == '\0') {
      uVar3 = FUN_00959c30((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0095b3cf:
  if ((char)_Memory[0x18] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x18] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x18] == '\0') {
            *(undefined1 *)(piVar4 + 0x18) = 1;
            *(undefined1 *)(piVar5 + 0x18) = 0;
            FUN_00959e70(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x61) == '\0') {
            if ((*(char *)(*piVar4 + 0x60) != '\x01') || (*(char *)(piVar4[2] + 0x60) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x60) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x60) = 1;
                *(undefined1 *)(piVar4 + 0x18) = 0;
                FUN_00959ba0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x18) = (char)piVar5[0x18];
              *(undefined1 *)(piVar5 + 0x18) = 1;
              *(undefined1 *)(piVar4[2] + 0x60) = 1;
              FUN_00959e70(this,(int)piVar5);
              break;
            }
LAB_0095b498:
            *(undefined1 *)(piVar4 + 0x18) = 0;
          }
        }
        else {
          if ((char)piVar4[0x18] == '\0') {
            *(undefined1 *)(piVar4 + 0x18) = 1;
            *(undefined1 *)(piVar5 + 0x18) = 0;
            FUN_00959ba0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x61) == '\0') {
            if ((*(char *)(piVar4[2] + 0x60) == '\x01') && (*(char *)(*piVar4 + 0x60) == '\x01'))
            goto LAB_0095b498;
            if (*(char *)(*piVar4 + 0x60) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x60) = 1;
              *(undefined1 *)(piVar4 + 0x18) = 0;
              FUN_00959e70(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x18) = (char)piVar5[0x18];
            *(undefined1 *)(piVar5 + 0x18) = 1;
            *(undefined1 *)(*piVar4 + 0x60) = 1;
            FUN_00959ba0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x18) = 1;
  }
  piVar4 = (int *)_Memory[0xd];
  _Memory[0xb] = (int)&PTR_LAB_00d6ff88;
  while (piVar4 != _Memory + 0x10) {
    *piVar4 = 0;
    piVar4 = (int *)piVar4[1];
    *(undefined4 *)(*piVar4 + 4) = 0;
  }
  _Memory[0xd] = 0;
  _Memory[0x10] = 0;
  FUN_00406010((int)(_Memory + 0xb));
  if (0x14 < (uint)_Memory[5]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)_Memory[3]);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0095b580 @ 0095b580 ////

void FUN_0095b580(void *param_1)

{
  if (*(char *)((int)param_1 + 0x61) == '\0') {
    FUN_0095b580(*(void **)((int)param_1 + 8));
    FUN_0095b020((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0095b600 @ 0095b600 ////

void __fastcall FUN_0095b600(int param_1)

{
  FUN_0095b580(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0095b630 @ 0095b630 ////

undefined4 *
FUN_0095b630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf4271;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(100);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0095b0e0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x18) = param_5;
    *(undefined1 *)((int)puVar1 + 0x61) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0095b6d0 @ 0095b6d0 ////

void __thiscall FUN_0095b6d0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0095b580((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x61) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x61) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x61);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x61);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x61);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x61);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0095b260(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0095b790 @ 0095b790 ////

void __thiscall
FUN_0095b790(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf4288;
  local_c = ExceptionList;
  if (0x30c30c1 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0095b630(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x60);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x60) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x18] == '\0') {
LAB_0095b88b:
        *(undefined1 *)(*piVar4 + 0x60) = 1;
        *(undefined1 *)(piVar5 + 0x18) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x60) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00959e70(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x60) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x60) = 0;
        FUN_00959ba0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x18] == '\0') goto LAB_0095b88b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00959ba0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x60) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x60) = 0;
      FUN_00959e70(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x60);
  } while( true );
}


//// FUNCTION FUN_0095b970 @ 0095b970 ////

void __thiscall FUN_0095b970(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x61) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0095b9d4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0095b9d9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0095b9d4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0095b9d9:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x61) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_0095b790(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00959c80((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0095b790(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0095bac0 @ 0095bac0 ////

undefined4 * __thiscall FUN_0095bac0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0095b790(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_0095b790(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_0095b790(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00959c80((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x61) != '\0') {
          FUN_0095b790(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0095b790(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00959ce0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0095bc42;
      }
      if (*(char *)(param_2[2] + 0x61) != '\0') {
        FUN_0095b790(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0095b790(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0095bc42:
  puVar4 = (undefined4 *)FUN_0095b970(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0095bc70 @ 0095bc70 ////

void __fastcall FUN_0095bc70(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0095b6d0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0095bca0 @ 0095bca0 ////

int __fastcall FUN_0095bca0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0095a480();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x61) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0095bcd0 @ 0095bcd0 ////

int * __thiscall FUN_0095bcd0(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined **local_98;
  undefined4 local_94;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_60 [2];
  uint local_58;
  undefined4 local_40 [13];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf42c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = FUN_00959f90(this,param_1);
  if ((piVar1 == *(int **)((int)this + 4)) ||
     (uVar2 = FUN_00441060(param_1,piVar1 + 3), (char)uVar2 != '\0')) {
    local_8c = 0;
    local_94 = 0;
    local_7c = 0;
    local_80 = 0;
    local_90 = &local_84;
    local_84 = &local_94;
    local_70 = 0;
    local_6c = 0;
    local_68 = 0;
    local_98 = &PTR_LAB_00d6ff88;
    local_4 = 2;
    piVar3 = FUN_0095b1d0(local_60,param_1);
    local_4 = CONCAT31(local_4._1_3_,3);
    piVar1 = FUN_0095bac0(this,&local_64,piVar1,piVar3);
    piVar1 = (int *)*piVar1;
    FUN_0095af90(local_40);
    if (0x14 < local_58) {
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    FUN_0095af90(&local_98);
  }
  ExceptionList = local_c;
  return piVar1 + 0xb;
}


//// FUNCTION FUN_0095bdd0 @ 0095bdd0 ////

void FUN_0095bdd0(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  byte *pbVar13;
  char *pcVar14;
  uint _Count;
  char *_Source;
  bool bVar15;
  int iStack_484;
  char *local_480;
  undefined4 uStack_47c;
  uint local_478;
  char acStack_474 [20];
  byte *local_460;
  undefined4 uStack_45c;
  uint local_458;
  byte abStack_454 [20];
  char *local_440;
  int iStack_43c;
  uint local_438;
  char acStack_434 [20];
  char *pcStack_420;
  uint uStack_41c;
  uint uStack_418;
  char acStack_414 [20];
  char *local_400;
  undefined4 local_3fc;
  uint local_3f8;
  char local_3f4 [20];
  char *local_3e0;
  undefined4 local_3dc;
  uint local_3d8;
  char local_3d4 [20];
  undefined4 local_3c0 [18];
  int iStack_378;
  int iStack_374;
  undefined4 auStack_36c [54];
  undefined4 local_294 [54];
  undefined4 local_1bc [54];
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf43a6;
  pvStack_c = ExceptionList;
  local_3e0 = local_3d4;
  local_3d4[0] = '\0';
  local_3dc = 0;
  local_3d8 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_3e0,"costume",7);
  local_3dc = 7;
  local_3e0[7] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_3e0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_3d8) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e0);
  }
  cVar3 = FUN_00558bb0(local_e4,0);
  while (cVar3 != '\0') {
    puVar4 = FUN_005562f0(local_e4,&local_480,1);
    local_4._0_1_ = 3;
    FUN_0095a600(puVar4,'\0');
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_478) {
                    /* WARNING: Subroutine does not return */
      _free(local_480);
    }
    cVar3 = FUN_00558bb0(local_e4,2);
  }
  local_400 = local_3f4;
  local_3f4[0] = '\0';
  local_3fc = 0;
  local_3f8 = 0x14;
  _strncpy(local_400,"costume/category",0x10);
  local_3fc = 0x10;
  local_400[0x10] = '\0';
  local_4._0_1_ = 4;
  FUN_0055c870(local_294,'\x01',&local_400,0);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (0x14 < local_3f8) {
                    /* WARNING: Subroutine does not return */
    _free(local_400);
  }
  cVar3 = FUN_00558bb0(local_294,0);
  do {
    if (cVar3 == '\0') {
      FUN_009c89a0(local_3c0);
      local_4._0_1_ = 0xc;
      FUN_009ca9d0(local_3c0,"*.ini","data\\costume\\category_extra",(undefined1 *)0x1);
      iStack_484 = 0;
      while( true ) {
        if (iStack_378 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iStack_374 - iStack_378 >> 2;
        }
        if (iVar8 <= iStack_484) {
          local_480 = acStack_474;
          acStack_474[0] = '\0';
          uStack_47c = 0;
          local_478 = 0x20;
          local_480 = _malloc(0x20);
          _strncpy(local_480,"costume/category_premium",0x18);
          uStack_47c = 0x18;
          local_480[0x18] = '\0';
          local_4._0_1_ = 0x11;
          FUN_0055c870(auStack_36c,'\x01',&local_480,0);
          local_4 = CONCAT31(local_4._1_3_,0x13);
          if (0x14 < local_478) {
                    /* WARNING: Subroutine does not return */
            _free(local_480);
          }
          uVar5 = FUN_00558120(auStack_36c,0);
          cVar3 = (char)uVar5;
          while( true ) {
            if (cVar3 == '\0') {
              local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
              local_4._0_1_ = 0xc;
              FUN_00558920(auStack_36c);
              local_4._0_1_ = 6;
              FUN_009c8560(local_3c0);
              local_4 = CONCAT31(local_4._1_3_,2);
              FUN_00558920(local_294);
              local_4 = 0xffffffff;
              FUN_00558920(local_e4);
              ExceptionList = pvStack_c;
              return;
            }
            FUN_00558de0(auStack_36c,&local_440);
            local_4._0_1_ = 0x14;
            if ((iStack_43c != 0) &&
               (piVar11 = FUN_0095a600(&local_440,'\x01'), piVar11 != (int *)0x0)) {
              local_460 = abStack_454;
              abStack_454[0] = 0;
              uStack_45c = 0;
              local_458 = 0x14;
              _strncpy((char *)local_460,"category_premium",0x10);
              uStack_45c = 0x10;
              local_460[0x10] = 0;
              local_4._0_1_ = 0x15;
              piVar9 = piVar11 + 0x41;
              piVar12 = FUN_0095bcd0(&DAT_01050824,&local_460);
              piVar12 = piVar12 + 5;
              piVar11[0x42] = (int)piVar12;
              *piVar9 = *piVar12;
              *(int **)(*piVar12 + 4) = piVar9;
              *piVar12 = (int)piVar9;
              if (0x14 < local_458) {
                    /* WARNING: Subroutine does not return */
                _free(local_460);
              }
            }
            local_4 = CONCAT31(local_4._1_3_,0x13);
            if (0x14 < local_438) break;
            uVar5 = FUN_00558120(auStack_36c,2);
            cVar3 = (char)uVar5;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_440);
        }
        pcVar14 = *(char **)(iStack_378 + iStack_484 * 4);
        pcVar10 = _strrchr(pcVar14,0x5c);
        _Source = pcVar10 + 1;
        if (pcVar10 == (char *)0x0) {
          _Source = pcVar14;
        }
        pcStack_420 = acStack_414;
        acStack_414[0] = '\0';
        uStack_41c = 0;
        uStack_418 = 0x14;
        pcVar14 = _Source;
        do {
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        _Count = (int)pcVar14 - (int)(_Source + 1);
        if (0x13 < _Count) {
          uStack_418 = _Count + 0x20 & 0xffffffe0;
          pcStack_420 = _malloc(uStack_418);
        }
        _strncpy(pcStack_420,_Source,_Count);
        pcStack_420[_Count] = '\0';
        local_460 = abStack_454;
        abStack_454[0] = 0;
        uStack_45c = 0;
        local_458 = 0x14;
        uStack_41c = _Count;
        _strncpy((char *)local_460,"",0);
        uStack_45c = 0;
        *local_460 = 0;
        local_440 = acStack_434;
        acStack_434[0] = '\0';
        iStack_43c = 0;
        local_438 = 0x14;
        _strncpy(local_440,".ini",4);
        iStack_43c = 4;
        local_440[4] = '\0';
        local_4._0_1_ = 0xf;
        FUN_00569860((int *)&pcStack_420,&local_440,&local_460);
        if (0x14 < local_438) break;
        local_4._0_1_ = 0xd;
        if (0x14 < local_458) {
                    /* WARNING: Subroutine does not return */
          _free(local_460);
        }
        piVar11 = FUN_0095a600(&pcStack_420,'\x01');
        if (piVar11 != (int *)0x0) {
          local_480 = acStack_474;
          acStack_474[0] = '\0';
          uStack_47c = 0;
          local_478 = 0x14;
          _strncpy(local_480,"category_extra",0xe);
          uStack_47c = 0xe;
          local_480[0xe] = '\0';
          local_4._0_1_ = 0x10;
          piVar9 = piVar11 + 0x41;
          piVar12 = FUN_0095bcd0(&DAT_01050824,&local_480);
          piVar12 = piVar12 + 5;
          piVar11[0x42] = (int)piVar12;
          *piVar9 = *piVar12;
          *(int **)(*piVar12 + 4) = piVar9;
          *piVar12 = (int)piVar9;
          if (0x14 < local_478) {
                    /* WARNING: Subroutine does not return */
            _free(local_480);
          }
        }
        if (0x14 < uStack_418) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_420);
        }
        iStack_484 = iStack_484 + 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    FUN_005562f0(local_294,&local_480,1);
    puVar4 = FUN_0040d6b0(&local_440,"costume/",&local_480);
    local_4._0_1_ = 8;
    FUN_0055c540(local_1bc,puVar4);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (0x14 < local_438) {
                    /* WARNING: Subroutine does not return */
      _free(local_440);
    }
    uVar5 = FUN_00558120(local_1bc,0);
    cVar3 = (char)uVar5;
    while (cVar3 != '\0') {
      FUN_00558de0(local_1bc,&local_460);
      bVar2 = false;
      local_4._0_1_ = 0xb;
      puVar4 = DAT_01050838;
      if (DAT_01050838 != &DAT_01050844) {
        do {
          if (bVar2) break;
          piVar11 = (int *)puVar4[2];
          puVar6 = (undefined4 *)(**(code **)(*piVar11 + 8))();
          pbVar7 = (byte *)*puVar6;
          pbVar13 = local_460;
          do {
            bVar1 = *pbVar7;
            bVar15 = bVar1 < *pbVar13;
            if (bVar1 != *pbVar13) {
LAB_0095c068:
              iVar8 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_0095c06d;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar15 = bVar1 < pbVar13[1];
            if (bVar1 != pbVar13[1]) goto LAB_0095c068;
            pbVar7 = pbVar7 + 2;
            pbVar13 = pbVar13 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_0095c06d:
          if (iVar8 == 0) {
            piVar12 = piVar11 + 0x41;
            piVar9 = FUN_0095bcd0(&DAT_01050824,&local_480);
            piVar9 = piVar9 + 5;
            piVar11[0x42] = (int)piVar9;
            *piVar12 = *piVar9;
            *(int **)(*piVar9 + 4) = piVar12;
            *piVar9 = (int)piVar12;
            bVar2 = true;
          }
          puVar6 = puVar4 + 1;
          puVar4 = (undefined4 *)*puVar6;
        } while ((undefined4 *)*puVar6 != &DAT_01050844);
      }
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0x14 < local_458) {
                    /* WARNING: Subroutine does not return */
        _free(local_460);
      }
      uVar5 = FUN_00558120(local_1bc,2);
      cVar3 = (char)uVar5;
    }
    local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
    local_4._0_1_ = 7;
    FUN_00558920(local_1bc);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (0x14 < local_478) {
                    /* WARNING: Subroutine does not return */
      _free(local_480);
    }
    cVar3 = FUN_00558bb0(local_294,2);
  } while( true );
}


//// FUNCTION FUN_0095c560 @ 0095c560 ////

uint __cdecl FUN_0095c560(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte **ppbVar10;
  undefined4 *local_54;
  undefined4 *local_50;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf43c0;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_4c,"category_premium",0x10);
  ppbVar10 = &local_4c;
  local_48 = 0x10;
  local_4c[0x10] = 0;
  local_54 = FUN_00959f90(&DAT_01050824,ppbVar10);
  if (local_54 != DAT_01050828) {
    pbVar8 = (byte *)local_54[3];
    pbVar7 = local_4c;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0095c604:
        iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0095c609;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0095c604;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_0095c609:
    if (-1 < iVar2) {
      ppuVar3 = &local_54;
      goto LAB_0095c620;
    }
  }
  local_50 = DAT_01050828;
  ppuVar3 = &local_50;
LAB_0095c620:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_24 = local_44;
  if (*ppuVar3 != DAT_01050828) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"category_premium",0x10);
    local_48 = 0x10;
    local_4c[0x10] = 0;
    local_4 = 0;
    piVar4 = FUN_0095bcd0(&DAT_01050824,&local_4c);
    piVar4 = (int *)piVar4[2];
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    while( true ) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"category_premium",0x10);
      local_28 = 0x10;
      local_2c[0x10] = '\0';
      local_4 = 1;
      piVar5 = FUN_0095bcd0(&DAT_01050824,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (piVar4 == piVar5 + 5) break;
      if ((int *)piVar4[2] != (int *)0x0) {
        puVar6 = (undefined4 *)(**(code **)(*(int *)piVar4[2] + 8))();
        pbVar8 = (byte *)*param_1;
        pbVar7 = (byte *)*puVar6;
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0095c754:
            iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0095c759;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0095c754;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0095c759:
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return 1;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  ExceptionList = local_c;
  return local_24 & 0xffffff00;
}


//// FUNCTION FUN_0095c7a0 @ 0095c7a0 ////

uint __cdecl FUN_0095c7a0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  byte **ppbVar10;
  undefined4 *local_54;
  undefined4 *local_50;
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf43e0;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_4c,"category_extra",0xe);
  ppbVar10 = &local_4c;
  local_48 = 0xe;
  local_4c[0xe] = 0;
  local_54 = FUN_00959f90(&DAT_01050824,ppbVar10);
  if (local_54 != DAT_01050828) {
    pbVar8 = (byte *)local_54[3];
    pbVar7 = local_4c;
    do {
      bVar1 = *pbVar7;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0095c844:
        iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_0095c849;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0095c844;
      pbVar7 = pbVar7 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_0095c849:
    if (-1 < iVar2) {
      ppuVar3 = &local_54;
      goto LAB_0095c860;
    }
  }
  local_50 = DAT_01050828;
  ppuVar3 = &local_50;
LAB_0095c860:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_24 = local_44;
  if (*ppuVar3 != DAT_01050828) {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"category_extra",0xe);
    local_48 = 0xe;
    local_4c[0xe] = 0;
    local_4 = 0;
    piVar4 = FUN_0095bcd0(&DAT_01050824,&local_4c);
    piVar4 = (int *)piVar4[2];
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    while( true ) {
      local_2c = local_20;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"category_extra",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 1;
      piVar5 = FUN_0095bcd0(&DAT_01050824,&local_2c);
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
      if (piVar4 == piVar5 + 5) break;
      if ((int *)piVar4[2] != (int *)0x0) {
        puVar6 = (undefined4 *)(**(code **)(*(int *)piVar4[2] + 8))();
        pbVar8 = (byte *)*param_1;
        pbVar7 = (byte *)*puVar6;
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0095c994:
            iVar2 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0095c999;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0095c994;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0095c999:
        if (iVar2 == 0) {
          ExceptionList = local_c;
          return 1;
        }
      }
      piVar4 = (int *)piVar4[1];
    }
  }
  ExceptionList = local_c;
  return local_24 & 0xffffff00;
}


//// FUNCTION FUN_0095c9e0 @ 0095c9e0 ////

undefined4 __fastcall FUN_0095c9e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}


//// FUNCTION FUN_0095ca50 @ 0095ca50 ////

undefined4 __fastcall FUN_0095ca50(int *param_1)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00960f20((int)param_1);
  if (cVar1 != '\0') {
    puVar2 = (uint *)(**(code **)(*param_1 + 0x28))();
    if ((int)puVar2 < 1) goto LAB_0095ca8d;
  }
  piVar3 = (int *)GetPlayerStudio();
  puVar2 = (uint *)(**(code **)(*piVar3 + 0x24))(local_8);
  if (((int)puVar2[1] < param_1[0x11]) ||
     (((int)puVar2[1] <= param_1[0x11] && (puVar2 = (uint *)*puVar2, puVar2 < (uint)param_1[0x10])))
     ) {
    return (uint)puVar2 & 0xffffff00;
  }
LAB_0095ca8d:
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}


//// FUNCTION FUN_0095cae0 @ 0095cae0 ////

undefined4 FUN_0095cae0(int param_1,int param_2,undefined *param_3)

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


//// FUNCTION FUN_0095cb30 @ 0095cb30 ////

undefined4 * __fastcall FUN_0095cb30(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puStack00000004;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4422;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  *param_1 = &PTR_FUN_00d6ffb0;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = param_1 + 0x3b;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x14;
  param_1[0x40] = param_1 + 0x43;
  *(undefined2 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 10;
  local_4 = 3;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe6684c);
  puStack00000004 = &stack0xffffffdc;
  iVar1 = FUN_0097dda0();
  param_1[0x37] = iVar1;
  if (s___AV__InList_VCCostumeBlueprint__00e66820[0x2a] != '\0') {
    iVar1 = 0xd0;
    puStack00000004 = &stack0xffffffd4;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe6684c);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCCostumeBlueprint__00e66820[0x2a] = '\0';
  }
  param_1[0x48] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095cc50 @ 0095cc50 ////

undefined4 * __thiscall FUN_0095cc50(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0xe0),*(uint *)((int)this + 0xe4));
  return param_1;
}


//// FUNCTION FUN_0095cc90 @ 0095cc90 ////

int * __fastcall FUN_0095cc90(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_20 [2];
  uint uStack_18;
  
  if (param_1[0x41] == 0) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
    puVar1 = FUN_009b5030(apvStack_20,puVar1);
    FUN_004036d0(param_1 + 0x40,(wchar_t *)*puVar1,puVar1[1]);
    if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_20[0]);
    }
  }
  return param_1 + 0x40;
}


//// FUNCTION FUN_0095ccf0 @ 0095ccf0 ////

void __fastcall FUN_0095ccf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6ffb0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (10 < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x40]);
  }
  if (0x14 < (uint)param_1[0x3a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x38]);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_0095cda0 @ 0095cda0 ////

void FUN_0095cda0(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_0095cae0((int)param_1,(int)param_2,param_3);
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


//// FUNCTION FUN_0095ce70 @ 0095ce70 ////

undefined4 * __thiscall FUN_0095ce70(void *this,byte param_1)

{
  FUN_0095ccf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095cf40 @ 0095cf40 ////

void FUN_0095cf40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_0105086c != &DAT_01050878) {
    do {
      piVar4 = DAT_0105086c;
      puVar2 = (undefined4 *)DAT_0105086c[2];
      piVar1 = DAT_0105086c + 1;
      if ((int *)DAT_0105086c[1] != (int *)0x0) {
        *(int *)DAT_0105086c[1] = *DAT_0105086c;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0105086c != &DAT_01050878);
  }
  return;
}


//// FUNCTION FUN_0095cfa0 @ 0095cfa0 ////

undefined4 * __fastcall FUN_0095cfa0(int param_1)

{
  undefined4 *puVar1;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = FUN_0040d6b0(local_2c,"set/",(undefined4 *)(param_1 + 0xe0));
  local_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return puVar1;
}


//// FUNCTION FUN_0095d010 @ 0095d010 ////

int * __cdecl FUN_0095d010(undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  ulonglong uVar10;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  int *local_10c;
  byte *local_108;
  undefined4 local_104;
  uint local_100;
  byte local_fc [20];
  undefined1 *local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf44e2;
  local_c = ExceptionList;
  local_108 = local_fc;
  local_fc[0] = 0;
  local_104 = 0;
  local_100 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_108,"lot",3);
  local_104 = 3;
  local_108[3] = 0;
  pbVar8 = (byte *)*param_1;
  pbVar7 = local_108;
  do {
    bVar2 = *pbVar8;
    bVar9 = bVar2 < *pbVar7;
    if (bVar2 != *pbVar7) {
LAB_0095d0a5:
      iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0095d0aa;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar8[1];
    bVar9 = bVar2 < pbVar7[1];
    if (bVar2 != pbVar7[1]) goto LAB_0095d0a5;
    pbVar8 = pbVar8 + 2;
    pbVar7 = pbVar7 + 2;
  } while (bVar2 != 0);
  iVar3 = 0;
LAB_0095d0aa:
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108);
  }
  if (iVar3 == 0) {
    local_10c = (int *)0x0;
  }
  else {
    local_10c = (int *)0x0;
    puVar4 = FUN_0040d6b0(&local_108,"facility/",param_1);
    local_4 = 0;
    FUN_0055c540(local_e4,puVar4);
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108);
    }
    local_12c = local_120;
    local_120[0] = '\0';
    local_128 = 0;
    local_124 = 0x14;
    _strncpy(local_12c,"blueprint",9);
    local_128 = 9;
    local_12c[9] = '\0';
    local_4._0_1_ = 3;
    uVar5 = FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x0);
    local_4._0_1_ = 2;
    if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
    if ((char)uVar5 != '\0') {
      local_10c = operator_new(0x128);
      local_4._0_1_ = 4;
      if (local_10c == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        local_e8 = &stack0xfffffebc;
        piVar6 = FUN_0095cb30(local_10c);
      }
      piVar1 = piVar6 + 0x34;
      piVar6[0x35] = (int)&DAT_01050878;
      *piVar1 = (int)DAT_01050878;
      *(int **)((int)DAT_01050878 + 4) = piVar1;
      local_4._0_1_ = 2;
      DAT_01050878 = piVar1;
      local_10c = piVar6;
      (**(code **)(*piVar6 + 4))();
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"menutype",8);
      local_128 = 8;
      local_12c[8] = '\0';
      local_4._0_1_ = 5;
      iVar3 = FUN_00558750(local_e4,&local_12c,0);
      piVar6[0x48] = iVar3;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"grouporder",10);
      local_128 = 10;
      local_12c[10] = '\0';
      local_4._0_1_ = 6;
      iVar3 = FUN_00558750(local_e4,&local_12c,0);
      piVar6[0x49] = iVar3;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"availableindebt",0xf);
      local_128 = 0xf;
      local_12c[0xf] = '\0';
      local_4._0_1_ = 7;
      iVar3 = FUN_00558750(local_e4,&local_12c,0);
      *(bool *)(piVar6 + 0xf) = iVar3 != 0;
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"",0);
      local_128 = 0;
      *local_12c = '\0';
      local_4._0_1_ = 8;
      FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x1);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"mesh",4);
      local_128 = 4;
      local_12c[4] = '\0';
      local_4._0_1_ = 9;
      puVar4 = FUN_005584e0(local_e4,&local_108,&local_12c);
      FUN_004015d0(piVar6 + 0x38,(char *)*puVar4,puVar4[1]);
      if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
        _free(local_108);
      }
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"finance",7);
      local_128 = 7;
      local_12c[7] = '\0';
      local_4._0_1_ = 10;
      FUN_00558a50(local_e4,&local_12c,(undefined4 *)0x1);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,"purchasecost",0xc);
      local_128 = 0xc;
      local_12c[0xc] = '\0';
      local_4._0_1_ = 0xb;
      FUN_00558610(local_e4,&local_12c,0.0);
      uVar10 = FUN_00acd42c();
      *(ulonglong *)(piVar6 + 0x10) = uVar10;
      FUN_00471b10((longlong *)(piVar6 + 0x10));
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_108 = local_fc;
      local_fc[0] = 0;
      local_104 = 0;
      local_100 = 0x14;
      _strncpy((char *)local_108,"",0);
      local_104 = 0;
      *local_108 = 0;
      local_12c = local_120;
      local_120[0] = '\0';
      local_128 = 0;
      local_124 = 0x14;
      _strncpy(local_12c,".msh",4);
      local_128 = 4;
      local_12c[4] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0xd);
      FUN_00569860(piVar6 + 0x38,&local_12c,&local_108);
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
        _free(local_108);
      }
      puVar4 = FUN_0040d6b0(&local_12c,"data/facility/",param_1);
      puVar4 = FUN_004312e0(&local_108,puVar4,".ini");
      FUN_004015d0(piVar6 + 0x23,(char *)*puVar4,puVar4[1]);
      if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
        _free(local_108);
      }
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return local_10c;
}


//// FUNCTION FUN_0095d630 @ 0095d630 ////

void FUN_0095d630(void)

{
  char cVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_00cf4511;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_124,"facility",8);
  local_120 = 8;
  local_124[8] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  cVar1 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar1 == '\0') {
      FUN_0095cda0(DAT_0105086c,&DAT_01050878,&LAB_0095ce90);
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    puVar2 = FUN_005562f0(local_e4,local_104,1);
    local_4._0_1_ = 3;
    FUN_0095d010(puVar2);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_fc) break;
    cVar1 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_104[0]);
}


//// FUNCTION FUN_0095d770 @ 0095d770 ////

void __fastcall FUN_0095d770(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d7000c;
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


//// FUNCTION FUN_0095d7c0 @ 0095d7c0 ////

undefined4 * __thiscall FUN_0095d7c0(void *this,byte param_1)

{
  FUN_0095d770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095d7e0 @ 0095d7e0 ////

void __fastcall FUN_0095d7e0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d7000c;
  return;
}


//// FUNCTION FUN_0095d860 @ 0095d860 ////

void FUN_0095d860(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_010508a0;
  if (DAT_010508a0 != &DAT_010508ac) {
    do {
      if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)puVar1[2])(1);
        puVar1 = DAT_010508a0;
      }
    } while (puVar1 != &DAT_010508ac);
  }
  return;
}


//// FUNCTION FUN_0095d890 @ 0095d890 ////

undefined4 * __fastcall FUN_0095d890(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4556;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  piVar1 = param_1 + 0x34;
  *param_1 = &PTR_FUN_00d70018;
  param_1[0x36] = 0;
  *piVar1 = 0;
  param_1[0x35] = 0;
  local_4 = 1;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe668c8);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x37] = iVar2;
  if (DAT_00e668c4 != '\0') {
    iVar2 = 0xd0;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe668c8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e668c4 = '\0';
  }
  param_1[0x35] = &DAT_010508ac;
  *piVar1 = (int)DAT_010508ac;
  *(int **)((int)DAT_010508ac + 4) = piVar1;
  DAT_010508ac = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095d990 @ 0095d990 ////

/* WARNING: Removing unreachable block (ram,0x0095d9d0) */

void __fastcall FUN_0095d990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d70018;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_0095da00 @ 0095da00 ////

void FUN_0095da00(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *local_12c;
  undefined4 local_128;
  uint local_124;
  char local_120 [20];
  undefined1 *local_10c;
  undefined4 *local_108;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf45a6;
  local_c = ExceptionList;
  local_12c = local_120;
  bVar1 = false;
  local_120[0] = '\0';
  local_128 = 0;
  local_124 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_12c,"miscblueprint",0xd);
  local_128 = 0xd;
  local_12c[0xd] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_12c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
    _free(local_12c);
  }
  uVar3 = FUN_00558120(local_e4,0);
  cVar2 = (char)uVar3;
  while( true ) {
    if (cVar2 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    puVar4 = operator_new(0xe0);
    local_4._0_1_ = 3;
    local_108 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00558de0(local_e4,local_104);
      local_10c = &stack0xfffffec0;
      bVar1 = true;
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_0095d890(puVar4);
    }
    local_4 = 2;
    if ((bVar1) && (bVar1 = false, 0x14 < local_fc)) break;
    uVar3 = FUN_00558120(local_e4,2);
    cVar2 = (char)uVar3;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_104[0]);
}


//// FUNCTION FUN_0095db60 @ 0095db60 ////

undefined4 * __thiscall FUN_0095db60(void *this,byte param_1)

{
  FUN_0095d990(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095db80 @ 0095db80 ////

void __fastcall FUN_0095db80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d7005c;
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


//// FUNCTION FUN_0095dbd0 @ 0095dbd0 ////

undefined4 * __thiscall FUN_0095dbd0(void *this,byte param_1)

{
  FUN_0095db80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095dbf0 @ 0095dbf0 ////

void __fastcall FUN_0095dbf0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d7005c;
  return;
}


//// FUNCTION FUN_0095dce0 @ 0095dce0 ////

undefined4 __fastcall FUN_0095dce0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined1 local_8 [8];
  
  piVar1 = (int *)GetPlayerStudio();
  puVar2 = (uint *)(**(code **)(*piVar1 + 0x24))(local_8);
  if ((*(int *)(param_1 + 0x44) <= (int)puVar2[1]) &&
     ((*(int *)(param_1 + 0x44) < (int)puVar2[1] ||
      (puVar2 = (uint *)*puVar2, *(uint *)(param_1 + 0x40) <= puVar2)))) {
    return CONCAT31((int3)((uint)puVar2 >> 8),1);
  }
  return (uint)puVar2 & 0xffffff00;
}


//// FUNCTION FUN_0095dd60 @ 0095dd60 ////

undefined4 * __fastcall FUN_0095dd60(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puStack00000004;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4602;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  *param_1 = &PTR_FUN_00d70068;
  param_1[0x36] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = param_1 + 0x3d;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x14;
  param_1[0x42] = param_1 + 0x45;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0x14;
  local_4 = 3;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe66918);
  puStack00000004 = &stack0xffffffdc;
  iVar1 = FUN_0097dda0();
  param_1[0x37] = iVar1;
  if (s___AV__InList_VCMiscBlueprint_TM__00e668f0[0x27] != '\0') {
    iVar1 = 0xd0;
    puStack00000004 = &stack0xffffffd4;
    pcVar3 = "Link";
    pcVar2 = (char *)FUN_00acdb9e(0xe66918);
    FUN_0097df60(pcVar2,pcVar3,iVar1);
    s___AV__InList_VCMiscBlueprint_TM__00e668f0[0x27] = '\0';
  }
  param_1[0x38] = 0;
  param_1[0x39] = 9;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095de80 @ 0095de80 ////

void __fastcall FUN_0095de80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d70068;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (0x14 < (uint)param_1[0x44]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x42]);
  }
  if (0x14 < (uint)param_1[0x3c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3a]);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_0095dfa0 @ 0095dfa0 ////

undefined4 * __thiscall FUN_0095dfa0(void *this,byte param_1)

{
  FUN_0095de80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095dfc0 @ 0095dfc0 ////

/* WARNING: Removing unreachable block (ram,0x0095e05e) */
/* WARNING: Removing unreachable block (ram,0x0095e07e) */
/* WARNING: Removing unreachable block (ram,0x0095e083) */

undefined4 * __thiscall FUN_0095dfc0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  uint uVar5;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4620;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  pvVar1 = (void *)(**(code **)(*(int *)this + 8))();
  uVar2 = FUN_00413450(pvVar1,"/",0,1);
  if (uVar2 == 0xffffffff) {
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 8))();
    FUN_009b5030(param_1,puVar3);
  }
  else {
    uVar5 = 0xffffffff;
    uVar2 = uVar2 + 1;
    ppvVar4 = apvStack_2c;
    pvVar1 = (void *)(**(code **)(*(int *)this + 8))();
    puVar3 = FUN_00430770(pvVar1,ppvVar4,uVar2,uVar5);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_009b5030(param_1,puVar3);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_0095e0b0 @ 0095e0b0 ////

void FUN_0095e0b0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_010508d4 != &DAT_010508e0) {
    do {
      piVar4 = DAT_010508d4;
      puVar2 = (undefined4 *)DAT_010508d4[2];
      piVar1 = DAT_010508d4 + 1;
      if ((int *)DAT_010508d4[1] != (int *)0x0) {
        *(int *)DAT_010508d4[1] = *DAT_010508d4;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_010508d4 != &DAT_010508e0);
  }
  return;
}


//// FUNCTION FUN_0095e110 @ 0095e110 ////

undefined4 * __fastcall FUN_0095e110(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4638;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_2c,"Thumbs/Props/",puVar1);
  uStack_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_0095e180 @ 0095e180 ////

void __thiscall FUN_0095e180(void *this,void *param_1)

{
  bool bVar1;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4660;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_4c,"category",8);
  local_48 = 8;
  local_4c[8] = '\0';
  local_4 = 0;
  FUN_005584e0(param_1,local_2c,&local_4c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  bVar1 = FUN_00430950(local_2c,"");
  if (bVar1) {
    switch(*local_2c[0]) {
    case '0':
    case 'S':
    case 's':
      *(undefined4 *)((int)this + 0xe4) = 0;
      break;
    case '1':
    case 'A':
    case 'a':
      *(undefined4 *)((int)this + 0xe4) = 1;
      break;
    case '2':
    case 'F':
    case 'f':
      *(undefined4 *)((int)this + 0xe4) = 2;
      break;
    case '3':
    case 'V':
    case 'v':
      *(undefined4 *)((int)this + 0xe4) = 3;
      break;
    case '4':
    case 'P':
    case 'p':
      *(undefined4 *)((int)this + 0xe4) = 4;
      break;
    case '5':
    case '6':
    case 'H':
    case 'h':
      if (((*local_2c[0] == '5') || (local_2c[0][3] == 'u')) || (local_2c[0][3] == 'U')) {
        *(undefined4 *)((int)this + 0xe4) = 5;
      }
      else {
        *(undefined4 *)((int)this + 0xe4) = 6;
      }
      break;
    case '7':
    case 'O':
    case 'o':
      *(undefined4 *)((int)this + 0xe4) = 7;
      break;
    case '8':
    case 'D':
    case 'd':
      *(undefined4 *)((int)this + 0xe4) = 8;
      break;
    default:
      *(undefined4 *)((int)this + 0xe4) = 9;
    }
  }
  FUN_00961a30(this,param_1);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0095e370 @ 0095e370 ////

undefined4 * __fastcall FUN_0095e370(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_2c,"SetDressing/",puVar1);
  uStack_4 = 0;
  puVar1 = FUN_004d6510(puVar1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_0095e3e0 @ 0095e3e0 ////

int * __cdecl FUN_0095e3e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong *puVar5;
  int *piVar6;
  char *local_138;
  undefined4 local_134;
  uint local_130;
  char local_12c [20];
  int *local_118;
  ulonglong local_114;
  void *local_10c [2];
  uint local_104;
  ulonglong uStack_ec;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf46f6;
  local_c = ExceptionList;
  piVar6 = (int *)0x0;
  if (param_1[1] != 0) {
    ExceptionList = &local_c;
    puVar2 = FUN_0040d6b0(local_10c,"PropBlueprint/",param_1);
    local_4 = 0;
    FUN_0055c870(local_e4,'\x01',puVar2,0);
    if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
      _free(local_10c[0]);
    }
    local_138 = local_12c;
    local_12c[0] = '\0';
    local_134 = 0;
    local_130 = 0x14;
    _strncpy(local_138,"blueprint",9);
    local_134 = 9;
    local_138[9] = '\0';
    local_4._0_1_ = 3;
    uVar3 = FUN_00558a50(local_e4,&local_138,(undefined4 *)0x0);
    local_4._0_1_ = 2;
    if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
      _free(local_138);
    }
    if ((char)uVar3 != '\0') {
      local_118 = operator_new(0x128);
      local_4._0_1_ = 4;
      if (local_118 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        local_114 = CONCAT44(local_114._4_4_,&stack0xfffffeb0);
        piVar6 = FUN_0095dd60(local_118);
      }
      piVar1 = piVar6 + 0x34;
      piVar6[0x35] = (int)&DAT_010508e0;
      *piVar1 = (int)DAT_010508e0;
      *(int **)((int)DAT_010508e0 + 4) = piVar1;
      local_4._0_1_ = 2;
      DAT_010508e0 = piVar1;
      local_118 = piVar6;
      (**(code **)(*piVar6 + 4))();
      local_138 = local_12c;
      local_12c[0] = '\0';
      local_134 = 0;
      local_130 = 0x14;
      _strncpy(local_138,"tag",3);
      local_134 = 3;
      local_138[3] = '\0';
      local_4._0_1_ = 5;
      puVar2 = FUN_005584e0(local_e4,local_10c,&local_138);
      FUN_004015d0(piVar6 + 0x3a,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
        _free(local_10c[0]);
      }
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
      local_138 = local_12c;
      local_12c[0] = '\0';
      local_134 = 0;
      local_130 = 0x14;
      _strncpy(local_138,"tagdesc",7);
      local_134 = 7;
      local_138[7] = '\0';
      local_4._0_1_ = 6;
      puVar2 = FUN_005584e0(local_e4,local_10c,&local_138);
      FUN_004015d0(piVar6 + 0x42,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
        _free(local_10c[0]);
      }
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
      local_138 = local_12c;
      local_12c[0] = '\0';
      local_134 = 0;
      local_130 = 0x14;
      _strncpy(local_138,"menutype",8);
      local_134 = 8;
      local_138[8] = '\0';
      local_4._0_1_ = 7;
      iVar4 = FUN_00558750(local_e4,&local_138,0);
      piVar6[0x38] = iVar4;
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
      local_138 = local_12c;
      local_12c[0] = '\0';
      local_134 = 0;
      local_130 = 0x14;
      _strncpy(local_138,"finance",7);
      local_134 = 7;
      local_138[7] = '\0';
      local_4._0_1_ = 8;
      uVar3 = FUN_00558a50(local_e4,&local_138,(undefined4 *)0x0);
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
      if ((char)uVar3 != '\0') {
        local_138 = local_12c;
        local_12c[0] = '\0';
        local_134 = 0;
        local_130 = 0x14;
        _strncpy(local_138,"purchasecost",0xc);
        local_134 = 0xc;
        local_138[0xc] = '\0';
        local_4._0_1_ = 9;
        FUN_00558610(local_e4,&local_138,0.0);
        local_114 = FUN_00acd42c();
        FUN_00471b10((longlong *)&local_114);
        puVar5 = FUN_00442cf0(&uStack_ec);
        piVar6[0x10] = (int)*puVar5;
        piVar6[0x11] = *(int *)((int)puVar5 + 4);
        FUN_00471b10((longlong *)(piVar6 + 0x10));
        if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
          _free(local_138);
        }
      }
      puVar2 = FUN_0040d6b0(&local_138,"data/PropBlueprint/",param_1);
      puVar2 = FUN_004312e0(local_10c,puVar2,".ini");
      FUN_004015d0(piVar6 + 0x23,(char *)*puVar2,puVar2[1]);
      if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
        _free(local_10c[0]);
      }
      piVar6 = local_118;
      if (0x14 < local_130) {
                    /* WARNING: Subroutine does not return */
        _free(local_138);
      }
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  ExceptionList = local_c;
  return piVar6;
}


//// FUNCTION FUN_0095e860 @ 0095e860 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095e860(void)

{
  uint uVar1;
  float10 fVar2;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
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
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cf473b;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_24 = 0x14;
  local_4 = 0;
  uStack_3 = 0;
  uVar1 = 0;
  ExceptionList = &local_c;
  do {
    local_8c = local_80;
    local_28 = 0;
    *local_2c = 0;
    local_80[0] = '\0';
    local_88 = 0;
    local_84 = 0x14;
    _strncpy(local_8c,"data/propblueprint",0x12);
    local_88 = 0x12;
    local_8c[0x12] = '\0';
    local_4 = 1;
    uVar1 = FUN_00556700(&local_8c,uVar1,&local_2c,'\x01');
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"",0);
    local_48 = 0;
    *local_4c = '\0';
    local_6c = local_60;
    local_60[0] = '\0';
    local_68 = 0;
    local_64 = 0x14;
    _strncpy(local_6c,".ini",4);
    local_68 = 4;
    local_6c[4] = '\0';
    local_4 = 3;
    FUN_00569860((int *)&local_2c,&local_6c,&local_4c);
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    local_4 = 0;
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    FUN_0095e3e0(&local_2c);
  } while (uVar1 != 0);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"setdressing",0xb);
  local_48 = 0xb;
  local_4c[0xb] = '\0';
  local_4 = 4;
  FUN_00558a50(DAT_00f88624,&local_4c,(undefined4 *)0x1);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"boredomboost",0xc);
  local_48 = 0xc;
  local_4c[0xc] = '\0';
  local_4 = 5;
  fVar2 = FUN_00558610(DAT_00f88624,&local_4c,0.0);
  _DAT_00e519d8 = (float)fVar2;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"boredomhalflife",0xf);
  local_48 = 0xf;
  local_4c[0xf] = '\0';
  _local_4 = CONCAT31(uStack_3,6);
  fVar2 = FUN_00558610(DAT_00f88624,&local_4c,0.0);
  _DAT_00e519dc = (float)fVar2;
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


//// FUNCTION FUN_0095eb40 @ 0095eb40 ////

void __fastcall FUN_0095eb40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d700e4;
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


//// FUNCTION FUN_0095eb90 @ 0095eb90 ////

undefined4 * __thiscall FUN_0095eb90(void *this,byte param_1)

{
  FUN_0095eb40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095ebb0 @ 0095ebb0 ////

void __fastcall FUN_0095ebb0(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d700e4;
  return;
}


//// FUNCTION FUN_0095ec50 @ 0095ec50 ////

void __cdecl FUN_0095ec50(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &TM::CSceneBlueprint::RTTI_Type_Descriptor;
  pTVar3 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar1 = (int *)FUN_009623a0(param_1);
  FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
  return;
}


//// FUNCTION FUN_0095ed00 @ 0095ed00 ////

undefined4 * __fastcall FUN_0095ed00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  piVar1 = param_1 + 0x34;
  *param_1 = &PTR_FUN_00d700f0;
  param_1[0x36] = 0;
  *piVar1 = 0;
  param_1[0x35] = 0;
  local_4 = 1;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe66990);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x37] = iVar2;
  if (s___AVCSceneBlueprint_TM___00e66974[0x19] != '\0') {
    iVar2 = 0xd0;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe66990);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCSceneBlueprint_TM___00e66974[0x19] = '\0';
  }
  param_1[0x35] = &DAT_01050918;
  *piVar1 = (int)DAT_01050918;
  *(int **)((int)DAT_01050918 + 4) = piVar1;
  DAT_01050918 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095edf0 @ 0095edf0 ////

/* WARNING: Removing unreachable block (ram,0x0095ee30) */

void __fastcall FUN_0095edf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d700f0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_0095eeb0 @ 0095eeb0 ////

void FUN_0095eeb0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  DAT_01050900 = 0;
  if (DAT_0105090c != &DAT_01050918) {
    do {
      piVar4 = DAT_0105090c;
      puVar2 = (undefined4 *)DAT_0105090c[2];
      piVar1 = DAT_0105090c + 1;
      if ((int *)DAT_0105090c[1] != (int *)0x0) {
        *(int *)DAT_0105090c[1] = *DAT_0105090c;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_0105090c != &DAT_01050918);
  }
  return;
}


//// FUNCTION FUN_0095ef10 @ 0095ef10 ////

undefined4 * __thiscall FUN_0095ef10(void *this,byte param_1)

{
  FUN_0095edf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095ef30 @ 0095ef30 ////

void FUN_0095ef30(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *local_16c;
  undefined4 local_168;
  uint local_164;
  char local_160 [20];
  char *local_14c;
  undefined4 local_148;
  uint local_144;
  char local_140 [20];
  undefined4 *local_12c;
  undefined1 *local_128;
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf47ca;
  local_c = ExceptionList;
  local_14c = local_140;
  local_140[0] = '\0';
  local_148 = 0;
  local_144 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_14c,"awards",6);
  local_148 = 6;
  local_14c[6] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_14c);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
    _free(local_14c);
  }
  cVar1 = FUN_00558bb0(local_e4,0);
  do {
    if (cVar1 == '\0') {
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    local_16c = local_160;
    local_160[0] = '\0';
    local_168 = 0;
    local_164 = 0x14;
    _strncpy(local_16c,"unlocks",7);
    local_168 = 7;
    local_16c[7] = '\0';
    local_4._0_1_ = 3;
    bVar2 = FUN_00558a90(local_e4,&local_16c,(undefined4 *)0x1);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_164) {
                    /* WARNING: Subroutine does not return */
      _free(local_16c);
    }
    if (bVar2) {
      uVar3 = FUN_00558120(local_e4,0);
      cVar1 = (char)uVar3;
      while (cVar1 != '\0') {
        FUN_00558de0(local_e4,local_124);
        local_4._0_1_ = 4;
        if ((DAT_01050938 & 1) == 0) {
          DAT_01050938 = DAT_01050938 | 1;
          DAT_0105093c = &DAT_01050948;
          DAT_01050948 = 0;
          DAT_01050940 = 0;
          DAT_01050944 = 0x14;
          _strncpy(&DAT_01050948,"scene_",6);
          DAT_01050940 = 6;
          DAT_0105093c[6] = '\0';
          _atexit(FUN_00d140d0);
        }
        puVar4 = FUN_00430770(local_124,local_104,0,DAT_01050940);
        iVar5 = __stricmp((char *)*puVar4,DAT_0105093c);
        if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
          _free(local_104[0]);
        }
        if (iVar5 == 0) {
          local_12c = operator_new(0xe0);
          local_4._0_1_ = 5;
          if (local_12c != (undefined4 *)0x0) {
            local_128 = &stack0xfffffe80;
            FUN_0095ed00(local_12c);
          }
        }
        local_4 = CONCAT31(local_4._1_3_,2);
        if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
          _free(local_124[0]);
        }
        uVar3 = FUN_00558120(local_e4,2);
        cVar1 = (char)uVar3;
      }
    }
    FUN_00558bb0(local_e4,5);
    cVar1 = FUN_00558bb0(local_e4,2);
  } while( true );
}


//// FUNCTION FUN_0095f1f0 @ 0095f1f0 ////

void FUN_0095f1f0(void)

{
  DAT_01050900 = 1;
  FUN_0095ef30();
  return;
}


//// FUNCTION FUN_0095f200 @ 0095f200 ////

void __fastcall FUN_0095f200(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d7012c;
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


//// FUNCTION FUN_0095f250 @ 0095f250 ////

undefined4 * __thiscall FUN_0095f250(void *this,byte param_1)

{
  FUN_0095f200(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095f270 @ 0095f270 ////

void __fastcall FUN_0095f270(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d7012c;
  return;
}


//// FUNCTION FUN_0095f2d0 @ 0095f2d0 ////

void __cdecl FUN_0095f2d0(undefined4 *param_1)

{
  FUN_009623a0(param_1);
  return;
}


//// FUNCTION FUN_0095f330 @ 0095f330 ////

undefined4 __fastcall FUN_0095f330(int *param_1)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00960f20((int)param_1);
  if (cVar1 != '\0') {
    puVar2 = (uint *)(**(code **)(*param_1 + 0x28))();
    if ((int)puVar2 < 1) goto LAB_0095f36d;
  }
  piVar3 = (int *)GetPlayerStudio();
  puVar2 = (uint *)(**(code **)(*piVar3 + 0x24))(local_8);
  if (((int)puVar2[1] < param_1[0x11]) ||
     (((int)puVar2[1] <= param_1[0x11] && (puVar2 = (uint *)*puVar2, puVar2 < (uint)param_1[0x10])))
     ) {
    return (uint)puVar2 & 0xffffff00;
  }
LAB_0095f36d:
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}


//// FUNCTION FUN_0095f3c0 @ 0095f3c0 ////

undefined4 FUN_0095f3c0(int param_1,int param_2,undefined *param_3)

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


//// FUNCTION FUN_0095f410 @ 0095f410 ////

void __fastcall FUN_0095f410(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d70138;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (0x14 < (uint)param_1[0x42]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x40]);
  }
  if (10 < (uint)param_1[0x3a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x38]);
  }
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x35] = param_1[0x34];
  }
  if (param_1[0x34] != 0) {
    *(undefined4 *)(param_1[0x34] + 4) = param_1[0x35];
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_0095f4c0 @ 0095f4c0 ////

undefined4 * __thiscall FUN_0095f4c0(void *this,byte param_1)

{
  FUN_0095f410(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0095f4e0 @ 0095f4e0 ////

undefined4 * __fastcall FUN_0095f4e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4832;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  piVar1 = param_1 + 0x34;
  *param_1 = &PTR_FUN_00d70138;
  param_1[0x36] = 0;
  *piVar1 = 0;
  param_1[0x35] = 0;
  param_1[0x38] = param_1 + 0x3b;
  *(undefined2 *)(param_1 + 0x3b) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 10;
  param_1[0x40] = param_1 + 0x43;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x14;
  local_4 = 3;
  param_1[0x36] = param_1;
  FUN_00acdb9e(0xe669e8);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x37] = iVar2;
  if (DAT_00e669e4 != '\0') {
    iVar2 = 0xd0;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "Link";
    pcVar3 = (char *)FUN_00acdb9e(0xe669e8);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    DAT_00e669e4 = '\0';
  }
  param_1[0x35] = &DAT_01050970;
  *piVar1 = (int)DAT_01050970;
  *(int **)((int)DAT_01050970 + 4) = piVar1;
  DAT_01050970 = piVar1;
  param_1[0x48] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0095f620 @ 0095f620 ////

void FUN_0095f620(int *param_1,int *param_2,undefined *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  
  uVar5 = FUN_0095f3c0((int)param_1,(int)param_2,param_3);
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


//// FUNCTION FUN_0095f6f0 @ 0095f6f0 ////

int * __fastcall FUN_0095f6f0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  wchar_t *local_20;
  undefined4 local_1c;
  uint local_18;
  wchar_t local_14 [10];
  
  if (param_1[0x39] == 0) {
    local_20 = local_14;
    local_14[0] = L'\0';
    local_1c = 0;
    local_18 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar1);
    iVar2 = _wcscmp((wchar_t *)param_1[0x12],local_20);
    if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20);
    }
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))();
      puVar3 = FUN_009b5030(&local_20,puVar3);
      FUN_004036d0(param_1 + 0x38,(wchar_t *)*puVar3,puVar3[1]);
      if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
        _free(local_20);
      }
    }
    else {
      FUN_004036d0(param_1 + 0x38,(wchar_t *)param_1[0x12],param_1[0x13]);
    }
  }
  return param_1 + 0x38;
}


//// FUNCTION FUN_0095f880 @ 0095f880 ////

void FUN_0095f880(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (DAT_01050964 != &DAT_01050970) {
    do {
      piVar4 = DAT_01050964;
      puVar2 = (undefined4 *)DAT_01050964[2];
      piVar1 = DAT_01050964 + 1;
      if ((int *)DAT_01050964[1] != (int *)0x0) {
        *(int *)DAT_01050964[1] = *DAT_01050964;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 4) = *piVar1;
      }
      *piVar4 = 0;
      *piVar1 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    } while (DAT_01050964 != &DAT_01050970);
  }
  return;
}


//// FUNCTION FUN_0095f910 @ 0095f910 ////

undefined4 * __fastcall FUN_0095f910(int *param_1)

{
  undefined4 *puVar1;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4848;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_2c,"set/",puVar1);
  uStack_4 = 0;
  puVar1 = FUN_0052df70(puVar1);
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  ExceptionList = pvStack_c;
  return puVar1;
}


//// FUNCTION FUN_0095f980 @ 0095f980 ////

undefined4 * __thiscall FUN_0095f980(void *this,undefined4 *param_1)

{
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d6b0(&local_2c,"Thumbs/Sets/",(undefined4 *)((int)this + 0x100));
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,".dds",4);
  local_48 = 4;
  local_4c[4] = '\0';
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,".msh",4);
  local_68 = 4;
  local_6c[4] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00569860((int *)&local_2c,&local_6c,&local_4c);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
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


//// FUNCTION FUN_0095fac0 @ 0095fac0 ////

int * __cdecl FUN_0095fac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  char *local_130;
  undefined4 local_12c;
  uint local_128;
  char local_124 [23];
  char local_10d;
  int *local_10c;
  void *local_108 [2];
  uint local_100;
  undefined1 *local_e8;
  undefined4 local_e4 [54];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf490c;
  pvStack_c = ExceptionList;
  local_10c = (int *)0x0;
  ExceptionList = &pvStack_c;
  puVar1 = FUN_0040d6b0(local_108,"set/",param_1);
  local_4 = 0;
  FUN_0055c540(local_e4,puVar1);
  if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
    _free(local_108[0]);
  }
  local_130 = local_124;
  local_124[0] = '\0';
  local_12c = 0;
  local_128 = 0x14;
  _strncpy(local_130,"blueprint",9);
  local_12c = 9;
  local_130[9] = '\0';
  local_4._0_1_ = 3;
  uVar2 = FUN_00558a50(local_e4,&local_130,(undefined4 *)0x0);
  local_10d = (char)uVar2;
  local_4._0_1_ = 2;
  if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
    _free(local_130);
  }
  if (local_10d != '\0') {
    local_10c = operator_new(0x128);
    local_4._0_1_ = 4;
    if (local_10c == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      local_e8 = &stack0xfffffebc;
      piVar3 = FUN_0095f4e0(local_10c);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    local_10c = piVar3;
    _strncpy(local_130,"availableindebt",0xf);
    local_12c = 0xf;
    local_130[0xf] = '\0';
    local_4._0_1_ = 5;
    iVar4 = FUN_00558750(local_e4,&local_130,0);
    *(bool *)(piVar3 + 0xf) = iVar4 != 0;
    local_4._0_1_ = 2;
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    (**(code **)(*piVar3 + 4))();
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"finance",7);
    local_12c = 7;
    local_130[7] = '\0';
    local_4._0_1_ = 6;
    FUN_00558a50(local_e4,&local_130,(undefined4 *)0x1);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"purchasecost",0xc);
    local_12c = 0xc;
    local_130[0xc] = '\0';
    local_4._0_1_ = 7;
    FUN_00558610(local_e4,&local_130,0.0);
    uVar5 = FUN_00acd42c();
    *(ulonglong *)(piVar3 + 0x10) = uVar5;
    FUN_00471b10((longlong *)(piVar3 + 0x10));
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"",0);
    local_12c = 0;
    *local_130 = '\0';
    local_4._0_1_ = 8;
    FUN_00558a50(local_e4,&local_130,(undefined4 *)0x1);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"mesh",4);
    local_12c = 4;
    local_130[4] = '\0';
    local_4._0_1_ = 9;
    puVar1 = FUN_005584e0(local_e4,local_108,&local_130);
    FUN_004015d0(piVar3 + 0x40,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108[0]);
    }
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"scene",5);
    local_12c = 5;
    local_130[5] = '\0';
    local_4._0_1_ = 10;
    FUN_00558a50(local_e4,&local_130,(undefined4 *)0x1);
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    local_130 = local_124;
    local_124[0] = '\0';
    local_12c = 0;
    local_128 = 0x14;
    _strncpy(local_130,"setid",5);
    local_12c = 5;
    local_130[5] = '\0';
    local_4 = CONCAT31(local_4._1_3_,0xb);
    iVar4 = FUN_00558750(local_e4,&local_130,0);
    piVar3[0x48] = iVar4;
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
    puVar1 = FUN_0040d6b0(&local_130,"data/set/",param_1);
    puVar1 = FUN_004312e0(local_108,puVar1,".ini");
    FUN_004015d0(piVar3 + 0x23,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108[0]);
    }
    if (0x14 < local_128) {
                    /* WARNING: Subroutine does not return */
      _free(local_130);
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_e4);
  ExceptionList = pvStack_c;
  return local_10c;
}


//// FUNCTION FUN_0095ff70 @ 0095ff70 ////

void FUN_0095ff70(void)

{
  char cVar1;
  undefined4 *puVar2;
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
  puStack_8 = &LAB_00cf4941;
  local_c = ExceptionList;
  local_124 = local_118;
  local_118[0] = '\0';
  local_120 = 0;
  local_11c = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_124,"set",3);
  local_120 = 3;
  local_124[3] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_124);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
    _free(local_124);
  }
  cVar1 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar1 == '\0') {
      FUN_0095f620(DAT_01050964,&DAT_01050970,&LAB_0095f8e0);
      local_4 = 0xffffffff;
      FUN_00558920(local_e4);
      ExceptionList = local_c;
      return;
    }
    puVar2 = FUN_005562f0(local_e4,local_104,1);
    local_4._0_1_ = 3;
    FUN_0095fac0(puVar2);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_fc) break;
    cVar1 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_104[0]);
}


//// FUNCTION FUN_009600a0 @ 009600a0 ////

void __fastcall FUN_009600a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d7016c;
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


//// FUNCTION FUN_009600f0 @ 009600f0 ////

undefined4 * __thiscall FUN_009600f0(void *this,byte param_1)

{
  FUN_009600a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00960110 @ 00960110 ////

void __fastcall FUN_00960110(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d7016c;
  return;
}


//// FUNCTION FUN_00960190 @ 00960190 ////

int __fastcall FUN_00960190(int param_1)

{
  return param_1 + 0x104;
}


//// FUNCTION FUN_009601d0 @ 009601d0 ////

void __cdecl FUN_009601d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &TM::CTech::RTTI_Type_Descriptor;
  pTVar3 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar1 = (int *)FUN_009623a0(param_1);
  FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
  return;
}


//// FUNCTION FUN_00960250 @ 00960250 ////

int * __thiscall FUN_00960250(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00960300 @ 00960300 ////

void FUN_00960300(void)

{
  undefined4 *puVar1;
  
  (*(code *)DAT_010509c4[1])();
  DAT_010509d8 = 0;
  (*(code *)*DAT_010509c4)();
  puVar1 = DAT_01050998;
  while (puVar1 != &DAT_010509a4) {
    if ((undefined4 *)puVar1[2] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)puVar1[2])(1);
      puVar1 = DAT_01050998;
    }
  }
  return;
}


//// FUNCTION FUN_00960370 @ 00960370 ////

void FUN_00960370(void)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4978;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"appliance_latex",0xf);
  local_28 = 0xf;
  local_2c[0xf] = '\0';
  iVar5 = 0;
  pTVar4 = &TM::CTech::RTTI_Type_Descriptor;
  pTVar3 = &TM::TMBlueprint::RTTI_Type_Descriptor;
  iVar2 = 0;
  local_4 = 0;
  piVar1 = (int *)FUN_009623a0(&local_2c);
  iVar2 = FUN_00ace790(piVar1,iVar2,pTVar3,pTVar4,iVar5);
  (*(code *)DAT_010509c4[1])();
  DAT_010509d8 = iVar2;
  (*(code *)*DAT_010509c4)();
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  DAT_0105ea8c = &LAB_009602e0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00960440 @ 00960440 ////

undefined4 * __fastcall FUN_00960440(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puStack00000004;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf49de;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00963030(param_1);
  *param_1 = &PTR_FUN_00d70198;
  param_1[0x34] = param_1 + 0x37;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x14;
  piVar1 = param_1 + 0x3c;
  param_1[0x3e] = 0;
  *piVar1 = 0;
  param_1[0x3d] = 0;
  param_1[0x41] = param_1 + 0x44;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x14;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = param_1 + 0x4d;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x14;
  param_1[0x52] = param_1 + 0x55;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x14;
  local_4 = 5;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  FUN_0043b520(param_1 + 0x5c,0.0);
  param_1[0x3e] = param_1;
  FUN_00acdb9e(0xe66a50);
  puStack00000004 = &stack0xffffffd8;
  iVar2 = FUN_0097dda0();
  param_1[0x3f] = iVar2;
  if (s___AVCTech_TM___00e66a40[0xf] != '\0') {
    iVar2 = 0xf0;
    puStack00000004 = &stack0xffffffd0;
    pcVar4 = "TechLink";
    pcVar3 = (char *)FUN_00acdb9e(0xe66a50);
    FUN_0097df60(pcVar3,pcVar4,iVar2);
    s___AVCTech_TM___00e66a40[0xf] = '\0';
  }
  param_1[0x3d] = &DAT_010509a4;
  *piVar1 = (int)DAT_010509a4;
  *(int **)((int)DAT_010509a4 + 4) = piVar1;
  DAT_010509a4 = piVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009605c0 @ 009605c0 ////

void __fastcall FUN_009605c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d70198;
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3d] = param_1[0x3c];
  }
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1[0x3c] + 4) = param_1[0x3d];
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (0x14 < (uint)param_1[0x54]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x52]);
  }
  if (0x14 < (uint)param_1[0x4c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4a]);
  }
  if (0x14 < (uint)param_1[0x43]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x41]);
  }
  if ((undefined4 *)param_1[0x3d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x3d] = param_1[0x3c];
  }
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1[0x3c] + 4) = param_1[0x3d];
  }
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (0x14 < (uint)param_1[0x36]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x34]);
  }
  FUN_00963220(param_1);
  return;
}


//// FUNCTION FUN_009606a0 @ 009606a0 ////

undefined4 * FUN_009606a0(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf49fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x178);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_00960440(puVar1);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00960710 @ 00960710 ////

undefined4 * __thiscall FUN_00960710(void *this,byte param_1)

{
  FUN_009605c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00960730 @ 00960730 ////

int * __cdecl FUN_00960730(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int *piVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  void *this;
  int *piVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  float *pfVar12;
  float local_8 [2];
  
  piVar8 = (int *)0x0;
  puVar9 = DAT_01050998;
  if (DAT_01050998 != &DAT_010509a4) {
    do {
      piVar3 = (int *)puVar9[2];
      cVar4 = FUN_00960f30(piVar3);
      if (cVar4 != '\0') {
        pbVar10 = (byte *)*param_1;
        pbVar5 = (byte *)piVar3[0x52];
        do {
          bVar2 = *pbVar5;
          bVar11 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_00960794:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00960799;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar11 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_00960794;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_00960799:
        if (iVar6 == 0) {
          if (piVar8 != (int *)0x0) {
            pfVar12 = local_8;
            uVar7 = (**(code **)(*piVar3 + 0x1c))();
            this = (void *)(**(code **)(*piVar8 + 0x1c))(local_8,uVar7);
            uVar7 = FUN_0043b6c0(this,pfVar12);
            if ((char)uVar7 == '\0') goto LAB_009607c7;
          }
          piVar8 = piVar3;
        }
      }
LAB_009607c7:
      puVar1 = puVar9 + 1;
      puVar9 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_010509a4);
  }
  return piVar8;
}


//// FUNCTION FUN_009607e0 @ 009607e0 ////

void __fastcall FUN_009607e0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  char *pcStack_148;
  uint uStack_144;
  uint uStack_140;
  char acStack_13c [20];
  void *pvStack_128;
  void *pvStack_124;
  uint uStack_120;
  uint uStack_11c;
  void *apvStack_104 [2];
  uint uStack_fc;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [212];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4a73;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  puVar1 = FUN_0040d6b0(apvStack_104,"technology/",puVar1);
  uStack_4 = 0;
  FUN_0055c540(auStack_e4,puVar1);
  if (0x14 < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_104[0]);
  }
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"mesh",4);
  uStack_144 = 4;
  pcStack_148[4] = '\0';
  uStack_4._0_1_ = 3;
  puVar1 = FUN_005584e0(auStack_e4,&pvStack_124,&pcStack_148);
  FUN_004015d0(param_1 + 0x4a,(char *)*puVar1,puVar1[1]);
  if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_124);
  }
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"techtype",8);
  uStack_144 = 8;
  pcStack_148[8] = '\0';
  uStack_4._0_1_ = 4;
  puVar1 = FUN_005584e0(auStack_e4,&pvStack_124,&pcStack_148);
  FUN_004015d0(param_1 + 0x52,(char *)*puVar1,puVar1[1]);
  if (0x14 < uStack_11c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_124);
  }
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"rank",4);
  uStack_144 = 4;
  pcStack_148[4] = '\0';
  uStack_4._0_1_ = 5;
  iVar2 = FUN_00558750(auStack_e4,&pcStack_148,0);
  param_1[0x40] = iVar2;
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"defaultbest",0xb);
  uStack_144 = 0xb;
  pcStack_148[0xb] = '\0';
  uStack_4._0_1_ = 6;
  iVar2 = FUN_00558750(auStack_e4,&pcStack_148,0);
  *(char *)(param_1 + 0x5b) = '\x01' - (iVar2 != 1);
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"consumable",10);
  uStack_144 = 10;
  pcStack_148[10] = '\0';
  uStack_4._0_1_ = 7;
  iVar2 = FUN_00558750(auStack_e4,&pcStack_148,0);
  *(char *)(param_1 + 0x49) = '\x01' - (iVar2 != 1);
  uStack_4._0_1_ = 2;
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  FUN_004015d0(param_1 + 0x41,(char *)*puVar1,puVar1[1]);
  pcStack_148 = acStack_13c;
  acStack_13c[0] = '\0';
  uStack_144 = 0;
  uStack_140 = 0x14;
  _strncpy(pcStack_148,"noveltyhalflife",0xf);
  uStack_144 = 0xf;
  pcStack_148[0xf] = '\0';
  uStack_4._0_1_ = 8;
  fVar3 = FUN_00558610(auStack_e4,&pcStack_148,1.0);
  pvStack_128 = (void *)(float)fVar3;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (0x14 < uStack_140) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_148);
  }
  fVar3 = (float10)log2((float10)2.0);
  param_1[0x5a] = (int)(float)(((float10)0.6931471805599453 * fVar3) / (float10)(float)pvStack_128);
  (**(code **)(*param_1 + 4))(auStack_e4);
  uStack_140 = uStack_140 & 0xffffff00;
  pcStack_148 = (char *)0x0;
  uStack_144 = 0x14;
  _strncpy((char *)&uStack_140,"path",4);
  pcStack_148 = (char *)0x4;
  acStack_13c[0] = '\0';
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,9);
  puVar1 = FUN_005584e0(&uStack_e8,&pvStack_128,(undefined4 *)&stack0xfffffeb4);
  FUN_004015d0(param_1 + 0x34,(char *)*puVar1,puVar1[1]);
  if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_128);
  }
  if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
    _free(&uStack_140);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00558920(&uStack_e8);
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00960c10 @ 00960c10 ////

void FUN_00960c10(void)

{
  uint _Count;
  char *_Source;
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *local_12c;
  uint local_124;
  char local_120 [20];
  char *local_10c;
  undefined4 local_108;
  uint local_104;
  char local_100 [20];
  undefined4 *local_ec;
  undefined1 *local_e8;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4aaf;
  local_c = ExceptionList;
  local_10c = local_100;
  local_100[0] = '\0';
  local_108 = 0;
  local_104 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_10c,"technology",10);
  local_108 = 10;
  local_10c[10] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_10c);
  if (0x14 < local_104) {
                    /* WARNING: Subroutine does not return */
    _free(local_10c);
  }
  local_12c = local_120;
  local_120[0] = '\0';
  local_124 = 0x14;
  local_4 = CONCAT31(local_4._1_3_,3);
  cVar1 = FUN_00558bb0(local_e4,0);
  while( true ) {
    if (cVar1 == '\0') {
      if (local_124 < 0x15) {
        local_4 = 0xffffffff;
        FUN_00558920(local_e4);
        ExceptionList = local_c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
    puVar2 = FUN_005562f0(local_e4,&local_10c,1);
    _Count = puVar2[1];
    _Source = (char *)*puVar2;
    if (local_124 <= _Count) {
      if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
        _free(local_12c);
      }
      local_124 = _Count + 0x20 & 0xffffffe0;
      local_12c = _malloc(local_124);
    }
    _strncpy(local_12c,_Source,_Count);
    local_12c[_Count] = '\0';
    if (0x14 < local_104) break;
    local_ec = operator_new(0x178);
    local_4._0_1_ = 4;
    if (local_ec == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      local_e8 = &stack0xfffffec0;
      piVar3 = FUN_00960440(local_ec);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_009607e0(piVar3);
    cVar1 = FUN_00558bb0(local_e4,2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_10c);
}


//// FUNCTION FUN_00960dd0 @ 00960dd0 ////

void FUN_00960dd0(void)

{
  FUN_00960c10();
  FUN_00960370();
  return;
}


//// FUNCTION FUN_00960de0 @ 00960de0 ////

void __fastcall FUN_00960de0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d70218;
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


//// FUNCTION FUN_00960e30 @ 00960e30 ////

undefined4 * __thiscall FUN_00960e30(void *this,byte param_1)

{
  FUN_00960de0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00960e50 @ 00960e50 ////

void __fastcall FUN_00960e50(undefined4 *param_1)

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
  *param_1 = &PTR_LAB_00d70218;
  return;
}


//// FUNCTION FUN_00960eb0 @ 00960eb0 ////

void FUN_00960eb0(void)

{
  return;
}


//// FUNCTION FUN_00960ec0 @ 00960ec0 ////

void __cdecl FUN_00960ec0(undefined4 param_1)

{
  DAT_010509dc = param_1;
  return;
}


//// FUNCTION FUN_00960ed0 @ 00960ed0 ////

void __cdecl FUN_00960ed0(undefined4 param_1)

{
  DAT_010509e0 = param_1;
  return;
}


//// FUNCTION FUN_00960f20 @ 00960f20 ////

undefined1 __fastcall FUN_00960f20(int param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}


//// FUNCTION FUN_00960f30 @ 00960f30 ////

void __fastcall FUN_00960f30(undefined4 param_1)

{
  (*DAT_010509dc)(param_1);
  return;
}


//// FUNCTION FUN_00960f60 @ 00960f60 ////

undefined4 __fastcall FUN_00960f60(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar1 = FUN_009d38d0((undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x88) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x88);
}


//// FUNCTION FUN_009611c0 @ 009611c0 ////

void __cdecl FUN_009611c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_00961320 @ 00961320 ////

void __fastcall FUN_00961320(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00961510 @ 00961510 ////

void __cdecl FUN_00961510(int param_1,int param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_2 = param_2 + -4) {
    param_3 = param_3 + -1;
    *param_3 = *(undefined4 *)(param_2 + -4);
  }
  return;
}


//// FUNCTION FUN_00961560 @ 00961560 ////

void __fastcall FUN_00961560(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_009615d0 @ 009615d0 ////

int __cdecl FUN_009615d0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  pcVar2 = (char *)*param_1;
  iVar3 = -0x21524111;
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)(pcVar2 + 1);
  if (uVar5 != 0) {
    iVar7 = (uVar5 >> 4) + 1;
    uVar6 = 0;
    do {
      pcVar4 = pcVar2 + uVar6;
      uVar6 = uVar6 + iVar7;
      iVar3 = iVar3 + *pcVar4;
    } while (uVar6 <= uVar5 - iVar7);
  }
  return iVar3;
}


//// FUNCTION FUN_00961650 @ 00961650 ////

undefined4 * __thiscall FUN_00961650(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00961720 @ 00961720 ////

undefined4 * __thiscall FUN_00961720(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00961780 @ 00961780 ////

void * __thiscall FUN_00961780(void *this,byte param_1)

{
  FUN_00961560((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009617d0 @ 009617d0 ////

void __cdecl FUN_009617d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


//// FUNCTION FUN_00961800 @ 00961800 ////

undefined4 * __thiscall FUN_00961800(void *this,undefined4 *param_1)

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
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_20,(wchar_t *)&lpCaption_00d16918,uVar1);
  iVar2 = _wcscmp(*(wchar_t **)((int)this + 0x48),local_20);
  if (10 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (iVar2 == 0) {
    FUN_009b5030(param_1,(undefined4 *)((int)this + 0xac));
    return param_1;
  }
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x48),*(uint *)((int)this + 0x4c));
  return param_1;
}


//// FUNCTION FUN_00961930 @ 00961930 ////

void FUN_00961930(void)

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


//// FUNCTION FUN_00961960 @ 00961960 ////

undefined4 * __thiscall
FUN_00961960(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = (undefined1 *)((int)this + 0x14);
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 8),(char *)*param_3,param_3[1]);
  *(undefined4 *)((int)this + 0x28) = param_3[8];
  return this;
}


//// FUNCTION FUN_00961a00 @ 00961a00 ////

void __cdecl FUN_00961a00(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}


//// FUNCTION FUN_00961a30 @ 00961a30 ////

void __thiscall FUN_00961a30(void *this,void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  char *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4b06;
  local_c = ExceptionList;
  local_8c = local_80;
  local_80[0] = '\0';
  local_88 = 0;
  local_84 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_8c,"maxinstances",0xc);
  local_88 = 0xc;
  local_8c[0xc] = '\0';
  local_4 = 0;
  uVar2 = FUN_00558750(param_1,&local_8c,0);
  *(undefined4 *)((int)this + 0x38) = uVar2;
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  local_8c = local_80;
  local_80[0] = '\0';
  local_88 = 0;
  local_84 = 0x14;
  _strncpy(local_8c,"tag",3);
  local_88 = 3;
  local_8c[3] = '\0';
  local_4 = 1;
  FUN_005584e0(param_1,local_4c,&local_8c);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  bVar1 = FUN_00430950(local_4c,"");
  if (bVar1) {
    puVar3 = FUN_009ad240(&local_6c,local_4c[0],'\x01');
    FUN_004036d0((void *)((int)this + 0x48),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
  }
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  _strncpy(local_6c,"tagdesc",7);
  local_68 = 7;
  local_6c[7] = '\0';
  local_4._0_1_ = 4;
  puVar3 = FUN_005584e0(param_1,local_2c,&local_6c);
  FUN_004015d0(local_4c,(char *)*puVar3,puVar3[1]);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  bVar1 = FUN_00430950(local_4c,"");
  if (bVar1) {
    puVar3 = FUN_009ad240(local_2c,local_4c[0],'\x01');
    FUN_004036d0((void *)((int)this + 0x68),(wchar_t *)*puVar3,puVar3[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00961c90 @ 00961c90 ////

undefined4 * __thiscall FUN_00961c90(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  wchar_t *local_4c;
  undefined4 local_48;
  uint local_44;
  wchar_t local_40 [10];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4b20;
  local_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = L'\0';
  local_48 = 0;
  local_44 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_4c,(wchar_t *)&lpCaption_00d16918,uVar1);
  iVar2 = _wcscmp(*(wchar_t **)((int)this + 0x68),local_4c);
  if (10 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar2 == 0) {
    puVar3 = FUN_0040d6b0(local_2c,(char *)&PTR_LAB_00d70220,(undefined4 *)((int)this + 0xac));
    local_4 = 0;
    puVar3 = FUN_004312e0(&local_4c,puVar3,"_desc");
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_009b5030(param_1,puVar3);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
  }
  else {
    *param_1 = param_1 + 3;
    *(undefined2 *)(param_1 + 3) = 0;
    param_1[1] = 0;
    param_1[2] = 10;
    FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x68),*(uint *)((int)this + 0x6c));
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00961e30 @ 00961e30 ////

int __fastcall FUN_00961e30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00961930();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00961e50 @ 00961e50 ////

void * FUN_00961e50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_00961960(this,param_1,param_2,param_3);
  }
  return this;
}


//// FUNCTION FUN_00961ef0 @ 00961ef0 ////

void __thiscall FUN_00961ef0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar2 = *(uint *)((int)this + 0x20);
  uVar4 = FUN_009615d0(param_2);
  uVar4 = uVar4 & uVar2;
  if (*(uint *)((int)this + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (uVar2 >> 1));
  }
  piVar8 = *(int **)(*(int *)((int)this + 0x14) + uVar4 * 4);
  piVar3 = *(int **)(*(int *)((int)this + 0x14) + 4 + uVar4 * 4);
  if (piVar8 != piVar3) {
    pbVar7 = (byte *)*param_2;
    do {
      pbVar5 = (byte *)piVar8[2];
      pbVar9 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00961f64:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00961f69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00961f64;
        pbVar5 = pbVar5 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00961f69:
      if (-1 < iVar6) {
        pbVar5 = (byte *)piVar8[2];
        goto LAB_00961f96;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != piVar3);
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
  while( true ) {
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00961fbe;
    pbVar7 = pbVar7 + 2;
    pbVar5 = pbVar5 + 2;
    if (bVar1 == 0) break;
LAB_00961f96:
    bVar1 = *pbVar7;
    bVar10 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00961fbe:
      iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_00961fc3;
    }
    if (bVar1 == 0) break;
  }
  iVar6 = 0;
LAB_00961fc3:
  if (-1 < iVar6) {
    *param_1 = piVar8;
    return;
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
}


//// FUNCTION FUN_00962000 @ 00962000 ////

void __thiscall FUN_00962000(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  
  uVar3 = *(uint *)((int)this + 0x20);
  uVar5 = FUN_009615d0(param_2);
  uVar5 = uVar5 & uVar3;
  if (*(uint *)((int)this + 0x24) <= uVar5) {
    uVar5 = uVar5 + (-1 - (uVar3 >> 1));
  }
  piVar8 = *(int **)(*(int *)((int)this + 0x14) + uVar5 * 4);
  iVar1 = *(int *)((int)this + 0x14) + uVar5 * 4;
  if (piVar8 != *(int **)(iVar1 + 4)) {
    do {
      pbVar6 = (byte *)piVar8[2];
      pbVar10 = (byte *)*param_2;
      do {
        bVar2 = *pbVar6;
        bVar11 = bVar2 < *pbVar10;
        if (bVar2 != *pbVar10) {
LAB_00962074:
          iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00962079;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar11 = bVar2 < pbVar10[1];
        if (bVar2 != pbVar10[1]) goto LAB_00962074;
        pbVar6 = pbVar6 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar2 != 0);
      iVar7 = 0;
LAB_00962079:
      if (-1 < iVar7) {
        piVar9 = piVar8;
        if (piVar8 != *(int **)(iVar1 + 4)) {
          do {
            pbVar6 = (byte *)piVar9[2];
            pbVar10 = (byte *)*param_2;
            do {
              bVar2 = *pbVar10;
              bVar11 = bVar2 < *pbVar6;
              if (bVar2 != *pbVar6) {
LAB_009620d4:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_009620d9;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar10[1];
              bVar11 = bVar2 < pbVar6[1];
              if (bVar2 != pbVar6[1]) goto LAB_009620d4;
              pbVar10 = pbVar10 + 2;
              pbVar6 = pbVar6 + 2;
            } while (bVar2 != 0);
            iVar7 = 0;
LAB_009620d9:
          } while ((-1 < iVar7) && (piVar9 = (int *)*piVar9, piVar9 != *(int **)(iVar1 + 4)));
          if (piVar8 != piVar9) {
            param_1[1] = piVar9;
            *param_1 = piVar8;
            return;
          }
        }
        break;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)(iVar1 + 4));
  }
  uVar4 = *(undefined4 *)((int)this + 8);
  *param_1 = uVar4;
  param_1[1] = uVar4;
  return;
}


//// FUNCTION FUN_00962100 @ 00962100 ////

void __thiscall FUN_00962100(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)((int)this + 8) = puVar2;
  }
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00962140 @ 00962140 ////

void __fastcall FUN_00962140(int param_1)

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


//// FUNCTION FUN_00962170 @ 00962170 ////

void __thiscall FUN_00962170(void *this,int *param_1,int *param_2)

{
  if (param_2 != *(int **)((int)this + 4)) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    FUN_00961560((int)param_2);
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
  *param_1 = *param_2;
  return;
}


//// FUNCTION FUN_009621c0 @ 009621c0 ////

void __fastcall FUN_009621c0(int param_1)

{
  undefined4 *puVar1;
  void *_Memory;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  _Memory = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if (_Memory != *(void **)(param_1 + 4)) {
    FUN_00961560((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00962200 @ 00962200 ////

undefined4 * FUN_00962200(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  FUN_00961a00(param_1,param_2,param_3);
  return param_1 + param_2;
}


//// FUNCTION FUN_00962250 @ 00962250 ////

void __fastcall FUN_00962250(int param_1)

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


//// FUNCTION FUN_00962280 @ 00962280 ////

void __thiscall FUN_00962280(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 0x20);
  uVar4 = FUN_009615d0(param_2 + 2);
  uVar4 = uVar4 & uVar2;
  if (*(uint *)((int)this + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (uVar2 >> 1));
  }
  iVar3 = *(int *)((int)this + 0x14);
  iVar5 = uVar4 * 4;
  piVar1 = *(int **)(iVar5 + iVar3);
  while ((param_2 == piVar1 &&
         (*(undefined4 *)(iVar5 + iVar3) = **(undefined4 **)(iVar5 + iVar3), uVar4 != 0))) {
    iVar3 = *(int *)((int)this + 0x14);
    uVar4 = uVar4 - 1;
    iVar5 = uVar4 * 4;
    piVar1 = *(int **)(iVar5 + iVar3);
  }
  if (param_2 == *(int **)((int)this + 8)) {
    *param_1 = *param_2;
    return;
  }
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  FUN_00961560((int)param_2);
                    /* WARNING: Subroutine does not return */
  _free(param_2);
}


//// FUNCTION FUN_00962310 @ 00962310 ////

void __thiscall FUN_00962310(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  if ((param_2 == (int *)**(int **)((int)this + 4)) && (param_3 == *(int **)((int)this + 4))) {
    FUN_009621c0((int)this);
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
  FUN_00961560((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00962380 @ 00962380 ////

void __fastcall FUN_00962380(int param_1)

{
  FUN_009621c0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009623a0 @ 009623a0 ////

undefined4 __cdecl FUN_009623a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  local_14[0] = 0;
  local_1c = 0;
  local_20 = local_14;
  uVar1 = 0;
  local_18 = 0x14;
  FUN_004015d0(&local_20,(char *)*param_1,param_1[1]);
  FUN_0045f450((int *)&local_20);
  FUN_00961ef0(&DAT_010509e4,&param_1,&local_20);
  if (param_1 != DAT_010509ec) {
    uVar1 = param_1[10];
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  return uVar1;
}


//// FUNCTION FUN_00962420 @ 00962420 ////

void __fastcall FUN_00962420(int param_1)

{
  FUN_009621c0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00962440 @ 00962440 ////

void __thiscall FUN_00962440(void *this,uint param_1)

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
  puStack_8 = &LAB_00cf4b38;
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


//// FUNCTION FUN_009624e0 @ 009624e0 ////

void FUN_009624e0(void)

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
  puStack_8 = &LAB_00cf4b58;
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


//// FUNCTION FUN_009625a0 @ 009625a0 ////

void __fastcall FUN_009625a0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_009621c0(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00962620 @ 00962620 ////

void __thiscall FUN_00962620(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cf4b70;
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
      uVar7 = FUN_009624e0();
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
      puVar4 = (undefined4 *)FUN_009617d0(*(undefined4 **)((int)this + 4),param_1,puVar3);
      FUN_00961a00(puVar4,param_2,&param_3);
      FUN_009617d0(param_1,*(undefined4 **)((int)this + 8),puVar4 + param_2);
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
      FUN_009617d0(param_1,puVar3,param_1 + param_2);
      local_8 = 2;
      FUN_00962200(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar6 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar6;
      FUN_009611c0(param_1,(undefined4 *)(iVar6 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar5 = FUN_009617d0(puVar3 + -param_2,puVar3,puVar3);
    *(undefined4 *)((int)this + 8) = uVar5;
    FUN_00961510((int)param_1,(int)(puVar3 + -param_2),puVar3);
    FUN_009611c0(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00962860 @ 00962860 ////

void __thiscall FUN_00962860(void *this,uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf4b80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    if (0x3fffffff < param_1) {
      uVar1 = FUN_009624e0();
    }
    puVar2 = operator_new(uVar1 * 4);
    *(undefined4 **)((int)this + 0xc) = puVar2 + uVar1;
    *(undefined4 **)((int)this + 4) = puVar2;
    *(undefined4 **)((int)this + 8) = puVar2;
    local_8 = 0;
    FUN_00961a00(puVar2,param_1,param_2);
    *(undefined4 **)((int)this + 8) = puVar2 + uVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00962920 @ 00962920 ////

void __thiscall FUN_00962920(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00cf4b90;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    pvVar1 = FUN_00961e50(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    FUN_00962440(this,1);
    *(void **)(param_1 + 4) = pvVar1;
    **(undefined4 **)((int)pvVar1 + 4) = pvVar1;
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_009629d0 @ 009629d0 ////

void __fastcall FUN_009629d0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_009621c0(param_1 + 4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_00962a50 @ 00962a50 ////

void __thiscall FUN_00962a50(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)((int)this + 8) - iVar2 >> 2;
  }
  if (uVar1 < param_1) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar2 >> 2;
    }
    FUN_00962620(this,*(undefined4 **)((int)this + 8),param_1 - iVar2,(undefined4 *)&stack0x00000008
                );
    return;
  }
  if ((iVar2 != 0) && (param_1 < (uint)((int)*(undefined4 **)((int)this + 8) - iVar2 >> 2))) {
    FUN_00962100(this,&param_1,(undefined4 *)(iVar2 + param_1 * 4),*(undefined4 **)((int)this + 8));
  }
  return;
}


//// FUNCTION FUN_00962ae0 @ 00962ae0 ////

/* WARNING: Removing unreachable block (ram,0x00962afb) */
/* WARNING: Removing unreachable block (ram,0x00962b00) */
/* WARNING: Removing unreachable block (ram,0x00962b0e) */

void __thiscall FUN_00962ae0(void *this,uint param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)*param_2;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  FUN_00962620(this,*(undefined4 **)((int)this + 4),param_1,&param_2);
  return;
}


//// FUNCTION FUN_00962b50 @ 00962b50 ////

undefined1 * __thiscall FUN_00962b50(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4bab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  uVar1 = FUN_00961930();
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  param_1 = *(undefined1 **)((int)this + 8);
  local_4 = 0;
  FUN_00962860((void *)((int)this + 0x10),9,&param_1);
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x24) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00962c30 @ 00962c30 ////

void * __fastcall FUN_00962c30(void *param_1)

{
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  FUN_00962b50(param_1,(undefined1 *)((int)&uStack_4 + 3));
  return param_1;
}


//// FUNCTION FUN_00962c50 @ 00962c50 ////

/* WARNING: Removing unreachable block (ram,0x00962d65) */

void __thiscall FUN_00962c50(void *this,int *param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  void *pvVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  
  uVar14 = *(uint *)((int)this + 0x24);
  if (uVar14 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar14 < iVar6 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar14) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar6 * 2 + -3;
      FUN_00962a50((void *)((int)this + 0x10),iVar6 * 2 - 1);
    }
    uVar14 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    puVar18 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar14 * 4);
    if (puVar18 != *(undefined4 **)(*(int *)((int)this + 0x14) + uVar14 * 4 + 4)) {
      do {
        pcVar7 = (char *)puVar18[2];
        uVar15 = 0xdeadbeef;
        pcVar1 = pcVar7 + 1;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        uVar8 = (int)pcVar7 - (int)pcVar1;
        if (uVar8 != 0) {
          iVar6 = (uVar8 >> 4) + 1;
          uVar9 = 0;
          do {
            pcVar1 = (char *)(uVar9 + puVar18[2]);
            uVar9 = uVar9 + iVar6;
            uVar15 = uVar15 + (int)*pcVar1;
          } while (uVar9 <= uVar8 - iVar6);
        }
        if ((uVar15 & *(uint *)((int)this + 0x20)) == uVar14) {
          puVar17 = (undefined4 *)*puVar18;
        }
        else {
          puVar17 = (undefined4 *)*puVar18;
          if (puVar17 != *(undefined4 **)((int)this + 8)) {
            puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar14 * 4);
            uVar15 = uVar14;
            while ((puVar18 == puVar2 &&
                   (*(undefined4 **)(*(int *)((int)this + 0x14) + uVar15 * 4) = puVar17, uVar15 != 0
                   ))) {
              uVar15 = uVar15 - 1;
              puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar15 * 4);
            }
            iVar6 = *(int *)((int)this + 8);
            *(undefined4 **)puVar18[1] = puVar17;
            *(int *)puVar17[1] = iVar6;
            **(undefined4 **)(iVar6 + 4) = puVar18;
            uVar5 = *(undefined4 *)(iVar6 + 4);
            *(undefined4 *)(iVar6 + 4) = puVar17[1];
            puVar17[1] = puVar18[1];
            puVar18[1] = uVar5;
            puVar18 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar15 = *(uint *)((int)this + 0x24);
              (uVar14 < uVar15 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar15 * 4) == *(int *)((int)this + 8)));
              uVar15 = uVar15 - 1) {
            *(undefined4 **)(*(int *)((int)this + 0x14) + uVar15 * 4) = puVar18;
          }
          if (puVar17 == *(undefined4 **)((int)this + 8)) break;
        }
        puVar18 = puVar17;
      } while (puVar17 != *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar14 * 4));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  pbVar16 = (byte *)*param_2;
  uVar14 = 0xdeadbeef;
  pbVar10 = pbVar16;
  do {
    bVar4 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while (bVar4 != 0);
  uVar15 = (int)pbVar10 - (int)(pbVar16 + 1);
  if (uVar15 != 0) {
    iVar6 = (uVar15 >> 4) + 1;
    uVar8 = 0;
    do {
      pbVar10 = pbVar16 + uVar8;
      uVar8 = uVar8 + iVar6;
      uVar14 = uVar14 + (int)(char)*pbVar10;
    } while (uVar8 <= uVar15 - iVar6);
  }
  uVar14 = *(uint *)((int)this + 0x20) & uVar14;
  if (*(uint *)((int)this + 0x24) <= uVar14) {
    uVar14 = uVar14 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar6 = uVar14 * 4;
  puVar18 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + iVar6);
  if (puVar18 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6)) {
    do {
      puVar18 = (undefined4 *)puVar18[1];
      pbVar10 = (byte *)puVar18[2];
      pbVar12 = pbVar16;
      do {
        bVar4 = *pbVar12;
        bVar19 = bVar4 < *pbVar10;
        if (bVar4 != *pbVar10) {
LAB_00962f05:
          iVar13 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
          goto LAB_00962f0a;
        }
        if (bVar4 == 0) break;
        bVar4 = pbVar12[1];
        bVar19 = bVar4 < pbVar10[1];
        if (bVar4 != pbVar10[1]) goto LAB_00962f05;
        pbVar12 = pbVar12 + 2;
        pbVar10 = pbVar10 + 2;
      } while (bVar4 != 0);
      iVar13 = 0;
LAB_00962f0a:
      if (-1 < iVar13) {
        pbVar10 = (byte *)puVar18[2];
        goto LAB_00962f26;
      }
    } while (puVar18 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6));
  }
  goto LAB_00962e56;
  while( true ) {
    bVar4 = pbVar10[1];
    bVar19 = bVar4 < pbVar16[1];
    if (bVar4 != pbVar16[1]) goto LAB_00962f4f;
    pbVar10 = pbVar10 + 2;
    pbVar16 = pbVar16 + 2;
    if (bVar4 == 0) break;
LAB_00962f26:
    bVar4 = *pbVar10;
    bVar19 = bVar4 < *pbVar16;
    if (bVar4 != *pbVar16) {
LAB_00962f4f:
      iVar13 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      goto LAB_00962f54;
    }
    if (bVar4 == 0) break;
  }
  iVar13 = 0;
LAB_00962f54:
  if (-1 < iVar13) {
    *param_1 = (int)puVar18;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  puVar18 = (undefined4 *)*puVar18;
LAB_00962e56:
  pvVar11 = FUN_00961e50(puVar18,puVar18[1],param_2);
  FUN_00962440((void *)((int)this + 4),1);
  puVar18[1] = pvVar11;
  **(undefined4 **)((int)pvVar11 + 4) = pvVar11;
  puVar17 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6);
  iVar13 = puVar18[1];
  while ((puVar18 == puVar17 && (*(int *)(*(int *)((int)this + 0x14) + iVar6) = iVar13, uVar14 != 0)
         )) {
    uVar14 = uVar14 - 1;
    iVar6 = uVar14 * 4;
    puVar17 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6);
  }
  *param_1 = iVar13;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00962fb0 @ 00962fb0 ////

void __thiscall FUN_00962fb0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = param_3;
  piVar2 = param_2;
  if ((param_2 == (int *)**(int **)((int)this + 8)) && (param_3 == *(int **)((int)this + 8))) {
    FUN_009621c0((int)this + 4);
    param_2 = *(int **)((int)this + 8);
    FUN_00962ae0((void *)((int)this + 0x10),9,&param_2);
    *(undefined4 *)((int)this + 0x20) = 1;
    *(undefined4 *)((int)this + 0x24) = 1;
    *param_1 = **(undefined4 **)((int)this + 8);
    return;
  }
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    FUN_00962280(this,(int *)&param_2,piVar2);
    piVar2 = piVar1;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00963030 @ 00963030 ////

undefined4 * __fastcall FUN_00963030(undefined4 *param_1)

{
  int local_58 [2];
  char *local_50;
  uint local_4c;
  uint local_48;
  char local_44 [20];
  char *local_30;
  uint local_2c;
  uint local_28;
  char local_24 [20];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4c0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(param_1);
  *param_1 = &PTR_FUN_00d70228;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_4 = 0;
  param_1[0x12] = param_1 + 0x15;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 10;
  param_1[0x1a] = param_1 + 0x1d;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 10;
  param_1[0x22] = 0;
  param_1[0x23] = param_1 + 0x26;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0x14;
  FUN_0048f010(&stack0x00000004,&local_30);
  param_1[0x2b] = param_1 + 0x2e;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x14;
  FUN_004015d0(param_1 + 0x2b,local_30,local_2c);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  FUN_0048f010(&stack0x00000004,&local_30);
  local_50 = local_44;
  local_44[0] = '\0';
  local_4c = 0;
  local_48 = 0x14;
  FUN_004015d0(&local_50,local_30,local_2c);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  FUN_0045f450((int *)&local_50);
  local_30 = local_24;
  local_24[0] = '\0';
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,local_50,local_4c);
  local_4 = CONCAT31(local_4._1_3_,6);
  local_10 = param_1;
  FUN_00962c50(&DAT_010509e4,local_58,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_50);
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009631d0 @ 009631d0 ////

int __thiscall FUN_009631d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *local_8;
  int *local_4;
  
  FUN_00962000(this,&local_8,param_1);
  iVar2 = 0;
  for (piVar1 = local_8; piVar1 != local_4; piVar1 = (int *)*piVar1) {
    iVar2 = iVar2 + 1;
  }
  FUN_00962fb0(this,&param_1,local_8,local_4);
  return iVar2;
}


//// FUNCTION FUN_00963220 @ 00963220 ////

void __fastcall FUN_00963220(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4c62;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d70228;
  local_4 = 0;
  pcVar2 = (char *)param_1[0x2b];
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
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_009631d0(&DAT_010509e4,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  if (0x14 < (uint)param_1[0x2d]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x2b]);
  }
  if (0x14 < (uint)param_1[0x25]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x23]);
  }
  if (10 < (uint)param_1[0x1c]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x1a]);
  }
  if (10 < (uint)param_1[0x14]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x12]);
  }
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00963330 @ 00963330 ////

undefined4 * __thiscall FUN_00963330(void *this,byte param_1)

{
  FUN_00963220(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00963400 @ 00963400 ////

undefined4 __fastcall FUN_00963400(void *param_1)

{
  if (*(char *)((int)param_1 + 0x20) != '\0') {
    if (*(int *)((int)param_1 + 0x28) == 0) {
      FUN_00965680(param_1);
    }
    return *(undefined4 *)((int)param_1 + 0x28);
  }
  return *(undefined4 *)((int)param_1 + 0xc);
}


//// FUNCTION FUN_00963420 @ 00963420 ////

int __fastcall FUN_00963420(void *param_1)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 0x20) != '\0') && (*(int *)((int)param_1 + 0x2c) == 0)) {
    FUN_00965680(param_1);
  }
  iVar1 = *(int *)((int)param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)param_1 + 0x10);
  }
  return iVar1;
}


//// FUNCTION FUN_009634b0 @ 009634b0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_009634b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  undefined8 uStack_6c;
  undefined4 uStack_4;
  
  iVar2 = 0;
  uStack_4 = DAT_00e9a098;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00965220((int)(param_1 + 10));
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[9] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  tVar3 = _time(&uStack_6c);
  FUN_00ad0036((ulong)tVar3);
  _DAT_01050a0c = 0;
  _DAT_01050a10 = 0;
  do {
    iVar1 = _rand();
    _sprintf((char *)((int)&uStack_6c + 4),(char *)&param_2_00d1b93c,iVar1);
    (&DAT_01050a0c)[iVar2] = uStack_6c._4_1_;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return param_1;
}


//// FUNCTION FUN_009634bb @ 009634bb ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_009634bb(void *this,undefined4 param_1,char param_2)

{
  int iVar1;
  int unaff_EBX;
  time_t tVar2;
  
  *(int *)((int)this + 0x44) = unaff_EBX;
  *(int *)((int)this + 0x28) = unaff_EBX;
  *(int *)((int)this + 0x30) = unaff_EBX;
  *(int *)((int)this + 0x34) = unaff_EBX;
  *(int *)((int)this + 0x38) = unaff_EBX;
  *(int *)((int)this + 0x50) = unaff_EBX;
  *(int *)((int)this + 0x54) = unaff_EBX;
  *(undefined1 *)((int)this + 0x48) = 1;
  *(int *)((int)this + 0x3c) = unaff_EBX;
  *(int *)((int)this + 0x40) = unaff_EBX;
  *(char *)((int)this + 0x2c) = (char)unaff_EBX;
  FUN_00965220((int)this + 0x28);
  *(int *)((int)this + 0x18) = unaff_EBX;
  *(int *)((int)this + 0x14) = unaff_EBX;
  *(int *)((int)this + 0x1c) = unaff_EBX;
  *(int *)((int)this + 0x20) = unaff_EBX;
  *(int *)((int)this + 0x10) = unaff_EBX;
  *(int *)((int)this + 8) = unaff_EBX;
  *(short *)((int)this + 0xc) = (short)unaff_EBX;
  *(int *)((int)this + 0x24) = unaff_EBX;
  *(int *)this = unaff_EBX;
  *(short *)((int)this + 4) = (short)unaff_EBX;
  tVar2 = _time((time_t *)&param_1);
  FUN_00ad0036((ulong)tVar2);
  _DAT_01050a0c = 0;
  _DAT_01050a10 = 0;
  do {
    iVar1 = _rand();
    _sprintf(&param_2,(char *)&param_2_00d1b93c,iVar1);
    (&DAT_01050a0c)[unaff_EBX] = param_2;
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < 7);
  return this;
}


//// FUNCTION FUN_00963570 @ 00963570 ////

undefined4 * __thiscall FUN_00963570(void *this,byte param_1)

{
  FUN_0096dcf0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00963590 @ 00963590 ////

void __thiscall FUN_00963590(void *this,undefined4 param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  void *pvVar3;
  
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2 + 1;
    do {
      cVar2 = *param_2;
      param_2 = param_2 + 1;
    } while (cVar2 != '\0');
    pvVar3 = operator_new((uint)(param_2 + (1 - (int)pcVar1)));
    *(void **)((int)this + 0x18) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 1;
    }
  }
  return;
}


//// FUNCTION FUN_009635e0 @ 009635e0 ////

undefined4 __thiscall FUN_009635e0(void *this,undefined4 param_1,void *param_2)

{
  FUN_00965360(param_2,*(char **)((int)this + 0x20));
  switch(param_1) {
  case 1:
    *(undefined4 *)((int)param_2 + 0x1c) = 1;
    FUN_009652c0(param_2,"001");
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 2:
    *(undefined4 *)((int)param_2 + 0x1c) = 2;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"002");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 3:
    *(undefined4 *)((int)param_2 + 0x1c) = 3;
    FUN_009652c0(param_2,"003");
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 4:
    *(undefined4 *)((int)param_2 + 0x1c) = 4;
    FUN_009652c0(param_2,"000");
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 5:
    *(undefined4 *)((int)param_2 + 0x1c) = 5;
    FUN_009652c0(param_2,"004");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  default:
    *(undefined4 *)((int)param_2 + 0x1c) = 0;
    FUN_009652c0(param_2,(char *)0x0);
    FUN_00965360(param_2,(char *)0x0);
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 7:
    *(undefined4 *)((int)param_2 + 0x1c) = 7;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"005");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 8:
    *(undefined4 *)((int)param_2 + 0x1c) = 8;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"006");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 9:
    *(undefined4 *)((int)param_2 + 0x1c) = 9;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"007");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 10:
    *(undefined4 *)((int)param_2 + 0x1c) = 10;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"008");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 0xb:
    *(undefined4 *)((int)param_2 + 0x1c) = 0xb;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"009");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 0xc:
    *(undefined4 *)((int)param_2 + 0x1c) = 0xc;
    *(undefined1 *)((int)param_2 + 0x20) = 1;
    FUN_009652c0(param_2,"011");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  case 0xd:
    *(undefined4 *)((int)param_2 + 0x1c) = 0xd;
    FUN_009652c0(param_2,"010");
    return CONCAT31((int3)((uint)*(int *)((int)param_2 + 0x1c) >> 8),
                    *(int *)((int)param_2 + 0x1c) != 0);
  }
}


//// FUNCTION FUN_00963800 @ 00963800 ////

undefined4 __thiscall FUN_00963800(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    *(char **)((int)this + 8) = pcVar3;
    pcVar2 = pcVar3;
    do {
      pcVar4 = pcVar2;
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar2 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar1);
    } while (cVar1 != '\0');
    *(undefined2 *)((int)this + 0xc) = param_2;
    return CONCAT31((int3)(CONCAT22((short)((uint)pcVar4 >> 0x10),param_2) >> 8),1);
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x14) = 2;
  return 0;
}


//// FUNCTION FUN_00963870 @ 00963870 ////

undefined4 __fastcall FUN_00963870(int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0) {
    *(undefined4 *)(param_1[4] + 0x21c) = 0x168;
    iVar1 = FUN_0096d120((void *)param_1[4],(char *)*param_1,(short)param_1[1]);
    if (iVar1 == 0) {
      if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free((void *)param_1[6]);
      }
      param_1[5] = 0;
      return 1;
    }
  }
  if ((void *)param_1[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[6]);
  }
  param_1[5] = 2;
  return 0;
}


//// FUNCTION FUN_009638e0 @ 009638e0 ////

undefined4 __fastcall FUN_009638e0(int param_1)

{
  undefined4 *_Memory;
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    bVar1 = FUN_00969a30(*piVar2);
    piVar2 = (int *)CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      piVar2 = (int *)FUN_0096dcb0(*(undefined4 **)(param_1 + 0x10));
      _Memory = *(undefined4 **)(param_1 + 0x10);
      if (_Memory != (undefined4 *)0x0) {
        FUN_0096dcf0(_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}


//// FUNCTION FUN_00963930 @ 00963930 ////

undefined4 __thiscall FUN_00963930(void *this,undefined4 *param_1)

{
  int iVar1;
  
  if (*(int **)((int)this + 0x10) == (int *)0x0) {
    return 9;
  }
  iVar1 = FUN_0096e270(*(int **)((int)this + 0x10));
  *param_1 = 0;
  switch(iVar1) {
  case 1:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x20c);
    return 2;
  case 2:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    *param_1 = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x20c);
    *(undefined4 *)((int)this + 0x1c) = 5;
    return 3;
  case 9:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    return 1;
  case -0x6b:
  case -0x68:
    break;
  default:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 6;
    return 6;
  case -0x66:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 6;
    return 8;
  }
  if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x14) = 2;
  return 9;
}


//// FUNCTION FUN_00963af0 @ 00963af0 ////

void __thiscall FUN_00963af0(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  if (*(void **)((int)this + 0x20) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x20));
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    *(char **)((int)this + 0x20) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_10 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
      local_14 = local_8;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_18,&DAT_00e338cc);
    }
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


//// FUNCTION FUN_00963c90 @ 00963c90 ////

void __fastcall FUN_00963c90(int param_1)

{
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4c7b;
  local_c = ExceptionList;
  _Memory = *(undefined4 **)(param_1 + 0x10);
  local_4 = 0;
  if (_Memory != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_0096dcf0(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (*(void **)(param_1 + 0x24) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x24));
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x20));
  }
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_00966500((undefined4 *)(param_1 + 0x28));
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00963dc0 @ 00963dc0 ////

void __thiscall FUN_00963dc0(void *this,int *param_1)

{
  if (0xf < *(uint *)((int)this + 0x18)) {
    *param_1 = *(int *)((int)this + 4);
    return;
  }
  *param_1 = (int)this + 4;
  return;
}


//// FUNCTION FUN_00963de0 @ 00963de0 ////

void __thiscall FUN_00963de0(void *this,int *param_1)

{
  if (0xf < *(uint *)((int)this + 0x18)) {
    *param_1 = *(int *)((int)this + 0x14) + *(int *)((int)this + 4);
    return;
  }
  *param_1 = (int)this + *(int *)((int)this + 0x14) + 4;
  return;
}


//// FUNCTION FUN_00963e10 @ 00963e10 ////

void FUN_00963e10(void)

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


//// FUNCTION FUN_00963e30 @ 00963e30 ////

void __fastcall FUN_00963e30(int param_1)

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


//// FUNCTION FUN_00963e80 @ 00963e80 ////

void __fastcall FUN_00963e80(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}


//// FUNCTION FUN_00963ea0 @ 00963ea0 ////

void __thiscall FUN_00963ea0(void *this,int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = (int *)((int)this + 4);
  piVar2 = piVar1;
  if (0xf < *(uint *)((int)this + 0x18)) {
    piVar2 = (int *)*piVar1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 - (int)piVar2;
  }
  if (param_3 != 0) {
    param_3 = param_3 - param_2;
  }
  FUN_00404e70(this,uVar3,param_3);
  if (*(uint *)((int)this + 0x18) < 0x10) {
    *param_1 = (int)piVar1 + uVar3;
    return;
  }
  *param_1 = *piVar1 + uVar3;
  return;
}


//// FUNCTION FUN_00963f00 @ 00963f00 ////

void __fastcall FUN_00963f00(int param_1)

{
  FUN_00963e30(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00963f60 @ 00963f60 ////

int __fastcall FUN_00963f60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00963e10();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00963f80 @ 00963f80 ////

void __fastcall FUN_00963f80(int param_1)

{
  FUN_00963e30(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00963fa0 @ 00963fa0 ////

void * __thiscall FUN_00963fa0(void *this,int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_00acbc74();
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_3) {
    FUN_00acbcb4();
  }
  if (param_3 != 0) {
    uVar1 = *(int *)((int)this + 0x14) + param_3;
    if (uVar1 == 0xffffffff) {
      FUN_00acbcb4();
    }
    if (*(uint *)((int)this + 0x18) < uVar1) {
      FUN_00404ef0(this,uVar1);
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar6 = param_1 + 4;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
      }
      puVar4 = (undefined4 *)((int)this + 4);
      puVar2 = puVar4;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar5 = (undefined4 *)(param_2 + iVar6);
      puVar2 = (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar2);
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar1;
      if (0xf < *(uint *)((int)this + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      *(undefined1 *)((int)puVar4 + uVar1) = 0;
    }
  }
  return this;
}


//// FUNCTION FUN_00964090 @ 00964090 ////

int __fastcall FUN_00964090(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00963e10();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}


//// FUNCTION FUN_009640b0 @ 009640b0 ////

void __fastcall FUN_009640b0(int param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4c98;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0096d870(param_1);
  FUN_00963e30(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00964110 @ 00964110 ////

undefined4 * __fastcall FUN_00964110(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00963e10();
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *param_1 = 0xffffffff;
  return param_1;
}


//// FUNCTION FUN_00964150 @ 00964150 ////

void __fastcall FUN_00964150(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf4cbb;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_0096d7c0(param_1);
  local_4 = 0xffffffff;
  FUN_009640b0((int)(param_1 + 1));
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009641a0 @ 009641a0 ////

undefined4 __thiscall FUN_009641a0(void *this,undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  char *_Src;
  int iVar4;
  undefined4 uVar5;
  int local_34;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = ExceptionList;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  piVar1 = *(int **)((int)this + 0x10);
  uVar5 = 4;
  if (piVar1 == (int *)0x0) {
    ExceptionList = pvVar2;
    return 10;
  }
  if (*(int *)((int)this + 0x1c) != 5) {
    if (*(int *)((int)this + 0x1c) != 6) {
      ExceptionList = pvVar2;
      return 4;
    }
    iVar4 = FUN_0096f370(piVar1);
    if (iVar4 != -0x66) {
      if (iVar4 == 6) {
        *param_1 = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x228);
        if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x18));
        }
      }
      else {
        uVar5 = 7;
        if (iVar4 != 7) {
          if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            _free(*(void **)((int)this + 0x18));
          }
          goto LAB_009643ac;
        }
        *(undefined4 *)((int)this + 0x1c) = 7;
        *param_1 = *(undefined4 *)(*(int *)((int)this + 0x10) + 0x228);
        uVar5 = 5;
        if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x18));
        }
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      ExceptionList = local_c;
      return uVar5;
    }
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    uVar5 = 8;
LAB_009643ac:
    *(undefined4 *)((int)this + 0x14) = 5;
    ExceptionList = local_c;
    return uVar5;
  }
  uVar3 = FUN_0096ed70(piVar1);
  local_2c = FUN_00963e10();
  local_28 = 0;
  local_24 = 0;
  local_34 = -1;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  switch(uVar3) {
  case 4:
switchD_00964244_caseD_4:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    *(undefined4 *)((int)this + 0x14) = 0;
    goto LAB_00964306;
  case 5:
    LHHttp_ParseResponseHeaders(*(void **)((int)this + 0x10),(int)&local_34);
    if (local_34 == 200) {
      _Src = FUN_0096d8f0(local_30,"X-MoviesContent-Length");
      if ((_Src != (char *)0x0) ||
         (_Src = FUN_0096d8f0(local_30,"Content-Length"), _Src != (char *)0x0)) {
        _sscanf(_Src,"%ld",param_2);
      }
      *(undefined4 *)((int)this + 0x1c) = 6;
      goto switchD_00964244_caseD_4;
    }
  default:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    uVar5 = 7;
    break;
  case 0xffffff97:
    uVar5 = 10;
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    break;
  case 0xffffff9a:
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    uVar5 = 8;
  }
  *(undefined4 *)((int)this + 0x14) = 5;
LAB_00964306:
  local_4 = 0xffffffff;
  FUN_00964150(&local_34);
  ExceptionList = local_c;
  return uVar5;
}


//// FUNCTION FUN_00964450 @ 00964450 ////

void * __thiscall FUN_00964450(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((int)this + 0x18);
  if (uVar6 < 0x10) {
    puVar1 = (undefined4 *)((int)this + 4);
  }
  else {
    puVar1 = *(undefined4 **)((int)this + 4);
  }
  if (puVar1 <= param_1) {
    puVar1 = (undefined4 *)((int)this + 4);
    puVar4 = puVar1;
    if (0xf < uVar6) {
      puVar4 = (undefined4 *)*puVar1;
    }
    if (param_1 < (undefined4 *)(*(int *)((int)this + 0x14) + (int)puVar4)) {
      if (0xf < uVar6) {
        puVar1 = (undefined4 *)*puVar1;
      }
      pvVar2 = FUN_00963fa0(this,(int)this,(int)param_1 - (int)puVar1,param_2);
      return pvVar2;
    }
  }
  if (-*(int *)((int)this + 0x14) - 1U <= param_2) {
    FUN_00acbcb4();
  }
  if (param_2 != 0) {
    uVar6 = *(int *)((int)this + 0x14) + param_2;
    if (uVar6 == 0xffffffff) {
      FUN_00acbcb4();
    }
    if (*(uint *)((int)this + 0x18) < uVar6) {
      FUN_00404ef0(this,uVar6);
    }
    else if (uVar6 == 0) {
      *(undefined4 *)((int)this + 0x14) = 0;
      if (*(uint *)((int)this + 0x18) < 0x10) {
        *(undefined1 *)((int)this + 4) = 0;
        return this;
      }
      **(undefined1 **)((int)this + 4) = 0;
      return this;
    }
    if (uVar6 != 0) {
      if (*(uint *)((int)this + 0x18) < 0x10) {
        iVar3 = (int)this + 4;
      }
      else {
        iVar3 = *(int *)((int)this + 4);
      }
      puVar1 = (undefined4 *)(*(int *)((int)this + 0x14) + iVar3);
      for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *param_1;
        param_1 = param_1 + 1;
        puVar1 = puVar1 + 1;
      }
      for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar1 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      *(uint *)((int)this + 0x14) = uVar6;
      if (0xf < *(uint *)((int)this + 0x18)) {
        *(undefined1 *)(*(int *)((int)this + 4) + uVar6) = 0;
        return this;
      }
      *(undefined1 *)((int)this + uVar6 + 4) = 0;
    }
  }
  return this;
}


//// FUNCTION FUN_00964560 @ 00964560 ////

void __thiscall FUN_00964560(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00964450(this,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


//// FUNCTION FUN_00964590 @ 00964590 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
FUN_00964590(void *this,int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 ******ppppppuVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_440 [4];
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 *local_430;
  undefined1 local_42c [4];
  undefined4 *****local_428 [4];
  uint local_418;
  uint local_414;
  char local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf4d22;
  local_c = ExceptionList;
  local_10 = DAT_00e9a098;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x30);
  local_4 = 0;
  local_430 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[7] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *(undefined1 *)(puVar2 + 8) = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    FUN_00965220((int)puVar2);
  }
  local_4 = 0xffffffff;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(void **)((int)this + 0x18) == (void *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 1;
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  puVar3 = *(undefined4 **)((int)this + 0x10);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_0096dcf0(puVar3);
                    /* WARNING: Subroutine does not return */
    _free(puVar3);
  }
  local_430 = operator_new(0x1264);
  local_4 = 1;
  if (local_430 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0096dbb0(local_430);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)((int)this + 0x10) = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    if (*(void **)((int)this + 0x18) == (void *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 1;
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  FUN_009635e0(this,param_1,puVar2);
  if (param_1 == 0) {
    if (*(void **)((int)this + 0x18) == (void *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 3;
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  *param_2 = 0xffffffff;
  local_414 = 0xf;
  local_418 = 0;
  local_428[0] = (undefined4 *****)((uint)local_428[0] & 0xffffff00);
  local_4 = 2;
  if (*(char *)(puVar2 + 8) != '\0') {
    FUN_00964560(local_42c,"mVi");
  }
  pcVar8 = *(char **)((int)this + 0x24);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = "null";
  }
  FUN_00964560(local_42c,pcVar8);
  FUN_00964450(local_42c,(undefined4 *)&DAT_00d1e114,1);
  pcVar8 = (char *)*puVar2;
  pcVar4 = pcVar8;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00964450(local_42c,(undefined4 *)pcVar8,(int)pcVar4 - (int)(pcVar8 + 1));
  FUN_00964450(local_42c,(undefined4 *)&DAT_00d1e114,1);
  puVar3 = operator_new(local_418 + 1 + param_4);
  if (puVar3 == (undefined4 *)0x0) {
    if (*(void **)((int)this + 0x18) == (void *)0x0) {
      *(undefined4 *)((int)this + 0x14) = 1;
      FUN_00405a80((int)local_42c);
      ExceptionList = local_c;
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x18));
  }
  ppppppuVar6 = (undefined4 ******)local_428[0];
  if (local_414 < 0x10) {
    ppppppuVar6 = local_428;
  }
  puVar7 = puVar3;
  for (uVar5 = local_418 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *ppppppuVar6;
    ppppppuVar6 = ppppppuVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = local_418 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)ppppppuVar6;
    ppppppuVar6 = (undefined4 ******)((int)ppppppuVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  puVar7 = (undefined4 *)(local_418 + (int)puVar3);
  for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_3;
    param_3 = (undefined4 *)((int)param_3 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_00965340(puVar2,(int)puVar3,local_418 + param_4);
  local_43c = FUN_00963e10();
  local_438 = 0;
  local_434 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_0096e6b0(local_440,"Content-Type","Application/octet-stream");
  FUN_0096e6b0(local_440,"User-Agent","Lionhead Studios TheMovies Client (HTTPLib) 1.0");
  FUN_0096e6b0(local_440,"X-MV-AgentVersion","0.0");
  FUN_0096e6b0(local_440,"X-MV-TimeHash",&DAT_01050a0c);
  __itoa(DAT_00e66a94,local_410,10);
  FUN_0096e6b0(local_440,"X-MV-TGVJ",local_410);
  __itoa(DAT_00e66a90,local_410,10);
  FUN_0096e6b0(local_440,"X-MV-TGVN",local_410);
  __itoa(DAT_00e66a98,local_410,10);
  FUN_0096e6b0(local_440,"X-MV-TGGN",local_410);
  __itoa(puVar2[9],local_410,10);
  FUN_0096e6b0(local_440,"X-MV-ReqTimestamp",local_410);
  FUN_0096e6b0(local_440,"X-MV-LANG",s_int_int_00e66a9c);
  if ((param_1 == 4) || (param_1 == 1)) {
    pcVar8 = "F.Relaese";
  }
  else {
    if (*(char *)(puVar2 + 8) == '\0') goto LAB_00964952;
    pcVar8 = "F.Release";
  }
  FUN_0096e6b0(local_440,"X-MV-Build",pcVar8);
LAB_00964952:
  FUN_0096d0f0(*(void **)((int)this + 0x10),*(char **)this,*(undefined2 *)((int)this + 4));
  if (*(int *)((int)this + 8) != 0) {
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x21c) = 0x168;
    FUN_0096d150(*(void **)((int)this + 0x10),*(char **)((int)this + 8),*(ushort *)((int)this + 0xc)
                );
  }
  pcVar8 = FUN_00967000((int)puVar2);
  uVar5 = FUN_00963420(puVar2);
  pcVar4 = (char *)FUN_00963400(puVar2);
  FUN_0096e860(*(void **)((int)this + 0x10),2,pcVar8,local_440,pcVar4,uVar5);
                    /* WARNING: Subroutine does not return */
  _free(pcVar8);
}


//// FUNCTION FUN_00964a70 @ 00964a70 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FUN_00964a70(void *this,void *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  uint *_Memory;
  uint *puVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  char *_Source;
  undefined4 *puVar9;
  char *_Dest;
  char *pcVar10;
  undefined4 *****pppppuVar11;
  uint uVar12;
  size_t sVar13;
  uint *puVar14;
  undefined4 local_c68;
  undefined1 local_c64 [4];
  undefined4 *local_c60;
  undefined4 local_c5c;
  undefined4 local_c58;
  undefined4 local_c54;
  undefined4 local_c4c;
  undefined4 local_c48;
  undefined2 local_c44;
  uint local_c40;
  undefined1 local_c3c [4];
  undefined4 ****local_c38 [4];
  int local_c28;
  uint local_c24;
  char local_c20;
  undefined4 local_c1f;
  char local_820 [1024];
  char local_420 [1028];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cf4d5c;
  local_14 = ExceptionList;
  local_1c = DAT_00e9a098;
  uVar4 = DAT_00e9a098;
  if ((*(int *)((int)this + 0x1c) == 7) && (uVar4 = 0, *(int *)((int)this + 0x10) != 0)) {
    if (*(void **)((int)this + 0x18) != (void *)0x0) {
      ExceptionList = &local_14;
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 0x18));
    }
    ExceptionList = &local_14;
    *(undefined4 *)((int)this + 0x14) = 0;
    local_c60 = (undefined4 *)FUN_00963e10();
    local_c5c = 0;
    local_c58 = 0;
    local_c68 = 0xffffffff;
    local_c54 = 0;
    local_c4c = 0;
    local_c48 = 0;
    local_c44 = 0;
    local_c = 0;
    LHHttp_ParseResponseHeaders(*(void **)((int)this + 0x10),(int)&local_c68);
    pcVar3 = FUN_0096d8f0(local_c64,"X-MoviesContent-Rav0");
    uVar4 = FUN_0096da50(*(int *)((int)this + 0x10));
    _Memory = operator_new(uVar4);
    if (_Memory != (uint *)0x0) {
      FUN_0096da80(*(void **)((int)this + 0x10),(int)_Memory);
      if (pcVar3 == (char *)0x0) {
        FUN_009653f0(param_1,_Memory,uVar4);
        *(undefined1 *)((int)param_1 + 4) = 0;
        if ((*(int *)((int)param_1 + 0x1c) != 1) ||
           (((uVar4 = FUN_009657b0(param_1,"mv001:"), (char)uVar4 == '\0' &&
             (uVar4 = FUN_009657b0(param_1,"mv0111:"), (char)uVar4 == '\0')) &&
            (uVar4 = FUN_009657b0(param_1,"mv0013:"), (char)uVar4 == '\0')))) {
          local_c = 2;
          FUN_0096d7c0(&local_c68);
          local_c = 3;
          FUN_0096d870((int)local_c64);
          puVar9 = (undefined4 *)*local_c60;
          *local_c60 = local_c60;
          local_c60[1] = local_c60;
          local_c5c = 0;
          if (puVar9 == local_c60) {
                    /* WARNING: Subroutine does not return */
            _free(local_c60);
          }
                    /* WARNING: Subroutine does not return */
          _free(puVar9);
        }
        iVar6 = FUN_009654c0((int)param_1);
        _Source = operator_new(iVar6 + 2);
        iVar6 = FUN_009654c0((int)param_1);
        pcVar3 = _Source;
        for (uVar4 = iVar6 + 2U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          pcVar3[0] = '\0';
          pcVar3[1] = '\0';
          pcVar3[2] = '\0';
          pcVar3[3] = '\0';
          pcVar3 = pcVar3 + 4;
        }
        for (uVar4 = iVar6 + 2U & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar3 = '\0';
          pcVar3 = pcVar3 + 1;
        }
        local_c24 = 0xf;
        local_c28 = 0;
        local_c38[0] = (undefined4 ****)((uint)local_c38[0] & 0xffffff00);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00965450(param_1,(undefined4 *)_Source,'\x01');
        FUN_00964560(local_c3c,_Source);
        cVar2 = *_Source;
        sVar13 = 0;
        if (cVar2 != '\0') {
          do {
            if (cVar2 == '\x01') break;
            cVar2 = _Source[sVar13 + 1];
            sVar13 = sVar13 + 1;
          } while (cVar2 != '\0');
          if (sVar13 != 0) {
            uVar4 = sVar13 + 2;
            puVar9 = operator_new(uVar4);
            *(undefined4 **)((int)this + 0x20) = puVar9;
            for (uVar12 = uVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar9 = 0;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            _strncpy(*(char **)((int)this + 0x20),_Source,sVar13);
            _Dest = operator_new((local_c28 - (sVar13 + 1)) + 1);
            pcVar3 = _Source + sVar13 + 1;
            *(char **)((int)this + 0x24) = _Dest;
            sVar13 = 0;
            cVar2 = *pcVar3;
            pcVar10 = pcVar3;
            while (((cVar2 != '\0' && (cVar2 != '\x02')) && (cVar2 != '\x03'))) {
              pcVar1 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
              sVar13 = sVar13 + 1;
              cVar2 = *pcVar1;
            }
            _strncpy(_Dest,pcVar3,sVar13);
            *(undefined1 *)(sVar13 + *(int *)((int)this + 0x24)) = 0;
            _strncat(*(char **)((int)this + 0x20),"/",1);
          }
        }
        uVar4 = FUN_009657b0(param_1,"mv0013:");
        if ((char)uVar4 != '\0') {
          iVar6 = 0;
          cVar2 = *_Source;
          while (((cVar2 != '\0' && (cVar2 != '\x02')) && (cVar2 != '\x03'))) {
            iVar8 = iVar6 + 1;
            iVar6 = iVar6 + 1;
            cVar2 = _Source[iVar8];
          }
          if (iVar6 + 1 != 0) {
            local_c20 = '\0';
            puVar9 = &local_c1f;
            for (iVar8 = 0xff; iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
            *(undefined2 *)puVar9 = 0;
            *(undefined1 *)((int)puVar9 + 2) = 0;
            pcVar10 = operator_new(0x400);
            pcVar3 = _Source + iVar6 + 1;
            iVar6 = -(int)pcVar3;
            do {
              cVar2 = *pcVar3;
              pcVar3[(int)(&local_c20 + iVar6)] = cVar2;
              pcVar3 = pcVar3 + 1;
            } while (cVar2 != '\0');
            _sprintf(pcVar10,"MVX301:%s",&local_c20);
            *(undefined1 *)((int)param_1 + 0x20) = 0;
            pcVar3 = pcVar10;
            do {
              cVar2 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar2 != '\0');
            FUN_009653f0(param_1,pcVar10,(int)pcVar3 - (int)(pcVar10 + 1));
          }
        }
        pppppuVar11 = (undefined4 *****)local_c38[0];
        if (local_c24 < 0x10) {
          pppppuVar11 = local_c38;
        }
        uVar4 = local_c28 + (int)pppppuVar11;
        pppppuVar11 = (undefined4 *****)local_c38[0];
        if (local_c24 < 0x10) {
          pppppuVar11 = local_c38;
        }
        if (uVar4 != 0) {
          uVar4 = uVar4 - (int)pppppuVar11;
        }
        FUN_00404e70(local_c3c,0,uVar4);
                    /* WARNING: Subroutine does not return */
        _free(_Source);
      }
      local_c40 = uVar4 + 8;
      puVar5 = operator_new(local_c40);
      if (puVar5 != (uint *)0x0) {
        puVar14 = puVar5;
        for (uVar12 = local_c40 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
        for (uVar12 = local_c40 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined1 *)puVar14 = 0;
          puVar14 = (uint *)((int)puVar14 + 1);
        }
        if ((pcVar3[1] == '8') &&
           ((*(int *)((int)param_1 + 0x1c) == 4 || (*(int *)((int)param_1 + 0x1c) == 1)))) {
          iVar6 = 0;
          do {
            cVar2 = (&DAT_01050a0c)[iVar6];
            (&local_c20)[iVar6] = cVar2;
            iVar6 = iVar6 + 1;
          } while (cVar2 != '\0');
          local_c1f._3_1_ = cVar2;
          _sprintf(local_420,"%d%d%s%s",0,0,&local_c20,
                   "Lionhead Studios TheMovies Client (HTTPLib) 1.0");
          pcVar3 = FUN_0096d8f0(local_c64,"X-MV-ReqTimestamp");
          lVar7 = _atol(pcVar3);
          FUN_00965530(param_1,local_820,lVar7);
          pcVar3 = local_820;
        }
        else {
          pcVar3 = &DAT_01050a18;
        }
        uVar4 = FUN_009691f0(_Memory,puVar5,uVar4,pcVar3,'\x01','\x02');
        if (5 < uVar4) {
          iVar6 = _tolower((int)(char)*puVar5);
          iVar8 = _tolower(0x6d);
          if (iVar6 == iVar8) {
            iVar6 = _tolower((int)*(char *)((int)puVar5 + 1));
            iVar8 = _tolower(0x76);
            if (iVar6 == iVar8) {
              iVar6 = _tolower((int)*(char *)((int)puVar5 + 2));
              iVar8 = _tolower(0x69);
              if (iVar6 == iVar8) {
                iVar6 = _tolower((int)*(char *)((int)puVar5 + (uVar4 - 1)));
                iVar8 = _tolower(0x6d);
                if (iVar6 == iVar8) {
                  iVar6 = _tolower((int)*(char *)((int)puVar5 + (uVar4 - 2)));
                  iVar8 = _tolower(0x76);
                  if (iVar6 == iVar8) {
                    iVar6 = _tolower((int)*(char *)((int)puVar5 + (uVar4 - 3)));
                    iVar8 = _tolower(0x69);
                    if (iVar6 == iVar8) {
                      FUN_009653f0(param_1,(int)puVar5 + 3,uVar4 - 6);
                      *(undefined1 *)((int)param_1 + 4) = 1;
                    /* WARNING: Subroutine does not return */
                      _free(_Memory);
                    }
                  }
                }
              }
            }
          }
        }
        FUN_00963590(this,7,"Could not parse server message");
      }
    }
    local_c = 0xffffffff;
    uVar4 = FUN_00964150(&local_c68);
  }
  ExceptionList = local_14;
  return uVar4 & 0xffffff00;
}


//// FUNCTION FUN_00965120 @ 00965120 ////

void __fastcall FUN_00965120(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[2]);
  }
  param_1[1] = 0;
  return;
}


//// FUNCTION FUN_009651a0 @ 009651a0 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_009651a0(int param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char local_10 [12];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  *param_2 = 0;
  iVar5 = 0;
  do {
    _sprintf(local_10,"%02x",(uint)*(byte *)(iVar5 + param_1));
    pcVar2 = local_10;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (int)pcVar2 - (int)local_10;
    pcVar2 = param_2 + -1;
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = local_10;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    iVar5 = iVar5 + 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  } while (iVar5 < 0x10);
  return;
}


//// FUNCTION FUN_00965220 @ 00965220 ////

time_t __fastcall FUN_00965220(int param_1)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)(param_1 + 0x24));
  return tVar1;
}


//// FUNCTION FUN_00965230 @ 00965230 ////

void __fastcall FUN_00965230(int param_1)

{
  if (*(void **)(param_1 + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 8));
  }
  return;
}


//// FUNCTION FUN_00965250 @ 00965250 ////

void __fastcall FUN_00965250(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_00965280 @ 00965280 ////

void __fastcall FUN_00965280(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -3;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x14));
  }
  return;
}


//// FUNCTION FUN_009652c0 @ 009652c0 ////

undefined4 __thiscall FUN_009652c0(void *this,char *param_1)

{
  char cVar1;
  uint in_EAX;
  char *pcVar2;
  char *pcVar3;
  undefined3 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  if (param_1 == (char *)0x0) {
    return in_EAX & 0xffffff00;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
  *(char **)this = pcVar3;
  pcVar2 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      uVar4 = (undefined3)((uint)pcVar3 >> 8);
      pcVar3 = (char *)CONCAT31(uVar4,cVar1);
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    return CONCAT31(uVar4,1);
  }
  local_10 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_18 = 1;
  local_14 = local_8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_18,&DAT_00e338cc);
}


//// FUNCTION FUN_00965340 @ 00965340 ////

undefined4 __thiscall FUN_00965340(void *this,int param_1,int param_2)

{
  uint in_EAX;
  
  if ((param_1 != 0) && (in_EAX = 0, param_2 != 0)) {
    *(int *)((int)this + 0x10) = param_2;
    *(int *)((int)this + 0xc) = param_1;
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00965360 @ 00965360 ////

void __thiscall FUN_00965360(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  if (*(void **)((int)this + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 8));
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    *(char **)((int)this + 8) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_10 = 0;
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = 1;
      local_14 = local_8;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_18,&DAT_00e338cc);
    }
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


//// FUNCTION FUN_009653f0 @ 009653f0 ////

void __thiscall FUN_009653f0(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(char *)((int)this + 4) != '\0') {
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -3;
    *(undefined1 *)((int)this + 4) = 0;
  }
  if (*(void **)((int)this + 0x14) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  return;
}


//// FUNCTION FUN_00965450 @ 00965450 ////

uint __thiscall FUN_00965450(void *this,undefined4 *param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar3 = 0;
  if (((*(int *)((int)this + 0xc) == 0) || (uVar3 = *(uint *)((int)this + 0x10), uVar3 == 0)) ||
     (param_1 == (undefined4 *)0x0)) goto LAB_009654b5;
  uVar2 = 0;
  if (param_2 != '\0') {
    bVar1 = false;
    if (*(uint *)((int)this + 0x18) != 0) {
      do {
        if (bVar1) goto LAB_0096549b;
        if (*(char *)(uVar2 + *(int *)((int)this + 0x14)) == ':') {
          bVar1 = true;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0x18));
      if (bVar1) goto LAB_0096549b;
    }
    uVar2 = 0;
  }
LAB_0096549b:
  uVar3 = *(int *)((int)this + 0x18) - uVar2;
  puVar5 = (undefined4 *)(*(int *)((int)this + 0x14) + uVar2);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
LAB_009654b5:
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_009654c0 @ 009654c0 ////

undefined4 __fastcall FUN_009654c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}


//// FUNCTION FUN_00965500 @ 00965500 ////

void __fastcall FUN_00965500(int param_1)

{
  if ((*(void **)(param_1 + 0x28) != (void *)0x0) && (*(int *)(param_1 + 0x2c) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x28));
  }
  return;
}


//// FUNCTION FUN_00965530 @ 00965530 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_00965530(void *this,char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_410;
  char local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  iVar8 = 0;
  iVar7 = 0;
  iVar9 = 0;
  local_410 = *(int *)((int)this + 0x24);
  if (0 < param_2) {
    local_410 = param_2;
  }
  __itoa(*(int *)((int)this + 0x24),local_404,10);
  pcVar3 = local_404;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = s_int_int_00e66a9c;
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  iVar10 = 0;
  if (0 < (int)pcVar3 - (int)(local_404 + 1)) {
    do {
      if ((int)(pcVar4 + -0xe66a9c) <= iVar8) {
        iVar8 = 0;
      }
      if (local_404[iVar10] == '3') {
        iVar9 = iVar9 + iVar10 * 0x33;
        iVar7 = iVar7 + 1;
      }
      else {
        uVar6 = (uint)local_404[iVar10];
        uVar5 = uVar6 & 0x80000001;
        bVar11 = uVar5 == 0;
        if ((int)uVar5 < 0) {
          bVar11 = (uVar5 - 1 | 0xfffffffe) == 0xffffffff;
        }
        if (bVar11) {
          iVar9 = iVar9 + (iVar10 + 1) * uVar6;
          iVar7 = iVar7 + iVar10 + 1;
        }
        else {
          iVar9 = iVar9 + (int)s_int_int_00e66a9c[iVar8] + uVar6;
        }
      }
      iVar10 = iVar10 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar10 < (int)pcVar3 - (int)(local_404 + 1));
  }
  _sprintf(param_1,"%ld%ld%ld%ld%ld",iVar9 - DAT_00e66a90,local_410 / 0x7bc,1,DAT_00e66a94 + iVar7,
           (iVar9 - DAT_00e66a90) / DAT_00e66a98);
  return;
}


//// FUNCTION FUN_00965680 @ 00965680 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_00965680(void *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_c1c;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c0c;
  char local_c04 [4];
  char local_c00;
  char local_804 [1024];
  char local_404 [1024];
  undefined4 local_4;
  
  local_4 = DAT_00e9a098;
  if ((*(void **)((int)param_1 + 0x28) != (void *)0x0) && (*(int *)((int)param_1 + 0x2c) != 0)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)param_1 + 0x28));
  }
  if ((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 0x10) != 0)) {
    puVar2 = operator_new(*(int *)((int)param_1 + 0x10) + 0xc);
    *(uint **)((int)param_1 + 0x28) = puVar2;
    if (puVar2 == (uint *)0x0) {
      local_c14 = 0;
      local_c0c = CONCAT31(local_c0c._1_3_,1);
      local_c1c = 1;
      local_c18 = local_c0c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_c1c,&DAT_00e338cc);
    }
    if ((*(int *)((int)param_1 + 0x1c) == 4) || (*(int *)((int)param_1 + 0x1c) == 1)) {
      iVar3 = 0;
      do {
        cVar1 = (&DAT_01050a0c)[iVar3];
        local_c04[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
      local_c00 = cVar1;
      _sprintf(local_404,"%d%d%s%s",0,0,local_c04,"Lionhead Studios TheMovies Client (HTTPLib) 1.0")
      ;
      FUN_00965530(param_1,local_804,0);
      uVar6 = *(uint *)((int)param_1 + 0x10);
      puVar2 = *(uint **)((int)param_1 + 0x28);
      pcVar7 = local_804;
      puVar5 = *(uint **)((int)param_1 + 0xc);
    }
    else {
      uVar6 = *(uint *)((int)param_1 + 0x10);
      pcVar7 = &DAT_01050a18;
      puVar5 = *(uint **)((int)param_1 + 0xc);
    }
    uVar4 = FUN_009691f0(puVar5,puVar2,uVar6,pcVar7,'\0','\x02');
    *(undefined4 *)((int)param_1 + 0x2c) = uVar4;
  }
  return;
}


//// FUNCTION FUN_009657b0 @ 009657b0 ////

uint __thiscall FUN_009657b0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  uint in_EAX;
  char *pcVar3;
  uint _MaxCount;
  int iVar4;
  
  if ((*(char **)((int)this + 0x14) != (char *)0x0) &&
     (uVar2 = *(uint *)((int)this + 0x18), uVar2 != 0)) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    _MaxCount = (int)pcVar3 - (int)(param_1 + 1);
    if (uVar2 < (uint)((int)pcVar3 - (int)(param_1 + 1))) {
      _MaxCount = uVar2;
    }
    iVar4 = __strnicmp(param_1,*(char **)((int)this + 0x14),_MaxCount);
    return (uint)(iVar4 == 0);
  }
  return in_EAX & 0xffffff00;
}


//// FUNCTION FUN_00965800 @ 00965800 ////

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long __fastcall FUN_00965800(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  size_t _MaxCount;
  char *pcVar7;
  int iVar8;
  char local_410 [1028];
  undefined4 local_c;
  
  local_c = DAT_00e9a098;
  if ((*(char **)(param_1 + 0x14) != (char *)0x0) && (uVar3 = *(uint *)(param_1 + 0x18), uVar3 != 0)
     ) {
    _MaxCount = 3;
    if (uVar3 < 3) {
      _MaxCount = uVar3;
    }
    iVar5 = __strnicmp("MVX",*(char **)(param_1 + 0x14),_MaxCount);
    if (iVar5 == 0) {
      pcVar7 = local_410;
      for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + 4;
      }
      if ((*(char **)(param_1 + 0x14) != (char *)0x0) &&
         (pcVar7 = *(char **)(param_1 + 0x18), pcVar7 != (char *)0x0)) {
        iVar5 = 0;
        pcVar4 = *(char **)(param_1 + 0x14);
        do {
          pcVar1 = local_410 + iVar5;
          if (((((pcVar7 <= pcVar1 + (3 - (int)local_410)) || (cVar2 = pcVar4[3], cVar2 == ':')) ||
               (cVar2 == ' ')) ||
              (((cVar2 == '\0' || (*pcVar1 = cVar2, pcVar7 <= pcVar1 + (4 - (int)local_410))) ||
               ((cVar2 = pcVar4[4], cVar2 == ':' || ((cVar2 == ' ' || (cVar2 == '\0')))))))) ||
             ((local_410[iVar5 + 1] = cVar2, pcVar7 <= pcVar1 + (5 - (int)local_410) ||
              (((((cVar2 = pcVar4[5], cVar2 == ':' || (cVar2 == ' ')) || (cVar2 == '\0')) ||
                ((local_410[iVar5 + 2] = cVar2, pcVar7 <= pcVar1 + (6 - (int)local_410) ||
                 (cVar2 = pcVar4[6], cVar2 == ':')))) || ((cVar2 == ' ' || (cVar2 == '\0'))))))))
          break;
          iVar8 = iVar5 + 4;
          local_410[iVar5 + 3] = cVar2;
          iVar5 = iVar8;
          pcVar4 = pcVar4 + 4;
        } while (iVar8 < 0x400);
        lVar6 = _atol(local_410);
        return lVar6;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_00965970 @ 00965970 ////

void __thiscall FUN_00965970(void *this,undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t _MaxCount;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((*(char **)((int)this + 0x14) != (char *)0x0) &&
     (uVar4 = *(uint *)((int)this + 0x18), uVar4 != 0)) {
    _MaxCount = 3;
    if (uVar4 < 3) {
      _MaxCount = uVar4;
    }
    iVar3 = __strnicmp("MVX",*(char **)((int)this + 0x14),_MaxCount);
    if (iVar3 == 0) {
      puVar5 = param_1;
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      if (((*(int *)((int)this + 0x14) != 0) && (*(int *)((int)this + 0x18) != 0)) &&
         (iVar3 = 0, 0 < (int)param_2)) {
        do {
          pcVar1 = (char *)(iVar3 + (int)param_1);
          if (*(char **)((int)this + 0x18) <= pcVar1 + (3 - (int)param_1)) {
            return;
          }
          cVar2 = *(char *)(iVar3 + 3 + *(int *)((int)this + 0x14));
          if (cVar2 == ':') {
            return;
          }
          if (cVar2 == ' ') {
            return;
          }
          if (cVar2 == '\0') {
            return;
          }
          iVar3 = iVar3 + 1;
          *pcVar1 = cVar2;
        } while (iVar3 < (int)param_2);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00965a20 @ 00965a20 ////

void __thiscall FUN_00965a20(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 100) = param_1;
  *(undefined2 *)((int)this + 0x68) = param_2;
  return;
}


//// FUNCTION FUN_00965a40 @ 00965a40 ////

void __thiscall FUN_00965a40(void *this,char *param_1,undefined2 param_2)

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
    *(char **)((int)this + 0x6c) = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *(undefined2 *)((int)this + 0x70) = param_2;
  }
  return;
}


//// FUNCTION FUN_00965a90 @ 00965a90 ////

int __thiscall FUN_00965a90(void *this,undefined4 *param_1)

{
  int iVar1;
  
  if ((*(short *)((int)this + 0x88) == 0) || (iVar1 = *(int *)((int)this + 0x84), iVar1 == 0)) {
    *param_1 = *(undefined4 *)((int)this + 0x14);
    iVar1 = *(int *)((int)this + 0x18);
  }
  return iVar1;
}


//// FUNCTION FUN_00965ac0 @ 00965ac0 ////

uint __fastcall FUN_00965ac0(void *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined3 extraout_var;
  int *piVar3;
  
  if ((*(int *)((int)param_1 + 0x60) == 0) &&
     ((uVar2 = *(uint *)((int)param_1 + 0x5c), uVar2 == 0 || (uVar2 == 3)))) goto LAB_00965b85;
  if (*(int *)((int)param_1 + 0x5c) == 1) {
    *(undefined4 *)((int)param_1 + 0x60) = 0;
    uVar2 = FUN_00963930(param_1,(undefined4 *)((int)param_1 + 0x74));
    if (uVar2 == 3) {
      *(undefined4 *)((int)param_1 + 0x5c) = 2;
    }
    else if (uVar2 != 2) {
      bVar1 = uVar2 == 1;
      goto LAB_00965b4a;
    }
LAB_00965b52:
    if (0 < *(int *)((int)param_1 + 0x14)) {
      *(undefined4 *)((int)param_1 + 0x5c) = 0;
      *(undefined4 *)((int)param_1 + 0x60) = 4;
    }
  }
  else {
    uVar2 = *(int *)((int)param_1 + 0x5c) - 2;
    if (uVar2 == 0) {
      uVar2 = FUN_009641a0(param_1,(undefined4 *)((int)param_1 + 0x7c),(int)param_1 + 0x80);
      *(undefined4 *)((int)param_1 + 0x60) = 0;
      if (uVar2 == 5) {
        uVar2 = FUN_00964a70(param_1,*(void **)((int)param_1 + 0x58));
        if ((char)uVar2 == '\x01') {
          *(undefined4 *)((int)param_1 + 0x5c) = 3;
          goto LAB_00965b52;
        }
      }
      else {
        bVar1 = uVar2 == 4;
LAB_00965b4a:
        if (bVar1) goto LAB_00965b52;
      }
      *(undefined4 *)((int)param_1 + 0x60) = 4;
      *(undefined4 *)((int)param_1 + 0x5c) = 0;
      goto LAB_00965b52;
    }
  }
  if (*(int *)((int)param_1 + 0x60) == 4) {
    piVar3 = *(int **)((int)param_1 + 0x10);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      bVar1 = FUN_00969a30(*piVar3);
      piVar3 = (int *)CONCAT31(extraout_var,bVar1);
      if (bVar1) {
        piVar3 = (int *)FUN_009638e0((int)param_1);
      }
    }
    return (uint)piVar3 & 0xffffff00;
  }
LAB_00965b85:
  return CONCAT31((int3)(uVar2 >> 8),1);
}


//// FUNCTION FUN_00965b90 @ 00965b90 ////

undefined4 * __thiscall FUN_00965b90(void *this,int param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  if ((((*(int *)((int)this + 0x5c) != 3) || (iVar1 = *(int *)((int)this + 0x58), iVar1 == 0)) ||
      (*(int *)(iVar1 + 0x1c) != param_1)) || (uVar3 = *(uint *)(iVar1 + 0x18), uVar3 == 0)) {
    return (undefined4 *)0x0;
  }
  uVar4 = uVar3 + 1;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar3;
    uVar4 = uVar3;
  }
  puVar2 = operator_new(uVar4);
  if (puVar2 == (undefined4 *)0x0) {
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = 1;
    local_14 = local_8;
    local_10 = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_18,&DAT_00e338cc);
  }
  puVar5 = puVar2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar1 = *(int *)((int)this + 0x58);
  if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    uVar3 = *(uint *)(iVar1 + 0x18);
    puVar5 = *(undefined4 **)(iVar1 + 0x14);
    puVar6 = puVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  return puVar2;
}


//// FUNCTION FUN_00965c60 @ 00965c60 ////

undefined4 __fastcall FUN_00965c60(int param_1)

{
  if ((*(int *)(param_1 + 0x14) < 1) && (*(int *)(param_1 + 0x60) != 4)) {
    return 0;
  }
  return 1;
}


//// FUNCTION FUN_00965c80 @ 00965c80 ////

void __thiscall FUN_00965c80(void *this,char *param_1,undefined2 param_2)

{
  char cVar1;
  char *pcVar2;
  
  *(undefined2 *)((int)this + 0x88) = param_2;
  if (*(void **)((int)this + 0x84) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x84));
  }
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = operator_new((uint)(pcVar2 + (1 - (int)(param_1 + 1))));
    *(char **)((int)this + 0x84) = pcVar2;
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  return;
}


//// FUNCTION FUN_00965ce0 @ 00965ce0 ////

long FUN_00965ce0(FILE *param_1)

{
  long _Offset;
  long lVar1;
  
  if (param_1 != (FILE *)0x0) {
    _Offset = _ftell(param_1);
    _fseek(param_1,0,2);
    lVar1 = _ftell(param_1);
    _fseek(param_1,_Offset,0);
    return lVar1;
  }
  return 0;
}


//// FUNCTION FUN_00965d20 @ 00965d20 ////

char * FUN_00965d20(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar1;
  }
  cVar2 = *pcVar3;
  while( true ) {
    if (cVar2 == '\\') {
      if (pcVar3 != param_1) {
        pcVar3 = pcVar3 + 1;
      }
      return pcVar3;
    }
    if (pcVar3 == param_1) break;
    cVar2 = pcVar3[-1];
    pcVar3 = pcVar3 + -1;
  }
  return pcVar3;
}


//// FUNCTION FUN_00965d60 @ 00965d60 ////

void FUN_00965d60(char *param_1)

{
  _strncpy(&DAT_01050a18,param_1,0xff);
  return;
}


//// FUNCTION FUN_00965d80 @ 00965d80 ////

undefined4 FUN_00965d80(LPSTR param_1)

{
  WINBOOL WVar1;
  int iVar2;
  _STARTUPINFOA *p_Var3;
  _PROCESS_INFORMATION local_54;
  _STARTUPINFOA local_44;
  
  p_Var3 = &local_44;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->cb = 0;
    p_Var3 = (_STARTUPINFOA *)&p_Var3->lpReserved;
  }
  local_54.hProcess = (HANDLE)0x0;
  local_54.hThread = (HANDLE)0x0;
  local_54.dwProcessId = 0;
  local_54.dwThreadId = 0;
  local_44.cb = 0x44;
  local_44.dwFlags = 1;
  local_44.wShowWindow = 0;
  WVar1 = CreateProcessA((LPCSTR)0x0,param_1,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_44,&local_54);
  if (WVar1 == 0) {
    return 0xffffffff;
  }
  WaitForSingleObject(local_54.hProcess,0xffffffff);
  param_1 = (LPSTR)0x0;
  GetExitCodeProcess(local_54.hProcess,(LPDWORD)&param_1);
  CloseHandle(local_54.hProcess);
  CloseHandle(local_54.hThread);
  return param_1;
}


