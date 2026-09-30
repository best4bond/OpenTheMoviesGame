//// FUNCTION FUN_008dc370 @ 008dc370 ////

uint __fastcall FUN_008dc370(int param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar6;
  undefined2 extraout_var_00;
  float10 fVar7;
  float10 fVar8;
  uint uVar5;
  
  iVar4 = FUN_0071b2a0();
  uVar5 = 0;
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
      uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(param_1 + 0x6c));
    }
    else {
      uVar3 = FUN_008dc2b0(*(int *)(param_1 + 0x54));
      uVar5 = CONCAT31(extraout_var,uVar3);
    }
    if ((char)uVar5 != '\0') {
      piVar6 = (int *)FUN_0071b2a0();
      fVar7 = (float10)(**(code **)(*piVar6 + 0x10))();
      piVar6 = (int *)FUN_0071b2a0();
      fVar8 = (float10)(**(code **)(*piVar6 + 0x14))();
      fVar1 = *(float *)(param_1 + 0x78);
      uVar5 = CONCAT22(extraout_var_00,
                       (ushort)(fVar1 < -256.0) << 8 | (ushort)NAN(fVar1) << 10 |
                       (ushort)(fVar1 == -256.0) << 0xe);
      if (fVar1 >= -256.0 && (fVar1 == -256.0) == 0) {
        fVar1 = *(float *)(param_1 + 0x7c);
        uVar5 = CONCAT22(extraout_var_00,
                         (ushort)(fVar1 < -256.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == -256.0) << 0xe);
        if (fVar1 >= -256.0 && (fVar1 == -256.0) == 0) {
          fVar2 = (float)fVar7 + 256.0;
          fVar1 = *(float *)(param_1 + 0x78);
          uVar5 = CONCAT22(extraout_var_00,
                           (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
          if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
            fVar2 = (float)fVar8 + 256.0;
            fVar1 = *(float *)(param_1 + 0x7c);
            uVar5 = CONCAT22(extraout_var_00,
                             (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
            if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
              return CONCAT31((int3)(uVar5 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar5 & 0xffffff00;
}


//// FUNCTION FUN_008dc4a0 @ 008dc4a0 ////

undefined4 __cdecl FUN_008dc4a0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  
  fVar4 = param_2[3] - param_2[1];
  fVar1 = param_1[2] - *param_1;
  fVar7 = fVar1 * fVar4;
  fVar3 = param_2[2] - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar2 = *param_1 - *param_2;
  fVar4 = (fVar5 * fVar3 - fVar2 * fVar4) / (fVar7 - fVar3 * fVar1);
  fVar6 = param_1[3] - param_1[1];
  fVar1 = (fVar5 * fVar1 - fVar6 * fVar2) / (fVar7 - fVar6 * fVar3);
  uVar9 = (undefined2)((uint)param_2 >> 0x10);
  uVar8 = CONCAT22(uVar9,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                         (ushort)(fVar4 == 0.0) << 0xe);
  if (fVar4 >= 0.0) {
    uVar8 = CONCAT22(uVar9,(ushort)(fVar4 < 1.0) << 8 | (ushort)NAN(fVar4) << 10 |
                           (ushort)(fVar4 == 1.0) << 0xe);
    if (fVar4 < 1.0 != (fVar4 == 1.0)) {
      uVar8 = CONCAT22(uVar9,(ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                             (ushort)(fVar1 == 0.0) << 0xe);
      if (fVar1 >= 0.0) {
        uVar8 = CONCAT22(uVar9,(ushort)(fVar1 < 1.0) << 8 | (ushort)NAN(fVar1) << 10 |
                               (ushort)(fVar1 == 1.0) << 0xe);
        if (fVar1 < 1.0 != (fVar1 == 1.0)) {
          fVar1 = param_1[3];
          fVar2 = param_1[1];
          fVar3 = param_1[1];
          *param_3 = (param_1[2] - *param_1) * fVar4 + *param_1;
          param_3[1] = (fVar1 - fVar2) * fVar4 + fVar3;
          return CONCAT31((int3)((uint)param_3 >> 8),1);
        }
      }
    }
  }
  return uVar8;
}


//// FUNCTION FUN_008dc5d0 @ 008dc5d0 ////

undefined4 __cdecl FUN_008dc5d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  
  fVar3 = param_2[1];
  fVar1 = param_1[2] - *param_1;
  fVar6 = param_1[3] - param_1[1];
  fVar4 = param_2[2] - *param_2;
  fVar5 = 1.0 / (fVar1 * (param_2[3] - fVar3) - fVar4 * fVar6);
  fVar7 = param_1[1] - fVar3;
  fVar2 = *param_1 - *param_2;
  fVar4 = (fVar7 * fVar4 - fVar2 * (param_2[3] - fVar3)) * fVar5;
  fVar5 = (fVar7 * fVar1 - fVar2 * fVar6) * fVar5;
  uVar9 = (undefined2)((uint)fVar3 >> 0x10);
  uVar8 = CONCAT22(uVar9,(ushort)(fVar4 < 0.0) << 8 | (ushort)NAN(fVar4) << 10 |
                         (ushort)(fVar4 == 0.0) << 0xe);
  if (((fVar4 >= 0.0) &&
      (uVar8 = CONCAT22(uVar9,(ushort)(fVar4 < 1.0) << 8 | (ushort)NAN(fVar4) << 10 |
                              (ushort)(fVar4 == 1.0) << 0xe), fVar4 < 1.0 != (fVar4 == 1.0))) &&
     (uVar8 = CONCAT22(uVar9,(ushort)(fVar5 < 0.0) << 8 | (ushort)NAN(fVar5) << 10 |
                             (ushort)(fVar5 == 0.0) << 0xe), fVar5 >= 0.0)) {
    fVar3 = param_2[3];
    fVar1 = param_2[1];
    fVar2 = param_2[1];
    *param_3 = (param_2[2] - *param_2) * fVar5 + *param_2;
    param_3[1] = (fVar3 - fVar1) * fVar5 + fVar2;
    return CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar8;
}


//// FUNCTION FUN_008dc6f0 @ 008dc6f0 ////

bool __cdecl FUN_008dc6f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_8 = *param_2;
  local_c = param_1[1];
  local_10 = *param_1;
  local_4 = local_c;
  uVar1 = FUN_008dc5d0(&local_10,param_3,param_4);
  if ((char)uVar1 == '\0') {
    local_10 = *param_2;
    local_4 = param_2[1];
    local_c = param_1[1];
    local_8 = local_10;
    uVar1 = FUN_008dc5d0(&local_10,param_3,param_4);
    if ((char)uVar1 == '\0') {
      local_8 = *param_1;
      local_c = param_2[1];
      local_10 = *param_2;
      local_4 = local_c;
      uVar1 = FUN_008dc5d0(&local_10,param_3,param_4);
      if ((char)uVar1 == '\0') {
        local_10 = *param_1;
        local_4 = param_1[1];
        local_c = param_2[1];
        local_8 = local_10;
        uVar1 = FUN_008dc5d0(&local_10,param_3,param_4);
        return (char)uVar1 != '\0';
      }
    }
  }
  return true;
}


//// FUNCTION FUN_008dc840 @ 008dc840 ////

void __thiscall FUN_008dc840(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 0x9c);
  fVar2 = *(float *)((int)this + 0x94);
  *param_1 = *(float *)((int)this + 0x98) + *(float *)((int)this + 0x90);
  param_1[1] = fVar1 + fVar2;
  return;
}


//// FUNCTION FUN_008dc870 @ 008dc870 ////

int __fastcall FUN_008dc870(int param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2;
}


//// FUNCTION FUN_008dc890 @ 008dc890 ////

void __thiscall FUN_008dc890(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)((int)this + 0x70) * 0.5 * 1.2;
  fVar3 = *(float *)((int)this + 0x74) * 0.5 * 1.2;
  fVar1 = *(float *)((int)this + 0x7c);
  *param_1 = *(float *)((int)this + 0x78) - fVar2;
  param_1[1] = fVar1 - fVar3;
  fVar1 = *(float *)((int)this + 0x7c);
  *param_2 = fVar2 + *(float *)((int)this + 0x78);
  param_2[1] = fVar3 + fVar1;
  param_1[1] = param_1[1] - *(float *)((int)this + 0xb0);
  return;
}


//// FUNCTION FUN_008dc950 @ 008dc950 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_008dc950(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  unkbyte10 Var9;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = (*param_2 + *param_3) * 0.5;
  local_18 = 0.0;
  local_14 = 0.0;
  local_2c = (param_2[1] + param_3[1]) * 0.5;
  local_38 = (*param_4 + *param_5) * 0.5;
  local_34 = (param_4[1] + param_5[1]) * 0.5;
  if ((((*param_5 <= *param_2) || (*param_3 <= *param_4)) || (param_5[1] <= param_2[1])) ||
     (param_3[1] <= param_4[1])) goto LAB_008dcc37;
  if (_DAT_00e5fab8 == 0.0) {
    local_30 = local_38 - local_30;
    local_2c = local_34 - local_2c;
    Var8 = fpatan((float10)local_30,(float10)local_2c);
    Var9 = fpatan(-(float10)local_30,-(float10)local_2c);
    fVar2 = (float10)fcos(Var9);
    local_28 = (float)(((float10)*param_3 - (float10)*param_2) * fVar2 * (float10)0.5);
    fVar2 = (float10)fsin(Var9);
    fVar3 = ((float10)param_3[1] - (float10)param_2[1]) * fVar2 * (float10)0.5;
    fVar2 = (float10)fcos(Var8);
    fVar4 = ((float10)*param_5 - (float10)*param_4) * fVar2 * (float10)0.5;
    fVar2 = (float10)fsin(Var8);
    fVar5 = ((float10)param_5[1] - (float10)param_4[1]) * fVar2 * (float10)0.5;
    fVar6 = (float10)local_28;
    fVar2 = (float10)local_28;
    local_24 = local_2c;
    fVar7 = FUN_00412c90(&local_30);
    fVar7 = (float10)(float)(SQRT(fVar6 * fVar2 + fVar3 * fVar3) +
                            SQRT(fVar4 * fVar4 + fVar5 * fVar5)) - fVar7;
    if ((float10)0.0 < fVar7) {
      *param_1 = (float)((float10)local_30 * fVar7);
      param_1[1] = (float)((float10)local_2c * fVar7);
      return;
    }
    goto LAB_008dcc37;
  }
  if ((local_30 - local_38) * (local_30 - local_38) + (local_2c - local_34) * (local_2c - local_34)
      < 1.0) {
    if (*param_2 < *param_4) {
LAB_008dca5c:
      local_30 = local_30 - 1.0;
      local_38 = local_38 + 1.0;
    }
    else {
      if (*param_2 <= *param_4) {
        if (param_2[1] < param_4[1]) goto LAB_008dca5c;
        if (param_2[1] <= param_4[1]) goto LAB_008dca9f;
      }
      local_30 = local_30 + 1.0;
      local_38 = local_38 - 1.0;
    }
  }
LAB_008dca9f:
  local_28 = local_30;
  local_8 = local_30;
  local_20 = local_38;
  local_10 = local_38;
  local_24 = local_2c;
  local_1c = local_34;
  local_c = local_34;
  local_4 = local_2c;
  bVar1 = FUN_008dc6f0(param_2,param_3,&local_28,&local_30);
  if ((bVar1) && (bVar1 = FUN_008dc6f0(param_4,param_5,&local_10,&local_38), bVar1)) {
    *param_1 = local_30 - local_38;
    param_1[1] = local_2c - local_34;
    return;
  }
LAB_008dcc37:
  *param_1 = local_18;
  param_1[1] = local_14;
  return;
}


//// FUNCTION FUN_008dcc50 @ 008dcc50 ////

float10 __cdecl FUN_008dcc50(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = SQRT((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
               (*param_2 - *param_1) * (*param_2 - *param_1));
  if ((!NAN(fVar1) && !NAN(param_3)) && fVar1 < param_3 != (fVar1 == param_3)) {
    return (float10)0.0;
  }
  fVar2 = (float10)FUN_00ace9b0();
  return (((float10)fVar1 - (float10)param_3) / (float10)fVar1) * ((float10)1.0 - fVar2);
}


//// FUNCTION FUN_008dccc0 @ 008dccc0 ////

void __cdecl FUN_008dccc0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = FUN_008dcc50(param_2,param_3,param_4);
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar3 = param_2[1];
  *param_1 = (float)(((float10)*param_3 - (float10)*param_2) * fVar4) + *param_2;
  param_1[1] = (float)(fVar4 * (float10)(fVar1 - fVar2) + (float10)fVar3);
  return;
}


//// FUNCTION FUN_008dcd20 @ 008dcd20 ////

void __cdecl FUN_008dcd20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar4 = (int *)FUN_0071b2a0();
  fVar5 = (float10)(**(code **)(*piVar4 + 0x10))();
  fVar1 = *param_2;
  piVar4 = (int *)FUN_0071b2a0();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x14))();
  fVar2 = param_3[1];
  if (fVar6 * (float10)0.5 <= (float10)param_2[1]) {
    fVar2 = -fVar2;
  }
  fVar3 = *param_3;
  if (fVar5 * (float10)0.5 <= (float10)fVar1) {
    fVar3 = -fVar3;
  }
  *param_1 = fVar3;
  param_1[1] = fVar2;
  return;
}


//// FUNCTION FUN_008dcd80 @ 008dcd80 ////

void __cdecl FUN_008dcd80(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float10 fVar4;
  
  piVar3 = (int *)FUN_0071b2a0();
  fVar4 = (float10)(**(code **)(*piVar3 + 0x10))();
  fVar1 = *param_3;
  if (fVar4 * (float10)0.5 <= (float10)*param_2) {
    fVar1 = -fVar1;
  }
  fVar2 = param_3[1];
  *param_1 = fVar1;
  param_1[1] = fVar2;
  return;
}


//// FUNCTION FUN_008dce00 @ 008dce00 ////

uint __thiscall FUN_008dce00(void *this,float *param_1)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  param_1[1] = 0.0;
  *param_1 = 0.0;
  uVar1 = (**(code **)(*(int *)this + 0x24))(&local_c);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_009a1b30(&DAT_0105c2e8,(float *)&stack0xfffffff0,param_1);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_008dce80 @ 008dce80 ////

void __thiscall FUN_008dce80(void *this,undefined4 *param_1)

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


//// FUNCTION FUN_008dcef0 @ 008dcef0 ////

int * __cdecl FUN_008dcef0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != param_1) {
      iVar2 = *param_1;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
      }
      puVar3 = (undefined4 *)*param_3;
      if (puVar3 != (undefined4 *)0x0) {
        piVar1 = puVar3 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      *param_3 = iVar2;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_008dcf40 @ 008dcf40 ////

void __thiscall FUN_008dcf40(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0x9c);
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = *(float *)((int)this + 0x7c);
  *param_1 = *(float *)((int)this + 0x98) + *(float *)((int)this + 0x90) +
             *(float *)((int)this + 0x78);
  param_1[1] = fVar1 + fVar2 + fVar3;
  return;
}


//// FUNCTION FUN_008dcf70 @ 008dcf70 ////

void __thiscall FUN_008dcf70(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  float *pfVar4;
  float local_18;
  float fStack_14;
  undefined1 auStack_c [12];
  
  puVar2 = *(undefined4 **)((int)this + 0x68);
  if (puVar2 != param_1) {
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)((int)this + 0x68) = param_1;
  }
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    pfVar4 = &local_18;
    cVar3 = (**(code **)(**(int **)((int)this + 0x68) + 0xc))();
    if (cVar3 != '\0') {
      (**(code **)(**(int **)((int)this + 0x68) + 0x10))(auStack_c,&stack0xffffffe4);
      local_18 = local_18 + (float)((int)this + 0x70);
      *(float **)((int)this + 0x8c) = pfVar4;
      *(float *)((int)this + 0x78) = local_18;
      *(float *)((int)this + 0x80) = local_18;
      *(float *)((int)this + 0x7c) = fStack_14 + (float)pfVar4;
      *(float *)((int)this + 0x84) = fStack_14 + (float)pfVar4;
      *(int *)((int)this + 0x88) = (int)this + 0x70;
      (**(code **)(*(int *)this + 0x40))();
      *(undefined1 *)((int)this + 0x6c) = 1;
      return;
    }
    *(undefined1 *)((int)this + 0x6c) = 0;
  }
  return;
}


//// FUNCTION FUN_008dd030 @ 008dd030 ////

void __thiscall FUN_008dd030(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x54);
  if (iVar4 != 0) {
    fVar1 = *(float *)(iVar4 + 0x9c);
    fVar2 = *(float *)(iVar4 + 0x94);
    fVar3 = *(float *)(iVar4 + 0x7c);
    *param_1 = *(float *)(iVar4 + 0x98) + *(float *)(iVar4 + 0x90) + *(float *)(iVar4 + 0x78);
    param_1[1] = fVar1 + fVar2 + fVar3;
    return;
  }
  *param_1 = *(float *)((int)this + 0x88);
  param_1[1] = *(float *)((int)this + 0x8c);
  return;
}


//// FUNCTION FUN_008dd080 @ 008dd080 ////

void __thiscall FUN_008dd080(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)((int)this + 0x70) * 0.5 * 1.2;
  fVar5 = *(float *)((int)this + 0x74) * 0.5 * 1.2;
  fVar1 = *(float *)((int)this + 0x9c);
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = *(float *)((int)this + 0x7c);
  *param_1 = (*(float *)((int)this + 0x98) + *(float *)((int)this + 0x90) +
             *(float *)((int)this + 0x78)) - fVar4;
  param_1[1] = (fVar1 + fVar2 + fVar3) - fVar5;
  fVar1 = *(float *)((int)this + 0x9c);
  fVar2 = *(float *)((int)this + 0x94);
  fVar3 = *(float *)((int)this + 0x7c);
  *param_2 = *(float *)((int)this + 0x98) + *(float *)((int)this + 0x90) +
             *(float *)((int)this + 0x78) + fVar4;
  param_2[1] = fVar5 + fVar1 + fVar2 + fVar3;
  param_1[1] = param_1[1] - *(float *)((int)this + 0xb0);
  return;
}


//// FUNCTION FUN_008dd1c0 @ 008dd1c0 ////

void __fastcall FUN_008dd1c0(int *param_1)

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


//// FUNCTION FUN_008dd200 @ 008dd200 ////

void __thiscall FUN_008dd200(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)((int)this + 0xb4) == '\0') {
    puVar1 = *(undefined4 **)((int)this + 0x5c);
    *(undefined1 *)((int)this + 0xb4) = 1;
    if (puVar1 != *(undefined4 **)((int)this + 0x60)) {
      do {
        (**(code **)(*(int *)*puVar1 + 0xc))(param_1);
        puVar1 = puVar1 + 1;
      } while (puVar1 != *(undefined4 **)((int)this + 0x60));
    }
  }
  return;
}


//// FUNCTION FUN_008dd240 @ 008dd240 ////

undefined4 __thiscall FUN_008dd240(void *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    if (*(int *)((int)this + 0x5c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)((int)this + 0x60) - *(int *)((int)this + 0x5c) >> 2;
    }
    if (param_1 < iVar1) {
      return *(undefined4 *)(*(int *)((int)this + 0x5c) + param_1 * 4);
    }
  }
  return 0;
}


//// FUNCTION FUN_008dd2b0 @ 008dd2b0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_008dd2b0(void *this,undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float local_8;
  float fStack_4;
  
  if (*(char *)((int)this + 0xb6) != '\0') {
    puVar3 = (undefined4 *)FUN_008dd030(this,&local_8);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)((int)this + 0x84);
    *(undefined4 *)((int)this + 0x88) = *puVar3;
    *(undefined4 *)((int)this + 0x8c) = puVar3[1];
    (**(code **)(*(int *)this + 0x40))();
    *(undefined1 *)((int)this + 0xb6) = 0;
  }
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x20))(param_1);
    uVar1 = (**(code **)(**(int **)((int)this + 0x68) + 0x18))();
    *(undefined1 *)((int)this + 0xb7) = uVar1;
    cVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0xc))(&stack0xffffffe4);
    if (cVar2 == '\0') {
      *(undefined1 *)((int)this + 0x6c) = 0;
    }
    else {
      pfVar4 = (float *)(**(code **)(**(int **)((int)this + 0x68) + 0x10))
                                  (&local_8,&fStack_18,(int)this + 0x70);
      fStack_18 = pfVar4[1];
      fStack_14 = *pfVar4 + unaff_EDI;
      *(float *)((int)this + 0x88) = unaff_EDI;
      fStack_10 = fStack_18 + unaff_ESI;
      *(float *)((int)this + 0x80) = fStack_14;
      *(float *)((int)this + 0x8c) = unaff_ESI;
      *(float *)((int)this + 0x84) = fStack_10;
      (**(code **)(*(int *)this + 0x40))();
      *(undefined1 *)((int)this + 0x6c) = 1;
    }
  }
  pfVar4 = (float *)((int)this + 0x78);
  fVar5 = FUN_008dcc50(pfVar4,(float *)((int)this + 0x80),5.0);
  fStack_c = (float)((float10)(*(float *)((int)this + 0x84) - *(float *)((int)this + 0x7c)) * fVar5)
  ;
  local_8 = (float)(((float10)*(float *)((int)this + 0x80) - (float10)*pfVar4) * fVar5 +
                   (float10)*pfVar4);
  fStack_4 = fStack_c + *(float *)((int)this + 0x7c);
  *pfVar4 = local_8;
  *(float *)((int)this + 0x7c) = fStack_4;
  (**(code **)(*(int *)this + 0x1c))(param_1);
  if (((char)param_1 != '\0') &&
     (puVar3 = *(undefined4 **)((int)this + 0x5c), puVar3 != *(undefined4 **)((int)this + 0x60))) {
    do {
      FUN_008dd2b0((void *)*puVar3,param_1);
      puVar3 = puVar3 + 1;
    } while (puVar3 != *(undefined4 **)((int)this + 0x60));
  }
  return;
}


//// FUNCTION FUN_008dd460 @ 008dd460 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008dd460(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_4;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2;
  }
  local_30 = 0.0;
  switch(iVar4) {
  case 0:
  case 1:
    local_34 = 1.0;
    goto LAB_008dd4ee;
  case 2:
    fVar3 = 2.0943952;
    local_34 = 1.0;
    break;
  case 3:
    fVar3 = 3.1415927;
    local_34 = 1.0;
    break;
  case 4:
    fVar3 = 4.1887903;
    local_34 = 1.1;
    break;
  default:
    fVar3 = 4.1887903;
    local_34 = 1.3;
    if (iVar4 < 2) goto LAB_008dd4ee;
  }
  local_30 = fVar3 / (float)(iVar4 + -1);
LAB_008dd4ee:
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    local_24 = *(float *)(param_1 + 0x8c);
    local_28 = *(float *)(param_1 + 0x88);
  }
  else {
    local_28 = *(float *)(iVar1 + 0x98) + *(float *)(iVar1 + 0x90) + *(float *)(iVar1 + 0x78);
    local_24 = *(float *)(iVar1 + 0x9c) + *(float *)(iVar1 + 0x94) + *(float *)(iVar1 + 0x7c);
  }
  local_28 = *(float *)(param_1 + 0x80) - local_28;
  local_24 = *(float *)(param_1 + 0x84) - local_24;
  FUN_00412c90(&local_28);
  fVar6 = (float10)FUN_00ad1010();
  fVar6 = -fVar6;
  if (0.0 < local_24) {
    fVar6 = -fVar6;
  }
  piVar5 = *(int **)(param_1 + 0x5c);
  local_2c = 0;
  local_28 = (float)(fVar6 - (float10)(iVar4 + -1) * (float10)local_30 * (float10)0.5);
  local_20 = *(float *)(param_1 + 0x70) * 0.5;
  local_1c = *(float *)(param_1 + 0x74) * 0.5;
  if (piVar5 != *(int **)(param_1 + 0x60)) {
    do {
      piVar2 = (int *)*piVar5;
      fVar6 = (float10)local_2c * (float10)local_30 + (float10)local_28;
      local_c = (float)piVar2[0x1d] * 0.5;
      fVar7 = (float10)fcos(fVar6);
      fVar6 = (float10)fsin(fVar6);
      local_4 = (float)fVar6;
      local_18 = (float)(((float10)(float)piVar2[0x1c] * (float10)0.5 + (float10)local_20 +
                         (float10)_DAT_00e5fac0) * fVar7 * (float10)local_34 +
                        (float10)*(float *)(param_1 + 0x80));
      local_14 = (local_c + local_1c + _DAT_00e5fac0) * local_4 * local_34 +
                 *(float *)(param_1 + 0x84);
      piVar2[0x20] = (int)local_18;
      piVar2[0x21] = (int)local_14;
      piVar2[0x22] = *(int *)(param_1 + 0x80);
      piVar2[0x23] = *(int *)(param_1 + 0x84);
      (**(code **)(*piVar2 + 0x40))();
      piVar5 = piVar5 + 1;
      local_2c = local_2c + 1;
    } while (piVar5 != *(int **)(param_1 + 0x60));
  }
  return;
}


//// FUNCTION FUN_008dd6a0 @ 008dd6a0 ////

void __fastcall FUN_008dd6a0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x17];
  if (puVar1 != (undefined4 *)param_1[0x18]) {
    do {
      FUN_008dd6a0((int *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)param_1[0x18]);
  }
                    /* WARNING: Could not recover jumptable at 0x008dd6c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}


//// FUNCTION FUN_008dd6d0 @ 008dd6d0 ////

void __thiscall FUN_008dd6d0(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  if (((char)param_1 != '\0') &&
     (puVar1 = *(undefined4 **)((int)this + 0x5c), puVar1 != *(undefined4 **)((int)this + 0x60))) {
    do {
      FUN_008dd6d0((void *)*puVar1,param_1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)((int)this + 0x60));
  }
  (**(code **)(*(int *)this + 0x24))();
  return;
}


//// FUNCTION FUN_008dd750 @ 008dd750 ////

void __fastcall FUN_008dd750(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cee653;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d66e6c;
  puVar2 = (undefined4 *)param_1[0x1a];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x1a] = 0;
  local_4 = local_4 & 0xffffff00;
  if ((int *)param_1[0x17] != (int *)0x0) {
    FUN_008d7af0((int *)param_1[0x17],(int *)param_1[0x18]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x17]);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_4 = 0xffffffff;
  FUN_0053d4f0(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008dd860 @ 008dd860 ////

void __thiscall FUN_008dd860(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 0x5c);
  iVar3 = 0;
  piVar2 = piVar1;
  if (piVar1 != *(int **)((int)this + 0x60)) {
    while (*piVar2 != param_1) {
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + 1;
      if (piVar2 == *(int **)((int)this + 0x60)) {
        return;
      }
    }
    if (-1 < iVar3) {
      FUN_008dcef0(piVar1 + iVar3 + 1,*(int **)((int)this + 0x60),piVar1 + iVar3);
      FUN_008d7af0(*(int **)((int)this + 0x60) + -1,*(int **)((int)this + 0x60));
      *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + -4;
      *(undefined4 *)(param_1 + 0x54) = 0;
      (**(code **)(*(int *)this + 0x40))();
    }
  }
  return;
}


//// FUNCTION FUN_008dd8e0 @ 008dd8e0 ////

void __fastcall FUN_008dd8e0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(void **)(param_1 + 0x54) != (void *)0x0) {
    FUN_008dd860(*(void **)(param_1 + 0x54),param_1);
  }
  while ((puVar1 = *(undefined4 **)(param_1 + 0x5c), puVar1 != (undefined4 *)0x0 &&
         (*(int *)(param_1 + 0x60) - (int)puVar1 >> 2 != 0))) {
    FUN_008d8630(*(void **)(param_1 + 0x50),(undefined4 *)*puVar1);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}


//// FUNCTION FUN_008dd920 @ 008dd920 ////

undefined4 * __fastcall FUN_008dd920(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cee673;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d66e6c;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  *(undefined1 *)((int)param_1 + 0xb6) = 0;
  *(undefined1 *)((int)param_1 + 0xb7) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008dd9e0 @ 008dd9e0 ////

undefined4 * __thiscall FUN_008dd9e0(void *this,byte param_1)

{
  FUN_008dd750(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dda00 @ 008dda00 ////

int __thiscall FUN_008dda00(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_008d8b30(*(void **)((int)this + 0x50),param_1);
  }
  puVar1[0x15] = this;
  piVar3 = *(int **)((int)this + 0x5c);
  iVar2 = 0;
  do {
    if (piVar3 == *(int **)((int)this + 0x60)) {
LAB_008dda52:
      if (*(int *)((int)this + 0x5c) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 0x60) - *(int *)((int)this + 0x5c) >> 2;
      }
      if ((iVar2 < param_2) || (iVar4 = param_2, param_2 < 0)) {
        iVar4 = iVar2;
      }
      puVar1[0x12] = puVar1[0x12] + 1;
      local_4 = 0;
      param_1 = puVar1;
      FUN_008d8830((void *)((int)this + 0x58),(int *)(*(int *)((int)this + 0x5c) + iVar4 * 4),1,
                   (int *)&param_1);
      iVar2 = puVar1[0x12];
      local_4 = 0xffffffff;
      puVar1[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar1)(1);
      }
      (**(code **)(*(int *)this + 0x40))();
      *(undefined1 *)((int)puVar1 + 0xb6) = 1;
      ExceptionList = local_c;
      return iVar4;
    }
    if ((undefined4 *)*piVar3 == puVar1) {
      if (-1 < iVar2) {
        ExceptionList = local_c;
        return iVar2;
      }
      goto LAB_008dda52;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}


//// FUNCTION FUN_008ddae0 @ 008ddae0 ////

void __thiscall FUN_008ddae0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_4;
  
  puVar3 = *(undefined4 **)((int)this + 0x5c);
  local_4 = 0;
  if (puVar3 != *(undefined4 **)((int)this + 0x60)) {
    do {
      iVar1 = (**(code **)(*(int *)*puVar3 + 0x14))();
      iVar2 = (**(code **)(*param_1 + 0x14))();
      if (iVar2 <= iVar1) {
        FUN_008dda00(this,param_1,local_4);
        return;
      }
      puVar3 = puVar3 + 1;
      local_4 = local_4 + 1;
    } while (puVar3 != *(undefined4 **)((int)this + 0x60));
  }
  FUN_008dda00(this,param_1,-1);
  return;
}


//// FUNCTION FUN_008ddb50 @ 008ddb50 ////

void __fastcall FUN_008ddb50(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != 0) {
    local_4 = 0;
    for (piVar6 = *(int **)(iVar2 + 0x5c); piVar6 != *(int **)(iVar2 + 0x60); piVar6 = piVar6 + 1) {
      if (*piVar6 == param_1) goto LAB_008ddb90;
      local_4 = local_4 + 1;
    }
    local_4 = -1;
LAB_008ddb90:
    while ((puVar3 = *(undefined4 **)(param_1 + 0x5c), puVar3 != (undefined4 *)0x0 &&
           (*(int *)(param_1 + 0x60) - (int)puVar3 >> 2 != 0))) {
      puVar3 = (undefined4 *)*puVar3;
      puVar3[0x12] = puVar3[0x12] + 1;
      FUN_008dcef0(*(int **)(param_1 + 0x5c) + 1,*(int **)(param_1 + 0x60),*(int **)(param_1 + 0x5c)
                  );
      piVar4 = *(int **)(param_1 + 0x60);
      for (piVar6 = piVar4 + -1; piVar6 != piVar4; piVar6 = piVar6 + 1) {
        puVar5 = (undefined4 *)*piVar6;
        if (puVar5 != (undefined4 *)0x0) {
          piVar1 = puVar5 + 0x12;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(1);
          }
        }
        *piVar6 = 0;
      }
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -4;
      puVar3[0x15] = 0;
      FUN_008dda00(*(void **)(param_1 + 0x54),puVar3,local_4);
      iVar2 = puVar3[0x12];
      local_4 = local_4 + 1;
      puVar3[0x12] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_008ddc50 @ 008ddc50 ////

void __thiscall FUN_008ddc50(void *this,undefined4 *param_1)

{
  int *piVar1;
  undefined4 *this_00;
  void **ppvVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee6a8;
  local_c = ExceptionList;
  puVar4 = *(undefined4 **)((int)this + 0x5c);
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (puVar4 != *(undefined4 **)((int)this + 0x60)) {
    do {
      FUN_008ddc50((void *)*puVar4,this_00);
      puVar4 = puVar4 + 1;
      ppvVar2 = ExceptionList;
    } while (puVar4 != *(undefined4 **)((int)this + 0x60));
  }
  ExceptionList = ppvVar2;
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x48) + 1;
  iVar3 = this_00[1];
  local_4 = 0;
  param_1 = this;
  if ((iVar3 == 0) || ((uint)(this_00[3] - iVar3 >> 2) <= (uint)(this_00[2] - iVar3 >> 2))) {
    FUN_008d8830(this_00,(int *)this_00[2],1,(int *)&param_1);
  }
  else {
    piVar1 = (int *)this_00[2];
    FUN_008d7a40(piVar1,1,(int *)&param_1);
    this_00[2] = piVar1 + 1;
  }
  iVar3 = *(int *)((int)this + 0x48) + -1;
  local_4 = 0xffffffff;
  *(int *)((int)this + 0x48) = iVar3;
  if (iVar3 == 0) {
    (*(code *)**(undefined4 **)this)(1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008ddd20 @ 008ddd20 ////

void __thiscall FUN_008ddd20(void *this,float *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee6c8;
  local_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_008ddc50(this,&local_1c);
  piVar4 = local_14;
  for (piVar5 = local_18; piVar5 != local_14; piVar5 = piVar5 + 1) {
    iVar2 = *piVar5;
    *(float *)(iVar2 + 0x98) = *param_1 + *(float *)(iVar2 + 0x98);
    *(float *)(iVar2 + 0x9c) = param_1[1] + *(float *)(iVar2 + 0x9c);
  }
  local_4 = 0xffffffff;
  piVar5 = local_18;
  if (local_18 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  for (; piVar5 != piVar4; piVar5 = piVar5 + 1) {
    puVar3 = (undefined4 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *piVar5 = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_008dddf0 @ 008dddf0 ////

void __thiscall FUN_008dddf0(void *this,float *param_1,float *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00cee6e8;
  local_14 = ExceptionList;
  local_24 = (int *)0x0;
  local_20 = (int *)0x0;
  local_1c = 0;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_008ddc50(this,&local_28);
  *param_1 = 3.4028235e+38;
  local_30 = -3.4028235e+38;
  param_1[1] = 3.4028235e+38;
  *param_2 = -3.4028235e+38;
  local_2c = -3.4028235e+38;
  param_2[1] = -3.4028235e+38;
  piVar4 = local_24;
  if (local_24 != local_20) {
    do {
      FUN_008dd080((void *)*piVar4,&local_38,&local_30);
      if (local_38 < *param_1) {
        *param_1 = local_38;
      }
      if (local_34 < param_1[1]) {
        param_1[1] = local_34;
      }
      if (*param_2 < local_30) {
        *param_2 = local_30;
      }
      if (param_2[1] < local_2c) {
        param_2[1] = local_2c;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != local_20);
  }
  piVar3 = local_20;
  local_c = 0xffffffff;
  piVar4 = local_24;
  if (local_24 == (int *)0x0) {
    ExceptionList = local_14;
    return;
  }
  for (; piVar4 != piVar3; piVar4 = piVar4 + 1) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *piVar4 = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_24);
}


//// FUNCTION FUN_008ddf50 @ 008ddf50 ////

int * __thiscall FUN_008ddf50(void *this,undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee708;
  pvStack_c = ExceptionList;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_008ddc50(this,&local_1c);
  piVar5 = local_18;
  if (local_18 != local_14) {
    do {
      piVar2 = (int *)*piVar5;
      cVar4 = (**(code **)(*piVar2 + 0x28))(param_1);
      if (cVar4 != '\0') {
        local_4 = 0xffffffff;
        if (local_18 == (int *)0x0) {
          ExceptionList = pvStack_c;
          return piVar2;
        }
        FUN_008d7af0(local_18,local_14);
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != local_14);
  }
  piVar2 = local_14;
  local_4 = 0xffffffff;
  piVar5 = local_18;
  if (local_18 == (int *)0x0) {
    ExceptionList = pvStack_c;
    return (int *)0x0;
  }
  for (; piVar5 != piVar2; piVar5 = piVar5 + 1) {
    puVar3 = (undefined4 *)*piVar5;
    if (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    *piVar5 = 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_18);
}


//// FUNCTION FUN_008de050 @ 008de050 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_008de050(void *this,float param_1)

{
  void *this_00;
  void *this_01;
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float afStack_38 [2];
  float fStack_30;
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cee728;
  local_14 = ExceptionList;
  if ((*(int *)((int)this + 0x54) == 0) &&
     (ExceptionList = &local_14, iVar4 = FUN_0071b2a0(), iVar4 != 0)) {
    piVar5 = (int *)FUN_0071b2a0();
    fVar9 = (float10)(**(code **)(*piVar5 + 0x10))();
    piVar5 = (int *)FUN_0071b2a0();
    fVar10 = (float10)(**(code **)(*piVar5 + 0x14))();
    cVar3 = (**(code **)(*(int *)this + 0x18))();
    piStack_24 = (int *)0x0;
    piStack_20 = (int *)0x0;
    uStack_1c = 0;
    uStack_c = 0;
    FUN_008ddc50(this,&uStack_28);
    FUN_008dddf0(this,&fStack_58,&fStack_50);
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    if (cVar3 != '\0') {
      fStack_60 = 0.0;
      fStack_5c = 0.0;
      if (fStack_50 - fStack_58 < ((float)fVar9 - 74.0) - 68.0) {
        if (74.0 <= fStack_58) {
          fVar2 = (float)fVar9 - 68.0;
          if (fVar2 < fStack_50) {
            fStack_60 = fVar2 - fStack_50;
          }
        }
        else {
          fStack_60 = 74.0 - fStack_58;
        }
      }
      if (fStack_4c - fStack_54 < ((float)fVar10 - 50.0) - 60.0) {
        if (50.0 <= fStack_54) {
          fVar2 = (float)fVar10 - 60.0;
          if (fVar2 < fStack_4c) {
            fStack_5c = fVar2 - fStack_4c;
          }
        }
        else {
          fStack_5c = 50.0 - fStack_54;
        }
      }
      fStack_48 = fStack_60;
      fStack_44 = fStack_5c;
    }
    if (piStack_24 != piStack_20) {
      fStack_44 = fStack_44 * _DAT_00e5fad4;
      fStack_48 = fStack_48 * _DAT_00e5fad4;
      piVar5 = piStack_24;
      do {
        iVar4 = *piVar5;
        *(float *)(iVar4 + 0xa0) = fStack_48;
        *(float *)(iVar4 + 0xa4) = fStack_44;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piStack_20);
    }
    piVar6 = piStack_20;
    piVar5 = piStack_24;
    piVar8 = piStack_24;
    if (piStack_24 != piStack_20) {
      do {
        this_00 = (void *)*piVar8;
        if ((*(char *)((int)this_00 + 0xb4) == '\0') && (*(char *)((int)this_00 + 0xb5) == '\0')) {
          fVar2 = -*(float *)((int)this_00 + 0x94) * _DAT_00e5fad0;
          *(float *)((int)this_00 + 0xa0) =
               -*(float *)((int)this_00 + 0x90) * _DAT_00e5fad0 + *(float *)((int)this_00 + 0xa0);
          *(float *)((int)this_00 + 0xa4) = fVar2 + *(float *)((int)this_00 + 0xa4);
          FUN_008dd080(this_00,&fStack_40,afStack_38);
          piVar5 = piStack_24;
          piVar6 = piStack_20;
          for (piVar7 = piStack_24; piStack_24 = piVar5, piStack_20 = piVar6, piVar7 != piVar8;
              piVar7 = piVar7 + 1) {
            this_01 = (void *)*piVar7;
            if ((*(char *)((int)this_01 + 0xb4) == '\0') && (*(char *)((int)this_01 + 0xb5) == '\0')
               ) {
              FUN_008dd080(this_01,&fStack_58,&fStack_50);
              FUN_008dc950(&fStack_48,&fStack_58,&fStack_50,&fStack_40,afStack_38);
              if (*(int *)((int)this_01 + 0x54) != 0) {
                fVar2 = fStack_44 * _DAT_00e5facc;
                *(float *)((int)this_01 + 0xa0) =
                     *(float *)((int)this_01 + 0xa0) - fStack_48 * _DAT_00e5facc;
                *(float *)((int)this_01 + 0xa4) = *(float *)((int)this_01 + 0xa4) - fVar2;
              }
              if (*(int *)((int)this_00 + 0x54) != 0) {
                fVar2 = fStack_44 * _DAT_00e5facc;
                *(float *)((int)this_00 + 0xa0) =
                     fStack_48 * _DAT_00e5facc + *(float *)((int)this_00 + 0xa0);
                *(float *)((int)this_00 + 0xa4) = fVar2 + *(float *)((int)this_00 + 0xa4);
              }
            }
            piVar5 = piStack_24;
            piVar6 = piStack_20;
          }
        }
        piVar8 = piVar8 + 1;
      } while (piVar8 != piVar6);
    }
    if (piVar5 != piVar6) {
      do {
        iVar4 = *piVar5;
        fStack_48 = *(float *)(iVar4 + 0xa0);
        fStack_44 = *(float *)(iVar4 + 0xa4);
        if (_DAT_01050440 == 0.0) {
          fStack_40 = 0.0;
          uStack_3c = 0;
          *(undefined4 *)(iVar4 + 0xa8) = 0;
          *(undefined4 *)(iVar4 + 0xac) = 0;
          *(float *)(iVar4 + 0x90) = fStack_48 + *(float *)(iVar4 + 0x90);
          *(float *)(iVar4 + 0x94) = fStack_44 + *(float *)(iVar4 + 0x94);
        }
        else {
          fVar2 = fStack_44 * (1.0 / _DAT_00e5fac8);
          afStack_38[0] = fStack_48 * (1.0 / _DAT_00e5fac8);
          fStack_54 = fVar2 * 0.5;
          fStack_58 = afStack_38[0] * 0.5;
          *(float *)(iVar4 + 0x90) =
               fStack_58 * param_1 * param_1 + *(float *)(iVar4 + 0xa8) + *(float *)(iVar4 + 0x90);
          *(float *)(iVar4 + 0x94) =
               fStack_54 * param_1 * param_1 + *(float *)(iVar4 + 0xac) + *(float *)(iVar4 + 0x94);
          fStack_50 = fStack_58;
          fStack_4c = fStack_54;
          fVar9 = (float10)FUN_00ace9b0();
          fStack_30 = afStack_38[0] * param_1;
          *(float *)(iVar4 + 0xa8) =
               (float)(((float10)1.0 - fVar9) * (float10)*(float *)(iVar4 + 0xa8) +
                      (float10)fStack_30);
          *(float *)(iVar4 + 0xac) =
               (float)(((float10)1.0 - fVar9) * (float10)*(float *)(iVar4 + 0xac)) + fVar2 * param_1
          ;
        }
        piVar5 = piVar5 + 1;
        piVar6 = piStack_20;
      } while (piVar5 != piStack_20);
    }
    uStack_c = 0xffffffff;
    piVar5 = piStack_24;
    if (piStack_24 != (int *)0x0) {
      for (; piVar5 != piVar6; piVar5 = piVar5 + 1) {
        puVar1 = (undefined4 *)*piVar5;
        if (puVar1 != (undefined4 *)0x0) {
          piVar8 = puVar1 + 0x12;
          *piVar8 = *piVar8 + -1;
          if (*piVar8 == 0) {
            (**(code **)*puVar1)(1);
          }
        }
        *piVar5 = 0;
      }
                    /* WARNING: Subroutine does not return */
      _free(piStack_24);
    }
  }
  ExceptionList = local_14;
  return;
}


//// FUNCTION FUN_008de590 @ 008de590 ////

void FUN_008de590(void)

{
  return;
}


//// FUNCTION FUN_008de5a0 @ 008de5a0 ////

void __fastcall FUN_008de5a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee74b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = operator_new(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_0041f350(puVar3);
  }
  *(undefined4 **)(param_1 + 0xd0) = puVar3;
  puVar3 = operator_new(0x24);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_009910f0(puVar3);
  }
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4) = uVar4;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) + 0xc) = 6;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) + 0x10);
  *puVar1 = *puVar1 & 0xbfffffff;
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xd0) + 4) + 0x10);
  *puVar1 = *puVar1 & 0x7fffffff;
  iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff;
  local_4 = 0xffffffff;
  pvVar5 = FUN_0099bb50(PTR_s_ui_bubblebit_dds_00e5fb04,0,0,0,'\0');
  this = *(void **)(*(int *)(param_1 + 0xd0) + 4);
  if (*(void **)((int)this + 0x18) != pvVar5) {
    Engine_SetResourceReference(this,(int)pvVar5);
  }
  iVar2 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  iVar2 = *(int *)(param_1 + 0xd0);
  *(undefined4 *)(iVar2 + 0x30) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x34) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8) = 0xc0ffffff;
  if (pvVar5 != (void *)0x0) {
    FUN_0099b400(pvVar5);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008de760 @ 008de760 ////

void __fastcall FUN_008de760(void *param_1)

{
  int *piVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_c;
  float fStack_8;
  
  if (*(int **)((int)param_1 + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xcc) + 0x84))(0);
    piVar1 = *(int **)((int)param_1 + 0xcc);
    fVar2 = (float10)(**(code **)(*piVar1 + 0x14))();
    fVar3 = (float10)(**(code **)(*piVar1 + 0x10))();
    fStack_c = (float)fVar3;
    fStack_8 = (float)fVar2;
    FUN_008dc2d0(param_1,(int *)&fStack_c);
  }
  return;
}


//// FUNCTION FUN_008de7f0 @ 008de7f0 ////

void __fastcall FUN_008de7f0(void *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  float local_10 [2];
  float local_8 [2];
  
  FUN_008de760(param_1);
  if (*(int *)((int)param_1 + 0xcc) != 0) {
    bVar2 = FUN_00413cc0(DAT_00f87aa0);
    if (!bVar2) {
      uVar4 = FUN_008dc370((int)param_1);
      if ((((char)uVar4 != '\0') && (*(char *)((int)param_1 + 0xb4) == '\0')) &&
         (*(char *)((int)param_1 + 0xdc) != '\0')) {
        FUN_008dd080(param_1,local_10,local_8);
        iVar1 = **(int **)((int)param_1 + 0xcc);
        iVar5 = FUN_0071b2a0();
        uVar6 = FUN_0071b910(iVar5);
        (**(code **)(iVar1 + 0x5c))(1,uVar6,local_10[0]);
        iVar1 = **(int **)((int)param_1 + 0xcc);
        iVar5 = FUN_0071b2a0();
        uVar6 = FUN_0071b910(iVar5);
        (**(code **)(iVar1 + 100))(1,uVar6,unaff_EBX);
        do {
          cVar3 = (**(code **)(**(int **)((int)param_1 + 0xcc) + 0x50))(1);
        } while (cVar3 != '\0');
        (**(code **)(**(int **)((int)param_1 + 0xcc) + 0x2c))();
      }
    }
  }
  return;
}


//// FUNCTION FUN_008de8d0 @ 008de8d0 ////

void __thiscall FUN_008de8d0(void *this,undefined4 *param_1,float *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  float unaff_ESI;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  uVar2 = param_1[1];
  iVar3 = *(int *)((int)this + 0xd0);
  *(undefined4 *)(iVar3 + 0x10) = *param_1;
  *(undefined4 *)(iVar3 + 0x14) = uVar2;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  iVar3 = *(int *)((int)this + 0xd0);
  local_c = *param_2;
  local_8 = param_2[1];
  *(float *)(iVar3 + 0x1c) = local_c;
  *(float *)(iVar3 + 0x20) = local_8;
  local_4 = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  piVar5 = (int *)FUN_00ace790(*(int **)((int)this + 0x68),0,
                               &TM::CBubbleAnchor::RTTI_Type_Descriptor,
                               &TM::CBubbleAnchor3D::RTTI_Type_Descriptor,0);
  if (piVar5 != (int *)0x0) {
    cVar4 = (**(code **)(*piVar5 + 0x24))(&local_c);
    if (cVar4 != '\0') {
      *(float *)(*(int *)((int)this + 0xd0) + 0x18) =
           DAT_0105c3c0 * (unaff_ESI - DAT_0105c3a8) +
           (local_c - DAT_0105c3ac) * DAT_0105c3c4 + (local_8 - DAT_0105c3b0) * DAT_0105c3c8;
      *(undefined4 *)(*(int *)((int)this + 0xd0) + 0x24) =
           *(undefined4 *)(*(int *)((int)this + 0xd0) + 0x18);
      puVar1 = (uint *)(*(int *)(*(int *)((int)this + 0xd0) + 4) + 0x10);
      *puVar1 = *puVar1 | 0x80000000;
      BuildAndDrawPrimitive(*(int *)((int)this + 0xd0));
    }
  }
  return;
}


//// FUNCTION FUN_008de9e0 @ 008de9e0 ////

void __fastcall FUN_008de9e0(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  float local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  bVar6 = FUN_00413cc0(DAT_00f87aa0);
  if (!bVar6) {
    uVar7 = FUN_008dc370((int)param_1);
    if (((char)uVar7 != '\0') && (*(char *)((int)param_1 + 0xb4) == '\0')) {
      pfVar8 = (float *)FUN_008dc840(param_1,local_20);
      local_28 = *pfVar8 + *(float *)((int)param_1 + 0x78);
      local_24 = pfVar8[1] + *(float *)((int)param_1 + 0x7c);
      FUN_008dd030(param_1,&local_38);
      FUN_008dd080(param_1,&local_10,&local_18);
      fVar1 = local_28 - local_38;
      uVar7 = 0;
      local_4c = 5.0;
      fVar2 = local_24 - local_34;
      fVar3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2);
      if (5.0 < fVar3) {
        while ((uVar7 < *(uint *)((int)param_1 + 0xd8) || (*(char *)((int)param_1 + 0xdc) != '\0')))
        {
          fVar4 = local_4c / fVar3;
          local_20[0] = fVar1 * fVar4 + local_38;
          local_2c = fVar2 * fVar4 + local_34;
          fVar4 = fVar4 * 30.0 + 10.0;
          fVar5 = fVar4 * 0.5;
          local_28 = local_20[0] - fVar5;
          local_24 = local_2c - fVar5;
          local_30 = local_20[0] + fVar5;
          local_2c = local_2c + fVar5;
          if ((((local_18 < local_28) || (local_30 < local_10)) || (local_14 < local_24)) ||
             (local_2c < local_c)) {
            FUN_008de8d0(param_1,&local_28,&local_30);
          }
          uVar7 = uVar7 + 1;
          local_4c = fVar4 + local_4c + 5.0;
          if (fVar3 <= local_4c) {
            *(undefined1 *)((int)param_1 + 0xdc) = 1;
            return;
          }
        }
      }
      if (fVar3 <= local_4c) {
        *(undefined1 *)((int)param_1 + 0xdc) = 1;
      }
    }
  }
  return;
}


//// FUNCTION FUN_008debc0 @ 008debc0 ////

undefined4 * __fastcall FUN_008debc0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *this;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 unaff_retaddr;
  undefined1 *puStack_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 auStack_2c [12];
  void *pvStack_20;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee7a5;
  puStack_c = ExceptionList;
  bVar6 = false;
  local_34 = (undefined4 *)0x0;
  ExceptionList = &puStack_c;
  local_30 = param_1;
  FUN_008dd920(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d66ec4;
  local_34 = operator_new(0x3fc);
  local_4._0_1_ = 1;
  if (local_34 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_00833290(local_34);
  }
  piVar5 = param_1 + 0x2f;
  param_1[0x31] = 0;
  *piVar5 = 0;
  param_1[0x30] = 0;
  param_1[0x31] = param_1 + 0x2e;
  param_1[0x2e] = &PTR_FUN_00d195f8;
  param_1[0x33] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 6;
    param_1[0x30] = piVar3;
    *piVar5 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar5;
    *piVar3 = (int)piVar5;
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*(int *)param_1[0x33] + 0x78))(0x43480000);
  (**(code **)(*(int *)param_1[0x33] + 0x54))(unaff_retaddr);
  (**(code **)(*(int *)param_1[0x33] + 0x84))(0x3f800000);
  fVar7 = (float10)(**(code **)(*(int *)param_1[0x33] + 0x14))();
  if (fVar7 < (float10)40.0) {
    (**(code **)(*(int *)param_1[0x33] + 0x7c))(0x42200000);
  }
  this = operator_new(0x2a8);
  puStack_8 = this;
  if (this == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puStack_38 = auStack_2c;
    auStack_2c[0] = 0;
    local_34 = (undefined4 *)0x0;
    local_30 = (undefined4 *)&DAT_00000014;
    pcVar4 = PTR_s_ui_newbubble_dds_00e5fb00;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0(&puStack_38,PTR_s_ui_newbubble_dds_00e5fb00,
                 (int)pcVar4 - (int)(PTR_s_ui_newbubble_dds_00e5fb00 + 1));
    bVar6 = true;
    uStack_10 = CONCAT31(uStack_10._1_3_,4);
    piVar5 = FUN_005e73e0(this,&puStack_38);
  }
  uStack_10 = 2;
  if ((bVar6) && (&DAT_00000014 < local_30)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_38);
  }
  (**(code **)(*(int *)param_1[0x33] + 0xa0))(piVar5);
  (**(code **)(*piVar5 + 0xc))(&stack0xffffffb8);
  FUN_008de5a0((int)param_1);
  FUN_008dcf70(param_1,puStack_c);
  FUN_008de760(param_1);
  ExceptionList = pvStack_20;
  return param_1;
}


//// FUNCTION FUN_008dede0 @ 008dede0 ////

void __fastcall FUN_008dede0(undefined4 *param_1)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee7c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d66ec4;
  local_4 = 1;
  if (param_1[0x34] == 0) {
    puVar2 = (undefined4 *)param_1[0x33];
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
      (**(code **)(param_1[0x2e] + 4))();
      param_1[0x33] = 0;
      (**(code **)param_1[0x2e])();
    }
    param_1[0x2e] = &PTR_FUN_00d195f8;
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
    local_4 = 0xffffffff;
    FUN_008dd750(param_1);
    ExceptionList = pvStack_c;
    return;
  }
  _Memory = *(void **)(param_1[0x34] + 4);
  if (_Memory != (void *)0x0) {
    FUN_00990ec0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x34]);
}


//// FUNCTION FUN_008def10 @ 008def10 ////

undefined4 * __thiscall FUN_008def10(void *this,byte param_1)

{
  FUN_008dede0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008def30 @ 008def30 ////

void __fastcall FUN_008def30(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  DAT_01050448 = DAT_01050448 + 1;
  *(int *)(param_1 + 8) = DAT_01050448;
  uVar1 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0xc) = (int)uVar1;
  return;
}


//// FUNCTION FUN_008def80 @ 008def80 ////

ulonglong __fastcall FUN_008def80(int *param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_00990ae0(param_1,param_2);
  if ((*param_1 != 0) && ((param_1[1] != 1 || (DAT_01050448 <= (uint)param_1[2])))) {
    if (param_1[4] == 0) {
      return uVar2 & 0xffffffffffffff00;
    }
    uVar1 = param_1[3] + param_1[4];
    return CONCAT44(uVar1,(uint)(uVar1 < (uint)uVar2));
  }
  return CONCAT44((int)(uVar2 >> 0x20),CONCAT31((int3)(uVar2 >> 8),1));
}


//// FUNCTION FUN_008df020 @ 008df020 ////

void __fastcall FUN_008df020(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    FUN_008d5670(*param_1);
    uVar3 = 0;
    FUN_008d5650(*param_1);
    (**(code **)(*(int *)*param_1 + 0xc))(0x3f000000,uVar3,uVar4);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_008df060 @ 008df060 ////

void __fastcall FUN_008df060(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*param_1 != 0) {
    uVar4 = 0;
    FUN_008d5670(*param_1);
    uVar3 = 0;
    FUN_008d5650(*param_1);
    (**(code **)(*(int *)*param_1 + 0xc))(0x3f000000,uVar3,uVar4);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *param_1 = 0;
  }
  return;
}


//// FUNCTION FUN_008df0a0 @ 008df0a0 ////

int * __fastcall FUN_008df0a0(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  undefined4 extraout_EDX;
  void *unaff_ESI;
  ulonglong uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cee7d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = 0;
  if (param_3 != (undefined4 *)0x0) {
    param_3[0x12] = param_3[0x12] + 1;
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        param_2 = extraout_EDX;
      }
    }
  }
  *param_1 = (int)param_3;
  param_1[1] = param_4;
  DAT_01050448 = DAT_01050448 + 1;
  local_4 = 0;
  param_1[2] = DAT_01050448;
  uVar4 = FUN_00990ae0(param_4,param_2);
  param_1[3] = (int)uVar4;
  param_1[4] = DAT_00e5fb08;
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_LAB_00d66f0c;
    puVar2[1] = param_1;
    puVar2[2] = FUN_008df060;
  }
  FUN_008d5670((int)param_3);
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_LAB_00d66f0c;
    puVar2[1] = param_1;
    puVar2[2] = &LAB_008def50;
  }
  FUN_008d5650((int)param_3);
  iVar3 = FUN_0071b2a0();
  this = (void *)FUN_0071b910(iVar3);
  FUN_00640700(this,param_3);
  ExceptionList = unaff_ESI;
  return param_1;
}


//// FUNCTION FUN_008df190 @ 008df190 ////

void __fastcall FUN_008df190(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee7f8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*param_1 != 0) {
    uVar4 = 0;
    ExceptionList = &pvStack_c;
    FUN_008d5670(*param_1);
    uVar3 = 0;
    FUN_008d5650(*param_1);
    (**(code **)(*(int *)*param_1 + 0xc))(0x3f000000,uVar3,uVar4);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *param_1 = 0;
  }
  puVar2 = (undefined4 *)*param_1;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *param_1 = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_008df220 @ 008df220 ////

void __fastcall FUN_008df220(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008df280 @ 008df280 ////

bool __fastcall FUN_008df280(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0078bad0();
  return (bool)('\x01' - (iVar1 != *(int *)(param_1 + 4)));
}


//// FUNCTION FUN_008df2e0 @ 008df2e0 ////

bool __fastcall FUN_008df2e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00423320(DAT_00f87b04);
  return (bool)('\x01' - (iVar1 != *(int *)(param_1 + 4)));
}


//// FUNCTION FUN_008df5e0 @ 008df5e0 ////

void __fastcall FUN_008df5e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67054;
  return;
}


//// FUNCTION FUN_008df5f0 @ 008df5f0 ////

void __fastcall FUN_008df5f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008df600 @ 008df600 ////

undefined4 * __thiscall FUN_008df600(void *this,byte param_1)

{
  FUN_008df5f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008df620 @ 008df620 ////

void __fastcall FUN_008df620(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67064;
  return;
}


//// FUNCTION FUN_008df630 @ 008df630 ////

void __fastcall FUN_008df630(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67070;
  return;
}


//// FUNCTION FUN_008df640 @ 008df640 ////

void __fastcall FUN_008df640(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6707c;
  return;
}


//// FUNCTION FUN_008df650 @ 008df650 ////

void __fastcall FUN_008df650(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67088;
  return;
}


//// FUNCTION FUN_008df660 @ 008df660 ////

void __fastcall FUN_008df660(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67094;
  return;
}


//// FUNCTION FUN_008df670 @ 008df670 ////

void __fastcall FUN_008df670(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670a0;
  return;
}


//// FUNCTION FUN_008df680 @ 008df680 ////

void __fastcall FUN_008df680(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670ac;
  return;
}


//// FUNCTION FUN_008df690 @ 008df690 ////

void __fastcall FUN_008df690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670b8;
  return;
}


//// FUNCTION FUN_008df6a0 @ 008df6a0 ////

void __fastcall FUN_008df6a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670c4;
  return;
}


//// FUNCTION FUN_008df6b0 @ 008df6b0 ////

void __fastcall FUN_008df6b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670d0;
  return;
}


//// FUNCTION FUN_008df6c0 @ 008df6c0 ////

void __fastcall FUN_008df6c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670dc;
  return;
}


//// FUNCTION FUN_008df6d0 @ 008df6d0 ////

void __fastcall FUN_008df6d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670e8;
  return;
}


//// FUNCTION FUN_008df6e0 @ 008df6e0 ////

void __fastcall FUN_008df6e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d670f4;
  return;
}


//// FUNCTION FUN_008df6f0 @ 008df6f0 ////

void __fastcall FUN_008df6f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67100;
  return;
}


//// FUNCTION FUN_008df700 @ 008df700 ////

void __fastcall FUN_008df700(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6710c;
  return;
}


//// FUNCTION FUN_008df710 @ 008df710 ////

void __fastcall FUN_008df710(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67118;
  return;
}


//// FUNCTION FUN_008df720 @ 008df720 ////

void __fastcall FUN_008df720(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67124;
  return;
}


//// FUNCTION FUN_008df730 @ 008df730 ////

void __fastcall FUN_008df730(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67130;
  return;
}


//// FUNCTION FUN_008df740 @ 008df740 ////

void __fastcall FUN_008df740(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6713c;
  return;
}


//// FUNCTION FUN_008df750 @ 008df750 ////

void __fastcall FUN_008df750(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67148;
  return;
}


//// FUNCTION FUN_008df760 @ 008df760 ////

void __fastcall FUN_008df760(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67154;
  return;
}


//// FUNCTION FUN_008df770 @ 008df770 ////

void __fastcall FUN_008df770(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67160;
  return;
}


//// FUNCTION FUN_008df780 @ 008df780 ////

void __fastcall FUN_008df780(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6716c;
  return;
}


//// FUNCTION FUN_008df790 @ 008df790 ////

void __fastcall FUN_008df790(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67178;
  return;
}


//// FUNCTION FUN_008df7a0 @ 008df7a0 ////

void __fastcall FUN_008df7a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67184;
  return;
}


//// FUNCTION FUN_008df7b0 @ 008df7b0 ////

void __fastcall FUN_008df7b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67190;
  return;
}


//// FUNCTION FUN_008df7c0 @ 008df7c0 ////

void __fastcall FUN_008df7c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6719c;
  return;
}


//// FUNCTION FUN_008df7d0 @ 008df7d0 ////

void __fastcall FUN_008df7d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671a8;
  return;
}


//// FUNCTION FUN_008df7e0 @ 008df7e0 ////

void __fastcall FUN_008df7e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671b4;
  return;
}


//// FUNCTION FUN_008df7f0 @ 008df7f0 ////

void __fastcall FUN_008df7f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671c0;
  return;
}


//// FUNCTION FUN_008df800 @ 008df800 ////

void __fastcall FUN_008df800(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671cc;
  return;
}


//// FUNCTION FUN_008df810 @ 008df810 ////

void __fastcall FUN_008df810(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671d8;
  return;
}


//// FUNCTION FUN_008df820 @ 008df820 ////

void __fastcall FUN_008df820(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671e4;
  return;
}


//// FUNCTION FUN_008df830 @ 008df830 ////

void __fastcall FUN_008df830(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671f0;
  return;
}


//// FUNCTION FUN_008df840 @ 008df840 ////

void __fastcall FUN_008df840(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d671fc;
  return;
}


//// FUNCTION FUN_008df850 @ 008df850 ////

void __fastcall FUN_008df850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67208;
  return;
}


//// FUNCTION FUN_008df860 @ 008df860 ////

void __fastcall FUN_008df860(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67214;
  return;
}


//// FUNCTION FUN_008df870 @ 008df870 ////

void __fastcall FUN_008df870(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67220;
  return;
}


//// FUNCTION FUN_008df880 @ 008df880 ////

void __fastcall FUN_008df880(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6722c;
  return;
}


//// FUNCTION FUN_008df890 @ 008df890 ////

void __fastcall FUN_008df890(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67238;
  return;
}


//// FUNCTION FUN_008df8a0 @ 008df8a0 ////

void __fastcall FUN_008df8a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67244;
  return;
}


//// FUNCTION FUN_008df8b0 @ 008df8b0 ////

void __fastcall FUN_008df8b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67250;
  return;
}


//// FUNCTION FUN_008df8c0 @ 008df8c0 ////

void __fastcall FUN_008df8c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6725c;
  return;
}


//// FUNCTION FUN_008df8d0 @ 008df8d0 ////

void __fastcall FUN_008df8d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67268;
  return;
}


//// FUNCTION FUN_008df8e0 @ 008df8e0 ////

void __fastcall FUN_008df8e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67274;
  return;
}


//// FUNCTION FUN_008df8f0 @ 008df8f0 ////

void __fastcall FUN_008df8f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67280;
  return;
}


//// FUNCTION FUN_008df900 @ 008df900 ////

void __fastcall FUN_008df900(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6728c;
  return;
}


//// FUNCTION FUN_008df910 @ 008df910 ////

void __fastcall FUN_008df910(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67298;
  return;
}


//// FUNCTION FUN_008df920 @ 008df920 ////

void __fastcall FUN_008df920(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672a4;
  return;
}


//// FUNCTION FUN_008df930 @ 008df930 ////

void __fastcall FUN_008df930(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672b0;
  return;
}


//// FUNCTION FUN_008df940 @ 008df940 ////

void __fastcall FUN_008df940(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672bc;
  return;
}


//// FUNCTION FUN_008df950 @ 008df950 ////

void __fastcall FUN_008df950(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672c8;
  return;
}


//// FUNCTION FUN_008df960 @ 008df960 ////

void __fastcall FUN_008df960(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672d4;
  return;
}


//// FUNCTION FUN_008df970 @ 008df970 ////

void __fastcall FUN_008df970(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672e0;
  return;
}


//// FUNCTION FUN_008df980 @ 008df980 ////

void __fastcall FUN_008df980(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672ec;
  return;
}


//// FUNCTION FUN_008df990 @ 008df990 ////

void __fastcall FUN_008df990(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d672f8;
  return;
}


//// FUNCTION FUN_008df9a0 @ 008df9a0 ////

void __fastcall FUN_008df9a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67304;
  return;
}


//// FUNCTION FUN_008df9b0 @ 008df9b0 ////

void __fastcall FUN_008df9b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67310;
  return;
}


//// FUNCTION FUN_008df9c0 @ 008df9c0 ////

void __fastcall FUN_008df9c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6731c;
  return;
}


//// FUNCTION FUN_008df9d0 @ 008df9d0 ////

void __fastcall FUN_008df9d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67328;
  return;
}


//// FUNCTION FUN_008df9e0 @ 008df9e0 ////

void __fastcall FUN_008df9e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67334;
  return;
}


//// FUNCTION FUN_008df9f0 @ 008df9f0 ////

void __fastcall FUN_008df9f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67340;
  return;
}


//// FUNCTION FUN_008dfa00 @ 008dfa00 ////

void __fastcall FUN_008dfa00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6734c;
  return;
}


//// FUNCTION FUN_008dfa10 @ 008dfa10 ////

void __fastcall FUN_008dfa10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67358;
  return;
}


//// FUNCTION FUN_008dfa20 @ 008dfa20 ////

void __fastcall FUN_008dfa20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67364;
  return;
}


//// FUNCTION FUN_008dfa30 @ 008dfa30 ////

void __fastcall FUN_008dfa30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67370;
  return;
}


//// FUNCTION FUN_008dfa40 @ 008dfa40 ////

void __fastcall FUN_008dfa40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6737c;
  return;
}


//// FUNCTION FUN_008dfa50 @ 008dfa50 ////

void __fastcall FUN_008dfa50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67388;
  return;
}


//// FUNCTION FUN_008dfa60 @ 008dfa60 ////

void __fastcall FUN_008dfa60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67394;
  return;
}


//// FUNCTION FUN_008dfa70 @ 008dfa70 ////

void __fastcall FUN_008dfa70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d673a0;
  return;
}


//// FUNCTION FUN_008dfa80 @ 008dfa80 ////

void __fastcall FUN_008dfa80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d673ac;
  return;
}


//// FUNCTION FUN_008dfa90 @ 008dfa90 ////

void __fastcall FUN_008dfa90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d673b8;
  return;
}


//// FUNCTION FUN_008dfaa0 @ 008dfaa0 ////

void __fastcall FUN_008dfaa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d673c4;
  return;
}


//// FUNCTION FUN_008dfab0 @ 008dfab0 ////

void __fastcall FUN_008dfab0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008dfac0 @ 008dfac0 ////

void __fastcall FUN_008dfac0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d673d4;
  return;
}


//// FUNCTION FUN_008dfad0 @ 008dfad0 ////

void __fastcall FUN_008dfad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008dfae0 @ 008dfae0 ////

undefined4 * __fastcall FUN_008dfae0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d673e0;
  return param_1;
}


//// FUNCTION FUN_008dfb00 @ 008dfb00 ////

void __fastcall FUN_008dfb00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008dfb10 @ 008dfb10 ////

undefined4 * __fastcall FUN_008dfb10(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d673f0;
  return param_1;
}


//// FUNCTION FUN_008dfb30 @ 008dfb30 ////

void __fastcall FUN_008dfb30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008dfb40 @ 008dfb40 ////

undefined4 * __fastcall FUN_008dfb40(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67400;
  return param_1;
}


//// FUNCTION FUN_008dfb60 @ 008dfb60 ////

void __fastcall FUN_008dfb60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008dfb70 @ 008dfb70 ////

undefined4 * __thiscall FUN_008dfb70(void *this,byte param_1)

{
  FUN_008dfab0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dfb90 @ 008dfb90 ////

undefined4 * __thiscall FUN_008dfb90(void *this,byte param_1)

{
  FUN_008dfad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dfbb0 @ 008dfbb0 ////

undefined4 * __thiscall FUN_008dfbb0(void *this,byte param_1)

{
  FUN_008dfb00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dfbd0 @ 008dfbd0 ////

undefined4 * __thiscall FUN_008dfbd0(void *this,byte param_1)

{
  FUN_008dfb30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dfbf0 @ 008dfbf0 ////

undefined4 * __thiscall FUN_008dfbf0(void *this,byte param_1)

{
  FUN_008dfb60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008dfc10 @ 008dfc10 ////

undefined4 * __fastcall FUN_008dfc10(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d67410;
  local_4 = 0;
  uVar1 = JobName_ToEnum();
  param_1[1] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008dfc70 @ 008dfc70 ////

undefined4 * __fastcall FUN_008dfc70(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6741c;
  local_4 = 0;
  uVar1 = JobName_ToEnum();
  param_1[1] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008dfcd0 @ 008dfcd0 ////

undefined4 * __fastcall FUN_008dfcd0(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee858;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d67428;
  local_4 = 0;
  uVar1 = JobName_ToEnum();
  param_1[1] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_008dfd70 @ 008dfd70 ////

void __fastcall FUN_008dfd70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67464;
  return;
}


//// FUNCTION FUN_008dfd80 @ 008dfd80 ////

void __fastcall FUN_008dfd80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67470;
  return;
}


//// FUNCTION FUN_008dfd90 @ 008dfd90 ////

void __fastcall FUN_008dfd90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6747c;
  return;
}


//// FUNCTION FUN_008dfda0 @ 008dfda0 ////

void __fastcall FUN_008dfda0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67488;
  return;
}


//// FUNCTION FUN_008dfdb0 @ 008dfdb0 ////

void __fastcall FUN_008dfdb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67494;
  return;
}


//// FUNCTION FUN_008dfdc0 @ 008dfdc0 ////

void __fastcall FUN_008dfdc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674a0;
  return;
}


//// FUNCTION FUN_008dfdd0 @ 008dfdd0 ////

void __fastcall FUN_008dfdd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674ac;
  return;
}


//// FUNCTION FUN_008dfde0 @ 008dfde0 ////

void __fastcall FUN_008dfde0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674b8;
  return;
}


//// FUNCTION FUN_008dfdf0 @ 008dfdf0 ////

void __fastcall FUN_008dfdf0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674c4;
  return;
}


//// FUNCTION FUN_008dfe00 @ 008dfe00 ////

void __fastcall FUN_008dfe00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674d0;
  return;
}


//// FUNCTION FUN_008dfe10 @ 008dfe10 ////

void __fastcall FUN_008dfe10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674dc;
  return;
}


//// FUNCTION FUN_008dfe20 @ 008dfe20 ////

void __fastcall FUN_008dfe20(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674e8;
  return;
}


//// FUNCTION FUN_008dfe30 @ 008dfe30 ////

void __fastcall FUN_008dfe30(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d674f4;
  return;
}


//// FUNCTION FUN_008dfe40 @ 008dfe40 ////

void __fastcall FUN_008dfe40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67500;
  return;
}


//// FUNCTION FUN_008dfe50 @ 008dfe50 ////

void __fastcall FUN_008dfe50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6750c;
  return;
}


//// FUNCTION FUN_008dfe60 @ 008dfe60 ////

void __fastcall FUN_008dfe60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67518;
  return;
}


//// FUNCTION FUN_008dfe70 @ 008dfe70 ////

void __fastcall FUN_008dfe70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67524;
  return;
}


//// FUNCTION FUN_008dfe80 @ 008dfe80 ////

void __fastcall FUN_008dfe80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67530;
  return;
}


//// FUNCTION FUN_008dff90 @ 008dff90 ////

void __fastcall FUN_008dff90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d675fc;
  return;
}


//// FUNCTION FUN_008dffa0 @ 008dffa0 ////

void __fastcall FUN_008dffa0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67608;
  return;
}


//// FUNCTION FUN_008dffb0 @ 008dffb0 ////

void __fastcall FUN_008dffb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67614;
  return;
}


//// FUNCTION FUN_008dffc0 @ 008dffc0 ////

void __fastcall FUN_008dffc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67620;
  return;
}


//// FUNCTION FUN_008dffd0 @ 008dffd0 ////

void __fastcall FUN_008dffd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6762c;
  return;
}


//// FUNCTION FUN_008dffe0 @ 008dffe0 ////

void __fastcall FUN_008dffe0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67638;
  return;
}


//// FUNCTION FUN_008dfff0 @ 008dfff0 ////

void __fastcall FUN_008dfff0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67644;
  return;
}


//// FUNCTION FUN_008e0000 @ 008e0000 ////

void __fastcall FUN_008e0000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67650;
  return;
}


//// FUNCTION FUN_008e0010 @ 008e0010 ////

void __fastcall FUN_008e0010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6765c;
  return;
}


//// FUNCTION FUN_008e0020 @ 008e0020 ////

void __fastcall FUN_008e0020(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67668;
  return;
}


//// FUNCTION FUN_008e0030 @ 008e0030 ////

void __fastcall FUN_008e0030(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67674;
  return;
}


//// FUNCTION FUN_008e0040 @ 008e0040 ////

void __fastcall FUN_008e0040(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67680;
  return;
}


//// FUNCTION FUN_008e0050 @ 008e0050 ////

void __fastcall FUN_008e0050(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6768c;
  return;
}


//// FUNCTION FUN_008e0060 @ 008e0060 ////

void __fastcall FUN_008e0060(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67698;
  return;
}


//// FUNCTION FUN_008e0070 @ 008e0070 ////

void __fastcall FUN_008e0070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d676a4;
  return;
}


//// FUNCTION FUN_008e0080 @ 008e0080 ////

void __fastcall FUN_008e0080(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d676b0;
  return;
}


//// FUNCTION FUN_008e0090 @ 008e0090 ////

void __fastcall FUN_008e0090(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d676bc;
  return;
}


//// FUNCTION FUN_008e00a0 @ 008e00a0 ////

void __fastcall FUN_008e00a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d676c8;
  return;
}


//// FUNCTION FUN_008e01b0 @ 008e01b0 ////

void __fastcall FUN_008e01b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67794;
  return;
}


//// FUNCTION FUN_008e01c0 @ 008e01c0 ////

void __fastcall FUN_008e01c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677a0;
  return;
}


//// FUNCTION FUN_008e01d0 @ 008e01d0 ////

void __fastcall FUN_008e01d0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677ac;
  return;
}


//// FUNCTION FUN_008e01e0 @ 008e01e0 ////

void __fastcall FUN_008e01e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677b8;
  return;
}


//// FUNCTION FUN_008e01f0 @ 008e01f0 ////

void __fastcall FUN_008e01f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677c4;
  return;
}


//// FUNCTION FUN_008e0200 @ 008e0200 ////

void __fastcall FUN_008e0200(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677d0;
  return;
}


//// FUNCTION FUN_008e0210 @ 008e0210 ////

void __fastcall FUN_008e0210(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677dc;
  return;
}


//// FUNCTION FUN_008e0220 @ 008e0220 ////

void __fastcall FUN_008e0220(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677e8;
  return;
}


//// FUNCTION FUN_008e0230 @ 008e0230 ////

void __fastcall FUN_008e0230(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d677f4;
  return;
}


//// FUNCTION FUN_008e0240 @ 008e0240 ////

void __fastcall FUN_008e0240(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67800;
  return;
}


//// FUNCTION FUN_008e0250 @ 008e0250 ////

void __fastcall FUN_008e0250(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6780c;
  return;
}


//// FUNCTION FUN_008e0260 @ 008e0260 ////

void __fastcall FUN_008e0260(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67818;
  return;
}


//// FUNCTION FUN_008e0270 @ 008e0270 ////

void __fastcall FUN_008e0270(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67824;
  return;
}


//// FUNCTION FUN_008e0280 @ 008e0280 ////

void __fastcall FUN_008e0280(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67830;
  return;
}


//// FUNCTION FUN_008e0290 @ 008e0290 ////

void __fastcall FUN_008e0290(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6783c;
  return;
}


//// FUNCTION FUN_008e02a0 @ 008e02a0 ////

void __fastcall FUN_008e02a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67848;
  return;
}


//// FUNCTION FUN_008e02b0 @ 008e02b0 ////

void __fastcall FUN_008e02b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67854;
  return;
}


//// FUNCTION FUN_008e02c0 @ 008e02c0 ////

void __fastcall FUN_008e02c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d67860;
  return;
}


//// FUNCTION FUN_008e03e0 @ 008e03e0 ////

undefined4 * __thiscall FUN_008e03e0(void *this,byte param_1)

{
  FUN_008e0400(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0400 @ 008e0400 ////

void __fastcall FUN_008e0400(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d678fc;
  local_4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = &PTR_LAB_00d66f18;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008e0450 @ 008e0450 ////

undefined4 * __thiscall FUN_008e0450(void *this,char *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_FUN_00d67908;
  local_4 = 0;
  piVar1 = FUN_008f3160(param_1);
  *(int **)((int)this + 4) = piVar1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_008e04f0 @ 008e04f0 ////

undefined4 * __thiscall FUN_008e04f0(void *this,byte param_1)

{
  FUN_008e0510(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0510 @ 008e0510 ////

void __fastcall FUN_008e0510(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cee8b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d67908;
  local_4 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  *param_1 = &PTR_LAB_00d66f18;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_008e0560 @ 008e0560 ////

undefined4 * __thiscall FUN_008e0560(void *this,byte param_1)

{
  FUN_008e0580(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0580 @ 008e0580 ////

void __fastcall FUN_008e0580(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e05c0 @ 008e05c0 ////

undefined4 * __thiscall FUN_008e05c0(void *this,byte param_1)

{
  FUN_008e05e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e05e0 @ 008e05e0 ////

void __fastcall FUN_008e05e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0620 @ 008e0620 ////

undefined4 * __thiscall FUN_008e0620(void *this,byte param_1)

{
  FUN_008e0640(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0640 @ 008e0640 ////

void __fastcall FUN_008e0640(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0650 @ 008e0650 ////

undefined4 * __thiscall FUN_008e0650(void *this,byte param_1)

{
  FUN_008e0670(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0670 @ 008e0670 ////

void __fastcall FUN_008e0670(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0680 @ 008e0680 ////

undefined4 * __thiscall FUN_008e0680(void *this,byte param_1)

{
  FUN_008e06a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e06a0 @ 008e06a0 ////

void __fastcall FUN_008e06a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e06b0 @ 008e06b0 ////

undefined4 * __thiscall FUN_008e06b0(void *this,byte param_1)

{
  FUN_008e06d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e06d0 @ 008e06d0 ////

void __fastcall FUN_008e06d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e06e0 @ 008e06e0 ////

undefined4 * __thiscall FUN_008e06e0(void *this,byte param_1)

{
  FUN_008e0700(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0700 @ 008e0700 ////

void __fastcall FUN_008e0700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0710 @ 008e0710 ////

undefined4 * __thiscall FUN_008e0710(void *this,byte param_1)

{
  FUN_008e0730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0730 @ 008e0730 ////

void __fastcall FUN_008e0730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0740 @ 008e0740 ////

undefined4 * __thiscall FUN_008e0740(void *this,byte param_1)

{
  FUN_008e0760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0760 @ 008e0760 ////

void __fastcall FUN_008e0760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0770 @ 008e0770 ////

undefined4 * __thiscall FUN_008e0770(void *this,byte param_1)

{
  FUN_008e0790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0790 @ 008e0790 ////

void __fastcall FUN_008e0790(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e07a0 @ 008e07a0 ////

undefined4 * __thiscall FUN_008e07a0(void *this,byte param_1)

{
  FUN_008e07c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e07c0 @ 008e07c0 ////

void __fastcall FUN_008e07c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e07d0 @ 008e07d0 ////

undefined4 * __thiscall FUN_008e07d0(void *this,byte param_1)

{
  FUN_008e07f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e07f0 @ 008e07f0 ////

void __fastcall FUN_008e07f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0800 @ 008e0800 ////

undefined4 * __thiscall FUN_008e0800(void *this,byte param_1)

{
  FUN_008e0820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0820 @ 008e0820 ////

void __fastcall FUN_008e0820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0830 @ 008e0830 ////

undefined4 * __thiscall FUN_008e0830(void *this,byte param_1)

{
  FUN_008e0850(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0850 @ 008e0850 ////

void __fastcall FUN_008e0850(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0860 @ 008e0860 ////

undefined4 * __thiscall FUN_008e0860(void *this,byte param_1)

{
  FUN_008e0880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0880 @ 008e0880 ////

void __fastcall FUN_008e0880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0890 @ 008e0890 ////

undefined4 * __thiscall FUN_008e0890(void *this,byte param_1)

{
  FUN_008e08b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e08b0 @ 008e08b0 ////

void __fastcall FUN_008e08b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e08c0 @ 008e08c0 ////

undefined4 * __thiscall FUN_008e08c0(void *this,byte param_1)

{
  FUN_008e08e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e08e0 @ 008e08e0 ////

void __fastcall FUN_008e08e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e08f0 @ 008e08f0 ////

undefined4 * __thiscall FUN_008e08f0(void *this,byte param_1)

{
  FUN_008e0910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0910 @ 008e0910 ////

void __fastcall FUN_008e0910(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0920 @ 008e0920 ////

undefined4 * __thiscall FUN_008e0920(void *this,byte param_1)

{
  FUN_008e0940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0940 @ 008e0940 ////

void __fastcall FUN_008e0940(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0950 @ 008e0950 ////

undefined4 * __thiscall FUN_008e0950(void *this,byte param_1)

{
  FUN_008e0970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0970 @ 008e0970 ////

void __fastcall FUN_008e0970(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0980 @ 008e0980 ////

undefined4 * __thiscall FUN_008e0980(void *this,byte param_1)

{
  FUN_008e09a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e09a0 @ 008e09a0 ////

void __fastcall FUN_008e09a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e09b0 @ 008e09b0 ////

undefined4 * __fastcall FUN_008e09b0(undefined4 *param_1)

{
  FUN_008df5e0(param_1);
  *param_1 = &PTR_FUN_00d67914;
  return param_1;
}


//// FUNCTION FUN_008e09d0 @ 008e09d0 ////

undefined4 * __fastcall FUN_008e09d0(undefined4 *param_1)

{
  FUN_008df5e0(param_1);
  *param_1 = &PTR_FUN_00d67924;
  return param_1;
}


//// FUNCTION FUN_008e09f0 @ 008e09f0 ////

undefined4 * __thiscall FUN_008e09f0(void *this,byte param_1)

{
  FUN_008e0a10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0a10 @ 008e0a10 ////

void __fastcall FUN_008e0a10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0a20 @ 008e0a20 ////

undefined4 * __thiscall FUN_008e0a20(void *this,byte param_1)

{
  FUN_008e0a40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0a40 @ 008e0a40 ////

void __fastcall FUN_008e0a40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0a50 @ 008e0a50 ////

undefined4 * __thiscall FUN_008e0a50(void *this,byte param_1)

{
  FUN_008e0a70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0a70 @ 008e0a70 ////

void __fastcall FUN_008e0a70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0a80 @ 008e0a80 ////

undefined4 * __thiscall FUN_008e0a80(void *this,byte param_1)

{
  FUN_008e0aa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0aa0 @ 008e0aa0 ////

void __fastcall FUN_008e0aa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0ab0 @ 008e0ab0 ////

undefined4 * __thiscall FUN_008e0ab0(void *this,byte param_1)

{
  FUN_008e0ad0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0ad0 @ 008e0ad0 ////

void __fastcall FUN_008e0ad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0ae0 @ 008e0ae0 ////

undefined4 * __thiscall FUN_008e0ae0(void *this,byte param_1)

{
  FUN_008e0b00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e0b00 @ 008e0b00 ////

void __fastcall FUN_008e0b00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e0b10 @ 008e0b10 ////

undefined4 * __fastcall FUN_008e0b10(undefined4 *param_1)

{
  FUN_008dfaa0(param_1);
  *param_1 = &PTR_FUN_00d67934;
  return param_1;
}


//// FUNCTION FUN_008e0b30 @ 008e0b30 ////

undefined4 * __fastcall FUN_008e0b30(undefined4 *param_1)

{
  FUN_008dfaa0(param_1);
  *param_1 = &PTR_FUN_00d67944;
  return param_1;
}


//// FUNCTION FUN_008e0b50 @ 008e0b50 ////

undefined4 * __fastcall FUN_008e0b50(undefined4 *param_1)

{
  FUN_008dfaa0(param_1);
  *param_1 = &PTR_FUN_00d67954;
  return param_1;
}


//// FUNCTION FUN_008e0b70 @ 008e0b70 ////

undefined4 * __fastcall FUN_008e0b70(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67964;
  return param_1;
}


//// FUNCTION FUN_008e0b90 @ 008e0b90 ////

undefined4 * __fastcall FUN_008e0b90(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67970;
  return param_1;
}


//// FUNCTION FUN_008e0bb0 @ 008e0bb0 ////

undefined4 * __fastcall FUN_008e0bb0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d6797c;
  return param_1;
}


//// FUNCTION FUN_008e0bd0 @ 008e0bd0 ////

undefined4 * __fastcall FUN_008e0bd0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67988;
  return param_1;
}


//// FUNCTION FUN_008e0bf0 @ 008e0bf0 ////

undefined4 * __fastcall FUN_008e0bf0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67994;
  return param_1;
}


//// FUNCTION FUN_008e0c10 @ 008e0c10 ////

undefined4 * __fastcall FUN_008e0c10(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679a0;
  return param_1;
}


//// FUNCTION FUN_008e0c30 @ 008e0c30 ////

undefined4 * __fastcall FUN_008e0c30(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679ac;
  return param_1;
}


//// FUNCTION FUN_008e0c50 @ 008e0c50 ////

undefined4 * __fastcall FUN_008e0c50(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679b8;
  return param_1;
}


//// FUNCTION FUN_008e0c70 @ 008e0c70 ////

undefined4 * __fastcall FUN_008e0c70(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679c4;
  return param_1;
}


//// FUNCTION FUN_008e0c90 @ 008e0c90 ////

undefined4 * __fastcall FUN_008e0c90(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679d0;
  return param_1;
}


//// FUNCTION FUN_008e0cb0 @ 008e0cb0 ////

undefined4 * __fastcall FUN_008e0cb0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679dc;
  return param_1;
}


//// FUNCTION FUN_008e0cd0 @ 008e0cd0 ////

undefined4 * __fastcall FUN_008e0cd0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d679e8;
  return param_1;
}


//// FUNCTION FUN_008e0cf0 @ 008e0cf0 ////

undefined4 * __fastcall FUN_008e0cf0(undefined4 *param_1)

{
  FUN_008dfae0(param_1);
  *param_1 = &PTR_FUN_00d679f4;
  return param_1;
}


//// FUNCTION FUN_008e0d40 @ 008e0d40 ////

undefined4 * __fastcall FUN_008e0d40(undefined4 *param_1)

{
  FUN_008dfae0(param_1);
  *param_1 = &PTR_FUN_00d67a04;
  return param_1;
}


//// FUNCTION FUN_008e0d60 @ 008e0d60 ////

undefined4 FUN_008e0d60(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] != 5)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_008e0d90 @ 008e0d90 ////

undefined4 * __fastcall FUN_008e0d90(undefined4 *param_1)

{
  FUN_008dfae0(param_1);
  *param_1 = &PTR_FUN_00d67a14;
  return param_1;
}


//// FUNCTION FUN_008e0db0 @ 008e0db0 ////

undefined4 FUN_008e0db0(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_008e0df0 @ 008e0df0 ////

undefined4 * __fastcall FUN_008e0df0(undefined4 *param_1)

{
  FUN_008dfae0(param_1);
  *param_1 = &PTR_FUN_00d67a24;
  return param_1;
}


//// FUNCTION FUN_008e0e10 @ 008e0e10 ////

bool FUN_008e0e10(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 == '\0') {
        uVar2 = FUN_004cba70((int)param_1);
        if ((char)uVar2 != '\0') {
          iVar3 = FUN_004cba90((int)param_1);
          iVar3 = FUN_004df4b0(iVar3);
          iVar4 = FUN_004df4b0(param_2);
          return iVar3 != iVar4;
        }
      }
    }
  }
  return false;
}


//// FUNCTION FUN_008e0e80 @ 008e0e80 ////

undefined4 * __fastcall FUN_008e0e80(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a34;
  return param_1;
}


//// FUNCTION FUN_008e0ea0 @ 008e0ea0 ////

undefined4 * __fastcall FUN_008e0ea0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a40;
  return param_1;
}


//// FUNCTION FUN_008e0ec0 @ 008e0ec0 ////

undefined4 * __fastcall FUN_008e0ec0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a4c;
  return param_1;
}


//// FUNCTION FUN_008e0ee0 @ 008e0ee0 ////

undefined4 * __fastcall FUN_008e0ee0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a58;
  return param_1;
}


//// FUNCTION FUN_008e0f00 @ 008e0f00 ////

undefined4 * __fastcall FUN_008e0f00(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a64;
  return param_1;
}


//// FUNCTION FUN_008e0f20 @ 008e0f20 ////

undefined4 * __fastcall FUN_008e0f20(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a70;
  return param_1;
}


//// FUNCTION FUN_008e0f40 @ 008e0f40 ////

undefined4 * __fastcall FUN_008e0f40(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a7c;
  return param_1;
}


//// FUNCTION FUN_008e0f60 @ 008e0f60 ////

undefined4 * __fastcall FUN_008e0f60(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a88;
  return param_1;
}


//// FUNCTION FUN_008e0f80 @ 008e0f80 ////

undefined4 * __fastcall FUN_008e0f80(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67a94;
  return param_1;
}


//// FUNCTION FUN_008e0fa0 @ 008e0fa0 ////

undefined4 * __fastcall FUN_008e0fa0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67aa0;
  return param_1;
}


//// FUNCTION FUN_008e0fc0 @ 008e0fc0 ////

undefined4 * __fastcall FUN_008e0fc0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67aac;
  return param_1;
}


//// FUNCTION FUN_008e0fe0 @ 008e0fe0 ////

undefined4 * __fastcall FUN_008e0fe0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67ab8;
  return param_1;
}


//// FUNCTION FUN_008e1000 @ 008e1000 ////

undefined4 * __fastcall FUN_008e1000(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67ac4;
  return param_1;
}


//// FUNCTION FUN_008e1020 @ 008e1020 ////

undefined4 * __fastcall FUN_008e1020(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67ad0;
  return param_1;
}


//// FUNCTION FUN_008e1040 @ 008e1040 ////

undefined4 * __fastcall FUN_008e1040(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67adc;
  return param_1;
}


//// FUNCTION FUN_008e1060 @ 008e1060 ////

undefined4 * __fastcall FUN_008e1060(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67ae8;
  return param_1;
}


//// FUNCTION FUN_008e1080 @ 008e1080 ////

undefined4 * __fastcall FUN_008e1080(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67af4;
  return param_1;
}


//// FUNCTION FUN_008e10a0 @ 008e10a0 ////

undefined4 * __fastcall FUN_008e10a0(undefined4 *param_1)

{
  FUN_008dfb10(param_1);
  *param_1 = &PTR_FUN_00d67b00;
  return param_1;
}


//// FUNCTION FUN_008e10f0 @ 008e10f0 ////

undefined4 * __fastcall FUN_008e10f0(undefined4 *param_1)

{
  FUN_008dfb10(param_1);
  *param_1 = &PTR_FUN_00d67b10;
  return param_1;
}


//// FUNCTION FUN_008e1110 @ 008e1110 ////

undefined4 FUN_008e1110(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] != 5)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_008e1140 @ 008e1140 ////

undefined4 * __fastcall FUN_008e1140(undefined4 *param_1)

{
  FUN_008dfb10(param_1);
  *param_1 = &PTR_FUN_00d67b20;
  return param_1;
}


//// FUNCTION FUN_008e1160 @ 008e1160 ////

undefined4 FUN_008e1160(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_008e11a0 @ 008e11a0 ////

undefined4 * __fastcall FUN_008e11a0(undefined4 *param_1)

{
  FUN_008dfb10(param_1);
  *param_1 = &PTR_FUN_00d67b30;
  return param_1;
}


//// FUNCTION FUN_008e11c0 @ 008e11c0 ////

bool FUN_008e11c0(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 == '\0') {
        uVar2 = FUN_004cba70((int)param_1);
        if ((char)uVar2 != '\0') {
          iVar3 = FUN_004cba90((int)param_1);
          iVar3 = FUN_004df4b0(iVar3);
          iVar4 = FUN_004df4b0(param_2);
          return iVar3 != iVar4;
        }
      }
    }
  }
  return false;
}


//// FUNCTION FUN_008e1230 @ 008e1230 ////

undefined4 * __fastcall FUN_008e1230(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b40;
  return param_1;
}


//// FUNCTION FUN_008e1250 @ 008e1250 ////

undefined4 * __fastcall FUN_008e1250(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b4c;
  return param_1;
}


//// FUNCTION FUN_008e1270 @ 008e1270 ////

undefined4 * __fastcall FUN_008e1270(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b58;
  return param_1;
}


//// FUNCTION FUN_008e1290 @ 008e1290 ////

undefined4 * __fastcall FUN_008e1290(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b64;
  return param_1;
}


//// FUNCTION FUN_008e12b0 @ 008e12b0 ////

undefined4 * __fastcall FUN_008e12b0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b70;
  return param_1;
}


//// FUNCTION FUN_008e12d0 @ 008e12d0 ////

undefined4 * __fastcall FUN_008e12d0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b7c;
  return param_1;
}


//// FUNCTION FUN_008e12f0 @ 008e12f0 ////

undefined4 * __fastcall FUN_008e12f0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b88;
  return param_1;
}


//// FUNCTION FUN_008e1310 @ 008e1310 ////

undefined4 * __fastcall FUN_008e1310(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67b94;
  return param_1;
}


//// FUNCTION FUN_008e1330 @ 008e1330 ////

undefined4 * __fastcall FUN_008e1330(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67ba0;
  return param_1;
}


//// FUNCTION FUN_008e1350 @ 008e1350 ////

undefined4 * __fastcall FUN_008e1350(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bac;
  return param_1;
}


//// FUNCTION FUN_008e1370 @ 008e1370 ////

undefined4 * __fastcall FUN_008e1370(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bb8;
  return param_1;
}


//// FUNCTION FUN_008e1390 @ 008e1390 ////

undefined4 * __fastcall FUN_008e1390(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bc4;
  return param_1;
}


//// FUNCTION FUN_008e13b0 @ 008e13b0 ////

undefined4 * __fastcall FUN_008e13b0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bd0;
  return param_1;
}


//// FUNCTION FUN_008e13d0 @ 008e13d0 ////

undefined4 * __fastcall FUN_008e13d0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bdc;
  return param_1;
}


//// FUNCTION FUN_008e13f0 @ 008e13f0 ////

undefined4 * __fastcall FUN_008e13f0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67be8;
  return param_1;
}


//// FUNCTION FUN_008e1410 @ 008e1410 ////

undefined4 * __fastcall FUN_008e1410(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67bf4;
  return param_1;
}


//// FUNCTION FUN_008e1430 @ 008e1430 ////

undefined4 * __fastcall FUN_008e1430(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c00;
  return param_1;
}


//// FUNCTION FUN_008e1450 @ 008e1450 ////

undefined4 * __fastcall FUN_008e1450(undefined4 *param_1)

{
  FUN_008dfb40(param_1);
  *param_1 = &PTR_FUN_00d67c0c;
  return param_1;
}


//// FUNCTION FUN_008e14a0 @ 008e14a0 ////

undefined4 * __fastcall FUN_008e14a0(undefined4 *param_1)

{
  FUN_008dfb40(param_1);
  *param_1 = &PTR_FUN_00d67c1c;
  return param_1;
}


//// FUNCTION FUN_008e14c0 @ 008e14c0 ////

undefined4 FUN_008e14c0(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] != 5)) {
      return 1;
    }
  }
  return 0;
}


//// FUNCTION FUN_008e14f0 @ 008e14f0 ////

undefined4 * __fastcall FUN_008e14f0(undefined4 *param_1)

{
  FUN_008dfb40(param_1);
  *param_1 = &PTR_FUN_00d67c2c;
  return param_1;
}


//// FUNCTION FUN_008e1510 @ 008e1510 ////

undefined4 FUN_008e1510(int *param_1)

{
  char cVar1;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


//// FUNCTION FUN_008e1550 @ 008e1550 ////

undefined4 * __fastcall FUN_008e1550(undefined4 *param_1)

{
  FUN_008dfb40(param_1);
  *param_1 = &PTR_FUN_00d67c3c;
  return param_1;
}


//// FUNCTION FUN_008e1570 @ 008e1570 ////

bool FUN_008e1570(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x164))();
    if ((cVar1 == '\0') && (param_1[0xae] == 5)) {
      cVar1 = (**(code **)(*param_1 + 0xc4))();
      if (cVar1 == '\0') {
        uVar2 = FUN_004cba70((int)param_1);
        if ((char)uVar2 != '\0') {
          iVar3 = FUN_004cba90((int)param_1);
          iVar3 = FUN_004df4b0(iVar3);
          iVar4 = FUN_004df4b0(param_2);
          return iVar3 != iVar4;
        }
      }
    }
  }
  return false;
}


//// FUNCTION FUN_008e15e0 @ 008e15e0 ////

undefined4 * __fastcall FUN_008e15e0(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c4c;
  return param_1;
}


//// FUNCTION FUN_008e1600 @ 008e1600 ////

undefined4 * __fastcall FUN_008e1600(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c58;
  return param_1;
}


//// FUNCTION FUN_008e1620 @ 008e1620 ////

undefined4 * __fastcall FUN_008e1620(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c64;
  return param_1;
}


//// FUNCTION FUN_008e1640 @ 008e1640 ////

undefined4 * __fastcall FUN_008e1640(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c70;
  return param_1;
}


//// FUNCTION FUN_008e1660 @ 008e1660 ////

undefined4 * __fastcall FUN_008e1660(undefined4 *param_1)

{
  FUN_008dfac0(param_1);
  *param_1 = &PTR_FUN_00d67c7c;
  return param_1;
}


//// FUNCTION FUN_008e1680 @ 008e1680 ////

undefined4 * __thiscall FUN_008e1680(void *this,byte param_1)

{
  FUN_008e16a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e16a0 @ 008e16a0 ////

void __fastcall FUN_008e16a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e16b0 @ 008e16b0 ////

undefined4 * __thiscall FUN_008e16b0(void *this,byte param_1)

{
  FUN_008e16d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e16d0 @ 008e16d0 ////

void __fastcall FUN_008e16d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e16e0 @ 008e16e0 ////

undefined4 * __thiscall FUN_008e16e0(void *this,byte param_1)

{
  FUN_008e1700(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1700 @ 008e1700 ////

void __fastcall FUN_008e1700(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1710 @ 008e1710 ////

undefined4 * __thiscall FUN_008e1710(void *this,byte param_1)

{
  FUN_008e1730(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1730 @ 008e1730 ////

void __fastcall FUN_008e1730(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1740 @ 008e1740 ////

undefined4 * __thiscall FUN_008e1740(void *this,byte param_1)

{
  FUN_008e1760(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1760 @ 008e1760 ////

void __fastcall FUN_008e1760(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1770 @ 008e1770 ////

undefined4 * __thiscall FUN_008e1770(void *this,byte param_1)

{
  FUN_008e1790(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1790 @ 008e1790 ////

void __fastcall FUN_008e1790(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e17a0 @ 008e17a0 ////

undefined4 * __thiscall FUN_008e17a0(void *this,byte param_1)

{
  FUN_008e17c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e17c0 @ 008e17c0 ////

void __fastcall FUN_008e17c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e17d0 @ 008e17d0 ////

undefined4 * __thiscall FUN_008e17d0(void *this,byte param_1)

{
  FUN_008e17f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e17f0 @ 008e17f0 ////

void __fastcall FUN_008e17f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1800 @ 008e1800 ////

undefined4 * __thiscall FUN_008e1800(void *this,byte param_1)

{
  FUN_008e1820(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1820 @ 008e1820 ////

void __fastcall FUN_008e1820(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1830 @ 008e1830 ////

undefined4 * __thiscall FUN_008e1830(void *this,byte param_1)

{
  FUN_008e1850(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1850 @ 008e1850 ////

void __fastcall FUN_008e1850(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1860 @ 008e1860 ////

undefined4 * __thiscall FUN_008e1860(void *this,byte param_1)

{
  FUN_008e1880(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1880 @ 008e1880 ////

void __fastcall FUN_008e1880(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1890 @ 008e1890 ////

undefined4 * __thiscall FUN_008e1890(void *this,byte param_1)

{
  FUN_008e18b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e18b0 @ 008e18b0 ////

void __fastcall FUN_008e18b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e18c0 @ 008e18c0 ////

undefined4 * __thiscall FUN_008e18c0(void *this,byte param_1)

{
  FUN_008e18e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e18e0 @ 008e18e0 ////

void __fastcall FUN_008e18e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e18f0 @ 008e18f0 ////

undefined4 * __thiscall FUN_008e18f0(void *this,byte param_1)

{
  FUN_008e1910(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1910 @ 008e1910 ////

void __fastcall FUN_008e1910(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1920 @ 008e1920 ////

undefined4 * __thiscall FUN_008e1920(void *this,byte param_1)

{
  FUN_008e1940(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1940 @ 008e1940 ////

void __fastcall FUN_008e1940(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1950 @ 008e1950 ////

undefined4 * __thiscall FUN_008e1950(void *this,byte param_1)

{
  FUN_008e1970(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1970 @ 008e1970 ////

void __fastcall FUN_008e1970(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1980 @ 008e1980 ////

undefined4 * __thiscall FUN_008e1980(void *this,byte param_1)

{
  FUN_008e19a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e19a0 @ 008e19a0 ////

void __fastcall FUN_008e19a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e19b0 @ 008e19b0 ////

undefined4 * __thiscall FUN_008e19b0(void *this,byte param_1)

{
  FUN_008e19d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e19d0 @ 008e19d0 ////

void __fastcall FUN_008e19d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e19e0 @ 008e19e0 ////

undefined4 * __thiscall FUN_008e19e0(void *this,byte param_1)

{
  FUN_008e1a00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1a00 @ 008e1a00 ////

void __fastcall FUN_008e1a00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1a10 @ 008e1a10 ////

undefined4 * __thiscall FUN_008e1a10(void *this,byte param_1)

{
  FUN_008e1a30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1a30 @ 008e1a30 ////

void __fastcall FUN_008e1a30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1a40 @ 008e1a40 ////

undefined4 * __thiscall FUN_008e1a40(void *this,byte param_1)

{
  FUN_008e1a60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1a60 @ 008e1a60 ////

void __fastcall FUN_008e1a60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1a70 @ 008e1a70 ////

undefined4 * __thiscall FUN_008e1a70(void *this,byte param_1)

{
  FUN_008e1a90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1a90 @ 008e1a90 ////

void __fastcall FUN_008e1a90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1aa0 @ 008e1aa0 ////

undefined4 * __thiscall FUN_008e1aa0(void *this,byte param_1)

{
  FUN_008e1ac0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1ac0 @ 008e1ac0 ////

void __fastcall FUN_008e1ac0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1ad0 @ 008e1ad0 ////

undefined4 * __thiscall FUN_008e1ad0(void *this,byte param_1)

{
  FUN_008e1af0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1af0 @ 008e1af0 ////

void __fastcall FUN_008e1af0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1b00 @ 008e1b00 ////

undefined4 * __thiscall FUN_008e1b00(void *this,byte param_1)

{
  FUN_008e1b20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1b20 @ 008e1b20 ////

void __fastcall FUN_008e1b20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1b30 @ 008e1b30 ////

undefined4 * __thiscall FUN_008e1b30(void *this,byte param_1)

{
  FUN_008e1b50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1b50 @ 008e1b50 ////

void __fastcall FUN_008e1b50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1b60 @ 008e1b60 ////

undefined4 * __thiscall FUN_008e1b60(void *this,byte param_1)

{
  FUN_008e1b80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1b80 @ 008e1b80 ////

void __fastcall FUN_008e1b80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1b90 @ 008e1b90 ////

undefined4 * __thiscall FUN_008e1b90(void *this,byte param_1)

{
  FUN_008e1bb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1bb0 @ 008e1bb0 ////

void __fastcall FUN_008e1bb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1bc0 @ 008e1bc0 ////

undefined4 * __thiscall FUN_008e1bc0(void *this,byte param_1)

{
  FUN_008e1be0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1be0 @ 008e1be0 ////

void __fastcall FUN_008e1be0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1bf0 @ 008e1bf0 ////

undefined4 * __thiscall FUN_008e1bf0(void *this,byte param_1)

{
  FUN_008e1c10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1c10 @ 008e1c10 ////

void __fastcall FUN_008e1c10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1c20 @ 008e1c20 ////

undefined4 * __thiscall FUN_008e1c20(void *this,byte param_1)

{
  FUN_008e1c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1c40 @ 008e1c40 ////

void __fastcall FUN_008e1c40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1c50 @ 008e1c50 ////

undefined4 * __thiscall FUN_008e1c50(void *this,byte param_1)

{
  FUN_008e1c70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1c70 @ 008e1c70 ////

void __fastcall FUN_008e1c70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1c80 @ 008e1c80 ////

undefined4 * __thiscall FUN_008e1c80(void *this,byte param_1)

{
  FUN_008e1ca0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1ca0 @ 008e1ca0 ////

void __fastcall FUN_008e1ca0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1cb0 @ 008e1cb0 ////

undefined4 * __thiscall FUN_008e1cb0(void *this,byte param_1)

{
  FUN_008e1cd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1cd0 @ 008e1cd0 ////

void __fastcall FUN_008e1cd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1ce0 @ 008e1ce0 ////

undefined4 * __thiscall FUN_008e1ce0(void *this,byte param_1)

{
  FUN_008e1d00(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1d00 @ 008e1d00 ////

void __fastcall FUN_008e1d00(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1d10 @ 008e1d10 ////

undefined4 * __thiscall FUN_008e1d10(void *this,byte param_1)

{
  FUN_008e1d30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1d30 @ 008e1d30 ////

void __fastcall FUN_008e1d30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1d40 @ 008e1d40 ////

undefined4 * __thiscall FUN_008e1d40(void *this,byte param_1)

{
  FUN_008e1d60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1d60 @ 008e1d60 ////

void __fastcall FUN_008e1d60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1d70 @ 008e1d70 ////

undefined4 * __thiscall FUN_008e1d70(void *this,byte param_1)

{
  FUN_008e1d90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1d90 @ 008e1d90 ////

void __fastcall FUN_008e1d90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1da0 @ 008e1da0 ////

undefined4 * __thiscall FUN_008e1da0(void *this,byte param_1)

{
  FUN_008e1dc0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1dc0 @ 008e1dc0 ////

void __fastcall FUN_008e1dc0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1dd0 @ 008e1dd0 ////

undefined4 * __thiscall FUN_008e1dd0(void *this,byte param_1)

{
  FUN_008e1df0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1df0 @ 008e1df0 ////

void __fastcall FUN_008e1df0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1e00 @ 008e1e00 ////

undefined4 * __thiscall FUN_008e1e00(void *this,byte param_1)

{
  FUN_008e1e20(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1e20 @ 008e1e20 ////

void __fastcall FUN_008e1e20(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1e30 @ 008e1e30 ////

undefined4 * __thiscall FUN_008e1e30(void *this,byte param_1)

{
  FUN_008e1e50(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1e50 @ 008e1e50 ////

void __fastcall FUN_008e1e50(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1e60 @ 008e1e60 ////

undefined4 * __thiscall FUN_008e1e60(void *this,byte param_1)

{
  FUN_008e1e80(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1e80 @ 008e1e80 ////

void __fastcall FUN_008e1e80(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1e90 @ 008e1e90 ////

undefined4 * __thiscall FUN_008e1e90(void *this,byte param_1)

{
  FUN_008e1eb0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1eb0 @ 008e1eb0 ////

void __fastcall FUN_008e1eb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1ec0 @ 008e1ec0 ////

undefined4 * __thiscall FUN_008e1ec0(void *this,byte param_1)

{
  FUN_008e1ee0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1ee0 @ 008e1ee0 ////

void __fastcall FUN_008e1ee0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1ef0 @ 008e1ef0 ////

undefined4 * __thiscall FUN_008e1ef0(void *this,byte param_1)

{
  FUN_008e1f10(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1f10 @ 008e1f10 ////

void __fastcall FUN_008e1f10(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1f20 @ 008e1f20 ////

undefined4 * __thiscall FUN_008e1f20(void *this,byte param_1)

{
  FUN_008e1f40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1f40 @ 008e1f40 ////

void __fastcall FUN_008e1f40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1f50 @ 008e1f50 ////

undefined4 * __thiscall FUN_008e1f50(void *this,byte param_1)

{
  FUN_008e1f70(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1f70 @ 008e1f70 ////

void __fastcall FUN_008e1f70(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1f80 @ 008e1f80 ////

undefined4 * __thiscall FUN_008e1f80(void *this,byte param_1)

{
  FUN_008e1fa0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1fa0 @ 008e1fa0 ////

void __fastcall FUN_008e1fa0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1fb0 @ 008e1fb0 ////

undefined4 * __thiscall FUN_008e1fb0(void *this,byte param_1)

{
  FUN_008e1fd0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e1fd0 @ 008e1fd0 ////

void __fastcall FUN_008e1fd0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e1fe0 @ 008e1fe0 ////

undefined4 * __thiscall FUN_008e1fe0(void *this,byte param_1)

{
  FUN_008e2000(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2000 @ 008e2000 ////

void __fastcall FUN_008e2000(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2010 @ 008e2010 ////

undefined4 * __thiscall FUN_008e2010(void *this,byte param_1)

{
  FUN_008e2030(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2030 @ 008e2030 ////

void __fastcall FUN_008e2030(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2040 @ 008e2040 ////

undefined4 * __thiscall FUN_008e2040(void *this,byte param_1)

{
  FUN_008e2060(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2060 @ 008e2060 ////

void __fastcall FUN_008e2060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2070 @ 008e2070 ////

undefined4 * __thiscall FUN_008e2070(void *this,byte param_1)

{
  FUN_008e2090(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2090 @ 008e2090 ////

void __fastcall FUN_008e2090(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e20a0 @ 008e20a0 ////

undefined4 * __thiscall FUN_008e20a0(void *this,byte param_1)

{
  FUN_008e20c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e20c0 @ 008e20c0 ////

void __fastcall FUN_008e20c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e20d0 @ 008e20d0 ////

undefined4 * __thiscall FUN_008e20d0(void *this,byte param_1)

{
  FUN_008e20f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e20f0 @ 008e20f0 ////

void __fastcall FUN_008e20f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2100 @ 008e2100 ////

undefined4 * __thiscall FUN_008e2100(void *this,byte param_1)

{
  FUN_008e2120(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2120 @ 008e2120 ////

void __fastcall FUN_008e2120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2130 @ 008e2130 ////

undefined4 * __thiscall FUN_008e2130(void *this,byte param_1)

{
  FUN_008e2150(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2150 @ 008e2150 ////

void __fastcall FUN_008e2150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2160 @ 008e2160 ////

undefined4 * __thiscall FUN_008e2160(void *this,byte param_1)

{
  FUN_008e2180(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2180 @ 008e2180 ////

void __fastcall FUN_008e2180(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2190 @ 008e2190 ////

undefined4 * __thiscall FUN_008e2190(void *this,byte param_1)

{
  FUN_008e21b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e21b0 @ 008e21b0 ////

void __fastcall FUN_008e21b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e21c0 @ 008e21c0 ////

undefined4 * __thiscall FUN_008e21c0(void *this,byte param_1)

{
  FUN_008e21e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e21e0 @ 008e21e0 ////

void __fastcall FUN_008e21e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e21f0 @ 008e21f0 ////

undefined4 * __thiscall FUN_008e21f0(void *this,byte param_1)

{
  FUN_008e2210(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2210 @ 008e2210 ////

void __fastcall FUN_008e2210(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2220 @ 008e2220 ////

undefined4 * __thiscall FUN_008e2220(void *this,byte param_1)

{
  FUN_008e2240(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2240 @ 008e2240 ////

void __fastcall FUN_008e2240(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2250 @ 008e2250 ////

undefined4 * __thiscall FUN_008e2250(void *this,byte param_1)

{
  FUN_008e2270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2270 @ 008e2270 ////

void __fastcall FUN_008e2270(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2280 @ 008e2280 ////

undefined4 * __thiscall FUN_008e2280(void *this,byte param_1)

{
  FUN_008e22a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e22a0 @ 008e22a0 ////

void __fastcall FUN_008e22a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e22b0 @ 008e22b0 ////

undefined4 * __thiscall FUN_008e22b0(void *this,byte param_1)

{
  FUN_008e22d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e22d0 @ 008e22d0 ////

void __fastcall FUN_008e22d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e22e0 @ 008e22e0 ////

undefined4 * __thiscall FUN_008e22e0(void *this,byte param_1)

{
  FUN_008e2300(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2300 @ 008e2300 ////

void __fastcall FUN_008e2300(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2310 @ 008e2310 ////

undefined4 * __thiscall FUN_008e2310(void *this,byte param_1)

{
  FUN_008e2330(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2330 @ 008e2330 ////

void __fastcall FUN_008e2330(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2340 @ 008e2340 ////

undefined4 * __thiscall FUN_008e2340(void *this,byte param_1)

{
  FUN_008e2360(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2360 @ 008e2360 ////

void __fastcall FUN_008e2360(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2370 @ 008e2370 ////

undefined4 * __thiscall FUN_008e2370(void *this,byte param_1)

{
  FUN_008e2390(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2390 @ 008e2390 ////

void __fastcall FUN_008e2390(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e23a0 @ 008e23a0 ////

undefined4 * __thiscall FUN_008e23a0(void *this,byte param_1)

{
  FUN_008e23c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e23c0 @ 008e23c0 ////

void __fastcall FUN_008e23c0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e23d0 @ 008e23d0 ////

undefined4 * __thiscall FUN_008e23d0(void *this,byte param_1)

{
  FUN_008e23f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e23f0 @ 008e23f0 ////

void __fastcall FUN_008e23f0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2400 @ 008e2400 ////

undefined4 * __thiscall FUN_008e2400(void *this,byte param_1)

{
  FUN_008e2420(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2420 @ 008e2420 ////

void __fastcall FUN_008e2420(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2430 @ 008e2430 ////

undefined4 * __thiscall FUN_008e2430(void *this,byte param_1)

{
  FUN_008e2450(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2450 @ 008e2450 ////

void __fastcall FUN_008e2450(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2460 @ 008e2460 ////

undefined4 * __thiscall FUN_008e2460(void *this,byte param_1)

{
  FUN_008e2480(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2480 @ 008e2480 ////

void __fastcall FUN_008e2480(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2490 @ 008e2490 ////

undefined4 * __thiscall FUN_008e2490(void *this,byte param_1)

{
  FUN_008e24b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e24b0 @ 008e24b0 ////

void __fastcall FUN_008e24b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e24c0 @ 008e24c0 ////

undefined4 * __thiscall FUN_008e24c0(void *this,byte param_1)

{
  FUN_008e24e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e24e0 @ 008e24e0 ////

void __fastcall FUN_008e24e0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e24f0 @ 008e24f0 ////

undefined4 * __thiscall FUN_008e24f0(void *this,byte param_1)

{
  FUN_008e2510(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2510 @ 008e2510 ////

void __fastcall FUN_008e2510(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2520 @ 008e2520 ////

undefined4 * __thiscall FUN_008e2520(void *this,byte param_1)

{
  FUN_008e2540(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2540 @ 008e2540 ////

void __fastcall FUN_008e2540(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


//// FUNCTION FUN_008e2550 @ 008e2550 ////

undefined4 * __thiscall FUN_008e2550(void *this,byte param_1)

{
  FUN_008e2570(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_008e2570 @ 008e2570 ////

void __fastcall FUN_008e2570(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d66f18;
  return;
}


