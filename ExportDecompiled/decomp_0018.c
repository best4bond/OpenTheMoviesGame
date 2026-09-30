//// FUNCTION FUN_00644050 @ 00644050 ////

void __thiscall FUN_00644050(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d31654;
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 8) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_006440d0 @ 006440d0 ////

void __fastcall FUN_006440d0(int param_1)

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


//// FUNCTION FUN_00644110 @ 00644110 ////

void __thiscall FUN_00644110(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)((int)this + 4);
  *(undefined4 *)((int)this + 0xc) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(void **)((int)this + 0xc) = this;
  *(undefined ***)this = &PTR_FUN_00d33844;
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


//// FUNCTION FUN_00644160 @ 00644160 ////

void __fastcall FUN_00644160(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d33844;
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


//// FUNCTION FUN_00644250 @ 00644250 ////

int * __fastcall FUN_00644250(int *param_1)

{
  FUN_00641550(param_1);
  return param_1;
}


//// FUNCTION FUN_00644260 @ 00644260 ////

void __thiscall FUN_00644260(void *this,undefined4 *param_1,int param_2)

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
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d31654;
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


//// FUNCTION FUN_006442f0 @ 006442f0 ////

int * __fastcall FUN_006442f0(int *param_1)

{
  FUN_006415f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00644340 @ 00644340 ////

void FUN_00644340(void)

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


//// FUNCTION FUN_00644360 @ 00644360 ////

void __fastcall FUN_00644360(int param_1)

{
  FUN_006440d0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00644440 @ 00644440 ////

int * __fastcall FUN_00644440(int *param_1)

{
  FUN_00642c70(param_1);
  return param_1;
}


//// FUNCTION FUN_00644460 @ 00644460 ////

int * __fastcall FUN_00644460(int *param_1)

{
  FUN_006418d0(param_1);
  return param_1;
}


//// FUNCTION FUN_006444b0 @ 006444b0 ////

int * __fastcall FUN_006444b0(int *param_1)

{
  FUN_00641970(param_1);
  return param_1;
}


//// FUNCTION FUN_006444c0 @ 006444c0 ////

int * __fastcall FUN_006444c0(int *param_1)

{
  FUN_006419f0(param_1);
  return param_1;
}


//// FUNCTION FUN_006444d0 @ 006444d0 ////

int * __fastcall FUN_006444d0(int *param_1)

{
  FUN_00642e70(param_1);
  return param_1;
}


//// FUNCTION FUN_00644560 @ 00644560 ////

void FUN_00644560(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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


//// FUNCTION FUN_006445b0 @ 006445b0 ////

int * __fastcall FUN_006445b0(int *param_1)

{
  FUN_00641bf0(param_1);
  return param_1;
}


//// FUNCTION FUN_006445c0 @ 006445c0 ////

int * __fastcall FUN_006445c0(int *param_1)

{
  FUN_00641b90(param_1);
  return param_1;
}


//// FUNCTION FUN_006445d0 @ 006445d0 ////

int * __fastcall FUN_006445d0(int *param_1)

{
  FUN_00641c50(param_1);
  return param_1;
}


//// FUNCTION FUN_006445e0 @ 006445e0 ////

int * __fastcall FUN_006445e0(int *param_1)

{
  FUN_006430f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00644600 @ 00644600 ////

void FUN_00644600(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0xe) = 1;
  *(undefined1 *)((int)puVar1 + 0x39) = 0;
  return;
}


//// FUNCTION FUN_00644650 @ 00644650 ////

void FUN_00644650(void)

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


//// FUNCTION FUN_006446a0 @ 006446a0 ////

void FUN_006446a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x12) = 1;
  *(undefined1 *)((int)puVar1 + 0x49) = 0;
  return;
}


//// FUNCTION FUN_00644750 @ 00644750 ////

void __thiscall
FUN_00644750(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  piVar1 = (int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x18) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 **)((int)this + 0x18) = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = &PTR_FUN_00d31654;
  iVar2 = *(int *)(param_4 + 0x14);
  *(int *)((int)this + 0x20) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x14) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x24) = param_5;
  *(undefined1 *)((int)this + 0x25) = 0;
  return;
}


//// FUNCTION FUN_00644810 @ 00644810 ////

void FUN_00644810(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  return;
}


//// FUNCTION FUN_00644860 @ 00644860 ////

void FUN_00644860(void)

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


//// FUNCTION FUN_006448d0 @ 006448d0 ////

void __thiscall FUN_006448d0(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)this = *param_1;
  piVar1 = (int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 **)((int)this + 0x10) = (undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = &PTR_FUN_00d31654;
  iVar2 = param_1[6];
  *(int *)((int)this + 0x18) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0xc) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  return;
}


//// FUNCTION FUN_00644940 @ 00644940 ////

void __fastcall FUN_00644940(int param_1)

{
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_00d31654;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_00644a30 @ 00644a30 ////

void __fastcall FUN_00644a30(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_LAB_00d33824;
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


//// FUNCTION FUN_00644a80 @ 00644a80 ////

int __cdecl FUN_00644a80(undefined4 *param_1)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  int local_50;
  byte *local_4c;
  uint local_44;
  byte local_40 [20];
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1aa0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d6b0(local_2c,"facility/",param_1);
  local_4c = local_40;
  local_50 = 0;
  local_40[0] = 0;
  local_44 = 0x14;
  local_4 = 1;
  puVar5 = DAT_0104ed18;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      puVar2 = (undefined4 *)FUN_00528460(puVar5[2]);
      _Count = puVar2[1];
      _Source = (char *)*puVar2;
      if (local_44 <= _Count) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = _Count + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy((char *)local_4c,_Source,_Count);
      local_4c[_Count] = 0;
      pbVar3 = local_4c;
      pbVar6 = local_2c[0];
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00644b79:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00644b7e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00644b79;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00644b7e:
      if (iVar4 == 0) {
        local_50 = local_50 + 1;
      }
      puVar2 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104ed24);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_00644bd0 @ 00644bd0 ////

void __fastcall FUN_00644bd0(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d31654;
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


//// FUNCTION FUN_00644c20 @ 00644c20 ////

void __fastcall FUN_00644c20(int param_1)

{
  *(undefined ***)(param_1 + 4) = &PTR_FUN_00d31654;
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


//// FUNCTION FUN_00644c90 @ 00644c90 ////

void __fastcall FUN_00644c90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d31654;
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


//// FUNCTION FUN_00644ce0 @ 00644ce0 ////

void __fastcall FUN_00644ce0(int param_1)

{
  FUN_006440d0(param_1);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00644d10 @ 00644d10 ////

void __thiscall FUN_00644d10(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00642a70(this,param_2);
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


//// FUNCTION FUN_00644d70 @ 00644d70 ////

void __thiscall FUN_00644d70(void *this,undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x1d) == '\0');
  }
  if ((puVar3 != *(undefined4 **)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return;
  }
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}


//// FUNCTION FUN_00644de0 @ 00644de0 ////

void __thiscall FUN_00644de0(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = FUN_00642b50(this,param_2);
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


//// FUNCTION FUN_00644eb0 @ 00644eb0 ////

int * __fastcall FUN_00644eb0(int *param_1)

{
  FUN_00642c70(param_1);
  return param_1;
}


//// FUNCTION FUN_00644ef0 @ 00644ef0 ////

void __thiscall FUN_00644ef0(void *this,undefined4 *param_1,uint *param_2)

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


//// FUNCTION FUN_00644f60 @ 00644f60 ////

int * __fastcall FUN_00644f60(int *param_1)

{
  FUN_00642e70(param_1);
  return param_1;
}


//// FUNCTION FUN_00644f70 @ 00644f70 ////

void __fastcall FUN_00644f70(undefined4 *param_1)

{
  param_1[8] = &PTR_FUN_00d31654;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[10] = param_1[9];
  }
  if (param_1[9] != 0) {
    *(undefined4 *)(param_1[9] + 4) = param_1[10];
  }
  param_1[9] = 0;
  param_1[10] = 0;
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00644fd0 @ 00644fd0 ////

undefined4 * __thiscall FUN_00644fd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_00642f30(this,param_2);
  puVar2 = FUN_0048f2c0(this,param_2);
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return param_1;
}


//// FUNCTION FUN_00645050 @ 00645050 ////

void __fastcall FUN_00645050(int param_1)

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


//// FUNCTION FUN_00645080 @ 00645080 ////

undefined4 * __thiscall FUN_00645080(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d31654;
  iVar2 = *(int *)(param_2 + 0x14);
  *(int *)((int)this + 0x34) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x28) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x38) = *(undefined1 *)(param_2 + 0x18);
  return this;
}


//// FUNCTION FUN_006450f0 @ 006450f0 ////

int * __fastcall FUN_006450f0(int *param_1)

{
  FUN_006430f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00645100 @ 00645100 ////

void __fastcall FUN_00645100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00645140 @ 00645140 ////

void __fastcall FUN_00645140(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00645180 @ 00645180 ////

void __fastcall FUN_00645180(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006446a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x49) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_006451c0 @ 006451c0 ////

void * FUN_006451c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x28);
  if (this != (void *)0x0) {
    FUN_00644750(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00645200 @ 00645200 ////

void __fastcall FUN_00645200(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00645240 @ 00645240 ////

void __fastcall FUN_00645240(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_006452a0 @ 006452a0 ////

void __thiscall
FUN_006452a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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
  *(undefined4 *)((int)this + 0x10) = &PTR_FUN_00d31654;
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


//// FUNCTION FUN_00645310 @ 00645310 ////

undefined4 * __thiscall FUN_00645310(void *this,undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  piVar1 = (int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 **)((int)this + 0x2c) = (undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x20) = &PTR_FUN_00d31654;
  iVar2 = param_1[0xd];
  *(int *)((int)this + 0x34) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x28) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x38) = *(undefined1 *)(param_1 + 0xe);
  return this;
}


//// FUNCTION FUN_00645380 @ 00645380 ////

void __cdecl FUN_00645380(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_0048edd0(&param_1);
  }
  return;
}


//// FUNCTION FUN_006453c0 @ 006453c0 ////

void * __thiscall FUN_006453c0(void *this,byte param_1)

{
  FUN_00644940((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006453e0 @ 006453e0 ////

void __fastcall FUN_006453e0(int param_1)

{
  FUN_00644c20(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_006453f0 @ 006453f0 ////

void __fastcall FUN_006453f0(int param_1)

{
  FUN_00644f70((undefined4 *)(param_1 + 0xc));
  return;
}


//// FUNCTION FUN_00645420 @ 00645420 ////

undefined4 * __thiscall FUN_00645420(void *this,byte param_1)

{
  FUN_00644c90(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00645740 @ 00645740 ////

undefined4 FUN_00645740(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_4;
  
  puVar1 = param_1;
  param_1 = FUN_00642c00(&DAT_0104d9b0,param_1);
  local_4 = DAT_0104d9b4;
  if (param_1 != DAT_0104d9b4) {
    uVar2 = FUN_00441060(puVar1,param_1 + 3);
    if ((char)uVar2 == '\0') {
      ppuVar3 = &param_1;
      goto LAB_00645781;
    }
  }
  ppuVar3 = &local_4;
LAB_00645781:
  if (*ppuVar3 != local_4) {
    return (*ppuVar3)[0xb];
  }
  return 0;
}


//// FUNCTION FUN_006457a0 @ 006457a0 ////

void __fastcall FUN_006457a0(int param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  ulonglong uVar5;
  LPCSTR *ppCVar6;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1ab8;
  local_c = ExceptionList;
  iVar3 = *(int *)(param_1 + 0x344);
  if (iVar3 == 8) {
    return;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x344) = 8;
  if (*(int *)(param_1 + 0x434) == 0) goto LAB_006458a2;
  pvVar1 = *(void **)(**(int **)(param_1 + 0x430) + 8);
  puVar2 = (undefined4 *)FUN_00664500((int)pvVar1);
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  FUN_004015d0(&local_2c,(char *)*puVar2,puVar2[1]);
  local_4 = 0;
  iVar3 = FUN_00664510((int)pvVar1);
  if ((iVar3 == 2) || (iVar3 = FUN_00664510((int)pvVar1), iVar3 == 1)) {
    ppCVar6 = (LPCSTR *)"expand";
LAB_00645863:
    FUN_00881ac0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),local_2c,(char *)ppCVar6);
    uVar4 = extraout_EDX_00;
  }
  else {
    iVar3 = FUN_00664510((int)pvVar1);
    uVar4 = extraout_EDX;
    if (iVar3 == 0) {
      ppCVar6 = &lpOperation_00d31dc8;
      goto LAB_00645863;
    }
  }
  FUN_00665070(pvVar1,uVar4,3);
  *(void **)(param_1 + 0x3f8) = pvVar1;
  local_4 = 0xffffffff;
  iVar3 = extraout_ECX;
  param_2 = extraout_EDX_01;
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
LAB_006458a2:
  local_4 = 0xffffffff;
  uVar5 = FUN_00990ae0(iVar3,param_2);
  *(int *)(param_1 + 0x3e4) = (int)uVar5;
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006458c0 @ 006458c0 ////

undefined1 __fastcall FUN_006458c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined1 uVar5;
  int local_4;
  
  if ((*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x3ec)) ||
     (local_4 = param_1, iVar1 = FUN_00664510(*(int *)(param_1 + 0x3f8)), iVar1 != 3)) {
    return 0;
  }
  iVar1 = FUN_00664520(*(int *)(param_1 + 0x3ec));
  uVar5 = 1;
  uVar4 = extraout_EDX;
  if ((iVar1 != 0) &&
     ((*(int *)(iVar1 + 8) != 0 &&
      (local_4 = **(int **)(iVar1 + 4), (int *)local_4 != *(int **)(iVar1 + 4))))) {
    do {
      iVar2 = FUN_00664510(*(int *)(local_4 + 0x2c));
      if (iVar2 != 2) {
        uVar5 = 0;
        goto LAB_0064598c;
      }
      FUN_00642c70(&local_4);
      uVar4 = extraout_EDX_00;
    } while (local_4 != *(int *)(iVar1 + 4));
  }
  local_4 = **(int **)(iVar1 + 4);
  if ((int *)local_4 != *(int **)(iVar1 + 4)) {
    do {
      iVar2 = local_4;
      puVar3 = (undefined4 *)FUN_00664500(*(int *)(local_4 + 0x2c));
      FUN_00881ac0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),(char *)*puVar3,"close");
      FUN_00665070(*(void **)(iVar2 + 0x2c),extraout_EDX_01,0);
      FUN_00642c70(&local_4);
      uVar4 = extraout_EDX_02;
    } while (local_4 != *(int *)(iVar1 + 4));
  }
  FUN_00665070(*(void **)(param_1 + 0x3f8),uVar4,2);
LAB_0064598c:
  puVar3 = (undefined4 *)FUN_00664500(*(int *)(param_1 + 0x3ec));
  FUN_00881ac0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),(char *)*puVar3,"close");
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x3ec);
  return uVar5;
}


//// FUNCTION FUN_006459d0 @ 006459d0 ////

void __thiscall FUN_006459d0(void *this,undefined4 *param_1,int param_2,undefined4 param_3)

{
  void *this_00;
  
  if (param_2 == 0) {
    this_00 = (void *)((int)this + 0x60);
  }
  else if (param_2 == 1) {
    this_00 = (void *)((int)this + 0x6c);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    this_00 = (void *)((int)this + 0x78);
  }
  if (((this_00 != (void *)0x0) &&
      (FUN_00591010(this_00,&param_2,param_1), param_2 != *(int *)((int)this_00 + 4))) &&
     (*(int *)(param_2 + 0x2c) == 0)) {
    *(undefined4 *)(param_2 + 0x2c) = param_3;
  }
  return;
}


//// FUNCTION FUN_00645a20 @ 00645a20 ////

uint __thiscall FUN_00645a20(void *this,undefined4 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  void *this_00;
  
  if (param_2 == 0) {
    this_00 = (void *)((int)this + 0x60);
    uVar1 = param_2;
  }
  else if (param_2 == 1) {
    this_00 = (void *)((int)this + 0x6c);
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 - 2;
    if (uVar1 != 0) goto LAB_00645a77;
    this_00 = (void *)((int)this + 0x78);
  }
  if (this_00 != (void *)0x0) {
    FUN_00591010(this_00,(int *)&param_2,param_1);
    uVar1 = param_2;
    if (param_2 != *(uint *)((int)this_00 + 4)) {
      if ((0 < *(int *)(param_2 + 0x2c)) && (*(int *)(param_2 + 0x2c) < param_3)) {
        return 1;
      }
      return 0;
    }
  }
LAB_00645a77:
  return uVar1 & 0xffffff00;
}


//// FUNCTION FUN_00645a80 @ 00645a80 ////

int __fastcall FUN_00645a80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00644340();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645aa0 @ 00645aa0 ////

void __fastcall FUN_00645aa0(int param_1)

{
  int *_Memory;
  
  _Memory = (int *)**(int **)(param_1 + 4);
  if (_Memory != *(int **)(param_1 + 4)) {
    *(int *)_Memory[1] = *_Memory;
    *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}


//// FUNCTION FUN_00645ad0 @ 00645ad0 ////

void __fastcall FUN_00645ad0(int param_1)

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


//// FUNCTION FUN_00645b00 @ 00645b00 ////

int __fastcall FUN_00645b00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645b30 @ 00645b30 ////

int __fastcall FUN_00645b30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645b60 @ 00645b60 ////

int __fastcall FUN_00645b60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006446a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x49) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645b90 @ 00645b90 ////

int __fastcall FUN_00645b90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645bc0 @ 00645bc0 ////

int __fastcall FUN_00645bc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00645bf0 @ 00645bf0 ////

void * FUN_00645bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x2c);
  if (this != (void *)0x0) {
    FUN_006452a0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00645c80 @ 00645c80 ////

void * __thiscall FUN_00645c80(void *this,byte param_1)

{
  FUN_006453e0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00645ca0 @ 00645ca0 ////

void * __thiscall FUN_00645ca0(void *this,byte param_1)

{
  FUN_006453f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00645cd0 @ 00645cd0 ////

void __fastcall FUN_00645cd0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_1[0xd9] != 0) && (cVar1 = *(char *)(param_1[0xd9] + 0x362), cVar1 != '\0')) {
    uVar3 = FUN_00990ae0(CONCAT31((int3)((uint)param_1 >> 8),cVar1),param_2);
    param_2 = (undefined4)(uVar3 >> 0x20);
    param_1[0xf9] = (int)uVar3;
  }
  if ((param_1[0xd2] == 9) && (param_1[0xd1] == 0xb)) {
    param_1[0xd1] = 9;
    param_1[0xd2] = 0xc;
  }
  if (param_1[0xd1] == 9) {
    FUN_006457a0((int)param_1,param_2);
  }
  if (DAT_0104d930 != '\0') {
    iVar2 = FUN_00423320(DAT_00f87b04);
    if (iVar2 != 1) {
      FUN_0063c4c0();
      DAT_0104d930 = '\0';
    }
  }
  (**(code **)(*param_1 + 0xd8))();
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00645d60 @ 00645d60 ////

void __fastcall FUN_00645d60(int param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = FUN_00664510(*(int *)(param_1 + 0x3ec));
  if (iVar4 == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x344) != 7) {
    FUN_00643480(param_1);
    cVar3 = '\0';
    *(undefined4 *)(param_1 + 0x3fc) = 0;
    if ((*(undefined4 **)(param_1 + 0x3f4) != (undefined4 *)0x0) &&
       (*(undefined4 **)(param_1 + 0x3f8) != (undefined4 *)0x0)) {
      uVar5 = FUN_006409a0(*(undefined4 **)(param_1 + 0x3f4),*(undefined4 **)(param_1 + 0x3f8));
      cVar3 = (char)uVar5;
    }
    bVar2 = false;
    if (((cVar3 == '\0') && (piVar1 = *(int **)(param_1 + 0x3f8), piVar1 != (int *)0x0)) &&
       (piVar1 != *(int **)(param_1 + 0x3ec))) {
      *(undefined4 *)(param_1 + 0x344) = 7;
      *(int **)(param_1 + 0x3f0) = piVar1;
      FUN_00665320(piVar1);
      bVar2 = true;
    }
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x3f4);
    if (bVar2) {
      return;
    }
  }
  FUN_006458c0(param_1);
  return;
}


//// FUNCTION FUN_00645f60 @ 00645f60 ////

void __thiscall FUN_00645f60(void *this,undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 extraout_EDX;
  char **ppcVar6;
  char *local_20;
  undefined4 local_1c;
  uint local_18;
  char local_14 [20];
  
  if ((1 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)this + 0x43c))) ||
     (cVar1 = FUN_004201b0(DAT_00f87b04), cVar1 != '\0')) {
    *(undefined4 *)((int)this + 0x43c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    piVar2 = (int *)FUN_00645740(param_1);
    *(undefined4 *)((int)this + 0x344) = 0xb;
    if (piVar2 != (int *)0x0) {
      FUN_00665c00(piVar2);
      iVar3 = FUN_00664510((int)piVar2);
      *(int **)((int)this + 0x3f4) = piVar2;
      if (iVar3 == 3) {
        FUN_00665240(piVar2);
        cVar1 = FUN_006458c0((int)this);
        if (cVar1 == '\0') {
          FUN_00643a70(this,'\0');
        }
        else if ((piVar2 == *(int **)((int)this + 0x3ec)) &&
                ((iVar3 = FUN_00664510((int)*(int **)((int)this + 0x3ec)), iVar3 == 3 ||
                 (iVar3 = FUN_00664510(*(int *)((int)this + 0x3ec)), iVar3 == 2)))) {
          puVar5 = (undefined4 *)FUN_00664500(*(int *)((int)this + 0x3ec));
          FUN_00881ac0(*(void **)(*(int *)((int)this + 0x364) + 0x358),(char *)*puVar5,"contract");
          FUN_00665070(*(void **)((int)this + 0x3ec),extraout_EDX,2);
        }
        uVar4 = FUN_006644e0(piVar2);
        *(undefined4 *)((int)this + 0x3f8) = uVar4;
        iVar3 = FUN_006644f0(*(int *)((int)this + 0x3f4));
        if (iVar3 == 1) {
          *(undefined4 *)((int)this + 0x3f4) = *(undefined4 *)((int)this + 0x3f8);
        }
        local_20 = local_14;
        local_14[0] = '\0';
        local_1c = 0;
        local_18 = 0x14;
        _strncpy(local_20,"$build",6);
        ppcVar6 = &local_20;
        local_1c = 6;
        local_20[6] = '\0';
        uVar4 = FUN_00401ec0(param_1,ppcVar6);
        if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20);
        }
        if ((char)uVar4 != '\0') {
          FUN_007e5510();
          FUN_007e5710();
        }
      }
      else {
        FUN_00665180(piVar2);
        FUN_006650f0(*(int *)((int)this + 0x3f4));
        if (*(int *)((int)this + 0x3f4) != *(int *)((int)this + 0x3f8)) {
          FUN_00643a70(this,'\0');
        }
        FUN_006651b0(*(int **)((int)this + 0x3f4));
        FUN_00643b60(this,param_1);
        local_20 = local_14;
        local_14[0] = '\0';
        local_1c = 0;
        local_18 = 0x14;
        _strncpy(local_20,"$build",6);
        ppcVar6 = &local_20;
        local_1c = 6;
        local_20[6] = '\0';
        uVar4 = FUN_00401ec0(param_1,ppcVar6);
        if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
          _free(local_20);
        }
        if ((char)uVar4 != '\0') {
          FUN_007e5510();
          FUN_007e5530();
          return;
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_006461b0 @ 006461b0 ////

undefined4 __fastcall FUN_006461b0(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1af8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"$build",6);
  local_28 = 6;
  local_2c[6] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646240 @ 00646240 ////

undefined4 __fastcall FUN_00646240(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1b18;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"$fac",4);
  local_28 = 4;
  local_2c[4] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006462d0 @ 006462d0 ////

undefined4 __fastcall FUN_006462d0(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1b38;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 1;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$fac_sub1",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646370 @ 00646370 ////

undefined4 __fastcall FUN_00646370(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1b58;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 2;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$fac_sub2",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646410 @ 00646410 ////

undefined4 __fastcall FUN_00646410(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1b78;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 3;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$fac_sub3",9);
  local_28 = 9;
  local_2c[9] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006464b0 @ 006464b0 ////

undefined4 __fastcall FUN_006464b0(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1b98;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"$sets",5);
  local_28 = 5;
  local_2c[5] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646540 @ 00646540 ////

undefined4 __fastcall FUN_00646540(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1bb8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_2c,"$ornaments",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006465d0 @ 006465d0 ////

undefined4 __fastcall FUN_006465d0(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1bd8;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 1;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$orna_sub1",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646670 @ 00646670 ////

undefined4 __fastcall FUN_00646670(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1bf8;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 2;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$orna_sub2",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646710 @ 00646710 ////

undefined4 __fastcall FUN_00646710(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1c18;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 3;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$orna_sub3",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_006467b0 @ 006467b0 ////

undefined4 __fastcall FUN_006467b0(void *param_1)

{
  undefined4 uVar1;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1c38;
  local_c = ExceptionList;
  local_2c = local_20;
  ExceptionList = &local_c;
  *(undefined4 *)((int)param_1 + 0x3dc) = 4;
  *(undefined4 *)((int)param_1 + 0x47c) = 0;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"$orna_sub4",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4 = 0;
  uVar1 = FUN_00645f60(param_1,&local_2c);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00646850 @ 00646850 ////

undefined4 *
FUN_00646850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_00645310(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x12) = param_5;
    *(undefined1 *)((int)puVar1 + 0x49) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_006468e0 @ 006468e0 ////

void __cdecl FUN_006468e0(int param_1,int param_2,undefined4 *param_3)

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
        *param_3 = &PTR_FUN_00d31654;
        iVar2 = *(int *)(param_1 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
        *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_1 + 0x18);
      }
      param_1 = param_1 + 0x1c;
      param_3 = param_3 + 7;
      puVar3 = puVar3 + 7;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00646950 @ 00646950 ////

void __fastcall FUN_00646950(int param_1)

{
  int iVar1;
  void *pvVar2;
  char **ppcVar3;
  char cVar4;
  undefined1 uVar5;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1cf0;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x364);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x358) != 0)) {
    pvVar2 = *(void **)(*(int *)(iVar1 + 0x358) + 0x178);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    ExceptionList = &local_c;
    _strncpy(local_2c,"cb_close",8);
    local_28 = 8;
    local_2c[8] = '\0';
    local_4 = 0;
    FUN_0087de50(pvVar2,&local_2c,param_1,&LAB_006454a0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_open",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 1;
    FUN_0087de50(pvVar2,&local_2c,param_1,&LAB_006456c0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_expand",9);
    local_28 = 9;
    local_2c[9] = '\0';
    local_4 = 2;
    FUN_0087de50(pvVar2,&local_2c,param_1,&LAB_00645e00,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_buildbutton",0xe);
    local_28 = 0xe;
    local_2c[0xe] = '\0';
    local_4 = 3;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_006461b0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_fac",6);
    local_28 = 6;
    local_2c[6] = '\0';
    local_4 = 4;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_00646240,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_sets",7);
    local_28 = 7;
    local_2c[7] = '\0';
    local_4 = 5;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_006464b0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_ornaments",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 6;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_00646540,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_orna_sub1",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 7;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_006465d0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_orna_sub2",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 8;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_00646670,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_orna_sub3",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 9;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_00646710,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_orna_sub4",0xc);
    local_28 = 0xc;
    local_2c[0xc] = '\0';
    local_4 = 10;
    FUN_0087de50(pvVar2,&local_2c,param_1,FUN_006467b0,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"cb_rootstop",0xb);
    local_28 = 0xb;
    local_2c[0xb] = '\0';
    local_4 = 0xb;
    FUN_0087de50(pvVar2,&local_2c,param_1,&LAB_00640980,0);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"BUILDBUTTON_MAIN",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0xc;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"buildbutton");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"BUILDBUTTON_FACILITIES",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0xd;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"facbutton");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"BUILDBUTTON_SETS",0x10);
    local_28 = 0x10;
    local_2c[0x10] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0xe;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"setbutton");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"BUILDBUTTON_PROPS",0x11);
    local_28 = 0x11;
    local_2c[0x11] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0xf;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"orna_button");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"BUILDBUTTON_PROPS_DEC",0x15);
    local_28 = 0x15;
    local_2c[0x15] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0x10;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"ornabutt_sub1");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"BUILDBUTTON_PROPS_FLORA",0x17);
    local_28 = 0x17;
    local_2c[0x17] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0x11;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"orna_subbut2");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"BUILDBUTTON_PROPS_FURN",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0x12;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"orna_subbut3");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"BUILDBUTTON_PROPS_LAND",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    uVar5 = 1;
    cVar4 = '\x01';
    ppcVar3 = &local_2c;
    local_4 = 0x13;
    pvVar2 = (void *)FUN_008828c0(*(void **)(*(int *)(param_1 + 0x364) + 0x358),"orna_subbut4");
    FUN_00872180(pvVar2,ppcVar3,cVar4,uVar5);
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00647260 @ 00647260 ////

void __thiscall
FUN_00647260(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int param_4)

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
  puStack_8 = &LAB_00cc1d08;
  local_c = ExceptionList;
  if (0xaaaaaa8 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_006451c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x24);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x24) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[9] == '\0') {
LAB_0064735b:
        *(undefined1 *)(*piVar4 + 0x24) = 1;
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x24) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00642d10(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
        FUN_00642d70(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[9] == '\0') goto LAB_0064735b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00642d70(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x24) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
      FUN_00642d10(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x24);
  } while( true );
}


//// FUNCTION FUN_00647410 @ 00647410 ////

void __thiscall
FUN_00647410(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc1d28;
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
  piVar3 = FUN_00645bf0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0064750b:
        *(undefined1 *)(*piVar4 + 0x28) = 1;
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x28) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_006428c0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x28) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
        FUN_006411f0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[10] == '\0') goto LAB_0064750b;
      if (piVar6 == (int *)*piVar2) {
        FUN_006411f0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x28) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x28) = 0;
      FUN_006428c0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x28);
  } while( true );
}


//// FUNCTION FUN_006475d0 @ 006475d0 ////

void __thiscall FUN_006475d0(void *this,uint param_1)

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
  puStack_8 = &LAB_00cc1d48;
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


//// FUNCTION FUN_00647670 @ 00647670 ////

void __thiscall
FUN_00647670(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc1d68;
  local_c = ExceptionList;
  if (0x4444442 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_00646850(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x48);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x48) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x12] == '\0') {
LAB_0064776b:
        *(undefined1 *)(*piVar4 + 0x48) = 1;
        *(undefined1 *)(piVar5 + 0x12) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x48) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00643000(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x48) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x48) = 0;
        FUN_006417b0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x12] == '\0') goto LAB_0064776b;
      if (piVar6 == (int *)*piVar2) {
        FUN_006417b0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x48) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x48) = 0;
      FUN_00643000(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x48);
  } while( true );
}


//// FUNCTION FUN_00647820 @ 00647820 ////

void FUN_00647820(void)

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
  puStack_8 = &LAB_00cc1d88;
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


//// FUNCTION FUN_00647890 @ 00647890 ////

void FUN_00647890(void)

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
  puStack_8 = &LAB_00cc1da8;
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


//// FUNCTION FUN_00647900 @ 00647900 ////

void __thiscall FUN_00647900(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc1dc8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x25) != '\0') {
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
  FUN_00642e70((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x25) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x25) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x25) == '\0') {
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
      iVar1 = param_2[9];
      *(char *)(param_2 + 9) = (char)_Memory[9];
      *(char *)(_Memory + 9) = (char)iVar1;
      goto LAB_00647a6b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      piVar2 = (int *)FUN_00641890(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      uVar3 = FUN_00641b70((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_00647a6b:
  if ((char)_Memory[9] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[9] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_00642d10(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(*piVar4 + 0x24) != '\x01') || (*(char *)(piVar4[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x24) = 1;
                *(undefined1 *)(piVar4 + 9) = 0;
                FUN_00642d70(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 9) = (char)piVar6[9];
              *(undefined1 *)(piVar6 + 9) = 1;
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              FUN_00642d10(this,(int)piVar6);
              break;
            }
LAB_00647b38:
            *(undefined1 *)(piVar4 + 9) = 0;
          }
        }
        else {
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_00642d70(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(piVar4[2] + 0x24) == '\x01') && (*(char *)(*piVar4 + 0x24) == '\x01'))
            goto LAB_00647b38;
            if (*(char *)(*piVar4 + 0x24) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              *(undefined1 *)(piVar4 + 9) = 0;
              FUN_00642d10(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 9) = (char)piVar6[9];
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(*piVar4 + 0x24) = 1;
            FUN_00642d70(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 9) = 1;
  }
  _Memory[3] = (int)&PTR_FUN_00d31654;
  if ((int *)_Memory[5] != (int *)0x0) {
    *(int *)_Memory[5] = _Memory[4];
  }
  if (_Memory[4] != 0) {
    *(int *)(_Memory[4] + 4) = _Memory[5];
  }
  _Memory[4] = 0;
  _Memory[5] = 0;
  _Memory[8] = 0;
  if ((int *)_Memory[5] != (int *)0x0) {
    *(int *)_Memory[5] = _Memory[4];
  }
  if (_Memory[4] != 0) {
    *(int *)(_Memory[4] + 4) = _Memory[5];
  }
  _Memory[4] = 0;
  _Memory[5] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_00647c20 @ 00647c20 ////

void FUN_00647c20(void *param_1)

{
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    FUN_00647c20(*(void **)((int)param_1 + 8));
    FUN_00644940((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00647c60 @ 00647c60 ////

void FUN_00647c60(void *param_1)

{
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    FUN_00647c60(*(void **)((int)param_1 + 8));
    FUN_006453e0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00647ca0 @ 00647ca0 ////

undefined4 * __thiscall FUN_00647ca0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc1de0;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_006451c0(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          (int)(param_1 + 3),*(undefined1 *)(param_1 + 9));
    if (*(char *)((int)local_18 + 0x25) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_00647ca0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_00647ca0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_00647d50 @ 00647d50 ////

void __cdecl FUN_00647d50(undefined4 *param_1,int param_2,int param_3)

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
        *param_1 = &PTR_FUN_00d31654;
        iVar2 = *(int *)(param_3 + 0x14);
        puVar3[3] = iVar2;
        if (iVar2 != 0) {
          piVar4 = (int *)(iVar2 + 0x18);
          *puVar3 = piVar4;
          *piVar1 = *piVar4;
          *(int **)(*piVar4 + 4) = piVar1;
          *piVar4 = (int)piVar1;
        }
        *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_3 + 0x18);
      }
      param_1 = param_1 + 7;
      puVar3 = puVar3 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00647e30 @ 00647e30 ////

void __thiscall FUN_00647e30(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool local_4;
  
  puVar2 = param_2;
  puVar4 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar4[1] + 0x25) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      local_4 = (uint)param_2[5] < (uint)puVar4[8];
      if (local_4) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  param_2 = puVar4;
  if (local_4) {
    if (puVar4 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_00647260(this,&param_2,'\x01',puVar4,(int)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_006430f0((int *)&param_2);
  }
  if ((uint)param_2[8] < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)FUN_00647260(this,&param_2,local_4,puVar4,(int)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00647ef0 @ 00647ef0 ////

void __thiscall FUN_00647ef0(void *this,undefined4 *param_1,uint *param_2)

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
      puVar4 = (undefined4 *)FUN_00647410(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_00641970((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00647410(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00647fb0 @ 00647fb0 ////

void __thiscall FUN_00647fb0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc1df8;
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
  FUN_006415f0((int *)&param_2);
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
      goto LAB_0064811b;
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
      piVar2 = (int *)FUN_006411b0(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x29) == '\0') {
      uVar3 = FUN_00641190((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0064811b:
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
            FUN_006428c0(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(*piVar4 + 0x28) != '\x01') || (*(char *)(piVar4[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x28) = 1;
                *(undefined1 *)(piVar4 + 10) = 0;
                FUN_006411f0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 10) = (char)piVar6[10];
              *(undefined1 *)(piVar6 + 10) = 1;
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              FUN_006428c0(this,(int)piVar6);
              break;
            }
LAB_006481e8:
            *(undefined1 *)(piVar4 + 10) = 0;
          }
        }
        else {
          if ((char)piVar4[10] == '\0') {
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(piVar6 + 10) = 0;
            FUN_006411f0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x29) == '\0') {
            if ((*(char *)(piVar4[2] + 0x28) == '\x01') && (*(char *)(*piVar4 + 0x28) == '\x01'))
            goto LAB_006481e8;
            if (*(char *)(*piVar4 + 0x28) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x28) = 1;
              *(undefined1 *)(piVar4 + 10) = 0;
              FUN_006428c0(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 10) = (char)piVar6[10];
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(*piVar4 + 0x28) = 1;
            FUN_006411f0(this,piVar6);
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
  _Memory[4] = (int)&PTR_FUN_00d31654;
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


//// FUNCTION FUN_006483a0 @ 006483a0 ////

void __thiscall FUN_006483a0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x49) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00648404:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00648409;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00648404;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00648409:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x49) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_00647670(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00641b90((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00647670(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_006484c0 @ 006484c0 ////

void __thiscall FUN_006484c0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc1e18;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x49) != '\0') {
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
  FUN_00641bf0((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x49) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x49) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x49) == '\0') {
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
      iVar1 = param_2[0x12];
      *(char *)(param_2 + 0x12) = (char)_Memory[0x12];
      *(char *)(_Memory + 0x12) = (char)iVar1;
      goto LAB_0064862b;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x49) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x49) == '\0') {
      piVar2 = (int *)FUN_00641b40(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x49) == '\0') {
      uVar3 = FUN_00641b20((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0064862b:
  if ((char)_Memory[0x12] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[0x12] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[0x12] == '\0') {
            *(undefined1 *)(piVar4 + 0x12) = 1;
            *(undefined1 *)(piVar6 + 0x12) = 0;
            FUN_00643000(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x49) == '\0') {
            if ((*(char *)(*piVar4 + 0x48) != '\x01') || (*(char *)(piVar4[2] + 0x48) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x48) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x48) = 1;
                *(undefined1 *)(piVar4 + 0x12) = 0;
                FUN_006417b0(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 0x12) = (char)piVar6[0x12];
              *(undefined1 *)(piVar6 + 0x12) = 1;
              *(undefined1 *)(piVar4[2] + 0x48) = 1;
              FUN_00643000(this,(int)piVar6);
              break;
            }
LAB_006486f8:
            *(undefined1 *)(piVar4 + 0x12) = 0;
          }
        }
        else {
          if ((char)piVar4[0x12] == '\0') {
            *(undefined1 *)(piVar4 + 0x12) = 1;
            *(undefined1 *)(piVar6 + 0x12) = 0;
            FUN_006417b0(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x49) == '\0') {
            if ((*(char *)(piVar4[2] + 0x48) == '\x01') && (*(char *)(*piVar4 + 0x48) == '\x01'))
            goto LAB_006486f8;
            if (*(char *)(*piVar4 + 0x48) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x48) = 1;
              *(undefined1 *)(piVar4 + 0x12) = 0;
              FUN_00643000(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 0x12) = (char)piVar6[0x12];
            *(undefined1 *)(piVar6 + 0x12) = 1;
            *(undefined1 *)(*piVar4 + 0x48) = 1;
            FUN_006417b0(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 0x12) = 1;
  }
  _Memory[0xb] = (int)&PTR_FUN_00d31654;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  _Memory[0x10] = 0;
  if ((int *)_Memory[0xd] != (int *)0x0) {
    *(int *)_Memory[0xd] = _Memory[0xc];
  }
  if (_Memory[0xc] != 0) {
    *(int *)(_Memory[0xc] + 4) = _Memory[0xd];
  }
  _Memory[0xc] = 0;
  _Memory[0xd] = 0;
  if ((uint)_Memory[5] < 0x15) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_006487e0 @ 006487e0 ////

void __fastcall FUN_006487e0(int param_1)

{
  FUN_00647c20(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00648810 @ 00648810 ////

void FUN_00648810(void *param_1)

{
  if (*(char *)((int)param_1 + 0x49) == '\0') {
    FUN_00648810(*(void **)((int)param_1 + 8));
    FUN_006453f0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00648850 @ 00648850 ////

void __fastcall FUN_00648850(int param_1)

{
  FUN_00647c60(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00648880 @ 00648880 ////

undefined4 * __thiscall FUN_00648880(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc1e30;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_00645bf0(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 10));
    if (*(char *)((int)local_18 + 0x29) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_00648880(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_00648880(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}


//// FUNCTION FUN_00648930 @ 00648930 ////

void __thiscall FUN_00648930(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_00647ca0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x25) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x25);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x25);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x25);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x25);
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


//// FUNCTION FUN_00648a60 @ 00648a60 ////

void __thiscall FUN_00648a60(void *this,undefined4 *param_1,int param_2)

{
  void *this_00;
  undefined4 local_38 [2];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1e48;
  local_c = ExceptionList;
  if (param_2 == 0) {
    this_00 = (void *)((int)this + 0x60);
  }
  else if (param_2 == 1) {
    this_00 = (void *)((int)this + 0x6c);
  }
  else {
    if (param_2 != 2) {
      return;
    }
    this_00 = (void *)((int)this + 0x78);
  }
  if (this_00 != (void *)0x0) {
    local_30 = local_24;
    local_24[0] = 0;
    local_2c = 0;
    local_28 = 0x14;
    ExceptionList = &local_c;
    FUN_004015d0(&local_30,(char *)*param_1,param_1[1]);
    local_10 = 0;
    local_4 = 0;
    FUN_00593480(this_00,local_38,&local_30);
    if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00648b10 @ 00648b10 ////

int __thiscall FUN_00648b10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  void *local_4;
  
  puVar1 = param_1;
  local_4 = this;
  piVar2 = FUN_0048f2c0(this,param_1);
  piVar3 = FUN_00642f30(this,puVar1);
  param_1 = (undefined4 *)0x0;
  FUN_00645380((int)piVar2,(int)piVar3,(int *)&param_1);
  FUN_0048fbd0(this,&local_4,piVar2,piVar3);
  return (int)param_1;
}


//// FUNCTION FUN_00648b60 @ 00648b60 ////

void __thiscall FUN_00648b60(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)((int)this + 4);
  iVar2 = FUN_00644560(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  FUN_006475d0(this,1);
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


//// FUNCTION FUN_00648bc0 @ 00648bc0 ////

undefined4 * __thiscall FUN_00648bc0(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_00647670(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_00647670(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_00647670(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00641b90((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x49) != '\0') {
          FUN_00647670(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_00647670(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00641bf0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_00648d42;
      }
      if (*(char *)(param_2[2] + 0x49) != '\0') {
        FUN_00647670(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_00647670(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_00648d42:
  puVar4 = (undefined4 *)FUN_006483a0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_00648d70 @ 00648d70 ////

undefined4 * FUN_00648d70(undefined4 *param_1,int param_2,int param_3)

{
  FUN_00647d50(param_1,param_2,param_3);
  return param_1 + param_2 * 7;
}


//// FUNCTION FUN_00648da0 @ 00648da0 ////

void FUN_00648da0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 7) {
    FUN_00644c90(param_1);
  }
  return;
}


//// FUNCTION FUN_00648dd0 @ 00648dd0 ////

void __thiscall FUN_00648dd0(void *this,int *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined **local_38;
  int iStack_34;
  int *piStack_30;
  undefined ***pppuStack_2c;
  int iStack_24;
  undefined1 uStack_20;
  undefined4 *puStack_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &LAB_00cc1e68;
  pvStack_10 = ExceptionList;
  pppuStack_2c = &local_38;
  uVar6 = 0;
  iStack_24 = *(int *)(param_3 + 0x14);
  puStack_14 = &stack0xffffffbc;
  iStack_34 = 0;
  piStack_30 = (int *)0x0;
  local_38 = &PTR_FUN_00d31654;
  ExceptionList = &pvStack_10;
  if (iStack_24 != 0) {
    piStack_30 = (int *)(iStack_24 + 0x18);
    iStack_34 = *piStack_30;
    ExceptionList = &pvStack_10;
    *(int **)(*piStack_30 + 4) = &iStack_34;
    *piStack_30 = (int)&iStack_34;
  }
  uStack_20 = *(undefined1 *)(param_3 + 0x18);
  iVar2 = *(int *)((int)this + 4);
  uStack_8 = 0;
  if (iVar2 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar2) / 0x1c;
  }
  if (param_2 != 0) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    pvStack_18 = this;
    puVar1 = &stack0xffffffbc;
    if (0x9249249U - iVar2 < param_2) {
      FUN_00647820();
      uVar6 = extraout_ECX;
      puVar1 = puStack_14;
    }
    puStack_14 = puVar1;
    if (*(int *)((int)this + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x9249249 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (uVar6 < iVar2 + param_2) {
        iVar2 = FUN_00640c80((int)this);
        uVar6 = iVar2 + param_2;
      }
      puVar3 = operator_new(uVar6 * 0x1c);
      uStack_8 = CONCAT31(uStack_8._1_3_,1);
      puStack_1c = puVar3;
      puVar4 = (undefined4 *)FUN_006468e0(*(int *)((int)this + 4),(int)param_1,puVar3);
      FUN_00647d50(puVar4,param_2,(int)&local_38);
      FUN_006468e0((int)param_1,*(int *)((int)this + 8),puVar4 + param_2 * 7);
      iVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar2 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1c;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00648da0(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(undefined4 **)((int)this + 0xc) = puVar3 + uVar6 * 7;
      *(undefined4 **)((int)this + 8) = puVar3 + (param_2 + iVar2) * 7;
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puStack_1c = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puStack_1c - (int)param_1) / 0x1c) < param_2) {
        FUN_006468e0((int)param_1,(int)puStack_1c,param_1 + param_2 * 7);
        uStack_8 = CONCAT31(uStack_8._1_3_,3);
        FUN_00648d70(*(undefined4 **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1c,(int)&local_38);
        iVar2 = *(int *)((int)this + 8) + param_2 * 0x1c;
        *(int *)((int)this + 8) = iVar2;
        uStack_8 = 0;
        FUN_00643290(param_1,(int *)(iVar2 + param_2 * -0x1c),(int)&local_38);
      }
      else {
        puVar3 = puStack_1c + param_2 * -7;
        uVar5 = FUN_006468e0((int)puVar3,(int)puStack_1c,puStack_1c);
        *(undefined4 *)((int)this + 8) = uVar5;
        FUN_006432e0((int)param_1,(int)puVar3,puStack_1c);
        FUN_00643290(param_1,param_1 + param_2 * 7,(int)&local_38);
      }
    }
  }
  if (piStack_30 != (int *)0x0) {
    *piStack_30 = iStack_34;
  }
  if (iStack_34 != 0) {
    *(int **)(iStack_34 + 4) = piStack_30;
  }
  ExceptionList = pvStack_10;
  return;
}


//// FUNCTION FUN_00648df2 @ 00648df2 ////

void __fastcall FUN_00648df2(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_EAX;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint extraout_ECX;
  int iVar8;
  int unaff_EBP;
  
  uVar7 = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = in_EAX;
  iVar3 = *(int *)(param_2 + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff8;
  *(int *)(unaff_EBP + -0x14) = param_1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_00d31654;
  *(int *)(unaff_EBP + -0x20) = iVar3;
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x18);
    *(int **)(unaff_EBP + -0x2c) = piVar2;
    *(int *)(unaff_EBP + -0x30) = *piVar2;
    *(int *)(*piVar2 + 4) = unaff_EBP + -0x30;
    *piVar2 = unaff_EBP + -0x30;
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(param_2 + 0x18);
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    uVar7 = (*(int *)(param_1 + 0xc) - iVar3) / 0x1c;
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if (uVar1 != 0) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (0x9249249U - iVar3 < uVar1) {
      FUN_00647820();
      uVar7 = extraout_ECX;
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
    }
    if (uVar7 < iVar3 + uVar1) {
      if (0x9249249 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (*(int *)(param_1 + 4) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (uVar7 < iVar3 + uVar1) {
        iVar3 = FUN_00640c80(param_1);
        uVar7 = iVar3 + uVar1;
      }
      *(uint *)(unaff_EBP + 0x10) = uVar7 * 0x1c;
      puVar4 = operator_new(uVar7 * 0x1c);
      iVar3 = *(int *)(param_1 + 4);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar4;
      *(undefined4 **)(unaff_EBP + 0xc) = puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      puVar5 = (undefined4 *)FUN_006468e0(iVar3,*(int *)(unaff_EBP + 8),puVar4);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
      FUN_00647d50(puVar5,uVar1,unaff_EBP + -0x34);
      puVar5 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + uVar1 * 0x1c);
      iVar3 = *(int *)(param_1 + 8);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar5;
      FUN_006468e0(*(int *)(unaff_EBP + 8),iVar3,puVar5);
      iVar3 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x1c;
      }
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        FUN_00648da0(*(undefined4 **)(param_1 + 4),*(undefined4 **)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(param_1 + 4));
      }
      *(int *)(param_1 + 0xc) = *(int *)(unaff_EBP + 0x10) + (int)puVar4;
      *(undefined4 **)(param_1 + 8) = puVar4 + (uVar1 + iVar3) * 7;
      *(undefined4 **)(param_1 + 4) = puVar4;
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      piVar2 = *(int **)(unaff_EBP + 8);
      *(int *)(unaff_EBP + 0x10) = iVar3 - (int)piVar2;
      iVar8 = (int)((ulonglong)((longlong)(iVar3 - (int)piVar2) * -0x6db6db6d) >> 0x20) +
              *(int *)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      if ((uint)((iVar8 >> 4) - (iVar8 >> 0x1f)) < uVar1) {
        *(uint *)(unaff_EBP + 0x10) = uVar1 * 0x1c;
        FUN_006468e0((int)piVar2,iVar3,piVar2 + uVar1 * 7);
        iVar3 = *(int *)(param_1 + 8);
        puVar4 = *(undefined4 **)(param_1 + 8);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00648d70(puVar4,uVar1 - (iVar3 - (int)piVar2) / 0x1c,unaff_EBP + -0x34);
        iVar3 = *(int *)(unaff_EBP + 0x10);
        iVar8 = *(int *)(param_1 + 8) + iVar3;
        *(int *)(param_1 + 8) = iVar8;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00643290(piVar2,(int *)(iVar8 - iVar3),unaff_EBP + -0x34);
      }
      else {
        iVar8 = iVar3 + uVar1 * -0x1c;
        *(int *)(unaff_EBP + 8) = iVar8;
        uVar6 = FUN_006468e0(iVar8,iVar3,(undefined4 *)iVar3);
        puVar4 = *(undefined4 **)(unaff_EBP + -0x18);
        iVar3 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(param_1 + 8) = uVar6;
        FUN_006432e0((int)piVar2,iVar3,puVar4);
        FUN_00643290(piVar2,piVar2 + uVar1 * 7,unaff_EBP + -0x34);
      }
    }
  }
  uVar6 = 0;
  if (*(undefined4 **)(unaff_EBP + -0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + -0x2c) = *(undefined4 *)(unaff_EBP + -0x30);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x2c);
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 4) = uVar6;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


//// FUNCTION FUN_00649120 @ 00649120 ////

void __thiscall FUN_00649120(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00647c20((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x25) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x25);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x25);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x25);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x25);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00647900(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_006491e0 @ 006491e0 ////

void __fastcall FUN_006491e0(int param_1)

{
  FUN_00648810(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00649210 @ 00649210 ////

void __thiscall FUN_00649210(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00647c60((void *)piVar6[1]);
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
    FUN_00647fb0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_006492d0 @ 006492d0 ////

void __thiscall FUN_006492d0(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)((int)this + 4);
  puVar7 = FUN_00648880(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),iVar2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar3 = *(int **)((int)this + 4);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x29) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x29);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x29);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)((int)this + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x29);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x29);
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


//// FUNCTION FUN_00649360 @ 00649360 ////

void __fastcall FUN_00649360(int param_1)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint local_54;
  uint local_50;
  char *local_4c;
  uint local_48;
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
  puStack_8 = &LAB_00cc1eb0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar4 = FUN_0098b490("FacItemList");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x30);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x2c);
      if ((int *)local_50 != *(int **)(param_1 + 0x2c)) {
        do {
          uVar6 = local_50;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          FUN_004015d0(&local_4c,*(char **)(local_50 + 0xc),*(uint *)(local_50 + 0x10));
          local_4 = 0;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar6 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00420690((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x2c));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = 0;
      FUN_00423ba0(param_1 + 0x28);
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      local_4 = 1;
      SLVAR_LoadUint(&local_54);
      uVar6 = 0;
      if (local_54 != 0) {
        do {
          FUN_0098c550(&local_4c);
          piVar5 = FUN_00593a30((void *)(param_1 + 0x28),&local_4c);
          FUN_0098a430(piVar5,4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_54);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  uVar6 = 0;
  uVar4 = FUN_0098b490("SetItemList");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x3c);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x38);
      if ((int *)local_50 != *(int **)(param_1 + 0x38)) {
        do {
          uVar2 = local_50;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          uVar7 = *(uint *)(local_50 + 0x10);
          pcVar1 = *(char **)(local_50 + 0xc);
          if (0x13 < uVar7) {
            local_44 = uVar7 + 0x20 & 0xffffffe0;
            local_4c = _malloc(local_44);
          }
          _strncpy(local_4c,pcVar1,uVar7);
          local_4c[uVar7] = '\0';
          local_4 = 2;
          local_48 = uVar7;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar2 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00420690((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x38));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_54 = 0;
      FUN_00423ba0(param_1 + 0x34);
      local_4c = local_40;
      local_40[0] = '\0';
      local_48 = 0;
      local_44 = 0x14;
      local_4 = 3;
      SLVAR_LoadUint(&local_54);
      uVar7 = 0;
      if (local_54 != 0) {
        do {
          FUN_0098c550(&local_4c);
          piVar5 = FUN_00593a30((void *)(param_1 + 0x34),&local_4c);
          FUN_0098a430(piVar5,4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_54);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
    }
  }
  uVar4 = FUN_0098b490("PropItemList");
  if (((char)uVar4 != '\0') && (bVar3 = FUN_009896f0("CString"), bVar3)) {
    if (DAT_010583e0 == 0) {
      local_54 = *(uint *)(param_1 + 0x48);
      FUN_0098a3a0(&local_54);
      local_50 = **(int **)(param_1 + 0x44);
      if ((int *)local_50 != *(int **)(param_1 + 0x44)) {
        do {
          uVar7 = local_50;
          local_4c = local_40;
          local_40[0] = '\0';
          local_48 = 0;
          local_44 = 0x14;
          uVar6 = *(uint *)(local_50 + 0x10);
          pcVar1 = *(char **)(local_50 + 0xc);
          if (0x13 < uVar6) {
            local_44 = uVar6 + 0x20 & 0xffffffe0;
            local_4c = _malloc(local_44);
          }
          _strncpy(local_4c,pcVar1,uVar6);
          local_4c[uVar6] = '\0';
          local_4 = 4;
          local_48 = uVar6;
          FUN_0098c550(&local_4c);
          FUN_0098a430((undefined4 *)(uVar7 + 0x2c),4);
          local_4 = 0xffffffff;
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          FUN_00420690((int *)&local_50);
        } while (local_50 != *(uint *)(param_1 + 0x44));
      }
    }
    else if (DAT_010583e0 == 1) {
      local_50 = 0;
      FUN_00423710(*(void **)(*(int *)(param_1 + 0x44) + 4));
      *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)*(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      *(int *)(*(int *)(param_1 + 0x44) + 8) = *(int *)(param_1 + 0x44);
      local_2c = local_20;
      local_20[0] = 0;
      local_28 = 0;
      local_24 = 0x14;
      local_4 = 5;
      SLVAR_LoadUint(&local_50);
      if (local_50 != 0) {
        do {
          FUN_0098c550(&local_2c);
          piVar5 = FUN_00593a30((void *)(param_1 + 0x40),&local_2c);
          FUN_0098a430(piVar5,4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < local_50);
      }
      local_4 = 0xffffffff;
      if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c);
      }
    }
  }
  FUN_00989780();
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006498a0 @ 006498a0 ////

void __thiscall FUN_006498a0(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar6;
  uint _Size;
  char local_74 [4];
  undefined4 uStack_70;
  char cVar7;
  undefined1 *puVar8;
  uint local_4c;
  undefined1 local_3c [4];
  void *local_38;
  int local_34;
  undefined4 local_30;
  char *local_2c;
  uint local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00cc1edb;
  local_c = ExceptionList;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)FUN_00664500(param_1);
  puVar8 = local_3c;
  cVar7 = '$';
  iVar2 = FUN_008819d0(*(void **)(*(int *)((int)this + 0x364) + 0x358),(char *)*puVar1);
  FUN_0088c130(*(void **)(iVar2 + 0x164),cVar7,puVar8);
  local_4c = 0;
  while( true ) {
    if (local_38 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
    if ((uint)(local_34 - (int)local_38 >> 2) <= local_4c) break;
    pcVar3 = *(char **)((int)local_38 + local_4c * 4);
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    pcVar4 = pcVar3;
    do {
      cVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar7 != '\0');
    uVar5 = (int)pcVar4 - (int)(pcVar3 + 1);
    if (0x13 < uVar5) {
      local_24 = uVar5 + 0x20 & 0xffffffe0;
      local_2c = _malloc(local_24);
    }
    _strncpy(local_2c,pcVar3,uVar5);
    local_2c[uVar5] = '\0';
    local_4._0_1_ = 1;
    uStack_70 = 0x64999a;
    local_28 = uVar5;
    this_00 = operator_new(0x7c);
    local_4._0_1_ = 2;
    if (this_00 == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
      uVar6 = extraout_EDX;
    }
    else {
      FUN_006644f0(param_1);
      uVar5 = local_28;
      pcVar4 = local_2c;
      pcVar3 = local_74;
      local_74[0] = '\0';
      _Size = 0x14;
      if (0x13 < local_28) {
        _Size = local_28 + 0x20 & 0xffffffe0;
        pcVar3 = _malloc(_Size);
      }
      _strncpy(pcVar3,pcVar4,uVar5);
      pcVar3[uVar5] = '\0';
      puVar1 = FUN_006667d0(this_00,*(int *)((int)this + 0x364),param_1,pcVar3,uVar5,_Size);
      uVar6 = extraout_EDX_00;
    }
    local_4._0_1_ = 1;
    FUN_00665070(puVar1,uVar6,0);
    FUN_006498a0(this,(int)puVar1);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    local_4c = local_4c + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_38);
}


//// FUNCTION FUN_00649a90 @ 00649a90 ////

void __thiscall FUN_00649a90(void *this,undefined4 *param_1)

{
  void *this_00;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *puVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  ulonglong uVar7;
  
  if ((1 < (uint)(*(int *)(DAT_0104cdf4 + 0x3c) - *(int *)((int)this + 0x43c))) ||
     (cVar1 = FUN_004201b0(DAT_00f87b04), cVar1 != '\0')) {
    puVar5 = param_1;
    *(undefined4 *)((int)this + 0x43c) = *(undefined4 *)(DAT_0104cdf4 + 0x3c);
    puVar2 = (undefined4 *)FUN_00645740(param_1);
    if ((puVar2 != (undefined4 *)0x0) &&
       (param_1 = puVar2, iVar3 = FUN_00664510((int)puVar2), iVar3 != 3)) {
      this_00 = (void *)((int)this + 0x42c);
      FUN_006440d0((int)this_00);
      FUN_004015d0((void *)((int)this + 0x400),(char *)*puVar5,puVar5[1]);
      iVar3 = FUN_006644e0(puVar2);
      while ((iVar3 != 0 && (iVar3 = FUN_00664510((int)puVar2), iVar3 == 0))) {
        iVar3 = **(int **)((int)this + 0x430);
        iVar4 = FUN_00644560(iVar3,*(undefined4 *)(iVar3 + 4),&param_1);
        FUN_006475d0(this_00,1);
        *(int *)(iVar3 + 4) = iVar4;
        **(int **)(iVar4 + 4) = iVar4;
        puVar2 = (undefined4 *)FUN_006644e0(puVar2);
        param_1 = puVar2;
        iVar3 = FUN_006644e0(puVar2);
      }
      iVar3 = **(int **)((int)this + 0x430);
      param_1 = (undefined4 *)FUN_00644560(iVar3,*(undefined4 *)(iVar3 + 4),&param_1);
      FUN_006475d0(this_00,1);
      *(undefined4 **)(iVar3 + 4) = param_1;
      puVar5 = (undefined4 *)param_1[1];
      *puVar5 = param_1;
      *(undefined4 **)((int)this + 0x3f4) = puVar2;
      uVar6 = extraout_EDX;
      if (((1 < *(uint *)((int)this + 0x434)) ||
          ((*(uint *)((int)this + 0x434) == 1 &&
           (iVar3 = FUN_00664510(*(int *)(**(int **)((int)this + 0x430) + 8)), puVar5 = extraout_ECX
           , uVar6 = extraout_EDX_00, iVar3 != 3)))) &&
         (*(int *)((int)this + 0x3f8) != *(int *)((int)this + 0x3ec))) {
        FUN_00643a70(this,'\0');
        puVar5 = extraout_ECX_00;
        uVar6 = extraout_EDX_01;
      }
      *(undefined4 *)((int)this + 0x348) = 9;
      uVar7 = FUN_00990ae0(puVar5,uVar6);
      *(int *)((int)this + 0x3e4) = (int)uVar7;
    }
  }
  return;
}


//// FUNCTION FUN_00649c00 @ 00649c00 ////

int * __thiscall FUN_00649c00(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined **local_64;
  int local_60;
  int *local_5c;
  undefined ***local_58;
  undefined4 local_50;
  undefined4 local_48 [15];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1f00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar3 = FUN_00642b50(this,param_1);
  if (piVar3 != *(int **)((int)this + 4)) {
    uVar4 = FUN_00441060(puVar2,piVar3 + 3);
    if ((char)uVar4 == '\0') {
      ExceptionList = local_c;
      return piVar3 + 0xb;
    }
  }
  local_58 = &local_64;
  local_60 = 0;
  local_5c = (int *)0x0;
  local_64 = &PTR_FUN_00d31654;
  local_50 = 0;
  local_4 = 0;
  piVar5 = FUN_00645080(local_48,puVar2,(int)local_58);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = FUN_00648bc0(this,&param_1,piVar3,piVar5);
  iVar1 = *piVar3;
  FUN_00644f70(local_48);
  if (local_5c != (int *)0x0) {
    *local_5c = local_60;
  }
  if (local_60 != 0) {
    *(int **)(local_60 + 4) = local_5c;
  }
  ExceptionList = local_c;
  return (int *)(iVar1 + 0x2c);
}


//// FUNCTION FUN_00649ce0 @ 00649ce0 ////

void __thiscall FUN_00649ce0(void *this,int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1c != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1c;
      goto LAB_00649d29;
    }
  }
  iVar1 = 0;
LAB_00649d29:
  FUN_00648dd0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1c + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00649d50 @ 00649d50 ////

void __fastcall FUN_00649d50(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    FUN_00644c90(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00649da0 @ 00649da0 ////

void __fastcall FUN_00649da0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00649120(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00649dd0 @ 00649dd0 ////

void __thiscall FUN_00649dd0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00648810((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x49) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x49) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x49);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x49);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x49);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x49);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_006484c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00649e90 @ 00649e90 ////

void __fastcall FUN_00649e90(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00649210(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00649ec0 @ 00649ec0 ////

void * __thiscall FUN_00649ec0(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc1f10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00644810();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_00648930(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_0064a540 @ 0064a540 ////

void __fastcall FUN_0064a540(void *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char local_34 [16];
  undefined4 uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1f6b;
  local_c = ExceptionList;
  if ((*(char *)((int)param_1 + 1000) == '\0') &&
     (*(int *)(*(int *)((int)param_1 + 0x364) + 0x358) != 0)) {
    ExceptionList = &local_c;
    *(undefined1 *)((int)param_1 + 1000) = 1;
    uStack_24 = 0x64a597;
    FUN_008819d0(*(void **)(*(int *)((int)param_1 + 0x364) + 0x358),"$build");
    uStack_24 = 0x64a59e;
    this = operator_new(0x7c);
    local_4 = 0;
    if (this == (void *)0x0) {
      puVar1 = (undefined4 *)0x0;
      uVar2 = extraout_EDX;
    }
    else {
      pcVar3 = local_34;
      local_34[0] = '\0';
      uVar4 = 0;
      uVar5 = 0x14;
      FUN_004015d0(&stack0xffffffc0,"$build",6);
      puVar1 = FUN_006667d0(this,*(int *)((int)param_1 + 0x364),0,pcVar3,uVar4,uVar5);
      uVar2 = extraout_EDX_00;
    }
    local_4 = 0xffffffff;
    *(undefined4 **)((int)param_1 + 0x3ec) = puVar1;
    uStack_24 = 0x64a60b;
    FUN_00665070(puVar1,uVar2,2);
    uStack_24 = 0x64a619;
    FUN_006498a0(param_1,*(int *)((int)param_1 + 0x3ec));
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0064a630 @ 0064a630 ////

void __thiscall FUN_0064a630(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *this_00;
  int *piVar3;
  undefined **local_48;
  int local_44;
  int *local_40;
  undefined ***local_3c;
  undefined4 *local_34;
  undefined1 uStack_30;
  undefined1 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc1f90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((*(int *)((int)this + 0x428) != 0) &&
     (ExceptionList = &pvStack_c, FUN_0048f4b0((void *)((int)this + 0x420),(int *)&param_2,param_1),
     param_2 != *(undefined4 **)((int)this + 0x424))) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 0x14;
    FUN_004015d0(&local_2c,(char *)param_2[3],param_2[4]);
    local_4 = 0;
    FUN_00644d10((void *)((int)this + 0x49c),(int *)&param_2,&local_2c);
    if (param_2 != *(undefined4 **)((int)this + 0x4a0)) {
      puVar1 = (undefined4 *)param_2[0xc];
      puVar2 = (undefined4 *)*puVar1;
      while (param_2 = puVar2, puVar2 != puVar1) {
        if (puVar2[9] == 0) {
          (**(code **)(puVar2[4] + 4))();
          puVar2[9] = this_00;
          (**(code **)puVar2[4])();
          FUN_00660140(this_00,puVar2[3],(char)param_3);
        }
        FUN_006415f0((int *)&param_2);
        puVar2 = param_2;
      }
    }
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  local_3c = &local_48;
  local_44 = 0;
  local_40 = (int *)0x0;
  local_48 = &PTR_FUN_00d31654;
  local_34 = (undefined4 *)0x0;
  local_4 = 1;
  FUN_006289e0((int)local_3c);
  local_34 = this_00;
  (*(code *)*local_48)();
  uStack_30 = (undefined1)param_3;
  piVar3 = FUN_00649c00((void *)((int)this + 0x4d8),param_1);
  (**(code **)(*piVar3 + 4))();
  piVar3[5] = (int)local_34;
  (**(code **)*piVar3)();
  *(undefined1 *)(piVar3 + 6) = uStack_30;
  if (local_40 != (int *)0x0) {
    *local_40 = local_44;
  }
  if (local_44 != 0) {
    *(int **)(local_44 + 4) = local_40;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0064a7f0 @ 0064a7f0 ////

void __fastcall FUN_0064a7f0(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc1fe5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d183c8;
  param_1[0xe] = &PTR_LAB_00d183d0;
  local_4 = 3;
  FUN_00423c20(param_1 + 0x1e,&local_10,*(int **)param_1[0x1f],(int *)param_1[0x1f]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x1f]);
}


//// FUNCTION FUN_0064a8e0 @ 0064a8e0 ////

void __fastcall FUN_0064a8e0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
    FUN_00644c90(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_0064a8f0 @ 0064a8f0 ////

void __thiscall FUN_0064a8f0(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0x1c) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0x1c))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_00647d50(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 7;
    return;
  }
  FUN_00649ce0(this,&param_1,*(int **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_0064a9f0 @ 0064a9f0 ////

int __fastcall FUN_0064a9f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644810();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0064aa50 @ 0064aa50 ////

void * __thiscall FUN_0064aa50(void *this,int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc1ff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00644860();
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  local_8 = 0;
  FUN_006492d0(this,param_1);
  ExceptionList = local_10;
  return this;
}


//// FUNCTION FUN_0064ab30 @ 0064ab30 ////

void __thiscall FUN_0064ab30(void *this,int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *this_00;
  int iVar4;
  undefined4 local_48 [2];
  undefined **local_40;
  int local_3c;
  int *local_38;
  undefined ***local_34;
  int *local_2c;
  undefined **local_28;
  int local_24;
  int *local_20;
  undefined ***local_1c;
  int *local_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_00 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2010;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = param_1;
  if ((param_1 != (int *)0x0) &&
     (ExceptionList = &pvStack_c, *(int *)((int)this + (param_2 * 3 + 300) * 4) != 0)) {
    piVar2 = *(int **)((int)this + param_2 * 0xc + 0x4ac);
    piVar3 = (int *)*piVar2;
    ExceptionList = &pvStack_c;
    if (piVar3 != piVar2) {
      piVar1 = param_1 + 6;
      ExceptionList = &pvStack_c;
      param_1 = piVar3;
      do {
        piVar3 = param_1 + 4;
        FUN_00660140(this_00,param_1[3],1);
        local_34 = &local_40;
        local_40 = &PTR_FUN_00d31654;
        local_2c = this_00;
        local_3c = *piVar1;
        *(int **)(*piVar1 + 4) = &local_3c;
        *piVar1 = (int)&local_3c;
        local_4 = 0;
        local_38 = piVar1;
        FUN_00647e30(piVar3,local_48,&local_40);
        local_4 = 0xffffffff;
        local_40 = &PTR_FUN_00d31654;
        if (local_38 != (int *)0x0) {
          *local_38 = local_3c;
        }
        if (local_3c != 0) {
          *(int **)(local_3c + 4) = local_38;
        }
        local_2c = (int *)0x0;
        local_3c = 0;
        local_38 = (int *)0x0;
        FUN_00641550((int *)&param_1);
        piVar3 = param_1;
      } while (param_1 != piVar2);
    }
  }
  param_1 = piVar3;
  iVar4 = param_2;
  if (*(int *)((int)this + 0x4e4) != param_2) {
    FUN_00649d50((int)this + 0x4e8);
    *(int *)((int)this + 0x4e4) = iVar4;
  }
  local_1c = &local_28;
  local_24 = 0;
  local_20 = (int *)0x0;
  local_28 = &PTR_FUN_00d31654;
  local_14 = (int *)0x0;
  local_4 = 1;
  FUN_006289e0((int)local_1c);
  local_14 = this_00;
  (*(code *)*local_28)();
  uStack_10 = 1;
  FUN_0064a8f0((void *)((int)this + 0x4e8),(int)&local_28);
  if (local_20 != (int *)0x0) {
    *local_20 = local_24;
  }
  if (local_24 != 0) {
    *(int **)(local_24 + 4) = local_20;
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0064ace0 @ 0064ace0 ////

void __thiscall FUN_0064ace0(void *this,int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 local_30 [2];
  undefined **local_28;
  int local_24;
  int *local_20;
  undefined ***local_1c;
  int local_14;
  undefined1 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc2030;
  pvStack_c = ExceptionList;
  ppvVar8 = &pvStack_c;
  if (*(int *)((int)this + 0x4d4) != 0) {
    puVar3 = *(undefined4 **)((int)this + 0x4d0);
    puVar4 = (undefined4 *)*puVar3;
    ExceptionList = &pvStack_c;
    while (ppvVar8 = ExceptionList, puVar4 != puVar3) {
      iVar12 = puVar4[3];
      iVar11 = 0;
      do {
        local_4 = 0xffffffff;
        FUN_00660140(*(void **)(param_1 + iVar11 * 4),iVar12,1);
        local_14 = *(int *)(param_1 + iVar11 * 4);
        local_1c = &local_28;
        local_24 = 0;
        local_20 = (int *)0x0;
        local_28 = &PTR_FUN_00d31654;
        if (local_14 != 0) {
          local_20 = (int *)(local_14 + 0x18);
          local_24 = *local_20;
          *(int **)(*local_20 + 4) = &local_24;
          *local_20 = (int)&local_24;
        }
        local_4 = 0;
        FUN_00647e30(puVar4 + 4,local_30,&local_28);
        local_28 = &PTR_FUN_00d31654;
        if (local_20 != (int *)0x0) {
          *local_20 = local_24;
        }
        if (local_24 != 0) {
          *(int **)(local_24 + 4) = local_20;
        }
        iVar11 = iVar11 + 1;
        local_14 = 0;
        local_24 = 0;
        local_20 = (int *)0x0;
      } while (iVar11 < 5);
      if (*(char *)((int)puVar4 + 0x1d) == '\0') {
        puVar5 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar5 + 0x1d) == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x1d);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar2 == '\0') {
            cVar2 = *(char *)((int)*puVar5 + 0x1d);
            puVar4 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar2 = *(char *)((int)puVar4[1] + 0x1d);
          puVar9 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
          while ((puVar4 = puVar9, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
            cVar2 = *(char *)((int)puVar4[1] + 0x1d);
            puVar9 = (undefined4 *)puVar4[1];
            puVar5 = puVar4;
          }
        }
      }
    }
  }
  ExceptionList = ppvVar8;
  local_4 = 0xffffffff;
  piVar10 = *(int **)((int)this + 0x4ec);
  if (piVar10 != (int *)0x0) {
    piVar6 = *(int **)((int)this + 0x4f0);
    if (piVar10 != piVar6) {
      piVar10 = piVar10 + 2;
      do {
        piVar10[-2] = (int)&PTR_FUN_00d31654;
        if ((int *)*piVar10 != (int *)0x0) {
          *(int *)*piVar10 = piVar10[-1];
        }
        if (piVar10[-1] != 0) {
          *(int *)(piVar10[-1] + 4) = *piVar10;
        }
        piVar10[-1] = 0;
        *piVar10 = 0;
        piVar10[3] = 0;
        if ((int *)*piVar10 != (int *)0x0) {
          *(int *)*piVar10 = piVar10[-1];
        }
        if (piVar10[-1] != 0) {
          *(int *)(piVar10[-1] + 4) = *piVar10;
        }
        piVar10[-1] = 0;
        *piVar10 = 0;
        piVar1 = piVar10 + 5;
        piVar10 = piVar10 + 7;
      } while (piVar1 != piVar6);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x4ec));
  }
  *(undefined4 *)((int)this + 0x4ec) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  iVar12 = 0;
  do {
    local_1c = &local_28;
    *(undefined4 *)((int)this + 0x4e4) = 3;
    local_24 = 0;
    local_20 = (int *)0x0;
    local_28 = &PTR_FUN_00d31654;
    local_14 = 0;
    uVar7 = *(undefined4 *)(param_1 + iVar12 * 4);
    local_4 = 1;
    FUN_006289e0((int)local_1c);
    local_14 = uVar7;
    (*(code *)*local_28)();
    uStack_10 = 1;
    FUN_0064a8f0((void *)((int)this + 0x4e8),(int)&local_28);
    if (local_20 != (int *)0x0) {
      *local_20 = local_24;
    }
    if (local_24 != 0) {
      *(int **)(local_24 + 4) = local_20;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 5);
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0064afa0 @ 0064afa0 ////

undefined4 * __fastcall FUN_0064afa0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = FUN_00644810();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  return param_1;
}


//// FUNCTION FUN_0064afe0 @ 0064afe0 ////

void __fastcall FUN_0064afe0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00649210(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0064b010 @ 0064b010 ////

void __fastcall FUN_0064b010(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc2048;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_00649210((void *)(param_1 + 0x20),&local_10,(int *)**(int **)(param_1 + 0x24),
               *(int **)(param_1 + 0x24));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x24));
}


//// FUNCTION FUN_0064b090 @ 0064b090 ////

int __fastcall FUN_0064b090(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644860();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x29) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0064b100 @ 0064b100 ////

undefined4 * __thiscall FUN_0064b100(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2068;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_0064aa50((void *)((int)this + 0x20),(int)(param_1 + 8));
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0064b170 @ 0064b170 ////

undefined4 * __thiscall FUN_0064b170(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  FUN_00649ec0((void *)((int)this + 4),(int)(param_1 + 1));
  return this;
}


//// FUNCTION FUN_0064b190 @ 0064b190 ////

void __fastcall FUN_0064b190(int param_1)

{
  FUN_0064b010(param_1 + 0xc);
  return;
}


//// FUNCTION FUN_0064b1a0 @ 0064b1a0 ////

void __fastcall FUN_0064b1a0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00649dd0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0064b1d0 @ 0064b1d0 ////

void __fastcall FUN_0064b1d0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00649120((void *)(param_1 + 4),&local_4,(int *)**(int **)(param_1 + 8),*(int **)(param_1 + 8))
  ;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_0064b200 @ 0064b200 ////

void __fastcall FUN_0064b200(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00649120((void *)(param_1 + 4),&local_4,(int *)**(int **)(param_1 + 8),*(int **)(param_1 + 8))
  ;
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 8));
}


//// FUNCTION FUN_0064b230 @ 0064b230 ////

void FUN_0064b230(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc208b;
  local_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  if (DAT_0104d9a0 == (undefined4 *)0x0) {
    ExceptionList = &local_c;
    puVar1 = operator_new(0x84);
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = FUN_004241d0(puVar1);
    }
    local_4 = 0xffffffff;
    (*(code *)DAT_0104d98c[1])();
    DAT_0104d9a0 = puVar2;
    (*(code *)*DAT_0104d98c)();
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0064b2b0 @ 0064b2b0 ////

int __fastcall FUN_0064b2b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006446a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x49) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0064b2e0 @ 0064b2e0 ////

undefined4 * __thiscall FUN_0064b2e0(void *this,undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc20a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  local_4 = 0;
  FUN_0064aa50((void *)((int)this + 0x20),param_2);
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_0064b3d0 @ 0064b3d0 ////

void * __thiscall FUN_0064b3d0(void *this,byte param_1)

{
  FUN_0064b190((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0064b3f0 @ 0064b3f0 ////

void __fastcall FUN_0064b3f0(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  FUN_00649120((void *)(param_1 + 0x10),&local_4,(int *)**(int **)(param_1 + 0x14),
               *(int **)(param_1 + 0x14));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x14));
}


//// FUNCTION FUN_0064b420 @ 0064b420 ////

undefined4 *
FUN_0064b420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc20d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x20);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    FUN_00649ec0(puVar1 + 4,(int)(param_4 + 1));
    *(undefined1 *)(puVar1 + 7) = param_5;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0064b4c0 @ 0064b4c0 ////

undefined4 *
FUN_0064b4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc20f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = operator_new(0x3c);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0064b100(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0xe) = param_5;
    *(undefined1 *)((int)puVar1 + 0x39) = 0;
  }
  ExceptionList = local_10;
  return puVar1;
}


//// FUNCTION FUN_0064b570 @ 0064b570 ////

void * __thiscall FUN_0064b570(void *this,byte param_1)

{
  FUN_0064b3f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0064b5a0 @ 0064b5a0 ////

void __thiscall
FUN_0064b5a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc2108;
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
  piVar3 = FUN_0064b420(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0064b69b:
        *(undefined1 *)(*piVar4 + 0x1c) = 1;
        *(undefined1 *)(piVar5 + 7) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x1c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00642790(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x1c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
        FUN_00640f30(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[7] == '\0') goto LAB_0064b69b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00640f30(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x1c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x1c) = 0;
      FUN_00642790(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x1c);
  } while( true );
}


//// FUNCTION FUN_0064b750 @ 0064b750 ////

void __thiscall
FUN_0064b750(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc2128;
  local_c = ExceptionList;
  if (0x5d1745b < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0064b4c0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x38);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x38) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0xe] == '\0') {
LAB_0064b84b:
        *(undefined1 *)(*piVar4 + 0x38) = 1;
        *(undefined1 *)(piVar5 + 0xe) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x38) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_00642720(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x38) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
        FUN_00640de0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xe] == '\0') goto LAB_0064b84b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00640de0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x38) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x38) = 0;
      FUN_00642720(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x38);
  } while( true );
}


//// FUNCTION FUN_0064b900 @ 0064b900 ////

void FUN_0064b900(void *param_1)

{
  if (*(char *)((int)param_1 + 0x39) == '\0') {
    FUN_0064b900(*(void **)((int)param_1 + 8));
    FUN_0064b190((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0064b950 @ 0064b950 ////

void __thiscall FUN_0064b950(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc2148;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x39) != '\0') {
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
  FUN_006419f0((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x39) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x39) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
      iVar1 = param_2[0xe];
      *(char *)(param_2 + 0xe) = (char)_Memory[0xe];
      *(char *)(_Memory + 0xe) = (char)iVar1;
      goto LAB_0064bac1;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x39) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      piVar2 = (int *)FUN_00640da0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x39) == '\0') {
      uVar3 = FUN_00640d80((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0064bac1:
  if ((char)_Memory[0xe] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0xe] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_00642720(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(*piVar4 + 0x38) != '\x01') || (*(char *)(piVar4[2] + 0x38) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x38) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x38) = 1;
                *(undefined1 *)(piVar4 + 0xe) = 0;
                FUN_00640de0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
              *(undefined1 *)(piVar5 + 0xe) = 1;
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              FUN_00642720(this,(int)piVar5);
              break;
            }
LAB_0064bb84:
            *(undefined1 *)(piVar4 + 0xe) = 0;
          }
        }
        else {
          if ((char)piVar4[0xe] == '\0') {
            *(undefined1 *)(piVar4 + 0xe) = 1;
            *(undefined1 *)(piVar5 + 0xe) = 0;
            FUN_00640de0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x39) == '\0') {
            if ((*(char *)(piVar4[2] + 0x38) == '\x01') && (*(char *)(*piVar4 + 0x38) == '\x01'))
            goto LAB_0064bb84;
            if (*(char *)(*piVar4 + 0x38) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x38) = 1;
              *(undefined1 *)(piVar4 + 0xe) = 0;
              FUN_00642720(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xe) = (char)piVar5[0xe];
            *(undefined1 *)(piVar5 + 0xe) = 1;
            *(undefined1 *)(*piVar4 + 0x38) = 1;
            FUN_00640de0(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xe) = 1;
  }
  FUN_0064b010((int)(_Memory + 3));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0064bc20 @ 0064bc20 ////

void __thiscall FUN_0064bc20(void *this,undefined4 *param_1,uint *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  param_2 = puVar5;
  if (local_4) {
    if (puVar5 == (uint *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0064b5a0(this,&param_2,'\x01',puVar5,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_006418d0((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_0064b5a0(this,&param_2,local_4,puVar5,puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_0064bcf0 @ 0064bcf0 ////

void __thiscall FUN_0064bcf0(void *this,undefined4 *param_1,undefined4 *param_2)

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
  if (*(char *)((int)puVar5[1] + 0x39) == '\0') {
    puVar8 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar8;
      pbVar7 = (byte *)puVar5[3];
      pbVar3 = (byte *)*param_2;
      do {
        bVar1 = *pbVar3;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0064bd54:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0064bd59;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0064bd54;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0064bd59:
      local_4 = iVar4 < 0;
      if (local_4) {
        puVar8 = (undefined4 *)*puVar5;
      }
      else {
        puVar8 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar8 + 0x39) == '\0');
  }
  local_8 = puVar5;
  if (local_4) {
    if (puVar5 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar5 = (undefined4 *)FUN_0064b750(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00641c50((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_0064b750(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_0064be10 @ 0064be10 ////

void __fastcall FUN_0064be10(int param_1)

{
  FUN_0064b900(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0064be40 @ 0064be40 ////

void FUN_0064be40(void *param_1)

{
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    FUN_0064be40(*(void **)((int)param_1 + 8));
    FUN_0064b3f0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0064be80 @ 0064be80 ////

void __thiscall FUN_0064be80(void *this,undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2168;
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
  FUN_00641550((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0x1d) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0x1d) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0x1d) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[7];
      *(char *)(param_2 + 7) = (char)piVar2[7];
      *(char *)(piVar2 + 7) = (char)iVar1;
      goto LAB_0064bfef;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0x1d) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0x1d) == '\0') {
      piVar3 = (int *)FUN_00640ef0(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0x1d) == '\0') {
      uVar4 = FUN_00640ed0((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_0064bfef:
  if ((char)piVar2[7] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[7] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar6 + 7) = 0;
            FUN_00642790(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(*piVar5 + 0x1c) != '\x01') || (*(char *)(piVar5[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x1c) = 1;
                *(undefined1 *)(piVar5 + 7) = 0;
                FUN_00640f30(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 7) = (char)piVar6[7];
              *(undefined1 *)(piVar6 + 7) = 1;
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              FUN_00642790(this,(int)piVar6);
              break;
            }
LAB_0064c0b8:
            *(undefined1 *)(piVar5 + 7) = 0;
          }
        }
        else {
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar6 + 7) = 0;
            FUN_00640f30(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(piVar5[2] + 0x1c) == '\x01') && (*(char *)(*piVar5 + 0x1c) == '\x01'))
            goto LAB_0064c0b8;
            if (*(char *)(*piVar5 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              *(undefined1 *)(piVar5 + 7) = 0;
              FUN_00642790(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 7) = (char)piVar6[7];
            *(undefined1 *)(piVar6 + 7) = 1;
            *(undefined1 *)(*piVar5 + 0x1c) = 1;
            FUN_00640f30(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 7) = 1;
  }
  FUN_00649120(piVar2 + 4,&local_54,*(int **)piVar2[5],(int *)piVar2[5]);
                    /* WARNING: Subroutine does not return */
  _free((void *)piVar2[5]);
}


//// FUNCTION FUN_0064c170 @ 0064c170 ////

undefined4 * __thiscall FUN_0064c170(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_8 [2];
  
  piVar2 = param_3;
  if (*(int *)((int)this + 8) == 0) {
    FUN_0064b750(this,param_1,'\x01',*(undefined4 **)((int)this + 4),param_3);
    return param_1;
  }
  piVar1 = *(int **)((int)this + 4);
  if (param_2 == (int *)*piVar1) {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      FUN_0064b750(this,param_1,'\x01',param_2,piVar2);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar4 = (undefined4 *)piVar1[2];
    uVar3 = FUN_00441060(puVar4 + 3,param_3);
    if ((char)uVar3 != '\0') {
      FUN_0064b750(this,param_1,'\0',puVar4,piVar2);
      return param_1;
    }
  }
  else {
    uVar3 = FUN_00441060(param_3,param_2 + 3);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_00641c50((int *)&param_3);
      piVar1 = param_3;
      uVar3 = FUN_00441060(param_3 + 3,piVar2);
      if ((char)uVar3 != '\0') {
        if (*(char *)(piVar1[2] + 0x39) != '\0') {
          FUN_0064b750(this,param_1,'\0',piVar1,piVar2);
          return param_1;
        }
        FUN_0064b750(this,param_1,'\x01',param_2,piVar2);
        return param_1;
      }
    }
    uVar3 = FUN_00441060(param_2 + 3,piVar2);
    if ((char)uVar3 != '\0') {
      param_3 = param_2;
      FUN_006419f0((int *)&param_3);
      piVar1 = param_3;
      if (param_3 != *(int **)((int)this + 4)) {
        uVar3 = FUN_00441060(piVar2,param_3 + 3);
        if ((char)uVar3 == '\0') goto LAB_0064c2f2;
      }
      if (*(char *)(param_2[2] + 0x39) != '\0') {
        FUN_0064b750(this,param_1,'\0',param_2,piVar2);
        return param_1;
      }
      FUN_0064b750(this,param_1,'\x01',piVar1,piVar2);
      return param_1;
    }
  }
LAB_0064c2f2:
  puVar4 = (undefined4 *)FUN_0064bcf0(this,local_8,piVar2);
  *param_1 = *puVar4;
  return param_1;
}


//// FUNCTION FUN_0064c320 @ 0064c320 ////

void __thiscall FUN_0064c320(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0064b900((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x39) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x39) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x39);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x39);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x39);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x39);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0064b950(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0064c3e0 @ 0064c3e0 ////

void __fastcall FUN_0064c3e0(int param_1)

{
  FUN_0064be40(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0064c410 @ 0064c410 ////

int * __thiscall FUN_0064c410(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_48;
  undefined1 local_44 [4];
  int *local_40;
  undefined4 local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2190;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar2 = FUN_00642a70(this,param_1);
  if (piVar2 != *(int **)((int)this + 4)) {
    uVar3 = FUN_00441060(puVar1,piVar2 + 3);
    if ((char)uVar3 == '\0') {
      ExceptionList = local_c;
      return piVar2 + 0xb;
    }
  }
  local_40 = (int *)FUN_00644860();
  *(undefined1 *)((int)local_40 + 0x29) = 1;
  local_40[1] = (int)local_40;
  *local_40 = (int)local_40;
  local_40[2] = (int)local_40;
  local_3c = 0;
  local_4 = 0;
  piVar4 = FUN_0064b2e0(local_38,puVar1,(int)local_44);
  local_4._0_1_ = 1;
  FUN_0064c170(this,&param_1,piVar2,piVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b010((int)local_38);
  local_4 = 0xffffffff;
  FUN_00649210(local_44,&uStack_48,(int *)*local_40,local_40);
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


//// FUNCTION FUN_0064c550 @ 0064c550 ////

void __thiscall FUN_0064c550(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0064be40((void *)piVar6[1]);
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
    FUN_0064be80(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_0064c610 @ 0064c610 ////

void __thiscall FUN_0064c610(void *this,char param_1,undefined ******param_2)

{
  int *this_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined ******this_01;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  void *pvVar13;
  void **ppvVar14;
  undefined *********pppppppppuVar15;
  char **ppcVar16;
  int **ppiVar17;
  int *local_dc [2];
  undefined ********local_d4;
  int local_d0;
  int *local_cc;
  undefined *********local_c8 [2];
  void *local_c0;
  char *local_b4;
  undefined4 local_b0;
  uint local_ac;
  char local_a8 [20];
  int *piStack_94;
  undefined ********local_90;
  undefined4 local_8c;
  int *local_88;
  undefined *******local_84 [5];
  int *local_70;
  void *local_6c [2];
  uint local_64;
  void *local_4c [2];
  uint local_44;
  void *local_2c;
  int local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this_01 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2213;
  local_c = ExceptionList;
  local_dc[0] = (int *)0x0;
  ExceptionList = &local_c;
  puVar7 = FUN_00643330(param_2,local_4c);
  puVar7 = (undefined4 *)FUN_00645740(puVar7);
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if (puVar7 != (undefined4 *)0x0) {
    if (param_1 == '\0') {
      FUN_00666700(puVar7,(int)this_01);
    }
    else {
      FUN_006664e0(puVar7,(int)this_01);
    }
    iVar8 = FUN_006644e0(puVar7);
    while (iVar8 != 0) {
      puVar7 = (undefined4 *)FUN_006644e0(puVar7);
      if (param_1 == '\0') {
        FUN_00666700(puVar7,(int)this_01);
      }
      else {
        FUN_006664e0(puVar7,(int)this_01);
      }
      iVar8 = FUN_006644e0(puVar7);
    }
  }
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  FUN_00643330(this_01,local_6c);
  local_4 = 0;
  FUN_00643370(this_01,&local_2c);
  local_4._0_1_ = 1;
  if (param_1 == '\0') {
    FUN_00644d10((void *)((int)this + 0x49c),(int *)local_dc,&local_2c);
    piVar11 = local_dc[0];
    if (local_dc[0] != *(int **)((int)this + 0x4a0)) {
      this_00 = local_dc[0] + 0xb;
      FUN_00644ef0(this_00,local_dc,(uint *)&param_2);
      piVar6 = local_dc[0];
      if (local_dc[0] != (int *)piVar11[0xc]) {
        FUN_00644050(&local_d4,(int)(local_dc[0] + 4));
        local_4._0_1_ = 9;
        if (local_c0 != (void *)0x0) {
          FUN_006631f0(local_c0,(int)param_2);
        }
        FUN_00647fb0(this_00,local_dc,piVar6);
        local_4._0_1_ = 1;
        FUN_00629cc0(&local_d4);
      }
      if (piVar11[0xd] == 0) {
        FUN_0064b950((void *)((int)this + 0x49c),local_dc,piVar11);
        FUN_00648b10((void *)((int)this + 0x420),&local_2c);
      }
    }
    pvVar13 = (void *)((int)this + 0x4a8);
    local_dc[0] = (int *)0x4;
    do {
      FUN_00644d70(pvVar13,&local_70,(uint *)&param_2);
      if (local_70 != *(int **)((int)pvVar13 + 4)) {
        piVar11 = (int *)local_70[5];
        piStack_94 = (int *)*piVar11;
        while (piStack_94 != piVar11) {
          local_c8[0] = &local_d4;
          local_d0 = 0;
          local_cc = (int *)0x0;
          local_d4 = (undefined ********)&PTR_FUN_00d31654;
          local_c0 = (void *)piStack_94[8];
          if (local_c0 != (void *)0x0) {
            local_cc = (int *)((int)local_c0 + 0x18);
            local_d0 = *local_cc;
            *(int **)(*local_cc + 4) = &local_d0;
            *local_cc = (int)&local_d0;
          }
          local_4._0_1_ = 10;
          if (local_c0 != (void *)0x0) {
            FUN_006631f0(local_c0,(int)param_2);
          }
          local_4._0_1_ = 1;
          local_d4 = (undefined ********)&PTR_FUN_00d31654;
          if (local_cc != (int *)0x0) {
            *local_cc = local_d0;
          }
          if (local_d0 != 0) {
            *(int **)(local_d0 + 4) = local_cc;
          }
          local_c0 = (void *)0x0;
          local_d0 = 0;
          local_cc = (int *)0x0;
          FUN_00642e70((int *)&piStack_94);
        }
        FUN_0064be80(pvVar13,&piStack_94,local_70);
      }
      pvVar13 = (void *)((int)pvVar13 + 0xc);
      local_dc[0] = (int *)((int)local_dc[0] + -1);
    } while (local_dc[0] != (int *)0x0);
    goto LAB_0064ced6;
  }
  if (local_28 == 0) {
    local_90 = local_84;
    local_84[0] = (undefined *******)((uint)local_84[0] & 0xffffff00);
    local_8c = 0;
    local_88 = (int *)0x14;
    _strncpy((char *)local_90,"$orna_sub1",10);
    pppppppppuVar15 = &local_90;
    ppvVar14 = local_6c;
    local_8c = 10;
    *(char *)((int)local_90 + 10) = '\0';
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    uVar9 = FUN_00401ec0(ppvVar14,pppppppppuVar15);
    if ((char)uVar9 == '\0') {
      local_d4 = (undefined ********)local_c8;
      local_c8[0] = (undefined *********)((uint)local_c8[0] & 0xffffff00);
      local_d0 = 0;
      local_cc = (int *)0x14;
      _strncpy((char *)local_d4,"$orna_sub2",10);
      pppppppppuVar15 = &local_d4;
      ppvVar14 = local_6c;
      local_d0 = 10;
      *(char *)((int)local_d4 + 10) = '\0';
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
      uVar9 = FUN_00401ec0(ppvVar14,pppppppppuVar15);
      if ((char)uVar9 == '\0') {
        local_b4 = local_a8;
        local_b0 = 0;
        local_ac = 0x14;
        local_a8[0] = (char)uVar9;
        _strncpy(local_b4,"$orna_sub3",10);
        ppcVar16 = &local_b4;
        ppvVar14 = local_6c;
        local_b0 = 10;
        local_b4[10] = '\0';
        bVar3 = true;
        bVar2 = true;
        bVar1 = false;
        uVar9 = FUN_00401ec0(ppvVar14,ppcVar16);
        if ((char)uVar9 == '\0') {
          FUN_00401de0(local_4c,"$orna_sub4",0xffffffff);
          bVar4 = true;
          bVar3 = true;
          bVar2 = true;
          bVar1 = true;
          uVar9 = FUN_00401ec0(local_6c,local_4c);
          if ((char)uVar9 == '\0') goto LAB_0064c85d;
        }
      }
    }
    bVar4 = true;
    bVar5 = true;
  }
  else {
LAB_0064c85d:
    bVar5 = false;
  }
  if ((bVar1) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c[0]);
  }
  if ((bVar2) && (0x14 < local_ac)) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if ((bVar3) && (0x14 < local_cc)) {
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
  if ((bVar4) && (0x14 < local_88)) {
                    /* WARNING: Subroutine does not return */
    _free(local_90);
  }
  if (!bVar5) {
    FUN_0048fab0((void *)((int)this + 0x420),local_dc,&local_2c);
    local_c8[0] = &local_d4;
    local_d0 = 0;
    local_cc = (int *)0x0;
    local_d4 = (undefined ********)&PTR_FUN_00d31654;
    local_c0 = (void *)0x0;
    FUN_00644260(&local_b4,&param_2,(int)local_c8[0]);
    FUN_00629cc0(&local_d4);
    FUN_006448d0(&local_90,&local_b4);
    pppppppppuVar15 = &local_90;
    ppiVar17 = local_dc;
    local_4._0_1_ = 8;
    piVar11 = FUN_0064c410((void *)((int)this + 0x49c),&local_2c);
    FUN_00647ef0(piVar11,ppiVar17,(uint *)pppppppppuVar15);
    local_4._0_1_ = 7;
    FUN_00644c20((int)&local_90);
    FUN_00644de0((void *)((int)this + 0x4d8),(int *)local_dc,&local_2c);
    if ((local_dc[0] != *(int **)((int)this + 0x4dc)) && ((void *)local_dc[0][0x10] != (void *)0x0))
    {
      FUN_00660140((void *)local_dc[0][0x10],(int)param_2,(char)local_dc[0][0x11]);
    }
    FUN_00644bd0((int)&local_b4);
LAB_0064ced6:
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
      _free(local_6c[0]);
    }
    ExceptionList = local_c;
    return;
  }
  iVar8 = -1;
  local_90 = (undefined ********)0x0;
  local_88 = (int *)FUN_00644810();
  *(undefined1 *)((int)local_88 + 0x25) = 1;
  local_88[1] = (int)local_88;
  *local_88 = (int)local_88;
  local_88[2] = (int)local_88;
  local_84[0] = (undefined *******)0x0;
  local_b4 = local_a8;
  local_4._0_1_ = 2;
  local_90 = (undefined ********)param_2;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_ac = 0x14;
  _strncpy(local_b4,"$orna_sub1",10);
  ppcVar16 = &local_b4;
  ppvVar14 = local_6c;
  local_b0 = 10;
  local_b4[10] = '\0';
  uVar9 = FUN_00401ec0(ppvVar14,ppcVar16);
  if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  if ((char)uVar9 == '\0') {
    local_b4 = local_a8;
    local_a8[0] = '\0';
    local_b0 = 0;
    local_ac = 0x14;
    _strncpy(local_b4,"$orna_sub2",10);
    ppcVar16 = &local_b4;
    ppvVar14 = local_6c;
    local_b0 = 10;
    local_b4[10] = '\0';
    uVar9 = FUN_00401ec0(ppvVar14,ppcVar16);
    if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
      _free(local_b4);
    }
    if ((char)uVar9 == '\0') {
      local_b4 = local_a8;
      local_a8[0] = '\0';
      local_b0 = 0;
      local_ac = 0x14;
      _strncpy(local_b4,"$orna_sub3",10);
      ppcVar16 = &local_b4;
      ppvVar14 = local_6c;
      local_b0 = 10;
      local_b4[10] = '\0';
      uVar9 = FUN_00401ec0(ppvVar14,ppcVar16);
      if (0x14 < local_ac) {
                    /* WARNING: Subroutine does not return */
        _free(local_b4);
      }
      if ((char)uVar9 == '\0') {
        FUN_00401de0(local_4c,"$orna_sub4",0xffffffff);
        uVar9 = FUN_00401ec0(local_6c,local_4c);
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c[0]);
        }
        if ((char)uVar9 == '\0') goto LAB_0064cb71;
        iVar8 = 3;
        FUN_0064b170(&local_d4,&local_90);
        local_4._0_1_ = 6;
        pvVar13 = (void *)((int)this + 0x4cc);
      }
      else {
        iVar8 = 2;
        FUN_0064b170(&local_d4,&local_90);
        local_4._0_1_ = 5;
        pvVar13 = (void *)((int)this + 0x4c0);
      }
    }
    else {
      iVar8 = 1;
      local_d4 = local_90;
      FUN_00649ec0(&local_d0,(int)&local_8c);
      local_4._0_1_ = 4;
      pvVar13 = (void *)((int)this + 0x4b4);
    }
  }
  else {
    iVar8 = 0;
    local_d4 = local_90;
    FUN_00649ec0(&local_d0,(int)&local_8c);
    local_4._0_1_ = 3;
    pvVar13 = (void *)((int)this + 0x4a8);
  }
  FUN_0064bc20(pvVar13,local_dc,(uint *)&local_d4);
  local_4._0_1_ = 2;
  FUN_0064b200((int)&local_d4);
LAB_0064cb71:
  if ((-1 < *(int *)((int)this + 0x4e4)) && (*(int *)((int)this + 0x4e4) == iVar8)) {
    iVar8 = 0;
    iVar12 = 0;
    while( true ) {
      iVar10 = 0;
      if (*(int *)((int)this + 0x4ec) != 0) {
        iVar10 = (*(int *)((int)this + 0x4f0) - *(int *)((int)this + 0x4ec)) / 0x1c;
      }
      if (iVar10 <= iVar8) break;
      iVar10 = *(int *)((int)this + 0x4ec) + iVar12;
      if (*(int *)(iVar10 + 0x14) != 0) {
        FUN_00660140(*(void **)(iVar10 + 0x14),(int)param_2,*(undefined1 *)(iVar10 + 0x18));
      }
      iVar8 = iVar8 + 1;
      iVar12 = iVar12 + 0x1c;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00649120(&local_8c,local_dc,(int *)*local_88,local_88);
                    /* WARNING: Subroutine does not return */
  _free(local_88);
}


//// FUNCTION FUN_0064cf90 @ 0064cf90 ////

void __fastcall FUN_0064cf90(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0064c320(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0064cfc0 @ 0064cfc0 ////

int __fastcall FUN_0064cfc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644600();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0064d020 @ 0064d020 ////

void __fastcall FUN_0064d020(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_0064c550(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_0064d050 @ 0064d050 ////

void __fastcall FUN_0064d050(undefined4 *param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc2304;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d33aa4;
  param_1[0x14] = &PTR_LAB_00d33a88;
  local_4 = 0xf;
  FUN_00666990();
  FUN_00643480((int)param_1);
  FUN_00649d50((int)(param_1 + 0x13a));
  local_4 = CONCAT31(local_4._1_3_,0xd);
  FUN_00649dd0(param_1 + 0x136,&local_10,*(int **)param_1[0x137],(int *)param_1[0x137]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x137]);
}


//// FUNCTION FUN_0064d410 @ 0064d410 ////

int __fastcall FUN_0064d410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00644650();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x1d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0064d440 @ 0064d440 ////

undefined4 * __fastcall FUN_0064d440(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar7;
  ulonglong uVar8;
  float fVar9;
  float local_34;
  undefined4 local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2407;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007432f0(param_1);
  piVar1 = param_1 + 0xd4;
  *param_1 = &PTR_FUN_00d33aa4;
  param_1[0x14] = &PTR_LAB_00d33a88;
  param_1[0xd1] = 0xb;
  param_1[0xd2] = 0xc;
  param_1[0xd3] = 0xc;
  param_1[0xd7] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d2dc34;
  param_1[0xd9] = 0;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = param_1 + 0xda;
  param_1[0xda] = &PTR_FUN_00d18c2c;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = param_1 + 0xe0;
  param_1[0xe0] = &PTR_FUN_00d31654;
  param_1[0xe5] = 0;
  param_1[0xe9] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = param_1 + 0xe6;
  param_1[0xe6] = &PTR_FUN_00d31654;
  param_1[0xeb] = 0;
  param_1[0xef] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = param_1 + 0xec;
  param_1[0xec] = &PTR_LAB_00d33814;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = param_1 + 0x103;
  *(undefined1 *)(param_1 + 0x103) = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0x14;
  local_4._0_1_ = 6;
  local_4._1_3_ = 0;
  iVar3 = FUN_0048f380();
  param_1[0x109] = iVar3;
  *(undefined1 *)(iVar3 + 0x2d) = 1;
  *(undefined4 *)(param_1[0x109] + 4) = param_1[0x109];
  *(undefined4 *)param_1[0x109] = param_1[0x109];
  *(undefined4 *)(param_1[0x109] + 8) = param_1[0x109];
  param_1[0x10a] = 0;
  local_4._0_1_ = 7;
  uVar4 = FUN_00644340();
  param_1[0x10c] = uVar4;
  param_1[0x10d] = 0;
  *(undefined1 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)((int)param_1 + 0x439) = 1;
  *(undefined1 *)((int)param_1 + 0x43a) = 1;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x115] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = param_1 + 0x112;
  param_1[0x112] = &PTR_LAB_00d33824;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x11c] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = param_1 + 0x119;
  param_1[0x119] = &PTR_LAB_00d33824;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x123] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = param_1 + 0x120;
  param_1[0x120] = &PTR_LAB_00d33824;
  param_1[0x125] = 0;
  local_4._0_1_ = 0xb;
  param_1[0x126] = 0;
  iVar3 = FUN_00644600();
  param_1[0x128] = iVar3;
  *(undefined1 *)(iVar3 + 0x39) = 1;
  *(undefined4 *)(param_1[0x128] + 4) = param_1[0x128];
  *(undefined4 *)param_1[0x128] = param_1[0x128];
  *(undefined4 *)(param_1[0x128] + 8) = param_1[0x128];
  param_1[0x129] = 0;
  local_4._0_1_ = 0xc;
  _eh_vector_constructor_iterator_(param_1 + 0x12a,0xc,4,FUN_0064d410,FUN_0064d020);
  local_4._0_1_ = 0xd;
  iVar3 = FUN_006446a0();
  param_1[0x137] = iVar3;
  *(undefined1 *)(iVar3 + 0x49) = 1;
  *(undefined4 *)(param_1[0x137] + 4) = param_1[0x137];
  *(undefined4 *)param_1[0x137] = param_1[0x137];
  *(undefined4 *)(param_1[0x137] + 8) = param_1[0x137];
  param_1[0x138] = 0;
  param_1[0x139] = 0xffffffff;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  local_4._0_1_ = 0xf;
  puVar5 = operator_new(0x394);
  local_4._0_1_ = 0x10;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_0089ea20(puVar5);
  }
  local_4._0_1_ = 0xf;
  (**(code **)(*piVar1 + 4))();
  param_1[0xd9] = puVar5;
  (**(code **)*piVar1)();
  local_2c = local_20;
  local_20[0] = '\0';
  local_28 = 0;
  local_24 = 0x14;
  _strncpy(local_2c,"buildmenu4",10);
  local_28 = 10;
  local_2c[10] = '\0';
  local_4._0_1_ = 0x11;
  FUN_0089e070((void *)param_1[0xd9],&local_2c,1,1,'\0');
  local_4 = CONCAT31(local_4._1_3_,0xf);
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined4 *)(*(int *)(param_1[0xd9] + 0x358) + 0x244) = 1;
  FUN_00882710(*(void **)(param_1[0xd9] + 0x358),&local_34);
  (**(code **)(*(int *)param_1[0xd9] + 0x74))(local_34,local_30);
  FUN_0089e5f0((void *)param_1[0xd9],'\x01');
  FUN_0064a540(param_1);
  FUN_00646950((int)param_1);
  uVar8 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  param_1[0xf9] = (int)uVar8;
  iVar3 = *(int *)param_1[0xd9];
  fVar7 = (float10)(**(code **)(iVar3 + 0x10))();
  fVar9 = (float)((float10)38.0 - fVar7 * (float10)0.5);
  iVar6 = FUN_0071b2b0();
  (**(code **)(iVar3 + 0x5c))(1,iVar6,fVar9);
  iVar3 = *(int *)param_1[0xd9];
  fVar7 = (float10)(**(code **)(iVar3 + 0x14))();
  fVar9 = (float)((float10)40.0 - fVar7 * (float10)0.5);
  iVar6 = FUN_0071b2b0();
  (**(code **)(iVar3 + 0x68))(2,iVar6,fVar9);
  do {
    cVar2 = (**(code **)(*(int *)param_1[0xd9] + 0x50))(1);
  } while (cVar2 != '\0');
  FUN_0073e4e0(param_1,0x3f800000);
  uVar4 = 0x42200000;
  iVar3 = FUN_0071b2b0();
  FUN_00741940(param_1,1,iVar3,uVar4);
  uVar4 = 0x42200000;
  iVar3 = FUN_0071b2b0();
  FUN_00741c70(param_1,2,iVar3,uVar4);
  FUN_0073f6e0(param_1,(int *)param_1[0xd9]);
  ExceptionList = local_2c;
  return param_1;
}


//// FUNCTION FUN_0064d8d0 @ 0064d8d0 ////

undefined4 * __thiscall FUN_0064d8d0(void *this,byte param_1)

{
  FUN_0064d050(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0064d8f0 @ 0064d8f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064d8f0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  char *pcStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  char acStack_11c [20];
  char *local_108;
  undefined4 local_104;
  uint local_100;
  char local_fc [20];
  undefined4 *puStack_e8;
  undefined4 auStack_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = DAT_0104d988;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc245a;
  local_c = ExceptionList;
  if (_DAT_00e565c4 != 0.0) {
    piVar5 = (int *)0x0;
    ExceptionList = &local_c;
    if (DAT_0104d988 != (int *)0x0) {
      iVar1 = DAT_0104d988[0x12];
      ExceptionList = &local_c;
      DAT_0104d988[0x12] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)*piVar4)(1);
      }
      (*(code *)DAT_0104d974[1])();
      DAT_0104d988 = (int *)0x0;
      (*(code *)*DAT_0104d974)();
    }
    local_108 = local_fc;
    local_fc[0] = '\0';
    local_104 = 0;
    local_100 = 0x14;
    _strncpy(local_108,"buildmenu",9);
    local_104 = 9;
    local_108[9] = '\0';
    uStack_4 = 0;
    FUN_0055c540(auStack_e4,&local_108);
    if (0x14 < local_100) {
                    /* WARNING: Subroutine does not return */
      _free(local_108);
    }
    pcStack_128 = acStack_11c;
    acStack_11c[0] = '\0';
    uStack_124 = 0;
    uStack_120 = 0x14;
    _strncpy(pcStack_128,"numyearslookahead",0x11);
    uStack_124 = 0x11;
    pcStack_128[0x11] = '\0';
    uStack_4._0_1_ = 3;
    fVar6 = FUN_00558610(auStack_e4,&pcStack_128,0.0);
    _DAT_00e565cc = (float)fVar6;
    if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_128);
    }
    pcStack_128 = acStack_11c;
    acStack_11c[0] = '\0';
    uStack_124 = 0;
    uStack_120 = 0x14;
    _strncpy(pcStack_128,"numscroll",9);
    uStack_124 = 9;
    pcStack_128[9] = '\0';
    uStack_4._0_1_ = 4;
    _DAT_00e565d0 = FUN_00558750(auStack_e4,&pcStack_128,0);
    uStack_4._0_1_ = 2;
    if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_128);
    }
    _DAT_00e565d0 = ((int)_DAT_00e565d0 < 1) - 1 & _DAT_00e565d0;
    puStack_e8 = operator_new(0x4f8);
    uStack_4._0_1_ = 5;
    if (puStack_e8 != (undefined4 *)0x0) {
      piVar5 = FUN_0064d440(puStack_e8);
    }
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    (*(code *)DAT_0104d974[1])();
    DAT_0104d988 = piVar5;
    (*(code *)*DAT_0104d974)();
    iVar1 = *DAT_0104d988;
    fVar6 = FUN_0071afe0();
    fVar7 = (float)fVar6;
    iVar3 = FUN_0071b2b0();
    (**(code **)(iVar1 + 0x5c))(1,iVar3,fVar7);
    iVar1 = *DAT_0104d988;
    fVar6 = FUN_0071aff0();
    fVar7 = (float)fVar6;
    iVar3 = FUN_0071b2b0();
    (**(code **)(iVar1 + 0x68))(2,iVar3,fVar7);
    piVar4 = (int *)FUN_0071b2b0();
    (**(code **)(*piVar4 + 0xc))(DAT_0104d988,1);
    do {
      cVar2 = (**(code **)(*DAT_0104d988 + 0x50))(1);
    } while (cVar2 != '\0');
    uStack_4 = 0xffffffff;
    FUN_00558920(auStack_e4);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0064dc40 @ 0064dc40 ////

undefined4 FUN_0064dc40(void)

{
  return DAT_00e566c4;
}


//// FUNCTION FUN_0064dc70 @ 0064dc70 ////

int * __thiscall FUN_0064dc70(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0064dd90 @ 0064dd90 ////

int * __thiscall FUN_0064dd90(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0064de20 @ 0064de20 ////

int __fastcall FUN_0064de20(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xc0;
}


//// FUNCTION FUN_0064e240 @ 0064e240 ////

void __cdecl FUN_0064e240(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x4d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x4d);
  }
  return;
}


//// FUNCTION FUN_0064e270 @ 0064e270 ////

void __cdecl FUN_0064e270(int *param_1)

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


//// FUNCTION FUN_0064e340 @ 0064e340 ////

void __cdecl FUN_0064e340(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x4d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x4d);
  }
  return;
}


//// FUNCTION FUN_0064e360 @ 0064e360 ////

void __cdecl FUN_0064e360(int param_1)

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


//// FUNCTION FUN_0064e380 @ 0064e380 ////

void __cdecl FUN_0064e380(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x4d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x4d);
  }
  return;
}


//// FUNCTION FUN_0064e5e0 @ 0064e5e0 ////

void __fastcall FUN_0064e5e0(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0064e610 @ 0064e610 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0064e610(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((_DAT_00f88708 == 1.0) && (DAT_00f88720 != (void *)0x0)) {
    FUN_00450d60(DAT_00f88720,0);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x408);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x3f4) + 4))();
    *(undefined4 *)(param_1 + 0x408) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x3f4))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x450);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x43c) + 4))();
    *(undefined4 *)(param_1 + 0x450) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x43c))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x468);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x454) + 4))();
    *(undefined4 *)(param_1 + 0x468) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x454))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x498);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x484) + 4))();
    *(undefined4 *)(param_1 + 0x498) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x484))();
  }
  FUN_0078ba40();
  *(undefined4 *)(param_1 + 0x52c) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x348) = 8;
  DAT_00e566c4 = 8;
  return;
}


//// FUNCTION FUN_0064e730 @ 0064e730 ////

void __fastcall FUN_0064e730(undefined4 *param_1)

{
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0064e740 @ 0064e740 ////

void __fastcall FUN_0064e740(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0064e770 @ 0064e770 ////

void __fastcall FUN_0064e770(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x2a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x28]);
  }
  if (0x14 < (uint)param_1[0x22]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x20]);
  }
  if (0x14 < (uint)param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x18]);
  }
  if (0x14 < (uint)param_1[0x12]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x10]);
  }
  if (10 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0064e800 @ 0064e800 ////

void __fastcall FUN_0064e800(undefined4 *param_1)

{
  if (10 < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[8]);
  }
  if (10 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_0064e840 @ 0064e840 ////

void __fastcall FUN_0064e840(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x468);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x454) + 4))();
    *(undefined4 *)(param_1 + 0x468) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x454))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x450);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x43c) + 4))();
    *(undefined4 *)(param_1 + 0x450) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x43c))();
  }
  (**(code **)(*(int *)(param_1 + 0x4fc) + 4))();
  *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x4f8);
  (*(code *)**(undefined4 **)(param_1 + 0x4fc))();
  FUN_0053ca50();
  return;
}


//// FUNCTION FUN_0064e9d0 @ 0064e9d0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0064e9d0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  float unaff_EDI;
  float10 fVar7;
  float fStack_18;
  
  if ((*(int **)(param_1 + 0x408) != (int *)0x0) &&
     (*(int *)(param_1 + 0x53c) < *(int *)(param_1 + 0x538))) {
    (**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
    iVar3 = *(int *)(param_1 + 0x408);
    fStack_18 = *(float *)(iVar3 + 0xe4);
    (**(code **)(*(int *)(iVar3 + 0x80) + 4))();
    *(undefined4 *)(iVar3 + 0x94) = 0;
    (*(code *)**(undefined4 **)(iVar3 + 0x80))();
    iVar3 = **(int **)(param_1 + 0x408);
    uVar6 = FUN_0071b2a0();
    (**(code **)(iVar3 + 0x68))(1,uVar6);
    if (unaff_EDI < 136.0) {
      unaff_EDI = 136.0;
    }
    (**(code **)(**(int **)(param_1 + 0x408) + 0x7c))(unaff_EDI);
    do {
      cVar5 = (**(code **)(**(int **)(param_1 + 0x408) + 0x50))(1);
    } while (cVar5 != '\0');
    fStack_18 = fStack_18 - 136.0;
    if ((fStack_18 <= 0.0) || (fStack_18 < 20.0)) {
      if (fStack_18 <= 0.0) {
        fStack_18 = 0.0;
      }
    }
    else {
      fStack_18 = 20.0;
    }
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
    fVar2 = (float)((fVar7 * (float10)0.5 - (float10)64.0) - (float10)fStack_18);
    if (*(int **)(param_1 + 0x4b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4b0) + 100))(1,*(undefined4 *)(param_1 + 0x408),fVar2);
    }
    if (*(int **)(param_1 + 0x4c8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c8) + 0x68))(2,*(undefined4 *)(param_1 + 0x408),fVar2);
    }
    do {
      cVar5 = (**(code **)(**(int **)(param_1 + 0x408) + 0x50))(1);
    } while (cVar5 != '\0');
    puVar4 = *(undefined4 **)(param_1 + 0x4e0);
    if (puVar4 != (undefined4 *)0x0) {
      piVar1 = puVar4 + 0x12;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
      (**(code **)(*(int *)(param_1 + 0x4cc) + 4))();
      *(undefined4 *)(param_1 + 0x4e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064eba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)(param_1 + 0x4cc))();
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0064ebb0 @ 0064ebb0 ////

void __fastcall FUN_0064ebb0(int param_1)

{
  int iVar1;
  void *pvVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float extraout_ECX;
  int unaff_EDI;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x348);
  iVar5 = *(int *)(param_1 + 0x534);
  if ((-1 < iVar1) && ((iVar1 < 2 || (iVar1 == 3)))) {
    piVar4 = (int *)FUN_00640a30(*(int *)(param_1 + 0x528));
    iVar5 = *piVar4;
  }
  if (iVar5 == 0) {
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0xc0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0xc0))();
  }
  if (*(char *)(param_1 + 0x548) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x4c8) + 0xc0))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x4c8) + 0xc0))();
  }
  iVar1 = *(int *)(param_1 + 0x540);
  iVar5 = *(int *)(param_1 + 0x538);
  if (iVar5 < iVar1) {
    fVar6 = (float)unaff_EDI / (float)(iVar1 - iVar5);
  }
  else {
    fVar6 = 0.0;
  }
  fVar3 = (float)iVar5;
  pvVar2 = *(void **)(param_1 + 0x4e0);
  if (pvVar2 != (void *)0x0) {
    FUN_00407070(&stack0xffffffe0,fVar6);
    FUN_0071fb50(pvVar2,iVar5);
    pvVar2 = *(void **)(param_1 + 0x4e0);
    fVar6 = extraout_ECX;
    FUN_00407070(&stack0xffffffe0,fVar3 / (float)iVar1);
    FUN_0071fc90(pvVar2,fVar6);
  }
  if ((*(int *)(param_1 + 0x538) < *(int *)(param_1 + 0x540)) || (*(int *)(param_1 + 0x348) == 3)) {
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0x4c8) + 0x20))(1);
    if (*(int **)(param_1 + 0x4e0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x20))(1);
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x4b0) + 0x20))();
    (**(code **)(**(int **)(param_1 + 0x4c8) + 0x20))(0);
    if (*(int **)(param_1 + 0x4e0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4e0) + 0x20))(0);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_0064ed20 @ 0064ed20 ////

uint __fastcall FUN_0064ed20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_EDX;
  
  (**(code **)(*(int *)(param_1 + 0x4e4) + 4))();
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  (*(code *)**(undefined4 **)(param_1 + 0x4e4))();
  uVar3 = FUN_00640a40(*(int *)(param_1 + 0x528),extraout_EDX);
  puVar2 = *(undefined4 **)(param_1 + 0x450);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x43c) + 4))();
    *(undefined4 *)(param_1 + 0x450) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x43c))();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x468);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x454) + 4))();
    *(undefined4 *)(param_1 + 0x468) = 0;
    uVar3 = (*(code *)**(undefined4 **)(param_1 + 0x454))();
  }
  return uVar3 & 0xffffff00;
}


//// FUNCTION FUN_0064edc0 @ 0064edc0 ////

undefined4 __thiscall FUN_0064edc0(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  TypeDescriptor *pTVar7;
  TypeDescriptor *pTVar8;
  int iVar9;
  int *piVar10;
  
  (**(code **)(*param_1 + 0x18))(5,0,0,0);
  uVar5 = 0;
  if (DAT_0104d8e8 != (int *)0x0) {
    iVar9 = 0;
    pTVar8 = &TM::CSet::RTTI_Type_Descriptor;
    pTVar7 = &TM::TMBase::RTTI_Type_Descriptor;
    iVar6 = 0;
    piVar1 = (int *)FUN_0065dc20((int)param_1);
    piVar1 = (int *)FUN_00ace790(piVar1,iVar6,pTVar7,pTVar8,iVar9);
    if (piVar1 == (int *)0x0) {
      pTVar8 = &TM::CSetBlueprint::RTTI_Type_Descriptor;
      pTVar7 = &TM::TMBlueprint::RTTI_Type_Descriptor;
      piVar3 = piVar1;
      piVar10 = piVar1;
      piVar2 = (int *)FUN_0065dc10((int)param_1);
      piVar3 = (int *)FUN_00ace790(piVar2,(int)piVar3,pTVar7,pTVar8,(int)piVar10);
      if (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))();
        piVar1 = FUN_004d3660(puVar4);
      }
    }
    DAT_0104d8e8[0xe0] = *(int *)((int)this + 0x534);
    uVar5 = (**(code **)(*DAT_0104d8e8 + 0x108))(piVar1,0);
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_0064ee70 @ 0064ee70 ////

undefined4 FUN_0064ee70(int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x18))(5,0,0,0);
  pvVar2 = DAT_0104d8e8;
  if (DAT_0104d8e8 != (void *)0x0) {
    FUN_0065d740((int)param_1);
    uVar3 = FUN_005f92b0(pvVar2);
  }
  if (DAT_0104dff8 != (int *)0x0) {
    iVar1 = *DAT_0104dff8;
    uVar3 = FUN_0065d740((int)param_1);
    uVar3 = (**(code **)(iVar1 + 0x100))(uVar3);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0064eed0 @ 0064eed0 ////

undefined4 __thiscall FUN_0064eed0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint unaff_EDI;
  void *pvStack_3c;
  undefined4 uStack_38;
  void *pvStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2478;
  pvStack_c = ExceptionList;
  uStack_38 = 0;
  pvStack_3c = (void *)0x0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_1 + 0x18))(5,0);
  uVar3 = 0;
  if (*(int *)((int)this + 0x36c) != 0) {
    puVar2 = FUN_0065e140(param_1,&pvStack_3c);
    uVar3 = FUN_0062ca00(*(void **)((int)this + 0x36c),puVar2);
    if (0x14 < unaff_EDI) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_3c);
    }
  }
  piVar1 = (int *)((int)this + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar3 = (*(code *)**(undefined4 **)this)(1);
  }
  ExceptionList = pvStack_1c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0064efe0 @ 0064efe0 ////

void __fastcall FUN_0064efe0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d33bfc;
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


//// FUNCTION FUN_0064f060 @ 0064f060 ////

undefined4 * __thiscall FUN_0064f060(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_0064f0d0 @ 0064f0d0 ////

undefined4 * __thiscall FUN_0064f0d0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)*param_2,param_2[1]);
  return this;
}


//// FUNCTION FUN_0064f160 @ 0064f160 ////

undefined4 * __thiscall FUN_0064f160(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)*param_2,param_2[1]);
  return this;
}


//// FUNCTION FUN_0064f2d0 @ 0064f2d0 ////

void __thiscall FUN_0064f2d0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x4d) == '\0') {
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


//// FUNCTION FUN_0064f330 @ 0064f330 ////

void __thiscall FUN_0064f330(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x4d) == '\0') {
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


//// FUNCTION FUN_0064f3b0 @ 0064f3b0 ////

void __thiscall FUN_0064f3b0(void *this,int param_1)

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


//// FUNCTION FUN_0064f410 @ 0064f410 ////

void __thiscall FUN_0064f410(void *this,int *param_1)

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


//// FUNCTION FUN_0064f4e0 @ 0064f4e0 ////

void __fastcall FUN_0064f4e0(int *param_1)

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


//// FUNCTION FUN_0064f540 @ 0064f540 ////

void __fastcall FUN_0064f540(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x4d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x4d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x4d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x4d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x4d);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x4d);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0064f5b0 @ 0064f5b0 ////

void __thiscall FUN_0064f5b0(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x4d) == '\0') {
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


//// FUNCTION FUN_0064f610 @ 0064f610 ////

void __thiscall FUN_0064f610(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x4d) == '\0') {
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


//// FUNCTION FUN_0064f710 @ 0064f710 ////

undefined4 * __thiscall FUN_0064f710(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)param_1[8],param_1[9]);
  return this;
}


//// FUNCTION FUN_0064f770 @ 0064f770 ////

undefined4 * __thiscall FUN_0064f770(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  *(undefined4 *)((int)this + 0x40) = (undefined1 *)((int)this + 0x4c);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x40),(char *)param_1[0x10],param_1[0x11]);
  *(undefined4 *)((int)this + 0x60) = (undefined1 *)((int)this + 0x6c);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x60),(char *)param_1[0x18],param_1[0x19]);
  *(undefined4 *)((int)this + 0x80) = (undefined1 *)((int)this + 0x8c);
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x80),(char *)param_1[0x20],param_1[0x21]);
  *(undefined4 *)((int)this + 0xa0) = (undefined1 *)((int)this + 0xac);
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0xa0),(char *)param_1[0x28],param_1[0x29]);
  return this;
}


//// FUNCTION FUN_0064f890 @ 0064f890 ////

void __fastcall FUN_0064f890(int *param_1)

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


//// FUNCTION FUN_0064f8f0 @ 0064f8f0 ////

void __fastcall FUN_0064f8f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x4d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x4d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x4d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x4d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x4d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x4d) == '\0');
    if (*(char *)((int)piVar4 + 0x4d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0064f970 @ 0064f970 ////

void __fastcall FUN_0064f970(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x4d) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x4d) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x4d);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x4d);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x4d) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x4d) == '\0');
    if (*(char *)((int)piVar4 + 0x4d) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0064f9d0 @ 0064f9d0 ////

undefined4 * __thiscall FUN_0064f9d0(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined1 *)((int)this + 0x2c);
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x20),(char *)param_1[8],param_1[9]);
  return this;
}


//// FUNCTION FUN_0064fa30 @ 0064fa30 ////

undefined4 * __thiscall FUN_0064fa30(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_0064fa70 @ 0064fa70 ////

undefined4 * __thiscall FUN_0064fa70(void *this,undefined4 *param_1)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  return this;
}


//// FUNCTION FUN_0064fb60 @ 0064fb60 ////

void * __thiscall FUN_0064fb60(void *this,undefined4 *param_1)

{
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  FUN_004036d0((void *)((int)this + 0x20),(wchar_t *)param_1[8],param_1[9]);
  FUN_004015d0((void *)((int)this + 0x40),(char *)param_1[0x10],param_1[0x11]);
  FUN_004015d0((void *)((int)this + 0x60),(char *)param_1[0x18],param_1[0x19]);
  FUN_004015d0((void *)((int)this + 0x80),(char *)param_1[0x20],param_1[0x21]);
  FUN_004015d0((void *)((int)this + 0xa0),(char *)param_1[0x28],param_1[0x29]);
  return this;
}


//// FUNCTION FUN_0064fbe0 @ 0064fbe0 ////

void __fastcall FUN_0064fbe0(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x2c));
  }
  if (10 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0064fc10 @ 0064fc10 ////

void __fastcall FUN_0064fc10(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0064fc30 @ 0064fc30 ////

void __fastcall FUN_0064fc30(int param_1)

{
  if (10 < *(uint *)(param_1 + 0x34)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0x2c));
  }
  if (10 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_0064fc60 @ 0064fc60 ////

void * __cdecl FUN_0064fc60(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    param_2 = param_2 + -0x30;
    param_3 = (void *)((int)param_3 + -0xc0);
    FUN_0064fb60(param_3,param_2);
  } while (param_2 != param_1);
  return param_3;
}


//// FUNCTION FUN_0064fce0 @ 0064fce0 ////

undefined4 * __thiscall FUN_0064fce0(void *this,byte param_1)

{
  FUN_0064e5e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0064fd00 @ 0064fd00 ////

undefined4 * __thiscall FUN_0064fd00(void *this,byte param_1)

{
  FUN_0064e770(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00650010 @ 00650010 ////

void __fastcall FUN_00650010(int *param_1)

{
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  *param_1 = (int)(param_1 + 3);
  param_1[2] = 10;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 10;
  param_1[9] = 0;
  param_1[8] = (int)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = (int)(param_1 + 0x13);
  param_1[0x12] = 0x14;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0x14;
  param_1[0x19] = 0;
  param_1[0x18] = (int)(param_1 + 0x1b);
  param_1[0x20] = (int)(param_1 + 0x23);
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x22] = 0x14;
  param_1[0x21] = 0;
  param_1[0x2a] = 0x14;
  param_1[0x28] = (int)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  return;
}


//// FUNCTION FUN_006500a0 @ 006500a0 ////

undefined4 * __thiscall
FUN_006500a0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined2 **)this = (undefined2 *)((int)this + 0xc);
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 10;
  FUN_004036d0(this,(wchar_t *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = (undefined2 *)((int)this + 0x2c);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0x20),(wchar_t *)*param_2,param_2[1]);
  *(undefined4 *)((int)this + 0x40) = (undefined1 *)((int)this + 0x4c);
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x14;
  FUN_004015d0((undefined4 *)((int)this + 0x40),(char *)*param_3,param_3[1]);
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0x14;
  *(int *)((int)this + 0x60) = (int)this + 0x6c;
  *(undefined1 *)((int)this + 0x8c) = 0;
  *(int *)((int)this + 0x80) = (int)this + 0x8c;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x14;
  *(undefined4 *)((int)this + 0xa8) = 0x14;
  *(undefined1 **)((int)this + 0xa0) = (undefined1 *)((int)this + 0xac);
  *(undefined1 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return this;
}


//// FUNCTION FUN_006501a0 @ 006501a0 ////

void __thiscall FUN_006501a0(void *this,uint param_1)

{
  FUN_00740ea0(this,param_1);
  if (*(int **)((int)this + 0x408) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x408) + 0xc0))(param_1);
  }
  if (((((char)param_1 != '\0') && (*(int *)((int)this + 0x4b0) != 0)) &&
      (*(int *)((int)this + 0x4c8) != 0)) && (*(int *)((int)this + 0x4e0) != 0)) {
    FUN_0064ebb0((int)this);
  }
  return;
}


//// FUNCTION FUN_006501f0 @ 006501f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006501f0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  void *this;
  float *pfVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float *pfVar8;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  *(undefined4 *)(param_1 + 0x540) = 0;
  FUN_0043b510(&local_c);
  puVar6 = DAT_0105086c;
  if (DAT_0105086c != &DAT_01050878) {
    do {
      piVar2 = (int *)puVar6[2];
      iVar4 = FUN_0095c9e0((int)piVar2);
      if (iVar4 != 0) {
        pfVar8 = (float *)&DAT_00e4fa4c;
        pfVar5 = &local_8;
        this = (void *)(**(code **)(*piVar2 + 0x1c))(local_4);
        pfVar5 = (float *)FUN_0043b620(this,pfVar5,pfVar8);
        local_c = *pfVar5;
        cVar3 = FUN_00960f30(piVar2);
        if ((cVar3 != '\0') ||
           ((fVar7 = FUN_0043b710(&local_c), fVar7 < (float10)_DAT_0104d9a4 &&
            (fVar7 = FUN_0043b710(&local_c), (float10)0.0 < fVar7)))) {
          *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
        }
      }
      puVar1 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_01050878);
  }
  return;
}


//// FUNCTION FUN_006502a0 @ 006502a0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006502a0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  void *this;
  float *pfVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float *pfVar7;
  float local_c;
  float local_8;
  undefined1 local_4 [4];
  
  *(undefined4 *)(param_1 + 0x540) = 0;
  FUN_0043b510(&local_c);
  puVar5 = DAT_01050964;
  if (DAT_01050964 != &DAT_01050970) {
    do {
      piVar2 = (int *)puVar5[2];
      pfVar7 = (float *)&DAT_00e4fa4c;
      pfVar4 = &local_8;
      this = (void *)(**(code **)(*piVar2 + 0x1c))(local_4);
      pfVar4 = (float *)FUN_0043b620(this,pfVar4,pfVar7);
      local_c = *pfVar4;
      cVar3 = FUN_00960f30(piVar2);
      if ((cVar3 != '\0') ||
         ((fVar6 = FUN_0043b710(&local_c), fVar6 < (float10)_DAT_0104d9a4 &&
          (fVar6 = FUN_0043b710(&local_c), (float10)0.0 < fVar6)))) {
        *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
      }
      puVar1 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_01050970);
  }
  return;
}


//// FUNCTION FUN_00650350 @ 00650350 ////

void __fastcall FUN_00650350(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x540) = 0;
  puVar3 = DAT_010508d4;
  if (DAT_010508d4 != &DAT_010508e0) {
    do {
      if ((*(int *)(puVar3[2] + 0xe0) == *(int *)(param_1 + 0x544)) &&
         (cVar2 = FUN_00960f30(puVar3[2]), cVar2 != '\0')) {
        *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
      }
      puVar1 = puVar3 + 1;
      puVar3 = (undefined4 *)*puVar1;
    } while ((undefined4 *)*puVar1 != &DAT_010508e0);
  }
  return;
}


//// FUNCTION FUN_006503a0 @ 006503a0 ////

int __cdecl FUN_006503a0(undefined4 *param_1)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  int local_50;
  byte *local_4c;
  uint local_44;
  byte local_40 [20];
  byte *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc24a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0040d6b0(local_2c,"facility/",param_1);
  local_4c = local_40;
  local_50 = 0;
  local_40[0] = 0;
  local_44 = 0x14;
  local_4 = 1;
  puVar5 = DAT_0104ed18;
  if (DAT_0104ed18 != &DAT_0104ed24) {
    do {
      puVar2 = (undefined4 *)FUN_00528460(puVar5[2]);
      _Count = puVar2[1];
      _Source = (char *)*puVar2;
      if (local_44 <= _Count) {
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        local_44 = _Count + 0x20 & 0xffffffe0;
        local_4c = _malloc(local_44);
      }
      _strncpy((char *)local_4c,_Source,_Count);
      local_4c[_Count] = 0;
      pbVar3 = local_4c;
      pbVar6 = local_2c[0];
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_00650499:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_0065049e;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_00650499;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_0065049e:
      if (iVar4 == 0) {
        local_50 = local_50 + 1;
      }
      puVar2 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104ed24);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  if (local_24 < 0x15) {
    ExceptionList = local_c;
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_2c[0]);
}


//// FUNCTION FUN_006504f0 @ 006504f0 ////

int __cdecl FUN_006504f0(undefined4 *param_1)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  char cVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  bool bVar8;
  int local_30;
  byte *local_2c;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc24b8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_30 = 0;
  local_20[0] = 0;
  local_24 = 0x14;
  local_4 = 0;
  iVar5 = 0;
  puVar6 = DAT_0104ad14;
  ExceptionList = &local_c;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      if (((int *)puVar6[2] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)puVar6[2] + 0x164))(), cVar2 == '\0')) {
        puVar3 = (undefined4 *)FUN_00528450(puVar6[2]);
        _Count = puVar3[1];
        _Source = (char *)*puVar3;
        if (local_24 <= _Count) {
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c);
          }
          local_24 = _Count + 0x20 & 0xffffffe0;
          local_2c = _malloc(local_24);
        }
        _strncpy((char *)local_2c,_Source,_Count);
        local_2c[_Count] = 0;
        pbVar7 = (byte *)*param_1;
        pbVar4 = local_2c;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_006505e5:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_006505ea;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_006505e5;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006505ea:
        if (iVar5 == 0) {
          local_30 = local_30 + 1;
        }
      }
      puVar3 = puVar6 + 1;
      puVar6 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != &DAT_0104ad20);
    iVar5 = local_30;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return iVar5;
}


//// FUNCTION FUN_00650630 @ 00650630 ////

int __cdecl FUN_00650630(undefined4 *param_1)

{
  byte bVar1;
  uint _Count;
  char *_Source;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  bool bVar7;
  int local_30;
  byte *local_2c;
  uint local_24;
  byte local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc24d8;
  local_c = ExceptionList;
  local_2c = local_20;
  local_30 = 0;
  local_20[0] = 0;
  local_24 = 0x14;
  local_4 = 0;
  iVar4 = 0;
  puVar5 = DAT_0104ad14;
  ExceptionList = &local_c;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      puVar2 = (undefined4 *)FUN_00528460(puVar5[2]);
      _Count = puVar2[1];
      _Source = (char *)*puVar2;
      if (local_24 <= _Count) {
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c);
        }
        local_24 = _Count + 0x20 & 0xffffffe0;
        local_2c = _malloc(local_24);
      }
      _strncpy((char *)local_2c,_Source,_Count);
      local_2c[_Count] = 0;
      pbVar6 = (byte *)*param_1;
      pbVar3 = local_2c;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0065070c:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00650711;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0065070c;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00650711:
      if (iVar4 == 0) {
        local_30 = local_30 + 1;
      }
      puVar2 = puVar5 + 1;
      puVar5 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != &DAT_0104ad20);
    iVar4 = local_30;
    if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return iVar4;
}


//// FUNCTION FUN_00650780 @ 00650780 ////

undefined4 __thiscall FUN_00650780(void *this,int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  undefined3 uVar8;
  undefined3 extraout_var;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined3 extraout_var_00;
  float10 fVar9;
  float fVar10;
  undefined *puVar11;
  undefined4 *puStack_3c;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc250e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar4 = (int *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                               &TM::WBuildButtonListItem::RTTI_Type_Descriptor,0);
  uVar8 = (undefined3)((uint)piVar4 >> 8);
  if ((*(char *)((int)this + 0x549) == '\0') && (piVar4 != *(int **)((int)this + 0x4f8))) {
    (**(code **)(*(int *)((int)this + 0x4e4) + 4))();
    *(int **)((int)this + 0x4f8) = piVar4;
    (*(code *)**(undefined4 **)((int)this + 0x4e4))();
    uVar8 = extraout_var;
    if ((piVar4 != (int *)0x0) && (*(int *)((int)this + 0x408) != 0)) {
      if (*(undefined4 **)((int)this + 0x450) != (undefined4 *)0x0) {
        FUN_00401440(*(undefined4 **)((int)this + 0x450));
        FUN_00433b50((void *)((int)this + 0x43c),0);
      }
      if (*(undefined4 **)((int)this + 0x468) != (undefined4 *)0x0) {
        FUN_00401440(*(undefined4 **)((int)this + 0x468));
        FUN_00433b50((void *)((int)this + 0x454),0);
      }
      (**(code **)(**(int **)((int)this + 0x408) + 0x14))();
      puVar5 = operator_new(0x344);
      uStack_4 = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puStack_3c = (undefined4 *)0x0;
      }
      else {
        puStack_3c = FUN_007432f0(puVar5);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0x454) + 4))();
      *(undefined4 **)((int)this + 0x468) = puStack_3c;
      (*(code *)**(undefined4 **)((int)this + 0x454))();
      puVar5 = operator_new(0x50);
      uStack_4 = 1;
      if (puVar5 == (undefined4 *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = FUN_005e4870(puVar5);
      }
      puVar11 = &DAT_00e566ec;
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar6 + 0xc))(&DAT_00e566ec);
      (**(code **)(**(int **)((int)this + 0x468) + 0xa0))(piVar6);
      (**(code **)(**(int **)((int)this + 0x468) + 0x7c))(0x41800000);
      (**(code **)(**(int **)((int)this + 0x468) + 0x78))(0x42a00000);
      (**(code **)(**(int **)((int)this + 0x468) + 0x5c))
                (2,*(undefined4 *)((int)this + 0x408),0x41200000);
      (**(code **)(**(int **)((int)this + 0x468) + 100))
                (1,*(undefined4 *)((int)this + 0x408),(float)puVar11 - 10.0);
      fVar10 = 1.4013e-45;
      (**(code **)(**(int **)((int)this + 0x468) + 0x50))(1);
      (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))(*(undefined4 *)((int)this + 0x468),2);
      iVar7 = FUN_006608b0(piVar4);
      (**(code **)(*(int *)((int)this + 0x43c) + 4))();
      *(int *)((int)this + 0x450) = iVar7;
      (*(code *)**(undefined4 **)((int)this + 0x43c))();
      (**(code **)(**(int **)((int)this + 0x450) + 0x5c))
                (2,*(undefined4 *)((int)this + 0x408),0xc2200000);
      iVar7 = **(int **)((int)this + 0x450);
      uVar2 = *(undefined4 *)((int)this + 0x408);
      fVar9 = (float10)(**(code **)(iVar7 + 0x14))();
      (**(code **)(iVar7 + 100))
                (1,uVar2,(float)((float10)((float)puVar5 * fVar10 + (float)puVar5) -
                                fVar9 * (float10)0.5));
      (**(code **)(**(int **)((int)this + 0x450) + 0x18))
                (5,&LAB_0064fd80,this,"BUILDBUTTONITEM_PICKER");
      do {
        cVar3 = (**(code **)(**(int **)((int)this + 0x450) + 0x50))(1);
      } while (cVar3 != '\0');
      *(uint *)(*(int *)((int)this + 0x468) + 0x114) =
           *(uint *)(*(int *)((int)this + 0x468) + 0x114) | 8;
      puVar1 = (uint *)(*(int *)((int)this + 0x450) + 0x114);
      *puVar1 = *puVar1 | 8;
      (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))(*(undefined4 *)((int)this + 0x450),1);
      uVar8 = 0;
      if (DAT_0104d9a0 != (void *)0x0) {
        puVar5 = FUN_0065e140((void *)((float)piVar4 * 4.0),apvStack_2c);
        uStack_4 = 2;
        FUN_006459d0(DAT_0104d9a0,puVar5,*(int *)((int)((float)piVar4 * 4.0) + 0x568),
                     *(undefined4 *)((int)this + 0x344));
        uVar8 = extraout_var_00;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  *(undefined1 *)((int)this + 0x549) = 0;
  ExceptionList = local_c;
  return CONCAT31(uVar8,1);
}


//// FUNCTION FUN_00650af0 @ 00650af0 ////

undefined4 __thiscall FUN_00650af0(void *this,int *param_1)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  int *this_00;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  float10 fVar8;
  float fVar9;
  float fVar10;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc253e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = (int *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WBuildButtonListItem::RTTI_Type_Descriptor,0);
  uVar6 = extraout_EDX;
  if ((this_00 != *(int **)((int)this + 0x4f8)) &&
     (bVar2 = FUN_005e0150(), uVar6 = extraout_EDX_00, !bVar2)) {
    (**(code **)(*(int *)((int)this + 0x4e4) + 4))();
    *(int **)((int)this + 0x4f8) = this_00;
    (*(code *)**(undefined4 **)((int)this + 0x4e4))();
    uVar6 = extraout_EDX_01;
    if ((this_00 != (int *)0x0) && (*(int *)((int)this + 0x408) != 0)) {
      FUN_00640bb0((void *)((int)this + 0x4fc),(int)((int)this + 0x4e4));
      if (*(undefined4 **)((int)this + 0x450) != (undefined4 *)0x0) {
        FUN_00401440(*(undefined4 **)((int)this + 0x450));
        FUN_00433b50((void *)((int)this + 0x43c),0);
      }
      if (*(undefined4 **)((int)this + 0x468) != (undefined4 *)0x0) {
        FUN_00401440(*(undefined4 **)((int)this + 0x468));
        FUN_00433b50((void *)((int)this + 0x454),0);
      }
      puVar4 = operator_new(0x344);
      uStack_4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = FUN_007432f0(puVar4);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*(int *)((int)this + 0x454) + 4))();
      *(int **)((int)this + 0x468) = param_1;
      (*(code *)**(undefined4 **)((int)this + 0x454))();
      puVar4 = operator_new(0x50);
      uStack_4 = 1;
      if (puVar4 == (undefined4 *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = FUN_005e4870(puVar4);
      }
      uStack_4 = 0xffffffff;
      (**(code **)(*piVar5 + 0xc))(&DAT_00e566ec);
      (**(code **)(**(int **)((int)this + 0x468) + 0xa0))(piVar5);
      fVar9 = 80.0;
      (**(code **)(**(int **)((int)this + 0x468) + 0x7c))(0x42a00000);
      (**(code **)(**(int **)((int)this + 0x468) + 0x78))(0x41800000);
      (**(code **)(**(int **)((int)this + 0x468) + 0x68))
                (1,*(undefined4 *)((int)this + 0x408),0x41200000);
      fVar9 = fVar9 - 8.0;
      iVar7 = **(int **)((int)this + 0x468);
      uVar6 = FUN_0071b2a0();
      (**(code **)(iVar7 + 0x5c))(1,uVar6,fVar9);
      (**(code **)(**(int **)((int)this + 0x468) + 0x50))(1);
      fVar9 = 2.8026e-45;
      (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))(*(undefined4 *)((int)this + 0x468),2);
      iVar7 = FUN_006608b0(this_00);
      (**(code **)(*(int *)((int)this + 0x43c) + 4))();
      *(int *)((int)this + 0x450) = iVar7;
      (*(code *)**(undefined4 **)((int)this + 0x43c))();
      (**(code **)(**(int **)((int)this + 0x450) + 0x68))
                (1,*(undefined4 *)((int)this + 0x408),0xc2200000);
      fVar10 = 0.0;
      if (this_00[0x159] == *(int *)((int)this + 0x538) + -1) {
        fVar10 = -48.0;
      }
      iVar7 = **(int **)((int)this + 0x450);
      fVar8 = (float10)(**(code **)(iVar7 + 0x10))();
      fVar9 = (float)(((float10)fVar9 - fVar8 * (float10)0.5) + (float10)fVar10);
      uVar6 = FUN_0071b2a0();
      (**(code **)(iVar7 + 0x5c))(1,uVar6,fVar9);
      (**(code **)(**(int **)((int)this + 0x450) + 0x18))
                (5,&LAB_0064fd80,this,"BUILDBUTTONITEM_PICKER");
      do {
        cVar3 = (**(code **)(**(int **)((int)this + 0x450) + 0x50))(1);
      } while (cVar3 != '\0');
      *(uint *)(*(int *)((int)this + 0x468) + 0x114) =
           *(uint *)(*(int *)((int)this + 0x468) + 0x114) | 8;
      puVar1 = (uint *)(*(int *)((int)this + 0x450) + 0x114);
      *puVar1 = *puVar1 | 8;
      (**(code **)(**(int **)((int)this + 0x3f0) + 0xc))(*(undefined4 *)((int)this + 0x450),1);
      uVar6 = extraout_EDX_02;
      if (DAT_0104d9a0 != (void *)0x0) {
        puVar4 = FUN_0065e140(this_00,apvStack_2c);
        uStack_4 = 2;
        FUN_006459d0(DAT_0104d9a0,puVar4,this_00[0x15a],*(undefined4 *)((int)this + 0x344));
        uStack_4 = 0xffffffff;
        uVar6 = extraout_EDX_03;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
    }
  }
  uVar6 = FUN_00640a40(*(int *)((int)this + 0x528),uVar6);
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}


//// FUNCTION FUN_00650e40 @ 00650e40 ////

undefined4 __thiscall FUN_00650e40(void *this,int *param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2558;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_0104c6c8 != 0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 0xc))();
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = 0;
    (*(code *)*DAT_0104c6b4)();
  }
  FUN_00643e40(*(int *)((int)this + 0x528));
  pvVar1 = (void *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WBuildButtonListItem::RTTI_Type_Descriptor,0);
  if ((pvVar1 == (void *)0x0) && (pvVar1 = *(void **)((int)this + 0x4f8), pvVar1 == (void *)0x0)) {
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_0065e140(pvVar1,apvStack_4c);
  uStack_4 = 0;
  uVar2 = FUN_00413450(apvStack_4c,"facility",0,8);
  if (uVar2 == 0) {
LAB_00650f7f:
    puVar3 = FUN_0040d6b0(apvStack_2c,"facility/",apvStack_4c);
    FUN_004015d0(apvStack_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    piVar4 = FUN_008480b0(apvStack_4c,1);
  }
  else {
    uVar2 = FUN_00413450(apvStack_4c,"trailer",0,7);
    if (uVar2 == 0) goto LAB_00650f7f;
    uVar2 = FUN_00413450(apvStack_4c,"set",0,3);
    if (uVar2 != 0) goto LAB_00650fe5;
    puVar3 = FUN_0040d6b0(apvStack_2c,"set/",apvStack_4c);
    FUN_004015d0(apvStack_4c,(char *)*puVar3,puVar3[1]);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    piVar4 = FUN_004d2430(apvStack_4c,1);
  }
  if (piVar4 != (int *)0x0) {
    pvVar1 = *(void **)((int)this + 0x528);
    uVar5 = (**(code **)(*piVar4 + 0x80))();
    FUN_00640a50(pvVar1,uVar5);
  }
LAB_00650fe5:
  uVar5 = FUN_00470a70(DAT_0104917c,*(undefined4 *)((int)this + 0x528),0x283,0,0);
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  ExceptionList = pvStack_c;
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}


//// FUNCTION FUN_00651030 @ 00651030 ////

undefined4 __thiscall FUN_00651030(void *this,int *param_1)

{
  bool bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar6;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2578;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = (void *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                                &TM::WBuildButtonListItem::RTTI_Type_Descriptor,0);
  bVar1 = false;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = *(void **)((int)this + 0x4f8);
    bVar1 = true;
    if (pvVar2 == (void *)0x0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (DAT_0104c6c8 != 0) {
    (**(code **)(*(int *)(DAT_0104c6c8 + 0xa0) + 0xc))();
    (*(code *)DAT_0104c6b4[1])();
    DAT_0104c6c8 = 0;
    (*(code *)*DAT_0104c6b4)();
  }
  FUN_00643e40(*(int *)((int)this + 0x528));
  puVar3 = FUN_0065e140(pvVar2,apvStack_2c);
  FUN_0040d6b0(apvStack_4c,"ornament/",puVar3);
  uStack_4 = 0;
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_2c[0]);
  }
  piVar4 = FUN_0048bfd0(apvStack_4c,'\0');
  if (piVar4 != (int *)0x0) {
    pvVar2 = *(void **)((int)this + 0x528);
    uVar5 = (**(code **)(*piVar4 + 0x80))();
    FUN_00640a50(pvVar2,uVar5);
    pvVar2 = (void *)FUN_0048ad40();
    FUN_0048ac50(pvVar2,piVar4);
  }
  puVar3 = *(undefined4 **)((int)this + 0x468);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = puVar3 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)((int)this + 0x454) + 4))();
    *(undefined4 *)((int)this + 0x468) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x454))();
  }
  puVar3 = *(undefined4 **)((int)this + 0x450);
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = puVar3 + 0x12;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      (**(code **)*puVar3)(1);
    }
    (**(code **)(*(int *)((int)this + 0x43c) + 4))();
    *(undefined4 *)((int)this + 0x450) = 0;
    (*(code *)**(undefined4 **)((int)this + 0x43c))();
  }
  (**(code **)(*(int *)((int)this + 0x4fc) + 4))();
  *(undefined4 *)((int)this + 0x510) = *(undefined4 *)((int)this + 0x4f8);
  (*(code *)**(undefined4 **)((int)this + 0x4fc))();
  if (!bVar1) {
    bVar1 = FUN_005e0150();
    uVar6 = extraout_var;
    if (!bVar1) goto LAB_006511f3;
  }
  (**(code **)(*(int *)((int)this + 0x4e4) + 4))();
  *(undefined4 *)((int)this + 0x4f8) = 0;
  (*(code *)**(undefined4 **)((int)this + 0x4e4))();
  uVar6 = extraout_var_00;
LAB_006511f3:
  if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_4c[0]);
  }
  ExceptionList = local_c;
  return CONCAT31(uVar6,1);
}


//// FUNCTION FUN_00651220 @ 00651220 ////

void __thiscall FUN_00651220(void *this,undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  float10 fVar7;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [8];
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2598;
  local_c = ExceptionList;
  if ((*(int *)((int)this + 0x438) != 0) && (*(int *)((int)this + 0x420) != 0)) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    ExceptionList = &local_c;
    uVar5 = FUN_00ace02d(L"<nobr><t2>");
    FUN_004036d0(&local_2c,L"<nobr><t2>",uVar5);
    local_4 = 0;
    FUN_0040cae0(&local_2c,(wchar_t *)*param_1,param_1[1]);
    sVar6 = FUN_00ace02d(L"</t2></nobr>");
    FUN_0040cae0(&local_2c,L"</t2></nobr>",sVar6);
    (**(code **)(**(int **)((int)this + 0x438) + 0x54))(&local_2c);
    (**(code **)(**(int **)((int)this + 0x438) + 0x84))(0);
    (**(code **)(**(int **)((int)this + 0x438) + 0x68))
              (2,*(undefined4 *)((int)this + 0x420),DAT_00e566d4);
    piVar1 = *(int **)((int)this + 0x420);
    piVar2 = *(int **)((int)this + 0x438);
    iVar3 = *piVar2;
    fVar7 = (float10)(**(code **)(*piVar1 + 0x10))();
    fStack_10 = (float)fVar7;
    fVar7 = (float10)(**(code **)(*piVar2 + 0x10))();
    (**(code **)(iVar3 + 0x5c))(1,piVar1,(float)(((float10)fStack_10 - fVar7) * (float10)0.5));
    do {
      cVar4 = (**(code **)(**(int **)((int)this + 0x438) + 0x50))(1);
    } while (cVar4 != '\0');
    if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00651420 @ 00651420 ////

int * __fastcall FUN_00651420(int *param_1)

{
  FUN_0064f4e0(param_1);
  return param_1;
}


//// FUNCTION FUN_00651430 @ 00651430 ////

int * __fastcall FUN_00651430(int *param_1)

{
  FUN_0064f540(param_1);
  return param_1;
}


//// FUNCTION FUN_00651470 @ 00651470 ////

int * __fastcall FUN_00651470(int *param_1)

{
  FUN_0064f890(param_1);
  return param_1;
}


//// FUNCTION FUN_00651480 @ 00651480 ////

int * __fastcall FUN_00651480(int *param_1)

{
  FUN_0064f8f0(param_1);
  return param_1;
}


//// FUNCTION FUN_00651490 @ 00651490 ////

int * __fastcall FUN_00651490(int *param_1)

{
  FUN_0064f970(param_1);
  return param_1;
}


//// FUNCTION FUN_006514a0 @ 006514a0 ////

void FUN_006514a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x13) = 1;
  *(undefined1 *)((int)puVar1 + 0x4d) = 0;
  return;
}


//// FUNCTION FUN_006514f0 @ 006514f0 ////

void FUN_006514f0(void)

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


//// FUNCTION FUN_00651540 @ 00651540 ////

void FUN_00651540(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x13) = 1;
  *(undefined1 *)((int)puVar1 + 0x4d) = 0;
  return;
}


//// FUNCTION FUN_006515d0 @ 006515d0 ////

undefined4 * __thiscall
FUN_006515d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
            ,undefined1 param_5)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = (undefined2 *)((int)this + 0x18);
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 10;
  FUN_004036d0((undefined4 *)((int)this + 0xc),(wchar_t *)*param_4,param_4[1]);
  *(undefined4 *)((int)this + 0x2c) = param_4[8];
  *(undefined1 *)((int)this + 0x30) = param_5;
  *(undefined1 *)((int)this + 0x31) = 0;
  return this;
}


//// FUNCTION FUN_00651670 @ 00651670 ////

void __cdecl FUN_00651670(int *param_1,int *param_2,undefined4 *param_3)

{
  uint *puVar1;
  wchar_t *_Source;
  uint uVar2;
  int iVar3;
  char *_Source_00;
  uint uVar4;
  void *pvVar5;
  uint *puVar6;
  
  if (param_1 != param_2) {
    puVar6 = (uint *)(param_1 + 10);
    do {
      _Source = (wchar_t *)*param_3;
      uVar2 = param_3[1];
      if (puVar6[-8] <= uVar2) {
        if (10 < puVar6[-8]) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*param_1);
        }
        uVar4 = uVar2 + 0x20 & 0xffffffe0;
        puVar6[-8] = uVar4;
        pvVar5 = _malloc(uVar4 * 2);
        *param_1 = (int)pvVar5;
      }
      _wcsncpy((wchar_t *)*param_1,_Source,uVar2);
      iVar3 = *param_1;
      puVar6[-9] = uVar2;
      *(undefined2 *)(iVar3 + uVar2 * 2) = 0;
      _Source_00 = (char *)param_3[8];
      uVar2 = param_3[9];
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
      _strncpy((char *)puVar6[-2],_Source_00,uVar2);
      puVar1 = puVar6 + -2;
      puVar6[-1] = uVar2;
      param_1 = param_1 + 0x10;
      puVar6 = puVar6 + 0x10;
      *(undefined1 *)(uVar2 + *puVar1) = 0;
    } while (param_1 != param_2);
  }
  return;
}


//// FUNCTION FUN_00651760 @ 00651760 ////

void __cdecl FUN_00651760(void *param_1,void *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0xc0)) {
    FUN_0064fb60(param_1,param_3);
  }
  return;
}


//// FUNCTION FUN_006517b0 @ 006517b0 ////

void * __thiscall FUN_006517b0(void *this,byte param_1)

{
  FUN_0064fbe0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006517d0 @ 006517d0 ////

void * __thiscall FUN_006517d0(void *this,byte param_1)

{
  FUN_0064fc10((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006517f0 @ 006517f0 ////

void * __thiscall FUN_006517f0(void *this,byte param_1)

{
  FUN_0064fc30((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00651810 @ 00651810 ////

int * __cdecl FUN_00651810(int param_1,int param_2,int *param_3)

{
  wchar_t *_Source;
  uint uVar1;
  int iVar2;
  char *_Source_00;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (param_1 == param_2) {
    return param_3;
  }
  puVar6 = (uint *)(param_3 + 10);
  do {
    _Source = *(wchar_t **)(param_2 + -0x40);
    uVar1 = *(uint *)(param_2 + -0x3c);
    iVar5 = param_2 + -0x40;
    puVar7 = puVar6 + -0x10;
    param_3 = param_3 + -0x10;
    if (puVar6[-0x18] <= uVar1) {
      if (10 < puVar6[-0x18]) {
                    /* WARNING: Subroutine does not return */
        _free((void *)*param_3);
      }
      uVar3 = uVar1 + 0x20 & 0xffffffe0;
      puVar6[-0x18] = uVar3;
      pvVar4 = _malloc(uVar3 * 2);
      *param_3 = (int)pvVar4;
    }
    _wcsncpy((wchar_t *)*param_3,_Source,uVar1);
    iVar2 = *param_3;
    puVar6[-0x19] = uVar1;
    *(undefined2 *)(iVar2 + uVar1 * 2) = 0;
    _Source_00 = *(char **)(param_2 + -0x20);
    uVar1 = *(uint *)(param_2 + -0x1c);
    if (*puVar7 <= uVar1) {
      if (0x14 < *puVar7) {
                    /* WARNING: Subroutine does not return */
        _free((void *)puVar6[-0x12]);
      }
      uVar3 = uVar1 + 0x20 & 0xffffffe0;
      *puVar7 = uVar3;
      pvVar4 = _malloc(uVar3);
      puVar6[-0x12] = (uint)pvVar4;
    }
    _strncpy((char *)puVar6[-0x12],_Source_00,uVar1);
    puVar6[-0x11] = uVar1;
    *(undefined1 *)(uVar1 + puVar6[-0x12]) = 0;
    param_2 = iVar5;
    puVar6 = puVar7;
  } while (iVar5 != param_1);
  return param_3;
}


//// FUNCTION FUN_00651a70 @ 00651a70 ////

void __fastcall FUN_00651a70(int param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc25c9;
  local_c = ExceptionList;
  bVar2 = false;
  iVar6 = 0;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x540) = 0;
  for (puVar7 = DAT_0104ad14; puVar7 != &DAT_0104ad20; puVar7 = (undefined4 *)puVar7[1]) {
    iVar6 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x540) = iVar6;
  puVar7 = DAT_01050964;
  if (DAT_01050964 != &DAT_01050970) {
    do {
      local_4 = 0xffffffff;
      piVar1 = (int *)puVar7[2];
      cVar4 = FUN_00960f30(piVar1);
      if (cVar4 == '\0') {
LAB_00651b16:
        bVar3 = false;
      }
      else {
        puVar5 = (undefined4 *)(**(code **)(*piVar1 + 8))();
        puVar5 = FUN_0040d6b0(local_2c,"set/",puVar5);
        bVar2 = true;
        local_4 = 0;
        iVar6 = FUN_00650630(puVar5);
        bVar3 = true;
        if (iVar6 != 0) goto LAB_00651b16;
      }
      local_4 = 0xffffffff;
      if ((bVar2) && (bVar2 = false, 0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
        _free(local_2c[0]);
      }
      if (bVar3) {
        *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
      }
      puVar5 = puVar7 + 1;
      puVar7 = (undefined4 *)*puVar5;
    } while ((undefined4 *)*puVar5 != &DAT_01050970);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00651b80 @ 00651b80 ////

/* WARNING: Removing unreachable block (ram,0x00651e07) */

int * __thiscall FUN_00651b80(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int *this_00;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *local_8c;
  undefined4 local_88;
  uint local_84;
  char local_80 [12];
  void *pvStack_74;
  void *local_6c [2];
  undefined4 *puStack_64;
  void *local_4c [2];
  uint local_44;
  undefined4 *puStack_38;
  undefined4 uStack_2c;
  int iStack_1c;
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc262e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar1 = operator_new(0x5c0);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    local_8c = local_80;
    local_80[0] = '\0';
    local_88 = 0;
    local_84 = 0x14;
    _strncpy(local_8c,"proplist",8);
    local_88 = 8;
    local_8c[8] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_00 = FUN_006632d0(pvVar1,(int *)&local_8c,0x42800000,0x42800000,7,0,0,0x3f800000,0x3f800000
                          );
    if (0x14 < local_84) {
                    /* WARNING: Subroutine does not return */
      _free(local_8c);
    }
  }
  puVar2 = FUN_0040d6b0(local_4c,"ui/",param_1);
  FUN_004312e0(local_6c,puVar2,".dds");
  local_4 = 3;
  if (local_44 < 0x15) {
    pvVar1 = operator_new(0x360);
    local_4._0_1_ = 4;
    if (pvVar1 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = FUN_0069d820(pvVar1,local_6c,0,0,0x3f800000,0x3f800000);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    (**(code **)(*piVar3 + 0x74))();
    (**(code **)(*piVar3 + 0x5c))(1);
    (**(code **)(*piVar3 + 100))(1,this_00,0);
    (**(code **)(*this_00 + 0xc))(piVar3);
    if (iStack_18 == 0) {
      uVar4 = 1;
      iStack_18 = iStack_1c;
    }
    else {
      uVar4 = 2;
    }
    (**(code **)(*this_00 + 0x5c))(uVar4,iStack_18);
    (**(code **)(*this_00 + 100))(1,iStack_1c,0);
    FUN_0065ee40(this_00,puStack_38);
    puVar2 = FUN_009b5030(local_6c,puStack_38);
    local_44._0_1_ = 5;
    FUN_0065e120(this_00,puVar2);
    local_44 = CONCAT31(local_44._1_3_,3);
    if (puStack_64 < (undefined4 *)0xb) {
      FUN_0065da90(this_00,iStack_1c);
      (**(code **)(*this_00 + 0x18))(0,uStack_2c,this,"BUILDBUTTONITEM_LANDSCAPE");
      (**(code **)(*this_00 + 0x18))(5,&LAB_00651a30,this,"BUILDBUTTONITEM_LISTITEM");
      this_00[0x45] = this_00[0x45] | 8;
      (**(code **)(**(int **)((int)this + 0x480) + 0xc))(this_00,1);
      FUN_0064a630(*(void **)((int)this + 0x528),puStack_64,this_00,1);
      ExceptionList = pvStack_74;
      return this_00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_6c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c[0]);
}


//// FUNCTION FUN_00651e40 @ 00651e40 ////

int * __thiscall
FUN_00651e40(void *this,undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  void *this_00;
  int *this_01;
  undefined1 *puVar1;
  undefined4 *local_30;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2664;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = operator_new(0x5c0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"listbutton",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_30 = (undefined4 *)&stack0xffffffa8;
    local_4 = CONCAT31(local_4._1_3_,1);
    this_01 = FUN_006632d0(this_00,(int *)&local_2c,0x42300000,0x43800000,6,DAT_00e566fc,
                           DAT_00e56700,DAT_00e56704,DAT_00e56708);
  }
  local_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0065da90(this_01,param_3);
  FUN_0065ee40(this_01,param_1);
  if (param_4 == 0) {
    (**(code **)(*this_01 + 100))();
  }
  else {
    (**(code **)(*this_01 + 100))();
  }
  (**(code **)(*this_01 + 0x5c))(1,param_3);
  puVar1 = &LAB_0064fe40;
  (**(code **)(*this_01 + 0x18))(0,&LAB_0064fe40,this,"BUILDBUTTONITEM_METAPROPSELECTED");
  (**(code **)(*this_01 + 0x18))(5,&LAB_006519f0,this,"BUILDBUTTONITEM_LISTITEM");
  FUN_0065e120(this_01,local_30);
  (**(code **)(*this_01 + 0x18))(0xd,&LAB_0064e5b0,this,"BUILDBUTTONITEM_LIST");
  (**(code **)(*this_01 + 0x18))(0xc,&LAB_0064e580,this,"BUILDBUTTONITEM_LIST");
  FUN_006635f0(this_01);
  (**(code **)(*param_3 + 0xc))(this_01,1);
  ExceptionList = puVar1;
  return this_01;
}


//// FUNCTION FUN_00652010 @ 00652010 ////

void __fastcall FUN_00652010(void *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *local_4;
  
  iVar3 = *(int *)((int)param_1 + 0x480);
  if ((iVar3 != 0) && (iVar4 = *(int *)(iVar3 + 0x124), local_4 = param_1, iVar4 != iVar3 + 0x130))
  {
    do {
      piVar1 = *(int **)(iVar4 + 8);
      iVar3 = FUN_00ace790(piVar1,0,&TM::WWindow::RTTI_Type_Descriptor,
                           &TM::WBuildButtonListItem::RTTI_Type_Descriptor,0);
      if (iVar3 != 0) {
        local_4 = (void *)0x0;
        cVar2 = (**(code **)(*piVar1 + 0x34))(&DAT_0104cce0,&local_4);
        if (cVar2 != '\0') {
          FUN_00650780(param_1,piVar1);
          *(undefined1 *)((int)param_1 + 0x549) = 1;
          return;
        }
      }
      iVar4 = *(int *)(iVar4 + 4);
    } while (iVar4 != *(int *)((int)param_1 + 0x480) + 0x130);
    return;
  }
  return;
}


//// FUNCTION FUN_006520a0 @ 006520a0 ////

void __thiscall FUN_006520a0(void *this,int param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 *puStack_c8;
  float fVar12;
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined1 *local_90;
  undefined1 auStack_8c [12];
  void *apvStack_80 [2];
  uint uStack_78;
  void *pvStack_68;
  undefined1 uStack_58;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [16];
  undefined1 uStack_30;
  undefined3 uStack_2f;
  undefined4 uStack_24;
  int *piStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc26d4;
  piStack_c = ExceptionList;
  local_98 = (undefined1 *)0x0;
  ExceptionList = &piStack_c;
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xfffffffd;
  pvVar3 = operator_new(0x360);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x20;
    local_4c = _malloc(0x20);
    _strncpy(local_4c,"ui/buildflourish.dds",0x14);
    local_48 = 0x14;
    local_4c[0x14] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    local_98 = (undefined1 *)0x1;
    local_90 = &stack0xffffff44;
    piVar4 = FUN_0069d820(pvVar3,&local_4c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xffffffff;
  if ((((uint)local_98 & 1) != 0) && (0x14 < local_44)) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  (**(code **)(*(int *)((int)this + 0x40c) + 4))();
  *(int **)((int)this + 0x420) = piVar4;
  (*(code *)**(undefined4 **)((int)this + 0x40c))();
  (**(code **)(*piVar4 + 0x74))();
  (**(code **)(**(int **)((int)this + 0x408) + 0xc))();
  iVar1 = *piVar4;
  fVar8 = (float10)(**(code **)(*piStack_c + 0x10))();
  fVar9 = (float10)(**(code **)(*piVar4 + 0x10))();
  fVar12 = (float)(((float10)(float)fVar8 - fVar9) * (float10)0.5);
  puStack_c8 = (undefined1 *)0x1;
  (**(code **)(iVar1 + 0x5c))();
  (**(code **)(*piVar4 + 0x68))();
  (**(code **)(*piVar4 + 0x50))();
  local_98 = auStack_8c;
  auStack_8c[0] = 0;
  uStack_94 = 0;
  local_90 = (undefined1 *)0x14;
  uStack_30 = 4;
  uStack_2f = 0;
  switch(uStack_24) {
  case 0:
    FUN_00403e20(&local_98,"ui/button_fac.dds");
    pcVar11 = "BB_FACILITIES";
    break;
  case 1:
  case 2:
    FUN_00403e20(&local_98,"ui/button_sets.dds");
    pcVar11 = "BB_SETS";
    break;
  case 3:
    FUN_00403e20(&local_98,"ui/button_props.dds");
    iVar1 = *(int *)((int)this + 0x544);
    if (iVar1 == 1) {
      pcVar11 = "BB_DECORATIVE";
    }
    else if (iVar1 == 2) {
      pcVar11 = "BB_FLORA";
    }
    else if (iVar1 == 3) {
      pcVar11 = "BB_FURNITURE";
    }
    else if (iVar1 == 4) {
      pcVar11 = "BB_LANDSCAPE";
    }
    else {
      pcVar11 = "BB_PROPS";
    }
    break;
  case 4:
    FUN_00403e20(&local_98,"ui/button_backd.dds");
    pcVar11 = "BB_BACKDROPS";
    break;
  case 5:
    FUN_00403e20(&local_98,"ui/button_props.dds");
    pcVar11 = "BB_METAPROP";
    break;
  case 6:
    FUN_00403e20(&local_98,"ui/button_info.dds");
    pcVar11 = "TUTORIAL_HEADER";
    break;
  default:
    goto switchD_00652281_default;
  }
  FUN_00403e20(&stack0xffffff48,pcVar11);
switchD_00652281_default:
  pvVar3 = operator_new(0x360);
  uStack_30 = 5;
  if (pvVar3 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puStack_c8 = &stack0xffffff18;
    piVar5 = FUN_0069d820(pvVar3,&local_98,0,0,0x3f800000,0x3f800000);
  }
  uVar10 = 0x42000000;
  _uStack_30 = CONCAT31(uStack_2f,4);
  (**(code **)(*piVar5 + 0x74))();
  piVar4[0x45] = piVar4[0x45] & 0xfffffffd;
  (**(code **)(*piVar4 + 0xc))();
  iVar1 = *piVar5;
  fVar8 = (float10)(**(code **)(*piVar4 + 0x10))();
  fVar9 = (float10)(**(code **)(*piVar5 + 0x10))();
  (**(code **)(iVar1 + 0x5c))(1,piVar4,(float)(((float10)(float)fVar8 - fVar9) * (float10)0.5));
  (**(code **)(*piVar5 + 0x68))(2,piVar4,DAT_00e566cc);
  do {
    cVar2 = (**(code **)(*piVar4 + 0x50))(1);
  } while (cVar2 != '\0');
  puVar6 = operator_new(0x3fc);
  uStack_58 = 6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = FUN_00833290(puVar6);
  }
  uStack_58 = 4;
  (**(code **)(*(int *)((int)this + 0x424) + 4))();
  *(undefined4 **)((int)this + 0x438) = puVar6;
  (*(code *)**(undefined4 **)((int)this + 0x424))();
  pvVar3 = (void *)0xffffffff;
  FUN_00830550(puVar6,9,&stack0xffffff18);
  puVar7 = FUN_009b5030(apvStack_80,(undefined4 *)&stack0xffffff20);
  uStack_58 = 7;
  FUN_00651220(this,puVar7);
  uStack_58 = 4;
  if (10 < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_80[0]);
  }
  (**(code **)(*piVar4 + 0xc))(puVar6,1);
  if (0x14 < uVar10) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  if ((uint)fVar12 < 0x15) {
    ExceptionList = pvStack_68;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_c8);
}


//// FUNCTION FUN_00652560 @ 00652560 ////

int * __fastcall FUN_00652560(int *param_1)

{
  FUN_0064f4e0(param_1);
  return param_1;
}


//// FUNCTION FUN_00652570 @ 00652570 ////

int * __fastcall FUN_00652570(int *param_1)

{
  FUN_0064f540(param_1);
  return param_1;
}


//// FUNCTION FUN_00652580 @ 00652580 ////

int * __fastcall FUN_00652580(int *param_1)

{
  FUN_0064f890(param_1);
  return param_1;
}


//// FUNCTION FUN_00652590 @ 00652590 ////

int * __fastcall FUN_00652590(int *param_1)

{
  FUN_0064f8f0(param_1);
  return param_1;
}


//// FUNCTION FUN_006525a0 @ 006525a0 ////

int * __fastcall FUN_006525a0(int *param_1)

{
  FUN_0064f970(param_1);
  return param_1;
}


//// FUNCTION FUN_006525b0 @ 006525b0 ////

void __fastcall FUN_006525b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_006525e0 @ 006525e0 ////

undefined4 *
FUN_006525e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0064f9d0(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x13) = param_5;
    *(undefined1 *)((int)puVar1 + 0x4d) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_00652640 @ 00652640 ////

void __fastcall FUN_00652640(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00652670 @ 00652670 ////

void * FUN_00652670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_006515d0(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_006526c0 @ 006526c0 ////

void __fastcall FUN_006526c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00651540();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_006526f0 @ 006526f0 ////

undefined4 *
FUN_006526f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    FUN_0064fa70(puVar1 + 3,param_4);
    *(undefined1 *)(puVar1 + 0x13) = param_5;
    *(undefined1 *)((int)puVar1 + 0x4d) = 0;
  }
  return puVar1;
}


//// FUNCTION FUN_00652820 @ 00652820 ////

int * __cdecl FUN_00652820(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  wchar_t *_Source;
  int iVar2;
  char *_Source_00;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = (uint *)(param_3 + 10);
    do {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)(puVar5 + -7);
        *(undefined2 *)(puVar5 + -7) = 0;
        puVar5[-9] = 0;
        puVar5[-8] = 10;
        uVar1 = param_1[1];
        _Source = (wchar_t *)*param_1;
        if (9 < uVar1) {
          uVar3 = uVar1 + 0x20 & 0xffffffe0;
          puVar5[-8] = uVar3;
          pvVar4 = _malloc(uVar3 * 2);
          *param_3 = (int)pvVar4;
        }
        _wcsncpy((wchar_t *)*param_3,_Source,uVar1);
        iVar2 = *param_3;
        puVar5[-9] = uVar1;
        *(undefined2 *)(iVar2 + uVar1 * 2) = 0;
        puVar5[-2] = (uint)(puVar5 + 1);
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x14;
        uVar1 = param_1[9];
        _Source_00 = (char *)param_1[8];
        if (0x13 < uVar1) {
          uVar3 = uVar1 + 0x20 & 0xffffffe0;
          *puVar5 = uVar3;
          pvVar4 = _malloc(uVar3);
          puVar5[-2] = (uint)pvVar4;
        }
        _strncpy((char *)puVar5[-2],_Source_00,uVar1);
        puVar5[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar5[-2]) = 0;
      }
      param_1 = param_1 + 0x10;
      param_3 = param_3 + 0x10;
      puVar5 = puVar5 + 0x10;
    } while (param_1 != param_2);
    return param_3;
  }
  return param_3;
}


//// FUNCTION FUN_00652920 @ 00652920 ////

void * __cdecl FUN_00652920(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_0064f770(param_3,param_1);
    }
    param_1 = param_1 + 0x30;
    param_3 = (void *)((int)param_3 + 0xc0);
  } while (param_1 != param_2);
  return param_3;
}


//// FUNCTION FUN_00652960 @ 00652960 ////

int * FUN_00652960(void)

{
  void *this;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  float10 fVar5;
  int iVar6;
  int *piVar7;
  void *local_9c;
  void *pvStack_98;
  uint local_94;
  uint uStack_90;
  uint local_78;
  undefined4 *local_74;
  char *local_70;
  undefined4 local_6c;
  uint local_68;
  char local_64 [16];
  void *pvStack_54;
  undefined2 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44 [10];
  int **local_30;
  undefined4 local_2c;
  uint local_28;
  int *local_24 [5];
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2735;
  pvStack_c = ExceptionList;
  local_78 = 0;
  ExceptionList = &pvStack_c;
  this = operator_new(0x5c0);
  local_4 = 0;
  local_10 = this;
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    local_70 = local_64;
    local_64[0] = '\0';
    local_6c = 0;
    local_68 = 0x14;
    _strncpy(local_70,"listbutton",10);
    local_6c = 10;
    local_70[10] = '\0';
    local_74 = (undefined4 *)&stack0xffffff44;
    local_4 = CONCAT31(local_4._1_3_,1);
    local_78 = 1;
    piVar1 = FUN_006632d0(this,(int *)&local_70,0x42800000,0x43800000,0,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 0xffffffff;
  if (((local_78 & 1) != 0) && (0x14 < local_68)) {
                    /* WARNING: Subroutine does not return */
    _free(local_70);
  }
  local_74 = operator_new(0x3fc);
  local_4 = 3;
  if (local_74 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00833290(local_74);
  }
  local_50 = local_44;
  local_44[0] = 0;
  local_4c = 0;
  local_48 = 10;
  local_30 = local_24;
  local_4 = 4;
  local_24[0] = (int *)((uint)local_24[0] & 0xffffff00);
  local_2c = 0;
  local_28 = 0x14;
  _strncpy((char *)local_30,"BUILDBUTTON_NOITEMS",0x13);
  local_2c = 0x13;
  *(char *)((int)local_30 + 0x13) = '\0';
  local_4._0_1_ = 5;
  puVar3 = FUN_009b5030(&local_9c,&local_30);
  sVar4 = FUN_00ace02d(L"<t2>");
  FUN_0040cae0(&local_50,L"<t2>",sVar4);
  FUN_0040cae0(&local_50,(wchar_t *)*puVar3,puVar3[1]);
  sVar4 = FUN_00ace02d(L"</t2><br>");
  FUN_0040cae0(&local_50,L"</t2><br>",sVar4);
  if (10 < local_94) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  iVar6 = *piVar2;
  (**(code **)(*piVar1 + 0x10))();
  (**(code **)(iVar6 + 0x78))();
  fVar5 = (float10)(**(code **)(*piVar1 + 0x10))();
  piVar2[0xd5] = (int)(float)fVar5;
  *(undefined1 *)(piVar2 + 0xd6) = 1;
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 100))(1);
  (**(code **)(*piVar2 + 0x5c))(1,piVar1,0x41000000);
  piVar7 = piVar1 + 6;
  iVar6 = *piVar7;
  *(undefined1 **)(*piVar7 + 4) = &stack0xffffff4c;
  *piVar7 = (int)&stack0xffffff4c;
  local_9c = (void *)0x41000000;
  piVar2[0x3a] = 2;
  local_24[0]._0_1_ = 6;
  (**(code **)(piVar2[0x3b] + 4))();
  piVar2[0x40] = (int)piVar1;
  (**(code **)piVar2[0x3b])();
  piVar2[0x41] = 0x41000000;
  piVar2[0x42] = (int)local_9c;
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar6;
  }
  if (iVar6 != 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  piVar7 = piVar1 + 6;
  iVar6 = *piVar7;
  *(undefined1 **)(*piVar7 + 4) = &stack0xffffff4c;
  *piVar7 = (int)&stack0xffffff4c;
  local_9c = (void *)0x41000000;
  piVar2[0x31] = 2;
  local_24[0]._0_1_ = 7;
  (**(code **)(piVar2[0x32] + 4))();
  piVar2[0x37] = (int)piVar1;
  (**(code **)piVar2[0x32])();
  piVar2[0x38] = 0x41000000;
  piVar2[0x39] = (int)local_9c;
  local_24[0] = (int *)CONCAT31(local_24[0]._1_3_,4);
  if (piVar7 != (int *)0x0) {
    *piVar7 = iVar6;
  }
  if (iVar6 != 0) {
    *(int **)(iVar6 + 4) = piVar7;
  }
  (**(code **)(*piVar1 + 0xc))(piVar2,1);
  piVar2 = local_24[0];
  (**(code **)(*piVar1 + 0x5c))(1,local_24[0],0x40800000);
  (**(code **)(*piVar1 + 100))(1,piVar2,0x41000000);
  (**(code **)(*piVar2 + 0xc))(piVar1,1);
  if (10 < uStack_90) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  ExceptionList = pvStack_54;
  return piVar1;
}


//// FUNCTION FUN_00652d90 @ 00652d90 ////

/* WARNING: Removing unreachable block (ram,0x006535f9) */
/* WARNING: Removing unreachable block (ram,0x00653401) */
/* WARNING: Removing unreachable block (ram,0x0065348c) */
/* WARNING: Removing unreachable block (ram,0x00653750) */
/* WARNING: Removing unreachable block (ram,0x006533b8) */

int * __thiscall FUN_00652d90(void *this,int *param_1,int *param_2,int param_3,int param_4)

{
  void **_Memory;
  uint uVar1;
  undefined3 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  size_t sVar11;
  void *unaff_EBP;
  int *this_00;
  undefined4 uVar12;
  int *piVar13;
  uint local_144;
  void *local_140 [2];
  undefined1 *local_138;
  undefined1 uStack_131;
  undefined1 *puStack_130;
  uint *puStack_12c;
  void **ppvStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  void *apvStack_11c [2];
  undefined1 *local_114;
  undefined4 uStack_10c;
  int iStack_108;
  uint uStack_104;
  void *pvStack_f4;
  uint uStack_ec;
  void **local_d0;
  undefined4 local_cc;
  uint local_c8;
  void *local_c4 [2];
  uint local_bc;
  void **local_b0;
  undefined4 local_ac;
  uint local_a8;
  void *local_a4 [2];
  uint auStack_9c [3];
  void **local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [16];
  undefined1 auStack_74 [4];
  undefined2 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64 [2];
  void *pvStack_60;
  uint *local_50;
  void *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined1 uStack_30;
  int *piStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00cc2865;
  pvStack_c = ExceptionList;
  local_144 = 0;
  local_50 = &local_44;
  this_00 = (int *)0x0;
  local_44 = local_44 & 0xffff0000;
  local_4c = (void *)0x0;
  local_48 = 10;
  local_70 = local_64;
  local_64[0] = 0;
  local_6c = 0;
  local_68 = 10;
  uStack_3 = 0;
  uVar2 = uStack_3;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &pvStack_c;
  local_140[0] = this;
  switch(param_4) {
  case 0:
  case 1:
  case 5:
    ExceptionList = &pvStack_c;
    puVar5 = operator_new(0x5c0);
    local_114 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      local_b0 = local_a4;
      local_a4[0] = (void *)((uint)local_a4[0] & 0xffffff00);
      local_ac = 0;
      local_a8 = 0x14;
      _strncpy((char *)local_b0,"listbutton",10);
      local_ac = 10;
      *(char *)((int)local_b0 + 10) = '\0';
      local_138 = &stack0xfffffe9c;
      _local_4 = CONCAT31(uStack_3,3);
      local_144 = 1;
      this_00 = FUN_006632d0(puVar5,(int *)&local_b0,0x42300000,0x43800000,param_4,DAT_00e566fc,
                             DAT_00e56700,DAT_00e56704,DAT_00e56708);
    }
    if ((local_144 & 1) != 0) {
      local_144 = local_144 & 0xfffffffe;
      _Memory = local_b0;
      uVar1 = local_a8;
joined_r0x006530fb:
      if (0x14 < uVar1) {
        uStack_3 = 0;
        local_4 = 1;
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
    }
    break;
  case 2:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar2;
    puVar5 = operator_new(0x5c0);
    local_138 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      local_d0 = local_c4;
      local_c4[0] = (void *)((uint)local_c4[0] & 0xffffff00);
      local_cc = 0;
      local_c8 = 0x14;
      _strncpy((char *)local_d0,"proplist",8);
      local_cc = 8;
      *(char *)(local_d0 + 2) = '\0';
      local_114 = &stack0xfffffe9c;
      _local_4 = CONCAT31(uStack_3,6);
      local_144 = 2;
      this_00 = FUN_006632d0(puVar5,(int *)&local_d0,0x42800000,0x42800000,2,0,0,0x3f800000,
                             0x3f800000);
    }
    if ((local_144 & 2) != 0) {
      local_144 = local_144 & 0xfffffffd;
      _Memory = local_d0;
      uVar1 = local_c8;
      goto joined_r0x006530fb;
    }
    break;
  case 3:
    ExceptionList = &pvStack_c;
    uStack_3 = uVar2;
    puVar5 = operator_new(0x5c0);
    local_138 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      local_90 = (void **)local_84;
      local_84[0] = 0;
      local_8c = 0;
      local_88 = 0x14;
      _strncpy((char *)local_90,"listbutton_got",0xe);
      local_8c = 0xe;
      *(char *)((int)local_90 + 0xe) = '\0';
      local_114 = &stack0xfffffe9c;
      _local_4 = CONCAT31(uStack_3,9);
      local_144 = 4;
      this_00 = FUN_006632d0(puVar5,(int *)&local_90,0x42300000,0x43800000,3,DAT_00e566fc,
                             DAT_00e56700,DAT_00e56704,DAT_00e56708);
    }
    if ((local_144 & 4) != 0) {
      local_144 = local_144 & 0xfffffffb;
      _Memory = local_90;
      uVar1 = local_88;
      goto joined_r0x006530fb;
    }
  }
  uStack_3 = 0;
  local_4 = 1;
  FUN_0065da90(this_00,param_2);
  FUN_0065e520(this_00,param_1);
  FUN_0065d720(this_00,*(undefined4 *)((int)local_140[0] + 0x344));
  FUN_006635f0(this_00);
  FUN_0065d730(this_00,1);
  if (param_4 == 2) {
    (**(code **)(*this_00 + 0x5c))();
    piVar13 = (int *)0x1;
    (**(code **)(*this_00 + 100))();
    FUN_0065e180(this_00,&iStack_108);
    iVar7 = FUN_004302c0(&iStack_108,&DAT_00d1e524,0xffffffff,1);
    if ((iVar7 != -1) && (iVar7 + 1U < uStack_104)) {
      puVar6 = FUN_00430770(&iStack_108,(undefined4 *)&stack0xfffffeb4,iVar7 + 1U,0xffffffff);
      FUN_004015d0(&iStack_108,(char *)*puVar6,puVar6[1]);
      if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_EBP);
      }
    }
    local_140[0] = (void *)((uint)local_140[0] & 0xffffff00);
    local_144 = 0x14;
    _strncpy((char *)local_140,"",0);
                    /* WARNING: Ignoring partial resolution of indirect */
    local_140[0]._0_1_ = 0;
    ppvStack_128 = apvStack_11c;
    apvStack_11c[0] = (void *)((uint)apvStack_11c[0] & 0xffffff00);
    uStack_124 = 0;
    uStack_120 = 0x14;
    _strncpy((char *)ppvStack_128,".dds",4);
    uStack_124 = 4;
    *(char *)(ppvStack_128 + 1) = '\0';
    iStack_1c._0_1_ = 0xd;
    FUN_00569860(&iStack_108,&ppvStack_128,(undefined4 *)&stack0xfffffeb4);
    if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
      _free(ppvStack_128);
    }
    iStack_1c = CONCAT31(iStack_1c._1_3_,0xb);
    if (0x14 < local_144) {
                    /* WARNING: Subroutine does not return */
      _free(local_140);
    }
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x14))();
    bVar3 = FUN_00431270(puVar6,(wchar_t *)&lpCaption_00d16918);
    if (bVar3) {
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x14))();
    }
    else {
      puVar6 = FUN_009b5030((undefined4 *)&stack0xfffffeb0,&uStack_10c);
    }
    FUN_004036d0(&local_8c,(wchar_t *)*puVar6,puVar6[1]);
    pvVar8 = operator_new(0x360);
    uStack_20._0_1_ = 0xe;
    if (pvVar8 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      puVar6 = FUN_0065e180(this_00,(undefined4 *)&stack0xfffffeb0);
      puStack_130 = &stack0xfffffe80;
      uStack_20 = CONCAT31(uStack_20._1_3_,0xf);
      piVar9 = FUN_0069d820(pvVar8,puVar6,0,0,0x3f800000,0x3f800000);
    }
    uStack_20 = 0xb;
    cVar4 = (**(code **)(*piVar9 + 0x10c))();
    if (cVar4 == '\0') {
      piVar13 = piVar9 + 0x12;
      *piVar13 = *piVar13 + -1;
      if (*piVar13 == 0) {
        (**(code **)*piVar9)();
      }
      puVar6 = operator_new(0x3fc);
      uStack_20._0_1_ = 0x11;
      if (puVar6 == (undefined4 *)0x0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = FUN_00833290(puVar6);
      }
      puStack_12c = &uStack_120;
      uStack_120 = uStack_120 & 0xffff0000;
      ppvStack_128 = (void **)0x0;
      uStack_124 = 10;
      local_144 = local_144 & 0xffffff00;
      _strncpy((char *)&local_144,"BUILDBUTTON_NOIMAGE",0x13);
      uStack_131 = 0;
      uStack_20._0_1_ = 0x13;
      puVar10 = FUN_009b5030(&local_4c,(undefined4 *)&stack0xfffffeb0);
      sVar11 = FUN_00ace02d(L"<t3><br>");
      FUN_0040cae0(&puStack_12c,L"<t3><br>",sVar11);
      FUN_0040cae0(&puStack_12c,(wchar_t *)*puVar10,puVar10[1]);
      sVar11 = FUN_00ace02d(L"</t3>");
      FUN_0040cae0(&puStack_12c,L"</t3>",sVar11);
      if (local_44 < 0xb) {
        uStack_20 = CONCAT31(uStack_20._1_3_,0x12);
        (**(code **)(*piVar13 + 0x78))();
        piVar13[0xd5] = 0x42200000;
        *(undefined1 *)(piVar13 + 0xd6) = 1;
        (**(code **)(*piVar13 + 0x54))();
        (**(code **)(*piVar13 + 100))(1);
        (**(code **)(*piVar13 + 0x5c))(1,this_00,0x41000000);
        piVar9 = (int *)FUN_005fbfa0(&local_6c,2,(int)this_00,0x41000000);
        piVar13[0x3a] = *piVar9;
        uStack_40._0_1_ = 0x14;
        (**(code **)(piVar13[0x3b] + 4))();
        piVar13[0x40] = piVar9[6];
        (**(code **)piVar13[0x3b])();
        piVar13[0x41] = piVar9[7];
        piVar13[0x42] = piVar9[8];
        FUN_005f9ed0((int)&local_6c);
        piVar9 = (int *)FUN_005fbfa0(&local_6c,2,(int)this_00,0x41000000);
        piVar13[0x31] = *piVar9;
        uStack_40._0_1_ = 0x15;
        (**(code **)(piVar13[0x32] + 4))();
        piVar13[0x37] = piVar9[6];
        (**(code **)piVar13[0x32])();
        piVar13[0x38] = piVar9[7];
        piVar13[0x39] = piVar9[8];
        uStack_40 = CONCAT31(uStack_40._1_3_,0x12);
        FUN_005f9ed0((int)&local_6c);
        (**(code **)(*this_00 + 0xc))(piVar13,1);
        local_48 = CONCAT31(local_48._1_3_,0xb);
                    /* WARNING: Subroutine does not return */
        _free(puVar6);
      }
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    (**(code **)(*piVar9 + 0x74))();
    uVar12 = 1;
    (**(code **)(*piVar9 + 0x5c))(1);
    (**(code **)(*piVar9 + 100))(1,this_00,0x41000000);
    (**(code **)(*this_00 + 0xc))(piVar9,1);
    (**(code **)(*this_00 + 0x18))(0,&LAB_006519b0,uVar12,"BUILDBUTTONITEM_PROPSELECTED");
    (**(code **)(*this_00 + 0x18))(5,&LAB_00651a30,uVar12,"BUILDBUTTONITEM_LISTITEM");
    (**(code **)(*this_00 + 0x18))(2,&LAB_0064dba0,this_00,&lpClass_00d16914);
    uStack_30 = 1;
    param_2 = piStack_24;
    if (&DAT_00000014 < local_114) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_11c[0]);
    }
    goto LAB_006537b9;
  }
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))();
  FUN_004036d0(auStack_74,(wchar_t *)*puVar6,puVar6[1]);
  if (10 < uStack_ec) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f4);
  }
  (**(code **)(*this_00 + 100))();
  piVar13 = param_2;
  (**(code **)(*this_00 + 0x5c))();
  if ((pvStack_c == (void *)0x5) || (pvStack_c == (void *)0x3)) {
LAB_00653224:
    (**(code **)(*this_00 + 0x18))();
  }
  else if ((pvStack_c == (void *)0x0) || (pvStack_c == (void *)0x1)) {
    (**(code **)(*this_00 + 0x18))();
    goto LAB_00653224;
  }
  (**(code **)(*this_00 + 0x18))();
LAB_006537b9:
  FUN_0065e120(this_00,auStack_9c);
  this_00[0x45] = this_00[0x45] | 8;
  if (((iStack_1c == 0) || (iStack_1c == 1)) || (iStack_1c == 2)) {
    pvVar8 = (void *)piVar13[0x14a];
    uVar12 = 0;
    piVar9 = this_00;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))();
    FUN_0064a630(pvVar8,puVar6,piVar9,uVar12);
    param_2 = piStack_24;
  }
  (**(code **)(*this_00 + 0x18))(0xd,&LAB_0064e5b0,piVar13,"BUILDBUTTONITEM_LIST");
  (**(code **)(*this_00 + 0x18))(0xc,&LAB_0064e580,piVar13,"BUILDBUTTONITEM_LIST");
  (**(code **)(*param_2 + 0xc))(this_00,1);
  if (local_bc < 0xb) {
    if (auStack_9c[0] < 0xb) {
      ExceptionList = pvStack_60;
      return this_00;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_a4[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_c4[0]);
}


//// FUNCTION FUN_006538c0 @ 006538c0 ////

/* WARNING: Type propagation algorithm not settling */

int **** FUN_006538c0(int *param_1,int param_2)

{
  void *this;
  int *******this_00;
  undefined4 *puVar1;
  uint uVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  void *unaff_EBX;
  uint unaff_EBP;
  void *unaff_EDI;
  float10 fVar6;
  ulonglong uVar7;
  int *******pppppppiStack_188;
  undefined4 uStack_184;
  uint uStack_180;
  int *******pppppppiStack_17c;
  undefined **ppuStack_178;
  int ******ppppppiVar8;
  int *******pppppppiVar9;
  int *******pppppppiVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uStack_13c;
  void *pvStack_130;
  uint uStack_128;
  float fStack_120;
  undefined1 *local_11c;
  uint local_118;
  uint *local_110;
  undefined2 *local_10c;
  uint local_108;
  uint local_104;
  undefined2 auStack_100 [10];
  wchar_t *pwStack_ec;
  size_t sStack_e8;
  undefined1 auStack_d4 [4];
  undefined2 *local_d0;
  wchar_t *local_cc;
  size_t local_c8;
  undefined2 local_c4 [8];
  undefined1 auStack_b4 [4];
  undefined2 *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4 [10];
  void *local_90;
  void *pvStack_8c;
  undefined1 uStack_7c;
  int iStack_74;
  int *piStack_70;
  undefined4 uStack_44;
  undefined1 uStack_40;
  undefined1 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc28f0;
  pvStack_c = ExceptionList;
  local_118 = 0;
  local_d0 = local_c4;
  local_c4[0] = 0;
  local_cc = (wchar_t *)0x0;
  local_c8 = 10;
  local_b0 = local_a4;
  local_a4[0] = 0;
  local_ac = 0;
  local_a8 = 10;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  this = operator_new(0x5c0);
  local_90 = this;
  if (this == (void *)0x0) {
    this_00 = (int *******)0x0;
  }
  else {
    local_110 = &local_104;
    local_104 = local_104 & 0xffffff00;
    local_10c = (undefined2 *)0x0;
    local_108 = 0x14;
    _strncpy((char *)local_110,"listbutton",10);
    local_10c = (undefined2 *)0xa;
    *(char *)((int)local_110 + 10) = '\0';
    local_11c = &stack0xfffffea0;
    local_4 = CONCAT31(local_4._1_3_,3);
    local_118 = 1;
    this_00 = (int *******)
              FUN_006632d0(this,(int *)&local_110,0x42300000,0x43800000,3,DAT_00e566fc,DAT_00e56700,
                           DAT_00e56704,DAT_00e56708);
  }
  local_4 = 1;
  if (((local_118 & 1) != 0) && (0x14 < local_108)) {
                    /* WARNING: Subroutine does not return */
    _free(local_110);
  }
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x5c))();
  FUN_004036d0(auStack_b4,(wchar_t *)*puVar1,puVar1[1]);
  if (10 < uStack_13c) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  uVar2 = FUN_00ace02d(L"<translate>sitt_set_freshness</translate> ");
  FUN_004036d0(auStack_d4,L"<translate>sitt_set_freshness</translate> ",uVar2);
  FUN_004d3720(param_1,&fStack_120);
  uVar7 = FUN_00acd42c();
  sVar3 = _swprintf((wchar_t *)&local_90,0xd18f7c,(wchar_t *)uVar7);
  FUN_0040cae0(auStack_d4,(wchar_t *)&local_90,sVar3);
  sVar3 = FUN_00ace02d((short *)&DAT_00d2468c);
  FUN_0040cae0(auStack_d4,L"%",sVar3);
  FUN_0065da90(this_00,param_1);
  FUN_0065eb40(this_00,param_1);
  if (param_2 == 0) {
    uVar13 = 0x41000000;
  }
  else {
    uVar13 = 0xc0800000;
  }
  (*(code *)(*this_00)[0x19])();
  (*(code *)(*this_00)[0x17])();
  if ((char)pvStack_c != '\0') {
    ppuStack_178 = (undefined **)&LAB_0064fdc0;
    pppppppiStack_17c = (int *******)0x0;
    uStack_180 = 0x653b69;
    (*(code *)(*this_00)[6])();
  }
  puVar1 = operator_new(0x3fc);
  uStack_20 = 5;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = FUN_00833290(puVar1);
  }
  local_10c = auStack_100;
  auStack_100[0] = 0;
  local_108 = 0;
  local_104 = 10;
  uStack_20 = 6;
  sVar3 = FUN_00ace02d(L"<t2>");
  ppuStack_178 = (undefined **)0x653bd0;
  FUN_0040cae0(&local_10c,L"<t2>",sVar3);
  ppuStack_178 = (undefined **)0x653be9;
  FUN_0040cae0(&local_10c,local_cc,local_c8);
  sVar3 = FUN_00ace02d(L"</t2><br>");
  ppuStack_178 = (undefined **)0x653c05;
  FUN_0040cae0(&local_10c,L"</t2><br>",sVar3);
  sVar3 = FUN_00ace02d(L"<t3>");
  ppuStack_178 = (undefined **)0x653c21;
  FUN_0040cae0(&local_10c,L"<t3>",sVar3);
  ppuStack_178 = (undefined **)0x653c3a;
  FUN_0040cae0(&local_10c,pwStack_ec,sStack_e8);
  sVar3 = FUN_00ace02d(L"</t3>");
  ppuStack_178 = (undefined **)0x653c56;
  FUN_0040cae0(&local_10c,L"</t3>",sVar3);
  iVar11 = *piVar4;
  (*(code *)(*this_00)[4])();
  (**(code **)(iVar11 + 0x78))();
  fVar6 = (float10)(*(code *)(*this_00)[4])();
  piVar4[0xd5] = (int)(float)fVar6;
  *(undefined1 *)(piVar4 + 0xd6) = 1;
  ppuStack_178 = (undefined **)0x653c88;
  (**(code **)(*piVar4 + 0x54))();
  ppuStack_178 = (undefined **)0x40c00000;
  uStack_180 = 1;
  uStack_184 = 0x653c97;
  pppppppiStack_17c = this_00;
  (**(code **)(*piVar4 + 100))();
  uStack_184 = 0x41000000;
  pppppppiStack_188 = this_00;
  (**(code **)(*piVar4 + 0x5c))(1);
  pppppppiStack_17c = (int *******)0x2;
  pppppppiVar9 = this_00 + 6;
  ppuStack_178 = &PTR_FUN_00d18c2c;
  ppppppiVar8 = *pppppppiVar9;
  (*pppppppiVar9)[1] = (int *****)&stack0xfffffe8c;
  *pppppppiVar9 = (int ******)&stack0xfffffe8c;
  iVar11 = 0x41000000;
  iVar12 = 0x41000000;
  piVar4[0x3a] = 2;
  uStack_40 = 7;
  pppppppiVar10 = this_00;
  (**(code **)(piVar4[0x3b] + 4))();
  piVar4[0x40] = (int)pppppppiVar10;
  (**(code **)piVar4[0x3b])();
  piVar4[0x41] = iVar11;
  piVar4[0x42] = iVar12;
  if (pppppppiVar9 != (int *******)0x0) {
    *pppppppiVar9 = ppppppiVar8;
  }
  if (ppppppiVar8 != (int ******)0x0) {
    ppppppiVar8[1] = (int *****)pppppppiVar9;
  }
  pppppppiVar9 = this_00 + 6;
  pppppppiStack_17c = (int *******)0x2;
  ppuStack_178 = &PTR_FUN_00d18c2c;
  ppppppiVar8 = *pppppppiVar9;
  (*pppppppiVar9)[1] = (int *****)&stack0xfffffe8c;
  *pppppppiVar9 = (int ******)&stack0xfffffe8c;
  iVar11 = 0x41000000;
  iVar12 = 0x41000000;
  piVar4[0x31] = 2;
  uStack_40 = 8;
  pppppppiVar10 = this_00;
  (**(code **)(piVar4[0x32] + 4))();
  piVar4[0x37] = (int)pppppppiVar10;
  (**(code **)piVar4[0x32])();
  piVar4[0x38] = iVar11;
  piVar4[0x39] = iVar12;
  uStack_40 = 6;
  if (pppppppiVar9 != (int *******)0x0) {
    *pppppppiVar9 = ppppppiVar8;
  }
  if (ppppppiVar8 != (int ******)0x0) {
    ppppppiVar8[1] = (int *****)pppppppiVar9;
  }
  (*(code *)(*this_00)[3])(piVar4,1);
  (*(code *)(*this_00)[6])(5,&LAB_006519f0,uVar13,"BUILDBUTTONITEM_LISTITEM");
  (*(code *)(*this_00)[0x30])(uStack_44);
  FUN_0065e120(this_00,&local_108);
  (*(code *)(*this_00)[6])(0xd,&LAB_0064e5b0,uVar13,"BUILDBUTTONITEM_LIST");
  (*(code *)(*this_00)[6])(0xc,&LAB_0064e580,uVar13,"BUILDBUTTONITEM_LIST");
  pppppppiStack_188 = (int *******)&pppppppiStack_17c;
  pppppppiStack_17c = (int *******)((uint)pppppppiStack_17c & 0xffffff00);
  uStack_184 = 0;
  uStack_180 = 0x14;
  uStack_7c = 9;
  FUN_004073f0(&pppppppiStack_188,"data/set/",9);
  puVar1 = (undefined4 *)FUN_00528450(iStack_74);
  FUN_004073f0(&pppppppiStack_188,(char *)*puVar1,puVar1[1]);
  FUN_004073f0(&pppppppiStack_188,".ini",4);
  pcVar5 = (char *)FUN_009d38d0(&pppppppiStack_188);
  FUN_0065db00(this_00,pcVar5);
  uStack_7c = 6;
  if (uStack_180 < 0x15) {
    (**(code **)(*piStack_70 + 0xc))(this_00,1);
    if (&lpType_0000000a < param_1) {
                    /* WARNING: Subroutine does not return */
      _free(pppppppiVar9);
    }
    if (uStack_128 < 0xb) {
      if (unaff_EBP < 0xb) {
        ExceptionList = pvStack_8c;
        return (int ****)this_00;
      }
                    /* WARNING: Subroutine does not return */
      _free(unaff_EDI);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_130);
  }
                    /* WARNING: Subroutine does not return */
  _free(pppppppiStack_188);
}


//// FUNCTION FUN_00653f70 @ 00653f70 ////

int * FUN_00653f70(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  size_t sVar9;
  uint unaff_EBP;
  void *unaff_EDI;
  float10 fVar10;
  int iStack_fc;
  int *piStack_f8;
  int *piVar11;
  int iVar12;
  undefined4 uStack_c4;
  void *apvStack_bc [2];
  undefined1 *puStack_b4;
  uint auStack_ac [3];
  undefined4 *puStack_a0;
  uint *local_98;
  undefined2 *puStack_94;
  uint local_90;
  uint uStack_8c;
  undefined2 auStack_88 [8];
  int *piStack_78;
  wchar_t *local_74;
  undefined1 *puStack_70;
  int iStack_5c;
  wchar_t *pwStack_54;
  size_t sStack_50;
  undefined2 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40 [10];
  undefined2 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc29c0;
  pvStack_c = ExceptionList;
  bVar1 = false;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  local_4c = local_40;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 10;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &pvStack_c;
  if ((DAT_0104d8e8 == (int *)0x0) ||
     (ExceptionList = &pvStack_c, iVar2 = (**(code **)(*DAT_0104d8e8 + 0x100))(), iVar2 == 0)) {
LAB_0065405e:
    uStack_c4 = (uint)(uint3)uStack_c4;
  }
  else {
    puVar3 = FUN_009f4620(&local_98,param_1);
    local_4 = CONCAT31(local_4._1_3_,2);
    bVar1 = true;
    iVar2 = (**(code **)(*DAT_0104d8e8 + 0x100))();
    uVar4 = FUN_00401ec0((undefined4 *)(iVar2 + 0x100),puVar3);
    if ((char)uVar4 == '\0') goto LAB_0065405e;
    uStack_c4 = CONCAT13(1,(uint3)uStack_c4);
  }
  local_4 = 1;
  if ((bVar1) && (0x14 < local_90)) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  if (uStack_c4._3_1_ == '\0') {
    piVar6 = operator_new(0x5c0);
    piStack_78 = piVar6;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
      goto LAB_00654231;
    }
    local_98 = &uStack_8c;
    uStack_8c = uStack_8c & 0xffffff00;
    puStack_94 = (undefined2 *)0x0;
    local_90 = 0x14;
    _strncpy((char *)local_98,"listbutton",10);
    puStack_94 = (undefined2 *)0xa;
    *(char *)((int)local_98 + 10) = '\0';
    puStack_70 = &stack0xffffff1c;
    local_4 = CONCAT31(local_4._1_3_,7);
    piStack_f8 = (int *)0x65420a;
    piVar6 = FUN_006632d0(piVar6,(int *)&local_98,0x42300000,0x43800000,5,DAT_00e566fc,DAT_00e56700,
                          DAT_00e56704,DAT_00e56708);
  }
  else {
    puVar5 = operator_new(0x5c0);
    puStack_70 = puVar5;
    if (puVar5 == (undefined1 *)0x0) {
      piVar6 = (int *)0x0;
      goto LAB_00654231;
    }
    local_98 = &uStack_8c;
    uStack_8c = uStack_8c & 0xffffff00;
    puStack_94 = (undefined2 *)0x0;
    local_90 = 0x14;
    _strncpy((char *)local_98,"listbutton_got",0xe);
    puStack_94 = (undefined2 *)0xe;
    *(char *)((int)local_98 + 0xe) = '\0';
    piStack_78 = (int *)&stack0xffffff1c;
    local_4 = CONCAT31(local_4._1_3_,4);
    piStack_f8 = (int *)0x654141;
    piVar6 = FUN_006632d0(puVar5,(int *)&local_98,0x42300000,0x43800000,5,DAT_00e566fc,DAT_00e56700,
                          DAT_00e56704,DAT_00e56708);
  }
  if (0x14 < local_90) {
    local_4 = 1;
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
LAB_00654231:
  local_4 = 1;
  puVar3 = FUN_009f4760(apvStack_bc,param_1);
  FUN_004036d0(&local_4c,(wchar_t *)*puVar3,puVar3[1]);
  if (&lpType_0000000a < puStack_b4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_bc[0]);
  }
  uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar7);
  FUN_0065da90(piVar6,param_2);
  puVar3 = FUN_009f4620(apvStack_bc,param_1);
  local_4._0_1_ = 9;
  FUN_0065ee40(piVar6,puVar3);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (&DAT_00000014 < puStack_b4) {
                    /* WARNING: Subroutine does not return */
    _free(apvStack_bc[0]);
  }
  (**(code **)(*piVar6 + 100))();
  (**(code **)(*piVar6 + 0x5c))();
  piStack_f8 = (int *)&LAB_0064fe00;
  iStack_fc = 0;
  (**(code **)(*piVar6 + 0x18))();
  puStack_a0 = operator_new(0x3fc);
  local_2c._0_1_ = 10;
  if (puStack_a0 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = FUN_00833290(puStack_a0);
  }
  puStack_94 = auStack_88;
  auStack_88[0] = 0;
  local_90 = 0;
  uStack_8c = 10;
  local_2c = (undefined2 *)CONCAT31(local_2c._1_3_,0xb);
  sVar9 = FUN_00ace02d(L"<t2>");
  FUN_0040cae0(&puStack_94,L"<t2>",sVar9);
  FUN_0040cae0(&puStack_94,local_74,(size_t)puStack_70);
  sVar9 = FUN_00ace02d(L"</t2><br>");
  FUN_0040cae0(&puStack_94,L"</t2><br>",sVar9);
  sVar9 = FUN_00ace02d(L"<t3>");
  FUN_0040cae0(&puStack_94,L"<t3>",sVar9);
  FUN_0040cae0(&puStack_94,pwStack_54,sStack_50);
  sVar9 = FUN_00ace02d(L"</t3>");
  FUN_0040cae0(&puStack_94,L"</t3>",sVar9);
  iVar2 = *piVar8;
  (**(code **)(*piVar6 + 0x10))();
  (**(code **)(iVar2 + 0x78))();
  fVar10 = (float10)(**(code **)(*piVar6 + 0x10))();
  piVar8[0xd5] = (int)(float)fVar10;
  *(undefined1 *)(piVar8 + 0xd6) = 1;
  (**(code **)(*piVar8 + 0x54))(&local_98);
  (**(code **)(*piVar8 + 100))(1,piVar6,0x40c00000);
  (**(code **)(*piVar8 + 0x5c))(1,piVar6,0x41000000);
  piStack_f8 = piVar6 + 6;
  iStack_fc = *piStack_f8;
  *(int **)(*piStack_f8 + 4) = &iStack_fc;
  *piStack_f8 = (int)&iStack_fc;
  iVar2 = 0x41000000;
  iVar12 = 0x41000000;
  piVar8[0x3a] = 2;
  local_4c._0_1_ = 0xc;
  piVar11 = piVar6;
  (**(code **)(piVar8[0x3b] + 4))();
  piVar8[0x40] = (int)piVar11;
  (**(code **)piVar8[0x3b])();
  piVar8[0x41] = iVar2;
  piVar8[0x42] = iVar12;
  if (piStack_f8 != (int *)0x0) {
    *piStack_f8 = iStack_fc;
  }
  if (iStack_fc != 0) {
    *(int **)(iStack_fc + 4) = piStack_f8;
  }
  puVar5 = &stack0xffffff00;
  piStack_f8 = piVar6 + 6;
  iStack_fc = *piStack_f8;
  *(int **)(*piStack_f8 + 4) = &iStack_fc;
  *piStack_f8 = (int)&iStack_fc;
  iVar2 = 0x41000000;
  iVar12 = 0x41000000;
  piVar8[0x31] = 2;
  local_4c._0_1_ = 0xd;
  piVar11 = piVar6;
  (**(code **)(piVar8[0x32] + 4))();
  piVar8[0x37] = (int)piVar11;
  (**(code **)piVar8[0x32])();
  piVar8[0x38] = iVar2;
  piVar8[0x39] = iVar12;
  local_4c = (undefined2 *)CONCAT31(local_4c._1_3_,0xb);
  if (piStack_f8 != (int *)0x0) {
    *piStack_f8 = iStack_fc;
  }
  if (iStack_fc != 0) {
    *(int **)(iStack_fc + 4) = piStack_f8;
  }
  (**(code **)(*piVar6 + 0xc))(piVar8,1);
  (**(code **)(*piVar6 + 0x18))(5,&LAB_006519f0,uStack_c4,"BUILDBUTTONITEM_LISTITEM");
  FUN_0065e120(piVar6,auStack_ac);
  FUN_0065e0b0(piVar6,iStack_5c);
  (**(code **)(*piVar6 + 0x18))(0xd,&LAB_0064e5b0,uStack_c4,"BUILDBUTTONITEM_LIST");
  (**(code **)(*piVar6 + 0x18))(0xc,&LAB_0064e580,uStack_c4,"BUILDBUTTONITEM_LIST");
  (**(code **)(*piStack_78 + 0xc))(piVar6,1);
  if (&lpType_0000000a < piVar11) {
                    /* WARNING: Subroutine does not return */
    _free(puVar5);
  }
  if (10 < unaff_EBP) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  if (auStack_ac[0] < 0xb) {
    ExceptionList = puStack_94;
    return piVar6;
  }
                    /* WARNING: Subroutine does not return */
  _free(puStack_b4);
}


//// FUNCTION FUN_006546a0 @ 006546a0 ////

void __fastcall FUN_006546a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  int iVar5;
  int *piVar6;
  void *pvStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc29e3;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 0x480);
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar3)();
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x468);
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = puVar3 + 0x12;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x454) + 4))();
    *(undefined4 *)(param_1 + 0x468) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x454))();
  }
  puVar3 = operator_new(0x344);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x46c) + 4))();
  *(undefined4 **)(param_1 + 0x480) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x46c))();
  (**(code **)(**(int **)(param_1 + 0x480) + 100))(1,*(undefined4 *)(param_1 + 0x408));
  (**(code **)(**(int **)(param_1 + 0x480) + 0x5c))(1,*(undefined4 *)(param_1 + 0x408),0);
  iVar1 = **(int **)(param_1 + 0x480);
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
  (**(code **)(iVar1 + 0x7c))((float)fVar4);
  iVar1 = *(int *)(param_1 + 0x408);
  iVar5 = 0;
  piVar6 = (int *)0x0;
  if (iVar1 != 0) {
    piVar6 = (int *)(iVar1 + 0x18);
    iVar5 = *piVar6;
    *(undefined1 **)(*piVar6 + 4) = &stack0xffffffbc;
    *piVar6 = (int)&stack0xffffffbc;
  }
  iVar2 = *(int *)(param_1 + 0x480);
  *(undefined4 *)(iVar2 + 0xe8) = 2;
  (**(code **)(*(int *)(iVar2 + 0xec) + 4))();
  *(int *)(iVar2 + 0x100) = iVar1;
  (*(code *)**(undefined4 **)(iVar2 + 0xec))();
  *(undefined4 *)(iVar2 + 0x104) = 0x42480000;
  *(undefined4 *)(iVar2 + 0x108) = 0x42480000;
  if (piVar6 != (int *)0x0) {
    *piVar6 = iVar5;
  }
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar6;
  }
  if (*(int **)(param_1 + 0x408) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x408) + 0xc))(*(undefined4 *)(param_1 + 0x480),1);
  }
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_006548a0 @ 006548a0 ////

void __fastcall FUN_006548a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  int iVar5;
  int *piVar6;
  void *pvStack_28;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2a03;
  pvStack_c = ExceptionList;
  puVar3 = *(undefined4 **)(param_1 + 0x480);
  ExceptionList = &pvStack_c;
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = puVar3 + 0x12;
    ExceptionList = &pvStack_c;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar3)();
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x468);
  if (puVar3 != (undefined4 *)0x0) {
    piVar6 = puVar3 + 0x12;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x454) + 4))();
    *(undefined4 *)(param_1 + 0x468) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x454))();
  }
  puVar3 = operator_new(0x344);
  uStack_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x46c) + 4))();
  *(undefined4 **)(param_1 + 0x480) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x46c))();
  (**(code **)(**(int **)(param_1 + 0x480) + 100))(1,*(undefined4 *)(param_1 + 0x408));
  (**(code **)(**(int **)(param_1 + 0x480) + 0x60))(2,*(undefined4 *)(param_1 + 0x408),0);
  iVar5 = **(int **)(param_1 + 0x480);
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
  (**(code **)(iVar5 + 0x7c))((float)fVar4);
  piVar1 = *(int **)(param_1 + 0x408);
  fVar4 = (float10)(**(code **)(*piVar1 + 0x10))();
  fVar4 = (fVar4 - (float10)128.0) - (float10)20.0;
  iVar5 = 0;
  piVar6 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar6 = piVar1 + 6;
    iVar5 = *piVar6;
    *(undefined1 **)(*piVar6 + 4) = &stack0xffffffbc;
    *piVar6 = (int)&stack0xffffffbc;
  }
  iVar2 = *(int *)(param_1 + 0x480);
  *(undefined4 *)(iVar2 + 0xa0) = 2;
  (**(code **)(*(int *)(iVar2 + 0xa4) + 4))();
  *(int **)(iVar2 + 0xb8) = piVar1;
  (*(code *)**(undefined4 **)(iVar2 + 0xa4))();
  *(float *)(iVar2 + 0xbc) = (float)fVar4;
  *(float *)(iVar2 + 0xc0) = (float)fVar4;
  if (piVar6 != (int *)0x0) {
    *piVar6 = iVar5;
  }
  if (iVar5 != 0) {
    *(int **)(iVar5 + 4) = piVar6;
  }
  if (*(int **)(param_1 + 0x408) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x408) + 0xc))(*(undefined4 *)(param_1 + 0x480),1);
  }
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_00654aa0 @ 00654aa0 ////

int __fastcall FUN_00654aa0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00654ad0 @ 00654ad0 ////

int __fastcall FUN_00654ad0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00654b00 @ 00654b00 ////

int __fastcall FUN_00654b00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00651540();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00654b90 @ 00654b90 ////

void __cdecl FUN_00654b90(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  wchar_t *_Source;
  int iVar2;
  char *_Source_00;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (uint *)(param_1 + 10);
    do {
      if (param_1 != (int *)0x0) {
        *param_1 = (int)(puVar5 + -7);
        *(undefined2 *)(puVar5 + -7) = 0;
        puVar5[-9] = 0;
        puVar5[-8] = 10;
        uVar1 = param_3[1];
        _Source = (wchar_t *)*param_3;
        if (9 < uVar1) {
          uVar3 = uVar1 + 0x20 & 0xffffffe0;
          puVar5[-8] = uVar3;
          pvVar4 = _malloc(uVar3 * 2);
          *param_1 = (int)pvVar4;
        }
        _wcsncpy((wchar_t *)*param_1,_Source,uVar1);
        iVar2 = *param_1;
        puVar5[-9] = uVar1;
        *(undefined2 *)(iVar2 + uVar1 * 2) = 0;
        puVar5[-2] = (uint)(puVar5 + 1);
        *(undefined1 *)(puVar5 + 1) = 0;
        puVar5[-1] = 0;
        *puVar5 = 0x14;
        uVar1 = param_3[9];
        _Source_00 = (char *)param_3[8];
        if (0x13 < uVar1) {
          uVar3 = uVar1 + 0x20 & 0xffffffe0;
          *puVar5 = uVar3;
          pvVar4 = _malloc(uVar3);
          puVar5[-2] = (uint)pvVar4;
        }
        _strncpy((char *)puVar5[-2],_Source_00,uVar1);
        puVar5[-1] = uVar1;
        *(undefined1 *)(uVar1 + puVar5[-2]) = 0;
      }
      param_1 = param_1 + 0x10;
      puVar5 = puVar5 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


//// FUNCTION FUN_00654c90 @ 00654c90 ////

void __cdecl FUN_00654c90(void *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (void *)0x0) {
      FUN_0064f770(param_1,param_3);
    }
    param_1 = (void *)((int)param_1 + 0xc0);
  }
  return;
}


//// FUNCTION FUN_00654d50 @ 00654d50 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00654d50(void *this,char param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  ulonglong uVar12;
  undefined4 **ppuVar13;
  float *pfVar14;
  undefined4 *puStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  undefined1 auStack_4 [4];
  
  FUN_006546a0((int)this);
  (**(code **)(**(int **)((int)this + 0x480) + 0x14))();
  uVar12 = FUN_00acd42c();
  iVar10 = 0;
  *(int *)((int)this + 0x538) = (int)uVar12;
  bVar2 = false;
  *(undefined4 *)((int)this + 0x53c) = 0;
  iStack_14 = 0;
  piStack_8 = (int *)0x0;
  *(undefined1 *)((int)this + 0x548) = 0;
  piStack_c = (int *)0x0;
  piStack_10 = (int *)FUN_00640a30(*(int *)((int)this + 0x528));
  puVar6 = DAT_0105086c;
  while ((puStack_18 = puVar6, puVar6 != &DAT_01050878 &&
         (*(int *)((int)this + 0x53c) < *(int *)((int)this + 0x538)))) {
    piVar8 = (int *)puVar6[2];
    piStack_c = piVar8;
    cVar3 = FUN_00960f30(piVar8);
    if ((cVar3 != '\0') && (iVar4 = FUN_0095c9e0((int)piVar8), piVar5 = piStack_10, iVar4 != 0)) {
      if (param_1 == '\0') {
        if (!bVar2) {
          if (((int *)piStack_10[6] != (int *)0x0) && (piVar8 != (int *)piStack_10[6])) {
            iVar10 = iVar10 + 1;
            iStack_14 = iVar10;
            goto LAB_00654ebe;
          }
          bVar2 = true;
          *piStack_10 = iVar10;
        }
      }
      else {
        if (iVar10 < *piStack_10) {
          iVar10 = iVar10 + 1;
          iStack_14 = iVar10;
          goto LAB_00654ebe;
        }
        if (*(int *)((int)this + 0x53c) == 0) {
          piVar1 = piStack_10 + 1;
          (**(code **)(piStack_10[1] + 4))();
          puVar6 = (undefined4 *)*piVar1;
          piVar5[6] = (int)piVar8;
          (*(code *)*puVar6)();
          puVar6 = puStack_18;
        }
      }
      piVar5 = FUN_00652d90(this,piVar8,*(int **)((int)this + 0x480),piStack_8,0);
      piVar5[0x159] = *(int *)((int)this + 0x53c);
      FUN_0065dac0(piVar5,this);
      pvVar7 = DAT_0104d9a0;
      if (DAT_0104d9a0 != (void *)0x0) {
        iVar10 = 0;
        puVar6 = (undefined4 *)(**(code **)(*piVar8 + 8))();
        FUN_00648a60(pvVar7,puVar6,iVar10);
        puVar6 = puStack_18;
      }
      *(int *)((int)this + 0x53c) = *(int *)((int)this + 0x53c) + 1;
      iVar10 = iStack_14;
      piStack_8 = piVar5;
    }
LAB_00654ebe:
    puVar6 = (undefined4 *)puVar6[1];
  }
  *(undefined1 *)((int)this + 0x548) = 1;
  if (puVar6 != &DAT_01050878) {
    do {
      puVar6 = puStack_18;
      piVar8 = (int *)puStack_18[2];
      piStack_c = piVar8;
      cVar3 = FUN_00960f30(piVar8);
      if ((cVar3 != '\0') && (iVar10 = FUN_0095c9e0((int)piVar8), iVar10 != 0)) {
        *(undefined1 *)((int)this + 0x548) = 0;
        break;
      }
      puStack_18 = (undefined4 *)puVar6[1];
    } while (puStack_18 != &DAT_01050878);
  }
  if (*(int *)((int)this + 0x53c) < *(int *)((int)this + 0x538)) {
    *(undefined1 *)((int)this + 0x548) = 1;
    iStack_14 = 0;
    puVar6 = DAT_0105086c;
    if (DAT_0105086c != &DAT_01050878) {
      do {
        iVar10 = iStack_14;
        if (*(int *)((int)this + 0x538) + 1 <= *(int *)((int)this + 0x53c)) break;
        pfVar14 = (float *)&DAT_00e4fa4c;
        ppuVar13 = &puStack_18;
        pvVar7 = (void *)(**(code **)(*(int *)puVar6[2] + 0x1c))(auStack_4);
        FUN_0043b620(pvVar7,(float *)ppuVar13,pfVar14);
        fVar11 = FUN_0043b710((float *)&puStack_18);
        if (((fVar11 < (float10)_DAT_0104d9a4) &&
            (fVar11 = FUN_0043b710((float *)&puStack_18), (float10)0.0 < fVar11)) &&
           (iVar4 = FUN_0095c9e0(puVar6[2]), piVar8 = piStack_10, iVar4 != 0)) {
          if (param_1 == '\0') {
            if (!bVar2) {
              if (((int *)piStack_10[6] != (int *)0x0) && (piStack_c != (int *)piStack_10[6])) {
                iStack_14 = iVar10 + 1;
                goto LAB_006550a4;
              }
              bVar2 = true;
              *piStack_10 = iVar10;
            }
          }
          else {
            if (iVar10 < *piStack_10) {
              iStack_14 = iVar10 + 1;
              goto LAB_006550a4;
            }
            if (*(int *)((int)this + 0x53c) == 0) {
              iVar10 = puVar6[2];
              piVar5 = piStack_10 + 1;
              (**(code **)(piStack_10[1] + 4))();
              puVar9 = (undefined4 *)*piVar5;
              piVar8[6] = iVar10;
              (*(code *)*puVar9)();
            }
          }
          iVar10 = *(int *)((int)this + 0x53c);
          if (iVar10 == *(int *)((int)this + 0x538)) {
            *(undefined1 *)((int)this + 0x548) = 0;
          }
          else {
            piVar8 = FUN_00652d90(this,(int *)puVar6[2],*(int **)((int)this + 0x480),piStack_8,0);
            piVar8[0x159] = *(int *)((int)this + 0x53c);
            pvVar7 = DAT_0104d9a0;
            if (DAT_0104d9a0 != (void *)0x0) {
              iVar10 = 0;
              puVar9 = (undefined4 *)(**(code **)(*piStack_c + 8))();
              FUN_00648a60(pvVar7,puVar9,iVar10);
            }
            iVar10 = *(int *)((int)this + 0x53c);
            piStack_8 = piVar8;
          }
          *(int *)((int)this + 0x53c) = iVar10 + 1;
        }
LAB_006550a4:
        puVar6 = (undefined4 *)puVar6[1];
      } while (puVar6 != &DAT_01050878);
    }
    if (*(int *)((int)this + 0x53c) == 0) {
      FUN_00652960();
    }
  }
  do {
    cVar3 = (**(code **)(**(int **)((int)this + 0x480) + 0x50))(1);
  } while (cVar3 != '\0');
  return;
}


//// FUNCTION FUN_006550f0 @ 006550f0 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006550f0(void *this,char param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  ulonglong uVar11;
  undefined4 **ppuVar12;
  float *pfVar13;
  undefined4 *puStack_18;
  int iStack_14;
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  undefined1 auStack_4 [4];
  
  FUN_006546a0((int)this);
  (**(code **)(**(int **)((int)this + 0x480) + 0x14))();
  uVar11 = FUN_00acd42c();
  iVar9 = 0;
  *(int *)((int)this + 0x538) = (int)uVar11;
  *(undefined4 *)((int)this + 0x53c) = 0;
  iStack_14 = 0;
  piStack_c = (int *)0x0;
  *(undefined1 *)((int)this + 0x548) = 0;
  bVar2 = false;
  piStack_10 = (int *)FUN_00640a30(*(int *)((int)this + 0x528));
  puStack_18 = DAT_01050964;
  puVar5 = DAT_01050964;
  if (DAT_01050964 != &DAT_01050970) {
    do {
      puStack_18 = puVar5;
      if (*(int *)((int)this + 0x538) <= *(int *)((int)this + 0x53c)) break;
      piVar7 = (int *)puVar5[2];
      piStack_8 = piVar7;
      cVar3 = FUN_00960f30(piVar7);
      piVar4 = piStack_10;
      if (cVar3 != '\0') {
        if (param_1 == '\0') {
          if (!bVar2) {
            if (((int *)piStack_10[6] != (int *)0x0) && (piVar7 != (int *)piStack_10[6])) {
              iVar9 = iVar9 + 1;
              iStack_14 = iVar9;
              goto LAB_0065524f;
            }
            bVar2 = true;
            *piStack_10 = iVar9;
          }
        }
        else {
          if (iVar9 < *piStack_10) {
            iVar9 = iVar9 + 1;
            iStack_14 = iVar9;
            goto LAB_0065524f;
          }
          if (*(int *)((int)this + 0x53c) == 0) {
            piVar1 = piStack_10 + 1;
            (**(code **)(piStack_10[1] + 4))();
            puVar5 = (undefined4 *)*piVar1;
            piVar4[6] = (int)piVar7;
            (*(code *)*puVar5)();
            puVar5 = puStack_18;
          }
        }
        piVar4 = FUN_00652d90(this,piVar7,*(int **)((int)this + 0x480),piStack_c,1);
        piVar4[0x159] = *(int *)((int)this + 0x53c);
        FUN_0065dac0(piVar4,this);
        pvVar6 = DAT_0104d9a0;
        if (DAT_0104d9a0 != (void *)0x0) {
          iVar9 = 1;
          puVar5 = (undefined4 *)(**(code **)(*piVar7 + 8))();
          FUN_00648a60(pvVar6,puVar5,iVar9);
          puVar5 = puStack_18;
        }
        *(int *)((int)this + 0x53c) = *(int *)((int)this + 0x53c) + 1;
        iVar9 = iStack_14;
        piStack_c = piVar4;
      }
LAB_0065524f:
      puStack_18 = (undefined4 *)puVar5[1];
      puVar5 = puStack_18;
    } while (puStack_18 != &DAT_01050970);
  }
  *(undefined1 *)((int)this + 0x548) = 1;
  if (puStack_18 != &DAT_01050970) {
    do {
      puVar5 = puStack_18;
      piStack_8 = (int *)puStack_18[2];
      cVar3 = FUN_00960f30(piStack_8);
      if (cVar3 != '\0') {
        *(undefined1 *)((int)this + 0x548) = 0;
        break;
      }
      puStack_18 = (undefined4 *)puVar5[1];
    } while (puStack_18 != &DAT_01050970);
  }
  if (*(int *)((int)this + 0x53c) < *(int *)((int)this + 0x538)) {
    *(undefined1 *)((int)this + 0x548) = 1;
    iStack_14 = 0;
    puVar5 = DAT_01050964;
    if (DAT_01050964 != &DAT_01050970) {
      do {
        iVar9 = iStack_14;
        if (*(int *)((int)this + 0x538) + 1 <= *(int *)((int)this + 0x53c)) break;
        pfVar13 = (float *)&DAT_00e4fa4c;
        ppuVar12 = &puStack_18;
        pvVar6 = (void *)(**(code **)(*(int *)puVar5[2] + 0x1c))(auStack_4);
        FUN_0043b620(pvVar6,(float *)ppuVar12,pfVar13);
        fVar10 = FUN_0043b710((float *)&puStack_18);
        if ((fVar10 < (float10)_DAT_0104d9a4) &&
           (fVar10 = FUN_0043b710((float *)&puStack_18), piVar7 = piStack_10, (float10)0.0 < fVar10)
           ) {
          if (param_1 == '\0') {
            if (!bVar2) {
              if (((int *)piStack_10[6] != (int *)0x0) && (piStack_8 != (int *)piStack_10[6])) {
                iStack_14 = iVar9 + 1;
                goto LAB_0065542a;
              }
              bVar2 = true;
              *piStack_10 = iVar9;
            }
          }
          else {
            if (iVar9 < *piStack_10) {
              iStack_14 = iVar9 + 1;
              goto LAB_0065542a;
            }
            if (*(int *)((int)this + 0x53c) == 0) {
              iVar9 = puVar5[2];
              piVar4 = piStack_10 + 1;
              (**(code **)(piStack_10[1] + 4))();
              puVar8 = (undefined4 *)*piVar4;
              piVar7[6] = iVar9;
              (*(code *)*puVar8)();
            }
          }
          iVar9 = *(int *)((int)this + 0x53c);
          if (iVar9 == *(int *)((int)this + 0x538)) {
            *(undefined1 *)((int)this + 0x548) = 0;
          }
          else {
            piVar7 = FUN_00652d90(this,(int *)puVar5[2],*(int **)((int)this + 0x480),piStack_c,1);
            piVar7[0x159] = *(int *)((int)this + 0x53c);
            FUN_0065dac0(piVar7,this);
            pvVar6 = DAT_0104d9a0;
            if (DAT_0104d9a0 != (void *)0x0) {
              iVar9 = 1;
              puVar8 = (undefined4 *)(**(code **)(*piStack_8 + 8))();
              FUN_00648a60(pvVar6,puVar8,iVar9);
            }
            iVar9 = *(int *)((int)this + 0x53c);
            piStack_c = piVar7;
          }
          *(int *)((int)this + 0x53c) = iVar9 + 1;
        }
LAB_0065542a:
        puVar5 = (undefined4 *)puVar5[1];
      } while (puVar5 != &DAT_01050970);
    }
    if (*(int *)((int)this + 0x53c) == 0) {
      FUN_00652960();
    }
  }
  do {
    cVar3 = (**(code **)(**(int **)((int)this + 0x480) + 0x50))(1);
  } while (cVar3 != '\0');
  return;
}


//// FUNCTION FUN_00655470 @ 00655470 ////

void __fastcall FUN_00655470(void *param_1)

{
  int *piVar1;
  void *this;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this_00;
  ulonglong uVar6;
  int iVar7;
  int iStack_c;
  
  FUN_006548a0((int)param_1);
  (**(code **)(**(int **)((int)param_1 + 0x480) + 0x10))();
  uVar6 = FUN_00acd42c();
  this_00 = (int *)0x0;
  *(int *)((int)param_1 + 0x538) = (int)uVar6 + 1;
  *(undefined4 *)((int)param_1 + 0x53c) = 0;
  iStack_c = 0;
  *(undefined1 *)((int)param_1 + 0x548) = 0;
  piVar3 = (int *)FUN_00640a30(*(int *)((int)param_1 + 0x528));
  puVar5 = DAT_010508d4;
  if (DAT_010508d4 != &DAT_010508e0) {
    do {
      if (*(int *)((int)param_1 + 0x538) <= *(int *)((int)param_1 + 0x53c)) break;
      piVar1 = (int *)puVar5[2];
      cVar2 = FUN_00960f30(piVar1);
      if ((cVar2 != '\0') && (piVar1[0x38] == *(int *)((int)param_1 + 0x544))) {
        if (iStack_c < *piVar3) {
          iStack_c = iStack_c + 1;
        }
        else {
          this_00 = FUN_00652d90(param_1,piVar1,*(int **)((int)param_1 + 0x480),this_00,2);
          this_00[0x159] = *(int *)((int)param_1 + 0x53c);
          FUN_0065dac0(this_00,param_1);
          this = DAT_0104d9a0;
          if (DAT_0104d9a0 != (void *)0x0) {
            iVar7 = 2;
            puVar4 = (undefined4 *)(**(code **)(*piVar1 + 8))();
            FUN_00648a60(this,puVar4,iVar7);
          }
          iVar7 = *(int *)((int)param_1 + 0x544);
          if (iVar7 == 1) {
            iVar7 = 0;
LAB_00655588:
            FUN_0064ab30(*(void **)((int)param_1 + 0x528),this_00,iVar7);
          }
          else {
            if (iVar7 == 2) {
              iVar7 = 1;
              goto LAB_00655588;
            }
            if (iVar7 == 3) {
              iVar7 = 2;
              goto LAB_00655588;
            }
          }
          *(int *)((int)param_1 + 0x53c) = *(int *)((int)param_1 + 0x53c) + 1;
        }
      }
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != &DAT_010508e0);
  }
  *(undefined1 *)((int)param_1 + 0x548) = 1;
  if (puVar5 != &DAT_010508e0) {
    do {
      iVar7 = puVar5[2];
      cVar2 = FUN_00960f30(iVar7);
      if ((cVar2 != '\0') && (*(int *)(iVar7 + 0xe0) == *(int *)((int)param_1 + 0x544))) {
        *(undefined1 *)((int)param_1 + 0x548) = 0;
        break;
      }
      puVar5 = (undefined4 *)puVar5[1];
    } while (puVar5 != &DAT_010508e0);
  }
  do {
    cVar2 = (**(code **)(**(int **)((int)param_1 + 0x480) + 0x50))(1);
  } while (cVar2 != '\0');
  return;
}


//// FUNCTION FUN_00655610 @ 00655610 ////

void __fastcall FUN_00655610(void *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  int ****ppppiVar8;
  ulonglong uVar9;
  int iStack_34;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2a29;
  pvStack_c = ExceptionList;
  bVar6 = false;
  ExceptionList = &pvStack_c;
  FUN_006546a0((int)param_1);
  (**(code **)(**(int **)((int)param_1 + 0x480) + 0x14))();
  uVar9 = FUN_00acd42c();
  *(int *)((int)param_1 + 0x538) = (int)uVar9;
  *(undefined4 *)((int)param_1 + 0x53c) = 0;
  *(undefined1 *)((int)param_1 + 0x548) = 0;
  ppppiVar8 = (int ****)0x0;
  iStack_34 = 0;
  puVar4 = DAT_0104ad14;
  if (DAT_0104ad14 != &DAT_0104ad20) {
    do {
      if (*(int *)((int)param_1 + 0x538) <= *(int *)((int)param_1 + 0x53c)) break;
      if (iStack_34 < *(int *)((int)param_1 + 0x534)) {
        iStack_34 = iStack_34 + 1;
      }
      else {
        ppppiVar8 = FUN_006538c0((int *)puVar4[2],*(int *)((int)param_1 + 0x480));
        ppppiVar8[0x159] = *(int ****)((int)param_1 + 0x53c);
        *(int *)((int)param_1 + 0x53c) = *(int *)((int)param_1 + 0x53c) + 1;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != &DAT_0104ad20);
  }
  *(undefined1 *)((int)param_1 + 0x548) = 1;
  puVar7 = DAT_01050964;
  if (puVar4 != &DAT_0104ad20) {
    do {
      if (puVar4[2] != 0) {
        *(undefined1 *)((int)param_1 + 0x548) = 0;
        puVar7 = DAT_01050964;
        break;
      }
      puVar4 = (undefined4 *)puVar4[1];
    } while (puVar4 != &DAT_0104ad20);
  }
  do {
    if ((puVar7 == &DAT_01050970) ||
       (*(int *)((int)param_1 + 0x538) <= *(int *)((int)param_1 + 0x53c))) break;
    piVar1 = (int *)puVar7[2];
    cVar3 = FUN_00960f30(piVar1);
    if (cVar3 == '\0') {
LAB_0065576d:
      bVar2 = true;
    }
    else {
      puVar4 = (undefined4 *)(**(code **)(*piVar1 + 8))();
      puVar4 = FUN_0040d6b0(apvStack_2c,"set/",puVar4);
      bVar6 = true;
      uStack_4 = 0;
      iVar5 = FUN_00650630(puVar4);
      bVar2 = false;
      if (0 < iVar5) goto LAB_0065576d;
    }
    uStack_4 = 0xffffffff;
    if ((bVar6) && (bVar6 = false, 0x14 < uStack_24)) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (!bVar2) {
      if (iStack_34 < *(int *)((int)param_1 + 0x534)) {
        iStack_34 = iStack_34 + 1;
      }
      else {
        ppppiVar8 = (int ****)
                    FUN_00652d90(param_1,piVar1,*(int **)((int)param_1 + 0x480),ppppiVar8,3);
        ppppiVar8[0x159] = *(int ****)((int)param_1 + 0x53c);
        *(int *)((int)param_1 + 0x53c) = *(int *)((int)param_1 + 0x53c) + 1;
      }
    }
    puVar7 = (undefined4 *)puVar7[1];
  } while( true );
  *(undefined1 *)((int)param_1 + 0x548) = 1;
  if (puVar7 != &DAT_01050970) {
    do {
      cVar3 = FUN_00960f30(puVar7[2]);
      if (cVar3 != '\0') {
        *(undefined1 *)((int)param_1 + 0x548) = 0;
        break;
      }
      puVar7 = (undefined4 *)puVar7[1];
    } while (puVar7 != &DAT_01050970);
  }
  do {
    cVar3 = (**(code **)(**(int **)((int)param_1 + 0x480) + 0x50))(1);
  } while (cVar3 != '\0');
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_00655850 @ 00655850 ////

void __fastcall FUN_00655850(int param_1)

{
  int iVar1;
  char cVar2;
  int *this;
  undefined4 *puVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iStack_54;
  int iStack_50;
  void *apvStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2a50;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006546a0(param_1);
  (**(code **)(**(int **)(param_1 + 0x480) + 0x14))();
  uVar5 = FUN_00acd42c();
  *(int *)(param_1 + 0x538) = (int)uVar5;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  *(undefined1 *)(param_1 + 0x548) = 0;
  iStack_50 = **(int **)(param_1 + 0x374);
  iStack_54 = 0;
  if ((int *)iStack_50 != *(int **)(param_1 + 0x374)) {
    do {
      iVar1 = iStack_50;
      if (*(int *)(param_1 + 0x538) <= *(int *)(param_1 + 0x53c)) break;
      if (iStack_54 < *(int *)(param_1 + 0x534)) {
        iStack_54 = iStack_54 + 1;
      }
      else {
        this = FUN_00653f70(*(int *)(iStack_50 + 0x2c),*(undefined4 *)(param_1 + 0x480));
        this[0x159] = *(int *)(param_1 + 0x53c);
        puVar3 = FUN_009f4620(apvStack_2c,*(int *)(iVar1 + 0x2c));
        uStack_4 = 0;
        puVar3 = FUN_0040d6b0(apvStack_4c,"data\\textures\\backdrops\\",puVar3);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        pcVar4 = (char *)FUN_009d38d0(puVar3);
        FUN_0065db00(this,pcVar4);
        if (0x14 < uStack_44) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_4c[0]);
        }
        uStack_4 = 0xffffffff;
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        *(int *)(param_1 + 0x53c) = *(int *)(param_1 + 0x53c) + 1;
      }
      FUN_0064f4e0(&iStack_50);
    } while (iStack_50 != *(int *)(param_1 + 0x374));
  }
  *(undefined1 *)(param_1 + 0x548) = 1;
  if (iStack_50 != *(int *)(param_1 + 0x374)) {
    *(undefined1 *)(param_1 + 0x548) = 0;
  }
  do {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x480) + 0x50))(1);
  } while (cVar2 != '\0');
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006559e0 @ 006559e0 ////

void __fastcall FUN_006559e0(void *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  void *pvStack_4;
  
  pvStack_4 = param_1;
  FUN_006546a0((int)param_1);
  (**(code **)(**(int **)((int)param_1 + 0x480) + 0x14))();
  uVar4 = FUN_00acd42c();
  *(int *)((int)param_1 + 0x538) = (int)uVar4;
  *(undefined4 *)((int)param_1 + 0x53c) = 0;
  *(undefined1 *)((int)param_1 + 0x548) = 0;
  pvStack_4 = (void *)**(int **)((int)param_1 + 0x350);
  iVar2 = 0;
  piVar3 = (int *)0x0;
  if (pvStack_4 != *(int **)((int)param_1 + 0x350)) {
    do {
      if (*(int *)((int)param_1 + 0x538) <= *(int *)((int)param_1 + 0x53c)) break;
      if (iVar2 < *(int *)((int)param_1 + 0x534)) {
        iVar2 = iVar2 + 1;
      }
      else {
        piVar3 = FUN_00651e40(param_1,(undefined4 *)((int)pvStack_4 + 0x2c),(int)pvStack_4 + 0xc,
                              *(int **)((int)param_1 + 0x480),(int)piVar3);
        piVar3[0x159] = *(int *)((int)param_1 + 0x53c);
        *(int *)((int)param_1 + 0x53c) = *(int *)((int)param_1 + 0x53c) + 1;
      }
      FUN_0064f540((int *)&pvStack_4);
    } while (pvStack_4 != *(void **)((int)param_1 + 0x350));
  }
  *(undefined1 *)((int)param_1 + 0x548) = 1;
  if (pvStack_4 != *(void **)((int)param_1 + 0x350)) {
    *(undefined1 *)((int)param_1 + 0x548) = 0;
  }
  do {
    cVar1 = (**(code **)(**(int **)((int)param_1 + 0x480) + 0x50))(1);
  } while (cVar1 != '\0');
  return;
}


//// FUNCTION FUN_00655ac0 @ 00655ac0 ////

void FUN_00655ac0(void *param_1)

{
  if (*(char *)((int)param_1 + 0x4d) == '\0') {
    FUN_00655ac0(*(void **)((int)param_1 + 8));
    FUN_0064fbe0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00655b00 @ 00655b00 ////

void FUN_00655b00(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00655b00(*(void **)((int)param_1 + 8));
    FUN_0064fc10((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00655b40 @ 00655b40 ////

void FUN_00655b40(void *param_1)

{
  if (*(char *)((int)param_1 + 0x4d) == '\0') {
    FUN_00655b40(*(void **)((int)param_1 + 8));
    FUN_0064fc30((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00655c80 @ 00655c80 ////

void __fastcall FUN_00655c80(int param_1)

{
  FUN_00655ac0(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00655cb0 @ 00655cb0 ////

void __fastcall FUN_00655cb0(int param_1)

{
  FUN_00655b00(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00655ce0 @ 00655ce0 ////

void __thiscall
FUN_00655ce0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc2a68;
  local_c = ExceptionList;
  if (0x3fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_006525e0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x4c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x4c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x13] == '\0') {
LAB_00655ddb:
        *(undefined1 *)(*piVar4 + 0x4c) = 1;
        *(undefined1 *)(piVar5 + 0x13) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x4c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0064f2d0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x4c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x4c) = 0;
        FUN_0064f330(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x13] == '\0') goto LAB_00655ddb;
      if (piVar6 == (int *)*piVar2) {
        FUN_0064f330(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x4c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x4c) = 0;
      FUN_0064f2d0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x4c);
  } while( true );
}


//// FUNCTION FUN_00655e90 @ 00655e90 ////

void __thiscall
FUN_00655e90(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc2a88;
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
  piVar3 = FUN_00652670(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_00655f8b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0064f3b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_0064f410(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_00655f8b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0064f410(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_0064f3b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00656040 @ 00656040 ////

void FUN_00656040(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_0064e5e0(param_1);
  }
  return;
}


//// FUNCTION FUN_00656070 @ 00656070 ////

void __fastcall FUN_00656070(int param_1)

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
    FUN_0064e5e0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_006560c0 @ 006560c0 ////

int * FUN_006560c0(int *param_1,int param_2,undefined4 *param_3)

{
  FUN_00654b90(param_1,param_2,param_3);
  return param_1 + param_2 * 0x10;
}


//// FUNCTION FUN_006560f0 @ 006560f0 ////

void * FUN_006560f0(void *param_1,int param_2,undefined4 *param_3)

{
  FUN_00654c90(param_1,param_2,param_3);
  return (void *)(param_2 * 0xc0 + (int)param_1);
}


//// FUNCTION FUN_00656120 @ 00656120 ////

void __thiscall
FUN_00656120(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc2aa8;
  local_c = ExceptionList;
  if (0x3fffffd < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_006526f0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x4c);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x4c) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[0x13] == '\0') {
LAB_0065621b:
        *(undefined1 *)(*piVar4 + 0x4c) = 1;
        *(undefined1 *)(piVar5 + 0x13) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x4c) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0064f5b0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x4c) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x4c) = 0;
        FUN_0064f610(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0x13] == '\0') goto LAB_0065621b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0064f610(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x4c) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x4c) = 0;
      FUN_0064f5b0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x4c);
  } while( true );
}


//// FUNCTION FUN_006562d0 @ 006562d0 ////

void FUN_006562d0(void)

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
  puStack_8 = &LAB_00cc2ac8;
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


//// FUNCTION FUN_00656340 @ 00656340 ////

void FUN_00656340(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_0064e770(param_1);
  }
  return;
}


//// FUNCTION FUN_00656370 @ 00656370 ////

void FUN_00656370(void)

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
  puStack_8 = &LAB_00cc2ae8;
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


//// FUNCTION FUN_006563e0 @ 006563e0 ////

void __thiscall FUN_006563e0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc2b08;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x4d) != '\0') {
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
  FUN_0064f540((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x4d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x4d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x4d) == '\0') {
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
      iVar1 = param_2[0x13];
      *(char *)(param_2 + 0x13) = (char)_Memory[0x13];
      *(char *)(_Memory + 0x13) = (char)iVar1;
      goto LAB_0065654f;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x4d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x4d) == '\0') {
      piVar2 = (int *)FUN_0064e240(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x4d) == '\0') {
      uVar3 = FUN_0064e340((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_0065654f:
  if ((char)_Memory[0x13] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x13] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x13] == '\0') {
            *(undefined1 *)(piVar4 + 0x13) = 1;
            *(undefined1 *)(piVar5 + 0x13) = 0;
            FUN_0064f2d0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x4d) == '\0') {
            if ((*(char *)(*piVar4 + 0x4c) != '\x01') || (*(char *)(piVar4[2] + 0x4c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x4c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x4c) = 1;
                *(undefined1 *)(piVar4 + 0x13) = 0;
                FUN_0064f330(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x13) = (char)piVar5[0x13];
              *(undefined1 *)(piVar5 + 0x13) = 1;
              *(undefined1 *)(piVar4[2] + 0x4c) = 1;
              FUN_0064f2d0(this,(int)piVar5);
              break;
            }
LAB_00656618:
            *(undefined1 *)(piVar4 + 0x13) = 0;
          }
        }
        else {
          if ((char)piVar4[0x13] == '\0') {
            *(undefined1 *)(piVar4 + 0x13) = 1;
            *(undefined1 *)(piVar5 + 0x13) = 0;
            FUN_0064f330(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x4d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x4c) == '\x01') && (*(char *)(*piVar4 + 0x4c) == '\x01'))
            goto LAB_00656618;
            if (*(char *)(*piVar4 + 0x4c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x4c) = 1;
              *(undefined1 *)(piVar4 + 0x13) = 0;
              FUN_0064f2d0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x13) = (char)piVar5[0x13];
            *(undefined1 *)(piVar5 + 0x13) = 1;
            *(undefined1 *)(*piVar4 + 0x4c) = 1;
            FUN_0064f330(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x13) = 1;
  }
  if (0x14 < (uint)_Memory[0xd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)_Memory[0xb]);
  }
  if ((uint)_Memory[5] < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_006566c0 @ 006566c0 ////

void __thiscall FUN_006566c0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc2b28;
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
  FUN_0064f4e0((int *)&param_2);
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
      goto LAB_00656831;
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
      piVar2 = (int *)FUN_0064e270(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_0064e360((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00656831:
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
            FUN_0064f3b0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_0064f410(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_0064f3b0(this,(int)piVar5);
              break;
            }
LAB_006568f4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_0064f410(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_006568f4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_0064f3b0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_0064f410(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0xc) = 1;
  }
  if ((uint)_Memory[5] < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_00656990 @ 00656990 ////

void __thiscall FUN_00656990(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc2b48;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x4d) != '\0') {
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
  FUN_00568590((int *)&param_2);
  piVar4 = (int *)*_Memory;
  if (*(char *)((int)piVar4 + 0x4d) == '\0') {
    piVar6 = piVar4;
    if ((*(char *)(_Memory[2] + 0x4d) == '\0') && (piVar6 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar4[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar4 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar4 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0x4d) == '\0') {
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
      iVar1 = param_2[0x13];
      *(char *)(param_2 + 0x13) = (char)_Memory[0x13];
      *(char *)(_Memory + 0x13) = (char)iVar1;
      goto LAB_00656aff;
    }
  }
  else {
    piVar6 = (int *)_Memory[2];
  }
  piVar4 = (int *)_Memory[1];
  if (*(char *)((int)piVar6 + 0x4d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x4d) == '\0') {
      piVar2 = (int *)FUN_00567be0(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x4d) == '\0') {
      uVar3 = FUN_0064e380((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00656aff:
  if ((char)_Memory[0x13] == '\x01') {
    if (piVar6 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar5 = piVar4;
        if ((char)piVar6[0x13] != '\x01') break;
        piVar4 = (int *)*piVar5;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar5[2];
          if ((char)piVar4[0x13] == '\0') {
            *(undefined1 *)(piVar4 + 0x13) = 1;
            *(undefined1 *)(piVar5 + 0x13) = 0;
            FUN_0064f5b0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x4d) == '\0') {
            if ((*(char *)(*piVar4 + 0x4c) != '\x01') || (*(char *)(piVar4[2] + 0x4c) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x4c) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x4c) = 1;
                *(undefined1 *)(piVar4 + 0x13) = 0;
                FUN_0064f610(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0x13) = (char)piVar5[0x13];
              *(undefined1 *)(piVar5 + 0x13) = 1;
              *(undefined1 *)(piVar4[2] + 0x4c) = 1;
              FUN_0064f5b0(this,(int)piVar5);
              break;
            }
LAB_00656bc8:
            *(undefined1 *)(piVar4 + 0x13) = 0;
          }
        }
        else {
          if ((char)piVar4[0x13] == '\0') {
            *(undefined1 *)(piVar4 + 0x13) = 1;
            *(undefined1 *)(piVar5 + 0x13) = 0;
            FUN_0064f610(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x4d) == '\0') {
            if ((*(char *)(piVar4[2] + 0x4c) == '\x01') && (*(char *)(*piVar4 + 0x4c) == '\x01'))
            goto LAB_00656bc8;
            if (*(char *)(*piVar4 + 0x4c) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x4c) = 1;
              *(undefined1 *)(piVar4 + 0x13) = 0;
              FUN_0064f5b0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0x13) = (char)piVar5[0x13];
            *(undefined1 *)(piVar5 + 0x13) = 1;
            *(undefined1 *)(*piVar4 + 0x4c) = 1;
            FUN_0064f610(this,piVar5);
            break;
          }
        }
        piVar4 = (int *)piVar5[1];
        piVar6 = piVar5;
      } while (piVar5 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 0x13) = 1;
  }
  if (10 < (uint)_Memory[0xd]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)_Memory[0xb]);
  }
  if ((uint)_Memory[5] < 0xb) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)_Memory[3]);
}


//// FUNCTION FUN_00656c80 @ 00656c80 ////

void __fastcall FUN_00656c80(int param_1)

{
  FUN_00655b40(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00656cb0 @ 00656cb0 ////

void __thiscall FUN_00656cb0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x4d);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = _wcscmp((wchar_t *)*puVar3,(wchar_t *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x4d);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_00656d16;
    }
    FUN_0064f8f0((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = _wcscmp((wchar_t *)param_2[3],(wchar_t *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00656d16:
  puVar5 = (undefined4 *)FUN_00655ce0(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00656d70 @ 00656d70 ////

void __thiscall FUN_00656d70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x31);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = _wcscmp((wchar_t *)*puVar3,(wchar_t *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x31);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_00656dd6;
    }
    FUN_0064f890((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = _wcscmp((wchar_t *)param_2[3],(wchar_t *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00656dd6:
  puVar5 = (undefined4 *)FUN_00655e90(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00656e30 @ 00656e30 ////

void __fastcall FUN_00656e30(int param_1)

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
    FUN_0064e5e0(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00656e40 @ 00656e40 ////

void __fastcall FUN_00656e40(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar1 = *(undefined4 **)(param_1 + 8), (int)puVar1 - *(int *)(param_1 + 4) >> 6 != 0)) {
    for (puVar2 = puVar1 + -0x10; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
      FUN_0064e5e0(puVar2);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x40;
  }
  return;
}


//// FUNCTION FUN_00656e80 @ 00656e80 ////

void __thiscall FUN_00656e80(void *this,undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool local_4;
  
  puVar3 = param_2;
  puVar5 = (undefined4 *)(*(undefined4 **)((int)this + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x4d);
  local_4 = true;
  puVar2 = *(undefined4 **)((int)this + 4);
  while (cVar1 == '\0') {
    iVar4 = _wcscmp((wchar_t *)*puVar3,(wchar_t *)puVar5[3]);
    local_4 = iVar4 < 0;
    if (local_4) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x4d);
  }
  param_2 = puVar2;
  if (local_4) {
    if (puVar2 == (undefined4 *)**(int **)((int)this + 4)) {
      local_4 = true;
      goto LAB_00656ee6;
    }
    FUN_0064f970((int *)&param_2);
  }
  puVar5 = param_2;
  iVar4 = _wcscmp((wchar_t *)param_2[3],(wchar_t *)*puVar3);
  if (-1 < iVar4) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00656ee6:
  puVar5 = (undefined4 *)FUN_00656120(this,&param_2,local_4,puVar2,puVar3);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


//// FUNCTION FUN_00656fe0 @ 00656fe0 ////

void __fastcall FUN_00656fe0(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x30) {
    FUN_0064e770(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00657030 @ 00657030 ////

void __thiscall FUN_00657030(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00655ac0((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x4d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x4d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x4d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x4d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x4d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x4d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_006563e0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_006570f0 @ 006570f0 ////

void __thiscall FUN_006570f0(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00655b00((void *)piVar6[1]);
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
    FUN_006566c0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_006571b0 @ 006571b0 ////

void __thiscall FUN_006571b0(void *this,int *param_1,uint param_2,undefined4 *param_3)

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
  puStack_c = &LAB_00cc2b68;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0064f710(local_5c,param_3);
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
      uVar8 = FUN_006562d0();
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
      piVar6 = FUN_00652820(*(undefined4 **)((int)this + 4),param_1,piVar5);
      FUN_00654b90(piVar6,param_2,local_5c);
      FUN_00652820(param_1,*(undefined4 **)((int)this + 8),piVar6 + param_2 * 0x10);
      puVar1 = *(undefined4 **)((int)this + 4);
      if (puVar1 == (undefined4 *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)puVar1 >> 6;
      }
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00656040(puVar1,*(undefined4 **)((int)this + 8));
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
        FUN_00652820(param_1,local_1c,param_1 + param_2 * 0x10);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006560c0(*(int **)((int)this + 8),
                     param_2 - ((int)*(int **)((int)this + 8) - (int)param_1 >> 6),local_5c);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x40;
        *(int *)((int)this + 8) = iVar4;
        FUN_00651670(param_1,(int *)(iVar4 + param_2 * -0x40),local_5c);
      }
      else {
        piVar6 = local_1c + param_2 * -0x10;
        piVar5 = FUN_00652820(piVar6,local_1c,local_1c);
        *(int **)((int)this + 8) = piVar5;
        FUN_00651810((int)param_1,(int)piVar6,local_1c);
        FUN_00651670(param_1,param_1 + param_2 * 0x10,local_5c);
      }
    }
  }
  if (0x14 < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_3c);
  }
  if (10 < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c[0]);
  }
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00657450 @ 00657450 ////

void __thiscall FUN_00657450(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  uint extraout_ECX;
  undefined4 local_dc [48];
  void *local_1c;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00cc2b8b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff18;
  ExceptionList = &local_10;
  local_18 = this;
  FUN_0064f770(local_dc,param_3);
  iVar3 = *(int *)((int)this + 4);
  uVar6 = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    uVar6 = (*(int *)((int)this + 0xc) - iVar3) / 0xc0;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc0;
    }
    if (0x1555555U - iVar2 < param_2) {
      FUN_00656370();
      uVar6 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)((int)this + 8) - iVar3) / 0xc0;
    }
    if (uVar6 < iVar2 + param_2) {
      if (0x1555555 - (uVar6 >> 1) < uVar6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar6 + (uVar6 >> 1);
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)((int)this + 8) - iVar3) / 0xc0;
      }
      if (uVar6 < iVar3 + param_2) {
        iVar3 = FUN_0064de20((int)this);
        uVar6 = iVar3 + param_2;
      }
      pvVar4 = operator_new(uVar6 * 0xc0);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_1c = pvVar4;
      pvVar5 = FUN_00652920(*(undefined4 **)((int)this + 4),param_1,pvVar4);
      FUN_00654c90(pvVar5,param_2,local_dc);
      FUN_00652920(param_1,*(undefined4 **)((int)this + 8),(void *)((int)pvVar5 + param_2 * 0xc0));
      iVar3 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar3 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc0;
      }
      if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
        FUN_00656340(*(undefined4 **)((int)this + 4),*(undefined4 **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
        _free(*(void **)((int)this + 4));
      }
      *(void **)((int)this + 0xc) = (void *)(uVar6 * 0xc0 + (int)pvVar4);
      *(void **)((int)this + 8) = (void *)((param_2 + iVar3) * 0xc0 + (int)pvVar4);
      *(void **)((int)this + 4) = pvVar4;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar1 - (int)param_1) / 0xc0) < param_2) {
        FUN_00652920(param_1,puVar1,param_1 + param_2 * 0x30);
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_006560f0(*(void **)((int)this + 8),
                     param_2 - ((int)*(void **)((int)this + 8) - (int)param_1) / 0xc0,local_dc);
        iVar3 = *(int *)((int)this + 8) + param_2 * 0xc0;
        *(int *)((int)this + 8) = iVar3;
        FUN_00651760(param_1,(void *)(iVar3 + param_2 * -0xc0),local_dc);
      }
      else {
        pvVar4 = FUN_00652920(puVar1 + param_2 * -0x30,puVar1,puVar1);
        *(void **)((int)this + 8) = pvVar4;
        FUN_0064fc60(param_1,puVar1 + param_2 * -0x30,puVar1);
        FUN_00651760(param_1,param_1 + param_2 * 0x30,local_dc);
      }
    }
  }
  FUN_0064e770(local_dc);
  ExceptionList = local_10;
  return;
}


//// FUNCTION FUN_00657760 @ 00657760 ////

void __thiscall FUN_00657760(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00655b40((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x4d) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x4d) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x4d);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x4d);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x4d);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x4d);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_00656990(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00657840 @ 00657840 ////

void __fastcall FUN_00657840(int param_1)

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
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x30) {
    FUN_0064e770(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}


//// FUNCTION FUN_00657910 @ 00657910 ////

void __thiscall FUN_00657910(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0xc0 != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0xc0;
      goto LAB_00657955;
    }
  }
  iVar1 = 0;
LAB_00657955:
  FUN_00657450(this,param_2,1,param_3);
  *param_1 = iVar1 * 0xc0 + *(int *)((int)this + 4);
  return;
}


//// FUNCTION FUN_00657a10 @ 00657a10 ////

void __thiscall FUN_00657a10(void *this,undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 6) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 6))
     ) {
    piVar2 = *(int **)((int)this + 8);
    FUN_00654b90(piVar2,1,param_1);
    *(int **)((int)this + 8) = piVar2 + 0x10;
    return;
  }
  FUN_006571b0(this,*(int **)((int)this + 8),1,param_1);
  return;
}


//// FUNCTION FUN_00657a80 @ 00657a80 ////

void __thiscall FUN_00657a80(void *this,undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)((*(int *)((int)this + 8) - iVar1) / 0xc0) <
      (uint)((*(int *)((int)this + 0xc) - iVar1) / 0xc0))) {
    pvVar2 = *(void **)((int)this + 8);
    FUN_00654c90(pvVar2,1,param_1);
    *(int *)((int)this + 8) = (int)pvVar2 + 0xc0;
    return;
  }
  FUN_00657910(this,(int *)&param_1,*(undefined4 **)((int)this + 8),param_1);
  return;
}


//// FUNCTION FUN_00657b40 @ 00657b40 ////

void __fastcall FUN_00657b40(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00657030(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00657b70 @ 00657b70 ////

void __fastcall FUN_00657b70(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_006570f0(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_00657ba0 @ 00657ba0 ////

void __fastcall FUN_00657ba0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc2cc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d33f34;
  param_1[0x14] = &PTR_FUN_00d33f1c;
  local_4 = 0x14;
  if (DAT_0104d8e8 != 0) {
    if (param_1[0xd2] == 2) {
      *(undefined4 *)(DAT_0104d8e8 + 0x380) = param_1[0x14d];
    }
    else if (param_1[0xd2] == 4) {
      *(undefined4 *)(DAT_0104d8e8 + 900) = param_1[0x14d];
    }
  }
  if (DAT_0104dff8 != 0) {
    *(undefined4 *)(DAT_0104dff8 + 0x344) = param_1[0x14d];
  }
  FUN_0064e610((int)param_1);
  puVar2 = (undefined4 *)param_1[0xfc];
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0xf7] + 4))();
    param_1[0xfc] = 0;
    (**(code **)param_1[0xf7])();
  }
  param_1[0x145] = &PTR_FUN_00d33844;
  if ((undefined4 *)param_1[0x147] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(undefined4 *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x14a] = 0;
  if ((undefined4 *)param_1[0x147] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x147] = param_1[0x146];
  }
  if (param_1[0x146] != 0) {
    *(undefined4 *)(param_1[0x146] + 4) = param_1[0x147];
  }
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x13f] = &PTR_FUN_00d31654;
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
  param_1[0x139] = &PTR_FUN_00d31654;
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
  param_1[0x133] = &PTR_LAB_00d31644;
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
  param_1[0x12d] = &PTR_FUN_00d172a0;
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
  param_1[0x127] = &PTR_FUN_00d172a0;
  if ((undefined4 *)param_1[0x129] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x129] = param_1[0x128];
  }
  if (param_1[0x128] != 0) {
    *(undefined4 *)(param_1[0x128] + 4) = param_1[0x129];
  }
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[300] = 0;
  if ((undefined4 *)param_1[0x129] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x129] = param_1[0x128];
  }
  if (param_1[0x128] != 0) {
    *(undefined4 *)(param_1[0x128] + 4) = param_1[0x129];
  }
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x121] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x123] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x123] = param_1[0x122];
  }
  if (param_1[0x122] != 0) {
    *(undefined4 *)(param_1[0x122] + 4) = param_1[0x123];
  }
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x126] = 0;
  if ((undefined4 *)param_1[0x123] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x123] = param_1[0x122];
  }
  if (param_1[0x122] != 0) {
    *(undefined4 *)(param_1[0x122] + 4) = param_1[0x123];
  }
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x11b] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x11d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11d] = param_1[0x11c];
  }
  if (param_1[0x11c] != 0) {
    *(undefined4 *)(param_1[0x11c] + 4) = param_1[0x11d];
  }
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x120] = 0;
  if ((undefined4 *)param_1[0x11d] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x11d] = param_1[0x11c];
  }
  if (param_1[0x11c] != 0) {
    *(undefined4 *)(param_1[0x11c] + 4) = param_1[0x11d];
  }
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x115] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x117] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x117] = param_1[0x116];
  }
  if (param_1[0x116] != 0) {
    *(undefined4 *)(param_1[0x116] + 4) = param_1[0x117];
  }
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x11a] = 0;
  if ((undefined4 *)param_1[0x117] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x117] = param_1[0x116];
  }
  if (param_1[0x116] != 0) {
    *(undefined4 *)(param_1[0x116] + 4) = param_1[0x117];
  }
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x10f] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x111] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x111] = param_1[0x110];
  }
  if (param_1[0x110] != 0) {
    *(undefined4 *)(param_1[0x110] + 4) = param_1[0x111];
  }
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x114] = 0;
  if ((undefined4 *)param_1[0x111] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x111] = param_1[0x110];
  }
  if (param_1[0x110] != 0) {
    *(undefined4 *)(param_1[0x110] + 4) = param_1[0x111];
  }
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x109] = &PTR_FUN_00d195f8;
  if ((undefined4 *)param_1[0x10b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10b] = param_1[0x10a];
  }
  if (param_1[0x10a] != 0) {
    *(undefined4 *)(param_1[0x10a] + 4) = param_1[0x10b];
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10e] = 0;
  if ((undefined4 *)param_1[0x10b] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x10b] = param_1[0x10a];
  }
  if (param_1[0x10a] != 0) {
    *(undefined4 *)(param_1[0x10a] + 4) = param_1[0x10b];
  }
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x103] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  if ((undefined4 *)param_1[0x105] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x105] = param_1[0x104];
  }
  if (param_1[0x104] != 0) {
    *(undefined4 *)(param_1[0x104] + 4) = param_1[0x105];
  }
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0xfd] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  if ((undefined4 *)param_1[0xff] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xff] = param_1[0xfe];
  }
  if (param_1[0xfe] != 0) {
    *(undefined4 *)(param_1[0xfe] + 4) = param_1[0xff];
  }
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0xf7] = &PTR_FUN_00d18c2c;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  if ((undefined4 *)param_1[0xf9] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0xf9] = param_1[0xf8];
  }
  if (param_1[0xf8] != 0) {
    *(undefined4 *)(param_1[0xf8] + 4) = param_1[0xf9];
  }
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  FUN_00656fe0((int)(param_1 + 0xf3));
  FUN_00656070((int)(param_1 + 0xef));
  if (0x14 < (uint)param_1[0xe9]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xe7]);
  }
  if (10 < (uint)param_1[0xe1]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0xdf]);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_006570f0(param_1 + 0xdc,&uStack_10,*(int **)param_1[0xdd],(int *)param_1[0xdd]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0xdd]);
}


//// FUNCTION FUN_006583c0 @ 006583c0 ////

void __fastcall FUN_006583c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00657760(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_006583f0 @ 006583f0 ////

int __fastcall FUN_006583f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514a0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00658420 @ 00658420 ////

int __fastcall FUN_00658420(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006514f0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00658450 @ 00658450 ////

int __fastcall FUN_00658450(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00651540();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x4d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00658480 @ 00658480 ////

undefined4 * __fastcall FUN_00658480(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2df0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007432f0(param_1);
  local_4 = 0;
  *param_1 = &PTR_FUN_00d33f34;
  param_1[0x14] = &PTR_FUN_00d33f1c;
  param_1[0xd2] = 8;
  iVar3 = FUN_006514a0();
  param_1[0xd4] = iVar3;
  *(undefined1 *)(iVar3 + 0x4d) = 1;
  *(undefined4 *)(param_1[0xd4] + 4) = param_1[0xd4];
  *(undefined4 *)param_1[0xd4] = param_1[0xd4];
  *(undefined4 *)(param_1[0xd4] + 8) = param_1[0xd4];
  param_1[0xd5] = 0;
  param_1[0xd9] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = param_1 + 0xd6;
  param_1[0xd6] = &PTR_LAB_00d33bfc;
  param_1[0xdb] = 0;
  local_4._0_1_ = 2;
  iVar3 = FUN_006514f0();
  param_1[0xdd] = iVar3;
  *(undefined1 *)(iVar3 + 0x31) = 1;
  *(undefined4 *)(param_1[0xdd] + 4) = param_1[0xdd];
  *(undefined4 *)param_1[0xdd] = param_1[0xdd];
  *(undefined4 *)(param_1[0xdd] + 8) = param_1[0xdd];
  param_1[0xde] = 0;
  param_1[0xdf] = param_1 + 0xe2;
  *(undefined2 *)(param_1 + 0xe2) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 10;
  param_1[0xe7] = param_1 + 0xea;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0x14;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  piVar1 = param_1 + 0xf7;
  param_1[0xfa] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = piVar1;
  *piVar1 = (int)&PTR_FUN_00d18c2c;
  param_1[0xfc] = 0;
  param_1[0x100] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = param_1 + 0xfd;
  param_1[0xfd] = &PTR_FUN_00d18c2c;
  param_1[0x102] = 0;
  param_1[0x106] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = param_1 + 0x103;
  param_1[0x103] = &PTR_FUN_00d18c2c;
  param_1[0x108] = 0;
  param_1[0x10c] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = param_1 + 0x109;
  param_1[0x109] = &PTR_FUN_00d195f8;
  param_1[0x10e] = 0;
  param_1[0x112] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = param_1 + 0x10f;
  param_1[0x10f] = &PTR_FUN_00d18c2c;
  param_1[0x114] = 0;
  param_1[0x118] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = param_1 + 0x115;
  param_1[0x115] = &PTR_FUN_00d18c2c;
  param_1[0x11a] = 0;
  param_1[0x11e] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = param_1 + 0x11b;
  param_1[0x11b] = &PTR_FUN_00d18c2c;
  param_1[0x120] = 0;
  param_1[0x124] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = param_1 + 0x121;
  param_1[0x121] = &PTR_FUN_00d18c2c;
  param_1[0x126] = 0;
  param_1[0x12a] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = param_1 + 0x127;
  param_1[0x127] = &PTR_FUN_00d172a0;
  param_1[300] = 0;
  param_1[0x130] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = param_1 + 0x12d;
  param_1[0x12d] = &PTR_FUN_00d172a0;
  param_1[0x132] = 0;
  param_1[0x136] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = param_1 + 0x133;
  param_1[0x133] = &PTR_LAB_00d31644;
  param_1[0x138] = 0;
  param_1[0x13c] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = param_1 + 0x139;
  param_1[0x139] = &PTR_FUN_00d31654;
  param_1[0x13e] = 0;
  param_1[0x142] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = param_1 + 0x13f;
  param_1[0x13f] = &PTR_FUN_00d31654;
  param_1[0x144] = 0;
  piVar2 = param_1 + 0x145;
  param_1[0x148] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = piVar2;
  *piVar2 = (int)&PTR_FUN_00d33844;
  param_1[0x14a] = 0;
  local_4 = CONCAT31(local_4._1_3_,0x14);
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)((int)param_1 + 0x549) = 1;
  piVar4 = FUN_0071b400();
  (**(code **)(*piVar1 + 4))();
  param_1[0xfc] = piVar4;
  (**(code **)*piVar1)();
  uVar5 = FUN_00642110();
  (**(code **)(*piVar2 + 4))();
  param_1[0x14a] = uVar5;
  (**(code **)*piVar2)();
  param_1[0xd1] = DAT_00e566c8;
  DAT_00e566c8 = DAT_00e566c8 + 1;
  ExceptionList = local_c;
  return param_1;
}


//// FUNCTION FUN_006587a0 @ 006587a0 ////

undefined4 * __thiscall FUN_006587a0(void *this,byte param_1)

{
  FUN_00657ba0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006587c0 @ 006587c0 ////

void __fastcall FUN_006587c0(int param_1)

{
  void *this;
  char *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  size_t sVar8;
  uint uVar9;
  undefined1 local_51c [4];
  int *local_518;
  undefined4 local_514;
  wchar_t *local_510;
  wchar_t *local_50c;
  uint local_508;
  uint local_504;
  wchar_t local_500 [10];
  char *local_4ec;
  uint local_4e8;
  uint local_4e4;
  char local_4e0 [20];
  wchar_t *local_4cc;
  uint local_4c8;
  uint local_4c4;
  wchar_t local_4c0 [10];
  char *local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  char local_4a0 [20];
  char *local_48c;
  undefined4 local_488;
  uint local_484;
  char local_480 [20];
  char *local_46c;
  uint local_468;
  uint local_464;
  char local_460 [20];
  char *local_44c;
  uint local_448;
  uint local_444;
  char local_440 [20];
  wchar_t *local_42c;
  uint local_428;
  uint local_424;
  wchar_t local_420 [10];
  wchar_t *local_40c;
  uint local_408;
  uint local_404;
  wchar_t local_400 [10];
  undefined1 *local_3ec [2];
  char *local_3e4;
  undefined4 local_3e0;
  uint local_3dc;
  char local_3d8 [20];
  void *local_3c4 [2];
  uint local_3bc;
  void *local_3a4 [2];
  uint local_39c;
  void *local_384 [2];
  uint local_37c;
  void *local_364 [2];
  uint local_35c;
  int local_344 [8];
  wchar_t *local_324;
  uint local_320;
  uint local_31c;
  char *local_304;
  uint local_300;
  uint local_2fc;
  undefined1 local_2e4 [64];
  char *local_2a4;
  uint local_2a0;
  uint local_29c;
  void *local_284 [2];
  uint local_27c;
  undefined4 local_264 [54];
  wchar_t local_18c [64];
  undefined1 local_10c [64];
  undefined4 local_cc [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2f13;
  local_c = ExceptionList;
  local_3e4 = local_3d8;
  local_3d8[0] = '\0';
  local_3e0 = 0;
  local_3dc = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_3e4,"Tutorials/tutorials",0x13);
  local_3e0 = 0x13;
  local_3e4[0x13] = '\0';
  local_4 = 0;
  FUN_0055c540(local_264,&local_3e4);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0x14 < local_3dc) {
                    /* WARNING: Subroutine does not return */
    _free(local_3e4);
  }
  this = (void *)(param_1 + 0x3cc);
  FUN_00656fe0((int)this);
  uVar5 = FUN_00558a50(local_264,(undefined4 *)(param_1 + 0x39c),(undefined4 *)0x1);
  if ((char)uVar5 != '\0') {
    uVar5 = FUN_00558120(local_264,0);
    cVar4 = (char)uVar5;
    while (cVar4 != '\0') {
      FUN_00558de0(local_264,local_3c4);
      local_4._0_1_ = 3;
      uVar6 = FUN_00413450(local_3c4,"playall",0,7);
      if (uVar6 == 0) {
        local_48c = local_480;
        local_480[0] = '\0';
        local_488 = 0;
        local_484 = 0x14;
        _strncpy(local_48c,"",0);
        local_488 = 0;
        *local_48c = '\0';
        local_50c = local_500;
        local_500[0] = L'\0';
        local_508 = 0;
        local_504 = 10;
        uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
        if (local_504 <= uVar6) {
          if (10 < local_504) {
                    /* WARNING: Subroutine does not return */
            _free(local_50c);
          }
          local_504 = uVar6 + 0x20 & 0xffffffe0;
          local_50c = _malloc(local_504 * 2);
        }
        _wcsncpy(local_50c,(wchar_t *)&lpCaption_00d16918,uVar6);
        local_50c[uVar6] = L'\0';
        local_4ac = local_4a0;
        local_4a0[0] = '\0';
        local_4a8 = 0;
        local_4a4 = 0x14;
        local_508 = uVar6;
        _strncpy(local_4ac,"BUTTON_PLAY_ALL",0xf);
        local_4a8 = 0xf;
        local_4ac[0xf] = '\0';
        local_4._0_1_ = 6;
        puVar7 = FUN_009b5030(local_284,&local_4ac);
        puVar7 = FUN_006500a0(local_cc,puVar7,&local_50c,&local_48c);
        local_4._0_1_ = 8;
        FUN_00657a80(this,puVar7);
        FUN_0064e770(local_cc);
        if (10 < local_27c) {
                    /* WARNING: Subroutine does not return */
          _free(local_284[0]);
        }
        if (0x14 < local_4a4) {
                    /* WARNING: Subroutine does not return */
          _free(local_4ac);
        }
        if (10 < local_504) {
                    /* WARNING: Subroutine does not return */
          _free(local_50c);
        }
        local_4._0_1_ = 3;
        if (0x14 < local_484) {
                    /* WARNING: Subroutine does not return */
          _free(local_48c);
        }
      }
      uVar6 = FUN_00413450(local_3c4,"item",0,4);
      if (uVar6 == 0) {
        FUN_00558590(local_264,&local_44c,4);
        local_4ec = local_4e0;
        local_4e0[0] = '\0';
        local_4e8 = 0;
        local_4e4 = 0x14;
        local_4 = CONCAT31(local_4._1_3_,10);
        uVar6 = FUN_00413450(&local_44c,",",0,1);
        if (uVar6 == 0xffffffff) {
          FUN_004015d0(&local_4ec,local_44c,local_448);
        }
        else {
          puVar7 = FUN_00430770(&local_44c,&local_42c,0,uVar6);
          FUN_004015d0(&local_4ec,(char *)*puVar7,puVar7[1]);
          if (0x14 < local_424) {
                    /* WARNING: Subroutine does not return */
            _free(local_42c);
          }
        }
        uVar6 = FUN_00413450(&local_44c,",hs",0,3);
        if ((uVar6 == 0xffffffff) || (bVar3 = FUN_00541f60(0), bVar3)) {
          FUN_00650010(local_344);
          local_4 = CONCAT31(local_4._1_3_,0xb);
          puVar7 = FUN_009b5030(local_3a4,&local_4ec);
          FUN_004036d0(local_344,(wchar_t *)*puVar7,puVar7[1]);
          if (10 < local_39c) {
                    /* WARNING: Subroutine does not return */
            _free(local_3a4[0]);
          }
          FUN_004015d0(local_2e4,local_4ec,local_4e8);
          FUN_00657a80(this,local_344);
          FUN_0064e770(local_344);
        }
        if (0x14 < local_4e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_4ec);
        }
        local_4._0_1_ = 3;
        if (0x14 < local_444) {
                    /* WARNING: Subroutine does not return */
          _free(local_44c);
        }
      }
      uVar6 = FUN_00413450(local_3c4,"text",0,4);
      if (uVar6 == 0) {
        FUN_00558590(local_264,&local_46c,4);
        local_4cc = local_4c0;
        local_4c0[0] = local_4c0[0] & 0xff00;
        local_4c8 = 0;
        local_4c4 = 0x14;
        local_4._0_1_ = 0xd;
        uVar6 = FUN_00413450(&local_46c,",",0,1);
        if (uVar6 == 0xffffffff) {
          FUN_004015d0(&local_4cc,local_46c,local_468);
        }
        else {
          puVar7 = FUN_00430770(&local_46c,local_364,0,uVar6);
          FUN_004015d0(&local_4cc,(char *)*puVar7,puVar7[1]);
          if (0x14 < local_35c) {
                    /* WARNING: Subroutine does not return */
            _free(local_364[0]);
          }
        }
        uVar6 = FUN_00413450(&local_46c,",hs",0,3);
        if ((uVar6 == 0xffffffff) || (bVar3 = FUN_00541f60(0), bVar3)) {
          FUN_00650010((int *)local_18c);
          local_4._0_1_ = 0xe;
          puVar7 = FUN_009b5030(local_384,&local_4cc);
          FUN_004036d0(local_18c,(wchar_t *)*puVar7,puVar7[1]);
          if (10 < local_37c) {
                    /* WARNING: Subroutine does not return */
            _free(local_384[0]);
          }
          FUN_004015d0(local_10c,(char *)local_4cc,local_4c8);
          FUN_00657a80(this,(undefined4 *)local_18c);
          FUN_0064e770((undefined4 *)local_18c);
        }
        if (0x14 < local_4c4) {
                    /* WARNING: Subroutine does not return */
          _free(local_4cc);
        }
        if (0x14 < local_464) {
                    /* WARNING: Subroutine does not return */
          _free(local_46c);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0x14 < local_3bc) {
                    /* WARNING: Subroutine does not return */
        _free(local_3c4[0]);
      }
      uVar5 = FUN_00558120(local_264,2);
      cVar4 = (char)uVar5;
    }
    cVar4 = FUN_00558bb0(local_264,6);
    if (cVar4 != '\0') {
      local_510 = (wchar_t *)0x1;
      local_4ec = local_4e0;
      local_4e0[0] = '\0';
      local_4e8 = 0;
      local_4e4 = 0x14;
      local_44c = local_440;
      local_440[0] = '\0';
      local_448 = 0;
      local_444 = 0x14;
      local_46c = local_460;
      local_460[0] = '\0';
      local_468 = 0;
      local_464 = 0x14;
      local_48c = local_480;
      local_480[0] = '\0';
      local_488 = 0;
      local_484 = 0x14;
      _strncpy(local_48c,"title",5);
      local_488 = 5;
      local_48c[5] = '\0';
      local_4 = CONCAT31(local_4._1_3_,0x12);
      puVar7 = FUN_005584e0(local_264,local_384,&local_48c);
      uVar6 = puVar7[1];
      pcVar1 = (char *)*puVar7;
      if (local_4e4 <= uVar6) {
        if (0x14 < local_4e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_4ec);
        }
        local_4e4 = uVar6 + 0x20 & 0xffffffe0;
        local_4ec = _malloc(local_4e4);
      }
      _strncpy(local_4ec,pcVar1,uVar6);
      local_4ec[uVar6] = '\0';
      local_4e8 = uVar6;
      if (0x14 < local_37c) {
                    /* WARNING: Subroutine does not return */
        _free(local_384[0]);
      }
      local_4._0_1_ = 0x11;
      if (0x14 < local_484) {
                    /* WARNING: Subroutine does not return */
        _free(local_48c);
      }
      local_3ec[0] = &stack0xfffffac0;
      FUN_0056bc50(local_4ec,',',&local_44c,&local_46c);
      FUN_00650010(local_344);
      local_4ac = local_4a0;
      local_4a0[0] = '\0';
      local_4a8 = 0;
      local_4a4 = 0x20;
      local_4ac = _malloc(0x20);
      _strncpy(local_4ac,"TUTORIAL_CHAPTER_HEADING",0x18);
      local_4a8 = 0x18;
      local_4ac[0x18] = '\0';
      local_4._0_1_ = 0x14;
      FUN_009b5030(local_3c4,&local_4ac);
      if (0x14 < local_4a4) {
                    /* WARNING: Subroutine does not return */
        _free(local_4ac);
      }
      local_4cc = local_4c0;
      local_4c0[0] = L'\0';
      local_4c8 = 0;
      local_4c4 = 10;
      local_50c = local_500;
      local_500[0] = L'\0';
      local_508 = 0;
      local_504 = 10;
      local_4 = CONCAT31(local_4._1_3_,0x18);
      local_518 = (int *)FUN_00651540();
      *(undefined1 *)((int)local_518 + 0x4d) = 1;
      local_518[1] = (int)local_518;
      *local_518 = (int)local_518;
      local_518[2] = (int)local_518;
      local_514 = 0;
      sVar8 = _swprintf(local_18c,0xd18f7c,local_510);
      FUN_0040cae0(&local_4cc,local_18c,sVar8);
      uVar6 = FUN_00ace02d(L"chapter");
      if (local_504 <= uVar6) {
        if (10 < local_504) {
                    /* WARNING: Subroutine does not return */
          _free(local_50c);
        }
        local_504 = uVar6 + 0x20 & 0xffffffe0;
        local_50c = _malloc(local_504 * 2);
      }
      _wcsncpy(local_50c,L"chapter",uVar6);
      pwVar2 = local_50c;
      local_50c[uVar6] = L'\0';
      local_42c = local_420;
      local_420[0] = L'\0';
      local_428 = 0;
      local_424 = 10;
      local_508 = uVar6;
      if (9 < uVar6) {
        local_424 = uVar6 + 0x20 & 0xffffffe0;
        local_42c = _malloc(local_424 * 2);
      }
      _wcsncpy(local_42c,pwVar2,uVar6);
      uVar9 = local_4c8;
      pwVar2 = local_4cc;
      local_42c[uVar6] = L'\0';
      local_40c = local_400;
      local_400[0] = L'\0';
      local_408 = 0;
      local_404 = 10;
      local_428 = uVar6;
      if (9 < local_4c8) {
        uVar6 = local_4c8 + 0x20 >> 5;
        local_404 = uVar6 << 5;
        local_40c = _malloc(uVar6 * 0x40);
      }
      _wcsncpy(local_40c,pwVar2,uVar9);
      local_408 = uVar9;
      local_40c[uVar9] = L'\0';
      local_4._0_1_ = 0x1a;
      FUN_00656e80(local_51c,local_3ec,&local_42c);
      local_4 = CONCAT31(local_4._1_3_,0x19);
      if (10 < local_404) {
                    /* WARNING: Subroutine does not return */
        _free(local_40c);
      }
      if (10 < local_424) {
                    /* WARNING: Subroutine does not return */
        _free(local_42c);
      }
      FUN_0056c910(local_344,(int *)local_3c4,(int)local_51c);
      puVar7 = FUN_009b5030(local_364,&local_44c);
      uVar6 = puVar7[1];
      pwVar2 = (wchar_t *)*puVar7;
      if (local_31c <= uVar6) {
        if (10 < local_31c) {
                    /* WARNING: Subroutine does not return */
          _free(local_324);
        }
        uVar9 = uVar6 + 0x20 >> 5;
        local_31c = uVar9 << 5;
        local_324 = _malloc(uVar9 * 0x40);
      }
      _wcsncpy(local_324,pwVar2,uVar6);
      local_324[uVar6] = L'\0';
      local_320 = uVar6;
      if (10 < local_35c) {
                    /* WARNING: Subroutine does not return */
        _free(local_364[0]);
      }
      puVar7 = FUN_005562f0(local_264,local_3a4,0);
      uVar6 = puVar7[1];
      pcVar1 = (char *)*puVar7;
      if (local_2fc <= uVar6) {
        if (0x14 < local_2fc) {
                    /* WARNING: Subroutine does not return */
          _free(local_304);
        }
        local_2fc = uVar6 + 0x20 & 0xffffffe0;
        local_304 = _malloc(local_2fc);
      }
      _strncpy(local_304,pcVar1,uVar6);
      uVar9 = local_468;
      pcVar1 = local_46c;
      local_304[uVar6] = '\0';
      local_300 = uVar6;
      if (0x14 < local_39c) {
                    /* WARNING: Subroutine does not return */
        _free(local_3a4[0]);
      }
      if (local_29c <= local_468) {
        if (0x14 < local_29c) {
                    /* WARNING: Subroutine does not return */
          _free(local_2a4);
        }
        local_29c = local_468 + 0x20 & 0xffffffe0;
        local_2a4 = _malloc(local_29c);
      }
      _strncpy(local_2a4,pcVar1,uVar9);
      local_2a0 = uVar9;
      local_2a4[uVar9] = '\0';
      FUN_00657a80(this,local_344);
      local_510 = (wchar_t *)((int)local_510 + 1);
      local_4 = CONCAT31(local_4._1_3_,0x18);
      FUN_00657760(local_51c,local_3ec,(int *)*local_518,local_518);
                    /* WARNING: Subroutine does not return */
      _free(local_518);
    }
  }
  local_4 = 0xffffffff;
  FUN_00558920(local_264);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006595a0 @ 006595a0 ////

undefined4 __thiscall FUN_006595a0(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined3 uVar8;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar9;
  uint uVar10;
  char *local_150;
  undefined4 local_14c;
  uint local_148;
  char local_144 [20];
  undefined1 *local_130;
  void *local_12c [2];
  uint local_124;
  undefined4 local_10c [8];
  void *local_ec [2];
  uint local_e4;
  int local_cc [32];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2f57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                               &TM::WBuildButtonTutorialChapterItem::RTTI_Type_Descriptor,0);
  if (piVar1 == (int *)0x0) {
    uVar3 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                         &TM::WBuildButtonTutorialVideoItem::RTTI_Type_Descriptor,0);
    if (uVar3 == 0) {
      iVar4 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                           &TM::WBuildButtonTutorialTextItem::RTTI_Type_Descriptor,0);
      if (iVar4 != 0) {
        puVar7 = (undefined4 *)((int)this + 0x37c);
        FUN_00657a10((void *)((int)this + 0x3bc),puVar7);
        FUN_004015d0((void *)((int)this + 0x39c),"text",4);
        puVar9 = (undefined4 *)(iVar4 + 0x5c0);
        puVar5 = FUN_009b5030(local_ec,puVar9);
        FUN_004036d0(puVar7,(wchar_t *)*puVar5,puVar5[1]);
        if (10 < local_e4) {
                    /* WARNING: Subroutine does not return */
          _free(local_ec[0]);
        }
        FUN_00651220(this,puVar7);
        FUN_00656fe0((int)this + 0x3cc);
        FUN_00650010(local_cc);
        local_4 = 1;
        FUN_004015d0(local_4c,(char *)*puVar9,*(uint *)(iVar4 + 0x5c4));
        FUN_00657a80((void *)((int)this + 0x3cc),local_cc);
        FUN_0065a2a0(this);
        FUN_0064ebb0((int)this);
        local_130 = &stack0xfffffe9c;
        FUN_00541a60(local_10c);
        FUN_00403de0(local_12c,puVar9);
        FUN_0048ad50((int *)local_12c);
        local_150 = local_144;
        local_144[0] = '\0';
        local_14c = 0;
        local_148 = 0x14;
        _strncpy(local_150,"1",1);
        local_14c = 1;
        local_150[1] = '\0';
        local_4._0_1_ = 4;
        FUN_005417f0(local_10c,local_12c,&local_150);
        if (local_148 < 0x15) {
          if (local_124 < 0x15) {
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00541870(local_10c);
            uVar2 = FUN_0064e770(local_cc);
            ExceptionList = local_c;
            return CONCAT31((int3)((uint)uVar2 >> 8),1);
          }
                    /* WARNING: Subroutine does not return */
          _free(local_12c[0]);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
      iVar4 = FUN_00ace790(param_1,0,&TM::WWindow::RTTI_Type_Descriptor,
                           &TM::WBuildButtonTutorialPlayAllItem::RTTI_Type_Descriptor,0);
      uVar3 = 0;
      if (iVar4 != 0) {
        uVar10 = 0;
        iVar4 = 0;
        while( true ) {
          uVar3 = 0;
          if ((*(int *)((int)this + 0x3d0) == 0) ||
             (uVar3 = (*(int *)((int)this + 0x3d4) - *(int *)((int)this + 0x3d0)) / 0xc0,
             uVar3 <= uVar10)) break;
          iVar6 = *(int *)((int)this + 0x3d0) + iVar4;
          puVar7 = (undefined4 *)(iVar6 + 0x60);
          if (*(int *)(iVar6 + 100) == 0) {
LAB_006599ab:
            uVar10 = uVar10 + 1;
            iVar4 = iVar4 + 0xc0;
          }
          else {
            if (DAT_0104d8e8 == (void *)0x0) {
              if (DAT_0104e478 != (void *)0x0) {
                FUN_0077b0b0(DAT_0104e478,puVar7);
              }
              goto LAB_006599ab;
            }
            FUN_00601770(DAT_0104d8e8,puVar7);
            uVar10 = uVar10 + 1;
            iVar4 = iVar4 + 0xc0;
          }
        }
      }
    }
    else if (DAT_0104d8e8 == (void *)0x0) {
      if (DAT_0104e478 != (void *)0x0) {
        uVar3 = FUN_0077b0b0(DAT_0104e478,(undefined4 *)(uVar3 + 0x5c0));
      }
    }
    else {
      uVar3 = FUN_00601770(DAT_0104d8e8,(undefined4 *)(uVar3 + 0x5c0));
    }
    uVar8 = (undefined3)(uVar3 >> 8);
  }
  else {
    if (piVar1[0x181] != 0) {
      local_150 = local_144;
      local_144[0] = '\0';
      local_14c = 0;
      local_148 = 0x14;
      _strncpy(local_150,"0",1);
      local_14c = 1;
      local_150[1] = '\0';
      local_4 = 0;
      FUN_005417f0(DAT_0104c7e4,piVar1 + 0x180,&local_150);
      local_4 = 0xffffffff;
      if (0x14 < local_148) {
                    /* WARNING: Subroutine does not return */
        _free(local_150);
      }
    }
    (**(code **)(*piVar1 + 0x18))(5,0,0);
    uVar2 = 0;
    if (piVar1[0x179] != 0) {
      puVar7 = (undefined4 *)((int)this + 0x37c);
      FUN_00657a10((void *)((int)this + 0x3bc),puVar7);
      FUN_004015d0((void *)((int)this + 0x39c),(char *)piVar1[0x178],piVar1[0x179]);
      FUN_004036d0(puVar7,(wchar_t *)piVar1[0x170],piVar1[0x171]);
      FUN_00651220(this,puVar7);
      FUN_006587c0((int)this);
      iVar4 = 0;
      if (*(int *)((int)this + 0x3d0) != 0) {
        iVar4 = (*(int *)((int)this + 0x3d4) - *(int *)((int)this + 0x3d0)) / 0xc0;
      }
      *(int *)((int)this + 0x540) = iVar4;
      FUN_0065a2a0(this);
      uVar2 = FUN_0064ebb0((int)this);
    }
    uVar8 = (undefined3)((uint)uVar2 >> 8);
  }
  ExceptionList = local_c;
  return CONCAT31(uVar8,1);
}


//// FUNCTION FUN_00659a00 @ 00659a00 ////

void __thiscall
FUN_00659a00(void *this,int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  void *pvVar1;
  int *this_00;
  int *this_01;
  undefined4 *unaff_EBX;
  float10 fVar2;
  uint **ppuVar3;
  uint uVar4;
  uint *puStack_9c;
  int *piStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  int *piStack_8c;
  char *pcStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2f96;
  pvStack_c = ExceptionList;
  iStack_44 = 0x659a2e;
  ExceptionList = &pvStack_c;
  FUN_0065da90(param_1,param_4);
  iStack_44 = 0x659a3a;
  FUN_0065e120(param_1,param_2);
  if (param_5 == 0) {
    iStack_44 = param_4;
    uStack_48 = 1;
    uStack_4c = 0x659a62;
    (**(code **)(*param_1 + 100))();
  }
  else {
    iStack_44 = param_5;
    uStack_48 = 2;
    uStack_4c = 0x659a53;
    (**(code **)(*param_1 + 100))();
  }
  uStack_4c = 0x40800000;
  iStack_50 = param_4;
  uStack_54 = 1;
  pcStack_58 = (char *)0x659a71;
  (**(code **)(*param_1 + 0x5c))();
  pcStack_58 = "BUILDBUTTONITEM_METAPROPSELECTED";
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))();
  pvVar1 = operator_new(900);
  if (pvVar1 == (void *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = FUN_00737bb0(pvVar1,unaff_EBX);
  }
  pcStack_58 = (char *)((uint)pcStack_58 & 0xffffff00);
  _strncpy((char *)&pcStack_58,"default",7);
                    /* WARNING: Ignoring partial resolution of indirect */
  uStack_54._3_1_ = 0;
  (**(code **)(*this_00 + 0xfc))();
  uStack_4c = 0xffffffff;
  if (&DAT_00000014 < this) {
                    /* WARNING: Subroutine does not return */
    piStack_8c = (int *)&UNK_00659b46;
    _free((void *)0x5);
  }
  piStack_8c = param_1;
  uStack_90 = 1;
  uStack_94 = 0x659b58;
  (**(code **)(*this_00 + 100))();
  uStack_94 = 0x41000000;
  piStack_98 = param_1;
  puStack_9c = (uint *)0x1;
  (**(code **)(*this_00 + 0x5c))();
  (**(code **)(*this_00 + 0x84))();
  fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
  FUN_00737cd0(this_00,(float)(fVar2 - (float10)16.0));
  uVar4 = 0;
  (**(code **)(*this_00 + 0x84))();
  (**(code **)(*param_1 + 0xc))();
  pvVar1 = operator_new(900);
  if (pvVar1 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    this_01 = FUN_00737bb0(pvVar1,&pcStack_58);
  }
  puStack_9c = &uStack_90;
  uStack_90 = uStack_90 & 0xffffff00;
  piStack_98 = (int *)0x0;
  uStack_94 = 0x14;
  _strncpy((char *)puStack_9c,"default",7);
  piStack_98 = (int *)0x7;
  *(char *)((int)puStack_9c + 7) = '\0';
  ppuVar3 = &puStack_9c;
  (**(code **)(*this_01 + 0xfc))(ppuVar3,10,0);
  if (0x14 < uVar4) {
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  (**(code **)(*this_01 + 100))(2,this_00,0);
  (**(code **)(*this_01 + 0x5c))(1,param_1,0x41000000);
  (**(code **)(*this_01 + 0x84))(0);
  fVar2 = (float10)(**(code **)(*param_1 + 0x10))();
  FUN_00737cd0(this_01,(float)(fVar2 - (float10)16.0));
  (**(code **)(*this_01 + 0x84))(0);
  (**(code **)(*param_1 + 0xc))(this_01,1);
  (**(code **)(*piStack_98 + 0xc))(param_1,1);
  ExceptionList = ppuVar3;
  return;
}


//// FUNCTION FUN_00659cd0 @ 00659cd0 ////

int * __thiscall
FUN_00659cd0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3,
            undefined4 *param_4,int param_5,int param_6)

{
  byte bVar1;
  void *this_00;
  int *this_01;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2fc4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x620);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"listbutton",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_01 = FUN_00666a80(this_00,(int *)&local_2c,0x42300000,0x43918000,DAT_00e566fc,DAT_00e56700,
                           DAT_00e56704,DAT_00e56708);
  }
  local_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0065ee40(this_01,param_3);
  FUN_004036d0(this_01 + 0x170,(wchar_t *)*param_1,param_1[1]);
  FUN_00667350(this_01,param_3);
  FUN_004015d0(this_01 + 0x180,(char *)*param_4,param_4[1]);
  if (param_4[1] != 0) {
    bVar1 = FUN_00541e50(DAT_0104c7e4,param_4,1);
    if (bVar1 != 0) {
      FUN_0065d760((int)this_01);
    }
  }
  FUN_00659a00(this,this_01,param_1,param_2,param_5,param_6);
  ExceptionList = local_c;
  return this_01;
}


//// FUNCTION FUN_00659e50 @ 00659e50 ////

int * __thiscall
FUN_00659e50(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4,
            int param_5)

{
  void *this_00;
  int *this_01;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc2ff4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x5e0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"listbutton",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_01 = FUN_00666bc0(this_00,(int *)&local_2c,0x42300000,0x43918000,DAT_00e566fc,DAT_00e56700,
                           DAT_00e56704,DAT_00e56708);
  }
  local_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0065ee40(this_01,param_3);
  FUN_00667260(this_01,param_3);
  FUN_00659a00(this,this_01,param_1,param_2,param_4,param_5);
  ExceptionList = local_c;
  return this_01;
}


//// FUNCTION FUN_00659f90 @ 00659f90 ////

int * __thiscall
FUN_00659f90(void *this,undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4,
            int param_5)

{
  void *this_00;
  int *this_01;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3024;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x5e0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x14;
    _strncpy(local_2c,"listbutton",10);
    local_28 = 10;
    local_2c[10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_01 = FUN_00666d90(this_00,(int *)&local_2c,0x42300000,0x43918000,DAT_00e566fc,DAT_00e56700,
                           DAT_00e56704,DAT_00e56708);
  }
  local_4 = 0xffffffff;
  if ((this_00 != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  FUN_0065ee40(this_01,param_3);
  FUN_006672b0(this_01,param_3);
  FUN_00659a00(this,this_01,param_1,param_2,param_4,param_5);
  ExceptionList = local_c;
  return this_01;
}


//// FUNCTION FUN_0065a0d0 @ 0065a0d0 ////

int * __thiscall FUN_0065a0d0(void *this,undefined4 *param_1,int param_2,int param_3)

{
  void *this_00;
  int *this_01;
  uint uVar1;
  char *local_4c;
  undefined4 local_48;
  uint local_44;
  char local_40 [20];
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3064;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = operator_new(0x5c0);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    this_01 = (int *)0x0;
  }
  else {
    local_4c = local_40;
    local_40[0] = '\0';
    local_48 = 0;
    local_44 = 0x14;
    _strncpy(local_4c,"listbutton",10);
    local_48 = 10;
    local_4c[10] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    this_01 = FUN_006669f0(this_00,(int *)&local_4c,0x42300000,0x43918000,DAT_00e566fc,DAT_00e56700,
                           DAT_00e56704,DAT_00e56708);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
  }
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"",0);
  local_48 = 0;
  *local_4c = '\0';
  local_4 = 3;
  FUN_0065ee40(this_01,&local_4c);
  if (local_44 < 0x15) {
    local_2c = local_20;
    local_20[0] = 0;
    local_28 = 0;
    local_24 = 10;
    uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
    local_4 = 4;
    FUN_00659a00(this,this_01,param_1,&local_2c,param_2,param_3);
    if (local_24 < 0xb) {
      ExceptionList = local_c;
      return this_01;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_4c);
}


//// FUNCTION FUN_0065a2a0 @ 0065a2a0 ////

/* WARNING: Removing unreachable block (ram,0x0065a686) */

void __fastcall FUN_0065a2a0(void *param_1)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  ulonglong uVar15;
  char *_Dest;
  uint uStack_124;
  uint uStack_120;
  undefined1 auStack_11c [28];
  undefined4 auStack_100 [54];
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc30ce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006546a0((int)param_1);
  uVar12 = DAT_00e566e4;
  (**(code **)(**(int **)((int)param_1 + 0x408) + 0x78))();
  uStack_120 = uStack_120 & 0xffffff00;
  uStack_124 = 0x14;
  _strncpy((char *)&uStack_120,"text",4);
  auStack_11c[0] = 0;
  pbVar4 = *(byte **)((int)param_1 + 0x39c);
  puVar13 = &uStack_120;
  do {
    bVar1 = *pbVar4;
    bVar14 = bVar1 < (byte)*puVar13;
    if (bVar1 != (byte)*puVar13) {
LAB_0065a348:
      iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      goto LAB_0065a34d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar14 = bVar1 < *(byte *)((int)puVar13 + 1);
    if (bVar1 != *(byte *)((int)puVar13 + 1)) goto LAB_0065a348;
    pbVar4 = pbVar4 + 2;
    puVar13 = (uint *)((int)puVar13 + 2);
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0065a34d:
  if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(&uStack_120);
  }
  if (iVar5 == 0) {
    *(undefined4 *)((int)param_1 + 0x538) = 1;
    *(undefined4 *)((int)param_1 + 0x540) = 1;
    *(undefined1 *)((int)param_1 + 0x548) = 1;
    *(undefined4 *)((int)param_1 + 0x534) = 0;
    (**(code **)(**(int **)((int)param_1 + 0x408) + 0x78))();
    puVar6 = operator_new(0x358);
    pvStack_c = (void *)0x0;
    if (puVar6 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = FUN_0071eda0(puVar6);
    }
    pvStack_c = (void *)0xffffffff;
    piVar7[0xd1] = piVar7[0xd1] & 0xfffffffaU | 10;
    (**(code **)(*piVar7 + 0xfc))(1);
    (**(code **)(*piVar7 + 0x70))(*(undefined4 *)((int)param_1 + 0x480),0);
    piVar8 = (int *)FUN_005fbfa0(auStack_11c,1,*(int *)((int)param_1 + 0x480),0x41000000);
    uStack_18 = 1;
    piVar7[0x1f] = *piVar8;
    (**(code **)(piVar7[0x20] + 4))();
    piVar7[0x25] = piVar8[6];
    (**(code **)piVar7[0x20])();
    piVar7[0x26] = piVar8[7];
    piVar7[0x27] = piVar8[8];
    FUN_005f9ed0((int)auStack_11c);
    piVar8 = (int *)FUN_005fbfa0(auStack_11c,2,*(int *)((int)param_1 + 0x480),0x41400000);
    piVar7[0x3a] = *piVar8;
    uStack_18 = 2;
    (**(code **)(piVar7[0x3b] + 4))();
    piVar7[0x40] = piVar8[6];
    (**(code **)piVar7[0x3b])();
    piVar7[0x41] = piVar8[7];
    piVar7[0x42] = piVar8[8];
    uStack_18 = 0xffffffff;
    FUN_005f9ed0((int)auStack_11c);
    (**(code **)(**(int **)((int)param_1 + 0x480) + 0xc))(piVar7,1);
    if ((*(int *)((int)param_1 + 0x3d0) != 0) &&
       (iVar11 = *(int *)((int)param_1 + 0x3d4) - *(int *)((int)param_1 + 0x3d0),
       iVar5 = iVar11 >> 0x1f, iVar11 / 0xc0 + iVar5 != iVar5)) {
      puVar6 = operator_new(0x3fc);
      uStack_20 = 3;
      if (puVar6 == (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = FUN_00833290(puVar6);
      }
      fVar2 = DAT_00e566e8;
      *(undefined1 *)(piVar8 + 0xd6) = 1;
      piVar8[0xd5] = (int)(fVar2 - 88.0);
      puVar9 = FUN_004312e0(&uStack_124,(undefined4 *)(*(int *)((int)param_1 + 0x3d0) + 0x80),
                            "_html");
      uStack_20 = 4;
      puVar9 = FUN_009b5030((undefined4 *)&stack0xfffffebc,puVar9);
      uStack_20 = CONCAT31(uStack_20._1_3_,5);
      (**(code **)(*piVar8 + 0x54))(puVar9);
      if (10 < uVar12) {
                    /* WARNING: Subroutine does not return */
        _free(puVar6);
      }
      uStack_24 = 0xffffffff;
      if (0x14 < uStack_120) {
                    /* WARNING: Subroutine does not return */
        _free((void *)0x4);
      }
      (**(code **)(*piVar8 + 0x84))(0);
      (**(code **)(*piVar8 + 0x5c))(1,piVar7[0xd2],0);
      (**(code **)(*piVar8 + 100))(1,piVar7[0xd2],0);
      (**(code **)(*piVar7 + 0xc))(piVar8,1);
    }
  }
  else {
    (**(code **)(**(int **)((int)param_1 + 0x480) + 0x14))();
    uVar15 = FUN_00acd42c();
    _Dest = &stack0xfffffec8;
    piVar7 = (int *)0x0;
    *(int *)((int)param_1 + 0x538) = (int)uVar15;
    *(undefined4 *)((int)param_1 + 0x53c) = 0;
    iVar5 = 0;
    *(undefined1 *)((int)param_1 + 0x548) = 0;
    _strncpy(_Dest,"Tutorials/tutorials",0x13);
    _Dest[0x13] = '\0';
    uStack_20 = 6;
    FUN_0055c540(auStack_100,(undefined4 *)&stack0xfffffebc);
    uStack_20 = CONCAT31(uStack_20._1_3_,8);
    uVar12 = 0;
    iVar11 = 0;
    while (((*(int *)((int)param_1 + 0x3d0) != 0 &&
            (uVar12 < (uint)((*(int *)((int)param_1 + 0x3d4) - *(int *)((int)param_1 + 0x3d0)) /
                            0xc0))) &&
           (*(int *)((int)param_1 + 0x53c) < *(int *)((int)param_1 + 0x538)))) {
      if (iVar5 < *(int *)((int)param_1 + 0x534)) {
        iVar5 = iVar5 + 1;
        uVar12 = uVar12 + 1;
        iVar11 = iVar11 + 0xc0;
      }
      else {
        puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x3d0) + iVar11);
        if (*(int *)(*(int *)((int)param_1 + 0x3d0) + 0x44 + iVar11) == 0) {
          if (puVar6[0x19] == 0) {
            if (puVar6[0x21] == 0) {
              piVar7 = FUN_0065a0d0(param_1,puVar6,*(int *)((int)param_1 + 0x480),(int)piVar7);
            }
            else {
              piVar7 = FUN_00659f90(param_1,puVar6,puVar6 + 8,puVar6 + 0x20,
                                    *(int *)((int)param_1 + 0x480),(int)piVar7);
            }
          }
          else {
            piVar7 = FUN_00659e50(param_1,puVar6,puVar6 + 8,puVar6 + 0x18,
                                  *(int *)((int)param_1 + 0x480),(int)piVar7);
          }
        }
        else {
          piVar7 = FUN_00659cd0(param_1,puVar6,puVar6 + 8,puVar6 + 0x10,puVar6 + 0x28,
                                *(int *)((int)param_1 + 0x480),(int)piVar7);
        }
        uVar12 = uVar12 + 1;
        *(int *)((int)param_1 + 0x53c) = *(int *)((int)param_1 + 0x53c) + 1;
        iVar11 = iVar11 + 0xc0;
      }
    }
    uVar10 = 0;
    if (*(int *)((int)param_1 + 0x3d0) != 0) {
      uVar10 = (*(int *)((int)param_1 + 0x3d4) - *(int *)((int)param_1 + 0x3d0)) / 0xc0;
    }
    if (uVar12 == uVar10) {
      *(undefined1 *)((int)param_1 + 0x548) = 1;
    }
    uStack_20 = 0xffffffff;
    FUN_00558920(auStack_100);
  }
  do {
    cVar3 = (**(code **)(**(int **)((int)param_1 + 0x480) + 0x50))(1);
  } while (cVar3 != '\0');
  ExceptionList = pvStack_28;
  return;
}


//// FUNCTION FUN_0065a810 @ 0065a810 ////

void __fastcall FUN_0065a810(void *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(int *)((int)param_1 + 0x528) != 0) {
    FUN_00640a40(*(int *)((int)param_1 + 0x528),param_2);
  }
  iVar3 = *(int *)((int)param_1 + 0x348);
  bVar6 = false;
  if ((iVar3 < 0) || ((1 < iVar3 && (iVar3 != 3)))) {
    if (param_3 < 0) {
      uVar1 = *(uint *)((int)param_1 + 0x534);
      if (uVar1 != 0) {
        uVar5 = ((int)(uVar1 + param_3) < 1) - 1 & uVar1 + param_3;
        bVar6 = uVar1 != uVar5;
        *(uint *)((int)param_1 + 0x534) = uVar5;
      }
    }
    else if (*(char *)((int)param_1 + 0x548) == '\0') {
      if (*(int *)((int)param_1 + 0x534) + *(int *)((int)param_1 + 0x538) <
          *(int *)((int)param_1 + 0x540)) {
        iVar4 = *(int *)((int)param_1 + 0x534) + param_3;
        iVar3 = *(int *)((int)param_1 + 0x540) - *(int *)((int)param_1 + 0x538);
        *(int *)((int)param_1 + 0x534) = iVar4;
        if (iVar3 < iVar4) {
          *(int *)((int)param_1 + 0x534) = iVar3;
        }
      }
    }
    goto LAB_0065a8fa;
  }
  piVar2 = (int *)FUN_00640a30(*(int *)((int)param_1 + 0x528));
  if (param_3 == 0) {
    return;
  }
  if ((0 < param_3) && (*(int *)((int)param_1 + 0x53c) < *(int *)((int)param_1 + 0x538))) {
    return;
  }
  if (param_3 < 0) {
    if ((piVar2 != (int *)0x0) && (*piVar2 + param_3 < 0)) {
      param_3 = -*piVar2;
    }
    if (-1 < param_3) goto LAB_0065a87e;
  }
  else {
LAB_0065a87e:
    if (*(char *)((int)param_1 + 0x548) != '\0') goto LAB_0065a8fa;
  }
  *piVar2 = *piVar2 + param_3;
LAB_0065a8fa:
  iVar3 = *(int *)((int)param_1 + 0x348);
  if (iVar3 == 0) {
    FUN_00654d50(param_1,'\x01');
  }
  else if (iVar3 == 1) {
    FUN_006550f0(param_1,'\x01');
  }
  else if (iVar3 == 3) {
    FUN_00655470(param_1);
  }
  if ((*(char *)((int)param_1 + 0x548) == '\0') || (bVar6)) {
    switch(*(undefined4 *)((int)param_1 + 0x348)) {
    case 2:
      FUN_00655610(param_1);
      FUN_0064ebb0((int)param_1);
      FUN_00652010(param_1);
      return;
    case 4:
      FUN_00655850((int)param_1);
      FUN_0064ebb0((int)param_1);
      FUN_00652010(param_1);
      return;
    case 5:
      FUN_006559e0(param_1);
      FUN_0064ebb0((int)param_1);
      FUN_00652010(param_1);
      return;
    case 6:
      FUN_0065a2a0(param_1);
    }
  }
  FUN_0064ebb0((int)param_1);
  FUN_00652010(param_1);
  return;
}


//// FUNCTION FUN_0065a9d0 @ 0065a9d0 ////

undefined4 __fastcall FUN_0065a9d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0xd2] == 6) {
    if ((param_1[0xf0] != 0) && (param_1[0xf1] - param_1[0xf0] >> 6 != 0)) {
      iVar2 = param_1[0xf1];
      FUN_004036d0(param_1 + 0xdf,*(wchar_t **)(iVar2 + -0x40),*(uint *)(iVar2 + -0x3c));
      FUN_004015d0(param_1 + 0xe7,*(char **)(iVar2 + -0x20),*(uint *)(iVar2 + -0x1c));
      FUN_00656e40((int)(param_1 + 0xef));
      FUN_00651220(param_1,param_1 + 0xdf);
      FUN_006587c0((int)param_1);
      iVar2 = 0;
      if (param_1[0xf4] != 0) {
        iVar2 = (param_1[0xf5] - param_1[0xf4]) / 0xc0;
      }
      param_1[0x150] = iVar2;
      FUN_0065a2a0(param_1);
      uVar3 = FUN_0064ebb0((int)param_1);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x20))(0);
  piVar1 = param_1 + 0x12;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar3 = (**(code **)*param_1)(1);
  }
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0065aab0 @ 0065aab0 ////

undefined4 __fastcall FUN_0065aab0(void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  ulonglong uVar5;
  undefined4 local_4;
  
  FUN_0071fd70(*(void **)((int)param_1 + 0x4e0),&local_4);
  uVar5 = FUN_00acd42c();
  uVar3 = (undefined4)(uVar5 >> 0x20);
  iVar4 = *(int *)((int)param_1 + 0x534);
  iVar1 = *(int *)((int)param_1 + 0x348);
  if ((-1 < iVar1) && ((iVar1 < 2 || (iVar1 == 3)))) {
    piVar2 = (int *)FUN_00640a30(*(int *)((int)param_1 + 0x528));
    iVar4 = *piVar2;
    uVar3 = extraout_EDX;
  }
  uVar3 = FUN_0065a810(param_1,uVar3,(int)uVar5 - iVar4);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_0065ac70 @ 0065ac70 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0065ac70(uint param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  float10 extraout_ST0;
  ulonglong uVar9;
  char *pcVar10;
  uint uStack_200;
  undefined4 *puStack_1f0;
  undefined4 **ppuStack_1ec;
  undefined4 **ppuStack_1e0;
  uint uStack_1dc;
  int iStack_1d8;
  undefined4 *puStack_1d4;
  undefined **ppuStack_1d0;
  undefined1 **ppuStack_1cc;
  int *piStack_1c8;
  undefined ***pppuStack_1c4;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1bc;
  char *pcStack_1b8;
  undefined4 uStack_1b4;
  undefined1 *puStack_1b0;
  uint uStack_1ac;
  char *pcStack_1a8;
  undefined4 uStack_1a4;
  undefined1 **_Memory;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  undefined4 uStack_178;
  char *pcStack_174;
  uint uStack_170;
  undefined4 *puStack_16c;
  uint uStack_168;
  char *pcStack_164;
  undefined4 uStack_160;
  undefined1 *puStack_15c;
  int iVar11;
  undefined1 *puStack_134;
  uint uStack_130;
  char *pcStack_12c;
  uint uStack_128;
  undefined4 *puStack_124;
  uint uStack_120;
  char *pcStack_11c;
  uint *puStack_118;
  undefined4 uStack_114;
  float fStack_110;
  uint auStack_10c [3];
  undefined4 uStack_100;
  undefined1 *puStack_fc;
  float fStack_f8;
  uint *puVar12;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 *puStack_e4;
  uint uStack_e0;
  undefined4 *puStack_dc;
  float fStack_d8;
  uint *puStack_d4;
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined1 *puStack_c8;
  int iStack_78;
  char *pcStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  char acStack_64 [36];
  undefined4 uStack_40;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3272;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0064e610(param_1);
  puVar3 = operator_new(0x344);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puVar3);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3f4) + 4))();
  *(undefined4 **)(param_1 + 0x408) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x3f4))();
  *(uint *)(*(int *)(param_1 + 0x408) + 0x114) = *(uint *)(*(int *)(param_1 + 0x408) + 0x114) | 8;
  pvVar4 = operator_new(0x288);
  local_4 = 1;
  if (pvVar4 == (void *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    pcStack_70 = acStack_64;
    acStack_64[0] = '\0';
    uStack_6c = 0;
    uStack_68 = 0x20;
    pcStack_70 = _malloc(0x20);
    puStack_c8 = (undefined1 *)0x65ad52;
    _strncpy(pcStack_70,"ui/buildmenu_window.dds",0x17);
    uStack_6c = 0x17;
    pcStack_70[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar3 = FUN_005e8fd0(pvVar4,&pcStack_70);
  }
  local_4 = 0xffffffff;
  if ((pvVar4 != (void *)0x0) && (0x14 < uStack_68)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_70);
  }
  puVar3[0x9c] = 0x41400000;
  puVar3[0x9d] = 0x41400000;
  puVar3[0x9b] = 0x42000000;
  puVar3[0x9e] = 0x41c00000;
  puVar3[0x9f] = 0x41c00000;
  (**(code **)(**(int **)(param_1 + 0x408) + 0xa0))();
  puStack_c8 = (undefined1 *)0x65ae0b;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x5c))();
  uStack_cc = *(undefined4 *)(param_1 + 0x3f0);
  puStack_c8 = puStack_8;
  puStack_d0 = (undefined1 *)0x1;
  puStack_d4 = (uint *)0x65ae26;
  (**(code **)(**(int **)(param_1 + 0x408) + 100))();
  puStack_d4 = (uint *)(_DAT_00e566e0 + (float)pvStack_c);
  fStack_d8 = 9.337897e-39;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x78))();
  if ((iStack_14 == 0) || (iStack_14 == 1)) {
    fStack_d8 = 9.337995e-39;
    uVar9 = FUN_00acd42c();
    fVar8 = extraout_ST0;
    if (extraout_ST0 != (float10)(int)uVar9) {
      fVar8 = (float10)(int)uVar9 + (float10)1.0;
    }
    fStack_d8 = (float)((float10)_DAT_00e566d8 * fVar8 + (float10)8.0);
    puStack_dc = (undefined4 *)0x65aecf;
    (**(code **)(**(int **)(param_1 + 0x408) + 0x7c))();
  }
  else {
    iVar11 = **(int **)(param_1 + 0x408);
    fStack_d8 = 9.337945e-39;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x3f0) + 0x14))();
    fStack_d8 = (float)(fVar8 - (float10)368.0);
    puStack_dc = (undefined4 *)0x65ae73;
    (**(code **)(iVar11 + 0x7c))();
  }
  puStack_dc = (undefined4 *)0x0;
  puStack_e4 = &LAB_0064fd80;
  uStack_e8 = 5;
  uStack_e0 = param_1;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x18))();
  uStack_ec = 1;
  (**(code **)(**(int **)(param_1 + 0x3f0) + 0xc))();
  fStack_f8 = 9.338165e-39;
  puStack_dc = operator_new(0x344);
  uStack_40 = 4;
  if (puStack_dc == (undefined4 *)0x0) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = FUN_007432f0(puStack_dc);
  }
  fStack_f8 = *(float *)(param_1 + 0x408);
  puVar12 = (uint *)0x0;
  puStack_fc = (undefined1 *)0x1;
  uStack_40 = 0xffffffff;
  uStack_100 = 0x65af40;
  (**(code **)(*puVar5 + 100))();
  auStack_10c[2] = *(undefined4 *)(param_1 + 0x408);
  uStack_100 = 0x41000000;
  auStack_10c[1] = 2;
  auStack_10c[0] = 0x65af55;
  (**(code **)(*puVar5 + 0x60))();
  auStack_10c[0] = 0x428c0000;
  fStack_110 = 9.338299e-39;
  (**(code **)(*puVar5 + 0x78))();
  uVar6 = *puVar5;
  fStack_110 = 9.338317e-39;
  fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
  fStack_110 = (float)fVar8;
  uStack_114 = 0x65af77;
  (**(code **)(uVar6 + 0x7c))();
  uStack_114 = 1;
  pcStack_11c = (char *)0x65af85;
  puStack_118 = puVar5;
  (**(code **)(**(int **)(param_1 + 0x408) + 0xc))();
  pcStack_11c = "BUILDBUTTONITEM_LIST";
  puStack_124 = (undefined4 *)&LAB_0064e580;
  uStack_128 = 0xc;
  pcStack_12c = (char *)0x65af9d;
  uStack_120 = param_1;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x18))();
  pcStack_12c = "BUILDBUTTONITEM_LIST";
  puStack_134 = &LAB_0064e5b0;
  uStack_130 = param_1;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x18))();
  fVar8 = (float10)(**(code **)(*puVar5 + 0x14))();
  puStack_d4 = (uint *)(float)((fVar8 * (float10)0.5 - (float10)64.0) - (float10)20.0);
  fVar8 = (float10)(**(code **)(*puVar5 + 0x10))();
  puVar3 = *(undefined4 **)(param_1 + 0x4b0);
  fStack_f8 = (float)(fVar8 * (float10)0.5 - (float10)32.0);
  if (puVar3 != (undefined4 *)0x0) {
    piVar7 = puVar3 + 0x12;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x49c) + 4))();
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x49c))();
  }
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puStack_124 = (undefined4 *)0x0;
  }
  else {
    puStack_d0 = &stack0xffffff3c;
    uStack_cc = 0;
    puStack_c8 = (undefined1 *)0xa;
    puStack_124 = pvVar4;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_d0,(wchar_t *)&lpCaption_00d16918,uVar6);
    puVar12 = &uStack_e8;
    uStack_128 = uStack_128 | 2;
    uStack_e8 = uStack_e8 & 0xffffff00;
    uStack_ec = 0x14;
    _strncpy((char *)puVar12,"button_up.",10);
    *(char *)((int)puVar12 + 10) = '\0';
    puStack_fc = &stack0xfffffeb8;
    uStack_128 = uStack_128 | 4;
    puStack_15c = (undefined1 *)0x65b0f5;
    puStack_124 = FUN_0069fb10(pvVar4,(int *)&stack0xffffff0c,&puStack_d0,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)(param_1 + 0x49c) + 4))();
  *(undefined4 **)(param_1 + 0x4b0) = puStack_124;
  (*(code *)**(undefined4 **)(param_1 + 0x49c))();
  if (((uStack_128 & 4) != 0) && (uStack_128 = uStack_128 & 0xfffffffb, 0x14 < uStack_ec)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar12);
  }
  if (((uStack_128 & 2) != 0) &&
     (uStack_128 = uStack_128 & 0xfffffffd, (undefined1 *)0xa < puStack_c8)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_d0);
  }
  if ((iStack_78 == 0) || (iStack_78 == 1)) {
    puVar12 = puStack_d4;
    if (80.0 <= (float)puStack_d4) {
      puStack_d4 = (uint *)0x42a00000;
      puVar12 = puStack_d4;
    }
  }
  else {
    puVar12 = (uint *)0x42a00000;
  }
  (**(code **)(**(int **)(param_1 + 0x4b0) + 100))();
  iVar11 = 2;
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x60))();
  puStack_15c = &LAB_0065abf0;
  uStack_160 = 3;
  pcStack_164 = (char *)0x65b1fe;
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  pcStack_164 = "BUILDBUTTONITEM_LISTUP";
  puStack_16c = (undefined4 *)&LAB_005f37f0;
  uStack_170 = 0;
  pcStack_174 = (char *)0x65b215;
  uStack_168 = param_1;
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  pcStack_174 = "BUILDBUTTONITEM_LISTUP";
  uStack_178 = 0;
  puStack_17c = &LAB_005f37f0;
  puStack_180 = (undefined1 *)0x5;
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  puVar3 = *(undefined4 **)(param_1 + 0x4c8);
  if (puVar3 != (undefined4 *)0x0) {
    piVar7 = puVar3 + 0x12;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x4b4) + 4))();
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x4b4))();
  }
  pvVar4 = operator_new(0x420);
  if (pvVar4 == (void *)0x0) {
    puStack_16c = (undefined4 *)0x0;
  }
  else {
    puStack_118 = auStack_10c;
    auStack_10c[0] = auStack_10c[0] & 0xffff0000;
    uStack_114 = 0;
    fStack_110 = 1.4013e-44;
    uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_118,(wchar_t *)&lpCaption_00d16918,uVar6);
    puVar12 = &uStack_130;
    uStack_170 = uStack_170 | 8;
    uStack_130 = uStack_130 & 0xffffff00;
    puStack_134 = (undefined1 *)0x14;
    _strncpy((char *)puVar12,"button_down.",0xc);
    *(char *)(puVar12 + 3) = '\0';
    uStack_170 = uStack_170 | 0x10;
    puStack_16c = (undefined4 *)&stack0xfffffe70;
    puStack_d0 = (undefined1 *)0xc;
    uStack_1a4 = 0x65b336;
    puStack_16c = FUN_0069fb10(pvVar4,(int *)&stack0xfffffec4,&puStack_118,0x42800000,0x42800000,0,0
                               ,0x3f800000,0x3f800000);
  }
  puStack_d0 = (undefined1 *)0xe;
  (**(code **)(*(int *)(param_1 + 0x4b4) + 4))();
  *(undefined4 **)(param_1 + 0x4c8) = puStack_16c;
  (*(code *)**(undefined4 **)(param_1 + 0x4b4))();
  if (((uStack_170 & 0x10) != 0) &&
     (uStack_170 = uStack_170 & 0xffffffef, (undefined1 *)0x14 < puStack_134)) {
                    /* WARNING: Subroutine does not return */
    _free(puVar12);
  }
  puStack_d0 = (undefined1 *)0xffffffff;
  if (((uStack_170 & 8) != 0) && (uStack_170 = uStack_170 & 0xfffffff7, 10 < (uint)fStack_110)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_118);
  }
  _Memory = *(undefined1 ***)(param_1 + 0x408);
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x68))();
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x68))();
  uStack_1a4 = 2;
  pcStack_1a8 = (char *)0x65b427;
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x60))();
  pcStack_1a8 = "BUILDBUTTONITEM_LISTDOWN";
  puStack_1b0 = &LAB_0065ac30;
  uStack_1b4 = 3;
  pcStack_1b8 = (char *)0x65b43f;
  uStack_1ac = param_1;
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))();
  pcStack_1b8 = "BUILDBUTTONITEM_LISTDOWN";
  puStack_1c0 = &LAB_005f37f0;
  pppuStack_1c4 = (undefined ***)0x0;
  piStack_1c8 = (int *)0x65b456;
  puStack_1bc = (undefined1 *)param_1;
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))();
  piStack_1c8 = (int *)0xd340c8;
  ppuStack_1cc = (undefined1 **)0x0;
  ppuStack_1d0 = (undefined **)&LAB_005f37f0;
  puStack_1d4 = (undefined4 *)0x5;
  iStack_1d8 = 0x65b46e;
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))();
  uStack_1dc = *(uint *)(param_1 + 0x4b0);
  iStack_1d8 = 1;
  ppuStack_1e0 = (undefined4 **)0x65b47e;
  (**(code **)(*puVar5 + 0xc))();
  pvVar4 = *(void **)(param_1 + 0x4c8);
  ppuStack_1e0 = (undefined4 **)0x1;
  (**(code **)(*puVar5 + 0xc))();
  puVar3 = *(undefined4 **)(param_1 + 0x4e0);
  if (puVar3 != (undefined4 *)0x0) {
    piVar7 = puVar3 + 0x12;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      ppuStack_1ec = (undefined4 **)0x65b4a3;
      (**(code **)*puVar3)();
    }
    (**(code **)(*(int *)(param_1 + 0x4cc) + 4))();
    *(undefined4 *)(param_1 + 0x4e0) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x4cc))();
  }
  ppuStack_1ec = (undefined4 **)0x65b4c8;
  pcStack_1a8 = operator_new(0x37c);
  if (pcStack_1a8 == (char *)0x0) {
    ppuStack_1d0 = (undefined **)0x0;
  }
  else {
    ppuStack_1d0 = (undefined **)FUN_00720df0((undefined4 *)pcStack_1a8);
  }
  (**(code **)(*(int *)(param_1 + 0x4cc) + 4))();
  *(undefined ***)(param_1 + 0x4e0) = ppuStack_1d0;
  (*(code *)**(undefined4 **)(param_1 + 0x4cc))();
  ppuStack_1ec = (undefined4 **)0x65b529;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x78))();
  ppuStack_1ec = (undefined4 **)0x1;
  puStack_1f0 = (undefined4 *)0x65b539;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0xfc))();
  puStack_1bc = *(undefined1 **)(param_1 + 0x4b0);
  pppuStack_1c4 = &ppuStack_1d0;
  puStack_1d4 = (undefined4 *)0x2;
  ppuStack_1cc = (undefined1 **)0x0;
  piStack_1c8 = (int *)0x0;
  ppuStack_1d0 = &PTR_FUN_00d18c2c;
  if (puStack_1bc != (undefined1 *)0x0) {
    piStack_1c8 = (int *)((int)puStack_1bc + 0x18);
    ppuStack_1cc = (undefined1 **)*piStack_1c8;
    *(undefined1 ****)(*piStack_1c8 + 4) = &ppuStack_1cc;
    *piStack_1c8 = (int)&ppuStack_1cc;
  }
  pcStack_1b8 = (char *)0xc0000000;
  uStack_1b4 = 0xc0000000;
  iVar1 = *(int *)(param_1 + 0x4e0);
  *(undefined4 *)(iVar1 + 0x7c) = 2;
  puStack_1f0 = (undefined4 *)0x65b5be;
  iStack_1d8 = iVar1;
  (**(code **)(*(int *)(iVar1 + 0x80) + 4))();
  *(undefined1 **)(iVar1 + 0x94) = puStack_1bc;
  puStack_1f0 = (undefined4 *)0x65b5cc;
  (*(code *)**(undefined4 **)(iVar1 + 0x80))();
  *(char **)(iStack_1d8 + 0x98) = pcStack_1b8;
  *(undefined4 *)(iStack_1d8 + 0x9c) = uStack_1b4;
  if (piStack_1c8 != (int *)0x0) {
    *piStack_1c8 = (int)ppuStack_1cc;
  }
  if (ppuStack_1cc != (undefined1 **)0x0) {
    ppuStack_1cc[1] = (undefined1 *)piStack_1c8;
  }
  puStack_1bc = *(undefined1 **)(param_1 + 0x4c8);
  pppuStack_1c4 = &ppuStack_1d0;
  puStack_1d4 = (undefined4 *)0x1;
  ppuStack_1cc = (undefined1 **)0x0;
  piStack_1c8 = (int *)0x0;
  ppuStack_1d0 = &PTR_FUN_00d18c2c;
  if (puStack_1bc != (undefined1 *)0x0) {
    piStack_1c8 = (int *)((int)puStack_1bc + 0x18);
    ppuStack_1cc = (undefined1 **)*piStack_1c8;
    *(undefined1 ****)(*piStack_1c8 + 4) = &ppuStack_1cc;
    *piStack_1c8 = (int)&ppuStack_1cc;
  }
  pcStack_1b8 = (char *)0xc0000000;
  uStack_1b4 = 0xc0000000;
  iVar1 = *(int *)(param_1 + 0x4e0);
  *(undefined4 *)(iVar1 + 0xc4) = 1;
  puStack_1f0 = (undefined4 *)0x65b689;
  iStack_1d8 = iVar1;
  (**(code **)(*(int *)(iVar1 + 200) + 4))();
  *(undefined1 **)(iVar1 + 0xdc) = puStack_1bc;
  puStack_1f0 = (undefined4 *)0x65b697;
  (*(code *)**(undefined4 **)(iVar1 + 200))();
  *(char **)(iStack_1d8 + 0xe0) = pcStack_1b8;
  *(undefined4 *)(iStack_1d8 + 0xe4) = uStack_1b4;
  if (piStack_1c8 != (int *)0x0) {
    *piStack_1c8 = (int)ppuStack_1cc;
  }
  if (ppuStack_1cc != (undefined1 **)0x0) {
    ppuStack_1cc[1] = (undefined1 *)piStack_1c8;
  }
  puStack_1f0 = (undefined4 *)0x41800000;
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x5c))();
  puStack_1bc = &stack0xfffffe04;
  FUN_0071fb50(*(void **)(param_1 + 0x4e0),0);
  puStack_1bc = &stack0xfffffe04;
  FUN_0071fc90(*(void **)(param_1 + 0x4e0),1.0);
  (**(code **)(**(int **)(param_1 + 0x4e0) + 0x18))();
  (**(code **)(*puVar5 + 0xc))();
  if ((iVar11 != 0) && (iVar11 != 1)) {
    puVar3 = operator_new(0x420);
    puStack_1d4 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      piVar7 = (int *)0x0;
      uStack_200 = param_1;
    }
    else {
      _Memory = &puStack_17c;
      puStack_17c = (undefined1 *)((uint)puStack_17c & 0xffff0000);
      puStack_180 = &lpType_0000000a;
      uVar6 = FUN_00ace02d((short *)&lpCaption_00d16918);
      FUN_004036d0(&stack0xfffffe78,(wchar_t *)&lpCaption_00d16918,uVar6);
      ppuStack_1cc = &puStack_1c0;
      puStack_1c0 = (undefined1 *)((uint)puStack_1c0 & 0xffffff00);
      piStack_1c8 = (int *)0x0;
      pppuStack_1c4 = (undefined ***)&DAT_00000014;
      _strncpy((char *)ppuStack_1cc,"button_goback.",0xe);
      piStack_1c8 = (int *)0xe;
      *(char *)((int)ppuStack_1cc + 0xe) = '\0';
      uStack_200 = param_1 | 0x60;
      uStack_160 = 0x14;
      piVar7 = FUN_0069fb10(puVar3,(int *)&ppuStack_1cc,(undefined4 *)&stack0xfffffe78,0x42800000,
                            0x42800000,0,0,0x3f800000,0x3f800000);
    }
    if (((uStack_200 & 0x40) != 0) &&
       (uStack_200 = uStack_200 & 0xffffffbf, &DAT_00000014 < pppuStack_1c4)) {
                    /* WARNING: Subroutine does not return */
      _free(ppuStack_1cc);
    }
    uStack_160 = 0xffffffff;
    if (((uStack_200 & 0x20) != 0) && (&lpType_0000000a < puStack_180)) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    (**(code **)(*piVar7 + 0x60))();
    (**(code **)(*piVar7 + 100))();
    pcVar10 = "ADVMMSCENEPICKER_CLOSE";
    (**(code **)(*piVar7 + 0x18))(0);
    (**(code **)(*piVar7 + 0x18))(5,&LAB_005f37f0,0,"ADVMMSCENEPICKER_CLOSE");
    ppuStack_1e0 = &puStack_1d4;
    puStack_1d4 = (undefined4 *)((uint)puStack_1d4 & 0xffffff00);
    uStack_1dc = 0;
    iStack_1d8 = 0x14;
    _strncpy((char *)ppuStack_1e0,"BUTTON_FLAG_BACK",0x10);
    uStack_1dc = 0x10;
    *(char *)(ppuStack_1e0 + 4) = '\0';
    puVar3 = FUN_009b5030((undefined4 *)&stack0xfffffdd0,&ppuStack_1e0);
    (**(code **)(*piVar7 + 0x90))(puVar3);
    if ((char *)0xa < pcVar10) {
                    /* WARNING: Subroutine does not return */
      _free(&LAB_0065ab40);
    }
    if (0x14 < uStack_1dc) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar4);
    }
    (**(code **)(**(int **)(param_1 + 0x408) + 0xc))(piVar7,1);
  }
  do {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x408) + 0x50))();
  } while (cVar2 != '\0');
  puStack_1d4 = operator_new(0x344);
  uStack_160 = 0x19;
  if (puStack_1d4 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_007432f0(puStack_1d4);
  }
  uStack_160 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x484) + 4))();
  *(undefined4 **)(param_1 + 0x498) = puVar3;
  (*(code *)**(undefined4 **)(param_1 + 0x484))();
  ppuStack_1e0 = *(undefined4 ***)(param_1 + 0x408);
  puStack_1f0 = (undefined4 *)0x0;
  ppuStack_1ec = (undefined4 **)0x0;
  if (ppuStack_1e0 != (undefined4 **)0x0) {
    ppuStack_1ec = ppuStack_1e0 + 6;
    puStack_1f0 = *ppuStack_1ec;
    (*ppuStack_1ec)[1] = &puStack_1f0;
    *ppuStack_1ec = &puStack_1f0;
  }
  uStack_1dc = 0xc1000000;
  iStack_1d8 = 0xc1000000;
  iVar11 = *(int *)(param_1 + 0x498);
  *(undefined4 *)(iVar11 + 0xa0) = 1;
  uStack_160 = 0x1a;
  (**(code **)(*(int *)(iVar11 + 0xa4) + 4))();
  *(undefined4 ***)(iVar11 + 0xb8) = ppuStack_1e0;
  (*(code *)**(undefined4 **)(iVar11 + 0xa4))();
  *(uint *)(iVar11 + 0xbc) = uStack_1dc;
  *(int *)(iVar11 + 0xc0) = iStack_1d8;
  if (ppuStack_1ec != (undefined4 **)0x0) {
    *ppuStack_1ec = puStack_1f0;
  }
  if (puStack_1f0 != (undefined4 *)0x0) {
    puStack_1f0[1] = ppuStack_1ec;
  }
  ppuStack_1e0 = *(undefined4 ***)(param_1 + 0x408);
  puStack_1f0 = (undefined4 *)0x0;
  ppuStack_1ec = (undefined4 **)0x0;
  if (ppuStack_1e0 != (undefined4 **)0x0) {
    ppuStack_1ec = ppuStack_1e0 + 6;
    puStack_1f0 = *ppuStack_1ec;
    (*ppuStack_1ec)[1] = &puStack_1f0;
    *ppuStack_1ec = &puStack_1f0;
  }
  uStack_1dc = 0xc1400000;
  iStack_1d8 = 0xc1400000;
  iVar11 = *(int *)(param_1 + 0x498);
  *(undefined4 *)(iVar11 + 0xe8) = 2;
  uStack_160 = 0x1b;
  (**(code **)(*(int *)(iVar11 + 0xec) + 4))();
  *(undefined4 ***)(iVar11 + 0x100) = ppuStack_1e0;
  (*(code *)**(undefined4 **)(iVar11 + 0xec))();
  *(uint *)(iVar11 + 0x104) = uStack_1dc;
  *(int *)(iVar11 + 0x108) = iStack_1d8;
  if (ppuStack_1ec != (undefined4 **)0x0) {
    *ppuStack_1ec = puStack_1f0;
  }
  if (puStack_1f0 != (undefined4 *)0x0) {
    puStack_1f0[1] = ppuStack_1ec;
  }
  ppuStack_1e0 = *(undefined4 ***)(param_1 + 0x408);
  puStack_1f0 = (undefined4 *)0x0;
  ppuStack_1ec = (undefined4 **)0x0;
  if (ppuStack_1e0 != (undefined4 **)0x0) {
    ppuStack_1ec = ppuStack_1e0 + 6;
    puStack_1f0 = *ppuStack_1ec;
    (*ppuStack_1ec)[1] = &puStack_1f0;
    *ppuStack_1ec = &puStack_1f0;
  }
  uStack_1dc = 0xc1000000;
  iStack_1d8 = 0xc1000000;
  iVar11 = *(int *)(param_1 + 0x498);
  *(undefined4 *)(iVar11 + 0x7c) = 1;
  uStack_160 = 0x1c;
  (**(code **)(*(int *)(iVar11 + 0x80) + 4))();
  *(undefined4 ***)(iVar11 + 0x94) = ppuStack_1e0;
  (*(code *)**(undefined4 **)(iVar11 + 0x80))();
  *(uint *)(iVar11 + 0x98) = uStack_1dc;
  *(int *)(iVar11 + 0x9c) = iStack_1d8;
  if (ppuStack_1ec != (undefined4 **)0x0) {
    *ppuStack_1ec = puStack_1f0;
  }
  if (puStack_1f0 != (undefined4 *)0x0) {
    puStack_1f0[1] = ppuStack_1ec;
  }
  ppuStack_1e0 = *(undefined4 ***)(param_1 + 0x408);
  puStack_1f0 = (undefined4 *)0x0;
  ppuStack_1ec = (undefined4 **)0x0;
  if (ppuStack_1e0 != (undefined4 **)0x0) {
    ppuStack_1ec = ppuStack_1e0 + 6;
    puStack_1f0 = *ppuStack_1ec;
    (*ppuStack_1ec)[1] = &puStack_1f0;
    *ppuStack_1ec = &puStack_1f0;
  }
  uStack_1dc = 0xc1400000;
  iStack_1d8 = 0xc1400000;
  iVar11 = *(int *)(param_1 + 0x498);
  *(undefined4 *)(iVar11 + 0xc4) = 2;
  uStack_160 = 0x1d;
  (**(code **)(*(int *)(iVar11 + 200) + 4))();
  *(undefined4 ***)(iVar11 + 0xdc) = ppuStack_1e0;
  (*(code *)**(undefined4 **)(iVar11 + 200))();
  *(uint *)(iVar11 + 0xe0) = uStack_1dc;
  *(int *)(iVar11 + 0xe4) = iStack_1d8;
  uStack_160 = 0xffffffff;
  if (ppuStack_1ec != (undefined4 **)0x0) {
    *ppuStack_1ec = puStack_1f0;
  }
  if (puStack_1f0 != (undefined4 *)0x0) {
    puStack_1f0[1] = ppuStack_1ec;
  }
  ppuStack_1e0 = (undefined4 **)0x0;
  puStack_1f0 = (undefined4 *)0x0;
  ppuStack_1ec = (undefined4 **)0x0;
  *(uint *)(*(int *)(param_1 + 0x498) + 0x114) = *(uint *)(*(int *)(param_1 + 0x498) + 0x114) | 8;
  (**(code **)(**(int **)(param_1 + 0x498) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x3f0) + 0xc))();
  ExceptionList = puStack_180;
  return;
}


//// FUNCTION FUN_0065bd80 @ 0065bd80 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0065bd80(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint unaff_EBP;
  undefined1 *unaff_EDI;
  bool bVar9;
  float10 fVar10;
  undefined4 *puStack_148;
  float *_Dest;
  uint uStack_110;
  float afStack_10c [2];
  uint uStack_104;
  undefined4 *puStack_100;
  float fStack_fc;
  undefined1 *puStack_f8;
  float *pfStack_f4;
  uint *_Dest_00;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *puStack_e0;
  int iStack_dc;
  uint *puStack_d8;
  undefined4 *puStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  char *pcStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  char acStack_80 [24];
  undefined4 uStack_68;
  undefined4 uStack_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3375;
  pvStack_c = ExceptionList;
  puVar8 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  FUN_0064e610(param_1);
  if ((_DAT_00f88708 == 1.0) && (DAT_00f88720 != (void *)0x0)) {
    FUN_00450d60(DAT_00f88720,1);
  }
  puVar4 = operator_new(0x344);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007432f0(puVar4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x3f4) + 4))();
  *(undefined4 **)(param_1 + 0x408) = puVar4;
  (*(code *)**(undefined4 **)(param_1 + 0x3f4))();
  *(uint *)(*(int *)(param_1 + 0x408) + 0x114) = *(uint *)(*(int *)(param_1 + 0x408) + 0x114) | 8;
  pvVar5 = operator_new(0x288);
  local_4 = 1;
  if (pvVar5 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    pcStack_8c = acStack_80;
    acStack_80[0] = '\0';
    uStack_88 = 0;
    uStack_84 = 0x20;
    pcStack_8c = _malloc(0x20);
    uStack_c4 = 0x65be88;
    _strncpy(pcStack_8c,"ui/buildmenu_window.dds",0x17);
    uStack_88 = 0x17;
    pcStack_8c[0x17] = '\0';
    local_4 = CONCAT31(local_4._1_3_,2);
    puVar4 = FUN_005e8fd0(pvVar5,&pcStack_8c);
  }
  local_4 = 0xffffffff;
  if ((pvVar5 != (void *)0x0) && (0x14 < uStack_84)) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_8c);
  }
  puVar4[0x9c] = 0x41400000;
  puVar4[0x9d] = 0x41400000;
  puVar4[0x9b] = 0x42000000;
  puVar4[0x9e] = 0x41c00000;
  puVar4[0x9f] = 0x41c00000;
  (**(code **)(**(int **)(param_1 + 0x408) + 0xa0))();
  uStack_c4 = 0x65bf3f;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x60))();
  uStack_c8 = *(undefined4 *)(param_1 + 0x3f0);
  uStack_c4 = 0x41a00000;
  uStack_cc = 2;
  uStack_d0 = 0x65bf58;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x68))();
  uStack_d0 = 0x42820000;
  puStack_d4 = (undefined4 *)0x65bf68;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x7c))();
  puStack_d4 = (undefined4 *)0x44138000;
  puStack_d8 = (uint *)0x65bf78;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x78))();
  puStack_d8 = (uint *)0xd33c08;
  puStack_e0 = &LAB_0064fd80;
  uStack_e4 = 5;
  iStack_dc = param_1;
  (**(code **)(**(int **)(param_1 + 0x408) + 0x18))();
  uStack_e8 = 1;
  (**(code **)(**(int **)(param_1 + 0x3f0) + 0xc))();
  pfStack_f4 = (float *)0x65bfad;
  puStack_d4 = operator_new(0x344);
  uStack_40 = 4;
  if (puStack_d4 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = FUN_007432f0(puStack_d4);
  }
  pfStack_f4 = *(float **)(param_1 + 0x408);
  _Dest_00 = (uint *)0x0;
  puStack_f8 = (undefined1 *)0x1;
  uStack_40 = 0xffffffff;
  fStack_fc = 9.344232e-39;
  (**(code **)(*piVar6 + 100))();
  puStack_100 = *(undefined4 **)(param_1 + 0x408);
  fStack_fc = 0.0;
  uStack_104 = 1;
  afStack_10c[1] = 9.344255e-39;
  (**(code **)(*piVar6 + 0x5c))();
  afStack_10c[1] = 128.0;
  afStack_10c[0] = 9.344272e-39;
  (**(code **)(*piVar6 + 0x78))();
  iVar2 = *piVar6;
  afStack_10c[0] = 9.34429e-39;
  fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
  afStack_10c[0] = (float)fVar10;
  (**(code **)(iVar2 + 0x7c))();
  uStack_110 = 1;
  (**(code **)(**(int **)(param_1 + 0x408) + 0xc))();
  fVar10 = (float10)(**(code **)(*piVar6 + 0x10))();
  fStack_fc = (float)((fVar10 * (float10)0.5 - (float10)64.0) * (float10)0.5);
  fVar10 = (float10)(**(code **)(*piVar6 + 0x14))();
  puVar4 = *(undefined4 **)(param_1 + 0x4b0);
  pfStack_f4 = (float *)(float)(fVar10 * (float10)0.5 - (float10)32.0);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(*(int *)(param_1 + 0x49c) + 4))();
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x49c))();
  }
  pvVar5 = operator_new(0x420);
  if (pvVar5 == (void *)0x0) {
    puStack_100 = (undefined4 *)0x0;
  }
  else {
    unaff_EDI = &stack0xffffff5c;
    unaff_EBP = 10;
    puStack_100 = pvVar5;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&stack0xffffff50,(wchar_t *)&lpCaption_00d16918,uVar7);
    _Dest_00 = &uStack_e4;
    uStack_104 = uStack_104 | 2;
    uStack_e4 = uStack_e4 & 0xffffff00;
    uStack_e8 = 0x14;
    _strncpy((char *)_Dest_00,"button_left.",0xc);
    *(char *)(_Dest_00 + 3) = '\0';
    puStack_f8 = &stack0xfffffedc;
    uStack_104 = uStack_104 | 4;
    uStack_68 = 7;
    puStack_100 = FUN_0069fb10(pvVar5,(int *)&stack0xffffff10,(undefined4 *)&stack0xffffff50,
                               0x42800000,0x42800000,0,0,0x3f800000,0x3f800000);
  }
  uStack_68 = 9;
  (**(code **)(*(int *)(param_1 + 0x49c) + 4))();
  *(undefined4 **)(param_1 + 0x4b0) = puStack_100;
  (*(code *)**(undefined4 **)(param_1 + 0x49c))();
  if (((uStack_104 & 4) != 0) && (uStack_104 = uStack_104 & 0xfffffffb, 0x14 < uStack_e8)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest_00);
  }
  uStack_68 = 0xffffffff;
  if (((uStack_104 & 2) != 0) && (uStack_104 = uStack_104 & 0xfffffffd, 10 < unaff_EBP)) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  _Dest = pfStack_f4;
  (**(code **)(**(int **)(param_1 + 0x4b0) + 100))();
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x5c))();
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x4b0) + 0x18))();
  puVar4 = *(undefined4 **)(param_1 + 0x4c8);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(*(int *)(param_1 + 0x4b4) + 4))();
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    (*(code *)**(undefined4 **)(param_1 + 0x4b4))();
  }
  pvVar5 = operator_new(0x420);
  bVar9 = pvVar5 == (void *)0x0;
  if (bVar9) {
    puStack_148 = (undefined4 *)0x0;
  }
  else {
    puStack_d8 = &uStack_cc;
    uStack_cc = uStack_cc & 0xffff0000;
    puStack_d4 = (undefined4 *)0x0;
    uStack_d0 = 10;
    uVar7 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&puStack_d8,(wchar_t *)&lpCaption_00d16918,uVar7);
    _Dest = afStack_10c;
    afStack_10c[0] = (float)((uint)afStack_10c[0] & 0xffffff00);
    uStack_110 = 0x14;
    _strncpy((char *)_Dest,"button_right.",0xd);
    *(char *)((int)_Dest + 0xd) = '\0';
    puStack_148 = FUN_0069fb10(pvVar5,(int *)&stack0xfffffee8,&puStack_d8,0x42800000,0x42800000,0,0,
                               0x3f800000,0x3f800000);
  }
  (**(code **)(*(int *)(param_1 + 0x4b4) + 4))();
  *(undefined4 **)(param_1 + 0x4c8) = puStack_148;
  (*(code *)**(undefined4 **)(param_1 + 0x4b4))();
  if ((!bVar9) && (0x14 < uStack_110)) {
                    /* WARNING: Subroutine does not return */
    _free(_Dest);
  }
  if ((!bVar9) && (10 < uStack_d0)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_d8);
  }
  (**(code **)(**(int **)(param_1 + 0x4c8) + 100))();
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x60))(2,piVar6);
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))
            (3,&LAB_0065ac30,param_1,"BUILDBUTTONITEM_LISTDOWN");
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))
            (0,&LAB_005f37f0,param_1,"BUILDBUTTONITEM_LISTDOWN");
  (**(code **)(**(int **)(param_1 + 0x4c8) + 0x18))(5,&LAB_005f37f0,0,"BUILDBUTTONITEM_LISTDOWN");
  (**(code **)(*piVar6 + 0xc))(*(undefined4 *)(param_1 + 0x4b0),1);
  (**(code **)(*piVar6 + 0xc))(*(undefined4 *)(param_1 + 0x4c8),1);
  do {
    cVar3 = (**(code **)(**(int **)(param_1 + 0x408) + 0x50))(1);
  } while (cVar3 != '\0');
  puVar4 = operator_new(0x344);
  afStack_10c[1] = 2.10195e-44;
  if (puVar4 != (undefined4 *)0x0) {
    puVar8 = FUN_007432f0(puVar4);
  }
  afStack_10c[1] = -NAN;
  (**(code **)(*(int *)(param_1 + 0x484) + 4))();
  *(undefined4 **)(param_1 + 0x498) = puVar8;
  (*(code *)**(undefined4 **)(param_1 + 0x484))();
  iVar2 = **(int **)(param_1 + 0x498);
  fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x10))();
  (**(code **)(iVar2 + 0x78))((float)(fVar10 + (float10)28.0));
  iVar2 = **(int **)(param_1 + 0x498);
  fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x408) + 0x14))();
  (**(code **)(iVar2 + 0x7c))((float)(fVar10 + (float10)28.0));
  (**(code **)(**(int **)(param_1 + 0x498) + 100))(1,*(undefined4 *)(param_1 + 0x408),0xc1000000);
  (**(code **)(**(int **)(param_1 + 0x498) + 0x5c))(1,*(undefined4 *)(param_1 + 0x408),0xc1000000);
  *(uint *)(*(int *)(param_1 + 0x498) + 0x114) = *(uint *)(*(int *)(param_1 + 0x498) + 0x114) | 8;
  (**(code **)(**(int **)(param_1 + 0x498) + 0x18))
            (5,&LAB_0064fd80,param_1,"BUILDBUTTONITEM_PICKER");
  (**(code **)(**(int **)(param_1 + 0x3f0) + 0xc))(*(undefined4 *)(param_1 + 0x498),2);
  ExceptionList = puStack_148;
  return;
}


//// FUNCTION FUN_0065c5e0 @ 0065c5e0 ////

void __fastcall FUN_0065c5e0(void *param_1)

{
  FUN_0065ac70((uint)param_1);
  *(undefined4 *)((int)param_1 + 0x348) = 0;
  DAT_00e566c4 = 0;
  FUN_006409e0(*(void **)((int)param_1 + 0x528),2);
  FUN_006520a0(param_1,*(int *)((int)param_1 + 0x408));
  FUN_006501f0((int)param_1);
  FUN_00654d50(param_1,'\0');
  FUN_0064e9d0((int)param_1);
  FUN_0064ebb0((int)param_1);
  return;
}


//// FUNCTION FUN_0065c650 @ 0065c650 ////

void __fastcall FUN_0065c650(void *param_1)

{
  FUN_0065ac70((uint)param_1);
  *(undefined4 *)((int)param_1 + 0x348) = 1;
  DAT_00e566c4 = 1;
  FUN_006409e0(*(void **)((int)param_1 + 0x528),3);
  FUN_006520a0(param_1,*(int *)((int)param_1 + 0x408));
  FUN_006502a0((int)param_1);
  FUN_006550f0(param_1,'\0');
  FUN_0064e9d0((int)param_1);
  FUN_0064ebb0((int)param_1);
  return;
}


//// FUNCTION FUN_0065c6c0 @ 0065c6c0 ////

void __fastcall FUN_0065c6c0(void *param_1)

{
  FUN_0065bd80((int)param_1);
  *(undefined4 *)((int)param_1 + 0x348) = 3;
  DAT_00e566c4 = 3;
  FUN_006409e0(*(void **)((int)param_1 + 0x528),4);
  FUN_006520a0(param_1,*(int *)((int)param_1 + 0x408));
  FUN_00650350((int)param_1);
  FUN_00655470(param_1);
  FUN_0064ebb0((int)param_1);
  return;
}


//// FUNCTION FUN_0065c710 @ 0065c710 ////

void __fastcall FUN_0065c710(void *param_1)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined8 local_80;
  int iStack_78;
  int iStack_74;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  char *local_58;
  undefined4 local_54;
  uint local_50;
  char local_4c [20];
  char *local_38;
  undefined4 local_34;
  uint local_30;
  char local_2c [16];
  void *local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00cc33d0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0065bd80((int)param_1);
  *(undefined4 *)((int)param_1 + 0x348) = 3;
  DAT_00e566c4 = 7;
  FUN_006520a0(param_1,*(int *)((int)param_1 + 0x408));
  FUN_006548a0((int)param_1);
  FUN_0078df70(0);
  local_38 = local_2c;
  *(undefined4 *)((int)param_1 + 0x538) = 5;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x20;
  local_38 = _malloc(0x20);
  _strncpy(local_38,"landscape_tooltip_path1",0x17);
  local_34 = 0x17;
  local_38[0x17] = '\0';
  local_58 = local_4c;
  local_c = 0;
  local_4c[0] = '\0';
  local_54 = 0;
  local_50 = 0x14;
  _strncpy(local_58,"terrain_path",0xc);
  local_54 = 0xc;
  local_58[0xc] = '\0';
  local_c = CONCAT31(local_c._1_3_,1);
  local_6c = FUN_00651b80(param_1,&local_58);
  if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_58 = local_4c;
  local_4c[0] = '\0';
  local_54 = 0;
  local_50 = 0x20;
  local_58 = _malloc(0x20);
  _strncpy(local_58,"landscape_tooltip_deletepath",0x1c);
  local_54 = 0x1c;
  local_58[0x1c] = '\0';
  local_38 = local_2c;
  local_c = 2;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x14;
  _strncpy(local_38,"terrain_pathdelete",0x12);
  local_34 = 0x12;
  local_38[0x12] = '\0';
  local_c = CONCAT31(local_c._1_3_,3);
  local_68 = FUN_00651b80(param_1,&local_38);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  local_58 = local_4c;
  local_4c[0] = '\0';
  local_54 = 0;
  local_50 = 0x20;
  local_58 = _malloc(0x20);
  _strncpy(local_58,"landscape_tooltip_grass",0x17);
  local_54 = 0x17;
  local_58[0x17] = '\0';
  local_38 = local_2c;
  local_c = 4;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x14;
  _strncpy(local_38,"terrain_grass",0xd);
  local_34 = 0xd;
  local_38[0xd] = '\0';
  local_c = CONCAT31(local_c._1_3_,5);
  local_64 = FUN_00651b80(param_1,&local_38);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  local_58 = local_4c;
  local_4c[0] = '\0';
  local_54 = 0;
  local_50 = 0x20;
  local_58 = _malloc(0x20);
  _strncpy(local_58,"landscape_tooltip_sand",0x16);
  local_54 = 0x16;
  local_58[0x16] = '\0';
  local_38 = local_2c;
  local_c = 6;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x14;
  _strncpy(local_38,"terrain_rock",0xc);
  local_34 = 0xc;
  local_38[0xc] = '\0';
  local_c = CONCAT31(local_c._1_3_,7);
  local_60 = FUN_00651b80(param_1,&local_38);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  local_58 = local_4c;
  local_4c[0] = '\0';
  local_54 = 0;
  local_50 = 0x20;
  local_58 = _malloc(0x20);
  _strncpy(local_58,"landscape_tooltip_concrete",0x1a);
  local_54 = 0x1a;
  local_58[0x1a] = '\0';
  local_38 = local_2c;
  local_c = 8;
  local_2c[0] = '\0';
  local_34 = 0;
  local_30 = 0x14;
  _strncpy(local_38,"terrain_concrete",0x10);
  local_34 = 0x10;
  local_38[0x10] = '\0';
  local_c = CONCAT31(local_c._1_3_,9);
  local_5c = FUN_00651b80(param_1,&local_38);
  if (0x14 < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_38);
  }
  local_c = 0xffffffff;
  if (0x14 < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_58);
  }
  local_6c[0x159] = 0;
  local_68[0x159] = 1;
  local_64[0x159] = 2;
  local_60[0x159] = 3;
  local_5c[0x159] = 4;
  if (DAT_0104d970 == '\0') {
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_84 = 0;
    piVar1 = (int *)GetPlayerStudio();
    puVar2 = (uint *)(**(code **)(*piVar1 + 0x24))(&local_80);
    local_88 = *puVar2;
    local_84 = puVar2[1];
    FUN_00471b10((longlong *)&local_88);
    puVar3 = FUN_0078c5b0(DAT_0104e720,&local_80,0);
    local_90 = (uint)*puVar3;
    local_8c = *(int *)((int)puVar3 + 4);
    FUN_00471b10((longlong *)&local_90);
    local_80._0_4_ = local_88 - local_90;
    local_80._4_4_ = (local_84 - local_8c) - (uint)(local_88 < local_90);
    FUN_00471b10(&local_80);
    if ((float)CONCAT44(local_80._4_4_,(int)local_80) * 1.1920929e-07 < 0.0) {
      (**(code **)(*local_6c + 0xc0))(0);
    }
    puVar3 = FUN_0078c5b0(DAT_0104e720,&local_80,1);
    local_90 = (uint)*puVar3;
    local_8c = *(int *)((int)puVar3 + 4);
    FUN_00471b10((longlong *)&local_90);
    local_80._0_4_ = local_88 - local_90;
    local_80._4_4_ = (local_84 - local_8c) - (uint)(local_88 < local_90);
    FUN_00471b10(&local_80);
    if ((float)CONCAT44(local_80._4_4_,(int)local_80) * 1.1920929e-07 < 0.0) {
      (**(code **)(*local_68 + 0xc0))(0);
    }
    puVar3 = FUN_0078c5b0(DAT_0104e720,&local_80,2);
    local_90 = (uint)*puVar3;
    local_8c = *(int *)((int)puVar3 + 4);
    FUN_00471b10((longlong *)&local_90);
    local_80._0_4_ = local_88 - local_90;
    local_80._4_4_ = (local_84 - local_8c) - (uint)(local_88 < local_90);
    FUN_00471b10(&local_80);
    if ((float)CONCAT44(local_80._4_4_,(int)local_80) * 1.1920929e-07 < 0.0) {
      (**(code **)(*local_64 + 0xc0))(0);
    }
    puVar3 = FUN_0078c5b0(DAT_0104e720,&local_80,3);
    local_90 = (uint)*puVar3;
    local_8c = *(int *)((int)puVar3 + 4);
    FUN_00471b10((longlong *)&local_90);
    local_80._0_4_ = local_88 - local_90;
    local_80._4_4_ = (local_84 - local_8c) - (uint)(local_88 < local_90);
    FUN_00471b10(&local_80);
    if ((float)CONCAT44(local_80._4_4_,(int)local_80) * 1.1920929e-07 < 0.0) {
      (**(code **)(*local_60 + 0xc0))(0);
    }
    puVar3 = FUN_0078c5b0(DAT_0104e720,&local_80,4);
    local_90 = (uint)*puVar3;
    local_8c = *(int *)((int)puVar3 + 4);
    FUN_00471b10((longlong *)&local_90);
    iStack_78 = local_88 - local_90;
    iStack_74 = (local_84 - local_8c) - (uint)(local_88 < local_90);
    FUN_00471b10((longlong *)&iStack_78);
    if ((float)CONCAT44(iStack_74,iStack_78) * 1.1920929e-07 < 0.0) {
      (**(code **)(*local_5c + 0xc0))(0);
    }
  }
  FUN_0064ace0(*(void **)((int)param_1 + 0x528),(int)&local_6c);
  (**(code **)(**(int **)((int)param_1 + 0x4b0) + 0xc0))(0);
  (**(code **)(**(int **)((int)param_1 + 0x4c8) + 0xc0))(0);
  *(undefined4 *)((int)param_1 + 0x540) = 5;
  ExceptionList = local_1c;
  return;
}


//// FUNCTION FUN_0065cef0 @ 0065cef0 ////

void __fastcall FUN_0065cef0(void *param_1)

{
  FUN_0065ac70((uint)param_1);
  *(undefined4 *)((int)param_1 + 0x348) = 2;
  DAT_00e566c4 = 2;
  FUN_006520a0(param_1,*(int *)((int)param_1 + 0x408));
  FUN_00651a70((int)param_1);
  if (DAT_0104d8e8 != 0) {
    *(undefined4 *)((int)param_1 + 0x534) = *(undefined4 *)(DAT_0104d8e8 + 0x380);
  }
  FUN_00655610(param_1);
  FUN_0064ebb0((int)param_1);
  return;
}


//// FUNCTION FUN_0065cf60 @ 0065cf60 ////

void __thiscall FUN_0065cf60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
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
  puStack_8 = &LAB_00cc33e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004015d0((void *)((int)this + 0x39c),(char *)*param_1,param_1[1]);
  local_4c = local_40;
  local_40[0] = '\0';
  local_48 = 0;
  local_44 = 0x14;
  _strncpy(local_4c,"TUTORIAL_HEADER",0xf);
  local_48 = 0xf;
  local_4c[0xf] = '\0';
  local_4 = 0;
  puVar1 = FUN_009b5030(local_2c,&local_4c);
  FUN_004036d0((void *)((int)this + 0x37c),(wchar_t *)*puVar1,puVar1[1]);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c[0]);
  }
  local_4 = 0xffffffff;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  FUN_0065ac70((uint)this);
  *(undefined4 *)((int)this + 0x348) = 6;
  DAT_00e566c4 = 6;
  FUN_006520a0(this,*(int *)((int)this + 0x408));
  FUN_006587c0((int)this);
  if (*(int *)((int)this + 0x3d0) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)((int)this + 0x3d4) - *(int *)((int)this + 0x3d0)) / 0xc0;
  }
  *(int *)((int)this + 0x540) = iVar2;
  FUN_0065a2a0(this);
  FUN_0064ebb0((int)this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0065d0c0 @ 0065d0c0 ////

void __thiscall FUN_0065d0c0(void *this,char param_1,char param_2)

{
  uint _Count;
  wchar_t *_Source;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_58 [2];
  void *local_50 [2];
  uint local_48;
  wchar_t *local_30;
  uint local_2c;
  uint local_28;
  wchar_t local_24 [10];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3410;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065ac70((uint)this);
  *(undefined4 *)((int)this + 0x348) = 4;
  DAT_00e566c4 = 4;
  FUN_006520a0(this,*(int *)((int)this + 0x408));
  if (DAT_0104d8e8 != 0) {
    *(undefined4 *)((int)this + 0x534) = *(undefined4 *)(DAT_0104d8e8 + 900);
  }
  if (DAT_0104dff8 != 0) {
    *(undefined4 *)((int)this + 0x534) = *(undefined4 *)(DAT_0104dff8 + 0x344);
  }
  FUN_00655b00(*(void **)(*(int *)((int)this + 0x374) + 4));
  *(int *)(*(int *)((int)this + 0x374) + 4) = *(int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x374) = *(undefined4 *)((int)this + 0x374);
  *(int *)(*(int *)((int)this + 0x374) + 8) = *(int *)((int)this + 0x374);
  *(undefined4 *)((int)this + 0x540) = 0;
  iVar4 = 0;
  iVar1 = FUN_009f41d0();
  if (0 < iVar1) {
    do {
      uVar2 = FUN_009f46a0(iVar4);
      if (((char)uVar2 == '\0') || (param_1 != '\0')) {
        uVar2 = FUN_009f4700(iVar4);
        if (((char)uVar2 == '\0') || (param_2 != '\0')) {
          puVar3 = FUN_009f4760(local_50,iVar4);
          local_30 = local_24;
          local_24[0] = L'\0';
          local_2c = 0;
          local_28 = 10;
          _Count = puVar3[1];
          local_4 = 0;
          _Source = (wchar_t *)*puVar3;
          if (9 < _Count) {
            local_28 = _Count + 0x20 & 0xffffffe0;
            local_30 = _malloc(local_28 * 2);
          }
          _wcsncpy(local_30,_Source,_Count);
          local_30[_Count] = L'\0';
          local_4 = CONCAT31(local_4._1_3_,1);
          local_2c = _Count;
          local_10 = iVar4;
          FUN_00656d70((void *)((int)this + 0x370),local_58,&local_30);
          if (10 < local_28) {
                    /* WARNING: Subroutine does not return */
            _free(local_30);
          }
          local_4 = 0xffffffff;
          if (10 < local_48) {
                    /* WARNING: Subroutine does not return */
            _free(local_50[0]);
          }
          *(int *)((int)this + 0x540) = *(int *)((int)this + 0x540) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_009f41d0();
    } while (iVar4 < iVar1);
  }
  FUN_00655850((int)this);
  FUN_0064ebb0((int)this);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0065d2c0 @ 0065d2c0 ////

void __thiscall FUN_0065d2c0(void *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  char *pcVar2;
  uint _Count;
  wchar_t *_Source;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puStack_c8;
  undefined1 auStack_c4 [4];
  undefined4 *puStack_c0;
  undefined4 *puStack_bc;
  undefined4 uStack_b8;
  char *pcStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  char acStack_a8 [20];
  wchar_t *pwStack_94;
  uint uStack_90;
  uint uStack_8c;
  wchar_t awStack_88 [10];
  char *pcStack_74;
  uint uStack_70;
  uint uStack_6c;
  char acStack_68 [20];
  wchar_t *pwStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined4 auStack_34 [2];
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3451;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x358) + 4))();
  *(undefined4 *)((int)this + 0x36c) = param_2;
  (*(code *)**(undefined4 **)((int)this + 0x358))();
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) | 8;
  FUN_0065ac70((uint)this);
  *(undefined4 *)((int)this + 0x348) = 5;
  DAT_00e566c4 = 5;
  FUN_006520a0(this,*(int *)((int)this + 0x408));
  FUN_00655ac0(*(void **)(*(int *)((int)this + 0x350) + 4));
  *(int *)(*(int *)((int)this + 0x350) + 4) = *(int *)((int)this + 0x350);
  *(undefined4 *)((int)this + 0x354) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 0x350) = *(undefined4 *)((int)this + 0x350);
  *(int *)(*(int *)((int)this + 0x350) + 8) = *(int *)((int)this + 0x350);
  puStack_c0 = (undefined4 *)0x0;
  puStack_bc = (undefined4 *)0x0;
  uStack_b8 = 0;
  iStack_4 = 0;
  iVar3 = FUN_004ca950(param_1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != *(undefined4 **)(iVar3 + 8)) {
    do {
      FUN_004bbbb0((void *)*puVar4,auStack_c4);
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(iVar3 + 8));
  }
  puStack_c8 = puStack_c0;
  if (puStack_c0 != puStack_bc) {
    do {
      uVar1 = puStack_c8[1];
      pcVar2 = (char *)*puStack_c8;
      pcStack_b4 = acStack_a8;
      acStack_a8[0] = '\0';
      uStack_b0 = 0;
      uStack_ac = 0x14;
      if (0x13 < uVar1) {
        uStack_ac = uVar1 + 0x20 & 0xffffffe0;
        pcStack_b4 = _malloc(uStack_ac);
      }
      _strncpy(pcStack_b4,pcVar2,uVar1);
      pcStack_b4[uVar1] = '\0';
      uStack_b0 = uVar1;
      puVar4 = FUN_0040d6b0(apvStack_2c,"metaprop_",&pcStack_b4);
      iStack_4 = CONCAT31(iStack_4._1_3_,2);
      FUN_009b5030(&pwStack_54,puVar4);
      uVar1 = uStack_50;
      _Source = pwStack_54;
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      pwStack_94 = awStack_88;
      awStack_88[0] = L'\0';
      uStack_90 = 0;
      uStack_8c = 10;
      if (9 < uStack_50) {
        uStack_8c = uStack_50 + 0x20 & 0xffffffe0;
        pwStack_94 = _malloc(uStack_8c * 2);
      }
      _wcsncpy(pwStack_94,_Source,uVar1);
      _Count = uStack_b0;
      pcVar2 = pcStack_b4;
      uStack_90 = uVar1;
      pwStack_94[uVar1] = L'\0';
      pcStack_74 = acStack_68;
      acStack_68[0] = '\0';
      uStack_70 = 0;
      uStack_6c = 0x14;
      if (0x13 < uStack_b0) {
        uStack_6c = uStack_b0 + 0x20 & 0xffffffe0;
        pcStack_74 = _malloc(uStack_6c);
      }
      _strncpy(pcStack_74,pcVar2,_Count);
      uStack_70 = _Count;
      pcStack_74[_Count] = '\0';
      iStack_4._0_1_ = 5;
      FUN_00656cb0((void *)((int)this + 0x34c),auStack_34,&pwStack_94);
      if (0x14 < uStack_6c) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_74);
      }
      if (10 < uStack_8c) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_94);
      }
      if (10 < uStack_4c) {
                    /* WARNING: Subroutine does not return */
        _free(pwStack_54);
      }
      iStack_4 = (uint)iStack_4._1_3_ << 8;
      if (0x14 < uStack_ac) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_b4);
      }
      puStack_c8 = puStack_c8 + 8;
    } while (puStack_c8 != puStack_bc);
  }
  *(undefined4 *)((int)this + 0x540) = *(undefined4 *)((int)this + 0x354);
  FUN_006559e0(this);
  FUN_0064ebb0((int)this);
  puVar4 = puStack_c0;
  if (puStack_c0 == (undefined4 *)0x0) {
    ExceptionList = pvStack_c;
    return;
  }
  while( true ) {
    if (puVar4 == puStack_bc) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_c0);
    }
    if (0x14 < (uint)puVar4[2]) break;
    puVar4 = puVar4 + 8;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)*puVar4);
}


//// FUNCTION FUN_0065d620 @ 0065d620 ////

void __fastcall FUN_0065d620(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_00f87aa0 != 0) {
    bVar2 = FUN_00413cc0(DAT_00f87aa0);
    if ((bVar2) && (param_1[0xd2] != 8)) {
      FUN_00470a70(DAT_0104917c,param_1[0x14a],0x283,0,0);
    }
  }
  iVar1 = param_1[0xd2];
  if (iVar1 == 0) {
    iVar1 = param_1[0x150];
    FUN_006501f0((int)param_1);
    if (iVar1 != param_1[0x150]) {
      FUN_0065c5e0(param_1);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = param_1[0x150];
    FUN_006502a0((int)param_1);
    if (iVar1 != param_1[0x150]) {
      FUN_0065c650(param_1);
      WWindow_Tick(param_1);
      return;
    }
  }
  else if ((iVar1 == 3) && (param_1[0x151] != 4)) {
    iVar1 = param_1[0x150];
    FUN_00650350((int)param_1);
    if (iVar1 != param_1[0x150]) {
      FUN_00655470(param_1);
      FUN_0064ebb0((int)param_1);
      WWindow_Tick(param_1);
      return;
    }
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_0065d700 @ 0065d700 ////

void FUN_0065d700(void)

{
  return;
}


//// FUNCTION FUN_0065d710 @ 0065d710 ////

void FUN_0065d710(void)

{
  return;
}


//// FUNCTION FUN_0065d720 @ 0065d720 ////

void __thiscall FUN_0065d720(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x4d0) = param_1;
  return;
}


//// FUNCTION FUN_0065d730 @ 0065d730 ////

void __thiscall FUN_0065d730(void *this,undefined1 param_1)

{
  *(undefined1 *)((int)this + 0x56e) = param_1;
  return;
}


//// FUNCTION FUN_0065d740 @ 0065d740 ////

undefined4 __fastcall FUN_0065d740(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4cc);
}


//// FUNCTION FUN_0065d760 @ 0065d760 ////

void __fastcall FUN_0065d760(int param_1)

{
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  return;
}


//// FUNCTION FUN_0065d770 @ 0065d770 ////

int * __thiscall FUN_0065d770(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))();
  *(int *)((int)this + 0x14) = param_1;
  (*(code *)**(undefined4 **)this)();
  return this;
}


//// FUNCTION FUN_0065d940 @ 0065d940 ////

void __cdecl FUN_0065d940(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x25);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x25);
  }
  return;
}


//// FUNCTION FUN_0065d960 @ 0065d960 ////

void __cdecl FUN_0065d960(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  cVar1 = *(char *)((int)piVar2 + 0x25);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return;
}


//// FUNCTION FUN_0065d990 @ 0065d990 ////

void __fastcall FUN_0065d990(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (*(char *)((int)piVar4 + 0x25) != '\0') {
    *param_1 = piVar4[2];
    return;
  }
  iVar2 = *piVar4;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    cVar1 = *(char *)(*(int *)(iVar2 + 8) + 0x25);
    iVar3 = *(int *)(iVar2 + 8);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x25);
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
    *param_1 = iVar2;
    return;
  }
  piVar4 = (int *)piVar4[1];
  if (*(char *)((int)piVar4 + 0x25) == '\0') {
    do {
      if (*param_1 != *piVar4) break;
      *param_1 = (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (*(char *)((int)piVar4 + 0x25) == '\0');
    if (*(char *)((int)piVar4 + 0x25) == '\0') {
      *param_1 = (int)piVar4;
    }
  }
  return;
}


//// FUNCTION FUN_0065da90 @ 0065da90 ////

void __thiscall FUN_0065da90(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x424) + 4))();
  *(undefined4 *)((int)this + 0x438) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x424))();
  return;
}


//// FUNCTION FUN_0065dac0 @ 0065dac0 ////

void __thiscall FUN_0065dac0(void *this,undefined4 param_1)

{
  (**(code **)(*(int *)((int)this + 0x43c) + 4))();
  *(undefined4 *)((int)this + 0x450) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x43c))();
  return;
}


//// FUNCTION FUN_0065db00 @ 0065db00 ////

void __thiscall FUN_0065db00(void *this,char *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)((int)this + 0x5b4) == 0) {
    piVar2 = FUN_005e90f0(param_1);
    (**(code **)(*(int *)((int)this + 0x5a0) + 4))();
    *(int **)((int)this + 0x5b4) = piVar2;
    (*(code *)**(undefined4 **)((int)this + 0x5a0))();
    if (*(int **)((int)this + 0x5b4) != (int *)0x0) {
      iVar1 = **(int **)((int)this + 0x5b4);
      if (*(int *)((int)this + 0x59c) != 0) {
        (**(code **)(iVar1 + 0x60))(1,*(int *)((int)this + 0x59c),0x40000000);
        FUN_0073e5e0(*(void **)((int)this + 0x5b4),*(int **)((int)this + 0x59c));
        (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x5b4),1);
        return;
      }
      (**(code **)(iVar1 + 0x68))(2,this,0);
      (**(code **)(**(int **)((int)this + 0x5b4) + 0x60))(2,this,0);
      (**(code **)(*(int *)this + 0xc))(*(undefined4 *)((int)this + 0x5b4),1);
    }
  }
  return;
}


//// FUNCTION FUN_0065dbc0 @ 0065dbc0 ////

void __fastcall FUN_0065dbc0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x59c);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(*(int *)(param_1 + 0x588) + 4))();
    *(undefined4 *)(param_1 + 0x59c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0065dbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(param_1 + 0x588))();
    return;
  }
  return;
}


//// FUNCTION FUN_0065dc10 @ 0065dc10 ////

undefined4 __fastcall FUN_0065dc10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4b0);
}


//// FUNCTION FUN_0065dc20 @ 0065dc20 ////

undefined4 __fastcall FUN_0065dc20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}


//// FUNCTION FUN_0065dc30 @ 0065dc30 ////

void __fastcall FUN_0065dc30(int param_1)

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


//// FUNCTION FUN_0065dd20 @ 0065dd20 ////

void __thiscall FUN_0065dd20(void *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x25) == '\0') {
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


//// FUNCTION FUN_0065dd80 @ 0065dd80 ////

void __thiscall FUN_0065dd80(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x25) == '\0') {
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


//// FUNCTION FUN_0065ddf0 @ 0065ddf0 ////

int * __fastcall FUN_0065ddf0(int *param_1)

{
  FUN_0065d990(param_1);
  return param_1;
}


//// FUNCTION FUN_0065de00 @ 0065de00 ////

void __fastcall FUN_0065de00(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *param_1 = iVar2;
  }
  return;
}


//// FUNCTION FUN_0065df10 @ 0065df10 ////

undefined4 * __thiscall FUN_0065df10(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 10;
  FUN_004036d0(param_1,*(wchar_t **)((int)this + 0x154),*(uint *)((int)this + 0x158));
  return param_1;
}


//// FUNCTION FUN_0065df50 @ 0065df50 ////

void __fastcall FUN_0065df50(int *param_1)

{
  int iVar1;
  void *this;
  undefined4 *puVar2;
  char *local_2c;
  undefined4 local_28;
  uint local_24;
  char local_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3484;
  pvStack_c = ExceptionList;
  puVar2 = (undefined4 *)0x0;
  ExceptionList = &pvStack_c;
  this = operator_new(0x360);
  local_4 = 0;
  if (this != (void *)0x0) {
    local_2c = local_20;
    local_20[0] = '\0';
    local_28 = 0;
    local_24 = 0x20;
    local_2c = _malloc(0x20);
    _strncpy(local_2c,"ui/buildmenu_alert.dds",0x16);
    local_28 = 0x16;
    local_2c[0x16] = '\0';
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar2 = FUN_0069d820(this,&local_2c,0,0,0x3f800000,0x3f800000);
  }
  local_4 = 2;
  (**(code **)(param_1[0x162] + 4))();
  param_1[0x167] = (int)puVar2;
  (**(code **)param_1[0x162])();
  local_4 = -1;
  if ((this != (void *)0x0) && (0x14 < local_24)) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  (**(code **)(*(int *)param_1[0x167] + 0x74))();
  iVar1 = local_4;
  (**(code **)(*(int *)param_1[0x167] + 0x68))(2);
  (**(code **)(*(int *)param_1[0x167] + 0x60))(2,param_1,*(undefined4 *)(iVar1 + 4));
  (**(code **)(*param_1 + 0xc))(param_1[0x167],1);
  ExceptionList = this;
  return;
}


//// FUNCTION FUN_0065e0b0 @ 0065e0b0 ////

void __thiscall FUN_0065e0b0(void *this,int param_1)

{
  undefined4 *puVar1;
  void *local_20 [2];
  uint local_18;
  
  *(int *)((int)this + 0x4cc) = param_1;
  if (*(int *)((int)this + 0x568) == 5) {
    puVar1 = FUN_009f4620(local_20,param_1);
    FUN_004015d0((void *)((int)this + 0x504),(char *)*puVar1,puVar1[1]);
    if (0x14 < local_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_20[0]);
    }
    FUN_004015d0((void *)((int)this + 0x524),"",0);
  }
  return;
}


//// FUNCTION FUN_0065e120 @ 0065e120 ////

void __thiscall FUN_0065e120(void *this,undefined4 *param_1)

{
  FUN_004036d0((void *)((int)this + 0x544),(wchar_t *)*param_1,param_1[1]);
  return;
}


//// FUNCTION FUN_0065e140 @ 0065e140 ////

undefined4 * __thiscall FUN_0065e140(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x504),*(uint *)((int)this + 0x508));
  return param_1;
}


//// FUNCTION FUN_0065e180 @ 0065e180 ////

undefined4 * __thiscall FUN_0065e180(void *this,undefined4 *param_1)

{
  *param_1 = param_1 + 3;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0x14;
  FUN_004015d0(param_1,*(char **)((int)this + 0x524),*(uint *)((int)this + 0x528));
  return param_1;
}


//// FUNCTION FUN_0065e1c0 @ 0065e1c0 ////

void __fastcall FUN_0065e1c0(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1;
  *param_1 = &PTR_FUN_00d341fc;
  param_1[5] = 0;
  return;
}


//// FUNCTION FUN_0065e1f0 @ 0065e1f0 ////

void __fastcall FUN_0065e1f0(int param_1)

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


//// FUNCTION FUN_0065e210 @ 0065e210 ////

void __fastcall FUN_0065e210(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00d341fc;
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


//// FUNCTION FUN_0065e310 @ 0065e310 ////

void __fastcall FUN_0065e310(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_00d3420c;
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


//// FUNCTION FUN_0065e370 @ 0065e370 ////

int * __fastcall FUN_0065e370(int *param_1)

{
  FUN_0065d990(param_1);
  return param_1;
}


//// FUNCTION FUN_0065e380 @ 0065e380 ////

int * __fastcall FUN_0065e380(int *param_1)

{
  FUN_0065de00(param_1);
  return param_1;
}


//// FUNCTION FUN_0065e410 @ 0065e410 ////

void FUN_0065e410(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  return;
}


//// FUNCTION FUN_0065e460 @ 0065e460 ////

void __thiscall
FUN_0065e460(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  piVar1 = (int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x18) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 **)((int)this + 0x18) = (undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = &PTR_LAB_00d3420c;
  iVar2 = *(int *)(param_4 + 0x14);
  *(int *)((int)this + 0x20) = iVar2;
  if (iVar2 != 0) {
    piVar3 = (int *)(iVar2 + 0x18);
    *(int **)((int)this + 0x14) = piVar3;
    *piVar1 = *piVar3;
    *(int **)(*piVar3 + 4) = piVar1;
    *piVar3 = (int)piVar1;
  }
  *(undefined1 *)((int)this + 0x24) = param_5;
  *(undefined1 *)((int)this + 0x25) = 0;
  return;
}


//// FUNCTION FUN_0065e4d0 @ 0065e4d0 ////

void __fastcall FUN_0065e4d0(int param_1)

{
  *(undefined ***)(param_1 + 0xc) = &PTR_LAB_00d3420c;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


//// FUNCTION FUN_0065e520 @ 0065e520 ////

void __thiscall FUN_0065e520(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  void *this_00;
  ulonglong uVar5;
  void **ppvVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStack_74 [8];
  char *pcStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  char acStack_60 [20];
  char *apcStack_4c [2];
  uint uStack_44;
  void *apvStack_2c [2];
  uint uStack_24;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3498;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x49c) + 4))();
  *(int **)((int)this + 0x4b0) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x49c))();
  iVar1 = *(int *)((int)this + 0x568);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMBlueprint::RTTI_Type_Descriptor,
                                 &TM::CFacilityBlueprint::RTTI_Type_Descriptor,0);
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))();
    FUN_004015d0((void *)((int)this + 0x504),(char *)*puVar3,puVar3[1]);
    (**(code **)(*piVar2 + 0x20))(auStack_74);
    uVar5 = FUN_00acd42c();
    *(ulonglong *)((int)this + 0x580) = uVar5;
    FUN_00471b10((longlong *)((int)this + 0x580));
    FUN_0095cc50(piVar2,apcStack_4c);
    FUN_0048ad50((int *)apcStack_4c);
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"p_",2);
    uVar9 = 2;
    uVar7 = 0;
    ppvVar6 = apvStack_2c;
    uStack_68 = 2;
    pcStack_6c[2] = '\0';
    puVar3 = FUN_00430770(apcStack_4c,ppvVar6,uVar7,uVar9);
    uVar4 = FUN_00401ec0(puVar3,&pcStack_6c);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if ((char)uVar4 == '\0') {
      pcVar8 = "Thumbs/Sets/";
    }
    else {
      pcVar8 = "Thumbs/Props/";
    }
    puVar3 = FUN_0040d6b0(apvStack_2c,pcVar8,apcStack_4c);
    FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar3,puVar3[1]);
LAB_0065ea12:
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
  }
  else {
    if (iVar1 == 1) {
      piVar2 = (int *)FUN_00ace790(param_1,0,&TM::TMBlueprint::RTTI_Type_Descriptor,
                                   &TM::CSetBlueprint::RTTI_Type_Descriptor,0);
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))();
      FUN_004015d0((void *)((int)this + 0x504),(char *)*puVar3,puVar3[1]);
      puVar3 = FUN_0095f980(piVar2,apvStack_2c);
      FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar3,puVar3[1]);
      if (uStack_24 < 0x15) {
        (**(code **)(*piVar2 + 0x20))(auStack_74);
        uVar5 = FUN_00acd42c();
        *(ulonglong *)((int)this + 0x580) = uVar5;
        FUN_00471b10((longlong *)((int)this + 0x580));
        ExceptionList = pvStack_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))();
        FUN_004015d0((undefined4 *)((int)this + 0x504),(char *)*puVar3,puVar3[1]);
        puVar3 = FUN_0040d6b0(apcStack_4c,"Thumbs/Backdrops/th_",(undefined4 *)((int)this + 0x504));
        puVar3 = FUN_004312e0(apvStack_2c,puVar3,".dds");
        FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar3,puVar3[1]);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
      }
      else {
        if (iVar1 != 3) {
          ExceptionList = pvStack_c;
          return;
        }
        puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))();
        FUN_00401e30((void *)((int)this + 0x504),puVar3);
        this_00 = (void *)FUN_00ace790(param_1,0,&TM::TMBlueprint::RTTI_Type_Descriptor,
                                       &TM::CSetBlueprint::RTTI_Type_Descriptor,0);
        if (this_00 == (void *)0x0) {
          ExceptionList = pvStack_c;
          return;
        }
        puVar3 = FUN_0095f980(this_00,&pcStack_6c);
        FUN_00401e30((void *)((int)this + 0x524),puVar3);
        apcStack_4c[0] = pcStack_6c;
        uStack_44 = uStack_64;
      }
      goto joined_r0x0065eb10;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))();
    FUN_004015d0((undefined4 *)((int)this + 0x504),(char *)*puVar3,puVar3[1]);
    FUN_00403de0(apcStack_4c,(undefined4 *)((int)this + 0x504));
    uStack_4 = 0;
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x20))(auStack_74);
    *(undefined4 *)((int)this + 0x580) = *puVar3;
    *(undefined4 *)((int)this + 0x584) = puVar3[1];
    FUN_00471b10((longlong *)((int)this + 0x580));
    FUN_0048ad50((int *)apcStack_4c);
    pcStack_6c = acStack_60;
    acStack_60[0] = '\0';
    uStack_68 = 0;
    uStack_64 = 0x14;
    _strncpy(pcStack_6c,"p_cre_oa1_",10);
    uVar9 = 10;
    uVar7 = 0;
    ppvVar6 = apvStack_2c;
    uStack_68 = 10;
    pcStack_6c[10] = '\0';
    puVar3 = FUN_00430770(apcStack_4c,ppvVar6,uVar7,uVar9);
    uVar4 = FUN_00401ec0(puVar3,&pcStack_6c);
    if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_2c[0]);
    }
    if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_6c);
    }
    if ((char)uVar4 == '\0') {
      pcStack_6c = acStack_60;
      acStack_60[0] = '\0';
      uStack_68 = 0;
      uStack_64 = 0x14;
      _strncpy(pcStack_6c,"p_cre_oa2_",10);
      uVar9 = 10;
      uStack_68 = 10;
      uVar7 = 0;
      pcStack_6c[10] = '\0';
      puVar3 = FUN_00430770(apcStack_4c,apvStack_2c,uVar7,uVar9);
      uVar4 = FUN_00401ec0(puVar3,&pcStack_6c);
      if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_2c[0]);
      }
      if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_6c);
      }
      if ((char)uVar4 == '\0') {
        FUN_00401de0(&pcStack_6c,"p_cre_oa3_",0xffffffff);
        puVar3 = FUN_00430770(apcStack_4c,apvStack_2c,0,10);
        uVar4 = FUN_00401ec0(puVar3,&pcStack_6c);
        if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_2c[0]);
        }
        if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_6c);
        }
        if ((char)uVar4 == '\0') {
          FUN_00401de0(&pcStack_6c,"p_",0xffffffff);
          puVar3 = FUN_00430770(apcStack_4c,apvStack_2c,0,2);
          uVar4 = FUN_00401ec0(puVar3,&pcStack_6c);
          if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
            _free(apvStack_2c[0]);
          }
          if (0x14 < uStack_64) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_6c);
          }
          if ((char)uVar4 == '\0') {
            pcVar8 = "Thumbs/Sets/";
          }
          else {
            pcVar8 = "Thumbs/Props/";
          }
          puVar3 = FUN_0040d6b0(apvStack_2c,pcVar8,apcStack_4c);
          FUN_00401e30((void *)((int)this + 0x524),puVar3);
          goto LAB_0065ea12;
        }
        FUN_00403e20((void *)((int)this + 0x524),"Thumbs/Props/p_stanley_lotstat_2");
      }
      else {
        FUN_00403e20((void *)((int)this + 0x524),"Thumbs/Props/p_stanley_lotstat_1");
      }
    }
    else {
      FUN_00403e20((void *)((int)this + 0x524),"Thumbs/Props/p_stanley_lotstat");
    }
  }
  FUN_004073f0((void *)((int)this + 0x524),".dds",4);
joined_r0x0065eb10:
  if (uStack_44 < 0x15) {
    ExceptionList = pvStack_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(apcStack_4c[0]);
}


//// FUNCTION FUN_0065eb40 @ 0065eb40 ////

void __thiscall FUN_0065eb40(void *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  TypeDescriptor *pTVar10;
  TypeDescriptor *pTVar11;
  int iVar12;
  void *apvStack_14c [2];
  uint uStack_144;
  void *apvStack_12c [2];
  uint uStack_124;
  char acStack_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc34c6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)((int)this + 0x4b4) + 4))();
  *(int **)((int)this + 0x4c8) = param_1;
  (*(code *)**(undefined4 **)((int)this + 0x4b4))();
  if (*(int *)((int)this + 0x568) == 3) {
    iVar3 = FUN_00ace790(param_1,0,&TM::TMBase::RTTI_Type_Descriptor,&TM::CSet::RTTI_Type_Descriptor
                         ,0);
    if (iVar3 == 0) {
      puVar4 = FUN_0040d6b0(apvStack_12c,"Thumbs/Sets/",(undefined4 *)((int)this + 0x504));
      puVar4 = FUN_004312e0(apvStack_14c,puVar4,".dds");
      FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar4,puVar4[1]);
      pvVar6 = apvStack_12c[0];
      uVar2 = uStack_124;
      if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
        _free(apvStack_14c[0]);
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_00528450(iVar3);
      FUN_004015d0((undefined4 *)((int)this + 0x504),(char *)*puVar4,puVar4[1]);
      iVar12 = 0;
      pTVar11 = &TM::CSetBlueprint::RTTI_Type_Descriptor;
      pTVar10 = &TM::TMBlueprint::RTTI_Type_Descriptor;
      iVar9 = 0;
      piVar5 = (int *)FUN_009623a0((undefined4 *)((int)this + 0x504));
      piVar5 = (int *)FUN_00ace790(piVar5,iVar9,pTVar10,pTVar11,iVar12);
      if (piVar5 == (int *)0x0) {
        if ((*(void **)(iVar3 + 0x11c) == (void *)0x0) ||
           (pcVar8 = (char *)FUN_0097e350(*(void **)(iVar3 + 0x11c),0), pcVar8 == (char *)0x0))
        goto LAB_0065ed41;
        piVar5 = (int *)((int)this + 0x524);
        FUN_00403e20(piVar5,"Thumbs/Sets/");
        FUN_00407630(piVar5,pcVar8);
        FUN_00401de0(apvStack_14c,".dds",0xffffffff);
        uStack_4 = 0;
        FUN_00401de0(apvStack_12c,".msh",0xffffffff);
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        FUN_00569860(piVar5,apvStack_12c,apvStack_14c);
        if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
          _free(apvStack_12c[0]);
        }
        uStack_4 = 0xffffffff;
        pvVar6 = apvStack_14c[0];
        uVar2 = uStack_144;
      }
      else {
        FUN_0065e520(this,piVar5);
        puVar4 = FUN_0095f980(piVar5,apvStack_14c);
        FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar4,puVar4[1]);
        pvVar6 = apvStack_14c[0];
        uVar2 = uStack_144;
      }
    }
    if (0x14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar6);
    }
  }
LAB_0065ed41:
  if ((*(int *)((int)this + 0x568) == 4) &&
     (pvVar6 = (void *)FUN_00ace790(param_1,0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &TM::CScene::RTTI_Type_Descriptor,0), pvVar6 != (void *)0x0)) {
    puVar4 = FUN_004b63b0(pvVar6,apvStack_14c);
    FUN_004015d0((void *)((int)this + 0x504),(char *)*puVar4,puVar4[1]);
    if (0x14 < uStack_144) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_14c[0]);
    }
    FUN_004b6330(pvVar6,apvStack_12c);
    _sprintf(acStack_10c,"Thumbs\\Films\\%s");
    if (0x14 < uStack_124) {
                    /* WARNING: Subroutine does not return */
      _free(apvStack_12c[0]);
    }
    pcVar8 = acStack_10c;
    do {
      pcVar7 = pcVar8;
      pcVar8 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    _sprintf(pcVar7 + -3,(char *)&PTR_DAT_00d1e2c0);
    pcVar8 = acStack_10c;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004015d0((void *)((int)this + 0x524),acStack_10c,(int)pcVar8 - (int)(acStack_10c + 1));
  }
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_0065ee40 @ 0065ee40 ////

void __thiscall FUN_0065ee40(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_144 [2];
  uint local_13c;
  void *local_124 [2];
  uint local_11c;
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc34e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x568) == 6) {
    ExceptionList = &local_c;
    FUN_004015d0((undefined4 *)((int)this + 0x504),(char *)*param_1,param_1[1]);
    puVar1 = FUN_0040d6b0(local_144,"props/",(undefined4 *)((int)this + 0x504));
    local_4 = 0;
    FUN_0055c540(local_e4,puVar1);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
    FUN_00558120(local_e4,0);
    FUN_00558de0(local_e4,local_104);
    puVar1 = FUN_0040d6b0(local_124,"thumbs/props/",local_104);
    puVar1 = FUN_004312e0(local_144,puVar1,".dds");
    FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar1,puVar1[1]);
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124[0]);
    }
    if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_104[0]);
    }
    local_4 = 0xffffffff;
    FUN_00558920(local_e4);
  }
  if (*(int *)((int)this + 0x568) == 3) {
    FUN_004015d0((undefined4 *)((int)this + 0x504),(char *)*param_1,param_1[1]);
    puVar1 = FUN_0040d6b0(local_144,"Thumbs/Sets/",(undefined4 *)((int)this + 0x504));
    puVar1 = FUN_004312e0(local_124,puVar1,".dds");
    FUN_004015d0((void *)((int)this + 0x524),(char *)*puVar1,puVar1[1]);
    if (0x14 < local_11c) {
                    /* WARNING: Subroutine does not return */
      _free(local_124[0]);
    }
    if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
      _free(local_144[0]);
    }
  }
  if (*(int *)((int)this + 0x568) == 7) {
    FUN_004015d0((void *)((int)this + 0x504),(char *)*param_1,param_1[1]);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_0065f020 @ 0065f020 ////

undefined4 __fastcall FUN_0065f020(int param_1)

{
  int *piVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  byte *local_4c;
  uint local_44;
  byte local_40 [20];
  byte *apbStack_2c [2];
  uint uStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar7 = DAT_0104ed18;
  puVar11 = DAT_0104c4d8;
  puVar5 = DAT_0104acbc;
  puStack_8 = &LAB_00cc3520;
  local_c = ExceptionList;
  uVar8 = *(uint *)(param_1 + 0x568);
  iVar9 = 0;
  if (uVar8 == 0) {
    local_4c = local_40;
    local_40[0] = 0;
    local_44 = 0x14;
    local_4 = 0;
    ExceptionList = &local_c;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x4b0) + 8))();
    FUN_0040d6b0(apbStack_2c,"facility/",puVar5);
    iVar10 = *(int *)(param_1 + 0x500);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iVar10 != 0) {
      do {
        if (puVar7 == &DAT_0104ed24) goto LAB_0065f0c4;
        piVar1 = puVar7 + 2;
        puVar7 = (undefined4 *)puVar7[1];
        iVar9 = iVar10;
      } while (*piVar1 != iVar10);
    }
    iVar10 = iVar9;
    if (puVar7 != &DAT_0104ed24) {
      do {
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f218:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f21d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f218;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f21d:
        if (iVar9 == 0) goto LAB_0065f235;
        puVar7 = (undefined4 *)puVar7[1];
      } while (puVar7 != &DAT_0104ed24);
    }
LAB_0065f0c4:
    puVar7 = DAT_0104ed18;
    if (DAT_0104ed18 != &DAT_0104ed24) {
      do {
        if (puVar7[2] == iVar10) break;
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f255:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f25a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f255;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f25a:
        if (iVar9 == 0) goto LAB_0065f66e;
        puVar5 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar5;
      } while ((undefined4 *)*puVar5 != &DAT_0104ed24);
    }
  }
  else if (uVar8 == 1) {
    local_4c = local_40;
    local_40[0] = 0;
    local_44 = 0x14;
    local_4 = 2;
    ExceptionList = &local_c;
    puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x4b0) + 8))();
    FUN_0040d6b0(apbStack_2c,"set/",puVar7);
    iVar10 = *(int *)(param_1 + 0x500);
    local_4 = CONCAT31(local_4._1_3_,3);
    puVar7 = puVar5;
    if (iVar10 == 0) {
joined_r0x0065f2fc:
      do {
        iVar10 = iVar9;
        if (puVar7 == &DAT_0104acc8) goto LAB_0065f3a6;
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f38a:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f38f;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f38a;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f38f:
        if (iVar9 == 0) goto LAB_0065f235;
        puVar7 = (undefined4 *)puVar7[1];
        iVar9 = iVar10;
      } while( true );
    }
    if (puVar5 != &DAT_0104acc8) {
      do {
        piVar1 = puVar5 + 2;
        puVar5 = (undefined4 *)puVar5[1];
        puVar7 = puVar5;
        iVar9 = iVar10;
        if (*piVar1 == iVar10) goto joined_r0x0065f2fc;
      } while (puVar5 != &DAT_0104acc8);
    }
LAB_0065f3a6:
    puVar7 = DAT_0104acbc;
    if (DAT_0104acbc != &DAT_0104acc8) {
      do {
        if (puVar7[2] == iVar10) break;
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f454:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f459;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f454;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f459:
        if (iVar9 == 0) goto LAB_0065f66e;
        puVar5 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar5;
      } while ((undefined4 *)*puVar5 != &DAT_0104acc8);
    }
  }
  else {
    if (uVar8 != 2) goto LAB_0065f6e4;
    local_4c = local_40;
    local_40[0] = 0;
    local_44 = 0x14;
    local_4 = 4;
    ExceptionList = &local_c;
    puVar7 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x4b0) + 8))();
    FUN_0040d6b0(apbStack_2c,"ornament/",puVar7);
    iVar10 = *(int *)(param_1 + 0x500);
    local_4 = CONCAT31(local_4._1_3_,5);
    puVar7 = puVar11;
    if (iVar10 == 0) {
joined_r0x0065f4fb:
      do {
        iVar10 = iVar9;
        if (puVar7 == &DAT_0104c4e4) goto LAB_0065f5a5;
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f589:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f58e;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f589;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f58e:
        if (iVar9 == 0) goto LAB_0065f235;
        puVar7 = (undefined4 *)puVar7[1];
        iVar9 = iVar10;
      } while( true );
    }
    if (puVar11 != &DAT_0104c4e4) {
      do {
        piVar1 = puVar11 + 2;
        puVar11 = (undefined4 *)puVar11[1];
        puVar7 = puVar11;
        iVar9 = iVar10;
        if (*piVar1 == iVar10) goto joined_r0x0065f4fb;
      } while (puVar11 != &DAT_0104c4e4);
    }
LAB_0065f5a5:
    puVar7 = DAT_0104c4d8;
    if (DAT_0104c4d8 != &DAT_0104c4e4) {
      do {
        if (puVar7[2] == iVar10) break;
        puVar5 = (undefined4 *)FUN_00528460(puVar7[2]);
        uVar8 = puVar5[1];
        pcVar3 = (char *)*puVar5;
        if (local_44 <= uVar8) {
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          local_44 = uVar8 + 0x20 & 0xffffffe0;
          local_4c = _malloc(local_44);
        }
        _strncpy((char *)local_4c,pcVar3,uVar8);
        local_4c[uVar8] = 0;
        pbVar6 = local_4c;
        pbVar12 = apbStack_2c[0];
        do {
          bVar2 = *pbVar6;
          bVar13 = bVar2 < *pbVar12;
          if (bVar2 != *pbVar12) {
LAB_0065f654:
            iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0065f659;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar13 = bVar2 < pbVar12[1];
          if (bVar2 != pbVar12[1]) goto LAB_0065f654;
          pbVar6 = pbVar6 + 2;
          pbVar12 = pbVar12 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_0065f659:
        if (iVar9 == 0) goto LAB_0065f66e;
        puVar5 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar5;
      } while ((undefined4 *)*puVar5 != &DAT_0104c4e4);
    }
  }
  goto LAB_0065f68f;
LAB_0065f235:
  uVar4 = puVar7[2];
  (**(code **)(*(int *)(param_1 + 0x4ec) + 4))();
  *(undefined4 *)(param_1 + 0x500) = uVar4;
  goto LAB_0065f689;
LAB_0065f66e:
  uVar4 = puVar7[2];
  (**(code **)(*(int *)(param_1 + 0x4ec) + 4))();
  *(undefined4 *)(param_1 + 0x500) = uVar4;
LAB_0065f689:
  (*(code *)**(undefined4 **)(param_1 + 0x4ec))();
LAB_0065f68f:
  if (*(int *)(param_1 + 0x500) != 0) {
    FUN_00470a70(DAT_0104917c,DAT_00f87aa0,0x4b2,*(int *)(param_1 + 0x500),0);
  }
  if (0x14 < uStack_24) {
                    /* WARNING: Subroutine does not return */
    _free(apbStack_2c[0]);
  }
  uVar8 = uStack_24;
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
LAB_0065f6e4:
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar8 >> 8),1);
}


//// FUNCTION FUN_0065f700 @ 0065f700 ////

int * __fastcall FUN_0065f700(int *param_1)

{
  FUN_0065de00(param_1);
  return param_1;
}


//// FUNCTION FUN_0065f710 @ 0065f710 ////

void __thiscall FUN_0065f710(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar4[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (*(uint *)(param_2 + 0x14) < (uint)puVar1[8]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)puVar1[1] + 0x25) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[8] < *(uint *)(param_2 + 0x14)) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar1 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)puVar4;
  return;
}


//// FUNCTION FUN_0065f780 @ 0065f780 ////

void __fastcall FUN_0065f780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065e410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_0065f7b0 @ 0065f7b0 ////

void * FUN_0065f7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x28);
  if (this != (void *)0x0) {
    FUN_0065e460(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_0065f820 @ 0065f820 ////

void * __thiscall FUN_0065f820(void *this,byte param_1)

{
  FUN_0065e4d0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_0065f9d0 @ 0065f9d0 ////

int __fastcall FUN_0065f9d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065e410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_0065fa00 @ 0065fa00 ////

void __cdecl FUN_0065fa00(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = param_3;
  iVar1 = param_2;
  while (param_1 != iVar1) {
    *piVar2 = *piVar2 + 1;
    FUN_0065de00(&param_1);
  }
  return;
}


//// FUNCTION FUN_0065fa60 @ 0065fa60 ////

void FUN_0065fa60(void *param_1)

{
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    FUN_0065fa60(*(void **)((int)param_1 + 8));
    FUN_0065e4d0((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_0065faa0 @ 0065faa0 ////

void __thiscall
FUN_0065faa0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int param_4)

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
  puStack_8 = &LAB_00cc3558;
  local_c = ExceptionList;
  if (0xaaaaaa8 < *(uint *)((int)this + 8)) {
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
  piVar3 = FUN_0065f7b0(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
  cVar1 = *(char *)(piVar3[1] + 0x24);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)((int)this + 4) + 4) + 0x24) = 1;
      *param_1 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[9] == '\0') {
LAB_0065fb9b:
        *(undefined1 *)(*piVar4 + 0x24) = 1;
        *(undefined1 *)(piVar5 + 9) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x24) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0065dd20(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x24) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
        FUN_0065dd80(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[9] == '\0') goto LAB_0065fb9b;
      if (piVar6 == (int *)*piVar2) {
        FUN_0065dd80(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x24) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x24) = 0;
      FUN_0065dd20(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x24);
  } while( true );
}


//// FUNCTION FUN_0065fc50 @ 0065fc50 ////

void __thiscall FUN_0065fc50(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc3578;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x25) != '\0') {
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
  FUN_0065de00((int *)&param_2);
  piVar6 = (int *)*_Memory;
  if (*(char *)((int)piVar6 + 0x25) == '\0') {
    piVar5 = piVar6;
    if ((*(char *)(_Memory[2] + 0x25) == '\0') && (piVar5 = (int *)param_2[2], param_2 != _Memory))
    {
      piVar6[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar6 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar6 = (int *)param_2[1];
        if (*(char *)((int)piVar5 + 0x25) == '\0') {
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
      iVar1 = param_2[9];
      *(char *)(param_2 + 9) = (char)_Memory[9];
      *(char *)(_Memory + 9) = (char)iVar1;
      goto LAB_0065fdbb;
    }
  }
  else {
    piVar5 = (int *)_Memory[2];
  }
  piVar6 = (int *)_Memory[1];
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
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
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      piVar2 = (int *)FUN_0065d960(piVar5);
    }
    *piVar4 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar5 + 0x25) == '\0') {
      uVar3 = FUN_0065d940((int)piVar5);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
    }
  }
LAB_0065fdbb:
  if ((char)_Memory[9] == '\x01') {
    if (piVar5 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        if ((char)piVar5[9] != '\x01') break;
        piVar4 = (int *)*piVar6;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar6[2];
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_0065dd20(this,(int)piVar6);
            piVar4 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(*piVar4 + 0x24) != '\x01') || (*(char *)(piVar4[2] + 0x24) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x24) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x24) = 1;
                *(undefined1 *)(piVar4 + 9) = 0;
                FUN_0065dd80(this,piVar4);
                piVar4 = (int *)piVar6[2];
              }
              *(char *)(piVar4 + 9) = (char)piVar6[9];
              *(undefined1 *)(piVar6 + 9) = 1;
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              FUN_0065dd20(this,(int)piVar6);
              break;
            }
LAB_0065fe88:
            *(undefined1 *)(piVar4 + 9) = 0;
          }
        }
        else {
          if ((char)piVar4[9] == '\0') {
            *(undefined1 *)(piVar4 + 9) = 1;
            *(undefined1 *)(piVar6 + 9) = 0;
            FUN_0065dd80(this,piVar6);
            piVar4 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar4 + 0x25) == '\0') {
            if ((*(char *)(piVar4[2] + 0x24) == '\x01') && (*(char *)(*piVar4 + 0x24) == '\x01'))
            goto LAB_0065fe88;
            if (*(char *)(*piVar4 + 0x24) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x24) = 1;
              *(undefined1 *)(piVar4 + 9) = 0;
              FUN_0065dd20(this,(int)piVar4);
              piVar4 = (int *)*piVar6;
            }
            *(char *)(piVar4 + 9) = (char)piVar6[9];
            *(undefined1 *)(piVar6 + 9) = 1;
            *(undefined1 *)(*piVar4 + 0x24) = 1;
            FUN_0065dd80(this,piVar6);
            break;
          }
        }
        bVar7 = piVar6 != *(int **)(*(int *)((int)this + 4) + 4);
        piVar5 = piVar6;
        piVar6 = (int *)piVar6[1];
      } while (bVar7);
    }
    *(undefined1 *)(piVar5 + 9) = 1;
  }
  _Memory[3] = (int)&PTR_LAB_00d3420c;
  if ((int *)_Memory[5] != (int *)0x0) {
    *(int *)_Memory[5] = _Memory[4];
  }
  if (_Memory[4] != 0) {
    *(int *)(_Memory[4] + 4) = _Memory[5];
  }
  _Memory[4] = 0;
  _Memory[5] = 0;
  _Memory[8] = 0;
  if ((int *)_Memory[5] != (int *)0x0) {
    *(int *)_Memory[5] = _Memory[4];
  }
  if (_Memory[4] != 0) {
    *(int *)(_Memory[4] + 4) = _Memory[5];
  }
  _Memory[4] = 0;
  _Memory[5] = 0;
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_0065ff60 @ 0065ff60 ////

void __fastcall FUN_0065ff60(int param_1)

{
  FUN_0065fa60(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_0065ff90 @ 0065ff90 ////

void __thiscall FUN_0065ff90(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool local_4;
  
  puVar2 = param_2;
  puVar4 = *(undefined4 **)((int)this + 4);
  local_4 = true;
  if (*(char *)((int)puVar4[1] + 0x25) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      local_4 = (uint)param_2[5] < (uint)puVar4[8];
      if (local_4) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  param_2 = puVar4;
  if (local_4) {
    if (puVar4 == (undefined4 *)**(int **)((int)this + 4)) {
      puVar4 = (undefined4 *)FUN_0065faa0(this,&param_2,'\x01',puVar4,(int)puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar1;
      return;
    }
    FUN_0065d990((int *)&param_2);
  }
  if ((uint)param_2[8] < (uint)puVar2[5]) {
    puVar4 = (undefined4 *)FUN_0065faa0(this,&param_2,local_4,puVar4,(int)puVar2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = param_2;
  return;
}


//// FUNCTION FUN_00660050 @ 00660050 ////

void __thiscall FUN_00660050(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0065fa60((void *)piVar6[1]);
    *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
    *param_1 = **(undefined4 **)((int)this + 4);
    return;
  }
  while (piVar2 != piVar4) {
    piVar6 = piVar2;
    if (*(char *)((int)piVar2 + 0x25) == '\0') {
      piVar6 = (int *)piVar2[2];
      if (*(char *)((int)piVar6 + 0x25) == '\0') {
        cVar1 = *(char *)(*piVar6 + 0x25);
        piVar3 = (int *)*piVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x25);
          piVar6 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x25);
        piVar5 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
          cVar1 = *(char *)(piVar6[1] + 0x25);
          piVar5 = (int *)piVar6[1];
          piVar3 = piVar6;
        }
      }
    }
    FUN_0065fc50(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_00660140 @ 00660140 ////

void __thiscall FUN_00660140(void *this,int param_1,undefined1 param_2)

{
  undefined4 local_2c [2];
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0x32c) = param_2;
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3420c;
  local_10 = param_1;
  if (param_1 != 0) {
    local_1c = (int *)(param_1 + 0x18);
    local_20 = *local_1c;
    *(int **)(*local_1c + 4) = &local_20;
    *local_1c = (int)&local_20;
  }
  local_4 = 0;
  FUN_0065ff90((void *)((int)this + 0x570),local_2c,&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00660230 @ 00660230 ////

int __thiscall FUN_00660230(void *this,int param_1)

{
  int *local_8;
  int *local_4;
  
  FUN_0065f710(this,(int *)&local_8,param_1);
  param_1 = 0;
  FUN_0065fa00((int)local_8,(int)local_4,&param_1);
  FUN_00660050(this,&local_8,local_8,local_4);
  return param_1;
}


//// FUNCTION FUN_00660290 @ 00660290 ////

void __fastcall FUN_00660290(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00660050(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_006602c0 @ 006602c0 ////

void __fastcall FUN_006602c0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc368a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00d342fc;
  param_1[0x14] = &PTR_LAB_00d342e0;
  puVar2 = (undefined4 *)param_1[0x13a];
  local_4 = 0xf;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 0x12;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
    (**(code **)(param_1[0x135] + 4))();
    param_1[0x13a] = 0;
    (**(code **)param_1[0x135])();
  }
  param_1[0x168] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x16a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16a] = param_1[0x169];
  }
  if (param_1[0x169] != 0) {
    *(undefined4 *)(param_1[0x169] + 4) = param_1[0x16a];
  }
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16d] = 0;
  if ((undefined4 *)param_1[0x16a] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x16a] = param_1[0x169];
  }
  if (param_1[0x169] != 0) {
    *(undefined4 *)(param_1[0x169] + 4) = param_1[0x16a];
  }
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x162] = &PTR_FUN_00d2d110;
  if ((undefined4 *)param_1[0x164] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x164] = param_1[0x163];
  }
  if (param_1[0x163] != 0) {
    *(undefined4 *)(param_1[0x163] + 4) = param_1[0x164];
  }
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x167] = 0;
  if ((undefined4 *)param_1[0x164] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[0x164] = param_1[0x163];
  }
  if (param_1[0x163] != 0) {
    *(undefined4 *)(param_1[0x163] + 4) = param_1[0x164];
  }
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_00660050(param_1 + 0x15c,&uStack_10,*(int **)param_1[0x15d],(int *)param_1[0x15d]);
                    /* WARNING: Subroutine does not return */
  _free((void *)param_1[0x15d]);
}


//// FUNCTION FUN_006608b0 @ 006608b0 ////

int __fastcall FUN_006608b0(int *param_1)

{
  void *this;
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int **ppiVar12;
  int *piVar13;
  wchar_t *pwVar14;
  size_t sVar15;
  uint *puVar16;
  uint uVar17;
  void *pvVar18;
  int **ppiVar19;
  float *pfVar20;
  float fVar21;
  ulonglong *puVar22;
  float10 fVar23;
  int **ppiStack_30c;
  undefined4 uStack_308;
  uint uStack_304;
  int *piStack_300;
  undefined4 uStack_2fc;
  char cStack_2e0;
  char cStack_2df;
  char cStack_2de;
  char cStack_2dd;
  undefined1 *puStack_2c8;
  undefined4 uStack_2c4;
  int **ppiStack_2c0;
  undefined8 uVar24;
  wchar_t *pwStack_2a8;
  int *piStack_2a4;
  int *piStack_2a0;
  int iStack_29c;
  uint uVar25;
  undefined1 *puVar26;
  int **ppiStack_25c;
  int *piStack_258;
  uint uStack_254;
  int *piStack_250;
  wchar_t *_Dest;
  ushort **ppuVar27;
  char **ppcVar28;
  char *pcVar29;
  undefined4 uStack_20c;
  int *piStack_1f4;
  int *piVar30;
  uint uVar31;
  undefined4 *puStack_1d4;
  char *pcStack_1b0;
  undefined4 *local_1ac;
  uint uStack_1a8;
  char acStack_1a4 [4];
  undefined4 *puStack_1a0;
  void *pvStack_19c;
  uint *puStack_198;
  uint uStack_194;
  uint uStack_190;
  uint auStack_18c [2];
  undefined4 *puStack_184;
  undefined4 uStack_180;
  float *pfStack_17c;
  uint *puStack_178;
  wchar_t *pwStack_174;
  float fStack_170;
  uint auStack_16c [4];
  wchar_t **ppwStack_15c;
  undefined4 uStack_158;
  ushort *puStack_154;
  wchar_t *pwStack_150;
  uint uStack_14c;
  ushort auStack_148 [8];
  void *pvStack_138;
  char *pcStack_134;
  uint uStack_130;
  undefined1 *puStack_12c;
  char acStack_128 [4];
  uint uStack_124;
  void *pvStack_118;
  undefined1 auStack_114 [4];
  wchar_t *pwStack_110;
  wchar_t *pwStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  wchar_t awStack_100 [4];
  undefined1 uStack_f8;
  undefined1 *puStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined1 uStack_a8;
  undefined1 uStack_90;
  undefined4 uStack_80;
  void *pvStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_40;
  undefined1 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00cc3a21;
  pvStack_14 = ExceptionList;
  local_1ac = (undefined4 *)0x0;
  puVar4 = (undefined4 *)param_1[0x13a];
  ExceptionList = &pvStack_14;
  if (puVar4 != (undefined4 *)0x0) {
    piVar11 = puVar4 + 0x12;
    ExceptionList = &pvStack_14;
    *piVar11 = *piVar11 + -1;
    if (*piVar11 == 0) {
      (**(code **)*puVar4)();
    }
    (**(code **)(param_1[0x135] + 4))();
    param_1[0x13a] = 0;
    (**(code **)param_1[0x135])();
  }
  puStack_1a0 = operator_new(0x344);
  uStack_c = 0;
  if (puStack_1a0 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_007432f0(puStack_1a0);
  }
  uStack_c = 0xffffffff;
  (**(code **)(param_1[0x135] + 4))();
  param_1[0x13a] = (int)puVar4;
  (**(code **)param_1[0x135])();
  pvVar5 = operator_new(0x288);
  uStack_c = 1;
  puStack_1a0 = pvVar5;
  if (pvVar5 == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    ppwStack_15c = &pwStack_150;
    pwStack_150 = (wchar_t *)((uint)pwStack_150 & 0xffffff00);
    uStack_158 = 0;
    puStack_154 = (ushort *)0x20;
    ppwStack_15c = _malloc(0x20);
    puStack_1d4 = (undefined4 *)0x6609af;
    _strncpy((char *)ppwStack_15c,"ui/buildmenu_window.dds",0x17);
    uStack_158 = 0x17;
    *(char *)((int)ppwStack_15c + 0x17) = '\0';
    uStack_c = CONCAT31(uStack_c._1_3_,2);
    local_1ac = (undefined4 *)0x1;
    puVar4 = FUN_005e8fd0(pvVar5,&ppwStack_15c);
  }
  uStack_c = 0xffffffff;
  if ((((uint)local_1ac & 1) != 0) &&
     (local_1ac = (undefined4 *)((uint)local_1ac & 0xfffffffe), &DAT_00000014 < puStack_154)) {
                    /* WARNING: Subroutine does not return */
    _free(ppwStack_15c);
  }
  puVar4[0x9c] = 0x41400000;
  puVar4[0x9d] = 0x41400000;
  puVar4[0x9b] = 0x42000000;
  puVar4[0x9e] = 0x41c00000;
  puVar4[0x9f] = 0x41c00000;
  (**(code **)(*(int *)param_1[0x13a] + 0xa0))();
  if ((param_1[0x15a] != 2) && (param_1[0x15a] != 7)) {
    (**(code **)(*(int *)param_1[0x13a] + 0x74))();
    fVar23 = (float10)(**(code **)(*(int *)param_1[0x13a] + 0x10))();
    fStack_170 = (float)(fVar23 * (float10)0.5);
    puStack_1d4 = (undefined4 *)0x660a99;
    local_1ac = operator_new(0x3fc);
    uStack_18 = 4;
    if (local_1ac == (undefined4 *)0x0) {
      piStack_1f4 = (int *)0x0;
    }
    else {
      piStack_1f4 = FUN_00833290(local_1ac);
    }
    puStack_1d4 = (undefined4 *)param_1[0x13a];
    uStack_18 = 0xffffffff;
    (**(code **)(*piStack_1f4 + 100))();
    piStack_1f4[0xd5] = 0x432a0000;
    *(char *)(piStack_1f4 + 0xd6) = '\x01';
    (**(code **)(*piStack_1f4 + 0x54))();
    (**(code **)(*piStack_1f4 + 0x84))();
    iVar6 = *piStack_1f4;
    fVar23 = (float10)(**(code **)(iVar6 + 0x10))();
    piVar11 = (int *)(float)((float10)(float)puStack_184 - fVar23 * (float10)0.5);
    (**(code **)(iVar6 + 0x5c))();
    (**(code **)(*(int *)param_1[0x13a] + 0xc))();
    if (param_1[0x15a] == 5) {
      puVar4 = operator_new(0x3c);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = FUN_0041f350(puVar4);
      }
      puStack_1d4 = operator_new(0x24);
      uStack_40 = 5;
      if (puStack_1d4 == (undefined4 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_009910f0(puStack_1d4);
      }
      puVar4[1] = iVar6;
      *(undefined1 *)(iVar6 + 0xc) = 6;
      *(uint *)(puVar4[1] + 0x10) = *(uint *)(puVar4[1] + 0x10) & 0xbfffffff;
      uStack_40 = 0xffffffff;
      pvVar5 = FUN_009f4510(param_1[0x133]);
      if (*(void **)((int)puVar4[1] + 0x18) != pvVar5) {
        Engine_SetResourceReference((void *)puVar4[1],(int)pvVar5);
      }
      local_1ac = (undefined4 *)0x3f800000;
      puVar4[0xc] = 0x3f800000;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      uStack_1a8 = 0x3f800000;
      puVar4[0xd] = 0x3f800000;
      puVar4[2] = 0xffffffff;
      puStack_1d4 = operator_new(0x360);
      uStack_40 = 6;
      if (puStack_1d4 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = FUN_0069d790(puStack_1d4,(int)puVar4);
      }
      uStack_40 = 0xffffffff;
      (**(code **)(*piVar7 + 0x74))();
    }
    else {
      puStack_1d4 = operator_new(0x360);
      uStack_40 = 7;
      if (puStack_1d4 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        uStack_20c = (char *)0x660cc7;
        piVar7 = FUN_0069d820(puStack_1d4,param_1 + 0x149,0,0,0x3f800000,0x3f800000);
      }
      uStack_40 = 0xffffffff;
      if (param_1[0x15a] == 4) {
        (**(code **)(*piVar7 + 0x74))();
      }
      else {
        (**(code **)(*piVar7 + 0x74))();
      }
    }
    uVar31 = 0;
    uStack_20c = (char *)0x660d2a;
    (**(code **)(*piVar7 + 0x5c))();
    uStack_20c = (char *)0xc0800000;
    (**(code **)(*piVar11 + 100))();
    (**(code **)(*(int *)param_1[0x13a] + 0xc))();
    iVar6 = param_1[0x15a];
    if (iVar6 == 4) {
      pvVar5 = (void *)FUN_00ace790((int *)param_1[0x132],0,&TM::TMBase::RTTI_Type_Descriptor,
                                    &TM::CScene::RTTI_Type_Descriptor,0);
      if (pvVar5 != (void *)0x0) {
        pwStack_110 = (wchar_t *)0x0;
        pwStack_10c = (wchar_t *)0x0;
        uStack_108 = 0;
        uStack_68 = 8;
        FUN_004bbbb0(pvVar5,auStack_114);
        pwVar14 = pwStack_110;
        if (pwStack_110 != pwStack_10c) {
          do {
            puStack_154 = auStack_148;
            auStack_148[0] = auStack_148[0] & 0xff00;
            pwStack_150 = (wchar_t *)0x0;
            uStack_14c = 0x14;
            FUN_004015d0(&puStack_154,*(char **)pwVar14,*(uint *)(pwVar14 + 2));
            pcStack_134 = acStack_128;
            acStack_128[0] = '\0';
            uStack_130 = 0;
            puStack_12c = &DAT_00000014;
            _strncpy(pcStack_134,"dog",3);
            ppcVar28 = &pcStack_134;
            ppuVar27 = &puStack_154;
            uStack_130 = 3;
            pcStack_134[3] = '\0';
            uVar8 = FUN_00401ec0(ppuVar27,ppcVar28);
            uStack_20c = (char *)CONCAT13((char)uVar8,(undefined3)uStack_20c);
            if (&DAT_00000014 < puStack_12c) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_134);
            }
            piStack_1f4 = (int *)&stack0xfffffe18;
            uVar31 = 0x14;
            _strncpy((char *)piStack_1f4,"horse",5);
            ppiVar12 = &piStack_1f4;
            ppuVar27 = &puStack_154;
            *(char *)((int)piStack_1f4 + 5) = '\0';
            uVar8 = FUN_00401ec0(ppuVar27,ppiVar12);
            uStack_20c = (char *)CONCAT13((char)uVar8,(undefined3)uStack_20c);
            if (0x14 < uVar31) {
                    /* WARNING: Subroutine does not return */
              _free(piStack_1f4);
            }
            if (0x14 < uStack_14c) {
                    /* WARNING: Subroutine does not return */
              _free(puStack_154);
            }
            pwVar14 = pwVar14 + 0x10;
          } while (pwVar14 != pwStack_10c);
        }
        iVar6 = FUN_004b4a40((int)pvVar5);
        if (iVar6 != 0) {
          iVar10 = *(int *)(iVar6 + 8);
          iVar6 = iVar6 + 0x14;
          if (iVar10 != iVar6) {
            do {
              if ((*(int *)(iVar10 + 8) != 0) &&
                 (iVar9 = FUN_0048cbb0(*(int *)(iVar10 + 8)), iVar9 == 1)) break;
              iVar10 = *(int *)(iVar10 + 4);
            } while (iVar10 != iVar6);
          }
        }
        piStack_1f4 = (int *)&stack0xfffffe18;
        uVar31 = 0x14;
        _strncpy((char *)piStack_1f4,"rig_dolly",9);
        *(char *)((int)piStack_1f4 + 9) = '\0';
        uStack_68._0_1_ = 9;
        iVar6 = FUN_009623a0(&piStack_1f4);
        if (0x14 < uVar31) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_1f4);
        }
        piStack_1f4 = (int *)&stack0xfffffe18;
        uVar31 = 0x14;
        _strncpy((char *)piStack_1f4,"rig_crane",9);
        *(char *)((int)piStack_1f4 + 9) = '\0';
        uStack_68._0_1_ = 10;
        iVar10 = FUN_009623a0(&piStack_1f4);
        uStack_68 = CONCAT31(uStack_68._1_3_,8);
        if (0x14 < uVar31) {
                    /* WARNING: Subroutine does not return */
          _free(piStack_1f4);
        }
        if (iVar10 != 0) {
          FUN_00960f30(iVar10);
        }
        if ((iVar6 == 0) || (cVar1 = FUN_00960f30(iVar6), cVar1 == '\0')) {
LAB_00661083:
          uStack_20c = (char *)((uint)uStack_20c & 0xffffff);
        }
        else {
          uStack_20c = (char *)CONCAT13(1,(undefined3)uStack_20c);
          if ((*(uint *)((int)pvVar5 + 0x240) >> 1 & 1) == 0) goto LAB_00661083;
        }
        puVar4 = operator_new(0x344);
        uStack_68._0_1_ = 0xb;
        if (puVar4 == (undefined4 *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = FUN_007432f0(puVar4);
        }
        uVar31 = 0;
        uStack_68 = CONCAT31(uStack_68._1_3_,8);
        (**(code **)(*piVar11 + 0x7c))();
        piVar7 = (int *)0x2;
        (**(code **)(*piVar11 + 100))();
        (**(code **)(*(int *)param_1[0x13a] + 0xc))();
        pvVar5 = operator_new(0x360);
        if (pvVar5 == (void *)0x0) {
          ppiVar12 = (int **)0x0;
        }
        else {
          uStack_20c = &stack0xfffffe00;
          puVar4 = (undefined4 *)0x20;
          uStack_20c = _malloc(0x20);
          _strncpy(uStack_20c,"ui/button_scene_stickman.dds",0x1c);
          uStack_20c[0x1c] = '\0';
          uVar31 = uVar31 | 2;
          uStack_80 = CONCAT31(uStack_80._1_3_,0xd);
          ppiVar12 = (int **)FUN_0069d820(pvVar5,&uStack_20c,0,0,0x3f800000,0x3f800000);
        }
        uStack_80 = 8;
        if (((uVar31 & 2) != 0) && (&DAT_00000014 < puVar4)) {
                    /* WARNING: Subroutine does not return */
          _free(uStack_20c);
        }
        (*(code *)(*ppiVar12)[0x1d])();
        _Dest = (wchar_t *)0x1;
        (*(code *)(*ppiVar12)[0x17])();
        uStack_254 = 1;
        piStack_258 = (int *)0x6611d8;
        piStack_250 = piVar11;
        (*(code *)(*ppiVar12)[0x19])();
        piStack_258 = (int *)0x1;
        ppiStack_25c = ppiVar12;
        (**(code **)(*piVar11 + 0xc))();
        pwVar14 = (wchar_t *)&stack0xfffffe14;
        piStack_1f4 = (int *)0x0;
        piVar30 = (int *)&lpType_0000000a;
        piVar13 = (int *)FUN_00ace02d(L"<t1>");
        if (piVar30 <= piVar13) {
          if (&lpType_0000000a < piVar30) {
                    /* WARNING: Subroutine does not return */
            _free(pwVar14);
          }
          pwVar14 = _malloc(((uint)(piVar13 + 8) >> 5) * 0x40);
        }
        _wcsncpy(pwVar14,L"<t1>",(size_t)piVar13);
        pwVar14[(int)piVar13] = L'\0';
        uStack_a8 = 0xf;
        piStack_1f4 = piVar13;
        pwVar14 = (wchar_t *)FUN_004b4a50((int)puVar4);
        sVar15 = _swprintf((wchar_t *)&pcStack_134,0xd18f7c,pwVar14);
        FUN_0040cae0(&stack0xfffffe08,(wchar_t *)&pcStack_134,sVar15);
        sVar15 = FUN_00ace02d(L"</t1>");
        FUN_0040cae0(&stack0xfffffe08,L"</t1>",sVar15);
        piVar13 = operator_new(0x3fc);
        uStack_a8 = 0x10;
        if (piVar13 == (int *)0x0) {
          puVar16 = (uint *)0x0;
        }
        else {
          puVar16 = FUN_00833290(piVar13);
        }
        puVar26 = &stack0xfffffe08;
        uStack_a8 = 0xf;
        puVar16[0xd5] = 0x43800000;
        (**(code **)(*puVar16 + 0x54))();
        (**(code **)(*puVar16 + 0x84))();
        uVar31 = *puVar16;
        (**(code **)(uVar31 + 0x14))();
        (**(code **)(uVar31 + 100))();
        (**(code **)(*puVar16 + 0x5c))();
        (**(code **)(*piVar11 + 0xc))();
        pvVar5 = operator_new(0x360);
        if (pvVar5 == (void *)0x0) {
          piVar30 = (int *)0x0;
        }
        else {
          ppiStack_25c = &piStack_250;
          piStack_250 = (int *)((uint)piStack_250 & 0xffffff00);
          piStack_258 = (int *)0x0;
          uStack_254 = 0x20;
          ppiStack_25c = _malloc(0x20);
          puVar26 = &stack0xfffffd6c;
          _strncpy((char *)ppiStack_25c,"ui/button_scene_clock.dds",0x19);
          piStack_258 = (int *)0x19;
          *(undefined1 *)((int)ppiStack_25c + 0x19) = 0;
          uStack_d0 = CONCAT31(uStack_d0._1_3_,0x12);
          iStack_29c = 0x6613e1;
          piVar30 = FUN_0069d820(pvVar5,&ppiStack_25c,0,0,0x3f800000,0x3f800000);
        }
        uStack_d0 = 0xf;
        if ((pvVar5 != (void *)0x0) && (0x14 < uStack_254)) {
                    /* WARNING: Subroutine does not return */
          _free(ppiStack_25c);
        }
        uVar25 = 0x42000000;
        (**(code **)(*piVar30 + 0x74))();
        pvVar5 = (void *)0xc1800000;
        iStack_29c = 0x661442;
        (**(code **)(*piVar7 + 0x5c))();
        iStack_29c = 0;
        piStack_2a4 = (int *)0x1;
        pwStack_2a8 = 
        L"ދŪ譕ￏ౐ⱨ퍆\xe800쯇F\xe88b䒋瀤쒃㬄狨茯૸൶䲋搤\xe851쀟F쒃贄⁅\xe8c1섅נᒍ刀䒉瀤Ứ䛁茀ӄ䒉搤䒋搤桕䘬Ó\xe850쮑F䲋瀤沉琤襦検䲋搤쒃\xe80c㖖￥䒉ᠤ䓛ᠤ\xec83贈⒔İ"
        ;
        piStack_2a0 = piVar11;
        (**(code **)(*piVar13 + 100))();
        pwStack_2a8 = (wchar_t *)0x1;
        (**(code **)(*piVar11 + 0xc))();
        uVar17 = FUN_00ace02d(L"<t1>");
        if (uVar31 <= uVar17) {
          if (10 < uVar31) {
                    /* WARNING: Subroutine does not return */
            _free(_Dest);
          }
          _Dest = _malloc((uVar17 + 0x20 & 0xffffffe0) * 2);
        }
        _wcsncpy(_Dest,L"<t1>",uVar17);
        _Dest[uVar17] = L'\0';
        iVar6 = FUN_004b4a60(uStack_254);
        ppiStack_2c0 = (int **)0x6614f0;
        sVar15 = _swprintf((wchar_t *)&puStack_184,0xd18f84,SUB84((double)((float)iVar6 * 0.1),0));
        FUN_0040cae0(&stack0xfffffdb8,(wchar_t *)&puStack_184,sVar15);
        sVar15 = FUN_00ace02d(L"</t1>");
        FUN_0040cae0(&stack0xfffffdb8,L"</t1>",sVar15);
        puVar4 = operator_new(0x3fc);
        uStack_f8 = 0x14;
        if (puVar4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_00833290(puVar4);
        }
        uStack_f8 = 0xf;
        piVar7[0xd5] = 0x43800000;
        (**(code **)(*piVar7 + 0x54))();
        uVar24 = 0x40000000;
        (**(code **)(*piVar7 + 0x84))();
        iStack_29c = *piVar7;
        (**(code **)(iStack_29c + 0x14))();
        ppiStack_2c0 = (int **)0x1;
        uStack_2c4 = 0x6615a2;
        piVar13 = piVar11;
        puStack_2c8 = puVar26;
        (**(code **)(iStack_29c + 100))();
        uStack_2c4 = 0xc0000000;
        (**(code **)(*piVar7 + 0x5c))();
        (**(code **)(*piVar11 + 0xc))();
        (**(code **)(*piVar11 + 0x88))();
        ppiStack_2c0 = (int **)param_1[0x13a];
        iVar6 = *piVar11;
        fVar23 = (float10)(**(code **)(iVar6 + 0x10))();
        ppiVar12 = ppiStack_2c0;
        this = (void *)(float)((float10)2.8026e-45 - fVar23 * (float10)0.5);
        (**(code **)(iVar6 + 0x5c))();
        do {
          cVar1 = (**(code **)(*piVar11 + 0x50))();
          uVar31 = (uint)uVar24;
        } while (cVar1 != '\0');
        pvVar18 = operator_new(0x360);
        if (pvVar18 == (void *)0x0) {
          ppiVar19 = (int **)0x0;
        }
        else {
          uVar31 = 0x20;
          piVar13 = _malloc(0x20);
          _strncpy((char *)piVar13,"ui/button_scene_slider.dds",0x1a);
          *(undefined1 *)((int)piVar13 + 0x1a) = 0;
          uStack_130 = CONCAT31(uStack_130._1_3_,0x16);
          uStack_2fc = 0x661692;
          ppiStack_2c0 = (int **)&stack0xfffffd0c;
          ppiVar19 = (int **)FUN_0069d820(pvVar18,(undefined4 *)&stack0xfffffd44,0,0,0x3f800000,
                                          0x3f800000);
        }
        uStack_130 = 0xf;
        ppiStack_2c0 = ppiVar19;
        if ((pvVar18 != (void *)0x0) && (0x14 < uVar31)) {
                    /* WARNING: Subroutine does not return */
          _free(piVar13);
        }
        pwVar14 = (wchar_t *)0x42000000;
        (*(code *)(*ppiVar19)[0x1d])();
        uStack_2fc = 0x6616ed;
        (*(code *)(*ppiVar19)[0x17])();
        uStack_2fc = 0xc0000000;
        uStack_304 = 2;
        uStack_308 = 0x661704;
        piStack_300 = piVar11;
        (*(code *)(*ppiVar19)[0x19])();
        uStack_308 = 1;
        ppiStack_30c = ppiVar19;
        (**(code **)(*(int *)param_1[0x13a] + 0xc))();
        piVar7 = (int *)FUN_00ace02d(L"<t1>");
        if (piStack_2a0 <= piVar7) {
          if (&lpType_0000000a < piStack_2a0) {
                    /* WARNING: Subroutine does not return */
            _free(pwStack_2a8);
          }
          piStack_2a0 = (int *)((uint)(piVar7 + 8) & 0xffffffe0);
          pwStack_2a8 = _malloc((int)piStack_2a0 * 2);
        }
        _wcsncpy(pwStack_2a8,L"<t1>",(size_t)piVar7);
        pwStack_2a8[(int)piVar7] = L'\0';
        piStack_2a4 = piVar7;
        sVar15 = _swprintf((wchar_t *)&stack0xfffffe1c,0xd18f7c,pwVar14);
        FUN_0040cae0(&pwStack_2a8,(wchar_t *)&stack0xfffffe1c,sVar15);
        sVar15 = FUN_00ace02d(L"</t1>");
        FUN_0040cae0(&pwStack_2a8,L"</t1>",sVar15);
        puVar4 = operator_new(0x3fc);
        uStack_158._0_1_ = 0x18;
        if (puVar4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_00833290(puVar4);
        }
        uStack_158 = CONCAT31(uStack_158._1_3_,0xf);
        piVar7[0xd5] = 0x43800000;
        (**(code **)(*piVar7 + 0x54))();
        (**(code **)(*piVar7 + 0x84))();
        iVar6 = *piVar7;
        (**(code **)(iVar6 + 0x14))();
        uVar31 = 1;
        (**(code **)(iVar6 + 100))();
        uVar8 = 0xc0000000;
        (**(code **)(*piVar7 + 0x5c))();
        (**(code **)(*(int *)param_1[0x13a] + 0xc))();
        cStack_2df = (char)((uint)ppiVar12 >> 8);
        if (cStack_2df != '\0') {
          pvVar18 = operator_new(0x360);
          if (pvVar18 == (void *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            ppiStack_30c = &piStack_300;
            piStack_300 = (int *)((uint)piStack_300 & 0xffffff00);
            uStack_308 = 0;
            uStack_304 = 0x20;
            ppiStack_30c = _malloc(0x20);
            _strncpy((char *)ppiStack_30c,"ui/button_scene_heart.dds",0x19);
            uStack_308 = 0x19;
            *(undefined1 *)((int)ppiStack_30c + 0x19) = 0;
            uVar31 = uVar31 | 0x10;
            uStack_180 = CONCAT31(uStack_180._1_3_,0x1a);
            piVar7 = FUN_0069d820(pvVar18,&ppiStack_30c,0,0,0x3f800000,0x3f800000);
          }
          uStack_180 = 0xf;
          if (((uVar31 & 0x10) != 0) && (uVar31 = uVar31 & 0xffffffef, 0x14 < uStack_304)) {
                    /* WARNING: Subroutine does not return */
            _free(ppiStack_30c);
          }
          (**(code **)(*piVar7 + 0x74))();
          (**(code **)(*piVar7 + 0x5c))(1);
          (**(code **)(*piVar7 + 100))(1,uVar8,0);
          (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
        }
        cStack_2dd = (char)((uint)ppiVar12 >> 0x18);
        if (cStack_2dd != '\0') {
          pvVar18 = operator_new(0x360);
          if (pvVar18 == (void *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            ppiStack_30c = &piStack_300;
            piStack_300 = (int *)((uint)piStack_300 & 0xffffff00);
            uStack_308 = 0;
            uStack_304 = 0x20;
            ppiStack_30c = _malloc(0x20);
            _strncpy((char *)ppiStack_30c,"ui/button_scene_dog.dds",0x17);
            uStack_308 = 0x17;
            *(undefined1 *)((int)ppiStack_30c + 0x17) = 0;
            uVar31 = uVar31 | 0x20;
            uStack_180 = CONCAT31(uStack_180._1_3_,0x1d);
            piVar7 = FUN_0069d820(pvVar18,&ppiStack_30c,0,0,0x3f800000,0x3f800000);
          }
          uStack_180 = 0xf;
          if (((uVar31 & 0x20) != 0) && (uVar31 = uVar31 & 0xffffffdf, 0x14 < uStack_304)) {
                    /* WARNING: Subroutine does not return */
            _free(ppiStack_30c);
          }
          (**(code **)(*piVar7 + 0x74))();
          (**(code **)(*piVar7 + 0x5c))(1);
          (**(code **)(*piVar7 + 100))(1,uVar8,0);
          (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
        }
        cStack_2de = (char)((uint)ppiVar12 >> 0x10);
        if (cStack_2de != '\0') {
          pvVar18 = operator_new(0x360);
          if (pvVar18 == (void *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            ppiStack_30c = &piStack_300;
            piStack_300 = (int *)((uint)piStack_300 & 0xffffff00);
            uStack_308 = 0;
            uStack_304 = 0x20;
            ppiStack_30c = _malloc(0x20);
            _strncpy((char *)ppiStack_30c,"ui/button_scene_horse.dds",0x19);
            uStack_308 = 0x19;
            *(undefined1 *)((int)ppiStack_30c + 0x19) = 0;
            uVar31 = uVar31 | 0x40;
            uStack_180 = CONCAT31(uStack_180._1_3_,0x20);
            piVar7 = FUN_0069d820(pvVar18,&ppiStack_30c,0,0,0x3f800000,0x3f800000);
          }
          uStack_180 = 0xf;
          if (((uVar31 & 0x40) != 0) && (uVar31 = uVar31 & 0xffffffbf, 0x14 < uStack_304)) {
                    /* WARNING: Subroutine does not return */
            _free(ppiStack_30c);
          }
          (**(code **)(*piVar7 + 0x74))();
          (**(code **)(*piVar7 + 0x5c))(1);
          (**(code **)(*piVar7 + 100))(1,uVar8,0);
          (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
        }
        cVar1 = (char)((uint)uVar8 >> 0x18);
        cStack_2e0 = (char)ppiVar12;
        if ((cVar1 != '\0') || (cStack_2e0 != '\0')) {
          if (cVar1 != '\0') {
            pvVar18 = operator_new(0x360);
            if (pvVar18 == (void *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              ppiStack_30c = &piStack_300;
              piStack_300 = (int *)((uint)piStack_300 & 0xffffff00);
              uStack_308 = 0;
              uStack_304 = 0x20;
              ppiStack_30c = _malloc(0x20);
              _strncpy((char *)ppiStack_30c,"ui/button_cam_dolly.dds",0x17);
              uStack_308 = 0x17;
              *(undefined1 *)((int)ppiStack_30c + 0x17) = 0;
              uVar31 = uVar31 | 0x80;
              uStack_180 = CONCAT31(uStack_180._1_3_,0x23);
              piVar7 = FUN_0069d820(pvVar18,&ppiStack_30c,0,0,0x3f800000,0x3f800000);
            }
            uStack_180 = 0xf;
            if (((char)uVar31 < '\0') && (uVar31 = uVar31 & 0xffffff7f, 0x14 < uStack_304)) {
                    /* WARNING: Subroutine does not return */
              _free(ppiStack_30c);
            }
            (**(code **)(*piVar7 + 0x74))();
            (**(code **)(*piVar7 + 0x5c))(1);
            (**(code **)(*piVar7 + 100))(1,uVar8,0x42080000);
            (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
          }
          if (cStack_2e0 != '\0') {
            pvVar18 = operator_new(0x360);
            if (pvVar18 == (void *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              ppiStack_30c = &piStack_300;
              piStack_300 = (int *)((uint)piStack_300 & 0xffffff00);
              uStack_308 = 0;
              uStack_304 = 0x20;
              ppiStack_30c = _malloc(0x20);
              _strncpy((char *)ppiStack_30c,"ui/button_cam_crane.dds",0x17);
              uStack_308 = 0x17;
              *(undefined1 *)((int)ppiStack_30c + 0x17) = 0;
              uVar31 = uVar31 | 0x100;
              uStack_180 = CONCAT31(uStack_180._1_3_,0x26);
              piVar7 = FUN_0069d820(pvVar18,&ppiStack_30c,0,0,0x3f800000,0x3f800000);
            }
            uStack_180 = 0xf;
            if (((uVar31 & 0x100) != 0) && (uVar31 = uVar31 & 0xfffffeff, 0x14 < uStack_304)) {
                    /* WARNING: Subroutine does not return */
              _free(ppiStack_30c);
            }
            (**(code **)(*piVar7 + 0x74))();
            (**(code **)(*piVar7 + 0x5c))(1);
            (**(code **)(*piVar7 + 100))(1,uVar8,0x42080000);
            (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
          }
        }
        pfVar20 = (float *)FUN_004b58b0(this,(float *)&stack0xfffffd14);
        if (0.0 < *pfVar20) {
          pvVar18 = operator_new(0x360);
          uStack_180._0_1_ = 0x28;
          if (pvVar18 == (void *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            puVar4 = FUN_004b7880(this,(undefined4 *)&stack0xfffffd70);
            uVar31 = uVar31 | 0x200;
            uStack_180 = CONCAT31(uStack_180._1_3_,0x29);
            piVar7 = FUN_0069d820(pvVar18,puVar4,0,0x3e800000,0x3f800000,0x3f400000);
          }
          uStack_180 = 0xf;
          if (((uVar31 & 0x200) != 0) && (uVar31 = uVar31 & 0xfffffdff, 0x14 < uVar25)) {
                    /* WARNING: Subroutine does not return */
            _free(pvVar5);
          }
          (**(code **)(*piVar7 + 0x74))();
          (**(code **)(*piVar7 + 0x5c))(1);
          (**(code **)(*piVar7 + 100))(2,piVar11,0xc2100000);
          (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
          (**(code **)(*piVar7 + 0x14))();
        }
        ppiVar12 = &piStack_2a4;
        piStack_2a4 = (int *)((uint)piStack_2a4 & 0xffff0000);
        pwStack_2a8 = (wchar_t *)0xa;
        pwVar14 = (wchar_t *)FUN_00ace02d(L"<p align=center><t3>");
        if (pwStack_2a8 <= pwVar14) {
          if ((wchar_t *)0xa < pwStack_2a8) {
                    /* WARNING: Subroutine does not return */
            _free(ppiVar12);
          }
          pwStack_2a8 = (wchar_t *)(((uint)(pwVar14 + 0x10) >> 5) << 5);
          ppiVar12 = _malloc(((uint)(pwVar14 + 0x10) >> 5) * 0x40);
        }
        _wcsncpy((wchar_t *)ppiVar12,L"<p align=center><t3>",(size_t)pwVar14);
        *(undefined2 *)((int)ppiVar12 + (int)pwVar14 * 2) = 0;
        uStack_180 = CONCAT31(uStack_180._1_3_,0x2b);
        puVar4 = FUN_0065df10(this,(undefined4 *)&stack0xfffffd70);
        uVar31 = uVar31 | 0x400;
        bVar2 = FUN_00431270(puVar4,(wchar_t *)&lpCaption_00d16918);
        if (((uVar31 & 0x400) != 0) && (10 < uVar25)) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar5);
        }
        if (bVar2) {
          puVar4 = FUN_004b62d0(this,(undefined4 *)&stack0xfffffd70);
          FUN_0040cae0(&stack0xfffffd50,(wchar_t *)*puVar4,puVar4[1]);
          if (10 < uVar25) {
                    /* WARNING: Subroutine does not return */
            _free(pvVar5);
          }
        }
        else {
          sVar15 = FUN_00ace02d(L"<translate>blurb_");
          FUN_0040cae0(&stack0xfffffd50,L"<translate>blurb_",sVar15);
          puVar4 = FUN_00568790((undefined4 *)&stack0xfffffd70,param_1 + 0x141);
          FUN_0040cae0(&stack0xfffffd50,(wchar_t *)*puVar4,puVar4[1]);
          if (10 < uVar25) {
                    /* WARNING: Subroutine does not return */
            _free(pvVar5);
          }
          sVar15 = FUN_00ace02d(L"</translate>");
          FUN_0040cae0(&stack0xfffffd50,L"</translate>",sVar15);
        }
        sVar15 = FUN_00ace02d(L"</t3></p>");
        FUN_0040cae0(&stack0xfffffd50,L"</t3></p>",sVar15);
        puVar4 = operator_new(0x3fc);
        uStack_180._0_1_ = 0x2c;
        if (puVar4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_00833290(puVar4);
        }
        uStack_180 = CONCAT31(uStack_180._1_3_,0x2b);
        (**(code **)(*piVar7 + 0x5c))();
        iVar6 = param_1[0x13a];
        iStack_29c = 2;
        iVar10 = 0;
        piVar13 = (int *)0x0;
        if (iVar6 != 0) {
          piVar13 = (int *)(iVar6 + 0x18);
          iVar10 = *piVar13;
          *(undefined1 **)(*piVar13 + 4) = &stack0xfffffd6c;
          *piVar13 = (int)&stack0xfffffd6c;
        }
        piVar7[0x3a] = 2;
        auStack_18c[0]._0_1_ = 0x2d;
        (**(code **)(piVar7[0x3b] + 4))();
        piVar7[0x40] = iVar6;
        (**(code **)piVar7[0x3b])();
        piVar7[0x41] = 0x40800000;
        piVar7[0x42] = 0x40800000;
        auStack_18c[0] = CONCAT31(auStack_18c[0]._1_3_,0x2b);
        if (piVar13 != (int *)0x0) {
          *piVar13 = iVar10;
        }
        if (iVar10 != 0) {
          *(int **)(iVar10 + 4) = piVar13;
        }
        (**(code **)(*piVar7 + 100))(2,piVar11);
        do {
          cVar1 = (**(code **)(*piVar7 + 0x50))(1);
        } while (cVar1 != '\0');
        (**(code **)(*piVar7 + 0x54))(&puStack_2c8);
        (**(code **)(*piVar7 + 0x8c))(0);
        (**(code **)(*(int *)param_1[0x13a] + 0xc))(piVar7,1);
        if (10 < uStack_190) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_198);
        }
        if (&lpType_0000000a < pcStack_1b0) {
                    /* WARNING: Subroutine does not return */
          _free(&stack0xfffffffc);
        }
        uStack_68 = 0xffffffff;
        pwVar14 = pwStack_110;
        if (pwStack_110 != (wchar_t *)0x0) {
          while( true ) {
            if (pwVar14 == pwStack_10c) {
                    /* WARNING: Subroutine does not return */
              _free(pwStack_110);
            }
            if (0x14 < *(uint *)(pwVar14 + 4)) break;
            pwVar14 = pwVar14 + 0x10;
          }
                    /* WARNING: Subroutine does not return */
          _free(*(void **)pwVar14);
        }
      }
    }
    else {
      piStack_1f4 = (int *)&stack0xfffffe18;
      uVar17 = 0x14;
      puStack_198 = auStack_18c;
      auStack_18c[0] = auStack_18c[0] & 0xffff0000;
      uStack_194 = 0;
      uStack_190 = 10;
      uStack_68 = 0x2f;
      if (iVar6 == 5) {
        puVar4 = FUN_009f43e0(&puStack_178);
        sVar15 = FUN_00ace02d(L"<t3>");
        FUN_0040cae0(&puStack_198,L"<t3>",sVar15);
        FUN_0040cae0(&puStack_198,(wchar_t *)*puVar4,puVar4[1]);
        sVar15 = FUN_00ace02d(L"</t3>");
        FUN_0040cae0(&puStack_198,L"</t3>",sVar15);
      }
      else {
        if (iVar6 == 6) {
          pcVar29 = "_detail";
          piVar11 = param_1 + 0x141;
          pvVar5 = FUN_00407630(&piStack_1f4,"metaprop_");
          pvVar5 = FUN_004211a0(pvVar5,piVar11);
          FUN_00407630(pvVar5,pcVar29);
        }
        else if (iVar6 == 3) {
          piVar11 = param_1 + 0x141;
          pvVar5 = FUN_00407630(&piStack_1f4,"blurb_");
          FUN_004211a0(pvVar5,piVar11);
        }
        else {
          puStack_154 = auStack_148;
          auStack_148[0] = 0;
          pwStack_150 = (wchar_t *)0x0;
          uStack_14c = 10;
          uStack_68._0_1_ = 0x30;
          uStack_68._1_3_ = 0;
          thunk_FUN_00444a70((uint *)(param_1 + 0x160),&puStack_154);
          pwVar14 = L"</p><br>";
          ppuVar27 = &puStack_154;
          pvVar5 = FUN_0040d3c0(&puStack_198,L"<p align=center>");
          pvVar5 = FUN_0040d3a0(pvVar5,ppuVar27);
          FUN_0040d3c0(pvVar5,pwVar14);
          piVar11 = param_1 + 0x141;
          pvVar5 = FUN_00407630(&piStack_1f4,"blurb_");
          FUN_004211a0(pvVar5,piVar11);
          uStack_68 = CONCAT31(uStack_68._1_3_,0x2f);
          if (10 < uStack_14c) {
                    /* WARNING: Subroutine does not return */
            _free(puStack_154);
          }
        }
        if ((void *)param_1[300] == (void *)0x0) {
LAB_006625b0:
          uStack_20c = (char *)((uint)uStack_20c & 0xffffff);
        }
        else {
          puVar4 = FUN_00430470((void *)param_1[300],&puStack_178);
          uVar31 = uVar31 | 0x800;
          bVar2 = FUN_00431270(puVar4,(wchar_t *)&lpCaption_00d16918);
          uStack_20c = (char *)CONCAT13(1,(undefined3)uStack_20c);
          if (!bVar2) goto LAB_006625b0;
        }
        if (((uVar31 & 0x800) != 0) && (10 < (uint)fStack_170)) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_178);
        }
        if (uStack_20c._3_1_ == '\0') {
          puVar4 = FUN_009b5030(&puStack_178,&piStack_1f4);
        }
        else {
          puVar4 = FUN_00430470((void *)param_1[300],&puStack_178);
        }
        pwVar14 = L"</t3>";
        pvVar5 = FUN_0040d3c0(&puStack_198,L"<t3>");
        pvVar5 = FUN_0040d3a0(pvVar5,puVar4);
        FUN_0040d3c0(pvVar5,pwVar14);
      }
      if (10 < (uint)fStack_170) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_178);
      }
      puStack_1d4 = operator_new(0x3fc);
      uStack_68._0_1_ = 0x31;
      if (puStack_1d4 == (undefined4 *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = FUN_00833290(puStack_1d4);
      }
      uStack_68 = CONCAT31(uStack_68._1_3_,0x2f);
      (**(code **)(*piVar11 + 0x5c))();
      puVar4 = (undefined4 *)FUN_005fbfa0(&puStack_184,2,param_1[0x13a],0x40800000);
      pvStack_74._0_1_ = 0x32;
      FUN_005f59e0(piVar11 + 0x3a,puVar4);
      pvStack_74 = (void *)CONCAT31(pvStack_74._1_3_,0x2f);
      FUN_005f9ed0((int)&puStack_184);
      (**(code **)(*piVar11 + 100))();
      do {
        cVar1 = (**(code **)(*piVar11 + 0x50))();
      } while (cVar1 != '\0');
      (**(code **)(*piVar11 + 0x54))();
      (**(code **)(*piVar11 + 0x8c))();
      (**(code **)(*(int *)param_1[0x13a] + 0xc))();
      if (param_1[0x15a] == 1) {
        pfVar20 = FUN_004d2910((float *)&puStack_1d4,param_1 + 0x141);
        fVar21 = 1.0 - *pfVar20;
        puStack_1d4 = operator_new(0x344);
        uStack_68._0_1_ = 0x33;
        if (puStack_1d4 == (undefined4 *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = FUN_007432f0(puStack_1d4);
        }
        uStack_68._0_1_ = 0x2f;
        puStack_1d4 = operator_new(0x4dc);
        uStack_68._0_1_ = 0x34;
        if (puStack_1d4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_007ac880(puStack_1d4,1,0,0,1);
        }
        puStack_1d4 = (undefined4 *)&stack0xfffffddc;
        iVar6 = *piVar7;
        uStack_68 = CONCAT31(uStack_68._1_3_,0x2f);
        FUN_00407070(&stack0xfffffddc,fVar21);
        (**(code **)(iVar6 + 0x10c))();
        (**(code **)(*piVar7 + 0x60))();
        uVar31 = 0;
        (**(code **)(*piVar7 + 100))();
        (**(code **)(*piVar11 + 0xc))();
        puVar4 = operator_new(0x3fc);
        uStack_90 = 0x35;
        if (puVar4 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = FUN_00833290(puVar4);
        }
        pfStack_17c = &fStack_170;
        fStack_170 = (float)((uint)fStack_170 & 0xffff0000);
        puStack_178 = (uint *)0x0;
        pwStack_174 = (wchar_t *)&lpType_0000000a;
        uVar25 = FUN_00ace02d(L"<t3><nobr><translate>SITT_SET_FRESHNESS</translate>: </nobr></t3>");
        piStack_250 = (int *)0x662870;
        FUN_004036d0(&pfStack_17c,
                     L"<t3><nobr><translate>SITT_SET_FRESHNESS</translate>: </nobr></t3>",uVar25);
        uStack_90 = 0x36;
        (**(code **)(*piVar7 + 0x54))();
        piStack_250 = (int *)0x662894;
        uStack_254 = uVar31;
        (**(code **)(*piVar7 + 0x84))();
        piStack_250 = (int *)0x0;
        piStack_258 = (int *)0x1;
        ppiStack_25c = (int **)0x6628a4;
        (**(code **)(*piVar7 + 0x60))();
        ppiStack_25c = (int **)0x40000000;
        (**(code **)(*piVar7 + 100))();
        (**(code **)(*piVar11 + 0xc))();
        do {
          cVar1 = (**(code **)(*piVar11 + 0x50))();
        } while (cVar1 != '\0');
        (**(code **)(*piVar11 + 0x84))();
        piStack_258 = (int *)param_1[0x13a];
        iVar6 = *piVar11;
        fVar23 = (float10)(**(code **)(*piStack_258 + 0x10))();
        piStack_250 = (int *)(float)fVar23;
        (**(code **)(*piVar11 + 0x10))();
        (**(code **)(iVar6 + 0x5c))();
        (**(code **)(*piVar11 + 100))();
        (**(code **)(*(int *)param_1[0x13a] + 0xc))();
        if (10 < uStack_14c) {
                    /* WARNING: Subroutine does not return */
          _free(puStack_154);
        }
      }
      if (10 < uStack_190) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_198);
      }
      uStack_68 = 0xffffffff;
      if (0x14 < uVar17) {
                    /* WARNING: Subroutine does not return */
        _free(piStack_1f4);
      }
    }
    (**(code **)(*(int *)param_1[0x13a] + 0x8c))();
    goto LAB_0066317b;
  }
  (**(code **)(*(int *)param_1[0x13a] + 0x74))();
  fVar23 = (float10)(**(code **)(*(int *)param_1[0x13a] + 0x10))();
  local_1ac = (undefined4 *)(float)(fVar23 * (float10)0.5);
  puStack_1d4 = (undefined4 *)0x6629cc;
  puStack_184 = operator_new(0x3fc);
  uStack_18 = 0x37;
  if (puStack_184 == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00833290(puStack_184);
  }
  puStack_1d4 = (undefined4 *)param_1[0x13a];
  uStack_18 = 0xffffffff;
  (**(code **)(*piVar11 + 100))();
  puStack_154 = auStack_148;
  auStack_148[0] = 0;
  pwStack_150 = (wchar_t *)0x0;
  uStack_14c = 10;
  uVar31 = FUN_00ace02d((short *)&DAT_00d3445c);
  FUN_004036d0(&puStack_154,L"<b>",uVar31);
  uStack_24 = 0x38;
  FUN_0040cae0(&puStack_154,(wchar_t *)param_1[0x151],param_1[0x152]);
  if (param_1[0x15a] == 2) {
    (**(code **)(*(int *)param_1[300] + 0x20))();
    puStack_178 = auStack_16c;
    auStack_16c[0] = auStack_16c[0] & 0xffff0000;
    pwStack_174 = (wchar_t *)0x0;
    fStack_170 = 1.4013e-44;
    uStack_28 = 0x39;
    FUN_00444a70(&uStack_194,&puStack_178);
    sVar15 = FUN_00ace02d((short *)&DAT_00d2ee98);
    FUN_0040cae0(&uStack_158,L": ",sVar15);
    cVar1 = (**(code **)(*(int *)param_1[300] + 0x24))();
    pwVar14 = pwStack_174;
    fVar21 = fStack_170;
    if ((cVar1 == '\0') && (DAT_0104d970 == '\0')) {
      sVar15 = FUN_00ace02d(L"<font color=#ff0000>");
      FUN_0040cae0(&puStack_154,L"<font color=#ff0000>",sVar15);
      FUN_0040cae0(&puStack_154,pwStack_174,(size_t)fStack_170);
      fVar21 = (float)FUN_00ace02d(L"</font>");
      pwVar14 = L"</font>";
    }
    FUN_0040cae0(&puStack_154,pwVar14,(size_t)fVar21);
    pwVar14 = pwStack_174;
    uVar31 = auStack_16c[0];
joined_r0x00662e13:
    uStack_24 = CONCAT31(uStack_24._1_3_,0x38);
    if (10 < uVar31) {
                    /* WARNING: Subroutine does not return */
      _free(pwVar14);
    }
  }
  else if ((param_1[0x15a] == 7) && (DAT_0104e720 != (void *)0x0)) {
    pcStack_1b0 = acStack_1a4;
    uStack_190 = 0;
    auStack_18c[0] = 0;
    acStack_1a4[0] = '\0';
    local_1ac = (undefined4 *)0x0;
    uStack_1a8 = 0x20;
    pcStack_1b0 = _malloc(0x20);
    _strncpy(pcStack_1b0,"landscape_tooltip_path1",0x17);
    piVar7 = param_1 + 0x141;
    local_1ac = (undefined4 *)0x17;
    pcStack_1b0[0x17] = '\0';
    piStack_1f4 = (int *)0x662be2;
    uVar8 = FUN_00401ec0(piVar7,&pcStack_1b0);
    if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
      _free(pcStack_1b0);
    }
    if ((char)uVar8 == '\0') {
      pcStack_1b0 = acStack_1a4;
      acStack_1a4[0] = '\0';
      local_1ac = (undefined4 *)0x0;
      uStack_1a8 = 0x20;
      pcStack_1b0 = _malloc(0x20);
      _strncpy(pcStack_1b0,"landscape_tooltip_deletepath",0x1c);
      local_1ac = (undefined4 *)0x1c;
      pcStack_1b0[0x1c] = '\0';
      piStack_1f4 = (int *)0x662c7b;
      uVar8 = FUN_00401ec0(piVar7,&pcStack_1b0);
      if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
        _free(pcStack_1b0);
      }
      if ((char)uVar8 == '\0') {
        FUN_00401de0(&pcStack_1b0,"landscape_tooltip_grass",0xffffffff);
        uVar8 = FUN_00401ec0(piVar7,&pcStack_1b0);
        if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
          _free(pcStack_1b0);
        }
        if ((char)uVar8 == '\0') {
          FUN_00401de0(&pcStack_1b0,"landscape_tooltip_sand",0xffffffff);
          uVar8 = FUN_00401ec0(piVar7,&pcStack_1b0);
          if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
            _free(pcStack_1b0);
          }
          if ((char)uVar8 == '\0') {
            FUN_00401de0(&pcStack_1b0,"landscape_tooltip_concrete",0xffffffff);
            uVar8 = FUN_00401ec0(piVar7,&pcStack_1b0);
            if (0x14 < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
              _free(pcStack_1b0);
            }
            if ((char)uVar8 == '\0') goto LAB_00662d86;
            iVar6 = 4;
          }
          else {
            iVar6 = 3;
          }
        }
        else {
          iVar6 = 2;
        }
      }
      else {
        iVar6 = 1;
      }
      puVar22 = FUN_0078c5b0(DAT_0104e720,(ulonglong *)&stack0xfffffe40,iVar6);
      FUN_00442950(&uStack_190,(undefined4 *)puVar22);
    }
    else {
      puVar22 = FUN_0078c5b0(DAT_0104e720,(ulonglong *)&stack0xfffffe40,0);
      uStack_190 = (uint)*puVar22;
      auStack_18c[0] = *(uint *)((int)puVar22 + 4);
      FUN_00471b10((longlong *)&uStack_190);
    }
LAB_00662d86:
    pwStack_110 = (wchar_t *)&uStack_104;
    uStack_104 = (uint)uStack_104._2_2_ << 0x10;
    pwStack_10c = (wchar_t *)0x0;
    uStack_108 = 10;
    uStack_24._0_1_ = 0x3a;
    FUN_00444a70(&uStack_190,&pwStack_110);
    sVar15 = FUN_00ace02d((short *)&DAT_00d2ee98);
    FUN_0040cae0(&puStack_154,L": ",sVar15);
    FUN_0040cae0(&puStack_154,pwStack_110,(size_t)pwStack_10c);
    pwVar14 = pwStack_110;
    uVar31 = uStack_108;
    goto joined_r0x00662e13;
  }
  sVar15 = FUN_00ace02d(L"</b>");
  FUN_0040cae0(&puStack_154,L"</b>",sVar15);
  piVar11[0xd5] = 0x43160000;
  *(char *)(piVar11 + 0xd6) = '\x01';
  (**(code **)(*piVar11 + 0x54))();
  uVar31 = 0;
  (**(code **)(*piVar11 + 0x84))();
  iVar6 = *piVar11;
  (**(code **)(iVar6 + 0x10))();
  (**(code **)(iVar6 + 0x5c))();
  piStack_1f4 = piVar11;
  (**(code **)(*(int *)param_1[0x13a] + 0xc))();
  puStack_ec = auStack_e0;
  auStack_e0[0] = 0;
  uStack_e8 = 0;
  uStack_e4 = 0x14;
  uStack_40._0_1_ = 0x3b;
  FUN_004015d0(&puStack_ec,(char *)param_1[0x141],param_1[0x142]);
  FUN_004073f0(&puStack_ec,"_desc",5);
  FUN_009b5030(&pwStack_150,&puStack_ec);
  uStack_40 = CONCAT31(uStack_40._1_3_,0x3c);
  if ((int *)param_1[300] == (int *)0x0) {
LAB_00662f64:
    bVar2 = false;
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[300] + 0x18))();
    uVar31 = uVar31 | 0x1000;
    bVar3 = FUN_00431270(puVar4,(wchar_t *)&lpCaption_00d16918);
    bVar2 = true;
    if (!bVar3) goto LAB_00662f64;
  }
  if (((uVar31 & 0x1000) != 0) && (10 < uStack_124)) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_12c);
  }
  if (bVar2) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_1[300] + 0x18))();
    FUN_004036d0(&pwStack_150,(wchar_t *)*puVar4,puVar4[1]);
    if (10 < uStack_124) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_12c);
    }
  }
  pwStack_10c = awStack_100;
  awStack_100[0] = L'\0';
  uStack_108 = 0;
  uStack_104 = 10;
  uStack_40._0_1_ = 0x3d;
  sVar15 = FUN_00ace02d(L"<t3>");
  FUN_0040cae0(&pwStack_10c,L"<t3>",sVar15);
  FUN_0040cae0(&pwStack_10c,pwStack_150,uStack_14c);
  sVar15 = FUN_00ace02d(L"</t3>");
  FUN_0040cae0(&pwStack_10c,L"</t3>",sVar15);
  local_1ac = operator_new(0x3fc);
  uStack_40._0_1_ = 0x3e;
  if (local_1ac == (undefined4 *)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = FUN_00833290(local_1ac);
  }
  uStack_40 = CONCAT31(uStack_40._1_3_,0x3d);
  (**(code **)(*piVar11 + 0x5c))();
  uStack_20c = (char *)0x2;
  (**(code **)(*piVar11 + 100))();
  piVar11[0xd5] = 0x43160000;
  (**(code **)(*piVar11 + 0x54))();
  (**(code **)(*piVar11 + 0x8c))();
  iVar6 = *piVar11;
  (**(code **)(*(int *)param_1[0x13a] + 0x10))();
  (**(code **)(iVar6 + 0x78))();
  (**(code **)(*(int *)param_1[0x13a] + 0xc))();
  (**(code **)(*(int *)param_1[0x13a] + 0x8c))();
  if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_138);
  }
  if (&lpType_0000000a < pwStack_174) {
                    /* WARNING: Subroutine does not return */
    _free(pfStack_17c);
  }
  if (&DAT_00000014 < pwStack_110) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_118);
  }
  uStack_6c = 0xffffffff;
  if (10 < uStack_194) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_19c);
  }
LAB_0066317b:
  cVar1 = (**(code **)(*param_1 + 0xc4))();
  if (((cVar1 != '\0') && (iVar6 = param_1[0x15a], -1 < iVar6)) && ((iVar6 < 2 || (iVar6 == 2)))) {
    (**(code **)(*(int *)param_1[0x13a] + 0x18))();
  }
  ExceptionList = pvStack_74;
  return param_1[0x13a];
}


//// FUNCTION FUN_006631f0 @ 006631f0 ////

void __thiscall FUN_006631f0(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3a38;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3420c;
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
  FUN_00660230((void *)((int)this + 0x570),(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006632a0 @ 006632a0 ////

int __fastcall FUN_006632a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0065e410();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x25) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_006632d0 @ 006632d0 ////

undefined4 * __thiscall
FUN_006632d0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *local_2c;
  undefined4 local_28;
  uint local_24;
  undefined2 local_20 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3b16;
  local_c = ExceptionList;
  local_2c = local_20;
  local_20[0] = 0;
  local_28 = 0;
  local_24 = 10;
  ExceptionList = &local_c;
  uVar1 = FUN_00ace02d((short *)&lpCaption_00d16918);
  FUN_004036d0(&local_2c,(wchar_t *)&lpCaption_00d16918,uVar1);
  local_4 = 0;
  FUN_0069fb10(this,param_1,&local_2c,param_2,param_3,param_5,param_6,param_7,param_8);
  if (10 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  *(undefined ***)this = &PTR_FUN_00d342fc;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d342e0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x430) = 0;
  *(undefined4 *)((int)this + 0x428) = 0;
  *(undefined4 *)((int)this + 0x42c) = 0;
  *(undefined4 **)((int)this + 0x430) = (undefined4 *)((int)this + 0x424);
  *(undefined4 *)((int)this + 0x424) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x438) = 0;
  *(undefined4 *)((int)this + 0x448) = 0;
  *(undefined4 *)((int)this + 0x440) = 0;
  *(undefined4 *)((int)this + 0x444) = 0;
  *(undefined4 **)((int)this + 0x448) = (undefined4 *)((int)this + 0x43c);
  *(undefined4 *)((int)this + 0x43c) = &PTR_LAB_00d33814;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  *(undefined4 *)((int)this + 0x45c) = 0;
  *(undefined4 **)((int)this + 0x460) = (undefined4 *)((int)this + 0x454);
  *(undefined4 *)((int)this + 0x454) = &PTR_FUN_00d341fc;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x478) = 0;
  *(undefined4 *)((int)this + 0x470) = 0;
  *(undefined4 *)((int)this + 0x474) = 0;
  *(undefined4 **)((int)this + 0x478) = (undefined4 *)((int)this + 0x46c);
  *(undefined4 *)((int)this + 0x46c) = &PTR_FUN_00d341fc;
  *(undefined4 *)((int)this + 0x480) = 0;
  *(undefined4 *)((int)this + 0x490) = 0;
  *(undefined4 *)((int)this + 0x488) = 0;
  *(undefined4 *)((int)this + 0x48c) = 0;
  *(undefined4 **)((int)this + 0x490) = (undefined4 *)((int)this + 0x484);
  *(undefined4 *)((int)this + 0x484) = &PTR_FUN_00d341fc;
  *(undefined4 *)((int)this + 0x498) = 0;
  *(undefined4 *)((int)this + 0x4a8) = 0;
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined4 *)((int)this + 0x4a4) = 0;
  *(undefined4 **)((int)this + 0x4a8) = (undefined4 *)((int)this + 0x49c);
  *(undefined4 *)((int)this + 0x49c) = &PTR_LAB_00d33824;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 **)((int)this + 0x4c0) = (undefined4 *)((int)this + 0x4b4);
  *(undefined4 *)((int)this + 0x4b4) = &PTR_FUN_00d1a200;
  *(undefined4 *)((int)this + 0x4c8) = 0;
  *(undefined4 *)((int)this + 0x4cc) = 0;
  *(undefined4 *)((int)this + 0x4e0) = 0;
  *(undefined4 *)((int)this + 0x4d8) = 0;
  *(undefined4 *)((int)this + 0x4dc) = 0;
  *(undefined4 **)((int)this + 0x4e0) = (undefined4 *)((int)this + 0x4d4);
  *(undefined4 *)((int)this + 0x4d4) = &PTR_FUN_00d18c2c;
  *(undefined4 *)((int)this + 0x4e8) = 0;
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 **)((int)this + 0x4f8) = (undefined4 *)((int)this + 0x4ec);
  *(undefined4 *)((int)this + 0x4ec) = &PTR_FUN_00d16bec;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined1 **)((int)this + 0x504) = (undefined1 *)((int)this + 0x510);
  *(undefined1 *)((int)this + 0x510) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x50c) = 0x14;
  *(undefined1 **)((int)this + 0x524) = (undefined1 *)((int)this + 0x530);
  *(undefined1 *)((int)this + 0x530) = 0;
  *(undefined4 *)((int)this + 0x528) = 0;
  *(undefined4 *)((int)this + 0x52c) = 0x14;
  *(undefined2 **)((int)this + 0x544) = (undefined2 *)((int)this + 0x550);
  *(undefined2 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x54c) = 10;
  local_4._0_1_ = 0xe;
  *(undefined1 *)((int)this + 0x56c) = 1;
  *(undefined1 *)((int)this + 0x56d) = 1;
  *(undefined1 *)((int)this + 0x56e) = 0;
  iVar2 = FUN_0065e410();
  *(int *)((int)this + 0x574) = iVar2;
  *(undefined1 *)(iVar2 + 0x25) = 1;
  *(int *)(*(int *)((int)this + 0x574) + 4) = *(int *)((int)this + 0x574);
  *(undefined4 *)*(undefined4 *)((int)this + 0x574) = *(undefined4 *)((int)this + 0x574);
  *(int *)(*(int *)((int)this + 0x574) + 8) = *(int *)((int)this + 0x574);
  *(undefined4 *)((int)this + 0x578) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xf);
  uVar3 = FUN_00acd42c();
  *(ulonglong *)((int)this + 0x580) = uVar3;
  FUN_00471b10((longlong *)((int)this + 0x580));
  *(undefined4 *)((int)this + 0x594) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined ***)((int)this + 0x588) = &PTR_FUN_00d2d110;
  *(int *)((int)this + 0x594) = (int)this + 0x588;
  *(undefined4 *)((int)this + 0x5ac) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  *(undefined4 *)((int)this + 0x5a8) = 0;
  *(undefined4 *)((int)this + 0x5b4) = 0;
  *(undefined4 **)((int)this + 0x5ac) = (undefined4 *)((int)this + 0x5a0);
  *(undefined4 *)((int)this + 0x5a0) = &PTR_FUN_00d2d110;
  *(uint *)((int)this + 0x114) = *(uint *)((int)this + 0x114) & 0xfffffffd;
  *(undefined1 *)((int)this + 0x5b8) = 0;
  *(undefined4 *)((int)this + 0x568) = param_4;
  *(undefined4 *)((int)this + 0x564) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_006635d0 @ 006635d0 ////

undefined4 * __thiscall FUN_006635d0(void *this,byte param_1)

{
  FUN_006602c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006635f0 @ 006635f0 ////

/* WARNING: Removing unreachable block (ram,0x006641a9) */
/* WARNING: Removing unreachable block (ram,0x006641a3) */
/* WARNING: Removing unreachable block (ram,0x006641cb) */
/* WARNING: Removing unreachable block (ram,0x0066421c) */
/* WARNING: Removing unreachable block (ram,0x00664221) */
/* WARNING: Removing unreachable block (ram,0x00664227) */
/* WARNING: Removing unreachable block (ram,0x00664241) */
/* WARNING: Removing unreachable block (ram,0x00664271) */
/* WARNING: Removing unreachable block (ram,0x0066425e) */
/* WARNING: Removing unreachable block (ram,0x00664273) */
/* WARNING: Removing unreachable block (ram,0x0066431f) */
/* WARNING: Removing unreachable block (ram,0x00664312) */

void __fastcall FUN_006635f0(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  undefined4 uVar8;
  void *pvVar9;
  int *piVar10;
  char *pcVar11;
  int unaff_EBX;
  float10 fVar12;
  undefined1 *puVar13;
  int local_210;
  undefined1 local_208 [4];
  undefined4 uStack_204;
  char *pcStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  char acStack_1f4 [16];
  wchar_t *pwStack_1e4;
  wchar_t *pwStack_1e0;
  size_t sStack_1dc;
  uint uStack_1d8;
  wchar_t awStack_1d4 [10];
  char *pcStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  char acStack_1b4 [16];
  uint *puStack_1a4;
  void *pvStack_1a0;
  uint uStack_19c;
  uint auStack_198 [5];
  undefined1 auStack_184 [4];
  undefined2 *puStack_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined2 auStack_174 [10];
  wchar_t *pwStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  wchar_t awStack_154 [4];
  undefined4 auStack_14c [2];
  undefined1 auStack_144 [12];
  undefined2 *puStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined2 auStack_12c [10];
  undefined1 auStack_118 [4];
  undefined2 *puStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined2 auStack_108 [8];
  ulonglong uStack_f8;
  undefined8 uStack_ec;
  void *pvStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint *puStack_c8;
  void *pvStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  void *pvStack_a8;
  void *pvStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_78 [8];
  undefined4 auStack_70 [2];
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_3c;
  undefined1 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3c0d;
  pvStack_c = ExceptionList;
  local_208._0_3_ = 0;
  ExceptionList = &pvStack_c;
  *(undefined1 *)((int)param_1 + 0x56d) = 1;
  local_210 = 0;
  if ((int *)param_1[300] != (int *)0x0) {
    local_210 = (**(code **)(*(int *)param_1[300] + 0x28))();
  }
  if (param_1[0x15a] == 2) {
    cVar1 = (**(code **)(*(int *)param_1[300] + 0x24))();
    if (((cVar1 == '\0') && (DAT_0104d970 == '\0')) ||
       (cVar1 = (**(code **)(*(int *)param_1[300] + 0x2c))(), cVar1 != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)((int)param_1 + 0x56d) = uVar2;
    pvVar9 = DAT_0104d9a0;
    if (((char)param_1[0x15b] != '\0') && (DAT_0104d9a0 != (void *)0x0)) {
      iVar5 = param_1[0x134];
      uVar4 = param_1[0x15a];
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1[300] + 8))();
      uVar4 = FUN_00645a20(pvVar9,puVar3,uVar4,iVar5);
      if ((char)uVar4 == '\0') {
        FUN_0065df50(param_1);
      }
    }
    goto LAB_0066441d;
  }
  puStack_180 = auStack_174;
  auStack_174[0] = 0;
  uStack_17c = 0;
  uStack_178 = 10;
  puStack_114 = auStack_108;
  uStack_4 = 0;
  auStack_108[0] = 0;
  uStack_110 = 0;
  uStack_10c = 10;
  pwStack_160 = awStack_154;
  uStack_204._0_3_ = (uint3)(ushort)uStack_204;
  awStack_154[0] = L'\0';
  uStack_15c = 0;
  uStack_158 = 10;
  if (param_1[300] != 0) {
    pwStack_1e0 = awStack_1d4;
    awStack_1d4[0] = L'\0';
    sStack_1dc = 0;
    uStack_1d8 = 10;
    uVar4 = FUN_00ace02d((short *)&lpCaption_00d16918);
    FUN_004036d0(&pwStack_1e0,(wchar_t *)&lpCaption_00d16918,uVar4);
    puVar3 = FUN_00430430((void *)param_1[300],&pvStack_1a0);
    uStack_4 = CONCAT31(uStack_4._1_3_,4);
    iVar5 = _wcscmp((wchar_t *)*puVar3,pwStack_1e0);
    if (iVar5 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)param_1[300] + 8))();
      puVar3 = FUN_009b5030(&pvStack_c4,puVar3);
      local_208._0_3_ = 1;
    }
    else {
      puVar3 = FUN_00430430((int *)param_1[300],&pvStack_e4);
      local_208._0_3_ = 2;
    }
    FUN_004036d0(&pwStack_160,(wchar_t *)*puVar3,puVar3[1]);
    if (((local_208._0_3_ & 2) != 0) &&
       (local_208._0_3_ = local_208._0_3_ & 0xfffffd, 10 < uStack_dc)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_e4);
    }
    if (((local_208._0_3_ & 1) != 0) &&
       (local_208._0_3_ = local_208._0_3_ & 0xfffffe, 10 < uStack_bc)) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_c4);
    }
    if (10 < auStack_198[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1a0);
    }
    if (10 < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1e0);
    }
  }
  pcStack_1c0 = acStack_1b4;
  acStack_1b4[0] = '\0';
  uStack_1bc = 0;
  uStack_1b8 = 0x14;
  _strncpy(pcStack_1c0,"listbutton",10);
  uStack_1bc = 10;
  pcStack_1c0[10] = '\0';
  uStack_4._0_1_ = 5;
  switch(param_1[0x15a]) {
  case 0:
  case 1:
    cVar1 = (**(code **)(*(int *)param_1[300] + 0x24))();
    if (cVar1 == '\0') {
      if (DAT_0104d970 == '\0') {
LAB_0066392c:
        *(undefined1 *)((int)param_1 + 0x56d) = 0;
      }
      else if (0 < local_210) {
        uVar4 = 0;
        pcVar11 = "toilet";
        pvVar9 = (void *)(**(code **)(*(int *)param_1[300] + 8))();
        iVar5 = FUN_004155b0(pvVar9,pcVar11,uVar4);
        if (iVar5 == -1) goto LAB_0066392c;
      }
    }
    pwStack_1e0 = awStack_1d4;
    awStack_1d4[0] = L'\0';
    sStack_1dc = 0;
    uStack_1d8 = 10;
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    (**(code **)(*(int *)param_1[300] + 0x20))();
    FUN_004428c0(&uStack_f8);
    thunk_FUN_00444a70((uint *)&uStack_f8,&pwStack_1e4);
    if (DAT_0104d970 == '\0') {
      piVar10 = (int *)param_1[300];
      piVar6 = (int *)GetPlayerStudio();
      puVar13 = auStack_78;
      (**(code **)(*piVar10 + 0x20))();
      pvVar9 = (void *)(**(code **)(*piVar6 + 0x24))();
      uVar8 = FUN_0051c350(pvVar9,(float)puVar13);
      if ((char)uVar8 != '\0') {
        local_208[2] = 1;
      }
    }
    FUN_0040cae0(auStack_118,pwStack_1e4,(size_t)pwStack_1e0);
    sVar7 = FUN_00ace02d((short *)&DAT_00d346a4);
    FUN_0040cae0(auStack_184,L", ",sVar7);
    if ((*(char *)((int)param_1 + 0x56d) == '\0') && (DAT_0104d970 == '\0')) {
      piVar10 = (int *)param_1[300];
      piVar6 = (int *)GetPlayerStudio();
      puVar13 = auStack_68;
      (**(code **)(*piVar10 + 0x20))();
      pvVar9 = (void *)(**(code **)(*piVar6 + 0x24))();
      uVar8 = FUN_0051c350(pvVar9,(float)puVar13);
      if (((char)uVar8 != '\0') &&
         ((cVar1 = FUN_00960f20(param_1[300]), cVar1 == '\0' || (0 < unaff_EBX))))
      goto LAB_00663a8b;
      FUN_00401de0(&puStack_c8,"BUILDBUTTON_NOTAVAILABLE",0xffffffff);
      puStack_8._0_1_ = 0xe;
      puVar3 = FUN_009b5030(&pvStack_a8,&puStack_c8);
      FUN_0040d3a0(auStack_184,puVar3);
      if (10 < uStack_a0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_a8);
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
      if (0x14 < uStack_c0) goto LAB_00663c50;
    }
    else {
LAB_00663a8b:
      puStack_1a4 = auStack_198;
      auStack_198[0] = auStack_198[0] & 0xffff0000;
      pvStack_1a0 = (void *)0x0;
      uStack_19c = 10;
      puStack_138 = auStack_12c;
      auStack_12c[0] = 0;
      uStack_134 = 0;
      uStack_130 = 10;
      puStack_8._0_1_ = 8;
      FUN_00658450((int)auStack_144);
      FUN_0043bd40(&puStack_1a4,unaff_EBX);
      FUN_00403e90(&puStack_138,L"num");
      puVar3 = FUN_0064f160(&uStack_50,&puStack_138,&puStack_1a4);
      puStack_8._0_1_ = 10;
      FUN_00656e80(auStack_144,auStack_70,puVar3);
      FUN_0064e800(&uStack_50);
      uStack_204 = &uStack_1f8;
      uStack_1f8 = uStack_1f8 & 0xffffff00;
      pcStack_200 = (char *)0x0;
      uStack_1fc = 0x20;
      uStack_204 = _malloc(0x20);
      _strncpy((char *)uStack_204,"buildbutton_numowned",0x14);
      pcStack_200 = (char *)0x14;
      *(char *)((int)uStack_204 + 0x14) = '\0';
      puStack_8._0_1_ = 0xb;
      FUN_009b5030((undefined4 *)((int)&uStack_ec + 4),&uStack_204);
      puStack_8._0_1_ = 0xd;
      if (0x14 < uStack_1fc) {
                    /* WARNING: Subroutine does not return */
        _free(uStack_204);
      }
      FUN_0056c910(auStack_184,(int *)((int)&uStack_ec + 4),(int)auStack_144);
      if (10 < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        _free(uStack_ec._4_4_);
      }
      puStack_8._0_1_ = 8;
      FUN_006583c0(auStack_144);
      if (10 < uStack_130) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_138);
      }
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,6);
      puStack_c8 = puStack_1a4;
      if (10 < uStack_19c) {
LAB_00663c50:
                    /* WARNING: Subroutine does not return */
        _free(puStack_c8);
      }
    }
    cVar1 = (**(code **)(*(int *)param_1[300] + 0x2c))();
    if (cVar1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x56d) = 0;
    }
    if (0 < unaff_EBX) {
      FUN_00403e20(&pcStack_1c0,"listbutton_got");
    }
    uStack_4._0_1_ = 5;
    if (10 < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1e0);
    }
    break;
  case 3:
    FUN_00403e20(&pcStack_1c0,"listbutton_got");
    pwStack_1e0 = awStack_1d4;
    awStack_1d4[0] = L'\0';
    sStack_1dc = 0;
    uStack_1d8 = 10;
    uStack_4._0_1_ = 0xf;
    (**(code **)(*(int *)param_1[300] + 0x20))();
    FUN_004428c0(&uStack_ec);
    thunk_FUN_00444a70((uint *)&uStack_ec,&pwStack_1e0);
    FUN_0040cae0(&puStack_180,pwStack_1e0,sStack_1dc);
    uStack_4._0_1_ = 5;
    if (10 < uStack_1d8) {
                    /* WARNING: Subroutine does not return */
      _free(pwStack_1e0);
    }
    break;
  case 6:
    FUN_004036d0(&pwStack_160,(wchar_t *)param_1[0x151],param_1[0x152]);
  }
  pvVar9 = DAT_0104d9a0;
  if (((((char)param_1[0x15b] != '\0') && (local_210 == 0)) &&
      ((uVar4 = param_1[0x15a], uVar4 == 0 || (uVar4 == 1)))) && (DAT_0104d9a0 != (void *)0x0)) {
    iVar5 = param_1[0x134];
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1[300] + 8))();
    uVar4 = FUN_00645a20(pvVar9,puVar3,uVar4,iVar5);
    if ((char)uVar4 == '\0') {
      FUN_0065df50(param_1);
    }
  }
  uVar8 = FUN_00479e80(param_1 + 0xe6,&pcStack_1c0);
  if ((char)uVar8 != '\0') {
    FUN_0069f100(param_1,(int *)&pcStack_1c0,param_1[0xf3],param_1[0xf4],param_1[0xf5],param_1[0xf6]
                );
    FUN_004015d0(param_1 + 0xe6,pcStack_1c0,uStack_1bc);
  }
  if ((int *)param_1[0x11a] == (int *)0x0) {
LAB_00663ee3:
    uStack_204 = (uint *)CONCAT13(1,(uint3)uStack_204);
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_1[0x11a] + 0x58))();
    local_208._0_3_ = local_208._0_3_ | 4;
    iVar5 = _wcscmp((wchar_t *)*puVar3,pwStack_160);
    uStack_204 = (uint *)((uint)uStack_204 & 0xffffff);
    if (iVar5 != 0) goto LAB_00663ee3;
  }
  if (((local_208._0_3_ & 4) != 0) && (10 < uStack_9c)) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_a4);
  }
  if (uStack_204._3_1_ != '\0') {
    puVar3 = (undefined4 *)param_1[0x11a];
    if (puVar3 != (undefined4 *)0x0) {
      piVar10 = puVar3 + 0x12;
      *piVar10 = *piVar10 + -1;
      if (*piVar10 == 0) {
        (**(code **)*puVar3)();
      }
      (**(code **)(param_1[0x115] + 4))();
      param_1[0x11a] = 0;
      (**(code **)param_1[0x115])();
    }
    pvVar9 = operator_new(900);
    uStack_4._0_1_ = 0x10;
    if (pvVar9 == (void *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = FUN_00737bb0(pvVar9,&pwStack_160);
    }
    uStack_4._0_1_ = 5;
    (**(code **)(param_1[0x115] + 4))();
    param_1[0x11a] = (int)piVar10;
    (**(code **)param_1[0x115])();
    pcStack_200 = acStack_1f4;
    acStack_1f4[0] = '\0';
    uStack_1fc = 0;
    uStack_1f8 = 0x14;
    _strncpy(pcStack_200,"default",7);
    uStack_1fc = 7;
    pcStack_200[7] = '\0';
    uStack_4._0_1_ = 0x11;
    (**(code **)(*(int *)param_1[0x11a] + 0xfc))();
    uStack_14 = 5;
    if ((uint3)local_208._0_3_ < 0x15) {
      (**(code **)(*(int *)param_1[0x11a] + 100))();
      (**(code **)(*(int *)param_1[0x11a] + 0x5c))();
      (**(code **)(*(int *)param_1[0x11a] + 0x84))();
      pvVar9 = (void *)param_1[0x11a];
      fVar12 = (float10)(**(code **)(*param_1 + 0x10))();
      FUN_00737cd0(pvVar9,(float)(fVar12 - (float10)16.0));
      (**(code **)(*(int *)param_1[0x11a] + 0x84))();
      (**(code **)(*param_1 + 0xc))();
      puVar3 = (undefined4 *)param_1[0x120];
      if (puVar3 != (undefined4 *)0x0) {
        piVar10 = puVar3 + 0x12;
        *piVar10 = *piVar10 + -1;
        if (*piVar10 == 0) {
          (**(code **)*puVar3)();
        }
        (**(code **)(param_1[0x11b] + 4))();
        param_1[0x120] = 0;
        (**(code **)param_1[0x11b])();
      }
      pvVar9 = operator_new(900);
      uStack_3c = 0x12;
      if (pvVar9 == (void *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = FUN_00737bb0(pvVar9,auStack_14c);
      }
      uStack_3c = 5;
      (**(code **)(param_1[0x11b] + 4))();
      param_1[0x120] = (int)piVar10;
      (**(code **)param_1[0x11b])();
      pcVar11 = &stack0xfffffdd4;
      _strncpy(pcVar11,"default",7);
      pcVar11[7] = '\0';
      uStack_3c = 0x13;
      (**(code **)(*(int *)param_1[0x120] + 0xfc))();
      uStack_4c = 5;
                    /* WARNING: Subroutine does not return */
      _free(&stack0xfffffda4);
    }
                    /* WARNING: Subroutine does not return */
    _free(&stack0xfffffddc);
  }
  if (0x14 < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
    _free(pcStack_1c0);
  }
  if (10 < uStack_158) {
                    /* WARNING: Subroutine does not return */
    _free(pwStack_160);
  }
  if (10 < uStack_10c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_114);
  }
  uStack_4 = 0xffffffff;
  if (10 < uStack_178) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_180);
  }
LAB_0066441d:
  if (param_1[300] != 0) {
    pcVar11 = (char *)FUN_00960f60(param_1[300]);
    FUN_0065db00(param_1,pcVar11);
  }
  *(undefined1 *)(param_1 + 0x15b) = 0;
  ExceptionList = pvStack_c;
  return;
}


//// FUNCTION FUN_006644e0 @ 006644e0 ////

undefined4 __fastcall FUN_006644e0(undefined4 *param_1)

{
  return *param_1;
}


//// FUNCTION FUN_006644f0 @ 006644f0 ////

undefined4 __fastcall FUN_006644f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


//// FUNCTION FUN_00664500 @ 00664500 ////

int __fastcall FUN_00664500(int param_1)

{
  return param_1 + 4;
}


//// FUNCTION FUN_00664510 @ 00664510 ////

undefined4 __fastcall FUN_00664510(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


//// FUNCTION FUN_00664520 @ 00664520 ////

int __fastcall FUN_00664520(int param_1)

{
  return param_1 + 0x28;
}


//// FUNCTION FUN_00664530 @ 00664530 ////

int __cdecl FUN_00664530(int *param_1)

{
  if (*param_1 != 0) {
    return *param_1 + 0x28;
  }
  return 0;
}


//// FUNCTION FUN_00664570 @ 00664570 ////

void __cdecl FUN_00664570(int param_1)

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


//// FUNCTION FUN_006645b0 @ 006645b0 ////

void __thiscall FUN_006645b0(void *this,int *param_1)

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


//// FUNCTION FUN_00664670 @ 00664670 ////

void __fastcall FUN_00664670(int *param_1)

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


//// FUNCTION FUN_00664750 @ 00664750 ////

void __fastcall FUN_00664750(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[2]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)*param_1);
  }
  return;
}


//// FUNCTION FUN_00664760 @ 00664760 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00664760(void)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3c2b;
  local_c = ExceptionList;
  _DAT_0104d9c4 = 0xffffffff;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x24);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    DAT_0104d9c0 = 0;
  }
  else {
    DAT_0104d9c0 = FUN_009910f0(puVar1);
  }
  *(undefined1 *)(DAT_0104d9c0 + 0xc) = 7;
  local_4 = 0xffffffff;
  DAT_0104d9ac = FUN_0099bb50(PTR_DAT_00e568a4,0,0,0,'\0');
  DAT_0104d9a8 = FUN_0099bb50(PTR_DAT_00e568c4,0,0,0,'\0');
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00664810 @ 00664810 ////

void FUN_00664810(void)

{
  void *_Memory;
  
  _Memory = DAT_0104d9c0;
  if (DAT_0104d9c0 != (void *)0x0) {
    FUN_00990ec0((int)DAT_0104d9c0);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  DAT_0104d9c0 = (void *)0x0;
  if (DAT_0104d9ac != (void *)0x0) {
    FUN_0099b400(DAT_0104d9ac);
    DAT_0104d9ac = (void *)0x0;
  }
  if (DAT_0104d9a8 != (void *)0x0) {
    FUN_0099b400(DAT_0104d9a8);
    DAT_0104d9a8 = (void *)0x0;
  }
  return;
}


//// FUNCTION FUN_00664880 @ 00664880 ////

void __fastcall FUN_00664880(int param_1)

{
  FUN_00881c00(*(void **)(*(int *)(param_1 + 0x48) + 0x358),*(char **)(param_1 + 4),0);
  return;
}


//// FUNCTION FUN_006648a0 @ 006648a0 ////

void __thiscall FUN_006648a0(void *this,int param_1)

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


//// FUNCTION FUN_00664920 @ 00664920 ////

int * __fastcall FUN_00664920(int *param_1)

{
  FUN_00664670(param_1);
  return param_1;
}


//// FUNCTION FUN_00664980 @ 00664980 ////

void __fastcall FUN_00664980(int param_1)

{
  if (0x14 < *(uint *)(param_1 + 0x14)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(param_1 + 0xc));
  }
  return;
}


//// FUNCTION FUN_006649e0 @ 006649e0 ////

undefined4 * __thiscall FUN_006649e0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = *param_2;
  return this;
}


//// FUNCTION FUN_00664a20 @ 00664a20 ////

int * __fastcall FUN_00664a20(int *param_1)

{
  FUN_00664670(param_1);
  return param_1;
}


//// FUNCTION FUN_00664a30 @ 00664a30 ////

void FUN_00664a30(void)

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


//// FUNCTION FUN_00664a80 @ 00664a80 ////

undefined4 * __thiscall FUN_00664a80(void *this,undefined4 *param_1)

{
  *(undefined1 **)this = (undefined1 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x14;
  FUN_004015d0(this,(char *)*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  return this;
}


//// FUNCTION FUN_00664ac0 @ 00664ac0 ////

void * __thiscall FUN_00664ac0(void *this,byte param_1)

{
  FUN_00664980((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00664ae0 @ 00664ae0 ////

void __thiscall FUN_00664ae0(void *this,undefined1 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *this_00;
  undefined4 *this_01;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  void **ppvVar8;
  byte **ppbVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *local_6c;
  undefined4 local_68;
  uint local_64;
  char local_60 [20];
  byte *local_4c;
  undefined4 local_48;
  uint local_44;
  byte local_40 [20];
  void *local_2c [2];
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3c48;
  local_c = ExceptionList;
  local_6c = local_60;
  local_60[0] = '\0';
  local_68 = 0;
  local_64 = 0x14;
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  ExceptionList = &local_c;
  _strncpy((char *)local_4c,"$build",6);
  local_48 = 6;
  local_4c[6] = 0;
  pbVar5 = *(byte **)((int)this + 4);
  this_01 = (undefined4 *)((int)this + 4);
  pbVar6 = local_4c;
  do {
    bVar1 = *pbVar5;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00664b89:
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00664b8e;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00664b89;
    pbVar5 = pbVar5 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_00664b8e:
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  if (iVar2 == 0) {
    if (local_64 < 0xc) {
      if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
        _free(local_6c);
      }
      local_64 = 0x20;
      local_6c = _malloc(0x20);
    }
    _strncpy(local_6c,"buildbutton",0xb);
    local_68 = 0xb;
    local_6c[0xb] = '\0';
  }
  else {
    local_4c = local_40;
    local_40[0] = 0;
    local_48 = 0;
    local_44 = 0x14;
    _strncpy((char *)local_4c,"$fac",4);
    ppbVar9 = &local_4c;
    local_48 = 4;
    puVar4 = this_01;
    local_4c[4] = 0;
    uVar3 = FUN_00401ec0(puVar4,ppbVar9);
    if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
      _free(local_4c);
    }
    if ((char)uVar3 == '\0') {
      local_4c = local_40;
      local_40[0] = 0;
      local_48 = 0;
      local_44 = 0x14;
      _strncpy((char *)local_4c,"$sets",5);
      ppbVar9 = &local_4c;
      local_48 = 5;
      puVar4 = this_01;
      local_4c[5] = 0;
      uVar3 = FUN_00401ec0(puVar4,ppbVar9);
      if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
        _free(local_4c);
      }
      if ((char)uVar3 == '\0') {
        local_4c = local_40;
        local_40[0] = 0;
        local_48 = 0;
        local_44 = 0x14;
        _strncpy((char *)local_4c,"$orna",5);
        uVar11 = 5;
        uVar10 = 0;
        ppvVar8 = local_2c;
        local_48 = 5;
        local_4c[5] = 0;
        puVar4 = FUN_00430770(this_01,ppvVar8,uVar10,uVar11);
        uVar3 = FUN_00401ec0(puVar4,&local_4c);
        if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
          _free(local_2c[0]);
        }
        if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
          _free(local_4c);
        }
        if ((char)uVar3 != '\0') {
          FUN_00430770(this_01,local_2c,5,5);
          local_4c = local_40;
          local_40[0] = 0;
          local_48 = 0;
          local_44 = 0x14;
          _strncpy((char *)local_4c,"_sub1",5);
          ppbVar9 = &local_4c;
          ppvVar8 = local_2c;
          local_48 = 5;
          local_4c[5] = 0;
          uVar3 = FUN_00401ec0(ppvVar8,ppbVar9);
          if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
            _free(local_4c);
          }
          if ((char)uVar3 == '\0') {
            FUN_00401de0(&local_4c,"_sub2",0xffffffff);
            uVar3 = FUN_00401ec0(local_2c,&local_4c);
            if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
              _free(local_4c);
            }
            if ((char)uVar3 == '\0') {
              FUN_00401de0(&local_4c,"_sub3",0xffffffff);
              uVar3 = FUN_00401ec0(local_2c,&local_4c);
              if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                _free(local_4c);
              }
              if ((char)uVar3 == '\0') {
                FUN_00401de0(&local_4c,"_sub4",0xffffffff);
                uVar3 = FUN_00401ec0(local_2c,&local_4c);
                if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
                  _free(local_4c);
                }
                if ((char)uVar3 == '\0') {
                  pcVar12 = "orna_button";
                }
                else {
                  pcVar12 = "orna_subbut4";
                }
              }
              else {
                pcVar12 = "orna_subbut3";
              }
            }
            else {
              pcVar12 = "orna_subbut2";
            }
          }
          else {
            pcVar12 = "ornabutt_sub1";
          }
          FUN_00403e20(&local_6c,pcVar12);
          if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
            _free(local_2c[0]);
          }
        }
      }
      else {
        if (local_64 < 10) {
          if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
            _free(local_6c);
          }
          local_64 = 0x20;
          local_6c = _malloc(0x20);
        }
        _strncpy(local_6c,"setbutton",9);
        local_68 = 9;
        local_6c[9] = '\0';
      }
    }
    else {
      if (local_64 < 10) {
        if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
          _free(local_6c);
        }
        local_64 = 0x20;
        local_6c = _malloc(0x20);
      }
      _strncpy(local_6c,"facbutton",9);
      local_68 = 9;
      local_6c[9] = '\0';
    }
  }
  this_00 = (void *)FUN_008828c0(*(void **)(*(int *)((int)this + 0x48) + 0x358),local_6c);
  if (this_00 != (void *)0x0) {
    FUN_008722e0(this_00,param_1);
  }
  if (0x14 < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00664fc0 @ 00664fc0 ////

void __fastcall FUN_00664fc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00664a30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


//// FUNCTION FUN_00665000 @ 00665000 ////

undefined4 * __thiscall
FUN_00665000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4
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


//// FUNCTION FUN_00665070 @ 00665070 ////

void __fastcall FUN_00665070(void *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  ulonglong uVar2;
  
  *(int *)((int)param_1 + 0x4c) = param_3;
  if (param_3 == 2) {
    uVar2 = FUN_00990ae0(param_1,param_2);
    fVar1 = (float)(int)uVar2;
    if ((int)uVar2 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    *(float *)((int)param_1 + 0x68) = fVar1;
    *(undefined1 *)((int)param_1 + 0x6c) = 1;
  }
  if (*(int *)((int)param_1 + 0x4c) == 3) {
    FUN_00664ae0(param_1,0);
    return;
  }
  FUN_00664ae0(param_1,1);
  return;
}


//// FUNCTION FUN_006650f0 @ 006650f0 ////

void __fastcall FUN_006650f0(int param_1)

{
  void *this;
  float fVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar3;
  int local_8;
  int local_4;
  
  local_8 = **(int **)(param_1 + 0x2c);
  if ((int *)local_8 != *(int **)(param_1 + 0x2c)) {
    do {
      iVar2 = local_8;
      FUN_00881ac0(*(void **)(*(int *)(param_1 + 0x48) + 0x358),
                   *(char **)(*(int *)(local_8 + 0x2c) + 4),(char *)&lpOperation_00d31dc8);
      this = *(void **)(iVar2 + 0x2c);
      *(undefined4 *)((int)this + 0x4c) = 2;
      uVar3 = FUN_00990ae0(extraout_ECX,extraout_EDX);
      local_4 = (int)uVar3;
      fVar1 = (float)local_4;
      if (local_4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      *(float *)((int)this + 0x68) = fVar1;
      *(undefined1 *)((int)this + 0x6c) = 1;
      FUN_00664ae0(this,*(int *)((int)this + 0x4c) != 3);
      FUN_00642c70(&local_8);
    } while (local_8 != *(int *)(param_1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_00665180 @ 00665180 ////

void __fastcall FUN_00665180(void *param_1)

{
  FUN_00881ac0(*(void **)(*(int *)((int)param_1 + 0x48) + 0x358),*(char **)((int)param_1 + 4),
               "expand");
  *(undefined4 *)((int)param_1 + 0x4c) = 3;
  FUN_00664ae0(param_1,0);
  return;
}


//// FUNCTION FUN_006651b0 @ 006651b0 ////

void __fastcall FUN_006651b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  int local_4;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (iVar1 != -0x28)) &&
     (local_4 = **(int **)(iVar1 + 0x2c), (int *)local_4 != *(int **)(iVar1 + 0x2c))) {
    do {
      iVar3 = local_4;
      piVar2 = *(int **)(local_4 + 0x2c);
      if (((piVar2 != param_1) && (piVar2[0x13] != 1)) &&
         (uVar4 = FUN_00883180(*(void **)(param_1[0x12] + 0x358),(char *)piVar2[1],"inactive"),
         (char)uVar4 != '\0')) {
        FUN_00881ac0(*(void **)(param_1[0x12] + 0x358),*(char **)(*(int *)(iVar3 + 0x2c) + 4),
                     "inactive");
        this = *(void **)(iVar3 + 0x2c);
        *(undefined4 *)((int)this + 0x4c) = 1;
        FUN_00664ae0(this,1);
      }
      FUN_00642c70(&local_4);
    } while (local_4 != *(int *)(iVar1 + 0x2c));
  }
  return;
}


//// FUNCTION FUN_00665240 @ 00665240 ////

void __fastcall FUN_00665240(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *this;
  float fVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar5;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *param_1;
  if (((iVar1 != 0) && (local_8 = iVar1 + 0x28, local_8 != 0)) &&
     (local_c = **(int **)(iVar1 + 0x2c), (int *)local_c != *(int **)(iVar1 + 0x2c))) {
    do {
      iVar1 = local_c;
      piVar2 = *(int **)(local_c + 0x2c);
      if (((piVar2 != param_1) && (piVar2[0x13] == 1)) &&
         (uVar4 = FUN_00883180(*(void **)(param_1[0x12] + 0x358),(char *)piVar2[1],"inactive"),
         (char)uVar4 != '\0')) {
        FUN_00881ac0(*(void **)(param_1[0x12] + 0x358),*(char **)(*(int *)(iVar1 + 0x2c) + 4),
                     "activate");
        this = *(void **)(iVar1 + 0x2c);
        *(undefined4 *)((int)this + 0x4c) = 2;
        uVar5 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        local_4 = (int)uVar5;
        fVar3 = (float)local_4;
        if (local_4 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        *(float *)((int)this + 0x68) = fVar3;
        *(undefined1 *)((int)this + 0x6c) = 1;
        FUN_00664ae0(this,*(int *)((int)this + 0x4c) != 3);
      }
      FUN_00642c70(&local_c);
    } while (local_c != *(int *)(local_8 + 4));
  }
  return;
}


//// FUNCTION FUN_00665320 @ 00665320 ////

void __fastcall FUN_00665320(int *param_1)

{
  float fVar1;
  int iVar2;
  void *this;
  void *pvVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar4;
  void *pvVar5;
  int *local_4;
  
  if ((param_1[0xc] == 0) || (param_1[0x13] == 0)) {
    local_4 = param_1;
    iVar2 = FUN_00642110();
    iVar2 = FUN_006409d0(iVar2);
    if (iVar2 < param_1[9]) {
      iVar2 = *param_1;
      if (iVar2 != 0) {
        local_4 = (int *)**(int **)(iVar2 + 0x2c);
        if (local_4 != *(int **)(iVar2 + 0x2c)) {
          do {
            pvVar3 = (void *)local_4[0xb];
            pvVar5 = pvVar3;
            this = (void *)FUN_00642110();
            FUN_00640a60(this,(int)pvVar5);
            FUN_00881ac0(*(void **)(param_1[0x12] + 0x358),*(char **)((int)pvVar3 + 4),"close");
            *(undefined4 *)((int)pvVar3 + 0x4c) = 0;
            FUN_00664ae0(pvVar3,1);
            FUN_00642c70((int *)&local_4);
          } while (local_4 != *(int **)(iVar2 + 0x2c));
        }
        if (*(int *)(*param_1 + 0x4c) == 3) {
          FUN_00881ac0(*(void **)(param_1[0x12] + 0x358),*(char **)(*param_1 + 4),"contract");
          pvVar3 = (void *)*param_1;
          *(undefined4 *)((int)pvVar3 + 0x4c) = 2;
          uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
          local_4 = (int *)uVar4;
          fVar1 = (float)(int)local_4;
          if ((int)local_4 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          *(float *)((int)pvVar3 + 0x68) = fVar1;
          *(undefined1 *)((int)pvVar3 + 0x6c) = 1;
          if (*(int *)((int)pvVar3 + 0x4c) != 3) {
            FUN_00664ae0(pvVar3,1);
            return;
          }
          FUN_00664ae0(pvVar3,0);
        }
      }
    }
    else if ((param_1[9] == iVar2) && (param_1[0x13] == 3)) {
      iVar2 = 0;
      pvVar3 = (void *)FUN_00642110();
      FUN_00640a60(pvVar3,iVar2);
      FUN_00881ac0(*(void **)(param_1[0x12] + 0x358),(char *)param_1[1],"contract");
      param_1[0x13] = 2;
      uVar4 = FUN_00990ae0(extraout_ECX_00,extraout_EDX_00);
      local_4 = (int *)uVar4;
      fVar1 = (float)(int)local_4;
      if ((int)local_4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      param_1[0x1a] = (int)fVar1;
      *(undefined1 *)(param_1 + 0x1b) = 1;
      if (param_1[0x13] != 3) {
        FUN_00664ae0(param_1,1);
        return;
      }
      FUN_00664ae0(param_1,0);
      return;
    }
  }
  else {
    local_4 = *(int **)param_1[0xb];
    if (local_4 != (int *)param_1[0xb]) {
      do {
        FUN_00665320((int *)local_4[0xb]);
        FUN_00642c70((int *)&local_4);
      } while (local_4 != (int *)param_1[0xb]);
      return;
    }
  }
  return;
}


//// FUNCTION FUN_00665540 @ 00665540 ////

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00665540(int param_1,undefined4 param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  uint uVar5;
  float *pfVar6;
  byte *pbVar7;
  void *this;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  int *local_74;
  float local_70;
  float local_6c [5];
  float local_58;
  undefined **local_54;
  int local_50;
  int *local_4c;
  undefined ***local_48;
  void *local_40;
  char *local_2c;
  uint local_28;
  uint local_24;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3c70;
  local_c = ExceptionList;
  iVar8 = *(int *)(param_1 + 0x58);
  ExceptionList = &local_c;
  uVar11 = FUN_00990ae0(param_1,param_2);
  local_6c[0] = (float)uVar11;
  local_7c = (float)(int)local_6c[0];
  if ((int)local_6c[0] < 0) {
    local_7c = local_7c + 4.2949673e+09;
  }
  FUN_004312e0(&local_2c,(undefined4 *)(param_1 + 4),"icon");
  local_4 = 0;
  puVar4 = FUN_00430770(&local_2c,&local_54,1,local_28);
  FUN_004015d0(&local_2c,(char *)*puVar4,puVar4[1]);
  if (&DAT_00000014 < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
  if ((((iVar8 < 1) || (*(int *)(param_1 + 0x4c) < 1)) || (*(int *)(param_1 + 0x48) == 0)) ||
     (uVar5 = FUN_008819e0(*(void **)(*(int *)(param_1 + 0x48) + 0x358),local_2c,local_6c + 4),
     (char)uVar5 == '\0')) {
    *(float *)(param_1 + 0x5c) = local_7c;
  }
  else {
    piVar2 = *(int **)(param_1 + 0x54);
    local_74 = (int *)*piVar2;
    local_80 = 0.0;
    while (local_74 != piVar2) {
      local_48 = &local_54;
      local_50 = 0;
      local_4c = (int *)0x0;
      local_54 = &PTR_LAB_00d3420c;
      local_40 = (void *)local_74[8];
      if (local_40 != (void *)0x0) {
        local_4c = (int *)((int)local_40 + 0x18);
        local_50 = *local_4c;
        *(int **)(*local_4c + 4) = &local_50;
        *local_4c = (int)&local_50;
      }
      local_4._1_3_ = (uint3)((uint)local_4 >> 8);
      local_4._0_1_ = 1;
      if ((local_40 != (void *)0x0) &&
         (pfVar6 = (float *)FUN_0094fcb0(local_40,local_6c), local_80 < *pfVar6)) {
        pfVar6 = (float *)FUN_0094fcb0(local_40,&local_84);
        local_80 = *pfVar6;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0065e310(&local_54);
      FUN_0065de00((int *)&local_74);
    }
    iVar8 = *(int *)(param_1 + 0x4c);
    fVar1 = *(float *)(param_1 + 100) + 0.5;
    *(float *)(param_1 + 100) = fVar1;
    if (1.0 < fVar1) {
      fVar1 = *(float *)(param_1 + 100);
      iVar10 = *(int *)(param_1 + 0x60);
      do {
        fVar1 = fVar1 - 1.0;
        iVar10 = (iVar10 + 1) % 0xe;
      } while (1.0 < fVar1);
      *(float *)(param_1 + 100) = fVar1;
      *(int *)(param_1 + 0x60) = iVar10;
    }
    fVar1 = *(float *)(param_1 + 0x74) + 0.5;
    *(float *)(param_1 + 0x74) = fVar1;
    if (1.0 < fVar1) {
      fVar1 = *(float *)(param_1 + 0x74);
      iVar10 = *(int *)(param_1 + 0x70);
      do {
        fVar1 = fVar1 - 1.0;
        iVar10 = (iVar10 + 1) % 10;
      } while (1.0 < fVar1);
      *(float *)(param_1 + 0x74) = fVar1;
      *(int *)(param_1 + 0x70) = iVar10;
    }
    fVar1 = local_7c - *(float *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x6c) == '\0') {
      fVar3 = 3000.0;
    }
    else {
      fVar3 = 15000.0;
    }
    if (1000.0 <= fVar1) {
      if (fVar3 + 1000.0 <= fVar1) {
        if (fVar3 + 2000.0 <= fVar1) {
          local_84 = 0.0;
          if (fVar3 + 12000.0 <= fVar1) {
            *(undefined1 *)(param_1 + 0x6c) = 0;
            *(undefined1 *)(param_1 + 0x78) = 0;
            *(float *)(param_1 + 0x68) = local_7c;
          }
        }
        else {
          local_84 = 1.0 - ((fVar1 - 1000.0) - fVar3) * 0.001;
        }
      }
      else {
        local_84 = 1.0;
      }
    }
    else {
      local_84 = fVar1;
      if (*(char *)(param_1 + 0x78) == '\0') {
        puVar13 = &DAT_00d17518;
        iVar12 = 0;
        *(undefined1 *)(param_1 + 0x78) = 1;
        pbVar7 = (byte *)FUN_0041c9c0(&local_54,"UI_GUIDING_STREAM_SPARKLE_SOUND");
        iVar10 = 2;
        this = (void *)FUN_004f3b20();
        FUN_004f3270(this,iVar10,pbVar7,iVar12,puVar13);
      }
      local_84 = local_84 * 0.001;
    }
    if (iVar8 == 2) {
      local_6c[0] = 30.0;
      local_6c[1] = 30.0;
      local_6c[2] = 30.0;
      local_6c[3] = 30.0;
    }
    else {
      local_6c[0] = 40.0;
      local_6c[1] = 40.0;
      local_6c[2] = 40.0;
      local_6c[3] = 40.0;
    }
    if (*(int *)(param_1 + 0x4c) == 1) {
      local_6c[2] = local_6c[2] * 0.5;
      local_6c[3] = local_6c[3] * 0.5;
    }
    FUN_00407070(local_6c,(local_7c - *(float *)(param_1 + 0x5c)) * 0.0033333334);
    _DAT_0104d9d4 = 0;
    _DAT_0104d9e0 = 0;
    local_70 = local_6c[3] + local_6c[3];
    _DAT_0104d9cc = local_6c[4] - (local_6c[2] + local_6c[2]);
    _DAT_0104d9d0 = local_58 - local_70;
    _DAT_0104d9d8 = local_6c[2] + local_6c[2] + local_6c[4];
    _DAT_0104d9dc = local_70 + local_58;
    uVar5 = *(uint *)(param_1 + 0x70);
    uVar9 = uVar5 & 0x80000003;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
    }
    iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2;
    _DAT_0104d9e4 = (float)(int)uVar9 * 0.25;
    local_74 = (int *)(iVar8 + 1);
    _DAT_0104d9e8 = (float)iVar8 * 0.25;
    _DAT_0104d9ec = (float)(int)(uVar9 + 1) * 0.25;
    _DAT_0104d9f0 = (float)(int)local_74 * 0.25;
    local_7c = _DAT_0104d9ec;
    local_78 = _DAT_0104d9f0;
    if (*(int *)((int)DAT_0104d9c0 + 0x18) != DAT_0104d9a8) {
      Engine_SetResourceReference(DAT_0104d9c0,DAT_0104d9a8);
    }
    uVar11 = FUN_00acd42c();
    iVar8 = (int)uVar11;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0xff < iVar8) {
      iVar8 = 0xff;
    }
    DAT_0104d9c7 = (undefined1)iVar8;
    BuildAndDrawPrimitive(0x104d9bc);
    _DAT_0104d9d4 = 0;
    _DAT_0104d9e0 = 0;
    local_70 = local_6c[3] * 1.7;
    _DAT_0104d9cc = local_6c[4] - local_6c[2] * 1.7;
    _DAT_0104d9d0 = local_58 - local_70;
    _DAT_0104d9d8 = local_6c[2] * 1.7 + local_6c[4];
    _DAT_0104d9dc = local_70 + local_58;
    uVar5 = *(uint *)(param_1 + 0x60);
    local_7c = (float)(uVar5 & 0x80000003);
    if ((int)local_7c < 0) {
      local_7c = (float)(((int)local_7c - 1U | 0xfffffffc) + 1);
    }
    iVar8 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 3U)) >> 2;
    _DAT_0104d9e4 = (float)(int)local_7c * 0.25;
    local_74 = (int *)(iVar8 + 1);
    _DAT_0104d9e8 = (float)iVar8 * 0.25;
    _DAT_0104d9ec = (float)((int)local_7c + 1) * 0.25;
    _DAT_0104d9f0 = (float)(int)local_74 * 0.25;
    local_6c[2] = _DAT_0104d9ec;
    local_6c[3] = _DAT_0104d9f0;
    if (*(int *)((int)DAT_0104d9c0 + 0x18) != DAT_0104d9ac) {
      Engine_SetResourceReference(DAT_0104d9c0,DAT_0104d9ac);
    }
    uVar11 = FUN_00acd42c();
    iVar8 = (int)uVar11;
    if (iVar8 < 0) {
      DAT_0104d9c7 = 0;
      BuildAndDrawPrimitive(0x104d9bc);
    }
    else {
      if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      DAT_0104d9c7 = (undefined1)iVar8;
      BuildAndDrawPrimitive(0x104d9bc);
    }
  }
  if (0x14 < local_24) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00665c00 @ 00665c00 ////

void __fastcall FUN_00665c00(void *param_1)

{
  int *piVar1;
  void *this;
  bool bVar2;
  float fVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar4;
  int *local_4;
  
  if (*(int *)((int)param_1 + 0x4c) == 3) {
    piVar1 = *(int **)((int)param_1 + 0x2c);
    local_4 = (int *)*piVar1;
    bVar2 = true;
    if (local_4 != piVar1) {
      do {
        if ((local_4[0xb] != 0) && (*(int *)(local_4[0xb] + 0x4c) == 0)) {
          bVar2 = false;
        }
        FUN_00642c70((int *)&local_4);
      } while (local_4 != piVar1);
      if (!bVar2) {
        *(undefined4 *)((int)param_1 + 0x4c) = 2;
        uVar4 = FUN_00990ae0(extraout_ECX,extraout_EDX);
        local_4 = (int *)uVar4;
        fVar3 = (float)(int)local_4;
        if ((int)local_4 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        *(float *)((int)param_1 + 0x68) = fVar3;
        *(undefined1 *)((int)param_1 + 0x6c) = 1;
        FUN_00664ae0(param_1,*(int *)((int)param_1 + 0x4c) != 3);
        local_4 = (int *)**(int **)((int)param_1 + 0x2c);
        if (local_4 != *(int **)((int)param_1 + 0x2c)) {
          do {
            this = (void *)local_4[0xb];
            if (this != (void *)0x0) {
              *(undefined4 *)((int)this + 0x4c) = 0;
              FUN_00664ae0(this,1);
            }
            FUN_00642c70((int *)&local_4);
          } while (local_4 != *(int **)((int)param_1 + 0x2c));
        }
      }
    }
  }
  return;
}


//// FUNCTION FUN_00665cc0 @ 00665cc0 ////

int __fastcall FUN_00665cc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00664a30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_00665d00 @ 00665d00 ////

void * FUN_00665d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined1 param_5)

{
  void *this;
  
  this = operator_new(0x34);
  if (this != (void *)0x0) {
    FUN_00665000(this,param_1,param_2,param_3,param_4,param_5);
  }
  return this;
}


//// FUNCTION FUN_00665d40 @ 00665d40 ////

void FUN_00665d40(void *param_1)

{
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    FUN_00665d40(*(void **)((int)param_1 + 8));
    FUN_00664980((int)param_1);
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return;
}


//// FUNCTION FUN_00665d80 @ 00665d80 ////

void __fastcall FUN_00665d80(int param_1)

{
  FUN_00665d40(*(void **)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}


//// FUNCTION FUN_00665db0 @ 00665db0 ////

void __thiscall FUN_00665db0(void *this,undefined4 param_1,int *param_2)

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
  puStack_8 = &LAB_00cc3c88;
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
  FUN_00642c70((int *)&param_2);
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
      goto LAB_00665f21;
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
      piVar2 = (int *)FUN_00641850(piVar6);
    }
    *piVar5 = (int)piVar2;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == _Memory) {
    if (*(char *)((int)piVar6 + 0x31) == '\0') {
      uVar3 = FUN_00664570((int)piVar6);
      *(undefined4 *)(iVar1 + 8) = uVar3;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
LAB_00665f21:
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
            FUN_006648a0(this,(int)piVar5);
            piVar4 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(*piVar4 + 0x30) != '\x01') || (*(char *)(piVar4[2] + 0x30) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x30) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x30) = 1;
                *(undefined1 *)(piVar4 + 0xc) = 0;
                FUN_006645b0(this,piVar4);
                piVar4 = (int *)piVar5[2];
              }
              *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
              *(undefined1 *)(piVar5 + 0xc) = 1;
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              FUN_006648a0(this,(int)piVar5);
              break;
            }
LAB_00665fe4:
            *(undefined1 *)(piVar4 + 0xc) = 0;
          }
        }
        else {
          if ((char)piVar4[0xc] == '\0') {
            *(undefined1 *)(piVar4 + 0xc) = 1;
            *(undefined1 *)(piVar5 + 0xc) = 0;
            FUN_006645b0(this,piVar5);
            piVar4 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar4 + 0x31) == '\0') {
            if ((*(char *)(piVar4[2] + 0x30) == '\x01') && (*(char *)(*piVar4 + 0x30) == '\x01'))
            goto LAB_00665fe4;
            if (*(char *)(*piVar4 + 0x30) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x30) = 1;
              *(undefined1 *)(piVar4 + 0xc) = 0;
              FUN_006648a0(this,(int)piVar4);
              piVar4 = (int *)*piVar5;
            }
            *(char *)(piVar4 + 0xc) = (char)piVar5[0xc];
            *(undefined1 *)(piVar5 + 0xc) = 1;
            *(undefined1 *)(*piVar4 + 0x30) = 1;
            FUN_006645b0(this,piVar5);
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


//// FUNCTION FUN_00666080 @ 00666080 ////

void __thiscall
FUN_00666080(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00cc3ca8;
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
  piVar3 = FUN_00665d00(*(undefined4 *)((int)this + 4),param_3,*(undefined4 *)((int)this + 4),
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
LAB_0066617b:
        *(undefined1 *)(*piVar4 + 0x30) = 1;
        *(undefined1 *)(piVar5 + 0xc) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x30) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_006648a0(this,(int)piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x30) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
        FUN_006645b0(this,*(int **)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[0xc] == '\0') goto LAB_0066617b;
      if (piVar6 == (int *)*piVar2) {
        FUN_006645b0(this,piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x30) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x30) = 0;
      FUN_006648a0(this,*(int *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x30);
  } while( true );
}


//// FUNCTION FUN_00666230 @ 00666230 ////

void __thiscall FUN_00666230(void *this,undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_00665d40((void *)piVar6[1]);
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
    FUN_00665db0(this,&param_2,piVar2);
    piVar2 = piVar6;
  }
  *param_1 = piVar2;
  return;
}


//// FUNCTION FUN_006662f0 @ 006662f0 ////

void __thiscall FUN_006662f0(void *this,undefined4 *param_1,undefined4 *param_2)

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
LAB_00666354:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00666359;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00666354;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00666359:
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
      puVar5 = (undefined4 *)FUN_00666080(this,&param_2,'\x01',puVar5,param_2);
      *param_1 = *puVar5;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00664670((int *)&local_8);
  }
  puVar2 = local_8;
  puVar8 = param_2;
  uVar6 = FUN_00441060(local_8 + 3,param_2);
  if ((char)uVar6 != '\0') {
    puVar5 = (undefined4 *)FUN_00666080(this,&param_2,local_4,puVar5,puVar8);
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = puVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


//// FUNCTION FUN_00666440 @ 00666440 ////

void __thiscall FUN_00666440(void *this,int param_1)

{
  undefined4 local_38 [2];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3cc8;
  local_c = ExceptionList;
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  ExceptionList = &local_c;
  FUN_004015d0(&local_30,*(char **)(param_1 + 4),*(uint *)(param_1 + 8));
  local_10 = param_1;
  local_4 = 0;
  FUN_006662f0((void *)((int)this + 0x28),local_38,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006664e0 @ 006664e0 ////

void __thiscall FUN_006664e0(void *this,int param_1)

{
  undefined4 local_2c [2];
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined ***local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3ce8;
  local_c = ExceptionList;
  local_18 = &local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3420c;
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
  FUN_0065ff90((void *)((int)this + 0x50),local_2c,&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006665c0 @ 006665c0 ////

void __fastcall FUN_006665c0(void *param_1)

{
  void *local_4;
  
  local_4 = param_1;
  FUN_00666230(param_1,&local_4,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)param_1 + 4));
}


//// FUNCTION FUN_006665f0 @ 006665f0 ////

void __fastcall FUN_006665f0(int param_1)

{
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3d21;
  pvStack_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  FUN_00660050((void *)(param_1 + 0x50),&local_10,(int *)**(int **)(param_1 + 0x54),
               *(int **)(param_1 + 0x54));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 0x54));
}


//// FUNCTION FUN_006666e0 @ 006666e0 ////

void * __thiscall FUN_006666e0(void *this,byte param_1)

{
  FUN_006665f0((int)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00666700 @ 00666700 ////

void __thiscall FUN_00666700(void *this,int param_1)

{
  undefined **local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3d38;
  local_c = ExceptionList;
  local_18 = (undefined1 *)&local_24;
  local_20 = 0;
  local_1c = (int *)0x0;
  local_24 = &PTR_LAB_00d3420c;
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
  FUN_00660230((void *)((int)this + 0x50),(int)&local_24);
  if (local_1c != (int *)0x0) {
    *local_1c = local_20;
  }
  if (local_20 != 0) {
    *(int **)(local_20 + 4) = local_1c;
  }
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_006667a0 @ 006667a0 ////

int __fastcall FUN_006667a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00664a30();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x31) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


//// FUNCTION FUN_006667d0 @ 006667d0 ////

undefined4 * __thiscall
FUN_006667d0(void *this,int param_1,undefined4 param_2,char *param_3,uint param_4,uint param_5)

{
  undefined4 *this_00;
  int *piVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ulonglong uVar5;
  undefined4 in_stack_0000002c;
  undefined4 local_38 [2];
  undefined1 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined1 local_24 [20];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00cc3d8c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = param_2;
  this_00 = (undefined4 *)((int)this + 4);
  local_4 = 0;
  *this_00 = (undefined1 *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x14;
  FUN_004015d0(this_00,param_3,param_4);
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x24) = in_stack_0000002c;
  iVar4 = FUN_00664a30();
  *(int *)((int)this + 0x2c) = iVar4;
  *(undefined1 *)(iVar4 + 0x31) = 1;
  *(int *)(*(int *)((int)this + 0x2c) + 4) = *(int *)((int)this + 0x2c);
  *(undefined4 *)*(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  *(int *)(*(int *)((int)this + 0x2c) + 8) = *(int *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x30) = 0;
  piVar1 = (int *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x40) = 0;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 **)((int)this + 0x40) = (undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x34) = &PTR_FUN_00d2dc34;
  *(int *)((int)this + 0x48) = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x18);
    *(int **)((int)this + 0x3c) = piVar2;
    *piVar1 = *piVar2;
    *(int **)(*piVar2 + 4) = piVar1;
    *piVar2 = (int)piVar1;
  }
  local_4._0_1_ = 3;
  iVar4 = FUN_0065e410();
  *(int *)((int)this + 0x54) = iVar4;
  *(undefined1 *)(iVar4 + 0x25) = 1;
  *(int *)(*(int *)((int)this + 0x54) + 4) = *(int *)((int)this + 0x54);
  *(undefined4 *)*(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x54);
  *(int *)(*(int *)((int)this + 0x54) + 8) = *(int *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x58) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x6c) = 1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined1 *)((int)this + 0x78) = 0;
  iVar4 = FUN_00990d30(0,0xe);
  *(int *)((int)this + 0x60) = iVar4;
  iVar4 = FUN_00990d30(0,10);
  *(int *)((int)this + 0x70) = iVar4;
  uVar5 = FUN_00990ae0(extraout_ECX,extraout_EDX);
  fVar3 = (float)(int)uVar5;
  if ((int)uVar5 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(float *)((int)this + 0x5c) = fVar3;
  *(float *)((int)this + 0x68) = fVar3;
  if (*(void **)this != (void *)0x0) {
    FUN_00666440(*(void **)this,(int)this);
  }
  local_30 = local_24;
  local_24[0] = 0;
  local_2c = 0;
  local_28 = 0x14;
  FUN_004015d0(&local_30,(char *)*this_00,*(uint *)((int)this + 8));
  local_4 = CONCAT31(local_4._1_3_,5);
  local_10 = this;
  FUN_006662f0(&DAT_0104d9b0,local_38,&local_30);
  if (0x14 < local_28) {
                    /* WARNING: Subroutine does not return */
    _free(local_30);
  }
  if (0x14 < param_5) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = local_c;
  return this;
}


//// FUNCTION FUN_00666990 @ 00666990 ////

void FUN_00666990(void)

{
  void *_Memory;
  undefined1 local_4 [4];
  
  do {
    if (DAT_0104d9b8 == 0) {
      return;
    }
    _Memory = (void *)((int *)*DAT_0104d9b4)[0xb];
    FUN_00665db0(&DAT_0104d9b0,local_4,(int *)*DAT_0104d9b4);
  } while (_Memory == (void *)0x0);
  FUN_006665f0((int)_Memory);
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


//// FUNCTION FUN_006669f0 @ 006669f0 ////

undefined4 * __thiscall
FUN_006669f0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_006632d0(this,param_1,param_2,param_3,8,param_4,param_5,param_6,param_7);
  *(undefined ***)this = &PTR_FUN_00d347d4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d347b8;
  return this;
}


//// FUNCTION FUN_00666a50 @ 00666a50 ////

undefined4 * __thiscall FUN_00666a50(void *this,byte param_1)

{
  thunk_FUN_006602c0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00666a80 @ 00666a80 ////

undefined4 * __thiscall
FUN_00666a80(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_006632d0(this,param_1,param_2,param_3,8,param_4,param_5,param_6,param_7);
  *(undefined ***)this = &PTR_FUN_00d348f4;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d348d8;
  *(undefined2 *)((int)this + 0x5cc) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 10;
  *(int *)((int)this + 0x5c0) = (int)this + 0x5cc;
  *(undefined1 **)((int)this + 0x5e0) = (undefined1 *)((int)this + 0x5ec);
  *(undefined1 *)((int)this + 0x5ec) = 0;
  *(undefined4 *)((int)this + 0x5e4) = 0;
  *(undefined4 *)((int)this + 0x5e8) = 0x14;
  *(undefined1 **)((int)this + 0x600) = (undefined1 *)((int)this + 0x60c);
  *(undefined1 *)((int)this + 0x60c) = 0;
  *(undefined4 *)((int)this + 0x604) = 0;
  *(undefined4 *)((int)this + 0x608) = 0x14;
  return this;
}


//// FUNCTION FUN_00666b40 @ 00666b40 ////

undefined4 * __thiscall FUN_00666b40(void *this,byte param_1)

{
  FUN_00666b60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00666b60 @ 00666b60 ////

void __fastcall FUN_00666b60(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x182]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x180]);
  }
  if (0x14 < (uint)param_1[0x17a]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x178]);
  }
  if (10 < (uint)param_1[0x172]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x170]);
  }
  FUN_006602c0(param_1);
  return;
}


//// FUNCTION FUN_00666bc0 @ 00666bc0 ////

undefined4 * __thiscall
FUN_00666bc0(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_006632d0(this,param_1,param_2,param_3,8,param_4,param_5,param_6,param_7);
  *(undefined ***)this = &PTR_FUN_00d34a14;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d349f8;
  *(undefined1 **)((int)this + 0x5c0) = (undefined1 *)((int)this + 0x5cc);
  *(undefined1 *)((int)this + 0x5cc) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0x14;
  return this;
}


//// FUNCTION FUN_00666c40 @ 00666c40 ////

undefined4 * __thiscall FUN_00666c40(void *this,byte param_1)

{
  FUN_00666c60(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00666c60 @ 00666c60 ////

void __fastcall FUN_00666c60(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x172]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x170]);
  }
  FUN_006602c0(param_1);
  return;
}


//// FUNCTION FUN_00666c90 @ 00666c90 ////

void __fastcall FUN_00666c90(int *param_1)

{
  byte bVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3db0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00541a60(local_2c);
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,(char *)param_1[0x170],param_1[0x171]);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0048ad50((int *)&local_4c);
  bVar1 = FUN_00541e50(local_2c,&local_4c,0);
  if (bVar1 == 0) {
    if (param_1[0x167] == 0) {
      FUN_0065df50(param_1);
    }
  }
  else if (param_1[0x167] != 0) {
    FUN_0065dbc0((int)param_1);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  FUN_00541870(local_2c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00666d90 @ 00666d90 ////

undefined4 * __thiscall
FUN_00666d90(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_006632d0(this,param_1,param_2,param_3,8,param_4,param_5,param_6,param_7);
  *(undefined ***)this = &PTR_FUN_00d34b34;
  *(undefined ***)((int)this + 0x50) = &PTR_LAB_00d34b18;
  *(undefined1 **)((int)this + 0x5c0) = (undefined1 *)((int)this + 0x5cc);
  *(undefined1 *)((int)this + 0x5cc) = 0;
  *(undefined4 *)((int)this + 0x5c4) = 0;
  *(undefined4 *)((int)this + 0x5c8) = 0x14;
  return this;
}


//// FUNCTION FUN_00666e10 @ 00666e10 ////

undefined4 * __thiscall FUN_00666e10(void *this,byte param_1)

{
  FUN_00666e30(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_00666e30 @ 00666e30 ////

void __fastcall FUN_00666e30(undefined4 *param_1)

{
  if (0x14 < (uint)param_1[0x172]) {
                    /* WARNING: Subroutine does not return */
    _free((void *)param_1[0x170]);
  }
  FUN_006602c0(param_1);
  return;
}


//// FUNCTION FUN_00666e60 @ 00666e60 ////

void __fastcall FUN_00666e60(int *param_1)

{
  byte bVar1;
  undefined1 *local_4c;
  undefined4 local_48;
  uint local_44;
  undefined1 local_40 [20];
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3dd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00541a60(local_2c);
  local_4c = local_40;
  local_4 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_44 = 0x14;
  FUN_004015d0(&local_4c,(char *)param_1[0x170],param_1[0x171]);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0048ad50((int *)&local_4c);
  bVar1 = FUN_00541e50(local_2c,&local_4c,0);
  if (bVar1 == 0) {
    if (param_1[0x167] == 0) {
      FUN_0065df50(param_1);
    }
  }
  else if (param_1[0x167] != 0) {
    FUN_0065dbc0((int)param_1);
  }
  if (0x14 < local_44) {
                    /* WARNING: Subroutine does not return */
    _free(local_4c);
  }
  local_4 = 0xffffffff;
  FUN_00541870(local_2c);
  ExceptionList = local_c;
  return;
}


//// FUNCTION FUN_00666f60 @ 00666f60 ////

undefined4 __fastcall FUN_00666f60(int param_1)

{
  char *_Source;
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  char *local_188;
  uint local_184;
  uint local_180;
  char *local_168;
  undefined4 local_164;
  uint local_160;
  char local_15c [20];
  undefined1 *local_148;
  void *local_144 [2];
  uint local_13c;
  undefined4 local_124 [8];
  void *local_104 [2];
  uint local_fc;
  undefined4 local_e4 [54];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00cc3e17;
  local_c = ExceptionList;
  local_168 = local_15c;
  local_15c[0] = '\0';
  local_164 = 0;
  local_160 = 0x14;
  ExceptionList = &local_c;
  _strncpy(local_168,"Tutorials/tutorials",0x13);
  local_164 = 0x13;
  local_168[0x13] = '\0';
  local_4 = 0;
  FUN_0055c540(local_e4,&local_168);
  local_4._0_1_ = 2;
  if (0x14 < local_160) {
                    /* WARNING: Subroutine does not return */
    _free(local_168);
  }
  local_148 = &stack0xfffffe64;
  FUN_00541a60(local_124);
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar3 = FUN_00558a50(local_e4,(undefined4 *)(param_1 + 0x5e0),(undefined4 *)0x1);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_00558120(local_e4,0);
    cVar1 = (char)uVar3;
    while (cVar1 != '\0') {
      FUN_00558de0(local_e4,local_144);
      local_4 = CONCAT31(local_4._1_3_,4);
      uVar4 = FUN_00413450(local_144,"item",0,4);
      if ((uVar4 == 0) || (uVar4 = FUN_00413450(local_144,"text",0,4), uVar4 == 0)) {
        FUN_00558590(local_e4,&local_188,4);
        local_4 = CONCAT31(local_4._1_3_,5);
        uVar4 = FUN_00413450(&local_188,",",0,1);
        puVar5 = FUN_00430770(&local_188,local_104,0,uVar4);
        uVar4 = puVar5[1];
        _Source = (char *)*puVar5;
        if (local_180 <= uVar4) {
          if (0x14 < local_180) {
                    /* WARNING: Subroutine does not return */
            _free(local_188);
          }
          local_180 = uVar4 + 0x20 & 0xffffffe0;
          local_188 = _malloc(local_180);
        }
        _strncpy(local_188,_Source,uVar4);
        local_188[uVar4] = '\0';
        local_184 = uVar4;
        if (0x14 < local_fc) {
                    /* WARNING: Subroutine does not return */
          _free(local_104[0]);
        }
        uVar7 = 0;
        if (uVar4 != 0) {
          do {
            iVar6 = _tolower((int)local_188[uVar7]);
            local_188[uVar7] = (char)iVar6;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_184);
        }
        bVar2 = FUN_00541e50(local_124,&local_188,0);
        if (bVar2 == 0) {
          if (0x14 < local_180) {
                    /* WARNING: Subroutine does not return */
            _free(local_188);
          }
          if (local_13c < 0x15) {
            local_4 = CONCAT31(local_4._1_3_,2);
            FUN_00541870(local_124);
            local_4 = 0xffffffff;
            uVar4 = FUN_00558920(local_e4);
            ExceptionList = local_c;
            return uVar4 & 0xffffff00;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_144[0]);
        }
        if (0x14 < local_180) {
                    /* WARNING: Subroutine does not return */
          _free(local_188);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,3);
      if (0x14 < local_13c) {
                    /* WARNING: Subroutine does not return */
        _free(local_144[0]);
      }
      uVar3 = FUN_00558120(local_e4,2);
      cVar1 = (char)uVar3;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00541870(local_124);
  local_4 = 0xffffffff;
  uVar3 = FUN_00558920(local_e4);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


//// FUNCTION FUN_00667260 @ 00667260 ////

void __thiscall FUN_00667260(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 0x5c0),(char *)*param_1,param_1[1]);
  FUN_00666c90(this);
  return;
}


//// FUNCTION FUN_006672b0 @ 006672b0 ////

void __thiscall FUN_006672b0(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 0x5c0),(char *)*param_1,param_1[1]);
  FUN_00666e60(this);
  return;
}


//// FUNCTION FUN_00667300 @ 00667300 ////

void __fastcall FUN_00667300(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00666f60((int)param_1);
  if ((char)uVar1 == '\0') {
    if (param_1[0x167] == 0) {
      FUN_0065df50(param_1);
    }
  }
  else if (param_1[0x167] != 0) {
    FUN_0065dbc0((int)param_1);
    return;
  }
  return;
}


//// FUNCTION FUN_00667350 @ 00667350 ////

void __thiscall FUN_00667350(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_004015d0((void *)((int)this + 0x5e0),(char *)*param_1,param_1[1]);
  uVar1 = FUN_00666f60((int)this);
  if ((char)uVar1 == '\0') {
    if (*(int *)((int)this + 0x59c) == 0) {
      FUN_0065df50(this);
    }
  }
  else if (*(int *)((int)this + 0x59c) != 0) {
    FUN_0065dbc0((int)this);
    return;
  }
  return;
}


//// FUNCTION FUN_006673c0 @ 006673c0 ////

void __fastcall FUN_006673c0(int *param_1)

{
  FUN_0053d3a0();
  if (0 < param_1[0xd2]) {
    (**(code **)(*param_1 + 200))(1);
    param_1[0xd1] = param_1[0xd1] & 0xfffffffe;
    return;
  }
  if ((*(byte *)(param_1 + 0xd1) & 1) == 0) {
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*param_1 + 0xcc))(0);
  }
  param_1[0xd1] = param_1[0xd1] & 0xfffffffe;
  return;
}


//// FUNCTION FUN_006674c0 @ 006674c0 ////

undefined4 __fastcall FUN_006674c0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x37c) != 0) ||
     (uVar1 = 0, (~(byte)(*(uint *)(param_1 + 0x344) >> 1) & 1) != 0)) {
    uVar1 = FUN_00470a70(DAT_0104917c,*(int *)(param_1 + 0x37c),*(undefined4 *)(param_1 + 0x364),
                         *(undefined4 *)(param_1 + 0x394),0);
  }
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}


//// FUNCTION FUN_00667560 @ 00667560 ////

void __fastcall FUN_00667560(int *param_1)

{
  int iVar1;
  
  FUN_0053d480((int)param_1);
  if ((undefined4 *)param_1[0xd8] == (undefined4 *)0x0) {
    if (param_1[0xd9] != 0) {
      iVar1 = FUN_006a3800(param_1[0xdf],param_1[0xd9],param_1[0xe5]);
      (**(code **)(param_1[0xd3] + 4))();
      param_1[0xd8] = iVar1;
      (**(code **)param_1[0xd3])();
      if (param_1[0xd8] != 0) {
        param_1[0xd2] = 5;
        WWindow_Tick(param_1);
        return;
      }
    }
  }
  else {
    iVar1 = param_1[0xd2];
    param_1[0xd2] = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (*(code *)**(undefined4 **)param_1[0xd8])(1);
      (**(code **)(param_1[0xd3] + 4))();
      param_1[0xd8] = 0;
      (**(code **)param_1[0xd3])();
      if ((param_1[0xdf] != 0) || ((~(byte)((uint)param_1[0xd1] >> 1) & 1) != 0)) {
        FUN_00470a70(DAT_0104917c,param_1[0xdf],param_1[0xd9],param_1[0xe5],0);
      }
    }
  }
  WWindow_Tick(param_1);
  return;
}


//// FUNCTION FUN_00667700 @ 00667700 ////

undefined4 * __fastcall FUN_00667700(undefined4 *param_1)

{
  FUN_007432f0(param_1);
  *param_1 = &PTR_FUN_00d34c54;
  param_1[0x14] = &PTR_FUN_00d34c38;
  param_1[0xd6] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd8] = 0;
  param_1[0xd3] = &PTR_LAB_00d1b944;
  param_1[0xd6] = param_1 + 0xd3;
  param_1[0xdd] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdf] = 0;
  param_1[0xda] = &PTR_FUN_00d1a200;
  param_1[0xdd] = param_1 + 0xda;
  param_1[0xe3] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe5] = 0;
  param_1[0xe3] = param_1 + 0xe0;
  param_1[0xe0] = &PTR_FUN_00d1a200;
  param_1[0xd9] = 0;
  param_1[0xd1] = param_1[0xd1] & 0xfffffffc;
  param_1[0x45] = param_1[0x45] | 8;
  param_1[0xd2] = 0xffffffff;
  return param_1;
}


//// FUNCTION FUN_006677d0 @ 006677d0 ////

undefined4 * __thiscall FUN_006677d0(void *this,byte param_1)

{
  FUN_005f30d0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}


//// FUNCTION FUN_006677f0 @ 006677f0 ////

void __thiscall FUN_006677f0(void *this,undefined4 param_1)

{
  (**(code **)(**(int **)((int)this + 0x344) + 0x74))(param_1,param_1);
  (**(code **)(*(int *)this + 0x84))(0);
  return;
}


//// FUNCTION FUN_00667820 @ 00667820 ////

uint __fastcall FUN_00667820(int param_1)

{
  return *(uint *)(param_1 + 0x348) & 1;
}


//// FUNCTION FUN_006678d0 @ 006678d0 ////

void __thiscall FUN_006678d0(void *this,byte param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x348);
  if ((uVar1 & 1) != (uint)param_1) {
    uVar1 = (param_1 ^ uVar1) & 1 ^ uVar1;
    *(uint *)((int)this + 0x348) = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_0069f100(*(void **)((int)this + 0x344),(int *)((int)this + 0x34c),0,0,0x3f800000,
                   0x3f800000);
      return;
    }
    FUN_0069f100(*(void **)((int)this + 0x344),(int *)((int)this + 0x36c),0,0,0x3f800000,0x3f800000)
    ;
  }
  return;
}


//// FUNCTION FUN_006679e0 @ 006679e0 ////

void __thiscall FUN_006679e0(void *this,undefined4 *param_1)

{
  FUN_004015d0((void *)((int)this + 0x38c),(char *)*param_1,param_1[1]);
  return;
}


