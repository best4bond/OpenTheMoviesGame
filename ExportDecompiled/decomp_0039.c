//// FUNCTION FUN_00911160 @ 00911160 ////

void __fastcall FUN_00911160(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    FUN_0090df10(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009111d0 @ 009111d0 ////

void __thiscall FUN_009111d0(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  void *local_5c [2];
  uint local_54;
  void *local_3c;
  uint local_34;
  int *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cf0248;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_00910910(local_5c,param_3);
  iVar4 = *(int *)((int)this + 4);
  iVar7 = 0;
  local_8 = 0;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((int)this + 0xc) - iVar4 >> 6;
  }
  uVar8 = CONCAT44(iVar4,iVar2);
  if (param_2 != 0) {
    if (iVar4 != 0) {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (0x3ffffffU - iVar7 < param_2) {
      uVar8 = FUN_009110c0();
    }
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    if (iVar4 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
    }
    if (uVar3 < iVar7 + param_2) {
      if (0x3ffffff - (uVar3 >> 1) < uVar3) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 + (uVar3 >> 1);
      }
      if (iVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)((int)this + 8) - iVar4 >> 6;
      }
      if (uVar3 < iVar7 + param_2) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)this + 8) - iVar4 >> 6;
        }
        uVar3 = iVar4 + param_2;
      }
      piVar5 = operator_new(uVar3 * 0x40);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = piVar5;
      piVar6 = FUN_00910d30(*(undefined4 **)((int)this + 4),param_1,piVar5);
      FUN_00910e30(piVar6,param_2,local_5c);
      FUN_00910d30(param_1,*(undefined4 **)((int)this + 8),piVar6 + param_2 * 0x10);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00911040(puVar1,*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(int **)((int)this + 0xc) = piVar5 + uVar3 * 0x10;
      *(int **)((int)this + 8) = piVar5 + (param_2 + iVar4) * 0x10;
      *(int **)((int)this + 4) = piVar5;
    }
    else {
      local_1c = *(int **)((int)this + 8);
      if ((uint)((int)local_1c - (int)param_1 >> 6) < param_2) {
        FUN_00910d30(param_1,local_1c,param_1 + param_2 * 0x10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00911010(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 6),local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        FUN_00910c00(param_1,(int *)(iVar4 + param_2 * -0x40),local_5c);
      }
      else {
        piVar6 = local_1c + param_2 * -0x10;
        piVar5 = FUN_00910d30(piVar6,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar5;
        FUN_009109a0((int)param_1,(int)piVar6,local_1c);
        FUN_00910c00(param_1,param_1 + param_2 * 0x10,local_5c);
      }
    }
  }
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (0x14 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00911480 @ 00911480 ////

void __thiscall FUN_00911480(void *this,undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0056cc90(*param_1,0x3b,(void *)((int)this + 0x80));
    return;
  }
  if (*(undefined4 **)((int)this + 0x84) != (undefined4 *)0x0) {
    FUN_00405fe0(*(undefined4 **)((int)this + 0x84),*(undefined4 **)((int)this + 0x88));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x84));
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  return;
}


//// FUNCTION FUN_009114f0 @ 009114f0 ////

byte __fastcall FUN_009114f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  bVar3 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x84);
    if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 0x88) - iVar1 >> 5) <= uVar5)) {
      return bVar3;
    }
    if ((iVar1 == 0) || ((uint)(*(int *)(param_1 + 0x88) - iVar1 >> 5) <= uVar5)) break;
    uVar2 = SITT_DebugConsoleCommandDispatch((undefined4 *)(iVar1 + iVar4));
    bVar3 = bVar3 | (byte)uVar2;
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 0x20;
  }
  bVar3 = FUN_0072add0();
  return bVar3;
}


//// FUNCTION FUN_009115c0 @ 009115c0 ////

undefined4 * __fastcall FUN_009115c0(undefined4 *param_1)

{
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf027e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d6b220;
  FUN_0048f010(&stack0x00000004,&local_2c);
  param_1[0x14] = param_1 + 0x17;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x14;
  FUN_004015d0(param_1 + 0x14,local_2c,local_28);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x14;
  param_1[0x24] = param_1 + 0x27;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x14;
  param_1[0x2c] = param_1 + 0x2f;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x14;
  param_1[0x34] = param_1 + 0x37;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x14;
  param_1[0x3c] = param_1 + 0x3f;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0x14;
  param_1[0x44] = param_1 + 0x47;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x14;
  param_1[0x4c] = param_1 + 0x4f;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0x14;
  param_1[0x54] = param_1 + 0x57;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5c] = 3;
  *(undefined1 *)((int)param_1 + 0x17d) = 0xff;
  *(undefined1 *)((int)param_1 + 0x17e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x17f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x17f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x17e) = 0xff;
  *(undefined1 *)((int)param_1 + 0x17d) = 0xff;
  *(undefined1 *)(param_1 + 0x5f) = 0xff;
  *(undefined1 *)((int)param_1 + 0x181) = 0xff;
  *(undefined1 *)((int)param_1 + 0x182) = 0xff;
  *(undefined1 *)((int)param_1 + 0x183) = 0xff;
  *(undefined1 *)((int)param_1 + 0x183) = 0xff;
  *(undefined1 *)((int)param_1 + 0x182) = 0xff;
  *(undefined1 *)((int)param_1 + 0x181) = 0xff;
  *(undefined1 *)(param_1 + 0x60) = 0xff;
  *(undefined1 *)((int)param_1 + 0x185) = 0xff;
  *(undefined1 *)((int)param_1 + 0x186) = 0xff;
  *(undefined1 *)((int)param_1 + 0x187) = 0xff;
  *(undefined1 *)((int)param_1 + 0x187) = 0xff;
  *(undefined1 *)((int)param_1 + 0x186) = 0xff;
  *(undefined1 *)((int)param_1 + 0x185) = 0xff;
  *(undefined1 *)(param_1 + 0x61) = 0xff;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 0x189) = 0;
  *(undefined1 *)((int)param_1 + 0x18a) = 0;
  *(undefined1 *)((int)param_1 + 0x18b) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)((int)param_1 + 0x18d) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009117f0 @ 009117f0 ////

undefined4 * __thiscall FUN_009117f0(void *this,byte param_1)

{
  FUN_00911810(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00911810 @ 00911810 ////

void __fastcall FUN_00911810(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x56]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x54]);
  }
  if (0x14 < (uint)param_1[0x4e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x4c]);
  }
  if (0x14 < (uint)param_1[0x46]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x44]);
  }
  if (0x14 < (uint)param_1[0x3e]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x3c]);
  }
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
  if ((undefined4 *)param_1[0x21] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[0x21],(undefined4 *)param_1[0x22]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x21]);
  }
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_00911070((int)(param_1 + 0x1c));
  if (0x14 < (uint)param_1[0x16]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x14]);
  }
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00911920 @ 00911920 ////

void __thiscall FUN_00911920(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00910e30(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x10;
    return;
  }
  FUN_009111d0(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00911990 @ 00911990 ////

void __thiscall FUN_00911990(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *_Memory;
  int iVar2;
  undefined1 local_5c [4];
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf02a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00911070((int)this + 0x70);
  if (param_1[1] != 0) {
    local_58 = (undefined4 *)0x0;
    local_54 = (undefined4 *)0x0;
    local_50 = 0;
    local_4 = 0;
    FUN_0056cc90(*param_1,0x3b,local_5c);
    param_1 = (undefined4 *)0x0;
    iVar2 = 0;
    _Memory = local_58;
    while (_Memory != (undefined4 *)0x0) {
      puVar1 = _Memory;
      if ((undefined4 *)((int)local_54 - (int)_Memory >> 5) <= param_1) {
        while( true ) {
          if (puVar1 == local_54) {
                    /* WARNING: Subroutine does not return */
            _free(_Memory);
          }
          if (0x14 < (uint)puVar1[2]) break;
          puVar1 = puVar1 + 8;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar1);
      }
      if (*(int *)(iVar2 + 4 + (int)_Memory) != 0) {
        local_4c = local_40;
        local_2c = local_20;
        local_40[0] = 0;
        local_48 = 0;
        local_44 = 0x14;
        local_20[0] = 0;
        local_28 = 0;
        local_24 = 0x14;
        local_4._0_1_ = 1;
        FUN_0056bc50(*(undefined4 *)(iVar2 + (int)_Memory),'+',&local_4c,&local_2c);
        FUN_00911920((void *)((int)this + 0x70),&local_4c);
        local_4 = (uint)local_4._1_3_ << 8;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        _Memory = local_58;
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar2 = iVar2 + 0x20;
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00911b50 @ 00911b50 ////

undefined4 * __fastcall FUN_00911b50(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d6b240;
  return param_1;
}


//// FUNCTION FUN_00911b80 @ 00911b80 ////

undefined4 * __fastcall FUN_00911b80(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d6b268;
  return param_1;
}


//// FUNCTION FUN_00911ba0 @ 00911ba0 ////

void __fastcall FUN_00911ba0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6b268;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00911bc0 @ 00911bc0 ////

undefined4 * __thiscall FUN_00911bc0(void *this,byte param_1)

{
  FUN_00911ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00911c00 @ 00911c00 ////

void __fastcall FUN_00911c00(int param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x178);
    uVar2 = FUN_00990ae0(param_1,param_2);
    *(int *)(param_1 + 0x74) = (int)uVar2 + iVar1;
    return;
  }
  uVar2 = FUN_00990ae0(param_1,param_2);
  *(int *)(param_1 + 0x74) = (int)uVar2;
  return;
}


//// FUNCTION FUN_00911c30 @ 00911c30 ////

undefined4 * __fastcall FUN_00911c30(undefined4 *param_1)

{
  FUN_0053d690(param_1);
  *param_1 = &PTR_FUN_00d6b290;
  return param_1;
}


//// FUNCTION FUN_00911c60 @ 00911c60 ////

float * FUN_00911c60(float *param_1)

{
  FUN_00538ef0(param_1,(float *)&DAT_0104cce0,0.0);
  return param_1;
}


//// FUNCTION FUN_00911cb0 @ 00911cb0 ////

bool __fastcall FUN_00911cb0(int param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  return *(uint *)(param_1 + 0x74) < (uint)uVar1;
}


//// FUNCTION FUN_00911ce0 @ 00911ce0 ////

int __fastcall FUN_00911ce0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_00911e00 @ 00911e00 ////

int * __thiscall FUN_00911e00(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00911e30 @ 00911e30 ////

undefined4 * __cdecl FUN_00911e30(int param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00911ea0 @ 00911ea0 ////

undefined4 * __thiscall FUN_00911ea0(void *this,byte param_1)

{
  FUN_00911ec0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00911ec0 @ 00911ec0 ////

void __fastcall FUN_00911ec0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d2c6a0;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_00911f50 @ 00911f50 ////

ushort __fastcall FUN_00911f50(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = DAT_00e653a8 - 1e-30;
  if (fVar1 >= fVar2) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
      if (iVar3 != 0) {
        iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
        if (*(char *)(iVar3 + 0x188) != '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
  return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}


//// FUNCTION FUN_00911fd0 @ 00911fd0 ////

ushort __fastcall FUN_00911fd0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = DAT_00e653a8 - 1e-30;
  if (fVar1 >= fVar2) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
      if (iVar3 != 0) {
        iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
        if (*(char *)(iVar3 + 0x189) != '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
  return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}


//// FUNCTION FUN_00912050 @ 00912050 ////

ushort __fastcall FUN_00912050(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_1 + 4);
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = DAT_00e653a8 - 1e-30;
  if (fVar1 >= fVar2) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
      if (iVar3 != 0) {
        iVar3 = FUN_008f7650(*(int *)(param_1 + 8));
        if (*(char *)(iVar3 + 0x18a) != '\0') {
          return 1;
        }
      }
    }
    return 0;
  }
  return (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
         (ushort)(fVar1 == fVar2) << 0xe;
}


//// FUNCTION FUN_009120d0 @ 009120d0 ////

void __thiscall FUN_009120d0(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  float10 fVar4;
  
  iVar2 = GlobalStatRegistry_Get();
  pvVar3 = (void *)FUN_008c39a0(iVar2);
  fVar4 = FUN_008f6970(pvVar3,param_1,param_2,*(int **)this);
  *(float *)((int)this + 4) = (float)fVar4;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  (**(code **)(*(int *)((int)this + 0x10) + 4))();
  *(undefined4 *)((int)this + 0x24) = uVar1;
  (*(code *)**(undefined4 **)((int)this + 0x10))();
  uVar1 = *(undefined4 *)(param_3 + 0x2c);
  (**(code **)(*(int *)((int)this + 0x28) + 4))();
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  (*(code *)**(undefined4 **)((int)this + 0x28))();
  uVar1 = *(undefined4 *)(param_3 + 0x44);
  (**(code **)(*(int *)((int)this + 0x40) + 4))();
  *(undefined4 *)((int)this + 0x54) = uVar1;
  (*(code *)**(undefined4 **)((int)this + 0x40))();
  return;
}


//// FUNCTION FUN_00912150 @ 00912150 ////

/* WARNING: Removing unreachable block (ram,0x009121dc) */
/* WARNING: Removing unreachable block (ram,0x009121f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00912150(int param_1,undefined4 param_2,undefined1 *param_3)

{
  uint uVar1;
  float10 fVar2;
  ulonglong uVar3;
  undefined1 local_4;
  
  uVar3 = FUN_00990ae0(param_1,param_2);
  uVar1 = (int)uVar3 + (-10000 - *(int *)(param_1 + 0x520));
  if ((int)uVar1 < 0) {
    local_4 = 0xff;
  }
  else {
    fVar2 = (float10)fcos((float10)(uVar1 % 0x5dc) * (float10)0.00066666666 * (float10)12.566371);
    local_4 = (undefined1)
              (int)ROUND((float)((((float10)_DAT_00e65a60 - (float10)_DAT_00e65a5c) *
                                  (fVar2 + (float10)1.0) * (float10)0.5 + (float10)_DAT_00e65a5c) *
                                (float10)255.0));
  }
  *param_3 = 0xff;
  param_3[1] = 0xff;
  param_3[2] = 0xff;
  param_3[3] = 0xff;
  param_3[3] = local_4;
  param_3[2] = 0xa0;
  param_3[1] = 0;
  *param_3 = 0;
  return;
}


//// FUNCTION FUN_00912210 @ 00912210 ////

undefined4 * FUN_00912210(void)

{
  undefined4 *this;
  char local_14 [4];
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf02bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = operator_new(0x3fc);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    this = FUN_00833290(local_10);
  }
  local_4 = 0xffffffff;
  local_14[3] = 0xff;
  local_14[2] = 0;
  local_14[1] = 0;
  local_14[0] = '\0';
  FUN_00830550(this,8,local_14);
  this[0xd5] = 0x437a0000;
  *(undefined1 *)(this + 0xd6) = 1;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009122a0 @ 009122a0 ////

undefined4 * __thiscall FUN_009122a0(void *this,byte param_1)

{
  FUN_009122c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009122c0 @ 009122c0 ////

void __fastcall FUN_009122c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6b268;
  FUN_0053d4f0(param_1);
  return;
}


//// FUNCTION FUN_009123e0 @ 009123e0 ////

void __cdecl FUN_009123e0(int *param_1,int *param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    (**(code **)(*param_1 + 4))();
    param_1[5] = *(int *)(param_3 + 0x14);
    (**(code **)*param_1)();
  }
  return;
}


//// FUNCTION FUN_00912440 @ 00912440 ////

void __fastcall FUN_00912440(void *param_1)

{
  size_t sVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 extraout_EDX;
  float10 fVar5;
  wchar_t *pwVar6;
  float local_70;
  undefined2 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined2 local_60 [10];
  wchar_t *pwStack_4c;
  size_t sStack_48;
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cf02e0;
  pvStack_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = 0;
  local_68 = 0;
  local_64 = 10;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  sVar1 = FUN_00ace02d(L"<table>");
  FUN_0040cae0(&local_6c,L"<table>",sVar1);
  iVar2 = FUN_0071b2a0();
  if (iVar2 == 0) {
    local_70 = 1024.0;
  }
  else {
    piVar3 = (int *)FUN_0071b2a0();
    fVar5 = (float10)(**(code **)(*piVar3 + 0x10))();
    local_70 = (float)fVar5;
  }
  sVar1 = FUN_00ace02d(L"<tr><td><x7>");
  FUN_0040cae0(&local_6c,L"<tr><td><x7>",sVar1);
  if (1024.0 <= local_70) {
    FUN_0040cae0(&local_6c,*(wchar_t **)((int)param_1 + 0x4e0),*(size_t *)((int)param_1 + 0x4e4));
    sVar1 = FUN_00ace02d(L"</x7></td></tr>");
    pwVar6 = L"</x7></td></tr>";
  }
  else {
    sVar1 = FUN_00ace02d(L"<font size=10>");
    FUN_0040cae0(&local_6c,L"<font size=10>",sVar1);
    FUN_0040cae0(&local_6c,*(wchar_t **)((int)param_1 + 0x4e0),*(size_t *)((int)param_1 + 0x4e4));
    sVar1 = FUN_00ace02d(L"</font></x7></td></tr>");
    pwVar6 = L"</font></x7></td></tr>";
  }
  FUN_0040cae0(&local_6c,pwVar6,sVar1);
  if (*(int *)((int)param_1 + 0x504) != 0) {
    FUN_00912150((int)param_1,extraout_EDX,(undefined1 *)&local_70);
    puVar4 = FUN_00568ac0(apvStack_2c,&local_70);
    local_4._0_1_ = 1;
    FUN_00568790(&pwStack_4c,puVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    sVar1 = FUN_00ace02d(L"<tr><td align=center><x8><font color=");
    FUN_0040cae0(&local_6c,L"<tr><td align=center><x8><font color=",sVar1);
    FUN_0040cae0(&local_6c,pwStack_4c,sStack_48);
    sVar1 = FUN_00ace02d((short *)&DAT_00d19724);
    FUN_0040cae0(&local_6c,L">",sVar1);
    FUN_0040cae0(&local_6c,*(wchar_t **)((int)param_1 + 0x500),*(size_t *)((int)param_1 + 0x504));
    sVar1 = FUN_00ace02d(L"</font></x8></td></tr>");
    FUN_0040cae0(&local_6c,L"</font></x8></td></tr>",sVar1);
    if (10 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_4c);
    }
  }
  sVar1 = FUN_00ace02d(L"</table>");
  FUN_0040cae0(&local_6c,L"</table>",sVar1);
  FUN_008dbf40(param_1,&local_6c);
  if (10 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009126a0 @ 009126a0 ////

void __fastcall FUN_009126a0(int *param_1)

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


//// FUNCTION FUN_00912760 @ 00912760 ////

undefined4 * __thiscall FUN_00912760(void *this,byte param_1)

{
  FUN_0065e310(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00912780 @ 00912780 ////

undefined ** __fastcall FUN_00912780(int param_1)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  bool bVar3;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined ***local_c;
  undefined4 local_4;
  
  bVar3 = *(int *)(param_1 + 0x58) == 0;
  if (bVar3) {
    pppuVar2 = &local_18;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    local_18 = &PTR_FUN_00d172b0;
    local_c = pppuVar2;
  }
  else {
    pppuVar2 = (undefined ***)(param_1 + 0x10);
  }
  ppuVar1 = pppuVar2[5];
  if (bVar3) {
    FUN_00417a10(&local_18);
  }
  return ppuVar1;
}


//// FUNCTION FUN_009127d0 @ 009127d0 ////

undefined4 * __thiscall FUN_009127d0(void *this,int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *this_00;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfVar12;
  float local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0374;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)(param_1 + 0xd0);
  iVar6 = 0xb;
  bVar9 = true;
  pcVar7 = (char *)*puVar4;
  pcVar8 = "build_menu";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    pfVar12 = &local_14;
    ExceptionList = &local_c;
    pvVar5 = (void *)FUN_00642110();
    FUN_00642350(pvVar5,pfVar12);
    fVar10 = FUN_00990e30(-100.0,-50.0);
    fVar11 = FUN_00990e30(50.0,100.0);
    puVar4 = operator_new(0x60);
    local_4 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      FUN_0053d690(puVar4);
      *puVar4 = &PTR_FUN_00d2c6fc;
      puVar4[0x14] = local_14;
      puVar4[0x15] = local_10;
      puVar4[0x16] = (float)fVar11;
      puVar4[0x17] = (float)fVar10;
      ExceptionList = local_c;
      return puVar4;
    }
    ExceptionList = local_c;
    return (undefined4 *)0x0;
  }
  iVar6 = 6;
  bVar9 = true;
  pcVar7 = (char *)*puVar4;
  pcVar8 = "mouse";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (bVar9);
  if (bVar9) {
    ExceptionList = &local_c;
    puVar4 = operator_new(0x58);
    local_4 = 1;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4 = FUN_008f8840(puVar4);
      ExceptionList = local_c;
      return puVar4;
    }
  }
  else {
    piVar1 = *(int **)((int)this + 0x24);
    ExceptionList = &local_c;
    if ((piVar1 == (int *)0x0) ||
       (ExceptionList = &local_c, iVar6 = FUN_004bd060(puVar4,&DAT_00d68458), iVar6 != 0)) {
      piVar2 = *(int **)((int)this + 0x54);
      if ((piVar2 == (int *)0x0) || (iVar6 = FUN_004bd060(puVar4,&DAT_00d68450), iVar6 != 0)) {
        piVar3 = *(int **)((int)this + 0x3c);
        if ((piVar3 == (int *)0x0) || (iVar6 = FUN_004bd060(puVar4,(byte *)"hover"), iVar6 != 0)) {
          if ((piVar1 != (int *)0x0) &&
             (iVar6 = FUN_004bd060(puVar4,(byte *)"self_hud"), iVar6 == 0)) {
            puVar4 = FUN_008f9f20(piVar1,'\x01');
            ExceptionList = local_c;
            return puVar4;
          }
          if ((piVar2 != (int *)0x0) &&
             (iVar6 = FUN_004bd060(puVar4,(byte *)"held_hud"), iVar6 == 0)) {
            puVar4 = FUN_008f9f20(piVar2,'\x01');
            ExceptionList = local_c;
            return puVar4;
          }
          if ((piVar3 != (int *)0x0) &&
             (iVar6 = FUN_004bd060(puVar4,(byte *)"hover_hud"), iVar6 == 0)) {
            puVar4 = FUN_008f9f20(piVar3,'\x01');
            ExceptionList = local_c;
            return puVar4;
          }
          if (param_2 != (int *)0x0) {
            iVar6 = FUN_004bd060(puVar4,(byte *)"sitt_item");
            if (iVar6 == 0) {
              puVar4 = FUN_008f9790(param_2);
              ExceptionList = local_c;
              return puVar4;
            }
            iVar6 = FUN_004bd060(puVar4,(byte *)"sitt_item_world");
            if (iVar6 == 0) {
              puVar4 = FUN_008fa1f0((int)piVar1,param_2);
              ExceptionList = local_c;
              return puVar4;
            }
            iVar6 = FUN_004bd060(puVar4,(byte *)"sitt_item_hud");
            if (iVar6 == 0) {
              puVar4 = FUN_008f9d60((int)piVar1,param_2);
              ExceptionList = local_c;
              return puVar4;
            }
          }
          iVar6 = FUN_004bd060(puVar4,(byte *)"cinema");
          if (iVar6 == 0) {
            pvVar5 = FUN_00a1ebe0();
            if (pvVar5 == (void *)0x0) {
              ExceptionList = local_c;
              return (undefined4 *)0x0;
            }
            this_00 = operator_new(0x5c);
            local_4 = 5;
            if (this_00 != (void *)0x0) {
              puVar4 = FUN_008f8a90(this_00,pvVar5);
              ExceptionList = local_c;
              return puVar4;
            }
          }
          else {
            iVar6 = FUN_004bd060(puVar4,(byte *)"rosette");
            if (iVar6 == 0) {
              if (DAT_0104e094 == 0) {
                ExceptionList = local_c;
                return (undefined4 *)0x0;
              }
              pvVar5 = operator_new(0x68);
              local_4 = 6;
              if (pvVar5 != (void *)0x0) {
                puVar4 = FUN_005fb120(pvVar5,DAT_0104e094);
                ExceptionList = local_c;
                return puVar4;
              }
            }
            else {
              iVar6 = FUN_004bd060(puVar4,(byte *)"stunt_icon");
              if (iVar6 == 0) {
                if (DAT_0104e838 == 0) {
                  ExceptionList = local_c;
                  return (undefined4 *)0x0;
                }
                pvVar5 = operator_new(0x68);
                local_4 = 7;
                if (pvVar5 != (void *)0x0) {
                  puVar4 = FUN_005fb120(pvVar5,DAT_0104e838);
                  ExceptionList = local_c;
                  return puVar4;
                }
              }
              else {
                iVar6 = FUN_004bd060(puVar4,(byte *)"hud_card_buttons");
                if (iVar6 == 0) {
                  iVar6 = FUN_007e5510();
                  if (iVar6 == 0) {
                    ExceptionList = local_c;
                    return (undefined4 *)0x0;
                  }
                  pvVar5 = operator_new(0x68);
                  local_4 = 8;
                  if (pvVar5 != (void *)0x0) {
                    iVar6 = FUN_007e5510();
                    puVar4 = FUN_005fb120(pvVar5,iVar6);
                    ExceptionList = local_c;
                    return puVar4;
                  }
                }
                else {
                  iVar6 = FUN_004bd060(puVar4,(byte *)"timeline");
                  if (iVar6 == 0) {
                    pvVar5 = operator_new(0x68);
                    local_4 = 9;
                    if (pvVar5 != (void *)0x0) {
                      iVar6 = FUN_007955a0();
                      iVar6 = FUN_00795f60(iVar6);
                      puVar4 = FUN_005fb120(pvVar5,iVar6);
                      ExceptionList = local_c;
                      return puVar4;
                    }
                  }
                  else {
                    iVar6 = FUN_004bd060(puVar4,(byte *)"timeline_menu_button");
                    if (iVar6 == 0) {
                      pvVar5 = operator_new(0x68);
                      local_4 = 10;
                      if (pvVar5 != (void *)0x0) {
                        iVar6 = FUN_007955a0();
                        puVar4 = FUN_005fb120(pvVar5,*(int *)(iVar6 + 0x43c));
                        ExceptionList = local_c;
                        return puVar4;
                      }
                    }
                    else {
                      puVar4 = operator_new(0x50);
                      local_4 = 0xb;
                      if (puVar4 != (undefined4 *)0x0) {
                        puVar4 = FUN_00911b50(puVar4);
                        ExceptionList = local_c;
                        return puVar4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pvVar5 = operator_new(0x70);
          local_4 = 4;
          if (pvVar5 != (void *)0x0) {
            puVar4 = FUN_008f9fa0(pvVar5,*(int *)((int)this + 0x3c));
            ExceptionList = local_c;
            return puVar4;
          }
        }
      }
      else {
        pvVar5 = operator_new(0x70);
        local_4 = 3;
        if (pvVar5 != (void *)0x0) {
          puVar4 = FUN_008f9fa0(pvVar5,*(int *)((int)this + 0x54));
          ExceptionList = local_c;
          return puVar4;
        }
      }
    }
    else {
      pvVar5 = operator_new(0x70);
      local_4 = 2;
      if (pvVar5 != (void *)0x0) {
        puVar4 = FUN_008f9fa0(pvVar5,*(int *)((int)this + 0x24));
        ExceptionList = local_c;
        return puVar4;
      }
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00912ca0 @ 00912ca0 ////

undefined4 * __thiscall FUN_00912ca0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf03a4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_008dbe40(this);
  *(undefined ***)this = &PTR_FUN_00d6b47c;
  *(undefined4 *)((int)this + 0x4e0) = (undefined2 *)((int)this + 0x4ec);
  *(undefined2 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4e4) = 0;
  *(undefined4 *)((int)this + 0x4e8) = 10;
  local_4 = 0;
  FUN_004036d0((undefined4 *)((int)this + 0x4e0),(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x500) = (undefined2 *)((int)this + 0x50c);
  *(undefined2 *)((int)this + 0x50c) = 0;
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x508) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x500),(wchar_t *)*param_2,param_2[1]);
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)((int)this + 0x520) = (int)uVar4;
  puVar3 = FUN_00912210();
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x12] = puVar3[0x12] + 1;
  }
  puVar2 = *(undefined4 **)((int)this + 0x4bc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 **)((int)this + 0x4bc) = puVar3;
  *(undefined4 *)((int)this + 0x114) = DAT_00e5f220;
  *(undefined4 *)((int)this + 0x118) = DAT_00e5f224;
  FUN_008d56d0(this,0);
  *(undefined1 *)((int)this + 0x4ac) = 1;
  FUN_00912440(this);
  piVar1 = puVar3 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*puVar3)(1);
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00912dc0 @ 00912dc0 ////

undefined4 * __thiscall FUN_00912dc0(void *this,byte param_1)

{
  FUN_00912de0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00912de0 @ 00912de0 ////

void __fastcall FUN_00912de0(undefined4 *param_1)

{
  if (10 < (uint)param_1[0x142]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x140]);
  }
  if (10 < (uint)param_1[0x13a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x138]);
  }
  FUN_008dbeb0(param_1);
  return;
}


//// FUNCTION FUN_00912e20 @ 00912e20 ////

void __fastcall FUN_00912e20(void *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00990ae0(param_1,param_2);
  if (*(int *)((int)param_1 + 0x520) + 10000U < (uint)uVar1) {
    FUN_00912440(param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00912e50 @ 00912e50 ////

void __fastcall FUN_00912e50(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x50);
      pvVar3 = (void *)GlobalStatRegistry_Get();
      FUN_008cfd60(pvVar3,puVar2);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x50);
      pvVar3 = (void *)GlobalStatRegistry_Get();
      FUN_008cfd80(pvVar3,puVar2);
    }
    FUN_008dcf70(*(void **)(param_1 + 0x6c),(undefined4 *)0x0);
    uVar5 = 0;
    FUN_008d5650(*(int *)(param_1 + 0x6c));
    uVar4 = 0;
    FUN_008d5670(*(int *)(param_1 + 0x6c));
    (**(code **)(**(int **)(param_1 + 0x6c) + 0xc))(0x3f000000,uVar4,uVar5);
    puVar2 = *(undefined4 **)(param_1 + 0x6c);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


//// FUNCTION FUN_00912ee0 @ 00912ee0 ////

void __fastcall FUN_00912ee0(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  byte local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x50);
    pvVar2 = (void *)GlobalStatRegistry_Get();
    FUN_008cfda0(pvVar2,puVar1);
  }
  FUN_00912e50(param_1);
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  local_20 = 0xffffffff;
  local_24 = FUN_009b01a0("UI_BUBBLE_BURST");
  puVar7 = &DAT_00d17518;
  iVar6 = 0;
  pbVar5 = local_28;
  iVar4 = 2;
  pvVar2 = (void *)FUN_004f3b20();
  FUN_004f3270(pvVar2,iVar4,pbVar5,iVar6,puVar7);
  uVar3 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  *(int *)(param_1 + 0x78) = (int)uVar3;
  return;
}


//// FUNCTION FUN_00912f70 @ 00912f70 ////

undefined4 * __thiscall FUN_00912f70(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_0053d690(this);
  *(undefined ***)this = &PTR_FUN_00d6b4d0;
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


//// FUNCTION FUN_00913060 @ 00913060 ////

undefined4 __thiscall FUN_00913060(void *this,void *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *this_00;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf03d1;
  local_c = ExceptionList;
  if (param_1 == (void *)0x0) {
    ExceptionList = &local_c;
    pvVar3 = operator_new(0x68);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = FUN_0094e470(pvVar3,(int)param_3);
    }
    local_4 = 0xffffffff;
  }
  else {
    ExceptionList = &local_c;
    puVar2 = FUN_00910b20(param_1,param_3,param_2);
  }
  pvVar3 = (void *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(char *)((int)param_1 + 0x18c) == '\0') && (param_2 != (int *)0x0)) {
      pvVar3 = operator_new(0x68);
      local_4 = 2;
      if (pvVar3 == (void *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_00912f70(pvVar3,(int)param_2);
      }
    }
    else {
      puVar4 = operator_new(0x50);
      local_4 = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        FUN_0053d690(puVar4);
        *puVar4 = &PTR_FUN_00d6b290;
      }
    }
    local_4 = 0xffffffff;
    this_00 = (void *)FUN_0094f580((int)puVar4,(int)puVar2);
    pvVar3 = this_00;
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        pvVar3 = (void *)(**(code **)*puVar4)(1);
      }
    }
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      pvVar3 = (void *)(**(code **)*puVar2)(1);
    }
    if (this_00 != (void *)0x0) {
      if (1.0 <= *(float *)((int)this + 4)) {
        param_3 = (int *)0x3f800000;
      }
      else {
        param_3 = *(int **)((int)this + 4);
      }
      FUN_00948870(this_00,(float)param_3);
      *(undefined4 *)((int)this_00 + 0x124) = *(undefined4 *)((int)param_1 + 0x17c);
      *(int *)((int)this_00 + 0x48) = *(int *)((int)this_00 + 0x48) + 1;
      puVar2 = *(undefined4 **)((int)this + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        piVar1 = puVar2 + 0x12;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *(void **)((int)this + 0x58) = this_00;
      pvVar3 = (void *)GlobalStatRegistry_Get();
      uVar5 = FUN_008d00a0(pvVar3,this);
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar3 & 0xffffff00;
}


//// FUNCTION FUN_00913210 @ 00913210 ////

void __fastcall FUN_00913210(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 extraout_EDX;
  int iVar3;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar3 = param_1;
    this = (void *)GlobalStatRegistry_Get();
    FUN_008c9ba0(this,iVar3);
    FUN_0094f290(DAT_010506b0,extraout_EDX,*(int *)(param_1 + 0x58));
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}


//// FUNCTION FUN_009132a0 @ 009132a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_009132a0(void *this,void *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf041d;
  local_c = ExceptionList;
  uVar3 = CONCAT22((short)((uint)ExceptionList >> 0x10),
                   (ushort)(_DAT_00e5f208 < 0.0) << 8 | (ushort)NAN(_DAT_00e5f208) << 10 |
                   (ushort)(_DAT_00e5f208 == 0.0) << 0xe);
  if ((_DAT_00e5f208 == 0.0) ||
     ((ExceptionList = &local_c, DAT_00f87b04 != 0 &&
      (ExceptionList = &local_c, uVar3 = FUN_00423320(DAT_00f87b04), uVar3 == 3)))) {
    ExceptionList = local_c;
    return uVar3 & 0xffffff00;
  }
  if (*(int *)((int)param_1 + 0x174) != 0) {
    puVar6 = (undefined4 *)((int)param_1 + 0x50);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    uVar3 = FUN_008c9860(pvVar4,puVar6);
    if (*(uint *)((int)param_1 + 0x174) <= uVar3) goto LAB_00913325;
  }
  piVar5 = FUN_009127d0(this,(int)param_1,param_2);
  uVar3 = 0;
  if (piVar5 != (int *)0x0) {
    pvVar4 = operator_new(0x524);
    bVar10 = pvVar4 == (void *)0x0;
    local_4 = 0;
    if (bVar10) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_00910550(param_1,local_2c);
      local_4 = CONCAT31(local_4._1_3_,1);
      puVar7 = FUN_009104f0(param_1,local_4c);
      local_4 = 2;
      puVar6 = FUN_00912ca0(pvVar4,puVar7,puVar6);
    }
    if ((!bVar10) && (10 < local_44)) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c[0]);
    }
    local_4 = 0xffffffff;
    if ((!bVar10) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    puVar6[0x45] = *(undefined4 *)((int)param_1 + 0x180);
    puVar6[0x46] = *(undefined4 *)((int)param_1 + 0x184);
    cVar2 = (**(code **)(*piVar5 + 0x18))();
    puVar7 = puVar6;
    if (cVar2 == '\0') {
      iVar8 = FUN_0071b2a0();
      pvVar4 = (void *)FUN_0071b920(iVar8);
    }
    else {
      iVar8 = FUN_0071b2a0();
      pvVar4 = (void *)FUN_0071b910(iVar8);
    }
    FUN_00640700(pvVar4,puVar7);
    puVar6[0x12] = puVar6[0x12] + 1;
    puVar7 = *(undefined4 **)((int)this + 0x6c);
    if (puVar7 != (undefined4 *)0x0) {
      piVar1 = puVar7 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar7)(1);
      }
    }
    *(undefined4 **)((int)this + 0x6c) = puVar6;
    piVar1 = puVar6 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar6)(1);
    }
    cVar2 = (**(code **)(*piVar5 + 0x14))();
    if (cVar2 != '\0') {
      *(undefined1 *)(*(int *)((int)this + 0x6c) + 0xb5) = 1;
    }
    FUN_008dcf70(*(void **)((int)this + 0x6c),piVar5);
    puVar6 = operator_new(0xc);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &PTR_LAB_00d6b2c0;
      puVar6[1] = this;
      puVar6[2] = &DAT_00911bf0;
    }
    FUN_008d5650(*(int *)((int)this + 0x6c));
    puVar6 = operator_new(0xc);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = &PTR_LAB_00d6b2c0;
      puVar6[1] = this;
      puVar6[2] = FUN_00912ee0;
    }
    FUN_008d5670(*(int *)((int)this + 0x6c));
    puVar6 = (undefined4 *)((int)param_1 + 0x50);
    pvVar4 = (void *)GlobalStatRegistry_Get();
    uVar9 = FUN_008cfd40(pvVar4,puVar6);
    ExceptionList = pvStack_14;
    return CONCAT31((int3)((uint)uVar9 >> 8),1);
  }
LAB_00913325:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_00913510 @ 00913510 ////

undefined4 * __thiscall FUN_00913510(void *this,byte param_1)

{
  FUN_00913530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00913530 @ 00913530 ////

void __fastcall FUN_00913530(undefined4 *param_1)

{
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


//// FUNCTION FUN_009135a0 @ 009135a0 ////

void __cdecl FUN_009135a0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_LAB_00d3420c;
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


//// FUNCTION FUN_00913610 @ 00913610 ////

void __cdecl FUN_00913610(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_LAB_00d3420c;
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


//// FUNCTION FUN_00913760 @ 00913760 ////

undefined4 * FUN_00913760(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00913610(param_1,param_2,param_3);
  return param_1 + param_2 * 6;
}


//// FUNCTION FUN_00913790 @ 00913790 ////

void FUN_00913790(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    FUN_0065e310(param_1);
  }
  return;
}


//// FUNCTION FUN_009137c0 @ 009137c0 ////

void FUN_009137c0(void)

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
  puStack_8 = &LAB_00cf0438;
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


//// FUNCTION FUN_00913880 @ 00913880 ////

void __fastcall FUN_00913880(int param_1)

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
    FUN_0065e310(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_009138d0 @ 009138d0 ////

void __thiscall FUN_009138d0(void *this,int *param_1,uint param_2,int param_3)

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
  
  puStack_c = &LAB_00cf0458;
  local_10 = ExceptionList;
  local_28 = &local_34;
  uVar7 = 0;
  local_20 = *(int *)(param_3 + 0x14);
  local_14 = &stack0xffffffc0;
  local_30 = 0;
  local_2c = (int *)0x0;
  local_34 = &PTR_LAB_00d3420c;
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
      FUN_009137c0();
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
        iVar3 = FUN_00911ce0((int)this);
        uVar7 = iVar3 + param_2;
      }
      puVar4 = operator_new(uVar7 * 0x18);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = puVar4;
      puVar5 = (undefined4 *)FUN_009135a0(*(int *)((int)this + 4),(int)param_1,puVar4);
      FUN_00913610(puVar5,param_2,(int)&local_34);
      FUN_009135a0((int)param_1,*(int *)((int)this + 8),puVar5 + param_2 * 6);
      puVar5 = *(undefined4 **)((int)this + 4);
      if (puVar5 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - (int)puVar5) / 0x18;
      }
      if (puVar5 != (undefined4 *)0x0) {
        FUN_00913790(puVar5,*(undefined4 **)((int)this + 8));
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
        FUN_009135a0((int)param_1,(int)puVar5,param_1 + param_2 * 6);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_00913760(*(undefined4 **)((int)this + 8),
                     param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1) / 0x18,
                     (int)&local_34);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0x18;
        *(int *)((int)this + 8) = iVar3;
        local_8 = 0;
        FUN_009123e0(param_1,(int *)(iVar3 + param_2 * -0x18),(int)&local_34);
      }
      else {
        uVar6 = FUN_009135a0((int)(puVar5 + param_2 * -6),(int)puVar5,puVar5);
        *(undefined4 *)((int)this + 8) = uVar6;
        FUN_00911e30((int)param_1,(int)(puVar5 + param_2 * -6),puVar5);
        FUN_009123e0(param_1,param_1 + param_2 * 6,(int)&local_34);
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


//// FUNCTION FUN_00913c30 @ 00913c30 ////

void __thiscall FUN_00913c30(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x18 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x18;
      goto LAB_00913c75;
    }
  }
  iVar1 = 0;
LAB_00913c75:
  FUN_009138d0(this,param_2,1,param_3);
  *param_1 = *(int *)((int)this + 4) + iVar1 * 0x18;
  return;
}


//// FUNCTION FUN_00913ca0 @ 00913ca0 ////

void __thiscall FUN_00913ca0(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 **)((int)this + 0x1c) = (undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = &PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 **)((int)this + 0x34) = (undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x28) = &PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 **)((int)this + 0x4c) = (undefined4 *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x40) = &PTR_FUN_00d172b0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined1 *)((int)this + 0x70) = 1;
  return;
}


//// FUNCTION FUN_00913d40 @ 00913d40 ////

void __fastcall FUN_00913d40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((*(int *)(param_1 + 0x60) != 0) &&
     ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18 != 0)) {
    iVar3 = param_1;
    this = (void *)GlobalStatRegistry_Get();
    FUN_008c9b40(this,iVar3);
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar3 = 0;
    for (uVar4 = 0;
        (*(int *)(param_1 + 0x60) != 0 &&
        (uVar4 < (uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18)));
        uVar4 = uVar4 + 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar3 + 0x14);
      if (iVar1 != 0) {
        FUN_0094f280(iVar1);
      }
      iVar3 = iVar3 + 0x18;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x60);
    if (puVar5 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_1 + 100);
      for (; puVar5 != puVar2; puVar5 = puVar5 + 6) {
        FUN_0065e310(puVar5);
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(param_1 + 0x60));
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}


//// FUNCTION FUN_00913e10 @ 00913e10 ////

void __fastcall FUN_00913e10(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 extraout_EDX;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + 0x50);
    pvVar3 = (void *)GlobalStatRegistry_Get();
    FUN_008cfcf0(pvVar3,puVar2);
  }
  FUN_00913d40(param_1);
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar4 = param_1;
    pvVar3 = (void *)GlobalStatRegistry_Get();
    FUN_008c9ba0(pvVar3,iVar4);
    FUN_0094f290(DAT_010506b0,extraout_EDX,*(int *)(param_1 + 0x58));
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_00912e50(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}


//// FUNCTION FUN_00913e80 @ 00913e80 ////

void __thiscall FUN_00913e80(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x18) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x18))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00913610(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 6;
    return;
  }
  FUN_00913c30(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00913f10 @ 00913f10 ////

void __fastcall FUN_00913f10(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf04f2;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  FUN_00913e10((int)param_1);
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
  }
  puVar2 = (undefined4 *)param_1[0x1b];
  local_4._0_1_ = 4;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x1b] = 0;
  FUN_00913880((int)(param_1 + 0x17));
  puVar2 = (undefined4 *)param_1[0x16];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[0x16] = 0;
  param_1[0x10] = (int)&PTR_FUN_00d172b0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    *(int *)param_1[0x12] = param_1[0x11];
  }
  if (param_1[0x11] != 0) {
    *(int *)(param_1[0x11] + 4) = param_1[0x12];
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    *(int *)param_1[0x12] = param_1[0x11];
  }
  if (param_1[0x11] != 0) {
    *(int *)(param_1[0x11] + 4) = param_1[0x12];
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = (int)&PTR_FUN_00d172b0;
  if ((int *)param_1[0xc] != (int *)0x0) {
    *(int *)param_1[0xc] = param_1[0xb];
  }
  if (param_1[0xb] != 0) {
    *(int *)(param_1[0xb] + 4) = param_1[0xc];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  if ((int *)param_1[0xc] != (int *)0x0) {
    *(int *)param_1[0xc] = param_1[0xb];
  }
  if (param_1[0xb] != 0) {
    *(int *)(param_1[0xb] + 4) = param_1[0xc];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = (int)&PTR_FUN_00d172b0;
  if ((int *)param_1[6] != (int *)0x0) {
    *(int *)param_1[6] = param_1[5];
  }
  if (param_1[5] != 0) {
    *(int *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  if ((int *)param_1[6] != (int *)0x0) {
    *(int *)param_1[6] = param_1[5];
  }
  if (param_1[5] != 0) {
    *(int *)(param_1[5] + 4) = param_1[6];
  }
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00914070 @ 00914070 ////

void __fastcall FUN_00914070(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  FUN_00913e10(param_1);
  (**(code **)(*(int *)(param_1 + 0x10) + 4))();
  *(undefined4 *)(param_1 + 0x24) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x10))();
  (**(code **)(*(int *)(param_1 + 0x28) + 4))();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x28))();
  (**(code **)(*(int *)(param_1 + 0x40) + 4))();
  *(undefined4 *)(param_1 + 0x54) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x40))();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_00913880(param_1 + 0x5c);
  puVar2 = *(undefined4 **)(param_1 + 0x6c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}


//// FUNCTION FUN_00914110 @ 00914110 ////

undefined4 __thiscall FUN_00914110(void *this,void *param_1)

{
  undefined *****pppppuVar1;
  undefined ******ppppppuVar2;
  void *this_00;
  undefined4 uVar3;
  uint uVar4;
  undefined *****local_28;
  undefined **local_24;
  undefined *****local_20;
  undefined ******local_1c;
  undefined ***local_18;
  undefined ******local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0508;
  local_c = ExceptionList;
  if (1.0 <= *(float *)((int)this + 4)) {
    local_28 = (undefined *****)0x3f800000;
  }
  else {
    local_28 = *(undefined ******)((int)this + 4);
  }
  ExceptionList = &local_c;
  for (uVar4 = 0;
      (*(int *)((int)param_1 + 0x74) != 0 &&
      (uVar4 < (uint)(*(int *)((int)param_1 + 0x78) - *(int *)((int)param_1 + 0x74) >> 6)));
      uVar4 = uVar4 + 1) {
    ppppppuVar2 = FUN_00910ac0(param_1,uVar4,(float)local_28);
    if (ppppppuVar2 != (undefined ******)0x0) {
      if (0.0 <= (float)local_28) {
        pppppuVar1 = local_28;
        if (1.0 < (float)local_28) {
          pppppuVar1 = (undefined *****)0x3f800000;
        }
      }
      else {
        pppppuVar1 = (undefined *****)0x0;
      }
      local_18 = &local_24;
      local_1c = ppppppuVar2 + 6;
      ppppppuVar2[0x19] = pppppuVar1;
      local_24 = &PTR_LAB_00d3420c;
      local_20 = *local_1c;
      (*local_1c)[1] = (undefined ****)&local_20;
      *local_1c = (undefined *****)&local_20;
      local_4 = 0;
      local_10 = ppppppuVar2;
      FUN_00913e80((void *)((int)this + 0x5c),(int)&local_24);
      local_4 = 0xffffffff;
      local_24 = &PTR_LAB_00d3420c;
      if (local_1c != (undefined ******)0x0) {
        *local_1c = local_20;
      }
      if (local_20 != (undefined *****)0x0) {
        local_20[1] = (undefined ****)local_1c;
      }
      local_10 = (undefined ******)0x0;
      local_20 = (undefined *****)0x0;
      local_1c = (undefined ******)0x0;
    }
  }
  if ((*(int *)((int)this + 0x60) != 0) &&
     ((*(int *)((int)this + 100) - *(int *)((int)this + 0x60)) / 0x18 != 0)) {
    this_00 = (void *)GlobalStatRegistry_Get();
    uVar3 = FUN_008d0000(this_00,this);
    ExceptionList = local_c;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_009142b0 @ 009142b0 ////

void __thiscall FUN_009142b0(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 extraout_EDX;
  float fVar11;
  char *pcVar12;
  undefined4 *puVar13;
  
  if (*(int *)((int)this + 8) == 0) {
    return;
  }
  pvVar6 = (void *)FUN_008f7650(*(int *)((int)this + 8));
  if (pvVar6 == (void *)0x0) {
    return;
  }
  uVar7 = FUN_0090df40((int)pvVar6);
  uVar8 = FUN_0090df70((int)pvVar6);
  bVar2 = FUN_0090dfa0((int)pvVar6);
  bVar3 = FUN_0090dfb0((int)pvVar6);
  cVar1 = *(char *)((int)pvVar6 + 0x18d);
  if ((char)uVar7 != '\0') {
    fVar11 = *(float *)((int)this + 4);
    pvVar9 = (void *)GlobalStatRegistry_Get();
    cVar4 = FUN_008c8a30(pvVar9,fVar11);
    if (cVar4 == '\0') {
      return;
    }
  }
  if ((char)uVar8 != '\0') {
    fVar11 = *(float *)((int)this + 4);
    pvVar9 = (void *)GlobalStatRegistry_Get();
    cVar4 = FUN_008c8a50(pvVar9,fVar11);
    if (cVar4 == '\0') {
      return;
    }
  }
  bVar5 = FUN_009114f0((int)pvVar6);
  if ((char)uVar7 != '\0') {
    uVar7 = FUN_00914110(this,pvVar6);
    bVar5 = bVar5 | (byte)uVar7;
  }
  if ((char)uVar8 != '\0') {
    uVar7 = FUN_00913060(this,pvVar6,*(int **)((int)this + 0x54),param_1);
    bVar5 = bVar5 | (byte)uVar7;
  }
  if (bVar2) {
    if ((bVar3) && (cVar1 != '\0')) {
      uVar7 = FUN_009132a0(this,pvVar6,param_3);
      if ((char)uVar7 != '\0') {
        pcVar12 = *(char **)((int)pvVar6 + 0x130);
        pvVar9 = (void *)GlobalStatRegistry_Get();
        FUN_008c6b30(pvVar9,pcVar12);
        bVar5 = 1;
      }
      goto LAB_00914401;
    }
    uVar7 = FUN_009132a0(this,pvVar6,param_3);
    bVar5 = bVar5 | (byte)uVar7;
    if (!bVar3) goto LAB_00914401;
    pcVar12 = *(char **)((int)pvVar6 + 0x130);
  }
  else {
    if (!bVar3) goto LAB_00914401;
    pcVar12 = *(char **)((int)pvVar6 + 0x130);
  }
  pvVar9 = (void *)GlobalStatRegistry_Get();
  uVar10 = FUN_008c6b30(pvVar9,pcVar12);
  bVar5 = bVar5 | (byte)uVar10;
LAB_00914401:
  bVar2 = FUN_0090dfc0((int)pvVar6);
  if (bVar2) {
    FUN_0090e2a0((int)pvVar6);
  }
  else if (bVar5 == 0) {
    return;
  }
  puVar13 = (undefined4 *)((int)pvVar6 + 0x50);
  pvVar9 = (void *)GlobalStatRegistry_Get();
  FUN_008cfcb0(pvVar9,puVar13);
  *(void **)((int)this + 0xc) = pvVar6;
  FUN_00911c00((int)this,extraout_EDX);
  return;
}


//// FUNCTION FUN_00914440 @ 00914440 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_00914440(void *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  uint extraout_ECX;
  uint uVar3;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar4;
  
  if (*(int *)((int)param_1 + 0xc) != 0) {
    uVar3 = 0;
    if ((*(int *)((int)param_1 + 8) == 0) ||
       (iVar2 = FUN_008f7650(*(int *)((int)param_1 + 8)), uVar3 = extraout_ECX,
       param_2 = extraout_EDX, iVar2 == *(int *)((int)param_1 + 0xc))) {
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      uVar3 = CONCAT31((int3)(extraout_ECX >> 8),1);
    }
    if (((*(float *)((int)param_1 + 4) <= 0.0) || (*(char *)((int)param_1 + 0x70) == '\0')) ||
       ((char)uVar3 != '\0')) {
      uVar4 = FUN_00990ae0(uVar3,param_2);
      if (*(uint *)((int)param_1 + 0x74) < (uint)uVar4) {
        FUN_00913e10((int)param_1);
        return;
      }
    }
    else {
      FUN_00911c00((int)param_1,param_2);
      bVar1 = FUN_0090dfa0(*(int *)((int)param_1 + 0xc));
      if (((bVar1) && (*(int *)((int)param_1 + 0x6c) == 0)) &&
         (uVar4 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00),
         (uint)(*(int *)((int)param_1 + 0x78) + _DAT_00e65a04) < (uint)uVar4)) {
        FUN_009132a0(param_1,*(void **)((int)param_1 + 0xc),param_5);
        return;
      }
    }
    return;
  }
  if (*(float *)((int)param_1 + 4) <= 0.0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x70) == '\0') {
    return;
  }
  FUN_009142b0(param_1,param_3,param_4,param_5);
  return;
}


//// FUNCTION FUN_009145b0 @ 009145b0 ////

void __fastcall FUN_009145b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0 &&
      (uVar2 < (uint)(*(int *)(param_1 + 0x24) - iVar1 >> 2))); uVar2 = uVar2 + 1) {
    FUN_00914070(*(int *)(iVar1 + uVar2 * 4));
  }
  return;
}


//// FUNCTION FUN_009145f0 @ 009145f0 ////

void __thiscall FUN_009145f0(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2d) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  *(undefined1 *)((int)this + 0x2f) = 0;
  for (uVar5 = 0;
      (iVar3 = *(int *)((int)this + 0x20), iVar3 != 0 &&
      (uVar5 < (uint)(*(int *)((int)this + 0x24) - iVar3 >> 2))); uVar5 = uVar5 + 1) {
    FUN_009120d0(*(void **)(iVar3 + uVar5 * 4),param_1,*(undefined4 **)((int)this + 0x14),param_2);
  }
  for (uVar5 = 0;
      (iVar3 = *(int *)((int)this + 0x20), iVar3 != 0 &&
      (uVar5 < (uint)(*(int *)((int)this + 0x24) - iVar3 >> 2))); uVar5 = uVar5 + 1) {
    iVar1 = uVar5 * 4;
    FUN_00914440(*(void **)(iVar3 + iVar1),*(undefined4 *)((int)this + 0x14),
                 (int *)*(undefined4 *)((int)this + 0x14),param_2,(int *)0x0);
    uVar2 = FUN_00911f50(*(int *)(*(int *)((int)this + 0x20) + iVar1));
    *(byte *)((int)this + 0x2c) = *(byte *)((int)this + 0x2c) | (byte)uVar2;
    uVar2 = FUN_00911fd0(*(int *)(*(int *)((int)this + 0x20) + iVar1));
    *(byte *)((int)this + 0x2d) = *(byte *)((int)this + 0x2d) | (byte)uVar2;
    uVar2 = FUN_00912050(*(int *)(*(int *)((int)this + 0x20) + iVar1));
    *(byte *)((int)this + 0x2e) = *(byte *)((int)this + 0x2e) | (byte)uVar2;
  }
  iVar3 = FUN_00ace790(*(int **)((int)this + 0x14),0,&TM::TMInWorld::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    uVar4 = FUN_005d1a10(iVar3);
    *(char *)((int)this + 0x2f) = (char)uVar4;
  }
  return;
}


//// FUNCTION FUN_00914720 @ 00914720 ////

void __fastcall FUN_00914720(int param_1)

{
  int iVar1;
  int *_Memory;
  void *pvVar2;
  uint uVar3;
  
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_1 + 0x20), iVar1 != 0 &&
      (uVar3 < (uint)(*(int *)(param_1 + 0x24) - iVar1 >> 2))); uVar3 = uVar3 + 1) {
    _Memory = *(int **)(iVar1 + uVar3 * 4);
    if (_Memory != (int *)0x0) {
      FUN_00913f10(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (*(void **)(param_1 + 0x20) != *(void **)(param_1 + 0x24)) {
    pvVar2 = _memmove(*(void **)(param_1 + 0x20),*(void **)(param_1 + 0x24),0);
    *(void **)(param_1 + 0x24) = pvVar2;
  }
  return;
}


//// FUNCTION FUN_009147b0 @ 009147b0 ////

void __fastcall FUN_009147b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf053e;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_00914720((int)param_1);
  if ((void *)param_1[8] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar2 = (undefined4 *)param_1[6];
  local_4 = local_4 & 0xffffff00;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  param_1[6] = 0;
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
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00914870 @ 00914870 ////

void __thiscall FUN_00914870(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_008c59c0(this,param_2);
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar2 != puVar1) {
    uVar3 = FUN_00441060(param_2,puVar2 + 3);
    if ((char)uVar3 == '\0') {
      *param_1 = (int)puVar2;
      return;
    }
  }
  *param_1 = (int)puVar1;
  return;
}


//// FUNCTION FUN_009148d0 @ 009148d0 ////

uint __thiscall FUN_009148d0(void *this,uint param_1,int *param_2)

{
  undefined1 *local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_34 [20];
  char *local_20;
  uint local_1c;
  uint local_18;
  
  FUN_0048f010(&param_1,&local_20);
  local_40 = local_34;
  local_34[0] = 0;
  local_3c = 0;
  local_38 = 0x14;
  FUN_004015d0(&local_40,local_20,local_1c);
  FUN_00914870((void *)((int)this + 0x70),(int *)&param_1,&local_40);
  if (0x14 < local_38) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (param_1 != *(uint *)((int)this + 0x74)) {
    *param_2 = param_1 + 0x2c;
    return CONCAT31((int3)(param_1 + 0x2c >> 8),1);
  }
  return param_1 & 0xffffff00;
}


//// FUNCTION FUN_00914970 @ 00914970 ////

void __fastcall FUN_00914970(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d172b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  return;
}


//// FUNCTION FUN_009149d0 @ 009149d0 ////

void __thiscall FUN_009149d0(void *this,undefined4 param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf057b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x7c);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    param_1 = 0;
  }
  else {
    puVar2 = operator_new(0x24);
    if (puVar2 == (undefined4 *)0x0) {
      param_1 = FUN_00913ca0(this_00,0);
    }
    else {
      puVar2 = FUN_008c78f0(puVar2);
      param_1 = FUN_00913ca0(this_00,puVar2);
    }
  }
  iVar1 = *(int *)((int)this + 0x20);
  local_4 = 0xffffffff;
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 0x24) - iVar1 >> 2) <
      (uint)(*(int *)((int)this + 0x28) - iVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 0x24);
    *puVar2 = param_1;
    *(undefined4 **)((int)this + 0x24) = puVar2 + 1;
    ExceptionList = local_c;
    return;
  }
  FUN_008cbc20((void *)((int)this + 0x1c),*(undefined4 **)((int)this + 0x24),1,&param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00914ac0 @ 00914ac0 ////

undefined4 * __thiscall FUN_00914ac0(void *this,void *param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf05ae;
  pvStack_c = ExceptionList;
  piVar1 = (int *)((int)this + 4);
  ExceptionList = &pvStack_c;
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d172b0;
  *(undefined4 **)((int)this + 0x14) = param_3;
  if (param_3 != (undefined4 *)0x0) {
    piVar4 = param_3 + 6;
    *(int **)((int)this + 8) = piVar4;
    *piVar1 = *piVar4;
    *(int **)(*piVar4 + 4) = piVar1;
    *piVar4 = (int)piVar1;
  }
  local_4 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_1 != (void *)0x0) {
    *(int *)((int)param_1 + 0x48) = *(int *)((int)param_1 + 0x48) + 1;
    puVar2 = *(undefined4 **)((int)this + 0x18);
    if (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)();
      }
    }
  }
  *(void **)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  param_3 = (undefined4 *)&stack0xffffffdc;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar3 = FUN_009148d0(param_1,param_2,(int *)&param_3);
  if ((char)uVar3 != '\0') {
    puVar2 = (undefined4 *)param_3[1];
    param_3 = (undefined4 *)*puVar2;
    while (param_3 != puVar2) {
      FUN_009149d0(this,param_3[3]);
      FUN_0048edd0((int *)&param_3);
    }
  }
  ExceptionList = pvStack_c;
  return this;
}


//// FUNCTION FUN_00914bb0 @ 00914bb0 ////

void __fastcall FUN_00914bb0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00914bf0 @ 00914bf0 ////

void FUN_00914bf0(void)

{
  return;
}


//// FUNCTION CActivateRoom_Constructor @ 00914c00 ////

undefined4 * __fastcall CActivateRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf05c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6b51c;
  param_1[0x19] = &PTR_LAB_00d6b4fc;
  FUN_0093b350(param_1,10);
  FUN_0093b340(param_1,8);
  FUN_0093b330(param_1,5);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00914ca0 @ 00914ca0 ////

undefined4 * __thiscall FUN_00914ca0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00914cd0 @ 00914cd0 ////

void __thiscall FUN_00914cd0(void *this,int *param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_c = *(undefined4 *)((int)this + 0x1f0);
    local_8 = *(undefined4 *)((int)this + 500);
    local_4 = 0x3f800000;
    (**(code **)(*param_1 + 0xac))(&local_c);
  }
  return;
}


//// FUNCTION FUN_00914d40 @ 00914d40 ////

void __fastcall FUN_00914d40(int *param_1)

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
  puStack_8 = &LAB_00cf05e8;
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


//// FUNCTION FUN_00915140 @ 00915140 ////

/* WARNING: Removing unreachable block (ram,0x009151db) */

void __thiscall FUN_00915140(void *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char acStack_24 [6];
  undefined1 uStack_1e;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0648;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_2 + 0x44))(param_3);
  FUN_005ade60((int)param_2);
  (**(code **)(*param_2 + 0x4c))();
  acStack_24[0] = '\0';
  _strncpy(acStack_24,"actors",6);
  uStack_1e = 0;
  puStack_8 = (undefined1 *)0x0;
  iVar1 = FUN_00938a70(*(void **)((int)this + 0xc0),(undefined4 *)&stack0xffffffd0);
  puStack_8 = (undefined1 *)0xffffffff;
  if ((iVar1 != 0) &&
     (puVar2 = *(undefined4 **)(iVar1 + 0x90), puVar2 != *(undefined4 **)(iVar1 + 0x94))) {
    do {
      FUN_00931d40((void *)*puVar2,'\x01');
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(iVar1 + 0x94));
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION CActivateRoom_OnProjectDropped @ 00915230 ////

void __thiscall CActivateRoom_OnProjectDropped(void *this,int *param_1)

{
  char cVar1;
  int *piVar2;
  void *this_00;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0676;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    ExceptionList = local_c;
    return;
  }
  this_00 = (void *)FUN_005d1940((int)piVar2);
  if (this_00 == (void *)0x0) goto switchD_00915331_default;
  if (*(int *)((int)this + 0xc0) != 0) {
    FUN_005d1980(piVar2,*(undefined4 *)(*(int *)((int)this + 0xc0) + 0x24c));
  }
  pvVar3 = operator_new(0x160);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = CastingPerkPip_Constructor(pvVar3,0,piVar2,1);
  }
  local_4 = 0xffffffff;
  FUN_00956840(DAT_010507c0,piVar4);
  pvVar3 = operator_new(0x160);
  local_4 = 1;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = CastingPerkPip_Constructor(pvVar3,3,piVar2,1);
  }
  local_4 = 0xffffffff;
  FUN_00956840(DAT_010507c0,piVar4);
  piVar4 = (int *)FUN_005b22a0((int)this_00);
  uVar5 = (**(code **)(*piVar4 + 0x24))();
  switch(uVar5) {
  case 2:
  case 3:
    piVar4 = (int *)FUN_005b22a0((int)this_00);
    cVar1 = (**(code **)(*piVar4 + 0x28))();
    if (((cVar1 == '\0') ||
        (pvVar3 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0),
        pvVar3 == (void *)0x0)) ||
       (iVar6 = CFacilityPreProduction_GetOccupyingRoom((int)pvVar3), iVar6 != 0))
    goto switchD_00915331_default;
    CFacilityPreProduction_SetOccupyingRoom(pvVar3,this_00);
    piVar4 = FUN_005addd0((int)this_00);
    FUN_005b22b0(this_00,piVar4);
    break;
  case 4:
    pvVar3 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                  &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                  &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if ((pvVar3 == (void *)0x0) ||
       (iVar6 = CFacilityPreProduction_GetOccupyingRoom((int)pvVar3), iVar6 != 0))
    goto switchD_00915331_default;
    TMRoom_OnObjectDropped(this,param_1);
    FUN_00914cd0(this,piVar2,(int)pvVar3);
    CFacilityPreProduction_SetOccupyingRoom(pvVar3,this_00);
    FUN_005b5840(this_00,'\0');
    goto LAB_0091548c;
  case 5:
  case 6:
    pvVar3 = (void *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                  &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                  &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if ((pvVar3 == (void *)0x0) ||
       (iVar6 = CFacilityPreProduction_GetOccupyingRoom((int)pvVar3), iVar6 != 0))
    goto switchD_00915331_default;
    if (*(undefined4 **)((int)this_00 + 0xa0) != (undefined4 *)0x0) {
      FUN_00401440(*(undefined4 **)((int)this_00 + 0xa0));
      FUN_004d6600((void *)((int)this_00 + 0x8c),0);
    }
    CFacilityPreProduction_SetOccupyingRoom(pvVar3,this_00);
    piVar4 = FUN_005addd0((int)this_00);
    FUN_005b22b0(this_00,piVar4);
    break;
  default:
    goto switchD_00915331_default;
  }
  TMRoom_OnObjectDropped(this,param_1);
  FUN_00914cd0(this,piVar2,(int)pvVar3);
LAB_0091548c:
  iVar9 = 0;
  pTVar8 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
  pTVar7 = &TM::CPhaseBase::RTTI_Type_Descriptor;
  iVar6 = 0;
  piVar2 = (int *)FUN_005b22a0((int)this_00);
  piVar2 = (int *)FUN_00ace790(piVar2,iVar6,pTVar7,pTVar8,iVar9);
  if (piVar2 != (int *)0x0) {
    FUN_00915140(this,1,piVar2,pvVar3);
  }
switchD_00915331_default:
  if (*(int *)((int)this + 0xc0) != 0) {
    *(undefined1 *)(*(int *)((int)this + 0xc0) + 0x256) = 1;
    piVar2 = (int *)FUN_005b22a0((int)this_00);
    iVar6 = (**(code **)(*piVar2 + 0x24))();
    if (iVar6 != 4) {
      FUN_00932560(0);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00915550 @ 00915550 ////

void FUN_00915550(void)

{
  return;
}


//// FUNCTION CAdvanceRoom_Constructor @ 00915560 ////

undefined4 * __fastcall CAdvanceRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6b604;
  param_1[0x19] = &PTR_LAB_00d6b5e0;
  FUN_0093b350(param_1,10);
  FUN_0093b340(param_1,8);
  FUN_0093b330(param_1,5);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009155e0 @ 009155e0 ////

undefined4 * __thiscall FUN_009155e0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00915610 @ 00915610 ////

void __fastcall FUN_00915610(int *param_1)

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
  puStack_8 = &LAB_00cf06a8;
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


//// FUNCTION CAdvanceRoom_OnProjectDropped @ 009156e0 ////

void __thiscall CAdvanceRoom_OnProjectDropped(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  void *pvVar6;
  void *apvStack_98 [2];
  uint uStack_90;
  void *apvStack_78 [2];
  uint uStack_70;
  void *apvStack_58 [2];
  uint uStack_50;
  void *apvStack_38 [2];
  uint uStack_30;
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf06e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    iVar3 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if (iVar3 != 0) {
      iVar3 = CFacilityPreProduction_GetOccupyingRoom(iVar3);
      iVar4 = FUN_005d1940(iVar2);
      if (iVar3 != iVar4) {
        ExceptionList = local_c;
        return;
      }
    }
    iVar2 = FUN_005d1940(iVar2);
    if (iVar2 != 0) {
      piVar5 = (int *)FUN_005b22a0(iVar2);
      cVar1 = (**(code **)(*piVar5 + 0x28))();
      if (cVar1 != '\0') {
        piVar5 = (int *)FUN_005b22a0(iVar2);
        iVar3 = (**(code **)(*piVar5 + 0x24))();
        if (iVar3 == 4) {
          FUN_00470a70(DAT_0104917c,iVar2,0x80000acf,0,0);
          if (*(int *)((int)this + 0xc0) != 0) {
            FUN_00401de0(apvStack_98,"crew",0xffffffff);
            uStack_4 = 0;
            pvVar6 = (void *)FUN_00938a70(*(void **)((int)this + 0xc0),apvStack_98);
            uStack_4 = 0xffffffff;
            if (0x14 < uStack_90) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_98[0]);
            }
            if (pvVar6 != (void *)0x0) {
              FUN_0093b2e0(pvVar6,0);
              FUN_0093e410(pvVar6,0);
            }
            FUN_00401de0(apvStack_78,"extras",0xffffffff);
            uStack_4 = 1;
            pvVar6 = (void *)FUN_00938a70(*(void **)((int)this + 0xc0),apvStack_78);
            uStack_4 = 0xffffffff;
            if (0x14 < uStack_70) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_78[0]);
            }
            if (pvVar6 != (void *)0x0) {
              FUN_0093b2e0(pvVar6,0);
              FUN_0093e410(pvVar6,0);
            }
            FUN_00401de0(apvStack_58,"leads",0xffffffff);
            uStack_4 = 2;
            pvVar6 = (void *)FUN_00938a70(*(void **)((int)this + 0xc0),apvStack_58);
            uStack_4 = 0xffffffff;
            if (0x14 < uStack_50) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_58[0]);
            }
            if (pvVar6 != (void *)0x0) {
              FUN_0093e410(pvVar6,0);
            }
            FUN_00401de0(apvStack_38,"director",0xffffffff);
            uStack_4 = 3;
            pvVar6 = (void *)FUN_00938a70(*(void **)((int)this + 0xc0),apvStack_38);
            uStack_4 = 0xffffffff;
            if (0x14 < uStack_30) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_38[0]);
            }
            if (pvVar6 != (void *)0x0) {
              FUN_0093e410(pvVar6,0);
            }
          }
          (**(code **)(*param_1 + 0x34))(auStack_18);
          (**(code **)(*param_1 + 0xac))(&stack0xffffff58);
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00915b30 @ 00915b30 ////

void __fastcall FUN_00915b30(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00915b60 @ 00915b60 ////

void FUN_00915b60(void)

{
  return;
}


//// FUNCTION CArchiveRoom_OnProjectDropped @ 00915ba0 ////

void __thiscall CArchiveRoom_OnProjectDropped(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  void *this_01;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0726;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (((iVar1 != 0) && (param_1 != (int *)0x0)) && (*(int *)((int)this + 0x270) == 0)) {
    TMRoom_RegisterOccupant(this,param_1);
    (**(code **)(*(int *)((int)this + 0x25c) + 4))();
    *(int **)((int)this + 0x270) = param_1;
    (*(code *)**(undefined4 **)((int)this + 0x25c))();
    *(undefined4 *)((int)this + 600) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    *(undefined1 *)(*(int *)((int)this + 0x270) + 0x15d) = 1;
    (**(code **)(*param_1 + 0x34))();
    (**(code **)(*param_1 + 0xac))();
    *(undefined1 *)(iVar1 + 0x240) = 0;
    this_00 = operator_new(0x80);
    iStack_4 = 0;
    if (this_00 == (void *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      this_01 = operator_new(100);
      iStack_4._0_1_ = 1;
      if (this_01 != (void *)0x0) {
        puVar3 = (undefined4 *)&DAT_00e54eec;
        puVar2 = (undefined4 *)FUN_00703700(this,auStack_18);
        FUN_005e22c0(this_01,puVar2,puVar3);
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      puVar2 = FUN_005e3530(this_00,"ROOM_ARCHIVE_PROGRESS");
    }
    *(undefined4 **)((int)this + 0x274) = puVar2;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00915d00 @ 00915d00 ////

void __fastcall FUN_00915d00(int param_1)

{
  int *_Memory;
  
  (**(code **)(*(int *)(param_1 + 0x25c) + 4))();
  *(undefined4 *)(param_1 + 0x270) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x25c))();
  _Memory = *(int **)(param_1 + 0x274);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  return;
}


//// FUNCTION FUN_00915d50 @ 00915d50 ////

void __fastcall FUN_00915d50(int *param_1)

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
  puStack_8 = &LAB_00cf0738;
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


//// FUNCTION CArchiveRoom_OnGenericRemoved @ 00916050 ////

void __fastcall CArchiveRoom_OnGenericRemoved(int param_1)

{
  int *_Memory;
  
  (**(code **)(*(int *)(param_1 + 0x25c) + 4))();
  *(undefined4 *)(param_1 + 0x270) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x25c))();
  _Memory = *(int **)(param_1 + 0x274);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  return;
}


//// FUNCTION FUN_009161e0 @ 009161e0 ////

void __fastcall FUN_009161e0(int param_1)

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
  puStack_8 = &LAB_00cf07a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ArchiveRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x16;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
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
  uVar3 = FUN_0098b490("TickAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 500),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\ArchiveRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    DAT_010581d4 = 0x17;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1f8));
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
  uVar3 = FUN_0098b490("PArchiveObject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1f8));
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CArchiveRoom_Constructor @ 009163f0 ////

undefined4 * __fastcall CArchiveRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf07c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6b764;
  param_1[0x19] = &PTR_LAB_00d6b744;
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x97;
  param_1[0x97] = &PTR_FUN_00d23630;
  param_1[0x9c] = 0;
  local_4 = 1;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  param_1[0x96] = 0;
  param_1[0x9d] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00916490 @ 00916490 ////

undefined4 * __thiscall FUN_00916490(void *this,byte param_1)

{
  FUN_009164b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009164b0 @ 009164b0 ////

void __fastcall FUN_009164b0(undefined4 *param_1)

{
  param_1[0x97] = &PTR_FUN_00d23630;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  TMRoom_Destructor(param_1);
  return;
}


//// FUNCTION FUN_00916530 @ 00916530 ////

void __fastcall FUN_00916530(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00916560 @ 00916560 ////

void FUN_00916560(void)

{
  return;
}


//// FUNCTION FUN_009165f0 @ 009165f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_009165f0(int param_1)

{
  float fVar1;
  float fVar2;
  void *this;
  void *this_00;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf07e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((*(int *)(param_1 + 0x18) == 0) &&
      (ExceptionList = &local_c, *(char *)(param_1 + 0x20) == '\0')) &&
     (ExceptionList = &local_c, *(int *)(param_1 + 0x14) != 0)) {
    ExceptionList = &local_c;
    this = operator_new(0x80);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      this_00 = operator_new(0x70);
      local_4._0_1_ = 1;
      if (this_00 != (void *)0x0) {
        FUN_008f9fa0(this_00,*(int *)(param_1 + 0x14));
      }
      local_4 = (uint)local_4._1_3_ << 8;
      puVar3 = FUN_005e3530(this,"ROOM_AUTO_PROGRESS");
    }
    *(undefined4 **)(param_1 + 0x18) = puVar3;
  }
  local_4 = 0xffffffff;
  fVar1 = (float)*(int *)(DAT_0104cdf4 + 0x3c);
  if (*(int *)(DAT_0104cdf4 + 0x3c) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)*(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x1c) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar1 = (fVar1 - fVar2) / _DAT_00e65af8;
  if (0.0 <= fVar1) {
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  FUN_005e2490(*(void **)(param_1 + 0x18),fVar1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00916730 @ 00916730 ////

void __fastcall FUN_00916730(int *param_1)

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
  puStack_8 = &LAB_00cf07f8;
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


//// FUNCTION FUN_00916940 @ 00916940 ////

void __fastcall FUN_00916940(undefined4 *param_1)

{
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[10],(undefined4 *)param_1[0xb]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
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


//// FUNCTION CAutoWardrobeRoom_ClearSlot @ 009169c0 ////

void __fastcall CAutoWardrobeRoom_ClearSlot(int *param_1)

{
  int *_Memory;
  
  (**(code **)(*param_1 + 4))();
  param_1[5] = 0;
  (**(code **)*param_1)();
  _Memory = (int *)param_1[6];
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    FUN_00405fe0((undefined4 *)param_1[10],(undefined4 *)param_1[0xb]);
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[10]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return;
}


//// FUNCTION FUN_00916a30 @ 00916a30 ////

int * __fastcall FUN_00916a30(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf0843;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (int)param_1;
  *param_1 = (int)&PTR_FUN_00d16954;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_4 = 1;
  CAutoWardrobeRoom_ClearSlot(param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CAutoWardrobeRoom_Constructor @ 00916a90 ////

/* WARNING: Removing unreachable block (ram,0x00916b52) */

undefined4 * __fastcall CAutoWardrobeRoom_Constructor(undefined4 *param_1)

{
  char *_Dest;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0870;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6b86c;
  param_1[0x19] = &PTR_LAB_00d6b84c;
  _eh_vector_constructor_iterator_(param_1 + 0x96,0x34,3,FUN_00916a30,FUN_00916940);
  local_4 = CONCAT31(local_4._1_3_,1);
  _Dest = _malloc(0x20);
  _strncpy(_Dest,"in_room_autowardrobe",0x14);
  _Dest[0x14] = '\0';
  FUN_004015d0(param_1 + 0x41,_Dest,0x14);
                    /* WARNING: Subroutine does not return */
  _free(_Dest);
}


//// FUNCTION FUN_00916ba0 @ 00916ba0 ////

void __fastcall FUN_00916ba0(uint param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  float10 fVar7;
  int iVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iStack_38;
  int local_34;
  uint local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0890;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_30 = param_1;
  TMRoom_Tick(param_1,param_2);
  local_34 = 0;
  piVar6 = (int *)(param_1 + 0x280);
  do {
    if (((piVar6[-5] == 0) || (*(void **)(param_1 + 0x228) == (void *)0x0)) ||
       (iVar2 = FUN_00944e20(*(void **)(param_1 + 0x228),local_34), iVar2 == 0)) {
      (**(code **)(piVar6[-10] + 4))();
      piVar6[-5] = 0;
      (**(code **)piVar6[-10])();
      piVar1 = (int *)piVar6[-4];
      if (piVar1 != (int *)0x0) {
        FUN_005e2f20(piVar1);
                    /* WARNING: Subroutine does not return */
        _free(piVar1);
      }
      piVar6[-4] = 0;
      piVar6[-3] = 0;
      *(undefined1 *)(piVar6 + -2) = 0;
      puVar5 = (undefined4 *)*piVar6;
      if (puVar5 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar5 == (undefined4 *)piVar6[1]) {
                    /* WARNING: Subroutine does not return */
            _free((void *)*piVar6);
          }
          if (0x14 < (uint)puVar5[2]) break;
          puVar5 = puVar5 + 8;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)*puVar5);
      }
      *piVar6 = 0;
      piVar6[1] = 0;
      piVar6[2] = 0;
    }
    else {
      piVar1 = (int *)piVar6[-5];
      FUN_009165f0((int)(piVar6 + -10));
      iVar2 = FUN_00944e20(*(void **)(param_1 + 0x228),local_34);
      if (((*(int *)(iVar2 + 0x2c) != 0) &&
          (iVar2 = *(int *)(*(int *)(iVar2 + 0x2c) + 0x214), iVar2 != 0)) &&
         (fVar7 = FUN_009722e0(iVar2,(byte *)"ai_costume"), (float10)1.0 == fVar7)) {
        uVar3 = FUN_004b5930((int)(piVar6 + -1));
        if ((char)uVar3 == '\0') {
          if (*piVar6 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = piVar6[1] - *piVar6 >> 5;
          }
          iVar2 = FUN_00990d30(0,iVar2 + -1);
          piVar4 = (int *)FUN_00959a40((undefined4 *)(iVar2 * 0x20 + *piVar6));
          iVar2 = piVar1[0x128];
          uVar10 = 0;
          uVar9 = 0;
          iVar8 = 1;
          puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))();
          FUN_004335f0(&iStack_38,puVar5,iVar2,iVar8,uVar9,uVar10);
          uStack_4 = 0;
          (**(code **)(*piVar1 + 0x128))(iStack_38,1);
          FUN_0059bb60(piVar1,iStack_38);
          FUN_0059bba0(piVar1,iStack_38);
          uStack_4 = 0xffffffff;
          FUN_00430830(&iStack_38);
        }
        local_2c = local_20;
        local_20[0] = '\0';
        local_28 = 0;
        local_24 = 0x14;
        _strncpy(local_2c,"PIP_STAR_IMAGE_UP",0x11);
        local_28 = 0x11;
        local_2c[0x11] = '\0';
        uStack_4 = 1;
        FUN_00590dc0(piVar1,2,&local_2c,0);
        uStack_4 = 0xffffffff;
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        *(undefined1 *)(piVar6 + -2) = 1;
        CAutoWardrobeRoom_ClearSlot(piVar6 + -10);
        param_1 = local_30;
      }
    }
    local_34 = local_34 + 1;
    piVar6 = piVar6 + 0xd;
    if (2 < local_34) {
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION CAutoWardrobeRoom_OnGenericRemoved @ 00916e00 ////

void __thiscall CAutoWardrobeRoom_OnGenericRemoved(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 600);
  iVar2 = 3;
  do {
    if (piVar1[5] == param_1) {
      CAutoWardrobeRoom_ClearSlot(piVar1);
    }
    piVar1 = piVar1 + 0xd;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


//// FUNCTION FUN_00916e30 @ 00916e30 ////

void __fastcall FUN_00916e30(int param_1)

{
  int *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  int local_4;
  
  piVar1 = (int *)(param_1 + 0x280);
  local_4 = 3;
  while( true ) {
    (**(code **)(piVar1[-10] + 4))();
    piVar1[-5] = 0;
    (**(code **)piVar1[-10])();
    _Memory = (int *)piVar1[-4];
    if (_Memory != (int *)0x0) {
      FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar1[-4] = 0;
    piVar1[-3] = 0;
    *(undefined1 *)(piVar1 + -2) = 0;
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) break;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1 = piVar1 + 0xd;
    local_4 = local_4 + -1;
    if (local_4 == 0) {
      return;
    }
  }
  while( true ) {
    if (puVar2 == (undefined4 *)piVar1[1]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar1);
    }
    if (0x14 < (uint)puVar2[2]) break;
    puVar2 = puVar2 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar2);
}


//// FUNCTION FUN_00916ed0 @ 00916ed0 ////

void __fastcall FUN_00916ed0(int *param_1)

{
  int *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  int local_8;
  
  piVar1 = param_1 + 0xa0;
  local_8 = 3;
  while( true ) {
    (**(code **)(piVar1[-10] + 4))();
    piVar1[-5] = 0;
    (**(code **)piVar1[-10])();
    _Memory = (int *)piVar1[-4];
    if (_Memory != (int *)0x0) {
      FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar1[-4] = 0;
    piVar1[-3] = 0;
    *(undefined1 *)(piVar1 + -2) = 0;
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) break;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1 = piVar1 + 0xd;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      FUN_0093c8d0(param_1);
      return;
    }
  }
  while( true ) {
    if (puVar2 == (undefined4 *)piVar1[1]) {
                    /* WARNING: Subroutine does not return */
      _free((void *)*piVar1);
    }
    if (0x14 < (uint)puVar2[2]) break;
    puVar2 = puVar2 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar2);
}


//// FUNCTION FUN_00916f80 @ 00916f80 ////

void __cdecl FUN_00916f80(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = param_1;
  FUN_00990970(param_1);
  FUN_0098a430(piVar2 + 7,4);
  FUN_0098a430(piVar2 + 8,1);
  if (DAT_010583e0 == 0) {
    if (piVar2[10] == 0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = (int *)(piVar2[0xb] - piVar2[10] >> 5);
    }
    FUN_0098a3a0(&param_1);
    iVar4 = 0;
    for (uVar3 = 0; (iVar1 = piVar2[10], iVar1 != 0 && (uVar3 < (uint)(piVar2[0xb] - iVar1 >> 5)));
        uVar3 = uVar3 + 1) {
      FUN_0098c550((undefined4 *)(iVar1 + iVar4));
      iVar4 = iVar4 + 0x20;
    }
  }
  else if (DAT_010583e0 == 1) {
    param_1 = (int *)0x0;
    FUN_004063f0((int)(piVar2 + 9));
    SLVAR_LoadUint(&param_1);
    FUN_004c16a0(piVar2 + 9,(uint)param_1);
    piVar5 = (int *)0x0;
    if (param_1 != (int *)0x0) {
      iVar4 = 0;
      do {
        FUN_0098c550((undefined4 *)(piVar2[10] + iVar4));
        piVar5 = (int *)((int)piVar5 + 1);
        iVar4 = iVar4 + 0x20;
      } while (piVar5 < param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00917060 @ 00917060 ////

void __fastcall FUN_00917060(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *local_38;
  int local_34;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf08a8;
  local_c = ExceptionList;
  local_38 = (int *)(param_1 + 500);
  local_34 = 3;
  ExceptionList = &local_c;
  do {
    if (DAT_00e67469 == '\0') {
      pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\AutoWardrobeRoom.cpp";
      puVar6 = &DAT_010581d8;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      local_2c = local_20;
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      *(char *)((int)puVar6 + 2) = pcVar5[2];
      DAT_010581d4 = 0x33;
      local_20[0] = '\0';
      local_28 = 0;
      local_24 = 0x14;
      _strncpy(local_2c,"SLVAR CALLED: ",0xe);
      local_28 = 0xe;
      local_2c[0xe] = '\0';
      local_4 = 0;
      pcVar2 = (char *)FUN_00ace33d(0xe65afc);
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
    uVar3 = FUN_0098b490("StarDetails[x]");
    if ((char)uVar3 != '\0') {
      FUN_00916f80(local_38);
    }
    local_38 = local_38 + 0xd;
    local_34 = local_34 + -1;
    if (local_34 == 0) {
      FUN_0093f3f0(param_1);
      ExceptionList = local_c;
      return;
    }
  } while( true );
}


//// FUNCTION FUN_009171b0 @ 009171b0 ////

void __fastcall FUN_009171b0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf08e0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6b86c;
  param_1[0x19] = &PTR_LAB_00d6b84c;
  local_4 = 1;
  FUN_00916e30((int)param_1);
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x96,0x34,3,FUN_00916940);
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CAutoWardrobeRoom_OnStarDropped @ 00917220 ////

void __thiscall CAutoWardrobeRoom_OnStarDropped(void *this,int *param_1)

{
  void *this_00;
  char cVar1;
  void *this_01;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  void *pvVar10;
  float local_14;
  void *local_c;
  void *local_8;
  undefined1 auStack_4 [4];
  
  local_8 = this;
  this_01 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
  if (this_01 != (void *)0x0) {
    iVar2 = FUN_005773c0((int)this_01);
    iVar3 = GetPlayerStudio();
    if (iVar2 == iVar3) {
      iVar2 = 0;
      piVar8 = (int *)((int)this + 0x26c);
      do {
        iVar3 = iVar2;
        if (*piVar8 == 0) break;
        iVar2 = iVar2 + 1;
        piVar8 = piVar8 + 0xd;
        iVar3 = -1;
      } while (iVar2 < 3);
      iVar2 = FUN_0059c6e0(this_01,'\0');
      fVar4 = (float)FUN_00430600(iVar2);
      pfVar5 = (float *)FUN_005909c0(this_01,&local_c,fVar4);
      local_14 = *pfVar5;
      pvVar10 = (void *)((int)this + iVar3 * 0x34);
      puVar9 = DAT_01050838;
      local_c = pvVar10;
      if (DAT_01050838 != &DAT_01050844) {
        do {
          piVar8 = (int *)puVar9[2];
          cVar1 = FUN_00960f30(piVar8);
          if (cVar1 != '\0') {
            iVar2 = *(int *)((int)this_01 + 0x4a0);
            puVar6 = (undefined4 *)(**(code **)(*piVar8 + 8))();
            uVar7 = FUN_00430740(puVar6,iVar2);
            if ((char)uVar7 != '\0') {
              pfVar5 = (float *)FUN_005909c0(this_01,auStack_4,(float)piVar8);
              fVar4 = *pfVar5;
              if (fVar4 <= local_14) {
                if (fVar4 == local_14) {
                  puVar6 = (undefined4 *)(**(code **)(*piVar8 + 8))();
                  FUN_0043a2d0((void *)((int)pvVar10 + 0x27c),puVar6);
                }
              }
              else {
                if (*(undefined4 **)((int)pvVar10 + 0x280) != (undefined4 *)0x0) {
                  FUN_00405fe0(*(undefined4 **)((int)pvVar10 + 0x280),
                               *(undefined4 **)((int)pvVar10 + 0x284));
                    /* WARNING: Subroutine does not return */
                  _free(*(void **)((int)pvVar10 + 0x280));
                }
                *(undefined4 *)((int)pvVar10 + 0x280) = 0;
                *(undefined4 *)((int)pvVar10 + 0x284) = 0;
                *(undefined4 *)((int)pvVar10 + 0x288) = 0;
                puVar6 = (undefined4 *)(**(code **)(*piVar8 + 8))();
                FUN_0043a2d0((void *)((int)pvVar10 + 0x27c),puVar6);
                local_14 = fVar4;
              }
            }
          }
          puVar6 = puVar9 + 1;
          puVar9 = (undefined4 *)*puVar6;
        } while ((undefined4 *)*puVar6 != &DAT_01050844);
      }
      pvVar10 = local_c;
      puVar9 = (undefined4 *)((int)local_c + 600);
      (**(code **)(*(int *)((int)local_c + 600) + 4))();
      puVar9 = (undefined4 *)*puVar9;
      *(void **)((int)pvVar10 + 0x26c) = this_01;
      (*(code *)*puVar9)();
      this_00 = local_8;
      piVar8 = param_1;
      *(undefined4 *)((int)pvVar10 + 0x274) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
      TMRoom_RegisterOccupant(local_8,param_1);
      TMRoom_FinalizeSlotAssignment(this_00,piVar8,0);
      FUN_00590ad0(this_01,&param_1);
    }
  }
  return;
}


//// FUNCTION FUN_00917400 @ 00917400 ////

undefined4 * __thiscall FUN_00917400(void *this,byte param_1)

{
  FUN_009171b0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00917420 @ 00917420 ////

void __fastcall FUN_00917420(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00917460 @ 00917460 ////

void FUN_00917460(void)

{
  return;
}


//// FUNCTION CCastRoom_OnPersonRemoved @ 009174c0 ////

void __thiscall CCastRoom_OnPersonRemoved(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  void *pvVar3;
  int iVar4;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar2);
      if (this_00 != (void *)0x0) {
        iVar2 = FUN_005b2220((int)this_00);
        if (iVar2 != 0) {
          iVar4 = 0;
          iVar2 = iVar1;
          pvVar3 = (void *)FUN_005b2220((int)this_00);
          pvVar3 = (void *)FUN_005a7640(pvVar3,iVar2,iVar4);
          FUN_005b4140(this_00,0,pvVar3);
          FUN_005b5750(this_00,iVar1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_009175e0 @ 009175e0 ////

void __fastcall FUN_009175e0(int *param_1)

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
  puStack_8 = &LAB_00cf08f8;
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


//// FUNCTION CCastRoom_Constructor @ 009176b0 ////

undefined4 * __fastcall CCastRoom_Constructor(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0918;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6b984;
  param_1[0x19] = &PTR_LAB_00d6b964;
  FUN_0093b350(param_1,0);
  FUN_0093b340(param_1,0);
  FUN_0093b330(param_1,0);
  FUN_004015d0(param_1 + 0x41,"casting",7);
  iVar1 = FUN_0093b110((int)param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 2;
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00917750 @ 00917750 ////

undefined4 * __thiscall FUN_00917750(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CCastRoom_OnPersonDropped @ 009177a0 ////

void __thiscall CCastRoom_OnPersonDropped(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvVar5;
  int *piVar6;
  void *pvVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  void *unaff_EBP;
  void *unaff_retaddr;
  
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  if ((iVar2 == 0) && (piVar3 == (int *)0x0)) {
    return;
  }
  piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if ((piVar4 != (int *)0x0) && (cVar1 = (**(code **)(*piVar4 + 0x204))(), cVar1 == '\0')) {
    return;
  }
  iVar2 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    return;
  }
  pvVar5 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar2);
  if (pvVar5 == (void *)0x0) {
    return;
  }
  piVar6 = (int *)GetPlayerStudio();
  (**(code **)(*piVar6 + 0x30))(piVar4);
  pvVar7 = (void *)FUN_005b2220((int)pvVar5);
  if (*(int *)((int)this + 0x9c) == 0) {
    iVar2 = *(int *)((int)pvVar7 + 100);
    if (iVar2 == *(int *)((int)pvVar7 + 0x68)) {
      return;
    }
    while( true ) {
      pvVar5 = *(void **)(iVar2 + 0x14);
      iVar8 = FUN_005a6470((int)pvVar5);
      if ((iVar8 == 0) && (*(int *)((int)pvVar5 + 0x88) == 0)) break;
      iVar2 = iVar2 + 0x18;
      if (iVar2 == *(int *)((int)pvVar7 + 0x68)) {
        return;
      }
    }
    FUN_005b4140(unaff_retaddr,(int)piVar4,pvVar5);
  }
  else {
    pvVar7 = (void *)FUN_005a76b0(pvVar7,0,*(int *)(*(int *)((int)this + 0x9c) + 0x1b8));
    if (pvVar7 == (void *)0x0) {
      return;
    }
    FUN_005b4140(pvVar5,(int)piVar4,pvVar7);
    unaff_EBP = this;
    unaff_retaddr = pvVar5;
  }
  piVar6 = (int *)FUN_005b2780((int)unaff_retaddr);
  if (piVar6 == piVar4) {
    FUN_005b6c90(unaff_retaddr,0);
  }
  uVar9 = FUN_005b54c0(unaff_retaddr,(int)piVar4);
  if (((char)uVar9 == '\0') && (uVar9 = FUN_005b20f0(unaff_retaddr,'\x01'), (char)uVar9 != '\0')) {
    puVar10 = FUN_005b5440(unaff_retaddr,(int)piVar4);
    FUN_005b57c0((int)unaff_retaddr);
    FUN_005d6560((int)puVar10);
  }
  TMRoom_RegisterOccupant(unaff_EBP,piVar4);
  TMRoom_FinalizeSlotAssignment(unaff_EBP,piVar4,0);
  if (this != (void *)0x0) {
    cVar1 = FUN_0056f530((int)this);
    if (cVar1 == '\0') {
      if (*(int *)((int)this + 0x814) != 4) {
        (**(code **)(*(int *)this + 0x224))(4,0);
        CStaff_ApplyJobCostumeAndPlacement(this,4);
      }
    }
    else if (piVar4[0x205] != 0x10) {
      (**(code **)(*piVar4 + 0x224))(0x10,0);
    }
  }
  if (piVar3 != (int *)0x0) {
    if (piVar3[0x2d4] == 3) {
      if (piVar3[0x205] == 3) goto LAB_009179e4;
      (**(code **)(*piVar3 + 0x224))(3,0);
      iVar2 = 3;
    }
    else {
      if (piVar3[0x205] == 2) goto LAB_009179e4;
      (**(code **)(*piVar3 + 0x224))(2,0);
      iVar2 = 2;
    }
    CStaff_ApplyJobCostumeAndPlacement(piVar3,iVar2);
  }
LAB_009179e4:
  FUN_005b2710((int)unaff_retaddr);
  return;
}


//// FUNCTION FUN_00917a00 @ 00917a00 ////

uint __thiscall FUN_00917a00(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uVar1 = FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)&lpCaption_00d16918,uVar1);
  if (param_1 == (int *)0x0) {
    ExceptionList = local_c;
    return uVar1 & 0xffffff00;
  }
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar3 == (int *)0x0) {
    uVar1 = 0;
    if (piVar2 == (int *)0x0) goto LAB_00917a95;
LAB_00917ab0:
    uVar1 = (**(code **)(*piVar2 + 0x204))();
    if ((char)uVar1 == '\0') goto LAB_00917a95;
  }
  else if (piVar2 != (int *)0x0) goto LAB_00917ab0;
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x204))();
    if ((char)uVar1 == '\0') goto LAB_00917a95;
  }
  iVar4 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  uVar1 = 0;
  if (iVar4 != 0) {
    iVar4 = CFacilityPreProduction_GetOccupyingRoom(iVar4);
    uVar1 = 0;
    if (iVar4 != 0) {
      iVar4 = FUN_005b2220(iVar4);
      uVar8 = 0;
      iVar9 = 0;
      while (uVar1 = 0, *(int *)(iVar4 + 100) != 0) {
        uVar1 = (*(int *)(iVar4 + 0x68) - *(int *)(iVar4 + 100)) / 0x18;
        if (uVar1 <= uVar8) break;
        iVar5 = FUN_005a6470(*(int *)(iVar9 + 0x14 + *(int *)(iVar4 + 100)));
        if ((iVar5 == 0) && (*(int *)(*(int *)(iVar9 + 0x14 + *(int *)(iVar4 + 100)) + 0x88) == 0))
        {
          pcStack_4c = acStack_40;
          acStack_40[0] = '\0';
          uStack_48 = 0;
          uStack_44 = 0x20;
          pcStack_4c = _malloc(0x20);
          _strncpy(pcStack_4c,"SITT_ACTION_CASTROOM_HIREACTOR",0x1e);
          uStack_48 = 0x1e;
          pcStack_4c[0x1e] = '\0';
          uStack_4 = 0;
          puVar6 = FUN_009b5030(apvStack_2c,&pcStack_4c);
          uVar7 = FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)*puVar6,puVar6[1]);
          if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_4c);
          }
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)uVar7 >> 8),1);
        }
        uVar8 = uVar8 + 1;
        iVar9 = iVar9 + 0x18;
      }
    }
  }
LAB_00917a95:
  ExceptionList = local_c;
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00917c10 @ 00917c10 ////

void __fastcall FUN_00917c10(uint param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0093b110(param_1);
  iVar3 = extraout_EDX;
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
    iVar3 = *(int *)(param_1 + 0xfc);
    iVar4 = 0;
    for (iVar2 = *(int *)(param_1 + 0xf8); iVar2 != iVar3; iVar2 = iVar2 + 0x18) {
      if (*(int *)(iVar2 + 0x14) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    *(int *)(iVar1 + 4) = iVar4;
  }
  TMRoom_Tick(param_1,iVar3);
  return;
}


//// FUNCTION FUN_00917c60 @ 00917c60 ////

void __fastcall FUN_00917c60(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00917ca0 @ 00917ca0 ////

void FUN_00917ca0(void)

{
  return;
}


//// FUNCTION CCostumeRoom_Constructor @ 00917cb0 ////

undefined4 * __fastcall CCostumeRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6ba64;
  param_1[0x19] = &PTR_LAB_00d6ba44;
  FUN_0093b350(param_1,10);
  FUN_0093b340(param_1,8);
  FUN_0093b330(param_1,5);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CCostumeRoom_OnStarDropped @ 00917d20 ////

void __thiscall CCostumeRoom_OnStarDropped(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  this_00 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_005773c0((int)this_00);
    iVar2 = GetPlayerStudio();
    if (iVar1 == iVar2) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 2;
      uVar3 = 1;
      iVar1 = FUN_0059c6e0(this_00,'\0');
      FUN_0066b170(this_00,iVar1,uVar3,uVar4,uVar5,uVar6);
    }
    TMRoom_OnObjectDropped(this,param_1);
  }
  return;
}


//// FUNCTION FUN_00917da0 @ 00917da0 ////

undefined4 * __thiscall FUN_00917da0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00917dd0 @ 00917dd0 ////

void __fastcall FUN_00917dd0(int *param_1)

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
  puStack_8 = &LAB_00cf0978;
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


//// FUNCTION FUN_00918010 @ 00918010 ////

void __fastcall FUN_00918010(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00918050 @ 00918050 ////

void FUN_00918050(void)

{
  return;
}


//// FUNCTION CCrewRoom_OnStaffDropped @ 00918060 ////

void __thiscall CCrewRoom_OnStaffDropped(void *this,int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *this_00;
  
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  iVar4 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  this_00 = (void *)0x0;
  if (iVar4 != 0) {
    this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar4);
  }
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x1c0))(0,this_00);
    if (((cVar1 != '\0') && (iVar4 != 0)) && (this_00 != (void *)0x0)) {
      bVar2 = FUN_005bacd0((int)this_00);
      if (!bVar2) {
        uVar5 = CFacilityPreProduction_AddCrewIfAbsent(this_00,(int)piVar3);
        if ((char)uVar5 != '\0') {
          piVar6 = (int *)GetPlayerStudio();
          (**(code **)(*piVar6 + 0x30))(piVar3);
          (**(code **)(*piVar3 + 0x224))(8,0);
          CStaff_ApplyJobCostumeAndPlacement(piVar3,8);
          TMRoom_RegisterOccupant(this,piVar3);
          TMRoom_FinalizeSlotAssignment(this,piVar3,0);
        }
      }
    }
  }
  return;
}


//// FUNCTION CCrewRoom_OnStaffRemoved @ 00918130 ////

void __thiscall CCrewRoom_OnStaffRemoved(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    iVar2 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar2);
      if (this_00 != (void *)0x0) {
        FUN_005bae70(this_00,iVar1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_009181f0 @ 009181f0 ////

void __fastcall FUN_009181f0(int *param_1)

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
  puStack_8 = &LAB_00cf09b8;
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


//// FUNCTION CCrewRoom_Constructor @ 009182c0 ////

undefined4 * __fastcall CCrewRoom_Constructor(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf09d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6bb44;
  param_1[0x19] = &PTR_LAB_00d6bb20;
  FUN_0093b350(param_1,0);
  FUN_0093b340(param_1,0);
  FUN_0093b330(param_1,0);
  FUN_004015d0(param_1 + 0x41,"casting",7);
  iVar1 = FUN_0093b110((int)param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 2;
  }
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00918360 @ 00918360 ////

undefined4 * __thiscall FUN_00918360(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00918500 @ 00918500 ////

undefined4 *
FUN_00918500(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_38 [20];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0a1b;
  local_c = ExceptionList;
  uStack_24 = 0x918526;
  ExceptionList = &local_c;
  this = operator_new(0x238);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar2 = local_38;
    local_38[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffbc,(char *)*param_4,param_4[1]);
    puVar1 = FUN_00933f00(this,*param_1,param_1[1],param_1[2],param_2,param_3,pcVar2,uVar3,uVar4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_009185c0 @ 009185c0 ////

void __fastcall FUN_009185c0(uint param_1)

{
  int iVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0093b110(param_1);
  iVar3 = extraout_EDX;
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 2) != 0)) {
    iVar3 = *(int *)(param_1 + 0xfc);
    iVar4 = 0;
    for (iVar2 = *(int *)(param_1 + 0xf8); iVar2 != iVar3; iVar2 = iVar2 + 0x18) {
      if (*(int *)(iVar2 + 0x14) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    *(int *)(iVar1 + 4) = iVar4;
  }
  TMRoom_Tick(param_1,iVar3);
  return;
}


//// FUNCTION FUN_00918610 @ 00918610 ////

void __fastcall FUN_00918610(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00918640 @ 00918640 ////

void FUN_00918640(void)

{
  return;
}


//// FUNCTION FUN_00918650 @ 00918650 ////

bool FUN_00918650(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 == (int *)0x0) || (DAT_00e65b1c == '\0')) {
    return false;
  }
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CBlankScriptObject::RTTI_Type_Descriptor,0);
    return iVar2 != 0;
  }
  iVar3 = FUN_005d1940(iVar2);
  piVar4 = (int *)FUN_005b22a0(iVar3);
  iVar3 = (**(code **)(*piVar4 + 0x24))();
  if (iVar3 != 2) {
    if ((2 < iVar3) && (iVar3 < 7)) {
      return true;
    }
    return false;
  }
  iVar2 = FUN_005d1940(iVar2);
  piVar4 = (int *)FUN_005b22a0(iVar2);
  cVar1 = (**(code **)(*piVar4 + 0x28))();
  return cVar1 != '\0';
}


//// FUNCTION CBlankScriptObject_Constructor @ 00918700 ////

undefined4 * __fastcall CBlankScriptObject_Constructor(undefined4 *param_1)

{
  CRoomPlaceObject_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6bc3c;
  param_1[0x1e] = &PTR_FUN_00d6bc1c;
  param_1[0x28] = &PTR_FUN_00d6bc04;
  return param_1;
}


//// FUNCTION FUN_00918740 @ 00918740 ////

int * __thiscall FUN_00918740(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00918780 @ 00918780 ////

void __thiscall FUN_00918780(void *this,byte param_1)

{
  FUN_009189d0((void *)((int)this + -0x78),param_1);
  return;
}


//// FUNCTION FUN_009189d0 @ 009189d0 ////

undefined4 * __thiscall FUN_009189d0(void *this,byte param_1)

{
  thunk_FUN_00947680(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00918a70 @ 00918a70 ////

void __fastcall FUN_00918a70(int *param_1)

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
  puStack_8 = &LAB_00cf0a58;
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


//// FUNCTION FUN_00918b40 @ 00918b40 ////

void __fastcall FUN_00918b40(int param_1)

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
  puStack_8 = &LAB_00cf0a80;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\CustomScriptRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x20c));
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
  uVar3 = FUN_0098b490("PProject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x20c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\CustomScriptRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("Quality");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x224));
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CCustomScriptRoom_OnGenericDropped @ 00918d40 ////

void __thiscall CCustomScriptRoom_OnGenericDropped(void *this,int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  char cVar11;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [4];
  void *local_2c [2];
  uint local_24;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0aa6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CBlankScriptObject::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (piVar4 != (int *)0x0) {
      iVar2 = FUN_005d1940((int)piVar4);
      piVar9 = (int *)FUN_005b22a0(iVar2);
      iVar2 = (**(code **)(*piVar9 + 0x24))();
      if ((1 < iVar2) && (iVar2 < 7)) {
        puVar3 = operator_new(0xa4);
        local_4 = 1;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0046f7a0(puVar3);
        }
        local_4 = 0xffffffff;
        FUN_0046f5d0(puVar3,0x61b);
        uVar7 = FUN_006a36e0();
        (**(code **)(puVar3[0xe] + 4))();
        puVar3[0x13] = uVar7;
        (**(code **)puVar3[0xe])();
        uVar7 = FUN_005d1940((int)piVar4);
        (**(code **)(puVar3[0x14] + 4))();
        puVar3[0x19] = uVar7;
        (**(code **)puVar3[0x14])();
        FUN_005e9280(DAT_0104d82c,extraout_EDX_00,puVar3);
        iVar2 = FUN_005d1940((int)piVar4);
        piVar9 = (int *)FUN_005b22a0(iVar2);
        iVar2 = (**(code **)(*piVar9 + 0x24))();
        if ((iVar2 == 4) && (puVar3 = DAT_0104ed78, DAT_0104ed78 != &DAT_0104ed84)) {
          do {
            piVar9 = (int *)puVar3[2];
            iVar2 = FUN_005d1940((int)piVar4);
            iVar10 = CFacilityPreProduction_GetOccupyingRoom((int)piVar9);
            if (iVar10 == iVar2) {
              CFacilityPreProduction_ReleaseAllRoomAssignments(piVar9);
            }
            puVar6 = puVar3 + 1;
            puVar3 = (undefined4 *)*puVar6;
          } while ((undefined4 *)*puVar6 != &DAT_0104ed84);
        }
        piVar9 = (int *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                     &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                     &TM::CFacility::RTTI_Type_Descriptor,0);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xb0))();
          (**(code **)(*piVar4 + 0x2c))(&fStack_48);
        }
        FUN_0093e3a0(this,(int)param_1);
      }
    }
  }
  else {
    puVar3 = FUN_005c18b0();
    iVar2 = FUN_005b2770((int)puVar3);
    piVar4 = FUN_005be730((int *)local_2c,iVar2);
    FUN_004036d0(puVar3 + 0x97,(wchar_t *)*piVar4,piVar4[1]);
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    FUN_005b5300((int)puVar3);
    if (puVar3[0x84] != 0) {
      *(undefined1 *)(puVar3[0x84] + 100) = 0;
    }
    puVar6 = (undefined4 *)&stack0xffffff94;
    cVar11 = '\x01';
    pvVar5 = (void *)FUN_005b2130((int)puVar3);
    FUN_004c3ae0(pvVar5,cVar11);
    uVar7 = extraout_ECX;
    pvVar5 = (void *)FUN_005b2130((int)puVar3);
    FUN_004bdbd0(pvVar5,puVar6);
    pvVar5 = (void *)FUN_005b2130((int)puVar3);
    FUN_004bd010(pvVar5,uVar7);
    puVar6 = operator_new(0xa4);
    local_4 = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = FUN_0046f7a0(puVar6);
    }
    local_4 = 0xffffffff;
    FUN_0046f5d0(puVar6,0x61b);
    uVar7 = FUN_006a36e0();
    (**(code **)(puVar6[0xe] + 4))();
    puVar6[0x13] = uVar7;
    (**(code **)puVar6[0xe])();
    (**(code **)(puVar6[0x14] + 4))();
    puVar6[0x19] = puVar3;
    (**(code **)puVar6[0x14])();
    FUN_005e9280(DAT_0104d82c,extraout_EDX,puVar6);
    iVar2 = FUN_007ef840();
    *(undefined1 *)(iVar2 + 0x3a0) = 1;
    piVar4 = (int *)FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                                 &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                 &TM::CFacility::RTTI_Type_Descriptor,0);
    if (piVar4 != (int *)0x0) {
      pfVar8 = (float *)(**(code **)(*piVar4 + 0x48))();
      fVar1 = *pfVar8;
      pfVar8 = (float *)(**(code **)(*piVar4 + 0x34))(afStack_3c);
      fStack_44 = -(fVar1 * 8.0) + *pfVar8;
      fStack_40 = pfVar8[1] + 0.0;
      fStack_48 = fStack_48 + pfVar8[2];
      if ((int *)puVar3[0x84] != (int *)0x0) {
        afStack_3c[0] = fStack_48;
        (**(code **)(*(int *)puVar3[0x84] + 0x2c))();
        ExceptionList = pvStack_10;
        return;
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00919150 @ 00919150 ////

void __fastcall FUN_00919150(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6bd64;
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


//// FUNCTION CCustomScriptRoom_Constructor @ 009191a0 ////

undefined4 * __fastcall CCustomScriptRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0ad4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6bdac;
  param_1[0x19] = &PTR_LAB_00d6bd8c;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x96] = &PTR_LAB_00d6bd64;
  param_1[0x9b] = 0;
  param_1[0x9f] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = param_1 + 0x9c;
  param_1[0x9c] = &PTR_FUN_00d18c3c;
  param_1[0xa1] = 0;
  local_4 = 2;
  param_1[0xa2] = 0;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  FUN_004015d0(param_1 + 0x49,"ai_room_cso_blank.flm",0x15);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00919270 @ 00919270 ////

void __fastcall FUN_00919270(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf0b04;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6bdac;
  param_1[0x19] = &PTR_LAB_00d6bd8c;
  puVar2 = (undefined4 *)param_1[0x9b];
  local_4 = 2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x96] + 4))();
    param_1[0x9b] = 0;
    (**(code **)param_1[0x96])();
  }
  param_1[0x9c] = &PTR_FUN_00d18c3c;
  if ((undefined4 *)param_1[0x9e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9e] = param_1[0x9d];
  }
  if (param_1[0x9d] != 0) {
    *(undefined4 *)(param_1[0x9d] + 4) = param_1[0x9e];
  }
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa1] = 0;
  if ((undefined4 *)param_1[0x9e] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9e] = param_1[0x9d];
  }
  if (param_1[0x9d] != 0) {
    *(undefined4 *)(param_1[0x9d] + 4) = param_1[0x9e];
  }
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x96] = &PTR_LAB_00d6bd64;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009193e0 @ 009193e0 ////

undefined4 * __thiscall FUN_009193e0(void *this,byte param_1)

{
  FUN_00919270(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00919410 @ 00919410 ////

void __fastcall FUN_00919410(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00919440 @ 00919440 ////

void FUN_00919440(void)

{
  return;
}


//// FUNCTION FUN_00919450 @ 00919450 ////

float * __cdecl FUN_00919450(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  ulonglong uVar4;
  float local_8;
  float local_4;
  
  uVar4 = FUN_0043b570();
  iVar1 = FUN_00586790(param_2);
  if (iVar1 != -1) {
    iVar1 = (int)uVar4 - iVar1;
    fVar3 = FUN_00472630();
    if ((float10)iVar1 <= fVar3) {
      fVar3 = FUN_0043b960(0xe4fa4c);
      local_4 = (float)(fVar3 * (float10)iVar1);
      fVar3 = FUN_004726a0();
      if (fVar3 * (float10)10.0 <= (float10)local_4) {
        fVar3 = FUN_00472630();
        local_8 = (float)(fVar3 - (float10)iVar1);
        goto LAB_009194cb;
      }
    }
  }
  local_8 = 0.0;
LAB_009194cb:
  pfVar2 = (float *)FUN_0043b540(&local_4,0.0,local_8);
  FUN_0043b600(&DAT_00e4fa4c,param_1,pfVar2);
  return param_1;
}


//// FUNCTION FUN_00919570 @ 00919570 ////

int __fastcall FUN_00919570(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x18;
}


//// FUNCTION FUN_009195c0 @ 009195c0 ////

void __fastcall FUN_009195c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint extraout_EDX_05;
  float unaff_ESI;
  float10 fVar6;
  ulonglong uVar7;
  float fVar8;
  float fStack_8;
  float fStack_4;
  
  if (param_1[0x9b] != 0) {
    (**(code **)(*param_1 + 0x78))();
    uVar7 = FUN_0043b570();
    param_2 = (uint)(uVar7 >> 0x20);
    fStack_8 = ((float)(int)uVar7 - (float)param_1[0x9c]) / (float)param_1[0x9e];
    if (0.0 <= fStack_8) {
      if (1.0 < fStack_8) {
        fStack_8 = 1.0;
      }
    }
    else {
      fStack_8 = 0.0;
    }
    if (param_1[0xa1] != 0) {
      FUN_005e2490((void *)param_1[0xa1],fStack_8);
      param_2 = extraout_EDX;
    }
    if (((void *)param_1[0x8a] != (void *)0x0) &&
       (iVar2 = param_1[0x9b], iVar1 = FUN_00944fb0((void *)param_1[0x8a],0),
       param_2 = extraout_EDX_00, iVar1 == iVar2)) {
      iVar2 = FUN_00944e20((void *)param_1[0x8a],0);
      iVar2 = *(int *)(iVar2 + 0x2c);
      param_2 = extraout_EDX_01;
      if ((iVar2 != 0) &&
         ((*(void **)(iVar2 + 0x214) != (void *)0x0 &&
          (FUN_009757a0(*(void **)(iVar2 + 0x214),(byte *)"ai_progress",fStack_8,0),
          param_2 = extraout_EDX_02, fStack_8 == 1.0)))) {
        FUN_009757a0(*(void **)(iVar2 + 0x214),(byte *)0xd16590,1.0,0);
        param_2 = extraout_EDX_03;
      }
    }
    if ((param_1[0x9f] != 0) &&
       (param_2 = *(int *)(DAT_0104cdf4 + 0x3c) - param_1[0x9f], DAT_00e66050 < param_2)) {
      param_1[0x9f] = 0;
      (**(code **)(*param_1 + 0x78))();
      param_2 = extraout_EDX_04;
    }
    if ((char)param_1[0xa0] == '\0') {
      uVar7 = FUN_0043b570();
      param_2 = param_1[0x9e];
      if (param_1[0x9c] < (int)((int)uVar7 - param_2)) {
        FUN_00472620();
        fStack_4 = (float)param_1[0x9d];
        if (-1 < (int)fStack_4) {
          fStack_4 = (float)(int)fStack_4;
          fVar6 = FUN_00472630();
          uVar3 = 3;
          fStack_4 = (float)((float10)fStack_4 / fVar6);
          do {
            uVar3 = uVar3 >> 1;
          } while (uVar3 != 0);
        }
        iVar2 = FUN_0059c530(param_1[0x9b]);
        if (iVar2 != 0) {
          FUN_00407070(&fStack_4,0.0);
          *(float *)(iVar2 + 0xe0) = fStack_4;
        }
        iVar2 = FUN_0059c530(param_1[0x9b]);
        if (iVar2 != 0) {
          FUN_00407070(&fStack_4,0.0);
          *(float *)(iVar2 + 0xe0) = fStack_4;
        }
        piVar4 = (int *)(**(code **)(*(int *)param_1[0x9b] + 0x1d4))();
        (**(code **)(*piVar4 + 0x60))(param_1[0x9e]);
        iVar2 = 0;
        fVar8 = unaff_ESI;
        pvVar5 = (void *)(**(code **)(*(int *)param_1[0x9b] + 0x294))();
        FUN_00407540(pvVar5,iVar2,fVar8);
        iVar2 = 1;
        pvVar5 = (void *)(**(code **)(*(int *)param_1[0x9b] + 0x294))();
        FUN_00407540(pvVar5,iVar2,unaff_ESI);
        FUN_00585ed0((void *)param_1[0x9b],0.0);
        *(int *)(param_1[0x9b] + 0xbac) = *(int *)(param_1[0x9b] + 0xbac) + 1;
        (**(code **)(*param_1 + 0x4c))();
        piVar4 = (int *)param_1[0xa1];
        if (piVar4 != (int *)0x0) {
          FUN_005e2f20(piVar4);
                    /* WARNING: Subroutine does not return */
          _free(piVar4);
        }
        param_1[0xa1] = 0;
        *(undefined1 *)(param_1 + 0xa0) = 1;
        param_2 = extraout_EDX_05;
      }
    }
  }
  TMRoom_Tick((uint)param_1,param_2);
  return;
}


//// FUNCTION CDetoxRoom_ResetTreatmentProgress @ 00919880 ////

void __fastcall CDetoxRoom_ResetTreatmentProgress(int param_1)

{
  int *_Memory;
  
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 600) + 4))();
  *(undefined4 *)(param_1 + 0x26c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 600))();
  _Memory = *(int **)(param_1 + 0x284);
  *(undefined4 *)(param_1 + 0x27c) = 0;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}


//// FUNCTION FUN_009198f0 @ 009198f0 ////

void __fastcall FUN_009198f0(int param_1)

{
  CDetoxRoom_ResetTreatmentProgress(param_1);
  FUN_0093e450(param_1);
  return;
}


//// FUNCTION FUN_009199f0 @ 009199f0 ////

void __fastcall FUN_009199f0(int *param_1)

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
  puStack_8 = &LAB_00cf0b38;
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


//// FUNCTION FUN_00919ac0 @ 00919ac0 ////

void __fastcall FUN_00919ac0(int param_1)

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
  puStack_8 = &LAB_00cf0b78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    local_2c = local_20;
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\DetoxRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    DAT_010581d4 = 0x18;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 500));
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
  uVar3 = FUN_0098b490("PDetoxStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 500));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\DetoxRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x19;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("DayAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x20c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\DetoxRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x1a;
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
  uVar3 = FUN_0098b490("NumDaysSinceLast");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\DetoxRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x1b;
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
  uVar3 = FUN_0098b490("TimeRequired");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x214),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\DetoxRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    DAT_010581d4 = 0x1c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("BDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x21c),1);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CDetoxRoom_OnStarDropped @ 00919f50 ////

void __thiscall CDetoxRoom_OnStarDropped(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  ulonglong uVar5;
  
  this_00 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    return;
  }
  if ((*(int *)((int)this + 0xf8) != 0) &&
     ((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18 != 0)) {
    return;
  }
  CDetoxRoom_ResetTreatmentProgress((int)this);
  uVar5 = FUN_0043b570();
  *(int *)((int)this + 0x270) = (int)uVar5;
  iVar1 = FUN_005773c0((int)this_00);
  iVar2 = GetPlayerStudio();
  if (iVar1 != iVar2) {
    return;
  }
  (**(code **)(*(int *)((int)this + 600) + 4))();
  *(void **)((int)this + 0x26c) = this_00;
  (*(code *)**(undefined4 **)((int)this + 600))();
  iVar1 = FUN_00586790((int)this_00);
  if (iVar1 == -1) {
    FUN_005867b0(this_00,*(undefined4 *)((int)this + 0x270));
    *(undefined4 *)((int)this + 0x274) = 0xffffffff;
  }
  else {
    iVar1 = *(int *)((int)this + 0x270) - iVar1;
    *(int *)((int)this + 0x274) = iVar1;
    fVar3 = FUN_00472630();
    if ((float10)iVar1 <= fVar3) {
      fVar3 = FUN_0043b960(0xe4fa4c);
      iVar1 = *(int *)((int)this + 0x274);
      fVar4 = FUN_004726a0();
      if (fVar4 * (float10)10.0 <= (float10)(float)(fVar3 * (float10)iVar1)) {
        FUN_005867b0(this_00,*(undefined4 *)((int)this + 0x270));
        goto LAB_0091a085;
      }
    }
    *(undefined4 *)((int)this + 0x274) = 0xffffffff;
    FUN_005867b0(this_00,0xffffffff);
  }
LAB_0091a085:
  FUN_00472640();
  uVar5 = FUN_00acd42c();
  *(int *)((int)this + 0x278) = (int)uVar5;
  TMRoom_RegisterOccupant(this,param_1);
  TMRoom_FinalizeSlotAssignment(this,param_1,0);
  (**(code **)(*(int *)this + 0x78))();
  return;
}


//// FUNCTION FUN_0091a0c0 @ 0091a0c0 ////

void __fastcall FUN_0091a0c0(int param_1)

{
  CDetoxRoom_ResetTreatmentProgress(param_1);
  FUN_0093b260(param_1);
  return;
}


//// FUNCTION CDetoxRoom_OnStarRemoved @ 0091a0d0 ////

void __thiscall CDetoxRoom_OnStarRemoved(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1d4))();
    iVar1 = *piVar2;
    uVar3 = FUN_0043b570();
    (**(code **)(iVar1 + 0x60))((int)uVar3 - *(int *)((int)this + 0x270));
  }
  piVar2 = *(int **)((int)this + 0x284);
  if (piVar2 != (int *)0x0) {
    FUN_005e2f20(piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  *(undefined4 *)((int)this + 0x284) = 0;
  CDetoxRoom_ResetTreatmentProgress((int)this);
  return;
}


//// FUNCTION FUN_0091a150 @ 0091a150 ////

int * FUN_0091a150(undefined4 param_1)

{
  void *this;
  int *this_00;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  char local_40 [4];
  uint uStack_3c;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  char local_20 [4];
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0bbc;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x164);
  local_4 = 0;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = &DAT_00000014;
    _strncpy(local_4c,"detox",5);
    local_48 = 5;
    local_4c[5] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_00 = DesireRehab_Constructor(this,param_1,&local_4c);
    if (&DAT_00000014 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = &DAT_00000014;
  _strncpy(local_2c,"in_room_detox",0xd);
  local_28 = 0xd;
  local_2c[0xd] = '\0';
  local_4 = 3;
  (**(code **)(*this_00 + 0x44))(&local_2c,0,0,0,0,param_1);
  uStack_1c = 0xffffffff;
  if (uStack_3c < 0x15) {
    FUN_00842f90(this_00,1.0);
    ExceptionList = local_24;
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44);
}


//// FUNCTION CDetoxRoom_Constructor @ 0091a2a0 ////

undefined4 * __fastcall CDetoxRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0be6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6bf0c;
  param_1[0x19] = &PTR_LAB_00d6bee8;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x96] = &PTR_FUN_00d16954;
  param_1[0x9b] = 0;
  param_1[0xa1] = 0;
  local_4 = 1;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  CDetoxRoom_ResetTreatmentProgress((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0091a340 @ 0091a340 ////

void __fastcall FUN_0091a340(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf0c06;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6bf0c;
  param_1[0x19] = &PTR_LAB_00d6bee8;
  _Memory = (int *)param_1[0xa1];
  local_4 = 1;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x96] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0091a7b0 @ 0091a7b0 ////

undefined4 * __thiscall FUN_0091a7b0(void *this,byte param_1)

{
  FUN_0091a340(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0091a7d0 @ 0091a7d0 ////

void __fastcall FUN_0091a7d0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0091a810 @ 0091a810 ////

void FUN_0091a810(void)

{
  return;
}


//// FUNCTION CDirectorRoom_OnStarDropped @ 0091a820 ////

void __thiscall CDirectorRoom_OnStarDropped(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  void *pvVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0c5c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStaff::RTTI_Type_Descriptor,0);
    iVar3 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if ((iVar3 != 0) &&
       (pvVar4 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar3), pvVar4 != (void *)0x0)) {
      piVar5 = (int *)FUN_005b2780((int)pvVar4);
      if (piVar5 == piVar2) {
        TMRoom_RegisterOccupant(this,piVar2);
        TMRoom_FinalizeSlotAssignment(this,piVar2,0);
        ExceptionList = local_c;
        return;
      }
      if (piVar5 != (int *)0x0) {
        FUN_0093e3a0(this,(int)piVar5);
        FUN_00944e80(*(int *)((int)this + 0x228));
      }
      piVar5 = (int *)GetPlayerStudio();
      (**(code **)(*piVar5 + 0x30))(piVar2);
      iVar3 = FUN_005b2220((int)pvVar4);
      if (iVar3 != 0) {
        iVar3 = 0;
        piVar5 = piVar2;
        pvVar6 = (void *)FUN_005b2220((int)pvVar4);
        pvVar6 = (void *)FUN_005a7640(pvVar6,(int)piVar5,iVar3);
        if (pvVar6 != (void *)0x0) {
          piVar5 = (int *)FUN_005a6470((int)pvVar6);
          if (piVar5 == piVar2) {
            FUN_005b4140(pvVar4,0,pvVar6);
          }
          else {
            piVar5 = piVar2;
            pvVar6 = (void *)FUN_005b2220((int)pvVar4);
            FUN_005a71d0(pvVar6,(int)piVar5);
          }
          FUN_005b5750(pvVar4,(int)piVar2);
        }
      }
      FUN_005b6c90(pvVar4,(int)piVar2);
      iVar9 = 0;
      pTVar8 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
      pTVar7 = &TM::CPhaseBase::RTTI_Type_Descriptor;
      iVar3 = 0;
      piVar5 = (int *)FUN_005b22a0((int)pvVar4);
      piVar5 = (int *)FUN_00ace790(piVar5,iVar3,pTVar7,pTVar8,iVar9);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x40))();
      }
      pvVar6 = operator_new(0x174);
      uStack_4 = 0;
      if (pvVar6 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = ShootMoodPip_Constructor(pvVar6,0,piVar1);
      }
      uStack_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar5);
      pvVar6 = operator_new(0x18c);
      uStack_4 = 1;
      if (pvVar6 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = ChemistryPip_Constructor(pvVar6,0,piVar1,(int)pvVar4);
      }
      uStack_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar5);
      pvVar6 = operator_new(0x18c);
      uStack_4 = 2;
      if (pvVar6 == (void *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = ExperiencePip_Constructor(pvVar6,0,piVar1,(int)pvVar4);
      }
      uStack_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar5);
      TMRoom_RegisterOccupant(this,piVar2);
      TMRoom_FinalizeSlotAssignment(this,piVar2,0);
      pvVar4 = operator_new(0x160);
      uStack_4 = 3;
      if (pvVar4 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = CastingPerkPip_Constructor(pvVar4,2,piVar2,0);
      }
      uStack_4 = 0xffffffff;
      FUN_00956840(DAT_010507c0,piVar2);
      if (piVar1[0x2d4] == 3) {
        if (piVar1[0x205] == 3) {
          ExceptionList = local_c;
          return;
        }
        (**(code **)(*piVar1 + 0x224))(3,0);
        iVar3 = 3;
      }
      else {
        if (piVar1[0x205] == 2) {
          ExceptionList = local_c;
          return;
        }
        (**(code **)(*piVar1 + 0x224))(2,0);
        iVar3 = 2;
      }
      CStaff_ApplyJobCostumeAndPlacement(piVar1,iVar3);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION CDirectorRoom_OnStarRemoved @ 0091ab00 ////

void __fastcall CDirectorRoom_OnStarRemoved(int param_1)

{
  int iVar1;
  void *this;
  int *piVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar1 = FUN_00ace790(*(int **)(*(int *)(param_1 + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) &&
     (this = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar1), this != (void *)0x0)) {
    FUN_005b6c90(this,0);
    iVar5 = 0;
    pTVar4 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
    pTVar3 = &TM::CPhaseBase::RTTI_Type_Descriptor;
    iVar1 = 0;
    piVar2 = (int *)FUN_005b22a0((int)this);
    piVar2 = (int *)FUN_00ace790(piVar2,iVar1,pTVar3,pTVar4,iVar5);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x40))();
    }
  }
  return;
}


//// FUNCTION FUN_0091ab70 @ 0091ab70 ////

void __fastcall FUN_0091ab70(void *param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float extraout_EDX;
  float extraout_EDX_00;
  float extraout_EDX_01;
  float fVar4;
  float extraout_EDX_02;
  float extraout_EDX_03;
  float extraout_EDX_04;
  undefined4 extraout_EDX_05;
  float extraout_EDX_06;
  int iVar5;
  TypeDescriptor *pTVar6;
  TypeDescriptor *pTVar7;
  int iVar8;
  float local_8;
  int local_4;
  
  local_8 = 0.0;
  iVar1 = FUN_00ace790(*(int **)(*(int *)((int)param_1 + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  fVar4 = extraout_EDX;
  if (iVar1 != 0) {
    iVar1 = CFacilityPreProduction_GetOccupyingRoom(iVar1);
    if (iVar1 == 0) {
      fVar4 = extraout_EDX_00;
      if (*(int *)((int)param_1 + 0xf8) != 0) {
        iVar1 = *(int *)((int)param_1 + 0xfc) - *(int *)((int)param_1 + 0xf8);
        local_4 = iVar1 >> 0x1f;
        fVar4 = (float)(iVar1 / 0x18 + local_4);
        local_4 = (int)fVar4 - local_4;
        if (local_4 != 0) {
          FUN_0093e410(param_1,0);
          fVar4 = extraout_EDX_02;
        }
      }
    }
    else {
      iVar8 = 0;
      pTVar7 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
      pTVar6 = &TM::CPhaseBase::RTTI_Type_Descriptor;
      iVar5 = 0;
      piVar2 = (int *)FUN_005b22a0(iVar1);
      piVar2 = (int *)FUN_00ace790(piVar2,iVar5,pTVar6,pTVar7,iVar8);
      fVar4 = extraout_EDX_01;
      if (piVar2 != (int *)0x0) {
        pfVar3 = (float *)(**(code **)(*piVar2 + 0x38))(&local_8);
        fVar4 = *pfVar3;
        local_8 = fVar4;
      }
    }
  }
  if ((*(void **)((int)param_1 + 0x228) != (void *)0x0) &&
     (iVar1 = FUN_00944fb0(*(void **)((int)param_1 + 0x228),0), fVar4 = extraout_EDX_03, iVar1 != 0)
     ) {
    iVar1 = FUN_00944e20(*(void **)((int)param_1 + 0x228),0);
    iVar1 = *(int *)(iVar1 + 0x2c);
    fVar4 = extraout_EDX_04;
    if ((iVar1 != 0) && (this = *(void **)(iVar1 + 0x214), this != (void *)0x0)) {
      if (0.0 < local_8) {
        FUN_009757a0(this,(byte *)0xd6c054,1.0,0);
        FUN_009757a0(*(void **)(iVar1 + 0x214),(byte *)"ai_progress",local_8,0);
        TMRoom_Tick((uint)param_1,extraout_EDX_05);
        return;
      }
      FUN_009757a0(this,(byte *)0xd6c054,0.0,0);
      fVar4 = extraout_EDX_06;
    }
  }
  TMRoom_Tick((uint)param_1,fVar4);
  return;
}


//// FUNCTION FUN_0091ad00 @ 0091ad00 ////

void __fastcall FUN_0091ad00(int *param_1)

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
  puStack_8 = &LAB_00cf0c78;
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


//// FUNCTION CDirectorRoom_Constructor @ 0091add0 ////

undefined4 * __fastcall CDirectorRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6c08c;
  param_1[0x19] = &PTR_LAB_00d6c068;
  FUN_0093b350(param_1,0);
  FUN_0093b340(param_1,0);
  FUN_0093b330(param_1,0);
  FUN_004015d0(param_1 + 0x41,"casting",7);
  FUN_0093cd90(param_1,'\x01');
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_0091ae60 @ 0091ae60 ////

undefined4 * __thiscall FUN_0091ae60(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0091aff0 @ 0091aff0 ////

undefined4 *
FUN_0091aff0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_38 [20];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0cdb;
  local_c = ExceptionList;
  uStack_24 = 0x91b016;
  ExceptionList = &local_c;
  this = operator_new(0x238);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar2 = local_38;
    local_38[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffbc,(char *)*param_4,param_4[1]);
    puVar1 = FUN_00933f00(this,*param_1,param_1[1],param_1[2],param_2,param_3,pcVar2,uVar3,uVar4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0091b0b0 @ 0091b0b0 ////

void __fastcall FUN_0091b0b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0091b0f0 @ 0091b0f0 ////

void FUN_0091b0f0(void)

{
  return;
}


//// FUNCTION CFinanceRoom_OnGenericDropped @ 0091b100 ////

void CFinanceRoom_OnGenericDropped(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00812600();
    return;
  }
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CInfoObject::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_00812610();
  }
  return;
}


//// FUNCTION FUN_0091b150 @ 0091b150 ////

bool FUN_0091b150(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    iVar1 = FUN_005773c0(iVar1);
    iVar2 = GetPlayerStudio();
    if (iVar1 == iVar2) {
      return true;
    }
  }
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CInfoObject::RTTI_Type_Descriptor,0);
  return iVar1 != 0;
}


//// FUNCTION FUN_0091b1b0 @ 0091b1b0 ////

void __fastcall FUN_0091b1b0(int *param_1)

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
  puStack_8 = &LAB_00cf0cf8;
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


//// FUNCTION FUN_0091b280 @ 0091b280 ////

void __fastcall FUN_0091b280(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0091b2b0 @ 0091b2b0 ////

void FUN_0091b2b0(void)

{
  return;
}


//// FUNCTION FUN_0091b2c0 @ 0091b2c0 ////

void __cdecl FUN_0091b2c0(undefined1 param_1)

{
  DAT_010504a9 = param_1;
  return;
}


//// FUNCTION FUN_0091b2d0 @ 0091b2d0 ////

undefined1 FUN_0091b2d0(void)

{
  return DAT_010504a9;
}


//// FUNCTION CFireRoom_OnGenericDropped @ 0091b300 ////

void __thiscall CFireRoom_OnGenericDropped(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  void *pvVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
    iVar5 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if ((iVar2 != 0) && (iVar5 != 0)) {
      TMRoom_OnObjectDropped(this,param_1);
      pvVar7 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar5);
      if (pvVar7 != (void *)0x0) {
        iVar12 = 0;
        iVar5 = iVar2;
        pvVar8 = (void *)FUN_005b2220((int)pvVar7);
        pvVar8 = (void *)FUN_005a7640(pvVar8,iVar5,iVar12);
        if (pvVar8 != (void *)0x0) {
          iVar5 = FUN_005a6470((int)pvVar8);
          if (iVar5 == iVar2) {
            FUN_005b4140(pvVar7,0,pvVar8);
          }
          else {
            iVar5 = iVar2;
            pvVar8 = (void *)FUN_005b2220((int)pvVar7);
            FUN_005a71d0(pvVar8,iVar5);
          }
          FUN_005b5750(pvVar7,iVar2);
          FUN_0093e3a0(this,iVar2);
        }
        iVar5 = FUN_005b2780((int)pvVar7);
        if (iVar2 == iVar5) {
          FUN_005b6c90(pvVar7,0);
          FUN_0093e3a0(this,iVar2);
        }
      }
      piVar4 = (int *)GetPlayerStudio();
      (**(code **)(*piVar4 + 0x34))(iVar2);
      return;
    }
    piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::TMCharacter::RTTI_Type_Descriptor,0);
    if (piVar4 != (int *)0x0) {
      FUN_0059acb0((int)piVar4);
      if (piVar4[0x131] < 8) {
        FUN_0057b070((int)piVar4);
        cVar1 = (**(code **)(*piVar4 + 0x204))();
        if (cVar1 == '\0') {
          (**(code **)(*piVar4 + 0x1a8))(0);
        }
        else {
          piVar9 = (int *)GetPlayerStudio();
          (**(code **)(*piVar9 + 0x34))(piVar4);
          fVar10 = (float)FUN_00ace790(piVar4,0,&TM::CStaff::RTTI_Type_Descriptor,
                                       &TM::CStar::RTTI_Type_Descriptor,0);
          fVar11 = (float)FUN_00ace790(piVar4,0,&TM::CStaff::RTTI_Type_Descriptor,
                                       &TM::CExtra::RTTI_Type_Descriptor,0);
          if (fVar10 == 0.0) {
            if ((fVar11 == 0.0) || (*(int *)((int)fVar11 + 0x818) == 0x10)) {
              iVar2 = piVar4[0x206];
              if (iVar2 == 0xe) {
                pvVar7 = (void *)FUN_00803080();
                FUN_00804280(pvVar7,(int)piVar4);
              }
              else if (iVar2 == 5) {
                pvVar7 = (void *)FUN_007dc3a0();
                FUN_007de2a0(pvVar7,(int)piVar4);
              }
              else if (iVar2 == 6) {
                pvVar7 = (void *)FUN_007ea7b0();
                FUN_007eb930(pvVar7,(int)piVar4);
              }
              else if (iVar2 == 0xf) {
                pvVar7 = (void *)FUN_007f8640();
                FUN_007f9760(pvVar7,(int)piVar4);
              }
              else if ((iVar2 < 7) || (0xc < iVar2)) {
                if ((fVar11 != 0.0) && (*(int *)((int)fVar11 + 0x818) == 0x10)) {
                  pvVar7 = (void *)FUN_007329d0();
                  FUN_00736c80(pvVar7,fVar11);
                }
              }
              else {
                pvVar7 = (void *)FUN_007e00e0();
                FUN_007e1200(pvVar7,(int)piVar4);
              }
            }
            else {
              pvVar7 = (void *)FUN_007e34b0();
              FUN_007e4590(pvVar7,(int)fVar11);
            }
          }
          else {
            pvVar7 = (void *)FUN_007fd5d0();
            FUN_008019e0(pvVar7,fVar10);
          }
        }
      }
      TMRoom_RegisterOccupant(this,param_1);
      TMRoom_FinalizeSlotAssignment(this,param_1,0);
    }
  }
  else if (DAT_010504a9 == '\0') {
    puVar3 = (undefined4 *)FUN_005d1940(iVar2);
    piVar4 = (int *)FUN_005b22a0((int)puVar3);
    iVar5 = (**(code **)(*piVar4 + 0x24))();
    if (iVar5 == 4) {
      piVar4 = (int *)FUN_00ace790(piVar4,0,&TM::CPhaseBase::RTTI_Type_Descriptor,
                                   &TM::CPhasePreProduction::RTTI_Type_Descriptor,0);
      if (piVar4 != (int *)0x0) {
        piVar4 = (int *)(**(code **)(*piVar4 + 0x48))();
        if (piVar4 != (int *)0x0) {
          iVar2 = FUN_005d1940(iVar2);
          iVar5 = CFacilityPreProduction_GetOccupyingRoom((int)piVar4);
          if (iVar5 == iVar2) {
            CFacilityPreProduction_ReleaseAllRoomAssignments(piVar4);
          }
        }
      }
    }
    iVar2 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityScriptOffice::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_0084a0a0(iVar2);
      puVar6 = (undefined4 *)FUN_0084a090(iVar2);
      if (((puVar6 == puVar3) && (piVar4 != (int *)0x0)) && ((int *)piVar4[0xa9] != (int *)0x0)) {
        (**(code **)(*(int *)piVar4[0xa9] + 0x4c))();
        (**(code **)(*piVar4 + 0x4c))();
      }
    }
    pvVar7 = (void *)FUN_007ef840();
    if (pvVar7 != (void *)0x0) {
      FUN_007f2570(pvVar7,(float)puVar3);
    }
    if (puVar3 != (undefined4 *)0x0) {
      piVar4 = puVar3 + 0x12;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*puVar3)(1);
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_0091b670 @ 0091b670 ////

void __fastcall FUN_0091b670(int param_1)

{
  int *_Memory;
  
  (**(code **)(*(int *)(param_1 + 600) + 4))();
  *(undefined4 *)(param_1 + 0x26c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 600))();
  _Memory = *(int **)(param_1 + 0x270);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  return;
}


//// FUNCTION FUN_0091b6c0 @ 0091b6c0 ////

void __fastcall FUN_0091b6c0(int *param_1)

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
  puStack_8 = &LAB_00cf0d18;
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


//// FUNCTION FUN_0091b790 @ 0091b790 ////

void __fastcall FUN_0091b790(int param_1)

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
  puStack_8 = &LAB_00cf0d40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\FireRoom.cpp";
    puVar6 = &DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2b;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 500));
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
  uVar3 = FUN_0098b490("PFireObject");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 500));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\FireRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
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
  uVar3 = FUN_0098b490("TickAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CFireRoom_OnProjectDropped @ 0091b990 ////

void __thiscall CFireRoom_OnProjectDropped(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  void *this_01;
  undefined4 *puVar2;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0d66;
  local_c = ExceptionList;
  if (*(int *)((int)this + 0x26c) == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x15d) = 1;
      (**(code **)(*(int *)((int)this + 600) + 4))();
      *(int **)((int)this + 0x26c) = param_1;
      (*(code *)**(undefined4 **)((int)this + 600))();
      *(undefined4 *)((int)this + 0x274) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
      *(undefined1 *)(iVar1 + 0x240) = 0;
      this_00 = operator_new(0x80);
      iStack_4 = 0;
      if (this_00 == (void *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        this_01 = operator_new(0x70);
        iStack_4._0_1_ = 1;
        if (this_01 != (void *)0x0) {
          FUN_008fa030(this_01,*(int *)((int)this + 0x26c),(undefined4 *)&DAT_00e54eec);
        }
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        puVar2 = FUN_005e3530(this_00,"ROOM_FIRE_CANSCRIPT_PROGRESS");
      }
      iStack_4 = 0xffffffff;
      *(undefined4 **)((int)this + 0x270) = puVar2;
      TMRoom_RegisterOccupant(this,param_1);
      TMRoom_FinalizeSlotAssignment(this,param_1,0);
      (**(code **)(*param_1 + 0x34))();
      if ((float)pvStack_14 <= 1.0) {
        pvStack_14 = (void *)0x3f800000;
      }
      (**(code **)(*param_1 + 0xac))();
      ExceptionList = pvStack_14;
      return;
    }
    CFireRoom_OnGenericDropped(this,param_1);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0091bd80 @ 0091bd80 ////

undefined4 __thiscall FUN_0091bd80(void *this,int *param_1)

{
  void *this_00;
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  void *this_01;
  int *piVar6;
  void *pvVar7;
  int iVar8;
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
  puStack_8 = &LAB_00cf0da8;
  local_c = ExceptionList;
  this_00 = (void *)((int)this + 0x200);
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  piVar2 = (int *)FUN_004036d0(this_00,(wchar_t *)&lpCaption_00d16918,uVar1);
  if (*(int **)((int)this + 0x1e0) != (int *)0x0) {
    if (*(int *)((int)this + 0xf8) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18);
    }
    if (*(int **)((int)this + 0x1e0) <= piVar2) goto LAB_0091c04c;
  }
  if ((param_1 == (int *)0x0) || (*(int *)((int)this + 0x26c) != 0)) goto LAB_0091c04c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar2 == (int *)0x0) {
    pvVar4 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                  &TM::CStar::RTTI_Type_Descriptor,0);
    iVar5 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                         &TM::TMFixedAsset::RTTI_Type_Descriptor,
                         &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
    if ((pvVar4 != (void *)0x0) && (iVar5 != 0)) {
      iVar5 = CFacilityPreProduction_GetOccupyingRoom(iVar5);
      if (iVar5 != 0) {
        iVar8 = 0;
        pvVar7 = pvVar4;
        this_01 = (void *)FUN_005b2220(iVar5);
        pvVar7 = (void *)FUN_005a7640(this_01,(int)pvVar7,iVar8);
        if (pvVar7 != (void *)0x0) goto LAB_0091c035;
        pvVar7 = (void *)FUN_005b2780(iVar5);
        if (pvVar4 == pvVar7) goto LAB_0091c035;
      }
    }
    piVar6 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::TMCharacter::RTTI_Type_Descriptor,0);
    piVar2 = piVar6;
    if ((piVar6 == (int *)0x0) || (7 < piVar6[0x131])) {
LAB_0091c04c:
      ExceptionList = local_c;
      return (uint)piVar2 & 0xffffff00;
    }
    piVar2 = (int *)(**(code **)(*piVar6 + 0x1c4))();
    if ((char)piVar2 != '\0') goto LAB_0091c04c;
    iVar5 = FUN_005773c0((int)piVar6);
    iVar8 = GetPlayerStudio();
    if (iVar5 == iVar8) {
      FUN_00401de0(&local_4c,"SITT_ACTION_FIREROOM_FIRE",0xffffffff);
      local_4 = 1;
      puVar3 = FUN_009b5030(local_2c,&local_4c);
      pvVar7 = FUN_00403e70(this_00,puVar3);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      goto LAB_0091c035;
    }
    piVar2 = (int *)FUN_005773c0((int)piVar6);
    if (piVar2 != (int *)0x0) goto LAB_0091c04c;
    FUN_00401de0(&local_4c,"SITT_ACTION_FIRE_UNEMPLOYED",0xffffffff);
    local_4 = 2;
    puVar3 = FUN_009b5030(local_2c,&local_4c);
  }
  else {
    if (DAT_010504a9 != '\0') goto LAB_0091c04c;
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"SITT_ACTION_FIREROOM_CANCEL",0x1b);
    local_48 = 0x1b;
    local_4c[0x1b] = '\0';
    local_4 = 0;
    puVar3 = FUN_009b5030(local_2c,&local_4c);
  }
  pvVar7 = FUN_00403e70(this_00,puVar3);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
LAB_0091c035:
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)pvVar7 >> 8),1);
}


//// FUNCTION RoomObject_CreateCancelProjectAction @ 0091c070 ////

undefined4 * __fastcall RoomObject_CreateCancelProjectAction(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6c234;
  param_1[0x19] = &PTR_LAB_00d6c214;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x96] = &PTR_FUN_00d23630;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  return param_1;
}


//// FUNCTION FUN_0091c0d0 @ 0091c0d0 ////

undefined4 * __thiscall FUN_0091c0d0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t sVar4;
  char *local_40;
  uint local_3c;
  uint local_38;
  void *local_20 [2];
  uint local_18;
  
  FUN_0093c060(this,&local_40);
  iVar1 = FUN_004302c0(&local_40,&DAT_00d1ef64,0xffffffff,1);
  puVar2 = FUN_00430770(&local_40,local_20,0,iVar1 + 1);
  FUN_004015d0(&local_40,(char *)*puVar2,puVar2[1]);
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20[0]);
  }
  if (DAT_010b93a4 == 1) {
    sVar4 = 5;
    pcVar3 = "CANIT";
  }
  else if (DAT_010b93a4 == 0) {
    sVar4 = 4;
    pcVar3 = "FIRE";
  }
  else {
    if (DAT_010b93a4 != 2) goto LAB_0091c162;
    sVar4 = 6;
    pcVar3 = "REJECT";
  }
  FUN_004073f0(&local_40,pcVar3,sVar4);
LAB_0091c162:
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


//// FUNCTION FUN_0091c1b0 @ 0091c1b0 ////

undefined4 * __thiscall FUN_0091c1b0(void *this,byte param_1)

{
  FUN_0091c1d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0091c1d0 @ 0091c1d0 ////

void __fastcall FUN_0091c1d0(undefined4 *param_1)

{
  param_1[0x96] = &PTR_FUN_00d23630;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  TMRoom_Destructor(param_1);
  return;
}


//// FUNCTION FUN_0091c2b0 @ 0091c2b0 ////

int * __thiscall FUN_0091c2b0(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0091c3c0 @ 0091c3c0 ////

void __cdecl FUN_0091c3c0(int param_1)

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


//// FUNCTION FUN_0091c3e0 @ 0091c3e0 ////

void __cdecl FUN_0091c3e0(int *param_1)

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


//// FUNCTION FUN_0091c420 @ 0091c420 ////

void __thiscall FUN_0091c420(void *this,int *param_1)

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


//// FUNCTION FUN_0091c510 @ 0091c510 ////

void __cdecl FUN_0091c510(int param_1)

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


//// FUNCTION FUN_0091c530 @ 0091c530 ////

void __cdecl FUN_0091c530(int *param_1)

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


//// FUNCTION FUN_0091c570 @ 0091c570 ////

void __thiscall FUN_0091c570(void *this,int *param_1)

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


//// FUNCTION FUN_0091c660 @ 0091c660 ////

void __cdecl FUN_0091c660(int param_1)

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


//// FUNCTION FUN_0091c680 @ 0091c680 ////

void __cdecl FUN_0091c680(int *param_1)

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


//// FUNCTION FUN_0091c6c0 @ 0091c6c0 ////

void __thiscall FUN_0091c6c0(void *this,int *param_1)

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


//// FUNCTION FUN_0091c7b0 @ 0091c7b0 ////

void __cdecl FUN_0091c7b0(int param_1)

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


//// FUNCTION FUN_0091c7d0 @ 0091c7d0 ////

void __cdecl FUN_0091c7d0(int *param_1)

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


//// FUNCTION FUN_0091c810 @ 0091c810 ////

void __thiscall FUN_0091c810(void *this,int *param_1)

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


//// FUNCTION FUN_0091cbc0 @ 0091cbc0 ////

void __fastcall FUN_0091cbc0(int *param_1)

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


//// FUNCTION FUN_0091cc20 @ 0091cc20 ////

void __fastcall FUN_0091cc20(int *param_1)

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


//// FUNCTION FUN_0091cc80 @ 0091cc80 ////

void __fastcall FUN_0091cc80(int *param_1)

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


//// FUNCTION FUN_0091cce0 @ 0091cce0 ////

void __fastcall FUN_0091cce0(int *param_1)

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


//// FUNCTION FUN_0091cd90 @ 0091cd90 ////

void __fastcall FUN_0091cd90(int *param_1)

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


//// FUNCTION FUN_0091cdf0 @ 0091cdf0 ////

void __fastcall FUN_0091cdf0(int *param_1)

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


//// FUNCTION FUN_0091ce50 @ 0091ce50 ////

void __fastcall FUN_0091ce50(int *param_1)

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


//// FUNCTION FUN_0091cf40 @ 0091cf40 ////

void __fastcall FUN_0091cf40(int *param_1)

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


//// FUNCTION FUN_0091d090 @ 0091d090 ////

void __cdecl FUN_0091d090(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_0091d2f0 @ 0091d2f0 ////

void FUN_0091d2f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_010504c4;
  if (DAT_010504c4 != (undefined4 *)0x0) {
    iVar1 = DAT_010504c4[0x12];
    DAT_010504c4[0x12] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (*(code *)DAT_010504b0[1])();
    DAT_010504c4 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0091d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*DAT_010504b0)();
    return;
  }
  return;
}


//// FUNCTION FUN_0091d340 @ 0091d340 ////

void __fastcall FUN_0091d340(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0091d460 @ 0091d460 ////

void __thiscall FUN_0091d460(void *this,int param_1)

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


//// FUNCTION FUN_0091d4e0 @ 0091d4e0 ////

void __thiscall FUN_0091d4e0(void *this,int param_1)

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


//// FUNCTION FUN_0091d560 @ 0091d560 ////

void __thiscall FUN_0091d560(void *this,int param_1)

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


//// FUNCTION FUN_0091d5d0 @ 0091d5d0 ////

void __thiscall FUN_0091d5d0(void *this,int param_1)

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


//// FUNCTION FUN_0091d790 @ 0091d790 ////

undefined4 * __thiscall FUN_0091d790(void *this,undefined4 *param_1)

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
LAB_0091d7d4:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0091d7d9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0091d7d4;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0091d7d9:
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


//// FUNCTION FUN_0091d830 @ 0091d830 ////

int * __fastcall FUN_0091d830(int *param_1)

{
  FUN_0091cc20(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d840 @ 0091d840 ////

int * __fastcall FUN_0091d840(int *param_1)

{
  FUN_0091cbc0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d850 @ 0091d850 ////

int * __fastcall FUN_0091d850(int *param_1)

{
  FUN_0091cce0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d860 @ 0091d860 ////

int * __fastcall FUN_0091d860(int *param_1)

{
  FUN_0091cc80(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d8e0 @ 0091d8e0 ////

int * __fastcall FUN_0091d8e0(int *param_1)

{
  FUN_0091cd90(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d8f0 @ 0091d8f0 ////

int * __fastcall FUN_0091d8f0(int *param_1)

{
  FUN_0091ce50(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d900 @ 0091d900 ////

int * __fastcall FUN_0091d900(int *param_1)

{
  FUN_0091cdf0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d980 @ 0091d980 ////

int * __fastcall FUN_0091d980(int *param_1)

{
  FUN_0091cf40(param_1);
  return param_1;
}


//// FUNCTION FUN_0091d9d0 @ 0091d9d0 ////

void FUN_0091d9d0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0091d9d0(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0091da40 @ 0091da40 ////

void FUN_0091da40(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0091da40(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0091db00 @ 0091db00 ////

void FUN_0091db00(void *param_1)

{
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    FUN_0091db00(*(void **)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0091db80 @ 0091db80 ////

void __cdecl FUN_0091db80(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_0091dbb0 @ 0091dbb0 ////

void __fastcall FUN_0091dbb0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0091dc40 @ 0091dc40 ////

void __fastcall FUN_0091dc40(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d6c2e8;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0091dc90 @ 0091dc90 ////

void __fastcall FUN_0091dc90(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6c2e8;
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


//// FUNCTION FUN_0091dd40 @ 0091dd40 ////

undefined4 * __thiscall FUN_0091dd40(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_0091de70 @ 0091de70 ////

int * __fastcall FUN_0091de70(int *param_1)

{
  FUN_0091cc20(param_1);
  return param_1;
}


//// FUNCTION FUN_0091de80 @ 0091de80 ////

int * __fastcall FUN_0091de80(int *param_1)

{
  FUN_0091cbc0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091de90 @ 0091de90 ////

int * __fastcall FUN_0091de90(int *param_1)

{
  FUN_0091cce0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091dea0 @ 0091dea0 ////

int * __fastcall FUN_0091dea0(int *param_1)

{
  FUN_0091cc80(param_1);
  return param_1;
}


//// FUNCTION FUN_0091deb0 @ 0091deb0 ////

int * __fastcall FUN_0091deb0(int *param_1)

{
  FUN_0091cd90(param_1);
  return param_1;
}


//// FUNCTION FUN_0091dec0 @ 0091dec0 ////

int * __fastcall FUN_0091dec0(int *param_1)

{
  FUN_0091ce50(param_1);
  return param_1;
}


//// FUNCTION FUN_0091ded0 @ 0091ded0 ////

int * __fastcall FUN_0091ded0(int *param_1)

{
  FUN_0091cdf0(param_1);
  return param_1;
}


//// FUNCTION FUN_0091dee0 @ 0091dee0 ////

void FUN_0091dee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0091df20 @ 0091df20 ////

undefined4 * __thiscall FUN_0091df20(void *this,undefined4 *param_1)

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
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
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
LAB_0091df64:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0091df69;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0091df64;
        pbVar4 = pbVar4 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_0091df69:
      if (iVar5 < 0) {
        puVar7 = (undefined4 *)puVar3[2];
        puVar3 = puVar2;
      }
      else {
        puVar7 = (undefined4 *)*puVar3;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar7 + 0x15) == '\0');
  }
  return puVar3;
}


//// FUNCTION FUN_0091df90 @ 0091df90 ////

void FUN_0091df90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0091dfe0 @ 0091dfe0 ////

int * __fastcall FUN_0091dfe0(int *param_1)

{
  FUN_0091cf40(param_1);
  return param_1;
}


//// FUNCTION FUN_0091dff0 @ 0091dff0 ////

void __fastcall FUN_0091dff0(int param_1)

{
  FUN_0091d9d0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0091e020 @ 0091e020 ////

void FUN_0091e020(void)

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


//// FUNCTION FUN_0091e070 @ 0091e070 ////

void __fastcall FUN_0091e070(int param_1)

{
  FUN_0091da40(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0091e0a0 @ 0091e0a0 ////

void FUN_0091e0a0(void)

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


//// FUNCTION FUN_0091e0e0 @ 0091e0e0 ////

void FUN_0091e0e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


//// FUNCTION FUN_0091e130 @ 0091e130 ////

void FUN_0091e130(void)

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


//// FUNCTION FUN_0091e180 @ 0091e180 ////

void __fastcall FUN_0091e180(int param_1)

{
  FUN_0091db00(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0091e1b0 @ 0091e1b0 ////

void FUN_0091e1b0(void)

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


//// FUNCTION FUN_0091e280 @ 0091e280 ////

undefined4 * __thiscall FUN_0091e280(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_0091e2e0 @ 0091e2e0 ////

void * FUN_0091e2e0(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION FUN_0091e310 @ 0091e310 ////

void * __thiscall FUN_0091e310(void *this,byte param_1)

{
  FUN_0091dbb0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0091e330 @ 0091e330 ////

void __thiscall FUN_0091e330(void *this,undefined4 *param_1,int *param_2)

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


//// FUNCTION FUN_0091e3a0 @ 0091e3a0 ////

void __thiscall FUN_0091e3a0(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_0091e490 @ 0091e490 ////

void __fastcall FUN_0091e490(int param_1)

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


//// FUNCTION FUN_0091e4c0 @ 0091e4c0 ////

undefined4 * FUN_0091e4c0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_0091e4f0 @ 0091e4f0 ////

void __fastcall FUN_0091e4f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e020();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0091e530 @ 0091e530 ////

void __fastcall FUN_0091e530(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e0a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0091e570 @ 0091e570 ////

void __fastcall FUN_0091e570(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e130();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0091e5b0 @ 0091e5b0 ////

void __fastcall FUN_0091e5b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e1b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0091e5f0 @ 0091e5f0 ////

undefined4 * __thiscall
FUN_0091e5f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_0091e660 @ 0091e660 ////

undefined4 __thiscall FUN_0091e660(void *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char **ppcVar4;
  char *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 local_14 [20];
  
  local_20 = local_14;
  local_14[0] = 0;
  local_1c = 0;
  local_18 = 0x14;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_004015d0(&local_20,param_1,(int)pcVar2 - (int)(param_1 + 1));
  param_1 = (char *)FUN_0091d790((void *)((int)this + 0x70),&local_20);
  pcVar2 = *(char **)((int)this + 0x74);
  if (param_1 != pcVar2) {
    uVar3 = FUN_00441060(&local_20,(undefined4 *)(param_1 + 0xc));
    if ((char)uVar3 == '\0') {
      ppcVar4 = &param_1;
      goto LAB_0091e6e1;
    }
  }
  local_24 = pcVar2;
  ppcVar4 = &local_24;
LAB_0091e6e1:
  if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_20);
  }
  if (*ppcVar4 != *(char **)((int)this + 0x74)) {
    return *(undefined4 *)(*ppcVar4 + 0x2c);
  }
  return 0;
}


//// FUNCTION FUN_0091e720 @ 0091e720 ////

undefined4 __thiscall FUN_0091e720(void *this,int *param_1)

{
  void *pvStack_4;
  
  if (param_1 != (int *)0x0) {
    pvStack_4 = this;
    param_1 = (int *)(**(code **)(*param_1 + 0x80))();
    FUN_0091e3a0((void *)((int)this + 100),&pvStack_4,(uint *)&param_1);
    if (pvStack_4 != *(void **)((int)this + 0x68)) {
      return *(undefined4 *)((int)pvStack_4 + 0x10);
    }
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0091e770 @ 0091e770 ////

undefined4 __thiscall FUN_0091e770(void *this,int *param_1)

{
  void *in_EAX;
  void *pvStack_4;
  
  if (param_1 != (int *)0x0) {
    pvStack_4 = this;
    param_1 = (int *)(**(code **)(*param_1 + 0x80))();
    FUN_0091e3a0((void *)((int)this + 100),&pvStack_4,(uint *)&param_1);
    in_EAX = pvStack_4;
    if (pvStack_4 != *(void **)((int)this + 0x68)) {
      return CONCAT31((int3)((uint)pvStack_4 >> 8),1);
    }
  }
  return (uint)in_EAX & 0xffffff00;
}


//// FUNCTION FUN_0091e7c0 @ 0091e7c0 ////

undefined4 __fastcall FUN_0091e7c0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_0091e330((void *)(param_1 + 0x58),&local_4,(int *)&stack0x00000004);
  if (local_4 != *(int *)(param_1 + 0x5c)) {
    return *(undefined4 *)(local_4 + 0x10);
  }
  return 0;
}


//// FUNCTION FUN_0091e850 @ 0091e850 ////

void __fastcall FUN_0091e850(int param_1)

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


//// FUNCTION FUN_0091e880 @ 0091e880 ////

int __fastcall FUN_0091e880(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e020();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0091e8b0 @ 0091e8b0 ////

int __fastcall FUN_0091e8b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e0a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0091e8e0 @ 0091e8e0 ////

int __fastcall FUN_0091e8e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e130();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0091e920 @ 0091e920 ////

int __fastcall FUN_0091e920(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e1b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0091e950 @ 0091e950 ////

void * FUN_0091e950(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_0091e5f0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0091e990 @ 0091e990 ////

void FUN_0091e990(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_0091e990(*(void **)((int)param_1 + 8));
    FUN_0091dbb0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0091e9d0 @ 0091e9d0 ////

undefined4 __thiscall FUN_0091e9d0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined4 *local_4;
  
  local_4 = this;
  local_4 = FUN_0091df20((void *)((int)this + 0x7c),&param_1);
  if (local_4 != *(undefined4 **)((int)this + 0x80)) {
    uVar1 = FUN_00852b60(&param_1,local_4 + 3);
    if ((char)uVar1 == '\0') {
      ppuVar2 = &local_4;
      goto LAB_0091ea12;
    }
  }
  ppuVar2 = &param_1;
LAB_0091ea12:
  if (*ppuVar2 != *(undefined4 **)((int)this + 0x80)) {
    return (*ppuVar2)[4];
  }
  return 0xffffffff;
}


//// FUNCTION FUN_0091ea30 @ 0091ea30 ////

void __thiscall FUN_0091ea30(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = FUN_0091e660(this,"empty_cursor");
    *(undefined4 *)((int)this + 0x88) = uVar1;
    return;
  }
  uVar1 = FUN_0091e660(this,"placing");
  *(undefined4 *)((int)this + 0x88) = uVar1;
  return;
}


//// FUNCTION FUN_0091ea70 @ 0091ea70 ////

void __fastcall FUN_0091ea70(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0091e660(param_1,"placing");
  *(undefined4 *)((int)param_1 + 0x88) = uVar1;
  return;
}


//// FUNCTION FUN_0091ea90 @ 0091ea90 ////

void __thiscall FUN_0091ea90(void *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *local_68;
  undefined4 local_64;
  uint local_60;
  char local_5c [20];
  undefined4 auStack_48 [15];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0dc8;
  local_c = ExceptionList;
  bVar2 = false;
  ExceptionList = &local_c;
  iVar3 = FUN_005d1940(param_1);
  *(undefined4 *)((int)this + 0x88) = 0;
  if (iVar3 == 0) {
    ExceptionList = local_c;
    return;
  }
  local_68 = local_5c;
  local_5c[0] = '\0';
  local_64 = 0;
  local_60 = 0x14;
  local_4 = 0;
  piVar4 = (int *)FUN_005b22a0(iVar3);
  iVar5 = (**(code **)(*piVar4 + 0x24))();
  if (iVar5 == 4) {
LAB_0091eb62:
    if (local_60 < 0x11) {
      if (0x14 < local_60) {
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_60 = 0x20;
      local_68 = _malloc(0x20);
    }
    _strncpy(local_68,"project_preprod_",0x10);
    local_64 = 0x10;
    local_68[0x10] = '\0';
  }
  else {
    piVar4 = (int *)FUN_005b22a0(iVar3);
    iVar5 = (**(code **)(*piVar4 + 0x24))();
    if (iVar5 != 5) goto LAB_0091eb62;
    if (local_60 < 0xf) {
      if (0x14 < local_60) {
                    /* WARNING: Subroutine does not return */
        _free(local_68);
      }
      local_60 = 0x20;
      local_68 = _malloc(0x20);
    }
    _strncpy(local_68,"project_shoot_",0xe);
    local_64 = 0xe;
    local_68[0xe] = '\0';
  }
  iVar5 = FUN_005b2780(iVar3);
  if (iVar5 != 0) {
    iVar5 = FUN_005b2220(iVar3);
    iVar5 = *(int *)(iVar5 + 100);
    iVar6 = FUN_005b2220(iVar3);
    if (iVar5 != *(int *)(iVar6 + 0x68)) {
      do {
        iVar6 = FUN_005a6470(*(int *)(iVar5 + 0x14));
        if (iVar6 == 0) goto LAB_0091ec2a;
        iVar5 = iVar5 + 0x18;
        iVar6 = FUN_005b2220(iVar3);
      } while (iVar5 != *(int *)(iVar6 + 0x68));
    }
    if (*(int *)(iVar3 + 0x134) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(iVar3 + 0x138) - *(int *)(iVar3 + 0x134)) / 0x18;
    }
    if (iVar5 == *(int *)(iVar3 + 0x300)) {
      if (*(int *)((int)this + 0x88) == 0) {
        piVar4 = (int *)FUN_005b22a0(iVar3);
        iVar3 = (**(code **)(*piVar4 + 0x1c))(auStack_48);
        bVar2 = true;
        if (*(int *)(iVar3 + 0x38) != 2) goto LAB_0091ec8e;
        bVar1 = true;
      }
      else {
LAB_0091ec8e:
        bVar1 = false;
      }
      if (bVar2) {
        FUN_00526bb0(auStack_48);
      }
      if (bVar1) {
        FUN_004073f0(&local_68,"stalled",7);
        uVar7 = FUN_0091e660(this,local_68);
        *(undefined4 *)((int)this + 0x88) = uVar7;
      }
      else {
        FUN_004073f0(&local_68,"done",4);
        uVar7 = FUN_0091e660(this,local_68);
        *(undefined4 *)((int)this + 0x88) = uVar7;
      }
      goto joined_r0x0091eccb;
    }
  }
LAB_0091ec2a:
  FUN_004073f0(&local_68,"needpeople",10);
  uVar7 = FUN_0091e660(this,local_68);
  *(undefined4 *)((int)this + 0x88) = uVar7;
joined_r0x0091eccb:
  if (local_60 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_68);
}


//// FUNCTION FUN_0091ed20 @ 0091ed20 ////

void __fastcall FUN_0091ed20(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte **ppbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_c;
  byte *local_8;
  int local_4;
  
  puVar7 = DAT_0104ed18;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      local_4 = puVar7[2];
      puVar2 = (undefined4 *)FUN_00528450(local_4);
      pbVar3 = (byte *)*puVar2;
      local_c = pbVar3;
      local_c = (byte *)FUN_0091df20((void *)(param_1 + 0x7c),&local_c);
      if (local_c == *(byte **)(param_1 + 0x80)) {
LAB_0091eda8:
        local_8 = *(byte **)(param_1 + 0x80);
        ppbVar5 = &local_8;
      }
      else {
        pbVar8 = *(byte **)(local_c + 0xc);
        do {
          bVar1 = *pbVar3;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0091ed99:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0091ed9e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0091ed99;
          pbVar3 = pbVar3 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_0091ed9e:
        if (iVar4 < 0) goto LAB_0091eda8;
        ppbVar5 = &local_c;
      }
      if (*ppbVar5 == *(byte **)(param_1 + 0x80)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(*ppbVar5 + 0x10);
      }
      *(undefined4 *)(local_4 + 0x4e8) = uVar6;
      puVar2 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104ed24);
  }
  return;
}


//// FUNCTION FUN_0091edf0 @ 0091edf0 ////

undefined4 __thiscall FUN_0091edf0(void *this,undefined4 *param_1)

{
  void *local_4;
  
  local_4 = this;
  param_1 = (undefined4 *)FUN_0091e9d0(DAT_010504c4,(undefined4 *)*param_1);
  FUN_0091e330((void *)((int)this + 0x58),&local_4,(int *)&param_1);
  if (local_4 != *(void **)((int)this + 0x5c)) {
    return *(undefined4 *)((int)local_4 + 0x10);
  }
  return 0;
}


//// FUNCTION FUN_0091ee40 @ 0091ee40 ////

void __fastcall FUN_0091ee40(int param_1)

{
  FUN_0091e990(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0091ee70 @ 0091ee70 ////

void __thiscall FUN_0091ee70(void *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 auStack_3c [60];
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_0091e660(this,"empty_cursor");
    *(undefined4 *)((int)this + 0x88) = uVar2;
    return;
  }
  iVar3 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar3 == 0) {
    iVar3 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if ((iVar3 != 0) && (iVar4 = FUN_005d1940(iVar3), iVar4 != 0)) {
      iVar4 = FUN_005d1940(iVar3);
      piVar5 = (int *)FUN_005b22a0(iVar4);
      uVar2 = (**(code **)(*piVar5 + 0x24))();
      switch(uVar2) {
      case 1:
        pcVar6 = "project_blank";
        break;
      case 2:
        cVar1 = (**(code **)(*piVar5 + 0x28))();
        if (cVar1 == '\0') {
          iVar3 = (**(code **)(*piVar5 + 0x1c))(auStack_3c);
          iVar3 = *(int *)(iVar3 + 0x38);
          FUN_00526bb0((undefined4 *)&stack0xffffffc0);
          if (iVar3 == 2) {
            uVar2 = FUN_0091e660(this,"project_writing_stalled");
            *(undefined4 *)((int)this + 0x88) = uVar2;
            return;
          }
          uVar2 = FUN_0091e660(this,"project_writing");
          *(undefined4 *)((int)this + 0x88) = uVar2;
          return;
        }
      case 3:
        pcVar6 = "project_writing_done";
        break;
      case 4:
      case 5:
        FUN_0091ea90(this,iVar3);
        return;
      case 6:
        pcVar6 = "project_shoot_done";
        break;
      case 7:
        pcVar6 = "project_release";
        break;
      default:
        pcVar6 = "empty_cursor";
      }
      uVar2 = FUN_0091e660(this,pcVar6);
      *(undefined4 *)((int)this + 0x88) = uVar2;
    }
  }
  else {
    iVar4 = *(int *)(iVar3 + 0x4c4);
    if (iVar4 == 2) {
      uVar2 = FUN_0091e660(this,"extra");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    }
    switch(*(undefined4 *)(iVar3 + 0x814)) {
    case 0:
      if ((iVar4 == 0) || (iVar4 == 1)) {
        uVar2 = FUN_0091e660(this,"wannabe");
        *(undefined4 *)((int)this + 0x88) = uVar2;
        return;
      }
    case 1:
      uVar2 = FUN_0091e660(this,"unhired");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 2:
      uVar2 = FUN_0091e660(this,"actor");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 3:
      uVar2 = FUN_0091e660(this,"director");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 5:
    case 6:
      uVar2 = FUN_0091e660(this,"staff");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      uVar2 = FUN_0091e660(this,"crew");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 0xd:
      uVar2 = FUN_0091e660(this,"assistant");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 0xe:
      uVar2 = FUN_0091e660(this,"writer");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    case 0xf:
      uVar2 = FUN_0091e660(this,"scientist");
      *(undefined4 *)((int)this + 0x88) = uVar2;
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0091f140 @ 0091f140 ////

void __thiscall FUN_0091f140(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf0de8;
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
  FUN_0091ce50((int *)&param_2);
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
      goto LAB_0091f2b1;
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
      piVar2 = (int *)FUN_0091c3e0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0091c3c0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0091f2b1:
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
            FUN_0091d460(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0091c420(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0091d460(this,(int)piVar5);
              break;
            }
LAB_0091f374:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0091c420(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0091f374;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0091d460(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0091c420(this,piVar5);
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


//// FUNCTION FUN_0091f400 @ 0091f400 ////

void __thiscall FUN_0091f400(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf0e08;
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
  FUN_0091cd90((int *)&param_2);
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
      goto LAB_0091f571;
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
      piVar2 = (int *)FUN_0091c530(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0091c510((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0091f571:
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
            FUN_0091d4e0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0091c570(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0091d4e0(this,(int)piVar5);
              break;
            }
LAB_0091f634:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0091c570(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0091f634;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0091d4e0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0091c570(this,piVar5);
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


//// FUNCTION FUN_0091f6c0 @ 0091f6c0 ////

void __thiscall FUN_0091f6c0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf0e28;
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
  FUN_0091cc20((int *)&param_2);
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
      goto LAB_0091f831;
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
      piVar2 = (int *)FUN_0091c680(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_0091c660((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0091f831:
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
            FUN_0091d560(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_0091c6c0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_0091d560(this,(int)piVar5);
              break;
            }
LAB_0091f8f4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_0091c6c0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_0091f8f4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_0091d560(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_0091c6c0(this,piVar5);
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


//// FUNCTION FUN_0091f990 @ 0091f990 ////

void __thiscall FUN_0091f990(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf0e48;
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
  FUN_0091cce0((int *)&param_2);
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
      goto LAB_0091fb01;
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
      piVar2 = (int *)FUN_0091c7d0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar3 = FUN_0091c7b0((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0091fb01:
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
            FUN_0091d5d0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(*piVar4 + 0x14) != '\x01') || (*(char *)(piVar4[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x14) = 1;
                *(undefined1 *)(piVar4 + 5) = 0;
                FUN_0091c810(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 5) = (char)piVar5[5];
              *(undefined1 *)(piVar5 + 5) = 1;
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              FUN_0091d5d0(this,(int)piVar5);
              break;
            }
LAB_0091fbc4:
            *(undefined1 *)(piVar4 + 5) = 0;
          }
        }
        else {
          if ((char)piVar4[5] == '\0') {
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(piVar5 + 5) = 0;
            FUN_0091c810(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x15) == '\0') {
            if ((*(char *)(piVar4[2] + 0x14) == '\x01') && (*(char *)(*piVar4 + 0x14) == '\x01'))
            goto LAB_0091fbc4;
            if (*(char *)(*piVar4 + 0x14) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x14) = 1;
              *(undefined1 *)(piVar4 + 5) = 0;
              FUN_0091d5d0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 5) = (char)piVar5[5];
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(*piVar4 + 0x14) = 1;
            FUN_0091c810(this,piVar5);
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


//// FUNCTION FUN_0091fc50 @ 0091fc50 ////

void __thiscall
FUN_0091fc50(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf0e68;
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
  piVar3 = (int *)FUN_0091dee0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_0091fd4b:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0091d460(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0091c420(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_0091fd4b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0091c420(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0091d460(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_0091fe00 @ 0091fe00 ////

void __thiscall
FUN_0091fe00(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf0e88;
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
  piVar3 = FUN_0091e950(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0091fefb:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0091d560(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_0091c6c0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0091fefb;
      if (piVar6 == (int *)*piVar2) {
        FUN_0091c6c0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_0091d560(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_0091ffb0 @ 0091ffb0 ////

void __thiscall
FUN_0091ffb0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf0ea8;
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
  piVar3 = (int *)FUN_0091df90(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_009200ab:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0091d5d0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0091c810(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_009200ab;
      if (piVar6 == (int *)*piVar2) {
        FUN_0091c810(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0091d5d0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00920160 @ 00920160 ////

void __thiscall FUN_00920160(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0091d9d0((void *)piVar6[1]);
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
    FUN_0091f140(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00920220 @ 00920220 ////

void __thiscall FUN_00920220(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0091da40((void *)piVar6[1]);
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
    FUN_0091f400(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_009202e0 @ 009202e0 ////

void __thiscall
FUN_009202e0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf0ec8;
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
  piVar3 = (int *)FUN_0091e0e0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4)
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
LAB_009203db:
        *(undefined1 *)(*piVar4 + 0x14) = 1;
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x14) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0091d4e0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
        FUN_0091c570(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[5] == '\0') goto LAB_009203db;
      if (piVar6 == (int *)*piVar2) {
        FUN_0091c570(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x14) = 0;
      FUN_0091d4e0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x14);
  } while( true );
}


//// FUNCTION FUN_00920490 @ 00920490 ////

void __thiscall FUN_00920490(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0091e990((void *)piVar6[1]);
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
    FUN_0091f6c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00920550 @ 00920550 ////

void __thiscall FUN_00920550(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0091db00((void *)piVar6[1]);
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
    FUN_0091f990(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00920610 @ 00920610 ////

void FUN_00920610(void)

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
  puStack_8 = &LAB_00cf0ee8;
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


//// FUNCTION FUN_00920680 @ 00920680 ////

void __thiscall FUN_00920680(void *this,int *param_1)

{
  int *piStack_4;
  
  if (param_1 != (int *)0x0) {
    piStack_4 = this;
    param_1 = (int *)(**(code **)(*param_1 + 0x80))();
    FUN_0091e3a0((void *)((int)this + 100),&piStack_4,(uint *)&param_1);
    if (piStack_4 != *(int **)((int)this + 0x68)) {
      FUN_0091f400((void *)((int)this + 100),&param_1,piStack_4);
    }
  }
  return;
}


//// FUNCTION FUN_009206d0 @ 009206d0 ////

void __thiscall FUN_009206d0(void *this,undefined4 *param_1,int *param_2)

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
      puVar4 = (undefined4 *)FUN_0091fc50(this,&param_2,'\x01',piVar5,piVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0091cdf0((int *)&param_2);
  }
  if (param_2[3] < *piVar2) {
    puVar4 = (undefined4 *)FUN_0091fc50(this,&param_2,local_4,piVar5,piVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00920790 @ 00920790 ////

void __thiscall FUN_00920790(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_009207f4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_009207f9;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_009207f4;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_009207f9:
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
      puVar5 = (undefined4 *)FUN_0091fe00(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0091cbc0((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0091fe00(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_009208b0 @ 009208b0 ////

void __thiscall FUN_009208b0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00920914:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00920919;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00920914;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00920919:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x15) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_0091ffb0(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_0091cc80((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00852b60(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0091ffb0(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00920ae0 @ 00920ae0 ////

void __thiscall FUN_00920ae0(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_009202e0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0091cf40((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_009202e0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00920ba0 @ 00920ba0 ////

void __thiscall FUN_00920ba0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00920610();
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
      _Dst = FUN_0091e4c0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_0091e2e0(param_1,iVar5,param_1 + param_2);
      FUN_0091e4c0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_0091d090(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_0091e2e0(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_0091db80(param_1,(int)pvVar3,iVar5);
    FUN_0091d090(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00920d80 @ 00920d80 ////

void __thiscall FUN_00920d80(void *this,int param_1)

{
  int local_10;
  int local_c;
  undefined4 local_8 [2];
  
  local_10 = FUN_0091e9d0(DAT_010504c4,*(undefined4 **)(param_1 + 0x38));
  local_c = param_1;
  FUN_009206d0((void *)((int)this + 0x58),local_8,&local_10);
  return;
}


//// FUNCTION FUN_00920ec0 @ 00920ec0 ////

undefined4 * __thiscall FUN_00920ec0(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_009202e0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_009202e0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_009202e0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0091cf40((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x15) != '\0') {
          FUN_009202e0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_009202e0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0091cd90((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x15) != '\0') {
          FUN_009202e0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_009202e0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_00920ae0(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


//// FUNCTION FUN_00921080 @ 00921080 ////

void __fastcall FUN_00921080(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00920160(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009210b0 @ 009210b0 ////

void __fastcall FUN_009210b0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00920220(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_009210e0 @ 009210e0 ////

void __fastcall FUN_009210e0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00920490(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00921110 @ 00921110 ////

void __fastcall FUN_00921110(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00920550(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00921140 @ 00921140 ////

void __fastcall FUN_00921140(undefined4 *param_1)

{
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf0f29;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6c3cc;
  local_4 = 3;
  if (param_1[0x1e] != 0) {
    do {
      if (*(undefined4 **)(*(int *)param_1[0x1d] + 0x2c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(*(int *)param_1[0x1d] + 0x2c))(1);
      }
      *(undefined4 *)(*(int *)param_1[0x1d] + 0x2c) = 0;
      FUN_0091f6c0(param_1 + 0x1c,&uStack_10,*(int **)param_1[0x1d]);
    } while (param_1[0x1e] != 0);
  }
  if (param_1[0x21] != 0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(*(int *)param_1[0x20] + 0xc));
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00920550(param_1 + 0x1f,&uStack_10,*(int **)param_1[0x20],(int *)param_1[0x20]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x20]);
}


//// FUNCTION FUN_009212a0 @ 009212a0 ////

void __fastcall FUN_009212a0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf0f5e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6c3ec;
  local_4 = 2;
  if (param_1[0x18] != 0) {
    do {
      if (*(undefined4 **)(*(int *)param_1[0x17] + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(*(int *)param_1[0x17] + 0x10))(1);
      }
      *(undefined4 *)(*(int *)param_1[0x17] + 0x10) = 0;
      FUN_0091f140(param_1 + 0x16,&local_10,*(int **)param_1[0x17]);
    } while (param_1[0x18] != 0);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00920160(param_1 + 0x16,&local_10,*(int **)param_1[0x17],(int *)param_1[0x17]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x17]);
}


//// FUNCTION FUN_00921380 @ 00921380 ////

int __fastcall FUN_00921380(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e020();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009213b0 @ 009213b0 ////

int __fastcall FUN_009213b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e0a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_009213e0 @ 009213e0 ////

uint * __thiscall FUN_009213e0(void *this,uint *param_1)

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
  piVar3 = FUN_00920ec0(this,&param_1,puVar4,local_8);
  return (uint *)(*piVar3 + 0x10);
}


//// FUNCTION FUN_00921460 @ 00921460 ////

int __fastcall FUN_00921460(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e130();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00921490 @ 00921490 ////

int __fastcall FUN_00921490(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0091e1b0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00921510 @ 00921510 ////

undefined4 * __thiscall FUN_00921510(void *this,byte param_1)

{
  FUN_009212a0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00921530 @ 00921530 ////

undefined4 * __fastcall FUN_00921530(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0f8e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0053c420(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6c3cc;
  iVar1 = FUN_0091e0a0();
  param_1[0x1a] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x1a] + 4) = param_1[0x1a];
  *(undefined4 *)param_1[0x1a] = param_1[0x1a];
  *(undefined4 *)(param_1[0x1a] + 8) = param_1[0x1a];
  param_1[0x1b] = 0;
  local_4._0_1_ = 1;
  iVar1 = FUN_0091e130();
  param_1[0x1d] = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(undefined4 *)(param_1[0x1d] + 4) = param_1[0x1d];
  *(undefined4 *)param_1[0x1d] = param_1[0x1d];
  *(undefined4 *)(param_1[0x1d] + 8) = param_1[0x1d];
  param_1[0x1e] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_0091e1b0();
  param_1[0x20] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[0x20] + 4) = param_1[0x20];
  *(undefined4 *)param_1[0x20] = param_1[0x20];
  *(undefined4 *)(param_1[0x20] + 8) = param_1[0x20];
  param_1[0x21] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x22] = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00921610 @ 00921610 ////

undefined4 * __thiscall FUN_00921610(void *this,byte param_1)

{
  FUN_00921140(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00921630 @ 00921630 ////

void __thiscall FUN_00921630(void *this,int *param_1)

{
  uint *puVar1;
  uint *puVar2;
  void *pvStack_4;
  
  if (param_1 != (int *)0x0) {
    pvStack_4 = this;
    param_1 = (int *)(**(code **)(*param_1 + 0x80))();
    FUN_0091e3a0((void *)((int)this + 100),&pvStack_4,(uint *)&param_1);
    if (pvStack_4 == *(void **)((int)this + 0x68)) {
      puVar2 = (uint *)(DAT_0104cdf4 + 0x3c);
      puVar1 = FUN_009213e0((void *)((int)this + 100),(uint *)&param_1);
      *puVar1 = *puVar2;
    }
  }
  return;
}


//// FUNCTION FUN_00921690 @ 00921690 ////

void __thiscall FUN_00921690(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  void *local_4;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x88);
    iVar4 = 0;
    local_4 = this;
    if (iVar1 != 0) {
      param_1 = (int *)param_1[0x13a];
      FUN_0091e330((void *)(iVar1 + 0x58),&local_4,(int *)&param_1);
      if ((local_4 != *(void **)(iVar1 + 0x5c)) && (*(int *)((int)local_4 + 0x10) != 0)) {
        uVar5 = FUN_00acd42c();
        iVar4 = (int)uVar5;
      }
    }
    param_1 = (int *)(**(code **)(*piVar2 + 0x80))();
    puVar3 = FUN_009213e0((void *)((int)this + 100),(uint *)&param_1);
    *puVar3 = *(int *)(DAT_0104cdf4 + 0x3c) - iVar4;
  }
  return;
}


//// FUNCTION FUN_00921720 @ 00921720 ////

void __thiscall FUN_00921720(void *this,int *param_1,float *param_2)

{
  void *this_00;
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float local_c;
  float local_8;
  
  if (((void *)param_1[0x47] != (void *)0x0) &&
     (iVar3 = FUN_0097e350((void *)param_1[0x47],0), iVar3 != 0)) {
    this_00 = (void *)param_1[0x47];
    FUN_004d52e0((void *)((int)this_00 + 0x48),&local_c,param_2);
    iVar3 = FUN_0097e350(this_00,0);
    local_c = ABS(local_c - *(float *)(iVar3 + 200));
    fVar1 = ABS(local_8 - *(float *)(iVar3 + 0xcc));
    if ((*(float *)(iVar3 + 0xd4) + *(float *)((int)this + 0x58) < local_c) ||
       (fVar2 = *(float *)(iVar3 + 0xd8) + *(float *)((int)this + 0x58),
       fVar1 < fVar2 == (fVar1 == fVar2))) {
      fVar2 = *(float *)(iVar3 + 0xd4) + *(float *)((int)this + 0x5c);
      if ((fVar2 < local_c != (fVar2 == local_c)) ||
         (*(float *)(iVar3 + 0xd8) + *(float *)((int)this + 0x5c) <= fVar1)) {
        uVar4 = FUN_0091e770(DAT_010504c4,param_1);
        if ((char)uVar4 != '\0') {
          FUN_00920680(DAT_010504c4,param_1);
          FUN_005311a0(param_1,(int)DAT_010504c4);
        }
      }
      else {
        uVar4 = FUN_0091e770(DAT_010504c4,param_1);
        if ((char)uVar4 != '\0') {
          iVar3 = FUN_0091e720(DAT_010504c4,param_1);
          iVar3 = *(int *)(DAT_0104cdf4 + 0x3c) - iVar3;
          fVar1 = (float)iVar3;
          if (iVar3 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          if (*(float *)((int)this + 0x60) * 10.0 < fVar1) {
            FUN_00534d30(param_1,(int)DAT_010504c4,'\x01');
            return;
          }
        }
      }
    }
    else {
      uVar4 = FUN_0091e770(DAT_010504c4,param_1);
      if ((char)uVar4 == '\0') {
        FUN_00921630(DAT_010504c4,param_1);
        return;
      }
      iVar3 = FUN_0091e720(DAT_010504c4,param_1);
      iVar3 = *(int *)(DAT_0104cdf4 + 0x3c) - iVar3;
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      if ((*(float *)((int)this + 0x60) * 10.0 < fVar1) && (DAT_0104e110 == '\0')) {
        FUN_00534d30(param_1,(int)DAT_010504c4,'\x01');
        return;
      }
    }
  }
  return;
}


//// FUNCTION FUN_00921910 @ 00921910 ////

undefined4 * __thiscall FUN_00921910(void *this,undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0fb3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d6c3ec;
  *(undefined4 *)((int)this + 0x38) = (undefined1 *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x14;
  local_4 = 0;
  FUN_004015d0((undefined4 *)((int)this + 0x38),(char *)*param_1,param_1[1]);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_0091e020();
  *(int *)((int)this + 0x5c) = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(int *)(*(int *)((int)this + 0x5c) + 4) = *(int *)((int)this + 0x5c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x5c) = *(undefined4 *)((int)this + 0x5c);
  *(int *)(*(int *)((int)this + 0x5c) + 8) = *(int *)((int)this + 0x5c);
  *(undefined4 *)((int)this + 0x60) = 0;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_009219b0 @ 009219b0 ////

void __fastcall FUN_009219b0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38 [3];
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf0fc8;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x88) != 0) {
    ExceptionList = &local_c;
    FUN_00538ef0(local_38,(float *)&DAT_0104cce0,0.0);
    local_4c = DAT_0104ed18;
    if (DAT_0104ed18 != &DAT_0104ed24) {
      do {
        piVar4 = (int *)local_4c[2];
        iVar3 = piVar4[0x13a];
        if (iVar3 != -1) {
          if (iVar3 == *(int *)(param_1 + 0x8c)) {
            iVar1 = CFacilityPreProduction_GetOccupyingRoom((int)piVar4);
            if (iVar1 == 0) {
LAB_00921afb:
              iVar1 = FUN_00844700((int)piVar4);
              if (iVar1 < 1) {
                iVar1 = FUN_00844710((int)piVar4);
                if (iVar1 < 1) {
                  iVar1 = *(int *)(param_1 + 0x88);
                  local_48 = iVar3;
                  FUN_0091e330((void *)(iVar1 + 0x58),&local_3c,&local_48);
                  iVar3 = local_3c;
                }
                else {
                  iVar1 = *(int *)(param_1 + 0x88);
                  local_48 = DAT_00e65b58;
                  FUN_0091e330((void *)(iVar1 + 0x58),&local_40,&local_48);
                  iVar3 = local_40;
                }
              }
              else {
                iVar1 = *(int *)(param_1 + 0x88);
                local_48 = DAT_00e65b54;
                FUN_0091e330((void *)(iVar1 + 0x58),&local_44,&local_48);
                iVar3 = local_44;
              }
              if ((iVar3 != *(int *)(iVar1 + 0x5c)) &&
                 (pvVar2 = *(void **)(iVar3 + 0x10), pvVar2 != (void *)0x0)) {
                pfVar5 = local_38;
                goto LAB_00921b91;
              }
            }
            else {
              local_2c = local_20;
              local_20[0] = '\0';
              local_28 = 0;
              local_24 = 0x40;
              local_2c = _malloc(0x40);
              _strncpy(local_2c,"facility_preproduction_gotproject",0x21);
              local_28 = 0x21;
              local_2c[0x21] = '\0';
              local_4 = 0;
              pvVar2 = (void *)FUN_0091edf0(*(void **)(param_1 + 0x88),&local_2c);
              FUN_00921720(pvVar2,piVar4,local_38);
              local_4 = 0xffffffff;
              if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
                _free(local_2c);
              }
            }
          }
          else {
            if ((iVar3 != *(int *)(param_1 + 0x90)) ||
               (iVar1 = FUN_008490a0((int)piVar4), iVar1 == 0)) goto LAB_00921afb;
            pfVar5 = local_38;
            pvVar2 = (void *)FUN_0091e7c0(*(int *)(param_1 + 0x88));
LAB_00921b91:
            FUN_00921720(pvVar2,piVar4,pfVar5);
          }
        }
        local_4c = (undefined4 *)local_4c[1];
      } while (local_4c != &DAT_0104ed24);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00921bc0 @ 00921bc0 ////

undefined4 * __thiscall
FUN_00921bc0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  FUN_0040a070(this);
  *(undefined ***)this = &PTR_FUN_00d6c418;
  *(undefined4 *)((int)this + 0x38) = (undefined1 *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x38),(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x60) = param_3;
  *(undefined4 *)((int)this + 0x58) = param_2;
  *(undefined4 *)((int)this + 0x5c) = param_4;
  return this;
}


//// FUNCTION FUN_00921c20 @ 00921c20 ////

undefined4 * __thiscall FUN_00921c20(void *this,byte param_1)

{
  FUN_00921c40(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00921c40 @ 00921c40 ////

void __fastcall FUN_00921c40(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe]);
  }
  FUN_00526bb0(param_1);
  return;
}


//// FUNCTION FUN_00921c70 @ 00921c70 ////

uint FUN_00921c70(char *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  float10 fVar16;
  char **ppcVar17;
  char **ppcVar18;
  undefined4 *local_1c4;
  char *local_1c0;
  uint local_1bc;
  uint local_1b8;
  char local_1b4 [20];
  int local_1a0;
  int local_19c;
  int local_198;
  undefined1 local_194 [4];
  int *local_190;
  int *local_18c;
  int local_188;
  char *local_184;
  uint local_180;
  uint local_17c;
  char local_178 [20];
  int iStack_164;
  void *local_160 [2];
  char *local_158;
  int local_154;
  uint local_150;
  char local_14c [20];
  float afStack_138 [3];
  char *local_12c;
  int local_128;
  uint local_124;
  char local_120 [20];
  int iStack_10c;
  undefined4 *puStack_108;
  char *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  char local_f8 [20];
  undefined4 local_e4;
  undefined4 local_e0;
  char *local_dc;
  undefined4 *local_d8;
  int iStack_d4;
  undefined4 *puStack_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_c0 [20];
  char *local_ac;
  undefined4 local_a8;
  uint local_a4;
  char local_a0 [20];
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [20];
  undefined1 *local_6c;
  undefined4 local_68;
  uint local_64;
  undefined1 local_60 [20];
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00cf1077;
  local_c = ExceptionList;
  bVar5 = false;
  local_104 = local_f8;
  local_4 = 0;
  local_f8[0] = '\0';
  local_100 = 0;
  local_fc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_104,"",0);
  local_100 = 0;
  *local_104 = '\0';
  local_e4 = 0;
  local_e0 = 0;
  local_184 = local_178;
  local_178[0] = '\0';
  local_180 = 0;
  local_17c = 0x14;
  FUN_004015d0(&local_184,param_1,param_2);
  puVar7 = FUN_0040d6b0(&local_cc,"data/floorplans/",&local_184);
  FUN_004312e0(local_2c,puVar7,".csv");
  local_4._0_1_ = 2;
  if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
    _free(local_cc);
  }
  if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
    _free(local_184);
  }
  FUN_00553310(local_2c);
  bVar4 = FUN_00553a50(&local_104,local_2c);
  if (bVar4) {
    local_158 = local_14c;
    local_14c[0] = '\0';
    local_154 = 0;
    local_150 = 0x14;
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    local_6c = local_60;
    local_60[0] = 0;
    local_68 = 0;
    local_64 = 0x14;
    piVar11 = (int *)0x0;
    piVar15 = (int *)0x0;
    local_190 = (int *)0x0;
    local_18c = (int *)0x0;
    local_188 = 0;
    local_4 = CONCAT31(local_4._1_3_,6);
    do {
      do {
        do {
          FUN_00552520(&local_104,&local_158);
        } while (local_154 == 0);
      } while (*local_158 == '#');
      bVar4 = FUN_00547e50(&local_158,0,&local_4c);
      if (bVar4) {
        local_1c0 = local_1b4;
        local_1b4[0] = '\0';
        local_1bc = 0;
        local_1b8 = 0x14;
        _strncpy(local_1c0,"rule_set",8);
        local_1bc = 8;
        local_1c0[8] = '\0';
        bVar5 = true;
        uVar9 = FUN_00401ec0(&local_4c,&local_1c0);
        bVar4 = true;
        if ((char)uVar9 == '\0') goto LAB_00921f20;
      }
      else {
LAB_00921f20:
        bVar4 = false;
      }
      if ((bVar5) && (bVar5 = false, 0x14 < local_1b8)) {
                    /* WARNING: Subroutine does not return */
        _free(local_1c0);
      }
      bVar2 = false;
      bVar1 = false;
    } while (!bVar4);
    iVar12 = 1;
    bVar5 = FUN_00547e50(&local_158,1,&local_6c);
    if (bVar5) {
      do {
        local_1c4 = operator_new(100);
        local_4._0_1_ = 7;
        if (local_1c4 == (undefined4 *)0x0) {
          local_1c4 = (undefined4 *)0x0;
        }
        else {
          local_1c4 = FUN_00921910(local_1c4,&local_6c);
        }
        local_4 = CONCAT31(local_4._1_3_,6);
        if ((piVar11 == (int *)0x0) ||
           ((uint)(local_188 - (int)piVar11 >> 2) <= (uint)((int)piVar15 - (int)piVar11 >> 2))) {
          FUN_00920ba0(local_194,piVar15,1,&local_1c4);
          piVar11 = local_190;
        }
        else {
          *piVar15 = (int)local_1c4;
          local_18c = piVar15 + 1;
        }
        piVar15 = local_18c;
        iVar12 = iVar12 + 3;
        bVar5 = FUN_00547e50(&local_158,iVar12,&local_6c);
      } while (bVar5);
    }
    local_12c = local_120;
    local_120[0] = '\0';
    local_128 = 0;
    local_124 = 0x14;
    local_cc = local_c0;
    local_c0[0] = 0;
    local_c8 = 0;
    local_c4 = 0x14;
    local_4 = CONCAT31(local_4._1_3_,9);
    uVar8 = FUN_00552520(&local_104,&local_158);
    cVar6 = (char)uVar8;
    piVar15 = local_190;
    while (local_190 = piVar15, cVar6 != '\0') {
      if ((local_154 != 0) && (*local_158 != '#')) {
        FUN_00547e50(&local_158,0,&local_12c);
        local_19c = 1;
        if (local_128 != 0) {
          local_1c0 = local_1b4;
          local_1a0 = 0;
          local_1b4[0] = '\0';
          local_1bc = 0;
          local_1b8 = 0x14;
          _strncpy(local_1c0,"facility_gotstaff",0x11);
          ppcVar18 = &local_1c0;
          ppcVar17 = &local_12c;
          local_1bc = 0x11;
          local_1c0[0x11] = '\0';
          uVar9 = FUN_00401ec0(ppcVar17,ppcVar18);
          if (0x14 < local_1b8) {
                    /* WARNING: Subroutine does not return */
            _free(local_1c0);
          }
          if ((char)uVar9 == '\0') {
            local_ac = local_a0;
            local_a0[0] = '\0';
            local_a8 = 0;
            local_a4 = 0x14;
            _strncpy(local_ac,"facility_gotstar",0x10);
            ppcVar18 = &local_ac;
            ppcVar17 = &local_12c;
            local_a8 = 0x10;
            local_ac[0x10] = '\0';
            uVar9 = FUN_00401ec0(ppcVar17,ppcVar18);
            if (0x14 < local_a4) {
                    /* WARNING: Subroutine does not return */
              _free(local_ac);
            }
            if ((char)uVar9 == '\0') {
              local_dc = operator_new(local_128 + 1);
              pcVar10 = local_12c;
              pcVar13 = local_dc;
              do {
                cVar6 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                *pcVar13 = cVar6;
                pcVar13 = pcVar13 + 1;
              } while (cVar6 != '\0');
              local_1c4 = *(undefined4 **)(local_198 + 0x84);
              local_d8 = local_1c4;
              FUN_009208b0((void *)(local_198 + 0x7c),local_160,&local_dc);
            }
            else {
              local_1a0 = DAT_00e65b54;
            }
          }
          else {
            local_1a0 = DAT_00e65b58;
          }
          piVar15 = local_190;
          if (local_190 != local_18c) {
            do {
              iVar12 = *piVar15;
              if (iVar12 != 0) {
                iVar14 = 0;
                do {
                  FUN_00547e50(&local_158,local_19c,&local_cc);
                  local_19c = local_19c + 1;
                  fVar16 = FUN_00567d60(&local_cc);
                  iVar3 = local_1a0;
                  afStack_138[iVar14] = (float)fVar16;
                  iVar14 = iVar14 + 1;
                } while (iVar14 < 3);
                local_160[0] = operator_new(100);
                if (iVar3 == 0) {
                  local_4._0_1_ = 10;
                  if (local_160[0] == (void *)0x0) {
                    puVar7 = (undefined4 *)0x0;
                  }
                  else {
                    puVar7 = FUN_00921bc0(local_160[0],&local_12c,afStack_138[0],afStack_138[1],
                                          afStack_138[2]);
                  }
                  local_4 = CONCAT31(local_4._1_3_,9);
                  iStack_d4 = FUN_0091e9d0(DAT_010504c4,(undefined4 *)puVar7[0xe]);
                  piVar11 = &iStack_d4;
                  puStack_d0 = puVar7;
                }
                else {
                  local_4._0_1_ = 0xb;
                  if (local_160[0] == (void *)0x0) {
                    puVar7 = (undefined4 *)0x0;
                  }
                  else {
                    puVar7 = FUN_00921bc0(local_160[0],&local_12c,afStack_138[0],afStack_138[1],
                                          afStack_138[2]);
                  }
                  local_4 = CONCAT31(local_4._1_3_,9);
                  if (-1 < iVar3) goto LAB_00922393;
                  piVar11 = &iStack_10c;
                  iStack_10c = iVar3;
                  puStack_108 = puVar7;
                }
                FUN_009206d0((void *)(iVar12 + 0x58),local_160,piVar11);
              }
LAB_00922393:
              piVar15 = piVar15 + 1;
            } while (piVar15 != local_18c);
          }
          iVar12 = local_198;
          if (*(int *)(local_198 + 0x8c) == -1) {
            local_8c = local_80;
            local_80[0] = '\0';
            local_88 = 0;
            local_84 = 0x20;
            local_8c = _malloc(0x20);
            _strncpy(local_8c,"facility_preproduction",0x16);
            local_88 = 0x16;
            local_8c[0x16] = '\0';
            bVar1 = true;
            uVar9 = FUN_00401ec0(&local_12c,&local_8c);
            bVar5 = true;
            if ((char)uVar9 == '\0') goto LAB_0092243a;
          }
          else {
LAB_0092243a:
            bVar5 = false;
          }
          if ((bVar1) && (bVar1 = false, 0x14 < local_84)) {
                    /* WARNING: Subroutine does not return */
            _free(local_8c);
          }
          if (bVar5) {
            *(undefined4 **)(iVar12 + 0x8c) = local_1c4;
          }
          else {
            if (*(int *)(iVar12 + 0x90) == -1) {
              local_184 = local_178;
              local_178[0] = '\0';
              local_180 = 0;
              local_17c = 0x20;
              local_184 = _malloc(0x20);
              _strncpy(local_184,"facility_publicity_office",0x19);
              bVar2 = true;
              local_180 = 0x19;
              local_184[0x19] = '\0';
              uVar9 = FUN_00401ec0(&local_12c,&local_184);
              bVar5 = true;
              if ((char)uVar9 == '\0') goto LAB_009224f1;
            }
            else {
LAB_009224f1:
              bVar5 = false;
            }
            if ((bVar2) && (bVar2 = false, 0x14 < local_17c)) {
                    /* WARNING: Subroutine does not return */
              _free(local_184);
            }
            if (bVar5) {
              *(undefined4 **)(iVar12 + 0x90) = local_1c4;
            }
          }
        }
      }
      uVar8 = FUN_00552520(&local_104,&local_158);
      piVar15 = local_190;
      cVar6 = (char)uVar8;
    }
    if (piVar15 != local_18c) {
      local_1c4 = (undefined4 *)(local_198 + 0x70);
      do {
        local_1c0 = local_1b4;
        local_1b4[0] = '\0';
        local_1bc = 0;
        local_1b8 = 0x14;
        uVar8 = *(uint *)(*piVar15 + 0x3c);
        pcVar10 = *(char **)(*piVar15 + 0x38);
        if (0x13 < uVar8) {
          local_1b8 = uVar8 + 0x20 & 0xffffffe0;
          local_1c0 = _malloc(local_1b8);
        }
        _strncpy(local_1c0,pcVar10,uVar8);
        pcVar10 = local_1c0;
        local_1c0[uVar8] = '\0';
        local_184 = local_178;
        local_178[0] = '\0';
        local_180 = 0;
        local_17c = 0x14;
        local_1bc = uVar8;
        if (0x13 < uVar8) {
          local_17c = uVar8 + 0x20 & 0xffffffe0;
          local_184 = _malloc(local_17c);
        }
        _strncpy(local_184,pcVar10,uVar8);
        local_184[uVar8] = '\0';
        iStack_164 = *piVar15;
        local_4 = CONCAT31(local_4._1_3_,0xd);
        local_180 = uVar8;
        FUN_00920790(local_1c4,&iStack_10c,&local_184);
        if (0x14 < local_17c) {
                    /* WARNING: Subroutine does not return */
          _free(local_184);
        }
        if (0x14 < local_1b8) {
                    /* WARNING: Subroutine does not return */
          _free(local_1c0);
        }
        piVar15 = piVar15 + 1;
      } while (piVar15 != local_18c);
    }
    if (0x14 < local_c4) {
                    /* WARNING: Subroutine does not return */
      _free(local_cc);
    }
    if (0x14 < local_124) {
                    /* WARNING: Subroutine does not return */
      _free(local_12c);
    }
    if (local_190 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_190);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c);
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if (0x14 < local_150) {
                    /* WARNING: Subroutine does not return */
      _free(local_158);
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = local_4 & 0xffffff00;
    uVar9 = FUN_00552ce0(&local_104);
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar8 = CONCAT31((int3)((uint)uVar9 >> 8),1);
  }
  else {
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    uVar8 = FUN_00552ce0(&local_104);
    if (0x14 < param_3) {
                    /* WARNING: Subroutine does not return */
      _free(param_1);
    }
    uVar8 = uVar8 & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar8;
}


//// FUNCTION FUN_00922770 @ 00922770 ////

void FUN_00922770(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char acStack_28 [12];
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf109b;
  local_c = ExceptionList;
  if (DAT_010504c4 == (undefined4 *)0x0) {
    uStack_1c = 0x92279e;
    ExceptionList = &local_c;
    puVar1 = operator_new(0x94);
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00921530(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_010504b0[1])();
    DAT_010504c4 = puVar1;
    (*(code *)*DAT_010504b0)();
    pcVar3 = acStack_28;
    acStack_28[0] = '\0';
    uVar4 = 0;
    uVar5 = 0x14;
    FUN_004015d0(&stack0xffffffcc,"floorplanrevealing",0x12);
    FUN_00921c70(pcVar3,uVar4,uVar5);
    puVar1 = DAT_010504c4;
    uStack_1c = 0x92282e;
    uVar2 = FUN_0091e660(DAT_010504c4,"empty_cursor");
    puVar1[0x22] = uVar2;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00922880 @ 00922880 ////

void __fastcall FUN_00922880(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_009228b0 @ 009228b0 ////

void FUN_009228b0(void)

{
  return;
}


//// FUNCTION FUN_009228c0 @ 009228c0 ////

float * __cdecl FUN_009228c0(float *param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  ulonglong uVar4;
  float local_8;
  float local_4;
  
  uVar4 = FUN_0043b570();
  iVar1 = FUN_00586780(param_2);
  if (iVar1 != -1) {
    iVar1 = (int)uVar4 - iVar1;
    fVar3 = FUN_00472650();
    if ((float10)iVar1 <= fVar3) {
      fVar3 = FUN_0043b960(0xe4fa4c);
      local_4 = (float)(fVar3 * (float10)iVar1);
      fVar3 = FUN_004726b0();
      if (fVar3 * (float10)10.0 <= (float10)local_4) {
        fVar3 = FUN_00472650();
        local_8 = (float)(fVar3 - (float10)iVar1);
        goto LAB_0092293b;
      }
    }
  }
  local_8 = 0.0;
LAB_0092293b:
  pfVar2 = (float *)FUN_0043b540(&local_4,0.0,local_8);
  FUN_0043b600(&DAT_00e4fa4c,param_1,pfVar2);
  return param_1;
}


//// FUNCTION CHealthRoom_ResetTreatmentProgress @ 00922a00 ////

void __fastcall CHealthRoom_ResetTreatmentProgress(int param_1)

{
  int *_Memory;
  
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  (**(code **)(*(int *)(param_1 + 0x25c) + 4))();
  *(undefined4 *)(param_1 + 0x270) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x25c))();
  _Memory = *(int **)(param_1 + 0x284);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  return;
}


//// FUNCTION FUN_00922a60 @ 00922a60 ////

void __fastcall FUN_00922a60(int param_1)

{
  CHealthRoom_ResetTreatmentProgress(param_1);
  FUN_0093e450(param_1);
  return;
}


//// FUNCTION FUN_00922b80 @ 00922b80 ////

void __fastcall FUN_00922b80(int *param_1)

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
  puStack_8 = &LAB_00cf10d8;
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


//// FUNCTION FUN_00922c50 @ 00922c50 ////

void __fastcall FUN_00922c50(int param_1)

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
  puStack_8 = &LAB_00cf1118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HealthRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x19;
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
  uVar3 = FUN_0098b490("(int&)(RoomType)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 500),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HealthRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x1f8));
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
  uVar3 = FUN_0098b490("PHealthStar");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x1f8));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HealthRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1b;
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
  uVar3 = FUN_0098b490("DayAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HealthRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1c;
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
  uVar3 = FUN_0098b490("NumDaysSinceLast");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x214),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HealthRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x1d;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("BDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x21c),1);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION CHealthRoom_OnStarDropped @ 009230f0 ////

void __thiscall CHealthRoom_OnStarDropped(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  ulonglong uVar4;
  
  this_00 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CStar::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    return;
  }
  if ((*(int *)((int)this + 0xf8) != 0) &&
     ((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18 != 0)) {
    return;
  }
  CHealthRoom_ResetTreatmentProgress((int)this);
  uVar4 = FUN_0043b570();
  *(int *)((int)this + 0x274) = (int)uVar4;
  (**(code **)(*(int *)((int)this + 0x25c) + 4))();
  *(void **)((int)this + 0x270) = this_00;
  (*(code *)**(undefined4 **)((int)this + 0x25c))();
  iVar1 = FUN_00586780((int)this_00);
  if (iVar1 == -1) {
    FUN_005867a0(this_00,*(undefined4 *)((int)this + 0x274));
    *(undefined4 *)((int)this + 0x278) = 0xffffffff;
  }
  else {
    iVar1 = *(int *)((int)this + 0x274) - iVar1;
    *(int *)((int)this + 0x278) = iVar1;
    fVar2 = FUN_00472650();
    if ((float10)iVar1 <= fVar2) {
      fVar2 = FUN_0043b960(0xe4fa4c);
      iVar1 = *(int *)((int)this + 0x278);
      fVar3 = FUN_004726b0();
      if (fVar3 * (float10)10.0 <= (float10)(float)(fVar2 * (float10)iVar1)) {
        FUN_005867a0(this_00,*(undefined4 *)((int)this + 0x274));
        goto LAB_0092320b;
      }
    }
    *(undefined4 *)((int)this + 0x278) = 0xffffffff;
    FUN_005867a0(this_00,0xffffffff);
  }
LAB_0092320b:
  TMRoom_RegisterOccupant(this,param_1);
  TMRoom_FinalizeSlotAssignment(this,param_1,0);
  (**(code **)(*(int *)this + 0x78))();
  return;
}


//// FUNCTION FUN_00923230 @ 00923230 ////

void __fastcall FUN_00923230(int param_1)

{
  CHealthRoom_ResetTreatmentProgress(param_1);
  FUN_0093b260(param_1);
  return;
}


//// FUNCTION CHealthRoom_OnStarRemoved @ 009237f0 ////

void __thiscall CHealthRoom_OnStarRemoved(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar2 + 0x1d4))();
    iVar1 = *piVar2;
    uVar3 = FUN_0043b570();
    (**(code **)(iVar1 + 100))((int)uVar3 - *(int *)((int)this + 0x274));
  }
  CHealthRoom_ResetTreatmentProgress((int)this);
  piVar2 = *(int **)((int)this + 0x284);
  if (piVar2 != (int *)0x0) {
    FUN_005e2f20(piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  *(undefined4 *)((int)this + 0x284) = 0;
  (**(code **)(*(int *)((int)this + 0x25c) + 4))();
  *(undefined4 *)((int)this + 0x270) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x25c))();
  return;
}


//// FUNCTION FUN_00923a50 @ 00923a50 ////

undefined4 * __fastcall FUN_00923a50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf11a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6c5c4;
  param_1[0x19] = &PTR_LAB_00d6c5a0;
  param_1[0x96] = 0;
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = param_1 + 0x97;
  param_1[0x97] = &PTR_FUN_00d16954;
  param_1[0x9c] = 0;
  param_1[0xa1] = 0;
  local_4 = 1;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  CHealthRoom_ResetTreatmentProgress((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CHealthRoom_Constructor @ 00923b00 ////

undefined4 * __thiscall CHealthRoom_Constructor(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf11c6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(this);
  *(undefined4 *)((int)this + 600) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6c5c4;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d6c5a0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 **)((int)this + 0x268) = (undefined4 *)((int)this + 0x25c);
  *(undefined4 *)((int)this + 0x25c) = &PTR_FUN_00d16954;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  local_4 = 1;
  FUN_0093b350(this,1);
  FUN_0093b340(this,1);
  FUN_0093b330(this,1);
  CHealthRoom_ResetTreatmentProgress((int)this);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00923ba0 @ 00923ba0 ////

void __fastcall FUN_00923ba0(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf11e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6c5c4;
  param_1[0x19] = &PTR_LAB_00d6c5a0;
  _Memory = (int *)param_1[0xa1];
  local_4 = 1;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x97] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9c] = 0;
  if ((undefined4 *)param_1[0x99] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x99] = param_1[0x98];
  }
  if (param_1[0x98] != 0) {
    *(undefined4 *)(param_1[0x98] + 4) = param_1[0x99];
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00924040 @ 00924040 ////

int * __thiscall FUN_00924040(void *this,undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  int *this_00;
  uint unaff_EDI;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  char local_40 [4];
  uint local_3c;
  undefined4 local_2c [2];
  void *pvStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf122b;
  pvStack_c = ExceptionList;
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = &DAT_00000014;
  iVar1 = *(int *)((int)this + 600);
  local_4 = 0;
  if (iVar1 == 0) {
    ExceptionList = &pvStack_c;
    _strncpy(local_40,"niptuck",7);
    local_48 = 7;
    local_4c[7] = '\0';
  }
  else if (iVar1 == 1) {
    ExceptionList = &pvStack_c;
    _strncpy(local_40,"lipo",4);
    local_48 = 4;
    local_4c[4] = '\0';
  }
  else {
    ExceptionList = &pvStack_c;
    if (iVar1 == 2) {
      ExceptionList = &pvStack_c;
      _strncpy(local_40,"implants",8);
      local_48 = 8;
      local_4c[8] = '\0';
    }
  }
  pvVar2 = operator_new(0x164);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = DesireRehab_Constructor(pvVar2,param_1,&local_4c);
  }
  FUN_0040d6b0(local_2c,"in_room_",&local_4c);
  pvVar2 = (void *)0x0;
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*this_00 + 0x44))(local_2c,0,0,0,0,param_1);
  FUN_00842f90(this_00,1.0);
  if (local_3c < 0x15) {
    if (unaff_EDI < 0x15) {
      ExceptionList = pvStack_24;
      return this_00;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44);
}


//// FUNCTION FUN_009241a0 @ 009241a0 ////

undefined4 * __thiscall FUN_009241a0(void *this,byte param_1)

{
  FUN_00923ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_009241c0 @ 009241c0 ////

void __fastcall FUN_009241c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_009241f0 @ 009241f0 ////

void FUN_009241f0(void)

{
  return;
}


//// FUNCTION FUN_00924200 @ 00924200 ////

undefined4 * __fastcall FUN_00924200(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6c75c;
  param_1[0x19] = &PTR_LAB_00d6c73c;
  param_1[0x96] = 1;
  return param_1;
}


//// FUNCTION RoomObject_CreateHireAction @ 00924230 ////

undefined4 * __thiscall RoomObject_CreateHireAction(void *this,undefined4 param_1)

{
  TMRoom_Constructor(this);
  *(undefined4 *)((int)this + 600) = param_1;
  *(undefined ***)this = &PTR_FUN_00d6c75c;
  *(undefined ***)((int)this + 100) = &PTR_LAB_00d6c73c;
  return this;
}


//// FUNCTION FUN_00924270 @ 00924270 ////

void __fastcall FUN_00924270(void *param_1)

{
  if (*(int *)((int)param_1 + 0x228) == 0) {
    FUN_0093c5e0(param_1,'\0');
    *(undefined4 *)((int)param_1 + 0x1ec) = 0;
    *(undefined4 *)((int)param_1 + 0x1e0) = 0;
  }
  if (*(int *)((int)param_1 + 0x228) != 0) {
    FUN_00944920(*(int *)((int)param_1 + 0x228));
    return;
  }
  return;
}


//// FUNCTION FUN_009242d0 @ 009242d0 ////

undefined4 * __thiscall FUN_009242d0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00924300 @ 00924300 ////

void __fastcall FUN_00924300(int *param_1)

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
  puStack_8 = &LAB_00cf1248;
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


//// FUNCTION CHireRoom_ExecuteHire @ 009246e0 ////

/* WARNING: Removing unreachable block (ram,0x00924839) */

undefined4 __thiscall CHireRoom_ExecuteHire(void *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *this_00;
  void *this_01;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_EDI;
  void *this_02;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int iVar10;
  char acStack_2c [4];
  undefined1 uStack_28;
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = (undefined4 *)&LAB_00cf12a8;
  pvStack_c = ExceptionList;
  if (param_1 == 0) {
    return 0;
  }
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00ace790((int *)param_1,0,&TM::TMCharacter::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)GetPlayerStudio();
    (**(code **)(*piVar3 + 0x30))(piVar2);
    (**(code **)(*piVar2 + 0x224))(*(undefined4 *)((int)this + 600),0);
    CStaff_ApplyJobCostumeAndPlacement(piVar2,*(int *)((int)this + 600));
    puVar4 = *(undefined4 **)((int)this + 600);
    if ((*(undefined4 **)((int)this + 600) == (undefined4 *)0x8) &&
       (puStack_8 = DAT_0104ed78, puVar4 = DAT_0104ed78, DAT_0104ed78 != &DAT_0104ed84)) {
      do {
        piVar2 = (int *)puStack_8[2];
        if (piVar2 != (int *)0x0) {
          this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom((int)piVar2);
          this_01 = (void *)FUN_005295b0(piVar2);
          this_02 = (void *)0x0;
          if (this_01 != (void *)0x0) {
            acStack_2c[0] = '\0';
            _strncpy(acStack_2c,"crew",4);
            uStack_28 = 0;
            iVar10 = 0;
            pTVar9 = &TM::CCrewRoom::RTTI_Type_Descriptor;
            pTVar8 = &TM::TMRoom::RTTI_Type_Descriptor;
            iVar7 = 0;
            uStack_10 = 0;
            piVar2 = (int *)FUN_00938a70(this_01,(undefined4 *)&stack0xffffffc8);
            this_02 = (void *)FUN_00ace790(piVar2,iVar7,pTVar8,pTVar9,iVar10);
            uStack_10 = 0xffffffff;
          }
          if ((((this_00 != (void *)0x0) && (bVar1 = FUN_005bacd0((int)this_00), !bVar1)) &&
              (this_02 != (void *)0x0)) &&
             (uVar5 = CFacilityPreProduction_AddCrewIfAbsent(this_00,(int)unaff_EDI),
             (char)uVar5 != '\0')) {
            TMRoom_RegisterOccupant(this_02,unaff_EDI);
            uVar6 = TMRoom_FinalizeSlotAssignment(this_02,unaff_EDI,0);
            ExceptionList = pvStack_18;
            return uVar6 & 0xffffff00;
          }
        }
        puStack_8 = (undefined4 *)puStack_8[1];
      } while (puStack_8 != &DAT_0104ed84);
      puVar4 = &DAT_0104ed84;
    }
    ExceptionList = pvStack_18;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  ExceptionList = pvStack_c;
  return 0;
}


//// FUNCTION HireSlot_OnStaffDropped @ 00924701 ////

/* WARNING: Removing unreachable block (ram,0x00924839) */

uint __thiscall HireSlot_OnStaffDropped(void *this,undefined4 param_1,char param_2,char param_3)

{
  bool bVar1;
  int *in_EAX;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_EBX;
  int *unaff_EDI;
  int *piVar7;
  bool in_ZF;
  void *in_stack_0000001c;
  void *in_stack_00000028;
  undefined4 *puStack0000002c;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  int *piVar10;
  
  if (in_ZF) {
    ExceptionList = in_stack_00000028;
    return (uint)in_EAX & 0xffffff00;
  }
  piVar2 = (int *)FUN_00ace790(in_EAX,(int)unaff_EBX,&TM::TMCharacter::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,(int)unaff_EBX);
  if (piVar2 != unaff_EBX) {
    piVar3 = (int *)GetPlayerStudio();
    (**(code **)(*piVar3 + 0x30))(piVar2);
    (**(code **)(*piVar2 + 0x224))(*(undefined4 *)((int)this + 600));
    CStaff_ApplyJobCostumeAndPlacement(piVar2,*(int *)((int)this + 600));
    puVar4 = *(undefined4 **)((int)this + 600);
    if ((*(undefined4 **)((int)this + 600) == (undefined4 *)0x8) &&
       (puStack0000002c = DAT_0104ed78, puVar4 = DAT_0104ed78, DAT_0104ed78 != &DAT_0104ed84)) {
      do {
        piVar2 = (int *)puStack0000002c[2];
        if (piVar2 != unaff_EBX) {
          piVar3 = (int *)CFacilityPreProduction_GetOccupyingRoom((int)piVar2);
          piVar2 = (int *)FUN_005295b0(piVar2);
          piVar7 = (int *)0x0;
          if (piVar2 != unaff_EBX) {
            param_2 = (char)unaff_EBX;
            _strncpy(&param_2,"crew",4);
            pTVar9 = &TM::CCrewRoom::RTTI_Type_Descriptor;
            pTVar8 = &TM::TMRoom::RTTI_Type_Descriptor;
            param_3 = (char)unaff_EBX;
            piVar7 = unaff_EBX;
            piVar10 = unaff_EBX;
            piVar2 = (int *)FUN_00938a70(piVar2,(undefined4 *)&stack0xfffffffc);
            piVar7 = (int *)FUN_00ace790(piVar2,(int)piVar7,pTVar8,pTVar9,(int)piVar10);
          }
          if ((((piVar3 != unaff_EBX) && (bVar1 = FUN_005bacd0((int)piVar3), !bVar1)) &&
              (piVar7 != unaff_EBX)) &&
             (uVar5 = CFacilityPreProduction_AddCrewIfAbsent(piVar3,(int)unaff_EDI),
             (char)uVar5 != '\0')) {
            TMRoom_RegisterOccupant(piVar7,unaff_EDI);
            uVar6 = TMRoom_FinalizeSlotAssignment(piVar7,unaff_EDI,unaff_EBX);
            ExceptionList = in_stack_0000001c;
            return uVar6 & 0xffffff00;
          }
        }
        puStack0000002c = (undefined4 *)puStack0000002c[1];
      } while (puStack0000002c != &DAT_0104ed84);
      puVar4 = &DAT_0104ed84;
    }
    ExceptionList = in_stack_0000001c;
    return CONCAT31((int3)((uint)puVar4 >> 8),1);
  }
  ExceptionList = in_stack_00000028;
  return (uint)piVar2 & 0xffffff00;
}


//// FUNCTION CHireRoom_OnCharacterDropped @ 009248d0 ////

void __thiscall CHireRoom_OnCharacterDropped(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::TMCharacter::RTTI_Type_Descriptor,0);
  uVar2 = CHireRoom_ExecuteHire(this,(int)piVar1);
  if ((char)uVar2 != '\0') {
    TMRoom_OnObjectDropped(this,param_1);
    TMRoom_FinalizeSlotAssignment(this,piVar1,0);
    uVar2 = FUN_00598ee0((int)piVar1);
    if ((char)uVar2 != '\0') {
      *(undefined1 *)(piVar1 + 0x207) = 0;
      if (*(void **)((int)this + 0x228) != (void *)0x0) {
        iVar3 = FUN_009455c0(*(void **)((int)this + 0x228),(int)piVar1);
        if ((iVar3 != 0) && (*(int **)(iVar3 + 0x2c) != (int *)0x0)) {
          (**(code **)(**(int **)(iVar3 + 0x2c) + 0xe8))(piVar1);
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00924960 @ 00924960 ////

void __fastcall FUN_00924960(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00924990 @ 00924990 ////

void FUN_00924990(void)

{
  return;
}


//// FUNCTION FUN_00924a50 @ 00924a50 ////

int * __thiscall FUN_00924a50(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00924aa0 @ 00924aa0 ////

void __fastcall FUN_00924aa0(int param_1)

{
  int *_Memory;
  
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0;
  (**(code **)(*(int *)(param_1 + 600) + 4))();
  *(undefined4 *)(param_1 + 0x26c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 600))();
  _Memory = *(int **)(param_1 + 0x288);
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  return;
}


//// FUNCTION FUN_00924b10 @ 00924b10 ////

void __fastcall FUN_00924b10(int param_1)

{
  FUN_00924aa0(param_1);
  FUN_0093e450(param_1);
  return;
}


//// FUNCTION FUN_00924c10 @ 00924c10 ////

undefined4 __fastcall FUN_00924c10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x26c);
}


//// FUNCTION FUN_00924c50 @ 00924c50 ////

void __fastcall FUN_00924c50(int *param_1)

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
  puStack_8 = &LAB_00cf12e8;
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


//// FUNCTION FUN_00924d20 @ 00924d20 ////

void __fastcall FUN_00924d20(int param_1)

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
  puStack_8 = &LAB_00cf1328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HospitalRoom.cpp";
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
    DAT_010581d4 = 0x1e;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 500));
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
  uVar3 = FUN_0098b490("PHospitalPatient");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 500));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HospitalRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x1f;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 1;
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
  uVar3 = FUN_0098b490("DayAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x20c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HospitalRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x20;
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
  uVar3 = FUN_0098b490("NumDaysSinceLast");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x214),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HospitalRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x21;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("BDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x21c),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\HospitalRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x22;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("DayEnds");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x210),4);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_009251c0 @ 009251c0 ////

void __thiscall FUN_009251c0(void *this,int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 0xf8) != 0) &&
       ((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18 != 0)) {
      return;
    }
    FUN_00924aa0((int)this);
    uVar2 = FUN_0043b570();
    *(int *)((int)this + 0x270) = (int)uVar2;
    FUN_004726d0();
    uVar2 = FUN_00acd42c();
    *(int *)((int)this + 0x274) = *(int *)((int)this + 0x270) - (int)uVar2;
    (**(code **)(*(int *)((int)this + 600) + 4))();
    *(int *)((int)this + 0x26c) = iVar1;
    (*(code *)**(undefined4 **)((int)this + 600))();
    TMRoom_RegisterOccupant(this,param_1);
    (**(code **)(*(int *)this + 0x78))();
  }
  return;
}


//// FUNCTION CHospitalRoom_OnStaffDropped @ 00925280 ////

void __thiscall CHospitalRoom_OnStaffDropped(void *this,int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStaff::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 0xf8) != 0) &&
       ((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18 != 0)) {
      return;
    }
    FUN_00924aa0((int)this);
    uVar2 = FUN_0043b570();
    *(int *)((int)this + 0x270) = (int)uVar2;
    FUN_004726d0();
    uVar2 = FUN_00acd42c();
    *(int *)((int)this + 0x274) = *(int *)((int)this + 0x270) - (int)uVar2;
    (**(code **)(*(int *)((int)this + 600) + 4))();
    *(int *)((int)this + 0x26c) = iVar1;
    (*(code *)**(undefined4 **)((int)this + 600))();
    TMRoom_RegisterOccupant(this,param_1);
    TMRoom_FinalizeSlotAssignment(this,param_1,0);
    (**(code **)(*(int *)this + 0x78))();
  }
  return;
}


//// FUNCTION FUN_00925350 @ 00925350 ////

void __fastcall FUN_00925350(int param_1)

{
  FUN_00924aa0(param_1);
  FUN_0093b260(param_1);
  return;
}


//// FUNCTION CHospitalRoom_OnStaffRemoved @ 00925360 ////

void __thiscall CHospitalRoom_OnStaffRemoved(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x1d4))();
    iVar3 = *piVar2;
    uVar4 = FUN_0043b570();
    (**(code **)(iVar3 + 100))((int)uVar4 - *(int *)((int)this + 0x270));
    iVar3 = FUN_0059c530((int)piVar1);
    if (iVar3 != 0) {
      piVar1 = (int *)FUN_0059c530((int)piVar1);
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  FUN_00924aa0((int)this);
  piVar1 = *(int **)((int)this + 0x288);
  if (piVar1 != (int *)0x0) {
    FUN_005e2f20(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  *(undefined4 *)((int)this + 0x288) = 0;
  (**(code **)(*(int *)((int)this + 600) + 4))();
  *(undefined4 *)((int)this + 0x26c) = 0;
  (*(code *)**(undefined4 **)((int)this + 600))();
  return;
}


//// FUNCTION FUN_00925430 @ 00925430 ////

int __fastcall FUN_00925430(int param_1)

{
  void *this;
  int iVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1348;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xf0) == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  this = (void *)FUN_00529ef0(*(int *)(param_1 + 0xf0));
  if (this != (void *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"heal",4);
    local_28 = 4;
    local_2c[4] = '\0';
    local_4 = 0;
    iVar1 = FUN_008b1cb0(this,&local_2c);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    ExceptionList = local_c;
    return iVar1;
  }
  ExceptionList = local_c;
  return 0;
}


//// FUNCTION FUN_00925510 @ 00925510 ////

int * FUN_00925510(void *param_1)

{
  void *this;
  int *this_00;
  uint unaff_ESI;
  char *local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  char local_40 [4];
  uint uStack_3c;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf137b;
  pvStack_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = &DAT_00000014;
  ExceptionList = &pvStack_c;
  _strncpy(local_2c,"traction",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 0;
  this = operator_new(0x164);
  local_4._0_1_ = 1;
  if (this == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = DesireRehab_Constructor(this,param_1,&local_2c);
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = &DAT_00000014;
  _strncpy(local_4c,"in_room_hospital",0x10);
  local_48 = 0x10;
  local_4c[0x10] = '\0';
  local_4 = CONCAT31(local_4._1_3_,2);
  (**(code **)(*this_00 + 0x44))(&local_4c,0,0,0,0);
  FUN_00842f90(this_00,1.0);
  if (0x14 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  if (0x14 < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  ExceptionList = local_24;
  return this_00;
}


//// FUNCTION FUN_00925630 @ 00925630 ////

void __fastcall FUN_00925630(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_LAB_00d6c908;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_00925680 @ 00925680 ////

void __fastcall FUN_00925680(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6c908;
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


//// FUNCTION CHospitalRoom_Constructor @ 009256d0 ////

undefined4 * __fastcall CHospitalRoom_Constructor(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf13a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6c93c;
  param_1[0x19] = &PTR_LAB_00d6c918;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x96] = &PTR_FUN_00d18c4c;
  param_1[0x9b] = 0;
  param_1[0xa2] = 0;
  local_4 = 1;
  param_1[0xa1] = 10;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  FUN_00924aa0((int)param_1);
  (*(code *)DAT_010504c8[1])();
  DAT_010504dc = param_1;
  (*(code *)*DAT_010504c8)();
  (*(code *)DAT_010504e0[1])();
  DAT_010504f4 = param_1[0x3c];
  (*(code *)*DAT_010504e0)();
  ExceptionList = pvStack_c;
  return param_1;
}


//// FUNCTION FUN_009257c0 @ 009257c0 ////

void __fastcall FUN_009257c0(undefined4 *param_1)

{
  int *_Memory;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf13c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6c93c;
  param_1[0x19] = &PTR_LAB_00d6c918;
  local_4 = 1;
  if (param_1[0x9b] != 0) {
    FUN_00924aa0((int)param_1);
    FUN_0093e450((int)param_1);
  }
  (*(code *)DAT_010504c8[1])();
  DAT_010504dc = 0;
  (*(code *)*DAT_010504c8)();
  (*(code *)DAT_010504e0[1])();
  DAT_010504f4 = 0;
  (*(code *)*DAT_010504e0)();
  _Memory = (int *)param_1[0xa2];
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0x96] = &PTR_FUN_00d18c4c;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00925900 @ 00925900 ////

undefined4 __thiscall FUN_00925900(void *this,wchar_t *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined2 **ppuVar9;
  void **ppvVar10;
  wchar_t *pwStack_64;
  undefined2 *puStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined2 auStack_54 [10];
  void *apvStack_40 [2];
  uint uStack_38;
  void *apvStack_20 [2];
  uint uStack_18;
  
  pvVar6 = (void *)((int)this + 0x200);
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uVar1 = FUN_004036d0(pvVar6,(wchar_t *)&lpCaption_00d16918,uVar1);
  if (*(int **)((int)this + 0xf0) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)((int)this + 0xf0) + 0xc4))();
    if ((char)uVar1 == '\0') {
      iVar2 = FUN_00925430((int)this);
      if (iVar2 != 0) {
        uVar1 = FUN_008b14d0(iVar2);
        if ((char)uVar1 != '\0') goto LAB_00925b29;
      }
      piVar3 = (int *)FUN_00ace790((int *)param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                   &TM::CStaff::RTTI_Type_Descriptor,0);
      uVar1 = 0;
      if (piVar3 != (int *)0x0) {
        uVar4 = FUN_005773c0((int)piVar3);
        uVar1 = GetPlayerStudio();
        if (uVar4 == uVar1) {
          uVar1 = FUN_00919570((int)this + 0xf4);
          if (uVar1 == 0) {
            iVar2 = FUN_00ace790(piVar3,0,&TM::CStaff::RTTI_Type_Descriptor,
                                 &TM::CExtra::RTTI_Type_Descriptor,0);
            if (iVar2 == 0) {
              iVar2 = FUN_00ace790(piVar3,0,&TM::CStaff::RTTI_Type_Descriptor,
                                   &TM::CStar::RTTI_Type_Descriptor,0);
              uVar1 = 0;
              if (iVar2 == 0) goto LAB_00925b1d;
            }
            pwStack_64 = L"SITT_ACTION_ROOM_HOSPITAL";
            FUN_004726d0();
            uVar7 = FUN_00acd42c();
            iVar2 = (0xf - (int)uVar7) / 0x1e;
            param_1 = L"SINGULAR";
            if (iVar2 != 1) {
              param_1 = L"PLURAL";
            }
            puStack_60 = auStack_54;
            auStack_54[0] = 0;
            uStack_5c = 0;
            uStack_58 = 10;
            FUN_00568cb0(&param_1,apvStack_20);
            FUN_00568cb0(&pwStack_64,apvStack_40);
            ppvVar10 = apvStack_20;
            pwVar8 = L"_";
            pvVar5 = FUN_0040d3a0(&puStack_60,apvStack_40);
            pvVar5 = FUN_0040d3c0(pvVar5,pwVar8);
            FUN_0040d3a0(pvVar5,ppvVar10);
            if (10 < uStack_38) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_40[0]);
            }
            if (10 < uStack_18) {
                    /* WARNING: Subroutine does not return */
              _free(apvStack_20[0]);
            }
            pwVar8 = L"</translate>";
            ppuVar9 = &puStack_60;
            pvVar5 = FUN_0040d3c0(pvVar6,L"<phrasebook><translate>");
            pvVar5 = FUN_0040d3a0(pvVar5,ppuVar9);
            FUN_0040d3c0(pvVar5,pwVar8);
            FUN_0040d3c0(pvVar6,L"<phrase key=DURATION>");
            FUN_0043bd40(pvVar6,iVar2);
            FUN_0040d3c0(pvVar6,L"</phrase>");
            pvVar6 = FUN_0040d3c0(pvVar6,L"</phrasebook>");
            if (10 < uStack_58) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_60);
            }
            return CONCAT31((int3)((uint)pvVar6 >> 8),1);
          }
        }
      }
LAB_00925b1d:
      return uVar1 & 0xffffff00;
    }
  }
LAB_00925b29:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00925b40 @ 00925b40 ////

void __fastcall FUN_00925b40(int *param_1,undefined4 param_2)

{
  void *this;
  float fVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int *this_00;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 uVar8;
  float10 fVar9;
  ulonglong uVar10;
  TypeDescriptor *pTVar11;
  TypeDescriptor *pTVar12;
  int iVar13;
  float fStack_14;
  
  TMRoom_Tick((uint)param_1,param_2);
  (*(code *)DAT_010504e0[1])();
  DAT_010504f4 = param_1[0x3c];
  (*(code *)*DAT_010504e0)();
  if (((int *)param_1[0x9b] == (int *)0x0) ||
     ((cVar2 = (**(code **)(*(int *)param_1[0x9b] + 0x138))(), cVar2 != '\0' &&
      (cVar2 = (**(code **)(*(int *)param_1[0x9b] + 0xbc))(), cVar2 == '\0')))) {
    param_1[0xa1] = 10;
  }
  else {
    iVar4 = param_1[0xa1];
    param_1[0xa1] = iVar4 + -1;
    if (iVar4 + -1 < 1) {
      iVar4 = FUN_005998e0(param_1[0x9b]);
      if ((iVar4 != 0) && (iVar4 = FUN_00401c30(iVar4), iVar4 != 0)) {
        bVar3 = FUN_00430950((undefined4 *)(iVar4 + 100),"heal");
        if ((!bVar3) ||
           (bVar3 = FUN_00430950((undefined4 *)(iVar4 + 100),"in_room_hospital"), !bVar3))
        goto LAB_00925c73;
      }
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x9b] + 0x1d4))();
      iVar4 = *piVar5;
      FUN_0043b570();
      (**(code **)(iVar4 + 100))();
      FUN_00924aa0((int)param_1);
      piVar5 = (int *)param_1[0xa2];
      if (piVar5 != (int *)0x0) {
        FUN_005e2f20(piVar5);
                    /* WARNING: Subroutine does not return */
        _free(piVar5);
      }
      param_1[0xa2] = 0;
      (**(code **)(param_1[0x96] + 4))();
      param_1[0x9b] = 0;
      (**(code **)param_1[0x96])();
    }
  }
LAB_00925c73:
  iVar4 = FUN_00925430((int)param_1);
  if (iVar4 != 0) {
    if (((int *)param_1[0x3c] == (int *)0x0) ||
       (cVar2 = (**(code **)(*(int *)param_1[0x3c] + 0xc4))(), cVar2 != '\0')) {
      *(undefined1 *)(iVar4 + 0x70) = 0;
    }
    *(bool *)(iVar4 + 0x71) = param_1[0x9b] == 0;
  }
  if (param_1[0x9b] != 0) {
    (**(code **)(*param_1 + 0x78))();
    iVar4 = param_1[0x9c];
    uVar10 = FUN_0043b570();
    fStack_14 = ((float)(int)uVar10 - (float)iVar4) / (float)(param_1[0x9d] - iVar4);
    if (0.0 <= fStack_14) {
      if (1.0 < fStack_14) {
        fStack_14 = 1.0;
      }
    }
    else {
      fStack_14 = 0.0;
    }
    if (((void *)param_1[0x8a] != (void *)0x0) &&
       (iVar4 = param_1[0x9b], iVar6 = FUN_00944fb0((void *)param_1[0x8a],0), iVar6 == iVar4)) {
      iVar4 = FUN_00944e20((void *)param_1[0x8a],0);
      if ((*(int *)(iVar4 + 0x2c) != 0) &&
         (this = *(void **)(*(int *)(iVar4 + 0x2c) + 0x214), this != (void *)0x0)) {
        FUN_009757a0(this,(byte *)"ai_progress",fStack_14,0);
        if (fStack_14 == 1.0) {
          FUN_009757a0(this,(byte *)0xd16590,1.0,0);
        }
        fVar9 = FUN_009722e0((int)this,(byte *)"ai_callback0");
        if ((float10)0.0 != fVar9) {
          FUN_009757a0(this,(byte *)"ai_callback0",0.0,0);
          pfVar7 = (float *)(**(code **)(*(int *)param_1[0x9b] + 0x38))();
          FUN_0041c7c0(pfVar7);
        }
        fVar9 = FUN_009722e0((int)this,(byte *)"ai_costume");
        if (((float10)0.0 != fVar9) &&
           (iVar4 = FUN_005998e0(param_1[0x9b]), *(int *)(iVar4 + 0x25c) != 0)) {
          iVar13 = 0;
          pTVar12 = &TM::DesireRehab::RTTI_Type_Descriptor;
          pTVar11 = &TM::TMBaseDesire::RTTI_Type_Descriptor;
          iVar6 = 0;
          iVar4 = FUN_005998e0(param_1[0x9b]);
          piVar5 = (int *)FUN_00401c30(iVar4);
          piVar5 = (int *)FUN_00ace790(piVar5,iVar6,pTVar11,pTVar12,iVar13);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x30))();
          }
        }
      }
    }
    if (param_1[0xa2] != 0) {
      FUN_005e2490((void *)param_1[0xa2],fStack_14);
    }
    if ((param_1[0x9f] != 0) &&
       (DAT_00e66050 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - param_1[0x9f]))) {
      param_1[0x9f] = 0;
      (**(code **)(*param_1 + 0x78))();
    }
    if ((char)param_1[0xa0] == '\0') {
      uVar10 = FUN_0043b570();
      if (param_1[0x9d] <= (int)uVar10) {
        piVar5 = (int *)FUN_00ace790((int *)param_1[0x9b],0,&TM::CStaff::RTTI_Type_Descriptor,
                                     &TM::CStar::RTTI_Type_Descriptor,0);
        this_00 = (int *)FUN_00ace790((int *)param_1[0x9b],0,&TM::CStaff::RTTI_Type_Descriptor,
                                      &TM::CExtra::RTTI_Type_Descriptor,0);
        if (piVar5 == (int *)0x0) {
          if (this_00 != (int *)0x0) {
            pfVar7 = (float *)(**(code **)(*this_00 + 0x1e4))();
            fVar1 = *pfVar7;
            fVar9 = FUN_004726e0();
            if (fVar9 + (float10)fVar1 <= (float10)1.0) {
              fVar9 = FUN_004726e0();
              fStack_14 = (float)(fVar9 + (float10)fVar1);
              uVar8 = extraout_ECX_02;
            }
            else {
              fStack_14 = 1.0;
              uVar8 = extraout_ECX_01;
            }
            FUN_00407070(&stack0xffffffd8,fStack_14);
            FUN_0056fba0(this_00,uVar8);
          }
        }
        else {
          pfVar7 = (float *)(**(code **)(*piVar5 + 0x1e4))();
          fVar1 = *pfVar7;
          fVar9 = FUN_004726e0();
          if (fVar9 + (float10)fVar1 <= (float10)1.0) {
            fVar9 = FUN_004726e0();
            fStack_14 = (float)(fVar9 + (float10)fVar1);
            uVar8 = extraout_ECX_00;
          }
          else {
            fStack_14 = 1.0;
            uVar8 = extraout_ECX;
          }
          FUN_00407070(&stack0xffffffd8,fStack_14);
          FUN_005873d0(piVar5,uVar8);
        }
        piVar5 = (int *)param_1[0xa2];
        if (piVar5 != (int *)0x0) {
          FUN_005e2f20(piVar5);
                    /* WARNING: Subroutine does not return */
          _free(piVar5);
        }
        param_1[0xa2] = 0;
        iVar4 = param_1[0x9b];
        (**(code **)(*param_1 + 0x4c))();
        (**(code **)(param_1[0x96] + 4))();
        param_1[0x9b] = iVar4;
        (**(code **)param_1[0x96])();
        *(undefined1 *)(param_1 + 0xa0) = 1;
        return;
      }
      if ((char)param_1[0xa0] == '\0') {
        return;
      }
    }
    iVar6 = 0;
    pTVar12 = &TM::CHospitalRoom::RTTI_Type_Descriptor;
    pTVar11 = &TM::TMRoom::RTTI_Type_Descriptor;
    iVar4 = 0;
    piVar5 = (int *)FUN_0053ae00(param_1[0x9b]);
    iVar4 = FUN_00ace790(piVar5,iVar4,pTVar11,pTVar12,iVar6);
    if (iVar4 == 0) {
      (**(code **)(param_1[0x96] + 4))();
      param_1[0x9b] = 0;
      (**(code **)param_1[0x96])();
    }
  }
  return;
}


//// FUNCTION FUN_00926040 @ 00926040 ////

undefined4 * __thiscall FUN_00926040(void *this,byte param_1)

{
  FUN_009257c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00926070 @ 00926070 ////

void __fastcall FUN_00926070(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION CInformationRoom_OnProjectDropped @ 009260c0 ////

void CInformationRoom_OnProjectDropped(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                 &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xcc))(1,1);
    }
  }
  return;
}


//// FUNCTION FUN_00926100 @ 00926100 ////

int * __thiscall FUN_00926100(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_00926190 @ 00926190 ////

void __cdecl FUN_00926190(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}


//// FUNCTION FUN_009262e0 @ 009262e0 ////

void __fastcall FUN_009262e0(int param_1)

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


//// FUNCTION FUN_00926350 @ 00926350 ////

void __cdecl FUN_00926350(void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _memmove((void *)(param_3 + iVar1 * -4),param_1,iVar1 * 4);
  return;
}


//// FUNCTION FUN_009263e0 @ 009263e0 ////

void __fastcall FUN_009263e0(int *param_1)

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
  puStack_8 = &LAB_00cf13d8;
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


//// FUNCTION FUN_009264b0 @ 009264b0 ////

/* WARNING: Removing unreachable block (ram,0x00926550) */

undefined4 * FUN_009264b0(undefined4 *param_1,int param_2)

{
  uint local_1c;
  char local_14 [14];
  undefined1 local_6;
  
  local_14[0] = '\0';
  local_1c = 0;
  if (param_2 == 0) {
    _strncpy(local_14,"button_finance",0xe);
  }
  else {
    if (param_2 != 1) goto LAB_00926523;
    _strncpy(local_14,"button_reviews",0xe);
  }
  local_6 = 0;
  local_1c = 0xe;
LAB_00926523:
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,local_14,local_1c);
  return param_1;
}


//// FUNCTION FUN_00926570 @ 00926570 ////

undefined4 *
FUN_00926570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_3c [20];
  undefined4 uStack_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf13fb;
  local_c = ExceptionList;
  uStack_28 = 0x9265a1;
  ExceptionList = &local_c;
  this = operator_new(0x220);
  local_4 = 0;
  if (this != (void *)0x0) {
    pcVar2 = local_3c;
    local_3c[0] = '\0';
    uVar3 = 0;
    uVar4 = 0x14;
    FUN_004015d0(&stack0xffffffb8,(char *)*param_4,param_4[1]);
    puVar1 = FUN_00933a90(this,*param_1,param_1[1],param_1[2],param_2,param_3,pcVar2,uVar3,uVar4);
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_00926670 @ 00926670 ////

void __fastcall FUN_00926670(int param_1)

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


//// FUNCTION FUN_00926690 @ 00926690 ////

void __fastcall FUN_00926690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d6ca30;
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


//// FUNCTION FUN_00926710 @ 00926710 ////

void * FUN_00926710(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = _memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


//// FUNCTION CInformationRoom_Constructor @ 00926740 ////

undefined4 * __fastcall CInformationRoom_Constructor(undefined4 *param_1)

{
  int *piVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  piVar1 = param_1 + 0x96;
  *param_1 = &PTR_FUN_00d6ca64;
  param_1[0x19] = &PTR_LAB_00d6ca40;
  param_1[0x99] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d6ca30;
  param_1[0x9b] = 0;
  local_4 = 1;
  FUN_0093b350(param_1,2);
  *(undefined1 *)((int)param_1 + 0x1c9) = 0;
  (**(code **)(*piVar1 + 4))();
  param_1[0x9b] = 0;
  (**(code **)*piVar1)();
  *(undefined1 *)(param_1 + 0x9c) = 0;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_009267e0 @ 009267e0 ////

void __fastcall FUN_009267e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1446;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d6ca64;
  param_1[0x19] = &PTR_LAB_00d6ca40;
  puVar2 = (undefined4 *)param_1[0x9b];
  local_4 = 1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x96] + 4))();
    param_1[0x9b] = 0;
    (**(code **)param_1[0x96])();
  }
  param_1[0x96] = &PTR_FUN_00d6ca30;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  if ((undefined4 *)param_1[0x98] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x98] = param_1[0x97];
  }
  if (param_1[0x97] != 0) {
    *(undefined4 *)(param_1[0x97] + 4) = param_1[0x98];
  }
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_009268e0 @ 009268e0 ////

undefined4 * FUN_009268e0(undefined4 *param_1,int param_2,undefined4 *param_3)

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


//// FUNCTION FUN_00926910 @ 00926910 ////

undefined4 * __thiscall FUN_00926910(void *this,byte param_1)

{
  FUN_009267e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00926930 @ 00926930 ////

bool __thiscall FUN_00926930(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1460;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)&lpCaption_00d16918,uVar1);
  uVar1 = 0;
  if (param_1 == (int *)0x0) {
    for (uVar1 = 0;
        (iVar2 = *(int *)((int)this + 0x90), iVar2 != 0 &&
        (uVar1 < (uint)(*(int *)((int)this + 0x94) - iVar2 >> 2))); uVar1 = uVar1 + 1) {
      FUN_00931d40(*(void **)(iVar2 + uVar1 * 4),'\0');
    }
    ExceptionList = local_c;
    return false;
  }
  for (; (iVar2 = *(int *)((int)this + 0x90), iVar2 != 0 &&
         (uVar1 < (uint)(*(int *)((int)this + 0x94) - iVar2 >> 2))); uVar1 = uVar1 + 1) {
    (**(code **)(**(int **)(iVar2 + uVar1 * 4) + 0x7c))(param_1);
  }
  iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (iVar2 == 0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CStar::RTTI_Type_Descriptor,0);
    if (iVar2 == 0) {
      iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                           &TM::CInfoObject::RTTI_Type_Descriptor,0);
      ExceptionList = local_c;
      return iVar2 != 0;
    }
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x40;
    pcStack_4c = _malloc(0x40);
    _strncpy(pcStack_4c,"SITT_ACTION_INFORMATIONROOM_STAR",0x20);
    uStack_48 = 0x20;
    pcStack_4c[0x20] = '\0';
    uStack_4 = 1;
  }
  else {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x40;
    pcStack_4c = _malloc(0x40);
    _strncpy(pcStack_4c,"SITT_ACTION_INFORMATIONROOM_PROJECT",0x23);
    uStack_48 = 0x23;
    pcStack_4c[0x23] = '\0';
    uStack_4 = 0;
  }
  puVar3 = FUN_009b5030(apvStack_2c,&pcStack_4c);
  FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)*puVar3,puVar3[1]);
  if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_4c);
  }
  ExceptionList = local_c;
  return true;
}


//// FUNCTION FUN_00926b50 @ 00926b50 ////

void FUN_00926b50(void)

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
  puStack_8 = &LAB_00cf1478;
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


//// FUNCTION FUN_00926bc0 @ 00926bc0 ////

void __thiscall FUN_00926bc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
      uVar6 = FUN_00926b50();
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
      _Dst = FUN_009268e0((undefined4 *)((int)pvVar4 + _Size),param_2,&param_3);
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
      FUN_00926710(param_1,iVar5,param_1 + param_2);
      FUN_009268e0(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar5 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar5;
      FUN_00926190(param_1,(undefined4 *)(iVar5 + param_2 * -4),&param_3);
      return;
    }
    pvVar3 = (void *)(iVar5 + param_2 * -4);
    pvVar4 = FUN_00926710(pvVar3,iVar5,(void *)iVar5);
    *(void **)((int)this + 8) = pvVar4;
    FUN_00926350(param_1,(int)pvVar3,iVar5);
    FUN_00926190(param_1,param_1 + param_2,&param_3);
  }
  return;
}


//// FUNCTION FUN_00926df0 @ 00926df0 ////

void __thiscall FUN_00926df0(void *this,undefined4 *param_1)

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
  FUN_00926bc0(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00927040 @ 00927040 ////

void __fastcall FUN_00927040(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00927080 @ 00927080 ////

void FUN_00927080(void)

{
  return;
}


//// FUNCTION FUN_009271b0 @ 009271b0 ////

void __fastcall FUN_009271b0(int *param_1)

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
  puStack_8 = &LAB_00cf14b8;
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


//// FUNCTION CLeadsRoom_Constructor @ 00927280 ////

undefined4 * __fastcall CLeadsRoom_Constructor(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  char local_30 [12];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf14d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6cb7c;
  param_1[0x19] = &PTR_LAB_00d6cb5c;
  pcVar1 = local_30;
  local_4 = 0;
  local_30[0] = '\0';
  uVar2 = 0;
  uVar3 = 0x14;
  FUN_004015d0(&stack0xffffffc4,"button_actor",0xc);
  FUN_0093c1b0(param_1,pcVar1,uVar2,uVar3);
  FUN_0093b350(param_1,0);
  FUN_0093b340(param_1,0);
  FUN_0093b330(param_1,0);
  uStack_24 = 0x92731a;
  FUN_004015d0(param_1 + 0x41,"casting",7);
  FUN_0093cd90(param_1,'\x01');
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00927350 @ 00927350 ////

undefined4 * __thiscall FUN_00927350(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00927380 @ 00927380 ////

void __fastcall FUN_00927380(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 *puVar5;
  void *this;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  uint uVar6;
  char *pcVar7;
  TypeDescriptor *pTVar8;
  float fVar9;
  TypeDescriptor *pTVar10;
  int iVar11;
  float local_2c;
  float local_28;
  int local_24;
  undefined1 *puStack_20;
  uint uStack_1c;
  uint uStack_18;
  undefined1 auStack_14 [20];
  
  local_28 = 0.0;
  local_24 = 0;
  iVar1 = FUN_00ace790(*(int **)(*(int *)((int)param_1 + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  iVar2 = extraout_EDX;
  if (iVar1 != 0) {
    iVar2 = CFacilityPreProduction_GetOccupyingRoom(iVar1);
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x364) != '\0')) {
      iVar2 = extraout_EDX_00;
      if ((*(int *)((int)param_1 + 0xf8) != 0) &&
         (iVar2 = *(int *)((int)param_1 + 0xfc) - *(int *)((int)param_1 + 0xf8),
         iVar1 = iVar2 >> 0x1f, iVar2 = iVar2 / 0x18 + iVar1, iVar2 != iVar1)) {
        FUN_0093e410(param_1,0);
        iVar2 = extraout_EDX_02;
      }
    }
    else {
      iVar11 = 0;
      pTVar10 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
      pTVar8 = &TM::CPhaseBase::RTTI_Type_Descriptor;
      iVar1 = 0;
      piVar3 = (int *)FUN_005b22a0(iVar2);
      piVar3 = (int *)FUN_00ace790(piVar3,iVar1,pTVar8,pTVar10,iVar11);
      if (piVar3 != (int *)0x0) {
        pfVar4 = (float *)(**(code **)(*piVar3 + 0x38))(&local_24);
        local_28 = *pfVar4;
      }
      local_24 = FUN_005b2770(iVar2);
      iVar2 = extraout_EDX_01;
    }
  }
  if (*(int *)((int)param_1 + 0x228) != 0) {
    uVar6 = 0;
    do {
      iVar1 = FUN_00944fb0(*(void **)((int)param_1 + 0x228),uVar6);
      iVar2 = extraout_EDX_03;
      if (iVar1 != 0) {
        iVar2 = FUN_00944e20(*(void **)((int)param_1 + 0x228),uVar6);
        iVar1 = *(int *)(iVar2 + 0x2c);
        iVar2 = extraout_EDX_04;
        if ((iVar1 != 0) && (this = *(void **)(iVar1 + 0x214), this != (void *)0x0)) {
          if (local_28 <= 0.0) {
            fVar9 = 0.0;
            pcVar7 = "ai_roles_filled";
          }
          else {
            FUN_009757a0(this,(byte *)0xd6c054,1.0,0);
            this = *(void **)(iVar1 + 0x214);
            pcVar7 = "ai_progress";
            fVar9 = local_28;
          }
          FUN_009757a0(this,(byte *)pcVar7,fVar9,0);
          local_2c = 0.0;
          if (local_24 != 0) {
            puVar5 = (undefined4 *)FUN_00449b40(local_24);
            puStack_20 = auStack_14;
            auStack_14[0] = 0;
            uStack_1c = 0;
            uStack_18 = 0x14;
            FUN_004015d0(&puStack_20,(char *)*puVar5,puVar5[1]);
            if (6 < uStack_1c) {
              switch(puStack_20[6]) {
              case 0x61:
                local_2c = 0.2;
                break;
              case 99:
                local_2c = 0.4;
                break;
              case 0x68:
                local_2c = 0.6;
                break;
              case 0x72:
                local_2c = 0.8;
                break;
              case 0x73:
                local_2c = 1.0;
              }
            }
            if (0x14 < uStack_18) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_20);
            }
          }
          FUN_009757a0(*(void **)(iVar1 + 0x214),(byte *)"ai_genre",local_2c,0);
          iVar2 = extraout_EDX_05;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 3);
  }
  TMRoom_Tick((uint)param_1,iVar2);
  return;
}


//// FUNCTION CLeadsRoom_OnPersonDropped @ 009275d0 ////

void __thiscall CLeadsRoom_OnPersonDropped(void *this,int *param_1)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  void *this_00;
  int *piVar8;
  void *pvVar9;
  undefined4 uVar10;
  float *pfVar11;
  uint uVar12;
  TypeDescriptor *pTVar13;
  TypeDescriptor *pTVar14;
  int iVar15;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1532;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  piVar5 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  if ((piVar4 == (int *)0x0) && (piVar5 == (int *)0x0)) {
    ExceptionList = local_c;
    return;
  }
  piVar6 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if ((piVar6 != (int *)0x0) && (cVar3 = (**(code **)(*piVar6 + 0x204))(), cVar3 == '\0')) {
    ExceptionList = local_c;
    return;
  }
  iVar7 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  if (iVar7 == 0) {
    ExceptionList = local_c;
    return;
  }
  this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar7);
  if (this_00 == (void *)0x0) {
    ExceptionList = local_c;
    return;
  }
  piVar8 = (int *)GetPlayerStudio();
  (**(code **)(*piVar8 + 0x30))(piVar6);
  bVar2 = false;
  pvVar9 = (void *)FUN_005b2220((int)this_00);
  if (*(int *)((int)this + 0x9c) == 0) {
    if ((((DAT_0104a974 == 0) || (*(float *)(DAT_0104a974 + 0x80) == 0.0)) && (piVar5 != (int *)0x0)
        ) && ((cVar3 = FUN_0056f530((int)piVar5), cVar3 != '\0' &&
              (iVar7 = *(int *)((int)pvVar9 + 100), iVar7 != *(int *)((int)pvVar9 + 0x68))))) {
      do {
        pvVar1 = *(void **)(iVar7 + 0x14);
        uVar10 = FUN_005a6140((int)pvVar1);
        if (((char)uVar10 != '\0') &&
           ((pfVar11 = (float *)FUN_005b60f0(this_00,&fStack_10,(int)pvVar1), 0.0 < *pfVar11 &&
            (iVar15 = FUN_005a64e0((int)pvVar1), iVar15 == 0)))) {
          FUN_005a6480(pvVar1,piVar6);
          bVar2 = true;
          pvVar9 = (void *)FUN_0093c970(this);
          if (pvVar9 == (void *)0x0) goto LAB_009278a9;
          iVar7 = FUN_005a6130((int)pvVar1);
          piVar8 = piVar6;
          if (iVar7 == 1) {
            uVar12 = 3;
            goto LAB_0092789a;
          }
          if (iVar7 == 2) {
            uVar12 = 4;
          }
          else {
            if (iVar7 != 3) goto LAB_009278a9;
            uVar12 = 5;
          }
          goto LAB_0092789a;
        }
        iVar7 = iVar7 + 0x18;
      } while (iVar7 != *(int *)((int)pvVar9 + 0x68));
    }
    iVar7 = *(int *)((int)pvVar9 + 100);
    if (iVar7 == *(int *)((int)pvVar9 + 0x68)) {
      ExceptionList = local_c;
      return;
    }
    while( true ) {
      pvVar1 = *(void **)(iVar7 + 0x14);
      iVar15 = FUN_005a6470((int)pvVar1);
      if ((iVar15 == 0) && (uVar10 = FUN_005a6140((int)pvVar1), (char)uVar10 != '\0')) break;
      iVar7 = iVar7 + 0x18;
      if (iVar7 == *(int *)((int)pvVar9 + 0x68)) {
        ExceptionList = local_c;
        return;
      }
    }
    FUN_005b4140(this_00,(int)piVar6,pvVar1);
    pvVar9 = (void *)FUN_0093c970(this);
    if (pvVar9 != (void *)0x0) {
      iVar7 = FUN_005a6130((int)pvVar1);
      if (iVar7 == 1) {
        uVar12 = 0;
      }
      else if (iVar7 == 2) {
        uVar12 = 1;
      }
      else {
        if (iVar7 != 3) goto LAB_009278a9;
        uVar12 = 2;
      }
      piVar8 = (int *)FUN_005a6470((int)pvVar1);
LAB_0092789a:
      FUN_00945330(pvVar9,piVar8,uVar12);
    }
  }
  else {
    iVar7 = *(int *)(*(int *)((int)this + 0x9c) + 0x1b8);
    bVar2 = 2 < iVar7;
    if (bVar2) {
      iVar7 = iVar7 + -3;
    }
    if (iVar7 == 0) {
      iVar7 = 1;
    }
    else if (iVar7 == 1) {
      iVar7 = 2;
    }
    else {
      if (iVar7 != 2) {
        ExceptionList = local_c;
        return;
      }
      iVar7 = 3;
    }
    pvVar9 = (void *)FUN_005a76b0(pvVar9,iVar7,0);
    if (pvVar9 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if (bVar2) {
      FUN_005a6480(pvVar9,piVar6);
    }
    else {
      FUN_005b4140(this_00,(int)piVar6,pvVar9);
    }
  }
LAB_009278a9:
  piVar8 = (int *)FUN_005b2780((int)this_00);
  if (piVar8 == piVar6) {
    FUN_005b6c90(this_00,0);
    goto LAB_00927957;
  }
  if (piVar5 == (int *)0x0) {
    if (piVar4 == (int *)0x0) goto LAB_00927957;
    piVar5 = piVar4;
    if (piVar4[0x2d4] == 3) {
      if (piVar4[0x205] == 3) goto LAB_00927957;
      (**(code **)(*piVar4 + 0x224))(3,0);
      iVar7 = 3;
    }
    else {
      if (piVar4[0x205] == 2) goto LAB_00927957;
      (**(code **)(*piVar4 + 0x224))(2,0);
      iVar7 = 2;
    }
  }
  else {
    cVar3 = FUN_0056f530((int)piVar5);
    if (cVar3 != '\0') {
      if (piVar6[0x205] != 0x10) {
        (**(code **)(*piVar6 + 0x224))(0x10,0);
      }
      goto LAB_00927957;
    }
    if (piVar5[0x205] == 4) goto LAB_00927957;
    (**(code **)(*piVar5 + 0x224))(4,0);
    iVar7 = 4;
  }
  CStaff_ApplyJobCostumeAndPlacement(piVar5,iVar7);
LAB_00927957:
  iVar15 = 0;
  pTVar14 = &TM::CPhasePreProduction::RTTI_Type_Descriptor;
  pTVar13 = &TM::CPhaseBase::RTTI_Type_Descriptor;
  iVar7 = 0;
  piVar5 = (int *)FUN_005b22a0((int)this_00);
  piVar5 = (int *)FUN_00ace790(piVar5,iVar7,pTVar13,pTVar14,iVar15);
  if ((piVar5 != (int *)0x0) && (!bVar2)) {
    (**(code **)(*piVar5 + 0x40))();
  }
  if (piVar4 != (int *)0x0) {
    pvVar9 = operator_new(0x174);
    uStack_4 = 0;
    if (pvVar9 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = ShootMoodPip_Constructor(pvVar9,0,piVar4);
    }
    uStack_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar5);
    pvVar9 = operator_new(0x18c);
    uStack_4 = 1;
    if (pvVar9 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = ChemistryPip_Constructor(pvVar9,0,piVar4,(int)this_00);
    }
    uStack_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar5);
    pvVar9 = operator_new(0x18c);
    uStack_4 = 2;
    if (pvVar9 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = GenreFitPip_Constructor(pvVar9,0,piVar4,(int)this_00);
    }
    uStack_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar5);
    pvVar9 = operator_new(0x18c);
    uStack_4 = 3;
    if (pvVar9 == (void *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = ExperiencePip_Constructor(pvVar9,0,piVar4,(int)this_00);
    }
    uStack_4 = 0xffffffff;
    FUN_00956840(DAT_010507c0,piVar5);
  }
  pvVar9 = operator_new(0x160);
  uStack_4 = 4;
  if (pvVar9 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = CastingPerkPip_Constructor(pvVar9,1,param_1,0);
  }
  uStack_4 = 0xffffffff;
  FUN_00956840(DAT_010507c0,piVar5);
  pvVar9 = operator_new(0x160);
  uStack_4 = 5;
  if (pvVar9 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = CastingPerkPip_Constructor(pvVar9,4,param_1,0);
  }
  uStack_4 = 0xffffffff;
  FUN_00956840(DAT_010507c0,piVar5);
  TMRoom_RegisterOccupant(this,piVar6);
  TMRoom_FinalizeSlotAssignment(this,piVar6,0);
  FUN_005b2710((int)this_00);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00927b40 @ 00927b40 ////

uint __thiscall FUN_00927b40(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  void *this_00;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  float fStack_50;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uVar2 = FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)&lpCaption_00d16918,uVar2);
  if (param_1 == (int *)0x0) {
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  piVar3 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CExtra::RTTI_Type_Descriptor,0);
  piVar4 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar4 == (int *)0x0) {
    uVar2 = 0;
    if (piVar3 == (int *)0x0) goto LAB_00927bd9;
LAB_00927bf3:
    uVar2 = (**(code **)(*piVar3 + 0x204))();
    if ((char)uVar2 == '\0') goto LAB_00927bd9;
  }
  else if (piVar3 != (int *)0x0) goto LAB_00927bf3;
  if (piVar4 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar4 + 0x204))();
    if ((char)uVar2 == '\0') {
LAB_00927bd9:
      ExceptionList = local_c;
      return uVar2 & 0xffffff00;
    }
  }
  iVar5 = FUN_00ace790(*(int **)(*(int *)((int)this + 0xc0) + 0x24c),0,
                       &TM::TMFixedAsset::RTTI_Type_Descriptor,
                       &TM::CFacilityPreProduction::RTTI_Type_Descriptor,0);
  uVar2 = 0;
  if (iVar5 != 0) {
    this_00 = (void *)CFacilityPreProduction_GetOccupyingRoom(iVar5);
    uVar2 = 0;
    if (this_00 != (void *)0x0) {
      iVar5 = FUN_005b2220((int)this_00);
      uVar12 = 0;
      iVar11 = 0;
      while (uVar2 = 0, *(int *)(iVar5 + 100) != 0) {
        uVar2 = (*(int *)(iVar5 + 0x68) - *(int *)(iVar5 + 100)) / 0x18;
        if (uVar2 <= uVar12) break;
        iVar9 = *(int *)(iVar11 + 0x14 + *(int *)(iVar5 + 100));
        if (iVar9 != 0) {
          uVar6 = FUN_005a6140(iVar9);
          if ((char)uVar6 != '\0') {
            iVar7 = FUN_005a6470(iVar9);
            if (iVar7 == 0) {
LAB_00927ced:
              pcStack_4c = acStack_40;
              acStack_40[0] = '\0';
              uStack_48 = 0;
              uStack_44 = 0x20;
              pcStack_4c = _malloc(0x20);
              _strncpy(pcStack_4c,"SITT_ACTION_CASTROOM_HIREACTOR",0x1e);
              uStack_48 = 0x1e;
              pcStack_4c[0x1e] = '\0';
              uStack_4 = 0;
              puVar10 = FUN_009b5030(apvStack_2c,&pcStack_4c);
              uVar6 = FUN_004036d0((void *)((int)this + 0x200),(wchar_t *)*puVar10,puVar10[1]);
              if (10 < uStack_24) {
                    /* WARNING: Subroutine does not return */
                _free(apvStack_2c[0]);
              }
              if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
                _free(pcStack_4c);
              }
              ExceptionList = local_c;
              return CONCAT31((int3)((uint)uVar6 >> 8),1);
            }
            pfVar8 = (float *)FUN_005b60f0(this_00,&fStack_50,iVar9);
            if (0.0 < *pfVar8) {
              iVar9 = FUN_005a64e0(iVar9);
              if ((iVar9 == 0) && (piVar3 != (int *)0x0)) {
                cVar1 = FUN_0056f530((int)piVar3);
                if (cVar1 != '\0') goto LAB_00927ced;
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 0x18;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


//// FUNCTION FUN_009281b0 @ 009281b0 ////

void __fastcall FUN_009281b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_009281e0 @ 009281e0 ////

void FUN_009281e0(void)

{
  return;
}


//// FUNCTION CMarketingRoom_Constructor @ 009281f0 ////

undefined4 * __fastcall CMarketingRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6cd14;
  param_1[0x19] = &PTR_LAB_00d6ccf4;
  FUN_0093b350(param_1,10);
  FUN_0093b340(param_1,8);
  FUN_0093b330(param_1,5);
  param_1[0x96] = 2;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION CMarketingRoom_OnProjectDropped @ 00928260 ////

void __thiscall CMarketingRoom_OnProjectDropped(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if ((iVar1 != 0) && (this_00 = (void *)FUN_005d1940(iVar1), this_00 != (void *)0x0)) {
    piVar2 = (int *)FUN_005b22a0((int)this_00);
    iVar1 = (**(code **)(*piVar2 + 0x24))();
    if (iVar1 == 6) {
      FUN_005b0fe0(this_00,*(undefined4 *)((int)this + 600));
      FUN_00470a70(DAT_0104917c,this_00,0x80000b1f,0,0);
    }
  }
  return;
}


//// FUNCTION FUN_009282e0 @ 009282e0 ////

void __thiscall FUN_009282e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 600) = param_1;
  return;
}


//// FUNCTION FUN_00928320 @ 00928320 ////

undefined4 * __thiscall FUN_00928320(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00928350 @ 00928350 ////

void __fastcall FUN_00928350(int *param_1)

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
  puStack_8 = &LAB_00cf15b8;
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


//// FUNCTION FUN_009288c0 @ 009288c0 ////

void __fastcall FUN_009288c0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00928900 @ 00928900 ////

void FUN_00928900(void)

{
  return;
}


//// FUNCTION MovieViewerRoom_Constructor @ 00928910 ////

undefined4 * __fastcall MovieViewerRoom_Constructor(undefined4 *param_1)

{
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6cee4;
  param_1[0x19] = &PTR_LAB_00d6cec0;
  return param_1;
}


//// FUNCTION FUN_009289c0 @ 009289c0 ////

undefined4 * __thiscall FUN_009289c0(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION MovieViewerRoom_OnGenericDropped @ 009289f0 ////

void MovieViewerRoom_OnGenericDropped(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auStack_c [12];
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CInfoObject::RTTI_Type_Descriptor,0);
  if (iVar1 != 0) {
    FUN_007843b0(0,0,0,1);
    FUN_0077e180();
    return;
  }
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_005d1940((int)piVar2);
    piVar3 = (int *)FUN_005b22a0(iVar1);
    iVar1 = (**(code **)(*piVar3 + 0x24))();
    if ((5 < iVar1) && (iVar1 < 8)) {
      uVar6 = 1;
      uVar5 = 0;
      uVar4 = 0;
      iVar1 = FUN_005d1940((int)piVar2);
      FUN_007843b0(iVar1,uVar4,uVar5,uVar6);
      FUN_00775ee0(DAT_0104e478);
      if ((int *)piVar2[0xa0] != (int *)0x0) {
        iVar1 = *piVar2;
        uVar5 = (**(code **)(*(int *)piVar2[0xa0] + 0x34))(auStack_c);
        (**(code **)(iVar1 + 0x30))(uVar5);
        (**(code **)(*piVar2 + 0xcc))(1,1);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00928ad0 @ 00928ad0 ////

void __fastcall FUN_00928ad0(int *param_1)

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
  puStack_8 = &LAB_00cf1648;
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


//// FUNCTION FUN_00928ba0 @ 00928ba0 ////

void __fastcall FUN_00928ba0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00928bd0 @ 00928bd0 ////

void FUN_00928bd0(void)

{
  return;
}


//// FUNCTION CPostProdRoom_Constructor @ 00928be0 ////

undefined4 * __fastcall CPostProdRoom_Constructor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d6cfa4;
  param_1[0x19] = &PTR_LAB_00d6cf84;
  *(undefined1 *)(param_1 + 0x96) = 1;
  FUN_0093b350(param_1,1);
  FUN_0093b340(param_1,1);
  FUN_0093b330(param_1,1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00928c70 @ 00928c70 ////

undefined4 * __thiscall FUN_00928c70(void *this,byte param_1)

{
  TMRoom_Destructor(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION CPostProdRoom_OnProjectDropped @ 00928ca0 ////

void __thiscall CPostProdRoom_OnProjectDropped(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auStack_c [4];
  float fStack_8;
  
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CProjectObject::RTTI_Type_Descriptor,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_005d1940((int)piVar1);
    piVar3 = (int *)FUN_005b22a0(iVar2);
    iVar2 = (**(code **)(*piVar3 + 0x24))();
    if (iVar2 == 6) {
      uVar6 = *(undefined1 *)((int)this + 600);
      uVar5 = 0;
      uVar4 = 0;
      iVar2 = FUN_005d1940((int)piVar1);
      FUN_007843b0(iVar2,uVar4,uVar5,uVar6);
      FUN_00771220(DAT_0104e478,'\x01');
      FUN_0093e3a0(this,(int)param_1);
      piVar3 = *(int **)(*(int *)((int)this + 0xc0) + 0x24c);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x34))(auStack_c);
        fStack_8 = fStack_8 + 15.0;
        (**(code **)(*piVar1 + 0x2c))(&stack0xfffffff0);
        (**(code **)(*piVar1 + 0x30))(&stack0xffffffec);
      }
    }
  }
  return;
}


//// FUNCTION FUN_00928d70 @ 00928d70 ////

void __fastcall FUN_00928d70(int *param_1)

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
  puStack_8 = &LAB_00cf1688;
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


//// FUNCTION FUN_009290e0 @ 009290e0 ////

void __fastcall FUN_009290e0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_00929110 @ 00929110 ////

void FUN_00929110(void)

{
  return;
}


//// FUNCTION FUN_00929120 @ 00929120 ////

void __cdecl FUN_00929120(undefined4 param_1)

{
  DAT_00e65c6c = param_1;
  return;
}


//// FUNCTION FUN_00929300 @ 00929300 ////

void __fastcall FUN_00929300(int *param_1)

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
  puStack_8 = &LAB_00cf1708;
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


//// FUNCTION FUN_009293d0 @ 009293d0 ////

void __fastcall FUN_009293d0(int param_1)

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
  puStack_8 = &LAB_00cf1748;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\PRRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    ExceptionList = &local_c;
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
    local_4 = 0;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x204));
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
    FUN_00990970((int *)(param_1 + 0x204));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\PRRoom.cpp";
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
    local_4 = 1;
    iVar4 = FUN_00ace3df((int *)(param_1 + 0x21c));
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
  uVar3 = FUN_0098b490("PMovie");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x21c));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\PRRoom.cpp";
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
  uVar3 = FUN_0098b490("BDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1fc),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\PRRoom.cpp";
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
  uVar3 = FUN_0098b490("DayAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x1f8),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\PRRoom.cpp";
    pcVar2 = (char *)&DAT_010581d8;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar2 = pcVar2 + 4;
    }
    local_2c = local_20;
    *pcVar2 = *pcVar5;
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
    pcVar2 = (char *)FUN_00ace33d(0xe4fe30);
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
  uVar3 = FUN_0098b490("TickAdded");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 500),4);
  }
  FUN_0093f3f0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00929870 @ 00929870 ////

uint __thiscall FUN_00929870(void *this,int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int *piVar9;
  float *pfVar10;
  float10 fVar11;
  float fVar12;
  undefined4 uStack_54;
  float fStack_50;
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
  puStack_8 = &LAB_00cf1778;
  local_c = ExceptionList;
  pvVar8 = (void *)((int)this + 0x200);
  ExceptionList = &local_c;
  uVar2 = FUN_00ace02d((short *)&lpCaption_00d16918);
  uVar2 = FUN_004036d0(pvVar8,(wchar_t *)&lpCaption_00d16918,uVar2);
  *(undefined1 *)((int)this + 0x224) = 0;
  if (param_1 == (int *)0x0) {
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  iVar3 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  iVar4 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  pvVar6 = (void *)0x0;
  if (iVar4 != 0) {
    pvVar5 = (void *)FUN_005773c0(iVar4);
    pvVar6 = (void *)GetPlayerStudio();
    if (pvVar5 == pvVar6) {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x20;
      local_4c = _malloc(0x20);
      _strncpy(local_4c,"SITT_ACTION_PRROOM_STAR",0x17);
      local_48 = 0x17;
      local_4c[0x17] = '\0';
      local_4 = 0;
      puVar7 = FUN_009b5030(local_2c,&local_4c);
      pvVar8 = (void *)FUN_004036d0(pvVar8,(wchar_t *)*puVar7,puVar7[1]);
      if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      goto LAB_009299aa;
    }
  }
  if (iVar3 != 0) {
    iVar4 = FUN_005d1940(iVar3);
    piVar9 = (int *)FUN_005b22a0(iVar4);
    pvVar6 = (void *)(**(code **)(*piVar9 + 0x24))();
    if (2 < (int)pvVar6) {
      iVar4 = FUN_005d1940(iVar3);
      piVar9 = (int *)FUN_005b22a0(iVar4);
      pvVar6 = (void *)(**(code **)(*piVar9 + 0x24))();
      if ((int)pvVar6 < 7) {
        puVar7 = &uStack_54;
        pvVar6 = (void *)FUN_005d1940(iVar3);
        pfVar10 = (float *)FUN_005b2bd0(pvVar6,puVar7);
        fVar1 = *pfVar10;
        fVar12 = 0.5;
        pfVar10 = &fStack_50;
        pvVar6 = (void *)FUN_005d1940(iVar3);
        pfVar10 = (float *)CProject_GetQualityWithAwardBoost(pvVar6,pfVar10);
        fVar11 = FUN_004728e0(pfVar10,fVar12);
        if (fVar11 < (float10)fVar1 == (fVar11 == (float10)fVar1)) {
          FUN_00401de0(&local_4c,"SITT_ACTION_PRROOM_MOVIE",0xffffffff);
          local_4 = 2;
          puVar7 = FUN_009b5030(local_2c,&local_4c);
          pvVar8 = FUN_00403e70(pvVar8,puVar7);
          if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
LAB_009299aa:
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)pvVar8 >> 8),1);
        }
        FUN_00401de0(&local_4c,"SITT_ACTION_PRROOM_MAXXEDPR",0xffffffff);
        local_4 = 1;
        puVar7 = FUN_009b5030(local_2c,&local_4c);
        pvVar6 = FUN_00403e70(pvVar8,puVar7);
        if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        *(undefined1 *)((int)this + 0x224) = 1;
      }
    }
  }
  ExceptionList = local_c;
  return (uint)pvVar6 & 0xffffff00;
}


//// FUNCTION CPRRoom_OnGenericDropped @ 00929b40 ////

void __thiscall CPRRoom_OnGenericDropped(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  ulonglong uVar2;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CProjectObject::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)((int)this + 0x280) + 4))();
  *(int *)((int)this + 0x294) = iVar1;
  (*(code *)**(undefined4 **)((int)this + 0x280))();
  iVar1 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                       &TM::CStar::RTTI_Type_Descriptor,0);
  (**(code **)(*(int *)((int)this + 0x268) + 4))();
  *(int *)((int)this + 0x27c) = iVar1;
  (*(code *)**(undefined4 **)((int)this + 0x268))();
  if ((*(int *)((int)this + 0x294) != 0) || (*(int *)((int)this + 0x27c) != 0)) {
    TMRoom_OnObjectDropped(this,param_1);
    if (*(int **)((int)this + 0xf0) != (int *)0x0) {
      this_00 = (void *)FUN_00ace790(*(int **)((int)this + 0xf0),0,
                                     &TM::TMFixedAsset::RTTI_Type_Descriptor,
                                     &TM::CFacilityMarketing::RTTI_Type_Descriptor,0);
      if (this_00 != (void *)0x0) {
        FUN_00849070(this_00,param_1);
      }
    }
    uStack_c = *(undefined4 *)((int)this + 0x1f0);
    uStack_8 = *(undefined4 *)((int)this + 500);
    fStack_4 = *(float *)((int)this + 0x1f8) + 1.0;
    *(undefined4 *)((int)this + 600) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    uVar2 = FUN_0043b570();
    *(int *)((int)this + 0x25c) = (int)uVar2;
    if (*(int **)((int)this + 0x294) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x294) + 0x2c))(&uStack_c);
      (**(code **)(*(int *)this + 0x78))();
      return;
    }
    TMRoom_FinalizeSlotAssignment(this,*(int **)((int)this + 0x27c),0);
    (**(code **)(*(int *)this + 0x78))();
  }
  return;
}


//// FUNCTION FUN_00929c90 @ 00929c90 ////

void __fastcall FUN_00929c90(int param_1)

{
  int *_Memory;
  void *this;
  
  (**(code **)(*(int *)(param_1 + 0x280) + 4))();
  *(undefined4 *)(param_1 + 0x294) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x280))();
  (**(code **)(*(int *)(param_1 + 0x268) + 4))();
  *(undefined4 *)(param_1 + 0x27c) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x268))();
  _Memory = *(int **)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    this = (void *)FUN_00ace790(*(int **)(param_1 + 0xf0),0,&TM::TMFixedAsset::RTTI_Type_Descriptor,
                                &TM::CFacilityMarketing::RTTI_Type_Descriptor,0);
    if (this != (void *)0x0) {
      FUN_00849070(this,0);
    }
  }
  return;
}


//// FUNCTION FUN_00929d40 @ 00929d40 ////

void FUN_00929d40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
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
  puStack_8 = &LAB_00cf17d8;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    puVar2 = operator_new(0x528);
    bVar6 = puVar2 == (undefined4 *)0x0;
    local_4 = 0;
    if (bVar6) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      _strncpy(local_4c,"ROOM_PR_COMPLETE",0x10);
      local_48 = 0x10;
      local_4c[0x10] = '\0';
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_009b5030(local_2c,&local_4c);
      local_4 = 2;
      puVar2 = FUN_005e2b90(puVar2);
    }
    if ((!bVar6) && (10 < local_24)) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c[0]);
    }
    local_4 = 0xffffffff;
    if ((!bVar6) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    FUN_008d55e0(puVar2,2);
    pvVar3 = operator_new(0x70);
    local_4 = 5;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_008fa030(pvVar3,param_1,(undefined4 *)&DAT_00e54eec);
    }
    local_4 = 0xffffffff;
    FUN_008dcf70(puVar2,puVar4);
    FUN_005e2130(puVar2,0x32);
    puVar4 = puVar2;
    iVar5 = FUN_0071b2a0();
    pvVar3 = (void *)FUN_0071b920(iVar5);
    FUN_00640700(pvVar3,puVar4);
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00929ec0 @ 00929ec0 ////

void __fastcall FUN_00929ec0(int *param_1)

{
  FUN_00929c90((int)param_1);
  FUN_0093c8d0(param_1);
  return;
}


//// FUNCTION CPRRoom_Constructor @ 00929ed0 ////

/* WARNING: Removing unreachable block (ram,0x00929f9e) */

undefined4 * __fastcall CPRRoom_Constructor(undefined4 *param_1)

{
  char local_20 [10];
  undefined1 local_16;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1814;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  TMRoom_Constructor(param_1);
  *param_1 = &PTR_FUN_00d6d194;
  param_1[0x19] = &PTR_LAB_00d6d174;
  param_1[0x9d] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = param_1 + 0x9a;
  param_1[0x9a] = &PTR_FUN_00d16954;
  param_1[0x9f] = 0;
  param_1[0xa3] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = param_1 + 0xa0;
  param_1[0xa0] = &PTR_FUN_00d29d20;
  param_1[0xa5] = 0;
  local_4 = 2;
  param_1[0xa6] = 0;
  local_20[0] = '\0';
  _strncpy(local_20,"in_room_pr",10);
  local_16 = 0;
  FUN_004015d0(param_1 + 0x41,local_20,10);
  FUN_0093b350(param_1,1);
  FUN_00929c90((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_00929fe0 @ 00929fe0 ////

void __fastcall FUN_00929fe0(undefined4 *param_1)

{
  int *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf1844;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6d194;
  param_1[0x19] = &PTR_LAB_00d6d174;
  _Memory = (int *)param_1[0xa6];
  local_4 = 2;
  if (_Memory != (int *)0x0) {
    FUN_005e2f20(_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  param_1[0xa0] = &PTR_FUN_00d29d20;
  if ((undefined4 *)param_1[0xa2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa2] = param_1[0xa1];
  }
  if (param_1[0xa1] != 0) {
    *(undefined4 *)(param_1[0xa1] + 4) = param_1[0xa2];
  }
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa5] = 0;
  if ((undefined4 *)param_1[0xa2] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xa2] = param_1[0xa1];
  }
  if (param_1[0xa1] != 0) {
    *(undefined4 *)(param_1[0xa1] + 4) = param_1[0xa2];
  }
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0x9a] = &PTR_FUN_00d16954;
  if ((undefined4 *)param_1[0x9c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9c] = param_1[0x9b];
  }
  if (param_1[0x9b] != 0) {
    *(undefined4 *)(param_1[0x9b] + 4) = param_1[0x9c];
  }
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9f] = 0;
  if ((undefined4 *)param_1[0x9c] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x9c] = param_1[0x9b];
  }
  if (param_1[0x9b] != 0) {
    *(undefined4 *)(param_1[0x9b] + 4) = param_1[0x9c];
  }
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  local_4 = 0xffffffff;
  TMRoom_Destructor(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092a140 @ 0092a140 ////

void __fastcall FUN_0092a140(int param_1)

{
  FUN_00929c90(param_1);
  FUN_0093b260(param_1);
  return;
}


//// FUNCTION CPRRoom_OnGenericRemoved @ 0092a150 ////

void __thiscall CPRRoom_OnGenericRemoved(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_0043b570();
  iVar2 = *(int *)((int)this + 0x25c);
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStar::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                         &TM::CProjectObject::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      iVar2 = FUN_005d1940(iVar2);
      pvVar3 = (void *)FUN_005b2330(iVar2);
      FUN_005c58a0(pvVar3);
    }
  }
  else {
    piVar1 = (int *)(**(code **)(*piVar1 + 0x1d4))();
    (**(code **)(*piVar1 + 0x5c))((int)uVar4 - iVar2);
  }
  piVar1 = *(int **)((int)this + 0x298);
  if (piVar1 != (int *)0x0) {
    FUN_005e2f20(piVar1);
                    /* WARNING: Subroutine does not return */
    _free(piVar1);
  }
  *(undefined4 *)((int)this + 0x298) = 0;
  FUN_00929c90((int)this);
  return;
}


//// FUNCTION FUN_0092a200 @ 0092a200 ////

undefined4 * __thiscall FUN_0092a200(void *this,byte param_1)

{
  FUN_00929fe0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0092a220 @ 0092a220 ////

void __fastcall FUN_0092a220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  float *pfVar6;
  char cVar7;
  uint uVar8;
  float local_50;
  void *local_4c [2];
  uint local_44;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1858;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x27c) != 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_005890e0(*(int *)(param_1 + 0x27c));
    if (iVar1 != 0) {
      uVar2 = FUN_00590060(*(int *)(param_1 + 0x27c));
      cVar7 = '\x01';
      if ((char)uVar2 == '\0') {
        iVar1 = 6;
        pvVar3 = (void *)FUN_005890e0(*(int *)(param_1 + 0x27c));
        FUN_004937d0(pvVar3,iVar1,cVar7);
      }
      else {
        iVar1 = 8;
        pvVar3 = (void *)FUN_005890e0(*(int *)(param_1 + 0x27c));
        FUN_004937d0(pvVar3,iVar1,cVar7);
        pvVar3 = FUN_005900d0(*(int *)(param_1 + 0x27c));
        if (pvVar3 != (void *)0x0) {
          iVar1 = FUN_005b6b90((int)pvVar3);
          puVar4 = (undefined4 *)FUN_00449b40(iVar1);
          FUN_00403de0(local_4c,puVar4);
          uVar8 = 0xffffffff;
          local_4 = 0;
          iVar1 = FUN_004155b0(local_4c,"_",0);
          puVar4 = FUN_00430770(local_4c,local_2c,iVar1 + 1,uVar8);
          FUN_004015d0(local_4c,(char *)*puVar4,puVar4[1]);
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
          if (*(int *)(param_1 + 0x228) != 0) {
            piVar5 = (int *)FUN_00544d80(&DAT_01050608,(int *)&local_50,local_4c);
            if (*piVar5 == DAT_0105060c) {
              local_50 = 0.0;
            }
            else {
              pfVar6 = (float *)FUN_00515d20(&DAT_01050608,local_4c);
              local_50 = *pfVar6;
            }
            FUN_009450f0(*(void **)(param_1 + 0x228),0,(byte *)"ai_genre",local_50);
          }
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c[0]);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092a3a0 @ 0092a3a0 ////

void __fastcall FUN_0092a3a0(int *param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  uint *puVar6;
  void *this;
  int iVar7;
  undefined1 *puVar8;
  float local_74;
  undefined1 *puStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 *puStack_64;
  float fStack_60;
  char *pcStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  char acStack_48 [20];
  uint auStack_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1878;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  TMRoom_Tick((uint)param_1,param_2);
  local_74 = 0.0;
  if ((param_1[0x9f] != 0) || (param_1[0xa5] != 0)) {
    (**(code **)(*param_1 + 0x78))();
    iVar4 = *(int *)(DAT_0104cdf4 + 0x3c) - param_1[0x96];
    puStack_70 = (undefined1 *)(float)iVar4;
    if (iVar4 < 0) {
      puStack_70 = (undefined1 *)((float)puStack_70 + 4.2949673e+09);
    }
    fVar5 = FUN_0043b960(0xe4fa4c);
    fVar5 = (float10)(float)puStack_70 / (fVar5 * (float10)DAT_00e65c6c);
    if ((float10)0.0 <= fVar5) {
      if ((float10)1.0 < fVar5) {
        fVar5 = (float10)1.0;
      }
    }
    else {
      fVar5 = (float10)0.0;
    }
    local_74 = (float)fVar5;
    if (param_1[0xa6] != 0) {
      puStack_70 = &stack0xffffff78;
      FUN_005e2490((void *)param_1[0xa6],local_74);
    }
  }
  if ((param_1[0x99] != 0) && (DAT_00e66050 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - param_1[0x99]))
     ) {
    param_1[0x99] = 0;
    (**(code **)(*param_1 + 0x78))();
  }
  if (((char)param_1[0x98] == '\0') && (local_74 == 1.0)) {
    FUN_005392c0("HUD_PUBLICITY_PR_COMPLETE");
  }
  if (((int *)param_1[0x9f] == (int *)0x0) || (local_74 != 1.0)) {
    if (param_1[0xa5] != 0) {
      if ((char)param_1[0x98] != '\0') goto LAB_0092a67b;
      if (local_74 == 1.0) {
        FUN_0043b960(0xe4fa4c);
        FUN_00acd42c();
        iVar4 = FUN_005d1940(param_1[0xa5]);
        pvVar1 = (void *)FUN_005b2330(iVar4);
        FUN_005c58a0(pvVar1);
        iVar4 = FUN_005d1940(param_1[0xa5]);
        FUN_005b2950(iVar4);
        FUN_0041c9c0(auStack_34,"PR_COMPLETE");
        puVar8 = &DAT_00d17518;
        iVar7 = 0;
        puVar6 = auStack_34;
        auStack_34[0] = auStack_34[0] & 0xfffffffe;
        iVar4 = 2;
        pvVar1 = (void *)FUN_004f3b20();
        FUN_004f3270(pvVar1,iVar4,(byte *)puVar6,iVar7,puVar8);
        *(undefined1 *)(param_1 + 0x98) = 1;
      }
    }
LAB_0092a66f:
    if ((char)param_1[0x98] == '\0') {
      ExceptionList = pvStack_c;
      return;
    }
  }
  else {
    iVar4 = (**(code **)(*(int *)param_1[0x9f] + 0x1ec))();
    if (iVar4 == 0) {
LAB_0092a515:
      iVar4 = (**(code **)(*(int *)param_1[0x9f] + 0x1f0))();
      if (iVar4 == 0) {
        pvVar1 = (void *)(**(code **)(*(int *)param_1[0x9f] + 0x1fc))();
      }
      else {
        pvVar1 = (void *)(**(code **)(*(int *)param_1[0x9f] + 0x1f0))();
      }
      if (pvVar1 != (void *)0x0) goto LAB_0092a545;
LAB_0092a59f:
      if ((char)param_1[0x98] == '\0') {
        *(undefined1 *)(param_1 + 0x98) = 1;
        FUN_0092a220((int)param_1);
        goto LAB_0092a66f;
      }
    }
    else {
      iVar4 = (**(code **)(*(int *)param_1[0x9f] + 0x1ec))();
      pvVar1 = *(void **)(iVar4 + 0xa0);
      if (pvVar1 == (void *)0x0) goto LAB_0092a515;
LAB_0092a545:
      if ((char)param_1[0x98] == '\0') {
        FUN_0043b960(0xe4fa4c);
        FUN_00acd42c();
        piVar2 = (int *)(**(code **)(*(int *)param_1[0x9f] + 0x1d4))();
        (**(code **)(*piVar2 + 0x5c))();
        this = (void *)param_1[0x9f];
        puStack_70 = &stack0xffffff74;
        FUN_00585ff0(this,(undefined4 *)&stack0xffffff74);
        FUN_005b2880(pvVar1,(float)this);
        goto LAB_0092a59f;
      }
    }
  }
LAB_0092a67b:
  piVar2 = (int *)param_1[0xa6];
  if (piVar2 != (int *)0x0) {
    FUN_005e2f20(piVar2);
                    /* WARNING: Subroutine does not return */
    _free(piVar2);
  }
  param_1[0xa6] = 0;
  if ((param_1[0x9f] == 0) || (iVar4 = FUN_005998e0(param_1[0x9f]), iVar4 == 0)) {
    if ((param_1[0xa5] == 0) ||
       ((param_1[0x30] == 0 || (piVar2 = *(int **)(param_1[0x30] + 0x24c), piVar2 == (int *)0x0))))
    goto LAB_0092a7b5;
    pfVar3 = (float *)(**(code **)(*piVar2 + 0x48))();
    puStack_70 = (undefined1 *)(pfVar3[1] * 15.0);
    fStack_68 = 0.0;
    fStack_6c = -(*pfVar3 * 15.0);
    pfVar3 = (float *)(**(code **)(*(int *)param_1[0xa5] + 0x34))();
    fStack_6c = fStack_6c + pfVar3[2];
    puStack_70 = (undefined1 *)((float)puStack_70 + pfVar3[1]);
    local_74 = local_74 + *pfVar3;
    fStack_68 = local_74;
    puStack_64 = puStack_70;
    fStack_60 = fStack_6c;
    (**(code **)(*(int *)param_1[0xa5] + 0x2c))(&local_74);
    (**(code **)(*(int *)param_1[0xa5] + 0x30))(&stack0xffffff88);
    iVar4 = param_1[0xa5];
  }
  else {
    iVar4 = FUN_005998e0(param_1[0x9f]);
    if ((*(int *)(iVar4 + 0x25c) != 0) &&
       (pvVar1 = *(void **)(*(int *)(iVar4 + 0x25c) + 0x214), pvVar1 != (void *)0x0)) {
      FUN_009757a0(pvVar1,(byte *)0xd16590,1.0,0);
    }
    iVar4 = param_1[0x9f];
  }
  FUN_00929d40(iVar4);
LAB_0092a7b5:
  if (param_1[0x9f] != 0) {
    pcStack_54 = acStack_48;
    acStack_48[0] = '\0';
    uStack_50 = 0;
    uStack_4c = 0x20;
    pcStack_54 = _malloc(0x20);
    _strncpy(pcStack_54,"PIP_PRESSEVENT_OR_PR_UP",0x17);
    uStack_50 = 0x17;
    pcStack_54[0x17] = '\0';
    uStack_4 = 0;
    FUN_00590dc0((void *)param_1[0x9f],4,&pcStack_54,0);
    uStack_4 = 0xffffffff;
    if (0x14 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_54);
    }
  }
  FUN_0093e410(param_1,0x50);
  FUN_00929c90((int)param_1);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0092a8b0 @ 0092a8b0 ////

void __fastcall FUN_0092a8b0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0xe));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0092a8e0 @ 0092a8e0 ////

void FUN_0092a8e0(void)

{
  return;
}


//// FUNCTION FUN_0092a8f0 @ 0092a8f0 ////

void __fastcall FUN_0092a8f0(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0098fe70(param_1 + 4,(char *)(param_1 + -0x19));
  (**(code **)(*param_1 + 8))();
  FUN_0098d350((int)param_1);
  return;
}


//// FUNCTION FUN_0092a920 @ 0092a920 ////

void FUN_0092a920(void)

{
  return;
}


//// FUNCTION FUN_0092a930 @ 0092a930 ////

undefined4 __thiscall FUN_0092a930(void *this,int *param_1)

{
  uint uVar1;
  void *this_00;
  undefined4 uVar2;
  
  uVar1 = FUN_0093e3a0(this,(int)param_1);
  if ((char)uVar1 != '\0') {
    this_00 = (void *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                                   &TM::TMCharacter::RTTI_Type_Descriptor,0);
    uVar1 = 0;
    if (this_00 != (void *)0x0) {
      uVar2 = FUN_0053a230(this_00,1);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_0092a970 @ 0092a970 ////

undefined1 __fastcall FUN_0092a970(int param_1)

{
  return *(undefined1 *)(param_1 + 0x280);
}


//// FUNCTION FUN_0092aa10 @ 0092aa10 ////

int * __thiscall FUN_0092aa10(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0092ab30 @ 0092ab30 ////

void __cdecl FUN_0092ab30(int param_1)

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


//// FUNCTION FUN_0092ab50 @ 0092ab50 ////

void __cdecl FUN_0092ab50(int *param_1)

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


//// FUNCTION FUN_0092ab90 @ 0092ab90 ////

void __thiscall FUN_0092ab90(void *this,int *param_1)

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


//// FUNCTION FUN_0092acd0 @ 0092acd0 ////

void __fastcall FUN_0092acd0(int *param_1)

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


//// FUNCTION FUN_0092ad50 @ 0092ad50 ////

void __fastcall FUN_0092ad50(int *param_1)

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


//// FUNCTION FUN_0092ae30 @ 0092ae30 ////

int __fastcall FUN_0092ae30(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
}


//// FUNCTION FUN_0092ae90 @ 0092ae90 ////

void __fastcall FUN_0092ae90(int param_1)

{
  float fVar1;
  void *this;
  int iVar2;
  float10 fVar3;
  undefined4 local_4;
  
  iVar2 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(param_1 + 0x7c);
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar3 = FUN_0043fec0(9);
  fVar3 = (float10)fVar1 / fVar3;
  if ((float10)0.0 <= fVar3) {
    if (fVar3 <= (float10)1.0) {
      local_4 = (float)fVar3;
    }
    else {
      local_4 = 1.0;
    }
  }
  else {
    local_4 = 0.0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    this = (void *)FUN_0059c530(*(int *)(param_1 + 0x74));
    if (this != (void *)0x0) {
      FUN_0083bee0(this,local_4);
    }
  }
  if (local_4 == 1.0) {
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}


//// FUNCTION FUN_0092afc0 @ 0092afc0 ////

void __thiscall FUN_0092afc0(void *this,int param_1)

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


//// FUNCTION FUN_0092b040 @ 0092b040 ////

int * __fastcall FUN_0092b040(int *param_1)

{
  FUN_0092acd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0092b0a0 @ 0092b0a0 ////

int * __fastcall FUN_0092b0a0(int *param_1)

{
  FUN_0092ad50(param_1);
  return param_1;
}


//// FUNCTION FUN_0092b100 @ 0092b100 ////

void __fastcall FUN_0092b100(int *param_1)

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
  puStack_8 = &LAB_00cf1898;
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


//// FUNCTION FUN_0092b1d0 @ 0092b1d0 ////

void __fastcall FUN_0092b1d0(int param_1)

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
  puStack_8 = &LAB_00cf18e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
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
    DAT_010581d4 = 0x26;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 0;
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
  local_4 = 0xffffffff;
  uVar3 = FUN_0098b490("PStaff");
  if ((char)uVar3 != '\0') {
    FUN_00990970((int *)(param_1 + 0x28));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x27;
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
  uVar3 = FUN_0098b490("BIsDone");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x40),1);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
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
  uVar3 = FUN_0098b490("StartTime");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x44),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x29;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
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
  uVar3 = FUN_0098b490("StartExperience");
  if ((char)uVar3 != '\0') {
    FUN_00566d60((undefined4 *)(param_1 + 0x48));
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2a;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 4;
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
  uVar3 = FUN_0098b490("Index");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x4c),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2b;
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
  uVar3 = FUN_0098b490("(int&)(ExperienceVariable)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x50),4);
  }
  if (DAT_00e67469 == '\0') {
    pcVar5 = "C:\\movies\\dev\\TheMovies\\Rooms\\RehearseRoom.cpp";
    puVar6 = &DAT_010581d8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    local_2c = local_20;
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *(char *)((int)puVar6 + 2) = pcVar5[2];
    DAT_010581d4 = 0x2c;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"SLVAR CALLED: ",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 6;
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
  uVar3 = FUN_0098b490("(int&)(TimeRequired)");
  if ((char)uVar3 != '\0') {
    FUN_0098a430((undefined4 *)(param_1 + 0x54),4);
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092b820 @ 0092b820 ////

void __fastcall FUN_0092b820(int *param_1)

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
  puStack_8 = &LAB_00cf1908;
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


//// FUNCTION FUN_0092bc00 @ 0092bc00 ////

int * __thiscall FUN_0092bc00(void *this,void *param_1)

{
  undefined4 uVar1;
  void *this_00;
  int *this_01;
  uint unaff_ESI;
  char *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  char local_20 [4];
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1953;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_004cbc20(*(void **)((int)this + 0x27c),0);
  this_00 = operator_new(0x168);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    this_01 = DesireRehearse_Constructor(this_00,param_1,uVar1,*(char *)((int)this + 0x280) == '\0')
    ;
  }
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = &DAT_00000014;
  _strncpy(local_2c,"rehearse",8);
  local_28 = 8;
  local_2c[8] = '\0';
  local_4 = 1;
  (**(code **)(*this_01 + 0x44))(&local_2c,0,0,0,0);
  uStack_1c = 0xffffffff;
  if (0x14 < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  FUN_00842f90(this_01,1.0);
  ExceptionList = local_24;
  return this_01;
}


//// FUNCTION FUN_0092bd00 @ 0092bd00 ////

void __thiscall FUN_0092bd00(void *this,char param_1,char param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void **ppvVar7;
  char *pcVar8;
  char *pcVar9;
  void *local_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1968;
  local_c = ExceptionList;
  if (((*(int *)((int)this + 0xf8) != 0) &&
      (1 < (uint)((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18))) &&
     (param_3 == '\0')) {
    return;
  }
  if ((DAT_0104c6c8 == 0) && (param_2 == '\0')) {
    return;
  }
  pvVar6 = (void *)((int)this + 0x124);
  ExceptionList = &local_c;
  FUN_004015d0((void *)((int)this + 0x164),*(char **)((int)this + 0x124),
               *(uint *)((int)this + 0x128));
  FUN_004015d0(pvVar6,"",0);
  FUN_004cd890(*(void **)((int)this + 0x27c),local_2c);
  *(undefined1 *)((int)this + 0x280) = 0;
  local_4 = 0;
  cVar1 = (**(code **)(**(int **)((int)this + 0x27c) + 0xa4))();
  if ((cVar1 != '\0') || (uVar2 = FUN_004cba70(*(int *)((int)this + 0x27c)), (char)uVar2 != '\0')) {
    FUN_004015d0(pvVar6,"",0);
    goto LAB_0092bef3;
  }
  if (param_1 == '\0') {
    uVar4 = FUN_00919570((int)this + 0xf4);
    if (uVar4 < 2) {
      pcVar8 = "rehearsal_set_single";
    }
    else {
      pcVar8 = "rehearsal_set";
    }
  }
  else {
    if (*(int *)((int)this + 0x228) == 0) {
      pcVar8 = ".flm";
      ppvVar7 = local_2c;
      pvVar3 = FUN_00407630(pvVar6,"rehearsal_set_single");
      pvVar3 = FUN_004211a0(pvVar3,ppvVar7);
      FUN_00407630(pvVar3,pcVar8);
      (**(code **)(*(int *)this + 0x94))();
      FUN_00946070(*(void **)((int)this + 0x228),2);
      FUN_00403e20(pvVar6,"");
    }
    if (*(void **)((int)this + 0x228) == (void *)0x0) goto LAB_0092bef3;
    uVar4 = FUN_00944f80(*(void **)((int)this + 0x228),0);
    pvVar3 = *(void **)((int)this + 0x228);
    cVar1 = '\x01';
    uVar5 = FUN_0092ae30((int)pvVar3);
    if (1 < uVar5) {
      uVar5 = FUN_00944f80(pvVar3,1);
      cVar1 = (char)uVar5;
    }
    if ((char)uVar4 == '\0') {
      if (cVar1 == '\0') goto LAB_0092bef3;
    }
    else if (cVar1 != '\0') {
      pcVar8 = "rehearsal_set_single";
      goto LAB_0092be90;
    }
    pcVar8 = "rehearsal_2singles_set";
  }
LAB_0092be90:
  ppvVar7 = local_2c;
  pcVar9 = ".flm";
  pvVar6 = FUN_00407630(pvVar6,pcVar8);
  pvVar6 = FUN_004211a0(pvVar6,ppvVar7);
  FUN_00407630(pvVar6,pcVar9);
LAB_0092bef3:
  if (uStack_24 < 0x15) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_0092bf20 @ 0092bf20 ////

undefined4 * FUN_0092bf20(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  void *this;
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char local_5c [4];
  undefined4 uStack_58;
  char **ppcVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf198b;
  local_c = ExceptionList;
  if (param_3 < 2) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"button_rehearse",0xf);
    ppcVar5 = &local_2c;
    local_28 = 0xf;
    puVar1 = param_4;
    local_2c[0xf] = '\0';
    uStack_58 = 0x92bf93;
    FUN_00401ec0(puVar1,ppcVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    this = operator_new(0x220);
    local_4 = 0;
    if (this != (void *)0x0) {
      pcVar2 = local_5c;
      local_5c[0] = '\0';
      uVar3 = 0;
      uVar4 = 0x14;
      FUN_004015d0(&stack0xffffff98,(char *)*param_4,param_4[1]);
      puVar1 = FUN_00933750(this,*param_1,param_1[1],param_1[2],param_2,param_3,pcVar2,uVar3,uVar4);
      ExceptionList = local_c;
      return puVar1;
    }
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}


//// FUNCTION FUN_0092c0a0 @ 0092c0a0 ////

int * __fastcall FUN_0092c0a0(int *param_1)

{
  FUN_0092acd0(param_1);
  return param_1;
}


//// FUNCTION FUN_0092c120 @ 0092c120 ////

void __fastcall FUN_0092c120(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d6d334;
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


//// FUNCTION FUN_0092c1b0 @ 0092c1b0 ////

int * __fastcall FUN_0092c1b0(int *param_1)

{
  FUN_0092ad50(param_1);
  return param_1;
}


//// FUNCTION FUN_0092c220 @ 0092c220 ////

void FUN_0092c220(void)

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


//// FUNCTION FUN_0092c2f0 @ 0092c2f0 ////

void __fastcall FUN_0092c2f0(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d6d334;
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


//// FUNCTION FUN_0092c340 @ 0092c340 ////

void __thiscall FUN_0092c340(void *this,char param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 *puVar12;
  char **ppcVar13;
  void **ppvVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  char acStack_40 [20];
  void *local_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf19a8;
  pvStack_c = ExceptionList;
  if (((*(int *)((int)this + 0xf8) != 0) &&
      (ExceptionList = &pvStack_c,
      1 < (uint)((*(int *)((int)this + 0xfc) - *(int *)((int)this + 0xf8)) / 0x18))) ||
     ((DAT_0104c6c8 == 0 && (ExceptionList = &pvStack_c, param_1 == '\0')))) goto LAB_0092c50a;
  pvVar7 = (void *)((int)this + 0x124);
  ExceptionList = &pvStack_c;
  FUN_004015d0((void *)((int)this + 0x164),*(char **)((int)this + 0x124),
               *(uint *)((int)this + 0x128));
  FUN_004015d0(pvVar7,"",0);
  FUN_004cd890(*(void **)((int)this + 0x27c),local_2c);
  *(undefined1 *)((int)this + 0x280) = 0;
  local_4 = 0;
  cVar2 = (**(code **)(**(int **)((int)this + 0x27c) + 0xa4))();
  if (cVar2 == '\0') {
    uVar3 = FUN_004cba70(*(int *)((int)this + 0x27c));
    if ((char)uVar3 != '\0') goto LAB_0092c4e0;
    if (*(int *)((int)this + 0x228) == 0) {
      pcVar15 = ".flm";
      ppvVar14 = local_2c;
      pvVar4 = FUN_00407630(pvVar7,"rehearsal_set_single");
      pvVar4 = FUN_004211a0(pvVar4,ppvVar14);
      FUN_00407630(pvVar4,pcVar15);
      (**(code **)(*(int *)this + 0x94))();
      FUN_00946070(*(void **)((int)this + 0x228),2);
      FUN_00403e20(pvVar7,"");
    }
    if (*(void **)((int)this + 0x228) != (void *)0x0) {
      uVar5 = FUN_00944f80(*(void **)((int)this + 0x228),0);
      pvVar4 = *(void **)((int)this + 0x228);
      cVar2 = '\x01';
      uVar6 = FUN_0092ae30((int)pvVar4);
      if (1 < uVar6) {
        uVar6 = FUN_00944f80(pvVar4,1);
        cVar2 = (char)uVar6;
      }
      if ((char)uVar5 == '\0') {
        if (cVar2 != '\0') goto LAB_0092c4cf;
      }
      else {
        if (cVar2 == '\0') {
LAB_0092c4cf:
          pcVar15 = "rehearsal_2singles_set";
        }
        else {
          pcVar15 = "rehearsal_set_single";
        }
        ppvVar14 = local_2c;
        pcVar16 = ".flm";
        pvVar7 = FUN_00407630(pvVar7,pcVar15);
        pvVar7 = FUN_004211a0(pvVar7,ppvVar14);
        FUN_00407630(pvVar7,pcVar16);
      }
    }
  }
  else {
LAB_0092c4e0:
    FUN_004015d0(pvVar7,"",0);
  }
  local_4 = 0xffffffff;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
LAB_0092c50a:
  local_4 = 0xffffffff;
  pbVar10 = *(byte **)((int)this + 0x124);
  pbVar8 = *(byte **)((int)this + 0x164);
  puVar12 = (undefined4 *)((int)this + 0x124);
  do {
    bVar1 = *pbVar8;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0092c548:
      iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0092c54d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0092c548;
    pbVar8 = pbVar8 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar9 = 0;
LAB_0092c54d:
  if (iVar9 != 0) {
    pcStack_4c = acStack_40;
    acStack_40[0] = '\0';
    uStack_48 = 0;
    uStack_44 = 0x14;
    _strncpy(pcStack_4c,"",0);
    ppcVar13 = &pcStack_4c;
    uStack_48 = 0;
    *pcStack_4c = '\0';
    uVar3 = FUN_00401ec0(puVar12,ppcVar13);
    if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_4c);
    }
    if ((char)uVar3 == '\0') {
      (**(code **)(*(int *)this + 0x50))(1);
      (**(code **)(*(int *)this + 100))();
      FUN_0093cd90(this,'\x01');
    }
    else {
      (**(code **)(*(int *)this + 0x68))();
    }
  }
  FUN_0093d410((int)this);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0092c5f0 @ 0092c5f0 ////

void __fastcall FUN_0092c5f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cf19c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00d6d364;
  param_1[0xe] = &PTR_LAB_00d6d344;
  param_1[0x18] = &PTR_FUN_00d18c4c;
  local_4 = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  if ((undefined4 *)param_1[0x1a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x1a] = param_1[0x19];
  }
  if (param_1[0x19] != 0) {
    *(undefined4 *)(param_1[0x19] + 4) = param_1[0x1a];
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0098a1c0(param_1 + 0xe);
  local_4 = 0xffffffff;
  FUN_00526bb0(param_1);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092c6a0 @ 0092c6a0 ////

undefined4 __fastcall FUN_0092c6a0(int param_1)

{
  int *this;
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x8c) != 0) {
    iVar1 = FUN_0097e350(*(void **)(*(int *)(param_1 + 0x8c) + 0x11c),0);
    FUN_009dc300(iVar1);
    this_00 = *(void **)(*(int *)(param_1 + 0x8c) + 0x11c);
    *(void **)(param_1 + 0x44) = this_00;
    if (this_00 != (void *)0x0) {
      iVar1 = MeshRoomList_GetRoomByIndex(this_00,*(int *)(param_1 + 0x184));
      *(int *)(param_1 + 0x40) = iVar1;
    }
    this = (int *)(param_1 + -100);
    FUN_0093cc20((int)this);
    FUN_0093b690((int)this);
    uVar2 = FUN_0093cd90(this,*(char *)(param_1 + 0x164));
    iVar1 = CONCAT31((int3)((uint)uVar2 >> 8),*(char *)(param_1 + 0x162));
    if (*(char *)(param_1 + 0x162) != '\0') {
      FUN_0093c5e0(this,'\0');
      iVar1 = (**(code **)(*this + 100))();
      iVar3 = *(int *)(param_1 + 0x94);
      if (iVar3 != *(int *)(param_1 + 0x98)) {
        do {
          iVar1 = FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
          if (iVar1 != 0) {
            (**(code **)(*this + 0x6c))(iVar1);
          }
          iVar1 = *(int *)(param_1 + 0x98);
          iVar3 = iVar3 + 0x18;
        } while (iVar3 != iVar1);
      }
    }
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}


//// FUNCTION FUN_0092c770 @ 0092c770 ////

void __thiscall FUN_0092c770(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_0092c7e0 @ 0092c7e0 ////

void __thiscall FUN_0092c7e0(void *this,undefined4 *param_1,int param_2)

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
  *(undefined4 *)((int)this + 4) = &PTR_LAB_00d6d334;
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


//// FUNCTION FUN_0092c840 @ 0092c840 ////

void __fastcall FUN_0092c840(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0092c220();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0092c880 @ 0092c880 ////

void __thiscall
FUN_0092c880(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined4 *)((int)this + 0x10) = &PTR_LAB_00d6d334;
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


//// FUNCTION FUN_0092c8f0 @ 0092c8f0 ////

void __fastcall FUN_0092c8f0(int param_1)

{
  FUN_0092c2f0(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_0092c900 @ 0092c900 ////

void FUN_0092c900(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  for (puVar1 = DAT_0104acbc; puVar2 = DAT_01050500, puVar1 != &DAT_0104acc8;
      puVar1 = (undefined4 *)puVar1[1]) {
    FUN_005295b0((int *)puVar1[2]);
  }
  for (; puVar2 != &DAT_0105050c; puVar2 = (undefined4 *)puVar2[1]) {
    if ((void *)puVar2[2] != (void *)0x0) {
      FUN_0092c340((void *)puVar2[2],'\0');
    }
  }
  return;
}


//// FUNCTION FUN_0092c950 @ 0092c950 ////

undefined4 * __thiscall FUN_0092c950(void *this,byte param_1)

{
  FUN_0092c5f0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0092c970 @ 0092c970 ////

int __fastcall FUN_0092c970(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0092c220();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0092c9a0 @ 0092c9a0 ////

void * FUN_0092c9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_0092c880(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0092c9e0 @ 0092c9e0 ////

void * __thiscall FUN_0092c9e0(void *this,byte param_1)

{
  FUN_0092c8f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0092ca00 @ 0092ca00 ////

void __thiscall FUN_0092ca00(void *this,int param_1,uint param_2)

{
  int *this_00;
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  uint *local_4c;
  char *local_48;
  uint local_44;
  uint local_40;
  char acStack_3c [12];
  uint *puStack_30;
  void *local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined1 uStack_20;
  int *piStack_18;
  uint uStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1a11;
  local_c = ExceptionList;
  if (((*(int *)((int)this + 0x27c) != 0) && (param_1 != 0)) && (param_2 < 2)) {
    local_4c = &local_40;
    local_40 = local_40 & 0xffffff00;
    local_48 = (char *)0x0;
    local_44 = 0x14;
    ExceptionList = &local_c;
    _strncpy((char *)local_4c,"rehearsal_exits_set",0x13);
    local_48 = (void *)0x13;
    *(char *)((int)local_4c + 0x13) = '\0';
    local_4 = 0;
    puVar1 = FUN_004cd890(*(void **)((int)this + 0x27c),&local_2c);
    FUN_004073f0(&local_4c,(char *)*puVar1,puVar1[1]);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    FUN_004073f0(&local_4c,".flm",4);
    pvVar2 = operator_new(0x2e8);
    local_4._0_1_ = 1;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_0040b940(pvVar2,*(int *)(*(int *)((int)this + 0xc0) + 0x24c));
    }
    local_4 = (uint)local_4._1_3_ << 8;
    (**(code **)(*piVar3 + 0xb0))();
    pvVar2 = operator_new(0x2b4);
    puStack_8._0_1_ = 2;
    if (pvVar2 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = FUN_00402380(pvVar2,param_1,piVar3);
    }
    puStack_8._0_1_ = 0;
    piVar4 = operator_new(0x128);
    puStack_8._0_1_ = 3;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_008433b0(piVar4);
      *piVar4 = (int)&PTR_FUN_00d251ac;
    }
    puStack_30 = &local_24;
    local_24 = local_24 & 0xffffff00;
    local_2c = (void *)0x0;
    uStack_28 = 0x14;
    _strncpy((char *)puStack_30,"rehearse_exit",0xd);
    local_2c = (void *)0xd;
    *(char *)((int)puStack_30 + 0xd) = '\0';
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    (**(code **)(*piVar4 + 0x44))();
    uStack_20 = 0;
    if (0x14 < local_40) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    FUN_00842f90(piVar4,1.0);
    local_48 = acStack_3c;
    acStack_3c[0] = '\0';
    local_44 = 0;
    local_40 = 0x14;
    _strncpy(local_48,"rehearse_exit",0xd);
    local_44 = 0xd;
    local_48[0xd] = '\0';
    FUN_004015d0(puVar1 + 0x31,local_48,local_44);
    this_00 = piStack_18;
    if (0x14 < local_40) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    puVar1[0x84] = puVar1[0x84] | 2;
    TMCharacter_AddResidentDesire(piStack_18,(int)piVar4);
    FUN_00401a00(puVar1,piVar4);
    piStack_18 = (int *)&stack0xffffff64;
    FUN_00976de0((void *)piVar3[0x85],uStack_14,-1,(float *)&stack0xffffff8c,
                 (float *)&stack0xffffff84);
    (**(code **)(*this_00 + 0xa8))();
    TMCharacter_AddAction(this_00,(int)puVar1);
    puVar1[0x91] = uStack_14;
    puVar1[0x90] = 2;
    FUN_00401a70((int)puVar1);
    piVar4 = piVar3 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*piVar3)();
    }
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0092cd30 @ 0092cd30 ////

void __fastcall FUN_0092cd30(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  *param_1 = &PTR_LAB_00d6d390;
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


//// FUNCTION FUN_0092cd80 @ 0092cd80 ////

void __thiscall FUN_0092cd80(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cf1a28;
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
  FUN_0092acd0((int *)&param_2);
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
      goto LAB_0092ceeb;
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
      piVar2 = (int *)FUN_0092ab50(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_0092ab30((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0092ceeb:
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
            FUN_0092afc0(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_0092ab90(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_0092afc0(this,(int)piVar6);
              break;
            }
LAB_0092cfb8:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_0092ab90(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_0092cfb8;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_0092afc0(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_0092ab90(this,piVar6);
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
  _Memory[4] = (int)&PTR_LAB_00d6d334;
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


//// FUNCTION FUN_0092d090 @ 0092d090 ////

undefined4 * __thiscall FUN_0092d090(void *this,byte param_1)

{
  FUN_0092cd30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0092d0b0 @ 0092d0b0 ////

void FUN_0092d0b0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_0092d0b0(*(void **)((int)param_1 + 8));
    FUN_0092c8f0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0092d0f0 @ 0092d0f0 ////

void __thiscall
FUN_0092d0f0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cf1a48;
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
  piVar3 = FUN_0092c9a0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0092d1eb:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0092afc0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_0092ab90(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_0092d1eb;
      if (piVar6 == (int *)*piVar2) {
        FUN_0092ab90(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_0092afc0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION CRehearseRoom_RemoveStaffFromSlot @ 0092d320 ////

void __thiscall
CRehearseRoom_RemoveStaffFromSlot(void *this,int *param_1,char param_2,float param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  float10 fVar8;
  void **ppvVar9;
  float fVar10;
  undefined4 uStack_30;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1a68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMMobile::RTTI_Type_Descriptor,
                               &TM::CStaff::RTTI_Type_Descriptor,0);
  if (piVar2 != (int *)0x0) {
    param_1 = (int *)(**(code **)(*piVar2 + 0x80))();
    puVar3 = (undefined4 *)FUN_0092c770((void *)((int)this + 0x2a4),&uStack_30,(uint *)&param_1);
    piVar1 = (int *)*puVar3;
    if (piVar1 != *(int **)((int)this + 0x2a8)) {
      if (param_3._0_1_ != '\0') {
        iVar5 = piVar1[9];
        iVar7 = *(int *)(DAT_0104cdf4 + 0x3c) - *(int *)(iVar5 + 0x7c);
        param_3 = (float)iVar7;
        if (iVar7 < 0) {
          param_3 = param_3 + 4.2949673e+09;
        }
        fVar8 = FUN_0043fec0(9);
        FUN_00407070(&param_3,(float)((float10)param_3 / fVar8));
        pfVar4 = (float *)FUN_00440130((float *)&param_1,*(int *)(iVar5 + 0x88));
        param_3 = param_3 * *pfVar4;
        iVar5 = FUN_004cbc20(*(void **)((int)this + 0x27c),0);
        puVar3 = (undefined4 *)FUN_00449b40(iVar5);
        FUN_00403de0(apvStack_2c,puVar3);
        ppvVar9 = apvStack_2c;
        uStack_4 = 0;
        fVar10 = param_3;
        pvVar6 = (void *)FUN_00577370((int)piVar2);
        FUN_004425f0(pvVar6,ppvVar9,fVar10);
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
      if ((undefined4 *)piVar1[9] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar1[9])(1);
      }
      FUN_0092cd80((void *)((int)this + 0x2a4),&param_3,piVar1);
    }
  }
  if (param_2 != '\0') {
    FUN_0092c340(this,'\0');
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0092d4a0 @ 0092d4a0 ////

void __fastcall FUN_0092d4a0(void *param_1)

{
  int *this;
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)param_1 + 0x228) != 0) {
    iVar3 = *(int *)((int)param_1 + 0xf8);
    if (iVar3 != *(int *)((int)param_1 + 0xfc)) {
      do {
        this = (int *)FUN_00ace790(*(int **)(iVar3 + 0x14),0,&TM::TMMobile::RTTI_Type_Descriptor,
                                   &TM::CStaff::RTTI_Type_Descriptor,0);
        uVar1 = FUN_00944e30(*(void **)((int)param_1 + 0x228),(int)this);
        if ((this != (int *)0x0) && (-1 < (int)uVar1)) {
          CRehearseRoom_RemoveStaffFromSlot(param_1,this,'\0',1.4013e-45);
          puVar2 = (undefined4 *)FUN_005998e0((int)this);
          TMCharacter_CancelAction(this,puVar2);
          FUN_0092ca00(param_1,(int)this,uVar1);
        }
        iVar3 = iVar3 + 0x18;
      } while (iVar3 != *(int *)((int)param_1 + 0xfc));
    }
    if (*(int *)((int)param_1 + 0x228) != 0) {
      FUN_0092bd00(param_1,'\0','\0','\0');
    }
  }
  return;
}


//// FUNCTION FUN_0092d550 @ 0092d550 ////

void __fastcall FUN_0092d550(int *param_1)

{
  char cVar1;
  uint _Count;
  char *_Source;
  void *this;
  int *piVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *this_00;
  int *piVar7;
  char **ppcVar8;
  int iVar9;
  uint local_38;
  uint local_34;
  undefined1 auStack_30 [4];
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cf1a88;
  pvStack_c = ExceptionList;
  local_38 = *(int *)param_1[0xaa];
  ExceptionList = &pvStack_c;
  ppvVar3 = &pvStack_c;
  if ((int *)local_38 != (int *)param_1[0xaa]) {
    do {
      ExceptionList = ppvVar3;
      FUN_0092ae90(*(int *)(local_38 + 0x24));
      FUN_0092acd0((int *)&local_38);
      ppvVar3 = ExceptionList;
    } while (local_38 != param_1[0xaa]);
  }
  iVar5 = FUN_004cbc20((void *)param_1[0x9f],0);
  puVar6 = (undefined4 *)FUN_00449b40(iVar5);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _Count = puVar6[1];
  _Source = (char *)*puVar6;
  if (0x13 < _Count) {
    local_24 = _Count + 0x20 & 0xffffffe0;
    local_2c = _malloc(local_24);
  }
  _strncpy(local_2c,_Source,_Count);
  local_2c[_Count] = '\0';
  piVar7 = *(int **)param_1[0xaa];
  local_4 = 0;
  local_38 = 0;
  local_28 = _Count;
  if (piVar7 != (int *)param_1[0xaa]) {
    do {
      if ((uint)param_1[0xab] <= local_38) break;
      iVar5 = piVar7[9];
      this = *(void **)(iVar5 + 0x74);
      if ((*(char *)(iVar5 + 0x78) == '\0') || (this == (void *)0x0)) {
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
          piVar2 = (int *)piVar7[2];
          if (*(char *)((int)piVar2 + 0x29) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x29);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x29);
              piVar7 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar7[1] + 0x29);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
            while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
              cVar1 = *(char *)(piVar7[1] + 0x29);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      }
      else {
        iVar9 = *(int *)(iVar5 + 0x88);
        ppcVar8 = &local_2c;
        this_00 = (void *)FUN_00577370((int)this);
        FUN_00442690(this_00,ppcVar8,iVar9);
        local_34 = *(uint *)(iVar5 + 0x84);
        if ((undefined4 *)piVar7[9] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)piVar7[9])(1);
        }
        (**(code **)(piVar7[4] + 4))();
        piVar7[9] = 0;
        (**(code **)piVar7[4])();
        puVar6 = (undefined4 *)FUN_0092cd80(param_1 + 0xa9,auStack_30,piVar7);
        piVar7 = (int *)*puVar6;
        (**(code **)(*param_1 + 0x98))(this);
        puVar6 = (undefined4 *)FUN_005998e0((int)this);
        TMCharacter_CancelAction(this,puVar6);
        FUN_0092ca00(param_1,(int)this,local_34);
        FUN_0092c340(param_1,'\x01');
      }
      local_38 = local_38 + 1;
    } while (piVar7 != (int *)param_1[0xaa]);
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION CRehearseRoom_OnStaffRemoved @ 0092d770 ////

void __thiscall CRehearseRoom_OnStaffRemoved(void *this,int *param_1)

{
  CRehearseRoom_RemoveStaffFromSlot(this,param_1,'\0',0.0);
  return;
}


//// FUNCTION FUN_0092d790 @ 0092d790 ////

void __thiscall FUN_0092d790(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_0092d0f0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0092ad50((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0092d0f0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0092d850 @ 0092d850 ////

void __fastcall FUN_0092d850(int param_1)

{
  FUN_0092d0b0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0092d880 @ 0092d880 ////

undefined4 * __thiscall FUN_0092d880(void *this,undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 local_8 [2];
  
  puVar4 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0092d0f0(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  puVar1 = *(uint **)((int)this + 4);
  if (param_2 == (uint *)*puVar1) {
    if (*param_3 < param_2[3]) {
      FUN_0092d0f0(this,param_1,'\x01',param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == puVar1) {
    if ((uint)((undefined4 *)puVar1[2])[3] < *param_3) {
      FUN_0092d0f0(this,param_1,'\0',(undefined4 *)puVar1[2],param_3);
      return param_1;
    }
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[3];
    if (uVar2 < uVar3) {
      param_3 = param_2;
      FUN_0092ad50((int *)&param_3);
      if (param_3[3] < uVar2) {
        if (*(char *)(param_3[2] + 0x29) != '\0') {
          FUN_0092d0f0(this,param_1,'\0',param_3,puVar4);
          return param_1;
        }
        FUN_0092d0f0(this,param_1,'\x01',param_2,puVar4);
        return param_1;
      }
      uVar3 = param_2[3];
    }
    if (uVar3 < uVar2) {
      param_3 = param_2;
      FUN_0092acd0((int *)&param_3);
      if ((param_3 == *(uint **)((int)this + 4)) || (uVar2 < param_3[3])) {
        if (*(char *)(param_2[2] + 0x29) != '\0') {
          FUN_0092d0f0(this,param_1,'\0',param_2,puVar4);
          return param_1;
        }
        FUN_0092d0f0(this,param_1,'\x01',param_3,puVar4);
        return param_1;
      }
    }
  }
  puVar5 = (undefined4 *)FUN_0092d790(this,local_8,puVar4);
  *param_1 = *puVar5;
  return param_1;
}


